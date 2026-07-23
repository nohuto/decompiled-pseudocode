/*
 * XREFs of PpmPerfCommitPerformance @ 0x140491FE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1402AE04C (PpmPerfControlExecuteAction.c)
 */

char __fastcall PpmPerfCommitPerformance(__int64 a1, __int64 a2)
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance, a2);
}
