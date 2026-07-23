/*
 * XREFs of FsRtlCopyWrite @ 0x140A2FA90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     IoGetTopLevelIrp @ 0x1404118C0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     CcCopyWrite @ 0x14049CD90 (CcCopyWrite.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404D5D60 (CcCopyWriteWontFlush.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rbx
  BOOLEAN v12; // r12
  char *FsContext; // r15
  __int64 v14; // rsi
  __int64 v15; // r14
  struct _KTHREAD *CurrentThread; // rax
  char v17; // r10
  LARGE_INTEGER v18; // rdi
  signed __int64 v19; // rbx
  char v20; // r8
  signed __int64 v21; // r9
  PLARGE_INTEGER v23; // r10
  struct _ERESOURCE *v24; // rcx
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  BOOLEAN v27; // [rsp+50h] [rbp-78h]
  char v28; // [rsp+51h] [rbp-77h]
  char v29; // [rsp+52h] [rbp-76h]
  LARGE_INTEGER FileOffseta; // [rsp+58h] [rbp-70h] BYREF
  signed __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  char *v34; // [rsp+78h] [rbp-50h]
  __int128 v35; // [rsp+80h] [rbp-48h]

  v9 = Length;
  v12 = 0;
  v27 = 1;
  v29 = 0;
  if ( FileOffset->LowPart != -1 || (v28 = 1, FileOffset->HighPart != -1) )
    v28 = 0;
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v34 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, FileOffset, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v14 = 0LL;
  v32 = 0LL;
  v15 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v28 || (signed __int64)(FileOffset->QuadPart + v9) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_55;
    v17 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_55;
    v17 = 1;
  }
  if ( v28 )
    v18 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v18 = *FileOffset;
  v19 = v18.QuadPart + v9;
  v31 = v19;
  FileOffseta = v18;
  if ( !FileObject->PrivateCacheMap
    || (v20 = FsContext[5]) == 0
    || (v21 = *((_QWORD *)FsContext + 5), v18.QuadPart >= v21 + 0x2000)
    || 0x7FFFFFFFFFFFFFFFLL - v18.QuadPart < Length
    || v19 > *((_QWORD *)FsContext + 3) )
  {
LABEL_54:
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    goto LABEL_55;
  }
  if ( !v17 || v19 <= v21 )
    goto LABEL_20;
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
  {
LABEL_55:
    KeLeaveCriticalRegion();
    return 0;
  }
  if ( v28 )
  {
    v18 = *(LARGE_INTEGER *)(FsContext + 32);
    FileOffseta = v18;
    v19 = v18.QuadPart + Length;
    v31 = v19;
  }
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_54;
  v20 = FsContext[5];
  if ( !v20 || v19 > *((_QWORD *)FsContext + 3) )
    goto LABEL_54;
LABEL_20:
  if ( v20 != 2 )
    goto LABEL_21;
  v35 = 0LL;
  v23 = FileOffset;
  if ( FileOffset->QuadPart == -1 )
    v23 = (PLARGE_INTEGER)(FsContext + 32);
  if ( (unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, v23) )
  {
LABEL_21:
    if ( v19 > *((_QWORD *)FsContext + 4) )
    {
      v29 = 1;
      v14 = *((_QWORD *)FsContext + 4);
      v32 = v14;
      v15 = *((_QWORD *)FsContext + 5);
      v33 = v15;
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v31) || (v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v19;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v25, 1u);
        *((_QWORD *)FsContext + 4) = v19;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v18.QuadPart > *((_QWORD *)FsContext + 5) )
      v27 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &FileOffseta, Wait);
    if ( v27 )
      v27 = CcCopyWrite(FileObject, &FileOffseta, Length, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v27 )
    {
      if ( v19 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v31)
          || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v19;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v26, 1u);
          *((_QWORD *)FsContext + 5) = v19;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v29 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v19;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v18.QuadPart + Length;
    }
    else if ( v29 )
    {
      v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v24 )
      {
        ExAcquireResourceExclusiveLite(v24, 1u);
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v14;
        *((_QWORD *)FsContext + 5) = v15;
      }
    }
    v12 = v27;
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegion();
  return v12;
}
