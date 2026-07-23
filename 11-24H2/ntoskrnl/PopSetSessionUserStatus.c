/*
 * XREFs of PopSetSessionUserStatus @ 0x1409A2C18
 * Callers:
 *     PopSessionDisconnected @ 0x1409A0C38 (PopSessionDisconnected.c)
 *     PopAdaptiveGetConsoleSessionState @ 0x1409A2014 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveGetRemoteSessionState @ 0x1409A39B8 (PopAdaptiveGetRemoteSessionState.c)
 * Callees:
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1409A0CBC (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopSetGlobalUserStatus @ 0x1409A357C (PopSetGlobalUserStatus.c)
 *     PopPrintUserActivityPresence @ 0x1409A3634 (PopPrintUserActivityPresence.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( dword_140F07678 == a1 && a1 != -1 )
    dword_140F0767C = a2;
  v6 = a2;
  v4 = PopPrintUserActivityPresence(a2);
  PopPrintEx(3, (int)"PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0LL, 4LL, &v6);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1LL, 4LL, &v6);
  return PopSetGlobalUserStatus(a1, a2);
}
