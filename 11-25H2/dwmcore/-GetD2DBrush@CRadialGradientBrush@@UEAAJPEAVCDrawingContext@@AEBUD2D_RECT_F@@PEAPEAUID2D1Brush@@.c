/*
 * XREFs of ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x18019F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x18019F500 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRadialGradientBrush::GetD2DBrush(
        CRadialGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v5; // xmm0_4
  __m128 v6; // xmm6
  __m128 v8; // xmm7
  __m128 v11; // xmm10
  __m128 v12; // xmm11
  int CurrentD2DRadialGradientBrush; // eax
  unsigned int v14; // ebx
  struct ID2D1Brush *v15; // rbx
  __int64 v16; // rcx
  struct ID2D1RadialGradientBrush *v17; // rcx
  float v19; // [rsp+38h] [rbp-59h] BYREF
  float v20; // [rsp+3Ch] [rbp-55h]
  struct ID2D1RadialGradientBrush *v21; // [rsp+40h] [rbp-51h] BYREF
  __int128 v22; // [rsp+48h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-39h]

  v5 = a3->right - a3->left;
  v6 = (__m128)*((unsigned int *)this + 62);
  v8 = (__m128)*((unsigned int *)this + 63);
  v11 = (__m128)*((unsigned int *)this + 66);
  v12 = (__m128)*((unsigned int *)this + 67);
  v21 = 0LL;
  v19 = v5;
  v20 = a3->bottom - a3->top;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  CurrentD2DRadialGradientBrush = CGradientBrush::GetCurrentD2DRadialGradientBrush(this, a2, &v21);
  v14 = CurrentD2DRadialGradientBrush;
  if ( CurrentD2DRadialGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CurrentD2DRadialGradientBrush, 0xDCu, 0LL);
    v17 = v21;
  }
  else
  {
    if ( *((_DWORD *)this + 57) == 1 )
    {
      v6.m128_f32[0] = (float)(v6.m128_f32[0] * v19) + a3->left;
      v8.m128_f32[0] = (float)(v8.m128_f32[0] * v20) + a3->top;
      v11.m128_f32[0] = v11.m128_f32[0] * v19;
      v12.m128_f32[0] = v12.m128_f32[0] * v20;
    }
    v15 = v21;
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v21 + 64LL))(
      v21,
      _mm_unpacklo_ps(v6, v8).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v15 + 80LL))(v15);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v15 + 88LL))(v15);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v15 + 72LL))(
      v15,
      _mm_unpacklo_ps(v11, v12).m128_u64[0]);
    v16 = *((_QWORD *)this + 27);
    v23 = 0LL;
    if ( v16 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v16 + 208LL))(v16, &v19, &v22);
    }
    else
    {
      v22 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v15 + 40LL))(v15, &v22);
    v17 = 0LL;
    *a4 = v15;
    v14 = 0;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v17 + 16LL))(v17);
  return v14;
}
