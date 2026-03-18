/*
 * XREFs of Feature_UMPERS__private_IsEnabledFallback @ 0x14003F5AC
 * Callers:
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14003FD74 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UMPERS__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UMPERS__private_descriptor);
}
