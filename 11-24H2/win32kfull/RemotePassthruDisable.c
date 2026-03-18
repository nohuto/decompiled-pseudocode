/*
 * XREFs of RemotePassthruDisable @ 0x1401FBD88
 * Callers:
 *     NtUserRemotePassthruDisable @ 0x14029BA70 (NtUserRemotePassthruDisable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     bDrvReconnect @ 0x1402693DC (bDrvReconnect.c)
 *     GetRemoteHDEV @ 0x1402698B8 (GetRemoteHDEV.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  bool v5; // bl
  bool v6; // si
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdx

  RemoteContext = GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v3 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v3 & 4) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(v3, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v16) = v6;
    LOBYTE(v17) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v17,
      v16,
      *(_QWORD *)(v15 + 69416),
      4,
      3,
      26,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v7 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
  if ( PsGetCurrentProcess(v8) != v7 )
    return 3221225506LL;
  if ( *(_DWORD *)(UserSessionState + 69012) )
  {
    if ( *(_DWORD *)(UserSessionState + 69020) )
    {
      RemoteHDEV = *(_QWORD *)(UserSessionState + 69064);
      v10 = *(_QWORD *)(UserSessionState + 69056);
      v11 = *(_QWORD *)(UserSessionState + 69088);
    }
    else
    {
      v11 = *(_QWORD *)(UserSessionState + 69176);
      v10 = *(_QWORD *)(UserSessionState + 68944);
      RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(UserSessionState + 69008), *(_QWORD *)(RemoteContext + 40));
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v10, v11, 1LL) )
      return 3221880856LL;
    v18 = W32GetUserSessionState(v13, v12);
    RemoteRedrawScreen((void **)(v18 + 19208), v19);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
