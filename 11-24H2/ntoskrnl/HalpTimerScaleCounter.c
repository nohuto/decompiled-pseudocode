/*
 * XREFs of HalpTimerScaleCounter @ 0x140314930
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x1402DAC90 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiEndIdleCycleAccumulation @ 0x14036AA80 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14036B600 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpTimerClockArm @ 0x140375660 (HalpTimerClockArm.c)
 *     HalpSetTimer @ 0x140375A30 (HalpSetTimer.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403BC1A4 (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerGetSavedPerformanceCounter @ 0x1404D1BEC (HalpTimerGetSavedPerformanceCounter.c)
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405450B0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1405458C8 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
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
