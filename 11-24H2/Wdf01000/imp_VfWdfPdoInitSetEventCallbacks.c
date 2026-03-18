/*
 * XREFs of imp_VfWdfPdoInitSetEventCallbacks @ 0x1400E0160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  WdfVersion.Functions.pfnWdfPdoInitSetEventCallbacks(DriverGlobals, DeviceInit, DispatchTable);
}
