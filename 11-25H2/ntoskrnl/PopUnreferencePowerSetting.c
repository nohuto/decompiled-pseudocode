/*
 * XREFs of PopUnreferencePowerSetting @ 0x140966164
 * Callers:
 *     PopFreeRegistration @ 0x140745274 (PopFreeRegistration.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x140965F8C (PopCallPowerSettingCallback.c)
 *     PopMarshalSettingValues @ 0x140966268 (PopMarshalSettingValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}
