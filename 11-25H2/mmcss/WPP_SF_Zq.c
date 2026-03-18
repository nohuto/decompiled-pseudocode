/*
 * XREFs of WPP_SF_Zq @ 0x1C00048E8
 * Callers:
 *     CiDispatchInitialize @ 0x1C000F670 (CiDispatchInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_Zq(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids);
}
