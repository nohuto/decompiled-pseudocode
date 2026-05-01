/*
 * XREFs of CrmStateRoutineFanNoiseUnderLimit @ 0x180071D7C
 * Callers:
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x18006E380 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x180078610 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x180078640 (CrmComparisonRoutineFanNoiseBelowLow.c)
 * Callees:
 *     <none>
 */

bool __fastcall CrmStateRoutineFanNoiseUnderLimit(_DWORD *a1, unsigned int a2)
{
  return !*a1 || a1[2] < a2;
}
