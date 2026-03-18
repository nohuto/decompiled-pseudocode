/*
 * XREFs of Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback @ 0x140094440
 * Callers:
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x140094408 (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SafeDodBltQueueAccesses__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SafeDodBltQueueAccesses__private_descriptor);
}
