/*
 * XREFs of Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage @ 0x1C013BF20
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback @ 0x1C013BF58 (Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback.c)
 */

__int64 Feature_MissingShowWinEventOnUnGhost__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MissingShowWinEventOnUnGhost__private_featureState & 0x10) != 0 )
    return Feature_MissingShowWinEventOnUnGhost__private_featureState & 1;
  else
    return Feature_MissingShowWinEventOnUnGhost__private_IsEnabledFallback(
             (unsigned int)Feature_MissingShowWinEventOnUnGhost__private_featureState,
             3LL);
}
