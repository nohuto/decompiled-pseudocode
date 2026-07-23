/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x1409A3300
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x1403E66D0 (PopInitilizeAcDcSettings.c)
 *     PopGetPowerSettingValue @ 0x14048C3EC (PopGetPowerSettingValue.c)
 *     PopGetSettingValue @ 0x1409A1370 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x1409A14CC (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     PopQueryPowerSettingUlong @ 0x140AAF490 (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x1409A2E44 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x1409A32B8 (PopStateIsSessionSpecific.c)
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
