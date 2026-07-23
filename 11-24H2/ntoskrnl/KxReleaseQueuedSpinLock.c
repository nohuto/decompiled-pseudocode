/*
 * XREFs of KxReleaseQueuedSpinLock @ 0x1402CA740
 * Callers:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x140239FB0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140240190 (MiGetNextPageTablePte.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     CcNotifyExternalCachesInternal @ 0x140265F30 (CcNotifyExternalCachesInternal.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1402F10A8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1402F1AC8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140355D40 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopIncrementVpbRefCount @ 0x1403566B0 (IopIncrementVpbRefCount.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopDereferenceVpbAndFree @ 0x140357B78 (IopDereferenceVpbAndFree.c)
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     KeInsertDeviceQueue @ 0x140388190 (KeInsertDeviceQueue.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x140389C1C (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x14038A4B0 (KeRemoveDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x14038CF30 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14038D180 (KeInsertByKeyDeviceQueue.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     WmipNotificationIrpCancel @ 0x1403CB730 (WmipNotificationIrpCancel.c)
 *     IopInterlockedDecrementUlong @ 0x1403E56B0 (IopInterlockedDecrementUlong.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x1403EF160 (CcDereferenceVacbArray.c)
 *     KiAbReleaseLocksForEntry @ 0x140407AB8 (KiAbReleaseLocksForEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 *     HsaAttachDeviceDomainInternal @ 0x14043E2A0 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x14043EE30 (CcSetLogHandleForFileEx.c)
 *     CcIsThereDirtyLoggedPages @ 0x14044A240 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14044F570 (CcWaitForUninitializeCacheMap.c)
 *     HalpDmaReleaseBufferMappings @ 0x14044FCA4 (HalpDmaReleaseBufferMappings.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404566F0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcSerializeWithLazyWriter @ 0x1404A4FF4 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404B83D0 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404CD658 (IvtAllocateContextTable.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     CcIncrementWriteBehindPriority @ 0x1404D4A80 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404D4D38 (CcUpdateTimeOnLogHandles.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
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
 *     DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper @ 0x14062DAC0 (DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper.c)
 *     ExpReleaseSvmAgentsLock @ 0x140657694 (ExpReleaseSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 */

char __fastcall KxReleaseQueuedSpinLock(volatile signed __int64 **a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v12; // ett
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(a1);
    v3 = (__int64)*a1;
    if ( !*a1 )
    {
      v3 = _InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1);
      if ( a1 == (volatile signed __int64 **)v3 )
        return v3;
      v3 = KxWaitForLockChainValid(a1);
    }
    v4 = v3 + 8;
    *a1 = 0LL;
    v5 = (__int64)a1[1];
    LOBYTE(v3) = v5 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), v5);
    if ( (v3 & 4) != 0 )
    {
      _InterlockedOr(v14, 0);
      v8 = KeDisableInterrupts(v5, a2, (v4 >> 5) & 0x7F, KiHaltOnAddressHashTable);
      LOBYTE(v3) = KiHaltOnAddressWakeEntireList(v9, _InterlockedExchange64((volatile __int64 *)(v7 + 8 * v6), 0LL));
      if ( v8 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          LODWORD(v3) = *SchedulerAssist;
          do
          {
            v12 = v3;
            LODWORD(v3) = _InterlockedCompareExchange(SchedulerAssist, v3 & 0xFFDFFFFF, v3);
          }
          while ( v12 != (_DWORD)v3 );
          if ( (v3 & 0x200000) != 0 )
            LOBYTE(v3) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    LOBYTE(v3) = KiReleaseQueuedSpinLockInstrumented(a1, retaddr);
  }
  return v3;
}
