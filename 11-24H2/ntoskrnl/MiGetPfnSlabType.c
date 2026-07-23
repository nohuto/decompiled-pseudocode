/*
 * XREFs of MiGetPfnSlabType @ 0x140300F20
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiLockStandbyLookasidePage @ 0x140221890 (MiLockStandbyLookasidePage.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x140222B60 (MiFindSuitableLookasideReplacement.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiSharedInsertPfnChainInList @ 0x140225270 (MiSharedInsertPfnChainInList.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceSecondaryListStandbyPage @ 0x1402568F0 (MiReplaceSecondaryListStandbyPage.c)
 *     MiCanBatchHardFaultPages @ 0x140258170 (MiCanBatchHardFaultPages.c)
 *     MiLockStealSystemVm @ 0x1402FD650 (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiLockStandbyOldestPage @ 0x1403E71A8 (MiLockStandbyOldestPage.c)
 *     MiSkipStandbyEntries @ 0x1403E76A0 (MiSkipStandbyEntries.c)
 *     MiGetStandbyPageType @ 0x1403E78B0 (MiGetStandbyPageType.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiBetterDriverPageNeeded @ 0x140471FB0 (MiBetterDriverPageNeeded.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140473F28 (MiKernelShadowStackIdealForCaching.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     MiPurgeSlabEntry @ 0x14047DBD4 (MiPurgeSlabEntry.c)
 *     MiFinalizeImageHeaderPage @ 0x1404998B8 (MiFinalizeImageHeaderPage.c)
 *     MiIsFreeSlabPage @ 0x1404F8AD4 (MiIsFreeSlabPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066BFA0 (MiFreeLargeInitializationCodePages.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiCheckContiguityTradeEligible @ 0x140681EE8 (MiCheckContiguityTradeEligible.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140691820 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C58A78 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnSlabType(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_140E3CC26 )
    return 9LL;
  result = (unsigned int)*(unsigned __int8 *)(qword_140E3D280
                                            + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9))
         - 1;
  if ( !*(_BYTE *)(qword_140E3D280 + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) >> 9)) )
    return 9LL;
  return result;
}
