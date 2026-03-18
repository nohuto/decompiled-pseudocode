/*
 * XREFs of Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback @ 0x140067A7C
 * Callers:
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067A44 (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SavePairedAdapterInRemoteSession__private_descriptor);
}
