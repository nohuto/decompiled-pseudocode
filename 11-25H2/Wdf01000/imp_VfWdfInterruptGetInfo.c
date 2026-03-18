/*
 * XREFs of imp_VfWdfInterruptGetInfo @ 0x1400DED60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WdfVersion.Functions.pfnWdfInterruptGetInfo(DriverGlobals, Interrupt, Info);
}
