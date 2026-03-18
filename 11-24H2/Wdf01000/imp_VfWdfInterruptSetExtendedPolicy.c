/*
 * XREFs of imp_VfWdfInterruptSetExtendedPolicy @ 0x1400DEE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfInterruptSetExtendedPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_EXTENDED_POLICY *PolicyAndGroup)
{
  WdfVersion.Functions.pfnWdfInterruptSetExtendedPolicy(DriverGlobals, Interrupt, PolicyAndGroup);
}
