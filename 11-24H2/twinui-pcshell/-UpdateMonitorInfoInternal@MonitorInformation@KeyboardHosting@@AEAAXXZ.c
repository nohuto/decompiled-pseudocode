/*
 * XREFs of ?UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ @ 0x18047A3B8
 * Callers:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801C38AC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802D2524 (_o_ceilf_0.c)
 *     floorf @ 0x1802D2530 (floorf.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfoInternal(
        KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm1
  int v5; // r8d
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm7_4
  float v11; // xmm6_4
  float *v12; // rax
  unsigned int v13; // xmm5_4
  __int128 v14; // xmm0
  int v15; // r8d
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19[4]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v20; // [rsp+38h] [rbp-19h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v2 = (HMONITOR)*((_QWORD *)this + 11);
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*((_QWORD *)this + 11), (char *)this + 96);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
    rcMonitor = mi.rcMonitor;
    v5 = *((_DWORD *)this + 24);
    v6 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v7 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 4));
    v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 100) = mi.rcMonitor;
    *(float *)&v9 = (float)v6;
    *(float *)&v20 = (float)v6;
    *(float *)&v10 = (float)v7;
    v11 = (float)(v8 - v6);
    *((float *)&v20 + 1) = (float)v7;
    *((float *)&v20 + 2) = v11;
    *((float *)&v20 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)) - v7);
    v12 = KeyboardHosting::ScalingHelper::PhysicalRectToRelative(v19, (float *)&v20, v5);
    *(_QWORD *)&v20 = __PAIR64__(v10, v9);
    *((_QWORD *)&v20 + 1) = __PAIR64__(v13, LODWORD(v11));
    v14 = v20;
    *(__m128i *)((char *)this + 116) = _mm_loadu_si128((const __m128i *)v12);
    v20 = v14;
    *(__m128i *)((char *)this + 132) = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                                          v19,
                                                                          (float *)&v20,
                                                                          v15));
    v16 = *((float *)this + 34);
    v17 = *((float *)this + 35);
    v18 = *((float *)this + 36);
    *((float *)this + 37) = floorf(*((float *)this + 33));
    *((float *)this + 38) = floorf(v16);
    *((float *)this + 39) = o_ceilf_0(v17);
    *((float *)this + 40) = o_ceilf_0(v18);
  }
}
