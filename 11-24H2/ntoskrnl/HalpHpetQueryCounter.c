/*
 * XREFs of HalpHpetQueryCounter @ 0x1403D6DB0
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140309950 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiEndIdleCycleAccumulation @ 0x14034C5A0 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403D6404 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1403D66C0 (HalpTimerDpcRoutine.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405477F0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 * Callees:
 *     <none>
 */

__int64 HalpHpetQueryCounter()
{
  return *(unsigned int *)(HalpHpetBaseAddress + 240);
}
