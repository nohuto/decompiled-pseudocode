/*
 * XREFs of Feature_ConfAccImp__private_IsEnabledOtherReporting @ 0x14066795C
 * Callers:
 *     Feature_ConfAccImp_IsEnabledWithReporting @ 0x140667850 (Feature_ConfAccImp_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_ConfAccImp__private_IsEnabledFallback @ 0x140667908 (Feature_ConfAccImp__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ConfAccImp__private_IsEnabledOtherReporting(unsigned int a1)
{
  char v1; // bl

  v1 = Feature_ConfAccImp__private_featureState;
  if ( (Feature_ConfAccImp__private_featureState & 2) == 0 )
    return Feature_ConfAccImp__private_IsEnabledFallback((unsigned int)Feature_ConfAccImp__private_featureState, a1);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ConfAccImp__private_descriptor,
    Feature_ConfAccImp__private_featureState,
    a1);
  return v1 & 1;
}
