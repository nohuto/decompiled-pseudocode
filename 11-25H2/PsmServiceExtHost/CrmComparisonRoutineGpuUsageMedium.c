/*
 * XREFs of CrmComparisonRoutineGpuUsageMedium @ 0x180064030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineGpuUsageMedium(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0x1Eu )
    return *a2 < 0x32u;
  else
    return 2LL;
}
