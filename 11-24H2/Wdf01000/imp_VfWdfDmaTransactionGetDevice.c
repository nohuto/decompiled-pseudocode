/*
 * XREFs of imp_VfWdfDmaTransactionGetDevice @ 0x1400DE520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfDmaTransactionGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetDevice(DriverGlobals, DmaTransaction);
}
