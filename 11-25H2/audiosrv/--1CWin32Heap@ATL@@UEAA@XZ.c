/*
 * XREFs of ??1CWin32Heap@ATL@@UEAA@XZ @ 0x1800A4DA4
 * Callers:
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x180145DB0 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ATL::_dynamic_atexit_destructor_for__g_strheap__ @ 0x180169C00 (ATL--_dynamic_atexit_destructor_for__g_strheap__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CWin32Heap::~CWin32Heap(ATL::CWin32Heap *this)
{
  bool v1; // zf
  void *v2; // rcx

  v1 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &ATL::CWin32Heap::`vftable';
  if ( !v1 )
  {
    v2 = (void *)*((_QWORD *)this + 1);
    if ( v2 )
      HeapDestroy(v2);
  }
}
