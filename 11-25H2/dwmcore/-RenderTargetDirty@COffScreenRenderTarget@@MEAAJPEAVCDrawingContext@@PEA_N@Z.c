/*
 * XREFs of ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0
 * Callers:
 *     ?RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C5330 (-RenderTargetDirty@CIndirectSwapchainRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802206E0 (-RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802B26B0 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1800C53A8 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x1800C5404 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800C5484 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     gsl::final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___::_final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___ @ 0x18021EAEC (gsl--final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___--_final_action__lambda_ba5ae30a73e.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180220528 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::RenderTargetDirty(
        COffScreenRenderTarget *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  __int128 v3; // xmm0
  __int64 v5; // rax
  __int64 v6; // r15
  char v7; // r12
  int v8; // r14d
  __int64 (__fastcall *v9)(COffScreenRenderTarget *); // rax
  int v10; // r13d
  int v11; // eax
  int v12; // edi
  CComposition **v13; // rsi
  __int64 v14; // r8
  char *v15; // rcx
  int v16; // r9d
  __int64 v17; // r10
  __int64 i; // rdx
  __int64 v19; // rdi
  LARGE_INTEGER v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r8
  char *v24; // rsi
  char *j; // rax
  int v26; // eax
  CVisualTree *v27; // rdx
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // eax
  CDrawingContext *v31; // rcx
  int v32; // edx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  char v37; // [rsp+40h] [rbp-79h]
  CDrawingContext *v38; // [rsp+48h] [rbp-71h] BYREF
  __int64 v39; // [rsp+50h] [rbp-69h]
  int v40; // [rsp+58h] [rbp-61h]
  int ResampleMode; // [rsp+5Ch] [rbp-5Dh]
  _DWORD *v42; // [rsp+60h] [rbp-59h]
  char *v43; // [rsp+68h] [rbp-51h]
  COcclusionContext *v44; // [rsp+70h] [rbp-49h]
  __int64 v45; // [rsp+78h] [rbp-41h]
  bool *v46; // [rsp+80h] [rbp-39h]
  __int64 v47; // [rsp+88h] [rbp-31h] BYREF
  CDrawingContext **v48; // [rsp+98h] [rbp-21h] BYREF
  char v49; // [rsp+A0h] [rbp-19h]
  __int128 v50; // [rsp+A8h] [rbp-11h] BYREF
  _DWORD v51[6]; // [rsp+B8h] [rbp-1h] BYREF

  v3 = *(_OWORD *)((char *)this + 140);
  v46 = a3;
  *a3 = 0;
  v5 = *(_QWORD *)this;
  v6 = 0LL;
  v38 = a2;
  v7 = 0;
  v50 = v3;
  v37 = 0;
  v8 = 0;
  v9 = *(__int64 (__fastcall **)(COffScreenRenderTarget *))(v5 + 272);
  v10 = 0;
  ResampleMode = 0;
  v11 = v9(this);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x152u, 0LL);
    v15 = (char *)this + 336;
    v13 = (CComposition **)((char *)this + 24);
  }
  else
  {
    if ( !*((_DWORD *)this + 666) )
      return (unsigned int)v12;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 38);
    v13 = (CComposition **)((char *)this + 24);
    v7 = 1;
    *(_BYTE *)(*((_QWORD *)this + 3) + 6490LL) = 1;
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 304LL))(this);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(COffScreenRenderTarget *, __int64, __int64))(*(_QWORD *)this + 280LL))(
      this,
      *((_QWORD *)this + 14) + 112LL,
      v14);
    v15 = (char *)this + 336;
    if ( *((_DWORD *)this + 84) )
    {
      v44 = (COcclusionContext *)(**((__int64 (__fastcall ***)(char *))this + 40))((char *)this + 320);
      v39 = *(_QWORD *)(*((_QWORD *)this + 14) + 72LL);
      v8 = HIBYTE(*(_DWORD *)(v39 + 96)) & 0x7F;
      v10 = (int)(*(_DWORD *)(v39 + 96) << 8) >> 28;
      ResampleMode = CVisual::GetResampleMode(v39);
      *(_DWORD *)(v17 + 96) = v16 & 0xFD0FFFFF | 0x2100000;
      CVisual::SetResampleMode(v17, *((_DWORD *)this + 48));
      if ( !*((_BYTE *)this + 776) )
        CMergedRectBase<8>::Optimize((char *)this + 336);
      gsl::details::extent_type<-1>::extent_type<-1>(&v47, *((unsigned int *)this + 84));
      if ( v47 == -1 || this == (COffScreenRenderTarget *)-340LL && v47 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      for ( i = 0LL; ; i = (unsigned int)(v40 + 1) )
      {
        v13 = (CComposition **)((char *)this + 24);
        v40 = i;
        v15 = (char *)this + 336;
        if ( (unsigned int)i >= *((_DWORD *)this + 666) )
          break;
        v20 = *(LARGE_INTEGER *)this;
        v45 = *(_QWORD *)(*((_QWORD *)this + 330) + 8 * i);
        v19 = v45;
        (*(void (__fastcall **)(COffScreenRenderTarget *))(v20.QuadPart + 296))(this);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 144LL))(v19);
        v22 = CDrawingContext::BeginFrame(
                (__int64)v38,
                (v21 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v21 >> 64),
                (__int64)this + 216,
                &v50,
                2u,
                0LL);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x185u, 0LL);
LABEL_22:
          v15 = (char *)this + 336;
          v13 = (CComposition **)((char *)this + 24);
          break;
        }
        v23 = *((_QWORD *)this + 23);
        v48 = &v38;
        v49 = 1;
        if ( v23 )
        {
          v35 = CDrawingContext::PushColorTransformLayer(v38);
          v12 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x18Fu, 0LL);
            gsl::final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___::_final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___(&v48);
            goto LABEL_22;
          }
          v37 = 1;
        }
        ++dword_1804067B8;
        v24 = (char *)this + 16 * v47 + 340;
        for ( j = (char *)this + 348; ; j = (char *)(v42 + 4) )
        {
          v42 = j;
          v43 = j - 8;
          if ( j - 8 == v24 )
            break;
          v26 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 208LL))(this);
          v27 = (CVisualTree *)*((_QWORD *)this + 14);
          v28 = *(_DWORD *)v43;
          v51[4] = 0;
          v51[5] = 0;
          v51[0] = v28;
          v29 = *v42;
          v51[1] = *(v42 - 1);
          v51[3] = v42[1];
          v51[2] = v29;
          v30 = CDrawingContext::DrawVisualTree(v38, v27, (__int64)v51, v44, v26, 0, 0LL);
          v12 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x19Cu, 0LL);
LABEL_21:
            CDrawingContext::EndFrame(v38);
            goto LABEL_22;
          }
        }
        v31 = v38;
        *((_BYTE *)this + 2728) = *((_BYTE *)v38 + 7982);
        if ( v37 )
        {
          v37 = 0;
          v34 = CDrawingContext::PopLayerInternal((__int64)v31);
          v12 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1A8u, 0LL);
            goto LABEL_21;
          }
          v31 = v38;
        }
        if ( g_LockAndReadOffscreenTarget )
        {
          v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 144LL))(v45);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 112LL))(v36);
          v31 = v38;
        }
        *v46 = 1;
        CDrawingContext::EndFrame(v31);
      }
      v6 = v39;
    }
    else
    {
      v6 = 0LL;
    }
  }
  CMergedRectBase<8>::Reset(v15);
  *((_WORD *)this + 1316) = 0;
  if ( v37 )
    CDrawingContext::PopLayerInternal((__int64)v38);
  if ( v6 )
  {
    v32 = ResampleMode;
    *(_DWORD *)(v6 + 96) = (v10 << 20) & 0xF00000 ^ (*(_DWORD *)(v6 + 96) & 0x800FFFFF | (v8 << 24));
    CVisual::SetResampleMode(v6, v32);
  }
  if ( v7 )
  {
    *((_BYTE *)*v13 + 6490) = 0;
    (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 312LL))(this);
  }
  if ( v12 >= 0 )
    COffScreenRenderTarget::SetNeedsFlush(this);
  CComposition::RestoreCursors(*v13);
  return (unsigned int)v12;
}
