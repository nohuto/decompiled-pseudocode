/*
 * XREFs of HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140984700
 * Callers:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140984448 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140984538 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140984600 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiUnlockViewOfSection @ 0x14048EDB8 (CmSiUnlockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapReleaseChargesAndUnlockViewPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  CmSiUnlockViewOfSection(a1, a2, a3, a4);
  return CmSiReleaseProcessLockedPagesCharge(a2, a4);
}
