/*
 * XREFs of PopBsdHandleRequest @ 0x1404A8F44
 * Callers:
 *     PopClearSystemShutdownMarker @ 0x1406F9A20 (PopClearSystemShutdownMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140749340 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordBatteryLevel @ 0x1407496CC (PopRecordBatteryLevel.c)
 *     PopRecordPhysicalPowerButton @ 0x1407497C0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x140749950 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1407499A0 (PopSetCleanShutdownMarker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1407499E0 (PopSetUserShutdownMarkerWorker.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140753FD0 (PdcPoLidReliabilityUpdateCallback.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14075A15C (PopEvaluatePowerButtonSuppressionState.c)
 *     PdcPoRecordButton @ 0x14075D1B0 (PdcPoRecordButton.c)
 *     PopRecordDisplayState @ 0x140A27608 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x140A8A930 (PopSetConnectedStandbyMarker.c)
 *     PopRecordSleepCheckpoint @ 0x140A8C1E8 (PopRecordSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x140A910AC (PopSetSleepMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140A9CF60 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x140AA23DC (PopRecordAcDcState.c)
 *     PopClearSleepMarker @ 0x140AAD448 (PopClearSleepMarker.c)
 *     PopRecordBatteryPercentage @ 0x140AADE44 (PopRecordBatteryPercentage.c)
 *     PopRecordLidStateWorker @ 0x140AB48F0 (PopRecordLidStateWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8F530 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

void __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
  {
    PopBsdFlush(a1);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    if ( _InterlockedIncrement(&dword_140F0E2E0) == 1 )
      ExQueueWorkItem(&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
