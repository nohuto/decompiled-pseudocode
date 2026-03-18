/*
 * XREFs of imp_VfWdfCxDeviceInitSetIoInCallerContextCallback @ 0x1400DD5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetIoInCallerContextCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        void (__fastcall *EvtIoInCallerContext)(WDFDEVICE__ *, WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetIoInCallerContextCallback(DriverGlobals, CxDeviceInit, EvtIoInCallerContext);
}
