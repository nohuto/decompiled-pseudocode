/*
 * XREFs of Feature_2077227322__private_IsEnabledFallback @ 0x140606824
 * Callers:
 *     Feature_2077227322__private_IsEnabledDeviceUsageNoInline @ 0x1406067EC (Feature_2077227322__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2077227322__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_2077227322__private_descriptor);
}
