/*
 * XREFs of Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline @ 0x14008B8E4
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     Feature_EnableIddCx111__private_IsEnabledFallback @ 0x14008B91C (Feature_EnableIddCx111__private_IsEnabledFallback.c)
 */

__int64 Feature_EnableIddCx111__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EnableIddCx111__private_featureState & 0x10) != 0 )
    return Feature_EnableIddCx111__private_featureState & 1;
  else
    return Feature_EnableIddCx111__private_IsEnabledFallback(
             (unsigned int)Feature_EnableIddCx111__private_featureState,
             3LL);
}
