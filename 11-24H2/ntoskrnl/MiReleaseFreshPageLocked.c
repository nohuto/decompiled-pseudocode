/*
 * XREFs of MiReleaseFreshPageLocked @ 0x14044321C
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiTradePage @ 0x14022B650 (MiTradePage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14023C31C (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140442B00 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDemoteSlabEntry @ 0x140442F50 (MiDemoteSlabEntry.c)
 *     MiFreeLargeInitializationCodePages @ 0x14066ADD0 (MiFreeLargeInitializationCodePages.c)
 *     MiRepointPteAtExtendedStandby @ 0x140684E78 (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 */

__int64 __fastcall MiReleaseFreshPageLocked(__int64 a1)
{
  return MiReturnFreeZeroPage(a1);
}
