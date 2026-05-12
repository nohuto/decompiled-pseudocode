/*
 * XREFs of WPP_SF_dddd @ 0x140075ED8
 * Callers:
 *     StorPortDeviceBusy @ 0x14003DC40 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_befb7ec21e9436c8e96fa3f853ba0056_Traceguids);
}
