/*
 * XREFs of Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline @ 0x140666738
 * Callers:
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 *     CmFcInitSystem1 @ 0x140C4C340 (CmFcInitSystem1.c)
 * Callees:
 *     Feature_CmFcCallback__private_IsEnabledFallback @ 0x140666770 (Feature_CmFcCallback__private_IsEnabledFallback.c)
 */

__int64 Feature_CmFcCallback__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CmFcCallback__private_featureState & 0x10) != 0 )
    return Feature_CmFcCallback__private_featureState & 1;
  else
    return Feature_CmFcCallback__private_IsEnabledFallback(
             (unsigned int)Feature_CmFcCallback__private_featureState,
             3LL);
}
