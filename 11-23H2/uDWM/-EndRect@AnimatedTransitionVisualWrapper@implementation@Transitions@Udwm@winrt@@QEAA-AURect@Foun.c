/*
 * XREFs of ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800ED330
 * Callers:
 *     ?get_EndRect@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800EE290 (-get_EndRect@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U.c)
 * Callees:
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800ED460 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EndRect(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // xmm0_8
  unsigned __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __m128i v10; // xmm0
  int v11; // r8d
  int v12; // ecx
  __m128i v13; // xmm1
  unsigned int v14; // eax
  unsigned __int32 v15; // xmm1_4
  __m128i v16; // xmm0
  __int64 result; // rax

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(a1);
  v4 = *((_QWORD *)a1 + 5);
  v5 = *(_QWORD *)(v4 + 872);
  v6 = _mm_srli_si128(*(__m128i *)(v4 + 872), 8).m128i_u64[0];
  v7 = HIDWORD(v5);
  v8 = v6;
  v9 = HIDWORD(v6) - HIDWORD(v5);
  v10 = _mm_cvtsi32_si128(v5);
  v11 = v8 - v5;
  v12 = 0;
  v13 = _mm_cvtsi32_si128(v7);
  v14 = 0;
  *(_DWORD *)a2 = _mm_cvtepi32_ps(v10).m128_u32[0];
  if ( v11 >= 0 )
    v14 = v11;
  v15 = _mm_cvtepi32_ps(v13).m128_u32[0];
  if ( v9 >= 0 )
    v12 = v9;
  v16 = _mm_cvtsi32_si128(v14);
  result = a2;
  *(_DWORD *)(a2 + 4) = v15;
  *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v16).m128_u32[0];
  *(float *)(a2 + 12) = (float)v12;
  return result;
}
