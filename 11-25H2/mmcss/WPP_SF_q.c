/*
 * XREFs of WPP_SF_q @ 0x1C00049FC
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C000C240 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_q(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids);
}
