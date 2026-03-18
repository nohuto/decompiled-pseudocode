/*
 * XREFs of PpmPerfControlExecuteAction @ 0x140204BBC
 * Callers:
 *     PpmPerfCommitPerformance @ 0x140202EF0 (PpmPerfCommitPerformance.c)
 *     PpmCheckAcquireProcessorPerformance @ 0x140204A10 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfReadFeedback @ 0x140204BA0 (PpmPerfReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
