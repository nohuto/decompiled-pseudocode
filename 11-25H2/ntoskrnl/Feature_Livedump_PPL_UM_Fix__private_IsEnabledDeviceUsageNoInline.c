/*
 * XREFs of Feature_Livedump_PPL_UM_Fix__private_IsEnabledDeviceUsageNoInline @ 0x14059429C
 * Callers:
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 * Callees:
 *     Feature_Livedump_PPL_UM_Fix__private_IsEnabledFallback @ 0x1405942D4 (Feature_Livedump_PPL_UM_Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_Livedump_PPL_UM_Fix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Livedump_PPL_UM_Fix__private_featureState & 0x10) != 0 )
    return Feature_Livedump_PPL_UM_Fix__private_featureState & 1;
  else
    return Feature_Livedump_PPL_UM_Fix__private_IsEnabledFallback(
             (unsigned int)Feature_Livedump_PPL_UM_Fix__private_featureState,
             3LL);
}
