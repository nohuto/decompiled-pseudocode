/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1402AE04C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1402ADEA0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x1402AE030 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x140491FE0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfControlExecuteAction(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1 )
    return 1;
  guard_dispatch_icall_no_overrides(PpmPerfControlActionCallback, a2);
  return v2;
}
