/*
 * XREFs of ??0?$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400A39F4
 * Callers:
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall PushLockSharedObj<0,0>::PushLockSharedObj<0,0>(_QWORD *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v2; // rbp
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  char v9; // dl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax

  v2 = (struct W32_PUSH_LOCK *)(a2 + 8624);
  *a1 = a2 + 8624;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v7 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 && (v8 & 1) == 0 )
    {
      v13 = 0LL;
      v14 = 37;
      do
      {
        v15 = v13;
        if ( !_bittest64(&v8, v13) )
          v15 = v14;
        ++v13;
        v14 = v15;
      }
      while ( v13 < 0x40 );
      if ( v15 > 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v13, (unsigned int)v15);
    }
    v9 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 8);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 8) = v9 + 1;
    if ( !v9 )
      *v7 |= 1uLL;
  }
  W32AcquirePushLockSharedEx(v2, 2u);
  return a1;
}
