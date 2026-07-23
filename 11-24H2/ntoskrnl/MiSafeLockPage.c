/*
 * XREFs of MiSafeLockPage @ 0x140334630
 * Callers:
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x1402EBEB0 (MiAddToReservationCluster.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiFillNoReservationCluster @ 0x1402EC57C (MiFillNoReservationCluster.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiLockMultipleZeroChunks @ 0x140332A40 (MiLockMultipleZeroChunks.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiMapArbitraryPage @ 0x1403F0E90 (MiMapArbitraryPage.c)
 *     MiReleaseArbitraryPage @ 0x1403F0FF4 (MiReleaseArbitraryPage.c)
 *     MiCopySinglePage @ 0x1403F4224 (MiCopySinglePage.c)
 *     MiSetPageZeroInProgress @ 0x140414240 (MiSetPageZeroInProgress.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiCapturePfnVm @ 0x1404507C4 (MiCapturePfnVm.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     MiMapSystemCachePage @ 0x1404C2D08 (MiMapSystemCachePage.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 *     MiReferencePagePartition @ 0x1406745D4 (MiReferencePagePartition.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiMarkFileOnlyPfnBad @ 0x14067C654 (MiMarkFileOnlyPfnBad.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14068CE38 (MiMoveModifiedPagesToCompressList.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 *     MmIsMdlPageLocked @ 0x140BA66F8 (MmIsMdlPageLocked.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockPage(ULONG_PTR a1)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi

  if ( a1 > qword_140E2DD20 && (a1 < qword_140E35C40 || a1 >= qword_140E35C40 + 2048) )
    return 17;
  v2 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (*(_QWORD *)(v2 + 40) & 0x40000000000000LL) != 0 || MiIsDecayPfn(a1) )
  {
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v4);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v2 + 24) < 0 );
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
