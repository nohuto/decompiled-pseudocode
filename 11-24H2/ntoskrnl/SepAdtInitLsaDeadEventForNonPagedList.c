/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x14060816C
 * Callers:
 *     SepRmCommandServerThread @ 0x140A52820 (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140E67BF8, &LockHandle);
  qword_140E67C38 = a1;
  LOBYTE(a1) = qword_140E67B80 != (_QWORD)&qword_140E67B80;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
