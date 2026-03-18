/*
 * XREFs of imp_VfWdfDmaTransactionGetBytesTransferred @ 0x1400DE4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaTransactionGetBytesTransferred(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetBytesTransferred(DriverGlobals, DmaTransaction);
}
