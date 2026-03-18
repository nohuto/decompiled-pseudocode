/*
 * XREFs of imp_VfWdfDmaTransactionGetTransferInfo @ 0x1400DE560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionGetTransferInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned int *MapRegisterCount,
        unsigned int *ScatterGatherElementCount)
{
  WdfVersion.Functions.pfnWdfDmaTransactionGetTransferInfo(
    DriverGlobals,
    DmaTransaction,
    MapRegisterCount,
    ScatterGatherElementCount);
}
