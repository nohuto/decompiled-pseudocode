/*
 * XREFs of Controller_ReportFatalError @ 0x140006A08
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x140001110 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14000A09C (Command_HandleCommandRingStoppedEvent.c)
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14001BAC0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x14001FC00 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1400292A0 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002BA00 (IoControl_WdfEvtIoDeviceControl.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002CE60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x14002F8B0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003C6A0 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x14003FF40 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x140047B88 (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x14004AAE0 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004D17C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 */

__int64 __fastcall Controller_ReportFatalError(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return Controller_ReportFatalErrorEx(a1, a2, a3, a4, 0LL, a5, a6, a7);
}
