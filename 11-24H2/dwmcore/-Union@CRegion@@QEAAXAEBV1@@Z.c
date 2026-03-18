/*
 * XREFs of ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90
 * Callers:
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027A6C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180027F20 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002F954 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18003BD60 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18003D370 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800662F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180096BB0 (-NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U.c)
 *     ?NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180098180 (-NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRe.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800983E4 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801DC170 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ @ 0x180201240 (-RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x180244FC0 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802C76D0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802C7D80 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DR.c)
 *     ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802CC6C0 (-NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  int v5; // r8d
  _DWORD *v6; // rbx
  int v7; // ebp
  int *v8; // r12
  int v9; // eax
  int v10; // r14d
  int v11; // ecx
  int v12; // r10d
  __int64 v13; // r11
  _DWORD *v14; // rax
  _DWORD *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r11
  int v21; // eax
  FastRegion::Internal::CRgnData *v22; // rcx
  struct FastRegion::Internal::CRgnData *v23; // rbx
  FastRegion::Internal::CRgnData *v24; // rax
  int v25; // [rsp+20h] [rbp-148h]
  struct FastRegion::Internal::CRgnData *v26; // [rsp+28h] [rbp-140h]
  _BYTE v27[256]; // [rsp+30h] [rbp-138h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  v2 = *a2;
  v5 = *(_DWORD *)*a2;
  if ( !v5 )
    return;
  v6 = *this;
  if ( *(_DWORD *)*this )
  {
    v21 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v2);
    v22 = (FastRegion::Internal::CRgnData *)v27;
    v26 = (struct FastRegion::Internal::CRgnData *)v27;
    v25 = v21;
    if ( (unsigned __int64)v21 > 0x100 )
    {
      v24 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v21);
      v22 = v24;
      if ( !v24 )
      {
        v7 = -2147024882;
LABEL_14:
        ModuleFailFastForHRESULT(v7, retaddr);
      }
      v26 = v24;
    }
    FastRegion::Internal::CRgnData::Union(v22, *this, *a2);
    v7 = 0;
    if ( *(_DWORD *)v26 )
    {
      if ( v27 == (_BYTE *)v26 )
      {
        v7 = FastRegion::CRegion::CopyData(this, v26);
      }
      else
      {
        v23 = v26;
        v26 = (struct FastRegion::Internal::CRgnData *)v27;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
        *this = v23;
        *((_DWORD *)this + 2) = v25;
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
    if ( v27 != (_BYTE *)v26 )
      operator delete(v26);
    goto LABEL_13;
  }
  v7 = 0;
  if ( this != a2 )
  {
    v8 = (int *)(this + 1);
    v9 = 60;
    v10 = *((_DWORD *)v2 + 2 * v5 + 2) + 8 * v5 - 12 - *((_DWORD *)v2 + 4) + 8 * (v5 - 1) + 24;
    if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v6 )
      v9 = *v8;
    if ( v9 < v10 )
    {
      v6 = MIDL_user_allocate(v10);
      if ( !v6 )
      {
        v7 = -2147024882;
        goto LABEL_13;
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
      *this = (const struct FastRegion::Internal::CRgnData *)v6;
      *v8 = v10;
    }
    v11 = *(_DWORD *)v2;
    v12 = 0;
    *v6 = *(_DWORD *)v2;
    v6[1] = *((_DWORD *)v2 + 1);
    v6[2] = *((_DWORD *)v2 + 2);
    v13 = (__int64)v2 + *((int *)v2 + 4) + 12;
    v14 = &v6[2 * v11 + 3];
    if ( v11 > 0 )
    {
      v15 = v6 + 3;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + v2 - (const struct FastRegion::Internal::CRgnData *)v6);
        v15 += 2;
        v16 = v12++;
        v6[2 * v16 + 4] = (_DWORD)v2
                        + 8 * v16
                        + 4 * (((__int64)v14 - v13) >> 2)
                        + *((_DWORD *)v2 + 2 * v16 + 4)
                        - ((_DWORD)v6
                         + 8 * v16);
      }
      while ( v12 < *v6 );
    }
    v17 = (__int64)v2 + 8 * *(_DWORD *)v2 + 4;
    v18 = (unsigned __int64)((int)v17 + *(_DWORD *)(v17 + 4) - *((_DWORD *)v2 + 4) - ((int)v2 + 12)) >> 2;
    v19 = (int)v18;
    if ( (int)v18 > 0 )
    {
      v20 = v13 - (_QWORD)v14;
      do
      {
        *v14 = *(_DWORD *)((char *)v14 + v20);
        ++v14;
        --v19;
      }
      while ( v19 );
    }
  }
LABEL_13:
  if ( v7 < 0 )
    goto LABEL_14;
}
