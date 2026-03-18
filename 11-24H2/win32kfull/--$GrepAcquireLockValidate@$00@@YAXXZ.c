/*
 * XREFs of ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14001505C
 * Callers:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x14001366C (-vSynchronizeDriver@@YAXK@Z.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x140013C4C (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140015184 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<1>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v9; // r8d
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
    v6 = *v5;
    if ( (*v5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v5 & 2) == 0 )
    {
      v3 = 0LL;
      v9 = 37;
      do
      {
        v10 = v3;
        if ( !_bittest64(&v6, v3) )
          v10 = v9;
        ++v3;
        v9 = v10;
      }
      while ( v3 < 0x40 );
      if ( v10 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v6, (unsigned int)v10);
    }
    LOBYTE(v3) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 9);
    result = (unsigned int)(v3 + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 9) = v3 + 1;
    if ( !(_BYTE)v3 )
      *v5 |= 2uLL;
  }
  return result;
}
