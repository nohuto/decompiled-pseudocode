/*
 * XREFs of PopBroadcastSessionInfo @ 0x140A2C8CC
 * Callers:
 *     PopWin32kPowerSettingCallback @ 0x1404B3EF0 (PopWin32kPowerSettingCallback.c)
 *     PopPowerSourceChangeCallback @ 0x1404D7ED0 (PopPowerSourceChangeCallback.c)
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140740F60 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopSetAwayModeStatus @ 0x140747C54 (PopSetAwayModeStatus.c)
 *     PopAdaptivePowerSettingCallback @ 0x140752910 (PopAdaptivePowerSettingCallback.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopEvaluateInputSuppressionAction @ 0x140A854CC (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x140A2C928 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-10h]

  result = 0LL;
  v4 = 0LL;
  LODWORD(v7) = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    LODWORD(v5) = a1;
    DWORD2(v5) = a2;
    *(_QWORD *)&v6 = a3;
    BYTE4(v5) = 0;
    DWORD2(v6) = 0;
    v7 = 0LL;
    return PopInvokeWin32Callout(5LL, &v4, 2LL);
  }
  return result;
}
