/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14008968C (DrvCleanupAndDestroyMDEV.c)
 *     GreDrvConnect @ 0x1401CE420 (GreDrvConnect.c)
 *     HDXDrvEscape @ 0x1401CE760 (HDXDrvEscape.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore(L"GreLock", a2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = v5 + 8;
  v8 = -v5;
  if ( (v7 & -(__int64)(v8 != 0)) != 0 && (*(_BYTE *)((v7 & -(__int64)(v8 != 0)) + 0xA))-- == 1 )
    *(_QWORD *)(v7 & -(__int64)(v8 != 0)) &= ~4uLL;
  return a1(a2);
}
