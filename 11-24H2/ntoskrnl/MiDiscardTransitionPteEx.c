/*
 * XREFs of MiDiscardTransitionPteEx @ 0x1403A1C98
 * Callers:
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x1403A18E8 (MiGetRepurposedSlabStandbyPage.c)
 *     MiRepurposeStandbySlabPage @ 0x1403A3810 (MiRepurposeStandbySlabPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiRelinkTransitionSlabPages @ 0x14044334C (MiRelinkTransitionSlabPages.c)
 *     MiMirrorPerformBrownWrites @ 0x140455840 (MiMirrorPerformBrownWrites.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MiPurgeSlabEntry @ 0x1404829DC (MiPurgeSlabEntry.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14066AA20 (MiWalkResetCommitPte.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
 */

int __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, int a2)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  MiRestoreTransitionPte(a1, 0);
  *(_QWORD *)(a1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(a1, v5, v6, v7);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList(v4, a2 | 2u);
}
