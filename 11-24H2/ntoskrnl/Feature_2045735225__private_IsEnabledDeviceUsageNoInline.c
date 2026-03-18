/*
 * XREFs of Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406082E8
 * Callers:
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD88D0 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140AD8BA4 (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_2045735225__private_IsEnabledFallback @ 0x140608320 (Feature_2045735225__private_IsEnabledFallback.c)
 */

__int64 Feature_2045735225__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_2045735225__private_featureState & 0x10) != 0 )
    return Feature_2045735225__private_featureState & 1;
  else
    return Feature_2045735225__private_IsEnabledFallback((unsigned int)Feature_2045735225__private_featureState, 3LL);
}
