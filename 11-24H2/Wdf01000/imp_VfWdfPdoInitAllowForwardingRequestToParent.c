/*
 * XREFs of imp_VfWdfPdoInitAllowForwardingRequestToParent @ 0x1400E0080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitAllowForwardingRequestToParent(DriverGlobals, DeviceInit);
}
