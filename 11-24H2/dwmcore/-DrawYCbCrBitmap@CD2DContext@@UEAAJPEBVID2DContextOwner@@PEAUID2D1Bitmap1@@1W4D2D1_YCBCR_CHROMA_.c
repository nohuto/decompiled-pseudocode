/*
 * XREFs of ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1802BB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800F58F4 (-TranslateDXGIorD3DErrorInContext@CD2DContext@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800F5F44 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E99D0 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawYCbCrBitmap(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Bitmap1 *a4,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a5,
        const struct D2D_RECT_F *a6,
        float a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_COMPOSITE_MODE a9)
{
  const struct D2D_RECT_F *v9; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // ebx
  int v18; // r8d
  int v19; // eax
  __m128i v20; // xmm0
  ID2D1DeviceContext *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-B1h]
  struct ID2D1Effect *v24; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v26[5]; // [rsp+40h] [rbp-91h] BYREF
  float v27; // [rsp+68h] [rbp-69h] BYREF
  __int128 v28; // [rsp+6Ch] [rbp-65h]
  int v29; // [rsp+7Ch] [rbp-55h]
  int v30; // [rsp+80h] [rbp-51h]
  __int128 v31; // [rsp+88h] [rbp-49h] BYREF
  __int64 v32; // [rsp+98h] [rbp-39h]
  __m128i v33; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-21h]
  enum D2D1_INTERPOLATION_MODE v35; // [rsp+B8h] [rbp-19h]

  v9 = a6;
  CD2DContext::FlushDrawList((CD2DContext *)this, (__int64)a2, (__int64)a3);
  v32 = 0LL;
  v16 = (__int64)(this + 137);
  v24 = 0LL;
  v26[0] = 0LL;
  if ( !this )
    v16 = 1112LL;
  v25 = 0LL;
  v31 = 0LL;
  if ( *(_DWORD *)v16 )
  {
    v17 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x391u, 0LL);
    goto LABEL_15;
  }
  CD2DContext::EnsureBeginDraw((CD2DContext *)this, v14, v15);
  (**(void (__fastcall ***)(const struct ID2DContextOwner *, __int128 *))a2)(a2, &v31);
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int128 *))(*(_QWORD *)this[25] + 240LL))(this[25], &v31);
  v19 = (*((__int64 (__fastcall **)(ID2D1DeviceContext **, __int64, struct ID2D1Effect **))*this + 25))(this, 5LL, &v24);
  v17 = v19;
  if ( v19 < 0 )
  {
    v23 = 920;
  }
  else
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v24 + 112LL))(
      v24,
      0LL,
      a3,
      1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v24 + 112LL))(
      v24,
      1LL,
      a4,
      1LL);
    v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, enum D2D1_YCBCR_CHROMA_SUBSAMPLING *, int))(*(_QWORD *)v24 + 72LL))(
            v24,
            0LL,
            0LL,
            &a5,
            4);
    v17 = v19;
    if ( v19 < 0 )
    {
      v23 = 924;
    }
    else
    {
      if ( a9 )
      {
        ID2D1DeviceContext::DrawImage(this[25], v24, 0LL, v9, a8, a9);
        goto LABEL_15;
      }
      CD2DContext::SetPrimitiveBlend((CD2DContext *)this, D2D1_PRIMITIVE_BLEND_SOURCE_OVER);
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)v24 + 144LL))(v24, &v25);
      v20 = _mm_loadu_si128((const __m128i *)v9);
      v21 = this[25];
      v29 = 0;
      v30 = 0;
      v33 = v20;
      v35 = a8;
      v28 = _xmm;
      v26[3] = 0LL;
      v34 = 0LL;
      v27 = a7;
      v19 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, __m128i *, float *, _QWORD *))(*(_QWORD *)v21 + 520LL))(
              v21,
              v25,
              &v33,
              &v27,
              v26);
      v17 = v19;
      if ( v19 >= 0 )
      {
        (*(void (__fastcall **)(ID2D1DeviceContext *, const struct D2D_RECT_F *, _QWORD))(*(_QWORD *)this[25] + 136LL))(
          this[25],
          v9,
          v26[0]);
        goto LABEL_15;
      }
      v23 = 946;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v23, 0LL);
LABEL_15:
  if ( v24 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, 0LL, 1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(
      v24,
      1LL,
      0LL,
      1LL);
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  return CD2DContext::TranslateDXGIorD3DErrorInContext((__int64)this, v17, v18);
}
