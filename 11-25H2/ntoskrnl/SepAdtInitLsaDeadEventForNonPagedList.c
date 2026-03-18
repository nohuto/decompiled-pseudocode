/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x1405FBEB8
 * Callers:
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140E678F8, &LockHandle);
  qword_140E67938 = a1;
  LOBYTE(a1) = qword_140E67880 != (_QWORD)&qword_140E67880;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
