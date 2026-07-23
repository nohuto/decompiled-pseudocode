/*
 * XREFs of MiChangePageAttributeAndZeroBatch @ 0x1402708E0
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 */

__int64 __fastcall MiChangePageAttributeAndZeroBatch(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a2 )
  {
    v9 = (*(_DWORD *)(a2 + 16) >> 3) & 1;
  }
  else
  {
    result = KeGetCurrentIrql();
    v9 = (_BYTE)result == 2;
  }
  if ( *a1 != 0x7FFFFFFFFFLL )
    result = MiChangePageAttributeBatch(a1, a3, a4, v9);
  if ( a2 )
  {
    if ( a1[2] != 0x7FFFFFFFFFLL )
      result = MiChangePageAttributeBatch(a1 + 2, 1LL, -1LL, v9);
    if ( *(_DWORD *)(a2 + 40) )
      result = MiZeroInParallel(a2);
    if ( a1[2] != 0x7FFFFFFFFFLL )
      result = MiChangePageAttributeBatch(a1 + 2, 3LL, a4, v9);
    if ( a1[3] != 0x7FFFFFFFFFLL )
      result = MiChangePageAttributeBatch(a1 + 3, 3LL, a4, v9);
    if ( a1[1] != 0x7FFFFFFFFFLL )
      return MiChangePageAttributeBatch(a1 + 1, a3, a4, v9);
  }
  return result;
}
