/*
 * XREFs of ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x180049C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ??1CWin32Heap@ATL@@UEAA@XZ @ 0x18001FA28 (--1CWin32Heap@ATL@@UEAA@XZ.c)
 */

ATL::CWin32Heap *__fastcall ATL::CWin32Heap::`vector deleting destructor'(ATL::CWin32Heap *this, char a2)
{
  ATL::CWin32Heap::~CWin32Heap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
