/*
 * XREFs of WdipSemInitialize @ 0x1407A0498
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemCleanStart @ 0x1407A0DC0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1407A0E2C (WdipSemInitializeGlobalState.c)
 */

void WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  signed __int64 v4; // rdx
  ULONG_PTR v5; // rtt

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
  WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  v4 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v5 = WdipSemPushLock,
        v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KeLeaveCriticalRegion();
}
