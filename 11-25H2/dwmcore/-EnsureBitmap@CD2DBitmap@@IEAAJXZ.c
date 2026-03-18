/*
 * XREFs of ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801D6A18
 * Callers:
 *     ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801D68F0 (-GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801D6980 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802D6574 (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18018C0C0 (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801D6BFC (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ??4?$com_ptr_t@UID2D1Bitmap1@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18022ACB8 (--4-$com_ptr_t@UID2D1Bitmap1@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureBitmap(const struct D2D1_BITMAP_PROPERTIES1 *this)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  CComposition *v5; // rcx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD, struct IDXGISurface **); // rdi
  int v10; // eax
  __int64 v11; // rbx
  int D2DBitmapFromDxgiSurface; // eax
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v14)(struct IBitmapResource *, struct IDXGISurface **); // rbx
  int v15; // eax
  struct IDXGISurface *v16; // rbx
  HRESULT (__stdcall *SetPrivateData)(IDXGISurface *, const GUID *const, UINT, const void *); // rdi
  int v18; // eax
  _BYTE v19[8]; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+38h] [rbp-18h]
  int v21; // [rsp+3Ch] [rbp-14h]
  int v22; // [rsp+40h] [rbp-10h]
  char v23; // [rsp+44h] [rbp-Ch]
  __int16 v24; // [rsp+45h] [rbp-Bh]
  char v25; // [rsp+47h] [rbp-9h]
  struct IDXGISurface *v26; // [rsp+80h] [rbp+30h] BYREF
  __int64 v27; // [rsp+88h] [rbp+38h] BYREF

  v1 = (__int64 *)&this[4];
  if ( this[4].pixelFormat )
  {
    return 0;
  }
  else
  {
    v5 = *(CComposition **)&this[3].dpiX;
    if ( !v5 )
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1D9u, 0LL);
      return v3;
    }
    v6 = (this[5].bitmapOptions & 0x400000) == 0;
    v26 = 0LL;
    if ( v6 )
    {
      v27 = 0LL;
      v7 = (**(__int64 (__fastcall ***)(CComposition *, GUID *, __int64 *))v5)(
             v5,
             &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
             &v27);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1B7u, 0LL);
      }
      else
      {
        v8 = v27;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGISurface **))(*(_QWORD *)v27 + 96LL);
        if ( v26 )
          ((void (__fastcall *)(struct IDXGISurface *))v26->lpVtbl->Release)(v26);
        v10 = v9(v8, LODWORD(this[7].dpiX), &v26);
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1BAu, 0LL);
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(const struct D2D1_BITMAP_PROPERTIES1 *))(*(_QWORD *)&this->pixelFormat + 40LL))(this);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
          D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                                       (CD2DContext *)(v11 + 16),
                                       v26,
                                       this + 6,
                                       (struct ID2D1Bitmap1 **)v1);
          v3 = D2DBitmapFromDxgiSurface;
          if ( D2DBitmapFromDxgiSurface < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DBitmapFromDxgiSurface, 0x1BEu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
            return v3;
          }
          if ( this[6].pixelFormat.alphaMode == D2D1_ALPHA_MODE_IGNORE )
            wil::com_ptr_t<ID2D1Bitmap1,wil::err_returncode_policy>::operator=(&this[4].dpiX, v1);
        }
      }
      if ( v26 )
        ((void (__fastcall *)(struct IDXGISurface *))v26->lpVtbl->Release)(v26);
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    else
    {
      StockBlackBitmap = CComposition::GetStockBlackBitmap(v5);
      v14 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IDXGISurface **))(*(_QWORD *)StockBlackBitmap
                                                                                       + 64LL);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v26);
      v15 = v14(StockBlackBitmap, &v26);
      v3 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x1CCu, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(const struct D2D1_BITMAP_PROPERTIES1 *, _BYTE *))(*(_QWORD *)&this->pixelFormat + 64LL))(
          this,
          v19);
        v16 = v26;
        v20 = -1;
        v22 = 0;
        v21 = 0;
        v23 = 0;
        v24 = 0;
        v25 = 0;
        SetPrivateData = v26->lpVtbl[1].SetPrivateData;
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
        v18 = ((__int64 (__fastcall *)(struct IDXGISurface *, _BYTE *, __int64 *, _QWORD))SetPrivateData)(
                v16,
                v19,
                v1,
                0LL);
        v3 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x1D3u, 0LL);
        else
          wil::com_ptr_t<ID2D1Bitmap1,wil::err_returncode_policy>::operator=(&this[4].dpiX, v1);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
    }
  }
  return v3;
}
