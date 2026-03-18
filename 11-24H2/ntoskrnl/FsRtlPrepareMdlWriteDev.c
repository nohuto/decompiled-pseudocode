/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14070A4B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     CcPrepareMdlWrite @ 0x1402CC1E0 (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     IoGetTopLevelIrp @ 0x14041CFD0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140424450 (IoSetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v15; // r9
  char v16; // dl
  LARGE_INTEGER v17; // rdi
  LONGLONG v18; // rbx
  char v19; // cl
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  BOOLEAN v23; // [rsp+50h] [rbp-78h]
  char v24; // [rsp+51h] [rbp-77h]
  bool v25; // [rsp+52h] [rbp-76h]
  int v26; // [rsp+5Ch] [rbp-6Ch]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+70h] [rbp-58h]
  __int64 v30; // [rsp+78h] [rbp-50h]
  char *v31; // [rsp+80h] [rbp-48h]

  v9 = 0LL;
  v29 = 0LL;
  v10 = 0LL;
  v30 = 0LL;
  v23 = 1;
  v24 = 0;
  v11 = FileOffset->QuadPart == -1;
  v25 = v11;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, Length, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !Length )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v31 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v11 || (v28 = Length, Length + FileOffset->QuadPart > *((_QWORD *)FsContext + 5)) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v28 = Length;
    v16 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v16 = 1;
  }
  if ( v11 )
    v17 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v17 = *FileOffset;
  v18 = v17.QuadPart + Length;
  v26 = HIDWORD(v18);
  EndOffset = v17;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_48;
  v19 = FsContext[5];
  if ( !v19 || 0x7FFFFFFFFFFFFFFFLL - v17.QuadPart < v28 || v18 > *((_QWORD *)FsContext + 3) )
    goto LABEL_48;
  if ( v16 && v18 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v25 )
    {
      v17 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v17;
      v18 = v17.QuadPart + Length;
      v26 = HIDWORD(v18);
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_48;
    v19 = FsContext[5];
    if ( !v19 || v18 > *((_QWORD *)FsContext + 3) )
      goto LABEL_48;
  }
  if ( v19 == 2 )
  {
    LOBYTE(v15) = 1;
    if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, FileOffset, Length, v15) )
    {
LABEL_48:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegion();
      return 0;
    }
  }
  if ( v18 > *((_QWORD *)FsContext + 4) )
  {
    v24 = 1;
    v9 = *((_QWORD *)FsContext + 4);
    v29 = v9;
    v10 = *((_QWORD *)FsContext + 5);
    v30 = v10;
    if ( *((_DWORD *)FsContext + 9) == v26 || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v18;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v20, 1u);
      *((_QWORD *)FsContext + 4) = v18;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v17.QuadPart > *((_QWORD *)FsContext + 5) )
    v23 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v23 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v23 )
  {
    if ( v18 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == v26 || (v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v18;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v21, 1u);
        *((_QWORD *)FsContext + 5) = v18;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v24 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v18;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v24 )
  {
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v22 )
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
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
  return v23;
}
