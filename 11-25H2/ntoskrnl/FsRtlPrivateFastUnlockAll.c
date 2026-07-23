/*
 * XREFs of FsRtlPrivateFastUnlockAll @ 0x14045B2D4
 * Callers:
 *     FsRtlProcessFileLock @ 0x140376870 (FsRtlProcessFileLock.c)
 *     FsRtlFastUnlockAll @ 0x14045B2B0 (FsRtlFastUnlockAll.c)
 *     FsRtlFastUnlockAllByKey @ 0x14057CD50 (FsRtlFastUnlockAllByKey.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     RtlDelete @ 0x1403738D0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140373974 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     RtlRealSuccessor @ 0x140373F60 (RtlRealSuccessor.c)
 *     IoGetRequestorProcess @ 0x140376780 (IoGetRequestorProcess.c)
 *     FsRtlSplitLocks @ 0x14045B650 (FsRtlSplitLocks.c)
 *     FsRtlCompleteLockIrpReal @ 0x14048BE20 (FsRtlCompleteLockIrpReal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  _RTL_SPLAY_LINKS *v7; // rdi
  int v8; // r15d
  _RTL_SPLAY_LINKS *v9; // r14
  KIRQL v10; // al
  _RTL_SPLAY_LINKS *v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  _RTL_SPLAY_LINKS *i; // rax
  PRTL_SPLAY_LINKS v16; // rax
  _RTL_SPLAY_LINKS *v17; // rbx
  PVOID *p_Parent; // rcx
  PRTL_SPLAY_LINKS v19; // r15
  PVOID *v20; // rdx
  _RTL_SPLAY_LINKS *v21; // r14
  char v22; // r14
  PRTL_SPLAY_LINKS v23; // rbx
  void *v24; // rbx
  void **v25; // r14
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *k; // rax
  PRTL_SPLAY_LINKS v28; // rdi
  KIRQL v29; // al
  _RTL_SPLAY_LINKS *m; // rax
  __int64 v31; // rdi
  __int64 v32; // rbp
  PEPROCESS RequestorProcess; // rax
  PVOID v34; // rbx
  _RTL_SPLAY_LINKS *j; // rax
  KIRQL v36; // dl
  _RTL_SPLAY_LINKS *v37; // [rsp+30h] [rbp-78h]
  _RTL_SPLAY_LINKS *v38; // [rsp+38h] [rbp-70h] BYREF
  _RTL_SPLAY_LINKS *v39; // [rsp+40h] [rbp-68h] BYREF
  PVOID Entry; // [rsp+48h] [rbp-60h]
  PVOID *v41; // [rsp+50h] [rbp-58h]
  char v42; // [rsp+B0h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v43; // [rsp+B8h] [rbp+10h]
  struct _KPROCESS *v44; // [rsp+C0h] [rbp+18h]
  int v45; // [rsp+C8h] [rbp+20h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v6 = *(_QWORD **)(a1 + 24);
  v7 = 0LL;
  Entry = 0LL;
  v8 = a4;
  v9 = a2;
  if ( !v6 )
    return 3221225598LL;
  a2[5].Parent = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
  v11 = (_RTL_SPLAY_LINKS *)v6[4];
  v12 = v10;
  if ( !v11 )
  {
    if ( v6[5] )
      goto LABEL_23;
    KxReleaseSpinLock(v6 + 3);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = v12;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(v12);
    return 3221225598LL;
  }
  for ( i = v11->LeftChild; i; i = i->LeftChild )
    v11 = i;
  v42 = 0;
  do
  {
    v16 = RtlRealSuccessor(v11);
    v17 = 0LL;
    v39 = 0LL;
    p_Parent = (PVOID *)&v11[-1].Parent;
    v38 = 0LL;
    v37 = v11 - 1;
    v19 = v16;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = (_RTL_SPLAY_LINKS *)*p_Parent;
      if ( !*p_Parent )
      {
        v22 = v42;
        goto LABEL_19;
      }
      Entry = *p_Parent;
      if ( v21[1].LeftChild != v43
        || (struct _KPROCESS *)v21[1].RightChild != v44
        || a5 && HIDWORD(v21[1].Parent) != v45 )
      {
        p_Parent = (PVOID *)&v21->Parent;
        v37 = v21;
        goto LABEL_15;
      }
      Parent = v21[2].Parent;
      if ( !v20 )
        v20 = p_Parent;
      v41 = v20;
      if ( Parent > v7 )
        v7 = Parent;
      v39 = v7;
      if ( v21 == v11[1].Parent )
        v11[1].Parent = (_RTL_SPLAY_LINKS *)p_Parent;
      *p_Parent = v21->Parent;
      if ( v6[2] )
        break;
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v21);
      p_Parent = (PVOID *)&v37->Parent;
      v20 = v41;
LABEL_15:
      if ( !v20 && v21[2].Parent > v17 )
      {
        v17 = v21[2].Parent;
        v38 = v17;
      }
    }
    v22 = 1;
    v42 = 1;
LABEL_19:
    v7 = 0LL;
    if ( v20 )
    {
      if ( v11[-1].Parent )
      {
        FsRtlSplitLocks(&v11[-1], v20, &v39, &v38);
      }
      else
      {
        v6[4] = RtlDelete(v11);
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &v11[-1]);
      }
    }
    if ( v22 )
    {
      KeReleaseSpinLock(v6 + 3, v12);
      v34 = Entry;
      guard_dispatch_icall_no_overrides(a6, (char *)Entry + 8);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlSharedLockLookasideList, v34);
      v19 = (PRTL_SPLAY_LINKS)v6[4];
      v42 = 0;
      if ( v19 )
      {
        for ( j = v19->LeftChild; j; j = j->LeftChild )
          v19 = j;
      }
    }
    v11 = v19;
  }
  while ( v19 );
  v9 = v43;
  v8 = v45;
LABEL_23:
  v23 = (PRTL_SPLAY_LINKS)v6[5];
  if ( v23 )
  {
    for ( k = v23->LeftChild; k; k = k->LeftChild )
      v23 = k;
    do
    {
      v28 = RtlRealSuccessor(v23);
      if ( v23[2].Parent == v9
        && (struct _KPROCESS *)v23[2].LeftChild == v44
        && (!a5 || HIDWORD(v23[1].RightChild) == v8) )
      {
        v6[5] = RtlDelete(v23);
        if ( v6[2] )
        {
          KeReleaseSpinLock(v6 + 3, v12);
          guard_dispatch_icall_no_overrides(a6, &v23[1]);
          v29 = KeAcquireSpinLockRaiseToDpc(v6 + 3);
          v28 = (PRTL_SPLAY_LINKS)v6[5];
          LOBYTE(v12) = v29;
          if ( v28 )
          {
            for ( m = v28->LeftChild; m; m = m->LeftChild )
              v28 = m;
          }
        }
        ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v23);
      }
      v23 = v28;
    }
    while ( v28 );
  }
  v24 = (void *)v6[6];
  v25 = (void **)(v6 + 6);
  while ( v24 )
  {
    v31 = *((_QWORD *)v24 + 3);
    v32 = *(_QWORD *)(v31 + 184);
    if ( v43 != *(_RTL_SPLAY_LINKS **)(v32 + 48) )
      goto LABEL_77;
    RequestorProcess = IoGetRequestorProcess(*((PIRP *)v24 + 3));
    if ( v44 != RequestorProcess || a5 && v45 != *(_DWORD *)(v32 + 16) )
      goto LABEL_77;
    *(_BYTE *)(v31 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v31 + 104), 0LL);
    v36 = *(_BYTE *)(v31 + 69);
    if ( *(_BYTE *)(v31 + 68) )
      v31 = 0LL;
    KeReleaseQueuedSpinLock(7uLL, v36);
    if ( v31 )
    {
      *(_QWORD *)(v31 + 56) = 0LL;
      *v25 = *(void **)v24;
      if ( v24 == (void *)v6[7] )
        v6[7] = v25;
      KeReleaseSpinLock(v6 + 3, v12);
      FsRtlCompleteLockIrpReal(v6[1], *((_QWORD *)v24 + 2), v31, 3221225598LL, &v42, 0LL);
      LOBYTE(v12) = KeAcquireSpinLockRaiseToDpc(v6 + 3);
      v25 = (void **)(v6 + 6);
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v24);
    }
    else
    {
LABEL_77:
      v25 = (void **)v24;
    }
    v24 = *v25;
  }
  FsRtlPrivateCheckWaitingLocks((__int64)v6, v6 + 3, v12);
  FsRtlPrivateResetLowestLockOffset(v6);
  KeReleaseSpinLock(v6 + 3, v12);
  return 0LL;
}
