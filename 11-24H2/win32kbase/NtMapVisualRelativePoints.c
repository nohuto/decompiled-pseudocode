/*
 * XREFs of NtMapVisualRelativePoints @ 0x1401AB4D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x140155E98 (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1401AAB44 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AB810 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, __int64 a4, char *Address)
{
  _QWORD *UserSessionState; // r15
  __int64 v6; // rax
  char v7; // si
  int **v8; // rdi
  char v9; // di
  bool v10; // r15
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  unsigned __int64 v14; // rdi
  __int64 CurrentProcessWow64Process; // rax
  unsigned int i; // edi
  NTSTATUS v17; // eax
  int v18; // edi
  ULONG v19; // eax
  char v20; // r15
  int LastError; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+40h] [rbp-78h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  v7 = 1;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (int **)UserSessionState[2471];
      if ( !v8 )
        break;
      UserSessionState[2471] = v8[2];
      v8[2] = 0LL;
      if ( !(*v8)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v8);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_ii(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 69400),
      4,
      2,
      10,
      (__int64)&WPP_ca5208a502eb38524adf45b8c1e63f89_Traceguids,
      (char)a1,
      (char)a2);
  }
  v14 = 8LL * a3;
  if ( v14 > 0xFFFFFFFF )
  {
    v18 = 0;
    UserSetLastError(8);
  }
  else
  {
    if ( (_DWORD)v14 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned int)v14, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0; i != a3; ++i )
    {
      v17 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * i),
              (struct VisualPoint *)&Address[8 * i]);
      if ( v17 < 0 )
      {
        v18 = 0;
        v19 = RtlNtStatusToDosError(v17);
        UserSetLastError(v19);
        goto LABEL_25;
      }
    }
    v18 = 1;
  }
LABEL_25:
  if ( !v18 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v23 = W32GetUserSessionState(v22);
      LODWORD(v25) = LastError;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v20,
        *(_QWORD *)(v23 + 69400),
        2u,
        2u,
        0xBu,
        (__int64)&WPP_ca5208a502eb38524adf45b8c1e63f89_Traceguids,
        v25);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v18;
}
