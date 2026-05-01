/*
 * XREFs of Feature_CompatPreallocatedVelocity55922077__private_IsEnabledFallback @ 0x1800992A0
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline @ 0x180099270 (Feature_CompatPreallocatedVelocity55922077__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922077__private_IsEnabledFallback(__int64 a1, int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompatPreallocatedVelocity55922077__private_descriptor);
}
