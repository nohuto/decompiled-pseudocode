/*
 * XREFs of ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180099730 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x180058390 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180063B90 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x180097250 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x180097998 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x18009B660 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801B0BE4 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18027F804 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Render(CDDisplayRenderTarget *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  struct CComposeTop *v6; // rbp
  bool v7; // r14
  char v8; // r12
  unsigned int TargetSyncLockCount; // eax
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v17; // eax

  v2 = *((_QWORD *)this + 24);
  v3 = 0;
  v6 = *(struct CComposeTop **)(v2 + 4488);
  v7 = v6 && CComposeTop::HasNewContent(*(CComposeTop **)(v2 + 4488));
  if ( *((_DWORD *)this + 7698) || v7 )
  {
    v8 = *((_BYTE *)this + 33088);
    TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CDDisplayRenderTarget *)((char *)this + 33144));
    if ( TargetSyncLockCount )
      CDDisplayRenderTarget::SyncLock((CDDisplayRenderTarget *)((char *)this + 160), TargetSyncLockCount);
    if ( v7 )
      COverlaySwapChain::CopyFrontToBackBuffer((COverlaySwapChain *)(*((_QWORD *)this + 26) + 24LL));
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 26) + 464LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this + 26) + 524LL))
                    + 216LL);
    v11 = CDrawingContext::BeginFrame(
            a2,
            (v10 + 16) & -(__int64)(v10 != 0),
            (char *)this + (*((_BYTE *)this + 19313) != 0 ? 30700LL : 30564LL),
            (char *)this + 140,
            1,
            (char *)this + 224);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x28Eu, 0LL);
    }
    else
    {
      if ( *((_DWORD *)this + 7698) && (v12 = CDDisplayRenderTarget::RenderDirtyRegion(this, a2, v6), v3 = v12, v12 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x29Cu, 0LL);
      }
      else if ( (v7 || v8 && v6) && (v17 = CDDisplayRenderTarget::RenderComposeTop(this, a2, v6, v8), v3 = v17, v17 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x2A4u, 0LL);
      }
      else if ( CDDisplayRenderTarget::IsPrimaryMonitor((CDDisplayRenderTarget *)((char *)this + 160)) )
      {
        v13 = CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___(
                (__int64)a2,
                (int *)this + 30,
                (__int64)this + 30512,
                this);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x2B3u, 0LL);
      }
      v14 = CDrawingContext::EndFrame((CD3DDevice **)a2);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x2BAu, 0LL);
      if ( !v3 || v3 >= 0 && v15 < 0 )
        return (unsigned int)v15;
    }
  }
  return (unsigned int)v3;
}
