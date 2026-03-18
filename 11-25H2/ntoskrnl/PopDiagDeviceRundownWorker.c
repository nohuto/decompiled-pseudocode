/*
 * XREFs of PopDiagDeviceRundownWorker @ 0x140A40010
 * Callers:
 *     <none>
 * Callees:
 *     IoDiagTraceDevicesRundown @ 0x140A40030 (IoDiagTraceDevicesRundown.c)
 */

__int64 PopDiagDeviceRundownWorker()
{
  _InterlockedExchange(&PopDiagDeviceRundownRequests, 0);
  return IoDiagTraceDevicesRundown();
}
