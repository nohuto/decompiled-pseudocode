/*
 * XREFs of NtUserSetWindowsHookEx @ 0x14029F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402396A8 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     Feature_656357688__private_IsEnabledDeviceUsageNoInline @ 0x140292480 (Feature_656357688__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetWindowsHookEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // rsi
  char v9; // di
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v15; // r15
  int v16; // ecx
  unsigned __int64 v17; // r15
  ULONG64 v18; // rdx
  __int64 *v19; // rax
  unsigned int *v20; // rcx
  bool v21; // si
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  struct tagTHREADINFO *v25; // rax
  int v26; // ecx
  char v27; // di
  bool v28; // si
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  volatile void *Address[13]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+8h]
  ULONG64 v35; // [rsp+C8h] [rbp+10h]
  int v36; // [rsp+D8h] [rbp+20h]

  v35 = a2;
  v34 = a1;
  v8 = a1;
  if ( a4 + 1 > 0xF )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v11 = 0LL;
      v27 = 0;
    }
    else
    {
      v27 = 1;
      v11 = 0LL;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(UserSessionState + 69416),
        2,
        5,
        13,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids,
        a4);
    }
    v26 = 1426;
    goto LABEL_53;
  }
  v9 = 1;
  if ( a4 <= 1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v11 = 0LL;
      v9 = 0;
    }
    else
    {
      v11 = 0LL;
    }
    v20 = &WPP_RECORDER_INITIALIZED;
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a2);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v23,
        *(_QWORD *)(v22 + 69416),
        3,
        5,
        14,
        (__int64)&WPP_50f270925f983674ef77b34f83514a3b_Traceguids);
    }
    v25 = PtiCurrent((__int64)v20, a2);
    *(_QWORD *)(*((_QWORD *)v25 + 65) + 224LL) |= 0x1000uLL;
    v26 = 5;
LABEL_53:
    UserSetLastError(v26);
    return v11;
  }
  EnterLeaveCritShared::EnterLeaveCritShared(Address, 1LL);
  v11 = 0LL;
  if ( !a3 )
  {
    v12 = 0LL;
    goto LABEL_8;
  }
  v12 = PtiFromThreadId(a3);
  if ( v12 )
  {
LABEL_8:
    if ( !v8 )
      goto LABEL_26;
    CurrentProcess = PsGetCurrentProcess(v10);
    Address[0] = (volatile void *)PsGetProcessPeb(CurrentProcess);
    ProbeForRead(Address[0], 0x7D0uLL, 1u);
    v8 = v34;
    if ( *((_QWORD *)Address[0] + 2) == v34 )
    {
      v8 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
    }
    if ( !v8 || (v15 = v35) == 0 )
    {
LABEL_26:
      v17 = 0LL;
LABEL_27:
      if ( a6 && (a6 & 0xFFFFFFBD) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3549);
      if ( (unsigned int)Feature_656357688__private_IsEnabledDeviceUsageNoInline() )
      {
        v11 = zzzSetWindowsHookEx_New(v8, v17, v12, a4, a5, a6, 0LL);
      }
      else
      {
        v19 = (__int64 *)zzzSetWindowsHookEx(v8, v17, v12, a4, a5, a6, 0LL);
        if ( v19 )
          v11 = *v19;
      }
      EtwTraceAuditApiSetWindowsHookEx(a4, v17, v8, a5, v11);
      goto LABEL_6;
    }
    if ( v35 >= MmUserProbeAddress )
      v15 = MmUserProbeAddress;
    v16 = *(_DWORD *)v15;
    v36 = *(_DWORD *)v15;
    LODWORD(Address[0]) = *(_DWORD *)v15;
    v17 = *(_QWORD *)(v15 + 8);
    Address[1] = (volatile void *)v17;
    if ( (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v17 + (unsigned __int16)v16 + 2LL;
    if ( v18 <= v17 || v18 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v16 > HIWORD(v36) )
    {
      if ( (v16 & 1) == 0 )
        goto LABEL_24;
    }
    else if ( (v16 & 1) == 0 )
    {
      Address[3] = (volatile void *)v17;
      v8 = v34;
      goto LABEL_27;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3537);
LABEL_24:
    ExRaiseAccessViolation();
  }
  UserSetLastError(87);
LABEL_6:
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}
