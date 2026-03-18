/*
 * XREFs of imp_VfWdfPdoInitAssignContainerID @ 0x1400E00A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfPdoInitAssignContainerID)(
           DriverGlobals,
           DeviceInit,
           ContainerID);
}
