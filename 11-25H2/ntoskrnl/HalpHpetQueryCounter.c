/*
 * XREFs of HalpHpetQueryCounter @ 0x140350770
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiEndIdleCycleAccumulation @ 0x14028D760 (KiEndIdleCycleAccumulation.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14028FC0C (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x14028FF50 (HalpTimerDpcRoutine.c)
 *     HalpTimerSavePerformanceCounter @ 0x140290158 (HalpTimerSavePerformanceCounter.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalpTimerDelayedQueryCounter @ 0x140544F00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140545718 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
