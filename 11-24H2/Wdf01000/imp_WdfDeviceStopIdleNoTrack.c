/*
 * XREFs of imp_WdfDeviceStopIdleNoTrack @ 0x14007CFA0
 * Callers:
 *     <none>
 * Callees:
 *     StopIdleWorker @ 0x140014800 (StopIdleWorker.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleNoTrack(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0)
{
  return StopIdleWorker(DriverGlobals, (unsigned __int64)Device, WaitForD0, 0LL, 0, 0LL);
}
