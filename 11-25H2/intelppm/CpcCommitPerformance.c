/*
 * XREFs of CpcCommitPerformance @ 0x140004900
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x14000496C (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcCommitPerformance(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return CpcSegregateCommandActuation(CpcSubspaceCommitPerformance, a1, a3);
}
