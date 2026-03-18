/*
 * XREFs of xxxRemoteStopScreenUpdates @ 0x1401DF978
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 *     NtUserRemoteStopScreenUpdates @ 0x14029BDB0 (NtUserRemoteStopScreenUpdates.c)
 *     xxxRemotePassthruEnable @ 0x1402B7B88 (xxxRemotePassthruEnable.c)
 *     xxxRemoteShadowSetup @ 0x1402B7DC4 (xxxRemoteShadowSetup.c)
 *     xxxRemoteShadowStop @ 0x1402B7ED4 (xxxRemoteShadowStop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteDisableScreen @ 0x140224C24 (RemoteDisableScreen.c)
 *     ??4?$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z @ 0x14026C560 (--4-$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRemoteStopScreenUpdates(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int16 v22; // cx
  __int16 v23; // bx
  char v24; // cl
  unsigned __int16 v25; // dx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *ActivityId; // [rsp+58h] [rbp-B0h] BYREF
  GUID ActivityId_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v45[4]; // [rsp+74h] [rbp-94h] BYREF
  int v46; // [rsp+94h] [rbp-74h]
  int v47; // [rsp+98h] [rbp-70h]
  __int128 v48; // [rsp+9Ch] [rbp-6Ch]
  __int64 v49; // [rsp+ACh] [rbp-5Ch]
  int v50; // [rsp+B4h] [rbp-54h]
  int v51; // [rsp+B8h] [rbp-50h]
  __int128 v52; // [rsp+BCh] [rbp-4Ch]
  __int64 v53; // [rsp+CCh] [rbp-3Ch]
  int v54; // [rsp+D4h] [rbp-34h]
  int v55; // [rsp+D8h] [rbp-30h]
  __int128 v56; // [rsp+DCh] [rbp-2Ch]
  __int64 v57; // [rsp+ECh] [rbp-1Ch]
  int v58; // [rsp+F4h] [rbp-14h]
  int v59; // [rsp+F8h] [rbp-10h]
  __int128 v60; // [rsp+FCh] [rbp-Ch]
  __int64 v61; // [rsp+10Ch] [rbp+4h]
  int v62; // [rsp+114h] [rbp+Ch]
  int v63; // [rsp+118h] [rbp+10h]
  __int128 v64; // [rsp+11Ch] [rbp+14h]
  __int64 v65; // [rsp+12Ch] [rbp+24h]
  int v66; // [rsp+134h] [rbp+2Ch]

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v3 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v3 = 0;
  }
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
      19,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = W32GetUserSessionState(v2, a2);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 69116) )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      LOBYTE(v42) = 0;
      ActivityId_8 = 0LL;
      EtwActivityIdControl(3u, &ActivityId_8);
      DisplayScenarioContextEnsureAndAssociate(&ActivityId_8, 0x41u, 0, &ActivityId, (unsigned __int8 *)&v42);
      v13 = ActivityId;
      v16 = W32GetUserSessionState(v15, v14);
      LOBYTE(v17) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v16 + 57008) + 16LL), 4LL, v17, v13);
      if ( (_BYTE)v42 )
        DisplayScenarioContextDissociate(&ActivityId);
    }
    else
    {
      v20 = W32GetUserSessionState(v12, v11);
      KeSetEvent(*(PRKEVENT *)(v20 + 68696), 1, 0);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 63024) )
    {
      v22 = *(_WORD *)(v8 + 20660);
      v23 = v22 & ~*(_WORD *)(v8 + 20662);
      v24 = v23 ^ v22;
      v25 = v24 & 1 | 2;
      if ( (v24 & 2) == 0 )
        v25 = v24 & 1;
      if ( v25 )
        ReleaseMouseButton(v25);
      *(_WORD *)(v8 + 20660) = v23;
      memset(&v45[1], 0, 24);
      v46 = 0;
      v26 = 0;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0;
      v60 = 0LL;
      v61 = 0LL;
      v62 = 0;
      v64 = 0LL;
      v65 = 0LL;
      v66 = 0;
      HIDWORD(v45[0]) = -2136735560;
      v47 = -2119892808;
      v51 = -2136866659;
      v55 = -2120023907;
      v59 = -2136997718;
      v63 = -2120154954;
      do
      {
        LOBYTE(v21) = 1;
        xxxProcessKeyEvent((char *)&v45[4 * (int)v26++] + 4, 0LL, v21, 0LL, 0LL, 0LL);
      }
      while ( v26 < 6 );
      UpdateKeyLights(1LL);
      v29 = W32GetUserSessionState(v28, v27);
      v32 = W32GetUserSessionState(v31, v30);
      v35 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 63024);
      v38 = W32GetUserSessionState(v37, v36);
      RemoteDisableScreen(*(_QWORD *)(v38 + 19200), v35, v32 + 19208, v29 + 62872);
      v41 = 1;
      SGRDPgbFreezeScreenUpdates<int>::operator=(v39, &v41);
    }
  }
  return 0LL;
}
