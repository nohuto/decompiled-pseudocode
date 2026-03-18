/*
 * XREFs of WPP_SF_q @ 0x1400049FC
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x14000D240 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_q(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_8f5427380d7633b566e62dbddd286985_Traceguids);
}
