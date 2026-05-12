/*
 * XREFs of NvmeAdapterAcquireRemoveLock @ 0x1400CC668
 * Callers:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     StorpQueueWorkItemInternal @ 0x140075B64 (StorpQueueWorkItemInternal.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 *     StorpLogNvmePerAdapterStatistics @ 0x1400B0974 (StorpLogNvmePerAdapterStatistics.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 *     NvmeAdapterPowerIrp @ 0x1400D54F4 (NvmeAdapterPowerIrp.c)
 *     NvmeAdapterUpdateDynamicRegistrySettings @ 0x1400DAD00 (NvmeAdapterUpdateDynamicRegistrySettings.c)
 *     NvmePnpAsyncStartCompleteWorker @ 0x1400DCCB0 (NvmePnpAsyncStartCompleteWorker.c)
 *     NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011536C (NvmeNamespaceWaitForPendingRequestsDrain.c)
 *     NvmeAdapterPowerDownDevice @ 0x14012F2AC (NvmeAdapterPowerDownDevice.c)
 *     NvmeAdapterPowerUpDevice @ 0x14012FCD8 (NvmeAdapterPowerUpDevice.c)
 *     NvmeAdapterQuerySystemPowerIrp @ 0x140130D58 (NvmeAdapterQuerySystemPowerIrp.c)
 *     NvmeAdapterSetSystemPowerIrp @ 0x140131D2C (NvmeAdapterSetSystemPowerIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterAcquireRemoveLock(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152)) == 0 ? 0xC0000056 : 0;
}
