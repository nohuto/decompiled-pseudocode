/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     CcNotifyExternalCachesInternal @ 0x1403A8058 (CcNotifyExternalCachesInternal.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1404070D8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140407388 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1404074C0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     IvtIommuWaitCommand @ 0x140447284 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1404473D4 (IvtIommuSendCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x140448D70 (HsaAttachDeviceDomainInternal.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     CcSerializeWithLazyWriter @ 0x1404A9B10 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404BE1B0 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404D46BC (IvtAllocateContextTable.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB970 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DBC28 (CcUpdateTimeOnLogHandles.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A25C (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056A710 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056AB70 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14056AE30 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056C4A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056C85C (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyConfigureAts @ 0x14056CBF0 (IvtLegacyConfigureAts.c)
 *     IvtLegacySetDevicePasidTable @ 0x14056D860 (IvtLegacySetDevicePasidTable.c)
 *     IvtSetDevicePasidTable @ 0x14056DE50 (IvtSetDevicePasidTable.c)
 *     HsaAllocatePasidTables @ 0x14056EF5C (HsaAllocatePasidTables.c)
 *     HsaFreePasidTables @ 0x14056F99C (HsaFreePasidTables.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x140570B5C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIsThereDirtyDataEx @ 0x140578D80 (CcIsThereDirtyDataEx.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x1406202E0 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExpAcquireSvmAgentsLock @ 0x14064CB1C (ExpAcquireSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140B443CC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip(LockHandle, v3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
}
