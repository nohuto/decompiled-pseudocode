/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18006F4D0
 * Callers:
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18006F300 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010B4B0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CCachedVisualImage::GetSize(__m128 *this, __int64 a2, double a3)
{
  unsigned __int64 v4; // rax
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  unsigned __int64 v9; // rax
  __m128 v10; // xmm1
  __int64 v11; // rax
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  float v13; // [rsp+40h] [rbp+8h]

  *(_QWORD *)a2 = 0LL;
  if ( this[123].m128_i8[9] )
  {
    *(_QWORD *)a2 = this[123].m128_u64[0];
    return (struct D2D_SIZE_U)a2;
  }
  else
  {
    if ( this[123].m128_i8[10] )
    {
      if ( this[6].m128_u64[0] )
      {
        v11 = (*(__int64 (__fastcall **)(__m128 *))(this[-5].m128_u64[0] + 216))(this - 5);
        PixelAlign(v12, (unsigned int *)(v11 + 80), a3);
        *(_DWORD *)a2 = v12[2] - v12[0];
        *(_DWORD *)(a2 + 4) = v12[3] - v12[1];
      }
    }
    else
    {
      v4 = this[3].m128_u64[0];
      if ( v4 )
      {
        v5 = *(float *)(v4 + 72);
        v6 = *(float *)(v4 + 76);
      }
      else
      {
        v5 = this[2].m128_f32[2];
        v6 = this[2].m128_f32[3];
      }
      if ( v5 == 0.0 && v6 == 0.0 )
      {
        v9 = this[2].m128_u64[0];
        if ( v9 )
          v10 = *(__m128 *)(v9 + 72);
        else
          v10 = this[1];
        v5 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0] - v10.m128_f32[0];
        v6 = _mm_shuffle_ps(v10, v10, 255).m128_f32[0] - _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
      }
      v7 = v5 + 6291456.25;
      *(_DWORD *)a2 = (int)(LODWORD(v7) << 10) >> 11;
      v13 = v6 + 6291456.25;
      *(_DWORD *)(a2 + 4) = (int)(LODWORD(v13) << 10) >> 11;
    }
    return (struct D2D_SIZE_U)a2;
  }
}
