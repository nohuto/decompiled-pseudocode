/*
 * XREFs of Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405D8BC8
 * Callers:
 *     SepOneWayLinkLogonSessions @ 0x1405FC0DC (SepOneWayLinkLogonSessions.c)
 *     PsBootPhaseComplete @ 0x140761DF8 (PsBootPhaseComplete.c)
 *     SepDeReferenceLogonSession @ 0x1409A78B8 (SepDeReferenceLogonSession.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     Feature_ShadowAdmin__private_IsEnabledFallback @ 0x1405D8C00 (Feature_ShadowAdmin__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdmin__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdmin__private_featureState & 1;
  else
    return Feature_ShadowAdmin__private_IsEnabledFallback((unsigned int)Feature_ShadowAdmin__private_featureState, 3LL);
}
