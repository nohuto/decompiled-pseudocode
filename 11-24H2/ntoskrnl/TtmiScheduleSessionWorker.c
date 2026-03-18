/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140769F24
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140768590 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1407687DC (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x140768C24 (TtmiSetInputWakeCapability.c)
 *     TtmiSetDisplayPowerRequest @ 0x14076A01C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14076AEC4 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B6E8 (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x14076FE14 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x14076FEC8 (TtmiTerminalMonitorControl.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14076FFA4 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpExitProximity @ 0x1407701D8 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140770300 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140770364 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x140902F78 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140902FF4 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
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
