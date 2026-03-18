/*
 * XREFs of Feature_FixMaxWindowClipWhenMoved__private_IsEnabledDeviceUsageNoInline @ 0x14026FB38
 * Callers:
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14022ABC8 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     Feature_FixMaxWindowClipWhenMoved__private_IsEnabledFallback @ 0x14026FB70 (Feature_FixMaxWindowClipWhenMoved__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMaxWindowClipWhenMoved__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMaxWindowClipWhenMoved__private_featureState & 0x10) != 0 )
    return Feature_FixMaxWindowClipWhenMoved__private_featureState & 1;
  else
    return Feature_FixMaxWindowClipWhenMoved__private_IsEnabledFallback(
             (unsigned int)Feature_FixMaxWindowClipWhenMoved__private_featureState,
             3LL);
}
