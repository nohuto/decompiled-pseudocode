/*
 * XREFs of ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140021054
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x140010ED0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1400EC590 (GreLockVisRgnShared.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140020FF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreAcquireSemaphoreShared<2,>(_QWORD *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v13; // r8d
  int v14; // eax

  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreLock", *a1 + 1144, a3);
  EngAcquireSemaphoreShared((HSEMAPHORE)(*a1 + 1144LL));
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
  result = v5 + 8;
  v9 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v9 )
  {
    if ( (*v9 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v9 & 4) == 0 )
    {
      v7 = 0LL;
      v13 = 37;
      do
      {
        v14 = v7;
        v10 = *v9;
        if ( !_bittest64(&v10, v7) )
          v14 = v13;
        ++v7;
        v13 = v14;
      }
      while ( v7 < 0x40 );
      if ( v14 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v7) = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xA);
    result = (unsigned int)(v7 + 1);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 0xA) = v7 + 1;
    if ( !(_BYTE)v7 )
      *v9 |= 4uLL;
  }
  return result;
}
