/*
 * XREFs of ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x14015CA30
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CWinEventNoopDeferral::~CWinEventNoopDeferral(CWinEventNoopDeferral *this)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  UserSessionState = W32GetUserSessionState(this);
  v2 = 0LL;
  if ( !*(_DWORD *)(UserSessionState + 70856) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1005LL);
  v3 = W32GetUserSessionState(v2);
  --*(_DWORD *)(v3 + 70856);
}
