/*
 * XREFs of ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C7630 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180083F80 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?GetTargetSyncLockCount@CTargetStats@@QEBAIXZ @ 0x180086970 (-GetTargetSyncLockCount@CTargetStats@@QEBAIXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1800C50B0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?SyncLock@CDDisplayRenderTarget@@UEAAXI@Z @ 0x1800C52C0 (-SyncLock@CDDisplayRenderTarget@@UEAAXI@Z.c)
 *     CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___ @ 0x1800C59E8 (CDebugFrameCounter--RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1800C9820 (-IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
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
  if ( *((_DWORD *)this + 7794) || v7 )
  {
    v8 = *((_BYTE *)this + 33472);
    TargetSyncLockCount = CTargetStats::GetTargetSyncLockCount((CDDisplayRenderTarget *)((char *)this + 33528));
    if ( TargetSyncLockCount )
      CDDisplayRenderTarget::SyncLock((CDDisplayRenderTarget *)((char *)this + 160), TargetSyncLockCount);
    if ( v7 )
      COverlaySwapChain::CopyFrontToBackBuffer((COverlaySwapChain *)(*((_QWORD *)this + 26) + 24LL));
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 26) + 464LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this + 26) + 524LL))
                    + 216LL);
    v11 = CDrawingContext::BeginFrame(
            (__int64)a2,
            (v10 + 16) & -(__int64)(v10 != 0),
            (__int64)this + (*((_BYTE *)this + 19697) != 0 ? 31084LL : 30948LL),
            (CDDisplayRenderTarget *)((char *)this + 140),
            1u,
            (_QWORD *)this + 28);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2C4u, 0LL);
    }
    else
    {
      if ( *((_DWORD *)this + 7794) && (v12 = CDDisplayRenderTarget::RenderDirtyRegion(this, a2, v6), v3 = v12, v12 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2D2u, 0LL);
      }
      else if ( (v7 || v8 && v6) && (v17 = CDDisplayRenderTarget::RenderComposeTop(this, a2, v6, v8), v3 = v17, v17 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2DAu, 0LL);
      }
      else if ( CDDisplayRenderTarget::IsPrimaryMonitor((CDDisplayRenderTarget *)((char *)this + 160)) )
      {
        v13 = CDebugFrameCounter::RenderGlobalFrameCounter__lambda_586b8124a7a66c0b83ac918785996de3___(
                (__int64)a2,
                (int *)this + 30,
                (__int64)this + 30896,
                this);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2E9u, 0LL);
      }
      v14 = CDrawingContext::EndFrame(a2);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2F0u, 0LL);
      if ( !v3 || v3 >= 0 && v15 < 0 )
        return (unsigned int)v15;
    }
  }
  return (unsigned int)v3;
}
