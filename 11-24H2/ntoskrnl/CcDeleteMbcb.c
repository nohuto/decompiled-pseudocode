/*
 * XREFs of CcDeleteMbcb @ 0x1402E5278
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     CcDeductDirtyPages @ 0x1402E53FC (CcDeductDirtyPages.c)
 *     CcDeallocateBcb @ 0x1402E5568 (CcDeallocateBcb.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v2; // rsi
  unsigned int *v4; // rdi
  unsigned int **v5; // r15
  unsigned int *v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // rdx
  PVOID *v12; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (struct _FAST_MUTEX *)(a1 + 288);
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
  v4 = *(unsigned int **)(a1 + 168);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    CcDeductDirtyPages(a1, v4[2]);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = (unsigned int **)(v4 + 4);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (unsigned int *)v5 )
        break;
      v7 = *(_QWORD *)v6;
      if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (unsigned int **)*((_QWORD *)v6 + 1), *v8 != v6) )
LABEL_6:
        __fastfail(3u);
      *v8 = (unsigned int *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      v11 = (unsigned int *)*((_QWORD *)v6 + 5);
      if ( v11 && v11 != v4 + 24 )
        ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v11);
      if ( v6 < v4 || v6 >= v4 + 48 )
      {
        v12 = p_P;
        if ( *p_P != &P )
          goto LABEL_6;
        *((_QWORD *)v6 + 1) = p_P;
        *(_QWORD *)v6 = &P;
        *v12 = v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 168) = 0LL;
    KeReleaseGuardedMutex(v2);
    while ( 1 )
    {
      v9 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P )
        goto LABEL_6;
      v10 = *(_QWORD *)P;
      if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
        goto LABEL_6;
      P = *(PVOID *)P;
      *(_QWORD *)(v10 + 8) = &P;
      ExFreePoolWithTag(v9, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    KeReleaseGuardedMutex(v2);
  }
}
