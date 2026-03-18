/*
 * XREFs of ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802CD304
 * Callers:
 *     ?GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C4360 (-GetD2DBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C43F0 (-GetBitmap@CD2DBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801C4488 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C466C (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureIgnoreAlphaBitmap(CD2DBitmap *this)
{
  __int64 *v1; // rsi
  unsigned int v3; // ebx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 **); // rcx
  int v5; // eax
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int128 v11; // xmm1
  __int64 (__fastcall *v12)(CD2DBitmap *); // rax
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-30h]
  D2D1_BITMAP_PROPERTIES1 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+70h] [rbp+20h] BYREF
  struct IDXGISurface *v19; // [rsp+78h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    return 0;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 13);
  if ( !v4 )
  {
    v3 = -2003292412;
    v6 = -2003292412;
    v16 = 522;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)this + 44) & 0x400000) != 0 )
  {
    v5 = CD2DBitmap::EnsureBitmap((const struct D2D1_BITMAP_PROPERTIES1 *)this);
    v3 = v5;
    if ( v5 >= 0 )
      return v3;
    v16 = 517;
LABEL_8:
    v6 = v5;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v16, 0LL);
    return v3;
  }
  if ( *((_DWORD *)this + 49) == 3 )
  {
    v5 = CD2DBitmap::EnsureBitmap((const struct D2D1_BITMAP_PROPERTIES1 *)this);
    v3 = v5;
    if ( v5 >= 0 )
      return v3;
    v16 = 495;
    goto LABEL_8;
  }
  v18 = 0LL;
  v7 = (**v4)(v4, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, &v18);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1F4u, 0LL);
  }
  else
  {
    v8 = *((unsigned int *)this + 58);
    v9 = *v18;
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IDXGISurface **))(v9 + 96))(v18, v8, &v19);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1F8u, 0LL);
    }
    else
    {
      v11 = *((_OWORD *)this + 13);
      v12 = *(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL);
      *(_OWORD *)&v17.pixelFormat.format = *((_OWORD *)this + 12);
      v17.pixelFormat.alphaMode = D2D1_ALPHA_MODE_IGNORE;
      *(_OWORD *)&v17.bitmapOptions = v11;
      v13 = v12(this);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
      v14 = CD2DContext::CreateD2DBitmapFromDxgiSurface(
              (CD2DContext *)(v13 + 16),
              v19,
              &v17,
              (struct ID2D1Bitmap1 **)v1);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1FFu, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v3;
}
