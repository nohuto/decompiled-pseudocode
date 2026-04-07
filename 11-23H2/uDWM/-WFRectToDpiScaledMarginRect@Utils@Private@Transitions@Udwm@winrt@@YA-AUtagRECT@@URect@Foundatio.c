/*
 * XREFs of ?WFRectToDpiScaledMarginRect@Utils@Private@Transitions@Udwm@winrt@@YA?AUtagRECT@@URect@Foundation@Windows@5@@Z @ 0x180104994
 * Callers:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801044CC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 *     ?UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104874 (-UpdateIconPosition@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall winrt::Udwm::Transitions::Private::Utils::WFRectToDpiScaledMarginRect(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  __m128 v7; // xmm3
  float v8; // xmm1_4

  v2 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 53) * 8.0);
  v3 = *(float *)(a2 + 8);
  v4 = (float)v2 + *(float *)(a2 + 4);
  *(float *)a2 = (float)v2 + *(float *)a2;
  v5 = *(float *)(a2 + 12);
  *(float *)(a2 + 4) = v4;
  v6 = (float)(2 * v2);
  *(float *)(a2 + 8) = v3 - v6;
  *(float *)(a2 + 12) = v5 - v6;
  v7 = (__m128)_mm_loadu_si128((const __m128i *)a2);
  *a1 = (int)v7.m128_f32[0];
  v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  a1[1] = (int)v8;
  a1[2] = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
  a1[3] = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
  return a1;
}
