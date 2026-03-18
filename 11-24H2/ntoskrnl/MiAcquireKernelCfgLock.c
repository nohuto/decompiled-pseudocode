/*
 * XREFs of MiAcquireKernelCfgLock @ 0x140A3E500
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140A3DD40 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A3E36C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&qword_140E2D720, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D720, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140E2D720, result, (__int64)&qword_140E2D720);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
