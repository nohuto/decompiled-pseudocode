/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x1409D2090
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x14036F8DC (MiPrepareToFlushSubsection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140372F00 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x140374780 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x140374B44 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140374BC0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterCtrlInit @ 0x14042F400 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall FsRtlReleaseFileForCcFlush(PFILE_OBJECT FileObject)
{
  unsigned int v2; // ebx
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v12; // al
  int v13; // eax
  struct _DRIVER_OBJECT *v14; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v17; // rcx
  struct _ERESOURCE *v18; // rcx
  int v19[4]; // [rsp+30h] [rbp-288h] BYREF
  char v20[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v22; // [rsp+50h] [rbp-268h]
  char v23; // [rsp+80h] [rbp-238h]

  memset_0(v20, 0, 0x238uLL);
  v2 = 0;
  v3 = v20;
  v19[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v12 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x40u && *((_QWORD *)AddDevice + 7)
      || *(_DWORD *)AddDevice >= 0x48u && *((_QWORD *)AddDevice + 8));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v12 )
  {
    v3 = 0LL;
LABEL_12:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x40u || !*((_QWORD *)AddDevice + 7))
      && (*(_DWORD *)AddDevice < 0x48u || !*((_QWORD *)AddDevice + 8)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xE0 && FastIoDispatch->ReleaseForCcFlush )
        v2 = guard_dispatch_icall_no_overrides(FileObject, BaseFileSystemDeviceObject, v7, v8);
      else
        v2 = -1073741808;
      v19[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_24;
  }
  FsFilterCtrlInit((__int64)v20, 250, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
  v13 = FsFilterPerformCallbacks((__int64)v20, 0, 1, v19);
  v2 = v13;
  if ( v13 < 0 )
    goto LABEL_24;
  if ( !v13 )
  {
    FileObject = v22;
    if ( (v23 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v14 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v14->FastIoDispatch;
      AddDevice = v14->DriverExtension[1].AddDevice;
    }
    goto LABEL_12;
  }
  v2 = 0;
  if ( v13 != 294 )
    v2 = v13;
LABEL_24:
  if ( v2 == -1073741808 && (v19[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v17 )
      ExReleaseResourceLite(v17);
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v18 )
      ExReleaseResourceLite(v18);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v20, v2, v7, v8);
    FsFilterCtrlFree((__int64)v20);
  }
  return KeLeaveCriticalRegionThread();
}
