/*
 * XREFs of ApiSetpIsFeatureEnabled @ 0x140660990
 * Callers:
 *     ApiSetQuerySchemaInfo2_V7 @ 0x14065F40C (ApiSetQuerySchemaInfo2_V7.c)
 *     ApiSetpResolveHost @ 0x14065FB18 (ApiSetpResolveHost.c)
 * Callees:
 *     Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline @ 0x1406609D0 (Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x140660A24 (Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall ApiSetpIsFeatureEnabled(int a1)
{
  int v1; // eax
  int IsEnabledDeviceUsageNoInline; // eax

  if ( a1 == 57880228 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DriverStore_EnumerateBlockedDrivers__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_6;
  }
  if ( a1 == 60895909 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DriverSetup_ReofferFingerprinting_v2__private_IsEnabledDeviceUsageNoInline();
LABEL_6:
    v1 = (IsEnabledDeviceUsageNoInline != 0) + 1;
    return v1 == 2;
  }
  v1 = 0;
  return v1 == 2;
}
