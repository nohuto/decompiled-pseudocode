/*
 * XREFs of FsRtlReleaseFile @ 0x14098D3F0
 * Callers:
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     FsRtlCreateSectionForDataScan @ 0x140443420 (FsRtlCreateSectionForDataScan.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     MiCallCreateSectionFilters @ 0x14098C3A8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 * Callees:
 *     IoGetBaseFileSystemDeviceObject @ 0x14025B7C0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14025D040 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14025D480 (FsFilterPerformCompletionCallbacks.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140355D40 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterCtrlInit @ 0x1404215D0 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebp
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  bool v13; // al
  int v14; // eax
  PVOID FsContext; // rax
  struct _ERESOURCE *v16; // rcx
  struct _DRIVER_OBJECT *v17; // rbx
  int v18[4]; // [rsp+30h] [rbp-288h] BYREF
  char v19[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v21; // [rsp+50h] [rbp-268h]
  char v22; // [rsp+80h] [rbp-238h]

  memset_0(v19, 0, 0x238uLL);
  v2 = 0;
  v3 = v19;
  v18[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v13 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
      || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v13 )
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
        guard_dispatch_icall_no_overrides(FileObject, v6);
      }
      else
      {
        v2 = -1073741808;
      }
      v18[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v19, 254, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
  v14 = FsFilterPerformCallbacks((__int64)v19, 0, 0, v18);
  v2 = v14;
  if ( v14 < 0 )
    goto LABEL_24;
  if ( !v14 )
  {
    FileObject = v21;
    if ( (v22 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v14 != 294 )
    v2 = v14;
LABEL_24:
  if ( v2 == -1073741808 && (v18[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v16 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v16 )
        ExReleaseResourceLite(v16);
    }
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v19, v2, v7, v8);
    FsFilterCtrlFree((__int64)v19);
  }
  KeLeaveCriticalRegionThread();
}
