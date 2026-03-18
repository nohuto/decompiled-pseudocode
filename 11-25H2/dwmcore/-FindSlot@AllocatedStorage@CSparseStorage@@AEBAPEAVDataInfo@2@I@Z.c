/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800321C0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18003E5EC (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1800C53A8 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801A5D00 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801EA4FC (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801EBCEC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x180214EDC (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18025ADB8 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 * Callees:
 *     <none>
 */

struct CSparseStorage::DataInfo *__fastcall CSparseStorage::AllocatedStorage::FindSlot(
        CSparseStorage::AllocatedStorage *this,
        int a2)
{
  unsigned int v2; // r8d
  struct CSparseStorage::DataInfo *result; // rax

  v2 = *((_DWORD *)this + 3);
  result = (CSparseStorage::AllocatedStorage *)((char *)this + 12);
  if ( (HIBYTE(v2) & 0x7F) != a2 )
  {
    do
    {
      result = (struct CSparseStorage::DataInfo *)((char *)result + (v2 & 0xFFFFFF) + 4);
      v2 = *(_DWORD *)result;
    }
    while ( (HIBYTE(*(_DWORD *)result) & 0x7F) != a2 );
  }
  return result;
}
