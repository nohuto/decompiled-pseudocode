/*
 * XREFs of xxxRemoteShadowSetup @ 0x1402B7DC4
 * Callers:
 *     NtUserRemoteShadowSetup @ 0x14029BCE0 (NtUserRemoteShadowSetup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401DF978 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      21,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( PsGetCurrentProcess(v9) != v8 )
    return 3221225506LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v11, v10) + 69160) || *(_DWORD *)(W32GetUserSessionState(v14, v13) + 69012) )
    xxxRemoteStopScreenUpdates(v14, v13);
  v15 = W32GetUserSessionState(v14, v13);
  ++*(_DWORD *)(v15 + 69160);
  return 0LL;
}
