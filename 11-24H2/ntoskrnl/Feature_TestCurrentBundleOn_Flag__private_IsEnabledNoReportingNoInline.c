/*
 * XREFs of Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline @ 0x14066861C
 * Callers:
 *     CmFcDebugUpdateSystemInfo @ 0x140667398 (CmFcDebugUpdateSystemInfo.c)
 * Callees:
 *     Feature_TestCurrentBundleOn_Flag__private_IsEnabledFallback @ 0x140668600 (Feature_TestCurrentBundleOn_Flag__private_IsEnabledFallback.c)
 */

__int64 Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestCurrentBundleOn_Flag__private_featureState & 2) != 0 )
    return Feature_TestCurrentBundleOn_Flag__private_featureState & 1;
  else
    return Feature_TestCurrentBundleOn_Flag__private_IsEnabledFallback(
             (unsigned int)Feature_TestCurrentBundleOn_Flag__private_featureState,
             0);
}
