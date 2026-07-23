/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60
 * Callers:
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     MiStoreFreeWriteSupport @ 0x1402DD6E0 (MiStoreFreeWriteSupport.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402E5910 (ExReinitializeResourceLite.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     CcChangeBackingFileObject @ 0x140446404 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x14044663C (MmChangeSectionBackingFile.c)
 *     MiReturnCcAccessLog @ 0x14044B208 (MiReturnCcAccessLog.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     IopBoostThreadCallback @ 0x14045A2D0 (IopBoostThreadCallback.c)
 *     MmFreeAccessPfnBuffer @ 0x140463F10 (MmFreeAccessPfnBuffer.c)
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     KiMonitorCacheErrata @ 0x1405C0EC0 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C9DA0 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x14060B0C8 (SmTerminateStoreProcess.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     VrpRegistryCallback @ 0x1408454F0 (VrpRegistryCallback.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x14092B1C0 (VrpDestroyNamespaceNode.c)
 *     ObpLockChildDirectory @ 0x1409AF090 (ObpLockChildDirectory.c)
 *     VrpFreeKeyContext @ 0x1409EACB8 (VrpFreeKeyContext.c)
 *     MiObtainSectionForDriver @ 0x140A116B4 (MiObtainSectionForDriver.c)
 *     MiDeleteTrimViewInfoList @ 0x140A42F00 (MiDeleteTrimViewInfoList.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     NtQueryDirectoryObject @ 0x140AC1EB0 (NtQueryDirectoryObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
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
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
