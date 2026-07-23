/*
 * XREFs of PpmCheckReportComplete @ 0x140458590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char PpmCheckReportComplete()
{
  if ( PpmCheckCompleteHandler )
    guard_dispatch_icall_no_overrides(PpmPerfGlobalContext, PpmCheckTime);
  return 1;
}
