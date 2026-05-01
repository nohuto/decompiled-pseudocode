/*
 * XREFs of Feature_CompatPreallocatedVelocity55922064__private_IsEnabledFallback @ 0x180098F70
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline @ 0x180098F40 (Feature_CompatPreallocatedVelocity55922064__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922064__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompatPreallocatedVelocity55922064__private_descriptor);
}
