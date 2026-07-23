/*
 * XREFs of WdipSemUpdate @ 0x1407A0668
 * Callers:
 *     WdiUpdateSem @ 0x14064A614 (WdiUpdateSem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemCleanStart @ 0x1407A0ED0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1407A0F3C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1407A2294 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rbx
  unsigned int v4; // ebx
  signed __int64 v5; // rdx
  ULONG_PTR v6; // rtt

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v1, (__int64)&WdipSemPushLock);
  if ( v3 )
    v3[10] = 1;
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
