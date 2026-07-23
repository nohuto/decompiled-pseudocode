/*
 * XREFs of Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline @ 0x140668CB8
 * Callers:
 *     Feature_TestUex12_IsEnabledWithReporting @ 0x140668C70 (Feature_TestUex12_IsEnabledWithReporting.c)
 * Callees:
 *     Feature_TestUex12__private_IsEnabledFallback @ 0x140668D28 (Feature_TestUex12__private_IsEnabledFallback.c)
 */

__int64 Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline()
{
  if ( (Feature_TestUex12__private_featureState & 0x20) != 0 )
    return Feature_TestUex12__private_featureState & 1;
  else
    return Feature_TestUex12__private_IsEnabledFallback((unsigned int)Feature_TestUex12__private_featureState, 4LL);
}
