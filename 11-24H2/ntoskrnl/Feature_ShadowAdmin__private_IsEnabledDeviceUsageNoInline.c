/*
 * XREFs of Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E4B64
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_ShadowAdmin__private_IsEnabledFallback @ 0x1405E4B9C (Feature_ShadowAdmin__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdmin__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdmin__private_featureState & 1;
  else
    return Feature_ShadowAdmin__private_IsEnabledFallback((unsigned int)Feature_ShadowAdmin__private_featureState, 3LL);
}
