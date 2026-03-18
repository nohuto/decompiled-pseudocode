/*
 * XREFs of IoCancelMiniCompletionPacket @ 0x140597100
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRemoveQueueEntry @ 0x140428720 (KeRemoveQueueEntry.c)
 */

char __fastcall IoCancelMiniCompletionPacket(__int64 a1, _QWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
  LOBYTE(a2) = KeRemoveQueueEntry(a1, a2);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (char)a2;
}
