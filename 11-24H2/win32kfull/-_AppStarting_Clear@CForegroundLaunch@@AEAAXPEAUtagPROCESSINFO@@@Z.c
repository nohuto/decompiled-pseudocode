/*
 * XREFs of ?_AppStarting_Clear@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D860
 * Callers:
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x1402132DC (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028D554 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::_AppStarting_Clear(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  char *v4; // rcx
  char *v5; // rax
  char *v6; // r14
  char *v7; // rdi
  struct tagPROCESSINFO *v8; // rbx
  char v9; // si
  bool v10; // bp
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rdx
  char **v16; // rax

  if ( (*((_DWORD *)a2 + 3) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1033);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1035);
  v4 = (char *)this + 424;
  v5 = (char *)*((_QWORD *)this + 53);
  while ( v5 != v4 )
  {
    v6 = v5 - 16;
    v7 = v5;
    v8 = (struct tagPROCESSINFO *)*((_QWORD *)v5 - 2);
    v5 = *(char **)v5;
    if ( v8 == a2 )
    {
      *((_DWORD *)v8 + 3) &= ~0x40u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = *((_DWORD *)v8 + 14);
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          2,
          54,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v11);
      }
      v15 = *(_QWORD *)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v16 = (char **)*((_QWORD *)v7 + 1), *v16 != v7) )
        __fastfail(3u);
      *v16 = (char *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      Win32FreePool(v6);
      return;
    }
  }
}
