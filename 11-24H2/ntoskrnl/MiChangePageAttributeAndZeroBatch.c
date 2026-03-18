/*
 * XREFs of MiChangePageAttributeAndZeroBatch @ 0x140414984
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404133A0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A92A7C (MiFindLargePageMemory.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiZeroInParallel @ 0x1404155D0 (MiZeroInParallel.c)
 */

void __fastcall MiChangePageAttributeAndZeroBatch(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // edi

  if ( a2 )
    v8 = (*(_DWORD *)(a2 + 16) >> 3) & 1;
  else
    v8 = KeGetCurrentIrql() == 2;
  if ( *a1 != 0x7FFFFFFFFFLL )
    MiChangePageAttributeBatch(a1, a3, a4, v8);
  if ( a2 )
  {
    if ( a1[2] != 0x7FFFFFFFFFLL )
      MiChangePageAttributeBatch(a1 + 2, 1, -1LL, v8);
    if ( *(_DWORD *)(a2 + 40) )
      MiZeroInParallel(a2);
    if ( a1[2] != 0x7FFFFFFFFFLL )
      MiChangePageAttributeBatch(a1 + 2, 3, a4, v8);
    if ( a1[3] != 0x7FFFFFFFFFLL )
      MiChangePageAttributeBatch(a1 + 3, 3, a4, v8);
    if ( a1[1] != 0x7FFFFFFFFFLL )
      MiChangePageAttributeBatch(a1 + 1, a3, a4, v8);
  }
}
