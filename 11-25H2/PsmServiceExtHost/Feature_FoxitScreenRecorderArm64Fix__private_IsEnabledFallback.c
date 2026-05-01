/*
 * XREFs of Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback @ 0x180098F50
 * Callers:
 *     Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x180098F20 (Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_FoxitScreenRecorderArm64Fix__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_FoxitScreenRecorderArm64Fix__private_descriptor);
}
