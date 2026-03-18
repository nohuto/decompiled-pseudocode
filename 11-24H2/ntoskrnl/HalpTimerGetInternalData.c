/*
 * XREFs of HalpTimerGetInternalData @ 0x14033BC10
 * Callers:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140309950 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiStartThreadCycleAccumulationContextSwap @ 0x14030BC30 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiEndIdleCycleAccumulation @ 0x14034C5A0 (KiEndIdleCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14034D120 (KiEndThreadCycleAccumulation.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1403B9E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1403BA018 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerClockArm @ 0x1403BC1E0 (HalpTimerClockArm.c)
 *     HalpTimerSavePerformanceCounter @ 0x1403D6404 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerDpcRoutine @ 0x1403D66C0 (HalpTimerDpcRoutine.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x140482E74 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockStop @ 0x1404B6820 (HalpTimerClockStop.c)
 *     HalpTimerSwitchStallSource @ 0x1404F8D80 (HalpTimerSwitchStallSource.c)
 *     HalpInitializePnTimers @ 0x14053A550 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x14053A858 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerInitialize @ 0x14053B368 (HalpTimerInitialize.c)
 *     HalpTimerQueryCycleCounter @ 0x14053B600 (HalpTimerQueryCycleCounter.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpTimerClockActivate @ 0x140546980 (HalpTimerClockActivate.c)
 *     HalpTimerClockInitialize @ 0x140546A00 (HalpTimerClockInitialize.c)
 *     HalpTimerClockPowerChange @ 0x140546A70 (HalpTimerClockPowerChange.c)
 *     HalpTimerInitializeClockPn @ 0x140546EE4 (HalpTimerInitializeClockPn.c)
 *     HalpTimerSwitchToNormalClock @ 0x1405470E4 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerConfigureInterrupt @ 0x140547380 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerDelayedQueryCounter @ 0x1405477F0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1405479D0 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x140548008 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerPowerChange @ 0x1405486C0 (HalpTimerPowerChange.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405487F8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerStallCounterPowerChange @ 0x140548948 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptInitializePhysicalTimer @ 0x140548BC4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x140548C50 (HalpVpptStop.c)
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpTimerRestartProfileInterrupt @ 0x140549F74 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x14054A174 (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x14054AFE0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x14054B070 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x14055EBC0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerClockInterruptStub @ 0x14055EE40 (HalpTimerClockInterruptStub.c)
 *     HalpTimerHypervisorInterruptStub @ 0x14055EE90 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x14055EEE0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14055EF40 (HalpTimerWatchdogPreResetInterrupt.c)
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
