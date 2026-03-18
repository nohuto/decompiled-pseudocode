/*
 * XREFs of imp_VfWdfInterruptWdmGetInterrupt @ 0x1400DEEB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

struct _KINTERRUPT *__fastcall imp_VfWdfInterruptWdmGetInterrupt(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  return WdfVersion.Functions.pfnWdfInterruptWdmGetInterrupt(DriverGlobals, Interrupt);
}
