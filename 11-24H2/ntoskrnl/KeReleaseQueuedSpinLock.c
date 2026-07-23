/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1402CB820
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     IopCopyCompleteReadIrp @ 0x14025FA30 (IopCopyCompleteReadIrp.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlpCancelWaitingIrp @ 0x1402B6B5C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     IopGetDevicePDO @ 0x140355B0C (IopGetDevicePDO.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     IopStartNextPacket @ 0x14038AE78 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x14038CA6C (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x14038D030 (IoStartPacket.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 *     FsRtlUninitializeFileLock @ 0x1403BF440 (FsRtlUninitializeFileLock.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403CB688 (FsRtlNotifySetCancelRoutine.c)
 *     WmipNotificationIrpCancel @ 0x1403CB730 (WmipNotificationIrpCancel.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     FsRtlpOplockCleanup @ 0x1403CDA80 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToII @ 0x1403CE520 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 *     IoDetachDevice @ 0x1403E5790 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1403EE7EC (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceVacbArray @ 0x1403EF160 (CcDereferenceVacbArray.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140408EA0 (FsRtlpCancelOplockRHIrp.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14045B61C (IoGetLowerDeviceObjectWithTag.c)
 *     IopGetMountFlag @ 0x140469480 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x14046C620 (IoEnumerateDeviceObjectList.c)
 *     IopInsertRemoveDevice @ 0x14047E864 (IopInsertRemoveDevice.c)
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 *     IoReleaseVpbSpinLock @ 0x140481AC0 (IoReleaseVpbSpinLock.c)
 *     IopMountInitializeVpb @ 0x1404865B0 (IopMountInitializeVpb.c)
 *     IoGetDriverObjectExtension @ 0x140487C60 (IoGetDriverObjectExtension.c)
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     IopQueryVpbFlagsSafe @ 0x140491050 (IopQueryVpbFlagsSafe.c)
 *     IopCsqCancelRoutine @ 0x140498170 (IopCsqCancelRoutine.c)
 *     IoGetDiskDeviceObject @ 0x140499000 (IoGetDiskDeviceObject.c)
 *     PnpIsChainDereferenced @ 0x14049CB60 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x14049E464 (PpMarkDeviceStackExtensionFlag.c)
 *     CcAllocateInitializeVacbArray @ 0x14049EF5C (CcAllocateInitializeVacbArray.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     PnpFindMountableDevice @ 0x1404A1F5C (PnpFindMountableDevice.c)
 *     IopResurrectDriver @ 0x1404A2008 (IopResurrectDriver.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A5984 (IopInterlockedRemoveHeadList.c)
 *     IoAllocateDriverObjectExtension @ 0x1404A8CF0 (IoAllocateDriverObjectExtension.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404AB9F0 (IoAdjustStackSizeForRedirection.c)
 *     IopCheckStackForTransactionSupport @ 0x1404ADECC (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x1404B6EAC (RawCheckForDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1404B80C8 (IopReferenceVerifyVpb.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404B8750 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1404B965C (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404BD46C (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404BF394 (PnpLockMountableDevice.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404C3A20 (FsRtlPrivateCancelFileLockIrp.c)
 *     IopCheckUnloadDriver @ 0x1404CBE7C (IopCheckUnloadDriver.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x14057A950 (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057DC84 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14057DEC0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057DFDC (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057E1D0 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockBreakToNone @ 0x14057E780 (FsRtlpOplockBreakToNone.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14057EFE0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopDisassociateThreadIrp @ 0x1405930AC (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1405933C8 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertHeadList @ 0x1405934C8 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x140593520 (IopInterlockedInsertTailList.c)
 *     IopGetFsRegistrationInProgress @ 0x140593E88 (IopGetFsRegistrationInProgress.c)
 *     IopSetFsRegistrationInProgress @ 0x140593F20 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A377C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1405A3A80 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A5CF0 (PiSwIrpCancelStartCreate.c)
 *     RawVerifyVolume @ 0x1405E4500 (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x14062E090 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140B6EAB0 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8F650 (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B94A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B94A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140B94AF0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B94B98 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140B94CA8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
