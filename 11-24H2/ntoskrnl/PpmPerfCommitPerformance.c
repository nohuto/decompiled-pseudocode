/*
 * XREFs of PpmPerfCommitPerformance @ 0x140497650
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14029FCDC (PpmPerfControlExecuteAction.c)
 */

char __fastcall PpmPerfCommitPerformance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance, a2, a3, a4);
}
