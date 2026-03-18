/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x140301270
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402A1BDC (IopAttachDeviceToDeviceStackSafe.c)
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     IopCopyCompleteReadIrp @ 0x1402D3280 (IopCopyCompleteReadIrp.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     IoDetachDevice @ 0x1402FD9C0 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopCompleteUnloadOrDelete @ 0x1402FEF84 (IopCompleteUnloadOrDelete.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140359D98 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopGetDevicePDO @ 0x14035AF78 (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14035AFE0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1403EE08C (FsRtlNotifySetCancelRoutine.c)
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 *     IopMountInitializeVpb @ 0x14041F650 (IopMountInitializeVpb.c)
 *     IopIncrementVpbRefCount @ 0x14041F710 (IopIncrementVpbRefCount.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     CcDereferenceVacbArray @ 0x14043C8D0 (CcDereferenceVacbArray.c)
 *     IopDereferenceVpbAndFree @ 0x140441A14 (IopDereferenceVpbAndFree.c)
 *     IopStartNextPacket @ 0x140456F34 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140456FF4 (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x1404571C0 (IoStartPacket.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140465A0C (IoGetLowerDeviceObjectWithTag.c)
 *     IopGetMountFlag @ 0x1404702C8 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x140473180 (IoEnumerateDeviceObjectList.c)
 *     IopInsertRemoveDevice @ 0x1404824E0 (IopInsertRemoveDevice.c)
 *     IoAcquireVpbSpinLock @ 0x140483080 (IoAcquireVpbSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 *     IoGetDriverObjectExtension @ 0x14048D9A0 (IoGetDriverObjectExtension.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     IopQueryVpbFlagsSafe @ 0x140496C34 (IopQueryVpbFlagsSafe.c)
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
 *     IopCheckUnloadDriver @ 0x1404D2DEC (IopCheckUnloadDriver.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
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
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14057D990 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlDisallowLegacyFilterOnDevice @ 0x14057E4B0 (FsRtlDisallowLegacyFilterOnDevice.c)
 *     IopDisassociateThreadIrp @ 0x140592A1C (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140592D38 (IopGetDriverPathInformation.c)
 *     IopInterlockedInsertHeadList @ 0x140592E38 (IopInterlockedInsertHeadList.c)
 *     IopInterlockedInsertTailList @ 0x140592E90 (IopInterlockedInsertTailList.c)
 *     IopGetFsRegistrationInProgress @ 0x1405937F8 (IopGetFsRegistrationInProgress.c)
 *     IopSetFsRegistrationInProgress @ 0x140593890 (IopSetFsRegistrationInProgress.c)
 *     IopSetLegacyResourcesFlag @ 0x1405A302C (IopSetLegacyResourcesFlag.c)
 *     RawVerifyVolume @ 0x1405DAE0C (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x140620A10 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140B5E130 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140B7D670 (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B82A50 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B82AB4 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140B82B10 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B82BB8 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140B82CC8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *v3; // rcx
  volatile __int64 *p_Lock; // rax
  struct _KPRCB **v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v3 = (struct _KPRCB *)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  p_Lock = (volatile __int64 *)&v3->CurrentThread->Header.Lock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v5 = (struct _KPRCB **)_InterlockedExchange64(p_Lock, (__int64)v3);
    if ( v5 )
      KxWaitForLockOwnerShip(v3, v5);
    return CurrentIrql;
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)v3, p_Lock);
    return CurrentIrql;
  }
}
