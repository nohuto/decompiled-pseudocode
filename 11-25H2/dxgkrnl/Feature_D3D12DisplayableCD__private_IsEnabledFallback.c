/*
 * XREFs of Feature_D3D12DisplayableCD__private_IsEnabledFallback @ 0x14006BB6C
 * Callers:
 *     Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline @ 0x14006BB34 (Feature_D3D12DisplayableCD__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_D3D12DisplayableCD__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_D3D12DisplayableCD__private_descriptor);
}
