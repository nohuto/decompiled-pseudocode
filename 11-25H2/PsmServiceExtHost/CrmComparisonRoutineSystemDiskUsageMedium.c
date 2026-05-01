/*
 * XREFs of CrmComparisonRoutineSystemDiskUsageMedium @ 0x180064050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSystemDiskUsageMedium(__int64 a1, _DWORD *a2)
{
  if ( *a2 >= 0x28u )
    return *a2 < 0x3Cu;
  else
    return 2LL;
}
