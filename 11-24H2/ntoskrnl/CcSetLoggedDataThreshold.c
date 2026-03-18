/*
 * XREFs of CcSetLoggedDataThreshold @ 0x1404BD260
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

void __fastcall CcSetLoggedDataThreshold(__int64 a1, int a2)
{
  __int64 i; // rbx
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v7; // [rsp+38h] [rbp-20h] BYREF

  memset(&v7, 0, sizeof(v7));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v7);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)PspSystemPartition + 1) + 768LL), &LockHandle);
      *(_DWORD *)(i + 132) = a2;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v5);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&v7);
}
