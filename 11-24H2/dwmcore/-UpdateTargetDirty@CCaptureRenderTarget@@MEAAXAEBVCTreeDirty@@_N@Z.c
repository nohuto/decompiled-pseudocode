/*
 * XREFs of ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x180236660
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180040560 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180096C64 (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180096EE0 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801F1D6C (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x1801FC4CC (-Reset@-$CMergedRectBase@$03@@QEAAXXZ.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802360E4 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wil@@QEAA_NXZ @ 0x180282CC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@de.c)
 */

void __fastcall CCaptureRenderTarget::UpdateTargetDirty(
        CCaptureRenderTarget *this,
        const struct CTreeDirty *a2,
        char a3)
{
  char *v6; // rsi
  __int64 v7; // r15
  char v8; // bp
  _DWORD *v9; // rdi
  _QWORD *Rects; // rax
  __int64 v11; // rax
  int **v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (char *)this + 320;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::GetImpl'::`2'::impl) )
  {
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)v6, (__int64)a2);
    v7 = (__int64)v6;
  }
  else
  {
    v7 = (__int64)v6;
    if ( !v6[2312] )
    {
      CTreeDirty::GetDirtyRects((__int64)a2, v13);
      CTargetDirtyBase<8>::AddDirtyRects((__int64)v6, v13);
    }
  }
  if ( *((_BYTE *)this + 2940) && (v8 = 1, *((_DWORD *)this + 49) == 1) )
  {
    v9 = (_DWORD *)((char *)this + 336);
  }
  else
  {
    v8 = 0;
    v9 = (_DWORD *)((char *)this + 336);
    if ( !*((_DWORD *)this + 84) )
      goto LABEL_13;
  }
  if ( *((_DWORD *)this + 692) )
  {
    Rects = CMergedRectBase<4>::GetRects((unsigned int *)this + 692, v13);
    CTargetDirtyBase<8>::AddDirtyRects(v7, Rects);
    CMergedRectBase<4>::Reset((__int64)this + 2768);
  }
  if ( v8 )
    CCaptureRenderTarget::AddCursorInvalidRects((CVisualTree **)this);
LABEL_13:
  if ( a3 )
  {
    v11 = *((_QWORD *)this + 390);
    if ( v11 != *((_QWORD *)this + 391) )
      *((_QWORD *)this + 391) = v11;
    if ( *v9 )
    {
      v12 = (int **)*((_QWORD *)this + 98);
      if ( v12 )
        CRegion::GetRectangles(v12, (const void **)this + 390);
      if ( *((_DWORD *)this + 44) != 2 )
        CTargetDirtyBase<8>::SetFullDirty((__int64)v6);
    }
  }
  *((_BYTE *)this + 2940) = 0;
}
