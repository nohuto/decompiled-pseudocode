/*
 * XREFs of CrmComparisonRoutineULONGValueOpensUnderClosesOver @ 0x180060954
 * Callers:
 *     CrmComparisonRoutineCpuMediumConditionClosed @ 0x180078560 (CrmComparisonRoutineCpuMediumConditionClosed.c)
 *     CrmComparisonRoutineCpuMediumConditionOpen @ 0x180078590 (CrmComparisonRoutineCpuMediumConditionOpen.c)
 *     CrmComparisonRoutineCpuMediumConditionTransitioning @ 0x1800785C0 (CrmComparisonRoutineCpuMediumConditionTransitioning.c)
 *     CrmComparisonRoutineNpuUsageGood @ 0x1800786B0 (CrmComparisonRoutineNpuUsageGood.c)
 *     CrmComparisonRoutineNpuUsageMedium @ 0x1800786D0 (CrmComparisonRoutineNpuUsageMedium.c)
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
