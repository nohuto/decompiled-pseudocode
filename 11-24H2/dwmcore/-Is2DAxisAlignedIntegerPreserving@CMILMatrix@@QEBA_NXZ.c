/*
 * XREFs of ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x1801D08CC
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     CanCombineToRegion @ 0x1801D0860 (CanCombineToRegion.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall CMILMatrix::Is2DAxisAlignedIntegerPreserving(CMILMatrix *this, __int64 a2, double a3)
{
  char v3; // al
  unsigned int *v4; // rcx
  unsigned int *v5; // r9
  char v6; // dl
  __m128i v7; // xmm3
  int v8; // ecx
  __m128i v9; // xmm3
  int v10; // ecx
  __m128i v11; // xmm3
  int v12; // ecx
  __m128i v13; // xmm3
  int v14; // ecx
  __m128i v15; // xmm3
  int v16; // ecx
  __m128i v17; // xmm3
  int v18; // ecx
  float v20; // [rsp+58h] [rbp+10h]
  float v21; // [rsp+58h] [rbp+10h]
  float v22; // [rsp+58h] [rbp+10h]
  float v23; // [rsp+58h] [rbp+10h]
  float v24; // [rsp+58h] [rbp+10h]
  float v25; // [rsp+58h] [rbp+10h]

  v3 = CMILMatrix::Is2DAxisAlignedPreserving(this);
  v6 = 0;
  if ( v3 )
  {
    v7 = (__m128i)*v4;
    if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v8 = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
    }
    else
    {
      v20 = *(float *)v7.m128i_i32 + 6291456.25;
      v8 = (int)(LODWORD(v20) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v7.m128i_i32 - (float)v8) & _xmm) <= 0.000081380211 )
    {
      v9 = (__m128i)v5[1];
      if ( (_mm_cvtsi128_si32(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)*(float *)v9.m128i_i32 - *(float *)v9.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v10 = (int)*(float *)v9.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v21 = *(float *)v9.m128i_i32 + 6291456.25;
        v10 = (int)(LODWORD(v21) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v9.m128i_i32 - (float)v10) & _xmm) <= 0.000081380211 )
      {
        v11 = (__m128i)v5[4];
        if ( (_mm_cvtsi128_si32(v11) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v11.m128i_i32 - *(float *)v11.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v12 = (int)*(float *)v11.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v22 = *(float *)v11.m128i_i32 + 6291456.25;
          v12 = (int)(LODWORD(v22) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v11.m128i_i32 - (float)v12) & _xmm) <= 0.000081380211 )
        {
          v13 = (__m128i)v5[5];
          if ( (_mm_cvtsi128_si32(v13) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            *(float *)&a3 = (float)(int)*(float *)v13.m128i_i32 - *(float *)v13.m128i_i32;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
            v14 = (int)*(float *)v13.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
          }
          else
          {
            v23 = *(float *)v13.m128i_i32 + 6291456.25;
            v14 = (int)(LODWORD(v23) << 10) >> 11;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v13.m128i_i32 - (float)v14) & _xmm) <= 0.000081380211 )
          {
            v15 = (__m128i)v5[12];
            if ( (_mm_cvtsi128_si32(v15) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)*(float *)v15.m128i_i32 - *(float *)v15.m128i_i32;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
              v16 = (int)*(float *)v15.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v24 = *(float *)v15.m128i_i32 + 6291456.25;
              v16 = (int)(LODWORD(v24) << 10) >> 11;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v15.m128i_i32 - (float)v16) & _xmm) <= 0.00390625 )
            {
              v17 = (__m128i)v5[13];
              if ( (_mm_cvtsi128_si32(v17) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*(float *)v17.m128i_i32 - *(float *)v17.m128i_i32;
                v18 = (int)*(float *)v17.m128i_i32
                    - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
              }
              else
              {
                v25 = *(float *)v17.m128i_i32 + 6291456.25;
                v18 = (int)(LODWORD(v25) << 10) >> 11;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v17.m128i_i32 - (float)v18) & _xmm) <= 0.00390625 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
