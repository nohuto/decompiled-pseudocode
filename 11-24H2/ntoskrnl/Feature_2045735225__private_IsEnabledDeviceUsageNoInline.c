/*
 * XREFs of Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC
 * Callers:
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140AD7224 (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_2045735225__private_IsEnabledFallback @ 0x140605A24 (Feature_2045735225__private_IsEnabledFallback.c)
 */

__int64 Feature_2045735225__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2045735225__private_featureState & 0x10) != 0 )
    return Feature_2045735225__private_featureState & 1;
  else
    return Feature_2045735225__private_IsEnabledFallback((unsigned int)Feature_2045735225__private_featureState, 3LL);
}
