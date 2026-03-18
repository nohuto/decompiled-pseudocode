/*
 * XREFs of Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline @ 0x140090C04
 * Callers:
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140321514 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledFallback @ 0x140090C3C (Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledFallback.c)
 */

__int64 Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UpdateContentResOnAllPathsShrink__private_featureState & 0x10) != 0 )
    return Feature_UpdateContentResOnAllPathsShrink__private_featureState & 1;
  else
    return Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledFallback(
             (unsigned int)Feature_UpdateContentResOnAllPathsShrink__private_featureState,
             3LL);
}
