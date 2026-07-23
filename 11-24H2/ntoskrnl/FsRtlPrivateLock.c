/*
 * XREFs of FsRtlPrivateLock @ 0x1402E26A0
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403CC8D0 (FsRtlProcessFileLock.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2F18 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402E3120 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402E32F4 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402E342C (FsRtlPrivateInitializeFileLock.c)
 *     RtlSplay @ 0x1402E38E0 (RtlSplay.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403CCD18 (FsRtlCompleteLockIrpReal.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404C3A20 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1404D201C (FsRtlPrivateRemoveLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  _RTL_SPLAY_LINKS *v24; // rax
  char *v25; // rax
  char *v26; // rdi
  char v27; // al
  char *v28; // rax
  PRTL_SPLAY_LINKS v29; // rdx
  _RTL_SPLAY_LINKS *v30; // r8
  _RTL_SPLAY_LINKS *v31; // rcx
  bool v32; // zf
  _RTL_SPLAY_LINKS *RightChild; // r11
  _RTL_SPLAY_LINKS *Parent; // r9
  _QWORD *v35; // rax
  NTSTATUS Status; // r15d
  __int64 v38; // r8
  char v39; // [rsp+68h] [rbp-98h]
  KIRQL v40; // [rsp+69h] [rbp-97h]
  _RTL_SPLAY_LINKS *Links; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v42; // [rsp+78h] [rbp-88h]
  char *v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int128 v46; // [rsp+B0h] [rbp-50h]
  PRTL_SPLAY_LINKS v47; // [rsp+C0h] [rbp-40h]
  PVOID Entry; // [rsp+C8h] [rbp-38h]
  __int64 retaddr; // [rsp+100h] [rbp+0h]

  v13 = FileOffset;
  v14 = FileObject;
  v16 = 0;
  v17 = 0LL;
  v42 = 0LL;
  v40 = -1;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  LockInformation = (char *)FileLock->LockInformation;
  v43 = LockInformation;
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
    v43 = LockInformation;
    v13 = FileOffset;
  }
  QuadPart = v13->QuadPart;
  *(_QWORD *)&v44 = QuadPart;
  v22 = Length->QuadPart;
  *((_QWORD *)&v44 + 1) = v22;
  *((_QWORD *)&v46 + 1) = QuadPart + v22 - 1;
  DWORD1(v45) = Key;
  *((_QWORD *)&v45 + 1) = v14;
  *(_QWORD *)&v46 = ProcessId;
  LOBYTE(v45) = ExclusiveLock;
  v17 = (volatile signed __int64 *)(LockInformation + 24);
  v42 = (volatile signed __int64 *)(LockInformation + 24);
  if ( *((_QWORD *)&v46 + 1) < QuadPart && v22 )
  {
    v19 = Iosb;
    Iosb->Status = -1073741407;
    v20 = 1;
    goto LABEL_71;
  }
  v16 = 1;
  v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  v23 = ExclusiveLock;
  if ( ExclusiveLock )
  {
    v27 = FsRtlPrivateCheckForExclusiveLockAccess(LockInformation + 24, &v44);
    v23 = v45;
    QuadPart = v44;
  }
  else
  {
    v39 = 1;
    v24 = (_RTL_SPLAY_LINKS *)*((_QWORD *)LockInformation + 5);
    if ( !v24 )
      goto LABEL_8;
    v29 = 0LL;
    v47 = 0LL;
    Links = 0LL;
    v30 = 0LL;
    v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v22 - 1);
    while ( 1 )
    {
      v32 = v24 == 0LL;
      if ( !v24 )
        break;
      v29 = v24;
      v47 = v24;
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
    v47 = v29;
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
    v39 = 0;
LABEL_27:
    if ( Links )
    {
      *((_QWORD *)LockInformation + 5) = RtlSplay(Links);
      v27 = v39;
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
        *(_OWORD *)(v28 + 24) = v44;
        *(_OWORD *)(v28 + 40) = v45;
        *(_OWORD *)(v28 + 56) = v46;
        FsRtlPrivateInsertExclusiveLock(LockInformation + 24, v28);
        goto LABEL_11;
      }
    }
    else
    {
      v25 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList);
      Entry = v25;
      if ( v25 )
      {
        v26 = v25 + 8;
        *(_OWORD *)(v25 + 8) = v44;
        *(_OWORD *)(v25 + 24) = v45;
        *(_OWORD *)(v25 + 40) = v46;
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
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, Entry);
      }
    }
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v40);
      RtlRaiseStatus(-1073741670);
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
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v40);
      RtlRaiseStatus(-1073741670);
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
      Irp->CancelIrql = v40;
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
    LockInformation = v43;
    v17 = v42;
  }
LABEL_71:
  if ( !v16 )
    goto LABEL_77;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    if ( !PopHibernateInProgress )
    {
      KiReleaseSpinLockInstrumented(v42, retaddr);
      goto LABEL_74;
    }
    v17 = v42;
  }
  _InterlockedAnd64(v17, 0LL);
LABEL_74:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40);
  __writecr8(v40);
  LockInformation = v43;
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
      Status = guard_dispatch_icall_no_overrides(Context, Irp);
    }
    else
    {
      Irp->IoStatus.Status = Status;
      IofCompleteRequest(Irp, 1);
    }
    if ( Status < 0 && v19->Status >= 0 )
    {
      LOBYTE(v38) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v44, v38);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v19->Status = Status;
  }
  return v20;
}
