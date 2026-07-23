/*
 * XREFs of PopBroadcastSessionInfo @ 0x140A90620
 * Callers:
 *     PopWin32kPowerSettingCallback @ 0x1404AE090 (PopWin32kPowerSettingCallback.c)
 *     PopPowerSourceChangeCallback @ 0x1404D01C0 (PopPowerSourceChangeCallback.c)
 *     PopLidSwitchReliabilityUpdateCallback @ 0x14074B360 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopSetAwayModeStatus @ 0x140752064 (PopSetAwayModeStatus.c)
 *     PopAdaptivePowerSettingCallback @ 0x14075E310 (PopAdaptivePowerSettingCallback.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopEvaluateInputSuppressionAction @ 0x140AC5570 (PopEvaluateInputSuppressionAction.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
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
    return PopInvokeWin32Callout(5u, &v4, 2, 0LL);
  }
  return result;
}
