/*
 * XREFs of CrmComparisonRoutineCpuUsageGood @ 0x180065290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineCpuUsageGood(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0x19u )
    return *a2 < 0x32u;
  else
    return 2LL;
}
