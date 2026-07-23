/*
 * XREFs of CcWriteBehindPreProcess @ 0x14027A224
 * Callers:
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B84C (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404D4698 (CcApplyLowIoPriorityToThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F612C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcWriteBehindPreProcess(__int64 a1)
{
  __int64 v1; // r14
  _DWORD *v2; // rax
  char v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  char v14; // r12
  char v15; // bl
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v27; // [rsp+80h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 264);
  v2 = *(_DWORD **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  memset(&v26, 0, sizeof(v26));
  v27 = v2;
  if ( *(_DWORD *)(v1 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v1 + 16);
    v4 = *(_BYTE *)(v1 + 56);
    v6 = *(_QWORD *)(v5 + 536);
  }
  else
  {
    v5 = *(_QWORD *)(v1 + 24);
    v6 = *(_QWORD *)(v1 + 136);
  }
  *(_BYTE *)(a1 + 136) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  CcIncrementOpenCount(v5, v7, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  LOBYTE(v8) = 1;
  CcApplyLowIoPriorityToThread(v6, v8, v5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v26);
  v9 = CcIsWriteBehindThreadpoolAtLowPriority(v6);
  KeReleaseInStackQueuedSpinLock(&v26);
  if ( !v9 )
    CcApplyLowIoPriorityToThread(v6, 0LL, v5);
  *(_DWORD *)(a1 + 140) = 0;
  if ( (*(_DWORD *)(v5 + 156) & 1) != 0 )
  {
    v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_BYTE *)(a1 + 139) == 0, a1 + 140, v12);
  }
  else
  {
    LOBYTE(v10) = 1;
    v13 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), v10, v11, v12);
  }
  v14 = v13;
  v15 = *(_BYTE *)(a1 + 140) & 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( !v13 )
    {
      CcApplyLowIoPriorityToThread(v6, 0LL, v5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      *(_DWORD *)(v5 + 152) &= ~0x20u;
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
      CcDecrementOpenCount(v5);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v27 = -1073741740;
      if ( v4 )
        KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
      return 1LL;
    }
    goto LABEL_18;
  }
  if ( v13 && v15 )
  {
LABEL_18:
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
      *(_BYTE *)(a1 + 136) = 1;
    v17 = *(_QWORD *)(v5 + 168);
    if ( v17 )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v18 = *(_DWORD *)(*(_QWORD *)(v5 + 600) + 912LL);
      else
        v18 = *(_DWORD *)(v6 + 976);
      v19 = *(_DWORD *)(v17 + 8);
      *(_DWORD *)(v17 + 4) = v19;
      if ( v19 > v18 )
      {
        *(_DWORD *)(v17 + 4) = v18;
        v19 = v18;
      }
    }
    else
    {
      v19 = *(_DWORD *)(v5 + 200);
    }
    *(_DWORD *)(a1 + 252) = v19;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 288));
    if ( _bittest((const signed __int32 *)(v5 + 152), 0x18u) )
    {
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(v5 + 248) + 112LL);
      *(_QWORD *)(a1 + 88) = a1 + 80;
    }
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 512) + 204LL), *(_DWORD *)(a1 + 252));
    if ( _bittest((const signed __int32 *)(v5 + 152), 0x18u) )
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v5 + 512) + 208LL), *(_DWORD *)(a1 + 252));
    v20 = *(_QWORD *)(v5 + 512);
    *(_QWORD *)(v20 + 296) += *(unsigned int *)(v20 + 204);
    ++*(_QWORD *)(v20 + 312);
    *(_QWORD *)(v20 + 320) += *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    ++*(_QWORD *)(v20 + 336);
    if ( *(_QWORD *)(v20 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL) )
      v21 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL);
    else
      v21 = *(_QWORD *)(v20 + 304);
    *(_QWORD *)(v20 + 304) = v21;
    if ( *(_QWORD *)(v20 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL) )
      v22 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    else
      v22 = *(_QWORD *)(v20 + 328);
    *(_QWORD *)(v20 + 328) = v22;
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  CcDecrementOpenCount(v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v27 = -1073741740;
  if ( v14 && !v15 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_QWORD *)(v5 + 216), v23, v24);
  return 2LL;
}
