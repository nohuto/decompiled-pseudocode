/*
 * XREFs of Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline @ 0x1406688C0
 * Callers:
 *     Feature_TestLoc02_IsEnabledWithReporting @ 0x140668840 (Feature_TestLoc02_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestLoc02__private_IsEnabledFallback @ 0x1406688F8 (Feature_TestLoc02__private_IsEnabledFallback.c)
 */

__int64 Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TestLoc02__private_featureState & 0x10) != 0 )
    return Feature_TestLoc02__private_featureState & 1;
  else
    return Feature_TestLoc02__private_IsEnabledFallback((unsigned int)Feature_TestLoc02__private_featureState, 3LL);
}
