/*
 * XREFs of Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x14027F264
 * Callers:
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TouchpadPublicApis3__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_TouchpadPublicApis3__private_descriptor);
}
