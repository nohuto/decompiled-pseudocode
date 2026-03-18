/*
 * XREFs of ?_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D9E8
 * Callers:
 *     ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140189324 (-ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401D1314 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::_AppStarting_Set(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // di
  bool v8; // bp
  int v9; // ebx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  _QWORD *v13; // rax
  CForegroundLaunch **v14; // rdx
  CForegroundLaunch *v15; // rax

  if ( *(_QWORD *)(W32GetUserGdiSessionState(this) + 40) && *(_QWORD *)(W32GetUserSessionState(v5, v4) + 57616) )
  {
    if ( *((_BYTE *)this + 416) )
    {
      if ( *((_BYTE *)a2 + 1208) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 998);
      if ( (*((_DWORD *)a2 + 3) & 0x40) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1001);
      if ( *((_BYTE *)this + 440) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1005);
      v13 = (_QWORD *)Win32AllocPoolZInit(32LL, 1935766357LL);
      if ( v13 )
      {
        *v13 = a2;
        v13[1] = MEMORY[0xFFFFF78000000014];
        v14 = (CForegroundLaunch **)*((_QWORD *)this + 54);
        v15 = (CForegroundLaunch *)(v13 + 2);
        if ( *v14 != (CForegroundLaunch *)((char *)this + 424) )
          __fastfail(3u);
        *(_QWORD *)v15 = (char *)this + 424;
        *((_QWORD *)v15 + 1) = v14;
        *v14 = v15;
        *((_QWORD *)this + 54) = v15;
        *((_DWORD *)a2 + 3) |= 0x40u;
      }
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v7 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = *((_DWORD *)a2 + 14);
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v11) = v8;
        LOBYTE(v12) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          2,
          53,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v9);
      }
    }
  }
}
