/*
 * XREFs of MiPerformFinalZeroing @ 0x1404F5E44
 * Callers:
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiGetPteLink @ 0x1403A7E10 (MiGetPteLink.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 */

void __fastcall MiPerformFinalZeroing(unsigned __int64 *a1, int a2, int a3)
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
