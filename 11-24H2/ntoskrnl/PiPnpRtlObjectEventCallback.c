/*
 * XREFs of PiPnpRtlObjectEventCallback @ 0x1408B76C0
 * Callers:
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B71A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 * Callees:
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCallback(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  return PiPnpRtlObjectEventWorker(a2, a3, a4, a5, 0);
}
