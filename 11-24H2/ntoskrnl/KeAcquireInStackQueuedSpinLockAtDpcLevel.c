/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760
 * Callers:
 *     CcNotifyExternalCachesInternal @ 0x140265F30 (CcNotifyExternalCachesInternal.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1402F10A8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1402F1AC8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     HsaAttachDeviceDomainInternal @ 0x14043E2A0 (HsaAttachDeviceDomainInternal.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     CcSerializeWithLazyWriter @ 0x1404A4FF4 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404B83D0 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404CD658 (IvtAllocateContextTable.c)
 *     CcIncrementWriteBehindPriority @ 0x1404D4A80 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404D4D38 (CcUpdateTimeOnLogHandles.c)
 *     IvtAllocateScalableModePasidTables @ 0x14056A9EC (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14056B300 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14056B5C0 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     IvtLegacyAllocateScalableModePasidTables @ 0x14056CC30 (IvtLegacyAllocateScalableModePasidTables.c)
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyConfigureAts @ 0x14056D380 (IvtLegacyConfigureAts.c)
 *     IvtLegacySetDevicePasidTable @ 0x14056DFF0 (IvtLegacySetDevicePasidTable.c)
 *     IvtSetDevicePasidTable @ 0x14056E5E0 (IvtSetDevicePasidTable.c)
 *     HsaAllocatePasidTables @ 0x14056F6EC (HsaAllocatePasidTables.c)
 *     HsaFreePasidTables @ 0x14057012C (HsaFreePasidTables.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405712EC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIsThereDirtyDataEx @ 0x140579520 (CcIsThereDirtyDataEx.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x14062A860 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExpAcquireSvmAgentsLock @ 0x14065709C (ExpAcquireSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140B5641C (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
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
