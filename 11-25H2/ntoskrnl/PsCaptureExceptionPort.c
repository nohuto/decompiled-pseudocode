/*
 * XREFs of PsCaptureExceptionPort @ 0x1408F62C8
 * Callers:
 *     PspFreezeProcessWorker @ 0x1407693B0 (PspFreezeProcessWorker.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     ExpRaiseHardError @ 0x140A4C224 (ExpRaiseHardError.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     PspUnlockProcessShared @ 0x14029BF00 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1403F8E70 (PspLockProcessShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  void *v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 576) )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared(a1, (__int64)CurrentThread);
    v1 = (void *)(*(_QWORD *)(a1 + 576) & 0xFFFFFFFFFFFFFFF8uLL);
    PsReferenceSiloContext(v1);
    PspUnlockProcessShared(a1, (__int64)CurrentThread);
  }
  return v1;
}
