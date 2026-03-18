/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0
 * Callers:
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     MiPrepareToFlushSubsection @ 0x14036F8DC (MiPrepareToFlushSubsection.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
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

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // ebx
  char *v3; // rdi
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  PDRIVER_ADD_DEVICE AddDevice; // rsi
  bool v12; // al
  __int64 result; // rax
  struct _KTHREAD *v14; // rax
  int v15; // eax
  struct _DRIVER_OBJECT *v16; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v18; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v23[4]; // [rsp+30h] [rbp-288h] BYREF
  char v24[8]; // [rsp+40h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-270h]
  struct _FILE_OBJECT *v26; // [rsp+50h] [rbp-268h]
  char v27; // [rsp+80h] [rbp-238h]

  memset_0(v24, 0, 0x238uLL);
  v2 = 0;
  v3 = v24;
  v23[0] = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v12 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
      || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v12 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->KernelApcDisable;
LABEL_13:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
      && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8 && FastIoDispatch->AcquireForCcFlush )
        v2 = guard_dispatch_icall_no_overrides(FileObject, BaseFileSystemDeviceObject, v7, v8);
      else
        v2 = -1073741808;
      v23[0] |= 1u;
    }
    if ( v4 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_25;
  }
  result = FsFilterCtrlInit((__int64)v24, 251, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 1u);
  if ( (int)result < 0 )
    return result;
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  v15 = FsFilterPerformCallbacks((__int64)v24, 1, 1, v23);
  v2 = v15;
  if ( v15 >= 0 )
  {
    if ( v15 )
    {
      v2 = 0;
      if ( v15 != 294 )
        v2 = v15;
      goto LABEL_25;
    }
    FileObject = v26;
    if ( (v27 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v4 = 1;
      v16 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v16->FastIoDispatch;
      AddDevice = v16->DriverExtension[1].AddDevice;
    }
    goto LABEL_13;
  }
LABEL_25:
  if ( v2 == -1073741808 && (v23[0] & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    v18 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v18 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v18);
      v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v20, 1u);
      else
        ExAcquireResourceExclusiveLite(v20, 1u);
    }
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
      ExAcquireResourceSharedLite(v21, 1u);
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v24, v2, v7, v8);
    FsFilterCtrlFree((__int64)v24);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegionThread();
  return (unsigned int)v2;
}
