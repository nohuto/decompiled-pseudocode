/*
 * XREFs of ObEnableEtwReferenceTrace @ 0x140738778
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void ObEnableEtwReferenceTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v1, (__int64)&ObpStackTraceLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  ObpTraceFlags |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  KeLeaveGuardedRegion();
}
