/*
 * XREFs of ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A2A8C
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x140092CF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(CWinEventNoopDeferral *this)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  if ( *(_DWORD *)(W32GetUserSessionState(this) + 70856) && !(unsigned int)AtomicExecutionCheck::GetCount(v2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 999);
  UserSessionState = W32GetUserSessionState(v2);
  ++*(_DWORD *)(UserSessionState + 70856);
  return this;
}
