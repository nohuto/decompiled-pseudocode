/*
 * XREFs of ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800360F4
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CMILMatrix::RoundOffsets(CMILMatrix *this, __int64 a2, double a3)
{
  __m128i v3; // xmm0
  int v4; // edx
  __m128i v5; // xmm0
  int v6; // edx
  __m128i v7; // xmm0
  int v8; // edx
  float v9; // [rsp+8h] [rbp+8h]
  float v10; // [rsp+8h] [rbp+8h]
  float v11; // [rsp+8h] [rbp+8h]

  v3 = (__m128i)*((unsigned int *)this + 12);
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v4 = (int)*(float *)v3.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v9 = *(float *)v3.m128i_i32 + 6291456.25;
    v4 = (int)(LODWORD(v9) << 10) >> 11;
  }
  *((float *)this + 12) = (float)v4;
  v5 = (__m128i)*((unsigned int *)this + 13);
  if ( (_mm_cvtsi128_si32(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v5.m128i_i32 - *(float *)v5.m128i_i32;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v6 = (int)*(float *)v5.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
  }
  else
  {
    v10 = *(float *)v5.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v10) << 10) >> 11;
  }
  *((float *)this + 13) = (float)v6;
  v7 = (__m128i)*((unsigned int *)this + 14);
  if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
    v8 = (int)*(float *)v7.m128i_i32
       - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v11 = *(float *)v7.m128i_i32 + 6291456.25;
    v8 = (int)(LODWORD(v11) << 10) >> 11;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((float *)this + 14) = (float)v8;
}
