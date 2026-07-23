/*
 * XREFs of TtmiScheduleSessionWorker @ 0x14076A144
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407687B0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1407689FC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x140768E44 (TtmiSetInputWakeCapability.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A23C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076B0E4 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B908 (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x140770034 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1407700E8 (TtmiTerminalMonitorControl.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407701C4 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpExitProximity @ 0x1407703F8 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770520 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140770584 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x14099D528 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x14099D5A4 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
