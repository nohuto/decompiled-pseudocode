/*
 * XREFs of WdipSemUpdate @ 0x1407A0558
 * Callers:
 *     WdiUpdateSem @ 0x14064C054 (WdiUpdateSem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1407A0E2C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A2184 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  signed __int64 v5; // rdx
  ULONG_PTR v6; // rtt

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, (__int64)v1, (__int64)&WdipSemPushLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v4 = WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  v5 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v6 = WdipSemPushLock,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v5, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KeLeaveCriticalRegion();
  return v4;
}
