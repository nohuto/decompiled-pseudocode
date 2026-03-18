/*
 * XREFs of Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F6654
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x14056BBB0 (Amd64InitializeUncoreProfiling.c)
 *     DefaultInitializeProfiling @ 0x140B4CA20 (DefaultInitializeProfiling.c)
 *     InitCounterGroupAps @ 0x140B4CBF8 (InitCounterGroupAps.c)
 *     HalpInitializeProfiling @ 0x140B4EAB8 (HalpInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140B50EA0 (Amd64InitializeProfiling.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledFallback @ 0x1404F668C (Feature_Test52061194__private_IsEnabledFallback.c)
 */

__int64 Feature_Test52061194__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Test52061194__private_featureState & 0x10) != 0 )
    return Feature_Test52061194__private_featureState & 1;
  else
    return Feature_Test52061194__private_IsEnabledFallback(
             (unsigned int)Feature_Test52061194__private_featureState,
             3LL);
}
