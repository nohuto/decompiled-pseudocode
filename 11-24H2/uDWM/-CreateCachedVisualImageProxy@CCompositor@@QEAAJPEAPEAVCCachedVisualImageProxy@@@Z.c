/*
 * XREFs of ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18003CD78
 * Callers:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180002968 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800176CC (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18003C320 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C49C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18006DF00 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateCachedVisualImageProxy(CCompositor *this, struct CCachedVisualImageProxy **a2)
{
  return CCompositor::CreateProxy<CCachedVisualImageProxy>(this, a2);
}
