/*
 * XREFs of Feature_MyTimeShutDownArm64Fix__private_IsEnabledFallback @ 0x180098F94
 * Callers:
 *     Feature_MyTimeShutDownArm64Fix__private_IsEnabledDeviceUsageNoInline @ 0x180098F64 (Feature_MyTimeShutDownArm64Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_MyTimeShutDownArm64Fix__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_MyTimeShutDownArm64Fix__private_descriptor);
}
