/*
 * XREFs of FsRtlFastUnlockSingle @ 0x140372BA0
 * Callers:
 *     FsRtlProcessFileLock @ 0x140376870 (FsRtlProcessFileLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140373974 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockSingle(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        LARGE_INTEGER *FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  _QWORD *LockInformation; // rsi
  unsigned __int64 QuadPart; // rbx
  KIRQL v13; // al
  _RTL_SPLAY_LINKS *v14; // rdx
  NTSTATUS v15; // r12d
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  KSPIN_LOCK *v18; // rsi
  KIRQL v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  _RTL_SPLAY_LINKS *v22; // r8
  unsigned __int64 v23; // rax
  _RTL_SPLAY_LINKS *v24; // rcx
  _QWORD *v25; // r10
  unsigned __int64 v26; // r9
  _RTL_SPLAY_LINKS *v27; // rcx
  LONGLONG v28; // rdx
  _RTL_SPLAY_LINKS *v29; // r15
  _RTL_SPLAY_LINKS *v30; // r14
  _RTL_SPLAY_LINKS *v31; // rdi
  _RTL_SPLAY_LINKS *v32; // r13
  _QWORD *v33; // rdx
  _RTL_SPLAY_LINKS *v34; // rbx
  _RTL_SPLAY_LINKS *v35; // rbp
  _RTL_SPLAY_LINKS *v36; // rsi
  _RTL_SPLAY_LINKS *v37; // rcx
  _RTL_SPLAY_LINKS *v38; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v40; // rax
  _QWORD *v41; // rbx
  PRTL_SPLAY_LINKS v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 RightChild; // r8
  _RTL_SPLAY_LINKS *v46; // r11
  unsigned __int64 Parent; // r10
  LONGLONG v48; // r8
  void *v49; // rbx
  PRTL_SPLAY_LINKS v50; // rax
  _RTL_SPLAY_LINKS *v51; // rax
  _RTL_SPLAY_LINKS *v52; // rcx
  int v53; // eax
  _RTL_SPLAY_LINKS *v54; // rdi
  PRTL_SPLAY_LINKS v55; // rax
  _RTL_SPLAY_LINKS *v56; // rax
  int v57; // [rsp+20h] [rbp-68h]
  _QWORD *v58; // [rsp+28h] [rbp-60h]
  _RTL_SPLAY_LINKS *v59; // [rsp+30h] [rbp-58h]
  _RTL_SPLAY_LINKS *v60; // [rsp+38h] [rbp-50h]
  LONGLONG v61; // [rsp+38h] [rbp-50h]
  _RTL_SPLAY_LINKS *v62; // [rsp+40h] [rbp-48h]
  KIRQL Entry; // [rsp+90h] [rbp+8h]
  char *Entrya; // [rsp+90h] [rbp+8h]

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return -1073741698;
  QuadPart = FileOffset->QuadPart;
  if ( (unsigned __int64)(Length->QuadPart + FileOffset->QuadPart - 1) < FileOffset->QuadPart && Length->QuadPart )
    return -1073741407;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v14 = (_RTL_SPLAY_LINKS *)LockInformation[5];
  v15 = 0;
  v16 = v13;
  if ( v14 )
  {
    v43 = 0LL;
    v44 = QuadPart + Length->QuadPart - 1;
    do
    {
      RightChild = (unsigned __int64)v14[2].RightChild;
      v46 = v14;
      if ( RightChild >= QuadPart && ((Parent = (unsigned __int64)v14[1].Parent) != 0 || v14[1].LeftChild) )
      {
        if ( Parent <= v44 && (v44 != -1LL || QuadPart) )
        {
          if ( Parent <= QuadPart )
            break;
          v43 = v14;
        }
        v14 = v14->LeftChild;
      }
      else if ( RightChild == v44 && v14[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
      {
        v43 = v14;
        v14 = v14->LeftChild;
      }
      else
      {
        v14 = v14->RightChild;
      }
    }
    while ( v14 );
    v48 = Length->QuadPart;
    v61 = Length->QuadPart;
    if ( v14 )
      v43 = v46;
    if ( !v43 )
      v43 = 0LL;
    while ( 1 )
    {
      Entrya = (char *)v43;
      if ( !v43 )
        break;
      if ( (PFILE_OBJECT)v43[2].Parent == FileObject
        && (PEPROCESS)v43[2].LeftChild == ProcessId
        && HIDWORD(v43[1].RightChild) == Key )
      {
        v59 = v43 + 1;
        if ( v43[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart && v43[1].LeftChild == (_RTL_SPLAY_LINKS *)v48 )
        {
          if ( FileObject->LastLock == &v43[1] )
            FileObject->LastLock = 0LL;
          LockInformation[5] = RtlDelete(v43);
          if ( (_RTL_SPLAY_LINKS *)*LockInformation == v59->Parent )
            FsRtlPrivateResetLowestLockOffset(LockInformation);
          if ( LockInformation[2] )
          {
            KeReleaseSpinLock(LockInformation + 3, v16);
            v49 = Entrya;
            guard_dispatch_icall_no_overrides(Context, Entrya + 24);
            LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
          }
          else
          {
            v49 = Entrya;
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v49);
          if ( LockInformation[6] )
            FsRtlPrivateCheckWaitingLocks(LockInformation, LockInformation + 3, (unsigned __int8)v16);
          KxReleaseSpinLock(LockInformation + 3);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
          __writecr8((unsigned __int8)v16);
          return 0;
        }
      }
      if ( v43[1].Parent > (_RTL_SPLAY_LINKS *)QuadPart )
        break;
      v50 = RtlRealSuccessor(v43);
      v48 = v61;
      v43 = v50;
    }
  }
  KxReleaseSpinLock(LockInformation + 3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
  __writecr8(v16);
  v17 = FileOffset->QuadPart;
  v58 = FileLock->LockInformation;
  v18 = v58 + 3;
  v19 = KeAcquireSpinLockRaiseToDpc(v58 + 3);
  v20 = v58[4];
  v21 = v19;
  Entry = v19;
  if ( !v20 )
    goto LABEL_113;
  v22 = 0LL;
  v23 = v17 + Length->QuadPart - 1;
  while ( 1 )
  {
    v24 = (_RTL_SPLAY_LINKS *)(v20 - 24);
    v25 = *(_QWORD **)(v20 - 24);
    if ( *(_QWORD *)(v20 - 24 + 16) < v17 )
      break;
    v26 = v25[1];
    if ( !v26 )
    {
      if ( !v25[2] )
        break;
LABEL_86:
      if ( v23 != -1LL || v17 )
      {
        if ( v26 <= v17 )
          goto LABEL_13;
        v22 = (_RTL_SPLAY_LINKS *)(v20 - 24);
      }
      goto LABEL_11;
    }
    if ( v26 <= v23 )
      goto LABEL_86;
LABEL_11:
    v20 = *(_QWORD *)(v20 + 8);
LABEL_12:
    if ( !v20 )
      goto LABEL_13;
  }
  if ( v25[6] != v23 || v25[1] != v17 )
  {
    v20 = *(_QWORD *)(v20 + 16);
    goto LABEL_12;
  }
LABEL_13:
  if ( v20 )
    v22 = v24;
  v27 = 0LL;
  if ( v22 )
    v27 = v22 + 1;
  if ( !v27 )
  {
LABEL_113:
    KeReleaseSpinLock(v18, v21);
    return -1073741698;
  }
  v28 = Length->QuadPart;
  v29 = v27 - 1;
  v30 = v27 - 1;
  v31 = 0LL;
  while ( 1 )
  {
    v32 = v30->Parent;
    if ( !v30->Parent )
    {
LABEL_89:
      KxReleaseSpinLock((volatile signed __int64 *)v18);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
      __writecr8(v21);
      return -1073741698;
    }
    if ( (PFILE_OBJECT)v32[1].LeftChild == FileObject
      && (PEPROCESS)v32[1].RightChild == ProcessId
      && HIDWORD(v32[1].Parent) == Key
      && v32->LeftChild == (_RTL_SPLAY_LINKS *)v17
      && v32->RightChild == (_RTL_SPLAY_LINKS *)v28 )
    {
      break;
    }
    if ( v32->LeftChild > (_RTL_SPLAY_LINKS *)v17 )
      goto LABEL_89;
    v30 = v30->Parent;
    if ( v31 < v32[2].Parent )
      v31 = v32[2].Parent;
  }
  if ( FileObject->LastLock == &v32->LeftChild )
    FileObject->LastLock = 0LL;
  if ( v30->Parent == v27[1].Parent )
    v27[1].Parent = v30;
  v30->Parent = v32->Parent;
  if ( v30 == v29 )
  {
    if ( !v29->Parent )
    {
      v58[4] = RtlDelete(v27);
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, v29);
      v29 = 0LL;
    }
    v33 = v58;
    if ( (_RTL_SPLAY_LINKS *)*v58 == v32->LeftChild )
    {
      FsRtlPrivateResetLowestLockOffset(v58);
      goto LABEL_34;
    }
  }
  else
  {
LABEL_34:
    v33 = v58;
  }
  if ( !v29 )
    goto LABEL_49;
  v34 = 0LL;
  v57 = 0;
  v35 = 0LL;
  if ( LOBYTE(v29->LeftChild) )
  {
    v36 = v29->RightChild;
    v30 = v29;
    LOBYTE(v29->LeftChild) = 0;
  }
  else
  {
    v34 = v31;
    v36 = v32[2].Parent;
    if ( !v29->Parent || v36 <= v31 )
      goto LABEL_48;
  }
  v37 = v29->RightChild;
  v60 = v37;
  while ( 1 )
  {
    v38 = v30->Parent;
    if ( !v30->Parent )
      break;
    if ( v29->Parent != v38 )
    {
      LeftChild = v38->LeftChild;
      if ( LeftChild <= v34 || !v38->RightChild && LeftChild == v35 )
        goto LABEL_43;
      v51 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
      v62 = v51;
      v52 = v51;
      if ( v51 )
      {
        v54 = v51 + 1;
        v51[1].LeftChild = 0LL;
        v51[1].Parent = v51 + 1;
        v51[1].RightChild = 0LL;
        LOBYTE(v51->LeftChild) = 0;
        v55 = v29 + 1;
        if ( v29[1].RightChild )
        {
          v55 = RtlRealSuccessor(v29 + 1);
          v52 = v62;
          v55->LeftChild = v54;
        }
        else
        {
          v29[1].RightChild = v54;
        }
        v54->Parent = v55;
        v38 = v52;
        v52->Parent = v30->Parent;
        v30->Parent = 0LL;
        v52[2].Parent = v29[2].Parent;
        v56 = v29->RightChild;
        v29[2].Parent = v30;
        v52->RightChild = v56;
        v29->RightChild = v34;
        if ( v57 )
          v57 = 0;
        else
          LOBYTE(v29->LeftChild) = 0;
        v29 = v52;
        v37 = v60;
      }
      else
      {
        v53 = v57;
        if ( LOBYTE(v29->LeftChild) )
          v53 = 1;
        LOBYTE(v29->LeftChild) = 1;
        v37 = v60;
        v57 = v53;
LABEL_43:
        if ( v37 > v36 && v38->LeftChild > v36 )
          goto LABEL_47;
        v40 = v38[2].Parent;
        if ( v34 < v40 )
        {
          v34 = v38[2].Parent;
          if ( v37 <= v36 )
            v29->RightChild = v40;
        }
      }
LABEL_45:
      v30 = v38;
      continue;
    }
    v34 = v38[2].Parent;
    v35 = v38->LeftChild;
    if ( v37 > v36 )
      goto LABEL_45;
    v29->RightChild = v34;
    v30 = v38;
  }
  v29->RightChild = v34;
LABEL_47:
  v33 = v58;
LABEL_48:
  LOBYTE(v21) = Entry;
  v18 = v58 + 3;
LABEL_49:
  if ( v33[2] )
  {
    KeReleaseSpinLock(v18, v21);
    v41 = v58;
    guard_dispatch_icall_no_overrides(Context, &v32->LeftChild);
    LOBYTE(v21) = KeAcquireSpinLockRaiseToDpc(v18);
  }
  else
  {
    v41 = v58;
  }
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v32);
  if ( v18[3] )
    FsRtlPrivateCheckWaitingLocks(v41, v18, (unsigned __int8)v21);
  KxReleaseSpinLock((volatile signed __int64 *)v18);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
  __writecr8((unsigned __int8)v21);
  return v15;
}
