/*
 * XREFs of imp_VfWdfPdoInitRemovePowerDependencyOnParent @ 0x1400E0120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoInitRemovePowerDependencyOnParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitRemovePowerDependencyOnParent(DriverGlobals, DeviceInit);
}
