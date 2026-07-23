/*
 * XREFs of Feature_1462962491__private_IsEnabledDeviceUsageNoInline @ 0x140659108
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x1407C51A0 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     Feature_1462962491__private_IsEnabledFallback @ 0x140659140 (Feature_1462962491__private_IsEnabledFallback.c)
 */

__int64 Feature_1462962491__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1462962491__private_featureState & 0x10) != 0 )
    return Feature_1462962491__private_featureState & 1;
  else
    return Feature_1462962491__private_IsEnabledFallback((unsigned int)Feature_1462962491__private_featureState, 3LL);
}
