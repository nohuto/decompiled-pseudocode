/*
 * XREFs of WPP_SF_qdd @ 0x140067E1C
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x140027100 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids);
}
