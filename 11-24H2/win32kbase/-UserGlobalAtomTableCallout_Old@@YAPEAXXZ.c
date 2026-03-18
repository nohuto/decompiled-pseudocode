/*
 * XREFs of ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ReferenceWindowStation @ 0x1400CF2E4 (ReferenceWindowStation.c)
 *     IsProcessWin32kLockedOut @ 0x140158EE0 (IsProcessWin32kLockedOut.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x140193CC0 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 *     ModerncoreAtomTable @ 0x14023B614 (ModerncoreAtomTable.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 UserGlobalAtomTableCallout_Old(void)
{
  __int64 v0; // rbx
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  char v9; // si
  char v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  _QWORD *i; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  int (*v20)(void); // rax
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v35; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0LL;
  v35 = 0LL;
  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v8 = *ThreadWin32Thread;
    v1 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x20000000) != 0 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v8 + 464) + 760LL);
        if ( (*(_DWORD *)(v5 + 32) & 0x20) != 0 )
        {
          v9 = 1;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
            || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v10 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v9 = 0;
          if ( v10 || v9 )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v12) = v9;
            LOBYTE(v13) = v10;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v12,
              *(_QWORD *)(UserSessionState + 69400),
              5,
              3,
              37,
              (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
              v8);
          }
          i = *(_QWORD **)(*(_QWORD *)(v8 + 464) + 760LL);
          return i[3];
        }
      }
    }
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v19 = ProcessJob;
  if ( !v1 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 632LL);
    if ( v20 && v20() >= 0 )
    {
      for ( i = *(_QWORD **)(W32GetUserSessionState(v21) + 69352); i && i[1] != v19; i = (_QWORD *)*i )
        ;
      return i[3];
    }
    if ( IsProcessWin32kLockedOut((void *)0xFFFFFFFFFFFFFFFFLL) )
    {
      UserSetLastError(5);
      return v0;
    }
  }
  v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 3520LL);
  if ( v22 )
  {
    if ( v22() >= 0 )
    {
      v27 = PsGetCurrentProcess(v24, v23, v25, v26);
      ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v27);
      if ( (int)ReferenceWindowStation((__int64)CurrentThread, ProcessWin32WindowStation, v29, (__int64)&v35) >= 0 )
        return *(_QWORD *)(v35 + 168);
    }
  }
  if ( (IsProcessWin32kLockedOut((void *)0xFFFFFFFFFFFFFFFFLL)
     || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v30)) == 0LL
     || !*CurrentProcessWin32Process
     || !(unsigned int)ApiSetIsCurrentProcessWinstaLocked(v33, v32))
    && (int)IsModerncoreAtomTableSupported() >= 0 )
  {
    return ModerncoreAtomTable();
  }
  return v0;
}
