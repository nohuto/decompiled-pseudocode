/*
 * XREFs of ESM_AddEsmEvent @ 0x140005BC0
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1400038CC (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400042A0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x140004EA0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     TR_TransfersReclaimed @ 0x140005B10 (TR_TransfersReclaimed.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1400077FC (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1400087C4 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400097B4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1400129F4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14001BAC0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x14001FC00 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Bulk_EP_StopMapping @ 0x14002C310 (Bulk_EP_StopMapping.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x14002C370 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002CE60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Control_EP_StopMapping @ 0x1400304E0 (Control_EP_StopMapping.c)
 *     Isoch_WdfEvtRequestCancel @ 0x140032220 (Isoch_WdfEvtRequestCancel.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1400331C8 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1400353B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x14003C600 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047380 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400475E0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x140048530 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x14004B8D0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_WdfEvtRequestCancel @ 0x14004BD00 (Control_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x14004D710 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x14004D7EC (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_AddEsmEvent(__int64 a1)
{
  return ESM_AddEvent((PVOID)(a1 + 304));
}
