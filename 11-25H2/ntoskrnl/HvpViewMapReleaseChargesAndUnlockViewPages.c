/*
 * XREFs of HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140A40714
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140A4045C (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140A4054C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140A40614 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x14048F8C4 (CmSiUnlockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesAndUnlockViewPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  CmSiUnlockViewOfSection(a1, a2, a3, a4);
  return CmSiReleaseProcessLockedPagesCharge(a2, a4);
}
