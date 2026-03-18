/*
 * XREFs of ??$GrepAcquireLockValidate@$0BB@@@YAXXZ @ 0x1400BBD8C
 * Callers:
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1400BB830 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<17>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  int v7; // edx
  int v8; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

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
    if ( (*v5 & 0xFFFFFFFFFFFE0000uLL) != 0 && (*v5 & 0x20000) == 0 )
    {
      v7 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v8 = i;
        v6 = *v5;
        if ( !_bittest64(&v6, i) )
          v8 = v7;
        v7 = v8;
      }
      if ( v8 > 17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x19);
    result = (unsigned int)(i + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0x19) = i + 1;
    if ( !(_BYTE)i )
      *v5 |= 0x20000uLL;
  }
  return result;
}
