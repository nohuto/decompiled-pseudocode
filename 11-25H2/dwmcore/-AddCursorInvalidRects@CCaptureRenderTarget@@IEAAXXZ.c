/*
 * XREFs of ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x18023F8D8
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1800C4140 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 */

void __fastcall CCaptureRenderTarget::AddCursorInvalidRects(CCaptureRenderTarget *this)
{
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
    CCaptureRenderTarget::AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_On(this);
  else
    CCaptureRenderTarget::AddCursorInvalidRects_Feature_FixCaptureMagnifierCursors_Off(this);
}
