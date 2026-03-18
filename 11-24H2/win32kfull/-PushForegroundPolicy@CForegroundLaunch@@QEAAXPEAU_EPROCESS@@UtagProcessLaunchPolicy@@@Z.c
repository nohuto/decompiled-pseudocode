/*
 * XREFs of ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028CC84
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicyEx @ 0x14028F6B0 (EditionPushProcessLaunchForegroundPolicyEx.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140110890 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA?AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@W4LaunchBoostState@2@@Z @ 0x14028CB4C (-Add@PID_LAUNCH_POLICY@CForegroundLaunch@@QEAA-AW4AddEntryResult@2@PEAU_EPROCESS@@W4_PROCESS_LAU.c)
 */

void __fastcall CForegroundLaunch::PushForegroundPolicy(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  char v3; // r14
  int v4; // ebx
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  char v14; // di
  BOOL v15; // eax
  bool v16; // r15
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // r14d
  int v21; // eax
  __int64 v22; // rdx
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // r14
  bool v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  bool v32; // bl
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 ProcessWin32Process; // rax
  int v39; // [rsp+C4h] [rbp+1Ch]
  char ProcessId; // [rsp+C8h] [rbp+20h]

  v39 = HIDWORD(a3);
  v3 = 0;
  v4 = a3;
  if ( !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 254);
  if ( v4 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 255);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( *(_BYTE *)(a1 + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 260);
  if ( *(_BYTE *)(a1 + 416) )
  {
    ProcessId = (unsigned __int8)PsGetProcessId(a2);
    v14 = 1;
    v15 = v39 == 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v13 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (v13 & 2) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        v3 = 1;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v13, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v3;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        11,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        ProcessId,
        v4,
        v39);
      v15 = v39 == 1;
    }
    v20 = 0;
    while ( 1 )
    {
      v21 = CForegroundLaunch::PID_LAUNCH_POLICY::Add(a1 + 32 * (v20 + 3LL), a2, v4, v15);
      if ( v21 == 2 )
      {
LABEL_27:
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v14 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v14;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v25,
            *(_QWORD *)(v24 + 69416),
            3,
            2,
            14,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            ProcessId);
        }
        goto LABEL_34;
      }
      if ( v21 != 1 )
        break;
      v15 = v39 == 1;
      if ( ++v20 >= 0xA )
        goto LABEL_27;
    }
    v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69416),
        4,
        2,
        12,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        ProcessId,
        v4,
        v39);
    }
    if ( v39 == 1 )
    {
      v32 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69416),
          4,
          2,
          13,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          ProcessId);
      }
      ProcessWin32Process = PsGetProcessWin32Process(a2);
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
        10,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
  }
LABEL_34:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
}
