/*
 * XREFs of CcWriteBehindPreProcess @ 0x1402A8434
 * Callers:
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncPreProcess @ 0x14057E3BC (CcWriteBehindAsyncPreProcess.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcIncrementOpenCount @ 0x1402AAADC (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404DAC78 (CcApplyLowIoPriorityToThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1404F884C (CcCancelMmWaitForUninitializeCacheMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcWriteBehindPreProcess(__int64 a1)
{
  __int64 v1; // r14
  _DWORD *v2; // rax
  char v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  char v15; // r12
  char v16; // bl
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v28; // [rsp+80h] [rbp+30h]

  v1 = *(_QWORD *)(a1 + 264);
  v2 = *(_DWORD **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  memset(&v27, 0, sizeof(v27));
  v28 = v2;
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
  LOBYTE(v7) = 1;
  CcIncrementOpenCount(v5, v8, v7);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  LOBYTE(v9) = 1;
  CcApplyLowIoPriorityToThread(v6, v9, v5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 832), &v27);
  v10 = CcIsWriteBehindThreadpoolAtLowPriority(v6);
  KeReleaseInStackQueuedSpinLock(&v27);
  if ( !v10 )
    CcApplyLowIoPriorityToThread(v6, 0LL, v5);
  *(_DWORD *)(a1 + 140) = 0;
  if ( (*(_DWORD *)(v5 + 156) & 1) != 0 )
  {
    v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_BYTE *)(a1 + 139) == 0, a1 + 140, v13);
  }
  else
  {
    LOBYTE(v11) = 1;
    v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), v11, v12, v13);
  }
  v15 = v14;
  v16 = *(_BYTE *)(a1 + 140) & 1;
  if ( *(_BYTE *)(a1 + 139) )
  {
    if ( !v14 )
    {
      CcApplyLowIoPriorityToThread(v6, 0LL, v5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
      *(_DWORD *)(v5 + 152) &= ~0x20u;
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
      CcDecrementOpenCount(v5);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      *v28 = -1073741740;
      if ( v4 )
        KeSetEvent((PRKEVENT)(v1 + 32), 0, 0);
      return 1LL;
    }
    goto LABEL_18;
  }
  if ( v14 && v16 )
  {
LABEL_18:
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v5 + 288));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
      *(_BYTE *)(a1 + 136) = 1;
    v18 = *(_QWORD *)(v5 + 168);
    if ( v18 )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v19 = *(_DWORD *)(*(_QWORD *)(v5 + 600) + 912LL);
      else
        v19 = *(_DWORD *)(v6 + 976);
      v20 = *(_DWORD *)(v18 + 8);
      *(_DWORD *)(v18 + 4) = v20;
      if ( v20 > v19 )
      {
        *(_DWORD *)(v18 + 4) = v19;
        v20 = v19;
      }
    }
    else
    {
      v20 = *(_DWORD *)(v5 + 200);
    }
    *(_DWORD *)(a1 + 252) = v20;
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
    v21 = *(_QWORD *)(v5 + 512);
    *(_QWORD *)(v21 + 296) += *(unsigned int *)(v21 + 204);
    ++*(_QWORD *)(v21 + 312);
    *(_QWORD *)(v21 + 320) += *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    ++*(_QWORD *)(v21 + 336);
    if ( *(_QWORD *)(v21 + 304) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL) )
      v22 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 204LL);
    else
      v22 = *(_QWORD *)(v21 + 304);
    *(_QWORD *)(v21 + 304) = v22;
    if ( *(_QWORD *)(v21 + 328) <= (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL) )
      v23 = *(unsigned int *)(*(_QWORD *)(v5 + 512) + 208LL);
    else
      v23 = *(_QWORD *)(v21 + 328);
    *(_QWORD *)(v21 + 328) = v23;
    return 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
  CcDecrementOpenCount(v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *v28 = -1073741740;
  if ( v15 && !v16 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 224), *(_QWORD *)(v5 + 216), v24, v25);
  return 2LL;
}
