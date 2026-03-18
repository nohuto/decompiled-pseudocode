/*
 * XREFs of IoCancelMiniCompletionPacket @ 0x1405939F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRemoveQueueEntry @ 0x14042ED80 (KeRemoveQueueEntry.c)
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
