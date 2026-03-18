/*
 * XREFs of Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline @ 0x140678244
 * Callers:
 *     MiMapExParametersInitialize @ 0x14099F5A8 (MiMapExParametersInitialize.c)
 * Callees:
 *     Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback @ 0x14067827C (Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_VBSEnclavesForARM64EC__private_featureState & 0x10) != 0 )
    return Feature_Servicing_VBSEnclavesForARM64EC__private_featureState & 1;
  else
    return Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_VBSEnclavesForARM64EC__private_featureState,
             3LL);
}
