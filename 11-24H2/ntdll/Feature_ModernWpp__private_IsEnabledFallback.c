/*
 * XREFs of Feature_ModernWpp__private_IsEnabledFallback @ 0x18015A370
 * Callers:
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x18015A340 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_ModernWpp__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ModernWpp__private_descriptor);
}
