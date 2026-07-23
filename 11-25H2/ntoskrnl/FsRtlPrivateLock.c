/*
 * XREFs of FsRtlPrivateLock @ 0x140373FB0
 * Callers:
 *     FsRtlProcessFileLock @ 0x140376870 (FsRtlProcessFileLock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140374A30 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x140374C04 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140374D3C (FsRtlPrivateInitializeFileLock.c)
 *     RtlSplay @ 0x1403751F0 (RtlSplay.c)
 *     FsRtlCompleteLockIrpReal @ 0x14048BE20 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA600 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1404D9B18 (FsRtlPrivateRemoveLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  _RTL_SPLAY_LINKS *v23; // rax
  char v24; // al
  char *v25; // rax
  char *v26; // rdi
  char v27; // di
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
  KIRQL v39; // [rsp+69h] [rbp-97h]
  _RTL_SPLAY_LINKS *Links; // [rsp+70h] [rbp-90h]
  volatile signed __int64 *v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int128 v43; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  PRTL_SPLAY_LINKS v46; // [rsp+C0h] [rbp-40h]
  PVOID Entry; // [rsp+C8h] [rbp-38h]
  __int64 retaddr; // [rsp+100h] [rbp+0h]

  v13 = FileOffset;
  v14 = FileObject;
  v16 = 0;
  v17 = 0LL;
  v41 = 0LL;
  v39 = -1;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  LockInformation = (char *)FileLock->LockInformation;
  v42 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
    {
LABEL_3:
      v19 = Iosb;
      v20 = 0;
      goto LABEL_72;
    }
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (char *)FileLock->LockInformation;
    v42 = LockInformation;
    v13 = FileOffset;
  }
  QuadPart = v13->QuadPart;
  *(_QWORD *)&v43 = QuadPart;
  v22 = Length->QuadPart;
  *((_QWORD *)&v43 + 1) = v22;
  *((_QWORD *)&v45 + 1) = QuadPart + v22 - 1;
  DWORD1(v44) = Key;
  *((_QWORD *)&v44 + 1) = v14;
  *(_QWORD *)&v45 = ProcessId;
  LOBYTE(v44) = ExclusiveLock;
  v17 = (volatile signed __int64 *)(LockInformation + 24);
  v41 = (volatile signed __int64 *)(LockInformation + 24);
  if ( *((_QWORD *)&v45 + 1) < QuadPart && v22 )
  {
    v19 = Iosb;
    Iosb->Status = -1073741407;
    v20 = 1;
    goto LABEL_72;
  }
  v16 = 1;
  v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LockInformation + 3);
  if ( ExclusiveLock )
  {
    v27 = FsRtlPrivateCheckForExclusiveLockAccess(LockInformation + 24, &v43);
    v24 = v44;
    QuadPart = v43;
  }
  else
  {
    v23 = (_RTL_SPLAY_LINKS *)*((_QWORD *)LockInformation + 5);
    if ( !v23 )
    {
      v24 = 0;
      goto LABEL_9;
    }
    v29 = 0LL;
    v46 = 0LL;
    Links = 0LL;
    v30 = 0LL;
    v31 = (_RTL_SPLAY_LINKS *)(QuadPart + v22 - 1);
    while ( 1 )
    {
      v32 = v23 == 0LL;
      if ( !v23 )
        break;
      v29 = v23;
      v46 = v23;
      RightChild = v23[2].RightChild;
      if ( (unsigned __int64)RightChild >= QuadPart && ((Parent = v23[1].Parent) != 0LL || v23[1].LeftChild) )
      {
        if ( Parent <= v31 && (v31 != (_RTL_SPLAY_LINKS *)-1LL || QuadPart) )
        {
          if ( (unsigned __int64)Parent <= QuadPart )
          {
            v32 = v23 == 0LL;
            break;
          }
          v30 = v23;
        }
        Links = v23;
        v23 = v23->LeftChild;
      }
      else if ( RightChild == v31 && v23[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
      {
        v30 = v23;
        Links = v23;
        v23 = v23->LeftChild;
      }
      else
      {
        Links = v23;
        v23 = v23->RightChild;
      }
    }
    if ( v32 )
      v29 = v30;
    v46 = v29;
    if ( v29 )
      goto LABEL_44;
    while ( 1 )
    {
      if ( !v29 )
      {
LABEL_27:
        v27 = 1;
        goto LABEL_28;
      }
LABEL_44:
      if ( v29[1].Parent > v31 )
        goto LABEL_27;
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
LABEL_28:
    if ( Links )
      *((_QWORD *)LockInformation + 5) = RtlSplay(Links);
    v24 = 0;
  }
  if ( v27 )
  {
LABEL_9:
    if ( v24 )
    {
      v28 = (char *)ExAllocateFromNPagedLookasideList(&FsRtlExclusiveLockLookasideList);
      if ( v28 )
      {
        v26 = v28 + 24;
        *(_OWORD *)(v28 + 24) = v43;
        *(_OWORD *)(v28 + 40) = v44;
        *(_OWORD *)(v28 + 56) = v45;
        FsRtlPrivateInsertExclusiveLock(LockInformation + 24, v28);
        goto LABEL_12;
      }
    }
    else
    {
      v25 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList);
      Entry = v25;
      if ( v25 )
      {
        v26 = v25 + 8;
        *(_OWORD *)(v25 + 8) = v43;
        *(_OWORD *)(v25 + 24) = v44;
        *(_OWORD *)(v25 + 40) = v45;
        if ( (unsigned __int8)FsRtlPrivateInsertSharedLock(LockInformation + 24, v25) )
        {
LABEL_12:
          v14->LastLock = v26;
          if ( QuadPart < *(_QWORD *)LockInformation )
            *(_QWORD *)LockInformation = QuadPart;
          v19 = Iosb;
          Iosb->Status = 0;
          v20 = 1;
          goto LABEL_72;
        }
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, Entry);
      }
    }
    if ( Irp )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v39);
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
      KeReleaseSpinLock((PKSPIN_LOCK)LockInformation + 3, v39);
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
      Irp->CancelIrql = v39;
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
    LockInformation = v42;
    v17 = v41;
  }
LABEL_72:
  if ( !v16 )
    goto LABEL_78;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    if ( !PopHibernateInProgress )
    {
      KiReleaseSpinLockInstrumented(v41, retaddr);
      goto LABEL_75;
    }
    v17 = v41;
  }
  _InterlockedAnd64(v17, 0LL);
LABEL_75:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
  __writecr8(v39);
  LockInformation = v42;
LABEL_78:
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
      FsRtlPrivateRemoveLock(LockInformation, &v43, v38);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v19->Status = Status;
  }
  return v20;
}
