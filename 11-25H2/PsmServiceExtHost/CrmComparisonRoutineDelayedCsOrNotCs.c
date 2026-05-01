/*
 * XREFs of CrmComparisonRoutineDelayedCsOrNotCs @ 0x180078590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineDelayedCsOrNotCs(__int64 a1, _DWORD *a2)
{
  return (*a2 & 0xFFFFFFFD) == 0 ? 2 : 0;
}
