/*
 * XREFs of ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x180276FD4
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D664 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18002CF40 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 */

char __fastcall COverlayContext::IsCandidateSupportedSingleton(__int64 *a1, __int64 a2)
{
  COverlayContext **v2; // r8
  COverlayContext **v4; // rbx
  __int64 v5; // rax
  COverlayContext **v6; // rsi
  struct _D3DCOLORVALUE *v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (COverlayContext **)a2;
  if ( *(_BYTE *)(a2 + 368) || *(_BYTE *)(a2 + 367) )
    return 1;
  v4 = (COverlayContext **)a1[1];
  v9[1] = &v10;
  v5 = *a1;
  v9[0] = 1LL;
  v6 = &v4[v5];
  if ( v4 != v6 )
  {
    while ( 1 )
    {
      v7 = (struct _D3DCOLORVALUE *)v9;
      if ( *v2 != *v4 )
        v7 = (struct _D3DCOLORVALUE *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue;
      COverlayContext::DeriveDesktopPlaneAttributes(*v4, v7, *((_BYTE *)*v4 + 19796));
      if ( ++v4 == v6 )
        break;
      v2 = (COverlayContext **)v10;
    }
  }
  if ( COverlayContext::CheckMultiPlaneOverlaySupport(a1, (unsigned int *)v9) )
  {
    *(_BYTE *)(v10 + 367) = 1;
    return 1;
  }
  return 0;
}
