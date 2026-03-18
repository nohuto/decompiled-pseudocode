/*
 * XREFs of Feature_TouchpadHapticsFollowUps__private_IsEnabledDeviceUsageNoInline @ 0x1402DB8B0
 * Callers:
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 * Callees:
 *     Feature_TouchpadHapticsFollowUps__private_IsEnabledFallback @ 0x1402DB8E8 (Feature_TouchpadHapticsFollowUps__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHapticsFollowUps__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHapticsFollowUps__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHapticsFollowUps__private_featureState & 1;
  else
    return Feature_TouchpadHapticsFollowUps__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHapticsFollowUps__private_featureState,
             3LL);
}
