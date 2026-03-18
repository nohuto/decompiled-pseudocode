/*
 * XREFs of imp_VfWdfDmaTransactionSetImmediateExecution @ 0x1400DE690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetImmediateExecution(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 UseImmediateExecution)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetImmediateExecution(DriverGlobals, DmaTransaction, UseImmediateExecution);
}
