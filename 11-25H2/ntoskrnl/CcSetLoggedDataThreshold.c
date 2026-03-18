/*
 * XREFs of CcSetLoggedDataThreshold @ 0x1404BE1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall CcSetLoggedDataThreshold(__int64 a1, int a2)
{
  __int64 i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v6; // [rsp+38h] [rbp-20h] BYREF

  memset(&v6, 0, sizeof(v6));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v6);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      *(_DWORD *)(i + 132) = a2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v6);
}
