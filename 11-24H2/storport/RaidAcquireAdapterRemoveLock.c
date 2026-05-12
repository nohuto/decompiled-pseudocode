/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x140009B34
 * Callers:
 *     RaidAdapterQuerySystemPowerIrp @ 0x140008728 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x140008C1C (RaidAdapterPowerUpDevice.c)
 *     RaUnitGetInstances @ 0x1400097E8 (RaUnitGetInstances.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1400099D8 (RaidAdapterSetSystemPowerIrp.c)
 *     StorEtwEnableCallback @ 0x140009BE0 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     RaidAdapterUpdateDynamicRegistrySettings @ 0x140064F60 (RaidAdapterUpdateDynamicRegistrySettings.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x140065F40 (RaidPnPAsyncStartCompleteWorker.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     StorpQueueWorkItemInternal @ 0x140075B64 (StorpQueueWorkItemInternal.c)
 *     RaUnitStorageFreeDumpInfo @ 0x14009A210 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 *     StorpLogPerAdapterStatistics @ 0x1400B0A00 (StorpLogPerAdapterStatistics.c)
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336)) == 0 ? 0xC0000056 : 0;
}
