/*
 * XREFs of NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1400FDD98 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceFlushIrp @ 0x1401028B4 (NvmeNamespaceFlushIrp.c)
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 *     NvmeNamespacePowerIrp @ 0x140106734 (NvmeNamespacePowerIrp.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceScsiIrp @ 0x14010D8B8 (NvmeNamespaceScsiIrp.c)
 *     NvmeNamespaceSystemThread @ 0x14011D840 (NvmeNamespaceSystemThread.c)
 *     NvmeNamespaceSystemThread2 @ 0x14011D980 (NvmeNamespaceSystemThread2.c)
 *     NvmeNamespacePowerRequiredStep1 @ 0x140134260 (NvmeNamespacePowerRequiredStep1.c)
 *     NvmeNamespacePreProcessSetDevicePowerIrp @ 0x140134628 (NvmeNamespacePreProcessSetDevicePowerIrp.c)
 *     NvmeNamespaceSetSystemPowerIrp @ 0x140135BF8 (NvmeNamespaceSetSystemPowerIrp.c)
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     NvmeNamespaceCheckRemoveState @ 0x1400FC1F4 (NvmeNamespaceCheckRemoveState.c)
 */

__int64 __fastcall NvmeNamespaceAcquireRemoveLock(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = NvmeNamespaceCheckRemoveState(), v2 = result, (int)result >= 0) )
  {
    if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120)) )
      return (unsigned int)-1073741738;
    return v2;
  }
  return result;
}
