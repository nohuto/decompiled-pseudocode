/*
 * XREFs of PsCaptureExceptionPort @ 0x140A2095C
 * Callers:
 *     PspFreezeProcessWorker @ 0x140779060 (PspFreezeProcessWorker.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     ExpRaiseHardError @ 0x140A4E894 (ExpRaiseHardError.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14025E2E0 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14033E760 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  void *v1; // rdi

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 576) )
  {
    PspLockProcessShared(a1, (__int64)KeGetCurrentThread());
    v1 = (void *)(*(_QWORD *)(a1 + 576) & 0xFFFFFFFFFFFFFFF8uLL);
    PsReferenceSiloContext(v1);
    PspUnlockProcessShared(a1);
  }
  return v1;
}
