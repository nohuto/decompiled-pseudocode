/*
 * XREFs of PpmCheckReportComplete @ 0x140462F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmCheckReportComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( PpmCheckCompleteHandler )
    guard_dispatch_icall_no_overrides(PpmPerfGlobalContext, PpmCheckTime, a3, a4);
  return 1;
}
