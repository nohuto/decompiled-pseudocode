/*
 * XREFs of MiChangePageAttributeAndZeroBatch @ 0x140417430
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x1404168F8 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiZeroInParallel @ 0x140418028 (MiZeroInParallel.c)
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
