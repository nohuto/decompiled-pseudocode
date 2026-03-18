/*
 * XREFs of imp_VfWdfCxDeviceInitSetPowerPolicyEventCallbacks @ 0x1400DD5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetPowerPolicyEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_POWER_POLICY_EVENT_CALLBACKS *CxPowerPolicyCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPowerPolicyEventCallbacks(
    DriverGlobals,
    CxDeviceInit,
    CxPowerPolicyCallbacks);
}
