/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E4300 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  __int64 v0; // rcx
  __int64 UserSessionState; // rax
  __int64 v2; // rsi
  __int64 v3; // rcx
  int ActiveConsoleId; // edi
  unsigned int v5; // edi
  char v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h]

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  if ( v7 && *(_DWORD *)(W32GetUserGdiSessionState(v0) + 36) )
  {
    v8 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 228);
  }
  UserSessionState = W32GetUserSessionState(v0);
  v2 = UserSessionState;
  v3 = *(unsigned int *)(UserSessionState + 69112);
  if ( (int)v3 > 0 )
  {
    *(_DWORD *)(UserSessionState + 69112) = v3 + 1;
LABEL_10:
    v5 = 0;
    goto LABEL_12;
  }
  if ( !*(_DWORD *)(W32GetUserGdiSessionState(v3) + 36) )
  {
    ActiveConsoleId = RtlGetActiveConsoleId();
    if ( ActiveConsoleId == (unsigned int)W32GetCurrentWin32kSessionId() && !*(_DWORD *)(v2 + 69108) )
    {
      ++*(_DWORD *)(v2 + 69112);
      *(_DWORD *)(v2 + 69108) = 1;
      goto LABEL_10;
    }
  }
  v5 = -1073086428;
LABEL_12:
  if ( !v7 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
