/*
 * XREFs of Feature_TestLoc02__private_IsEnabledNoReportingNoInline @ 0x140668914
 * Callers:
 *     Feature_TestLoc02_IsEnabledWithReporting @ 0x140668840 (Feature_TestLoc02_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestLoc02__private_IsEnabledFallback @ 0x1406688F8 (Feature_TestLoc02__private_IsEnabledFallback.c)
 */

__int64 Feature_TestLoc02__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_TestLoc02__private_featureState & 2) != 0 )
    return Feature_TestLoc02__private_featureState & 1;
  else
    return Feature_TestLoc02__private_IsEnabledFallback((unsigned int)Feature_TestLoc02__private_featureState, 0);
}
