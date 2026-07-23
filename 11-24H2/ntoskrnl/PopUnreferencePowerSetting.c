/*
 * XREFs of PopUnreferencePowerSetting @ 0x1409A44C4
 * Callers:
 *     PopFreeRegistration @ 0x14074F664 (PopFreeRegistration.c)
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x1409A42EC (PopCallPowerSettingCallback.c)
 *     PopMarshalSettingValues @ 0x1409A45C8 (PopMarshalSettingValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}
