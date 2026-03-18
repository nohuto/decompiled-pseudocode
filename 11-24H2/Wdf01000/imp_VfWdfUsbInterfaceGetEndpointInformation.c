/*
 * XREFs of imp_VfWdfUsbInterfaceGetEndpointInformation @ 0x1400E1050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        __int64 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetEndpointInformation(
    DriverGlobals,
    UsbInterface,
    SettingIndex,
    EndpointIndex,
    EndpointInfo);
}
