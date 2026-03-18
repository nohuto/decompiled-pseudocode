/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1402ADA10
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x140116AE0 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x14024E340 (HandleDisplayChangeForInactiveDesktops.c)
 */

char __fastcall xxxBroadcastModernAppRedraw(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 19200) )
  {
    v5 = W32GetUserSessionState(v4, v3);
    xxxBroadcastDisplaySettingsChange(*(_QWORD *)(v5 + 19200), 0, 0, 0);
    v8 = W32GetUserSessionState(v7, v6);
    LOBYTE(UserSessionState) = HandleDisplayChangeForInactiveDesktops(*(_QWORD *)(v8 + 19200), 0LL, 0);
  }
  return UserSessionState;
}
