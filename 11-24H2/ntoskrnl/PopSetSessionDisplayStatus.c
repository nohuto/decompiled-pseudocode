/*
 * XREFs of PopSetSessionDisplayStatus @ 0x1409BA88C
 * Callers:
 *     PopSessionConnectedV2 @ 0x14075F844 (PopSessionConnectedV2.c)
 *     PopSetDisplayStatus @ 0x1409BA3E8 (PopSetDisplayStatus.c)
 *     PopSessionDisconnected @ 0x1409BA5E8 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x140ACB088 (PopSessionConnected.c)
 * Callees:
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x1409BA66C (PopDiagTraceSessionStates.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140AF0CF0;
  PopPrintEx(3, (int)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0LL, 4LL, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1LL, 4LL, &v8);
}
