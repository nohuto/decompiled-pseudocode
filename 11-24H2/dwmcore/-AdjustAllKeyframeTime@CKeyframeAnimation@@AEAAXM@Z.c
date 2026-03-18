/*
 * XREFs of ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x18029E968
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007E420 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180153FB0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CKeyframeAnimation::AdjustAllKeyframeTime(CKeyframeAnimation *this, float a2, double a3)
{
  __m128i v3; // xmm0
  __int64 v4; // r10
  float v5; // xmm0_4
  int v6; // ecx
  __m128 v7; // rt1
  __int64 v8; // r8
  __int64 i; // r9
  __int64 v10; // rdx

  *(float *)v3.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (_mm_cvtsi128_si32(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v3.m128i_i32 - *(float *)v3.m128i_i32;
    v7.m128_f32[0] = FLOAT_N0_5;
    v6 = (int)*(float *)v3.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v7));
  }
  else
  {
    v5 = *(float *)v3.m128i_i32 + 6291456.25;
    v6 = (int)(LODWORD(v5) << 10) >> 11;
  }
  v8 = *(_QWORD *)(v4 + 352);
  for ( i = 0LL; (int)i < *(_DWORD *)(v8 + 112); v8 = *(_QWORD *)(v4 + 352) )
  {
    v10 = 3 * i;
    i = (unsigned int)(i + 1);
    *(_DWORD *)(*(_QWORD *)(v8 + 104) + 8 * v10) = (int)(float)((float)*(int *)(*(_QWORD *)(v8 + 104) + 8 * v10)
                                                              * (float)(a2 / (float)v6));
    *(_BYTE *)(v8 + 140) |= 4u;
  }
}
