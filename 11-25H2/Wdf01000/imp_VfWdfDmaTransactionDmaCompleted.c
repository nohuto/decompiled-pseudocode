/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompleted @ 0x1400DE440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompleted(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompleted)(
           DriverGlobals,
           DmaTransaction,
           Status);
}
