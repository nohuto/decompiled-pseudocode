/*
 * XREFs of ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C00EE390
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0043124 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C0043718 (_anonymous_namespace_--CheckAllowForeground.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1C0082778 (WPP_RECORDER_AND_TRACE_SF_sDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _anonymous_namespace_::AppStarting_Set @ 0x1C00EEDA4 (_anonymous_namespace_--AppStarting_Set.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ForegroundLaunch::ApplyForegroundPolicyConsole(ForegroundLaunch *this, struct _EPROCESS *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // si
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdi
  char v11; // bl
  bool v12; // bp
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  char v16; // bl
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+38h] [rbp-50h]

  ProcessWin32Process = PsGetProcessWin32Process(this);
  v5 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  v6 = 1;
  if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 789LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v10 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v10 = v8 & CurrentProcessWin32Process;
  }
  if ( (*(_DWORD *)(v5 + 12) & 0x100) != 0 || anonymous_namespace_::CheckAllowForeground((__int64)this) )
  {
    if ( (*(_DWORD *)(v10 + 12) & 0x40) == 0 )
      anonymous_namespace_::AppStarting_Set(v10);
    *(_DWORD *)(v5 + 12) |= 0x100u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = PsGetProcessWin32Process(this);
      if ( v13 )
        v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
      LOBYTE(v15) = v12;
      LOBYTE(v14) = v11;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        (_DWORD)gFullLog,
        4,
        2,
        35,
        (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
        *(_DWORD *)(v13 + 56));
    }
    gdwPUDFlags |= 0x8000000u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        36,
        (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids);
    }
    *(_DWORD *)(v10 + 12) |= 0x100u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gFullLog,
        4,
        2,
        37,
        (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
        *(_DWORD *)(v10 + 56));
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessWin32Process(this);
    v17 = "set";
    if ( (*(_DWORD *)(v10 + 12) & 0x100) == 0 )
      v17 = "NOT set";
    WPP_RECORDER_AND_TRACE_SF_sDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v16,
      (__int64)gFullLog,
      v18,
      v19,
      v20,
      v21,
      v17);
  }
}
