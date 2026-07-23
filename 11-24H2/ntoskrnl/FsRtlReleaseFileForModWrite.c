/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14025A8C4
 * Callers:
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 * Callees:
 *     IoGetBaseFileSystemDeviceObject @ 0x14025B7C0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14025D040 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14025D480 (FsFilterPerformCompletionCallbacks.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

int *__fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v3; // ebx
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v6; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  unsigned __int16 StackSize; // ax
  __int64 v12; // r8
  struct _ERESOURCE *v13; // rsi
  int v14; // eax
  int v15; // ecx
  char v16; // r12
  struct _DRIVER_OBJECT *v17; // rax
  int *result; // rax
  _QWORD *v19; // rsi
  __int16 *v20; // r14
  __int64 Pool2; // rbx
  int v22; // eax
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  int *v25; // [rsp+40h] [rbp-C0h]
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v27; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v28; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+68h] [rbp-98h]
  __int128 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+90h] [rbp-70h]
  __int16 v34; // [rsp+98h] [rbp-68h]
  __int16 v35; // [rsp+9Ah] [rbp-66h]
  _BYTE *v36; // [rsp+A0h] [rbp-60h]
  _BYTE v37[488]; // [rsp+A8h] [rbp-58h] BYREF

  Resource = a2;
  memset_0(&v26, 0, 0x238uLL);
  v25 = &v26;
  v3 = 0;
  v23 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x60u && *((_QWORD *)AddDevice + 11)
     || *(_DWORD *)AddDevice >= 0x68u && *((_QWORD *)AddDevice + 12)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v4 )
  {
    v13 = Resource;
    v25 = 0LL;
    goto LABEL_40;
  }
  v33 = 0;
  v27 = -4;
  v26 = 64;
  v28 = RelatedDeviceObject;
  v29 = FileObject;
  v30 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v34 = StackSize;
  v35 = 0;
  if ( StackSize <= 0xFu )
  {
    v36 = v37;
    memset_0(v37, 0, 0x1E0uLL);
    v34 = 15;
    goto LABEL_9;
  }
  v19 = 0LL;
  v20 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 32LL * StackSize, 0x676D5346u);
  if ( !Pool2 )
  {
    if ( v27 != 250 )
    {
      switch ( v27 )
      {
        case 0xFBu:
          goto LABEL_51;
        case 0xFCu:
          goto LABEL_52;
        case 0xFDu:
LABEL_51:
          v19 = AcquireOpsReservePool;
          v20 = &AcquireOpsEvent;
LABEL_53:
          KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
          Pool2 = (__int64)(v19 + 1);
          *v19 = KeGetCurrentThread();
          memset_0(v19 + 1, 0, 0x3C8uLL);
          v22 = v33 | 2;
          goto LABEL_35;
      }
      if ( v27 != 254 )
      {
        if ( v27 != 255 )
          goto LABEL_53;
        goto LABEL_51;
      }
    }
LABEL_52:
    v19 = (_QWORD *)ReleaseOpsReservePool;
    v20 = &ReleaseOpsEvent;
    goto LABEL_53;
  }
  v22 = v33;
LABEL_35:
  v36 = (_BYTE *)Pool2;
  v33 = v22 | 1;
LABEL_9:
  v13 = Resource;
  LOBYTE(v12) = 1;
  *(_QWORD *)&v30 = Resource;
  v14 = FsFilterPerformCallbacks(&v26, 0LL, v12, &v23);
  v15 = 0;
  v3 = v14;
  if ( v14 >= 0 )
  {
    if ( v14 )
    {
      if ( v14 != 294 )
        v15 = v14;
      v3 = v15;
LABEL_25:
      if ( v3 >= 0 )
        goto LABEL_26;
      goto LABEL_31;
    }
    FileObject = v29;
    if ( (v33 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v28, 1953261124LL);
      v16 = 1;
      v17 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v17->FastIoDispatch;
      AddDevice = v17->DriverExtension[1].AddDevice;
      goto LABEL_13;
    }
LABEL_40:
    v16 = 0;
LABEL_13:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x60u || !*((_QWORD *)AddDevice + 11))
      && (*(_DWORD *)AddDevice < 0x68u || !*((_QWORD *)AddDevice + 12)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0xD0 && FastIoDispatch->ReleaseForModWrite )
        v3 = guard_dispatch_icall_no_overrides(FileObject, v13, BaseFileSystemDeviceObject, v6);
      else
        v3 = -1073741808;
      v23 |= 1u;
    }
    if ( v16 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_25;
  }
LABEL_31:
  if ( (v23 & 1) != 0 )
  {
    ExReleaseResourceLite(v13);
    v3 = 0;
  }
LABEL_26:
  result = v25;
  if ( v25 )
  {
    if ( *((_WORD *)v25 + 37) )
      FsFilterPerformCompletionCallbacks(&v26, (unsigned int)v3);
    return (int *)FsFilterCtrlFree(&v26);
  }
  return result;
}
