/*
 * XREFs of ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C33F8 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x18023EBE0 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x18023EE50 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180289B20 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C2D54 (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C2DFC (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C2F58 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::UpdateMPOCaps(CLegacyRenderTarget *this)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  int updated; // eax
  int v6; // ebx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 24) + 280LL))(v3 + 24);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x10Fu, 0LL);
    updated = COverlayContext::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 56));
    v6 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x110u, 0LL);
    if ( !v2 || v2 >= 0 && v6 < 0 )
      v2 = v6;
    CLegacyRenderTarget::UpdateAlphaMode((CLegacyRenderTarget *)((char *)this - 160));
    CLegacyRenderTarget::CheckForceParallelMode((CLegacyRenderTarget *)((char *)this - 160));
  }
  return (unsigned int)v2;
}
