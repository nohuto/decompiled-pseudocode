/*
 * XREFs of FsRtlFastUnlockSingle @ 0x140249B60
 * Callers:
 *     FsRtlProcessFileLock @ 0x1403DB600 (FsRtlProcessFileLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140248410 (RtlRealSuccessor.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14024A944 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  RTL_SPLAY_LINKS *v14; // rdx
  NTSTATUS v15; // r12d
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  KSPIN_LOCK *v18; // rsi
  KIRQL v19; // al
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  RTL_SPLAY_LINKS *v22; // r15
  unsigned __int64 v23; // rax
  RTL_SPLAY_LINKS *v24; // rcx
  _QWORD *v25; // r9
  unsigned __int64 v26; // r8
  LONGLONG v27; // rdx
  _RTL_SPLAY_LINKS *v28; // rdi
  RTL_SPLAY_LINKS *v29; // r14
  _RTL_SPLAY_LINKS *v30; // r13
  _QWORD *v31; // r9
  _RTL_SPLAY_LINKS *v32; // rbx
  _RTL_SPLAY_LINKS *v33; // rbp
  _RTL_SPLAY_LINKS *v34; // rsi
  _RTL_SPLAY_LINKS *v35; // rcx
  RTL_SPLAY_LINKS *v36; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *v38; // rax
  _QWORD *v39; // rbx
  PRTL_SPLAY_LINKS v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 RightChild; // r8
  RTL_SPLAY_LINKS *v44; // r11
  unsigned __int64 Parent; // r10
  LONGLONG v46; // r8
  void *v47; // rbx
  PRTL_SPLAY_LINKS v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  _RTL_SPLAY_LINKS *v53; // rax
  RTL_SPLAY_LINKS *v54; // rcx
  int v55; // eax
  _RTL_SPLAY_LINKS *v56; // rdi
  PRTL_SPLAY_LINKS v57; // rax
  _RTL_SPLAY_LINKS *v58; // rax
  int v59; // [rsp+20h] [rbp-68h]
  _QWORD *v60; // [rsp+28h] [rbp-60h]
  RTL_SPLAY_LINKS *v61; // [rsp+30h] [rbp-58h]
  _RTL_SPLAY_LINKS *v62; // [rsp+38h] [rbp-50h]
  LONGLONG v63; // [rsp+38h] [rbp-50h]
  RTL_SPLAY_LINKS *v64; // [rsp+40h] [rbp-48h]
  KIRQL Entry; // [rsp+90h] [rbp+8h]
  char *Entrya; // [rsp+90h] [rbp+8h]

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation )
    return -1073741698;
  QuadPart = FileOffset->QuadPart;
  if ( (unsigned __int64)(Length->QuadPart + FileOffset->QuadPart - 1) < FileOffset->QuadPart && Length->QuadPart )
    return -1073741407;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v14 = (RTL_SPLAY_LINKS *)LockInformation[5];
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
    v63 = Length->QuadPart;
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
        v61 = v41 + 1;
        if ( v41[1].Parent == (_RTL_SPLAY_LINKS *)QuadPart && v41[1].LeftChild == (_RTL_SPLAY_LINKS *)v46 )
        {
          if ( FileObject->LastLock == &v41[1] )
            FileObject->LastLock = 0LL;
          LockInformation[5] = RtlDelete(v41);
          if ( (_RTL_SPLAY_LINKS *)*LockInformation == v61->Parent )
            FsRtlPrivateResetLowestLockOffset(LockInformation);
          if ( LockInformation[2] )
          {
            KeReleaseSpinLock(LockInformation + 3, v16);
            v47 = Entrya;
            guard_dispatch_icall_no_overrides(Context, Entrya + 24, v49, v50);
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
      v46 = v63;
      v41 = v48;
    }
  }
  KxReleaseSpinLock(LockInformation + 3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
  __writecr8(v16);
  v17 = FileOffset->QuadPart;
  v60 = FileLock->LockInformation;
  v18 = v60 + 3;
  v19 = KeAcquireSpinLockRaiseToDpc(v60 + 3);
  v20 = v60[4];
  v21 = v19;
  Entry = v19;
  if ( !v20 )
    goto LABEL_113;
  v22 = 0LL;
  v23 = v17 + Length->QuadPart - 1;
  while ( 1 )
  {
    v24 = (RTL_SPLAY_LINKS *)(v20 - 24);
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
        v22 = (RTL_SPLAY_LINKS *)(v20 - 24);
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
  if ( !v22 || v22 == (RTL_SPLAY_LINKS *)-24LL )
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
      KxReleaseSpinLock(v18);
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
      v60[4] = RtlDelete(v22 + 1);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v22);
      v22 = 0LL;
    }
    v31 = v60;
    if ( (_RTL_SPLAY_LINKS *)*v60 == v30->LeftChild )
      FsRtlPrivateResetLowestLockOffset(v60);
    if ( !v22 )
      goto LABEL_47;
  }
  else
  {
    v31 = v60;
  }
  v32 = 0LL;
  v59 = 0;
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
  v62 = v35;
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
      v53 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
      v64 = v53;
      v54 = v53;
      if ( v53 )
      {
        v56 = v53 + 1;
        v53[1].LeftChild = 0LL;
        v53[1].Parent = v53 + 1;
        v53[1].RightChild = 0LL;
        LOBYTE(v53->LeftChild) = 0;
        v57 = v22 + 1;
        if ( v22[1].RightChild )
        {
          v57 = RtlRealSuccessor(v22 + 1);
          v54 = v64;
          v57->LeftChild = v56;
        }
        else
        {
          v22[1].RightChild = v56;
        }
        v56->Parent = v57;
        v36 = v54;
        v54->Parent = v29->Parent;
        v29->Parent = 0LL;
        v54[2].Parent = v22[2].Parent;
        v58 = v22->RightChild;
        v22[2].Parent = v29;
        v54->RightChild = v58;
        v22->RightChild = v32;
        if ( v59 )
          v59 = 0;
        else
          LOBYTE(v22->LeftChild) = 0;
        v22 = v54;
        v35 = v62;
      }
      else
      {
        v55 = v59;
        if ( LOBYTE(v22->LeftChild) )
          v55 = 1;
        LOBYTE(v22->LeftChild) = 1;
        v35 = v62;
        v59 = v55;
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
  v31 = v60;
LABEL_46:
  LOBYTE(v21) = Entry;
  v18 = v60 + 3;
LABEL_47:
  if ( v31[2] )
  {
    KeReleaseSpinLock(v18, v21);
    v39 = v60;
    guard_dispatch_icall_no_overrides(Context, &v30->LeftChild, v51, v52);
    LOBYTE(v21) = KeAcquireSpinLockRaiseToDpc(v18);
  }
  else
  {
    v39 = v60;
  }
  ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v30);
  if ( v18[3] )
    FsRtlPrivateCheckWaitingLocks(v39, v18, (unsigned __int8)v21);
  KxReleaseSpinLock(v18);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v21);
  __writecr8((unsigned __int8)v21);
  return v15;
}
