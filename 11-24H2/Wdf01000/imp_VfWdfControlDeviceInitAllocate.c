/*
 * XREFs of imp_VfWdfControlDeviceInitAllocate @ 0x1400DD490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE_INIT *__fastcall imp_VfWdfControlDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const _UNICODE_STRING *SDDLString)
{
  return WdfVersion.Functions.pfnWdfControlDeviceInitAllocate(DriverGlobals, Driver, SDDLString);
}
