/*
 * XREFs of Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     PsBootPhaseComplete @ 0x1407719D8 (PsBootPhaseComplete.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_ShadowAdmin__private_IsEnabledFallback @ 0x1405E20C4 (Feature_ShadowAdmin__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdmin__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdmin__private_featureState & 1;
  else
    return Feature_ShadowAdmin__private_IsEnabledFallback((unsigned int)Feature_ShadowAdmin__private_featureState, 3LL);
}
