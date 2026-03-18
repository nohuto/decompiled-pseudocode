/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403D75C8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403D7FE8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1403D8120 (ExpReleaseDisownedFastResourceExclusive.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcNotifyExternalCachesInternal @ 0x14043C550 (CcNotifyExternalCachesInternal.c)
 *     HsaAttachDeviceDomainInternal @ 0x140445EF0 (HsaAttachDeviceDomainInternal.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     CcSerializeWithLazyWriter @ 0x1404AADF4 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404BD260 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404D4448 (IvtAllocateContextTable.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB060 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DB318 (CcUpdateTimeOnLogHandles.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056D55C (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056DA10 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056DE70 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14056E130 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14056E600 (IvtFreeScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056F7A0 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056FB5C (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyConfigureAts @ 0x14056FEF0 (IvtLegacyConfigureAts.c)
 *     IvtLegacySetDevicePasidTable @ 0x140570B60 (IvtLegacySetDevicePasidTable.c)
 *     IvtSetDevicePasidTable @ 0x140571150 (IvtSetDevicePasidTable.c)
 *     HsaAllocatePasidTables @ 0x14057225C (HsaAllocatePasidTables.c)
 *     HsaFreePasidTables @ 0x140572C9C (HsaFreePasidTables.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x140573E5C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIsThereDirtyDataEx @ 0x14057C090 (CcIsThereDirtyDataEx.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x14062C2A0 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExpAcquireSvmAgentsLock @ 0x1406589FC (ExpAcquireSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140B543CC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  _QWORD *v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip((__int64)LockHandle, v3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
}
