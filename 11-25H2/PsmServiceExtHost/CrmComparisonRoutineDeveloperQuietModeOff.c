/*
 * XREFs of CrmComparisonRoutineDeveloperQuietModeOff @ 0x18006FED0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline @ 0x18006FF04 (Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CrmComparisonRoutineDeveloperQuietModeOff(__int64 a1, _DWORD *a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v4; // ecx

  IsEnabledDeviceUsageNoInline = Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline();
  v4 = 0;
  if ( !IsEnabledDeviceUsageNoInline || !*a2 || !a2[2] )
    return 2;
  return v4;
}
