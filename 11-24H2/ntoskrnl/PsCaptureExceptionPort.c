/*
 * XREFs of PsCaptureExceptionPort @ 0x140A15A5C
 * Callers:
 *     PspFreezeProcessWorker @ 0x140779160 (PspFreezeProcessWorker.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     ExpRaiseHardError @ 0x140A45514 (ExpRaiseHardError.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14028E8F0 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14031DC40 (PspLockProcessShared.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
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
