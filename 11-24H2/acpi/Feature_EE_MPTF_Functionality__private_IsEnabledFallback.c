/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x140064618
 * Callers:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1400645E0 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006329C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EE_MPTF_Functionality__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a);
}
