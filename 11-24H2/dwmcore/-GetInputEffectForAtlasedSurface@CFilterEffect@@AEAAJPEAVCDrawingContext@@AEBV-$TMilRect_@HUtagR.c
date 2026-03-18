/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180291DBC
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18021925C (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800A65E4 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x1800A6660 (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801EDF70 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        ID2D1Effect **a5)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int ID2DEffect; // eax
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, __int64 *, __int64); // rsi
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  struct ID2D1Effect *v18; // rbx
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21; // eax
  ID2D1Effect *v22; // rsi
  unsigned int v24; // [rsp+20h] [rbp-51h]
  ID2D1Effect *v25; // [rsp+30h] [rbp-41h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h] BYREF
  __int64 v27; // [rsp+40h] [rbp-31h] BYREF
  struct ID2D1Effect *v28; // [rsp+48h] [rbp-29h] BYREF
  CD2DEffect *v29; // [rsp+50h] [rbp-21h] BYREF
  CD2DEffect *v30; // [rsp+58h] [rbp-19h] BYREF
  float v31[4]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v32; // [rsp+70h] [rbp-1h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp+Fh]

  v5 = a4 + 72;
  v6 = *(_QWORD *)(a4 + 72);
  v27 = 0LL;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(v6 + 64);
  v30 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  ID2DEffect = v9(v5, &v27);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 796;
    goto LABEL_18;
  }
  v12 = v27;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v27 + 112LL);
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v26);
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 16LL))(a2 + 24);
  LOBYTE(v16) = v14;
  ID2DEffect = v13(v12, v15, &v26, v16);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 800;
    goto LABEL_18;
  }
  ID2DEffect = CD2DContext::CreateD2DEffect((CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL), &CLSID_D2D1Crop, &v30);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 803;
    goto LABEL_18;
  }
  ID2DEffect = CD2DContext::CreateD2DEffect(
                 (CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL),
                 &CLSID_D2D12DAffineTransform,
                 &v29);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 806;
    goto LABEL_18;
  }
  ID2DEffect = CD2DEffect::GetID2DEffect(v30, &v28);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 808;
    goto LABEL_18;
  }
  v17 = CD2DEffect::GetID2DEffect(v29, &v25);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x32Au, 0LL);
    goto LABEL_19;
  }
  v18 = v28;
  v19 = (float)a3[2];
  v31[0] = (float)*a3;
  v20 = (float)a3[1];
  v31[2] = v19;
  v31[1] = v20;
  v31[3] = (float)a3[3];
  v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, float *, int))(*(_QWORD *)v28 + 72LL))(
          v28,
          0LL,
          0LL,
          v31,
          16);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x330u, 0LL);
    goto LABEL_19;
  }
  v22 = v25;
  v33 = _mm_unpacklo_ps(
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)*a3), (__m128)_xmm),
          _mm_xor_ps((__m128)COERCE_UNSIGNED_INT((float)a3[1]), (__m128)_xmm)).m128_u64[0];
  v32 = _xmm;
  ID2DEffect = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v25 + 72LL))(
                 v25,
                 2LL,
                 0LL,
                 &v32,
                 24);
  v11 = ID2DEffect;
  if ( ID2DEffect < 0 )
  {
    v24 = 824;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ID2DEffect, v24, 0LL);
    goto LABEL_19;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 112LL))(v18, 0LL, v26, 1LL);
  ID2D1Effect::SetInputEffect(v22, 0, v18);
  v25 = 0LL;
  *a5 = v22;
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  return v11;
}
