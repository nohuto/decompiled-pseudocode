/*
 * XREFs of FsRtlReleaseFile @ 0x14093E880
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140203918 (CcZeroEndOfLastPage.c)
 *     FsRtlCreateSectionForDataScan @ 0x140205500 (FsRtlCreateSectionForDataScan.c)
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     MiCallCreateSectionFilters @ 0x14093D838 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14093DCC0 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14035AFE0 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14035B110 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterCtrlFree @ 0x14035B19C (FsFilterCtrlFree.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14035C100 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14035DB50 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x140433350 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebp
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v11; // al
  int v12; // eax
  PVOID FsContext; // rax
  struct _ERESOURCE *v14; // rcx
  struct _DRIVER_OBJECT *v15; // rbx
  int v16[4]; // [rsp+30h] [rbp-288h] BYREF
  char v17[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v19; // [rsp+50h] [rbp-268h]
  char v20; // [rsp+80h] [rbp-238h]

  memset_0(v17, 0, 0x238uLL);
  v2 = 0;
  v3 = v17;
  v16[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v11 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v11 )
  {
    v3 = 0LL;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
      && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
        && FastIoDispatch->ReleaseFileForNtCreateSection )
      {
        guard_dispatch_icall_no_overrides(FileObject);
      }
      else
      {
        v2 = -1073741808;
      }
      v16[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v17, 254, (__int64)RelatedDeviceObject, v6, (__int64)FileObject, 0);
  v12 = FsFilterPerformCallbacks((__int64)v17, 0, 0, v16);
  v2 = v12;
  if ( v12 < 0 )
    goto LABEL_24;
  if ( !v12 )
  {
    FileObject = v19;
    if ( (v20 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v15 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v15->FastIoDispatch;
      AddDevice = v15->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v12 != 294 )
    v2 = v12;
LABEL_24:
  if ( v2 == -1073741808 && (v16[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v14 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v14 )
        ExReleaseResourceLite(v14);
    }
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v17, v2);
    FsFilterCtrlFree((__int64)v17);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
