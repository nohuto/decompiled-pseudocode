/*
 * XREFs of HalpTimerGetInternalData @ 0x14027A960
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x14028CBB0 (KiEndThreadCycleAccumulation.c)
 *     KiEndIdleCycleAccumulation @ 0x14028D760 (KiEndIdleCycleAccumulation.c)
 *     HalpTimerClockArm @ 0x14028F320 (HalpTimerClockArm.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x14028FC0C (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x14028FF50 (HalpTimerDpcRoutine.c)
 *     HalpTimerSavePerformanceCounter @ 0x140290158 (HalpTimerSavePerformanceCounter.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x14034FFA0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140350FB0 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x140445CE0 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140445E88 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x140482044 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockStop @ 0x1404B6D50 (HalpTimerClockStop.c)
 *     HalpTimerSwitchStallSource @ 0x1404F6580 (HalpTimerSwitchStallSource.c)
 *     HalpInitializePnTimers @ 0x140537DA0 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x140537E60 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1405380A8 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitialize @ 0x140538BB8 (HalpTimerInitialize.c)
 *     HalpTimerQueryCycleCounter @ 0x140538E50 (HalpTimerQueryCycleCounter.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpTimerClockActivate @ 0x140544090 (HalpTimerClockActivate.c)
 *     HalpTimerClockInitialize @ 0x140544110 (HalpTimerClockInitialize.c)
 *     HalpTimerClockPowerChange @ 0x140544180 (HalpTimerClockPowerChange.c)
 *     HalpTimerInitializeClockPn @ 0x1405445F4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405447F4 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140544A90 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerDelayedQueryCounter @ 0x140544F00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1405450E0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerMeasureFrequencies @ 0x1405453A0 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140545718 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerPowerChange @ 0x140545DD0 (HalpTimerPowerChange.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x140545F08 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerStallCounterPowerChange @ 0x140546058 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1405462D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140546360 (HalpVpptStop.c)
 *     HalpTimerInitializeProfiling @ 0x1405474DC (HalpTimerInitializeProfiling.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140547684 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x140547884 (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1405486F0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x140548780 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055C2C0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerClockInterruptStub @ 0x14055C540 (HalpTimerClockInterruptStub.c)
 *     HalpTimerHypervisorInterruptStub @ 0x14055C590 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x14055C5E0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055C640 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerGetInternalData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    return *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    return *(_QWORD *)(a1 + 72);
}
