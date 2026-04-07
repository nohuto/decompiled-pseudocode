/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x1800572C0
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180056F5C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180057CA8 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180057CD8 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800580AC (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180058360 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800AA508 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(__int64 **this, struct CAnimationEngine::CTransitionVisualSet *a2)
{
  unsigned int v2; // eax
  __int64 *v4; // rcx
  struct CAnimationEngine::CTransitionVisualSet *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  unsigned int ThemeAnimationTransform; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rsi
  char v16; // r13
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  float v24; // xmm9_4
  __int64 v25; // rcx
  void *Theme; // rax
  unsigned int v27; // esi
  CAnimationEngine *v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rbx
  __int64 v36; // rax
  int ThemeTimingFunction; // eax
  double v38; // xmm6_8
  double v39; // xmm7_8
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rax
  int v44; // r12d
  int v45; // esi
  int v46; // eax
  int v47; // r13d
  int v48; // r11d
  int v49; // r14d
  int v50; // r15d
  int v51; // edx
  int v52; // eax
  int v53; // esi
  int v54; // r8d
  int v55; // r10d
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // r9d
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  float v63; // xmm0_4
  float v64; // xmm1_4
  __int64 v65; // r8
  __int64 v66; // rdx
  __m128 v68; // xmm1
  __m128 v69; // xmm0
  __int64 v70; // rcx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  double v78; // xmm1_8
  double v79; // xmm2_8
  double v80; // xmm0_8
  double v81; // xmm3_8
  double v82; // xmm4_8
  double v83; // xmm5_8
  __m128 v84; // xmm1
  __int64 v85; // rcx
  int v86; // eax
  int v87; // xmm0_4
  __m128 v88; // xmm2
  __m128 v89; // xmm1
  __int64 v90; // rcx
  __int64 v91; // r8
  __m128i v92; // xmm0
  __int64 v93; // rdx
  int v94; // eax
  int v95; // ecx
  double v96; // xmm0_8
  double v97; // xmm0_8
  float v98; // xmm0_4
  __int64 v99; // r8
  __int64 v100; // rdx
  double v101; // xmm0_8
  double v102; // xmm1_8
  double v103; // xmm2_8
  double v104; // xmm3_8
  __m128 v105; // xmm1
  __m128 v106; // xmm0
  __int64 v107; // rcx
  float v108; // xmm1_4
  float v109; // xmm1_4
  __int64 v110; // rdx
  double v111; // xmm0_8
  double v112; // xmm0_8
  CAnimationEngine *v113; // r13
  __int64 j; // rax
  __int64 k; // rax
  unsigned int v116; // [rsp+28h] [rbp-E0h]
  __int64 v117; // [rsp+58h] [rbp-B0h]
  __int64 v118; // [rsp+58h] [rbp-B0h]
  __int64 v119; // [rsp+58h] [rbp-B0h]
  __int64 v120; // [rsp+58h] [rbp-B0h]
  char v121; // [rsp+88h] [rbp-80h]
  bool v122; // [rsp+89h] [rbp-7Fh]
  bool v123; // [rsp+8Ah] [rbp-7Eh]
  char v124; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v125; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v126; // [rsp+90h] [rbp-78h]
  unsigned int v127; // [rsp+94h] [rbp-74h] BYREF
  int v128; // [rsp+98h] [rbp-70h] BYREF
  int v129; // [rsp+9Ch] [rbp-6Ch]
  __int64 v130; // [rsp+A0h] [rbp-68h]
  struct CAnimationEngine::CTransitionVisualSet *v131; // [rsp+A8h] [rbp-60h]
  __m128i si128; // [rsp+B0h] [rbp-58h] BYREF
  CAnimationEngine *v133; // [rsp+C0h] [rbp-48h]
  float v134; // [rsp+C8h] [rbp-40h] BYREF
  float v135; // [rsp+CCh] [rbp-3Ch] BYREF
  int v136; // [rsp+D0h] [rbp-38h]
  unsigned int i; // [rsp+D4h] [rbp-34h]
  unsigned int v138; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v139; // [rsp+E0h] [rbp-28h] BYREF
  float v140; // [rsp+F0h] [rbp-18h] BYREF
  float v141; // [rsp+F4h] [rbp-14h] BYREF
  struct IUIAnimationStoryboard2 *v142; // [rsp+F8h] [rbp-10h] BYREF
  double v143; // [rsp+100h] [rbp-8h] BYREF
  __int64 v144; // [rsp+108h] [rbp+0h]
  double v145; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v146; // [rsp+118h] [rbp+10h] BYREF
  float v147; // [rsp+11Ch] [rbp+14h] BYREF
  int v148; // [rsp+120h] [rbp+18h] BYREF
  unsigned int v149; // [rsp+124h] [rbp+1Ch] BYREF
  unsigned int v150; // [rsp+128h] [rbp+20h] BYREF
  double v151; // [rsp+130h] [rbp+28h] BYREF
  double v152; // [rsp+138h] [rbp+30h] BYREF
  double v153[2]; // [rsp+140h] [rbp+38h] BYREF
  int v154; // [rsp+150h] [rbp+48h]
  int v155; // [rsp+160h] [rbp+58h]
  int v156; // [rsp+170h] [rbp+68h]
  int v157; // [rsp+180h] [rbp+78h]
  __int128 v158; // [rsp+188h] [rbp+80h] BYREF
  __int128 v159; // [rsp+198h] [rbp+90h] BYREF
  __int128 v160; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v161; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v162; // [rsp+1C8h] [rbp+C0h] BYREF
  double v163; // [rsp+1D8h] [rbp+D0h]
  __int128 v164; // [rsp+1E0h] [rbp+D8h] BYREF
  double v165; // [rsp+1F0h] [rbp+E8h]
  _OWORD v166[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v167[2]; // [rsp+218h] [rbp+110h] BYREF

  v2 = *((_DWORD *)a2 + 7);
  v133 = (CAnimationEngine *)this;
  v4 = this[1];
  v5 = a2;
  v125 = v2;
  v6 = 0LL;
  v142 = 0LL;
  v7 = 0LL;
  v131 = a2;
  v8 = *v4;
  v130 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, struct IUIAnimationStoryboard2 **))(v8 + 48))(v4, &v142);
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x272u, 0LL);
  }
  else
  {
    CAnimationEngine::CTransitionVisualSet::SetStoryboard(v5, v142);
    v11 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v142->lpVtbl->SetTag)(
            v142,
            0LL,
            *((unsigned int *)v5 + 4));
    ThemeAnimationTransform = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x276u, 0LL);
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, __int64 **, _QWORD, _QWORD))v142->lpVtbl->SetStoryboardEventHandler)(
              v142,
              this,
              0LL,
              0LL);
      ThemeAnimationTransform = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x277u, 0LL);
      }
      else
      {
        v13 = 0;
        v126 = 0;
        if ( *((_DWORD *)v5 + 5) )
        {
          while ( 1 )
          {
            v14 = *((_QWORD *)v5 + 5);
            v159 = 0LL;
            v160 = 0LL;
            v144 = v13;
            v158 = 0LL;
            v161 = 0LL;
            v15 = **(_QWORD **)(v14 + 8LL * v13);
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 256LL))(v15);
            v124 = v16;
            v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 136LL))(v15);
            v17 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 16LL))(v15, &v159);
            ThemeAnimationTransform = v17;
            if ( v17 < 0 )
              break;
            v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 24LL))(v15, &v158);
            ThemeAnimationTransform = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x28Cu, 0LL);
              goto LABEL_55;
            }
            v19 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 32LL))(v15, &v135);
            ThemeAnimationTransform = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x28Du, 0LL);
              goto LABEL_55;
            }
            v20 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 40LL))(v15, &v134);
            ThemeAnimationTransform = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x28Eu, 0LL);
              goto LABEL_55;
            }
            v21 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 48LL))(v15, &v141);
            ThemeAnimationTransform = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x28Fu, 0LL);
              goto LABEL_55;
            }
            v22 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 56LL))(v15, &v147);
            ThemeAnimationTransform = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x290u, 0LL);
              goto LABEL_55;
            }
            v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 64LL))(v15, &v150);
            ThemeAnimationTransform = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x291u, 0LL);
              goto LABEL_55;
            }
            if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v15 + 112LL))(v15, &v140) < 0 )
              v140 = 0.0;
            if ( v16 )
            {
              v71 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 72LL))(v15, &v160);
              ThemeAnimationTransform = v71;
              if ( v71 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x298u, 0LL);
                goto LABEL_55;
              }
              v72 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 80LL))(v15, &v161);
              ThemeAnimationTransform = v72;
              if ( v72 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0x299u, 0LL);
                goto LABEL_55;
              }
            }
            v143 = 0.0;
            v145 = 0.0;
            v122 = 0;
            v24 = fmaxf(0.0099999998, 1.0 - v140);
            v123 = 0;
            if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 88LL))(v15, &v146) >= 0 )
            {
              v122 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 96LL))(v15, &v143) >= 0;
              v123 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v15 + 104LL))(v15, &v145) >= 0;
            }
            v25 = **(_QWORD **)(*((_QWORD *)v5 + 5) + 8LL * v13);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 128LL))(v25, &v128);
            v138 = 0;
            v151 = 0.0;
            Theme = (void *)CDesktopManager::GetTheme(3);
            v27 = v125;
            CAnimationEngine::_CalculateStaggerDelay(v28, Theme, v125, v128, v150, &v151);
            v29 = CDesktopManager::GetTheme(3);
            if ( (int)GetThemeAnimationProperty(v29, v125, (unsigned int)v128, 1LL, &v138, 4, &v127) < 0 )
            {
              if ( (unsigned int)dword_180147058 > 5
                && (byte_180147068 & 1) != 0
                && (qword_180147070 & 1) == qword_180147070 )
              {
                v148 = v128;
                v149 = v125;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  v30,
                  (unsigned int)&unk_180125F16,
                  v31,
                  v32,
                  (__int64)&v149,
                  (__int64)&v148);
              }
            }
            else
            {
              for ( i = 0; i < v138; ++i )
              {
                v33 = CDesktopManager::GetTheme(3);
                ThemeAnimationTransform = GetThemeAnimationTransform(v33, v27, (unsigned int)v128, v34, 0LL, 0, &v127);
                if ( ThemeAnimationTransform != -2147024662 )
                  continue;
                v35 = v127;
                if ( v7 )
                  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                    WPF::g_pProcessHeap,
                    v7);
                v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       v35);
                if ( !v7 )
                {
                  ThemeAnimationTransform = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2CEu, 0LL);
                  goto LABEL_57;
                }
                v36 = CDesktopManager::GetTheme(3);
                ThemeTimingFunction = GetThemeAnimationTransform(v36, v27, (unsigned int)v128, i, v7, v35, &v127);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v116 = 721;
                  goto LABEL_158;
                }
                v38 = ((float)((float)*(int *)(v7 + 8) / 1000.0) + v151) * v24;
                v39 = (float)((float)((float)*(int *)(v7 + 12) / 1000.0) * v24);
                if ( v27 == 104 )
                  v39 = (float)(v24 * *((float *)CDesktopManager::s_pDesktopManagerInstance + 173));
                v40 = CDesktopManager::GetTheme(4);
                if ( (unsigned int)GetThemeTimingFunction(v40, *(unsigned int *)(v7 + 4), 0LL, 0LL, &v127) == -2147024662 )
                {
                  v41 = v127;
                  if ( v6 )
                    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                      WPF::g_pProcessHeap,
                      v6);
                  v130 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           v41);
                  v42 = v130;
                  if ( !v130 )
                  {
                    ThemeAnimationTransform = -2147024882;
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2EDu, 0LL);
                    goto LABEL_56;
                  }
                  v43 = CDesktopManager::GetTheme(4);
                  ThemeTimingFunction = GetThemeTimingFunction(
                                          v43,
                                          *(unsigned int *)(v7 + 4),
                                          v42,
                                          (unsigned int)v41,
                                          &v127);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v116 = 751;
                    goto LABEL_158;
                  }
                }
                v44 = DWORD2(v159);
                v45 = v159;
                si128 = 0LL;
                v165 = 0.0;
                v164 = 0LL;
                v163 = 0.0;
                memset(v167, 0, sizeof(v167));
                v139 = 0LL;
                v162 = 0LL;
                memset(v166, 0, sizeof(v166));
                v46 = RoundToNearestInt((float)(DWORD2(v159) + v159) * 0.5);
                v47 = HIDWORD(v159);
                v136 = v46;
                v48 = RoundToNearestInt((float)(HIDWORD(v159) + DWORD1(v159)) * 0.5);
                v49 = HIDWORD(v158);
                v50 = DWORD2(v158);
                v129 = v48;
                if ( v124 )
                  goto LABEL_37;
                v51 = 0;
                if ( DWORD2(v158) - (int)v158 >= 0 )
                  v51 = DWORD2(v158) - v158;
                v52 = 0;
                if ( v44 - v45 >= 0 )
                  v52 = v44 - v45;
                if ( v52 == v51 )
                {
LABEL_37:
                  v53 = v158 + v136 - v159;
                  if ( v124 )
                  {
                    v55 = DWORD1(v159);
                    v54 = DWORD1(v158);
                    goto LABEL_43;
                  }
                }
                else
                {
                  v73 = RoundToNearestInt((float)(DWORD2(v158) + v158) * 0.5);
                  v48 = v129;
                  v53 = v73;
                }
                v54 = DWORD1(v158);
                v55 = DWORD1(v159);
                v56 = 0;
                if ( v49 - DWORD1(v158) >= 0 )
                  v56 = v49 - DWORD1(v158);
                v57 = 0;
                if ( v47 - DWORD1(v159) >= 0 )
                  v57 = v47 - DWORD1(v159);
                if ( v57 != v56 )
                {
                  v74 = RoundToNearestInt((float)(v49 + DWORD1(v158)) * 0.5);
                  v55 = DWORD1(v159);
                  v58 = v74;
                  v48 = v129;
                  goto LABEL_44;
                }
LABEL_43:
                v58 = v54 + v48 - v55;
LABEL_44:
                v59 = *(_DWORD *)(v7 + 16);
                v60 = *(_DWORD *)v7;
                v129 = v59 & 4;
                if ( v60 )
                {
                  v61 = v60 - 1;
                  if ( v61 )
                  {
                    v62 = v61 - 1;
                    if ( v62 )
                    {
                      v75 = v62 - 254;
                      if ( v75 )
                      {
                        v76 = v75 - 2;
                        if ( v76 )
                        {
                          v77 = v76 - 1;
                          if ( v77 )
                          {
                            if ( v77 == 1 )
                            {
                              if ( (v59 & 2) != 0 )
                              {
                                v78 = *(float *)(v7 + 32);
                                *(double *)&v164 = v78;
                                v79 = *(float *)(v7 + 36);
                                *((double *)&v164 + 1) = v79;
                                v80 = *(float *)(v7 + 40);
                              }
                              else
                              {
                                v164 = 0LL;
                                v79 = 0.0;
                                v80 = 0.0;
                                v78 = 0.0;
                              }
                              v165 = v80;
                              v81 = *(float *)(v7 + 20);
                              *(double *)&v162 = v81;
                              v82 = *(float *)(v7 + 24);
                              *((double *)&v162 + 1) = v82;
                              v83 = *(float *)(v7 + 28);
                              v163 = v83;
                              if ( v121 )
                              {
                                *(_QWORD *)&v164 = *(_QWORD *)&v78 ^ _xmm;
                                *((_QWORD *)&v164 + 1) = *(_QWORD *)&v79 ^ _xmm;
                                *(_QWORD *)&v165 = *(_QWORD *)&v80 ^ _xmm;
                                *(_QWORD *)&v162 = *(_QWORD *)&v81 ^ _xmm;
                                *((_QWORD *)&v162 + 1) = *(_QWORD *)&v82 ^ _xmm;
                                *(_QWORD *)&v163 = *(_QWORD *)&v83 ^ _xmm;
                              }
                              v84 = (__m128)*(unsigned int *)(v7 + 48);
                              v5 = v131;
                              v6 = v130;
                              v13 = v126;
                              v85 = *(_QWORD *)(*((_QWORD *)v131 + 5) + 8 * v144);
                              v118 = v130;
                              v154 = *(_DWORD *)(v7 + 52);
                              v86 = v154;
                              *(_QWORD *)(v85 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v7 + 44), v84).m128_u64[0];
                              *(_DWORD *)(v85 + 84) = v86;
                              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                      v133,
                                                      *((_QWORD *)v5 + 4),
                                                      *((unsigned int *)v5 + 4),
                                                      v126,
                                                      3,
                                                      *(_QWORD *)&v38,
                                                      *(_QWORD *)&v39,
                                                      &v164,
                                                      &v162,
                                                      3,
                                                      v118,
                                                      0,
                                                      0LL,
                                                      0LL,
                                                      0);
                              ThemeAnimationTransform = ThemeTimingFunction;
                              if ( ThemeTimingFunction < 0 )
                              {
                                v116 = 1121;
                                goto LABEL_158;
                              }
                            }
                            else
                            {
                              v5 = v131;
                              v6 = v130;
                              v13 = v126;
                            }
                          }
                          else
                          {
                            if ( (v59 & 1) != 0 )
                            {
                              v165 = v135;
                              *(double *)&v164 = (double)(v44 - (int)v159);
                              *((double *)&v164 + 1) = (double)(v47 - v55);
                              v163 = v134;
                              *(double *)&v162 = (double)(v50 - (int)v158);
                              *((double *)&v162 + 1) = (double)(v49 - DWORD1(v158));
                            }
                            else
                            {
                              if ( (v59 & 2) != 0 )
                              {
                                *(double *)&v164 = *(float *)(v7 + 32);
                                *((double *)&v164 + 1) = *(float *)(v7 + 36);
                                v165 = *(float *)(v7 + 40);
                              }
                              else
                              {
                                v164 = _xmm;
                                v165 = DOUBLE_1_0;
                              }
                              *(double *)&v162 = *(float *)(v7 + 20);
                              *((double *)&v162 + 1) = *(float *)(v7 + 24);
                              v163 = *(float *)(v7 + 28);
                            }
                            if ( (v59 & 4) != 0 )
                            {
                              v87 = *(_DWORD *)(v7 + 52);
                              v88 = (__m128)*(unsigned int *)(v7 + 48);
                              v89 = (__m128)*(unsigned int *)(v7 + 44);
                            }
                            else
                            {
                              v87 = 0;
                              v88 = (__m128)LODWORD(FLOAT_0_5);
                              v89 = (__m128)LODWORD(FLOAT_0_5);
                            }
                            v5 = v131;
                            v6 = v130;
                            v13 = v126;
                            v90 = *(_QWORD *)(*((_QWORD *)v131 + 5) + 8 * v144);
                            v119 = v130;
                            v155 = v87;
                            *(_QWORD *)(v90 + 64) = _mm_unpacklo_ps(v89, v88).m128_u64[0];
                            *(_DWORD *)(v90 + 72) = v87;
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    v133,
                                                    *((_QWORD *)v5 + 4),
                                                    *((unsigned int *)v5 + 4),
                                                    v126,
                                                    4,
                                                    *(_QWORD *)&v38,
                                                    *(_QWORD *)&v39,
                                                    &v164,
                                                    &v162,
                                                    3,
                                                    v119,
                                                    0,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v116 = 1078;
                              goto LABEL_158;
                            }
                          }
                        }
                        else
                        {
                          v165 = 0.0;
                          v164 = 0LL;
                          if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
                          {
                            v5 = v131;
                            v6 = v130;
                            v13 = v126;
                            v91 = *((unsigned int *)v131 + 4);
                            *(double *)&v162 = (double)(v53 - v136);
                            v92 = _mm_cvtsi32_si128(v58 - v48);
                            v93 = *((_QWORD *)v131 + 4);
                            *((_QWORD *)&v162 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v92);
                            v163 = (float)(v134 - v135);
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    v133,
                                                    v93,
                                                    v91,
                                                    v126,
                                                    0,
                                                    *(_QWORD *)&v38,
                                                    *(_QWORD *)&v39,
                                                    &v164,
                                                    &v162,
                                                    3,
                                                    v130,
                                                    0,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v116 = 972;
                              goto LABEL_158;
                            }
                          }
                          else
                          {
                            v94 = 1;
                            v95 = 0;
                            if ( (*(_DWORD *)(v7 + 16) & 0x1000) != 0 )
                            {
                              v94 = 2;
                              v96 = (double)(((int)v158 + v50 - v44 - (int)v159) / 2);
                            }
                            else
                            {
                              v96 = *(float *)(v7 + 20);
                            }
                            *(double *)&v162 = v96;
                            if ( (*(_DWORD *)(v7 + 16) & 0x2000) != 0 )
                            {
                              v94 = 3;
                              v97 = (double)((DWORD1(v158) + v49 - v47 - v55) / 2);
                              v95 = 1;
                            }
                            else
                            {
                              v97 = *(float *)(v7 + 24);
                            }
                            *((double *)&v162 + 1) = v97;
                            if ( (*(_DWORD *)(v7 + 16) & 0x4000) != 0 )
                            {
                              v94 = 4;
                              v98 = v134 - v135;
                              v95 = 2;
                            }
                            else
                            {
                              v98 = *(float *)(v7 + 28);
                            }
                            v5 = v131;
                            v6 = v130;
                            v13 = v126;
                            v99 = *((unsigned int *)v131 + 4);
                            v100 = *((_QWORD *)v131 + 4);
                            v163 = v98;
                            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                    v133,
                                                    v100,
                                                    v99,
                                                    v126,
                                                    v95,
                                                    *(_QWORD *)&v38,
                                                    *(_QWORD *)&v39,
                                                    &v164,
                                                    &v162,
                                                    3,
                                                    v130,
                                                    v94,
                                                    0LL,
                                                    0LL,
                                                    0);
                            ThemeAnimationTransform = ThemeTimingFunction;
                            if ( ThemeTimingFunction < 0 )
                            {
                              v116 = 1024;
                              goto LABEL_158;
                            }
                          }
                        }
                      }
                      else
                      {
                        if ( (v59 & 2) != 0 )
                        {
                          v101 = *(float *)(v7 + 28);
                          *(double *)si128.m128i_i64 = v101;
                          v102 = *(float *)(v7 + 32);
                          *(double *)&si128.m128i_i64[1] = v102;
                        }
                        else
                        {
                          si128 = 0LL;
                          v102 = 0.0;
                          v101 = 0.0;
                        }
                        v103 = *(float *)(v7 + 20);
                        *(double *)&v139 = v103;
                        v104 = *(float *)(v7 + 24);
                        *((double *)&v139 + 1) = v104;
                        if ( v121 )
                        {
                          si128.m128i_i64[0] = *(_QWORD *)&v101 ^ _xmm;
                          si128.m128i_i64[1] = *(_QWORD *)&v102 ^ _xmm;
                          *(_QWORD *)&v139 = *(_QWORD *)&v103 ^ _xmm;
                          *((_QWORD *)&v139 + 1) = *(_QWORD *)&v104 ^ _xmm;
                        }
                        v105 = (__m128)*(unsigned int *)(v7 + 40);
                        v106 = (__m128)*(unsigned int *)(v7 + 36);
                        v5 = v131;
                        v156 = 0;
                        v6 = v130;
                        v13 = v126;
                        v107 = *(_QWORD *)(*((_QWORD *)v131 + 5) + 8 * v144);
                        v120 = v130;
                        *(_QWORD *)(v107 + 76) = _mm_unpacklo_ps(v106, v105).m128_u64[0];
                        *(_DWORD *)(v107 + 84) = 0;
                        ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                                v133,
                                                *((_QWORD *)v5 + 4),
                                                *((unsigned int *)v5 + 4),
                                                v126,
                                                3,
                                                *(_QWORD *)&v38,
                                                *(_QWORD *)&v39,
                                                &si128,
                                                &v139,
                                                2,
                                                v120,
                                                0,
                                                0LL,
                                                0LL,
                                                0);
                        ThemeAnimationTransform = ThemeTimingFunction;
                        if ( ThemeTimingFunction < 0 )
                        {
                          v116 = 942;
                          goto LABEL_158;
                        }
                      }
                    }
                    else
                    {
                      if ( (v59 & 1) != 0 )
                      {
                        v64 = v147;
                        v63 = v141;
                      }
                      else
                      {
                        if ( (v59 & 2) != 0 )
                          v63 = *(float *)(v7 + 24);
                        else
                          v63 = v141;
                        v64 = *(float *)(v7 + 20);
                      }
                      v5 = v131;
                      v6 = v130;
                      v13 = v126;
                      v65 = *((unsigned int *)v131 + 4);
                      v66 = *((_QWORD *)v131 + 4);
                      v153[0] = v63;
                      v152 = v64;
                      ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                              v133,
                                              v66,
                                              v65,
                                              v126,
                                              5,
                                              *(_QWORD *)&v38,
                                              *(_QWORD *)&v39,
                                              v153,
                                              &v152,
                                              1,
                                              v130,
                                              0,
                                              0LL,
                                              0LL,
                                              0);
                      ThemeAnimationTransform = ThemeTimingFunction;
                      if ( ThemeTimingFunction < 0 )
                      {
                        v116 = 1143;
                        goto LABEL_158;
                      }
                    }
                  }
                  else
                  {
                    if ( (v59 & 1) != 0 )
                    {
                      si128 = _mm_load_si128((const __m128i *)&_xmm);
                      if ( v44 == (_DWORD)v159 )
                        v108 = FLOAT_1_0;
                      else
                        v108 = (float)(v50 - v158) / (float)(v44 - v159);
                      *(double *)&v139 = v108;
                      if ( v47 == v55 )
                        v109 = FLOAT_1_0;
                      else
                        v109 = (float)(v49 - DWORD1(v158)) / (float)(v47 - v55);
                      *((double *)&v139 + 1) = v109;
                    }
                    else
                    {
                      if ( (v59 & 2) != 0 )
                      {
                        *(double *)si128.m128i_i64 = *(float *)(v7 + 28);
                        *(double *)&si128.m128i_i64[1] = *(float *)(v7 + 32);
                      }
                      else
                      {
                        si128 = _mm_load_si128((const __m128i *)&_xmm);
                      }
                      *(double *)&v139 = *(float *)(v7 + 20);
                      *((double *)&v139 + 1) = *(float *)(v7 + 24);
                    }
                    if ( v129 )
                    {
                      v68 = (__m128)*(unsigned int *)(v7 + 40);
                      v69 = (__m128)*(unsigned int *)(v7 + 36);
                    }
                    else
                    {
                      v68 = (__m128)LODWORD(FLOAT_0_5);
                      v69 = (__m128)LODWORD(FLOAT_0_5);
                    }
                    v5 = v131;
                    v157 = 0;
                    v6 = v130;
                    v13 = v126;
                    v70 = *(_QWORD *)(*((_QWORD *)v131 + 5) + 8 * v144);
                    v117 = v130;
                    *(_QWORD *)(v70 + 64) = _mm_unpacklo_ps(v69, v68).m128_u64[0];
                    *(_DWORD *)(v70 + 72) = 0;
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            v133,
                                            *((_QWORD *)v5 + 4),
                                            *((unsigned int *)v5 + 4),
                                            v126,
                                            4,
                                            *(_QWORD *)&v38,
                                            *(_QWORD *)&v39,
                                            &si128,
                                            &v139,
                                            2,
                                            v117,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v116 = 904;
LABEL_158:
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, v116, 0LL);
                      goto LABEL_56;
                    }
                  }
                }
                else
                {
                  if ( (v59 & 1) != 0 )
                  {
                    si128 = 0LL;
                    *(double *)&v139 = (double)(v53 - v136);
                    *((double *)&v139 + 1) = (double)(v58 - v48);
                  }
                  v110 = v146;
                  if ( v122 )
                  {
                    v111 = v143 + *(double *)&si128.m128i_i64[v146];
                    v143 = 0.0;
                    *(double *)&si128.m128i_i64[v146] = v111;
                  }
                  if ( v123 )
                  {
                    v112 = *((double *)&v139 + v110) + v145;
                    v145 = *((double *)&v139 + v110);
                    *((double *)&v139 + v110) = v112;
                  }
                  v5 = v131;
                  v6 = v130;
                  v113 = v133;
                  v13 = v126;
                  ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                          v133,
                                          *((_QWORD *)v131 + 4),
                                          *((unsigned int *)v131 + 4),
                                          v126,
                                          0,
                                          *(_QWORD *)&v38,
                                          *(_QWORD *)&v39,
                                          &si128,
                                          &v139,
                                          2,
                                          v130,
                                          0,
                                          (unsigned __int64)&v143 & -(__int64)v122,
                                          (unsigned __int64)&v145 & -(__int64)v123,
                                          v110);
                  ThemeAnimationTransform = ThemeTimingFunction;
                  if ( ThemeTimingFunction < 0 )
                  {
                    v116 = 834;
                    goto LABEL_158;
                  }
                  if ( v124 )
                  {
                    for ( j = 0LL; j < 4; ++j )
                      *((double *)v167 + j) = (double)*((int *)&v160 + j);
                    for ( k = 0LL; k < 4; ++k )
                      *((double *)v166 + k) = (double)*((int *)&v161 + k);
                    ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                            v113,
                                            *((_QWORD *)v5 + 4),
                                            *((unsigned int *)v5 + 4),
                                            v126,
                                            6,
                                            *(_QWORD *)&v38,
                                            *(_QWORD *)&v39,
                                            v167,
                                            v166,
                                            4,
                                            v6,
                                            0,
                                            0LL,
                                            0LL,
                                            0);
                    ThemeAnimationTransform = ThemeTimingFunction;
                    if ( ThemeTimingFunction < 0 )
                    {
                      v116 = 855;
                      goto LABEL_158;
                    }
                  }
                }
                v27 = v125;
              }
            }
            v126 = ++v13;
            if ( v13 >= *((_DWORD *)v5 + 5) )
              goto LABEL_55;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x28Bu, 0LL);
LABEL_55:
          if ( v7 )
LABEL_56:
            (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v7);
LABEL_57:
          if ( v130 )
            (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        }
      }
    }
  }
  if ( v142 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v142->lpVtbl->Release)(v142);
  return ThemeAnimationTransform;
}
