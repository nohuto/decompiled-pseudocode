/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800688C0
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x180068540 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800691F8 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180098FC4 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     _o_sqrtf_0 @ 0x18009D52C (_o_sqrtf_0.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x1800BFA08 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801BBF3C (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BCA7C (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  _BYTE *v2; // rsi
  char v5; // r14
  int v6; // xmm1_4
  bool v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  float v12; // xmm6_4
  struct MPCConstantManager *Instance; // rax
  bool v14; // dl
  MPCButtonHoldHelper *v15; // rcx
  char v16; // si
  char v17; // r10
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const char *v22; // r9
  char v23; // r10
  int v24; // xmm0_4
  int v25; // xmm1_4
  struct MPCConstantManager *v26; // rax
  float v27; // xmm6_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // r9
  struct MPCConstantManager *v32; // rax
  float v33; // xmm6_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  __m128 v36; // xmm8
  __m128 v37; // xmm10
  __int64 v38; // rdx
  __int64 v39; // r8
  const char *v40; // r9
  float v41; // xmm9_4
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  float v46; // xmm6_4
  struct MPCConstantManager *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  const char *v51; // r9
  struct MPCConstantManager *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  const char *v56; // r9
  float v57; // xmm6_4
  float v58; // xmm7_4
  struct MPCConstantManager *v59; // rbx
  float v60; // xmm0_4
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  const char *v64; // r9
  __m128 v65; // xmm6
  __m128 v66; // xmm7
  struct MPCConstantManager *v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  struct MPCConstantManager *v70; // rax
  int v71; // ecx
  unsigned __int64 *v72; // rax
  float v73; // xmm1_4
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  const char *v77; // r9
  __m128 v78; // xmm2
  __m128 v79; // xmm1
  __m128 v80; // xmm2
  __m128 v81; // xmm1
  struct MPCConstantManager *v82; // rax
  float v83; // xmm0_4
  __m128 v84; // xmm2
  __m128 v85; // xmm1
  float v86; // xmm6_4
  float v87; // xmm1_4
  std::_Ref_count_base *v88[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v89; // [rsp+D8h] [rbp+67h] BYREF
  unsigned __int64 v90; // [rsp+E0h] [rbp+6Fh] BYREF

  v2 = (char *)this + 10808;
  LODWORD(v89) = 0;
  v5 = 0;
  *((_DWORD *)this + 1042) = *((_DWORD *)a2 + 567);
  v6 = *((_DWORD *)a2 + 575);
  *((_DWORD *)this + 1052) = *((_DWORD *)a2 + 574);
  *((_DWORD *)this + 1053) = v6;
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 570) & *((_DWORD *)a2 + 569);
  if ( (*((_BYTE *)a2 + 2280) & 4) == 0 || (v7 = 1, *v2) )
    v7 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 519),
    v7,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  if ( *((_BYTE *)a2 + 2323) )
  {
    v12 = *((float *)a2 + 578) - *((float *)this + 1044);
    Instance = MPCConstantManager::GetInstance(v9, v8, v10, v11);
    v88[1] = (std::_Ref_count_base *)22;
    v88[0] = (std::_Ref_count_base *)L"TriggerSmoothingFactor";
    *((float *)this + 1044) = (float)(MPCConstantManager::GetConstant<float>(
                                        Instance,
                                        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                        v88)
                                    * v12)
                            + *((float *)this + 1044);
  }
  else
  {
    *((_DWORD *)this + 1044) = 0;
  }
  if ( (*((_BYTE *)this + 4172) & 8) == 0 || (v14 = 1, *v2) )
    v14 = 0;
  v15 = (MPCButtonHoldHelper *)*((_QWORD *)this + 514);
  *((_BYTE *)this + 10802) = v14;
  MPCButtonHoldHelper::UpdateState(v15, v14, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 514) + 10LL)
    || (v5 = 1,
        v16 = 0,
        *(_BYTE *)(*(_QWORD *)MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 519), v88) + 10LL)) )
  {
    v16 = 1;
  }
  if ( (v5 & 1) != 0 && v88[1] )
    std::_Ref_count_base::_Decref(v88[1]);
  if ( v16 )
    MPCSixDofProcessor::ResetRayLength(this);
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 517),
    (*((_DWORD *)a2 + 570) & 0x40) != 0,
    *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 516), (v17 & 0x40) == 0, *((_QWORD *)a2 + 2));
  v18 = *((_BYTE *)this + 3676);
  if ( v18 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 516) + 9LL) )
    {
      *((_BYTE *)this + 3676) = 0;
      v18 = 0;
    }
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 517) + 9LL) )
  {
    *((_BYTE *)this + 3676) = 1;
    v18 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 518), v18, *((_QWORD *)a2 + 2));
  if ( v23 )
  {
    v24 = *((_DWORD *)a2 + 574);
    v25 = *((_DWORD *)a2 + 575);
    *((_DWORD *)this + 1048) = v24;
    *((_DWORD *)this + 1049) = v25;
    *((_DWORD *)this + 1054) = v24;
    *((_DWORD *)this + 1055) = v25;
    *((_DWORD *)this + 918) = 2;
    *((_QWORD *)this + 528) = 0LL;
    *((_QWORD *)this + 529) = 0LL;
    *(_QWORD *)((char *)this + 4284) = 0LL;
  }
  if ( *((_BYTE *)this + 3676) )
  {
    v26 = MPCConstantManager::GetInstance(v20, v19, v21, v22);
    v27 = *((float *)this + 1048);
    v88[0] = (std::_Ref_count_base *)L"TouchpadAxesSmoothingFactor";
    v88[1] = (std::_Ref_count_base *)27;
    *((float *)this + 1048) = (float)((float)(*((float *)this + 1052) - v27)
                                    * MPCConstantManager::GetConstant<float>(
                                        v26,
                                        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                        v88))
                            + v27;
    v32 = MPCConstantManager::GetInstance(v29, v28, v30, v31);
    v33 = *((float *)this + 1049);
    v88[0] = (std::_Ref_count_base *)L"TouchpadAxesSmoothingFactor";
    v88[1] = (std::_Ref_count_base *)27;
    v34 = MPCConstantManager::GetConstant<float>(v32, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), v88);
    v37 = (__m128)*((unsigned int *)this + 1053);
    v37.m128_f32[0] = (float)((float)(v37.m128_f32[0] - v33) * v34) + v33;
    *((_DWORD *)this + 1049) = v37.m128_i32[0];
    v36 = (__m128)*((unsigned int *)this + 1048);
    v35 = *((float *)this + 1048) - *((float *)this + 1050);
    *((float *)this + 1057) = v37.m128_f32[0] - *((float *)this + 1051);
    *((float *)this + 1056) = v35;
    v36.m128_f32[0] = v36.m128_f32[0] - *((float *)this + 1054);
    v37.m128_f32[0] = v37.m128_f32[0] - *((float *)this + 1055);
    v41 = o_sqrtf_0((float)(v36.m128_f32[0] * v36.m128_f32[0]) + (float)(v37.m128_f32[0] * v37.m128_f32[0]));
    if ( v7 )
      *((_DWORD *)this + 918) = 3;
    v42 = *((_DWORD *)this + 918);
    if ( v42 )
    {
      v43 = v42 - 1;
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          if ( v44 == 1 && !*((_BYTE *)this + 3676) )
            *((_DWORD *)this + 918) = 2;
        }
        else
        {
          v45 = *(_QWORD *)(*((_QWORD *)this + 517) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 517) + 16LL);
          v46 = (double)(int)v45 / (double)(int)qword_180250DA8;
          v47 = MPCConstantManager::GetInstance(v45, v38, v39, v40);
          v88[1] = (std::_Ref_count_base *)27;
          v88[0] = (std::_Ref_count_base *)L"TouchpadRailsTimeoutSeconds";
          if ( v46 > MPCConstantManager::GetConstant<float>(
                       v47,
                       ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                       v88) )
          {
            v52 = MPCConstantManager::GetInstance(v49, v48, v50, v51);
            v88[1] = (std::_Ref_count_base *)32;
            v88[0] = (std::_Ref_count_base *)L"TouchpadRailsMinDistanceTraveled";
            if ( v41 > MPCConstantManager::GetConstant<float>(v52, (char *)this + 24, v88) )
            {
              v57 = *((float *)this + 1055);
              v58 = *((float *)this + 1054);
              v59 = MPCConstantManager::GetInstance(v54, v53, v55, v56);
              v88[1] = (std::_Ref_count_base *)24;
              v88[0] = (std::_Ref_count_base *)L"TouchpadRailsMinDistance";
              v60 = o_sqrtf_0((float)(v58 * v58) + (float)(v57 * v57));
              if ( v60 <= MPCConstantManager::GetConstant<float>(
                            v59,
                            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                            v88) )
              {
                v70 = MPCConstantManager::GetInstance(v62, v61, v63, v64);
                v88[1] = (std::_Ref_count_base *)29;
                v88[0] = (std::_Ref_count_base *)L"TouchpadRailsDirectionDegrees";
                MPCConstantManager::GetConstant<float>(
                  v70,
                  ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                  v88);
                v69 = _mm_unpacklo_ps(v36, v37).m128_u64[0];
              }
              else
              {
                v65 = (__m128)*((unsigned int *)this + 1054);
                v66 = (__m128)*((unsigned int *)this + 1055);
                v67 = MPCConstantManager::GetInstance(v62, v61, v63, v64);
                v88[1] = (std::_Ref_count_base *)25;
                v88[0] = (std::_Ref_count_base *)L"TouchpadRailsPressDegrees";
                MPCConstantManager::GetConstant<float>(
                  v67,
                  ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                  v88);
                v69 = _mm_unpacklo_ps(v65, v66).m128_u64[0];
              }
              v71 = (unsigned __int8)IsPointInHorizontalQuadrant(v68, v69) ^ 1;
              *((_DWORD *)this + 918) = v71;
              if ( v71 )
              {
                LODWORD(v89) = 0;
                *((float *)&v89 + 1) = v41;
              }
              else
              {
                v90 = LODWORD(v41);
              }
              v72 = &v89;
              if ( !v71 )
                v72 = &v90;
              *((_QWORD *)this + 528) = *v72;
              if ( v71 )
                v36.m128_i32[0] = v37.m128_i32[0];
              if ( v36.m128_f32[0] < 0.0 )
              {
                v73 = *((float *)this + 1057) * -1.0;
                *((float *)this + 1056) = *((float *)this + 1056) * -1.0;
                *((float *)this + 1057) = v73;
              }
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 1056) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 1057) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 528) = 0LL;
  }
  if ( o_sqrtf_0(
         (float)(*((float *)this + 1056) * *((float *)this + 1056))
       + (float)(*((float *)this + 1057) * *((float *)this + 1057))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 518) + 9LL) )
    {
      v78 = (__m128)*((unsigned __int64 *)this + 529);
      v79 = _mm_mul_ps(v78, v78);
      v79.m128_f32[0] = v79.m128_f32[0] + _mm_shuffle_ps(v79, v79, 85).m128_f32[0];
      v90 = _mm_div_ps(v78, _mm_sqrt_ps(_mm_shuffle_ps(v79, v79, 0))).m128_u64[0];
      v80 = (__m128)*((unsigned __int64 *)this + 528);
      v81 = _mm_mul_ps(v80, v80);
      v81.m128_f32[0] = v81.m128_f32[0] + _mm_shuffle_ps(v81, v81, 85).m128_f32[0];
      v89 = _mm_div_ps(v80, _mm_sqrt_ps(_mm_shuffle_ps(v81, v81, 0))).m128_u64[0];
      v82 = MPCConstantManager::GetInstance(v75, v74, v76, v77);
      v88[1] = (std::_Ref_count_base *)28;
      v88[0] = (std::_Ref_count_base *)L"TouchpadDeltaSmoothingFactor";
      v83 = MPCConstantManager::GetConstant<float>(v82, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), v88);
      v81.m128_f32[0] = (float)((float)(*((float *)&v89 + 1) - *((float *)&v90 + 1)) * v83) + *((float *)this + 1059);
      *((float *)this + 1058) = (float)((float)(*(float *)&v89 - *(float *)&v90) * v83) + *((float *)this + 1058);
      *((_DWORD *)this + 1059) = v81.m128_i32[0];
    }
    else
    {
      v84 = (__m128)*((unsigned __int64 *)this + 528);
      v85 = _mm_mul_ps(v84, v84);
      v85.m128_f32[0] = v85.m128_f32[0] + _mm_shuffle_ps(v85, v85, 85).m128_f32[0];
      *((_QWORD *)this + 529) = _mm_div_ps(v84, _mm_sqrt_ps(_mm_shuffle_ps(v85, v85, 0))).m128_u64[0];
    }
  }
  v86 = *((float *)this + 1067);
  v87 = *((float *)this + 1045);
  *((float *)this + 1068) = (float)(v87 * *((float *)this + 1065)) + *((float *)this + 1062);
  *((float *)this + 1069) = (float)(v87 * *((float *)this + 1066)) + *((float *)this + 1063);
  *((float *)this + 1070) = (float)(v86 * v87) + *((float *)this + 1064);
  *((_QWORD *)this + 525) = *((_QWORD *)this + 524);
}
