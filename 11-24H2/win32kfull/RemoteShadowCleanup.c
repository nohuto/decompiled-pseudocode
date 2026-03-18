/*
 * XREFs of RemoteShadowCleanup @ 0x1401E0124
 * Callers:
 *     NtUserRemoteShadowCleanup @ 0x14029BC90 (NtUserRemoteShadowCleanup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x1402698B8 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x14026A1E0 (bDrvShadowDisconnect.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall RemoteShadowCleanup(volatile void *a1, unsigned int a2)
{
  SIZE_T v2; // rsi
  __int64 v3; // rdx
  __int64 RemoteContext; // r14
  bool v5; // bl
  unsigned int *v6; // rcx
  bool v7; // di
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // [rsp+40h] [rbp-18h]

  v2 = a2;
  RemoteContext = GreGetRemoteContext();
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3);
    LOBYTE(v31) = v7;
    LOBYTE(v32) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v32,
      v31,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      24,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v9) != v8 )
    return 3221225506LL;
  ProbeForRead(a1, v2, 1u);
  v35 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  if ( !v35 )
    ExRaiseStatus(-1073741801);
  memmove(v35, (const void *)a1, v2);
  v12 = W32GetUserSessionState(v11, v10);
  if ( *(_DWORD *)(v12 + 69020) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 69064);
  }
  else
  {
    v28 = *(_QWORD *)(RemoteContext + 40);
    v29 = W32GetUserSessionState(v14, v13);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v29 + 69008), v28);
  }
  bDrvShadowDisconnect(RemoteHDEV, v35, (unsigned int)v2);
  Win32FreePool(v35);
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 69160) )
  {
    v33 = W32GetUserSessionState(v19, v18);
    --*(_DWORD *)(v33 + 69160);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v19, v18) + 69160) || *(_DWORD *)(W32GetUserSessionState(v21, v20) + 69012) )
  {
    v22 = W32GetUserSessionState(v21, v20);
    RemoteRedrawScreen(v22 + 19208);
  }
  LOBYTE(v21) = 1;
  SetPointerInternal(v21, 6LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v24, v23) + 69160) )
  {
    v34 = W32GetUserSessionState(v26, v25);
    *(_DWORD *)(*(_QWORD *)(v34 + 19928) + 2236LL) &= ~2u;
  }
  return 0LL;
}
