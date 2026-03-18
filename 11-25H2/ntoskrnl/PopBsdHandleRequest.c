/*
 * XREFs of PopBsdHandleRequest @ 0x1404A7FA0
 * Callers:
 *     PopClearSystemShutdownMarker @ 0x1406EDD44 (PopClearSystemShutdownMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14073D330 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x14073D764 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x14073D8D4 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x14073D924 (PopSetCleanShutdownMarker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14073D960 (PopSetUserShutdownMarkerWorker.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140747EE0 (PdcPoLidReliabilityUpdateCallback.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14074DB74 (PopEvaluatePowerButtonSuppressionState.c)
 *     PdcPoRecordButton @ 0x1407508D0 (PdcPoRecordButton.c)
 *     PopRecordDisplayState @ 0x140A1E668 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x140A85E58 (PopSetConnectedStandbyMarker.c)
 *     PopRecordSleepCheckpoint @ 0x140A871EC (PopRecordSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x140A8BFA8 (PopSetSleepMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140A97434 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x140A9CA7C (PopRecordAcDcState.c)
 *     PopClearSleepMarker @ 0x140AA7F18 (PopClearSleepMarker.c)
 *     PopRecordBatteryPercentage @ 0x140AA8A90 (PopRecordBatteryPercentage.c)
 *     PopRecordLidStateWorker @ 0x140AAF900 (PopRecordLidStateWorker.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopBsdFlush @ 0x140A68FE4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8A560 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
    if ( _InterlockedIncrement(&dword_140F0DCC0) == 1 )
      ExQueueWorkItem(&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
