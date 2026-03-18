/*
 * XREFs of Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback @ 0x14068AC10
 * Callers:
 *     Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x14068ABD8 (Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D57A0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_FoxitScreenRecorderArm64Fix__private_descriptor);
}
