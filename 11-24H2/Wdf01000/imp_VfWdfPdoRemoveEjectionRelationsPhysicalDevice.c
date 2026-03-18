/*
 * XREFs of imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1400E01A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfPdoRemoveEjectionRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
