/*
 * XREFs of ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402132DC
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140276114 (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D860 (-_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall CForegroundLaunch::OnFirstActivationAttempted(CForegroundLaunch *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  struct tagPROCESSINFO *v5; // rdi
  int v6; // r15d
  char v7; // bl
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // ebp
  CProcessAsPid *v13; // rbx
  __int64 v14; // rdx
  char v15; // bp
  bool v16; // r14
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 614LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v5 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = (struct tagPROCESSINFO *)(v4 & CurrentProcessWin32Process);
  }
  if ( (*((_DWORD *)v5 + 3) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 617LL);
  v6 = *((_DWORD *)v5 + 14);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      2,
      37,
      (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
      v6);
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = (CForegroundLaunch *)((char *)this + 32 * v12 + 96);
    if ( CProcessAsPid::GetProcessInfo(v13) == v5 )
      break;
    if ( ++v12 >= 0xA )
      goto LABEL_27;
  }
  if ( *((_DWORD *)v13 + 5) == 1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v15 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(v17 + 69416),
        4,
        2,
        38,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        v6);
    }
    ForegroundBoost::SetForegroundPriority(v5, 0LL, 1LL);
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
  }
LABEL_27:
  CForegroundLaunch::_AppStarting_Clear(this, v5);
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
