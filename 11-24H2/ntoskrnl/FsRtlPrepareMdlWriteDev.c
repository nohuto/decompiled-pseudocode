/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x140708070
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     IoGetTopLevelIrp @ 0x1404118C0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  bool v11; // di
  char *FsContext; // r15
  struct _KTHREAD *CurrentThread; // rax
  char v15; // dl
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  struct _ERESOURCE *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  BOOLEAN v22; // [rsp+50h] [rbp-78h]
  char v23; // [rsp+51h] [rbp-77h]
  bool v24; // [rsp+52h] [rbp-76h]
  int v25; // [rsp+5Ch] [rbp-6Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  char *v30; // [rsp+80h] [rbp-48h]

  v9 = 0LL;
  v28 = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  v22 = 1;
  v23 = 0;
  v11 = FileOffset->QuadPart == -1;
  v24 = v11;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, Length, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v30 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 || (v27 = Length, Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5)) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v27 = Length;
    v15 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 1;
  }
  if ( v11 )
    v16 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v16 = *FileOffset;
  v17 = v16.QuadPart + Length;
  v25 = HIDWORD(v17);
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_48;
  v18 = FsContext[5];
  if ( !v18 || 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < v27 || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_48;
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v24 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v17 = v16.QuadPart + Length;
      v25 = HIDWORD(v17);
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_48;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_48;
  }
  if ( v18 == 2 && !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, FileOffset) )
  {
LABEL_48:
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    KeLeaveCriticalRegion();
    return 0;
  }
  if ( v17 > *((_QWORD *)FsContext + 4) )
  {
    v23 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v28 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v29 = v10;
    if ( *((_DWORD *)FsContext + 9) == v25 || (v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v19, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v22 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v22 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v22 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v25 || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v20, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v23 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v23 )
  {
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
    {
      ExAcquireResourceExclusiveLite(v21, 1u);
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v9;
      *((_QWORD *)FsContext + 5) = v10;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KeLeaveCriticalRegion();
  return v22;
}
