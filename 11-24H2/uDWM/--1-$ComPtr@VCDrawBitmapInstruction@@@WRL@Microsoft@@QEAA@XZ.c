/*
 * XREFs of ??1?$ComPtr@VCDrawBitmapInstruction@@@WRL@Microsoft@@QEAA@XZ @ 0x180086374
 * Callers:
 *     _CapturedWindowRepresentation::Create_::_1_::dtor$2 @ 0x1800F66EE (_CapturedWindowRepresentation--Create_--_1_--dtor$2.c)
 *     _CProjectionBorderManager::_GetCapturedItemRootVisual_::_1_::dtor$1 @ 0x1800F6700 (_CProjectionBorderManager--_GetCapturedItemRootVisual_--_1_--dtor$1.c)
 *     _CWindowTarget::CreateFromSharedHandle_::_1_::dtor$0 @ 0x1800F6712 (_CWindowTarget--CreateFromSharedHandle_--_1_--dtor$0.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$1 @ 0x1800F6724 (_CWindowTarget--CloneVisualTree_--_1_--dtor$1.c)
 *     _CWindowBorder::CloneVisualTree_::_1_::dtor$0 @ 0x1800F676C (_CWindowBorder--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowTarget::Create_::_1_::dtor$0 @ 0x1800F6790 (_CWindowTarget--Create_--_1_--dtor$0.c)
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x1800F680A (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _CDCompThumbnailData::EnsureThumbnailVisual_::_1_::dtor$1 @ 0x1800F681C (_CDCompThumbnailData--EnsureThumbnailVisual_--_1_--dtor$1.c)
 *     _CWindowList::ZOrder_::_1_::dtor$1 @ 0x1800F682E (_CWindowList--ZOrder_--_1_--dtor$1.c)
 *     _CTopLevelWindow::UpdateNCAreaBackground_::_1_::dtor$0 @ 0x1800F68F2 (_CTopLevelWindow--UpdateNCAreaBackground_--_1_--dtor$0.c)
 *     _CTopLevelWindow::UpdateNCAreaBackground_::_1_::dtor$1 @ 0x1800F6904 (_CTopLevelWindow--UpdateNCAreaBackground_--_1_--dtor$1.c)
 *     _CWindowTarget::CloneVisualTree_::_1_::dtor$0 @ 0x1800F693A (_CWindowTarget--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$0 @ 0x1800F6AA2 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$0.c)
 *     _CLivePreview::_FadeOutToGlass_::_1_::dtor$2 @ 0x1800F6CCC (_CLivePreview--_FadeOutToGlass_--_1_--dtor$2.c)
 *     _CDCompThumbnailData::EnsureThumbnailVisual_::_1_::dtor$0 @ 0x1800F73C4 (_CDCompThumbnailData--EnsureThumbnailVisual_--_1_--dtor$0.c)
 *     _CDesktopThumbnailCVIVisual::SetVisual_::_1_::dtor$3 @ 0x1800F73FA (_CDesktopThumbnailCVIVisual--SetVisual_--_1_--dtor$3.c)
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800F7466 (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CCaptureManager::SetupWindowCapture_::_1_::dtor$1 @ 0x1800F835D (_CCaptureManager--SetupWindowCapture_--_1_--dtor$1.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x1800F8F0F (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CDrawBitmapInstruction>::~ComPtr<CDrawBitmapInstruction>(
        CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(a1);
}
