/*
 * XREFs of ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x1400C2230
 * Callers:
 *     GreLockVisRgnPublish @ 0x1400C21C0 (GreLockVisRgnPublish.c)
 *     ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C2210 (--$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 */

__int64 GrepAcquireLockValidate<11>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v9; // edx
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  result = v1 + 8;
  v5 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v5 )
  {
    if ( (*v5 & 0xFFFFFFFFFFFFF800uLL) != 0 && (*v5 & 0x800) == 0 )
    {
      v9 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        v6 = *v5;
        if ( !_bittest64(&v6, i) )
          v10 = v9;
        v9 = v10;
      }
      if ( v10 > 11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x13);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x13) = i + 1;
    if ( !(_BYTE)i )
      *v5 |= 0x800uLL;
  }
  return result;
}
