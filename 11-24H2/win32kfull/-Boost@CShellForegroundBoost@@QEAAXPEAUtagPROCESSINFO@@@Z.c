/*
 * XREFs of ?Boost@CShellForegroundBoost@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1400F77E4
 * Callers:
 *     ?Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z @ 0x1400F7620 (-Apply@ShellForegroundBoost@@YAXPEAUtagPROCESSINFO@@_N@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1400F7338 (IsShellProcess.c)
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x14021ACC4 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14021EC80 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x1402403E8 (-Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CShellForegroundBoost::Boost(CShellForegroundBoost *this, struct _EPROCESS **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // bp
  bool v12; // r15
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx

  if ( !(unsigned int)IsShellProcess((__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 109LL);
  W32AcquirePushLockExclusiveEx(this, 0);
  if ( CProcessAsPid::IsValid((CShellForegroundBoost *)((char *)this + 8)) )
  {
    if ( CProcessAsPid::GetProcessInfo((CShellForegroundBoost *)((char *)this + 8)) != (struct tagPROCESSINFO *)a2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 115LL);
    v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        10,
        (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
    }
  }
  else
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69416),
        4,
        2,
        11,
        (__int64)&WPP_3e908cb0f1113058c6c07127d1e4a5fc_Traceguids);
    }
    CProcessAsPid::Store((CShellForegroundBoost *)((char *)this + 8), *a2);
    ForegroundBoost::SetForegroundPriority(a2, 1LL, 4LL);
    *((_QWORD *)this + 3) = MEMORY[0xFFFFF78000000014];
  }
  W32ReleasePushLockExclusiveEx(this, 0LL);
}
