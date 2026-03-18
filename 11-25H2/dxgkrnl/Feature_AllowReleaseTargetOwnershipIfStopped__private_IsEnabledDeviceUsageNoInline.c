/*
 * XREFs of Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledDeviceUsageNoInline @ 0x14006E9F0
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBF58 (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 * Callees:
 *     Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledFallback @ 0x14006EA28 (Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledFallback.c)
 */

__int64 Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AllowReleaseTargetOwnershipIfStopped__private_featureState & 0x10) != 0 )
    return Feature_AllowReleaseTargetOwnershipIfStopped__private_featureState & 1;
  else
    return Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledFallback(
             (unsigned int)Feature_AllowReleaseTargetOwnershipIfStopped__private_featureState,
             3LL);
}
