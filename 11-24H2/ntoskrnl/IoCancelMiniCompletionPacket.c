/*
 * XREFs of IoCancelMiniCompletionPacket @ 0x140594080
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRemoveQueueEntry @ 0x14041B3A0 (KeRemoveQueueEntry.c)
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
