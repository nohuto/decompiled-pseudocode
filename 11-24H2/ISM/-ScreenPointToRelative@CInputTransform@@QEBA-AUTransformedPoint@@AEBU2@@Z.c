/*
 * XREFs of ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800857F0
 * Callers:
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x1800904D0 (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x180099824 (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z @ 0x180136504 (-ScreenRectToRelative@CInputTransform@@QEAA-AUTransformedRect@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTransform::ScreenPointToRelative(float *a1, __int64 a2, float *a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  __int64 result; // rax

  v3 = *a3;
  v4 = (float)(a3[1] * a1[7]) - a1[5];
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v5 = a1[3];
  v6 = (float)(v3 * v5) - *a1;
  v7 = (float)(v5 * a3[1]) - a1[1];
  v8 = (float)(*a3 * a1[7]) - a1[4];
  if ( (float)(v6 * v4) == (float)(v8 * v7) )
  {
    v9 = FLOAT_3_4028235e38;
    v10 = FLOAT_3_4028235e38;
  }
  else
  {
    v11 = (float)(v6 * v4) - (float)(v8 * v7);
    v12 = a1[15];
    v13 = (float)(v12 * *a3) - a1[12];
    v14 = (float)(v12 * a3[1]) - a1[13];
    v15 = v13 * v7;
    v16 = v14 * v6;
    v10 = (float)((float)(v14 * v8) - (float)(v13 * v4)) / v11;
    v9 = (float)(v15 - v16) / v11;
  }
  *(float *)a2 = v10;
  result = a2;
  *(float *)(a2 + 4) = v9;
  return result;
}
