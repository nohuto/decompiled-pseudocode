/*
 * XREFs of Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline @ 0x1405D5174
 * Callers:
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledFallback @ 0x1405D51AC (Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledFallback.c)
 */

__int64 Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UnparkPCoresOnUnimportantUtility__private_featureState & 0x10) != 0 )
    return Feature_UnparkPCoresOnUnimportantUtility__private_featureState & 1;
  else
    return Feature_UnparkPCoresOnUnimportantUtility__private_IsEnabledFallback(
             (unsigned int)Feature_UnparkPCoresOnUnimportantUtility__private_featureState,
             3LL);
}
