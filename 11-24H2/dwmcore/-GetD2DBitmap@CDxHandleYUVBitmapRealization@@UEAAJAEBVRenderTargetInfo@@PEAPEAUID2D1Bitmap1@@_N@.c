/*
 * XREFs of ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D90B0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D9200 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005D3C0 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D76D0 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetD2DBitmap(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int v8; // eax
  unsigned int D2DBitmap; // ebx
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v11)(struct IBitmapResource *, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_BYTE *)this + 313) )
  {
    v8 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 80));
    D2DBitmap = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x149u, 0LL);
      return D2DBitmap;
    }
    if ( !*(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
    {
      *a3 = 0LL;
      D2DBitmap = -2003292412;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DBitmap, 0x14Du, 0LL);
      return D2DBitmap;
    }
    D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL), a2, a3, a4);
    if ( (D2DBitmap & 0x80000000) != 0 )
      goto LABEL_7;
  }
  else
  {
    v15 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(this);
    v11 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v15);
    v12 = v11(StockBlackBitmap, &v15);
    D2DBitmap = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x154u, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct ID2D1Bitmap1 **, _QWORD))(*(_QWORD *)v15 + 112LL))(
              v15,
              a2,
              a3,
              0LL);
      D2DBitmap = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x156u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  }
  return D2DBitmap;
}
