#ifndef Module.h
#define	Module.h


#pragma once
#include <iostream>
using namespace  std;

void printLine() {
	cout << "=====================================================\n";
}
template <class T>
void bitesMemory(T input) {
	T temp = sizeof(input);
	cout << temp << endl;

 }
#endif 

