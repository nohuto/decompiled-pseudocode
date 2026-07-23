/*
 * XREFs of FsRtlReleaseFileForCcFlush @ 0x1409C1EC0
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
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
        v2 = guard_dispatch_icall_no_overrides(FileObject, BaseFileSystemDeviceObject);
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
