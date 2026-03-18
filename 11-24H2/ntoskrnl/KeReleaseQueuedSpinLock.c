/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x140322C90
 * Callers:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     IopStartNextPacket @ 0x140391548 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x14039313C (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x140393700 (IoStartPacket.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     WmipNotificationIrpCancel @ 0x1403DCA30 (WmipNotificationIrpCancel.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403DCA9C (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlUninitializeFileLock @ 0x1403DF750 (FsRtlUninitializeFileLock.c)
 *     IoDetachDevice @ 0x1403F1A70 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1403F86DC (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x1403F9050 (CcDereferenceVacbArray.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1404190F0 (FsRtlpCancelOplockRHIrp.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14041A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140464EEC (IoGetLowerDeviceObjectWithTag.c)
 *     IopGetMountFlag @ 0x14046ED70 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x140471E40 (IoEnumerateDeviceObjectList.c)
 *     IopInsertRemoveDevice @ 0x140483320 (IopInsertRemoveDevice.c)
 *     RawInitiateDeleteVolume @ 0x14048419C (RawInitiateDeleteVolume.c)
 *     IoReleaseVpbSpinLock @ 0x1404864D0 (IoReleaseVpbSpinLock.c)
 *     IopMountInitializeVpb @ 0x14048B7DC (IopMountInitializeVpb.c)
 *     IoGetDriverObjectExtension @ 0x14048CF40 (IoGetDriverObjectExtension.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IopQueryVpbFlagsSafe @ 0x1404966C0 (IopQueryVpbFlagsSafe.c)
 *     IopCsqCancelRoutine @ 0x14049D370 (IopCsqCancelRoutine.c)
 *     IoGetDiskDeviceObject @ 0x14049E200 (IoGetDiskDeviceObject.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x14049FDC0 (FsRtlpCancelWaitingIrp.c)
 *     PnpIsChainDereferenced @ 0x1404A1BD0 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404A3504 (PpMarkDeviceStackExtensionFlag.c)
 *     CcAllocateInitializeVacbArray @ 0x1404A41CC (CcAllocateInitializeVacbArray.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     PnpFindMountableDevice @ 0x1404A752C (PnpFindMountableDevice.c)
 *     IopResurrectDriver @ 0x1404A75D8 (IopResurrectDriver.c)
 *     IopInterlockedRemoveHeadList @ 0x1404AB360 (IopInterlockedRemoveHeadList.c)
 *     IoAllocateDriverObjectExtension @ 0x1404AE3E0 (IoAllocateDriverObjectExtension.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404B1160 (IoAdjustStackSizeForRedirection.c)
 *     IopCheckStackForTransactionSupport @ 0x1404B365C (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x1404BC1EC (RawCheckForDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1404BCF58 (IopReferenceVerifyVpb.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BD5E0 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1404BE49C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404C1E7C (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C3E64 (PnpLockMountableDevice.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA500 (FsRtlPrivateCancelFileLockIrp.c)
 *     IopCheckUnloadDriver @ 0x1404D2CBC (IopCheckUnloadDriver.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1388 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E3964 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockCleanup @ 0x1404E3BFC (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     CcInitializePartitionVacbs @ 0x14057D3B0 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x14057D4C0 (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140580A94 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140580DB0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x1405813CC (FsRtlpOplockBreakToNone.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x140581C60 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopDisassociateThreadIrp @ 0x14059607C (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140596398 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertHeadList @ 0x140596498 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x1405964F0 (IopInterlockedInsertTailList.c)
 *     IopGetFsRegistrationInProgress @ 0x140596EA8 (IopGetFsRegistrationInProgress.c)
 *     IopSetFsRegistrationInProgress @ 0x140596F40 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A6848 (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1405A6B40 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A8D00 (PiSwIrpCancelStartCreate.c)
 *     RawVerifyVolume @ 0x1405E6F0C (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x14062FAD0 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8D650 (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B92A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B92A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140B92AF0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B92B98 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140B92CA8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // di
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v3 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v2);
  v4 = (__int64)*v2;
  if ( !*v2 )
  {
    if ( v2 == (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
      goto LABEL_4;
    v4 = KxWaitForLockChainValid((__int64 *)v2);
  }
  *v2 = 0LL;
  v5 = (__int64)v2[1];
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v4 + 8), v5)) & 4) != 0 )
  {
    _InterlockedOr(v14, 0);
    v8 = KeDisableInterrupts();
    KiHaltOnAddressWakeEntireList(v9, _InterlockedExchange64((volatile __int64 *)(v7 + 8 * v6), 0LL));
    if ( v8 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
LABEL_4:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
}
