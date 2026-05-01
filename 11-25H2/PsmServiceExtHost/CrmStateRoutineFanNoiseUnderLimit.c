/*
 * XREFs of CrmStateRoutineFanNoiseUnderLimit @ 0x180071EAC
 * Callers:
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x18006E5B0 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x1800785B0 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x1800785E0 (CrmComparisonRoutineFanNoiseBelowLow.c)
 * Callees:
 *     <none>
 */

bool __fastcall CrmStateRoutineFanNoiseUnderLimit(_DWORD *a1, unsigned int a2)
{
  return !*a1 || a1[2] < a2;
}
