/*
 * XREFs of ESM_AddEvent @ 0x1400130A4
 * Callers:
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 *     Control_Transfer_MapIntoRing @ 0x140004F80 (Control_Transfer_MapIntoRing.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x140011150 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1400112F0 (Endpoint_UcxEvtEndpointReset.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x140011480 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     TR_TransfersReclaimed @ 0x140012104 (TR_TransfersReclaimed.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Bulk_WdfEvtRequestCancel @ 0x140012240 (Bulk_WdfEvtRequestCancel.c)
 *     TR_AttemptStateChange @ 0x140012460 (TR_AttemptStateChange.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140012540 (Control_ProcessTransferEventWithED1.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x1400143C0 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Endpoint_OnCancelStopCompletion @ 0x1400144F0 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1400149E0 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140014D70 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 *     Isoch_MappingLoop @ 0x14001CC20 (Isoch_MappingLoop.c)
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002D500 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x14002E4C4 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x140013200 (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1400137C0 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
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
