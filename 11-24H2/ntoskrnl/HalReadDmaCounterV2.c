/*
 * XREFs of HalReadDmaCounterV2 @ 0x14053DF50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalReadDmaCounterV2(__int64 a1)
{
  __int64 v1; // rbx
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 160) + 128LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  LODWORD(v1) = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 432), v3, v4, v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v1;
}
