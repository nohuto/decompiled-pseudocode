/*
 * XREFs of MmGetTotalCommitLimit @ 0x140463210
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + a1) + 19608LL);
}
