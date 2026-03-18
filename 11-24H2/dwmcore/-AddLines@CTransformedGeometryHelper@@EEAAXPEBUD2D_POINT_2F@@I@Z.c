/*
 * XREFs of ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1801DF900
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEAUD2D_POINT_2F@@@?$vector@UD2D_POINT_2F@@V?$allocator@UD2D_POINT_2F@@@std@@@std@@AEAAPEAUD2D_POINT_2F@@QEAU2@AEAU2@@Z @ 0x1801DFACC (--$_Emplace_reallocate@AEAUD2D_POINT_2F@@@-$vector@UD2D_POINT_2F@@V-$allocator@UD2D_POINT_2F@@@s.c)
 */

void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  float x; // xmm5_4
  __m128 y_low; // xmm4
  char v11; // r8
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // xmm0_8
  float v16; // xmm1_4
  float v17; // xmm4_4
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 40);
  v5 = *((_QWORD *)this + 5);
  if ( v5 != *((_QWORD *)this + 6) )
    *((_QWORD *)this + 6) = v5;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *((_QWORD *)this + 2);
      x = a2->x;
      y_low = (__m128)LODWORD(a2->y);
      v12 = y_low;
      v13 = y_low;
      v11 = *(_BYTE *)(v8 + 65);
      v12.m128_f32[0] = (float)((float)(y_low.m128_f32[0] * *(float *)(v8 + 16)) + (float)(a2->x * *(float *)v8))
                      + *(float *)(v8 + 48);
      v13.m128_f32[0] = (float)((float)(y_low.m128_f32[0] * *(float *)(v8 + 20)) + (float)(a2->x * *(float *)(v8 + 4)))
                      + *(float *)(v8 + 52);
      *(float *)&v18 = v12.m128_f32[0];
      HIDWORD(v18) = v13.m128_i32[0];
      if ( (char)(4 * v11) >> 6 == 1
        || (char)(4 * v11) >> 6 >= 0
        && (LODWORD(v16) = COERCE_UNSIGNED_INT(
                             (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v8 + 28) & _xmm) * 61440.0)
                                           + (float)(COERCE_FLOAT(*(_DWORD *)(v8 + 12) & _xmm) * 61440.0))
                                   + COERCE_FLOAT(*(_DWORD *)(v8 + 60) & _xmm))
                           - 1.0) & _xmm,
            *(_BYTE *)(v8 + 65) = v11 & 0xCF | (32 * (v16 < 0.000081380211) + 16),
            v16 >= 0.000081380211) )
      {
        v17 = (float)((float)(y_low.m128_f32[0] * *(float *)(v8 + 28)) + (float)(x * *(float *)(v8 + 12)))
            + *(float *)(v8 + 60);
        if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.000081380211 )
        {
          v12.m128_f32[0] = v12.m128_f32[0] / v17;
          v13.m128_f32[0] = v13.m128_f32[0] / v17;
          v18 = __PAIR64__(v13.m128_u32[0], v12.m128_u32[0]);
        }
      }
      v14 = (unsigned __int64 *)v3[1];
      if ( v14 == (unsigned __int64 *)v3[2] )
      {
        std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(v3, v14, &v18);
      }
      else
      {
        v15 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
        *v14 = v15;
        v3[1] += 8LL;
        v18 = v15;
      }
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 48LL))(
    *((_QWORD *)this + 4),
    *v3,
    (__int64)(v3[1] - *v3) >> 3);
}
