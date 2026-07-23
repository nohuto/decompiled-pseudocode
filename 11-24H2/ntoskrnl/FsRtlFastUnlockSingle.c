/*
 * XREFs of FsRtlFastUnlockSingle @ 0x1402E3DA0
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403CC8D0 (FsRtlProcessFileLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     RtlDelete @ 0x1402E4AE0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402E4B84 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  _RTL_SPLAY_LINKS *v22; // r15
  unsigned __int64 v23; // rax
  _RTL_SPLAY_LINKS *v24; // rcx
  _QWORD *v25; // r9
  unsigned __int64 v26; // r8
  LONGLONG v27; // rdx
  _RTL_SPLAY_LINKS *v28; // rdi
  _RTL_SPLAY_LINKS *v29; // r14
  _RTL_SPLAY_LINKS *v30; // r13
  _QWORD *v31; // r9
  _RTL_SPLAY_LINKS *v32; // rbx
  _RTL_SPLAY_LINKS *v33; // rbp
  _RTL_SPLAY_LINKS *v34; // rsi
  _RTL_SPLAY_LINKS *v35; // rcx
  _RTL_SPLAY_LINKS *v36; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v38; // rax
  _QWORD *v39; // rbx
  PRTL_SPLAY_LINKS v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 RightChild; // r8
  _RTL_SPLAY_LINKS *v44; // r11
  unsigned __int64 Parent; // r10
  LONGLONG v46; // r8
  void *v47; // rbx
  PRTL_SPLAY_LINKS v48; // rax
  _RTL_SPLAY_LINKS *v49; // rax
  _RTL_SPLAY_LINKS *v50; // rcx
  int v51; // eax
  _RTL_SPLAY_LINKS *v52; // rdi
  PRTL_SPLAY_LINKS v53; // rax
  _RTL_SPLAY_LINKS *v54; // rax
  int v55; // [rsp+20h] [rbp-68h]
  _QWORD *v56; // [rsp+28h] [rbp-60h]
  _RTL_SPLAY_LINKS *v57; // [rsp+30h] [rbp-58h]
  _RTL_SPLAY_LINKS *v58; // [rsp+38h] [rbp-50h]
  LONGLONG v59; // [rsp+38h] [rbp-50h]
  _RTL_SPLAY_LINKS *v60; // [rsp+40h] [rbp-48h]
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
    v41 = 0LL;
    v42 = QuadPart + Length->QuadPart - 1;
    do
    {
      RightChild = (unsigned __int64)v14[2].RightChild;
      v44 = v14;
      if ( RightChild >= QuadPart && ((Parent = (unsigned __int64)v14[1].Parent) != 0 || v14[1].LeftChild) )
      {
        if ( Parent <= v42 && (v42 != -1LL || QuadPart) )
        {
          if ( Parent <= QuadPart )
            break;
          v41 = v14;
        }
        v14 = v14->LeftChild;
      }
      else if ( RightChild == v42 && v14[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart )
      {
        v41 = v14;
        v14 = v14->LeftChild;
      }
      else
      {
        v14 = v14->RightChild;
      }
    }
    while ( v14 );
    v46 = Length->QuadPart;
    v59 = Length->QuadPart;
    if ( v14 )
      v41 = v44;
    if ( !v41 )
      v41 = 0LL;
    while ( 1 )
    {
      Entrya = (char *)v41;
      if ( !v41 )
        break;
      if ( (PFILE_OBJECT)v41[2].Parent == FileObject
        && (PEPROCESS)v41[2].LeftChild == ProcessId
        && HIDWORD(v41[1].RightChild) == Key )
      {
        v57 = v41 + 1;
        if ( v41[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart && v41[1].LeftChild == (_RTL_SPLAY_LINKS *)v46 )
        {
          if ( FileObject->LastLock == &v41[1] )
            FileObject->LastLock = 0LL;
          LockInformation[5] = RtlDelete(v41);
          if ( (_RTL_SPLAY_LINKS *)*LockInformation == v57->Parent )
            FsRtlPrivateResetLowestLockOffset(LockInformation);
          if ( LockInformation[2] )
          {
            KeReleaseSpinLock(LockInformation + 3, v16);
            v47 = Entrya;
            guard_dispatch_icall_no_overrides(Context, Entrya + 24);
            LOBYTE(v16) = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
          }
          else
          {
            v47 = Entrya;
          }
          ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v47);
          if ( LockInformation[6] )
            FsRtlPrivateCheckWaitingLocks(LockInformation, LockInformation + 3, (unsigned __int8)v16);
          KxReleaseSpinLock(LockInformation + 3);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
          __writecr8((unsigned __int8)v16);
          return 0;
        }
      }
      if ( v41[1].Parent > (_RTL_SPLAY_LINKS *)QuadPart )
        break;
      v48 = RtlRealSuccessor(v41);
      v46 = v59;
      v41 = v48;
    }
  }
  KxReleaseSpinLock(LockInformation + 3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
  __writecr8(v16);
  v17 = FileOffset->QuadPart;
  v56 = FileLock->LockInformation;
  v18 = v56 + 3;
  v19 = KeAcquireSpinLockRaiseToDpc(v56 + 3);
  v20 = v56[4];
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
LABEL_84:
      if ( v23 != -1LL || v17 )
      {
        if ( v26 <= v17 )
          goto LABEL_13;
        v22 = (_RTL_SPLAY_LINKS *)(v20 - 24);
      }
      goto LABEL_11;
    }
    if ( v26 <= v23 )
      goto LABEL_84;
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
  if ( !v22 || v22 == (_RTL_SPLAY_LINKS *)-24LL )
  {
LABEL_113:
    KeReleaseSpinLock(v18, v21);
    return -1073741698;
  }
  v27 = Length->QuadPart;
  v28 = 0LL;
  v29 = v22;
  while ( 1 )
  {
    v30 = v29->Parent;
    if ( !v29->Parent )
    {
LABEL_87:
      KxReleaseSpinLock((volatile signed __int64 *)v18);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
      __writecr8(v21);
      return -1073741698;
    }
    if ( (PFILE_OBJECT)v30[1].LeftChild == FileObject
      && (PEPROCESS)v30[1].RightChild == ProcessId
      && HIDWORD(v30[1].Parent) == Key
      && v30->LeftChild == (_RTL_SPLAY_LINKS *)v17
      && v30->RightChild == (_RTL_SPLAY_LINKS *)v27 )
    {
      break;
    }
    if ( v30->LeftChild > (_RTL_SPLAY_LINKS *)v17 )
      goto LABEL_87;
    v29 = v29->Parent;
    if ( v28 < v30[2].Parent )
      v28 = v30[2].Parent;
  }
  if ( FileObject->LastLock == &v30->LeftChild )
    FileObject->LastLock = 0LL;
  if ( v29->Parent == v22[2].Parent )
    v22[2].Parent = v29;
  v29->Parent = v30->Parent;
  if ( v29 == v22 )
  {
    if ( !v22->Parent )
    {
      v56[4] = RtlDelete(v22 + 1);
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, v22);
      v22 = 0LL;
    }
    v31 = v56;
    if ( (_RTL_SPLAY_LINKS *)*v56 == v30->LeftChild )
      FsRtlPrivateResetLowestLockOffset(v56);
    if ( !v22 )
      goto LABEL_47;
  }
  else
  {
    v31 = v56;
  }
  v32 = 0LL;
  v55 = 0;
  v33 = 0LL;
  if ( LOBYTE(v22->LeftChild) )
  {
    v34 = v22->RightChild;
    v29 = v22;
    LOBYTE(v22->LeftChild) = 0;
  }
  else
  {
    v32 = v28;
    v34 = v30[2].Parent;
    if ( !v22->Parent || v34 <= v28 )
      goto LABEL_46;
  }
  v35 = v22->RightChild;
  v58 = v35;
  while ( 1 )
  {
    v36 = v29->Parent;
    if ( !v29->Parent )
      break;
    if ( v22->Parent != v36 )
    {
      LeftChild = v36->LeftChild;
      if ( LeftChild <= v32 || !v36->RightChild && LeftChild == v33 )
        goto LABEL_41;
      v49 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList);
      v60 = v49;
      v50 = v49;
      if ( v49 )
      {
        v52 = v49 + 1;
        v49[1].LeftChild = 0LL;
        v49[1].Parent = v49 + 1;
        v49[1].RightChild = 0LL;
        LOBYTE(v49->LeftChild) = 0;
        v53 = v22 + 1;
        if ( v22[1].RightChild )
        {
          v53 = RtlRealSuccessor(v22 + 1);
          v50 = v60;
          v53->LeftChild = v52;
        }
        else
        {
          v22[1].RightChild = v52;
        }
        v52->Parent = v53;
        v36 = v50;
        v50->Parent = v29->Parent;
        v29->Parent = 0LL;
        v50[2].Parent = v22[2].Parent;
        v54 = v22->RightChild;
        v22[2].Parent = v29;
        v50->RightChild = v54;
        v22->RightChild = v32;
        if ( v55 )
          v55 = 0;
        else
          LOBYTE(v22->LeftChild) = 0;
        v22 = v50;
        v35 = v58;
      }
      else
      {
        v51 = v55;
        if ( LOBYTE(v22->LeftChild) )
          v51 = 1;
        LOBYTE(v22->LeftChild) = 1;
        v35 = v58;
        v55 = v51;
LABEL_41:
        if ( v35 > v34 && v36->LeftChild > v34 )
          goto LABEL_45;
        v38 = v36[2].Parent;
        if ( v32 < v38 )
        {
          v32 = v36[2].Parent;
          if ( v35 <= v34 )
            v22->RightChild = v38;
        }
      }
LABEL_43:
      v29 = v36;
      continue;
    }
    v32 = v36[2].Parent;
    v33 = v36->LeftChild;
    if ( v35 > v34 )
      goto LABEL_43;
    v22->RightChild = v32;
    v29 = v36;
  }
  v22->RightChild = v32;
LABEL_45:
  v31 = v56;
LABEL_46:
  LOBYTE(v21) = Entry;
  v18 = v56 + 3;
LABEL_47:
  if ( v31[2] )
  {
    KeReleaseSpinLock(v18, v21);
    v39 = v56;
    guard_dispatch_icall_no_overrides(Context, &v30->LeftChild);
    LOBYTE(v21) = KeAcquireSpinLockRaiseToDpc(v18);
  }
  else
  {
    v39 = v56;
  }
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v30);
  if ( v18[3] )
    FsRtlPrivateCheckWaitingLocks(v39, v18, (unsigned __int8)v21);
  KxReleaseSpinLock((volatile signed __int64 *)v18);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
  __writecr8((unsigned __int8)v21);
  return v15;
}
