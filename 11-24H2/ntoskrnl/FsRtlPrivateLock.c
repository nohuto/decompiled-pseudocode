/*
 * XREFs of FsRtlPrivateLock @ 0x140248460
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403DB600 (FsRtlProcessFileLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140248410 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140248EE0 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402490B4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402491EC (FsRtlPrivateInitializeFileLock.c)
 *     RtlSplay @ 0x1402496A0 (RtlSplay.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403DBA48 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA500 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1404D8BCC (FsRtlPrivateRemoveLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PLARGE_INTEGER v13; // rax
  PFILE_OBJECT v14; // r13
  char v16; // r12
  volatile signed __int64 *v17; // r15
  char *LockInformation; // r14
  PIO_STATUS_BLOCK v19; // rdi
  BOOLEAN v20; // bl
  unsigned __int64 QuadPart; // rbx
  LONGLONG v22; // rdi
  BOOLEAN v23; // cl
  RTL_SPLAY_LINKS *v24; // rax
  char *v25; // rax
  char *v26; // rdi
  char v27; // al
  char *v28; // rax
  PRTL_SPLAY_LINKS v29; // rdx
  RTL_SPLAY_LINKS *v30; // r8
  _RTL_SPLAY_LINKS *v31; // rcx
  bool v32; // zf
  _RTL_SPLAY_LINKS *RightChild; // r11
  _RTL_SPLAY_LINKS *Parent; // r9
  _QWORD *v35; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  NTSTATUS Status; // r15d
  __int64 v40; // r8
  char v41; // [rsp+68h] [rbp-98h]
  KIRQL v42; // [rsp+69h] [rbp-97h]
  RTL_SPLAY_LINKS *Links; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v44; // [rsp+78h] [rbp-88h]
  char *v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  PRTL_SPLAY_LINKS v49; // [rsp+C0h] [rbp-40h]
  PVOID Entry; // [rsp+C8h] [rbp-38h]
  void *retaddr; // [rsp+100h] [rbp+0h]

  v13 = FileOffset;
  v14 = FileObject;
  v16 = 0;
  v17 = 0LL;
  v44 = 0LL;
  v42 = -1;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  LockInformation = (char *)FileLock->LockInformation;
  v45 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
    {
LABEL_3:
      v19 = Iosb;
      v20 = 0;
      goto LABEL_71;
    }
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
    v45 = LockInformation;
    v13 = FileOffset;
  }
  QuadPart = v13->QuadPart;
  *(_QWORD *)&v46 = QuadPart;
  v22 = Length->QuadPart;
  *((_QWORD *)&v46 + 1) = v22;
  *((_QWORD *)&v48 + 1) = QuadPart + v22 - 1;
  DWORD1(v47) = Key;
  *((_QWORD *)&v47 + 1) = v14;
  *(_QWORD *)&v48 = ProcessId;
  LOBYTE(v47) = ExclusiveLock;
  v17 = (volatile signed __int64 *)(LockInformation + 24);
  v44 = (volatile signed __int64 *)(LockInformation + 24);
  if ( *((_QWORD *)&v48 + 1) < QuadPart && v22 )
  {
    v19 = Iosb;
    Iosb->Status = -1073741407;
    v20 = 1;
    goto LABEL_71;
  }
  v16 = 1;
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  v23 = ExclusiveLock;
  if ( ExclusiveLock )
  {
    v27 = FsRtlPrivateCheckForExclusiveLockAccess(LockInformation + 24, &v46);
    v23 = v47;
    QuadPart = v46;
  }
  else
  {
    v41 = 1;
    v24 = (RTL_SPLAY_LINKS *)*((_QWORD *)LockInformation + 5);
    if ( !v24 )
      goto LABEL_8;
    v29 = 0LL;
    v49 = 0LL;
    Links = 0LL;
    v30 = 0LL;
    v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v22 - 1);
    while ( 1 )
    {
      v32 = v24 == 0LL;
      if ( !v24 )
        break;
      v29 = v24;
      v49 = v24;
      RightChild = v24[2].RightChild;
      if ( (unsigned __int64)RightChild >= QuadPart && ((Parent = v24[1].Parent) != 0LL || v24[1].LeftChild) )
      {
        if ( Parent <= v31 && (v31 != (_RTL_SPLAY_LINKS *)-1LL || QuadPart) )
        {
          if ( (unsigned __int64)Parent <= QuadPart )
          {
            v32 = v24 == 0LL;
            break;
          }
          v30 = v24;
        }
        Links = v24;
        v24 = v24->LeftChild;
      }
      else if ( RightChild == v31 && v24[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
      {
        v30 = v24;
        Links = v24;
        v24 = v24->LeftChild;
      }
      else
      {
        Links = v24;
        v24 = v24->RightChild;
      }
    }
    if ( v32 )
      v29 = v30;
    v49 = v29;
    if ( v29 )
      goto LABEL_45;
    while ( 1 )
    {
      if ( !v29 )
      {
LABEL_26:
        v27 = 1;
        goto LABEL_27;
      }
LABEL_45:
      if ( v29[1].Parent > v31 )
        goto LABEL_26;
      if ( ((PFILE_OBJECT)v29[2].Parent != v14
         || (PEPROCESS)v29[2].LeftChild != ProcessId
         || HIDWORD(v29[1].RightChild) != Key)
        && (v22 || v29[1].LeftChild) )
      {
        break;
      }
      v29 = RtlRealSuccessor(v29);
      v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v22 - 1);
    }
    v27 = 0;
    v41 = 0;
LABEL_27:
    if ( Links )
    {
      *((_QWORD *)LockInformation + 5) = RtlSplay(Links);
      v27 = v41;
    }
    v23 = 0;
  }
  if ( v27 )
  {
LABEL_8:
    if ( v23 )
    {
      v28 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlExclusiveLockLookasideList);
      if ( v28 )
      {
        v26 = v28 + 24;
        *(_OWORD *)(v28 + 24) = v46;
        *(_OWORD *)(v28 + 40) = v47;
        *(_OWORD *)(v28 + 56) = v48;
        FsRtlPrivateInsertExclusiveLock(LockInformation + 24, v28);
        goto LABEL_11;
      }
    }
    else
    {
      v25 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlSharedLockLookasideList);
      Entry = v25;
      if ( v25 )
      {
        v26 = v25 + 8;
        *(_OWORD *)(v25 + 8) = v46;
        *(_OWORD *)(v25 + 24) = v47;
        *(_OWORD *)(v25 + 40) = v48;
        if ( (unsigned __int8)FsRtlPrivateInsertSharedLock(LockInformation + 24, v25) )
        {
LABEL_11:
          v14->LastLock = v26;
          if ( QuadPart < *(_QWORD *)LockInformation )
            *(_QWORD *)LockInformation = QuadPart;
          v19 = Iosb;
          Iosb->Status = 0;
          v20 = 1;
          goto LABEL_71;
        }
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Entry);
      }
    }
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v42);
      RtlRaiseStatus(3221225626LL);
    }
    goto LABEL_3;
  }
  if ( FailImmediately )
  {
    v19 = Iosb;
    Iosb->Status = -1073741739;
    v20 = 1;
  }
  else
  {
    if ( !Irp )
      goto LABEL_3;
    v35 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
    if ( !v35 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v42);
      RtlRaiseStatus(3221225626LL);
    }
    v35[3] = Irp;
    v35[2] = Context;
    v35[1] = *((_QWORD *)LockInformation + 1);
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    *v35 = 0LL;
    if ( *((_QWORD *)LockInformation + 6) )
      **((_QWORD **)LockInformation + 7) = v35;
    else
      *((_QWORD *)LockInformation + 6) = v35;
    *((_QWORD *)LockInformation + 7) = v35;
    Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
    _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
    if ( Irp->Cancel && (Entry = (PVOID)_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL)) != 0LL )
    {
      Irp->CancelIrql = v42;
      FsRtlPrivateCancelFileLockIrp(0LL, Irp);
      v16 = 0;
    }
    else
    {
      v16 = 1;
    }
    v19 = Iosb;
    Iosb->Status = 259;
    v20 = 1;
    LockInformation = v45;
    v17 = v44;
  }
LABEL_71:
  if ( !v16 )
    goto LABEL_77;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    if ( !PopHibernateInProgress )
    {
      KiReleaseSpinLockInstrumented(v44, retaddr);
      goto LABEL_74;
    }
    v17 = v44;
  }
  _InterlockedAnd64(v17, 0LL);
LABEL_74:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
  __writecr8(v42);
  LockInformation = v45;
LABEL_77:
  if ( Irp && v19->Status != 259 )
  {
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    Status = v19->Status;
    if ( *((_QWORD *)LockInformation + 1) )
    {
      if ( v14 )
        v14->LastLock = 0LL;
      Irp->IoStatus.Status = Status;
      Status = guard_dispatch_icall_no_overrides(Context, Irp, v37, v38);
    }
    else
    {
      Irp->IoStatus.Status = Status;
      IofCompleteRequest(Irp, 1);
    }
    if ( Status < 0 && v19->Status >= 0 )
    {
      LOBYTE(v40) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v46, v40);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v19->Status = Status;
  }
  return v20;
}
