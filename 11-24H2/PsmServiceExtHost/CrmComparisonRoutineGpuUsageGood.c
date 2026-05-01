/*
 * XREFs of CrmComparisonRoutineGpuUsageGood @ 0x1800652B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineGpuUsageGood(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0xAu )
    return *a2 < 0x1Eu;
  else
    return 2LL;
}
