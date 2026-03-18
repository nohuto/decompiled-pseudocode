/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x1400580F0
 * Callers:
 *     <none>
 * Callees:
 *     imp_WdfDeviceResumeIdleActual @ 0x140058120 (imp_WdfDeviceResumeIdleActual.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  imp_WdfDeviceResumeIdleActual(DriverGlobals, Device, 0LL, 0, 0LL);
}
