/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x140020D34
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x140012240 (Bulk_WdfEvtRequestCancel.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_Complete @ 0x14002079C (Isoch_Transfer_Complete.c)
 *     Isoch_EP_ReclaimTransfers @ 0x140020870 (Isoch_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x140020910 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Control_EP_ReclaimTransfers @ 0x140020C20 (Control_EP_ReclaimTransfers.c)
 *     Bulk_EP_ReclaimTransfers @ 0x140020CA0 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x14002FD30 (Control_EP_StartMapping.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x140031270 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtRequestCancel @ 0x140033CA0 (Isoch_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x140036E60 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x14004C150 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_WdfEvtRequestCancel @ 0x14004C610 (Control_WdfEvtRequestCancel.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x14004CBF0 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004CED0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(_QWORD *a1)
{
  if ( *(_BYTE *)(a1[5] + 1001LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
             WdfDriverGlobals,
             a1[11]);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 896))(WdfDriverGlobals, a1[10]);
}
