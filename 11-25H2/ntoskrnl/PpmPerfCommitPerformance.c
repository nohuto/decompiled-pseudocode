/*
 * XREFs of PpmPerfCommitPerformance @ 0x140202EF0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140204BBC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}
