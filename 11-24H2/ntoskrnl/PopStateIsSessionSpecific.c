/*
 * XREFs of PopStateIsSessionSpecific @ 0x1409BCC68
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409BAE7C (PopGetSettingNotificationName.c)
 *     PopSetNewPolicyValue @ 0x1409BC67C (PopSetNewPolicyValue.c)
 *     PopGetListHead @ 0x1409BC7F4 (PopGetListHead.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  unsigned int i; // r8d
  GUID *v4; // r10
  __int64 v5; // rcx

  v1 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v4 = PopSessionSpecificGuids[i];
    v5 = *(_QWORD *)&v4->Data1 - *a1;
    if ( *(_QWORD *)&v4->Data1 == *a1 )
      v5 = *(_QWORD *)v4->Data4 - a1[1];
    if ( !v5 )
      return 1;
  }
  return v1;
}
