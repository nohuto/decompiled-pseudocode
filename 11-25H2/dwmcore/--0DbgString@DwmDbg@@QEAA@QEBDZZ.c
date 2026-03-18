/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x18000BD58 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000BEF4 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000C068 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000CE50 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18009A6D0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1801C2CC0 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801E4E60 (-UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801E6F4C (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBJ@Z @ 0x1801FF46C (--0DbgString@DwmDbg@@QEAA@AEBJ@Z.c)
 *     ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x180209EFC (-CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x18021CF7C (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180299140 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?GetBackdropFlagsDebugString@CVisual@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802B89DC (-GetBackdropFlagsDebugString@CVisual@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     vsprintf_s @ 0x18025D248 (vsprintf_s.c)
 *     _vscprintf @ 0x18025D2AC (_vscprintf.c)
 */

DwmDbg::DbgString *DwmDbg::DbgString::DbgString(char **this, const char *a2, ...)
{
  SIZE_T v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rdi
  char *v7; // rcx
  char v9; // [rsp+28h] [rbp-30h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  va_list ArgList; // [rsp+70h] [rbp+18h] BYREF

  va_start(ArgList, a2);
  *this = 0LL;
  v3 = vscprintf(a2, ArgList) + 1;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v5, 0, v3);
  if ( this == (char **)&v9 )
  {
    v7 = v6;
  }
  else
  {
    v7 = *this;
    *this = v6;
    if ( !v7 )
      goto LABEL_5;
  }
  operator delete(v7);
LABEL_5:
  if ( *this )
  {
    vsprintf_s(*this, v3, a2, ArgList);
    puts(*this);
  }
  return (DwmDbg::DbgString *)this;
}
