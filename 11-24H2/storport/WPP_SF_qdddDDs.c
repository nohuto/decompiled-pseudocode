/*
 * XREFs of WPP_SF_qdddDDs @ 0x140068E44
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14001B3B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_qdddDDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // rdx

  if ( a10 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(a10 + v10) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids);
}
