/*
 * XREFs of imp_VfWdfDmaTransactionGetCurrentDmaTransferLength @ 0x1400DE500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetCurrentDmaTransferLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetCurrentDmaTransferLength(DriverGlobals, DmaTransaction);
}
