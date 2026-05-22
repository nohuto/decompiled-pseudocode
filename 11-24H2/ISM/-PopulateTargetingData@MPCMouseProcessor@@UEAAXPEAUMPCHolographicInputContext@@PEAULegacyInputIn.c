/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C2820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024DC0 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18006BB48 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800B7B14 (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0FC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x1800BFE30 (-GetTicks@PerfCounter@@YA_JXZ.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUquaternion@012@AEBU3012@0@Z @ 0x1800C6564 (--DNumerics@Foundation@Windows@@YA-AUquaternion@012@AEBU3012@0@Z.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800C7468 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800C7890 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801BF9DC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C0E78 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C1F6C (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C2160 (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C36B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1801C375C (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  LARGE_INTEGER Ticks; // rbx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  __m128 v12; // xmm3
  __m128i v13; // xmm7
  __m128 v14; // xmm1
  __m128 v15; // xmm7
  __m128 v16; // xmm7
  __m128 v17; // xmm2
  __m128 v18; // xmm0
  __m128 v19; // xmm8
  int v20; // r12d
  struct MPCConstantManager *Instance; // rax
  float YawAngleBetweenTwoVectors; // xmm6_4
  float v23; // xmm8_4
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const char *v27; // r9
  struct MPCConstantManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  const char *v32; // r9
  struct MPCConstantManager *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  const char *v38; // r9
  struct MPCConstantManager *v39; // rax
  char v40; // r12
  float v41; // xmm7_4
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  const char *v45; // r9
  struct MPCConstantManager *v46; // rax
  float v47; // xmm7_4
  float v48; // xmm8_4
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  const char *v52; // r9
  struct MPCConstantManager *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  const char *v57; // r9
  float v58; // xmm8_4
  struct MPCConstantManager *v59; // rax
  float v60; // xmm0_4
  int *v61; // rdx
  float *v62; // rax
  __int32 v63; // ecx
  __int32 v64; // ebx
  __int64 v65; // rdi
  __int64 (__fastcall *v66)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  _BYTE v71[16]; // [rsp+78h] [rbp-90h] BYREF
  __m128 v72; // [rsp+88h] [rbp-80h] BYREF
  float v73; // [rsp+98h] [rbp-70h] BYREF
  float v74; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v75[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int32 v76; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v78; // [rsp+B8h] [rbp-50h] BYREF
  int v79; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v80; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v81; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v82; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 v83; // [rsp+F8h] [rbp-10h]
  __int32 v84; // [rsp+100h] [rbp-8h]
  float v85[16]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v86; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  Ticks = PerfCounter::GetTicks(this);
  *(_QWORD *)v75 = *(_QWORD *)((char *)a2 + 180);
  v76 = *((_DWORD *)a2 + 47);
  v71[0] = 0;
  LOBYTE(v7) = 1;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _BYTE *))(**((_QWORD **)this + 456) + 104LL))(
         *((_QWORD *)this + 456),
         0LL,
         1LL,
         v7,
         v71) < 0 )
    v71[0] = 0;
  v12 = (__m128)*((unsigned int *)a2 + 63);
  if ( v12.m128_f32[0] == *((float *)a2 + 42)
    && *((float *)a2 + 64) == *((float *)a2 + 43)
    && *((float *)a2 + 65) == *((float *)a2 + 44) )
  {
    v13.m128i_i32[0] = v76;
    goto LABEL_31;
  }
  v72.m128_u64[0] = *((_QWORD *)a2 + 21);
  v14 = (__m128)*((unsigned int *)a2 + 64);
  v14.m128_f32[0] = v14.m128_f32[0] - v72.m128_f32[1];
  v12.m128_f32[0] = v12.m128_f32[0] - v72.m128_f32[0];
  v72.m128_f32[2] = *((float *)a2 + 65) - *((float *)a2 + 44);
  v15 = 0LL;
  v15.m128_u64[0] = _mm_unpacklo_ps(v12, v14).m128_u64[0];
  v16 = _mm_movelh_ps(v15, (__m128)v72.m128_u32[2]);
  v17 = _mm_mul_ps(v16, v16);
  v18 = _mm_shuffle_ps(v17, v17, 102);
  v17.m128_f32[0] = (float)(v17.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  v19 = _mm_div_ps(v16, _mm_sqrt_ps(_mm_shuffle_ps(v17, v17, 0)));
  v77 = v19.m128_u64[0];
  v13 = (__m128i)_mm_shuffle_ps(v19, v19, 170);
  v78 = v13.m128i_i32[0];
  v20 = _mm_cvtsi128_si32(v13);
  if ( *((_QWORD *)this + 1052) )
  {
    Instance = MPCConstantManager::GetInstance(v9, v8, v10, v11);
    v72.m128_u64[0] = (unsigned __int64)L"MouseParams_ResetCursorDirectionThresholdSeconds";
    v72.m128_u64[1] = 48LL;
    if ( (float)((double)(Ticks.LowPart - *((_DWORD *)this + 2104)) / (double)(int)qword_180250DA8) > (double)MPCConstantManager::GetConstant<float>((__int64)Instance, (unsigned __int64)this & -(__int64)(this != (MPCMouseProcessor *)40), (__int128 *)&v72) )
    {
      *((LARGE_INTEGER *)this + 1052) = Ticks;
LABEL_13:
      *((_QWORD *)this + 1053) = v19.m128_u64[0];
      *((_DWORD *)this + 2108) = v20;
      goto LABEL_14;
    }
  }
  *((LARGE_INTEGER *)this + 1052) = Ticks;
  if ( *((float *)this + 2106) == 0.0 && *((float *)this + 2107) == 0.0 && *((float *)this + 2108) == 0.0 )
    goto LABEL_13;
LABEL_14:
  if ( *((_DWORD *)this + 1333) )
  {
    v13.m128i_i32[0] = v76;
  }
  else
  {
    *(_QWORD *)v75 = v77;
    v76 = v13.m128i_i32[0];
  }
  v74 = 0.0;
  v73 = 0.0;
  if ( *((_DWORD *)this + 1339) || *((_DWORD *)this + 1340) )
  {
    v72.m128_u64[0] = v19.m128_u64[0];
    v72.m128_i32[2] = v20;
    v80.m128_u64[0] = *(_QWORD *)((char *)a2 + 180);
    v80.m128_i32[2] = *((_DWORD *)a2 + 47);
    YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(
                                  (unsigned __int64 *)&v80,
                                  (unsigned __int64 *)&v72);
    v72.m128_u64[0] = v19.m128_u64[0];
    v72.m128_i32[2] = v20;
    v80.m128_u64[0] = *(_QWORD *)((char *)a2 + 180);
    v80.m128_i32[2] = *((_DWORD *)a2 + 47);
    LODWORD(v23) = MPCMouseProcessor::GetPitchAngleBetweenTwoVectors((unsigned __int64 *)&v80, (unsigned __int64 *)&v72).m128_u32[0] & _xmm;
    v28 = MPCConstantManager::GetInstance(v25, v24, v26, v27);
    v72.m128_u64[0] = (unsigned __int64)L"MouseParams_ResetHorizontalAngleRadians";
    v72.m128_u64[1] = 39LL;
    if ( COERCE_FLOAT(LODWORD(YawAngleBetweenTwoVectors) & _xmm) > MPCConstantManager::GetConstant<float>(
                                                                     (__int64)v28,
                                                                     (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                                                                     (__int128 *)&v72)
      || (v33 = MPCConstantManager::GetInstance(v30, v29, v31, v32),
          v72.m128_u64[0] = (unsigned __int64)L"MouseParams_ResetVerticalAngleRadians",
          v72.m128_u64[1] = 37LL,
          v23 > MPCConstantManager::GetConstant<float>(
                  (__int64)v33,
                  (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                  (__int128 *)&v72)) )
    {
      MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance);
      *(_QWORD *)v75 = *(_QWORD *)((char *)a2 + 180);
      v64 = *((_DWORD *)a2 + 47);
      *((_QWORD *)this + 1053) = *(_QWORD *)v75;
      *((_DWORD *)this + 2108) = v64;
      RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 448));
      v13.m128i_i32[0] = v64;
    }
    else if ( !*((_BYTE *)this + 5312) || !v71[0] )
    {
      LOBYTE(v34) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
        v34);
      if ( !*((_BYTE *)a2 + 3272) )
      {
        v39 = MPCConstantManager::GetInstance(v36, v35, v37, v38);
        v72.m128_u64[0] = (unsigned __int64)L"MouseParams_UseHitTestMouseReference";
        v72.m128_u64[1] = 36LL;
        v40 = MPCConstantManager::GetConstant<bool>(
                (__int64)v39,
                (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                (__int128 *)&v72);
        v41 = (float)*((int *)this + 1339);
        v46 = MPCConstantManager::GetInstance(v43, v42, v44, v45);
        v72.m128_u64[0] = (unsigned __int64)L"MouseParams_DeltaToRadiansRatio";
        v72.m128_u64[1] = 31LL;
        v47 = (float)(v41
                    / MPCConstantManager::GetConstant<float>(
                        (__int64)v46,
                        (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                        (__int128 *)&v72))
            * -1.0;
        v74 = v47;
        v48 = (float)*((int *)this + 1340);
        v53 = MPCConstantManager::GetInstance(v50, v49, v51, v52);
        v72.m128_u64[0] = (unsigned __int64)L"MouseParams_DeltaToRadiansRatio";
        v72.m128_u64[1] = 31LL;
        v58 = (float)(v48
                    / MPCConstantManager::GetConstant<float>(
                        (__int64)v53,
                        (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                        (__int128 *)&v72))
            * -1.0;
        v73 = v58;
        if ( !v40 )
        {
          v59 = MPCConstantManager::GetInstance(v55, v54, v56, v57);
          v72.m128_u64[0] = (unsigned __int64)L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor";
          v72.m128_u64[1] = 70LL;
          v60 = MPCConstantManager::GetConstant<float>(
                  (__int64)v59,
                  (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
                  (__int128 *)&v72);
          v47 = v60 * v47;
          v74 = v47;
          v58 = v60 * v58;
          v73 = v58;
        }
        MPCMath::OrientToGravity(&v82, (float *)a2 + 4, 0.89999998);
        v80.m128_u64[0] = v82;
        v80.m128_i32[2] = DWORD2(v82);
        v72.m128_u64[0] = v83;
        v72.m128_i32[2] = v84;
        Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v81.m128_f32, v80.m128_f32, v58);
        Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v80.m128_f32, v72.m128_f32, v47);
        Windows::Foundation::Numerics::operator*(&v72, &v81, &v80);
        Windows::Foundation::Numerics::make_float4x4_from_quaternion(v85, &v72);
        v61 = v75;
        if ( !v40 )
          v61 = (int *)((char *)this + 8424);
        v62 = Windows::Foundation::Numerics::transform_normal(v72.m128_f32, (float *)v61, v85);
        v63 = *((_DWORD *)v62 + 2);
        *(_QWORD *)v75 = *(_QWORD *)v62;
        *((_QWORD *)this + 1053) = *(_QWORD *)v75;
        *((_DWORD *)this + 2108) = v63;
        v13.m128i_i32[0] = v63;
      }
    }
  }
  ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,float &,float &,float &,float &,float &,float &,long &,long &,int &,long &,long &,float &,float &>(
    (unsigned int *)a3 + 1,
    (float *)a2 + 45,
    (float *)a2 + 46,
    (float *)a2 + 47,
    (float *)&v77,
    (float *)&v77 + 1,
    (float *)&v78,
    (int *)this + 1310,
    (int *)this + 1311,
    (int *)this + 1341,
    (int *)this + 1339,
    (int *)this + 1340,
    &v74,
    &v73);
LABEL_31:
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 43);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 44);
  *((_DWORD *)a3 + 33) = v75[0];
  *((_DWORD *)a3 + 34) = v75[1];
  *((_DWORD *)a3 + 35) = v13.m128i_i32[0];
  *((_QWORD *)a3 + 21) = 0LL;
  *((_BYTE *)a3 + 89) = 0;
  v86 = 0LL;
  LOBYTE(v11) = 1;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, const char *, __int128 *))(**((_QWORD **)this + 456) + 112LL))(
         *((_QWORD *)this + 456),
         0LL,
         1LL,
         v11,
         &v86) >= 0
    && (((_DWORD)v86 == DWORD2(v86)) == DWORD1(v86)) == HIDWORD(v86) )
  {
    v74 = 0.0;
    v73 = 0.0;
    v79 = 0;
    *(_QWORD *)v75 = 0LL;
    v65 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v66 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v65 + 64LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v75);
    v67 = v66(v65, 0LL, 0LL, 0LL);
    if ( v67 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2FA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v67,
        (int)v75);
    v77 = 0LL;
    if ( *(_QWORD *)v75
      && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v75,
                (__int64 *)&v77) >= 0 )
    {
      v68 = (*(__int64 (__fastcall **)(unsigned __int64, float *))(*(_QWORD *)v77 + 32LL))(v77, &v74);
      if ( v68 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v68,
          (int)v75);
      v69 = (*(__int64 (__fastcall **)(unsigned __int64, float *))(*(_QWORD *)v77 + 40LL))(v77, &v73);
      if ( v69 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x300,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v69,
          (int)v75);
      v70 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v77 + 48LL))(v77, &v79);
      if ( v70 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x301,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v70,
          (int)v75);
    }
    *((_BYTE *)a3 + 89) = 1;
    *((float *)a3 + 23) = v74;
    *((float *)a3 + 24) = v73;
    *((_DWORD *)a3 + 25) = v79;
    *(_OWORD *)((char *)a3 + 104) = v86;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v77);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v75);
  }
  *((_DWORD *)a3 + 20) = **((_DWORD **)this + 3);
  *((_DWORD *)a3 + 21) = 2;
}
