/*
 * XREFs of Feature_DoYouCopyFix__private_IsEnabledDeviceUsageNoInline @ 0x14068AB30
 * Callers:
 *     SdbpGetVelocityState @ 0x1407F5134 (SdbpGetVelocityState.c)
 * Callees:
 *     Feature_DoYouCopyFix__private_IsEnabledFallback @ 0x14068AB68 (Feature_DoYouCopyFix__private_IsEnabledFallback.c)
 */

__int64 Feature_DoYouCopyFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DoYouCopyFix__private_featureState & 0x10) != 0 )
    return Feature_DoYouCopyFix__private_featureState & 1;
  else
    return Feature_DoYouCopyFix__private_IsEnabledFallback(
             (unsigned int)Feature_DoYouCopyFix__private_featureState,
             3LL);
}
