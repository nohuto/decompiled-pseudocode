/*
 * XREFs of Controller_ReportFatalError @ 0x140013068
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017C0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 *     Controller_CheckHealth @ 0x14000957C (Controller_CheckHealth.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14000A670 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14000CEA0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14000D8E0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14000FF70 (Endpoint_ControlEndpointResetCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140012540 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1400144F0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1400149E0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140014D70 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140015310 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x140028710 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002B760 (IoControl_WdfEvtIoDeviceControl.c)
 *     UsbDevice_DeviceResetCompletion @ 0x14002C290 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002D500 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x140030C60 (UsbDevice_EnableCompletion.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1400367E8 (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003C710 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D7A0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x1400405F0 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1400418B0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047878 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x14004B3F0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DA4C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 */

__int64 __fastcall Controller_ReportFatalError(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return Controller_ReportFatalErrorEx(a1, a2, a3, a4, 0LL, a5, a6, a7);
}
