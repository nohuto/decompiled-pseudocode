/*
 * XREFs of HalpTimerScaleCounter @ 0x14030AA50
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140309950 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiEndIdleCycleAccumulation @ 0x14034C5A0 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x1403BC5B0 (HalpSetTimer.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403D6B54 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D879C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x14053A440 (HalCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405477F0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpTimerScaleCounter(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( a1 && a2 && a2 != a3 )
    return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  else
    return a1;
}
