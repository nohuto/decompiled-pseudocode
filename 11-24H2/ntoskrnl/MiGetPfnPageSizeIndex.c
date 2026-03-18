/*
 * XREFs of MiGetPfnPageSizeIndex @ 0x1403070C0
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiFreeListPageContentsChanged @ 0x140269BA8 (MiFreeListPageContentsChanged.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140306540 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiConvertLargeActivePageToChain @ 0x1403083C0 (MiConvertLargeActivePageToChain.c)
 *     MiLargePfnPromoteCandidate @ 0x1403087D0 (MiLargePfnPromoteCandidate.c)
 *     MiZeroWithUltraSpace @ 0x140308F60 (MiZeroWithUltraSpace.c)
 *     MiZeroChainWorker @ 0x14030A258 (MiZeroChainWorker.c)
 *     MiProcessPageGroupInfo @ 0x1403A2E30 (MiProcessPageGroupInfo.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 *     MiFreeLargePages @ 0x1403CC4F0 (MiFreeLargePages.c)
 *     MiGetFastLargePages @ 0x1403D5E44 (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1403D6288 (MiFindLargeNodePage.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140414A8C (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetPageZeroInProgress @ 0x14041E500 (MiSetPageZeroInProgress.c)
 *     MiConvertLargeFreePageToActive @ 0x14041F464 (MiConvertLargeFreePageToActive.c)
 *     MiConvertActiveLargePageToSmall @ 0x14041F5E8 (MiConvertActiveLargePageToSmall.c)
 *     MiDemoteLargeFreePage @ 0x14042F57C (MiDemoteLargeFreePage.c)
 *     MiInsertDemotedPages @ 0x14042F7AC (MiInsertDemotedPages.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiLargePageHasNoDanglingReferences @ 0x14047ADE4 (MiLargePageHasNoDanglingReferences.c)
 *     MiMirrorRemoveInactivePages @ 0x1404A2358 (MiMirrorRemoveInactivePages.c)
 *     MiPurgeZeroListHead @ 0x1404C6774 (MiPurgeZeroListHead.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F869C (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiSetPfnRemovalRequested @ 0x1406745D0 (MiSetPfnRemovalRequested.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiGetBaseResidentPageForBugCheck @ 0x140684264 (MiGetBaseResidentPageForBugCheck.c)
 *     MiGetPagesRemainingInResidentPage @ 0x140684318 (MiGetPagesRemainingInResidentPage.c)
 *     MiTryUnlinkNodeLargePages @ 0x1406844A4 (MiTryUnlinkNodeLargePages.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14068CC74 (MiCoalesceActivePagesIntoFree.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 *     MiNextPhysicallyContiguousPfnWorthTrying @ 0x140692BDC (MiNextPhysicallyContiguousPfnWorthTrying.c)
 *     MiScrubLargePageRegions @ 0x1406F80D4 (MiScrubLargePageRegions.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
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
