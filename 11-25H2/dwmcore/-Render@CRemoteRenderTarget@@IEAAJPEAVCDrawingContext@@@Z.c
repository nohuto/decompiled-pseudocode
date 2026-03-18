/*
 * XREFs of ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550
 * Callers:
 *     ?RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180282ED0 (-RenderAndPresent@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028B184 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028B844 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(CRemoteRenderTarget *this, struct CDrawingContext *a2)
{
  char *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r15
  CComposeTop *v7; // r15
  __int64 v8; // rax
  int v9; // eax
  struct CVisualTree *v10; // rcx
  __int64 v11; // xmm1_8
  COcclusionContext *v12; // rbx
  struct D2D_RECT_F *v13; // rdi
  __int64 v14; // r12
  struct D2D_RECT_F v15; // xmm0
  CVisualTree *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-50h]
  char v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  struct D2D_RECT_F v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]

  v2 = 0LL;
  v5 = 0;
  v22 = 0;
  if ( *((_QWORD *)this + 24) )
  {
    v6 = *((_QWORD *)this + 26);
    if ( v6 )
    {
      if ( *(int *)(*((_QWORD *)this + 3) + 6288LL) <= 3 )
      {
        v7 = *(CComposeTop **)(v6 + 4488);
        if ( v7 && CComposeTop::HasNewContent(v7) )
          LOBYTE(v5) = 1;
        CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 336, *((_QWORD *)this + 14) + 112LL);
        if ( (_BYTE)v5 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 128LL))(*((_QWORD *)this + 24));
        if ( *((_DWORD *)this + 88) || (_BYTE)v5 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 104LL))(*((_QWORD *)this + 24));
          v9 = CDrawingContext::BeginFrame(
                 (__int64)a2,
                 v8,
                 (__int64)this + 240,
                 (CRemoteRenderTarget *)((char *)this + 140),
                 1u,
                 0LL);
          v5 = v9;
          if ( v9 < 0 )
          {
            v21 = 158;
            goto LABEL_26;
          }
          v10 = (struct CVisualTree *)*((_QWORD *)this + 26);
          v11 = *(_QWORD *)((char *)this + 324);
          v24 = *(struct D2D_RECT_F *)((char *)this + 308);
          v22 = 1;
          v25 = v11;
          CDesktopTree::UpdateCVIRenderTargets(v10, (__int64)&v24, (struct D2D_RECT_F *)this + 14);
          v23 = (**((__int64 (__fastcall ***)(char *))this + 42))((char *)this + 336);
          v12 = (COcclusionContext *)v23;
          CMergedRectBase<8>::GetRects((unsigned int *)this + 88, &v24);
          v13 = *(struct D2D_RECT_F **)&v24.right;
          v14 = *(_QWORD *)&v24.right + 16LL * *(_QWORD *)&v24.left;
          while ( v13 != (struct D2D_RECT_F *)v14 )
          {
            v15 = *v13;
            v16 = (CVisualTree *)*((_QWORD *)this + 14);
            v25 = 0LL;
            v24 = v15;
            v17 = CDrawingContext::DrawVisualTree(a2, v16, (__int64)&v24, v12, 2, 0, 0LL);
            v5 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xAFu, 0LL);
              goto LABEL_27;
            }
            CRemoteRenderTarget::NotifyRenderedRect((__int64)this, v13, 0);
            if ( v7 )
            {
              v9 = CComposeTop::SubtractOverdraw((__int64)v7, (__int64)v13);
              v5 = v9;
              if ( v9 < 0 )
              {
                v21 = 185;
                goto LABEL_26;
              }
            }
            v12 = (COcclusionContext *)v23;
            ++v13;
          }
          if ( v7 )
          {
            v9 = CRemoteRenderTarget::RenderComposeTop(this, a2, v7, *((_BYTE *)this + 2648));
            v5 = v9;
            if ( v9 < 0 )
            {
              v21 = 195;
LABEL_26:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v21, 0LL);
              goto LABEL_27;
            }
          }
        }
        v22 = 0;
        v9 = CDrawingContext::EndFrame((CD3DDevice **)a2);
        v5 = v9;
        if ( v9 >= 0 )
          goto LABEL_27;
        v21 = 200;
        goto LABEL_26;
      }
    }
  }
LABEL_27:
  CMergedRectBase<8>::Reset((__int64)this + 352);
  *((_WORD *)this + 1324) = 0;
  if ( v22 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
  if ( g_LockAndReadTarget )
  {
    v18 = *((_QWORD *)this + 24);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18);
      if ( a2 )
        v2 = (char *)a2 + 24;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 112LL))(v19, v2);
    }
  }
  return v5;
}
