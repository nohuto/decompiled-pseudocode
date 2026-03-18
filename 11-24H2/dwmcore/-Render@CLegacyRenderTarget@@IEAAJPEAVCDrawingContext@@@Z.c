/*
 * XREFs of ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A200 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x180058390 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180058460 (-GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180058490 (-GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800584AC (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180058890 (-UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18020CA50 (-GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18025FAAC (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x18025FB30 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18027E580 (_lambda_8d63a026ee05ea8998b7edda19b5853b_--operator().c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x18027ED9C (McTemplateU0qx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(CLegacyRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  struct CComposeTop *v5; // rsi
  bool v6; // r14
  char v8; // r13
  unsigned int TargetSyncLockCount; // eax
  __int64 v10; // rdi
  bool (__fastcall *v11)(CLegacyRenderTarget *__hidden); // rax
  bool v12; // al
  bool v13; // cl
  __int64 v14; // rax
  struct IOverlaySwapChain *v15; // rdx
  __int64 v16; // rcx
  CLegacyRenderTarget *v17; // rcx
  const struct CMILMatrix *(__fastcall *v18)(CLegacyRenderTarget *__hidden); // rax
  const struct CMILMatrix *DeviceTransform; // rax
  CLegacySwapChain *v20; // rcx
  const struct CMILMatrix *v21; // rdi
  __int64 (*v22)(void); // rax
  struct IDeviceTarget *BackBuffer; // rax
  int v24; // eax
  int v25; // edi
  __int64 (__fastcall *v26)(CLegacyRenderTarget *__hidden, struct CDrawingContext *, struct CComposeTop *); // rax
  int v27; // eax
  bool v28; // zf
  float v29; // xmm6_4
  int v30; // esi
  char *v31; // rdi
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  float v36; // xmm8_4
  float v37; // xmm7_4
  unsigned int FrameRate; // r14d
  unsigned int CPUTimePerFrame; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  struct D2D_RECT_F v43; // [rsp+40h] [rbp-19h] BYREF
  float v44; // [rsp+50h] [rbp-9h] BYREF
  float v45; // [rsp+54h] [rbp-5h]
  float v46; // [rsp+58h] [rbp-1h]
  float v47; // [rsp+5Ch] [rbp+3h]
  CLegacyRenderTarget *v48; // [rsp+C0h] [rbp+67h] BYREF

  v2 = *((_QWORD *)this + 23);
  v5 = *(struct CComposeTop **)(v2 + 4488);
  v6 = v5 && CComposeTop::HasNewContent(*(CComposeTop **)(v2 + 4488));
  if ( !*((_DWORD *)this + 7696) && !v6 )
    return 0LL;
  v8 = *((_BYTE *)this + 33080);
  TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CLegacyRenderTarget *)((char *)this + 33128));
  v10 = TargetSyncLockCount;
  if ( TargetSyncLockCount && *((_DWORD *)this + 8344) )
  {
    v11 = *(bool (__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)this + 216LL);
    if ( v11 == CLegacyRenderTarget::UseLegacyPresent )
      v12 = CLegacyRenderTarget::UseLegacyPresent(this);
    else
      v12 = v11(this);
    v13 = v12;
    v14 = *((_QWORD *)this + 25);
    v15 = (struct IOverlaySwapChain *)(v14 + 24);
    if ( !v14 )
      v15 = 0LL;
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 216),
                v15,
                v10,
                *((_DWORD *)this + 8334),
                v13) >= 0 )
    {
      *((_DWORD *)this + 8344) += v10;
      ++*((_DWORD *)this + 8345);
      v16 = *((_QWORD *)this + 4165);
      if ( v16 )
      {
        *((_QWORD *)this + 4165) = v16 + *((_QWORD *)this + 4166) * v10;
        *((_DWORD *)this + 8334) += v10;
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 128LL))(*((_QWORD *)this + 25) + 24LL);
  v17 = (CLegacyRenderTarget *)((char *)this + 88);
  v18 = *(const struct CMILMatrix *(__fastcall **)(CLegacyRenderTarget *__hidden))(*((_QWORD *)this + 11) + 64LL);
  if ( v18 == CLegacyRenderTarget::GetDeviceTransform )
    DeviceTransform = CLegacyRenderTarget::GetDeviceTransform(v17);
  else
    DeviceTransform = v18(v17);
  v20 = (CLegacySwapChain *)(*((_QWORD *)this + 25) + 24LL);
  v21 = DeviceTransform;
  v22 = *(__int64 (**)(void))(*(_QWORD *)v20 + 104LL);
  if ( (char *)v22 == (char *)CLegacySwapChain::GetBackBuffer )
  {
    BackBuffer = CLegacySwapChain::GetBackBuffer(v20);
  }
  else if ( (char *)v22 == (char *)CConversionSwapChain::GetBackBuffer )
  {
    BackBuffer = CConversionSwapChain::GetBackBuffer(v20);
  }
  else
  {
    BackBuffer = (struct IDeviceTarget *)v22();
  }
  v24 = CDrawingContext::BeginFrame(a2, BackBuffer, v21, (char *)this + 140, 1, (char *)this + 216);
  v25 = v24;
  if ( v24 >= 0 )
  {
    if ( *((_DWORD *)this + 7696)
      && ((v26 = *(__int64 (__fastcall **)(CLegacyRenderTarget *__hidden, struct CDrawingContext *, struct CComposeTop *))(*(_QWORD *)this + 240LL),
           v26 != CLegacyRenderTarget::RenderDirtyRegion)
        ? (v27 = v26(this, a2, v5))
        : (v27 = CLegacyRenderTarget::RenderDirtyRegion(this, a2, v5)),
          v25 = v27,
          v27 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1B3u, 0LL);
    }
    else
    {
      v28 = *((_BYTE *)this + 31224) == 0xFF;
      *((_DWORD *)this + 7696) = 0;
      *((_BYTE *)this + 31220) = 0;
      if ( !v28 )
        *((_BYTE *)this + 31224) = 0;
      *((_WORD *)this + 16540) = 0;
      if ( v6 || v8 && v5 )
      {
        v34 = CLegacyRenderTarget::RenderComposeTop(this, a2, v5, v8);
        v25 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1BDu, 0LL);
          goto LABEL_35;
        }
      }
      v29 = 0.0;
      if ( *((float *)this + 7628) != 0.0 || *((float *)this + 7629) != 0.0 || !*((_BYTE *)this + 33514) )
        goto LABEL_35;
      v30 = 0;
      v48 = this;
      v31 = (char *)g_pComposition + 1008;
      if ( g_pComposition != (CGlobalComposition *)-1008LL && *((_BYTE *)g_pComposition + 1016) )
      {
        v35 = *((_DWORD *)this + 30);
        v45 = 0.0;
        v44 = 0.0;
        v36 = (float)v35;
        v37 = (float)*((int *)this + 31);
        v46 = (float)v35;
        v43 = 0LL;
        v47 = v37;
        FrameRate = CDebugFrameCounter::GetFrameRate((CGlobalComposition *)((char *)g_pComposition + 1008));
        CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v31);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qx_EventWriteTransfer(v41, v40, FrameRate, CPUTimePerFrame);
        if ( v31 != (char *)-4632LL )
        {
          v42 = CDisplayDebugFrameCounter::Display(
                  (CDisplayDebugFrameCounter *)(v31 + 4632),
                  FrameRate,
                  (__int64)this + 30556,
                  (__int64)&v44,
                  (void *)(CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0),
                  (__int64)&v43);
          v30 = v42;
          v25 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x96u, 0LL);
            goto LABEL_57;
          }
          v37 = v47;
          v36 = v46;
          v29 = v45;
          if ( v44 > v43.left )
            v43.left = v44;
        }
        if ( v29 > v43.top )
          v43.top = v29;
        if ( v43.right > v36 )
          v43.right = v36;
        if ( v43.bottom > v37 )
          v43.bottom = v37;
        if ( IsEmpty(&v43) )
        {
          *(_QWORD *)&v43.right = 0LL;
          *(_QWORD *)&v43.left = 0LL;
        }
        if ( !IsEmpty(&v43) )
          lambda_8d63a026ee05ea8998b7edda19b5853b_::operator()(&v48, &v43);
      }
      v25 = v30;
      if ( v30 < 0 )
LABEL_57:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1CCu, 0LL);
    }
LABEL_35:
    v32 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v33 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x1D3u, 0LL);
    if ( !v25 || v25 >= 0 && v33 < 0 )
      return (unsigned int)v33;
    return (unsigned int)v25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1A5u, 0LL);
  return (unsigned int)v25;
}
