/*
 * XREFs of ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180278340 (-RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180096E84 (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5570 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180280434 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180280AF4 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(CRemoteRenderTarget *this, struct CDrawingContext *a2, __int64 a3)
{
  char *v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r15
  CComposeTop *v8; // r15
  __int64 v9; // rax
  int v10; // eax
  struct CVisualTree *v11; // rcx
  __int64 v12; // xmm1_8
  COcclusionContext *v13; // rbx
  struct D2D_RECT_F *v14; // rdi
  __int64 v15; // r12
  struct D2D_RECT_F v16; // xmm0
  struct CVisualTree *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-50h]
  char v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h]
  struct D2D_RECT_F v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]

  v3 = 0LL;
  v6 = 0;
  v23 = 0;
  if ( *((_QWORD *)this + 24) )
  {
    v7 = *((_QWORD *)this + 26);
    if ( v7 )
    {
      if ( *(int *)(*((_QWORD *)this + 3) + 6264LL) <= 3 )
      {
        v8 = *(CComposeTop **)(v7 + 4488);
        if ( v8 && CComposeTop::HasNewContent(v8, (__int64)a2, a3) )
          LOBYTE(v6) = 1;
        CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 336, *((_QWORD *)this + 14) + 112LL);
        if ( (_BYTE)v6 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 128LL))(*((_QWORD *)this + 24));
        if ( *((_DWORD *)this + 88) || (_BYTE)v6 )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 104LL))(*((_QWORD *)this + 24));
          v10 = CDrawingContext::BeginFrame(
                  (__int64)a2,
                  v9,
                  (__int64)this + 240,
                  (CRemoteRenderTarget *)((char *)this + 140),
                  1u,
                  0LL);
          v6 = v10;
          if ( v10 < 0 )
          {
            v22 = 158;
            goto LABEL_26;
          }
          v11 = (struct CVisualTree *)*((_QWORD *)this + 26);
          v12 = *(_QWORD *)((char *)this + 324);
          v25 = *(struct D2D_RECT_F *)((char *)this + 308);
          v23 = 1;
          v26 = v12;
          CDesktopTree::UpdateCVIRenderTargets(v11, (__int64)&v25, (struct D2D_RECT_F *)this + 14);
          v24 = (**((__int64 (__fastcall ***)(char *))this + 42))((char *)this + 336);
          v13 = (COcclusionContext *)v24;
          CMergedRectBase<8>::GetRects((unsigned int *)this + 88, &v25);
          v14 = *(struct D2D_RECT_F **)&v25.right;
          v15 = *(_QWORD *)&v25.right + 16LL * *(_QWORD *)&v25.left;
          while ( v14 != (struct D2D_RECT_F *)v15 )
          {
            v16 = *v14;
            v17 = (struct CVisualTree *)*((_QWORD *)this + 14);
            v26 = 0LL;
            v25 = v16;
            v18 = CDrawingContext::DrawVisualTree(a2, v17, &v25.left, v13, 2, 0, 0LL);
            v6 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xAFu, 0LL);
              goto LABEL_27;
            }
            CRemoteRenderTarget::NotifyRenderedRect((__int64)this, v14, 0);
            if ( v8 )
            {
              v10 = CComposeTop::SubtractOverdraw((__int64)v8, (__int64)v14);
              v6 = v10;
              if ( v10 < 0 )
              {
                v22 = 185;
                goto LABEL_26;
              }
            }
            v13 = (COcclusionContext *)v24;
            ++v14;
          }
          if ( v8 )
          {
            v10 = CRemoteRenderTarget::RenderComposeTop(this, a2, v8, *((_BYTE *)this + 2648));
            v6 = v10;
            if ( v10 < 0 )
            {
              v22 = 195;
LABEL_26:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v22, 0LL);
              goto LABEL_27;
            }
          }
        }
        v23 = 0;
        v10 = CDrawingContext::EndFrame((CD3DDevice **)a2);
        v6 = v10;
        if ( v10 >= 0 )
          goto LABEL_27;
        v22 = 200;
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  CMergedRectBase<8>::Reset((__int64)this + 352);
  *((_WORD *)this + 1324) = 0;
  if ( v23 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
  if ( g_LockAndReadTarget )
  {
    v19 = *((_QWORD *)this + 24);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 104LL))(v19);
      if ( a2 )
        v3 = (char *)a2 + 24;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 112LL))(v20, v3);
    }
  }
  return v6;
}
