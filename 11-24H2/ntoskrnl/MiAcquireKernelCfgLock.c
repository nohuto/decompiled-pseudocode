/*
 * XREFs of MiAcquireKernelCfgLock @ 0x140A33E10
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140A33650 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A33C7C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&qword_140E2D860, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D860, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&qword_140E2D860, result, (__int64)&qword_140E2D860);
  if ( v2 )
    v2[10] = 1;
  return result;
}
