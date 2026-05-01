/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowMed @ 0x18006E5B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x180071EAC (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowMed(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx

  v2 = CrmStateRoutineFanNoiseUnderLimit(a2, 2LL);
  return v3 & (unsigned int)-(v2 != 0);
}
