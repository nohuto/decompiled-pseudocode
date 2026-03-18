/*
 * XREFs of PopNotifyLidStateChange @ 0x140AAB888
 * Callers:
 *     PdcPoReportLidState @ 0x140AAB860 (PdcPoReportLidState.c)
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC7988 (PopPowerAggregatorForceSessionSwitch.c)
 */

__int64 __fastcall PopNotifyLidStateChange(char a1)
{
  int v1; // ebx
  bool v3; // zf
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( PopErrataReportingIncorrectLidState || PopLidOpened == a1 )
  {
LABEL_6:
    v3 = a1 == 0;
    goto LABEL_7;
  }
  PopLidOpened = a1;
  v3 = a1 == 0;
  if ( !a1 )
  {
    if ( SSHSupportIsPlatformAoAc() )
      PopPowerAggregatorForceSessionSwitch(4LL);
    goto LABEL_6;
  }
LABEL_7:
  LOBYTE(v1) = !v3;
  v5 = v1;
  PopSetPowerSettingValue(&GUID_LIDSWITCH_STATE_CHANGE, 0xFFFFFFFF, 0, 4u, &v5);
  return PopSetPowerSettingValue(&GUID_LIDSWITCH_STATE_CHANGE, 0xFFFFFFFF, 1, 4u, &v5);
}
