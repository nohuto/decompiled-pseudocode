/*
 * XREFs of MiGetPfnSlabType @ 0x1402170E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402090B8 (MiWaitForInPageComplete.c)
 *     MiCombineCandidate @ 0x140210C20 (MiCombineCandidate.c)
 *     MiLockStandbyLookasidePage @ 0x140212E20 (MiLockStandbyLookasidePage.c)
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x140215040 (MiFindSuitableLookasideReplacement.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140216890 (MiInsertSecondaryListStandbyPage.c)
 *     MiSynchronizeFastPageInsert @ 0x140217140 (MiSynchronizeFastPageInsert.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiLockStealSystemVm @ 0x140218E00 (MiLockStealSystemVm.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiTradeTransitionPage @ 0x14022A82C (MiTradeTransitionPage.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiInsertProtectedStandbyPage @ 0x14023C818 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x14023C950 (MiReplaceSecondaryListStandbyPage.c)
 *     MiCanBatchHardFaultPages @ 0x14023E1D4 (MiCanBatchHardFaultPages.c)
 *     MiSharedInsertPfnChainInList @ 0x14023EE90 (MiSharedInsertPfnChainInList.c)
 *     MiAgePteWorker @ 0x140248780 (MiAgePteWorker.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MiFreeMdlPageRun @ 0x14038C69C (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiLockStandbyOldestPage @ 0x1403ED798 (MiLockStandbyOldestPage.c)
 *     MiSkipStandbyEntries @ 0x1403EDC90 (MiSkipStandbyEntries.c)
 *     MiGetStandbyPageType @ 0x1403EDEA0 (MiGetStandbyPageType.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     MiReplaceLockedPage @ 0x1403FE3AC (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiBetterDriverPageNeeded @ 0x14040022C (MiBetterDriverPageNeeded.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     MiPurgeSlabEntry @ 0x140481BF0 (MiPurgeSlabEntry.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14048AE28 (MiKernelShadowStackIdealForCaching.c)
 *     MiFinalizeImageHeaderPage @ 0x1404A1818 (MiFinalizeImageHeaderPage.c)
 *     MiIsFreeSlabPage @ 0x1404F8B74 (MiIsFreeSlabPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiCheckContiguityTradeEligible @ 0x14067551C (MiCheckContiguityTradeEligible.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1406852F0 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C45608 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnSlabType(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_140E3C8A6 )
    return 9LL;
  result = (unsigned int)*(unsigned __int8 *)(qword_140E3CF00
                                            + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9))
         - 1;
  if ( !*(_BYTE *)(qword_140E3CF00 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9)) )
    return 9LL;
  return result;
}
