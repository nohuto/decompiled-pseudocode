/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x14093DA50
 * Callers:
 *     MiCallCreateSectionFilters @ 0x14093D838 (MiCallCreateSectionFilters.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14093D94C (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x14093DA20 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
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

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(PFILE_OBJECT FileObject, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v8; // ebx
  char *v9; // r15
  char v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v12; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  PDRIVER_EXTENSION DriverExtension; // rcx
  PDRIVER_ADD_DEVICE AddDevice; // r12
  __int64 result; // rax
  struct _KTHREAD *v19; // rax
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v22; // si
  struct _DRIVER_OBJECT *v23; // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v25; // rcx
  int v26; // [rsp+30h] [rbp-2B8h] BYREF
  int v27; // [rsp+34h] [rbp-2B4h]
  int v28; // [rsp+38h] [rbp-2B0h]
  __int64 v29; // [rsp+40h] [rbp-2A8h]
  struct _FAST_IO_DISPATCH *v30; // [rsp+48h] [rbp-2A0h]
  char v31[8]; // [rsp+50h] [rbp-298h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-290h]
  struct _FILE_OBJECT *v33; // [rsp+60h] [rbp-288h]
  int v34; // [rsp+68h] [rbp-280h]
  int v35; // [rsp+6Ch] [rbp-27Ch]
  __int64 v36; // [rsp+70h] [rbp-278h]
  int v37; // [rsp+78h] [rbp-270h]
  int v38; // [rsp+7Ch] [rbp-26Ch]
  char v39; // [rsp+90h] [rbp-258h]

  v27 = a3;
  v29 = a6;
  v28 = a4;
  memset_0(v31, 0, 0x238uLL);
  v8 = 0;
  v9 = v31;
  v26 = 0;
  v10 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v30 = FastIoDispatch;
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
  result = FsFilterCtrlInit((__int64)v31, 255, (__int64)RelatedDeviceObject, v12, (__int64)FileObject, v8);
  if ( (int)result >= 0 )
  {
    v35 = v27;
    v36 = v29;
    v37 = v28;
    v38 = a5;
    v34 = a2;
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = FsFilterPerformCallbacks((__int64)v31, v8, v8, &v26);
    v8 = v20;
    if ( v20 < 0 )
    {
LABEL_13:
      if ( v8 == -1073741808 && (v26 & 1) != 0 )
      {
        FsContext = FileObject->FsContext;
        if ( FsContext )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
          if ( v25 )
            ExAcquireResourceExclusiveLite(v25, 1u);
        }
        v8 = 0;
      }
      if ( v9 )
      {
        if ( *((_WORD *)v9 + 37) )
          FsFilterPerformCompletionCallbacks((__int64)v31, v8);
        FsFilterCtrlFree((__int64)v31);
      }
      if ( v8 < 0 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)v8;
    }
    if ( v20 )
    {
      v8 = 0;
      if ( v20 != 294 )
        v8 = v20;
      goto LABEL_13;
    }
    FileObject = v33;
    if ( (v39 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v22 = 1;
      v23 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v23->FastIoDispatch;
      AddDevice = v23->DriverExtension[1].AddDevice;
      goto LABEL_35;
    }
    FastIoDispatch = v30;
LABEL_34:
    v22 = 0;
LABEL_35:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
      && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
    {
      if ( FastIoDispatch
        && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
        && FastIoDispatch->AcquireFileForNtCreateSection )
      {
        guard_dispatch_icall_no_overrides(FileObject);
      }
      else
      {
        v8 = -1073741808;
      }
      v26 |= 1u;
    }
    if ( v22 )
      ObfDereferenceObject(BaseFileSystemDeviceObject);
    goto LABEL_13;
  }
  return result;
}
