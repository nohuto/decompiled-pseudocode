/*
 * XREFs of EditionGetCurrentMonitorTopology @ 0x1C00A03E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CMonitorTopology *__fastcall EditionGetCurrentMonitorTopology(_QWORD *a1)
{
  CMonitorTopology *result; // rax

  _InterlockedIncrement((volatile signed __int32 *)qword_1C035E320);
  result = qword_1C035E320;
  *a1 = qword_1C035E320;
  return result;
}
