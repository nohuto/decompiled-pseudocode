/*
 * XREFs of ?MapPointIntoRectangle@@YAXAEBUD2D_POINT_2F@@AEBUtagRECT@@PEAUD2D_POINT_3F@@@Z @ 0x1800D2C04
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800D5450 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MapPointIntoRectangle(const struct D2D_POINT_2F *a1, const struct tagRECT *a2, struct D2D_POINT_3F *a3)
{
  int v3; // eax
  __m128i v4; // xmm0
  float v5; // xmm1_4
  float v6; // xmm0_4
  int v7; // eax
  float v8; // xmm1_4
  float top; // xmm0_4

  v3 = 0;
  v4 = _mm_cvtsi32_si128(a2->left);
  if ( a2->right - a2->left >= 0 )
    v3 = a2->right - a2->left;
  v5 = a1->x - _mm_cvtepi32_ps(v4).m128_f32[0];
  v6 = (float)v3;
  v7 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v7 = a2->bottom - a2->top;
  *((_DWORD *)a3 + 2) = 0;
  v8 = v5 / v6;
  top = (float)a2->top;
  *(float *)a3 = v8;
  *((float *)a3 + 1) = (float)(a1->y - top) / (float)v7;
}
