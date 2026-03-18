/*
 * XREFs of FsRtlAcquireFileForModWriteEx @ 0x14035BCBC
 * Callers:
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14035B110 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterCtrlFree @ 0x14035B19C (FsFilterCtrlFree.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14035C100 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14035DB50 (FsFilterPerformCallbacks.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403DF600 (ExAcquireSharedWaitForExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlAcquireFileForModWriteEx(PFILE_OBJECT FileObject, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // si
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  _QWORD *BaseFileSystemDeviceObject; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _ERESOURCE **v14; // r12
  int v15; // eax
  int *v16; // rax
  __int64 Pool2; // rax
  PVOID FsContext; // rdi
  char v20; // dl
  _QWORD *v21; // r14
  __int64 v22; // rcx
  char v23; // si
  struct _ERESOURCE *v24; // rcx
  struct _ERESOURCE *v25; // rbx
  BOOLEAN v26; // al
  char v27; // cl
  struct _ERESOURCE *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  char v31; // [rsp+31h] [rbp-CFh]
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v33; // [rsp+38h] [rbp-C8h]
  int *v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v37; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  __int16 StackSize; // [rsp+98h] [rbp-68h]
  __int16 v44; // [rsp+9Ah] [rbp-66h]
  _BYTE *v45; // [rsp+A0h] [rbp-60h]
  _BYTE v46[488]; // [rsp+A8h] [rbp-58h] BYREF

  *((_QWORD *)&v33 + 1) = a3;
  *(_QWORD *)&v33 = a2;
  memset_0(&v35, 0, 0x238uLL);
  v4 = 0;
  v31 = 0;
  v5 = 0;
  v32 = 0;
  v34 = &v35;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v8 = BaseFileSystemDeviceObject[1];
  v9 = *(_QWORD *)(v8 + 80);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 48LL);
  v11 = v10 && (*(_DWORD *)v10 >= 0x50u && *(_QWORD *)(v10 + 72) || *(_DWORD *)v10 >= 0x58u && *(_QWORD *)(v10 + 80));
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v11 )
  {
    v14 = (struct _ERESOURCE **)*((_QWORD *)&v33 + 1);
    v34 = 0LL;
    goto LABEL_15;
  }
  v42 = 0;
  v36 = -3;
  v35 = 64;
  v37 = RelatedDeviceObject;
  v38 = FileObject;
  v39 = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v44 = 0;
  if ( (unsigned __int16)StackSize <= 0xFu )
  {
    v45 = v46;
    memset_0(v46, 0, 0x1E0uLL);
    StackSize = 15;
LABEL_10:
    v14 = (struct _ERESOURCE **)*((_QWORD *)&v33 + 1);
    LOBYTE(v13) = 1;
    v39 = v33;
    LOBYTE(v12) = 1;
    v15 = FsFilterPerformCallbacks(&v35, v12, v13, &v32);
    v4 = v15;
    if ( v15 < 0 )
    {
      v5 = v32;
      goto LABEL_23;
    }
    if ( v15 )
    {
      v29 = v15 == 294;
      v16 = &v35;
      if ( v29 )
        v4 = 0;
      goto LABEL_32;
    }
    FileObject = v38;
    if ( (v42 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag((__int64)v37, 0x746C6644u);
      v31 = 1;
      v30 = BaseFileSystemDeviceObject[1];
      v9 = *(_QWORD *)(v30 + 80);
      v10 = *(_QWORD *)(*(_QWORD *)(v30 + 48) + 48LL);
    }
    v5 = v32;
LABEL_15:
    if ( !v10
      || (*(_DWORD *)v10 < 0x50u || !*(_QWORD *)(v10 + 72)) && (*(_DWORD *)v10 < 0x58u || !*(_QWORD *)(v10 + 80)) )
    {
      if ( v9 && *(_DWORD *)v9 >= 0x80u && *(_QWORD *)(v9 + 120) )
        v4 = guard_dispatch_icall_no_overrides(FileObject, v33);
      else
        v4 = -1073741808;
      v5 |= 1u;
    }
    if ( v31 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
LABEL_23:
    if ( v4 != -1073741808 || (v5 & 1) == 0 )
      goto LABEL_24;
    FsContext = FileObject->FsContext;
    if ( !*((_QWORD *)FsContext + 1) )
    {
      *v14 = 0LL;
      goto LABEL_58;
    }
    v20 = *((_BYTE *)FsContext + 4);
    v21 = (_QWORD *)v33;
    if ( (v20 & 8) == 0
      && ((v22 = *((_QWORD *)FsContext + 5), *(_QWORD *)v33 <= v22) || v22 == *((_QWORD *)FsContext + 4)) )
    {
      if ( (v20 & 0x10) == 0 )
      {
        v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
        if ( v24 )
        {
          v23 = 0;
LABEL_44:
          v25 = v24;
          if ( !v23 )
          {
            v26 = ExAcquireSharedWaitForExclusive(v24, 0);
            goto LABEL_46;
          }
          while ( 1 )
          {
            v26 = ExAcquireResourceExclusiveLite(v25, 0);
LABEL_46:
            if ( !v26 )
              goto LABEL_47;
            v27 = *((_BYTE *)FsContext + 4);
            if ( (v27 & 8) != 0 || *v21 > *((_QWORD *)FsContext + 5) )
            {
              if ( v23 )
                goto LABEL_57;
            }
            else
            {
              if ( (v27 & 0x10) == 0 )
              {
                v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                if ( v28 && v25 != v28 )
                {
                  v25 = 0LL;
                  if ( ExAcquireSharedWaitForExclusive(v28, 0) )
                    v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
                  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
                  if ( !v25 )
                  {
LABEL_47:
                    v4 = -1073741608;
                    goto LABEL_24;
                  }
                }
                else if ( v23 )
                {
LABEL_56:
                  ExConvertExclusiveToSharedLite(v25);
                }
LABEL_57:
                *v14 = v25;
LABEL_58:
                v4 = 0;
LABEL_24:
                v16 = v34;
                if ( !v34 )
                  return v4;
LABEL_32:
                if ( *((_WORD *)v16 + 37) )
                  FsFilterPerformCompletionCallbacks((__int64)&v35, v4);
                FsFilterCtrlFree((__int64)&v35);
                return v4;
              }
              if ( v23 )
                goto LABEL_56;
              if ( v25 == *((struct _ERESOURCE **)FsContext + 1) )
                goto LABEL_57;
            }
            ExReleaseResourceLite(v25);
            v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
            v23 = 1;
          }
        }
      }
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    goto LABEL_44;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v42 |= 1u;
    v45 = (_BYTE *)Pool2;
    goto LABEL_10;
  }
  return 3221225626LL;
}
