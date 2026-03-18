/*
 * XREFs of ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228
 * Callers:
 *     ?RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C5A70 (-RenderAndPresent@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C615C (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x1800C6780 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x1800C68B0 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1800C75A8 (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x18024839C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDARenderTarget::Render(CDDARenderTarget *this, struct CDrawingContext *a2, double a3)
{
  unsigned int v5; // edi
  char v6; // bp
  char v7; // si
  __int64 v8; // rax
  CComposeTop *v9; // r12
  char v10; // r13
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rax
  char *v13; // rcx
  __int64 OcclusionContext; // rax
  COcclusionContext *v15; // rdi
  const struct D2D_RECT_F *v16; // rsi
  const struct D2D_RECT_F *v17; // r15
  int v18; // eax
  char v19; // al
  CComposition *v20; // rcx
  struct D2D_RECT_F v22; // xmm0
  CVisualTree *v23; // rdx
  int v24; // eax
  int v25; // eax
  char v26; // [rsp+40h] [rbp-68h]
  char v27; // [rsp+41h] [rbp-67h]
  COcclusionContext *v28; // [rsp+48h] [rbp-60h]
  struct D2D_RECT_F v29; // [rsp+50h] [rbp-58h] BYREF
  int v30; // [rsp+60h] [rbp-48h]
  int v31; // [rsp+64h] [rbp-44h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v26 = 0;
  v27 = 0;
  if ( *((_QWORD *)this + 22) && *(int *)(*((_QWORD *)this + 3) + 6288LL) <= 3 )
  {
    v8 = *((_QWORD *)this + 23);
    v6 = 1;
    v9 = *(CComposeTop **)(v8 + 4488);
    if ( v9 && CComposeTop::HasNewContent(*(CComposeTop **)(v8 + 4488)) )
    {
      v10 = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 480);
    }
    else
    {
      v10 = 0;
    }
    *(_BYTE *)(*((_QWORD *)this + 3) + 6490LL) = 1;
    CComposition::HideDDAVisuals(*((CComposition **)this + 3));
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      CComposition::ShowHideCursors(*((CComposition **)this + 3), 0);
      v26 = 1;
    }
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 480, *((_QWORD *)this + 23) + 112LL);
    if ( *((_DWORD *)this + 124) )
    {
      v11 = CDrawingContext::BeginFrame(
              (__int64)a2,
              (*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) + 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 22) + 64LL) != 0LL),
              (__int64)this + 268,
              (CDDARenderTarget *)((char *)this + 140),
              2u,
              0LL);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xAFu, 0LL);
      }
      else
      {
        v27 = 1;
        v12 = (__int64 (__fastcall *)(__int64))**((_QWORD **)this + 60);
        v13 = (char *)this + 480;
        if ( v12 == CTargetDirtyBase<8>::GetOcclusionContext )
          OcclusionContext = CTargetDirtyBase<8>::GetOcclusionContext((__int64)v13);
        else
          OcclusionContext = v12((__int64)v13);
        v15 = (COcclusionContext *)OcclusionContext;
        v28 = (COcclusionContext *)OcclusionContext;
        if ( !*((_BYTE *)this + 936) )
          CMergedRectBase<8>::Optimize((char *)this + 496);
        v16 = (const struct D2D_RECT_F *)((char *)this + 500);
        if ( this == (CDDARenderTarget *)-500LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v17 = &v16[*((unsigned int *)this + 124)];
        while ( v16 != v17 )
        {
          v22 = *v16;
          v23 = (CVisualTree *)*((_QWORD *)this + 14);
          v30 = 0;
          v31 = 0;
          v29 = v22;
          v24 = CDrawingContext::DrawVisualTree(a2, v23, (__int64)&v29, v15, 2, 0, 0LL);
          v5 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xBAu, 0LL);
            goto LABEL_21;
          }
          CDDARenderTarget::NotifyRenderedRect((__int64)this, v16, a3);
          v15 = v28;
          ++v16;
        }
        if ( v10 && (v25 = CComposeTop::FullRender(v9, (__int64)a2, (__int64)this + 268), v5 = v25, v25 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC9u, 0LL);
        }
        else
        {
          v27 = 0;
          v18 = CDrawingContext::EndFrame(a2);
          v5 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xCDu, 0LL);
          }
          else
          {
            if ( *((_BYTE *)a2 + 7983) || (v19 = 0, *((_BYTE *)a2 + 7984)) )
              v19 = 1;
            *((_BYTE *)this + 2801) = v19;
          }
        }
      }
    }
LABEL_21:
    v7 = v26;
  }
  CMergedRectBase<8>::Reset((char *)this + 496);
  *((_WORD *)this + 1396) = 0;
  if ( v27 )
    CDrawingContext::EndFrame(a2);
  if ( v7 )
    CComposition::RestoreCursors(g_pComposition);
  if ( v6 )
  {
    CComposition::RestoreDDAVisuals(v20);
    *((_BYTE *)g_pComposition + 6490) = 0;
  }
  return v5;
}
