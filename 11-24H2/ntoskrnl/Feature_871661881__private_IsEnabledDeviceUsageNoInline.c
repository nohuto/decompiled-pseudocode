/*
 * XREFs of Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140608390
 * Callers:
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     Feature_871661881__private_IsEnabledFallback @ 0x1406083C8 (Feature_871661881__private_IsEnabledFallback.c)
 */

__int64 Feature_871661881__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_871661881__private_featureState & 0x10) != 0 )
    return Feature_871661881__private_featureState & 1;
  else
    return Feature_871661881__private_IsEnabledFallback((unsigned int)Feature_871661881__private_featureState, 3LL);
}
