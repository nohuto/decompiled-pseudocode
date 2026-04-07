/*
 * XREFs of ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x18007CC90
 * Callers:
 *     ?get_IsFullscreen@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x18007CC50 (-get_IsFullscreen@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITo.c)
 * Callees:
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800404A8 (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

char __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsFullscreen(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rax
  char v3; // bl
  int v4; // eax
  int v5; // edi
  __m128i v6; // xmm6
  __m128i v7; // xmm7
  float v8; // xmm8_4
  float v9; // xmm7_4
  float *AbsoluteWindowRect; // rax
  float *v11; // rcx
  float v13; // xmm0_4
  int v14; // eax
  _BYTE v15[16]; // [rsp+20h] [rbp-78h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-68h] BYREF

  mi.cbSize = 40;
  v1 = *((_QWORD *)this + 4);
  memset(&mi.rcMonitor, 0, 36);
  v3 = 0;
  if ( !GetMonitorInfoW(*(HMONITOR *)(*(_QWORD *)(v1 + 288) + 384LL), &mi) )
    return 1;
  v4 = 0;
  v5 = mi.rcMonitor.right - mi.rcMonitor.left;
  v6 = _mm_cvtsi32_si128(mi.rcMonitor.left);
  v7 = _mm_cvtsi32_si128(mi.rcMonitor.top);
  if ( mi.rcMonitor.bottom - mi.rcMonitor.top >= 0 )
    v4 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  v8 = (float)v4;
  LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
  AbsoluteWindowRect = (float *)winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(
                                  (__int64)this,
                                  (__int64)v15);
  v11 = AbsoluteWindowRect;
  if ( *AbsoluteWindowRect == _mm_cvtepi32_ps(v6).m128_f32[0] && AbsoluteWindowRect[1] == v9 )
  {
    v13 = AbsoluteWindowRect[2];
    v14 = 0;
    if ( v5 >= 0 )
      v14 = v5;
    if ( v13 == (float)v14 && v11[3] == v8 )
      return 1;
  }
  return v3;
}
