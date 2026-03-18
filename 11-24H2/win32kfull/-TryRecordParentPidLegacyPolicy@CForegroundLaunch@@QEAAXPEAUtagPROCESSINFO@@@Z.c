/*
 * XREFs of ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D554
 * Callers:
 *     EditionPushExitingAppForegroundPolicy @ 0x1401E0820 (EditionPushExitingAppForegroundPolicy.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D860 (-_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x14028E6F0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?_RecordParentPidLegacyPolicy@CForegroundLaunch@@AEAAXPEAX@Z @ 0x14028F248 (-_RecordParentPidLegacyPolicy@CForegroundLaunch@@AEAAXPEAX@Z.c)
 */

void __fastcall CForegroundLaunch::TryRecordParentPidLegacyPolicy(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  char v4; // di
  bool v5; // bl
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  int v10; // eax
  char v11; // di
  bool v12; // al
  char v13; // r13
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  bool v18; // r15
  int v19; // ebx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // [rsp+90h] [rbp+8h]
  HANDLE ProcessId; // [rsp+A0h] [rbp+18h]

  if ( *((_BYTE *)this + 440) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        2,
        46,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
    }
  }
  else
  {
    W32AcquirePushLockExclusiveEx(this, 0);
    if ( *((_DWORD *)a2 + 94) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 831);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a2);
    if ( *((_BYTE *)this + 416) )
    {
      v10 = *((_DWORD *)a2 + 3);
      v11 = 1;
      if ( *((_BYTE *)a2 + 1208) == 1 )
      {
        v12 = (*((_DWORD *)a2 + 3) & 0x40) != 0;
      }
      else if ( (v10 & 1) != 0 )
      {
        v12 = (v10 & 0x80100) != 0;
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v13 = 0;
        }
        v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v14 = *((_DWORD *)a2 + 14);
          v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
          LOBYTE(v16) = v13;
          LOBYTE(v17) = v23;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v16,
            v17,
            *(_QWORD *)(v15 + 69416),
            4,
            2,
            47,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v14);
        }
        v12 = CForegroundLaunch::_CheckAllowForeground(this, a2);
      }
      if ( v12 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v11 = 0;
        }
        v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v19 = *((_DWORD *)a2 + 14);
          v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
          LOBYTE(v21) = v18;
          LOBYTE(v22) = v11;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(v20 + 69416),
            4,
            2,
            48,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v19);
        }
        CForegroundLaunch::_RecordParentPidLegacyPolicy(this, ProcessId);
      }
    }
    if ( (*((_DWORD *)a2 + 3) & 0x40) != 0 )
      CForegroundLaunch::_AppStarting_Clear(this, a2);
    W32ReleasePushLockExclusiveEx(this, 0LL);
  }
}
