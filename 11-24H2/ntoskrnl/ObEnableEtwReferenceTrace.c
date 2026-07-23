/*
 * XREFs of ObEnableEtwReferenceTrace @ 0x140742A88
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void ObEnableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v1, (__int64)&ObpStackTraceLock);
  if ( v3 )
    v3[10] = 1;
  ObpTraceFlags |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
}
