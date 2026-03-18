/*
 * XREFs of MmGetAvailablePages @ 0x140462128
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x1407B5140 (ExpQueryNumaAvailableMemory.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + a1) + 18688LL);
}
