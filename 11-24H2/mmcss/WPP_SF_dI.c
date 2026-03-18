/*
 * XREFs of WPP_SF_dI @ 0x140004D48
 * Callers:
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140005A10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_dI(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_29026e0d014631895ac1404d49971dec_Traceguids);
}
