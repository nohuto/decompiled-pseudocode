/*
 * XREFs of WPP_SF_qLL @ 0x14006AF40
 * Callers:
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qLL(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_cd59b0b4142e33753252084084bd022f_Traceguids);
}
