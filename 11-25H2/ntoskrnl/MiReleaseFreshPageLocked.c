/*
 * XREFs of MiReleaseFreshPageLocked @ 0x140342C10
 * Callers:
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x14033F5DC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiTradePage @ 0x140341930 (MiTradePage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDemoteSlabEntry @ 0x1403B7C60 (MiDemoteSlabEntry.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1404C22F8 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiFreeLargeInitializationCodePages @ 0x14065F290 (MiFreeLargeInitializationCodePages.c)
 *     MiRepointPteAtExtendedStandby @ 0x1406795EC (MiRepointPteAtExtendedStandby.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 */

__int64 __fastcall MiReleaseFreshPageLocked(__int64 a1)
{
  return MiReturnFreeZeroPage(a1, 0LL);
}
