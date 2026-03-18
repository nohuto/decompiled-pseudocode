/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18005ED4C
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18005E784 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002A800 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005EFA0 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800602A0 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802D7E60 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _DWORD *(__fastcall *v12)(__int64, _DWORD *); // rax
  _DWORD *PixelFormatInfo; // rax
  unsigned int v14; // ebp
  CLegacySwapChain *v15; // rcx
  __int64 (__usercall *v16)@<rax>(CLegacySwapChain *@<rcx>, __int64); // rax
  _DWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 2439);
  if ( v3
    && *(struct CCompositionSurfaceInfo **)(v3 + 16) == a2
    && *(_QWORD *)(*((_QWORD *)this + 2439) + 24LL) == (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
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
  v12 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*((_QWORD *)a3 + 1) + 24LL);
  if ( v12 == CDxHandleBitmapRealization::GetPixelFormatInfo )
  {
    PixelFormatInfo = CDxHandleBitmapRealization::GetPixelFormatInfo((__int64)v11, v18);
  }
  else if ( (char *)v12 == (char *)CDxHandleBitmapRealization::GetPixelFormatInfo )
  {
    PixelFormatInfo = (_DWORD *)CDxHandleBitmapRealization::GetPixelFormatInfo(v11, v18);
  }
  else
  {
    PixelFormatInfo = v12((__int64)v11, v18);
  }
  v14 = PixelFormatInfo[2];
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
