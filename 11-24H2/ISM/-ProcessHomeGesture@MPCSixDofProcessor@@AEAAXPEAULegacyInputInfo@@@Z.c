/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800105F8
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800103C0 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18000FC5C (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800691F8 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007F4D0 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x1800B783C (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800BA93C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z @ 0x1800CEFA4 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801B9CEC (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801B9F38 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801B9F74 (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801B9FB0 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801BA68C (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801BB5A8 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801BC060 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?ResetHomeState@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BCA38 (-ResetHomeState@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801BCC18 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v6; // r14
  struct MPCConstantManager *Instance; // rbx
  unsigned __int64 v8; // rsi
  unsigned int v9; // eax
  unsigned int Static; // eax
  unsigned __int64 v11; // r8
  MPCButtonHoldHelper *v12; // rcx
  char v13; // dl
  MPCButtonHoldHelper *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  const char *v19; // r9
  struct MPCConstantManager *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned int v23; // eax
  __m128 v24; // xmm15
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // di
  __int64 v28; // r8
  const char *v29; // r9
  __m128 v30; // xmm7
  float v31; // xmm8_4
  bool v32; // zf
  float v33; // xmm1_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  float v36; // xmm10_4
  float v37; // xmm10_4
  struct MPCConstantManager *v38; // rax
  float v39; // xmm0_4
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  const char *v47; // r9
  struct MPCConstantManager *v48; // rax
  float v49; // xmm0_4
  __int64 v50; // rcx
  __int64 v51; // rax
  float v52; // xmm4_4
  float v53; // xmm1_4
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  __int64 v57; // rax
  __int64 v58; // rcx
  float v59; // xmm6_4
  struct MPCConstantManager *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  const char *v64; // r9
  struct MPCConstantManager *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  const char *v69; // r9
  struct MPCConstantManager *v70; // rax
  char v71; // al
  char v72; // al
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  const char *v76; // r9
  unsigned int v77; // ebx
  struct MPCConstantManager *v78; // rax
  char v79; // al
  __int64 v80; // rax
  _DWORD *v81; // rdx
  int v82; // eax
  _BYTE *v83; // rbx
  MPCHolographicInputManager *v84; // rax
  __int64 v85; // rax
  double v86; // xmm1_8
  unsigned int *v87; // rax
  MPCHolographicInputManager *v88; // rax
  __int64 v89; // rax
  unsigned int *v90; // rsi
  unsigned int *v91; // rdi
  MPCHolographicInputManager *v92; // rax
  __int64 v93; // rax
  double v94; // xmm1_8
  unsigned int *v95; // rax
  unsigned __int64 v96; // rdx
  unsigned __int8 v97; // cl
  ISMTracing *v98; // rcx
  int v99; // eax
  int v100; // eax
  __int128 v101; // [rsp+B8h] [rbp-80h] BYREF
  unsigned int v102; // [rsp+C8h] [rbp-70h] BYREF
  float v103; // [rsp+CCh] [rbp-6Ch] BYREF
  float v104; // [rsp+D0h] [rbp-68h] BYREF
  float v105; // [rsp+D4h] [rbp-64h] BYREF
  float v106; // [rsp+D8h] [rbp-60h] BYREF
  float v107; // [rsp+E0h] [rbp-58h] BYREF
  float v108; // [rsp+E4h] [rbp-54h] BYREF
  float v109; // [rsp+E8h] [rbp-50h] BYREF
  float v110; // [rsp+F0h] [rbp-48h] BYREF
  float v111; // [rsp+F4h] [rbp-44h] BYREF
  float v112; // [rsp+F8h] [rbp-40h] BYREF
  _QWORD v113[26]; // [rsp+100h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+D8h]
  bool v115; // [rsp+218h] [rbp+E0h] BYREF
  int v116; // [rsp+220h] [rbp+E8h] BYREF
  unsigned int v117; // [rsp+228h] [rbp+F0h] BYREF
  float v118; // [rsp+230h] [rbp+F8h] BYREF

  v6 = *((_BYTE *)a2 + 2280) & 1;
  v103 = *((float *)this + 1073);
  Instance = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, a3, a4);
  *((_QWORD *)&v101 + 1) = 33LL;
  *(_QWORD *)&v101 = L"HomeCancelExceedThresholdMaxCount";
  v8 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 48LL))(v8);
  Static = MPCConstantManager::GetStaticConstant<unsigned long>((__int64)Instance, v9, &v101);
  v11 = *((_QWORD *)a2 + 2);
  v12 = (MPCButtonHoldHelper *)*((_QWORD *)this + 513);
  v102 = Static;
  MPCButtonHoldHelper::UpdateState(v12, v6, v11);
  v13 = *(_BYTE *)(*((_QWORD *)this + 513) + 8LL);
  v14 = (MPCButtonHoldHelper *)*((_QWORD *)this + 512);
  if ( !v13 && *((_BYTE *)v14 + 8) )
  {
    v13 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
    v14 = (MPCButtonHoldHelper *)*((_QWORD *)this + 512);
  }
  MPCButtonHoldHelper::UpdateState(v14, v13, *((_QWORD *)a2 + 2));
  v15 = *((_DWORD *)this + 1073);
  v20 = MPCConstantManager::GetInstance(v17, v16, v18, v19);
  v21 = *(_QWORD *)v8;
  v22 = (__int64)v20;
  *((_QWORD *)&v101 + 1) = 33LL;
  *(_QWORD *)&v101 = L"HomeCancelExceedThresholdMaxCount";
  v23 = (*(__int64 (__fastcall **)(unsigned __int64))(v21 + 48))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v24 = 0LL;
  v27 = v15 >= (unsigned int)MPCConstantManager::GetStaticConstant<unsigned long>(v22, v23, &v101);
  v30 = 0LL;
  v110 = 0.0;
  v31 = 0.0;
  v111 = 0.0;
  v112 = 0.0;
  v32 = *((_BYTE *)this + 10801) == 0;
  LOBYTE(v116) = v27;
  v115 = v27;
  if ( !v32 )
  {
    v33 = *((float *)a2 + 32);
    v24 = (__m128)*((unsigned int *)a2 + 30);
    v34 = *((float *)a2 + 31) - *((float *)this + 1087);
    v35 = v33 - *((float *)this + 1088);
    v36 = *((float *)a2 + 30);
    v117 = *((_DWORD *)a2 + 31);
    v37 = v36 - *((float *)this + 1086);
    v118 = v33;
    v111 = v34;
    v112 = v35;
    v110 = v37;
    v38 = MPCConstantManager::GetInstance(v26, v25, v28, v29);
    *(_QWORD *)&v101 = L"HomeDistanceWeight";
    *((_QWORD *)&v101 + 1) = 18LL;
    v39 = MPCConstantManager::GetConstant<float>(v38, (char *)this + 24, &v101);
    v40 = *((float *)this + 1089);
    v41 = *((float *)this + 1090);
    v42 = 1.0 - v39;
    v43 = *((float *)this + 1091);
    v48 = MPCConstantManager::GetInstance(v45, v44, v46, v47);
    *((_QWORD *)&v101 + 1) = 18LL;
    *(_QWORD *)&v101 = L"HomeDistanceWeight";
    v49 = MPCConstantManager::GetConstant<float>(v48, (char *)this + 24, &v101);
    *((float *)this + 1089) = (float)(v49 * v37) + (float)(v42 * v40);
    *((float *)this + 1090) = (float)(v49 * v34) + (float)(v42 * v41);
    *((float *)this + 1091) = (float)(v49 * v35) + (float)(v42 * v43);
    v30 = (__m128)v117;
    v31 = v118;
  }
  if ( v6 || *(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
  {
    v50 = *((_QWORD *)a2 + 2);
    v104 = 0.0;
    v51 = v50 - *((_QWORD *)this + 538);
    v105 = 0.0;
    v106 = 0.0;
    v107 = 0.0;
    v108 = 0.0;
    v109 = 0.0;
    v52 = (double)(int)v51 / (double)(int)qword_180250DA8;
    if ( v52 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 2440) )
      {
        *(_QWORD *)&v101 = *(_QWORD *)((char *)a2 + 2404);
        v53 = (float)(*((float *)&v101 + 1) - *((float *)this + 1081)) * (float)(1.0 / v52);
        v54 = (float)(*((float *)a2 + 603) - *((float *)this + 1082)) * (float)(1.0 / v52);
        v104 = (float)(*(float *)&v101 - *((float *)this + 1080)) * (float)(1.0 / v52);
        v105 = v53;
        v106 = v54;
      }
      if ( *((_BYTE *)a2 + 2441) )
      {
        *(_QWORD *)&v101 = *((_QWORD *)a2 + 302);
        v55 = (float)(*((float *)&v101 + 1) - *((float *)this + 1084)) * (float)(1.0 / v52);
        v56 = (float)(*((float *)a2 + 606) - *((float *)this + 1085)) * (float)(1.0 / v52);
        v107 = (float)(*(float *)&v101 - *((float *)this + 1083)) * (float)(1.0 / v52);
        v108 = v55;
        v109 = v56;
      }
    }
    v113[0] = (char *)a2 + 2340;
    v113[2] = &v107;
    v113[3] = &v104;
    v57 = *((_QWORD *)this + 513);
    v113[1] = this;
    if ( *(_BYTE *)(v57 + 10) )
    {
      v58 = v50 - *((_QWORD *)this + 539);
      v59 = (double)(int)v58 / (double)(int)qword_180250DA8;
      v60 = MPCConstantManager::GetInstance(v58, v25, v28, v29);
      *(_QWORD *)&v101 = L"HomeAllowTimeBetweenClicksInSec";
      *((_QWORD *)&v101 + 1) = 31LL;
      if ( MPCConstantManager::GetConstant<float>(v60, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), &v101) <= v59 )
        goto LABEL_20;
      v65 = MPCConstantManager::GetInstance(v62, v61, v63, v64);
      *((_QWORD *)&v101 + 1) = 32LL;
      *(_QWORD *)&v101 = L"HomeSecondClickAngularMultiplier";
      MPCConstantManager::GetConstant<float>(v65, (char *)this + 24, &v101);
      v70 = MPCConstantManager::GetInstance(v67, v66, v68, v69);
      *((_QWORD *)&v101 + 1) = 31LL;
      *(_QWORD *)&v101 = L"HomeSecondClickLinearMultiplier";
      MPCConstantManager::GetConstant<float>(v70, (char *)this + 24, &v101);
      v32 = (unsigned __int8)lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(v113) == 0;
      v71 = 1;
      if ( !v32 )
LABEL_20:
        v71 = 0;
      *((_BYTE *)this + 4296) = v71;
      *((_QWORD *)this + 539) = *((_QWORD *)a2 + 2);
      if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, (MPCSixDofProcessor *)((char *)this + 7792), 1u)
        || (v72 = 1, (*((_BYTE *)this + 10072) & 0x40) != 0) )
      {
        v72 = 0;
      }
      *((_BYTE *)this + 10808) = v72;
    }
    if ( !*((_BYTE *)this + 4296) && (unsigned __int8)lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(v113) )
    {
      v77 = *((_DWORD *)this + 1073) + 1;
      *((_DWORD *)this + 1073) = v77;
      v78 = MPCConstantManager::GetInstance(v74, v73, v75, v76);
      *((_QWORD *)&v101 + 1) = 33LL;
      *(_QWORD *)&v101 = L"HomeCancelExceedThresholdMaxCount";
      LOBYTE(v116) = v77 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                            v78,
                                            ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                            &v101);
      v115 = v116;
    }
    if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1u)
      || (v79 = 0, *(_BYTE *)(*((_QWORD *)this + 517) + 8LL)) )
    {
      v79 = 1;
    }
    *((_BYTE *)this + 4297) |= v79;
    v117 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      (unsigned int)&v117,
      (unsigned int)&v115,
      (_DWORD)this + 4292,
      (_DWORD)a2 + 2416,
      (__int64)a2 + 2420,
      (__int64)a2 + 2424,
      (__int64)a2 + 2404,
      (__int64)a2 + 2408,
      (__int64)a2 + 2412,
      (__int64)&v107,
      (__int64)&v108,
      (__int64)&v109,
      (__int64)&v104,
      (__int64)&v105,
      (__int64)&v106,
      (__int64)&v110,
      (__int64)&v111,
      (__int64)&v112,
      (__int64)this + 4356,
      (__int64)this + 4360,
      (__int64)this + 4364,
      (__int64)a2 + 2280);
    v27 = v116;
  }
  v80 = *((_QWORD *)this + 512);
  if ( *(_BYTE *)(v80 + 8) || *(_BYTE *)(v80 + 12) )
  {
    v29 = (char *)this + 10816;
    v81 = (_DWORD *)*((_QWORD *)this + 1353);
    if ( v81 == *((_DWORD **)this + 1352) || *(_DWORD *)(*((_QWORD *)this + 1353) - 4LL) != *((_DWORD *)a2 + 570) )
    {
      if ( *((_BYTE *)this + 10808) )
      {
        v82 = *((_DWORD *)a2 + 570);
        v116 = v82;
        if ( v81 == *((_DWORD **)this + 1354) )
        {
          std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((char *)this + 10816, v81, &v116);
        }
        else
        {
          *v81 = v82;
          *((_QWORD *)this + 1353) += 4LL;
        }
        v116 = **((_DWORD **)this + 6);
        ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(
          &v116,
          (char *)a2 + 2280);
      }
    }
  }
  v83 = (char *)this + 10808;
  if ( *((_BYTE *)this + 10808) )
  {
    if ( v27 )
    {
      if ( LODWORD(v103) < v102 && (*((_BYTE *)a2 + 2280) & 0x3E) != 0 )
      {
        if ( *((_DWORD *)a2 + 17) == 3 )
        {
          *((_DWORD *)a2 + 17) = 2;
          v84 = MPCHolographicInputManager::GetInstance();
          LOBYTE(v116) = MPCHolographicInputManager::IsExclusiveAppFocused(v84);
          v85 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
          LOBYTE(v117) = 1;
          v86 = (double)(int)v85;
          v87 = (unsigned int *)*((_QWORD *)this + 6);
          LOBYTE(v118) = 1;
          v102 = *v87;
          v103 = v86 / (double)(int)qword_180250DA8;
          ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
            (unsigned int)&v102,
            (unsigned int)&v118,
            (unsigned int)&v117,
            (_DWORD)this + 10808,
            (__int64)this + 4297,
            (__int64)a2 + 2280,
            (__int64)&v115,
            (__int64)&v103,
            (__int64)&v116);
        }
        else if ( *((_DWORD *)a2 + 17) == 4 )
        {
          *((_DWORD *)a2 + 17) = 6;
        }
      }
      v83 = (char *)this + 10808;
    }
    else
    {
      *((_QWORD *)a2 + 285) = 0LL;
      *((_DWORD *)a2 + 17) = 6;
      *((_DWORD *)a2 + 578) = 0;
      *((_BYTE *)a2 + 2256) = 0;
    }
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 512) + 12LL) )
  {
    if ( !v27 && *v83 )
    {
      if ( !*((_BYTE *)this + 4297) )
      {
        if ( !*(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1B1,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            v29);
        MPCSixDofProcessor::SendHomeEvent(this, a2);
        v88 = MPCHolographicInputManager::GetInstance();
        LOBYTE(v116) = MPCHolographicInputManager::IsExclusiveAppFocused(v88);
        v89 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        LOBYTE(v117) = 0;
        LOBYTE(v118) = 1;
        v102 = **((_DWORD **)this + 6);
        v103 = (double)(int)v89 / (double)(int)qword_180250DA8;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int)&v102,
          (unsigned int)&v118,
          (unsigned int)&v117,
          (_DWORD)v83,
          (__int64)this + 4297,
          (__int64)a2 + 2280,
          (__int64)&v115,
          (__int64)&v103,
          (__int64)&v116);
        *((_DWORD *)a2 + 570) |= 1u;
LABEL_63:
        MPCSixDofProcessor::ResetHomeState(this);
        goto LABEL_64;
      }
      v90 = (unsigned int *)*((_QWORD *)this + 1353);
      v91 = (unsigned int *)*((_QWORD *)this + 1352);
      if ( v91 != v90 )
      {
        do
        {
          MPCManager::OnButtonsChangedDuringHomeGesture(
            MPCManager::s_instance,
            **((_DWORD **)this + 6),
            0x2000u,
            *v91,
            *((_QWORD *)a2 + 2),
            *((_DWORD *)a2 + 567));
          v116 = **((_DWORD **)this + 6);
          ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned long &>(&v116, v91++);
        }
        while ( v91 != v90 );
        LODWORD(v83) = (_DWORD)this + 10808;
      }
    }
    v92 = MPCHolographicInputManager::GetInstance();
    LOBYTE(v116) = MPCHolographicInputManager::IsExclusiveAppFocused(v92);
    v93 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
    LOBYTE(v117) = 0;
    v94 = (double)(int)v93;
    v95 = (unsigned int *)*((_QWORD *)this + 6);
    LOBYTE(v118) = 0;
    v102 = *v95;
    v103 = v94 / (double)(int)qword_180250DA8;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int)&v102,
      (unsigned int)&v118,
      (unsigned int)&v117,
      (_DWORD)v83,
      (__int64)this + 4297,
      (__int64)a2 + 2280,
      (__int64)&v115,
      (__int64)&v103,
      (__int64)&v116);
    if ( ISMTracing::IsEnabled(v97, v96) )
    {
      ISMTracing::Instance();
      ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v98);
    }
    goto LABEL_63;
  }
LABEL_64:
  if ( *((_BYTE *)a2 + 2440) )
  {
    v99 = *((_DWORD *)a2 + 603);
    *((_QWORD *)this + 540) = *(_QWORD *)((char *)a2 + 2404);
    *((_DWORD *)this + 1082) = v99;
  }
  if ( *((_BYTE *)a2 + 2441) )
  {
    v100 = *((_DWORD *)a2 + 606);
    *(_QWORD *)((char *)this + 4332) = *((_QWORD *)a2 + 302);
    *((_DWORD *)this + 1085) = v100;
  }
  if ( *((_BYTE *)this + 10801) )
  {
    *((_QWORD *)this + 543) = _mm_unpacklo_ps(v24, v30).m128_u64[0];
    *((float *)this + 1088) = v31;
  }
  *((_QWORD *)this + 538) = *((_QWORD *)a2 + 2);
}
