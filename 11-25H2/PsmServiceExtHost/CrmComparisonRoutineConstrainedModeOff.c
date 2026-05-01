/*
 * XREFs of CrmComparisonRoutineConstrainedModeOff @ 0x180062DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineConstrainedModeOff(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ecx

  v2 = 0;
  if ( !*a2 || (a2[2] & 1) == 0 )
    return 2;
  return v2;
}
