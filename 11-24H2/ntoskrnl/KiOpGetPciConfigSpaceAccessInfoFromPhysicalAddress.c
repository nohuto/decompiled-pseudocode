/*
 * XREFs of KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress @ 0x1404B20D0
 * Callers:
 *     KiOpCheckUnhandledSecurePciAccessViolation @ 0x1405C2898 (KiOpCheckUnhandledSecurePciAccessViolation.c)
 *     KiOpPciConfigSpaceAccessCommon @ 0x1405C2C3C (KiOpPciConfigSpaceAccessCommon.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int16 v6; // bx

  v6 = a1;
  if ( !off_140E00CA0[0] || !(unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2) )
    return 3221225473LL;
  *a6 = v6 & 0xFFF;
  return 0LL;
}
