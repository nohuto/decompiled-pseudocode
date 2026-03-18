/*
 * XREFs of imp_VfWdfDeviceAddRemovalRelationsPhysicalDevice @ 0x1400DD6A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceAddRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _DEVICE_OBJECT *))WdfVersion.Functions.pfnWdfDeviceAddRemovalRelationsPhysicalDevice)(
           DriverGlobals,
           Device,
           PhysicalDevice);
}
