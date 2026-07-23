/*
 * XREFs of Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback @ 0x1405CD1E0
 * Callers:
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1405CD1A8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_BatteryTestExempt__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_BatteryTestExempt__private_descriptor);
}
