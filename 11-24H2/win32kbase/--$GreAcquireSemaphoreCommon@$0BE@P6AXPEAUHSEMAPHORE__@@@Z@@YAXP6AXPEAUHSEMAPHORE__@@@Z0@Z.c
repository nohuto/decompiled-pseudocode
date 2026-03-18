/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BE@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140020030
 * Callers:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<20,void (*)(HSEMAPHORE__ *)>(__int64 a1, HSEMAPHORE a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v13; // ecx
  int v14; // eax

  GreAcquireSemaphoreInternal(a2);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
    result = v4 + 8;
    v7 = 0LL;
    if ( v4 )
      v7 = (__int64 *)(v4 + 8);
    if ( v7 )
    {
      if ( (*v7 & 0xFFFFFFFFFFF00000uLL) != 0 && (*v7 & 0x100000) == 0 )
      {
        v13 = 37;
        do
        {
          v14 = v3;
          v8 = *v7;
          if ( !_bittest64(&v8, v3) )
            v14 = v13;
          ++v3;
          v13 = v14;
        }
        while ( v3 < 0x40 );
        if ( v14 > 20 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v9 = *((unsigned __int8 *)v7 + 28);
      result = (unsigned int)(v9 + 1);
      *((_BYTE *)v7 + 28) = v9 + 1;
      if ( !(_BYTE)v9 )
        *v7 |= 0x100000uLL;
    }
  }
  return result;
}
