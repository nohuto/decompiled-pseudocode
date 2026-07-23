/*
 * XREFs of MiDiscardTransitionPteEx @ 0x1402188CC
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x140218448 (MiGetRepurposedSlabStandbyPage.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiRepurposeStandbySlabPage @ 0x1403F80A4 (MiRepurposeStandbySlabPage.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x14043BAD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x14043C4D4 (MiRelinkTransitionSlabPages.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MiPurgeSlabEntry @ 0x14047DBD4 (MiPurgeSlabEntry.c)
 *     MiWalkResetCommitPte @ 0x14066BBF0 (MiWalkResetCommitPte.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1)
{
  ULONG_PTR v2; // rdi

  v2 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  MiRestoreTransitionPte(a1);
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList(v2);
}
