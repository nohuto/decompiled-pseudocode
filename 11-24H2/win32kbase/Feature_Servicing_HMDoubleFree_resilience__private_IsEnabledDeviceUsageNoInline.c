/*
 * XREFs of Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1401B6074
 * Callers:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140041EC4 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 * Callees:
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback @ 0x1401B60AC (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_HMDoubleFree_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_HMDoubleFree_resilience__private_featureState & 1;
  else
    return Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_featureState,
             3LL);
}
