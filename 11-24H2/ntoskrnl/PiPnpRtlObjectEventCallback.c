/*
 * XREFs of PiPnpRtlObjectEventCallback @ 0x1408B9D10
 * Callers:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B97F8 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 * Callees:
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCallback(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  return PiPnpRtlObjectEventWorker(a2, a3, a4, a5, 0);
}
