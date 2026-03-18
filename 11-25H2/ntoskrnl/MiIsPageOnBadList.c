/*
 * XREFs of MiIsPageOnBadList @ 0x14021E29C
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiConfirmCombinePageContents @ 0x1402252E0 (MiConfirmCombinePageContents.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 *     MiMakePageBad @ 0x14047BA9C (MiMakePageBad.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MmTryIdentifyPage @ 0x140666DCC (MmTryIdentifyPage.c)
 *     MiGetListOfPendingBadPages @ 0x140668070 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14066860C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x140669050 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
