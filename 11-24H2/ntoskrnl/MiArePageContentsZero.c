/*
 * XREFs of MiArePageContentsZero @ 0x1404C33B0
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14033D370 (MiGetPerfectFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x14033DDB0 (MiSlistGetFreePage.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiCreateSystemPageTable @ 0x14038EDA0 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPageNotZero @ 0x14067507C (MiPageNotZero.c)
 *     KeCheckForZeroPage @ 0x1406B4250 (KeCheckForZeroPage.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  int v6; // ecx
  __int64 v7; // rbx
  ULONG_PTR v8; // rbp
  __int64 v9; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v6 = (unsigned __int8)BYTE2(*(_DWORD *)(v4 + 32)) >> 6;
    if ( v6 != 3 )
    {
      if ( v6 != 1 && (v7 = 16LL, v2 > 0x10) || (v7 = v2) != 0 )
      {
        do
        {
          if ( (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 && !MiIsPageOnBadList(v4) )
          {
            v8 = MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
            if ( KeCheckForZeroPage(v8) )
              MiPageNotZero(v8, v3);
            MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0);
          }
          v4 += 48LL;
          ++v3;
          if ( (--v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            if ( CurrentIrql == 2 )
              break;
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(CurrentIrql);
            v9 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = 2;
              KiRaiseIrqlProcessIrqlFlags(v9, a2);
            }
          }
        }
        while ( v7 );
      }
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
