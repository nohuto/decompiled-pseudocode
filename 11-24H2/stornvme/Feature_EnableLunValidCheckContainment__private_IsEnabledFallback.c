/*
 * XREFs of Feature_EnableLunValidCheckContainment__private_IsEnabledFallback @ 0x14001F758
 * Callers:
 *     Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline @ 0x14001F720 (Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140019BA8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_EnableLunValidCheckContainment__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_EnableLunValidCheckContainment__private_descriptor);
}
