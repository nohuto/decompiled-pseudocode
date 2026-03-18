/*
 * XREFs of ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18023F910
 * Callers:
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802206E0 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@details@wil@@QEAA_NXZ @ 0x180266714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FixCaptureMagnifierCursors@@@deta.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DE74 (-RenderCursors_Feature_FixCaptureMagnifierCursors_On@CCaptureRenderTarget@@IEAAJPEAVCDrawingCont.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderCursors(CCaptureRenderTarget *this, struct CDrawingContext *a2)
{
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FixCaptureMagnifierCursors>::GetImpl'::`2'::impl) )
    return CCaptureRenderTarget::RenderCursors_Feature_FixCaptureMagnifierCursors_On(this, a2);
  else
    return CCaptureRenderTarget::RenderCursors_Feature_FixCaptureMagnifierCursors_Off(this, a2);
}
