/*
 * XREFs of CmSiProtectViewOfSection @ 0x14046BB00
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407CF564 (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x140881A14 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140881B00 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140882F88 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140884E10 (HvpViewMapCreateView.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140A4045C (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140A4054C (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140A40614 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x14069BB40 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall CmSiProtectViewOfSection(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, a5, a6);
}
