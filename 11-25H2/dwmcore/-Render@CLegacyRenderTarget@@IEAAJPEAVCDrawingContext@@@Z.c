/*
 * XREFs of ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570
 * Callers:
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C81C0 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ @ 0x180085CE0 (-UseLegacyPresent@CLegacyRenderTarget@@MEBA_NXZ.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180086520 (-GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180086540 (-GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x180086970 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180218F50 (-GetBackBuffer@CConversionSwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1802677DC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x1802699EC (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180269A70 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18028959C (_lambda_8d63a026ee05ea8998b7edda19b5853b_--operator().c)
 *     McTemplateU0qx_EventWriteTransfer @ 0x180289DDC (McTemplateU0qx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(__m128i *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  struct CComposeTop *v5; // rsi
  bool v6; // r14
  char v8; // r13
  unsigned int TargetSyncLockCount; // eax
  __int64 v10; // rdi
  bool (__fastcall *v11)(CLegacyRenderTarget *); // rax
  bool v12; // al
  bool v13; // cl
  __int64 v14; // rax
  struct IOverlaySwapChain *v15; // rdx
  __int64 v16; // rcx
  CLegacyRenderTarget *v17; // rcx
  const struct CMILMatrix *(__fastcall *v18)(CLegacyRenderTarget *); // rax
  const struct CMILMatrix *DeviceTransform; // rax
  CLegacySwapChain *v20; // rcx
  const struct CMILMatrix *v21; // rdi
  __int64 (*v22)(void); // rax
  struct IDeviceTarget *BackBuffer; // rax
  int v24; // eax
  int v25; // edi
  __int64 (__fastcall *v26)(CLegacyRenderTarget *, struct CDrawingContext *, struct CComposeTop *); // rax
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
  __m128i *v48; // [rsp+C0h] [rbp+67h] BYREF

  v2 = this[11].m128i_i64[1];
  v5 = *(struct CComposeTop **)(v2 + 4488);
  v6 = v5 && CComposeTop::HasNewContent(*(CComposeTop **)(v2 + 4488));
  if ( !this[1948].m128i_i32[0] && !v6 )
    return 0LL;
  v8 = this[2091].m128i_i8[8];
  TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CTargetStats *)&this[2094].m128i_u64[1]);
  v10 = TargetSyncLockCount;
  if ( TargetSyncLockCount && this[2110].m128i_i32[0] )
  {
    v11 = *(bool (__fastcall **)(CLegacyRenderTarget *))(this->m128i_i64[0] + 216);
    if ( v11 == CLegacyRenderTarget::UseLegacyPresent )
      v12 = CLegacyRenderTarget::UseLegacyPresent((CLegacyRenderTarget *)this);
    else
      v12 = v11((CLegacyRenderTarget *)this);
    v13 = v12;
    v14 = this[12].m128i_i64[1];
    v15 = (struct IOverlaySwapChain *)(v14 + 24);
    if ( !v14 )
      v15 = 0LL;
    if ( (int)COverlayContext::SyncLock(
                (COverlayContext *)&this[13].m128i_u64[1],
                v15,
                v10,
                this[2107].m128i_i32[2],
                v13) >= 0 )
    {
      this[2110].m128i_i32[0] += v10;
      ++this[2110].m128i_i32[1];
      v16 = this[2106].m128i_i64[1];
      if ( v16 )
      {
        this[2106].m128i_i64[1] = v16 + this[2107].m128i_i64[0] * v10;
        this[2107].m128i_i32[2] += v10;
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(this[12].m128i_i64[1] + 24) + 128LL))(this[12].m128i_i64[1] + 24);
  v17 = (CLegacyRenderTarget *)&this[5].m128i_u64[1];
  v18 = *(const struct CMILMatrix *(__fastcall **)(CLegacyRenderTarget *))(this[5].m128i_i64[1] + 64);
  if ( v18 == CLegacyRenderTarget::GetDeviceTransform )
    DeviceTransform = CLegacyRenderTarget::GetDeviceTransform(v17);
  else
    DeviceTransform = v18(v17);
  v20 = (CLegacySwapChain *)(this[12].m128i_i64[1] + 24);
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
  v24 = CDrawingContext::BeginFrame(a2, BackBuffer, v21, (char *)&this[8].m128i_u64[1] + 4, 1, &this[13].m128i_u64[1]);
  v25 = v24;
  if ( v24 >= 0 )
  {
    if ( this[1948].m128i_i32[0]
      && ((v26 = *(__int64 (__fastcall **)(CLegacyRenderTarget *, struct CDrawingContext *, struct CComposeTop *))(this->m128i_i64[0] + 240),
           v26 != CLegacyRenderTarget::RenderDirtyRegion)
        ? (v27 = v26((CLegacyRenderTarget *)this, a2, v5))
        : (v27 = CLegacyRenderTarget::RenderDirtyRegion((CLegacyRenderTarget *)this, a2, v5)),
          v25 = v27,
          v27 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1BAu, 0LL);
    }
    else
    {
      v28 = this[1975].m128i_i8[8] == -1;
      this[1948].m128i_i32[0] = 0;
      this[1975].m128i_i8[4] = 0;
      if ( !v28 )
        this[1975].m128i_i8[8] = 0;
      this[2091].m128i_i16[4] = 0;
      if ( v6 || v8 && v5 )
      {
        v34 = CLegacyRenderTarget::RenderComposeTop(this, a2, v5, v8);
        v25 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x1C4u, 0LL);
          goto LABEL_35;
        }
      }
      v29 = 0.0;
      if ( *(float *)this[1931].m128i_i32 != 0.0
        || *(float *)&this[1931].m128i_i32[1] != 0.0
        || !this[2118].m128i_i8[10] )
      {
        goto LABEL_35;
      }
      v30 = 0;
      v48 = this;
      v31 = (char *)g_pComposition + 1008;
      if ( g_pComposition != (CGlobalComposition *)-1008LL && *((_BYTE *)g_pComposition + 1016) )
      {
        v35 = this[7].m128i_i32[2];
        v45 = 0.0;
        v44 = 0.0;
        v36 = (float)v35;
        v37 = (float)this[7].m128i_i32[3];
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
                  (__int64)&this[1933].m128i_i64[1] + 4,
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1D3u, 0LL);
    }
LABEL_35:
    v32 = CDrawingContext::EndFrame(a2);
    v33 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x1DAu, 0LL);
    if ( !v25 || v25 >= 0 && v33 < 0 )
      return (unsigned int)v33;
    return (unsigned int)v25;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1ACu, 0LL);
  return (unsigned int)v25;
}
