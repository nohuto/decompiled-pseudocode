/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14027DC3C
 * Callers:
 *     FsRtlFastUnlockAll @ 0x14027DB00 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403CC8D0 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x14057D4B0 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x1402E4AE0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402E4B84 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoGetRequestorProcess @ 0x1403CCCD0 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403CCD18 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlSplitLocks @ 0x140475DD8 (FsRtlSplitLocks.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlPrivateFastUnlockAll(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        struct _KPROCESS *a3,
        int a4,
        char a5,
        __int64 a6)
{
  _QWORD *v6; // rsi
  PRTL_SPLAY_LINKS Parent; // rdi
  int v8; // r12d
  _RTL_SPLAY_LINKS *v9; // r15
  KSPIN_LOCK *v10; // r13
  KIRQL v11; // al
  __int64 v12; // r8
  _RTL_SPLAY_LINKS *v13; // rbp
  KIRQL v14; // r14
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v17; // rax
  _RTL_SPLAY_LINKS *v18; // rbx
  PVOID *p_Parent; // r12
  PRTL_SPLAY_LINKS v20; // r15
  PVOID *v21; // r13
  _RTL_SPLAY_LINKS *v22; // r14
  char v23; // r14
  PRTL_SPLAY_LINKS v24; // rbx
  void *v25; // rbx
  void **v26; // r14
  _RTL_SPLAY_LINKS *k; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  KIRQL v30; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  _RTL_SPLAY_LINKS *j; // rax
  __int64 v35; // rbp
  __int64 v36; // r15
  KIRQL v37; // dl
  char v38; // [rsp+30h] [rbp-68h]
  PVOID Entry; // [rsp+38h] [rbp-60h] BYREF
  _RTL_SPLAY_LINKS *v40; // [rsp+40h] [rbp-58h] BYREF
  PRTL_SPLAY_LINKS v41[10]; // [rsp+48h] [rbp-50h] BYREF
  KIRQL NewIrql; // [rsp+A0h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 24);
  Parent = 0LL;
  Entry = 0LL;
  v8 = a4;
  v9 = a2;
  if ( !v6 )
    return 3221225598LL;
  v10 = v6 + 3;
  a2[5].Parent = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v13 = (_RTL_SPLAY_LINKS *)v6[4];
  v14 = v11;
  NewIrql = v11;
  if ( !v13 )
  {
    if ( v6[5] )
      goto LABEL_23;
    LODWORD(Parent) = -1073741698;
    goto LABEL_5;
  }
  for ( i = v13->LeftChild; i; i = i->LeftChild )
    v13 = i;
  v38 = 0;
  do
  {
    v17 = RtlRealSuccessor(v13);
    v18 = 0LL;
    v41[0] = 0LL;
    v40 = 0LL;
    p_Parent = (PVOID *)&v13[-1].Parent;
    v20 = v17;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = (_RTL_SPLAY_LINKS *)*p_Parent;
      if ( !*p_Parent )
      {
        v23 = v38;
        goto LABEL_18;
      }
      Entry = *p_Parent;
      if ( v22[1].LeftChild != a2 || (struct _KPROCESS *)v22[1].RightChild != a3 || a5 && HIDWORD(v22[1].Parent) != a4 )
      {
        p_Parent = (PVOID *)&v22->Parent;
        goto LABEL_14;
      }
      if ( !v21 )
        v21 = p_Parent;
      if ( v22[2].Parent > Parent )
        Parent = v22[2].Parent;
      v41[0] = Parent;
      if ( v22 == v13[1].Parent )
        v13[1].Parent = (_RTL_SPLAY_LINKS *)p_Parent;
      *p_Parent = v22->Parent;
      if ( v6[2] )
        break;
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v22);
LABEL_14:
      if ( !v21 && v22[2].Parent > v18 )
      {
        v18 = v22[2].Parent;
        v40 = v18;
      }
    }
    v23 = 1;
    v38 = 1;
LABEL_18:
    Parent = 0LL;
    if ( v21 )
    {
      if ( v13[-1].Parent )
      {
        FsRtlSplitLocks(&v13[-1], v21, v41, &v40);
      }
      else
      {
        v6[4] = RtlDelete(v13);
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v13[-1]);
      }
    }
    v10 = v6 + 3;
    if ( v23 )
    {
      KeReleaseSpinLock(v6 + 3, NewIrql);
      guard_dispatch_icall_no_overrides(a6, (char *)Entry + 8, v32, v33);
      NewIrql = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      v14 = NewIrql;
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, Entry);
      v20 = (PRTL_SPLAY_LINKS)v6[4];
      v38 = 0;
      if ( v20 )
      {
        for ( j = v20->LeftChild; j; j = j->LeftChild )
          v20 = j;
      }
    }
    else
    {
      v14 = NewIrql;
    }
    v13 = v20;
  }
  while ( v20 );
  v9 = a2;
  v8 = a4;
LABEL_23:
  v24 = (PRTL_SPLAY_LINKS)v6[5];
  if ( v24 )
  {
    for ( k = v24->LeftChild; k; k = k->LeftChild )
      v24 = k;
    do
    {
      Parent = RtlRealSuccessor(v24);
      if ( v24[2].Parent == v9
        && (struct _KPROCESS *)v24[2].LeftChild == a3
        && (!a5 || HIDWORD(v24[1].RightChild) == v8) )
      {
        v6[5] = RtlDelete(v24);
        if ( v6[2] )
        {
          KeReleaseSpinLock(v10, v14);
          guard_dispatch_icall_no_overrides(a6, &v24[1], v28, v29);
          v30 = KeAcquireSpinLockRaiseToDpc(v10);
          Parent = (PRTL_SPLAY_LINKS)v6[5];
          v14 = v30;
          if ( Parent )
          {
            for ( m = Parent->LeftChild; m; m = m->LeftChild )
              Parent = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v24);
      }
      v24 = Parent;
    }
    while ( Parent );
    NewIrql = v14;
  }
  v25 = (void *)v6[6];
  v26 = (void **)(v6 + 6);
  if ( v25 )
  {
    do
    {
      v35 = *((_QWORD *)v25 + 3);
      v36 = *(_QWORD *)(v35 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v36 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v25 + 3))
        || a5 && a4 != *(_DWORD *)(v36 + 16) )
      {
        goto LABEL_76;
      }
      *(_BYTE *)(v35 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v35 + 104), 0LL);
      v37 = *(_BYTE *)(v35 + 69);
      if ( *(_BYTE *)(v35 + 68) )
        v35 = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v37);
      if ( v35 )
      {
        *(_QWORD *)(v35 + 56) = 0LL;
        *v26 = *(void **)v25;
        if ( v25 == (void *)v6[7] )
          v6[7] = v26;
        KeReleaseSpinLock(v10, NewIrql);
        FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v25 + 2), v35, 3221225598LL, &Entry, 0LL);
        NewIrql = KeAcquireSpinLockRaiseToDpc(v10);
        v26 = (void **)(v6 + 6);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v25);
      }
      else
      {
LABEL_76:
        v26 = (void **)v25;
      }
      v25 = *v26;
    }
    while ( *v26 );
    LODWORD(Parent) = 0;
  }
  v14 = NewIrql;
  LOBYTE(v12) = NewIrql;
  FsRtlPrivateCheckWaitingLocks(v6, v10, v12);
  FsRtlPrivateResetLowestLockOffset(v6);
LABEL_5:
  KeReleaseSpinLock(v10, v14);
  return (unsigned int)Parent;
}
