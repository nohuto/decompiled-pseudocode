/*
 * XREFs of CcWriteBehindPreProcess @ 0x1403ACA84
 * Callers:
 *     CcWriteBehindAsync @ 0x1403AB04C (CcWriteBehindAsync.c)
 *     CcWriteBehindInternal @ 0x1403AC840 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057B09C (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1403AC55C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DB588 (CcApplyLowIoPriorityToThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F608C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  char v11; // al
  char v12; // r12
  char v13; // bl
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 264);
  v2 = *(_DWORD **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  memset(&v22, 0, sizeof(v22));
  v23 = v2;
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
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v22);
  v9 = CcIsWriteBehindThreadpoolAtLowPriority(v6);
  KeReleaseInStackQueuedSpinLock(&v22);
  if ( !v9 )
    CcApplyLowIoPriorityToThread(v6, 0LL, v5);
  *(_DWORD *)(a1 + 140) = 0;
  if ( (*(_DWORD *)(v5 + 156) & 1) != 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_BYTE *)(a1 + 139) == 0);
  }
  else
  {
    LOBYTE(v10) = 1;
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), v10);
  }
  v12 = v11;
  v13 = *(_BYTE *)(a1 + 140) & 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( !v11 )
    {
      CcApplyLowIoPriorityToThread(v6, 0LL, v5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      *(_DWORD *)(v5 + 152) &= ~0x20u;
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
      CcDecrementOpenCount(v5);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v23 = -1073741740;
      if ( v4 )
        KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
      return 1LL;
    }
    goto LABEL_18;
  }
  if ( v11 && v13 )
  {
LABEL_18:
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
      *(_BYTE *)(a1 + 136) = 1;
    v15 = *(_QWORD *)(v5 + 168);
    if ( v15 )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v16 = *(_DWORD *)(*(_QWORD *)(v5 + 600) + 912LL);
      else
        v16 = *(_DWORD *)(v6 + 976);
      v17 = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(v15 + 4) = v17;
      if ( v17 > v16 )
      {
        *(_DWORD *)(v15 + 4) = v16;
        v17 = v16;
      }
    }
    else
    {
      v17 = *(_DWORD *)(v5 + 200);
    }
    *(_DWORD *)(a1 + 252) = v17;
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
    v18 = *(_QWORD *)(v5 + 512);
    *(_QWORD *)(v18 + 296) += *(unsigned int *)(v18 + 204);
    ++*(_QWORD *)(v18 + 312);
    *(_QWORD *)(v18 + 320) += *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    ++*(_QWORD *)(v18 + 336);
    if ( *(_QWORD *)(v18 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL) )
      v19 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL);
    else
      v19 = *(_QWORD *)(v18 + 304);
    *(_QWORD *)(v18 + 304) = v19;
    if ( *(_QWORD *)(v18 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL) )
      v20 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    else
      v20 = *(_QWORD *)(v18 + 328);
    *(_QWORD *)(v18 + 328) = v20;
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  CcDecrementOpenCount(v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v23 = -1073741740;
  if ( v12 && !v13 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_QWORD *)(v5 + 216));
  return 2LL;
}
