/*
 * XREFs of Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140605A94
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     Feature_871661881__private_IsEnabledFallback @ 0x140605ACC (Feature_871661881__private_IsEnabledFallback.c)
 */

__int64 Feature_871661881__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_871661881__private_featureState & 0x10) != 0 )
    return Feature_871661881__private_featureState & 1;
  else
    return Feature_871661881__private_IsEnabledFallback((unsigned int)Feature_871661881__private_featureState, 3LL);
}
