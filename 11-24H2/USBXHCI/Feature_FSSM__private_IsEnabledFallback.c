/*
 * XREFs of Feature_FSSM__private_IsEnabledFallback @ 0x140043DE4
 * Callers:
 *     Feature_FSSM__private_IsEnabledDeviceUsageNoInline @ 0x140043DAC (Feature_FSSM__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400459F8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FSSM__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_FSSM__private_descriptor);
}
