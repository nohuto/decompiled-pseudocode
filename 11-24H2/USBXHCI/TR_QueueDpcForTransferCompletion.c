/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x1400148B4
 * Callers:
 *     Bulk_WdfEvtRequestCancel @ 0x140005BE0 (Bulk_WdfEvtRequestCancel.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140010D60 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_Complete @ 0x140014314 (Isoch_Transfer_Complete.c)
 *     Isoch_EP_ReclaimTransfers @ 0x1400143F0 (Isoch_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x140014490 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Control_EP_ReclaimTransfers @ 0x1400147A0 (Control_EP_ReclaimTransfers.c)
 *     Bulk_EP_ReclaimTransfers @ 0x140014820 (Bulk_EP_ReclaimTransfers.c)
 *     Control_EP_StartMapping @ 0x14001FB00 (Control_EP_StartMapping.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x140030420 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtRequestCancel @ 0x140032220 (Isoch_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x1400353B0 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x14004B840 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_WdfEvtRequestCancel @ 0x14004BD00 (Control_WdfEvtRequestCancel.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x14004C2E0 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004C5C0 (Isoch_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
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
