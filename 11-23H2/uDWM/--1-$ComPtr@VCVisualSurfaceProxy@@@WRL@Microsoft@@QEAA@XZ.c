/*
 * XREFs of ??1?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A22A8
 * Callers:
 *     _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800674BC (_CWindowList--SetBlurredWallpaperSurface_--_1_--dtor$1.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$0 @ 0x180067CDA (_CWindowBorder--CreateBorderStructure_--_1_--dtor$0.c)
 *     _CWindowBorder::CreateBorderStructure_::_1_::dtor$10 @ 0x180067D34 (_CWindowBorder--CreateBorderStructure_--_1_--dtor$10.c)
 *     _CWindowList::MoveTransitionAndTouchVisualToFront_::_1_::dtor$0 @ 0x1800681C4 (_CWindowList--MoveTransitionAndTouchVisualToFront_--_1_--dtor$0.c)
 *     _CWindowList::GetOverlayRootVisualForDesktop_::_1_::dtor$0 @ 0x1800685B1 (_CWindowList--GetOverlayRootVisualForDesktop_--_1_--dtor$0.c)
 *     _CGlobalLightSet::RemoveInteropVisualFromTree_::_1_::dtor$0 @ 0x1800C127A (_CGlobalLightSet--RemoveInteropVisualFromTree_--_1_--dtor$0.c)
 *     _CVisual::CloneVisualTree_::_1_::dtor$0 @ 0x1801053E9 (_CVisual--CloneVisualTree_--_1_--dtor$0.c)
 *     _CWindowList::_CWindowList_::_1_::dtor$1 @ 0x180108975 (_CWindowList--_CWindowList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::~ComPtr<CVisualSurfaceProxy>(CBaseObject **a1)
{
  return Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(a1);
}
