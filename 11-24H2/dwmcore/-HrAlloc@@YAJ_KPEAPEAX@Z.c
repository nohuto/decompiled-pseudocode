/*
 * XREFs of ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x1801D6188
 * Callers:
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802B367C (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HrAlloc(SIZE_T dwBytes, void **a2)
{
  unsigned int v2; // ebx
  HANDLE ProcessHeap; // rax
  void *v6; // rax

  v2 = 0;
  if ( a2 && dwBytes )
  {
    ProcessHeap = GetProcessHeap();
    v6 = HeapAlloc(ProcessHeap, 0, dwBytes);
    *a2 = v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
