/*
 * XREFs of Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline @ 0x1405CDA88
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1403B6A20 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback @ 0x1405CDAC0 (Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_CoordinatedIdleExitFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CoordinatedIdleExitFix__private_featureState & 1;
  else
    return Feature_Servicing_CoordinatedIdleExitFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CoordinatedIdleExitFix__private_featureState,
             3LL);
}
