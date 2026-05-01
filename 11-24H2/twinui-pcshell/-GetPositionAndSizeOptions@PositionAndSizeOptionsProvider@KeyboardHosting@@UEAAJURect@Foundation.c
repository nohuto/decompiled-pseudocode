/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1802576C0
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18007EBC8 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800824E8 (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ?Make@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@SAJAEBUCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@PEAPEAV12345@@Z @ 0x180111728 (-Make@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPo.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x180254D18 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformationSnapshot@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180489BFC (-AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURe.c)
 *     ?UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18048B28C (-UnsafeAddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        float *a2,
        float *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // ebx
  _OWORD *Snapshot; // rax
  _DWORD *DefaultKeyboardSize; // rax
  __int64 v15; // rdi
  _OWORD *v16; // rax
  _DWORD *v17; // rax
  unsigned int ScaledCeiledMonitorRect; // eax
  unsigned int v19; // eax
  __m128i *v20; // rax
  __m128i v21; // xmm3
  int v22; // r12d
  _DWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  float v26; // xmm7_4
  float v27; // xmm6_4
  char IsEnabled; // al
  float v29; // xmm8_4
  float v30; // xmm9_4
  float v31; // xmm11_4
  float v32; // xmm12_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  __int64 (__fastcall **Ptr)(RTL_SRWLOCK *, _OWORD *); // rax
  __int128 v44; // xmm13
  __int128 v45; // xmm15
  __int128 v46; // xmm6
  __int64 v47; // xmm14_8
  int v48; // edi
  __int64 v49; // rdx
  __int64 (__fastcall **v50)(RTL_SRWLOCK *, _OWORD *); // rax
  __int64 (__fastcall **v51)(RTL_SRWLOCK *, _OWORD *); // rax
  int v52; // ecx
  float v53; // xmm0_4
  char v54; // al
  float v55; // xmm0_4
  float v56; // xmm0_4
  float v57; // xmm0_4
  float v58; // xmm0_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  __int128 v65; // xmm6
  __int128 v66; // xmm7
  __int128 v67; // xmm10
  __int64 (__fastcall **v68)(RTL_SRWLOCK *, _BYTE *); // rax
  __int64 (__fastcall **v69)(RTL_SRWLOCK *, _BYTE *); // rax
  int v70; // edx
  unsigned int v71; // ecx
  unsigned int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 (__fastcall **v75)(RTL_SRWLOCK *, _BYTE *); // rax
  float *v76; // rsi
  __int128 v77; // xmm10
  float v78; // xmm6_4
  int v79; // edi
  float v80; // xmm7_4
  char v81; // al
  float v82; // xmm0_4
  float v83; // xmm0_4
  float v84; // xmm1_4
  float v85; // xmm0_4
  float v86; // xmm0_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm0_4
  float v90; // xmm2_4
  float v91; // xmm1_4
  __int64 (__fastcall **v92)(RTL_SRWLOCK *, _BYTE *); // rax
  char v93; // al
  float v94; // xmm0_4
  float v95; // xmm0_4
  float v96; // xmm0_4
  float v97; // xmm9_4
  float v98; // xmm8_4
  int v99; // eax
  float v100; // xmm1_4
  float v101; // xmm0_4
  float v102; // xmm0_4
  float v103; // xmm2_4
  float v104; // xmm1_4
  float v105; // xmm0_4
  __int64 (__fastcall **v106)(RTL_SRWLOCK *, _BYTE *); // rax
  __int128 v107; // xmm6
  __int128 v108; // xmm8
  __int128 v109; // xmm9
  __int64 v110; // xmm7_8
  __int64 (__fastcall **v111)(RTL_SRWLOCK *, _BYTE *); // rax
  float v112; // xmm0_4
  float v113; // xmm1_4
  char v114; // al
  int v115; // edi
  int v116; // esi
  float v117; // xmm0_4
  float v118; // xmm1_4
  char v119; // al
  RTL_SRWLOCK *v121; // [rsp+48h] [rbp-C0h] BYREF
  RTL_SRWLOCK *v122; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v123; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v124; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v125; // [rsp+78h] [rbp-90h] BYREF
  __int128 v126; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v127[80]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v128; // [rsp+E8h] [rbp-20h]
  __int128 v129; // [rsp+F8h] [rbp-10h] BYREF
  __m256i v130; // [rsp+108h] [rbp+0h]
  __int64 v131; // [rsp+128h] [rbp+20h]
  __int64 v132; // [rsp+148h] [rbp+40h]
  __int128 v133; // [rsp+150h] [rbp+48h]
  __m256i v134; // [rsp+160h] [rbp+58h]
  __int64 v135; // [rsp+180h] [rbp+78h]
  float *v136; // [rsp+188h] [rbp+80h]
  _BYTE v137[80]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v138; // [rsp+1E8h] [rbp+E0h]
  __int128 v139; // [rsp+1F0h] [rbp+E8h]
  __int128 v140; // [rsp+200h] [rbp+F8h]
  __int128 v141; // [rsp+210h] [rbp+108h]
  __int64 v142; // [rsp+220h] [rbp+118h]
  __int128 v143; // [rsp+228h] [rbp+120h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v128 = a4;
  v136 = a3;
  v138 = a6;
  v122 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v122);
  v9 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::Make(
         v8,
         &v122);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 565LL;
LABEL_63:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_133;
  }
  *(_QWORD *)v137 = 0LL;
  *(_DWORD *)&v137[8] = 100;
  memset(&v137[12], 0, 68);
  v12 = 0;
  v121 = 0LL;
  v132 = a1 + 376;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    Snapshot = (_OWORD *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 376, &v129);
    *(_OWORD *)v137 = *Snapshot;
    *(_OWORD *)&v137[16] = Snapshot[1];
    *(_OWORD *)&v137[32] = Snapshot[2];
    *(_OWORD *)&v137[48] = Snapshot[3];
    *(_OWORD *)&v137[64] = Snapshot[4];
    LODWORD(v121) = (int)_mm_shuffle_ps(*(__m128 *)&v137[64], *(__m128 *)&v137[64], 85).m128_f32[0];
    HIDWORD(v121) = (int)_mm_shuffle_ps(*(__m128 *)&v137[64], *(__m128 *)&v137[64], 170).m128_f32[0];
    v12 = (int)v121;
    v125 = *(_OWORD *)&v137[28];
    DefaultKeyboardSize = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                            (RTL_SRWLOCK *)(a1 + 16),
                            &v126,
                            *(HMONITOR *)v137,
                            (__int64)&v125,
                            _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v137, 8)),
                            *(_BYTE *)(a1 + 568),
                            *(double *)(a1 + 576),
                            (double *)(a1 + 560));
  }
  else
  {
    v125 = *(_OWORD *)(a1 + 384);
    DefaultKeyboardSize = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
                            (RTL_SRWLOCK *)(a1 + 16),
                            &v126,
                            *(HMONITOR *)(a1 + 376),
                            (__int64)&v125,
                            *(_DWORD *)(a1 + 416),
                            *(_BYTE *)(a1 + 568),
                            *(double *)(a1 + 576),
                            (double *)(a1 + 560));
  }
  v15 = *(_QWORD *)DefaultKeyboardSize;
  v123 = *(_QWORD *)DefaultKeyboardSize;
  *(_QWORD *)v127 = 0LL;
  *(_DWORD *)&v127[8] = 100;
  memset(&v127[12], 0, 68);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v16 = (_OWORD *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 40, &v129);
    *(_OWORD *)v127 = *v16;
    *(_OWORD *)&v127[16] = v16[1];
    *(_OWORD *)&v127[32] = v16[2];
    *(_OWORD *)&v127[48] = v16[3];
    *(_OWORD *)&v127[64] = v16[4];
    v125 = *(_OWORD *)&v127[28];
    v17 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v126,
            *(HMONITOR *)v127,
            (__int64)&v125,
            _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v127, 8)),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 544));
  }
  else
  {
    v125 = *(_OWORD *)(a1 + 48);
    v17 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v126,
            *(HMONITOR *)(a1 + 40),
            (__int64)&v125,
            *(_DWORD *)(a1 + 80),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 544));
  }
  *(_QWORD *)&v125 = *(_QWORD *)v17;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)&v124 = v122;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v124);
    AddOptionsRelativeToInside(1, (unsigned int)&v137[60], (unsigned int)v137, (unsigned int)&v123, 0, (__int64)&v124);
    *(_QWORD *)&v124 = v122;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v124);
    AddOptionsRelativeToInside(1, (unsigned int)&v127[60], (unsigned int)v127, (unsigned int)&v125, 1, (__int64)&v124);
  }
  else
  {
    *(_QWORD *)&v126 = &v124;
    *(_QWORD *)&v124 = v122;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v124);
    ScaledCeiledMonitorRect = (unsigned int)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(
                                              a1 + 376,
                                              &v143);
    UnsafeAddOptionsRelativeToInside(1, ScaledCeiledMonitorRect, a1 + 376, (unsigned int)&v123, 0, (__int64)&v124);
    *(_QWORD *)&v126 = &v124;
    *(_QWORD *)&v124 = v122;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v124);
    v19 = (unsigned int)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 40, &v143);
    UnsafeAddOptionsRelativeToInside(1, v19, a1 + 40, (unsigned int)&v125, 1, (__int64)&v124);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    LODWORD(v125) = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 376, &v143) + 2);
    DWORD1(v125) = (int)*((float *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(a1 + 376, &v126) + 3);
    v12 = v125;
    v121 = (RTL_SRWLOCK *)v125;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    v20 = (__m128i *)KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 208, &v129);
    v21 = *v20;
    *(__m128i *)&v127[16] = v20[1];
    *(__m128i *)&v127[32] = v20[2];
    *(__m128i *)&v127[48] = v20[3];
    *(__m128i *)&v127[64] = v20[4];
    v22 = (int)_mm_shuffle_ps(*(__m128 *)&v127[32], *(__m128 *)&v127[32], 85).m128_f32[0];
    *(_QWORD *)&v125 = (unsigned int)(int)_mm_shuffle_ps(*(__m128 *)&v127[32], *(__m128 *)&v127[32], 170).m128_f32[0];
    v124 = *(_OWORD *)&v127[28];
    v23 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v126,
            (HMONITOR)v21.m128i_i64[0],
            (__int64)&v124,
            _mm_cvtsi128_si32(_mm_srli_si128(v21, 8)),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 552));
  }
  else
  {
    v24 = (unsigned int)(int)*(float *)(a1 + 228);
    LODWORD(v126) = (int)*(float *)(a1 + 224);
    *(_QWORD *)&v125 = v24;
    v143 = *(_OWORD *)(a1 + 216);
    v23 = KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
            (RTL_SRWLOCK *)(a1 + 16),
            &v124,
            *(HMONITOR *)(a1 + 208),
            (__int64)&v143,
            *(_DWORD *)(a1 + 248),
            *(_BYTE *)(a1 + 568),
            *(double *)(a1 + 576),
            (double *)(a1 + 552));
    v22 = v126;
  }
  v25 = *(_QWORD *)v23;
  *(_QWORD *)&v124 = *(_QWORD *)v23;
  WORD5(v133) = 0;
  HIDWORD(v135) = 0;
  *(_QWORD *)&v133 = 0x200000002LL;
  v134.m256i_i32[0] = v12;
  HIDWORD(v133) = HIDWORD(v121);
  *(_OWORD *)((char *)v134.m256i_i64 + 4) = __PAIR64__(v15, HIDWORD(v123));
  v26 = a2[1];
  v27 = v26 + a2[3];
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v29 = *(float *)&v137[40];
  v30 = *(float *)&v137[36];
  v31 = *(float *)&v137[32];
  v32 = *(float *)&v137[28];
  v33 = *a2;
  if ( IsEnabled )
  {
    v34 = v33 - *(float *)&v137[28];
    if ( (float)v12 <= v34 )
      v34 = (float)v12;
    v134.m256i_i32[5] = (int)v34;
    v35 = v27 - *(float *)&v137[32];
    if ( (float)SHIDWORD(v121) <= (float)(v27 - *(float *)&v137[32]) )
      v35 = (float)SHIDWORD(v121);
    v134.m256i_i32[6] = (int)v35;
    v36 = (float)(*(float *)&v137[36] + *(float *)&v137[28]) - *a2;
    if ( (float)v12 <= v36 )
      v36 = (float)v12;
    v134.m256i_i32[7] = (int)v36;
    v37 = (float)(*(float *)&v137[40] + *(float *)&v137[32]) - v27;
    if ( (float)SHIDWORD(v121) <= v37 )
      v37 = (float)SHIDWORD(v121);
  }
  else
  {
    v38 = *(float *)(a1 + 384);
    v39 = v33 - v38;
    if ( (float)v12 <= v39 )
      v39 = (float)v12;
    v134.m256i_i32[5] = (int)v39;
    v40 = *(float *)(a1 + 388);
    v41 = v27 - v40;
    if ( (float)SHIDWORD(v121) <= (float)(v27 - v40) )
      v41 = (float)SHIDWORD(v121);
    v134.m256i_i32[6] = (int)v41;
    v42 = (float)(v38 + *(float *)(a1 + 392)) - *a2;
    if ( (float)v12 <= v42 )
      v42 = (float)v12;
    v134.m256i_i32[7] = (int)v42;
    v37 = (float)(v40 + *(float *)(a1 + 396)) - v27;
    if ( (float)SHIDWORD(v121) <= v37 )
      v37 = (float)SHIDWORD(v121);
  }
  LODWORD(v135) = (int)v37;
  WORD4(v133) = 0;
  Ptr = (__int64 (__fastcall **)(RTL_SRWLOCK *, _OWORD *))v122->Ptr;
  v44 = v133;
  v129 = v133;
  v45 = *(_OWORD *)v134.m256i_i8;
  v130 = v134;
  v46 = *(_OWORD *)&v134.m256i_u64[2];
  v47 = v135;
  v131 = v135;
  v48 = Ptr[13](v122, &v129);
  if ( v48 >= 0 )
  {
    *(_OWORD *)v127 = v44;
    *(_DWORD *)&v127[4] = 1;
    v50 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _OWORD *))v122->Ptr;
    v129 = *(_OWORD *)v127;
    *(_OWORD *)v130.m256i_i8 = v45;
    *(_OWORD *)&v130.m256i_u64[2] = v46;
    v131 = v47;
    v48 = v50[13](v122, &v129);
    if ( v48 < 0 )
    {
      v49 = 729LL;
      goto LABEL_36;
    }
    *(_OWORD *)v127 = v44;
    *(_DWORD *)v127 = 6;
    v51 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _OWORD *))v122->Ptr;
    v129 = *(_OWORD *)v127;
    *(_OWORD *)v130.m256i_i8 = v45;
    *(_OWORD *)&v130.m256i_u64[2] = v46;
    v131 = v47;
    v48 = v51[13](v122, &v129);
    if ( v48 < 0 )
    {
      v49 = 736LL;
      goto LABEL_36;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    {
      v52 = (int)v29;
      v53 = v30;
    }
    else
    {
      v52 = (int)*(float *)(a1 + 396);
      v53 = *(float *)(a1 + 392);
    }
    v129 = v44;
    v130.m256i_i32[3] = HIDWORD(v45);
    *(_OWORD *)&v130.m256i_u64[2] = v46;
    v131 = v47;
    v130.m256i_i64[0] = __PAIR64__(v52, v12);
    HIDWORD(v129) = HIDWORD(v121);
    v130.m256i_i32[2] = (int)(float)(v53 * 0.5);
    v54 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
    v55 = *a2;
    if ( v54 )
    {
      v56 = v55 - v32;
      if ( (float)v12 <= v56 )
        v56 = (float)v12;
      v130.m256i_i32[5] = (int)v56;
      v57 = v26 - v31;
      if ( (float)SHIDWORD(v121) <= (float)(v26 - v31) )
        v57 = (float)SHIDWORD(v121);
      v130.m256i_i32[6] = (int)v57;
      v58 = (float)(v30 + v32) - *a2;
      if ( (float)v12 <= v58 )
        v58 = (float)v12;
      v130.m256i_i32[7] = (int)v58;
      v59 = (float)(v29 + v31) - v26;
      if ( (float)SHIDWORD(v121) <= v59 )
        v59 = (float)SHIDWORD(v121);
    }
    else
    {
      v60 = *(float *)(a1 + 384);
      v61 = v55 - v60;
      if ( (float)v12 <= v61 )
        v61 = (float)v12;
      v130.m256i_i32[5] = (int)v61;
      v62 = *(float *)(a1 + 388);
      v63 = v26 - v62;
      if ( (float)SHIDWORD(v121) <= (float)(v26 - v62) )
        v63 = (float)SHIDWORD(v121);
      v130.m256i_i32[6] = (int)v63;
      v64 = (float)(v60 + *(float *)(a1 + 392)) - *a2;
      if ( (float)v12 <= v64 )
        v64 = (float)v12;
      v130.m256i_i32[7] = (int)v64;
      v59 = (float)(v62 + *(float *)(a1 + 396)) - v26;
      if ( (float)SHIDWORD(v121) <= v59 )
        v59 = (float)SHIDWORD(v121);
    }
    LODWORD(v131) = (int)v59;
    v65 = v129;
    *(_OWORD *)v127 = v129;
    v66 = *(_OWORD *)v130.m256i_i8;
    v67 = *(_OWORD *)&v130.m256i_u64[2];
    *(_DWORD *)&v127[4] = 4;
    v68 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
    *(__m256i *)&v127[16] = v130;
    *(_QWORD *)&v127[48] = v131;
    v9 = v68[13](v122, v127);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 775LL;
      goto LABEL_63;
    }
    *(_OWORD *)v127 = v65;
    *(_DWORD *)&v127[4] = 8;
    v69 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
    *(_OWORD *)&v127[16] = v66;
    *(_OWORD *)&v127[32] = v67;
    *(_QWORD *)&v127[48] = v131;
    v9 = v69[13](v122, v127);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 779LL;
      goto LABEL_63;
    }
    v141 = 0LL;
    v142 = 0LL;
    LODWORD(v139) = 2;
    *(_QWORD *)((char *)&v139 + 4) = 2LL;
    *(_QWORD *)&v140 = __PAIR64__(DWORD1(v124), v22);
    v70 = v125;
    HIDWORD(v139) = v125;
    *((_QWORD *)&v140 + 1) = (unsigned int)v25;
    v71 = v22;
    v72 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
    if ( v72 < v22 )
      v71 = v72;
    DWORD1(v141) = v71;
    v73 = v125;
    if ( DWORD2(v141) < (unsigned int)v125 )
      v73 = DWORD2(v141);
    DWORD2(v141) = v73;
    v74 = v22;
    if ( HIDWORD(v141) < v22 )
      v74 = HIDWORD(v141);
    HIDWORD(v141) = v74;
    if ( (_DWORD)v125 )
      v70 = 0;
    LODWORD(v142) = v70;
    WORD4(v139) = 257;
    v75 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
    *(_OWORD *)v127 = v139;
    *(_OWORD *)&v127[16] = v140;
    *(_OWORD *)&v127[32] = v141;
    *(_QWORD *)&v127[48] = v142;
    v9 = v75[13](v122, v127);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 795LL;
      goto LABEL_63;
    }
    v76 = v136;
    if ( a5 )
    {
      v139 = v44;
      v140 = v45;
      v77 = *(_OWORD *)&v134.m256i_u64[2];
      v141 = *(_OWORD *)&v134.m256i_u64[2];
      v142 = v47;
      v78 = v136[3] + v136[1];
      DWORD1(v139) = 6;
      v79 = (int)v136[2];
      DWORD2(v140) = v79;
      LODWORD(v140) = v79;
      LODWORD(v141) = v79;
      v80 = (float)v79;
      v81 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
      v82 = *v76;
      if ( v81 )
      {
        v83 = v82 - v32;
        if ( v80 <= v83 )
          v83 = (float)v79;
        DWORD1(v141) = (int)v83;
        v84 = v78 - v31;
        if ( (float)SHIDWORD(v139) <= (float)(v78 - v31) )
          v84 = (float)SHIDWORD(v139);
        DWORD2(v141) = (int)v84;
        v85 = (float)(v30 + v32) - *v76;
        if ( (float)v79 <= v85 )
          v85 = (float)v79;
        HIDWORD(v141) = (int)v85;
        v86 = (float)(v29 + v31) - v78;
        if ( (float)SHIDWORD(v139) <= v86 )
          v86 = (float)SHIDWORD(v139);
      }
      else
      {
        v87 = *(float *)(a1 + 384);
        v88 = v82 - v87;
        if ( v80 <= v88 )
          v88 = (float)v79;
        DWORD1(v141) = (int)v88;
        v89 = *(float *)(a1 + 388);
        v90 = v78 - v89;
        if ( (float)SHIDWORD(v139) <= (float)(v78 - v89) )
          v90 = (float)SHIDWORD(v139);
        DWORD2(v141) = (int)v90;
        v91 = (float)(v87 + *(float *)(a1 + 392)) - *v76;
        if ( (float)v79 <= v91 )
          v91 = (float)v79;
        HIDWORD(v141) = (int)v91;
        v86 = (float)(v89 + *(float *)(a1 + 396)) - v78;
        if ( (float)SHIDWORD(v139) <= v86 )
          v86 = (float)SHIDWORD(v139);
      }
      LODWORD(v142) = (int)v86;
      v92 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
      *(_OWORD *)v127 = v139;
      *(_OWORD *)&v127[16] = v140;
      *(_OWORD *)&v127[32] = v141;
      *(_QWORD *)&v127[48] = v142;
      v9 = v92[13](v122, v127);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 822LL;
        goto LABEL_63;
      }
      v129 = v44;
      *(_OWORD *)v130.m256i_i8 = v45;
      *(_OWORD *)&v130.m256i_u64[2] = v77;
      v131 = v47;
      DWORD1(v129) = 6;
      v130.m256i_i32[2] = v79;
      v130.m256i_i32[0] = v22;
      v93 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
      v94 = *v76;
      if ( v93 )
      {
        v95 = v94 - v32;
        if ( (float)v22 <= v95 )
          v95 = (float)v22;
        v130.m256i_i32[5] = (int)v95;
        v96 = v78 - v31;
        if ( (float)SHIDWORD(v129) <= (float)(v78 - v31) )
          v96 = (float)SHIDWORD(v129);
        v130.m256i_i32[6] = (int)v96;
        v97 = (float)(v30 + v32) - *v76;
        if ( (float)v22 <= v97 )
          v97 = (float)v22;
        v130.m256i_i32[7] = (int)v97;
        v98 = (float)(v29 + v31) - v78;
        if ( (float)SHIDWORD(v129) <= v98 )
          v98 = (float)SHIDWORD(v129);
        v99 = (int)v98;
      }
      else
      {
        v100 = *(float *)(a1 + 384);
        v101 = v94 - v100;
        if ( (float)v22 <= v101 )
          v101 = (float)v22;
        v130.m256i_i32[5] = (int)v101;
        v102 = *(float *)(a1 + 388);
        v103 = v78 - v102;
        if ( (float)SHIDWORD(v129) <= (float)(v78 - v102) )
          v103 = (float)SHIDWORD(v129);
        v130.m256i_i32[6] = (int)v103;
        v104 = (float)(v100 + *(float *)(a1 + 392)) - *v76;
        if ( (float)v22 <= v104 )
          v104 = (float)v22;
        v130.m256i_i32[7] = (int)v104;
        v105 = (float)(v102 + *(float *)(a1 + 396)) - v78;
        if ( (float)SHIDWORD(v129) <= v105 )
          v105 = (float)SHIDWORD(v129);
        v99 = (int)v105;
      }
      LODWORD(v131) = v99;
      v106 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
      v107 = v129;
      *(_OWORD *)v127 = v129;
      v108 = *(_OWORD *)v130.m256i_i8;
      *(__m256i *)&v127[16] = v130;
      v109 = *(_OWORD *)&v130.m256i_u64[2];
      v110 = v131;
      *(_QWORD *)&v127[48] = v131;
      v9 = v106[13](v122, v127);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 844LL;
        goto LABEL_63;
      }
      *(_OWORD *)v127 = v107;
      *(_WORD *)&v127[8] = 257;
      v111 = (__int64 (__fastcall **)(RTL_SRWLOCK *, _BYTE *))v122->Ptr;
      *(_OWORD *)&v127[16] = v108;
      *(_OWORD *)&v127[32] = v109;
      *(_QWORD *)&v127[48] = v110;
      v9 = v111[13](v122, v127);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 851LL;
        goto LABEL_63;
      }
    }
    v112 = v76[2];
    if ( v112 > 0.0 )
    {
      v113 = v76[3];
      if ( v113 > 0.0 )
      {
        LODWORD(v123) = (int)v112;
        HIDWORD(v123) = (int)v113;
        v114 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
        v121 = v122;
        if ( !v114 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
          v115 = v132;
          UnsafeAddOptionsRelativeToInside(3, (_DWORD)v76, v132, (unsigned int)&v123, 0, (__int64)&v121);
          v121 = v122;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
          UnsafeAddOptionsRelativeToInside(3, (_DWORD)v76, v115, (unsigned int)&v123, 1, (__int64)&v121);
LABEL_124:
          v116 = v128;
          v117 = *(float *)(v128 + 8);
          if ( v117 > 0.0 )
          {
            v118 = *(float *)(v128 + 12);
            if ( v118 > 0.0 )
            {
              LODWORD(v123) = (int)v117;
              HIDWORD(v123) = (int)v118;
              v119 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
              v121 = v122;
              if ( v119 )
              {
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
                AddOptionsRelativeToInside(5, v116, (unsigned int)v137, (unsigned int)&v123, 0, (__int64)&v121);
                v121 = v122;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
                AddOptionsRelativeToInside(5, v116, (unsigned int)v137, (unsigned int)&v123, 1, (__int64)&v121);
              }
              else
              {
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
                UnsafeAddOptionsRelativeToInside(5, v116, v115, (unsigned int)&v123, 0, (__int64)&v121);
                v121 = v122;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
                UnsafeAddOptionsRelativeToInside(5, v116, v115, (unsigned int)&v123, 1, (__int64)&v121);
              }
            }
          }
          v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64))v122->Ptr + 8))(v122, v138);
          v10 = v9;
          if ( v9 >= 0 )
          {
            v10 = 0;
            goto LABEL_133;
          }
          v11 = 886LL;
          goto LABEL_63;
        }
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
        AddOptionsRelativeToInside(3, (_DWORD)v76, (unsigned int)v137, (unsigned int)&v123, 0, (__int64)&v121);
        v121 = v122;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v121);
        AddOptionsRelativeToInside(3, (_DWORD)v76, (unsigned int)v137, (unsigned int)&v123, 1, (__int64)&v121);
      }
    }
    v115 = v132;
    goto LABEL_124;
  }
  v49 = 707LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v49,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)(unsigned int)v48);
  v10 = v48;
LABEL_133:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v122);
  return v10;
}
