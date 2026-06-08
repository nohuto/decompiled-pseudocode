/*
 * XREFs of CpcAcquirePerformance @ 0x140004930
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x14000496C (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation(CpcSubspaceAcquirePerformance, a1, 0LL);
}
