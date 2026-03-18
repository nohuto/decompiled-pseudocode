/*
 * XREFs of IsCurrentSessionServiceSession @ 0x14012AA48
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x14012A8C0 (-CheckInitialSessions@@YAJXZ.c)
 *     IsIMMEnabledSystem @ 0x14012AA20 (IsIMMEnabledSystem.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     UpdateDelegationTargetForMouseInput @ 0x1402137A0 (UpdateDelegationTargetForMouseInput.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     IsServiceSession @ 0x14012AA64 (IsServiceSession.c)
 */

__int64 IsCurrentSessionServiceSession()
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return IsServiceSession(CurrentWin32kSessionId);
}
