/*
 * XREFs of HalpHpetQueryCounter @ 0x1403BC400
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiEndIdleCycleAccumulation @ 0x14036AA80 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403BBA50 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1403BBD10 (HalpTimerDpcRoutine.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403BC024 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405450B0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1405458C8 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
