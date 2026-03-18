/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     CcUnmapAndPurge @ 0x14023F5D8 (CcUnmapAndPurge.c)
 *     MiQueuePageAccessLog @ 0x140244A68 (MiQueuePageAccessLog.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402CDC90 (ExReinitializeResourceLite.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     MiReturnCcAccessLog @ 0x140379C6C (MiReturnCcAccessLog.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     CcChangeBackingFileObject @ 0x140450FA0 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x1404511DC (MmChangeSectionBackingFile.c)
 *     MiStoreFreeWriteSupport @ 0x14045C4C4 (MiStoreFreeWriteSupport.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     IopBoostThreadCallback @ 0x140463B90 (IopBoostThreadCallback.c)
 *     MmFreeAccessPfnBuffer @ 0x14046B30C (MmFreeAccessPfnBuffer.c)
 *     PspJobDelete @ 0x1404EE9D0 (PspJobDelete.c)
 *     KiMonitorCacheErrata @ 0x1405C38F0 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x1405CC630 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x14060CB08 (SmTerminateStoreProcess.c)
 *     ObpUnlockDirectory @ 0x1408424A0 (ObpUnlockDirectory.c)
 *     VrpRegistryCallback @ 0x140849230 (VrpRegistryCallback.c)
 *     PspChargeProcessWakeCounter @ 0x14088FD70 (PspChargeProcessWakeCounter.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x140929080 (VrpDestroyNamespaceNode.c)
 *     ObpLockChildDirectory @ 0x1409B7950 (ObpLockChildDirectory.c)
 *     VrpFreeKeyContext @ 0x1409F6FD8 (VrpFreeKeyContext.c)
 *     MiObtainSectionForDriver @ 0x140A18544 (MiObtainSectionForDriver.c)
 *     MiDeleteTrimViewInfoList @ 0x140A4C370 (MiDeleteTrimViewInfoList.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 *     NtQueryDirectoryObject @ 0x140AC44D0 (NtQueryDirectoryObject.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
