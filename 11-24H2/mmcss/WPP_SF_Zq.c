/*
 * XREFs of WPP_SF_Zq @ 0x1400048E8
 * Callers:
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_8f5427380d7633b566e62dbddd286985_Traceguids);
}
