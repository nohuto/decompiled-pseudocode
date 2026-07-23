/*
 * XREFs of SepAdtInitLsaDeadEventForNonPagedList @ 0x140605870
 * Callers:
 *     SepRmCommandServerThread @ 0x140A4A870 (SepRmCommandServerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall SepAdtInitLsaDeadEventForNonPagedList(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140E67DD8, &LockHandle);
  qword_140E67E18 = a1;
  LOBYTE(a1) = qword_140E67D60 != (_QWORD)&qword_140E67D60;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return a1;
}
