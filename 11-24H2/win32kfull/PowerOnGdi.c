/*
 * XREFs of PowerOnGdi @ 0x140134F50
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401DF3C8 (xxxRemoteDisconnect.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x140131E3C (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401331EC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140134838 (ReadCursorSuppressionConfig.c)
 *     xxxUserResetDisplayDevice @ 0x140135460 (xxxUserResetDisplayDevice.c)
 *     ProcessDelayedSdc @ 0x1402271E0 (ProcessDelayedSdc.c)
 */

__int64 __fastcall PowerOnGdi(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 UserGdiSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int CursorSuppressionConfig; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = 0;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL)) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v8);
    DrvDxgkLogCodePointPacket(11LL, 0LL, *(unsigned int *)(UserGdiSessionState + 16), 0LL);
    EtwTracePowerOnGdiBegin(a3);
    *(_DWORD *)(W32GetUserGdiSessionState(v11) + 28) = 1;
    SafeEnableMDEV(2LL);
    v14 = W32GetUserSessionState(v13, v12);
    DrvSetMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v14 + 57008) + 16LL), 1LL);
    DispBrokerAsyncSessionStateChanged(a1);
    xxxUserResetDisplayDevice();
    if ( v4 )
      ProcessDelayedSdc(a1);
  }
  v15 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36396);
  v18 = W32GetUserSessionState(v17, v16);
  v20 = (unsigned int)(*(_DWORD *)(v18 + 36396) - 1);
  if ( *(_DWORD *)(v18 + 36396) == 1 )
    goto LABEL_14;
  v20 = (unsigned int)(*(_DWORD *)(v18 + 36396) - 2);
  if ( *(_DWORD *)(v18 + 36396) == 2 )
    goto LABEL_14;
  v20 = (unsigned int)(*(_DWORD *)(v18 + 36396) - 3);
  if ( *(_DWORD *)(v18 + 36396) == 3 )
    goto LABEL_14;
  v20 = (unsigned int)(*(_DWORD *)(v18 + 36396) - 4);
  if ( *(_DWORD *)(v18 + 36396) == 4 )
    goto LABEL_14;
  if ( *(_DWORD *)(v18 + 36396) == 5
    || *(_DWORD *)(v18 + 36396) == 6
    || (v21 = (unsigned int)(*(_DWORD *)(v18 + 36396) - 8), *(_DWORD *)(v18 + 36396) == 8) )
  {
    zzzEnableDwmPointerSupport(0LL, 1LL);
    v29 = W32GetUserSessionState(v28, v27);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v29 + 36360), 1u);
LABEL_14:
    *(_DWORD *)(W32GetUserSessionState(v19, v20) + 36396) = 2;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v18 + 36396) == 9 )
  {
    CursorSuppressionConfig = ReadCursorSuppressionConfig();
    *(_DWORD *)(W32GetUserSessionState(v24, v23) + 36396) = CursorSuppressionConfig;
    LOBYTE(v9) = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 36396) == 0;
    SetPointerMetaVisibility(v9);
  }
LABEL_15:
  v30 = W32GetUserSessionState(v19, v21);
  InputTraceLogging::Cursor::SetCursorSuppression(v15, 2LL, *(_DWORD *)(v30 + 36396));
  return EtwTracePowerOnGdiEnd(a3);
}
