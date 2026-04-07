/*
 * XREFs of ?IsFullscreen@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1800FAEE0
 * Callers:
 *     ?get_IsFullscreen@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FB3A0 (-get_IsFullscreen@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITo.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1800FA810 (--8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ?GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800FACBC (-GetAbsoluteWindowRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURec.c)
 */

bool __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::IsFullscreen(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  __int64 v1; // rax
  BOOL MonitorInfoW; // eax
  int v4; // r9d
  int v5; // eax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  float v8; // xmm0_4
  float *AbsoluteWindowRect; // rax
  float v11[4]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF

  mi.cbSize = 40;
  v1 = *((_QWORD *)this + 4);
  memset(&mi.rcMonitor, 0, 36);
  MonitorInfoW = GetMonitorInfoW(*(HMONITOR *)(*(_QWORD *)(v1 + 336) + 384LL), &mi);
  v4 = 0;
  if ( !MonitorInfoW )
    return 1;
  v5 = 0;
  v6 = _mm_cvtsi32_si128(mi.rcMonitor.left);
  if ( mi.rcMonitor.right - mi.rcMonitor.left >= 0 )
    v5 = mi.rcMonitor.right - mi.rcMonitor.left;
  v7 = _mm_cvtsi32_si128(mi.rcMonitor.top);
  LODWORD(v8) = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( mi.rcMonitor.bottom - mi.rcMonitor.top >= 0 )
    v4 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  v11[0] = v8;
  LODWORD(v11[1]) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v11[2] = (float)v5;
  v11[3] = (float)v4;
  AbsoluteWindowRect = (float *)winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::GetAbsoluteWindowRect(
                                  (__int64)this,
                                  (__int64)v12);
  return winrt::Windows::Foundation::operator==(AbsoluteWindowRect, v11);
}
