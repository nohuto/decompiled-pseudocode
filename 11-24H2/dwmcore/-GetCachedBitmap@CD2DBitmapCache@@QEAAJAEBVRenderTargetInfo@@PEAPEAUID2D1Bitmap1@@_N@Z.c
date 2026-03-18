/*
 * XREFs of ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801990D8
 * Callers:
 *     ?GetD2DBitmap@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180224A00 (-GetD2DBitmap@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D6F30 (-GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D76D0 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D7C10 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D8660 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D8C70 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802DAB80 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedBitmap(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  char v5; // r9
  int v7; // r8d
  struct _LUID v9; // rdx
  int BitmapInternal; // eax
  CComposition *v11; // rcx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  struct IBitmapResource *StockBlackBitmap; // rsi
  __int64 (__fastcall *v18)(struct IBitmapResource *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp+40h] BYREF

  *a3 = 0LL;
  v23 = 0LL;
  v5 = *((_BYTE *)a2 + 20);
  v7 = *((_DWORD *)a2 + 2);
  v9 = *(struct _LUID *)a2;
  LOBYTE(v22) = 0;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(this, v9, v7, v5, &v23, &v22);
  v13 = v23;
  v14 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x88u, 0LL);
  }
  else if ( (_BYTE)v22 )
  {
    v22 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v11);
    v18 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v22);
    v19 = v18(StockBlackBitmap, &v22);
    v14 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x90u, 0LL);
    }
    else
    {
      LOBYTE(v20) = a4;
      v21 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v22 + 112LL))(
              v22,
              a2,
              a3,
              v20);
      v14 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x95u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  }
  else
  {
    LOBYTE(v12) = a4;
    v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v23 + 168LL))(
            v23,
            a3,
            v12);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x99u, 0LL);
  }
  if ( v13 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
  return v14;
}
