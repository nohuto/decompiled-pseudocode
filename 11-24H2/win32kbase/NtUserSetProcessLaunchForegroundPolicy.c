/*
 * XREFs of NtUserSetProcessLaunchForegroundPolicy @ 0x1401BD470
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14015C9F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A23E4 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A9E14 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(int a1, int a2)
{
  unsigned int v2; // r13d
  char v4; // di
  char v5; // si
  __int64 UserSessionState; // rax
  char v7; // di
  char v8; // si
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rbp
  unsigned __int64 ProcessInfo; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bp
  __int64 v22; // r9
  char v23; // bp
  __int64 v24; // r9
  unsigned int (__fastcall *v25)(_QWORD); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r15
  void (__fastcall *v29)(__int64, __int64); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void (__fastcall *v32)(__int64, __int64, __int64); // rax
  bool v34; // bp
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  ULONG v38; // ecx
  bool v39; // bp
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // [rsp+40h] [rbp-A8h]
  __int64 v44; // [rsp+50h] [rbp-98h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-90h]
  __int64 v46; // [rsp+68h] [rbp-80h]
  char v48; // [rsp+F8h] [rbp+10h]
  int v49; // [rsp+F8h] [rbp+10h]
  int v50; // [rsp+100h] [rbp+18h]
  __int64 v51; // [rsp+100h] [rbp+18h]
  __int64 v52; // [rsp+100h] [rbp+18h]
  __int64 v53; // [rsp+108h] [rbp+20h]

  v2 = 3;
  if ( (a2 & 3) == 3 )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v5,
        *(_QWORD *)(UserSessionState + 69400),
        4u,
        0xDu,
        0x7Bu,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        a2);
    }
LABEL_27:
    UserSetLastError(87);
    return 0LL;
  }
  v7 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v48,
      *(_QWORD *)(v9 + 69400),
      4u,
      0xDu,
      0x7Cu,
      (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
      a2,
      a1);
  }
  v49 = a2 & 4;
  v10 = a2 & 0xFFFFFFFB;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v7 = 0;
        }
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v7;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v15,
            v14,
            *(_QWORD *)(v13 + 69400),
            2,
            13,
            125,
            (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
        }
        goto LABEL_27;
      }
    }
    else
    {
      v2 = 2;
    }
  }
  else
  {
    v2 = 1;
  }
  EnterSharedCrit(0, 0);
  CLockProcessByPid::CLockProcessByPid((__int64)&v44, a1, 512, v16, 1, 0LL);
  if ( !v46 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v42,
        v41,
        *(_QWORD *)(v40 + 69400),
        2,
        13,
        128,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        a1);
    }
    v38 = RtlNtStatusToDosError(Status);
    goto LABEL_76;
  }
  v17 = v44;
  v50 = v44;
  ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)&v44);
  if ( !ProcessInfo )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      LODWORD(v43) = v50;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v21,
        v22,
        2u,
        0xDu,
        0x7Eu,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v43);
    }
LABEL_67:
    v38 = 5;
LABEL_76:
    UserSetLastError(v38);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v44);
    UserSessionSwitchLeaveCritWithNonPaged();
    return 0LL;
  }
  if ( *(_BYTE *)(ProcessInfo + 1208) == 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 69400);
      LODWORD(v43) = v50;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v23,
        v24,
        2u,
        0xDu,
        0x7Fu,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids,
        v43);
    }
    goto LABEL_67;
  }
  v51 = v46;
  v25 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48) + 5216LL);
  if ( !v25 || !v25(v2) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v36) = v34;
      LOBYTE(v37) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v37,
        v36,
        *(_QWORD *)(v35 + 69400),
        2,
        13,
        129,
        (__int64)&WPP_8ecb864819e83a63300ef0c5d3b8b347_Traceguids);
    }
    goto LABEL_67;
  }
  if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    LODWORD(v53) = v2;
    v28 = v51;
    v29 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48) + 5200LL);
    if ( v29 )
    {
      HIDWORD(v53) = v49 != 0;
      v29(v51, v53);
    }
  }
  else
  {
    v28 = v51;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v44);
  UserSessionSwitchLeaveCritWithNonPaged();
  if ( !(unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9502);
    LODWORD(v52) = v2;
    v32 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48)
                                                           + 5192LL);
    if ( v32 )
    {
      HIDWORD(v52) = v49 != 0;
      v32(v17, v28, v52);
    }
  }
  return 1LL;
}
