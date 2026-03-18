/*
 * XREFs of MiSafeLockPage @ 0x140216290
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020AC60 (MiLockMultipleZeroChunks.c)
 *     MiMapBackgroundPagesToZero @ 0x14020B740 (MiMapBackgroundPagesToZero.c)
 *     MiReleaseArbitraryPage @ 0x14020BF38 (MiReleaseArbitraryPage.c)
 *     MiComputeCombineHash @ 0x14020C3A0 (MiComputeCombineHash.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140309490 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiMapArbitraryPage @ 0x140313BE8 (MiMapArbitraryPage.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x14036A110 (MiAddToReservationCluster.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiFillNoReservationCluster @ 0x14036A7DC (MiFillNoReservationCluster.c)
 *     MiCopySinglePage @ 0x140395C54 (MiCopySinglePage.c)
 *     MiSetPageZeroInProgress @ 0x14041E500 (MiSetPageZeroInProgress.c)
 *     MiCapturePfnVm @ 0x14045B3C4 (MiCapturePfnVm.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiMapSystemCachePage @ 0x1404C9858 (MiMapSystemCachePage.c)
 *     MiFreeModifiedReservations @ 0x1404F8E8C (MiFreeModifiedReservations.c)
 *     MiReferencePagePartition @ 0x140673404 (MiReferencePagePartition.c)
 *     MiRemoveBadPages @ 0x14067406C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140674990 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067B474 (MiMarkFileOnlyPfnBad.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068BD08 (MiMoveModifiedPagesToCompressList.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 *     MmIsMdlPageLocked @ 0x140BA46F8 (MmIsMdlPageLocked.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockPage(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi

  if ( a1 > qword_140E2DBE0 && (a1 < qword_140E35B00 || a1 >= qword_140E35B00 + 2048) )
    return 17;
  v4 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  if ( (*(_QWORD *)(v4 + 40) & 0x40000000000000LL) != 0 || (unsigned int)MiIsDecayPfn(a1) )
  {
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    return CurrentIrql;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 17;
  }
}
