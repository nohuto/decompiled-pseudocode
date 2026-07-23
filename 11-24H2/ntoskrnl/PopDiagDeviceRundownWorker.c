/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140A3A2C0
 * Callers:
 *     <none>
 * Callees:
 *     IoDiagTraceDevicesRundown @ 0x140A3A2E0 (IoDiagTraceDevicesRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  return IoDiagTraceDevicesRundown();
}
