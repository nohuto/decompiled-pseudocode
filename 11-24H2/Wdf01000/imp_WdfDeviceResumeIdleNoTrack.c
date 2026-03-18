/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x140054100
 * Callers:
 *     <none>
 * Callees:
 *     imp_WdfDeviceResumeIdleActual @ 0x140054130 (imp_WdfDeviceResumeIdleActual.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  imp_WdfDeviceResumeIdleActual(DriverGlobals, Device, 0LL, 0, 0LL);
}
