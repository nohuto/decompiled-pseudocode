/*
 * XREFs of Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline @ 0x14064A89C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 * Callees:
 *     Feature_AddMemInfoToBootTrace__private_IsEnabledFallback @ 0x14064A8D4 (Feature_AddMemInfoToBootTrace__private_IsEnabledFallback.c)
 */

__int64 Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AddMemInfoToBootTrace__private_featureState & 0x10) != 0 )
    return Feature_AddMemInfoToBootTrace__private_featureState & 1;
  else
    return Feature_AddMemInfoToBootTrace__private_IsEnabledFallback(
             (unsigned int)Feature_AddMemInfoToBootTrace__private_featureState,
             3LL);
}
