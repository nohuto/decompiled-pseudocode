/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x14028B980
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     IoDetachDevice @ 0x1402FD9C0 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402FDE30 (IopVerifyDeviceObjectOnStack.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     IopGetDevicePDO @ 0x14035AF78 (IopGetDevicePDO.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403EE08C (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14041B390 (FsRtlpCancelOplockRHIrp.c)
 *     IopMountInitializeVpb @ 0x14041F650 (IopMountInitializeVpb.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140429024 (FsRtlpCancelWaitingIrp.c)
 *     CcDereferenceVacbArray @ 0x14043C8D0 (CcDereferenceVacbArray.c)
 *     IopStartNextPacket @ 0x140456F34 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140456FF4 (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x1404571C0 (IoStartPacket.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140465A0C (IoGetLowerDeviceObjectWithTag.c)
 *     IopGetMountFlag @ 0x1404702C8 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x140473180 (IoEnumerateDeviceObjectList.c)
 *     IopInsertRemoveDevice @ 0x1404824E0 (IopInsertRemoveDevice.c)
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 *     WmipNotificationIrpCancel @ 0x1404855E0 (WmipNotificationIrpCancel.c)
 *     IoReleaseVpbSpinLock @ 0x1404871D0 (IoReleaseVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x14048D9A0 (IoGetDriverObjectExtension.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     IopQueryVpbFlagsSafe @ 0x140496C34 (IopQueryVpbFlagsSafe.c)
 *     IopCsqCancelRoutine @ 0x14049E250 (IopCsqCancelRoutine.c)
 *     IoGetDiskDeviceObject @ 0x14049F0B0 (IoGetDiskDeviceObject.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1404A08B8 (CcGetRandomVacbArrayWithReference.c)
 *     PnpIsChainDereferenced @ 0x1404A2190 (PnpIsChainDereferenced.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404A36F4 (PpMarkDeviceStackExtensionFlag.c)
 *     CcAllocateInitializeVacbArray @ 0x1404A3F4C (CcAllocateInitializeVacbArray.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     PnpFindMountableDevice @ 0x1404A6B84 (PnpFindMountableDevice.c)
 *     IopResurrectDriver @ 0x1404A6C30 (IopResurrectDriver.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x1404A9F40 (IopInterlockedRemoveHeadList.c)
 *     IoAllocateDriverObjectExtension @ 0x1404AD510 (IoAllocateDriverObjectExtension.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404B0160 (IoAdjustStackSizeForRedirection.c)
 *     IopCheckStackForTransactionSupport @ 0x1404B38C4 (IopCheckStackForTransactionSupport.c)
 *     RawCheckForDeleteVolume @ 0x1404BD08C (RawCheckForDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1404BDF28 (IopReferenceVerifyVpb.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BE63C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1404BFB50 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404C5784 (PnpLockMountableDevice.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA600 (FsRtlPrivateCancelFileLockIrp.c)
 *     IopCheckUnloadDriver @ 0x1404D2DEC (IopCheckUnloadDriver.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1404E18C8 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x1404E44FC (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1404E4794 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockCleanup @ 0x1404E4B20 (FsRtlpOplockCleanup.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     CcInitializePartitionVacbs @ 0x14057A08C (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x14057A19C (CcUninitializePartitionVacbs.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14057E4B0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopDisassociateThreadIrp @ 0x140592A1C (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140592D38 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertHeadList @ 0x140592E38 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x140592E90 (IopInterlockedInsertTailList.c)
 *     IopGetFsRegistrationInProgress @ 0x1405937F8 (IopGetFsRegistrationInProgress.c)
 *     IopSetFsRegistrationInProgress @ 0x140593890 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A302C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1405A3330 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1405A54F0 (PiSwIrpCancelStartCreate.c)
 *     RawVerifyVolume @ 0x1405DAE0C (RawVerifyVolume.c)
 *     DifKeReleaseQueuedSpinLockWrapper @ 0x140623B10 (DifKeReleaseQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140B5E130 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140B7D670 (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B82A50 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B82AB4 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140B82B10 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B82BB8 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140B82CC8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
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
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  v3 = OldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v2);
    v4 = (__int64)*v2;
    if ( !*v2 )
    {
      if ( v2 == (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
        goto LABEL_9;
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
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
      }
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
  }
LABEL_9:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v3);
  __writecr8(v3);
}
