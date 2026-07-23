/*
 * XREFs of Feature_DisableUserPresenceQosByPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1405CFFFC
 * Callers:
 *     PpmCompareAndApplyPolicySettings @ 0x140A3CFDC (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PspSetProcessPpmPolicy @ 0x140AC95E0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback @ 0x1405D0034 (Feature_DisableUserPresenceQosByPolicy__private_IsEnabledFallback.c)
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
