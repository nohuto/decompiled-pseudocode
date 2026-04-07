/*
 * XREFs of ?GetMaximizeSnapStartRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180040374
 * Callers:
 *     ?GetMaximizeSnapStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180040310 (-GetMaximizeSnapStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@win.c)
 * Callees:
 *     ?HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18004040C (-HasTaggedWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800404A8 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetMaximizeSnapStartRect(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *a1,
        __int64 a2)
{
  bool HasTaggedWindowRect; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __m128i v12; // xmm1
  int v13; // eax
  unsigned __int32 v14; // xmm1_4

  HasTaggedWindowRect = winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::HasTaggedWindowRect(a1);
  v7 = 0;
  if ( HasTaggedWindowRect )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 288LL);
    v10 = *(_QWORD *)(v9 + 836);
    v11 = *(_QWORD *)(v9 + 828);
    v12 = _mm_cvtsi32_si128(HIDWORD(v11));
    v13 = 0;
    *(float *)a2 = (float)(int)v11;
    if ( (int)v10 - (int)v11 >= 0 )
      v13 = v10 - v11;
    v14 = _mm_cvtepi32_ps(v12).m128_u32[0];
    if ( HIDWORD(v10) - HIDWORD(v11) >= 0 )
      v7 = HIDWORD(v10) - HIDWORD(v11);
    *(_DWORD *)(a2 + 4) = v14;
    *(float *)(a2 + 8) = (float)v13;
    *(float *)(a2 + 12) = (float)v7;
  }
  else
  {
    winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(v5, v4, v6, 0LL);
  }
  return a2;
}
