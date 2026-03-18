/*
 * XREFs of ?PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028D0F8
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicy @ 0x14020EA30 (EditionPushProcessLaunchForegroundPolicy.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140110890 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x14028CB4C (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 */

void __fastcall CForegroundLaunch::PushForegroundPolicy_Old(__int64 a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  char v4; // r14
  int v5; // ebx
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // di
  _BOOL8 v14; // rdx
  bool v15; // r15
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // r14d
  int v20; // eax
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // r14
  bool v26; // r15
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  bool v30; // bl
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  __int64 ProcessWin32Process; // rax
  int v38; // [rsp+CCh] [rbp+24h]

  v38 = HIDWORD(a4);
  v4 = 0;
  v5 = a4;
  if ( !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 329);
  if ( v5 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 330);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( *(_BYTE *)(a1 + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 335);
  if ( *(_BYTE *)(a1 + 416) )
  {
    v13 = 1;
    v14 = v38 == 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
    {
      v4 = 1;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v4;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        16,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        a2,
        v5,
        v38);
      LODWORD(v14) = v38 == 1;
    }
    v19 = 0;
    while ( 1 )
    {
      v20 = CForegroundLaunch::PID_LAUNCH_POLICY::Add(a1 + 32 * (v19 + 3LL), a3, v5, v14);
      if ( v20 == 2 )
      {
LABEL_27:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v13 = 0;
        }
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v13;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v24,
            v23,
            *(_QWORD *)(v22 + 69416),
            3,
            2,
            19,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            a2);
        }
        goto LABEL_34;
      }
      if ( v20 != 1 )
        break;
      v14 = v38 == 1;
      if ( ++v19 >= 0xA )
        goto LABEL_27;
    }
    v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v28) = v26;
      LOBYTE(v29) = v25;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69416),
        4,
        2,
        17,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        a2,
        v5,
        v38);
    }
    if ( v38 == 1 )
    {
      v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v33,
          *(_QWORD *)(v32 + 69416),
          4,
          2,
          18,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          a2);
      }
      ProcessWin32Process = PsGetProcessWin32Process(a3);
      if ( ProcessWin32Process )
        ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      ForegroundBoost::SetForegroundPriority(ProcessWin32Process, 1LL, 1LL);
    }
  }
  else
  {
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(v10 + 69416),
        3,
        2,
        15,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
  }
LABEL_34:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
}
