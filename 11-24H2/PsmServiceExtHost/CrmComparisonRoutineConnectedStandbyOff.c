/*
 * XREFs of CrmComparisonRoutineConnectedStandbyOff @ 0x18006C3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineConnectedStandbyOff(__int64 a1, _DWORD *a2)
{
  return ((*a2 + 1) & 0xFFFFFFFE) == 0 ? 2 : 0;
}
