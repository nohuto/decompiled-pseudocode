/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800EFBC0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x180032BD0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180032F08 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180038440 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180039DD0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18003A48C (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18003A990 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18003AC78 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18003ACE0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003AD20 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003AE20 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18003D4D4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003D5A4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800D18A0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1801B6BF0 (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ @ 0x1801BE170 (-GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1801BE47C (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x1801C2840 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1801D67DC (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     McTemplateU0qqpq_EventWriteTransfer @ 0x1801FC490 (McTemplateU0qqpq_EventWriteTransfer.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x1801FDC34 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x180297F6C (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     fmod_0 @ 0x1802E88B4 (fmod_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        unsigned __int64 this,
        struct CExpressionValueStack *a2,
        double a3,
        bool *a4)
{
  __m128i v4; // xmm0
  int v5; // xmm12_4
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rsi
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  unsigned int v18; // r13d
  _QWORD *v19; // rax
  LONGLONG v20; // rdi
  int v21; // r12d
  LONGLONG v22; // rbx
  const struct CExpressionValue *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  CPathData *v26; // rcx
  void (*v27)(void); // rax
  int v28; // ecx
  int v29; // ebx
  char v31; // r8
  int v32; // edx
  unsigned __int8 v33; // dl
  __int64 v34; // rbx
  char v35; // r9
  char v36; // cl
  float v37; // xmm3_4
  __int64 v38; // r9
  __m128i v39; // xmm0
  int v40; // r8d
  int v41; // ecx
  int v42; // ebx
  int v43; // edx
  __m128i v44; // xmm1
  __m128 v45; // xmm7
  __m128 v46; // xmm3
  int v47; // ecx
  __m128i v48; // xmm6
  float v49; // xmm1_4
  int v50; // ecx
  int v51; // eax
  int v52; // xmm1_4
  char v53; // dl
  char v54; // cl
  __int64 v55; // r8
  char v56; // al
  __int64 v57; // r8
  __m128i v58; // xmm0
  int v59; // eax
  int v60; // ebx
  float v61; // xmm1_4
  __int64 v62; // rcx
  float v63; // xmm2_4
  int v64; // r8d
  int v65; // r9d
  int v66; // edx
  LONGLONG v67; // rbx
  __int64 v68; // rdx
  unsigned __int64 v69; // r8
  _QWORD *v70; // r13
  __int64 v71; // rcx
  _QWORD *v72; // rax
  float v73; // xmm1_4
  int v74; // edx
  int v75; // eax
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rax
  _QWORD *v79; // rax
  bool v80; // zf
  char v81; // al
  char v82; // al
  CExpressionValue *v83; // r15
  __int64 v84; // r9
  __int64 v85; // rcx
  char v86; // dl
  char v87; // r8
  __int64 v88; // rax
  char v89; // al
  __int64 v90; // r8
  int v91; // eax
  int v92; // ecx
  float v93; // xmm1_4
  bool v94; // al
  int v95; // r9d
  int v96; // r10d
  float v97; // xmm1_4
  int v98; // edx
  int v99; // eax
  const struct CExpressionValue *v100; // rdi
  __int64 v101; // rcx
  KeyframeSequence *v102; // rcx
  char v103; // al
  char v104; // cl
  char v105; // cl
  int v106; // eax
  char v107; // al
  struct CProcessAttribution *(__fastcall *v108)(CResource *__hidden); // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  int v112; // ecx
  __int64 v113; // rbx
  CPathData *v114; // rcx
  void (*v115)(void); // rax
  CPathData *v116; // rcx
  void (*v117)(void); // rax
  CPathData *v118; // rcx
  void (*v119)(void); // rax
  CPathData *v120; // rcx
  void (*v121)(void); // rax
  CPathData *v122; // rcx
  void (*v123)(void); // rax
  _QWORD *v124; // r11
  __int64 v125; // r9
  unsigned __int64 v126; // rcx
  _QWORD *v127; // r10
  __int64 v128; // rax
  _QWORD *v129; // rcx
  unsigned __int64 v130; // r8
  _QWORD *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  int v134; // eax
  int v135; // ecx
  __int64 v136; // rbx
  CPathData *v137; // rcx
  void (*v138)(void); // rax
  CPathData *v139; // rcx
  void (*v140)(void); // rax
  CPathData *v141; // rcx
  void (*v142)(void); // rax
  CPathData *v143; // rcx
  void (*v144)(void); // rax
  CPathData *v145; // rcx
  void (*v146)(void); // rax
  int v147; // r14d
  int v148; // r9d
  CPathData *v149; // rcx
  void (*v150)(void); // rax
  int v151; // r15d
  int v152; // eax
  const struct CExpressionValue *v153; // rbx
  __int64 v154; // rcx
  KeyframeSequence *v155; // rcx
  char v156; // al
  char v157; // cl
  char v158; // cl
  int v159; // eax
  int v160; // ecx
  __int64 v161; // rcx
  const struct CExpressionValue *v162; // rbx
  int v163; // eax
  __int64 v164; // rax
  int v165; // eax
  int v166; // r14d
  unsigned int v167; // eax
  char v168; // al
  __int64 v169; // rcx
  int v170; // eax
  int v171; // edx
  char v172; // r9
  char v173; // al
  int v174; // eax
  int v175; // edi
  int v176; // r9d
  int v177; // eax
  int v178; // xmm1_4
  char v179; // dl
  char v180; // cl
  __int64 v181; // r8
  char v182; // al
  __int64 v183; // rbx
  char v184; // al
  char v185; // cl
  unsigned int v186; // ebx
  __int64 v187; // rcx
  unsigned __int64 v188; // r8
  __int64 v189; // rdx
  int v190; // r9d
  int v191; // eax
  int v192; // r15d
  __int64 v193; // rcx
  __m128i v194; // xmm6
  float v195; // xmm6_4
  __int64 *v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rax
  int v199; // eax
  signed int v200; // edx
  __m128i v201; // xmm3
  int v202; // ecx
  __m128d v203; // xmm0
  __int64 v204; // rcx
  int v205; // r10d
  __m128 v206; // xmm1
  unsigned int v207; // r8d
  unsigned int v208; // eax
  float v209; // xmm1_4
  bool v210; // r9
  int v211; // ecx
  int v212; // edx
  float v213; // xmm1_4
  int v214; // eax
  unsigned int v215; // r9d
  char v216; // dl
  int v217; // ecx
  __int64 v218; // r8
  int v219; // eax
  int v220; // edx
  int v221; // ebx
  __int64 v222; // rax
  DWORD CurrentProcessId; // eax
  __int64 v224; // rcx
  int v225; // r8d
  unsigned __int8 v226; // dl
  KeyframeSequence *v227; // rcx
  char v228; // al
  int v229; // eax
  unsigned int v230; // edx
  unsigned int i; // r10d
  int v232; // ecx
  __int64 v233; // rcx
  int v234; // eax
  char v235; // dl
  char v236; // r8
  __int64 v237; // rdx
  char v238; // al
  char v239; // cl
  __int64 v240; // rdx
  int v241; // r9d
  int v242; // eax
  int v243; // r12d
  int v244; // ecx
  unsigned int v245; // edx
  unsigned int v246; // r11d
  unsigned __int8 v247; // dl
  char v248; // al
  KeyframeSequence *v249; // rcx
  LONGLONG v250; // rbx
  LONGLONG v251; // rcx
  __int64 v252; // rbx
  int v253; // ecx
  int v254; // edx
  int v255; // eax
  int v256; // eax
  int v257; // eax
  __int64 v258; // rax
  char v259; // al
  __int64 v260; // r11
  __m128 v261; // xmm0
  int v262; // eax
  __m128d v263; // xmm0
  int v264; // r10d
  __int64 v265; // r11
  int v266; // eax
  int v267; // xmm1_4
  char v268; // dl
  char v269; // cl
  __int64 v270; // r8
  char v271; // al
  char v272; // cl
  int v273; // r11d
  float v274; // xmm0_4
  int v275; // ecx
  int v276; // edx
  bool v277; // sf
  int v278; // eax
  unsigned int v279; // edx
  int v280; // r11d
  int v281; // ecx
  unsigned int v282; // edx
  unsigned int v283; // r11d
  __m128 v284; // xmm1
  int v285; // r11d
  float v286; // xmm1_4
  char v287; // al
  KeyframeSequence *v288; // rcx
  char v289; // al
  int v290; // eax
  int v291; // xmm1_4
  char v292; // dl
  char v293; // cl
  __int64 v294; // r8
  char v295; // al
  char v296; // cl
  __int64 v297; // rax
  int v298; // eax
  int v299; // ebx
  int v300; // eax
  int v301; // eax
  int v302; // eax
  LONGLONG v303; // rax
  float v304; // xmm0_4
  int v305; // eax
  char v306; // cl
  unsigned int TimePositionWithinIteration; // edx
  int v308; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v309; // [rsp+38h] [rbp-D0h]
  float v310; // [rsp+38h] [rbp-D0h]
  float v311; // [rsp+38h] [rbp-D0h]
  float v312; // [rsp+38h] [rbp-D0h]
  bool v313[8]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v314; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v315; // [rsp+50h] [rbp-B8h]
  __int64 v316; // [rsp+58h] [rbp-B0h]
  _BYTE v317[72]; // [rsp+60h] [rbp-A8h] BYREF
  CPathData *v318; // [rsp+A8h] [rbp-60h] BYREF
  int v319; // [rsp+B0h] [rbp-58h]
  void *retaddr; // [rsp+170h] [rbp+68h]

  v5 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *a4 = 0;
  v315 = 0xCBF29CE484222325uLL;
  *(_QWORD *)v317 = a4;
  v7 = HIBYTE(this);
  v8 = HIWORD(this);
  v9 = this >> 40;
  v10 = this >> 16;
  v11 = this >> 8;
  v12 = HIDWORD(this);
  v13 = this >> 24;
  v14 = this;
  v314 = this >> 16;
  v309 = this >> 8;
  v316 = 0x100000001B3LL;
  if ( !*((_DWORD *)g_pComposition + 1621) )
  {
    if ( (*(_BYTE *)(this + 537) & 0x10) == 0 )
      goto LABEL_104;
    if ( *(int *)(this + 500) >= 0 )
    {
      CKeyframeAnimation::SetProgress((CKeyframeAnimation *)this, 1.0);
      *(_BYTE *)(v14 + 536) &= ~2u;
      LOBYTE(this) = v14;
      LOBYTE(v11) = v309;
      LOBYTE(v10) = v314;
    }
    v124 = *(_QWORD **)(*(_QWORD *)(v14 + 24) + 824LL);
    v125 = v124[68];
    v126 = 0x100000001B3LL
         * (v7 ^ (0x100000001B3LL
                * ((unsigned __int8)v8 ^ (0x100000001B3LL
                                        * ((unsigned __int8)v9 ^ (0x100000001B3LL
                                                                * ((unsigned __int8)v12 ^ (0x100000001B3LL
                                                                                         * ((unsigned __int8)v13 ^ (0x100000001B3LL * ((unsigned __int8)v10 ^ (0x100000001B3LL * ((unsigned __int8)v11 ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))));
    v127 = (_QWORD *)v124[66];
    v128 = 2 * (v126 & v124[71]);
    v129 = *(_QWORD **)(v125 + 16 * (v126 & v124[71]) + 8);
    if ( v129 == v127 )
    {
LABEL_162:
      v129 = 0LL;
    }
    else
    {
      while ( v14 != v129[2] )
      {
        if ( v129 == *(_QWORD **)(v125 + 8 * v128) )
          goto LABEL_162;
        v129 = (_QWORD *)v129[1];
      }
    }
    if ( v129 && v129 != v127 )
    {
      v130 = 2
           * ((0x100000001B3LL
             * (*((unsigned __int8 *)v129 + 23) ^ (0x100000001B3LL
                                                 * (*((unsigned __int8 *)v129 + 22) ^ (0x100000001B3LL
                                                                                     * (*((unsigned __int8 *)v129 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v124[71]);
      v131 = *(_QWORD **)(v125
                        + 16
                        * ((0x100000001B3LL
                          * (*((unsigned __int8 *)v129 + 23) ^ (0x100000001B3LL
                                                              * (*((unsigned __int8 *)v129 + 22) ^ (0x100000001B3LL
                                                                                                  * (*((unsigned __int8 *)v129 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v124[71]));
      if ( *(_QWORD **)(v125
                      + 16
                      * ((0x100000001B3LL
                        * (*((unsigned __int8 *)v129 + 23) ^ (0x100000001B3LL
                                                            * (*((unsigned __int8 *)v129 + 22) ^ (0x100000001B3LL
                                                                                                * (*((unsigned __int8 *)v129 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v124[71])
                      + 8) == v129 )
      {
        if ( v131 == v129 )
          *(_QWORD *)(v125
                    + 16
                    * ((0x100000001B3LL
                      * (*((unsigned __int8 *)v129 + 23) ^ (0x100000001B3LL
                                                          * (*((unsigned __int8 *)v129 + 22) ^ (0x100000001B3LL
                                                                                              * (*((unsigned __int8 *)v129
                                                                                                 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v124[71])) = v127;
        else
          v127 = (_QWORD *)v129[1];
        *(_QWORD *)(v125 + 8 * v130 + 8) = v127;
      }
      else if ( v131 == v129 )
      {
        *(_QWORD *)(v125
                  + 16
                  * ((0x100000001B3LL
                    * (*((unsigned __int8 *)v129 + 23) ^ (0x100000001B3LL
                                                        * (*((unsigned __int8 *)v129 + 22) ^ (0x100000001B3LL
                                                                                            * (*((unsigned __int8 *)v129
                                                                                               + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v129 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v124[71])) = *v129;
      }
      v132 = *v129;
      --v124[67];
      *(_QWORD *)v129[1] = v132;
      *(_QWORD *)(v132 + 8) = v129[1];
      operator delete(v129, 0x18uLL);
    }
  }
  v15 = *(_DWORD *)(v14 + 520);
  v16 = *(_DWORD *)(v14 + 516);
  v17 = -2147418113;
  v18 = 84;
  if ( v15 != v16 )
  {
    if ( v16 )
    {
      if ( !v15 )
      {
        if ( !CBaseExpression::ResolveTargetNoRef((CBaseExpression *)v14) )
          goto LABEL_213;
        v151 = *((_DWORD *)a2 + 2);
        if ( (*(_BYTE *)(v14 + 537) & 1) == 0 )
          goto LABEL_203;
        v152 = *(_DWORD *)(v14 + 532);
        if ( v152 == 1 )
        {
          *(_DWORD *)(v14 + 444) = *(_DWORD *)(v14 + 440);
          CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, 0);
          KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v14 + 352));
          *(_DWORD *)(v233 + 92) = 0;
        }
        else if ( v152 == 2 )
        {
          *(_DWORD *)(v14 + 444) = *(_DWORD *)(v14 + 440);
          *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength((CKeyframeAnimation *)v14) * 1000.0;
          if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v285 = (int)*(float *)v4.m128i_i32;
            v286 = *(float *)v4.m128i_i32;
            v4 = (__m128i)LODWORD(FLOAT_N0_5);
            *(float *)&a3 = (float)v285 - v286;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          }
          else
          {
            *(double *)v4.m128i_i64 = *(float *)v4.m128i_i32 + 6291456.25;
          }
          v281 = *(_DWORD *)(v14 + 500);
          v282 = 0;
          if ( v281 >= 1 )
            v282 = v281 - 1;
          CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, v282);
          KeyframeSequence::ResetTime(*(KeyframeSequence **)(v14 + 352), v283);
        }
        KeyframeSequence::Calculate(*(KeyframeSequence **)(v14 + 352), a2);
        v153 = *(const struct CExpressionValue **)(v14 + 352);
        if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
        {
          v243 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
        }
        else
        {
          if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
            goto LABEL_201;
          memset_0(&v317[8], 0, 0x40uLL);
          v318 = 0LL;
          v319 = 0;
          v242 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v240, (__int64)&v317[8], v241);
          v243 = v242;
          v17 = v242;
          if ( v242 >= 0 )
          {
            Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v318);
LABEL_201:
            v154 = *((unsigned int *)a2 + 2);
            *((_DWORD *)a2 + 2) = v154 + 1;
            CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v154), v153);
            v155 = *(KeyframeSequence **)(v14 + 352);
            if ( (*((_BYTE *)v155 + 140) & 1) != 0 )
              KeyframeSequence::Stop(v155);
LABEL_203:
            v17 = 0;
            goto LABEL_204;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v242,
            0x5Du,
            0LL);
          Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v318);
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v243,
          0x16Fu,
          0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v243, 0x981u, 0LL);
LABEL_204:
        v156 = *(_BYTE *)(v14 + 537);
        v157 = *(_BYTE *)(v14 + 536);
        *(_DWORD *)(v14 + 444) = 0;
        v158 = v157 & 0x7F;
        *(_BYTE *)(v14 + 536) = v158;
        *(_BYTE *)(v14 + 537) = v156 & 0xF8;
        if ( v17 < 0 || (v158 & 0x20) != 0 )
        {
          v29 = v17;
          if ( v17 < 0 )
          {
            v166 = v17;
            v167 = 867;
            goto LABEL_308;
          }
        }
        else
        {
          v159 = CBaseExpression::NotifyAnimationStopped((CBaseExpression *)v14);
          if ( v159 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v159, 0x732u, 0LL);
        }
        v160 = *((_DWORD *)a2 + 2);
        if ( v160 == v151 + 1 )
        {
          v161 = (unsigned int)(v160 - 1);
          if ( (unsigned int)v161 >= *((_DWORD *)a2 + 10) )
          {
            memset_0(&v317[8], 0, 0x40uLL);
            v162 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
            v318 = 0LL;
            v319 = 0;
            CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, &v317[8]);
            Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v318);
          }
          else
          {
            v162 = (const struct CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v161);
          }
          v163 = CBaseExpression::SetOutputValue((CBaseExpression *)v14, v162);
          v17 = v163;
          v29 = v163;
          if ( v163 < 0 )
          {
            v166 = v163;
            v167 = 881;
            goto LABEL_308;
          }
          --*((_DWORD *)a2 + 2);
        }
LABEL_213:
        v164 = *(_QWORD *)(v14 + 408);
        if ( v164 )
        {
          if ( *(_BYTE *)(v164 + 294) )
          {
            v165 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)v14);
            v17 = v165;
            v29 = v165;
            if ( v165 < 0 )
            {
              v166 = v165;
              v167 = 890;
LABEL_308:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v166, v167, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x5F4u, 0LL);
              goto LABEL_14;
            }
          }
        }
        goto LABEL_372;
      }
      v247 = *(_BYTE *)(v14 + 537);
      if ( v15 == 2 )
      {
        if ( (v247 & 1) != 0 )
        {
          v289 = *(_BYTE *)(v14 + 536);
          if ( v289 < 0 )
          {
            *(_BYTE *)(v14 + 536) = v289 & 0x7F;
            *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) &= ~2u;
          }
        }
        goto LABEL_372;
      }
    }
    else
    {
      v247 = *(_BYTE *)(v14 + 537);
      if ( v15 )
      {
        if ( (v247 & 1) != 0 )
        {
          v248 = *(_BYTE *)(v14 + 536);
          if ( v248 >= 0 && (v247 & 2) == 0 )
          {
            v249 = *(KeyframeSequence **)(v14 + 352);
            *(_BYTE *)(v14 + 536) = v248 | 0x80;
            KeyframeSequence::Play(v249);
          }
        }
        else
        {
          v266 = *(_DWORD *)(v14 + 528);
          v267 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          *(_DWORD *)(v14 + 496) = 0;
          if ( !v266 || v266 == 2 )
            v268 = v247 >> 3;
          else
            v268 = 0;
          if ( !*(_DWORD *)(v14 + 500) )
          {
            v4 = (__m128i)*(unsigned int *)(v14 + 508);
            if ( *(float *)v4.m128i_i32 != 1.0 )
              v267 = *(_DWORD *)(v14 + 508);
          }
          *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^= (*(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^ (8 * v268)) & 8;
          v269 = 16;
          v270 = *(_QWORD *)(v14 + 352);
          v271 = *(_BYTE *)(v270 + 140);
          if ( *(float *)(v14 + 480) >= 0.0 )
            v269 = 0;
          *(_BYTE *)(v270 + 96) = *(float *)(v14 + 480) < 0.0;
          *(_BYTE *)(v270 + 140) = v271 & 0xEF | v269;
          *(_DWORD *)(*(_QWORD *)(v14 + 352) + 132LL) = 0;
          *(_DWORD *)(*(_QWORD *)(v14 + 352) + 136LL) = v267;
          KeyframeSequence::Play(*(KeyframeSequence **)(v14 + 352));
          v272 = *(_BYTE *)(v14 + 536) | 0x80;
          *(_BYTE *)(v14 + 537) = *(_BYTE *)(v14 + 537) & 0xFC | 1;
          *(_DWORD *)(v14 + 504) = *(_DWORD *)(v14 + 500);
          *(_BYTE *)(v14 + 536) = v272;
          if ( (v272 & 0x20) == 0 )
          {
            if ( *(_DWORD *)(v14 + 228) != 4 )
              *(_DWORD *)(v14 + 228) = 4;
            if ( *(_DWORD *)(v14 + 444) >= *(_DWORD *)(v14 + 440) )
            {
              v300 = CKeyframeAnimation::SampleExpressionsAndStartingValue((CKeyframeAnimation *)v14, a2);
              if ( v300 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v300, 0x743u, 0LL);
            }
          }
          *(_BYTE *)(v14 + 537) |= 4u;
        }
        v250 = *(_QWORD *)(v14 + 448) - Time::s_luBegin.QuadPart;
        v251 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 312LL))
             - v250
             - Time::s_luBegin.QuadPart;
        if ( v251 == 0x7FFFFFFFFFFFFFFFLL )
          LODWORD(v252) = 0x7FFFFFFF;
        else
          v252 = (__int64)((((1000000 * v251 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL)
                         + 500
                         + 1000000 * v251 / Time::s_luFreq.QuadPart)
               / 1000;
        if ( (float)(CKeyframeAnimation::GetGlobalPlaybackRate((CKeyframeAnimation *)v14)
                   * (float)((float)(int)v252 * *(float *)(v14 + 480))) > 0.0 )
        {
          v253 = 0;
          if ( *(char *)(v14 + 536) < 0 )
          {
            if ( *(_DWORD *)(v14 + 528) == 4 )
            {
              v260 = *(_QWORD *)(v14 + 352);
              v261 = 0LL;
              v262 = *(_DWORD *)(v260 + 112);
              if ( v262 > 0 )
              {
                v261 = 0LL;
                v261.m128_f32[0] = (float)*(int *)(*(_QWORD *)(v260 + 104) + 24LL * (unsigned int)(v262 - 1)) / 1000.0;
              }
              v261.m128_f32[0] = (float)(v261.m128_f32[0] * *(float *)(v14 + 512)) * 1000.0;
              if ( (_mm_cvtsi128_si32((__m128i)v261) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)v261.m128_f32[0] - v261.m128_f32[0];
                v4 = (__m128i)LODWORD(FLOAT_N0_5);
                *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
              }
              else
              {
                v263 = _mm_cvtps_pd(v261);
                v263.m128d_f64[0] = v263.m128d_f64[0] + 6291456.25;
                v4 = (__m128i)_mm_cvtpd_ps(v263);
              }
              KeyframeSequence::ConfigureTimer((KeyframeSequence *)v260);
              *(_DWORD *)(v265 + 92) = v264;
            }
            else
            {
              v254 = *(_DWORD *)(v14 + 444);
              v255 = *(_DWORD *)(v14 + 440);
              if ( v254 < v255 )
              {
                v256 = v255 - v254;
                if ( v256 <= 0 )
                  v253 = v256;
                v257 = v253 + v254;
                v253 = -v253;
                *(_DWORD *)(v14 + 444) = v257;
              }
              v258 = *(_QWORD *)(v14 + 352);
              if ( (*(_BYTE *)(v258 + 140) & 2) != 0 )
                *(_DWORD *)(v258 + 92) += v253;
            }
          }
        }
        if ( *(_DWORD *)(v14 + 520) == 2 && (*(_BYTE *)(v14 + 537) & 1) != 0 )
        {
          v259 = *(_BYTE *)(v14 + 536);
          if ( v259 < 0 )
          {
            *(_BYTE *)(v14 + 536) = v259 & 0x7F;
            *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) &= ~2u;
          }
        }
        goto LABEL_372;
      }
    }
    if ( (v247 & 1) != 0 )
    {
      v287 = *(_BYTE *)(v14 + 536);
      if ( v287 >= 0 && (v247 & 2) == 0 )
      {
        v288 = *(KeyframeSequence **)(v14 + 352);
        *(_BYTE *)(v14 + 536) = v287 | 0x80;
        KeyframeSequence::Play(v288);
      }
    }
    else
    {
      v290 = *(_DWORD *)(v14 + 528);
      v291 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      *(_DWORD *)(v14 + 496) = 0;
      if ( !v290 || v290 == 2 )
        v292 = v247 >> 3;
      else
        v292 = 0;
      if ( !*(_DWORD *)(v14 + 500) )
      {
        v4 = (__m128i)*(unsigned int *)(v14 + 508);
        if ( *(float *)v4.m128i_i32 != 1.0 )
          v291 = *(_DWORD *)(v14 + 508);
      }
      *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^= (*(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^ (8 * v292)) & 8;
      v293 = 16;
      v294 = *(_QWORD *)(v14 + 352);
      v295 = *(_BYTE *)(v294 + 140);
      if ( *(float *)(v14 + 480) >= 0.0 )
        v293 = 0;
      *(_BYTE *)(v294 + 96) = *(float *)(v14 + 480) < 0.0;
      *(_BYTE *)(v294 + 140) = v295 & 0xEF | v293;
      *(_DWORD *)(*(_QWORD *)(v14 + 352) + 132LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v14 + 352) + 136LL) = v291;
      KeyframeSequence::Play(*(KeyframeSequence **)(v14 + 352));
      v296 = *(_BYTE *)(v14 + 536) | 0x80;
      *(_BYTE *)(v14 + 537) = *(_BYTE *)(v14 + 537) & 0xFC | 1;
      *(_DWORD *)(v14 + 504) = *(_DWORD *)(v14 + 500);
      *(_BYTE *)(v14 + 536) = v296;
      if ( (v296 & 0x20) == 0 )
      {
        if ( *(_DWORD *)(v14 + 228) != 4 )
          *(_DWORD *)(v14 + 228) = 4;
        if ( *(_DWORD *)(v14 + 444) >= *(_DWORD *)(v14 + 440) )
        {
          v301 = CKeyframeAnimation::SampleExpressionsAndStartingValue((CKeyframeAnimation *)v14, a2);
          if ( v301 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v301, 0x743u, 0LL);
        }
      }
      *(_BYTE *)(v14 + 537) |= 4u;
    }
    *(_QWORD *)(v14 + 456) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL)
                                                                          + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24)
                                                                                             + 312LL));
LABEL_372:
    *(_BYTE *)(v14 + 536) &= ~1u;
    if ( *(_DWORD *)(v14 + 520) == 1 )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 824LL) + 440LL) |= 2u;
      *(_BYTE *)(v14 + 536) |= 1u;
    }
    v16 = *(_DWORD *)(v14 + 520);
    *(_DWORD *)(v14 + 516) = v16;
  }
  if ( !v16 )
    goto LABEL_4;
  v36 = *(_BYTE *)(v14 + 536);
  if ( (v36 & 6) == 6 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( (v36 & 2) == 0 )
  {
    if ( (v36 & 4) == 0 )
      goto LABEL_4;
    v37 = *(float *)(v14 + 484);
    if ( v37 >= 0.0 && v37 <= 1.0 )
    {
      if ( (*(_BYTE *)(v14 + 537) & 3) == 1 )
      {
        v38 = *(_QWORD *)(v14 + 352);
        v39 = 0LL;
        v40 = *(_DWORD *)(v38 + 112);
        if ( v40 > 0 )
        {
          v39 = 0LL;
          *(float *)v39.m128i_i32 = (float)*(int *)(*(_QWORD *)(v38 + 104) + 24LL * (unsigned int)(v40 - 1)) / 1000.0;
        }
        *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v39) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v39.m128i_i32 - *(float *)v39.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v41 = (int)*(float *)v39.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v310 = *(float *)v39.m128i_i32 + 6291456.25;
          v41 = (int)(LODWORD(v310) << 10) >> 11;
        }
        v42 = *(_DWORD *)(v14 + 500);
        v43 = 0;
        if ( v42 > 0 )
          v41 *= v42 + 1;
        if ( *(_DWORD *)(v14 + 488) == 1 && *(_DWORD *)(v14 + 440) )
          v43 = *(_DWORD *)(v14 + 440);
        v45 = 0LL;
        v44 = 0LL;
        v45.m128_f32[0] = (float)(v43 + v41) * v37;
        v46 = v45;
        v46.m128_f32[0] = v45.m128_f32[0] - (float)v43;
        if ( v40 > 0 )
        {
          v44 = 0LL;
          *(float *)v44.m128i_i32 = (float)*(int *)(*(_QWORD *)(v38 + 104) + 24LL * (unsigned int)(v40 - 1)) / 1000.0;
        }
        *(float *)v44.m128i_i32 = *(float *)v44.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v44) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v44.m128i_i32 - *(float *)v44.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v47 = (int)*(float *)v44.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v311 = *(float *)v44.m128i_i32 + 6291456.25;
          v47 = (int)(LODWORD(v311) << 10) >> 11;
        }
        v48 = (__m128i)v46;
        *(float *)v48.m128i_i32 = v46.m128_f32[0] / (float)v47;
        v49 = fmod_0(v46.m128_f32[0], (double)v47);
        if ( v49 == 0.0 )
        {
          v4 = 0LL;
          *(float *)v4.m128i_i32 = fmaxf(0.0, *(float *)v48.m128i_i32 - 1.0);
        }
        else
        {
          v4 = v48;
        }
        v50 = (int)*(float *)v4.m128i_i32;
        *(_DWORD *)(v14 + 496) = (int)*(float *)v4.m128i_i32;
        if ( v42 > 0 )
          *(_DWORD *)(v14 + 504) = v42 - v50;
        v51 = *(_DWORD *)(v14 + 528);
        v52 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        if ( v51 )
        {
          if ( v51 == 2 )
          {
            v53 = *(_BYTE *)(v14 + 537) >> 3;
            if ( (v50 & 1) != 0 )
              v53 = (*(_BYTE *)(v14 + 537) & 8) == 0;
          }
          else
          {
            v53 = 0;
          }
        }
        else
        {
          v53 = *(_BYTE *)(v14 + 537) >> 3;
        }
        if ( v42 >= 0 && v50 == v42 )
        {
          v4 = (__m128i)*(unsigned int *)(v14 + 508);
          if ( *(float *)v4.m128i_i32 != 1.0 )
            v52 = *(_DWORD *)(v14 + 508);
        }
        *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^= (*(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^ (8 * v53)) & 8;
        v54 = 16;
        v55 = *(_QWORD *)(v14 + 352);
        v56 = *(_BYTE *)(v55 + 140);
        if ( *(float *)(v14 + 480) >= 0.0 )
          v54 = 0;
        *(_BYTE *)(v55 + 96) = *(float *)(v14 + 480) < 0.0;
        *(_BYTE *)(v55 + 140) = v56 & 0xEF | v54;
        *(_DWORD *)(*(_QWORD *)(v14 + 352) + 132LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v14 + 352) + 136LL) = v52;
        if ( *(_DWORD *)(v14 + 488) == 1 && (v305 = *(_DWORD *)(v14 + 440)) != 0 )
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v305);
          if ( *(float *)v4.m128i_i32 < v45.m128_f32[0] )
          {
            *(_DWORD *)(v14 + 444) = v305;
            TimePositionWithinIteration = (int)CKeyframeAnimation::GetTimePositionWithinIteration(
                                                 (CKeyframeAnimation *)v14,
                                                 v45.m128_f32[0] - *(float *)v4.m128i_i32);
          }
          else
          {
            v306 = 0;
            TimePositionWithinIteration = 0;
            if ( *(_DWORD *)(v14 + 444) >= v305 )
              v306 = 64;
            *(_BYTE *)(v14 + 536) = *(_BYTE *)(v14 + 536) & 0xBF | v306;
            *(_DWORD *)(v14 + 444) = (int)v45.m128_f32[0];
          }
          KeyframeSequence::ResetTime(*(KeyframeSequence **)(v14 + 352), TimePositionWithinIteration);
        }
        else
        {
          if ( v45.m128_f32[0] == 0.0 )
          {
            v61 = 0.0;
          }
          else
          {
            v57 = *(_QWORD *)(v14 + 352);
            v58 = 0LL;
            v59 = *(_DWORD *)(v57 + 112);
            if ( v59 > 0 )
            {
              v58 = 0LL;
              *(float *)v58.m128i_i32 = (float)*(int *)(*(_QWORD *)(v57 + 104) + 24LL * (unsigned int)(v59 - 1))
                                      / 1000.0;
            }
            *(float *)v58.m128i_i32 = *(float *)v58.m128i_i32 * 1000.0;
            if ( (_mm_cvtsi128_si32(v58) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)*(float *)v58.m128i_i32 - *(float *)v58.m128i_i32;
              v60 = (int)*(float *)v58.m128i_i32
                  - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
            }
            else
            {
              v312 = *(float *)v58.m128i_i32 + 6291456.25;
              v60 = (int)(LODWORD(v312) << 10) >> 11;
            }
            v4 = (__m128i)_mm_cvtps_pd(v45);
            *(double *)v4.m128i_i64 = fmod_0(*(double *)v4.m128i_i64, (double)v60);
            v61 = *(double *)v4.m128i_i64;
            if ( v61 == 0.0 )
              v61 = (float)v60;
          }
          v62 = *(_QWORD *)(v14 + 352);
          v63 = *(float *)(v62 + 136);
          if ( v63 == 1.0 )
          {
            v64 = *(_DWORD *)(v62 + 120);
            v65 = v64;
          }
          else
          {
            v65 = *(_DWORD *)(v62 + 120);
            v4 = (__m128i)COERCE_UNSIGNED_INT((float)v65);
            v64 = (int)(float)(*(float *)v4.m128i_i32 * v63);
          }
          *(_OWORD *)&a3 = *(unsigned int *)(v62 + 132);
          if ( *(float *)&a3 == 0.0 )
          {
            v66 = 0;
          }
          else
          {
            v4 = (__m128i)COERCE_UNSIGNED_INT((float)v65);
            v66 = (int)(float)(*(float *)v4.m128i_i32 * *(float *)&a3);
          }
          *(_BYTE *)(v62 + 96) = (*(_BYTE *)(v62 + 140) & 0x10) != 0;
          *(_DWORD *)(v62 + 80) = v66;
          *(_DWORD *)(v62 + 84) = v64;
          *(_DWORD *)(v62 + 88) = v65;
          *(_DWORD *)(v62 + 92) = v66;
          *(_BYTE *)(v62 + 140) |= 0x20u;
          *(_DWORD *)(v62 + 92) = (int)v61;
          *(_BYTE *)(v14 + 536) |= 0x40u;
        }
      }
      goto LABEL_4;
    }
    v29 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0xA18,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL,
      v308);
    v167 = 971;
    v166 = -2147024809;
    goto LABEL_306;
  }
  v193 = *(_QWORD *)(v14 + 472);
  v194 = 0LL;
  if ( v193 < 0 )
  {
    v297 = *(_QWORD *)(v14 + 472) & 1LL | (*(_QWORD *)(v14 + 472) >> 1);
    v195 = (float)(int)v297 + (float)(int)v297;
  }
  else
  {
    v195 = (float)(int)v193;
  }
  *(float *)v194.m128i_i32 = v195 / 10000000.0;
  v196 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 312LL));
  v197 = *(_QWORD *)(v14 + 464);
  v198 = *v196;
  if ( v197 != v198 )
  {
    v303 = (unsigned __int64)(v198 - v197) / g_qpcFrequency.QuadPart;
    v4 = 0LL;
    if ( v303 < 0 )
      v304 = (float)(v303 & 1 | (unsigned int)((unsigned __int64)v303 >> 1))
           + (float)(v303 & 1 | (unsigned int)((unsigned __int64)v303 >> 1));
    else
      v304 = (float)(int)v303;
    *(float *)v194.m128i_i32 = *(float *)v194.m128i_i32 + v304;
  }
  if ( *(float *)v194.m128i_i32 < 0.0 )
  {
    v29 = -2147024809;
    v166 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9C4u, 0LL);
    v167 = 963;
LABEL_306:
    v17 = -2147024809;
    goto LABEL_308;
  }
  if ( (*(_BYTE *)(v14 + 537) & 3) == 1 )
  {
    v199 = *(_DWORD *)(v14 + 440);
    if ( v199 > 0 )
    {
      v4 = v194;
      *(float *)v4.m128i_i32 = *(float *)v194.m128i_i32 * 1000.0;
      if ( (float)(*(float *)v194.m128i_i32 * 1000.0) > (float)v199 )
      {
        *(_DWORD *)(v14 + 444) = v199;
        *(float *)v194.m128i_i32 = *(float *)v194.m128i_i32 - (float)((float)v199 / 1000.0);
      }
      else
      {
        v194 = 0LL;
        *(_DWORD *)(v14 + 444) = (int)*(float *)v4.m128i_i32;
      }
    }
    *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength((CKeyframeAnimation *)v14);
    v200 = *(_DWORD *)(v14 + 500);
    v201 = v4;
    v202 = (int)(float)(*(float *)v194.m128i_i32 / *(float *)v4.m128i_i32);
    if ( v200 >= 0 && (*(_DWORD *)(v14 + 496) = v202, *(_DWORD *)(v14 + 504) = v200 - v202, v200 - v202 < 0) )
    {
      *(_DWORD *)(v14 + 504) = 0;
    }
    else
    {
      v200 = (int)(float)(*(float *)v194.m128i_i32 / *(float *)v4.m128i_i32);
      v201 = v194;
      *(float *)v201.m128i_i32 = *(float *)v194.m128i_i32 - (float)((float)v202 * *(float *)v4.m128i_i32);
    }
    *(_DWORD *)(v14 + 496) = v200;
    CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, v200);
    *(float *)v201.m128i_i32 = *(float *)v201.m128i_i32 * 1000.0;
    if ( (_mm_cvtsi128_si32(v201) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4 = (__m128i)LODWORD(FLOAT_N0_5);
      *(float *)&a3 = (float)(int)*(float *)v201.m128i_i32 - *(float *)v201.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    }
    else
    {
      v203 = 0LL;
      v203.m128d_f64[0] = *(float *)v201.m128i_i32 + 6291456.25;
      v4 = (__m128i)_mm_cvtpd_ps(v203);
    }
    KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v14 + 352));
    *(_DWORD *)(v204 + 92) = v205;
  }
  *(_QWORD *)(v14 + 456) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL)
                                                                        + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24)
                                                                                           + 312LL));
LABEL_4:
  v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 312LL));
  v20 = *(_QWORD *)(v14 + 456) - Time::s_luBegin.QuadPart;
  v21 = *((_DWORD *)a2 + 2);
  v22 = *v19 - Time::s_luBegin.QuadPart;
  if ( v22 - v20 < 0 )
    goto LABEL_12;
  if ( (*(_BYTE *)(v14 + 537) & 1) == 0 )
  {
    if ( !CExpressionValue::HasValue((CExpressionValue *)(v14 + 80)) )
      goto LABEL_104;
    v318 = 0LL;
    v319 = 0;
    memset(&v317[8], 0, 64);
    CExpressionValue::CopyFrom((CExpressionValue *)&v317[8], v23);
    if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
    {
      v147 = -2147418113;
      v29 = -2147418113;
      v148 = -2147418113;
    }
    else
    {
      if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
      {
LABEL_9:
        v25 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v25 + 1;
        CExpressionValue::CopyFrom(
          (CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v25),
          (const struct CExpressionValue *)&v317[8]);
        v26 = v318;
        if ( v318 )
        {
          v318 = 0LL;
          v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
          if ( (char *)v27 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v26);
          else
            v27();
        }
        goto LABEL_12;
      }
      v111 = DynArrayImpl<1>::Grow((__int64)a2 + 16, 0x50u, 5, v24, 0LL);
      v29 = v111;
      if ( v111 >= 0 )
      {
        v112 = *((_DWORD *)a2 + 10);
        v113 = *((_QWORD *)a2 + 2) + (unsigned int)(80 * v112);
        *((_DWORD *)a2 + 10) = v112 + 5;
        *(_OWORD *)v113 = 0LL;
        *(_OWORD *)(v113 + 16) = 0LL;
        *(_OWORD *)(v113 + 32) = 0LL;
        *(_OWORD *)(v113 + 48) = 0LL;
        v114 = *(CPathData **)(v113 + 64);
        if ( v114 )
        {
          *(_QWORD *)(v113 + 64) = 0LL;
          v115 = *(void (**)(void))(*(_QWORD *)v114 + 16LL);
          if ( (char *)v115 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v114);
          else
            v115();
        }
        *(_DWORD *)(v113 + 72) = 0;
        *(_OWORD *)(v113 + 80) = 0LL;
        *(_OWORD *)(v113 + 96) = 0LL;
        *(_OWORD *)(v113 + 112) = 0LL;
        *(_OWORD *)(v113 + 128) = 0LL;
        v116 = *(CPathData **)(v113 + 144);
        if ( v116 )
        {
          *(_QWORD *)(v113 + 144) = 0LL;
          v117 = *(void (**)(void))(*(_QWORD *)v116 + 16LL);
          if ( (char *)v117 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v116);
          else
            v117();
        }
        *(_DWORD *)(v113 + 152) = 0;
        *(_OWORD *)(v113 + 160) = 0LL;
        *(_OWORD *)(v113 + 176) = 0LL;
        *(_OWORD *)(v113 + 192) = 0LL;
        *(_OWORD *)(v113 + 208) = 0LL;
        v118 = *(CPathData **)(v113 + 224);
        if ( v118 )
        {
          *(_QWORD *)(v113 + 224) = 0LL;
          v119 = *(void (**)(void))(*(_QWORD *)v118 + 16LL);
          if ( (char *)v119 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v118);
          else
            v119();
        }
        *(_DWORD *)(v113 + 232) = 0;
        *(_OWORD *)(v113 + 240) = 0LL;
        *(_OWORD *)(v113 + 256) = 0LL;
        *(_OWORD *)(v113 + 272) = 0LL;
        *(_OWORD *)(v113 + 288) = 0LL;
        v120 = *(CPathData **)(v113 + 304);
        if ( v120 )
        {
          *(_QWORD *)(v113 + 304) = 0LL;
          v121 = *(void (**)(void))(*(_QWORD *)v120 + 16LL);
          if ( (char *)v121 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v120);
          else
            v121();
        }
        *(_DWORD *)(v113 + 312) = 0;
        *(_OWORD *)(v113 + 320) = 0LL;
        *(_OWORD *)(v113 + 336) = 0LL;
        *(_OWORD *)(v113 + 352) = 0LL;
        *(_OWORD *)(v113 + 368) = 0LL;
        v122 = *(CPathData **)(v113 + 384);
        if ( v122 )
        {
          *(_QWORD *)(v113 + 384) = 0LL;
          v123 = *(void (**)(void))(*(_QWORD *)v122 + 16LL);
          if ( (char *)v123 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v122);
          else
            v123();
        }
        *(_DWORD *)(v113 + 392) = 0;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v111, 0x191u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xE5u, 0LL);
      v148 = v29;
      v147 = v29;
      v18 = 93;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v148,
      v18,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v147,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v147, 0x687u, 0LL);
    v149 = v318;
    if ( v318 )
    {
      v318 = 0LL;
      v150 = *(void (**)(void))(*(_QWORD *)v149 + 16LL);
      if ( (char *)v150 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v149);
      else
        v150();
    }
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v14 + 516) != 2 )
  {
    v108 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v14 + 160LL);
    if ( v108 == CResource::GetProcessAttributionNoRef )
    {
      v109 = *(_QWORD *)(v14 + 56);
      if ( !v109 )
        goto LABEL_16;
      v110 = *(_QWORD *)(v109 + 64);
    }
    else
    {
      v110 = (__int64)v108((CResource *)v14);
    }
    if ( v110 )
      ++*(_DWORD *)(v110 + 40);
  }
LABEL_16:
  v31 = *(_BYTE *)(v14 + 536);
  v32 = *(_DWORD *)(v14 + 516);
  if ( (v31 & 6) != 0 || !CExpressionValue::HasValue((CExpressionValue *)(v14 + 80)) )
  {
    if ( v32 != 2 )
      goto LABEL_68;
    v33 = *(_BYTE *)(v14 + 537);
    if ( (v33 & 1) == 0 )
    {
      v177 = *(_DWORD *)(v14 + 528);
      *(_DWORD *)(v14 + 496) = 0;
      v178 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( !v177 || v177 == 2 )
        v179 = v33 >> 3;
      else
        v179 = 0;
      if ( !*(_DWORD *)(v14 + 500) )
      {
        v4 = (__m128i)*(unsigned int *)(v14 + 508);
        if ( *(float *)v4.m128i_i32 != 1.0 )
          v178 = *(_DWORD *)(v14 + 508);
      }
      *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^= (*(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^ (8 * v179)) & 8;
      v180 = 16;
      v181 = *(_QWORD *)(v14 + 352);
      v182 = *(_BYTE *)(v181 + 140);
      if ( *(float *)(v14 + 480) >= 0.0 )
        v180 = 0;
      *(_BYTE *)(v181 + 96) = *(float *)(v14 + 480) < 0.0;
      *(_BYTE *)(v181 + 140) = v182 & 0xEF | v180;
      *(_DWORD *)(*(_QWORD *)(v14 + 352) + 132LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v14 + 352) + 136LL) = v178;
      v183 = *(_QWORD *)(v14 + 352);
      v184 = *(_BYTE *)(v183 + 140);
      if ( (v184 & 1) == 0 )
      {
        KeyframeSequence::SortKeyFrames(*(KeyframeSequence **)(v14 + 352));
        KeyframeSequence::ConfigureTimer((KeyframeSequence *)v183);
        v230 = *(_DWORD *)(v183 + 112);
        for ( i = 0; i < v230; ++i )
        {
          v232 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v183 + 104) + 24LL * i + 8) + 20LL);
          if ( v232 != 1 && (unsigned int)(v232 - 2) >= 2 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
        v184 = *(_BYTE *)(v183 + 140) | 1;
        *(_BYTE *)(v183 + 140) = v184;
      }
      *(_BYTE *)(v183 + 140) = v184 | 2;
      v185 = *(_BYTE *)(v14 + 536) | 0x80;
      *(_BYTE *)(v14 + 537) = *(_BYTE *)(v14 + 537) & 0xFC | 1;
      *(_DWORD *)(v14 + 504) = *(_DWORD *)(v14 + 500);
      *(_BYTE *)(v14 + 536) = v185;
      if ( (v185 & 0x20) == 0 )
      {
        if ( *(_DWORD *)(v14 + 228) != 4 )
          *(_DWORD *)(v14 + 228) = 4;
        if ( *(_DWORD *)(v14 + 444) >= *(_DWORD *)(v14 + 440) && (v185 & 8) == 0 )
        {
          CKeyframeAnimation::ProcessExpressionKeyFrames((CKeyframeAnimation *)v14, a2);
          if ( (*(_BYTE *)(v14 + 537) & 0x20) != 0 )
          {
            v298 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)v14);
            v299 = v298;
            if ( v298 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v298, 0x8C3u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v299, 0x743u, 0LL);
              *(_BYTE *)(v14 + 537) |= 4u;
              *(_BYTE *)(v14 + 536) |= 0x20u;
              goto LABEL_85;
            }
          }
          *(_BYTE *)(v14 + 536) |= 8u;
        }
      }
      *(_BYTE *)(v14 + 537) |= 4u;
      *(_BYTE *)(v14 + 536) |= 0x20u;
      goto LABEL_85;
    }
    if ( v31 >= 0 && (v33 & 2) == 0 )
    {
      v34 = *(_QWORD *)(v14 + 352);
      *(_BYTE *)(v14 + 536) = v31 | 0x80;
      v35 = *(_BYTE *)(v34 + 140);
      if ( (v35 & 1) == 0 )
      {
        if ( (v35 & 4) != 0 )
        {
          qsort(*(void **)(v34 + 104), *(unsigned int *)(v34 + 112), 0x18uLL, KeyframeSequence::CompareKeyframes);
          v207 = 0;
          v208 = *(_DWORD *)(v34 + 112);
          v35 = *(_BYTE *)(v34 + 140) & 0xFB;
          *(_BYTE *)(v34 + 140) = v35;
          *(_DWORD *)(v34 + 120) = 0;
          if ( v208 >= 2 )
            *(_DWORD *)(v34 + 120) = *(_DWORD *)(*(_QWORD *)(v34 + 104) + 24LL * (v208 - 1)) - **(_DWORD **)(v34 + 104);
        }
        else
        {
          v207 = 0;
        }
        v209 = *(float *)(v34 + 136);
        v210 = (v35 & 0x10) != 0;
        if ( v209 == 1.0 )
        {
          v211 = *(_DWORD *)(v34 + 120);
          v212 = v211;
        }
        else
        {
          v212 = *(_DWORD *)(v34 + 120);
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v212);
          v211 = (int)(float)(*(float *)v4.m128i_i32 * v209);
        }
        v213 = *(float *)(v34 + 132);
        if ( v213 == 0.0 )
        {
          v214 = 0;
        }
        else
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v212);
          v214 = (int)(float)(*(float *)v4.m128i_i32 * v213);
        }
        *(_DWORD *)(v34 + 88) = v212;
        *(_DWORD *)(v34 + 80) = v214;
        *(_DWORD *)(v34 + 84) = v211;
        *(_BYTE *)(v34 + 96) = v210;
        *(_DWORD *)(v34 + 92) = v214;
        v215 = *(_DWORD *)(v34 + 112);
        v216 = *(_BYTE *)(v34 + 140) | 0x20;
        *(_BYTE *)(v34 + 140) = v216;
        if ( v215 )
        {
          do
          {
            v217 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 104) + 24LL * v207 + 8) + 20LL);
            if ( v217 != 1 && (unsigned int)(v217 - 2) >= 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
            ++v207;
          }
          while ( v207 < v215 );
        }
        *(_BYTE *)(v34 + 140) = v216 | 3;
        *(_BYTE *)(v14 + 536) |= 0x20u;
        goto LABEL_85;
      }
      *(_BYTE *)(v34 + 140) = v35 | 2;
    }
    *(_BYTE *)(v14 + 536) |= 0x20u;
  }
  else if ( v32 != 2 )
  {
LABEL_68:
    v67 = v22 - v20;
    if ( v67 == 0x7FFFFFFFFFFFFFFFLL )
      LODWORD(v68) = 0x7FFFFFFF;
    else
      v68 = (__int64)(1000000 * v67 / Time::s_luFreq.QuadPart
                    + 500
                    + (((1000000 * v67 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL))
          / 1000;
    v69 = *(_QWORD *)(v14 + 56);
    v70 = *(_QWORD **)(*(_QWORD *)(v14 + 24) + 824LL);
    if ( !v69 )
      goto LABEL_114;
    v71 = v70[60];
    v72 = *(_QWORD **)(v71
                     + 16
                     * ((0x100000001B3LL
                       * (HIBYTE(v69) ^ (0x100000001B3LL
                                       * (BYTE6(v69) ^ (0x100000001B3LL
                                                      * (BYTE5(v69) ^ (0x100000001B3LL
                                                                     * (BYTE4(v69) ^ (0x100000001B3LL
                                                                                    * (BYTE3(v69) ^ (0x100000001B3LL * (BYTE2(v69) ^ (0x100000001B3LL * (BYTE1(v69) ^ (v316 * (v315 ^ (unsigned __int8)v69)))))))))))))))) & v70[63])
                     + 8);
    if ( v72 == (_QWORD *)v70[58] )
    {
LABEL_72:
      v72 = 0LL;
    }
    else
    {
      while ( v69 != v72[2] )
      {
        if ( v72 == *(_QWORD **)(v71
                               + 16
                               * ((0x100000001B3LL
                                 * (HIBYTE(v69) ^ (0x100000001B3LL
                                                 * (BYTE6(v69) ^ (0x100000001B3LL
                                                                * (BYTE5(v69) ^ (0x100000001B3LL
                                                                               * (BYTE4(v69) ^ (0x100000001B3LL
                                                                                              * (BYTE3(v69) ^ (0x100000001B3LL * (BYTE2(v69) ^ (0x100000001B3LL * (BYTE1(v69) ^ (v316 * (v315 ^ (unsigned __int8)v69)))))))))))))))) & v70[63])) )
          goto LABEL_72;
        v72 = (_QWORD *)v72[1];
      }
    }
    if ( v72 && v72 != (_QWORD *)v70[58] )
      v73 = *(float *)(v72[3] + 72LL);
    else
LABEL_114:
      v73 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v4 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v68);
    v74 = (int)(float)((float)(*(float *)v4.m128i_i32 * *(float *)(v14 + 480)) * v73);
    if ( *(char *)(v14 + 536) < 0 )
    {
      if ( *(_DWORD *)(v14 + 528) == 4 )
      {
        v90 = *(_QWORD *)(v14 + 352);
        v4 = 0LL;
        v91 = *(_DWORD *)(v90 + 112);
        if ( v91 > 0 )
        {
          v4 = 0LL;
          *(float *)v4.m128i_i32 = (float)*(int *)(*(_QWORD *)(v90 + 104) + 24LL * (unsigned int)(v91 - 1)) / 1000.0;
        }
        *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 * *(float *)(v14 + 512)) * 1000.0;
        if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v4.m128i_i32 - *(float *)v4.m128i_i32;
          v206.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v206);
          v92 = (int)*(float *)v4.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          *(double *)v4.m128i_i64 = *(float *)v4.m128i_i32 + 6291456.25;
          *(float *)v4.m128i_i32 = *(double *)v4.m128i_i64;
          v92 = v4.m128i_i32[0] << 10 >> 11;
        }
        v93 = *(float *)(v90 + 136);
        v94 = (*(_BYTE *)(v90 + 140) & 0x10) != 0;
        if ( v93 == 1.0 )
        {
          v95 = *(_DWORD *)(v90 + 120);
          v96 = v95;
        }
        else
        {
          v96 = *(_DWORD *)(v90 + 120);
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v96);
          v95 = (int)(float)(*(float *)v4.m128i_i32 * v93);
        }
        v97 = *(float *)(v90 + 132);
        if ( v97 == 0.0 )
        {
          v98 = 0;
        }
        else
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v96);
          v98 = (int)(float)(*(float *)v4.m128i_i32 * v97);
        }
        *(_DWORD *)(v90 + 80) = v98;
        *(_DWORD *)(v90 + 84) = v95;
        *(_DWORD *)(v90 + 88) = v96;
        *(_BYTE *)(v90 + 96) = v94;
        *(_DWORD *)(v90 + 92) = v98;
        *(_BYTE *)(v90 + 140) |= 0x20u;
        *(_DWORD *)(v90 + 92) = v92;
      }
      else
      {
        v75 = *(_DWORD *)(v14 + 444);
        v76 = *(_DWORD *)(v14 + 440);
        if ( v75 < v76 )
        {
          v77 = v76 - v75;
          if ( v74 < v77 )
            v77 = (int)(float)((float)(*(float *)v4.m128i_i32 * *(float *)(v14 + 480)) * v73);
          *(_DWORD *)(v14 + 444) = v77 + v75;
          v74 -= v77;
        }
        v78 = *(_QWORD *)(v14 + 352);
        if ( (*(_BYTE *)(v78 + 140) & 2) != 0 )
          *(_DWORD *)(v78 + 92) += v74;
      }
    }
    v18 = 84;
  }
LABEL_85:
  v79 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v14 + 24) + 312LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(v14 + 24) + 312LL));
  v80 = (*(_BYTE *)(v14 + 537) & 1) == 0;
  *(_QWORD *)(v14 + 456) = *v79;
  if ( !v80 && *(_DWORD *)(v14 + 444) < *(_DWORD *)(v14 + 440) )
  {
    v81 = *(_BYTE *)(v14 + 536);
    if ( (v81 & 0x40) == 0 && (*(_DWORD *)(v14 + 524) != 1 || (v81 & 0x10) != 0) )
      goto LABEL_96;
  }
  v82 = *(_BYTE *)(v14 + 536);
  if ( (v82 & 8) == 0 )
  {
    v186 = 0;
    if ( *(_DWORD *)(v14 + 384) )
    {
      do
      {
        v187 = *(_QWORD *)(v14 + 360);
        v188 = *(_QWORD *)(v14 + 176);
        v313[0] = 0;
        CBaseExpression::CalculateValue(*(CBaseExpression **)(v187 + 8LL * v186++), a2, v188, v313);
      }
      while ( v186 < *(_DWORD *)(v14 + 384) );
      v82 = *(_BYTE *)(v14 + 536);
    }
    if ( (*(_BYTE *)(v14 + 537) & 0x20) != 0 )
    {
      v229 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)v14);
      v29 = v229;
      if ( v229 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v229, 0x8C3u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x633u, 0LL);
        goto LABEL_14;
      }
      v82 = *(_BYTE *)(v14 + 536);
    }
    v82 |= 8u;
    *(_BYTE *)(v14 + 536) = v82;
  }
  if ( v82 >= 0 )
    goto LABEL_92;
  if ( *(int *)(v14 + 500) < 0 )
  {
    v218 = *(_QWORD *)(v14 + 352);
    v219 = *(_DWORD *)(v218 + 112);
    if ( v219 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        v220 = 3 * (v219 - 1);
        v221 = *(_DWORD *)(*(_QWORD *)(v218 + 104) + 24LL * (unsigned int)(v219 - 1));
        v222 = *(_QWORD *)(v14 + 56);
        if ( v222 )
          CurrentProcessId = *(_DWORD *)(v222 + 28);
        else
          CurrentProcessId = GetCurrentProcessId();
        v224 = *(_QWORD *)(v14 + 56);
        if ( v224 )
          v225 = *(_DWORD *)(v224 + 24);
        else
          v225 = 0;
        McTemplateU0qqpq_EventWriteTransfer(v224, v220, v225, CurrentProcessId, v14, v221);
      }
    }
  }
  v168 = *(_BYTE *)(v14 + 537);
  if ( (v168 & 4) != 0 )
    *(_BYTE *)(v14 + 537) = v168 & 0xFB;
  KeyframeSequence::Calculate(*(KeyframeSequence **)(v14 + 352), a2);
  v169 = *(_QWORD *)(v14 + 352);
  if ( (*(_BYTE *)(v169 + 140) & 3) != 1 )
    goto LABEL_92;
  v170 = *(_DWORD *)(v169 + 92);
  v171 = *(_DWORD *)(v169 + 80);
  if ( *(_BYTE *)(v169 + 96) )
  {
    if ( v170 > v171 && v170 <= *(_DWORD *)(v169 + 84) )
      goto LABEL_92;
  }
  else if ( v170 >= v171 && v170 < *(_DWORD *)(v169 + 84) )
  {
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v14 + 528) == 4 )
    goto LABEL_92;
  v172 = *(_BYTE *)(v14 + 537) | 4;
  v80 = *(_DWORD *)(v14 + 504) == 0;
  *(_BYTE *)(v14 + 537) = v172;
  if ( v80 )
    goto LABEL_226;
  *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength((CKeyframeAnimation *)v14) * 1000.0;
  if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v4.m128i_i32 - *(float *)v4.m128i_i32;
    v284.m128_f32[0] = -0.5;
    v275 = (int)*(float *)v4.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v284));
  }
  else
  {
    v274 = *(float *)v4.m128i_i32 + 6291456.25;
    v275 = (int)(LODWORD(v274) << 10) >> 11;
  }
  v276 = 0;
  do
  {
    ++v276;
    if ( v273 < 0 )
    {
      v273 += v275;
    }
    else if ( v273 <= v275 )
    {
      v277 = v273 < 0;
      if ( v273 )
        continue;
      if ( *(float *)(v14 + 480) >= 0.0 )
        break;
      v273 = v275;
    }
    else
    {
      v273 -= v275;
    }
    v277 = v273 < 0;
  }
  while ( v277 || v273 > v275 );
  v278 = *(_DWORD *)(v14 + 504);
  if ( v276 > v278 )
  {
    if ( v278 <= 0 )
      goto LABEL_407;
    *(_DWORD *)(v14 + 504) = 0;
    goto LABEL_226;
  }
  *(_DWORD *)(v14 + 504) = v278 - v276;
LABEL_407:
  if ( v276 )
  {
    v279 = *(_DWORD *)(v14 + 496) + v276;
    *(_DWORD *)(v14 + 496) = v279;
    CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, v279);
    KeyframeSequence::Repeat(*(KeyframeSequence **)(v14 + 352), v280);
    goto LABEL_92;
  }
LABEL_226:
  v173 = *(_BYTE *)(v14 + 536) & 0x7F;
  *(_BYTE *)(v14 + 537) = v172 | 2;
  *(_BYTE *)(v14 + 536) = v173;
  if ( (v173 & 0x20) == 0 )
  {
    v174 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)v14);
    v29 = v174;
    if ( v174 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v174, 0x72Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC47u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x636u, 0LL);
      goto LABEL_14;
    }
  }
LABEL_92:
  v83 = *(CExpressionValue **)(v14 + 352);
  if ( !CExpressionValue::HasValue(v83) )
    goto LABEL_104;
  if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
  {
    v175 = -2147418113;
    v29 = -2147418113;
    v176 = -2147418113;
LABEL_231:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v176,
      v18,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v175,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v175, 0x643u, 0LL);
    goto LABEL_14;
  }
  if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
    goto LABEL_95;
  v134 = DynArrayImpl<1>::Grow((__int64)a2 + 16, 0x50u, 5, v84, 0LL);
  v29 = v134;
  if ( v134 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v134, 0x191u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xE5u, 0LL);
    v176 = v29;
    v18 = 93;
    v175 = v29;
    goto LABEL_231;
  }
  v135 = *((_DWORD *)a2 + 10);
  v136 = *((_QWORD *)a2 + 2) + (unsigned int)(80 * v135);
  *((_DWORD *)a2 + 10) = v135 + 5;
  *(_OWORD *)v136 = 0LL;
  *(_OWORD *)(v136 + 16) = 0LL;
  *(_OWORD *)(v136 + 32) = 0LL;
  *(_OWORD *)(v136 + 48) = 0LL;
  v137 = *(CPathData **)(v136 + 64);
  if ( v137 )
  {
    *(_QWORD *)(v136 + 64) = 0LL;
    v138 = *(void (**)(void))(*(_QWORD *)v137 + 16LL);
    if ( (char *)v138 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v137);
    else
      v138();
  }
  *(_DWORD *)(v136 + 72) = 0;
  *(_OWORD *)(v136 + 80) = 0LL;
  *(_OWORD *)(v136 + 96) = 0LL;
  *(_OWORD *)(v136 + 112) = 0LL;
  *(_OWORD *)(v136 + 128) = 0LL;
  v139 = *(CPathData **)(v136 + 144);
  if ( v139 )
  {
    *(_QWORD *)(v136 + 144) = 0LL;
    v140 = *(void (**)(void))(*(_QWORD *)v139 + 16LL);
    if ( (char *)v140 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v139);
    else
      v140();
  }
  *(_DWORD *)(v136 + 152) = 0;
  *(_OWORD *)(v136 + 160) = 0LL;
  *(_OWORD *)(v136 + 176) = 0LL;
  *(_OWORD *)(v136 + 192) = 0LL;
  *(_OWORD *)(v136 + 208) = 0LL;
  v141 = *(CPathData **)(v136 + 224);
  if ( v141 )
  {
    *(_QWORD *)(v136 + 224) = 0LL;
    v142 = *(void (**)(void))(*(_QWORD *)v141 + 16LL);
    if ( (char *)v142 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v141);
    else
      v142();
  }
  *(_DWORD *)(v136 + 232) = 0;
  *(_OWORD *)(v136 + 240) = 0LL;
  *(_OWORD *)(v136 + 256) = 0LL;
  *(_OWORD *)(v136 + 272) = 0LL;
  *(_OWORD *)(v136 + 288) = 0LL;
  v143 = *(CPathData **)(v136 + 304);
  if ( v143 )
  {
    *(_QWORD *)(v136 + 304) = 0LL;
    v144 = *(void (**)(void))(*(_QWORD *)v143 + 16LL);
    if ( (char *)v144 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v143);
    else
      v144();
  }
  *(_DWORD *)(v136 + 312) = 0;
  *(_OWORD *)(v136 + 320) = 0LL;
  *(_OWORD *)(v136 + 336) = 0LL;
  *(_OWORD *)(v136 + 352) = 0LL;
  *(_OWORD *)(v136 + 368) = 0LL;
  v145 = *(CPathData **)(v136 + 384);
  if ( v145 )
  {
    *(_QWORD *)(v136 + 384) = 0LL;
    v146 = *(void (**)(void))(*(_QWORD *)v145 + 16LL);
    if ( (char *)v146 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v145);
    else
      v146();
  }
  *(_DWORD *)(v136 + 392) = 0;
LABEL_95:
  v85 = *((unsigned int *)a2 + 2);
  *((_DWORD *)a2 + 2) = v85 + 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v85), v83);
LABEL_96:
  v86 = *(_BYTE *)(v14 + 536);
  v87 = v86;
  if ( (((unsigned __int8)v86 >> 5) & *(_BYTE *)(v14 + 537) & 1) != 0 && v86 < 0 )
  {
    v88 = *(_QWORD *)(v14 + 352);
    *(_BYTE *)(v14 + 536) = v86 & 0x7F;
    *(_BYTE *)(v88 + 140) &= ~2u;
    v87 = *(_BYTE *)(v14 + 536);
  }
  v89 = *(_BYTE *)(v14 + 537);
  if ( (v89 & 2) != 0 )
  {
    --*((_DWORD *)a2 + 2);
    if ( (*(_BYTE *)(v14 + 537) & 1) == 0 )
    {
LABEL_123:
      v29 = 0;
LABEL_124:
      v103 = *(_BYTE *)(v14 + 537);
      v104 = *(_BYTE *)(v14 + 536);
      *(_DWORD *)(v14 + 444) = 0;
      v105 = v104 & 0x7F;
      *(_BYTE *)(v14 + 536) = v105;
      *(_BYTE *)(v14 + 537) = v103 & 0xF8;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x654u, 0LL);
        goto LABEL_14;
      }
      if ( (v105 & 0x20) == 0 )
      {
        v106 = CBaseExpression::NotifyAnimationStopped((CBaseExpression *)v14);
        if ( v106 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0x732u, 0LL);
      }
      v107 = *(_BYTE *)(v14 + 536) & 0xFE;
      *(_BYTE *)(v14 + 536) = v107;
      if ( (v107 & 0x20) != 0 )
      {
        v226 = *(_BYTE *)(v14 + 537);
        if ( (v226 & 1) != 0 )
        {
          if ( v107 >= 0 && (v226 & 2) == 0 )
          {
            v227 = *(KeyframeSequence **)(v14 + 352);
            *(_BYTE *)(v14 + 536) = v107 | 0x80;
            KeyframeSequence::Play(v227);
          }
        }
        else
        {
          v234 = *(_DWORD *)(v14 + 528);
          *(_DWORD *)(v14 + 496) = 0;
          if ( !v234 || v234 == 2 )
            v235 = v226 >> 3;
          else
            v235 = 0;
          if ( !*(_DWORD *)(v14 + 500) && *(float *)(v14 + 508) != 1.0 )
            v5 = *(_DWORD *)(v14 + 508);
          v236 = 16;
          *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^= (*(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) ^ (8 * v235)) & 8;
          v237 = *(_QWORD *)(v14 + 352);
          v238 = *(_BYTE *)(v237 + 140);
          if ( *(float *)(v14 + 480) >= 0.0 )
            v236 = 0;
          *(_BYTE *)(v237 + 96) = *(float *)(v14 + 480) < 0.0;
          *(_BYTE *)(v237 + 140) = v238 & 0xEF | v236;
          *(_DWORD *)(*(_QWORD *)(v14 + 352) + 132LL) = 0;
          *(_DWORD *)(*(_QWORD *)(v14 + 352) + 136LL) = v5;
          KeyframeSequence::Play(*(KeyframeSequence **)(v14 + 352));
          v239 = *(_BYTE *)(v14 + 536) | 0x80;
          *(_BYTE *)(v14 + 537) = *(_BYTE *)(v14 + 537) & 0xFC | 1;
          *(_DWORD *)(v14 + 504) = *(_DWORD *)(v14 + 500);
          *(_BYTE *)(v14 + 536) = v239;
          if ( (v239 & 0x20) == 0 )
          {
            if ( *(_DWORD *)(v14 + 228) != 4 )
              *(_DWORD *)(v14 + 228) = 4;
            if ( *(_DWORD *)(v14 + 444) >= *(_DWORD *)(v14 + 440) )
            {
              v302 = CKeyframeAnimation::SampleExpressionsAndStartingValue((CKeyframeAnimation *)v14, a2);
              if ( v302 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v302, 0x743u, 0LL);
            }
          }
          *(_BYTE *)(v14 + 537) |= 4u;
        }
        if ( (*(_BYTE *)(v14 + 537) & 1) != 0 )
        {
          v228 = *(_BYTE *)(v14 + 536);
          if ( v228 < 0 )
          {
            *(_BYTE *)(v14 + 536) = v228 & 0x7F;
            *(_BYTE *)(*(_QWORD *)(v14 + 352) + 140LL) &= ~2u;
          }
        }
      }
      else
      {
        *(_QWORD *)(v14 + 516) = 0LL;
      }
      goto LABEL_12;
    }
    v99 = *(_DWORD *)(v14 + 532);
    if ( v99 == 1 )
    {
      *(_DWORD *)(v14 + 444) = *(_DWORD *)(v14 + 440);
      CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, 0);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v14 + 352));
      *(_DWORD *)(v133 + 92) = 0;
    }
    else if ( v99 == 2 )
    {
      *(_DWORD *)(v14 + 444) = *(_DWORD *)(v14 + 440);
      CKeyframeAnimation::GetAnimationTimeLength((CKeyframeAnimation *)v14);
      v244 = *(_DWORD *)(v14 + 500);
      v245 = 0;
      if ( v244 >= 1 )
        v245 = v244 - 1;
      CKeyframeAnimation::PrepareSequenceForIteration((CKeyframeAnimation *)v14, v245);
      KeyframeSequence::ResetTime(*(KeyframeSequence **)(v14 + 352), v246);
    }
    KeyframeSequence::Calculate(*(KeyframeSequence **)(v14 + 352), a2);
    v100 = *(const struct CExpressionValue **)(v14 + 352);
    if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
    {
      v192 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x54u,
        0LL);
      v29 = -2147418113;
    }
    else
    {
      if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
        goto LABEL_121;
      memset_0(&v317[8], 0, 0x40uLL);
      v318 = 0LL;
      v319 = 0;
      v191 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v189, (__int64)&v317[8], v190);
      v192 = v191;
      v29 = v191;
      if ( v191 >= 0 )
      {
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v318);
LABEL_121:
        v101 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v101 + 1;
        CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v101), v100);
        v102 = *(KeyframeSequence **)(v14 + 352);
        if ( (*((_BYTE *)v102 + 140) & 1) != 0 )
          KeyframeSequence::Stop(v102);
        goto LABEL_123;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v191,
        0x5Du,
        0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v318);
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v192,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v192, 0x981u, 0LL);
    goto LABEL_124;
  }
  if ( (v89 & 1) == 0 || *(_DWORD *)(v14 + 444) >= *(_DWORD *)(v14 + 440) )
  {
LABEL_12:
    v28 = *((_DWORD *)a2 + 2);
    if ( v28 != v21 + 1 )
    {
      if ( v28 != v21 )
      {
        v29 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x6A4u, 0LL);
        goto LABEL_14;
      }
      goto LABEL_104;
    }
    v29 = 0;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v14 + 524) == 1 && (v87 & 0x10) == 0 )
  {
    *(_BYTE *)(v14 + 536) = v87 | 0x10;
    goto LABEL_12;
  }
  if ( (v87 & 0x40) != 0 )
    goto LABEL_12;
LABEL_104:
  v29 = 1;
LABEL_14:
  **(_BYTE **)v317 = *(_BYTE *)(v14 + 536) & 1;
  *(_BYTE *)(v14 + 536) &= 0x99u;
  return (unsigned int)v29;
}
