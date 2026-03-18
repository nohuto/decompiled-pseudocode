/*
 * XREFs of CmSiProtectViewOfSection @ 0x14046A844
 * Callers:
 *     HvpViewMapMigrateCOWData @ 0x1407DEE3C (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapCreateView @ 0x14097FA0C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x14097FC30 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x14097FD44 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14097FE30 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140980000 (HvpViewMapMakeViewRangeValid.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140984448 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140984538 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140984600 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1406A6E10 (ZwProtectVirtualMemory.c)
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
