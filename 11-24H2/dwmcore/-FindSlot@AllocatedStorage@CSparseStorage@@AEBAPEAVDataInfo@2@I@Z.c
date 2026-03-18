/*
 * XREFs of ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40
 * Callers:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000C5A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x180097358 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801550E0 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18015571C (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180182A8C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801DFC80 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801E1FDC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1801EF690 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18020879C (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18024F888 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
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
