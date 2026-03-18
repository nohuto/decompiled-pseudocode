/*
 * XREFs of PopAcquireRwLockShared @ 0x1403B5E64
 * Callers:
 *     PpmQueryPlatformStateResidency @ 0x14032D624 (PpmQueryPlatformStateResidency.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1403B5810 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PopThermalUpdateTimerPolicy @ 0x14042847C (PopThermalUpdateTimerPolicy.c)
 *     PoIssueCoalescingNotification @ 0x140445910 (PoIssueCoalescingNotification.c)
 *     PopThermalTraceRundownEvents @ 0x1404A51F0 (PopThermalTraceRundownEvents.c)
 *     PopFanSxEntry @ 0x1404B440C (PopFanSxEntry.c)
 *     PopFanSxExit @ 0x1404D1444 (PopFanSxExit.c)
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1405D3D88 (PopThermalSxExit.c)
 *     PopThermalTelemetryWorker @ 0x1405D3F40 (PopThermalTelemetryWorker.c)
 *     PoQueryPowerLimitAttributes @ 0x14074AC20 (PoQueryPowerLimitAttributes.c)
 *     PopBatteryEtwCallback @ 0x14075AD80 (PopBatteryEtwCallback.c)
 *     PopCurrentSystemPowerSourceState @ 0x14075B270 (PopCurrentSystemPowerSourceState.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1408EEF10 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtInternerLock @ 0x140905D90 (PopEtInternerLock.c)
 *     PopEtGetNextEnergyTracker @ 0x140906254 (PopEtGetNextEnergyTracker.c)
 *     PpmWmiGetAllData @ 0x1409CE8E0 (PpmWmiGetAllData.c)
 *     PoThermalCounterSetCallback @ 0x1409FDF10 (PoThermalCounterSetCallback.c)
 *     PopProcessorInformation @ 0x1409FFDC0 (PopProcessorInformation.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 *     PopAcquirePowerRequestPushLock @ 0x140A50600 (PopAcquirePowerRequestPushLock.c)
 *     PopBatteryDeviceState @ 0x140A618DC (PopBatteryDeviceState.c)
 *     PopBootBatteryStatusWorker @ 0x140A6FF70 (PopBootBatteryStatusWorker.c)
 *     PopFanReadFanNoiseInfo @ 0x140A78D98 (PopFanReadFanNoiseInfo.c)
 *     PopGetPowerRequestListInfo @ 0x140A7BE48 (PopGetPowerRequestListInfo.c)
 *     PopTransitionTelemetryOsState @ 0x140A86334 (PopTransitionTelemetryOsState.c)
 *     PopMeasureEnergyChange @ 0x140A86824 (PopMeasureEnergyChange.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A94AA4 (PoQueryProcessEnergyTrackingState.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140A9B694 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopGetEnergyCounter @ 0x140A9BC20 (PopGetEnergyCounter.c)
 *     PopEsStartTelemetry @ 0x140AADAD0 (PopEsStartTelemetry.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB6DC0 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 *     PopEsEnterSleepShutdown @ 0x140AB82C4 (PopEsEnterSleepShutdown.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140ABD324 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PpmEventTraceControlCallback @ 0x140ACA960 (PpmEventTraceControlCallback.c)
 *     PopQueryLastStateTransitionInfo @ 0x140B5F2A4 (PopQueryLastStateTransitionInfo.c)
 *     PopIsStateTransitionBlockingThread @ 0x140B6A160 (PopIsStateTransitionBlockingThread.c)
 *     PopDiagInitialize @ 0x140C2EEA0 (PopDiagInitialize.c)
 *     PopFanReportBootStartDevices @ 0x140C323E4 (PopFanReportBootStartDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PopAcquireRwLockShared(volatile signed __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)a1, 0LL);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v3, (__int64)a1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
