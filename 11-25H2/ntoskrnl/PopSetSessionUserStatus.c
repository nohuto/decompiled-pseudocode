/*
 * XREFs of PopSetSessionUserStatus @ 0x140964818
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x140963C14 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x14096565C (PopAdaptiveGetRemoteSessionState.c)
 *     PopSessionDisconnected @ 0x140A22878 (PopSessionDisconnected.c)
 * Callees:
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopSetGlobalUserStatus @ 0x14096517C (PopSetGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x140965234 (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_140F06D58 == a1 && a1 != -1 )
    dword_140F06D5C = a2;
  v6 = a2;
  v4 = PopPrintUserActivityPresence(a2);
  PopPrintEx(3, (int)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0LL, 4LL, &v6);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1LL, 4LL, &v6);
  return PopSetGlobalUserStatus(a1, a2);
}
