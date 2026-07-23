/*
 * XREFs of Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline @ 0x140668A30
 * Callers:
 *     Feature_TestLoc03_IsEnabledWithReporting @ 0x1406689B0 (Feature_TestLoc03_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestLoc03__private_IsEnabledFallback @ 0x140668A68 (Feature_TestLoc03__private_IsEnabledFallback.c)
 */

__int64 Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TestLoc03__private_featureState & 0x10) != 0 )
    return Feature_TestLoc03__private_featureState & 1;
  else
    return Feature_TestLoc03__private_IsEnabledFallback((unsigned int)Feature_TestLoc03__private_featureState, 3LL);
}
