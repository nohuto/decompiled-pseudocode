/*
 * XREFs of EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01AB8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionExtensibility_WakeMITForInterceptCallout(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(SGDGetUserSessionState(a1) + 15976), 1, 1) )
    return 0LL;
  EtwTraceWakeMIT(4LL);
  return (unsigned __int8)WakeMIT(4LL);
}
