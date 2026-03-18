/*
 * XREFs of KeAcquireQueuedSpinLock @ 0x1402D6AF0
 * Callers:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     IopCopyCompleteReadIrp @ 0x140268580 (IopCopyCompleteReadIrp.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopIncrementVpbRefCount @ 0x1402D5430 (IopIncrementVpbRefCount.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopDereferenceVpbAndFree @ 0x1402D68F8 (IopDereferenceVpbAndFree.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     PnpGetRelatedTargetDevice @ 0x1403750B4 (PnpGetRelatedTargetDevice.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     IopStartNextPacket @ 0x140391548 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x14039313C (IopStartNextPacketByKey.c)
 *     IoStartPacket @ 0x140393700 (IoStartPacket.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
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
 *     IoGetLowerDeviceObjectWithTag @ 0x140464EEC (IoGetLowerDeviceObjectWithTag.c)
 *     IopGetMountFlag @ 0x14046ED70 (IopGetMountFlag.c)
 *     IoEnumerateDeviceObjectList @ 0x140471E40 (IoEnumerateDeviceObjectList.c)
 *     IopInsertRemoveDevice @ 0x140483320 (IopInsertRemoveDevice.c)
 *     IoAcquireVpbSpinLock @ 0x1404839B0 (IoAcquireVpbSpinLock.c)
 *     RawInitiateDeleteVolume @ 0x14048419C (RawInitiateDeleteVolume.c)
 *     IopMountInitializeVpb @ 0x14048B7DC (IopMountInitializeVpb.c)
 *     IoGetDriverObjectExtension @ 0x14048CF40 (IoGetDriverObjectExtension.c)
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IopQueryVpbFlagsSafe @ 0x1404966C0 (IopQueryVpbFlagsSafe.c)
 *     IoGetDiskDeviceObject @ 0x14049E200 (IoGetDiskDeviceObject.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
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
 *     RawVerifyVolume @ 0x1405E6F0C (RawVerifyVolume.c)
 *     DifKeAcquireQueuedSpinLockWrapper @ 0x14062C9D0 (DifKeAcquireQueuedSpinLockWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140B6D210 (IoUnregisterShutdownNotification.c)
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8D650 (IovpExamineIrpStackForwarding.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140B92A30 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B92A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140B92AF0 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140B92B98 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilRelateDeviceObjects @ 0x140B92CA8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

KIRQL __stdcall KeAcquireQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number)
{
  KIRQL CurrentIrql; // di
  char *v3; // rcx
  volatile __int64 *v4; // rax
  _QWORD *v5; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number;
  v4 = (volatile __int64 *)*((_QWORD *)v3 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v5 = (_QWORD *)_InterlockedExchange64(v4, (__int64)v3);
    if ( v5 )
      KxWaitForLockOwnerShip((__int64)v3, v5);
    return CurrentIrql;
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v3, v4);
    return CurrentIrql;
  }
}
