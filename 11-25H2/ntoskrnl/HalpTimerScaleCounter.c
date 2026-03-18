/*
 * XREFs of HalpTimerScaleCounter @ 0x14028EF68
 * Callers:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiEndIdleCycleAccumulation @ 0x14028D760 (KiEndIdleCycleAccumulation.c)
 *     HalpTimerClockArm @ 0x14028F320 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x14028F6F0 (HalpSetTimer.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x14028FD8C (HalpTimerPropagateQpcBiasUpdate.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D971C (HalpTimerGetSavedPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140537C90 (HalCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x140544F00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerMeasureFrequencies @ 0x1405453A0 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140545718 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1405498F0 (HalpTimerMeasureProcessorsWorker.c)
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
