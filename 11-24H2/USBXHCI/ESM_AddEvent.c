/*
 * XREFs of ESM_AddEvent @ 0x140006A44
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x140004AC0 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x140004B10 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x140004D10 (Endpoint_UcxEvtEndpointReset.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x140004EA0 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     TR_TransfersReclaimed @ 0x140005B10 (TR_TransfersReclaimed.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Bulk_WdfEvtRequestCancel @ 0x140005BE0 (Bulk_WdfEvtRequestCancel.c)
 *     TR_AttemptStateChange @ 0x140005E00 (TR_AttemptStateChange.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140007D60 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140008250 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x1400085E0 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Isoch_MappingLoop @ 0x14000E020 (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_MapTransfer @ 0x14001DEC0 (Control_MapTransfer.c)
 *     Control_Transfer_MapIntoRing @ 0x14001E7C0 (Control_Transfer_MapIntoRing.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002CE60 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x140006BA0 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x140007160 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KSPIN_LOCK v5; // rdx
  __int64 v6; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 != 126 )
    {
      *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
      *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
      goto LABEL_5;
    }
    *((_BYTE *)Context + 1016) = 0;
    ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    goto LABEL_4;
  }
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
  *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  if ( !*((_BYTE *)Context + 848) )
  {
    v5 = Context[120];
    *((_BYTE *)Context + 848) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(WdfFunctions_01033 + 1632))(WdfDriverGlobals, v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033 + 1640))(
      WdfDriverGlobals,
      v6,
      "State Machine Tag",
      1021LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
LABEL_4:
    ESM_RunStateMachine(Context);
  }
LABEL_5:
  KeReleaseSpinLock(v2, NewIrql);
}
