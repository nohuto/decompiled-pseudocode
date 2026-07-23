/*
 * XREFs of PopBsdHandleRequest @ 0x1404A3364
 * Callers:
 *     PopClearSystemShutdownMarker @ 0x1406F7660 (PopClearSystemShutdownMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140747670 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordBatteryLevel @ 0x1407479FC (PopRecordBatteryLevel.c)
 *     PopRecordPhysicalPowerButton @ 0x140747AF0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x140747C80 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x140747CD0 (PopSetCleanShutdownMarker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140747D10 (PopSetUserShutdownMarkerWorker.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407522F0 (PdcPoLidReliabilityUpdateCallback.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140758844 (PopEvaluatePowerButtonSuppressionState.c)
 *     PdcPoRecordButton @ 0x14075C150 (PdcPoRecordButton.c)
 *     PopRecordDisplayState @ 0x140A1C088 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x140A86C70 (PopSetConnectedStandbyMarker.c)
 *     PopRecordSleepCheckpoint @ 0x140A88720 (PopRecordSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x140A8D7A8 (PopSetSleepMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140A984D0 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x140A9D76C (PopRecordAcDcState.c)
 *     PopClearSleepMarker @ 0x140AA84C8 (PopClearSleepMarker.c)
 *     PopRecordBatteryPercentage @ 0x140AA8EC4 (PopRecordBatteryPercentage.c)
 *     PopRecordLidStateWorker @ 0x140AAF860 (PopRecordLidStateWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopBsdFlush @ 0x140A64EE4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8BBC8 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
    if ( _InterlockedIncrement(&dword_140F0E580) == 1 )
      ExQueueWorkItem(&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
