/*
 * XREFs of Feature_Enable3x4StagingControls__private_IsEnabledFallback @ 0x1400903A0
 * Callers:
 *     Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline @ 0x140090368 (Feature_Enable3x4StagingControls__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Enable3x4StagingControls__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Enable3x4StagingControls__private_descriptor);
}
