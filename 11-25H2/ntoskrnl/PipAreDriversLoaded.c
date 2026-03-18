/*
 * XREFs of PipAreDriversLoaded @ 0x1404E6CA8
 * Callers:
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1408CEEF8 (PiControlGetUserFlagsFromDeviceNode.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x140466564 (PipAreDriversLoadedWorker.c)
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8 (Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline();
  return PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
}
