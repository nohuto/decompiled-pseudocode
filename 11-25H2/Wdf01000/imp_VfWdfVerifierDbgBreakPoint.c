/*
 * XREFs of imp_VfWdfVerifierDbgBreakPoint @ 0x1400E17B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfVerifierDbgBreakPoint(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  WdfVersion.Functions.pfnWdfVerifierDbgBreakPoint(DriverGlobals);
}
