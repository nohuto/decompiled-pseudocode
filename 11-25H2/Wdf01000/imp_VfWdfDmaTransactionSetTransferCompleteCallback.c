/*
 * XREFs of imp_VfWdfDmaTransactionSetTransferCompleteCallback @ 0x1400DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetTransferCompleteCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void (__fastcall *DmaCompletionRoutine)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, DMA_COMPLETION_STATUS),
        void *DmaCompletionContext)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetTransferCompleteCallback(
    DriverGlobals,
    DmaTransaction,
    DmaCompletionRoutine,
    DmaCompletionContext);
}
