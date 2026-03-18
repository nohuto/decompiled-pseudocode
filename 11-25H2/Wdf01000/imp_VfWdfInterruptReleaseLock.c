/*
 * XREFs of imp_VfWdfInterruptReleaseLock @ 0x1400DEDC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReleaseLock(DriverGlobals, Interrupt);
}
