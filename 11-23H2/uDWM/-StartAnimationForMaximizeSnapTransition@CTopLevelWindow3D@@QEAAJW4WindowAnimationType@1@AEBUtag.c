/*
 * XREFs of ?StartAnimationForMaximizeSnapTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z @ 0x1800E7300
 * Callers:
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransition@345@AEBURect@Foundation@Windows@5@@Z @ 0x1800FB030 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartAnimationForMaximizeSnapTransition(__int64 a1, int a2, int *a3)
{
  int v4; // r9d
  unsigned int v5; // eax
  __m128i v6; // xmm3
  int v7; // r8d
  int v8; // r8d
  __m128i v9; // xmm2
  int v10; // eax
  int started; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3[2] - *a3;
  v5 = 0;
  v6 = _mm_cvtsi32_si128(a3[1]);
  v7 = a3[3];
  if ( v4 >= 0 )
    v5 = v4;
  v8 = v7 - a3[1];
  v9 = _mm_cvtsi32_si128(v5);
  v10 = 0;
  *(float *)(a1 + 620) = (float)*a3;
  if ( v8 >= 0 )
    v10 = v8;
  *(_DWORD *)(a1 + 624) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *(_DWORD *)(a1 + 628) = _mm_cvtepi32_ps(v9).m128_u32[0];
  *(float *)(a1 + 632) = (float)v10;
  started = CTopLevelWindow3D::StartAnimation(a1, a2);
  v12 = started;
  if ( started >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x203,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)started);
  return v12;
}
