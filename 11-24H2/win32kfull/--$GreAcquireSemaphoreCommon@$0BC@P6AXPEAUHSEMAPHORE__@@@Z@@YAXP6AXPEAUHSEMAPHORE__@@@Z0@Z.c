/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015A684
 * Callers:
 *     GrepAcquireRFONTListSemaphoreEx @ 0x14015A630 (GrepAcquireRFONTListSemaphoreEx.c)
 *     ??0?$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14031D37C (--0-$SEMOBJSHARED@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

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
    if ( (*v7 & 0xFFFFFFFFFFFC0000uLL) != 0 && (*v7 & 0x40000) == 0 )
    {
      v9 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v10 = i;
        v8 = *v7;
        if ( !_bittest64(&v8, i) )
          v10 = v9;
        v9 = v10;
      }
      if ( v10 > 18 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1A);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x1A) = i + 1;
    if ( !(_BYTE)i )
      *v7 |= 0x40000uLL;
  }
  return result;
}
