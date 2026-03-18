/*
 * XREFs of ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x1400380D0
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x140037DB8 (GreIsDisconnectDeviceAttached.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<1>()
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // ecx
  int v12; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        result = PsGetProcessSessionIdEx(CurrentThreadProcess),
        ProcessSessionId == (_DWORD)result) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
    result = v2 + 8;
    v5 = 0LL;
    if ( v2 )
      v5 = (__int64 *)(v2 + 8);
    if ( v5 )
    {
      if ( (*v5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v5 & 2) == 0 )
      {
        v11 = 37;
        do
        {
          v12 = v1;
          v6 = *v5;
          if ( !_bittest64(&v6, v1) )
            v12 = v11;
          ++v1;
          v11 = v12;
        }
        while ( v1 < 0x40 );
        if ( v12 > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v7 = *((unsigned __int8 *)v5 + 9);
      result = (unsigned int)(v7 + 1);
      *((_BYTE *)v5 + 9) = v7 + 1;
      if ( !(_BYTE)v7 )
        *v5 |= 2uLL;
    }
  }
  return result;
}
