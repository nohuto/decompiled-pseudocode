/*
 * XREFs of WdipSemEnableScenario @ 0x140A4835C
 * Callers:
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
 *     WdipSemWriteSemFailureEvent @ 0x1407A2E64 (WdipSemWriteSemFailureEvent.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140A47D18 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemEnableContextProviders @ 0x140A48548 (WdipSemEnableContextProviders.c)
 *     WdipSemActivateInstance @ 0x140A489E0 (WdipSemActivateInstance.c)
 *     WdipSemQueryScenarioTable @ 0x140A48A9C (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x140A48AF4 (WdipSemGetLoggerIds.c)
 *     WdipSemReserveInstanceTableEntry @ 0x140A48C68 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemWriteSemActionsEvent @ 0x140AA4368 (WdipSemWriteSemActionsEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _SLIST_ENTRY *v7; // rdi
  char v8; // si
  _QWORD *v9; // rbx
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v12; // rax
  signed __int64 v13; // rdx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // rax
  signed __int8 v18; // cf
  _QWORD *v19; // rdi
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = 0;
  v9 = KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&WdipSemPushLock, 0, v9, (__int64)&WdipSemPushLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( a1 && a3 )
  {
    if ( !WdipSemEnabled )
    {
LABEL_23:
      LoggerIds = -1073741823;
      goto LABEL_26;
    }
    LoggerIds = WdipSemGetLoggerIds();
    if ( LoggerIds >= 0 )
    {
      ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
      if ( ScenarioTable )
      {
        v12 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
        v7 = (struct _SLIST_ENTRY *)v12;
        if ( v12 )
        {
          WdipSemEnableContextProviders(v12);
          if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
            WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_START, v7);
          WdipSemActivateInstance(v7);
          goto LABEL_14;
        }
      }
      goto LABEL_23;
    }
    v8 = 1;
  }
  else
  {
    LoggerIds = -1073741811;
  }
LABEL_26:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v7 )
    WdipSemDeleteTransitionalInstance(v7);
LABEL_14:
  _m_prefetchw(&WdipSemPushLock);
  v13 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v14 = WdipSemPushLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v13, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = KeAbPreAcquire((__int64)&WdipSemPushLock, 0LL);
    v18 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v19 = v17;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, (__int64)v17, (__int64)&WdipSemPushLock);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    v20 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (WdipSemPushLock & 2) != 0
      || (v21 = WdipSemPushLock,
          v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v20, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LoggerIds;
}
