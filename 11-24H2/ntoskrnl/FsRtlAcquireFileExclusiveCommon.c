/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x14098C5C0
 * Callers:
 *     MiCallCreateSectionFilters @ 0x14098C3A8 (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14098C4BC (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14098C590 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14025B7C0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14025D040 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14025D480 (FsFilterPerformCompletionCallbacks.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140355D40 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterCtrlInit @ 0x1404215D0 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v8; // ebx
  char *v9; // r15
  char v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  PDRIVER_EXTENSION DriverExtension; // rcx
  PDRIVER_ADD_DEVICE AddDevice; // r12
  __int64 result; // rax
  struct _KTHREAD *v20; // rax
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v23; // si
  struct _DRIVER_OBJECT *v24; // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v26; // rcx
  int v27; // [rsp+30h] [rbp-2B8h] BYREF
  int v28; // [rsp+34h] [rbp-2B4h]
  int v29; // [rsp+38h] [rbp-2B0h]
  __int64 v30; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v31; // [rsp+48h] [rbp-2A0h]
  char v32[8]; // [rsp+50h] [rbp-298h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-290h]
  struct _FILE_OBJECT *v34; // [rsp+60h] [rbp-288h]
  int v35; // [rsp+68h] [rbp-280h]
  int v36; // [rsp+6Ch] [rbp-27Ch]
  __int64 v37; // [rsp+70h] [rbp-278h]
  int v38; // [rsp+78h] [rbp-270h]
  int v39; // [rsp+7Ch] [rbp-26Ch]
  char v40; // [rsp+90h] [rbp-258h]

  v28 = a3;
  v30 = a6;
  v29 = a4;
  memset_0(v32, 0, 0x238uLL);
  v8 = 0;
  v9 = v32;
  v27 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v31 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v10 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v10 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_34;
  }
  if ( a2 == 1 )
    LOBYTE(v8) = 1;
  result = FsFilterCtrlInit((__int64)v32, 255, (__int64)RelatedDeviceObject, v13, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v36 = v28;
    v37 = v30;
    v38 = v29;
    v39 = a5;
    v35 = a2;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = FsFilterPerformCallbacks((__int64)v32, v8, v8, &v27);
    v8 = v21;
    if ( v21 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v27 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v26 )
            ExAcquireResourceExclusiveLite(v26, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v32, v8, v12, v13);
        FsFilterCtrlFree((__int64)v32);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegionThread();
      return (unsigned int)v8;
    }
    if ( v21 )
    {
      v8 = 0;
      if ( v21 != 294 )
        v8 = v21;
      goto LABEL_13;
    }
    FileObject = v34;
    if ( (v40 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v23 = 1;
      v24 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v24->FastIoDispatch;
      AddDevice = v24->DriverExtension[1].AddDevice;
      goto LABEL_35;
    }
    FastIoDispatch = v31;
LABEL_34:
    v23 = 0;
LABEL_35:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && FastIoDispatch->AcquireFileForNtCreateSection )
      {
        guard_dispatch_icall_no_overrides(FileObject, FastIoDispatch);
      }
      else
      {
        v8 = -1073741808;
      }
      v27 |= 1u;
    }
    if ( v23 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_13;
  }
  return result;
}
