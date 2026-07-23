/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x140310FA0
 * Callers:
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     MiFreeListPageContentsChanged @ 0x14021F138 (MiFreeListPageContentsChanged.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 *     MiProcessPageGroupInfo @ 0x1402709E8 (MiProcessPageGroupInfo.c)
 *     MiConvertLargeFreePageToActive @ 0x1402EDE58 (MiConvertLargeFreePageToActive.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiLargePfnPromoteCandidate @ 0x1403126B0 (MiLargePfnPromoteCandidate.c)
 *     MiZeroWithUltraSpace @ 0x140312E40 (MiZeroWithUltraSpace.c)
 *     MiZeroChainWorker @ 0x140314138 (MiZeroChainWorker.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiSetPageZeroInProgress @ 0x140414240 (MiSetPageZeroInProgress.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 *     MiLargePageHasNoDanglingReferences @ 0x140476464 (MiLargePageHasNoDanglingReferences.c)
 *     MiMirrorRemoveInactivePages @ 0x14049D2E8 (MiMirrorRemoveInactivePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1404A6B00 (MiInitializeLargeMdlLeafPfns.c)
 *     MiPurgeZeroListHead @ 0x1404BFBD4 (MiPurgeZeroListHead.c)
 *     MiFindLargeNodePage @ 0x1404CB09C (MiFindLargeNodePage.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5F7C (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x140685390 (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140685444 (MiGetPagesRemainingInResidentPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406855D0 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068DDA4 (MiCoalesceActivePagesIntoFree.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x140693CAC (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiScrubLargePageRegions @ 0x1406F60D4 (MiScrubLargePageRegions.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
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
