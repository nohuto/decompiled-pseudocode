/*
 * XREFs of ??1?$CSparseAlignedStorage@$07$07@@QEAA@XZ @ 0x1801096F8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CSparseAlignedStorage<8,8>::~CSparseAlignedStorage<8,8>(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  v2 = &_pfnDefaultDliFailureHook2;
  if ( *a1 != &_pfnDefaultDliFailureHook2 && v1 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v2) = HeapFree(ProcessHeap, 0, v1);
  }
  return (int)v2;
}
