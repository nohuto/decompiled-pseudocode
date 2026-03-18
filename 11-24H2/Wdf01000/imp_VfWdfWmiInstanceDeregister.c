/*
 * XREFs of imp_VfWdfWmiInstanceDeregister @ 0x1400E18D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfWmiInstanceDeregister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  WdfVersion.Functions.pfnWdfWmiInstanceDeregister(DriverGlobals, WmiInstance);
}
