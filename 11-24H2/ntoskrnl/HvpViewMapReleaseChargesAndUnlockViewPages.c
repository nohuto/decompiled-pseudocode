/*
 * XREFs of HvpViewMapReleaseChargesAndUnlockViewPages @ 0x14096CF10
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14096CC58 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14096CD48 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x14096CE10 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x1404891B0 (CmSiUnlockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesAndUnlockViewPages(ULONG_PTR a1, void **a2, void *a3, ULONG_PTR a4)
{
  CmSiUnlockViewOfSection(a1, a2, a3, a4);
  return CmSiReleaseProcessLockedPagesCharge(a2, a4);
}
