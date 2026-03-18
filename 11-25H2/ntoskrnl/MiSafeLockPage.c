/*
 * XREFs of MiSafeLockPage @ 0x140231E30
 * Callers:
 *     MiLockMultipleZeroChunks @ 0x14020F970 (MiLockMultipleZeroChunks.c)
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiReleaseArbitraryPage @ 0x140210A60 (MiReleaseArbitraryPage.c)
 *     MiComputeCombineHash @ 0x140210ED0 (MiComputeCombineHash.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiMapArbitraryPage @ 0x14022492C (MiMapArbitraryPage.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x14034F7E0 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCopySinglePage @ 0x140377E44 (MiCopySinglePage.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiAddToReservationCluster @ 0x14040D120 (MiAddToReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x14040D3B0 (MiFillNoReservationCluster.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiSetPageZeroInProgress @ 0x1404328F0 (MiSetPageZeroInProgress.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiCapturePfnVm @ 0x14045C04C (MiCapturePfnVm.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiMakePageBad @ 0x14047BA9C (MiMakePageBad.c)
 *     MiMapSystemCachePage @ 0x1404C945C (MiMapSystemCachePage.c)
 *     MiFreeModifiedReservations @ 0x1404F6770 (MiFreeModifiedReservations.c)
 *     MiReferencePagePartition @ 0x1406679A4 (MiReferencePagePartition.c)
 *     MiRemoveBadPages @ 0x14066860C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140668F30 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x140669050 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     MiMarkFileOnlyPfnBad @ 0x14066FCB4 (MiMarkFileOnlyPfnBad.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140680478 (MiMoveModifiedPagesToCompressList.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 *     MmIsMdlPageLocked @ 0x140B94718 (MmIsMdlPageLocked.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MiSafeLockPage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi

  if ( a1 > qword_140E2D9A0 && !(unsigned int)MiIsDecayPfn(a1, a2, a3) )
    return 17;
  v4 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (*(_QWORD *)(v4 + 40) & 0x40000000000000LL) != 0 || (unsigned int)MiIsDecayPfn(a1, a2, a3) )
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
