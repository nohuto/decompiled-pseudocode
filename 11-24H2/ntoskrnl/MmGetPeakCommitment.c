/*
 * XREFs of MmGetPeakCommitment @ 0x14046329C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetPeakCommitment(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + a1) + 16832LL);
}
