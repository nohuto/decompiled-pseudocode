/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14029FCDC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x14029FB30 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x14029FCC0 (PpmPerfReadFeedback.c)
 *     PpmPerfCommitPerformance @ 0x140497650 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfControlExecuteAction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( !a1 )
    return 1;
  guard_dispatch_icall_no_overrides(PpmPerfControlActionCallback, a2, a3, a4);
  return v4;
}
