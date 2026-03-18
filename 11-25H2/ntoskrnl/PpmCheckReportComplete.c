/*
 * XREFs of PpmCheckReportComplete @ 0x1404637E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char PpmCheckReportComplete()
{
  if ( PpmCheckCompleteHandler )
    guard_dispatch_icall_no_overrides(PpmPerfGlobalContext, PpmCheckTime);
  return 1;
}
