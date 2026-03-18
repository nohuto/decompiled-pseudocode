/*
 * XREFs of CcGetDirtyPagesHelper @ 0x1402C56E0
 * Callers:
 *     CcGetDirtyPages @ 0x14035ED90 (CcGetDirtyPages.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 *     CcDecrementOpenCountDeferDelete @ 0x1402C5A80 (CcDecrementOpenCountDeferDelete.c)
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcGetDirtyPagesHelper(__int64 a1, __int64 a2, __int64 *a3)
{
  void *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r12
  __int64 v9; // rdi
  int v10; // eax
  ULONG_PTR v11; // r15
  __int64 i; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  volatile __int64 *v17; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v19; // rdx
  void *v21; // [rsp+40h] [rbp-A8h]
  __int64 v22; // [rsp+48h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  __int64 v24; // [rsp+70h] [rbp-78h]
  __int64 v25; // [rsp+78h] [rbp-70h] BYREF
  __int64 v26; // [rsp+80h] [rbp-68h]
  __int64 v27; // [rsp+88h] [rbp-60h]
  __int64 v28; // [rsp+90h] [rbp-58h]
  __int64 v29; // [rsp+98h] [rbp-50h]
  ULONG_PTR v30; // [rsp+A0h] [rbp-48h]

  v4 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = a3[2];
  v27 = a3[3];
  v5 = *a3;
  v29 = a3[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v8 = (_QWORD *)(a1 + 720);
  v9 = *v8 - 120LL;
  v26 = v9;
  while ( (_QWORD *)(v9 + 120) != v8 )
  {
    v10 = *(_DWORD *)(v9 + 152);
    if ( (v10 & 0x800) != 0 )
      KeBugCheckEx(0x34u, 0x338uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (v10 & 0x2000000) != 0 && *(_QWORD *)(v9 + 248) == v5
      || (v10 & 0x1000000) != 0 && **(_QWORD **)(v9 + 248) == v5 )
    {
      LOBYTE(v7) = 1;
      CcIncrementOpenCount(v9, v6, v7);
      ++*(_DWORD *)(v9 + 112);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v11 = CcReferenceSharedCacheMapFileObject(v9);
      v30 = v11;
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v9 + 288));
      for ( i = *(_QWORD *)(v9 + 16) - 16LL; i + 16 != v9 + 16; i = *(_QWORD *)(i + 16) - 16LL )
      {
        if ( *(_WORD *)i == 765 && *(_BYTE *)(i + 2) )
        {
          v25 = *(_QWORD *)(i + 8);
          v22 = *(_QWORD *)(i + 40);
          v24 = *(_QWORD *)(i + 48);
          ++*(_DWORD *)(i + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 288));
          if ( v4 )
          {
            CcUnpinFileDataEx(v4);
            v4 = 0LL;
            v21 = 0LL;
          }
          guard_dispatch_icall_no_overrides(v11, &v25);
          if ( v22 )
          {
            v13 = a3[4];
            if ( !v13 || v22 < v13 )
              a3[4] = v22;
          }
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v9 + 288));
          v14 = *(_DWORD *)(i + 64);
          if ( v14 > 1 )
          {
            *(_DWORD *)(i + 64) = v14 - 1;
          }
          else
          {
            v4 = (void *)i;
            v21 = (void *)i;
          }
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 288));
      ObFastDereferenceObjectDeferDelete((__int64 *)(v9 + 96), v11, 1666409283LL);
      if ( v4 )
      {
        CcUnpinFileDataEx(v4);
        v21 = 0LL;
      }
      v17 = (volatile __int64 *)(a1 + 768);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 768);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v19 = _InterlockedExchange64(v17, (__int64)&LockHandle);
        if ( v19 )
          KxWaitForLockOwnerShip(&LockHandle, v19, v15, v16);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
      }
      LOBYTE(v15) = 1;
      v9 = v26;
      CcDecrementOpenCountDeferDelete(v26, v19, v15);
      --*(_DWORD *)(v9 + 112);
      v4 = v21;
    }
    v9 = *(_QWORD *)(v9 + 120) - 120LL;
    v26 = v9;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
