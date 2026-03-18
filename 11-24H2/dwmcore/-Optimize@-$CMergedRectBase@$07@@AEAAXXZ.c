/*
 * XREFs of ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180096E84 (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180098A10 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x1800D50B0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801723F0 (-AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801728D0 (-AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 * Callees:
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180241D74 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x180241EE8 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 */

__int64 __fastcall CMergedRectBase<8>::Optimize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 i; // rdx

  while ( 1 )
  {
    result = CRectangleCollection<8>::EnsureWeights(a1);
    v3 = 1LL;
LABEL_2:
    if ( (unsigned int)v3 >= *(_DWORD *)a1 )
      break;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v3 )
      {
        v3 = (unsigned int)(v3 + 1);
        goto LABEL_2;
      }
      result = (unsigned int)i + ((unsigned int)(v3 * (v3 - 1)) >> 1);
      if ( *(float *)(a1 + 8 * result + 152) < 0.5 )
        break;
    }
    CRectangleCollection<8>::Merge(a1, i, v3);
  }
  *(_BYTE *)(a1 + 440) = 1;
  return result;
}
