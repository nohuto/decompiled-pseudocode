/*
 * XREFs of WdipSemDisableScenario @ 0x140A3D910
 * Callers:
 *     EtwWriteEndScenario @ 0x140A3D500 (EtwWriteEndScenario.c)
 *     WdipStartEndScenario @ 0x140A3E060 (WdipStartEndScenario.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemShutdown @ 0x1407A2294 (WdipSemShutdown.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407A25C4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemWriteSemFailureEvent @ 0x1407A2F74 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemDisableContextProviders @ 0x140A3DAC4 (WdipSemDisableContextProviders.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A3DB38 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemActivateInstance @ 0x140A3E790 (WdipSemActivateInstance.c)
 *     WdipSemGetLoggerIds @ 0x140A3E8A4 (WdipSemGetLoggerIds.c)
 *     WdipSemWriteSemActionsEvent @ 0x140A9F6F8 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemValidateEndEvent @ 0x140AB8CFC (WdipSemValidateEndEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  char v8; // si
  char *v9; // rbx
  int LoggerIds; // ebx
  signed __int64 v11; // rdx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v14; // rax
  char *v15; // rax
  signed __int8 v16; // cf
  char *v17; // rdi
  __int64 v18; // rax
  signed __int64 v19; // rdx
  ULONG_PTR v20; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0;
  v9 = (char *)KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WdipSemPushLock, 0, v9, (__int64)&WdipSemPushLock);
  if ( v9 )
    v9[10] = 1;
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
    v15 = (char *)KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v17 = v15;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v15, (__int64)&WdipSemPushLock);
    if ( v17 )
      v17[10] = 1;
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
