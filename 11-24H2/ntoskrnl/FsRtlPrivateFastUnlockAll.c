/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14024D62C
 * Callers:
 *     FsRtlFastUnlockAll @ 0x14024D4F0 (FsRtlFastUnlockAll.c)
 *     FsRtlProcessFileLock @ 0x1403DB600 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAllByKey @ 0x140580070 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     RtlRealSuccessor @ 0x140248410 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x14024A944 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     IoGetRequestorProcess @ 0x1403DBA00 (IoGetRequestorProcess.c)
 *     FsRtlCompleteLockIrpReal @ 0x1403DBA48 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlSplitLocks @ 0x14047A758 (FsRtlSplitLocks.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  RTL_SPLAY_LINKS *v12; // rbp
  KIRQL v13; // r14
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *v17; // rbx
  PVOID *p_Parent; // r12
  PRTL_SPLAY_LINKS v19; // r15
  PVOID *v20; // r13
  _RTL_SPLAY_LINKS *v21; // r14
  char v22; // r14
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rbx
  void **v25; // r14
  _RTL_SPLAY_LINKS *k; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  KIRQL v29; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  _RTL_SPLAY_LINKS *j; // rax
  __int64 v34; // rbp
  __int64 v35; // r15
  KIRQL v36; // dl
  char v37; // [rsp+30h] [rbp-68h]
  PVOID Entry; // [rsp+38h] [rbp-60h] BYREF
  _RTL_SPLAY_LINKS *v39; // [rsp+40h] [rbp-58h] BYREF
  PRTL_SPLAY_LINKS v40[10]; // [rsp+48h] [rbp-50h] BYREF
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
  v12 = (RTL_SPLAY_LINKS *)v6[4];
  v13 = v11;
  NewIrql = v11;
  if ( !v12 )
  {
    if ( v6[5] )
      goto LABEL_23;
    LODWORD(Parent) = -1073741698;
    goto LABEL_5;
  }
  for ( i = v12->LeftChild; i; i = i->LeftChild )
    v12 = i;
  v37 = 0;
  do
  {
    v16 = RtlRealSuccessor(v12);
    v17 = 0LL;
    v40[0] = 0LL;
    v39 = 0LL;
    p_Parent = (PVOID *)&v12[-1].Parent;
    v19 = v16;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = (_RTL_SPLAY_LINKS *)*p_Parent;
      if ( !*p_Parent )
      {
        v22 = v37;
        goto LABEL_18;
      }
      Entry = *p_Parent;
      if ( v21[1].LeftChild != a2 || (struct _KPROCESS *)v21[1].RightChild != a3 || a5 && HIDWORD(v21[1].Parent) != a4 )
      {
        p_Parent = (PVOID *)&v21->Parent;
        goto LABEL_14;
      }
      if ( !v20 )
        v20 = p_Parent;
      if ( v21[2].Parent > Parent )
        Parent = v21[2].Parent;
      v40[0] = Parent;
      if ( v21 == v12[1].Parent )
        v12[1].Parent = (_RTL_SPLAY_LINKS *)p_Parent;
      *p_Parent = v21->Parent;
      if ( v6[2] )
        break;
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v21);
LABEL_14:
      if ( !v20 && v21[2].Parent > v17 )
      {
        v17 = v21[2].Parent;
        v39 = v17;
      }
    }
    v22 = 1;
    v37 = 1;
LABEL_18:
    Parent = 0LL;
    if ( v20 )
    {
      if ( v12[-1].Parent )
      {
        FsRtlSplitLocks(&v12[-1], v20, v40, &v39);
      }
      else
      {
        v6[4] = RtlDelete(v12);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v12[-1]);
      }
    }
    v10 = v6 + 3;
    if ( v22 )
    {
      KeReleaseSpinLock(v6 + 3, NewIrql);
      guard_dispatch_icall_no_overrides(a6, (char *)Entry + 8, v31, v32);
      NewIrql = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      v13 = NewIrql;
      ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Entry);
      v19 = (PRTL_SPLAY_LINKS)v6[4];
      v37 = 0;
      if ( v19 )
      {
        for ( j = v19->LeftChild; j; j = j->LeftChild )
          v19 = j;
      }
    }
    else
    {
      v13 = NewIrql;
    }
    v12 = v19;
  }
  while ( v19 );
  v9 = a2;
  v8 = a4;
LABEL_23:
  v23 = (PRTL_SPLAY_LINKS)v6[5];
  if ( v23 )
  {
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      Parent = RtlRealSuccessor(v23);
      if ( v23[2].Parent == v9
        && (struct _KPROCESS *)v23[2].LeftChild == a3
        && (!a5 || HIDWORD(v23[1].RightChild) == v8) )
      {
        v6[5] = RtlDelete(v23);
        if ( v6[2] )
        {
          KeReleaseSpinLock(v10, v13);
          guard_dispatch_icall_no_overrides(a6, &v23[1], v27, v28);
          v29 = KeAcquireSpinLockRaiseToDpc(v10);
          Parent = (PRTL_SPLAY_LINKS)v6[5];
          v13 = v29;
          if ( Parent )
          {
            for ( m = Parent->LeftChild; m; m = m->LeftChild )
              Parent = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = Parent;
    }
    while ( Parent );
    NewIrql = v13;
  }
  v24 = (void *)v6[6];
  v25 = (void **)(v6 + 6);
  if ( v24 )
  {
    do
    {
      v34 = *((_QWORD *)v24 + 3);
      v35 = *(_QWORD *)(v34 + 184);
      if ( a2 != *(_RTL_SPLAY_LINKS **)(v35 + 48)
        || a3 != IoGetRequestorProcess(*((PIRP *)v24 + 3))
        || a5 && a4 != *(_DWORD *)(v35 + 16) )
      {
        goto LABEL_76;
      }
      *(_BYTE *)(v34 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v34 + 104), 0LL);
      v36 = *(_BYTE *)(v34 + 69);
      if ( *(_BYTE *)(v34 + 68) )
        v34 = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v36);
      if ( v34 )
      {
        *(_QWORD *)(v34 + 56) = 0LL;
        *v25 = *(void **)v24;
        if ( v24 == (void *)v6[7] )
          v6[7] = v25;
        KeReleaseSpinLock(v10, NewIrql);
        FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v24 + 2), v34, 3221225598LL, &Entry, 0LL);
        NewIrql = KeAcquireSpinLockRaiseToDpc(v10);
        v25 = (void **)(v6 + 6);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
      }
      else
      {
LABEL_76:
        v25 = (void **)v24;
      }
      v24 = *v25;
    }
    while ( *v25 );
    LODWORD(Parent) = 0;
  }
  v13 = NewIrql;
  FsRtlPrivateCheckWaitingLocks(v6, v10, NewIrql);
  FsRtlPrivateResetLowestLockOffset(v6);
LABEL_5:
  KeReleaseSpinLock(v10, v13);
  return (unsigned int)Parent;
}
