/*
 * XREFs of Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405D28DC
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x140A4706C (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC66D0 (PpmPerfUpdateDomainPolicy.c)
 *     PspSetProcessPpmPolicy @ 0x140ACB960 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback @ 0x1405D2914 (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableUserPresenceQosByPolicy__private_featureState & 0x10) != 0 )
    return Feature_DisableUserPresenceQosByPolicy__private_featureState & 1;
  else
    return Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_DisableUserPresenceQosByPolicy__private_featureState,
             3LL);
}
