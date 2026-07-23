/*
 * XREFs of MiIsPageOnBadList @ 0x14030E80C
 * Callers:
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiGetWorkingSetInfoList @ 0x14030D190 (MiGetWorkingSetInfoList.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiCopyHeaderIfResident @ 0x1403F0510 (MiCopyHeaderIfResident.c)
 *     MiConfirmCombinePageContents @ 0x1403F1C84 (MiConfirmCombinePageContents.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MmTryIdentifyPage @ 0x140673A4C (MmTryIdentifyPage.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MmGetPageBadStatus @ 0x140675C80 (MmGetPageBadStatus.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageOnBadList(__int64 a1)
{
  return (HIWORD(*(_DWORD *)(a1 + 32)) & 7) == 5 && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) == -4LL;
}
