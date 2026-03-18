/*
 * XREFs of ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x14023D72C
 * Callers:
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401897BC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CWinEventNoopDeferral::~CWinEventNoopDeferral(CWinEventNoopDeferral *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  v4 = 0LL;
  if ( !*(_DWORD *)(UserSessionState + 70856) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1005LL);
  v5 = W32GetUserSessionState(v4, v3);
  --*(_DWORD *)(v5 + 70856);
}
