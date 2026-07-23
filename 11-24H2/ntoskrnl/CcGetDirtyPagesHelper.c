/*
 * XREFs of CcGetDirtyPagesHelper @ 0x140274DD0
 * Callers:
 *     CcGetDirtyPages @ 0x14021ABB0 (CcGetDirtyPages.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCountDeferDelete @ 0x140275188 (CcDecrementOpenCountDeferDelete.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r8
  volatile __int64 *v17; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v19; // rdx
  void *v21; // [rsp+40h] [rbp-A8h]
  __int64 v22; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  __int64 v25; // [rsp+70h] [rbp-78h]
  __int64 v26; // [rsp+78h] [rbp-70h] BYREF
  __int64 v27; // [rsp+80h] [rbp-68h]
  __int64 v28; // [rsp+88h] [rbp-60h]
  __int64 v29; // [rsp+90h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp-50h]
  ULONG_PTR v31; // [rsp+A0h] [rbp-48h]

  v23 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v29 = a3[2];
  v28 = a3[3];
  v5 = *a3;
  v30 = a3[1];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v8 = (_QWORD *)(a1 + 720);
  v9 = *v8 - 120LL;
  v27 = v9;
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
      v31 = v11;
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v9 + 288));
      v12 = *(_QWORD *)(v9 + 16) - 16LL;
      v23 = v12;
      while ( v12 + 16 != v9 + 16 )
      {
        if ( *(_WORD *)v12 == 765 && *(_BYTE *)(v12 + 2) )
        {
          v26 = *(_QWORD *)(v12 + 8);
          v13 = *(_DWORD *)(v12 + 4);
          v22 = *(_QWORD *)(v12 + 40);
          v25 = *(_QWORD *)(v12 + 48);
          ++*(_DWORD *)(v12 + 64);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 288));
          if ( v4 )
          {
            CcUnpinFileDataEx(v4);
            v4 = 0LL;
            v21 = 0LL;
          }
          guard_dispatch_icall_no_overrides(v11, &v26, v13, &v22);
          if ( v22 )
          {
            v14 = a3[4];
            if ( !v14 || v22 < v14 )
              a3[4] = v22;
          }
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v9 + 288));
          v15 = *(_DWORD *)(v12 + 64);
          if ( v15 > 1 )
          {
            *(_DWORD *)(v12 + 64) = v15 - 1;
          }
          else
          {
            v4 = (void *)v12;
            v21 = (void *)v12;
          }
        }
        v12 = *(_QWORD *)(v12 + 16) - 16LL;
        v23 = v12;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 288));
      ObFastDereferenceObjectDeferDelete((__int64 *)(v9 + 96), v11);
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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v19 = _InterlockedExchange64(v17, (__int64)&LockHandle);
        if ( v19 )
          KxWaitForLockOwnerShip(&LockHandle, v19);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
      }
      LOBYTE(v16) = 1;
      v9 = v27;
      CcDecrementOpenCountDeferDelete(v27, v19, v16);
      --*(_DWORD *)(v9 + 112);
      v4 = v21;
    }
    v9 = *(_QWORD *)(v9 + 120) - 120LL;
    v27 = v9;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1;
}
