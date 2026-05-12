/*
 * XREFs of WPP_SF_ddi @ 0x140140960
 * Callers:
 *     ParseSecretProtection @ 0x140140530 (ParseSecretProtection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_ddi(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_23f3f4b30f18360abc2b8cd6e59d0a71_Traceguids);
}
