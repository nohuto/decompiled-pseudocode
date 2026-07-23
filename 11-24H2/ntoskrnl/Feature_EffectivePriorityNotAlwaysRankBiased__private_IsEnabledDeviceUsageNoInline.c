/*
 * XREFs of Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledDeviceUsageNoInline @ 0x1405B217C
 * Callers:
 *     KiInitializeVelocity @ 0x140C2A6C8 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledFallback @ 0x1405B21B4 (Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledFallback.c)
 */

__int64 Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EffectivePriorityNotAlwaysRankBiased__private_featureState & 0x10) != 0 )
    return Feature_EffectivePriorityNotAlwaysRankBiased__private_featureState & 1;
  else
    return Feature_EffectivePriorityNotAlwaysRankBiased__private_IsEnabledFallback(
             (unsigned int)Feature_EffectivePriorityNotAlwaysRankBiased__private_featureState,
             3LL);
}
