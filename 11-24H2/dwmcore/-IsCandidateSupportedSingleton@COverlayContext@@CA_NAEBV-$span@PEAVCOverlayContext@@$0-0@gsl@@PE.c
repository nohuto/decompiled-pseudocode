/*
 * XREFs of ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x18026C468
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180232AB8 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18005F5C0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 */

char __fastcall COverlayContext::IsCandidateSupportedSingleton(__int64 *a1, __int64 a2)
{
  COverlayContext **v2; // r8
  COverlayContext **v5; // rbx
  __int64 v6; // rax
  COverlayContext **v7; // rsi
  struct _D3DCOLORVALUE *v8; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  COverlayContext **v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = (COverlayContext **)a2;
  v2 = (COverlayContext **)a2;
  if ( *(_BYTE *)(a2 + 367) )
    return 1;
  v5 = (COverlayContext **)a1[1];
  v9[1] = &v10;
  v6 = *a1;
  v9[0] = 1LL;
  v7 = &v5[v6];
  if ( v5 != v7 )
  {
    while ( 1 )
    {
      v8 = (struct _D3DCOLORVALUE *)v9;
      if ( *v2 != *v5 )
        v8 = (struct _D3DCOLORVALUE *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue;
      COverlayContext::DeriveDesktopPlaneAttributes(*v5, v8, *((_BYTE *)*v5 + 19608));
      if ( ++v5 == v7 )
        break;
      v2 = v10;
    }
  }
  return COverlayContext::CheckMultiPlaneOverlaySupport(a1, (unsigned int *)v9);
}
