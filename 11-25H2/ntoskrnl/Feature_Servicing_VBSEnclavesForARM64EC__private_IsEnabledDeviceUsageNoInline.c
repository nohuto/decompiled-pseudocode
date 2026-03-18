/*
 * XREFs of Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledDeviceUsageNoInline @ 0x14066C8F4
 * Callers:
 *     MiMapExParametersInitialize @ 0x1408FB954 (MiMapExParametersInitialize.c)
 * Callees:
 *     Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback @ 0x14066C92C (Feature_Servicing_VBSEnclavesForARM64EC__private_IsEnabledFallback.c)
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
