/*
 * XREFs of ESM_AddEsmEvent @ 0x140012218
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017C0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x14000CEA0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14000D8E0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14000FF70 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400101F4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x140011480 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     TR_TransfersReclaimed @ 0x140012104 (TR_TransfersReclaimed.c)
 *     Control_ProcessTransferEventWithED0 @ 0x140013E5C (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1400144F0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1400149E0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140014D70 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x140014F54 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140015310 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015CC8 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_EP_StopMapping @ 0x14002BFC0 (Bulk_EP_StopMapping.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x14002C020 (Endpoint_ClearStallTransferCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002D500 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x14002E4C4 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Control_EP_StopMapping @ 0x140031330 (Control_EP_StopMapping.c)
 *     Isoch_WdfEvtRequestCancel @ 0x140033CA0 (Isoch_WdfEvtRequestCancel.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x140034E78 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x140036E60 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x14003C670 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047070 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400472D0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x140048220 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x14004C1E0 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_WdfEvtRequestCancel @ 0x14004C610 (Control_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x14004E090 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x14004E16C (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_AddEsmEvent(__int64 a1)
{
  return ESM_AddEvent((PVOID)(a1 + 296));
}
