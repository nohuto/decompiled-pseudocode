/*
 * XREFs of Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CFD88
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 *     PopFxProcessWorkPool @ 0x1404EB530 (PopFxProcessWorkPool.c)
 * Callees:
 *     Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledFallback @ 0x1405CFDC0 (Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PofxCriticalRegionFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PofxCriticalRegionFix__private_featureState & 1;
  else
    return Feature_Servicing_PofxCriticalRegionFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PofxCriticalRegionFix__private_featureState,
             3LL);
}
