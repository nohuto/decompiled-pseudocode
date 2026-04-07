/*
 * XREFs of ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FADDC
 * Callers:
 *     ?GetMaximizeSnapStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x1800FAD70 (-GetMaximizeSnapStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@win.c)
 * Callees:
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FACBC (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FAEB8 (-HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetMaximizeSnapStartRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *a1,
        __int64 a2)
{
  bool HasTaggedWindowRect; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  unsigned __int64 v8; // xmm0_8
  __m128i v9; // xmm1
  int v10; // eax
  unsigned __int32 v11; // xmm1_4

  HasTaggedWindowRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect(a1);
  v6 = 0;
  if ( HasTaggedWindowRect )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 336LL) + 764LL);
    v8 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 336LL) + 764LL), 8).m128i_u64[0];
    v9 = _mm_cvtsi32_si128(HIDWORD(v7));
    v10 = 0;
    *(float *)a2 = (float)(int)v7;
    if ( (int)v8 - (int)v7 >= 0 )
      v10 = v8 - v7;
    v11 = _mm_cvtepi32_ps(v9).m128_u32[0];
    if ( HIDWORD(v8) - HIDWORD(v7) >= 0 )
      v6 = HIDWORD(v8) - HIDWORD(v7);
    *(_DWORD *)(a2 + 4) = v11;
    *(float *)(a2 + 8) = (float)v10;
    *(float *)(a2 + 12) = (float)v6;
  }
  else
  {
    winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(v5, v4);
  }
  return a2;
}
