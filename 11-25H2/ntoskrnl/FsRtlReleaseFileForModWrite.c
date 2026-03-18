/*
 * XREFs of FsRtlReleaseFileForModWrite @ 0x14035B210
 * Callers:
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14035B110 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterCtrlFree @ 0x14035B19C (FsFilterCtrlFree.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14035C100 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     FsFilterPerformCallbacks @ 0x14035DB50 (FsFilterPerformCallbacks.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall FsRtlReleaseFileForModWrite(PFILE_OBJECT FileObject, struct _ERESOURCE *a2)
{
  signed int v3; // ebx
  char v4; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  _QWORD *BaseFileSystemDeviceObject; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rsi
  int v12; // eax
  signed int v13; // ecx
  char v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int16 *v17; // r14
  __int64 Pool2; // rbx
  int v19; // eax
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-C8h]
  int *v22; // [rsp+40h] [rbp-C0h]
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v24; // [rsp+54h] [rbp-ACh]
  PDEVICE_OBJECT v25; // [rsp+58h] [rbp-A8h]
  struct _FILE_OBJECT *v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+68h] [rbp-98h]
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+90h] [rbp-70h]
  __int16 StackSize; // [rsp+98h] [rbp-68h]
  __int16 v32; // [rsp+9Ah] [rbp-66h]
  _BYTE *v33; // [rsp+A0h] [rbp-60h]
  _BYTE v34[488]; // [rsp+A8h] [rbp-58h] BYREF

  Resource = a2;
  memset_0(&v23, 0, 0x238uLL);
  v22 = &v23;
  v3 = 0;
  v20 = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  v7 = BaseFileSystemDeviceObject[1];
  v8 = *(_QWORD *)(v7 + 80);
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 48LL);
  if ( v9 && (*(_DWORD *)v9 >= 0x60u && *(_QWORD *)(v9 + 88) || *(_DWORD *)v9 >= 0x68u && *(_QWORD *)(v9 + 96)) )
    v4 = 1;
  if ( RelatedDeviceObject == (PDEVICE_OBJECT)BaseFileSystemDeviceObject && !v4 )
  {
    v11 = Resource;
    v22 = 0LL;
    goto LABEL_40;
  }
  v30 = 0;
  v24 = -4;
  v23 = 64;
  v25 = RelatedDeviceObject;
  v26 = FileObject;
  v27 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  StackSize = RelatedDeviceObject->StackSize;
  v32 = 0;
  if ( (unsigned __int16)StackSize <= 0xFu )
  {
    v33 = v34;
    memset_0(v34, 0, 0x1E0uLL);
    StackSize = 15;
    goto LABEL_9;
  }
  v16 = 0LL;
  v17 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    if ( v24 != 250 )
    {
      switch ( v24 )
      {
        case 0xFBu:
          goto LABEL_51;
        case 0xFCu:
          goto LABEL_52;
        case 0xFDu:
LABEL_51:
          v16 = AcquireOpsReservePool;
          v17 = &AcquireOpsEvent;
LABEL_53:
          KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
          Pool2 = (__int64)(v16 + 1);
          *v16 = KeGetCurrentThread();
          memset_0(v16 + 1, 0, 0x3C8uLL);
          v19 = v30 | 2;
          goto LABEL_35;
      }
      if ( v24 != 254 )
      {
        if ( v24 != 255 )
          goto LABEL_53;
        goto LABEL_51;
      }
    }
LABEL_52:
    v16 = (_QWORD *)ReleaseOpsReservePool;
    v17 = &ReleaseOpsEvent;
    goto LABEL_53;
  }
  v19 = v30;
LABEL_35:
  v33 = (_BYTE *)Pool2;
  v30 = v19 | 1;
LABEL_9:
  v11 = Resource;
  LOBYTE(v10) = 1;
  *(_QWORD *)&v27 = Resource;
  v12 = FsFilterPerformCallbacks(&v23, 0LL, v10, &v20);
  v13 = 0;
  v3 = v12;
  if ( v12 >= 0 )
  {
    if ( v12 )
    {
      if ( v12 != 294 )
        v13 = v12;
      v3 = v13;
LABEL_25:
      if ( v3 >= 0 )
        goto LABEL_26;
      goto LABEL_31;
    }
    FileObject = v26;
    if ( (v30 & 4) != 0 )
    {
      BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRefWithTag((__int64)v25, 0x746C6644u);
      v14 = 1;
      v15 = BaseFileSystemDeviceObject[1];
      v8 = *(_QWORD *)(v15 + 80);
      v9 = *(_QWORD *)(*(_QWORD *)(v15 + 48) + 48LL);
      goto LABEL_13;
    }
LABEL_40:
    v14 = 0;
LABEL_13:
    if ( !v9 || (*(_DWORD *)v9 < 0x60u || !*(_QWORD *)(v9 + 88)) && (*(_DWORD *)v9 < 0x68u || !*(_QWORD *)(v9 + 96)) )
    {
      if ( v8 && *(_DWORD *)v8 >= 0xD0u && *(_QWORD *)(v8 + 200) )
        v3 = guard_dispatch_icall_no_overrides(FileObject, v11);
      else
        v3 = -1073741808;
      v20 |= 1u;
    }
    if ( v14 )
      ObfDereferenceObjectWithTag(BaseFileSystemDeviceObject, 0x746C6644u);
    goto LABEL_25;
  }
LABEL_31:
  if ( (v20 & 1) != 0 )
  {
    ExReleaseResourceLite(v11);
    v3 = 0;
  }
LABEL_26:
  if ( v22 )
  {
    if ( *((_WORD *)v22 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)&v23, v3);
    FsFilterCtrlFree((__int64)&v23);
  }
}
