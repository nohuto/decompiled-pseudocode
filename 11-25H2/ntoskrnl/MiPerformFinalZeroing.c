/*
 * XREFs of MiPerformFinalZeroing @ 0x1404F5DB0
 * Callers:
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiGetPteLink @ 0x1403B7C30 (MiGetPteLink.c)
 */

void __fastcall MiPerformFinalZeroing(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rdi
  unsigned __int64 PteLink; // rbx

  v3 = *a1;
  MiChangePageAttributeBatch(a1, a2, -1LL, a3);
  if ( v3 != 0x7FFFFFFFFFLL )
  {
    do
    {
      v6 = 48 * v3 - 0x220000000000LL;
      PteLink = MiGetPteLink(*(_QWORD *)(v6 + 16));
      MiZeroPhysicalPage(0LL, v3, 0, a2);
      v3 = PteLink;
      MiSetPfnTbFlushStamp(v6, 0LL, 0);
      *(_QWORD *)(v6 + 16) = CLFS_LSN_NULL_EXT;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
  }
  a1[1] = 0LL;
  *a1 = 0x7FFFFFFFFFLL;
}
