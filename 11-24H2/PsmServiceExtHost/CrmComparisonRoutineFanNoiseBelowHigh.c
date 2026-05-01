/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowHigh @ 0x180078610
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x180071D7C (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowHigh(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  LOBYTE(v2) = CrmStateRoutineFanNoiseUnderLimit(a2, 3u);
  return v2 != 0 ? 2 : 0;
}
