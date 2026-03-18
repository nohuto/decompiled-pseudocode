/*
 * XREFs of PopStateIsSessionSpecific @ 0x140964EB8
 * Callers:
 *     PopSetNewPolicyValue @ 0x1409648CC (PopSetNewPolicyValue.c)
 *     PopGetListHead @ 0x140964A44 (PopGetListHead.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
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
