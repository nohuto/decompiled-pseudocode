/*
 * XREFs of PopSetSessionDisplayStatus @ 0x140A229B4
 * Callers:
 *     PopSetDisplayStatus @ 0x140A22500 (PopSetDisplayStatus.c)
 *     PopSessionConnected @ 0x140A227C8 (PopSessionConnected.c)
 *     PopSessionDisconnected @ 0x140A22878 (PopSessionDisconnected.c)
 * Callees:
 *     PopPrintEx @ 0x1403A9514 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 */

__int64 __fastcall PopSetSessionDisplayStatus(unsigned int a1, int a2, char a3)
{
  __int64 *v6; // r8
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISPLAY_STATE, a1, a2);
  v6 = (__int64 *)">>>>>";
  if ( !a3 )
    v6 = qword_140ADE800;
  PopPrintEx(3, (int)"PopAdaptive: %sSession %u display state: %u\n", v6, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 0, 4u, &v8);
  return PopSetPowerSettingValue(&GUID_SESSION_DISPLAY_STATUS, a1, 1, 4u, &v8);
}
