/*
 * XREFs of ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180101380
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBaseExpression::IsExpressionValueValid(CBaseExpression *this, __m128 *a2)
{
  __int32 v2; // eax
  float v4; // xmm0_4
  double v5; // xmm0_8
  unsigned __int64 v7; // xmm0_8
  float v8; // ebx
  __m128 v9; // xmm6
  unsigned __int64 v10; // [rsp+50h] [rbp+8h]

  v2 = a2[4].m128_i32[2];
  if ( v2 == 17 )
    return 1;
  if ( v2 != 35 )
  {
    switch ( v2 )
    {
      case 11:
        return 1;
      case 18:
      case 42:
        return _finite(a2->m128_f32[0]) != 0;
      case 52:
        v7 = a2->m128_u64[0];
        v8 = a2->m128_f32[2];
        if ( !_finite(COERCE_FLOAT(a2->m128_u64[0])) || !_finite(*((float *)&v7 + 1)) )
          return 0;
        v4 = v8;
        goto LABEL_5;
      case 69:
      case 70:
      case 71:
        v9 = *a2;
        if ( !_finite(COERCE_FLOAT(*a2))
          || !_finite(_mm_shuffle_ps(v9, v9, 85).m128_f32[0])
          || !_finite(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]) )
        {
          return 0;
        }
        v5 = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
        return _finite(v5) != 0;
      case 104:
        if ( !_finite(a2->m128_f32[0])
          || !_finite(a2->m128_f32[1])
          || !_finite(a2->m128_f32[2])
          || !_finite(a2->m128_f32[3])
          || !_finite(a2[1].m128_f32[0]) )
        {
          return 0;
        }
        v4 = a2[1].m128_f32[0];
        goto LABEL_5;
      case 265:
        if ( !_finite(a2->m128_f32[0])
          || !_finite(a2->m128_f32[1])
          || !_finite(a2->m128_f32[2])
          || !_finite(a2->m128_f32[3])
          || !_finite(a2[1].m128_f32[0])
          || !_finite(a2[1].m128_f32[1])
          || !_finite(a2[1].m128_f32[2])
          || !_finite(a2[1].m128_f32[3])
          || !_finite(a2[2].m128_f32[0])
          || !_finite(a2[2].m128_f32[1])
          || !_finite(a2[2].m128_f32[2])
          || !_finite(a2[2].m128_f32[3])
          || !_finite(a2[3].m128_f32[0])
          || !_finite(a2[3].m128_f32[1])
          || !_finite(a2[3].m128_f32[2]) )
        {
          return 0;
        }
        v4 = a2[3].m128_f32[3];
        goto LABEL_5;
      default:
        return 0;
    }
  }
  v10 = a2->m128_u64[0];
  if ( !_finite(COERCE_FLOAT(a2->m128_u64[0])) )
    return 0;
  v4 = *((float *)&v10 + 1);
LABEL_5:
  v5 = v4;
  return _finite(v5) != 0;
}
