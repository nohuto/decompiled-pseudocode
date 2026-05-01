/*
 * XREFs of CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x1800609D4
 * Callers:
 *     CrmComparisonRoutineCpuMediumConditionClosed @ 0x180078500 (CrmComparisonRoutineCpuMediumConditionClosed.c)
 *     CrmComparisonRoutineCpuMediumConditionOpen @ 0x180078530 (CrmComparisonRoutineCpuMediumConditionOpen.c)
 *     CrmComparisonRoutineCpuMediumConditionTransitioning @ 0x180078560 (CrmComparisonRoutineCpuMediumConditionTransitioning.c)
 *     CrmComparisonRoutineNpuUsageGood @ 0x180078650 (CrmComparisonRoutineNpuUsageGood.c)
 *     CrmComparisonRoutineNpuUsageMedium @ 0x180078670 (CrmComparisonRoutineNpuUsageMedium.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineULONGValueOpensUnderClosesOver(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( *a2 >= a3 )
    return *a2 < a4;
  else
    return 2LL;
}
