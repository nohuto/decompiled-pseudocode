/*
 * XREFs of ?GetBounds@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180293D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetBounds(const __m128i *a1, __int64 a2, struct D2D_RECT_F *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // eax
  __m128 v8; // xmm1
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4

  v4 = 0;
  v5 = a1[6].m128i_i64[1];
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x35u, 0LL);
    }
    else
    {
      v8 = (__m128)_mm_loadu_si128(a1 + 7);
      if ( v8.m128_f32[0] > a3->left )
        LODWORD(a3->left) = v8.m128_i32[0];
      v9 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
      if ( v9 > a3->top )
        a3->top = v9;
      v10 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
      if ( a3->right > v10 )
        a3->right = v10;
      v11 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
      if ( a3->bottom > v11 )
        a3->bottom = v11;
      if ( IsEmpty(a3) )
      {
        a3->bottom = 0.0;
        a3->right = 0.0;
        a3->top = 0.0;
        a3->left = 0.0;
      }
    }
  }
  else
  {
    a3->bottom = 0.0;
    a3->right = 0.0;
    a3->top = 0.0;
    a3->left = 0.0;
  }
  return v4;
}
