/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x1402E3B00
 * Callers:
 *     FsRtlPrivateRemoveLock @ 0x1404D201C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRealSuccessor @ 0x1402E2650 (RtlRealSuccessor.c)
 *     RtlDelete @ 0x1402E4AE0 (RtlDelete.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1402E4B84 (FsRtlPrivateResetLowestLockOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        _QWORD *a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KIRQL v13; // al
  _RTL_SPLAY_LINKS *v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v17; // rax
  PRTL_SPLAY_LINKS v18; // rsi
  _RTL_SPLAY_LINKS *RightChild; // r9
  _RTL_SPLAY_LINKS *v20; // r10
  _RTL_SPLAY_LINKS *Parent; // rdx
  bool v22; // zf
  _RTL_SPLAY_LINKS *v23; // rcx
  _RTL_SPLAY_LINKS *v24; // r12
  PRTL_SPLAY_LINKS v25; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  _RTL_SPLAY_LINKS *v27; // [rsp+50h] [rbp+8h]

  v9 = *a3;
  v13 = KeAcquireSpinLockRaiseToDpc(a1 + 3);
  v14 = (_RTL_SPLAY_LINKS *)a1[5];
  v15 = v13;
  if ( v14 )
  {
    v17 = (unsigned __int64)*a4 + (_QWORD)v9 - 1;
    v18 = 0LL;
    do
    {
      RightChild = v14[2].RightChild;
      v20 = v14;
      if ( RightChild >= v9 && ((Parent = v14[1].Parent) != 0LL || v14[1].LeftChild) )
      {
        if ( (unsigned __int64)Parent <= v17 && (v17 != -1LL || v9) )
        {
          if ( Parent <= v9 )
            break;
          v18 = v14;
        }
        v14 = v14->LeftChild;
      }
      else if ( RightChild == (_RTL_SPLAY_LINKS *)v17 && v14[1].Parent == v9 )
      {
        v18 = v14;
        v14 = v14->LeftChild;
      }
      else
      {
        v14 = v14->RightChild;
      }
    }
    while ( v14 );
    v22 = v14 == 0LL;
    v23 = *a4;
    if ( !v22 )
      v18 = v20;
    v27 = *a4;
    if ( !v18 )
      v18 = 0LL;
    while ( 1 )
    {
      if ( !v18 )
      {
LABEL_36:
        KxReleaseSpinLock(a1 + 3);
        goto LABEL_4;
      }
      if ( v18[2].Parent == a2 && v18[2].LeftChild == a5 && HIDWORD(v18[1].RightChild) == a6 )
      {
        v24 = v18 + 1;
        if ( v18[1].Parent == v9 && v18[1].LeftChild == v23 )
          break;
      }
      if ( v18[1].Parent > v9 )
        goto LABEL_36;
      v25 = RtlRealSuccessor(v18);
      v23 = v27;
      v18 = v25;
    }
    if ( a2[5].Parent == v24 )
      a2[5].Parent = 0LL;
    a1[5] = RtlDelete(v18);
    if ( (_RTL_SPLAY_LINKS *)*a1 == v24->Parent )
      FsRtlPrivateResetLowestLockOffset(a1);
    if ( !a8 && a1[2] )
    {
      KeReleaseSpinLock(a1 + 3, v15);
      guard_dispatch_icall_no_overrides(a7, &v18[1]);
      LOBYTE(v15) = KeAcquireSpinLockRaiseToDpc(a1 + 3);
    }
    ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v18);
    if ( a9 && a1[6] )
      FsRtlPrivateCheckWaitingLocks(a1, a1 + 3, (unsigned __int8)v15);
    KxReleaseSpinLock(a1 + 3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v15);
    __writecr8((unsigned __int8)v15);
    return 0LL;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(a1 + 3, 0LL);
    else
      KiReleaseSpinLockInstrumented(a1 + 3, retaddr);
LABEL_4:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v15);
    __writecr8(v15);
    return 3221225598LL;
  }
}
