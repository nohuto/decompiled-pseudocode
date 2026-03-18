/*
 * XREFs of PipAreDriversLoaded @ 0x1404E6B3C
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408D15E8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x140465318 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
}
