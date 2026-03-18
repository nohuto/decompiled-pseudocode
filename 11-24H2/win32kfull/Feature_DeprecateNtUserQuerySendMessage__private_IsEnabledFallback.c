/*
 * XREFs of Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback @ 0x140292560
 * Callers:
 *     Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline @ 0x140292528 (Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_DeprecateNtUserQuerySendMessage__private_descriptor);
}
