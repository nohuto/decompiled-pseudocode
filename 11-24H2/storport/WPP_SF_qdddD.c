/*
 * XREFs of WPP_SF_qdddD @ 0x140068DC0
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14001B3B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids);
}
