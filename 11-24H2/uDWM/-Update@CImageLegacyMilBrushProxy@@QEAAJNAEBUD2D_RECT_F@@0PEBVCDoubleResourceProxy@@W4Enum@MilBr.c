/*
 * XREFs of ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C
 * Callers:
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180002C4C (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180003D00 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003ABC8 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C9EC (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18006DB04 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z @ 0x1800783C4 (-_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x18008919C (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImageLegacyMilBrushProxy::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        int a13,
        __int64 a14)
{
  __int64 v14; // r11
  int v16; // r10d
  int v17; // r8d
  int v18; // edx
  int v19; // ecx

  v14 = *(_QWORD *)(a1 + 16);
  if ( a14 )
    v16 = *(_DWORD *)(*(_QWORD *)(a14 + 16) + 24LL);
  else
    v16 = 0;
  if ( a9 )
    v17 = *(_DWORD *)(*(_QWORD *)(a9 + 16) + 24LL);
  else
    v17 = 0;
  if ( a8 )
    v18 = *(_DWORD *)(*(_QWORD *)(a8 + 16) + 24LL);
  else
    v18 = 0;
  if ( a5 )
    v19 = *(_DWORD *)(*(_QWORD *)(a5 + 16) + 24LL);
  else
    v19 = 0;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, int, _DWORD, _DWORD, unsigned int, int, int, int, int, _DWORD, int, int, int))(**(_QWORD **)(v14 + 16) + 664LL))(
           *(_QWORD *)(v14 + 16),
           *(unsigned int *)(v14 + 24),
           a6,
           a3,
           a4,
           v19,
           0,
           0,
           a6,
           a7,
           v18,
           v17,
           a10,
           0,
           a12,
           a13,
           v16);
}
