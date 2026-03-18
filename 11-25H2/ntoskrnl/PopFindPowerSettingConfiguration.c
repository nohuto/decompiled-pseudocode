/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x140964F00
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x1404765A0 (PopInitilizeAcDcSettings.c)
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     PopGetPowerSettingValue @ 0x14049253C (PopGetPowerSettingValue.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingValue @ 0x140A6C700 (PopGetSettingValue.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF530 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x140964A44 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x140964EB8 (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  PVOID *ListHead; // rdi
  PVOID *v5; // r11
  __int64 v6; // rax

  ListHead = PopGetListHead(a1);
  if ( PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (PVOID *)*v5;
    }
  }
  else
  {
    while ( v5 != ListHead )
    {
      v6 = (__int64)v5[4] - *a1;
      if ( !v6 )
        v6 = (__int64)v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (PVOID *)*v5;
    }
  }
  return 0LL;
}
