/*
 * XREFs of ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180178CD8
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017A0BC (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18009D338 (powf.c)
 *     ?GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ @ 0x180179268 (-GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ControllerProcessor::CalculateNavigationDelta(ControllerProcessor *this, double a2, double a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm4
  __m128 v6; // xmm7
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  __m128 v9; // xmm7
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  ULONGLONG TickCount64; // rax
  __m128 v14; // xmm0
  __int64 v15; // rcx
  ULONGLONG v16; // rax
  __m128 v17; // xmm0
  __m128 v18; // xmm6
  __int64 result; // rax
  __m128 v20; // xmm0
  float v21; // xmm1_4

  v3 = _mm_movelh_ps(_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3), (__m128)0LL);
  v4 = _mm_mul_ps(v3, v3);
  v6 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)0LL, *(__m128 *)&a3), _mm_unpacklo_ps(*(__m128 *)&a2, (__m128)0LL));
  v4.m128_f32[0] = v4.m128_f32[0] + _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  v7 = _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0));
  v8 = _mm_shuffle_ps(v7, v7, 170);
  v6.m128_f32[0] = v8.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 198);
  if ( v8.m128_f32[0] > 1.0 )
  {
    v10 = v8;
    v8 = (__m128)LODWORD(FLOAT_1_0);
    v9 = _mm_div_ps(v9, _mm_shuffle_ps(v10, v10, 0));
  }
  v11 = _mm_and_ps(v8, (__m128)_xmm);
  if ( v11.m128_f32[0] > 0.00000011920929 )
  {
    v12 = v11;
    v12.m128_f32[0] = powf(v11.m128_f32[0], 1.8);
    v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v12, v12, 0));
    TickCount64 = GetTickCount64();
    v14 = 0LL;
    v15 = TickCount64 - *((_QWORD *)this + 47);
    if ( v15 < 0 )
    {
      v16 = v15 & 1 | ((TickCount64 - *((_QWORD *)this + 47)) >> 1);
      v14.m128_f32[0] = (float)(int)v16 + (float)(int)v16;
    }
    else
    {
      v14.m128_f32[0] = (float)(int)v15;
    }
    if ( v14.m128_f32[0] < 1750.0 )
    {
      v14.m128_f32[0] = (float)(powf(v14.m128_f32[0] / 1750.0, 0.60000002) * 0.89999998) + 0.1;
      v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v14, v14, 0));
    }
  }
  else
  {
    *((_QWORD *)this + 47) = GetTickCount();
  }
  v17 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 1949), (__m128)*((unsigned int *)this + 1949), 0);
  v18 = _mm_mul_ps(_mm_mul_ps((__m128)_xmm, v9), v17);
  v17.m128_f32[0] = ControllerProcessor::GetDisplaySizeScaleFactor(this);
  result = 0LL;
  v20 = _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v18);
  v21 = v20.m128_f32[0] + *((float *)this + 92);
  *((float *)this + 93) = _mm_shuffle_ps(v20, v20, 85).m128_f32[0] + *((float *)this + 93);
  *((float *)this + 92) = v21;
  return result;
}
