/*
 * XREFs of Feature_DisableCrcChecksumBoot__private_IsEnabledFallback @ 0x140697C64
 * Callers:
 *     Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline @ 0x140697C2C (Feature_DisableCrcChecksumBoot__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DisableCrcChecksumBoot__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_DisableCrcChecksumBoot__private_descriptor);
}
