/*
 * XREFs of KxReleaseQueuedSpinLock @ 0x140321BB0
 * Callers:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     MiLockPageLeafPageTable @ 0x140283A60 (MiLockPageLeafPageTable.c)
 *     KeTerminateThread @ 0x1402A6488 (KeTerminateThread.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopIncrementVpbRefCount @ 0x1402D5430 (IopIncrementVpbRefCount.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopDereferenceVpbAndFree @ 0x1402D68F8 (IopDereferenceVpbAndFree.c)
 *     MiResolvePageTablePage @ 0x1402D86D0 (MiResolvePageTablePage.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402DE8B0 (MiGetNextPageTablePte.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E1C10 (MiUnlockProbePacketWorkingSet.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     KeInsertDeviceQueue @ 0x14038E850 (KeInsertDeviceQueue.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaAcquireBufferMappings @ 0x1403902DC (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     KeRemoveDeviceQueue @ 0x140390B70 (KeRemoveDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140393600 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140393850 (KeInsertByKeyDeviceQueue.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     IvtIommuWaitCommand @ 0x1403BB7F4 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1403BB944 (IvtIommuSendCommand.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403D75C8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403D7FE8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1403D8120 (ExpReleaseDisownedFastResourceExclusive.c)
 *     WmipNotificationIrpCancel @ 0x1403DCA30 (WmipNotificationIrpCancel.c)
 *     IopInterlockedDecrementUlong @ 0x1403F1990 (IopInterlockedDecrementUlong.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x1403F9050 (CcDereferenceVacbArray.c)
 *     KiAbReleaseLocksForEntry @ 0x140417D08 (KiAbReleaseLocksForEntry.c)
 *     KiAbForceProcessLockEntry @ 0x1404183E4 (KiAbForceProcessLockEntry.c)
 *     CcNotifyExternalCachesInternal @ 0x14043C550 (CcNotifyExternalCachesInternal.c)
 *     HsaAttachDeviceDomainInternal @ 0x140445EF0 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x14044639C (HsaIommuSendCommand.c)
 *     CcSetLogHandleForFileEx @ 0x140446A80 (CcSetLogHandleForFileEx.c)
 *     CcIsThereDirtyLoggedPages @ 0x140455490 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14045A120 (CcWaitForUninitializeCacheMap.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045A854 (HalpDmaReleaseBufferMappings.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1404610E0 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcSerializeWithLazyWriter @ 0x1404AADF4 (CcSerializeWithLazyWriter.c)
 *     CcSetLoggedDataThreshold @ 0x1404BD260 (CcSetLoggedDataThreshold.c)
 *     IvtAllocateContextTable @ 0x1404D4448 (IvtAllocateContextTable.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     CcIncrementWriteBehindPriority @ 0x1404DB060 (CcIncrementWriteBehindPriority.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DB318 (CcUpdateTimeOnLogHandles.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
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
 *     DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper @ 0x14062F500 (DifKeReleaseInStackQueuedSpinLockFromDpcLevelWrapper.c)
 *     ExpReleaseSvmAgentsLock @ 0x140658FF4 (ExpReleaseSvmAgentsLock.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
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
      v8 = KeDisableInterrupts(v5, a2, (v4 >> 5) & 0x7F);
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
