/*
 * XREFs of Feature_EE_MPTF_Functionality__private_IsEnabledFallback @ 0x1404F6FE4
 * Callers:
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404CA820 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EE_MPTF_Functionality__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_EE_MPTF_Functionality__private_descriptor);
}
