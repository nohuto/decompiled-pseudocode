/*
 * XREFs of Feature_PdcResiliencyV2__private_IsEnabledFallback @ 0x1405D5800
 * Callers:
 *     Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D57C8 (Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PdcResiliencyV2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_PdcResiliencyV2__private_descriptor);
}
