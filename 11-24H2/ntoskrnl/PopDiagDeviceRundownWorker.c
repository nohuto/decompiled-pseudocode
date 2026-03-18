/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140A44A30
 * Callers:
 *     <none>
 * Callees:
 *     IoDiagTraceDevicesRundown @ 0x140A44A50 (IoDiagTraceDevicesRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  return IoDiagTraceDevicesRundown();
}
