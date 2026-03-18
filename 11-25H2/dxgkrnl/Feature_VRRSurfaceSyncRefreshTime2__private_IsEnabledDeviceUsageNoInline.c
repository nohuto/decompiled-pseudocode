/*
 * XREFs of Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline @ 0x14009847C
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x14005EB20 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledFallback @ 0x1400984B4 (Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledFallback.c)
 */

__int64 Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VRRSurfaceSyncRefreshTime2__private_featureState & 0x10) != 0 )
    return Feature_VRRSurfaceSyncRefreshTime2__private_featureState & 1;
  else
    return Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledFallback(
             (unsigned int)Feature_VRRSurfaceSyncRefreshTime2__private_featureState,
             3LL);
}
