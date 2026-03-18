/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x18028C5A0
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028BF94 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18028BE2C (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        struct ISwapChain *a3,
        const struct CMILMatrix *a4,
        enum CRemoteAppRenderTarget::ProtectionMode *a5)
{
  unsigned int *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  COcclusionContext *v13; // rbx
  const struct D2D_RECT_F *v14; // rdi
  __int64 v15; // r12
  struct D2D_RECT_F v16; // xmm0
  CVisualTree *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v23; // [rsp+40h] [rbp-78h]
  struct D2D_RECT_F v24; // [rsp+48h] [rbp-70h] BYREF
  int v25; // [rsp+58h] [rbp-60h]
  int v26; // [rsp+5Ch] [rbp-5Ch]

  v5 = (unsigned int *)((char *)this + 296);
  v10 = 0;
  *(_DWORD *)a5 = 0;
  if ( *((_DWORD *)this + 74) )
  {
    v11 = (*(__int64 (__fastcall **)(struct ISwapChain *))(*(_QWORD *)a3 + 104LL))(a3);
    v12 = CDrawingContext::BeginFrame(
            (__int64)a2,
            v11,
            (__int64)a4,
            (CRemoteAppRenderTarget *)((char *)this + 140),
            3u,
            0LL);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x1FCu, 0LL);
    }
    else
    {
      v23 = (**((__int64 (__fastcall ***)(char *))this + 35))((char *)this + 280);
      v13 = (COcclusionContext *)v23;
      CMergedRectBase<8>::GetRects(v5, &v24);
      v14 = *(const struct D2D_RECT_F **)&v24.right;
      v15 = *(_QWORD *)&v24.right + 16LL * *(_QWORD *)&v24.left;
      while ( v14 != (const struct D2D_RECT_F *)v15 )
      {
        v16 = *v14;
        v17 = (CVisualTree *)*((_QWORD *)this + 14);
        v25 = 0;
        v26 = 0;
        v24 = v16;
        v18 = CDrawingContext::DrawVisualTree(a2, v17, (__int64)&v24, v13, 2, 0, 0LL);
        v10 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x208u, 0LL);
          CDrawingContext::EndFrame((CD3DDevice **)a2);
          return v10;
        }
        CRemoteAppRenderTarget::NotifyRenderedRect(v19, (__int64)a3, (__int64)a4, v14);
        v13 = (COcclusionContext *)v23;
        ++v14;
      }
      if ( *((_BYTE *)a2 + 7980) )
      {
        *(_DWORD *)a5 = 2;
      }
      else if ( *((_BYTE *)this + 2592) )
      {
        *(_DWORD *)a5 = 1;
      }
      v20 = CDrawingContext::EndFrame((CD3DDevice **)a2);
      v10 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x217u, 0LL);
      }
      else if ( g_LockAndReadOffscreenTarget )
      {
        v21 = (*(__int64 (__fastcall **)(struct ISwapChain *))(*(_QWORD *)a3 + 104LL))(a3);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 112LL))(v21, (char *)a2 + 24);
      }
    }
  }
  return v10;
}
