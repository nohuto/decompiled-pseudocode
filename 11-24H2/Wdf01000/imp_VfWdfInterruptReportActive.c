/*
 * XREFs of imp_VfWdfInterruptReportActive @ 0x1400DEDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptReportActive(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReportActive(DriverGlobals, Interrupt);
}
