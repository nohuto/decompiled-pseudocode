/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180487BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180254CB0 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x18047A200 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  float v7; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  LONG v12; // eax
  float v13; // xmm1_4
  LONG v14; // eax
  float v15; // xmm2_4
  HMONITOR v16; // rdi
  KeyboardHosting::MonitorInformation *v18; // rax
  int v19; // r8d
  int v20; // r9d
  int v21; // r15d
  int v22; // edx
  float v23; // xmm2_4
  int v24; // r12d
  float v25; // xmm0_4
  float v26; // xmm2_4
  int top; // ecx
  int v28; // eax
  int left; // edx
  RTL_SRWLOCK *v30; // rcx
  int v31; // r8d
  int v32; // r9d
  int v33; // r12d
  int v34; // edx
  float v35; // xmm2_4
  int v36; // r10d
  float v37; // xmm0_4
  float v38; // xmm2_4
  signed int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r9d
  __m128i v43; // xmm1
  _BYTE v44[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v45; // [rsp+28h] [rbp-D8h]
  int v46; // [rsp+2Ch] [rbp-D4h]
  int v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+34h] [rbp-CCh]
  int v49; // [rsp+38h] [rbp-C8h]
  RECT rc; // [rsp+70h] [rbp-90h] BYREF
  RECT v51; // [rsp+80h] [rbp-80h]
  _BYTE v52[24]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+A8h] [rbp-58h]
  signed int v54; // [rsp+ACh] [rbp-54h]
  int v55; // [rsp+B0h] [rbp-50h]
  int v56; // [rsp+B4h] [rbp-4Ch]
  int v57; // [rsp+B8h] [rbp-48h]

  v7 = *a4;
  v9 = a4[1];
  *(_QWORD *)&rc.left = a3;
  v10 = *(float *)&a3;
  v11 = *((float *)&a3 + 1);
  v12 = (int)v7;
  *a7 = 0;
  v13 = v7 + a4[2];
  rc.left = v12;
  v14 = (int)v9;
  v15 = v9 + a4[3];
  rc.top = v14;
  *(_OWORD *)a6 = 0LL;
  rc.right = (int)v13;
  rc.bottom = (int)v15;
  v16 = MonitorFromRect(&rc, 0);
  if ( !v16 )
    return 2147549183LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v18 = KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v52, v16);
    KeyboardHosting::MonitorInformation::GetSnapshot((__int64)v18, (__int64)v44);
    v19 = v48;
    v20 = v49;
    v21 = _mm_cvtsi128_si32((__m128i)rc);
    v22 = v46 - v48;
    v51 = rc;
    v23 = (float)v45;
    if ( v46 - v48 < 0 )
      v22 = v48 - v46;
    v24 = v47 - v49;
    if ( v47 - v49 < 0 )
      v24 = v49 - v47;
    v25 = (float)(v23 * v10) / 100.0;
    v26 = (float)(v23 * v11) / 100.0;
    if ( (int)v25 < v22 )
      v22 = (int)v25;
    if ( (int)v26 < v24 )
      v24 = (int)v26;
    if ( v21 + v22 < v48 )
      v19 = v21 + v22;
    if ( v24 + rc.top < v49 )
      v20 = v24 + rc.top;
    top = v51.top;
    if ( a5 )
    {
      left = v51.left;
    }
    else
    {
      v28 = v19 - v22;
      left = v51.left;
      if ( v21 >= v28 )
        left = v28;
      if ( v51.top >= v20 - v24 )
        top = v20 - v24;
    }
    if ( left <= v46 )
      left = v46;
    if ( top <= v47 )
      top = v47;
    if ( left == v21
      && v19 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8))
      && top == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 4))
      && v20 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 12)) )
    {
      return 0LL;
    }
    *a7 = 1;
    *(float *)a6 = (float)left;
    *(float *)(a6 + 4) = (float)top;
    *(float *)(a6 + 8) = (float)(v19 - left);
    *(float *)(a6 + 12) = (float)(v20 - top);
    if ( KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 232)) == v16 )
      return 0LL;
    v30 = (RTL_SRWLOCK *)(a1 + 232);
  }
  else
  {
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v52, v16);
    v31 = v55;
    v32 = v56;
    v33 = _mm_cvtsi128_si32((__m128i)rc);
    v34 = v53 - v55;
    v51 = rc;
    v35 = (float)v57;
    if ( v53 - v55 < 0 )
      v34 = v55 - v53;
    v36 = v54 - v56;
    if ( v54 - v56 < 0 )
      v36 = v56 - v54;
    v37 = (float)(v35 * v10) / 100.0;
    v38 = (float)(v35 * v11) / 100.0;
    if ( (int)v37 < v34 )
      v34 = (int)v37;
    if ( (int)v38 < v36 )
      v36 = (int)v38;
    if ( v34 + v33 < v55 )
      v31 = v34 + v33;
    if ( v36 + rc.top < v56 )
      v32 = v36 + rc.top;
    v39 = v51.top;
    if ( a5 )
    {
      v41 = v51.left;
    }
    else
    {
      v40 = v31 - v34;
      v41 = v51.left;
      if ( v33 >= v40 )
        v41 = v40;
      if ( v51.top >= v32 - v36 )
        v39 = v32 - v36;
    }
    if ( v41 <= v53 )
      v41 = v53;
    if ( v39 <= v54 )
      v39 = v54;
    if ( v41 == v33
      && v31 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 8))
      && v39 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 4))
      && v32 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rc, 12)) )
    {
      return 0LL;
    }
    *a7 = 1;
    v42 = v32 - v39;
    v43 = _mm_cvtsi32_si128(v39);
    v30 = (RTL_SRWLOCK *)(a1 + 232);
    *(float *)a6 = (float)v41;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v43).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v31 - v41);
    *(float *)(a6 + 12) = (float)v42;
    if ( *(HMONITOR *)(a1 + 232) == v16 )
      return 0LL;
  }
  KeyboardHosting::MonitorInformation::SetMonitor(v30, v16);
  *(_BYTE *)(a1 + 808) = 1;
  return 0LL;
}
