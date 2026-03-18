/*
 * XREFs of MiGetPfnSlabType @ 0x14022D610
 * Callers:
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x14022A3E0 (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x14022D9F0 (MiSynchronizeFastPageInsert.c)
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiLockStandbyLookasidePage @ 0x14026C300 (MiLockStandbyLookasidePage.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x14026D5D0 (MiFindSuitableLookasideReplacement.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     MiSharedInsertPfnChainInList @ 0x14026FCE0 (MiSharedInsertPfnChainInList.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402F0DB0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiCanBatchHardFaultPages @ 0x1402F2630 (MiCanBatchHardFaultPages.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14039F0B8 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiLockStandbyOldestPage @ 0x1403F41B8 (MiLockStandbyOldestPage.c)
 *     MiSkipStandbyEntries @ 0x1403F46B0 (MiSkipStandbyEntries.c)
 *     MiGetStandbyPageType @ 0x1403F48C0 (MiGetStandbyPageType.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiBetterDriverPageNeeded @ 0x140475F10 (MiBetterDriverPageNeeded.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140477930 (MiKernelShadowStackIdealForCaching.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     MiPurgeSlabEntry @ 0x1404829DC (MiPurgeSlabEntry.c)
 *     MiFinalizeImageHeaderPage @ 0x14049EAB8 (MiFinalizeImageHeaderPage.c)
 *     MiIsFreeSlabPage @ 0x1404FB1F4 (MiIsFreeSlabPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiCheckContiguityTradeEligible @ 0x140680D3C (MiCheckContiguityTradeEligible.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140690750 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnSlabType(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_140E3CAE6 )
    return 9LL;
  result = (unsigned int)*(unsigned __int8 *)(qword_140E3D140
                                            + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9))
         - 1;
  if ( !*(_BYTE *)(qword_140E3D140 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9)) )
    return 9LL;
  return result;
}
