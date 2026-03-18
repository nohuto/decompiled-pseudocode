/*
 * XREFs of ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022160
 * Callers:
 *     DrvNotifyModeChangeStartStop @ 0x140089118 (DrvNotifyModeChangeStartStop.c)
 *     DrvGetRenderAdapterLuidFromHDEV @ 0x1401CB0F0 (DrvGetRenderAdapterLuidFromHDEV.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 */

HSEMAPHORE *__fastcall SEMOBJSHARED<1>::SEMOBJSHARED<1>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  char v9; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v13; // rcx
  int v14; // r8d
  int v15; // eax

  v3 = (HSEMAPHORE)(*a2 + 624LL);
  *a1 = v3;
  EngAcquireSemaphoreShared(v3);
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
  v7 = (__int64 *)((v5 + 8) & -(__int64)(v5 != 0));
  if ( v7 )
  {
    if ( (*v7 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v7 & 2) == 0 )
    {
      v13 = 0LL;
      v14 = 37;
      do
      {
        v15 = v13;
        v8 = *v7;
        if ( !_bittest64(&v8, v13) )
          v15 = v14;
        ++v13;
        v14 = v15;
      }
      while ( v13 < 0x40 );
      if ( v15 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v9 = *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 9);
    *(_BYTE *)(((v5 + 8) & -(__int64)(v5 != 0)) + 9) = v9 + 1;
    if ( !v9 )
      *v7 |= 2uLL;
  }
  return a1;
}
