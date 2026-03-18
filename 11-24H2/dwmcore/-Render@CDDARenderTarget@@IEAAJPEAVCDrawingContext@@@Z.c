/*
 * XREFs of ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330
 * Callers:
 *     ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180097A20 (-RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180061A30 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800983E4 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180098A10 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180098B40 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800992D8 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800996B0 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDARenderTarget::Render(CDDARenderTarget *this, struct CDrawingContext *a2, double a3)
{
  unsigned int v5; // edi
  char v6; // bp
  char v7; // si
  __int64 v8; // rax
  __int64 v9; // r12
  char v10; // r13
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rax
  char *v13; // rcx
  char *v14; // rsi
  char *v15; // r15
  int v16; // eax
  char v17; // al
  CComposition *v18; // rcx
  int v20; // eax
  int v21; // eax
  char v22; // [rsp+40h] [rbp-68h]
  char v23; // [rsp+41h] [rbp-67h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v22 = 0;
  v23 = 0;
  if ( *((_QWORD *)this + 22) && *(int *)(*((_QWORD *)this + 3) + 6264LL) <= 3 )
  {
    v8 = *((_QWORD *)this + 23);
    v6 = 1;
    v9 = *(_QWORD *)(v8 + 4488);
    if ( v9 && CComposeTop::HasNewContent(*(CComposeTop **)(v8 + 4488)) )
    {
      v10 = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 480);
    }
    else
    {
      v10 = 0;
    }
    *(_BYTE *)(*((_QWORD *)this + 3) + 6466LL) = 1;
    CComposition::HideDDAVisuals(*((CComposition **)this + 3));
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      CComposition::ShowHideCursors(*((CComposition **)this + 3), 0);
      v22 = 1;
    }
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 480, *((_QWORD *)this + 23) + 112LL);
    if ( *((_DWORD *)this + 124) )
    {
      v11 = CDrawingContext::BeginFrame(
              a2,
              (*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) != 0LL),
              (char *)this + 268,
              (char *)this + 140,
              2,
              0LL);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xAFu, 0LL);
      }
      else
      {
        v23 = 1;
        v12 = (__int64 (__fastcall *)(__int64))**((_QWORD **)this + 60);
        v13 = (char *)this + 480;
        if ( v12 == CTargetDirtyBase<8>::GetOcclusionContext )
          CTargetDirtyBase<8>::GetOcclusionContext((__int64)v13);
        else
          v12((__int64)v13);
        if ( !*((_BYTE *)this + 936) )
          CMergedRectBase<8>::Optimize((char *)this + 496);
        v14 = (char *)this + 500;
        if ( this == (CDDARenderTarget *)-500LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v15 = &v14[16 * *((unsigned int *)this + 124)];
        while ( v14 != v15 )
        {
          v20 = CDrawingContext::DrawVisualTree(a2, *((struct CVisualTree **)this + 14), 2, 0, 0LL);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xBAu, 0LL);
            goto LABEL_21;
          }
          CDDARenderTarget::NotifyRenderedRect((__int64)this, (__int64)v14, a3);
          v14 += 16;
        }
        if ( v10 && (v21 = CComposeTop::FullRender(v9, a2, (char *)this + 268, (char *)this + 224), v5 = v21, v21 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC9u, 0LL);
        }
        else
        {
          v23 = 0;
          v16 = CDrawingContext::EndFrame((CD3DDevice **)a2);
          v5 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xCDu, 0LL);
          }
          else
          {
            if ( *((_BYTE *)a2 + 7983) || (v17 = 0, *((_BYTE *)a2 + 7984)) )
              v17 = 1;
            *((_BYTE *)this + 2801) = v17;
          }
        }
      }
    }
LABEL_21:
    v7 = v22;
  }
  CMergedRectBase<8>::Reset((char *)this + 496);
  *((_WORD *)this + 1396) = 0;
  if ( v23 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
  if ( v7 )
    CComposition::RestoreCursors(g_pComposition);
  if ( v6 )
  {
    CComposition::RestoreDDAVisuals(v18);
    *((_BYTE *)g_pComposition + 6466) = 0;
  }
  return v5;
}
