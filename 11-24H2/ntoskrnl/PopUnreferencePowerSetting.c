/*
 * XREFs of PopUnreferencePowerSetting @ 0x1409BDE74
 * Callers:
 *     PopFreeRegistration @ 0x140751344 (PopFreeRegistration.c)
 *     PopSetPowerSettingValue @ 0x1409BC864 (PopSetPowerSettingValue.c)
 *     PopCallPowerSettingCallback @ 0x1409BDC9C (PopCallPowerSettingCallback.c)
 *     PopMarshalSettingValues @ 0x1409BDF78 (PopMarshalSettingValues.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnreferencePowerSetting(_DWORD *a1)
{
  if ( (*a1)-- == 1 )
    ExFreePoolWithTag(a1, 0x74655350u);
}
