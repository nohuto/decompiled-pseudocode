/*
 * XREFs of CrmComparisonRoutineCpuMediumConditionTransitioning @ 0x180078560
 * Callers:
 *     <none>
 * Callees:
 *     CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x1800609D4 (CrmComparisonRoutineULONGValueOpensUnderClosesOver.c)
 */

__int64 __fastcall CrmComparisonRoutineCpuMediumConditionTransitioning(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = CrmComparisonRoutineULONGValueOpensUnderClosesOver(a1, a2, 0x32u, 0x4Bu);
  v3 = 0;
  if ( v2 == 1 )
    return 2;
  return v3;
}
