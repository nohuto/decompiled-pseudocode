/*
 * XREFs of PipAreDriversLoaded @ 0x1404DD238
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEFD8 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14045B9FC (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
}
