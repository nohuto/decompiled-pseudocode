/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810
 * Callers:
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x1402AE990 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402B4B60 (MiGetNextPageTablePte.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KeInsertDeviceQueue @ 0x140334EB0 (KeInsertDeviceQueue.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403368EC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140336ED0 (KeRemoveDeviceQueue.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140359D98 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14035AFE0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     CcNotifyExternalCachesInternal @ 0x1403A8058 (CcNotifyExternalCachesInternal.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403AA230 (CcWaitForUninitializeCacheMap.c)
 *     KeTerminateThread @ 0x1403AB638 (KeTerminateThread.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1404070D8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140407388 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1404074C0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 *     KiAbReleaseLocksForEntry @ 0x14041ABB4 (KiAbReleaseLocksForEntry.c)
 *     IopIncrementVpbRefCount @ 0x14041F710 (IopIncrementVpbRefCount.c)
 *     IopInterlockedDecrementUlong @ 0x14041F970 (IopInterlockedDecrementUlong.c)
 *     CcDereferenceVacbArray @ 0x14043C8D0 (CcDereferenceVacbArray.c)
 *     IopDereferenceVpbAndFree @ 0x140441A14 (IopDereferenceVpbAndFree.c)
 *     IvtIommuWaitCommand @ 0x140447284 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1404473D4 (IvtIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x140448570 (CcSetLogHandleForFileEx.c)
 *     HsaAttachDeviceDomainInternal @ 0x140448D70 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x14044921C (HsaIommuSendCommand.c)
 *     CcIsThereDirtyLoggedPages @ 0x140454E50 (CcIsThereDirtyLoggedPages.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1404570C0 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140457310 (KeInsertByKeyDeviceQueue.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045AD48 (HalpDmaReleaseBufferMappings.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404623E0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     WmipNotificationIrpCancel @ 0x1404855E0 (WmipNotificationIrpCancel.c)
 *     CcSerializeWithLazyWriter @ 0x1404A9B10 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404BE1B0 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404D46BC (IvtAllocateContextTable.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB970 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DBC28 (CcUpdateTimeOnLogHandles.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
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
 *     DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper @ 0x140623540 (DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper.c)
 *     ExpReleaseSvmAgentsLock @ 0x14064D100 (ExpReleaseSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140B443CC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v1; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // di
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    return;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      return;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)&Next->Lock, (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v13, 0);
    v7 = KeDisableInterrupts(Lock, v1, ((unsigned __int64)&Next->Lock >> 5) & 0x7F);
    KiHaltOnAddressWakeEntireList(v8, _InterlockedExchange64((volatile __int64 *)(v6 + 8 * v5), 0LL));
    if ( v7 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v11 = *SchedulerAssist;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
}
