/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x140372004
 * Callers:
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140372F00 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x140374780 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x140374B44 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140374BC0 (FsFilterPerformCompletionCallbacks.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

int *__fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  int v3; // ebx
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v6; // r9
  _QWORD *BaseFileSystemDeviceObject; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r8
  struct _ERESOURCE *v12; // rsi
  int v13; // eax
  int v14; // ecx
  char v15; // r12
  __int64 v16; // rax
  int *result; // rax
  _QWORD *v18; // rsi
  __int16 *v19; // r14
  __int64 Pool2; // rbx
  int v21; // eax
  int v22; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  int *v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v26; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v27; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v28; // [rsp+60h] [rbp-A0h]
  __int128 v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+90h] [rbp-70h]
  __int16 StackSize; // [rsp+98h] [rbp-68h]
  __int16 v34; // [rsp+9Ah] [rbp-66h]
  _BYTE *v35; // [rsp+A0h] [rbp-60h]
  _BYTE v36[488]; // [rsp+A8h] [rbp-58h] BYREF

  Resource = a2;
  memset_0(&v25, 0, 0x238uLL);
  v24 = &v25;
  v3 = 0;
  v22 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v8 = BaseFileSystemDeviceObject[1];
  v9 = *(_QWORD *)(v8 + 80);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 48LL);
  if ( v10 && (*(_DWORD *)v10 >= 0x60u && *(_QWORD *)(v10 + 88) || *(_DWORD *)v10 >= 0x68u && *(_QWORD *)(v10 + 96)) )
    v4 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v4 )
  {
    v12 = Resource;
    v24 = 0LL;
    goto LABEL_40;
  }
  v32 = 0;
  v26 = -4;
  v25 = 64;
  v27 = RelatedDeviceObject;
  v28 = FileObject;
  v29 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v34 = 0;
  if ( (unsigned __int16)StackSize <= 0xFu )
  {
    v35 = v36;
    memset_0(v36, 0, 0x1E0uLL);
    StackSize = 15;
    goto LABEL_9;
  }
  v18 = 0LL;
  v19 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    if ( v26 != 250 )
    {
      switch ( v26 )
      {
        case 0xFBu:
          goto LABEL_51;
        case 0xFCu:
          goto LABEL_52;
        case 0xFDu:
LABEL_51:
          v18 = AcquireOpsReservePool;
          v19 = &AcquireOpsEvent;
LABEL_53:
          KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
          Pool2 = (__int64)(v18 + 1);
          *v18 = KeGetCurrentThread();
          memset_0(v18 + 1, 0, 0x3C8uLL);
          v21 = v32 | 2;
          goto LABEL_35;
      }
      if ( v26 != 254 )
      {
        if ( v26 != 255 )
          goto LABEL_53;
        goto LABEL_51;
      }
    }
LABEL_52:
    v18 = (_QWORD *)ReleaseOpsReservePool;
    v19 = &ReleaseOpsEvent;
    goto LABEL_53;
  }
  v21 = v32;
LABEL_35:
  v35 = (_BYTE *)Pool2;
  v32 = v21 | 1;
LABEL_9:
  v12 = Resource;
  LOBYTE(v11) = 1;
  *(_QWORD *)&v29 = Resource;
  v13 = FsFilterPerformCallbacks(&v25, 0LL, v11, &v22);
  v14 = 0;
  v3 = v13;
  if ( v13 >= 0 )
  {
    if ( v13 )
    {
      if ( v13 != 294 )
        v14 = v13;
      v3 = v14;
LABEL_25:
      if ( v3 >= 0 )
        goto LABEL_26;
      goto LABEL_31;
    }
    FileObject = v28;
    if ( (v32 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag((__int64)v27, 0x746C6644u);
      v15 = 1;
      v16 = BaseFileSystemDeviceObject[1];
      v9 = *(_QWORD *)(v16 + 80);
      v10 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 48LL);
      goto LABEL_13;
    }
LABEL_40:
    v15 = 0;
LABEL_13:
    if ( !v10
      || (*(_DWORD *)v10 < 0x60u || !*(_QWORD *)(v10 + 88)) && (*(_DWORD *)v10 < 0x68u || !*(_QWORD *)(v10 + 96)) )
    {
      if ( v9 && *(_DWORD *)v9 >= 0xD0u && *(_QWORD *)(v9 + 200) )
        v3 = guard_dispatch_icall_no_overrides(FileObject, v12, BaseFileSystemDeviceObject, v6);
      else
        v3 = -1073741808;
      v22 |= 1u;
    }
    if ( v15 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_25;
  }
LABEL_31:
  if ( (v22 & 1) != 0 )
  {
    ExReleaseResourceLite(v12);
    v3 = 0;
  }
LABEL_26:
  result = v24;
  if ( v24 )
  {
    if ( *((_WORD *)v24 + 37) )
      FsFilterPerformCompletionCallbacks(&v25, (unsigned int)v3);
    return (int *)FsFilterCtrlFree(&v25);
  }
  return result;
}
