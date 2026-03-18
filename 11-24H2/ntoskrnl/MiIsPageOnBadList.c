/*
 * XREFs of MiIsPageOnBadList @ 0x14030492C
 * Callers:
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiConfirmCombinePageContents @ 0x140314938 (MiConfirmCombinePageContents.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiCopyHeaderIfResident @ 0x1404765F4 (MiCopyHeaderIfResident.c)
 *     MiMakePageBad @ 0x14047C9DC (MiMakePageBad.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     MmTryIdentifyPage @ 0x14067287C (MmTryIdentifyPage.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067406C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiTransferPartitionPageRun @ 0x14068B4FC (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
