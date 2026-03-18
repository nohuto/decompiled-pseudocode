/*
 * XREFs of WdipSemDisableScenario @ 0x140A47AF0
 * Callers:
 *     EtwWriteEndScenario @ 0x140A476E0 (EtwWriteEndScenario.c)
 *     WdipStartEndScenario @ 0x140A482B0 (WdipStartEndScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     WdipSemShutdown @ 0x1407A2184 (WdipSemShutdown.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407A24B4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A2E64 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemDisableContextProviders @ 0x140A47CA4 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A47D18 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140A489E0 (WdipSemActivateInstance.c)
 *     WdipSemGetLoggerIds @ 0x140A48AF4 (WdipSemGetLoggerIds.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AA4368 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemValidateEndEvent @ 0x140ABDC8C (WdipSemValidateEndEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  char v8; // si
  _QWORD *v9; // rbx
  int LoggerIds; // ebx
  signed __int64 v11; // rdx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v14; // rax
  _QWORD *v15; // rax
  signed __int8 v16; // cf
  _QWORD *v17; // rdi
  __int64 v18; // rax
  signed __int64 v19; // rdx
  ULONG_PTR v20; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0;
  v9 = KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WdipSemPushLock, 0, v9, (__int64)&WdipSemPushLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_26;
  }
  if ( !WdipSemEnabled )
    goto LABEL_23;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v8 = 1;
LABEL_26:
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
      WdipSemWriteSemFailureEvent((__int64)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
    if ( v7 )
      WdipSemActivateInstance(v7);
    goto LABEL_13;
  }
  v18 = WdipSemMarkInstanceForDeletion(a3);
  v7 = v18;
  if ( !v18 )
  {
LABEL_23:
    LoggerIds = -1073741823;
    goto LABEL_26;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v18 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_26;
  WdipSemDisableContextProviders(v7, 0LL);
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
    WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v7);
  WdipSemDeleteTransitionalInstance(v7);
LABEL_13:
  _m_prefetchw(&WdipSemPushLock);
  v11 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v12 = WdipSemPushLock,
        v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v11, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v15 = KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v17 = v15;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, (__int64)v15, (__int64)&WdipSemPushLock);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    v19 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (WdipSemPushLock & 2) != 0
      || (v20 = WdipSemPushLock,
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v19, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
