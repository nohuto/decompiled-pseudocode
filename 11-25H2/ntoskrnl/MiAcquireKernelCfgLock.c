/*
 * XREFs of MiAcquireKernelCfgLock @ 0x140A3A1E0
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140A39A20 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3A04C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140E2D4E0, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D4E0, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&qword_140E2D4E0, result, (__int64)&qword_140E2D4E0);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
