/*
 * XREFs of Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline @ 0x1400943B4
 * Callers:
 *     ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14005E0EC (-QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z.c)
 * Callees:
 *     Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback @ 0x1400943EC (Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback.c)
 */

__int64 Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_QueryPresentStatsDWM_KasanFix__private_featureState & 0x10) != 0 )
    return Feature_QueryPresentStatsDWM_KasanFix__private_featureState & 1;
  else
    return Feature_QueryPresentStatsDWM_KasanFix__private_IsEnabledFallback(
             (unsigned int)Feature_QueryPresentStatsDWM_KasanFix__private_featureState,
             3LL);
}
