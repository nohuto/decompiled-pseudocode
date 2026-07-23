/*
 * XREFs of Feature_TestValidate__private_ReportUsage @ 0x14066905C
 * Callers:
 *     Feature_TestValidate_IsEnabledWithReporting @ 0x140669040 (Feature_TestValidate_IsEnabledWithReporting.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14053A3BC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     Feature_TestValidate__private_ReportUsageFallback @ 0x1406690DC (Feature_TestValidate__private_ReportUsageFallback.c)
 */

__int64 __fastcall Feature_TestValidate__private_ReportUsage(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+38h] [rbp+10h]

  if ( a1 )
  {
    HIDWORD(v3) = 0;
    if ( a1 == 3 )
    {
      result = (unsigned int)Feature_TestValidate__private_featureState;
      LODWORD(v3) = Feature_TestValidate__private_featureState;
      if ( (Feature_TestValidate__private_featureState & 0x10) != 0 )
        return result;
      v2 = 3LL;
      return Feature_TestValidate__private_ReportUsageFallback(v3, v2);
    }
    if ( a1 != 4 )
      return wil_details_FeatureReporting_ReportUsageToService(
               (__int64)&Feature_TestValidate__private_descriptor,
               1,
               a1);
    result = (unsigned int)Feature_TestValidate__private_featureState;
    LODWORD(v3) = Feature_TestValidate__private_featureState;
    if ( (Feature_TestValidate__private_featureState & 0x20) == 0 )
    {
      v2 = 4LL;
      return Feature_TestValidate__private_ReportUsageFallback(v3, v2);
    }
  }
  return result;
}
