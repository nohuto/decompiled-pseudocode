/*
 * XREFs of PfpPartitionInsertToGlobals @ 0x1405CA130
 * Callers:
 *     PfpPartitionCreate @ 0x1405C9F7C (PfpPartitionCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140450160 (ExReInitializeRundownProtectionCacheAware.c)
 */

__int64 __fastcall PfpPartitionInsertToGlobals(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  unsigned int v4; // ebx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[1];
  v2 = *a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 888), &LockHandle);
  v4 = 0;
  if ( *(_QWORD *)(v2 + 32) )
  {
    v4 = -1073741791;
  }
  else
  {
    v5 = *(_QWORD **)(v1 + 904);
    v6 = a1 + 3;
    if ( *v5 != v1 + 896 )
      __fastfail(3u);
    *v6 = v1 + 896;
    a1[4] = (__int64)v5;
    *v5 = v6;
    *(_QWORD *)(v1 + 904) = v6;
    *(_QWORD *)(v2 + 32) = a1;
    ExReInitializeRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)a1[2]);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
