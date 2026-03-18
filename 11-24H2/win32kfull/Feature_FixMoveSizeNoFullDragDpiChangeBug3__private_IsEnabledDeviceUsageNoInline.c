/*
 * XREFs of Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140274D28
 * Callers:
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x140230810 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x140281810 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 * Callees:
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x140274D60 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 0x10) != 0 )
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 1;
  else
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback(
             (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState,
             3LL);
}
