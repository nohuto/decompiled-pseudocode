/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860
 * Callers:
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     CcUnmapAndPurge @ 0x1402C3E48 (CcUnmapAndPurge.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiQueuePageAccessLog @ 0x14032382C (MiQueuePageAccessLog.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403A4670 (ExReinitializeResourceLite.c)
 *     MiReturnCcAccessLog @ 0x1403C3A8C (MiReturnCcAccessLog.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     CcChangeBackingFileObject @ 0x14044F7A0 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x14044F9DC (MmChangeSectionBackingFile.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     MiStoreFreeWriteSupport @ 0x1404638C0 (MiStoreFreeWriteSupport.c)
 *     IopBoostThreadCallback @ 0x140464570 (IopBoostThreadCallback.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     MmFreeAccessPfnBuffer @ 0x14046CB08 (MmFreeAccessPfnBuffer.c)
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 *     KiMonitorCacheErrata @ 0x1405BF810 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C8060 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     VrpRegistryCallback @ 0x14084D490 (VrpRegistryCallback.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     PspChargeProcessWakeCounter @ 0x1408B2120 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     ObpLockChildDirectory @ 0x1409CD9D0 (ObpLockChildDirectory.c)
 *     VrpFreeKeyContext @ 0x1409FB3F4 (VrpFreeKeyContext.c)
 *     MiObtainSectionForDriver @ 0x140A13124 (MiObtainSectionForDriver.c)
 *     MiDeleteTrimViewInfoList @ 0x140A49668 (MiDeleteTrimViewInfoList.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 *     NtQueryDirectoryObject @ 0x140AC1020 (NtQueryDirectoryObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int64 v5; // rax
  bool v6; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)Object - 48, 0, 1u, Tag);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v6 = v5 <= 1;
  BugCheckParameter4 = v5 - 1;
  if ( v6 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48, *(_QWORD *)&Tag, v2, v3);
  }
}
