/*
 * XREFs of imp_VfWdfDmaTransactionSetSingleTransferRequirement @ 0x1400DE6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetSingleTransferRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 RequireSingleTransfer)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetSingleTransferRequirement(
    DriverGlobals,
    DmaTransaction,
    RequireSingleTransfer);
}
