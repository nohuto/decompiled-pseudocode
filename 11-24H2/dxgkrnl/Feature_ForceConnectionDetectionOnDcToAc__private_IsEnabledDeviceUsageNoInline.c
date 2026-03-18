/*
 * XREFs of Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C
 * Callers:
 *     DpiSessionCreateCallback @ 0x1403DAA9C (DpiSessionCreateCallback.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x14042BBC4 (DpiPdoRemovePdo.c)
 *     DpiInitializeGlobalState @ 0x1404359E8 (DpiInitializeGlobalState.c)
 * Callees:
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback @ 0x14007C844 (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback.c)
 */

__int64 Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 0x10) != 0 )
    return Feature_ForceConnectionDetectionOnDcToAc__private_featureState & 1;
  else
    return Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledFallback(
             (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_featureState,
             3LL);
}
