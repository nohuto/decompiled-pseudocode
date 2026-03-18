/*
 * XREFs of MiDiscardTransitionPteEx @ 0x1402C5640
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiCombineWithStandbyExisting @ 0x140224A84 (MiCombineWithStandbyExisting.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1402C5DA4 (MiGetRepurposedSlabStandbyPage.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiRepurposeStandbySlabPage @ 0x1403B9694 (MiRepurposeStandbySlabPage.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiMirrorPerformBrownWrites @ 0x140455630 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeSlabEntry @ 0x140481BF0 (MiPurgeSlabEntry.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x1404CAA48 (MiRelinkTransitionSlabPages.c)
 *     MiWalkResetCommitPte @ 0x14065EF40 (MiWalkResetCommitPte.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1)
{
  ULONG_PTR v2; // rdi

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  MiRestoreTransitionPte(a1, 0);
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList(v2);
}
