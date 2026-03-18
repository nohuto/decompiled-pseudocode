/*
 * XREFs of ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CFEF8
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x140010520 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
        __int64 (__fastcall *a1)(__int64),
        __int64 a2,
        int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnPublish", a2, a3);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v8 = v6 + 8;
  v9 = -v6;
  if ( (v8 & -(__int64)(v9 != 0)) != 0 && (*(_BYTE *)((v8 & -(__int64)(v9 != 0)) + 0x13))-- == 1 )
    *(_QWORD *)(v8 & -(__int64)(v9 != 0)) &= ~0x800uLL;
  return a1(a2);
}
