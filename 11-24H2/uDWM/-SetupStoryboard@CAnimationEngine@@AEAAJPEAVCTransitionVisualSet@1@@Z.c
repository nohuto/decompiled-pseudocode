/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015EE4
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18006E0E4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x180015C48 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180015CA0 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017F60 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800586C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18006C684 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x180079BE0 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  struct CAnimationEngine::CTransitionVisualSet *v3; // r14
  __int64 v4; // rcx
  void *v5; // r15
  float *v6; // rdi
  int v7; // eax
  unsigned int ThemeAnimationTransform; // ebx
  int v9; // eax
  const struct std::nothrow_t *v10; // rdx
  unsigned int v11; // r12d
  float v12; // xmm6_4
  __int64 v13; // rax
  __int64 *v14; // rsi
  char v15; // r13
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  float v24; // xmm9_4
  __int64 v25; // rcx
  void *Theme; // rax
  unsigned int v27; // esi
  CAnimationEngine *v28; // rcx
  __int64 v29; // rax
  double v30; // xmm12_8
  __int64 v31; // rax
  unsigned int v32; // edx
  const struct std::nothrow_t *v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  double v37; // xmm6_8
  double v38; // xmm7_8
  __int64 v39; // rax
  const struct std::nothrow_t *v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  int ThemeTimingFunction; // eax
  int v44; // r12d
  int v45; // esi
  int v46; // eax
  int v47; // r13d
  int v48; // r11d
  int v49; // r14d
  int v50; // r15d
  int v51; // esi
  int v52; // r10d
  int v53; // r8d
  int v54; // edx
  int v55; // r9d
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  float v62; // xmm0_4
  float v63; // xmm1_4
  __int64 v64; // r8
  __int64 v65; // rdx
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // edx
  int v71; // eax
  int v72; // eax
  float v74; // xmm0_4
  float v75; // xmm1_4
  float *v76; // rcx
  int v77; // eax
  float v78; // xmm1_4
  float v79; // xmm1_4
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int64 v86; // rdx
  BOOL v87; // r13d
  double v88; // xmm0_8
  double v89; // xmm1_8
  double v90; // xmm2_8
  double v91; // xmm3_8
  double v92; // xmm4_8
  double v93; // xmm5_8
  int v94; // xmm0_4
  int v95; // xmm1_4
  _DWORD *v96; // rcx
  int v97; // eax
  double v98; // xmm0_8
  int v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  float *v102; // rcx
  int v103; // eax
  __int64 v104; // r8
  __m128i v105; // xmm0
  __int64 v106; // rdx
  int v107; // eax
  int v108; // eax
  int v109; // ecx
  double v110; // xmm0_8
  double v111; // xmm0_8
  float v112; // xmm0_4
  __int64 v113; // r8
  __int64 v114; // rdx
  int v115; // eax
  double v116; // xmm0_8
  double v117; // xmm1_8
  double v118; // xmm2_8
  double v119; // xmm3_8
  int v120; // xmm0_4
  _DWORD *v121; // rcx
  int v122; // eax
  bool v123; // cl
  __int64 v124; // rdx
  double v125; // xmm0_8
  double v126; // xmm0_8
  CAnimationEngine *v127; // r13
  int v128; // eax
  __int64 j; // rax
  __int64 k; // rax
  int v131; // eax
  unsigned int v132; // [rsp+28h] [rbp-E0h]
  double *v133; // [rsp+30h] [rbp-D8h]
  void *v134; // [rsp+58h] [rbp-B0h]
  void *v135; // [rsp+58h] [rbp-B0h]
  void *v136; // [rsp+58h] [rbp-B0h]
  void *v137; // [rsp+58h] [rbp-B0h]
  char v138; // [rsp+88h] [rbp-80h]
  char v139; // [rsp+89h] [rbp-7Fh]
  char v140; // [rsp+8Ah] [rbp-7Eh]
  unsigned int v141; // [rsp+8Ch] [rbp-7Ch]
  unsigned int i; // [rsp+90h] [rbp-78h]
  unsigned int v143; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v144; // [rsp+98h] [rbp-70h] BYREF
  double v145; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v146; // [rsp+A8h] [rbp-60h] BYREF
  void *v147; // [rsp+B0h] [rbp-58h]
  float v148; // [rsp+B8h] [rbp-50h] BYREF
  float v149; // [rsp+BCh] [rbp-4Ch] BYREF
  struct CAnimationEngine::CTransitionVisualSet *v150; // [rsp+C0h] [rbp-48h]
  CAnimationEngine *v151; // [rsp+C8h] [rbp-40h]
  float v152; // [rsp+D0h] [rbp-38h] BYREF
  float v153; // [rsp+D4h] [rbp-34h] BYREF
  BOOL v154; // [rsp+D8h] [rbp-30h]
  __int128 v155; // [rsp+E0h] [rbp-28h] BYREF
  __m128i si128; // [rsp+F0h] [rbp-18h] BYREF
  double v157; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v158; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v159; // [rsp+10Ch] [rbp+4h] BYREF
  struct IUIAnimationStoryboard2 *v160; // [rsp+110h] [rbp+8h] BYREF
  float v161; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v162; // [rsp+11Ch] [rbp+14h] BYREF
  double v163; // [rsp+120h] [rbp+18h] BYREF
  __int64 v164; // [rsp+128h] [rbp+20h]
  double v165; // [rsp+130h] [rbp+28h] BYREF
  __int128 v166; // [rsp+138h] [rbp+30h] BYREF
  __int128 v167; // [rsp+148h] [rbp+40h] BYREF
  __int128 v168; // [rsp+158h] [rbp+50h] BYREF
  __int128 v169; // [rsp+168h] [rbp+60h] BYREF
  __int128 v170; // [rsp+178h] [rbp+70h] BYREF
  double v171; // [rsp+188h] [rbp+80h]
  __int128 v172; // [rsp+190h] [rbp+88h] BYREF
  double v173; // [rsp+1A0h] [rbp+98h]
  _OWORD v174[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v175[2]; // [rsp+1C8h] [rbp+C0h] BYREF

  v141 = *((_DWORD *)a2 + 7);
  v151 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 1);
  v5 = 0LL;
  v160 = 0LL;
  v6 = 0LL;
  v150 = a2;
  v147 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v160);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v132 = 624;
    goto LABEL_5;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(v3, v160);
  v9 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v160->lpVtbl->SetTag)(
         v160,
         0LL,
         *((unsigned int *)v3 + 4));
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x274u, 0LL);
    goto LABEL_72;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v160->lpVtbl->SetStoryboardEventHandler)(
         v160,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v132 = 629;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v132, 0LL);
    goto LABEL_72;
  }
  v11 = 0;
  v12 = FLOAT_0_0099999998;
  for ( i = 0; ; i = v11 )
  {
    if ( v11 >= *((_DWORD *)v3 + 5) )
      goto LABEL_69;
    v149 = 0.0;
    v148 = 0.0;
    v153 = 0.0;
    v161 = 0.0;
    v152 = 0.0;
    v13 = *((_QWORD *)v3 + 5);
    v167 = 0LL;
    v158 = 0;
    v166 = 0LL;
    v168 = 0LL;
    v164 = v11;
    v169 = 0LL;
    v14 = **(__int64 ***)(v13 + 8LL * v11);
    v15 = (*(__int64 (__fastcall **)(__int64 *))(*v14 + 256))(v14);
    v140 = v15;
    v139 = (*(__int64 (__fastcall **)(__int64 *))(*v14 + 136))(v14);
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 16))(v14, &v167);
    ThemeAnimationTransform = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x289u, 0LL);
      goto LABEL_69;
    }
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 24))(v14, &v166);
    ThemeAnimationTransform = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x28Au, 0LL);
      goto LABEL_69;
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 32))(v14, &v149);
    ThemeAnimationTransform = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x28Bu, 0LL);
      goto LABEL_69;
    }
    v19 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 40))(v14, &v148);
    ThemeAnimationTransform = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x28Cu, 0LL);
      goto LABEL_69;
    }
    v20 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 48))(v14, &v153);
    ThemeAnimationTransform = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x28Du, 0LL);
      goto LABEL_69;
    }
    v21 = (*(__int64 (__fastcall **)(__int64 *, float *))(*v14 + 56))(v14, &v161);
    ThemeAnimationTransform = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x28Eu, 0LL);
      goto LABEL_69;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v14 + 64))(v14, &v158);
    ThemeAnimationTransform = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x28Fu, 0LL);
      goto LABEL_69;
    }
    if ( (*(int (__fastcall **)(__int64 *, float *))(*v14 + 112))(v14, &v152) < 0 )
      v152 = 0.0;
    if ( v15 )
    {
      v83 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 72))(v14, &v168);
      ThemeAnimationTransform = v83;
      if ( v83 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x296u, 0LL);
      }
      else
      {
        v84 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v14 + 80))(v14, &v169);
        ThemeAnimationTransform = v84;
        if ( v84 >= 0 )
          goto LABEL_18;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v84, 0x297u, 0LL);
      }
LABEL_69:
      if ( v6 )
        goto LABEL_165;
      goto LABEL_70;
    }
LABEL_18:
    v162 = 0;
    v163 = 0.0;
    v138 = 0;
    v165 = 0.0;
    v23 = *v14;
    LOBYTE(v154) = 0;
    v24 = fmaxf(v12, 1.0 - v152);
    if ( (*(int (__fastcall **)(__int64 *, unsigned int *))(v23 + 88))(v14, &v162) >= 0 )
    {
      v85 = (*(__int64 (__fastcall **)(__int64 *, double *))(*v14 + 96))(v14, &v163);
      v86 = *v14;
      v87 = v85 >= 0;
      v154 = v87;
      if ( (*(int (__fastcall **)(__int64 *, double *))(v86 + 104))(v14, &v165) < 0 )
      {
        v154 = v87;
        v138 = 0;
      }
      else
      {
        v138 = 1;
      }
    }
    v144 = 0;
    v25 = **(_QWORD **)(*((_QWORD *)v3 + 5) + 8LL * v11);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 128LL))(v25, &v144);
    v159 = 0;
    v143 = 0;
    v145 = 0.0;
    Theme = (void *)CDesktopManager::GetTheme(3);
    v27 = v141;
    CAnimationEngine::_CalculateStaggerDelay(v28, Theme, v141, v144, v158, &v145);
    v29 = CDesktopManager::GetTheme(3);
    if ( (int)GetThemeAnimationProperty(v29, v141, v144, 1LL, &v159, 4, &v143) >= 0 )
      break;
    if ( (unsigned int)dword_180125130 > 5 && (unsigned __int8)tlgKeywordOn(&dword_180125130, 1LL) )
    {
      LODWORD(v145) = v144;
      v146 = v141;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v80,
        (unsigned int)&unk_1801105B6,
        v81,
        v82,
        (__int64)&v146,
        (__int64)&v145);
    }
LABEL_61:
    ++v11;
  }
  v30 = v145;
  v10 = 0LL;
  while ( 2 )
  {
    v146 = (unsigned int)v10;
    if ( (unsigned int)v10 >= v159 )
    {
      v12 = FLOAT_0_0099999998;
      goto LABEL_61;
    }
    v31 = CDesktopManager::GetTheme(3);
    LODWORD(v133) = 0;
    ThemeAnimationTransform = GetThemeAnimationTransform(v31, v27, v144, v32, 0LL, v133, &v143);
    if ( ThemeAnimationTransform != -2147024662 )
      goto LABEL_47;
    v34 = v143;
    if ( v6 )
      CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v33);
    v6 = (float *)operator new[](v34, v33);
    if ( !v6 )
    {
      ThemeAnimationTransform = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2CCu, 0LL);
      goto LABEL_70;
    }
    v35 = CDesktopManager::GetTheme(3);
    LODWORD(v133) = v34;
    v36 = GetThemeAnimationTransform(v35, v27, v144, v146, v6, v133, &v143);
    ThemeAnimationTransform = v36;
    if ( v36 >= 0 )
    {
      v37 = ((float)((float)*((int *)v6 + 2) / 1000.0) + v30) * v24;
      v38 = (float)((float)((float)*((int *)v6 + 3) / 1000.0) * v24);
      if ( v27 == 104 )
        v38 = (float)(v24 * *((float *)CDesktopManager::GetWindowAnimationSettings() + 11));
      v39 = CDesktopManager::GetTheme(4);
      if ( (unsigned int)GetThemeTimingFunction(v39, *((unsigned int *)v6 + 1), 0LL, 0LL, &v143) == -2147024662 )
      {
        v41 = v143;
        if ( v5 )
          CDisplayBlackCurtainAnimatedVisual::operator delete(v5, v40);
        v147 = operator new[](v41, v40);
        v5 = v147;
        if ( !v147 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2EBu, 0LL);
          goto LABEL_165;
        }
        v42 = CDesktopManager::GetTheme(4);
        ThemeTimingFunction = GetThemeTimingFunction(v42, *((unsigned int *)v6 + 1), v5, (unsigned int)v41, &v143);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeTimingFunction, 0x2EDu, 0LL);
          goto LABEL_165;
        }
      }
      v44 = DWORD2(v167);
      v45 = v167;
      si128 = 0LL;
      v173 = 0.0;
      v172 = 0LL;
      v171 = 0.0;
      memset(v175, 0, sizeof(v175));
      v155 = 0LL;
      v170 = 0LL;
      memset(v174, 0, sizeof(v174));
      v46 = RoundToNearestInt((float)(DWORD2(v167) + v167) * 0.5);
      v47 = HIDWORD(v167);
      LODWORD(v157) = v46;
      v48 = RoundToNearestInt((float)(HIDWORD(v167) + DWORD1(v167)) * 0.5);
      v49 = HIDWORD(v166);
      v50 = DWORD2(v166);
      LODWORD(v145) = v48;
      if ( v140 )
        goto LABEL_35;
      v70 = 0;
      if ( DWORD2(v166) - (int)v166 >= 0 )
        v70 = DWORD2(v166) - v166;
      v71 = 0;
      if ( v44 - v45 >= 0 )
        v71 = v44 - v45;
      if ( v71 == v70 )
      {
LABEL_35:
        v51 = v166 + LODWORD(v157) - v167;
        if ( !v140 )
          goto LABEL_54;
        v52 = DWORD1(v167);
        v53 = DWORD1(v166);
      }
      else
      {
        v72 = RoundToNearestInt((float)(DWORD2(v166) + v166) * 0.5);
        v48 = LODWORD(v145);
        v51 = v72;
LABEL_54:
        v53 = DWORD1(v166);
        v52 = DWORD1(v167);
        v67 = 0;
        if ( v49 - DWORD1(v166) >= 0 )
          v67 = v49 - DWORD1(v166);
        v68 = 0;
        if ( v47 - DWORD1(v167) >= 0 )
          v68 = v47 - DWORD1(v167);
        if ( v68 != v67 )
        {
          v69 = RoundToNearestInt((float)(v49 + DWORD1(v166)) * 0.5);
          v52 = DWORD1(v167);
          v54 = v69;
          v48 = LODWORD(v145);
LABEL_38:
          v55 = *((_DWORD *)v6 + 4);
          v56 = *(_DWORD *)v6;
          LODWORD(v145) = v55 & 4;
          if ( v56 )
          {
            v57 = v56 - 1;
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( v58 )
              {
                v59 = v58 - 254;
                if ( v59 )
                {
                  v60 = v59 - 2;
                  if ( v60 )
                  {
                    v61 = v60 - 1;
                    if ( v61 )
                    {
                      if ( v61 == 1 )
                      {
                        if ( (v55 & 2) != 0 )
                        {
                          v88 = v6[8];
                          *(double *)&v172 = v88;
                          v89 = v6[9];
                          *((double *)&v172 + 1) = v89;
                          v90 = v6[10];
                        }
                        else
                        {
                          v88 = 0.0;
                          v172 = 0LL;
                          *(_QWORD *)&v89 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                          v90 = 0.0;
                        }
                        v173 = v90;
                        v91 = v6[5];
                        *(double *)&v170 = v91;
                        v92 = v6[6];
                        *((double *)&v170 + 1) = v92;
                        v93 = v6[7];
                        v171 = v93;
                        if ( v139 )
                        {
                          *(_QWORD *)&v172 = *(_QWORD *)&v88 ^ _xmm;
                          *((_QWORD *)&v172 + 1) = *(_QWORD *)&v89 ^ _xmm;
                          *(_QWORD *)&v173 = *(_QWORD *)&v90 ^ _xmm;
                          *(_QWORD *)&v170 = *(_QWORD *)&v91 ^ _xmm;
                          *((_QWORD *)&v170 + 1) = *(_QWORD *)&v92 ^ _xmm;
                          *(_QWORD *)&v171 = *(_QWORD *)&v93 ^ _xmm;
                        }
                        v94 = *((_DWORD *)v6 + 12);
                        v95 = *((_DWORD *)v6 + 13);
                        v3 = v150;
                        v5 = v147;
                        v11 = i;
                        v96 = *(_DWORD **)(*((_QWORD *)v150 + 5) + 8 * v164);
                        v135 = v147;
                        v96[19] = *((_DWORD *)v6 + 11);
                        v96[20] = v94;
                        v96[21] = v95;
                        v97 = CAnimationEngine::AddToStoryboard(
                                v151,
                                *((_QWORD *)v3 + 4),
                                *((unsigned int *)v3 + 4),
                                i,
                                3,
                                *(_QWORD *)&v37,
                                *(_QWORD *)&v38,
                                &v172,
                                &v170,
                                3,
                                v135,
                                0,
                                0LL,
                                0LL,
                                0);
                        ThemeAnimationTransform = v97;
                        if ( v97 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v97, 0x45Fu, 0LL);
                          goto LABEL_165;
                        }
                      }
                      else
                      {
                        v3 = v150;
                        v5 = v147;
                        v11 = i;
                      }
                    }
                    else
                    {
                      if ( (v55 & 1) != 0 )
                      {
                        v173 = v149;
                        *(double *)&v172 = (double)(v44 - (int)v167);
                        *((double *)&v172 + 1) = (double)(v47 - v52);
                        v171 = v148;
                        *(double *)&v170 = (double)(v50 - (int)v166);
                        *((double *)&v170 + 1) = (double)(v49 - DWORD1(v166));
                      }
                      else
                      {
                        if ( (v55 & 2) != 0 )
                        {
                          *(double *)&v172 = v6[8];
                          *((double *)&v172 + 1) = v6[9];
                          v98 = v6[10];
                        }
                        else
                        {
                          v172 = _xmm;
                          v98 = DOUBLE_1_0;
                        }
                        v173 = v98;
                        *(double *)&v170 = v6[5];
                        *((double *)&v170 + 1) = v6[6];
                        v171 = v6[7];
                      }
                      if ( (v55 & 4) != 0 )
                      {
                        v99 = *((_DWORD *)v6 + 13);
                        v100 = v6[12];
                        v101 = v6[11];
                      }
                      else
                      {
                        v99 = 0;
                        v100 = FLOAT_0_5;
                        v101 = FLOAT_0_5;
                      }
                      v3 = v150;
                      v5 = v147;
                      v11 = i;
                      v102 = *(float **)(*((_QWORD *)v150 + 5) + 8 * v164);
                      v136 = v147;
                      v102[16] = v101;
                      v102[17] = v100;
                      *((_DWORD *)v102 + 18) = v99;
                      v103 = CAnimationEngine::AddToStoryboard(
                               v151,
                               *((_QWORD *)v3 + 4),
                               *((unsigned int *)v3 + 4),
                               i,
                               4,
                               *(_QWORD *)&v37,
                               *(_QWORD *)&v38,
                               &v172,
                               &v170,
                               3,
                               v136,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v103;
                      if ( v103 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x434u, 0LL);
                        goto LABEL_165;
                      }
                    }
                  }
                  else
                  {
                    v173 = 0.0;
                    v172 = 0LL;
                    if ( ((_BYTE)v6[4] & 1) != 0 )
                    {
                      v3 = v150;
                      v5 = v147;
                      v11 = i;
                      v104 = *((unsigned int *)v150 + 4);
                      *(double *)&v170 = (double)(v51 - LODWORD(v157));
                      v105 = _mm_cvtsi32_si128(v54 - v48);
                      v106 = *((_QWORD *)v150 + 4);
                      *((_QWORD *)&v170 + 1) = *(_OWORD *)&_mm_cvtepi32_pd(v105);
                      v171 = (float)(v148 - v149);
                      v107 = CAnimationEngine::AddToStoryboard(
                               v151,
                               v106,
                               v104,
                               i,
                               0,
                               *(_QWORD *)&v37,
                               *(_QWORD *)&v38,
                               &v172,
                               &v170,
                               3,
                               v147,
                               0,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v107;
                      if ( v107 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v107, 0x3CAu, 0LL);
                        goto LABEL_165;
                      }
                    }
                    else
                    {
                      v108 = 1;
                      v109 = 0;
                      if ( ((_DWORD)v6[4] & 0x1000) != 0 )
                      {
                        v108 = 2;
                        v110 = (double)(((int)v166 + v50 - v44 - (int)v167) / 2);
                      }
                      else
                      {
                        v110 = v6[5];
                      }
                      *(double *)&v170 = v110;
                      if ( ((_DWORD)v6[4] & 0x2000) != 0 )
                      {
                        v108 = 3;
                        v111 = (double)((DWORD1(v166) + v49 - v47 - v52) / 2);
                        v109 = 1;
                      }
                      else
                      {
                        v111 = v6[6];
                      }
                      *((double *)&v170 + 1) = v111;
                      if ( ((_DWORD)v6[4] & 0x4000) != 0 )
                      {
                        v108 = 4;
                        v112 = v148 - v149;
                        v109 = 2;
                      }
                      else
                      {
                        v112 = v6[7];
                      }
                      v3 = v150;
                      v5 = v147;
                      v11 = i;
                      v113 = *((unsigned int *)v150 + 4);
                      v114 = *((_QWORD *)v150 + 4);
                      v171 = v112;
                      v115 = CAnimationEngine::AddToStoryboard(
                               v151,
                               v114,
                               v113,
                               i,
                               v109,
                               *(_QWORD *)&v37,
                               *(_QWORD *)&v38,
                               &v172,
                               &v170,
                               3,
                               v147,
                               v108,
                               0LL,
                               0LL,
                               0);
                      ThemeAnimationTransform = v115;
                      if ( v115 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v115, 0x3FEu, 0LL);
                        goto LABEL_165;
                      }
                    }
                  }
                }
                else
                {
                  if ( (v55 & 2) != 0 )
                  {
                    v116 = v6[7];
                    *(double *)si128.m128i_i64 = v116;
                    v117 = v6[8];
                    *(double *)&si128.m128i_i64[1] = v117;
                  }
                  else
                  {
                    v116 = 0.0;
                    si128 = 0LL;
                    *(_QWORD *)&v117 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
                  }
                  v118 = v6[5];
                  *(double *)&v155 = v118;
                  v119 = v6[6];
                  *((double *)&v155 + 1) = v119;
                  if ( v139 )
                  {
                    si128.m128i_i64[0] = *(_QWORD *)&v116 ^ _xmm;
                    si128.m128i_i64[1] = *(_QWORD *)&v117 ^ _xmm;
                    *(_QWORD *)&v155 = *(_QWORD *)&v118 ^ _xmm;
                    *((_QWORD *)&v155 + 1) = *(_QWORD *)&v119 ^ _xmm;
                  }
                  v120 = *((_DWORD *)v6 + 10);
                  v3 = v150;
                  v5 = v147;
                  v11 = i;
                  v121 = *(_DWORD **)(*((_QWORD *)v150 + 5) + 8 * v164);
                  v137 = v147;
                  v121[19] = *((_DWORD *)v6 + 9);
                  v121[20] = v120;
                  v121[21] = 0;
                  v122 = CAnimationEngine::AddToStoryboard(
                           v151,
                           *((_QWORD *)v3 + 4),
                           *((unsigned int *)v3 + 4),
                           i,
                           3,
                           *(_QWORD *)&v37,
                           *(_QWORD *)&v38,
                           &si128,
                           &v155,
                           2,
                           v137,
                           0,
                           0LL,
                           0LL,
                           0);
                  ThemeAnimationTransform = v122;
                  if ( v122 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x3ACu, 0LL);
                    goto LABEL_165;
                  }
                }
              }
              else
              {
                if ( (v55 & 1) != 0 )
                {
                  v63 = v161;
                  v62 = v153;
                }
                else
                {
                  if ( (v55 & 2) != 0 )
                    v62 = v6[6];
                  else
                    v62 = v153;
                  v63 = v6[5];
                }
                v3 = v150;
                v5 = v147;
                v11 = i;
                v64 = *((unsigned int *)v150 + 4);
                v65 = *((_QWORD *)v150 + 4);
                v157 = v62;
                v145 = v63;
                v66 = CAnimationEngine::AddToStoryboard(
                        v151,
                        v65,
                        v64,
                        i,
                        5,
                        *(_QWORD *)&v37,
                        *(_QWORD *)&v38,
                        &v157,
                        &v145,
                        1,
                        v147,
                        0,
                        0LL,
                        0LL,
                        0);
                ThemeAnimationTransform = v66;
                if ( v66 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0x475u, 0LL);
                  goto LABEL_165;
                }
              }
            }
            else
            {
              if ( (v55 & 1) != 0 )
              {
                si128 = _mm_load_si128((const __m128i *)&_xmm);
                if ( v44 == (_DWORD)v167 )
                  v78 = FLOAT_1_0;
                else
                  v78 = (float)(v50 - v166) / (float)(v44 - v167);
                *(double *)&v155 = v78;
                if ( v47 == v52 )
                  v79 = FLOAT_1_0;
                else
                  v79 = (float)(v49 - DWORD1(v166)) / (float)(v47 - v52);
                *((double *)&v155 + 1) = v79;
              }
              else
              {
                if ( (v55 & 2) != 0 )
                {
                  *(double *)si128.m128i_i64 = v6[7];
                  *(double *)&si128.m128i_i64[1] = v6[8];
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                }
                *(double *)&v155 = v6[5];
                *((double *)&v155 + 1) = v6[6];
              }
              if ( LODWORD(v145) )
              {
                v74 = v6[10];
                v75 = v6[9];
              }
              else
              {
                v74 = FLOAT_0_5;
                v75 = FLOAT_0_5;
              }
              v3 = v150;
              v5 = v147;
              v11 = i;
              v76 = *(float **)(*((_QWORD *)v150 + 5) + 8 * v164);
              v134 = v147;
              v76[16] = v75;
              v76[17] = v74;
              v76[18] = 0.0;
              v77 = CAnimationEngine::AddToStoryboard(
                      v151,
                      *((_QWORD *)v3 + 4),
                      *((unsigned int *)v3 + 4),
                      i,
                      4,
                      *(_QWORD *)&v37,
                      *(_QWORD *)&v38,
                      &si128,
                      &v155,
                      2,
                      v134,
                      0,
                      0LL,
                      0LL,
                      0);
              ThemeAnimationTransform = v77;
              if ( v77 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x386u, 0LL);
                goto LABEL_165;
              }
            }
          }
          else
          {
            if ( (v55 & 1) != 0 )
            {
              si128 = 0LL;
              *(double *)&v155 = (double)(v51 - LODWORD(v157));
              *((double *)&v155 + 1) = (double)(v54 - v48);
            }
            v123 = v154;
            v124 = v162;
            if ( v154 )
            {
              v125 = v163 + *(double *)&si128.m128i_i64[v162];
              v163 = 0.0;
              *(double *)&si128.m128i_i64[v162] = v125;
            }
            if ( v138 )
            {
              v126 = *((double *)&v155 + v124) + v165;
              v165 = *((double *)&v155 + v124);
              *((double *)&v155 + v124) = v126;
            }
            v3 = v150;
            v5 = v147;
            v127 = v151;
            v11 = i;
            v128 = CAnimationEngine::AddToStoryboard(
                     v151,
                     *((_QWORD *)v150 + 4),
                     *((unsigned int *)v150 + 4),
                     i,
                     0,
                     *(_QWORD *)&v37,
                     *(_QWORD *)&v38,
                     &si128,
                     &v155,
                     2,
                     v147,
                     0,
                     (unsigned __int64)&v163 & -(__int64)v123,
                     (unsigned __int64)&v165 & -(__int64)(v138 != 0),
                     v124);
            ThemeAnimationTransform = v128;
            if ( v128 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v128, 0x340u, 0LL);
              goto LABEL_165;
            }
            if ( v140 )
            {
              for ( j = 0LL; j < 4; ++j )
                *((double *)v175 + j) = (double)*((int *)&v168 + j);
              for ( k = 0LL; k < 4; ++k )
                *((double *)v174 + k) = (double)*((int *)&v169 + k);
              v131 = CAnimationEngine::AddToStoryboard(
                       v127,
                       *((_QWORD *)v3 + 4),
                       *((unsigned int *)v3 + 4),
                       i,
                       6,
                       *(_QWORD *)&v37,
                       *(_QWORD *)&v38,
                       v175,
                       v174,
                       4,
                       v5,
                       0,
                       0LL,
                       0LL,
                       0);
              ThemeAnimationTransform = v131;
              if ( v131 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v131, 0x355u, 0LL);
                goto LABEL_165;
              }
            }
          }
          v27 = v141;
LABEL_47:
          v10 = (const struct std::nothrow_t *)(v146 + 1);
          continue;
        }
      }
      v54 = v53 + v48 - v52;
      goto LABEL_38;
    }
    break;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x2CFu, 0LL);
LABEL_165:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v6, v10);
LABEL_70:
  if ( v5 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, v10);
LABEL_72:
  if ( v160 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v160->lpVtbl->Release)(v160);
  return ThemeAnimationTransform;
}
