/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18002C7A4
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x180189CD8 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18002C920 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18002DCE0 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180063B40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802E1100 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  __int64 v3; // rax
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct ISwapChainRealization *); // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  char *v11; // rcx
  __int64 (__fastcall *v12)(char *, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  unsigned int v14; // ebp
  CLegacySwapChain *v15; // rcx
  __int64 (__usercall *v16)@<rax>(CLegacySwapChain *@<rcx>, __int64); // rax
  _BYTE v18[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 2468);
  if ( v3
    && *(struct CCompositionSurfaceInfo **)(v3 + 16) == a2
    && *(_QWORD *)(*((_QWORD *)this + 2468) + 24LL) == (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    return 1;
  }
  v6 = *(_OWORD *)((char *)COverlayContext::GetMonitorTransform(this) + 24);
  v7 = *(_QWORD *)a3;
  *(_OWORD *)v19 = v6;
  v8 = *(__int64 (__fastcall **)(struct ISwapChainRealization *))(v7 + 128);
  if ( (char *)v8 == (char *)CBitmapRealization::CalcSourceRect )
    v9 = CBitmapRealization::CalcSourceRect(a3);
  else
    v9 = v8(a3);
  v10 = v9;
  v11 = (char *)a3 + 8;
  v12 = *(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a3 + 1) + 24LL);
  if ( (char *)v12 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
  {
    PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v11, v18);
  }
  else if ( (char *)v12 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
  {
    PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo(v11, v18);
  }
  else
  {
    PixelFormatInfo = v12(v11, v18);
  }
  v14 = *(_DWORD *)(PixelFormatInfo + 8);
  v15 = (CLegacySwapChain *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 280LL))(*(_QWORD *)this);
  v16 = *(__int64 (__usercall **)@<rax>(CLegacySwapChain *@<rcx>, __int64))(*(_QWORD *)v15 + 336LL);
  if ( v16 == CLegacySwapChain::CheckDirectFlipSupport )
    return CLegacySwapChain::CheckDirectFlipSupport(v15, (__int64)v19);
  else
    return ((__int64 (__fastcall *)(CLegacySwapChain *, char *, _QWORD, __int64, __int64 *))v16)(
             v15,
             (char *)a3 + 16,
             v14,
             v10,
             v19);
}
