/*
 * XREFs of Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline @ 0x140292528
 * Callers:
 *     NtUserQuerySendMessage @ 0x14029A460 (NtUserQuerySendMessage.c)
 * Callees:
 *     Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback @ 0x140292560 (Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback.c)
 */

__int64 Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DeprecateNtUserQuerySendMessage__private_featureState & 0x10) != 0 )
    return Feature_DeprecateNtUserQuerySendMessage__private_featureState & 1;
  else
    return Feature_DeprecateNtUserQuerySendMessage__private_IsEnabledFallback(
             (unsigned int)Feature_DeprecateNtUserQuerySendMessage__private_featureState,
             3LL);
}
