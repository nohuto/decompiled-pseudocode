/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180117910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180118110 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180118418 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int CachedEffectNoRef; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm7
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __m128 v16; // xmm6
  struct ID2D1Effect *v17; // rdi
  int v18; // eax
  int v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  int v23; // eax
  __int64 v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  struct D2D_POINT_2F v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+44h] [rbp-BCh]
  __int128 v31; // [rsp+54h] [rbp-ACh]
  int v32; // [rsp+64h] [rbp-9Ch]
  struct D2D_RECT_F v33; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v34[15]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int32 v35; // [rsp+12Ch] [rbp+2Ch]
  __int32 v36; // [rsp+130h] [rbp+30h]
  unsigned __int32 v37; // [rsp+134h] [rbp+34h]
  unsigned __int32 v38; // [rsp+138h] [rbp+38h]
  unsigned __int32 v39; // [rsp+13Ch] [rbp+3Ch]

  v27 = 0LL;
  v32 = 0;
  v4 = (__int64 *)*((_QWORD *)this + 1);
  v30 = 0LL;
  v5 = *v4;
  v28 = 0LL;
  v31 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v5 + 152))(v4, &v28, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 52;
    goto LABEL_22;
  }
  CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(*((_QWORD *)a2 + 5) + 16LL, 0LL, &v27);
  v7 = CachedEffectNoRef;
  if ( CachedEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedEffectNoRef, 0x37u, 0LL);
    goto LABEL_14;
  }
  v29 = 6;
  *(_QWORD *)&v30 = 0x1FF000000LL;
  v6 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v29, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 70;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v26, 0LL);
    goto LABEL_14;
  }
  v9 = *((_QWORD *)this + 15);
  v10 = *((_QWORD *)this + 1) + 8LL;
  v11 = *(__m128 *)(v9 + 72);
  v12 = *(__m128 *)(v9 + 88);
  v13 = *(__m128 *)(v9 + 152);
  v14 = *(__m128 *)(v9 + 104);
  v15 = *(__m128 *)(v9 + 120);
  v16 = *(__m128 *)(v9 + 136);
  v34[0] = v11.m128_i32[0];
  v34[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v34[4] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  v34[8] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  v34[11] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  v34[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
  v34[14] = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
  v34[5] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  v34[7] = v14.m128_i32[0];
  v34[10] = v15.m128_i32[0];
  v34[13] = v16.m128_i32[0];
  v36 = v13.m128_i32[0];
  v39 = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  v34[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  v34[6] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
  v34[9] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  v34[12] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
  v35 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
  v37 = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v38 = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v10 + 24LL))(v10, &v33) + 4) == 3 )
  {
    v35 = 0;
    v39 = 1065353216;
  }
  v17 = (struct ID2D1Effect *)v27;
  v18 = (*(__int64 (__fastcall **)(struct D2D_POINT_2F, _QWORD, _QWORD, _DWORD *, int))(**(_QWORD **)&v27 + 72LL))(
          v27,
          0LL,
          0LL,
          v34,
          80);
  v7 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x6Fu, 0LL);
  }
  else
  {
    LODWORD(v27.x) = 2;
    v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct D2D_POINT_2F *, int))(*(_QWORD *)v17 + 72LL))(
            v17,
            1LL,
            0LL,
            &v27,
            4);
    v7 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x72u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v17 + 112LL))(
        v17,
        0LL,
        v28,
        1LL);
      if ( g_LockAndReadLayer )
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 112LL))(
          v25,
          -(__int64)(a2 != 0LL) & ((unsigned __int64)a2 + 24));
      }
      v20 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
      v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
      v33.left = 0.0;
      v33.top = 0.0;
      LODWORD(v33.right) = _mm_cvtepi32_ps(v20).m128_u32[0];
      v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
      LODWORD(v33.bottom) = _mm_cvtepi32_ps(v21).m128_u32[0];
      *(float *)v21.m128i_i32 = (float)*((int *)this + 5);
      LODWORD(v27.x) = _mm_cvtepi32_ps(v22).m128_u32[0];
      LODWORD(v27.y) = v21.m128i_i32[0];
      v23 = CDrawingContext::FillEffect(a2, v17, &v33, &v27, 1);
      v7 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x8Cu, 0LL);
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 112LL))(
        v17,
        0LL,
        0LL,
        1LL);
    }
  }
  CDrawingContext::PopRenderOptionsInternal(a2, 1);
LABEL_14:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v7;
}
