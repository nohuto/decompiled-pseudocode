/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087C14
 * Callers:
 *     ??0?$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x140021634 (--0-$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088F80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14008968C (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // r8d
  int v12; // eax

  a1(a2);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  result = v3 + 8;
  v7 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
  {
    if ( (*v7 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v7 & 4) == 0 )
    {
      v5 = 0LL;
      v11 = 37;
      do
      {
        v12 = v5;
        v8 = *v7;
        if ( !_bittest64(&v8, v5) )
          v12 = v11;
        ++v5;
        v11 = v12;
      }
      while ( v5 < 0x40 );
      if ( v12 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v5) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v7 |= 4uLL;
  }
  return result;
}
