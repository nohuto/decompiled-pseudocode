/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x140220DD0
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x1402201D0 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiZeroChainWorker @ 0x1402242C4 (MiZeroChainWorker.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiLargePfnPromoteCandidate @ 0x1403506F0 (MiLargePfnPromoteCandidate.c)
 *     MiInsertDemotedPages @ 0x140386CE0 (MiInsertDemotedPages.c)
 *     MiConvertActiveLargePageToSmall @ 0x14038A558 (MiConvertActiveLargePageToSmall.c)
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiFinishLargePageFree @ 0x14038D7E8 (MiFinishLargePageFree.c)
 *     MiGetFastLargePages @ 0x140392454 (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1403932CC (MiFindLargeNodePage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14041753C (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetPageZeroInProgress @ 0x1404328F0 (MiSetPageZeroInProgress.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiFreeListPageContentsChanged @ 0x140434170 (MiFreeListPageContentsChanged.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiLargePageHasNoDanglingReferences @ 0x14047A7C4 (MiLargePageHasNoDanglingReferences.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 *     MiConvertLargeFreePageToActive @ 0x14049FCE4 (MiConvertLargeFreePageToActive.c)
 *     MiMirrorRemoveInactivePages @ 0x1404A2958 (MiMirrorRemoveInactivePages.c)
 *     MiFreeLargePages @ 0x1404BB340 (MiFreeLargePages.c)
 *     MiPurgeZeroListHead @ 0x1404C5F04 (MiPurgeZeroListHead.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5EE8 (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiSetPfnRemovalRequested @ 0x140668B70 (MiSetPfnRemovalRequested.c)
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x1406789D8 (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140678A8C (MiGetPagesRemainingInResidentPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x1406813E4 (MiCoalesceActivePagesIntoFree.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x14068777C (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiScrubLargePageRegions @ 0x1406EC948 (MiScrubLargePageRegions.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPageSizeIndex(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 )
    return 3LL;
  result = 3 - ((*(_DWORD *)(a1 + 36) >> 27) & 3u);
  if ( (_DWORD)result == 3 )
    return 3LL;
  return result;
}
