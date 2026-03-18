/*
 * XREFs of Feature_CompatPreallocatedVelocity55922076__private_IsEnabledFallback @ 0x140695F10
 * Callers:
 *     Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline @ 0x140695ED8 (Feature_CompatPreallocatedVelocity55922076__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404D17E0 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompatPreallocatedVelocity55922076__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_CompatPreallocatedVelocity55922076__private_descriptor,
           a4);
}
