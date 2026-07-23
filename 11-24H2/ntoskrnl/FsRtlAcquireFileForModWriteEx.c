/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14025B37C
 * Callers:
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14025B7C0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14025D040 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14025D480 (FsFilterPerformCompletionCallbacks.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402F1430 (ExConvertExclusiveToSharedLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403D6820 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // si
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r15
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  bool v11; // al
  unsigned __int16 StackSize; // ax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _ERESOURCE **v15; // r12
  int v16; // eax
  int *v17; // rax
  __int64 Pool2; // rax
  PVOID FsContext; // rdi
  char v21; // dl
  _QWORD *v22; // r14
  __int64 v23; // rcx
  char v24; // si
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rbx
  BOOLEAN v27; // al
  char v28; // cl
  struct _ERESOURCE *v29; // rcx
  bool v30; // zf
  struct _DRIVER_OBJECT *v31; // rax
  char v32; // [rsp+31h] [rbp-CFh]
  int v33; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v34; // [rsp+38h] [rbp-C8h]
  int *v35; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v38; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+68h] [rbp-98h]
  __int128 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+90h] [rbp-70h]
  __int16 v44; // [rsp+98h] [rbp-68h]
  __int16 v45; // [rsp+9Ah] [rbp-66h]
  _BYTE *v46; // [rsp+A0h] [rbp-60h]
  _BYTE v47[488]; // [rsp+A8h] [rbp-58h] BYREF

  *((_QWORD *)&v34 + 1) = a3;
  *(_QWORD *)&v34 = a2;
  memset_0(&v36, 0, 0x238uLL);
  v4 = 0;
  v32 = 0;
  v5 = 0;
  v33 = 0;
  v35 = &v36;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  v11 = AddDevice
     && (*(_DWORD *)AddDevice >= 0x50u && *((_QWORD *)AddDevice + 9)
      || *(_DWORD *)AddDevice >= 0x58u && *((_QWORD *)AddDevice + 10));
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v11 )
  {
    v15 = (struct _ERESOURCE **)*((_QWORD *)&v34 + 1);
    v35 = 0LL;
    goto LABEL_15;
  }
  v43 = 0;
  v37 = -3;
  v36 = 64;
  v38 = RelatedDeviceObject;
  v39 = FileObject;
  v40 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v44 = StackSize;
  v45 = 0;
  if ( StackSize <= 0xFu )
  {
    v46 = v47;
    memset_0(v47, 0, 0x1E0uLL);
    v44 = 15;
LABEL_10:
    v15 = (struct _ERESOURCE **)*((_QWORD *)&v34 + 1);
    LOBYTE(v14) = 1;
    v40 = v34;
    LOBYTE(v13) = 1;
    v16 = FsFilterPerformCallbacks(&v36, v13, v14, &v33);
    v4 = v16;
    if ( v16 < 0 )
    {
      v5 = v33;
      goto LABEL_23;
    }
    if ( v16 )
    {
      v30 = v16 == 294;
      v17 = &v36;
      if ( v30 )
        v4 = 0;
      goto LABEL_32;
    }
    FileObject = v39;
    if ( (v43 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(v38, 1953261124LL);
      v32 = 1;
      v31 = BaseFileSystemDeviceObject->DriverObject;
      FastIoDispatch = v31->FastIoDispatch;
      AddDevice = v31->DriverExtension[1].AddDevice;
    }
    v5 = v33;
LABEL_15:
    if ( !AddDevice
      || (*(_DWORD *)AddDevice < 0x50u || !*((_QWORD *)AddDevice + 9))
      && (*(_DWORD *)AddDevice < 0x58u || !*((_QWORD *)AddDevice + 10)) )
    {
      if ( FastIoDispatch && FastIoDispatch->SizeOfFastIoDispatch >= 0x80 && FastIoDispatch->AcquireForModWrite )
        v4 = guard_dispatch_icall_no_overrides(FileObject, v34, v15, BaseFileSystemDeviceObject);
      else
        v4 = -1073741808;
      v5 |= 1u;
    }
    if ( v32 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
LABEL_23:
    if ( v4 != -1073741808 || (v5 & 1) == 0 )
      goto LABEL_24;
    FsContext = FileObject->FsContext;
    if ( !*((_QWORD *)FsContext + 1) )
    {
      *v15 = 0LL;
      goto LABEL_58;
    }
    v21 = *((_BYTE *)FsContext + 4);
    v22 = (_QWORD *)v34;
    if ( (v21 & 8) == 0
      && ((v23 = *((_QWORD *)FsContext + 5), *(_QWORD *)v34 <= v23) || v23 == *((_QWORD *)FsContext + 4)) )
    {
      if ( (v21 & 0x10) == 0 )
      {
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v25 )
        {
          v24 = 0;
LABEL_44:
          v26 = v25;
          if ( !v24 )
          {
            v27 = ExAcquireSharedWaitForExclusive(v25, 0);
            goto LABEL_46;
          }
          while ( 1 )
          {
            v27 = ExAcquireResourceExclusiveLite(v26, 0);
LABEL_46:
            if ( !v27 )
              goto LABEL_47;
            v28 = *((_BYTE *)FsContext + 4);
            if ( (v28 & 8) != 0 || *v22 > *((_QWORD *)FsContext + 5) )
            {
              if ( v24 )
                goto LABEL_57;
            }
            else
            {
              if ( (v28 & 0x10) == 0 )
              {
                v29 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                if ( v29 && v26 != v29 )
                {
                  v26 = 0LL;
                  if ( ExAcquireSharedWaitForExclusive(v29, 0) )
                    v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  if ( !v26 )
                  {
LABEL_47:
                    v4 = -1073741608;
                    goto LABEL_24;
                  }
                }
                else if ( v24 )
                {
LABEL_56:
                  ExConvertExclusiveToSharedLite(v26);
                }
LABEL_57:
                *v15 = v26;
LABEL_58:
                v4 = 0;
LABEL_24:
                v17 = v35;
                if ( !v35 )
                  return v4;
LABEL_32:
                if ( *((_WORD *)v17 + 37) )
                  FsFilterPerformCompletionCallbacks(&v36, v4);
                FsFilterCtrlFree(&v36);
                return v4;
              }
              if ( v24 )
                goto LABEL_56;
              if ( v26 == *((struct _ERESOURCE **)FsContext + 1) )
                goto LABEL_57;
            }
            ExReleaseResourceLite(v26);
            v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
            v24 = 1;
          }
        }
      }
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    goto LABEL_44;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 32LL * StackSize, 0x676D5346u);
  if ( Pool2 )
  {
    v43 |= 1u;
    v46 = (_BYTE *)Pool2;
    goto LABEL_10;
  }
  return 3221225626LL;
}
