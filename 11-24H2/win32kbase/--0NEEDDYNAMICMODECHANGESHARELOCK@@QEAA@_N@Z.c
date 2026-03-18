/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x140021FD0
 * Callers:
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140020FF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  _DWORD *v4; // rdi
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  char v11; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v15; // rcx
  int v16; // r8d
  int v17; // eax

  v4 = *(_DWORD **)(W32GetSessionState(this) + 88);
  *(_QWORD *)this = v4;
  *((_BYTE *)this + 8) = a2;
  if ( a2 )
  {
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"DynamicModeChange", *v4 + 624, v5);
    EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v4 + 624LL));
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
    }
    v9 = (__int64 *)((v7 + 8) & -(__int64)(v7 != 0));
    if ( v9 )
    {
      if ( (*v9 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v9 & 2) == 0 )
      {
        v15 = 0LL;
        v16 = 37;
        do
        {
          v17 = v15;
          v10 = *v9;
          if ( !_bittest64(&v10, v15) )
            v17 = v16;
          ++v15;
          v16 = v17;
        }
        while ( v15 < 0x40 );
        if ( v17 > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v11 = *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 9);
      *(_BYTE *)(((v7 + 8) & -(__int64)(v7 != 0)) + 9) = v11 + 1;
      if ( !v11 )
        *v9 |= 2uLL;
    }
  }
  return this;
}
