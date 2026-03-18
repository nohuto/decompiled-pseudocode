/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800DDFF0 (-CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18000DD58 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180013630 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EE50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180152FAC (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x18015324C (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1801532D8 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?SortKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180153BF0 (-SortKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x180153F44 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180153FB0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180153FF0 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x1801540F0 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180154388 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x180154450 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18015459C (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180154968 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ @ 0x1801AEE50 (-GetGlobalPlaybackRate@CKeyframeAnimation@@AEAAMXZ.c)
 *     ?GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z @ 0x1801B2730 (-GetTimePositionWithinIteration@CKeyframeAnimation@@AEAAMM@Z.c)
 *     McTemplateU0qqpq_EventWriteTransfer @ 0x1801EFF58 (McTemplateU0qqpq_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     fmod_0 @ 0x1802DF614 (fmod_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        unsigned __int64 a2,
        double a3,
        bool *a4)
{
  __m128i v4; // xmm0
  CGlobalComposition *v5; // rax
  int v6; // xmm6_4
  unsigned __int64 v8; // r14
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r12d
  _QWORD *v14; // rax
  LONGLONG v15; // rdi
  int v16; // r13d
  LONGLONG v17; // rbx
  const struct CExpressionValue *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  CPathData *v21; // rcx
  void (*v22)(void); // rax
  int v23; // ecx
  int v24; // ebx
  char v26; // r8
  int v27; // edx
  unsigned __int8 v28; // dl
  __int64 v29; // rbx
  char v30; // r9
  char v31; // cl
  float v32; // xmm3_4
  __int64 v33; // r9
  __m128i v34; // xmm0
  int v35; // r8d
  int v36; // ecx
  int v37; // ebx
  int v38; // edx
  __m128i v39; // xmm1
  __m128 v40; // xmm8
  __m128 v41; // xmm3
  int v42; // ecx
  __m128i v43; // xmm7
  float v44; // xmm1_4
  int v45; // ecx
  int v46; // eax
  int v47; // xmm1_4
  char v48; // dl
  char v49; // cl
  __int64 v50; // r8
  char v51; // al
  __int64 v52; // r8
  __m128i v53; // xmm0
  int v54; // eax
  int v55; // ebx
  float v56; // xmm1_4
  __int64 v57; // rcx
  float v58; // xmm2_4
  int v59; // r9d
  LONGLONG v60; // rbx
  __int64 v61; // rdx
  unsigned __int64 v62; // r8
  _QWORD *v63; // r13
  __int64 v64; // rcx
  _QWORD *v65; // rax
  float v66; // xmm1_4
  int v67; // edx
  int v68; // eax
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // rax
  _QWORD *v72; // rax
  bool v73; // zf
  char v74; // al
  char v75; // al
  CExpressionValue *v76; // r12
  __int64 v77; // r9
  __int64 v78; // rcx
  char v79; // dl
  char v80; // r8
  __int64 v81; // rax
  char v82; // al
  __int64 v83; // r8
  int v84; // eax
  int v85; // ecx
  float v86; // xmm1_4
  bool v87; // al
  int v88; // r9d
  int v89; // r10d
  float v90; // xmm1_4
  int v91; // edx
  int v92; // eax
  const struct CExpressionValue *v93; // rdi
  __int64 v94; // rcx
  KeyframeSequence *v95; // rcx
  char v96; // al
  char v97; // cl
  char v98; // cl
  int v99; // eax
  char v100; // al
  struct CProcessAttribution *(__fastcall *v101)(CResource *__hidden); // rax
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // eax
  int v105; // ecx
  __int64 v106; // rbx
  CPathData *v107; // rcx
  void (*v108)(void); // rax
  CPathData *v109; // rcx
  void (*v110)(void); // rax
  CPathData *v111; // rcx
  void (*v112)(void); // rax
  CPathData *v113; // rcx
  void (*v114)(void); // rax
  CPathData *v115; // rcx
  void (*v116)(void); // rax
  __int64 v117; // rax
  __int64 v118; // rdi
  struct _RTL_GENERIC_TABLE *v119; // rcx
  PVOID v120; // rbx
  _QWORD *v121; // r11
  __int64 v122; // r9
  _QWORD *v123; // r10
  _QWORD *v124; // rcx
  unsigned __int64 v125; // r8
  _QWORD *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  int v129; // eax
  int v130; // ecx
  __int64 v131; // rbx
  CPathData *v132; // rcx
  void (*v133)(void); // rax
  CPathData *v134; // rcx
  void (*v135)(void); // rax
  CPathData *v136; // rcx
  void (*v137)(void); // rax
  CPathData *v138; // rcx
  void (*v139)(void); // rax
  CPathData *v140; // rcx
  void (*v141)(void); // rax
  int v142; // r14d
  int v143; // r9d
  CPathData *v144; // rcx
  void (*v145)(void); // rax
  int v146; // r13d
  int v147; // eax
  const struct CExpressionValue *v148; // rbx
  __int64 v149; // rcx
  KeyframeSequence *v150; // rcx
  int v151; // edi
  char v152; // al
  char v153; // cl
  char v154; // cl
  int v155; // eax
  int v156; // ecx
  __int64 v157; // rcx
  const struct CExpressionValue *v158; // rbx
  int v159; // eax
  __int64 v160; // rax
  int v161; // eax
  int v162; // r14d
  unsigned int v163; // eax
  char v164; // al
  __int64 v165; // rcx
  int v166; // eax
  int v167; // edx
  char v168; // r9
  char v169; // al
  int v170; // eax
  int v171; // edi
  int v172; // r9d
  unsigned int v173; // r10d
  unsigned int i; // r8d
  __int64 v175; // rcx
  int v176; // eax
  int v177; // xmm1_4
  char v178; // dl
  char v179; // cl
  __int64 v180; // r8
  char v181; // al
  __int64 v182; // rbx
  char v183; // al
  char v184; // cl
  unsigned int v185; // ebx
  __int64 v186; // rcx
  unsigned __int64 v187; // r8
  __int64 v188; // rdx
  int v189; // r9d
  int v190; // eax
  int v191; // r12d
  __int64 v192; // rcx
  __m128i v193; // xmm7
  float v194; // xmm7_4
  __int64 *v195; // rax
  __int64 v196; // rcx
  __int64 v197; // rax
  int v198; // eax
  signed int v199; // edx
  __m128i v200; // xmm3
  int v201; // ecx
  __m128d v202; // xmm0
  __int64 v203; // rcx
  int v204; // r10d
  __m128 v205; // xmm1
  unsigned int v206; // r8d
  unsigned int v207; // eax
  float v208; // xmm1_4
  bool v209; // r9
  int v210; // ecx
  int v211; // edx
  float v212; // xmm1_4
  int v213; // eax
  unsigned int v214; // r9d
  char v215; // dl
  int v216; // ecx
  __int64 v217; // r8
  int v218; // eax
  int v219; // edx
  int v220; // ebx
  __int64 v221; // rax
  DWORD CurrentProcessId; // eax
  __int64 v223; // rcx
  int v224; // r8d
  unsigned __int8 v225; // dl
  KeyframeSequence *v226; // rcx
  char v227; // al
  int v228; // eax
  unsigned int v229; // edx
  unsigned int j; // r10d
  int v231; // ecx
  __int64 v232; // rcx
  int v233; // eax
  char v234; // dl
  char v235; // r8
  __int64 v236; // rdx
  char v237; // al
  char v238; // cl
  __int64 v239; // rdx
  int v240; // r9d
  int v241; // eax
  int v242; // r12d
  float v243; // xmm0_4
  int v244; // ecx
  unsigned int v245; // edx
  unsigned int v246; // r11d
  char v247; // al
  KeyframeSequence *v248; // rcx
  char v249; // al
  KeyframeSequence *v250; // rcx
  LONGLONG v251; // rbx
  LONGLONG v252; // rcx
  __int64 v253; // rbx
  int v254; // ecx
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
  int v273; // eax
  int v274; // xmm1_4
  char v275; // dl
  char v276; // cl
  __int64 v277; // r8
  char v278; // al
  char v279; // cl
  __int64 v280; // rax
  int v281; // r11d
  int v282; // ecx
  int v283; // edx
  bool v284; // sf
  int v285; // eax
  unsigned int v286; // edx
  int v287; // r11d
  int v288; // ecx
  unsigned int v289; // edx
  unsigned int v290; // r11d
  __m128 v291; // xmm1
  int v292; // r11d
  float v293; // xmm1_4
  __int64 v294; // rax
  int v295; // eax
  int v296; // ebx
  int v297; // eax
  int v298; // eax
  int v299; // eax
  LONGLONG v300; // rax
  float v301; // xmm0_4
  int v302; // eax
  char v303; // cl
  unsigned int TimePositionWithinIteration; // edx
  int v305; // [rsp+20h] [rbp-E0h]
  int v306; // [rsp+30h] [rbp-D0h]
  float v307; // [rsp+30h] [rbp-D0h]
  float v308; // [rsp+30h] [rbp-D0h]
  float v309; // [rsp+30h] [rbp-D0h]
  bool v310; // [rsp+34h] [rbp-CCh] BYREF
  CKeyframeAnimation *v311; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v312; // [rsp+40h] [rbp-C0h]
  __int64 v313; // [rsp+48h] [rbp-B8h]
  _BYTE v314[64]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v315; // [rsp+90h] [rbp-70h] BYREF
  int v316; // [rsp+98h] [rbp-68h]
  _OWORD Buffer[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v318; // [rsp+C0h] [rbp-40h]
  __int128 v319; // [rsp+D0h] [rbp-30h]
  CPathData *v320; // [rsp+E0h] [rbp-20h]
  int v321; // [rsp+E8h] [rbp-18h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v5 = g_pComposition;
  v6 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *a4 = 0;
  v311 = this;
  v8 = a2;
  v312 = 0xCBF29CE484222325uLL;
  v313 = 0x100000001B3LL;
  if ( !*((_DWORD *)v5 + 1615) )
  {
    if ( (*((_BYTE *)this + 537) & 0x10) == 0 )
      goto LABEL_104;
    if ( *((int *)this + 125) >= 0 )
    {
      v4 = (__m128i)*((unsigned int *)this + 121);
      if ( *(float *)v4.m128i_i32 != 1.0 )
      {
        v117 = *((_QWORD *)this + 3);
        *((_BYTE *)this + 536) |= 4u;
        *((_DWORD *)this + 121) = 1065353216;
        v118 = *(_QWORD *)(v117 + 888);
        if ( v118 == *(_QWORD *)(v117 + 896) )
        {
          v280 = v118 + 1;
          v118 = 1LL;
          if ( v280 )
            v118 = v280;
        }
        v119 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
        v120 = 0LL;
        if ( v119 )
        {
          v4 = 0LL;
          LODWORD(v318) = 0;
          memset((char *)Buffer + 8, 0, 24);
          LODWORD(Buffer[0]) = 32;
          v120 = RtlLookupElementGenericTable(v119, Buffer);
          DynArrayImpl<0>::~DynArrayImpl<0>((char *)Buffer + 8);
        }
        a2 = (unsigned __int64)v120 + 8;
        if ( !v120 )
          a2 = 0LL;
        if ( a2 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 24); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8 * v175) + 232LL) = v118 )
            v175 = i++;
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
          CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0LL, 8LL);
        }
      }
      *((_BYTE *)this + 536) &= ~2u;
    }
    v121 = *(_QWORD **)(*((_QWORD *)this + 3) + 824LL);
    v122 = v121[68];
    v123 = (_QWORD *)v121[66];
    v124 = *(_QWORD **)(v122
                      + 16
                      * ((0x100000001B3LL
                        * (HIBYTE(v311) ^ (0x100000001B3LL
                                         * (BYTE6(v311) ^ (0x100000001B3LL
                                                         * (BYTE5(v311) ^ (0x100000001B3LL
                                                                         * (BYTE4(v311) ^ (0x100000001B3LL
                                                                                         * (BYTE3(v311) ^ (0x100000001B3LL * (BYTE2(v311) ^ (0x100000001B3LL * (BYTE1(v311) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71])
                      + 8);
    if ( v124 == v123 )
    {
LABEL_170:
      v124 = 0LL;
    }
    else
    {
      a2 = *(_QWORD *)(v122
                     + 16
                     * ((0x100000001B3LL
                       * (HIBYTE(v311) ^ (0x100000001B3LL
                                        * (BYTE6(v311) ^ (0x100000001B3LL
                                                        * (BYTE5(v311) ^ (0x100000001B3LL
                                                                        * (BYTE4(v311) ^ (0x100000001B3LL
                                                                                        * (BYTE3(v311) ^ (0x100000001B3LL * (BYTE2(v311) ^ (0x100000001B3LL * (BYTE1(v311) ^ (0x100000001B3LL * ((unsigned __int8)this ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71]));
      while ( this != (CKeyframeAnimation *)v124[2] )
      {
        if ( v124 == (_QWORD *)a2 )
          goto LABEL_170;
        v124 = (_QWORD *)v124[1];
      }
    }
    if ( v124 && v124 != v123 )
    {
      v125 = 2
           * ((0x100000001B3LL
             * (*((unsigned __int8 *)v124 + 23) ^ (0x100000001B3LL
                                                 * (*((unsigned __int8 *)v124 + 22) ^ (0x100000001B3LL
                                                                                     * (*((unsigned __int8 *)v124 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71]);
      v126 = *(_QWORD **)(v122
                        + 16
                        * ((0x100000001B3LL
                          * (*((unsigned __int8 *)v124 + 23) ^ (0x100000001B3LL
                                                              * (*((unsigned __int8 *)v124 + 22) ^ (0x100000001B3LL
                                                                                                  * (*((unsigned __int8 *)v124 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71]));
      if ( *(_QWORD **)(v122
                      + 16
                      * ((0x100000001B3LL
                        * (*((unsigned __int8 *)v124 + 23) ^ (0x100000001B3LL
                                                            * (*((unsigned __int8 *)v124 + 22) ^ (0x100000001B3LL
                                                                                                * (*((unsigned __int8 *)v124 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71])
                      + 8) == v124 )
      {
        if ( v126 == v124 )
          *(_QWORD *)(v122
                    + 16
                    * ((0x100000001B3LL
                      * (*((unsigned __int8 *)v124 + 23) ^ (0x100000001B3LL
                                                          * (*((unsigned __int8 *)v124 + 22) ^ (0x100000001B3LL
                                                                                              * (*((unsigned __int8 *)v124
                                                                                                 + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71])) = v123;
        else
          v123 = (_QWORD *)v124[1];
        *(_QWORD *)(v122 + 8 * v125 + 8) = v123;
      }
      else if ( v126 == v124 )
      {
        *(_QWORD *)(v122
                  + 16
                  * ((0x100000001B3LL
                    * (*((unsigned __int8 *)v124 + 23) ^ (0x100000001B3LL
                                                        * (*((unsigned __int8 *)v124 + 22) ^ (0x100000001B3LL
                                                                                            * (*((unsigned __int8 *)v124
                                                                                               + 21) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 20) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 19) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 18) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)v124 + 16) ^ 0xCBF29CE484222325uLL)))))))))))))))) & v121[71])) = *v124;
      }
      v127 = *v124;
      --v121[67];
      *(_QWORD *)v124[1] = v127;
      *(_QWORD *)(v127 + 8) = v124[1];
      operator delete(v124, 0x18uLL);
    }
  }
  v10 = *((_DWORD *)this + 130);
  v11 = *((_DWORD *)this + 129);
  v12 = 2147549183LL;
  v13 = 84;
  if ( v10 != v11 )
  {
    if ( v11 )
    {
      if ( !v10 )
      {
        if ( !CBaseExpression::ResolveTargetNoRef(this) )
          goto LABEL_221;
        v146 = *(_DWORD *)(v8 + 8);
        if ( (*((_BYTE *)this + 537) & 1) == 0 )
          goto LABEL_210;
        v147 = *((_DWORD *)this + 133);
        if ( v147 == 1 )
        {
          *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
          CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
          KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 44));
          *(_DWORD *)(v232 + 92) = 0;
        }
        else if ( v147 == 2 )
        {
          *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
          *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
          if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v292 = (int)*(float *)v4.m128i_i32;
            v293 = *(float *)v4.m128i_i32;
            v4 = (__m128i)LODWORD(FLOAT_N0_5);
            *(float *)&a3 = (float)v292 - v293;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          }
          else
          {
            *(double *)v4.m128i_i64 = *(float *)v4.m128i_i32 + 6291456.25;
          }
          v288 = *((_DWORD *)this + 125);
          v289 = 0;
          if ( v288 >= 1 )
            v289 = v288 - 1;
          CKeyframeAnimation::PrepareSequenceForIteration(this, v289);
          KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 44), v290);
        }
        KeyframeSequence::Calculate(*((KeyframeSequence **)this + 44), (struct CExpressionValueStack *)v8);
        v148 = (const struct CExpressionValue *)*((_QWORD *)this + 44);
        if ( (unsigned int)~*(_DWORD *)(v8 + 8) < 5 )
        {
          v242 = -2147418113;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            -2147418113,
            0x54u,
            0LL);
          v151 = -2147418113;
        }
        else
        {
          if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(v8 + 8) )
            goto LABEL_208;
          memset_0(v314, 0, sizeof(v314));
          v315 = 0LL;
          v316 = 0;
          v241 = DynArray<CExpressionValue,1>::AddAndSet(v8 + 16, v239, (__int64)v314, v240);
          v242 = v241;
          v151 = v241;
          if ( v241 >= 0 )
          {
            Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v315);
LABEL_208:
            v149 = *(unsigned int *)(v8 + 8);
            *(_DWORD *)(v8 + 8) = v149 + 1;
            CExpressionValue::CopyFrom((CExpressionValue *)(*(_QWORD *)(v8 + 16) + 80 * v149), v148);
            v150 = (KeyframeSequence *)*((_QWORD *)this + 44);
            if ( (*((_BYTE *)v150 + 140) & 1) != 0 )
              KeyframeSequence::Stop(v150);
LABEL_210:
            v151 = 0;
            goto LABEL_211;
          }
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v241,
            0x5Du,
            0LL);
          Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v315);
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v242,
          0x16Fu,
          0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v242, 0x981u, 0LL);
LABEL_211:
        v152 = *((_BYTE *)this + 537);
        v153 = *((_BYTE *)this + 536);
        *((_DWORD *)this + 111) = 0;
        v154 = v153 & 0x7F;
        *((_BYTE *)this + 536) = v154;
        *((_BYTE *)this + 537) = v152 & 0xF8;
        if ( v151 < 0 || (v154 & 0x20) != 0 )
        {
          v24 = v151;
          if ( v151 < 0 )
          {
            v162 = v151;
            v163 = 867;
            goto LABEL_319;
          }
        }
        else
        {
          v155 = CBaseExpression::NotifyAnimationStopped(this);
          if ( v155 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v155, 0x732u, 0LL);
        }
        v156 = *(_DWORD *)(v8 + 8);
        if ( v156 == v146 + 1 )
        {
          v157 = (unsigned int)(v156 - 1);
          if ( (unsigned int)v157 >= *(_DWORD *)(v8 + 40) )
          {
            memset_0(v314, 0, sizeof(v314));
            v158 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
            v315 = 0LL;
            v316 = 0;
            CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v314);
            Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v315);
          }
          else
          {
            v158 = (const struct CExpressionValue *)(*(_QWORD *)(v8 + 16) + 80 * v157);
          }
          v159 = CBaseExpression::SetOutputValue(this, v158);
          v151 = v159;
          v24 = v159;
          if ( v159 < 0 )
          {
            v162 = v159;
            v163 = 881;
            goto LABEL_319;
          }
          --*(_DWORD *)(v8 + 8);
        }
        v13 = 84;
LABEL_221:
        v160 = *((_QWORD *)this + 51);
        if ( v160 )
        {
          if ( *(_BYTE *)(v160 + 294) )
          {
            v161 = CBaseExpression::NotifyAnimationCompleted(this);
            v151 = v161;
            v24 = v161;
            if ( v161 < 0 )
            {
              v162 = v161;
              v163 = 890;
LABEL_319:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v162, v163, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v151, 0x5F4u, 0LL);
              goto LABEL_14;
            }
          }
        }
        goto LABEL_370;
      }
      a2 = *((unsigned __int8 *)this + 537);
      if ( v10 == 2 )
      {
        if ( (a2 & 1) == 0 )
          goto LABEL_392;
LABEL_390:
        v259 = *((_BYTE *)this + 536);
        if ( v259 < 0 )
        {
          *((_BYTE *)this + 536) = v259 & 0x7F;
          *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) &= ~2u;
        }
        goto LABEL_392;
      }
    }
    else
    {
      a2 = *((unsigned __int8 *)this + 537);
      if ( v10 )
      {
        if ( (a2 & 1) != 0 )
        {
          v249 = *((_BYTE *)this + 536);
          if ( v249 >= 0 && (a2 & 2) == 0 )
          {
            v250 = (KeyframeSequence *)*((_QWORD *)this + 44);
            *((_BYTE *)this + 536) = v249 | 0x80;
            KeyframeSequence::Play(v250);
          }
        }
        else
        {
          v266 = *((_DWORD *)this + 132);
          v267 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          *((_DWORD *)this + 124) = 0;
          if ( !v266 || v266 == 2 )
            v268 = (unsigned __int8)a2 >> 3;
          else
            v268 = 0;
          if ( !*((_DWORD *)this + 125) )
          {
            v4 = (__m128i)*((unsigned int *)this + 127);
            if ( *(float *)v4.m128i_i32 != 1.0 )
              v267 = *((_DWORD *)this + 127);
          }
          *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v268)) & 8;
          v269 = 16;
          v270 = *((_QWORD *)this + 44);
          v271 = *(_BYTE *)(v270 + 140);
          if ( *((float *)this + 120) >= 0.0 )
            v269 = 0;
          *(_BYTE *)(v270 + 96) = *((float *)this + 120) < 0.0;
          *(_BYTE *)(v270 + 140) = v271 & 0xEF | v269;
          *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
          *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v267;
          KeyframeSequence::Play(*((KeyframeSequence **)this + 44));
          v272 = *((_BYTE *)this + 536) | 0x80;
          *((_BYTE *)this + 537) = *((_BYTE *)this + 537) & 0xFC | 1;
          *((_DWORD *)this + 126) = *((_DWORD *)this + 125);
          *((_BYTE *)this + 536) = v272;
          if ( (v272 & 0x20) == 0 )
          {
            if ( *((_DWORD *)this + 57) != 4 )
              *((_DWORD *)this + 57) = 4;
            if ( *((_DWORD *)this + 111) >= *((_DWORD *)this + 110) )
            {
              v297 = CKeyframeAnimation::SampleExpressionsAndStartingValue(this, (struct CExpressionValueStack *)v8);
              if ( v297 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v297, 0x743u, 0LL);
            }
          }
          *((_BYTE *)this + 537) |= 4u;
        }
        v251 = *((_QWORD *)this + 56) - Time::s_luBegin.QuadPart;
        v252 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL)
                                                                                       + 24LL))(
                            *(_QWORD *)(*((_QWORD *)this + 3) + 312LL),
                            a2,
                            v12)
             - v251
             - Time::s_luBegin.QuadPart;
        if ( v252 == 0x7FFFFFFFFFFFFFFFLL )
          LODWORD(v253) = 0x7FFFFFFF;
        else
          v253 = (__int64)(1000000 * v252 / Time::s_luFreq.QuadPart
                         + 500
                         + (((1000000 * v252 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL))
               / 1000;
        if ( (float)(CKeyframeAnimation::GetGlobalPlaybackRate(this) * (float)((float)(int)v253 * *((float *)this + 120))) > 0.0 )
        {
          v254 = 0;
          if ( *((char *)this + 536) < 0 )
          {
            if ( *((_DWORD *)this + 132) == 4 )
            {
              v260 = *((_QWORD *)this + 44);
              v261 = 0LL;
              v262 = *(_DWORD *)(v260 + 112);
              if ( v262 > 0 )
              {
                v261 = 0LL;
                v261.m128_f32[0] = (float)*(int *)(*(_QWORD *)(v260 + 104) + 24LL * (unsigned int)(v262 - 1)) / 1000.0;
              }
              v261.m128_f32[0] = (float)(v261.m128_f32[0] * *((float *)this + 128)) * 1000.0;
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
              a2 = *((unsigned int *)this + 111);
              v255 = *((_DWORD *)this + 110);
              if ( (int)a2 < v255 )
              {
                v256 = v255 - a2;
                if ( v256 <= 0 )
                  v254 = v256;
                v257 = a2 + v254;
                v254 = -v254;
                *((_DWORD *)this + 111) = v257;
              }
              v258 = *((_QWORD *)this + 44);
              if ( (*(_BYTE *)(v258 + 140) & 2) != 0 )
                *(_DWORD *)(v258 + 92) += v254;
            }
          }
        }
        if ( *((_DWORD *)this + 130) == 2 && (*((_BYTE *)this + 537) & 1) != 0 )
        {
          v12 = 2147549183LL;
          goto LABEL_390;
        }
LABEL_370:
        v12 = 2147549183LL;
LABEL_392:
        *((_BYTE *)this + 536) &= ~1u;
        if ( *((_DWORD *)this + 130) == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
          *((_BYTE *)this + 536) |= 1u;
        }
        v11 = *((_DWORD *)this + 130);
        *((_DWORD *)this + 129) = v11;
        goto LABEL_3;
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v247 = *((_BYTE *)this + 536);
      if ( v247 >= 0 && (a2 & 2) == 0 )
      {
        v248 = (KeyframeSequence *)*((_QWORD *)this + 44);
        *((_BYTE *)this + 536) = v247 | 0x80;
        KeyframeSequence::Play(v248);
      }
    }
    else
    {
      v273 = *((_DWORD *)this + 132);
      v274 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      *((_DWORD *)this + 124) = 0;
      if ( !v273 || v273 == 2 )
        v275 = (unsigned __int8)a2 >> 3;
      else
        v275 = 0;
      if ( !*((_DWORD *)this + 125) )
      {
        v4 = (__m128i)*((unsigned int *)this + 127);
        if ( *(float *)v4.m128i_i32 != 1.0 )
          v274 = *((_DWORD *)this + 127);
      }
      *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v275)) & 8;
      v276 = 16;
      v277 = *((_QWORD *)this + 44);
      v278 = *(_BYTE *)(v277 + 140);
      if ( *((float *)this + 120) >= 0.0 )
        v276 = 0;
      *(_BYTE *)(v277 + 96) = *((float *)this + 120) < 0.0;
      *(_BYTE *)(v277 + 140) = v278 & 0xEF | v276;
      *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v274;
      KeyframeSequence::Play(*((KeyframeSequence **)this + 44));
      v279 = *((_BYTE *)this + 536) | 0x80;
      *((_BYTE *)this + 537) = *((_BYTE *)this + 537) & 0xFC | 1;
      *((_DWORD *)this + 126) = *((_DWORD *)this + 125);
      *((_BYTE *)this + 536) = v279;
      if ( (v279 & 0x20) == 0 )
      {
        if ( *((_DWORD *)this + 57) != 4 )
          *((_DWORD *)this + 57) = 4;
        if ( *((_DWORD *)this + 111) >= *((_DWORD *)this + 110) )
        {
          v298 = CKeyframeAnimation::SampleExpressionsAndStartingValue(this, (struct CExpressionValueStack *)v8);
          if ( v298 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v298, 0x743u, 0LL);
        }
      }
      *((_BYTE *)this + 537) |= 4u;
    }
    *((_QWORD *)this + 57) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL)
                                                                          + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                             + 312LL));
    goto LABEL_370;
  }
LABEL_3:
  if ( !v11 )
    goto LABEL_4;
  v31 = *((_BYTE *)this + 536);
  if ( (v31 & 6) == 6 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( (v31 & 2) == 0 )
  {
    if ( (v31 & 4) == 0 )
      goto LABEL_4;
    v32 = *((float *)this + 121);
    if ( v32 >= 0.0 && v32 <= 1.0 )
    {
      if ( (*((_BYTE *)this + 537) & 3) == 1 )
      {
        v33 = *((_QWORD *)this + 44);
        v34 = 0LL;
        v35 = *(_DWORD *)(v33 + 112);
        if ( v35 > 0 )
        {
          v34 = 0LL;
          *(float *)v34.m128i_i32 = (float)*(int *)(*(_QWORD *)(v33 + 104) + 24LL * (unsigned int)(v35 - 1)) / 1000.0;
        }
        *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v34) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v34.m128i_i32 - *(float *)v34.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v36 = (int)*(float *)v34.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v307 = *(float *)v34.m128i_i32 + 6291456.25;
          v36 = (int)(LODWORD(v307) << 10) >> 11;
        }
        v37 = *((_DWORD *)this + 125);
        v38 = 0;
        if ( v37 > 0 )
          v36 *= v37 + 1;
        if ( *((_DWORD *)this + 122) == 1 && *((_DWORD *)this + 110) )
          v38 = *((_DWORD *)this + 110);
        v40 = 0LL;
        v39 = 0LL;
        v40.m128_f32[0] = (float)(v38 + v36) * v32;
        v41 = v40;
        v41.m128_f32[0] = v40.m128_f32[0] - (float)v38;
        if ( v35 > 0 )
        {
          v39 = 0LL;
          *(float *)v39.m128i_i32 = (float)*(int *)(*(_QWORD *)(v33 + 104) + 24LL * (unsigned int)(v35 - 1)) / 1000.0;
        }
        *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * 1000.0;
        if ( (_mm_cvtsi128_si32(v39) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v39.m128i_i32 - *(float *)v39.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v42 = (int)*(float *)v39.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v308 = *(float *)v39.m128i_i32 + 6291456.25;
          v42 = (int)(LODWORD(v308) << 10) >> 11;
        }
        v43 = (__m128i)v41;
        *(float *)v43.m128i_i32 = v41.m128_f32[0] / (float)v42;
        v44 = fmod_0(v41.m128_f32[0], (double)v42);
        if ( v44 == 0.0 )
        {
          v4 = 0LL;
          *(float *)v4.m128i_i32 = fmaxf(0.0, *(float *)v43.m128i_i32 - 1.0);
        }
        else
        {
          v4 = v43;
        }
        v45 = (int)*(float *)v4.m128i_i32;
        *((_DWORD *)this + 124) = (int)*(float *)v4.m128i_i32;
        if ( v37 > 0 )
          *((_DWORD *)this + 126) = v37 - v45;
        v46 = *((_DWORD *)this + 132);
        v47 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        if ( v46 )
        {
          if ( v46 == 2 )
          {
            v48 = *((_BYTE *)this + 537) >> 3;
            if ( (v45 & 1) != 0 )
              v48 = (*((_BYTE *)this + 537) & 8) == 0;
          }
          else
          {
            v48 = 0;
          }
        }
        else
        {
          v48 = *((_BYTE *)this + 537) >> 3;
        }
        if ( v37 >= 0 && v45 == v37 )
        {
          v4 = (__m128i)*((unsigned int *)this + 127);
          if ( *(float *)v4.m128i_i32 != 1.0 )
            v47 = *((_DWORD *)this + 127);
        }
        *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v48)) & 8;
        v49 = 16;
        v50 = *((_QWORD *)this + 44);
        v51 = *(_BYTE *)(v50 + 140);
        if ( *((float *)this + 120) >= 0.0 )
          v49 = 0;
        *(_BYTE *)(v50 + 96) = *((float *)this + 120) < 0.0;
        *(_BYTE *)(v50 + 140) = v51 & 0xEF | v49;
        *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
        *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v47;
        if ( *((_DWORD *)this + 122) == 1 && (v302 = *((_DWORD *)this + 110)) != 0 )
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v302);
          if ( *(float *)v4.m128i_i32 < v40.m128_f32[0] )
          {
            *((_DWORD *)this + 111) = v302;
            TimePositionWithinIteration = (int)CKeyframeAnimation::GetTimePositionWithinIteration(
                                                 this,
                                                 v40.m128_f32[0] - *(float *)v4.m128i_i32);
          }
          else
          {
            v303 = 0;
            TimePositionWithinIteration = 0;
            if ( *((_DWORD *)this + 111) >= v302 )
              v303 = 64;
            *((_BYTE *)this + 536) = *((_BYTE *)this + 536) & 0xBF | v303;
            *((_DWORD *)this + 111) = (int)v40.m128_f32[0];
          }
          KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 44), TimePositionWithinIteration);
        }
        else
        {
          if ( v40.m128_f32[0] == 0.0 )
          {
            v56 = 0.0;
          }
          else
          {
            v52 = *((_QWORD *)this + 44);
            v53 = 0LL;
            v54 = *(_DWORD *)(v52 + 112);
            if ( v54 > 0 )
            {
              v53 = 0LL;
              *(float *)v53.m128i_i32 = (float)*(int *)(*(_QWORD *)(v52 + 104) + 24LL * (unsigned int)(v54 - 1))
                                      / 1000.0;
            }
            *(float *)v53.m128i_i32 = *(float *)v53.m128i_i32 * 1000.0;
            if ( (_mm_cvtsi128_si32(v53) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)*(float *)v53.m128i_i32 - *(float *)v53.m128i_i32;
              v55 = (int)*(float *)v53.m128i_i32
                  - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
            }
            else
            {
              v309 = *(float *)v53.m128i_i32 + 6291456.25;
              v55 = (int)(LODWORD(v309) << 10) >> 11;
            }
            v4 = (__m128i)_mm_cvtps_pd(v40);
            *(double *)v4.m128i_i64 = fmod_0(*(double *)v4.m128i_i64, (double)v55);
            v56 = *(double *)v4.m128i_i64;
            if ( v56 == 0.0 )
              v56 = (float)v55;
          }
          v57 = *((_QWORD *)this + 44);
          v58 = *(float *)(v57 + 136);
          if ( v58 == 1.0 )
          {
            v12 = *(unsigned int *)(v57 + 120);
            v59 = *(_DWORD *)(v57 + 120);
          }
          else
          {
            v59 = *(_DWORD *)(v57 + 120);
            v4 = (__m128i)COERCE_UNSIGNED_INT((float)v59);
            v12 = (unsigned int)(int)(float)(*(float *)v4.m128i_i32 * v58);
          }
          *(_OWORD *)&a3 = *(unsigned int *)(v57 + 132);
          if ( *(float *)&a3 == 0.0 )
          {
            a2 = 0LL;
          }
          else
          {
            v4 = (__m128i)COERCE_UNSIGNED_INT((float)v59);
            a2 = (unsigned int)(int)(float)(*(float *)v4.m128i_i32 * *(float *)&a3);
          }
          *(_BYTE *)(v57 + 96) = (*(_BYTE *)(v57 + 140) & 0x10) != 0;
          *(_DWORD *)(v57 + 80) = a2;
          *(_DWORD *)(v57 + 84) = v12;
          *(_DWORD *)(v57 + 88) = v59;
          *(_DWORD *)(v57 + 92) = a2;
          *(_BYTE *)(v57 + 140) |= 0x20u;
          *(_DWORD *)(v57 + 92) = (int)v56;
          *((_BYTE *)this + 536) |= 0x40u;
        }
      }
      goto LABEL_4;
    }
    v24 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0xA18,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x80070057LL,
      v305);
    v163 = 971;
    v162 = -2147024809;
    goto LABEL_317;
  }
  v192 = *((_QWORD *)this + 59);
  v193 = 0LL;
  if ( v192 < 0 )
  {
    v294 = *((_QWORD *)this + 59) & 1LL | (*((_QWORD *)this + 59) >> 1);
    v194 = (float)(int)v294 + (float)(int)v294;
  }
  else
  {
    v194 = (float)(int)v192;
  }
  *(float *)v193.m128i_i32 = v194 / 10000000.0;
  v195 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 3)
                                                                                               + 312LL)
                                                                                 + 24LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 312LL),
                      a2,
                      2147549183LL);
  v196 = *((_QWORD *)this + 58);
  v197 = *v195;
  if ( v196 != v197 )
  {
    v300 = (unsigned __int64)(v197 - v196) / g_qpcFrequency.QuadPart;
    v4 = 0LL;
    if ( v300 < 0 )
      v301 = (float)(v300 & 1 | (unsigned int)((unsigned __int64)v300 >> 1))
           + (float)(v300 & 1 | (unsigned int)((unsigned __int64)v300 >> 1));
    else
      v301 = (float)(int)v300;
    *(float *)v193.m128i_i32 = *(float *)v193.m128i_i32 + v301;
  }
  if ( *(float *)v193.m128i_i32 < 0.0 )
  {
    v24 = -2147024809;
    v162 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9C4u, 0LL);
    v163 = 963;
LABEL_317:
    v151 = -2147024809;
    goto LABEL_319;
  }
  if ( (*((_BYTE *)this + 537) & 3) == 1 )
  {
    v198 = *((_DWORD *)this + 110);
    if ( v198 > 0 )
    {
      v4 = v193;
      *(float *)v4.m128i_i32 = *(float *)v193.m128i_i32 * 1000.0;
      if ( (float)(*(float *)v193.m128i_i32 * 1000.0) > (float)v198 )
      {
        *((_DWORD *)this + 111) = v198;
        *(float *)v193.m128i_i32 = *(float *)v193.m128i_i32 - (float)((float)v198 / 1000.0);
      }
      else
      {
        v193 = 0LL;
        *((_DWORD *)this + 111) = (int)*(float *)v4.m128i_i32;
      }
    }
    *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this);
    v199 = *((_DWORD *)this + 125);
    v200 = v4;
    v201 = (int)(float)(*(float *)v193.m128i_i32 / *(float *)v4.m128i_i32);
    if ( v199 >= 0 && (*((_DWORD *)this + 124) = v201, *((_DWORD *)this + 126) = v199 - v201, v199 - v201 < 0) )
    {
      *((_DWORD *)this + 126) = 0;
    }
    else
    {
      v199 = (int)(float)(*(float *)v193.m128i_i32 / *(float *)v4.m128i_i32);
      v200 = v193;
      *(float *)v200.m128i_i32 = *(float *)v193.m128i_i32 - (float)((float)v201 * *(float *)v4.m128i_i32);
    }
    *((_DWORD *)this + 124) = v199;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v199);
    *(float *)v200.m128i_i32 = *(float *)v200.m128i_i32 * 1000.0;
    if ( (_mm_cvtsi128_si32(v200) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v4 = (__m128i)LODWORD(FLOAT_N0_5);
      *(float *)&a3 = (float)(int)*(float *)v200.m128i_i32 - *(float *)v200.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    }
    else
    {
      v202 = 0LL;
      v202.m128d_f64[0] = *(float *)v200.m128i_i32 + 6291456.25;
      v4 = (__m128i)_mm_cvtpd_ps(v202);
    }
    KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 44));
    *(_DWORD *)(v203 + 92) = v204;
  }
  *((_QWORD *)this + 57) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL)
                                                                        + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                           + 312LL));
LABEL_4:
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(*((_QWORD *)this + 3)
                                                                                             + 312LL)
                                                                               + 24LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 312LL),
                    a2,
                    v12);
  v15 = *((_QWORD *)this + 57) - Time::s_luBegin.QuadPart;
  v16 = *(_DWORD *)(v8 + 8);
  v17 = *v14 - Time::s_luBegin.QuadPart;
  v306 = v16;
  if ( v17 - v15 < 0 )
    goto LABEL_12;
  if ( (*((_BYTE *)this + 537) & 1) == 0 )
  {
    if ( !CExpressionValue::HasValue((CKeyframeAnimation *)((char *)this + 80)) )
      goto LABEL_104;
    v320 = 0LL;
    v321 = 0;
    memset(Buffer, 0, sizeof(Buffer));
    v318 = 0LL;
    v319 = 0LL;
    CExpressionValue::CopyFrom((CExpressionValue *)Buffer, v18);
    if ( (unsigned int)~*(_DWORD *)(v8 + 8) < 5 )
    {
      v142 = -2147418113;
      v24 = -2147418113;
      v143 = -2147418113;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(v8 + 8) )
      {
LABEL_9:
        v20 = *(unsigned int *)(v8 + 8);
        *(_DWORD *)(v8 + 8) = v20 + 1;
        CExpressionValue::CopyFrom(
          (CExpressionValue *)(*(_QWORD *)(v8 + 16) + 80 * v20),
          (const struct CExpressionValue *)Buffer);
        v21 = v320;
        if ( v320 )
        {
          v320 = 0LL;
          v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
          if ( (char *)v22 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v21);
          else
            v22();
        }
        goto LABEL_12;
      }
      v104 = DynArrayImpl<1>::Grow(v8 + 16, 0x50u, 5, v19, 0LL);
      v24 = v104;
      if ( v104 >= 0 )
      {
        v105 = *(_DWORD *)(v8 + 40);
        v106 = *(_QWORD *)(v8 + 16) + (unsigned int)(80 * v105);
        *(_DWORD *)(v8 + 40) = v105 + 5;
        *(_OWORD *)v106 = 0LL;
        *(_OWORD *)(v106 + 16) = 0LL;
        *(_OWORD *)(v106 + 32) = 0LL;
        *(_OWORD *)(v106 + 48) = 0LL;
        v107 = *(CPathData **)(v106 + 64);
        if ( v107 )
        {
          *(_QWORD *)(v106 + 64) = 0LL;
          v108 = *(void (**)(void))(*(_QWORD *)v107 + 16LL);
          if ( (char *)v108 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v107);
          else
            v108();
        }
        *(_DWORD *)(v106 + 72) = 0;
        *(_OWORD *)(v106 + 80) = 0LL;
        *(_OWORD *)(v106 + 96) = 0LL;
        *(_OWORD *)(v106 + 112) = 0LL;
        *(_OWORD *)(v106 + 128) = 0LL;
        v109 = *(CPathData **)(v106 + 144);
        if ( v109 )
        {
          *(_QWORD *)(v106 + 144) = 0LL;
          v110 = *(void (**)(void))(*(_QWORD *)v109 + 16LL);
          if ( (char *)v110 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v109);
          else
            v110();
        }
        *(_DWORD *)(v106 + 152) = 0;
        *(_OWORD *)(v106 + 160) = 0LL;
        *(_OWORD *)(v106 + 176) = 0LL;
        *(_OWORD *)(v106 + 192) = 0LL;
        *(_OWORD *)(v106 + 208) = 0LL;
        v111 = *(CPathData **)(v106 + 224);
        if ( v111 )
        {
          *(_QWORD *)(v106 + 224) = 0LL;
          v112 = *(void (**)(void))(*(_QWORD *)v111 + 16LL);
          if ( (char *)v112 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v111);
          else
            v112();
        }
        *(_DWORD *)(v106 + 232) = 0;
        *(_OWORD *)(v106 + 240) = 0LL;
        *(_OWORD *)(v106 + 256) = 0LL;
        *(_OWORD *)(v106 + 272) = 0LL;
        *(_OWORD *)(v106 + 288) = 0LL;
        v113 = *(CPathData **)(v106 + 304);
        if ( v113 )
        {
          *(_QWORD *)(v106 + 304) = 0LL;
          v114 = *(void (**)(void))(*(_QWORD *)v113 + 16LL);
          if ( (char *)v114 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v113);
          else
            v114();
        }
        *(_DWORD *)(v106 + 312) = 0;
        *(_OWORD *)(v106 + 320) = 0LL;
        *(_OWORD *)(v106 + 336) = 0LL;
        *(_OWORD *)(v106 + 352) = 0LL;
        *(_OWORD *)(v106 + 368) = 0LL;
        v115 = *(CPathData **)(v106 + 384);
        if ( v115 )
        {
          *(_QWORD *)(v106 + 384) = 0LL;
          v116 = *(void (**)(void))(*(_QWORD *)v115 + 16LL);
          if ( (char *)v116 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
            CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v115);
          else
            v116();
        }
        *(_DWORD *)(v106 + 392) = 0;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v104, 0x191u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xE5u, 0LL);
      v142 = v24;
      v143 = v24;
      v13 = 93;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v143,
      v13,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v142,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v142, 0x687u, 0LL);
    v144 = v320;
    if ( v320 )
    {
      v320 = 0LL;
      v145 = *(void (**)(void))(*(_QWORD *)v144 + 16LL);
      if ( (char *)v145 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v144);
      else
        v145();
    }
    goto LABEL_14;
  }
  if ( *((_DWORD *)this + 129) != 2 )
  {
    v101 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 160LL);
    if ( v101 == CResource::GetProcessAttributionNoRef )
    {
      v102 = *((_QWORD *)this + 7);
      if ( !v102 )
        goto LABEL_16;
      v103 = *(_QWORD *)(v102 + 64);
    }
    else
    {
      v103 = (__int64)v101(this);
    }
    if ( v103 )
      ++*(_DWORD *)(v103 + 40);
  }
LABEL_16:
  v26 = *((_BYTE *)this + 536);
  v27 = *((_DWORD *)this + 129);
  if ( (v26 & 6) != 0 || !CExpressionValue::HasValue((CKeyframeAnimation *)((char *)this + 80)) )
  {
    if ( v27 != 2 )
      goto LABEL_68;
    v28 = *((_BYTE *)this + 537);
    if ( (v28 & 1) == 0 )
    {
      v176 = *((_DWORD *)this + 132);
      *((_DWORD *)this + 124) = 0;
      v177 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      if ( !v176 || v176 == 2 )
        v178 = v28 >> 3;
      else
        v178 = 0;
      if ( !*((_DWORD *)this + 125) )
      {
        v4 = (__m128i)*((unsigned int *)this + 127);
        if ( *(float *)v4.m128i_i32 != 1.0 )
          v177 = *((_DWORD *)this + 127);
      }
      *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v178)) & 8;
      v179 = 16;
      v180 = *((_QWORD *)this + 44);
      v181 = *(_BYTE *)(v180 + 140);
      if ( *((float *)this + 120) >= 0.0 )
        v179 = 0;
      *(_BYTE *)(v180 + 96) = *((float *)this + 120) < 0.0;
      *(_BYTE *)(v180 + 140) = v181 & 0xEF | v179;
      *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v177;
      v182 = *((_QWORD *)this + 44);
      v183 = *(_BYTE *)(v182 + 140);
      if ( (v183 & 1) == 0 )
      {
        KeyframeSequence::SortKeyFrames(*((KeyframeSequence **)this + 44));
        KeyframeSequence::ConfigureTimer((KeyframeSequence *)v182);
        v229 = *(_DWORD *)(v182 + 112);
        for ( j = 0; j < v229; ++j )
        {
          v231 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v182 + 104) + 24LL * j + 8) + 20LL);
          if ( v231 != 1 && (unsigned int)(v231 - 2) >= 2 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
        }
        v183 = *(_BYTE *)(v182 + 140) | 1;
        *(_BYTE *)(v182 + 140) = v183;
      }
      *(_BYTE *)(v182 + 140) = v183 | 2;
      v184 = *((_BYTE *)this + 536) | 0x80;
      *((_BYTE *)this + 537) = *((_BYTE *)this + 537) & 0xFC | 1;
      *((_DWORD *)this + 126) = *((_DWORD *)this + 125);
      *((_BYTE *)this + 536) = v184;
      if ( (v184 & 0x20) == 0 )
      {
        if ( *((_DWORD *)this + 57) != 4 )
          *((_DWORD *)this + 57) = 4;
        if ( *((_DWORD *)this + 111) >= *((_DWORD *)this + 110) && (v184 & 8) == 0 )
        {
          CKeyframeAnimation::ProcessExpressionKeyFrames(this, (struct CExpressionValueStack *)v8);
          if ( (*((_BYTE *)this + 537) & 0x20) != 0 )
          {
            v295 = CKeyframeAnimation::SampleStartingValue(this);
            v296 = v295;
            if ( v295 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v295, 0x8C3u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v296, 0x743u, 0LL);
              *((_BYTE *)this + 537) |= 4u;
              *((_BYTE *)this + 536) |= 0x20u;
              goto LABEL_85;
            }
          }
          *((_BYTE *)this + 536) |= 8u;
        }
      }
      *((_BYTE *)this + 537) |= 4u;
      *((_BYTE *)this + 536) |= 0x20u;
      goto LABEL_85;
    }
    if ( v26 >= 0 && (v28 & 2) == 0 )
    {
      v29 = *((_QWORD *)this + 44);
      *((_BYTE *)this + 536) = v26 | 0x80;
      v30 = *(_BYTE *)(v29 + 140);
      if ( (v30 & 1) == 0 )
      {
        if ( (v30 & 4) != 0 )
        {
          qsort(*(void **)(v29 + 104), *(unsigned int *)(v29 + 112), 0x18uLL, KeyframeSequence::CompareKeyframes);
          v206 = 0;
          v207 = *(_DWORD *)(v29 + 112);
          v30 = *(_BYTE *)(v29 + 140) & 0xFB;
          *(_BYTE *)(v29 + 140) = v30;
          *(_DWORD *)(v29 + 120) = 0;
          if ( v207 >= 2 )
            *(_DWORD *)(v29 + 120) = *(_DWORD *)(*(_QWORD *)(v29 + 104) + 24LL * (v207 - 1)) - **(_DWORD **)(v29 + 104);
        }
        else
        {
          v206 = 0;
        }
        v208 = *(float *)(v29 + 136);
        v209 = (v30 & 0x10) != 0;
        if ( v208 == 1.0 )
        {
          v210 = *(_DWORD *)(v29 + 120);
          v211 = v210;
        }
        else
        {
          v211 = *(_DWORD *)(v29 + 120);
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v211);
          v210 = (int)(float)(*(float *)v4.m128i_i32 * v208);
        }
        v212 = *(float *)(v29 + 132);
        if ( v212 == 0.0 )
        {
          v213 = 0;
        }
        else
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v211);
          v213 = (int)(float)(*(float *)v4.m128i_i32 * v212);
        }
        *(_DWORD *)(v29 + 88) = v211;
        *(_DWORD *)(v29 + 80) = v213;
        *(_DWORD *)(v29 + 84) = v210;
        *(_BYTE *)(v29 + 96) = v209;
        *(_DWORD *)(v29 + 92) = v213;
        v214 = *(_DWORD *)(v29 + 112);
        v215 = *(_BYTE *)(v29 + 140) | 0x20;
        *(_BYTE *)(v29 + 140) = v215;
        if ( v214 )
        {
          do
          {
            v216 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 104) + 24LL * v206 + 8) + 20LL);
            if ( v216 != 1 && (unsigned int)(v216 - 2) >= 2 )
              ModuleFailFastForHRESULT(-2147418113, retaddr);
            ++v206;
          }
          while ( v206 < v214 );
        }
        *(_BYTE *)(v29 + 140) = v215 | 3;
        *((_BYTE *)this + 536) |= 0x20u;
        goto LABEL_85;
      }
      *(_BYTE *)(v29 + 140) = v30 | 2;
    }
    *((_BYTE *)this + 536) |= 0x20u;
  }
  else if ( v27 != 2 )
  {
LABEL_68:
    v60 = v17 - v15;
    if ( v60 == 0x7FFFFFFFFFFFFFFFLL )
      LODWORD(v61) = 0x7FFFFFFF;
    else
      v61 = (__int64)(1000000 * v60 / Time::s_luFreq.QuadPart
                    + 500
                    + (((1000000 * v60 / Time::s_luFreq.QuadPart) >> 63) & 0xFFFFFFFFFFFFFC18uLL))
          / 1000;
    v62 = *((_QWORD *)this + 7);
    v63 = *(_QWORD **)(*((_QWORD *)this + 3) + 824LL);
    if ( !v62 )
      goto LABEL_114;
    v64 = v63[60];
    v65 = *(_QWORD **)(v64
                     + 16
                     * ((0x100000001B3LL
                       * (HIBYTE(v62) ^ (0x100000001B3LL
                                       * (BYTE6(v62) ^ (0x100000001B3LL
                                                      * (BYTE5(v62) ^ (0x100000001B3LL
                                                                     * (BYTE4(v62) ^ (0x100000001B3LL
                                                                                    * (BYTE3(v62) ^ (0x100000001B3LL * (BYTE2(v62) ^ (0x100000001B3LL * (BYTE1(v62) ^ (v313 * (v312 ^ (unsigned __int8)v62)))))))))))))))) & v63[63])
                     + 8);
    if ( v65 == (_QWORD *)v63[58] )
    {
LABEL_72:
      v65 = 0LL;
    }
    else
    {
      while ( v62 != v65[2] )
      {
        if ( v65 == *(_QWORD **)(v64
                               + 16
                               * ((0x100000001B3LL
                                 * (HIBYTE(v62) ^ (0x100000001B3LL
                                                 * (BYTE6(v62) ^ (0x100000001B3LL
                                                                * (BYTE5(v62) ^ (0x100000001B3LL
                                                                               * (BYTE4(v62) ^ (0x100000001B3LL
                                                                                              * (BYTE3(v62) ^ (0x100000001B3LL * (BYTE2(v62) ^ (0x100000001B3LL * (BYTE1(v62) ^ (v313 * (v312 ^ (unsigned __int8)v62)))))))))))))))) & v63[63])) )
          goto LABEL_72;
        v65 = (_QWORD *)v65[1];
      }
    }
    if ( v65 && v65 != (_QWORD *)v63[58] )
      v66 = *(float *)(v65[3] + 72LL);
    else
LABEL_114:
      v66 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v4 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v61);
    v67 = (int)(float)((float)(*(float *)v4.m128i_i32 * *((float *)this + 120)) * v66);
    if ( *((char *)this + 536) < 0 )
    {
      if ( *((_DWORD *)this + 132) == 4 )
      {
        v83 = *((_QWORD *)this + 44);
        v4 = 0LL;
        v84 = *(_DWORD *)(v83 + 112);
        if ( v84 > 0 )
        {
          v4 = 0LL;
          *(float *)v4.m128i_i32 = (float)*(int *)(*(_QWORD *)(v83 + 104) + 24LL * (unsigned int)(v84 - 1)) / 1000.0;
        }
        *(float *)v4.m128i_i32 = (float)(*(float *)v4.m128i_i32 * *((float *)this + 128)) * 1000.0;
        if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v4.m128i_i32 - *(float *)v4.m128i_i32;
          v205.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v205);
          v85 = (int)*(float *)v4.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          *(double *)v4.m128i_i64 = *(float *)v4.m128i_i32 + 6291456.25;
          *(float *)v4.m128i_i32 = *(double *)v4.m128i_i64;
          LODWORD(v311) = v4.m128i_i32[0];
          v85 = v4.m128i_i32[0] << 10 >> 11;
        }
        v86 = *(float *)(v83 + 136);
        v87 = (*(_BYTE *)(v83 + 140) & 0x10) != 0;
        if ( v86 == 1.0 )
        {
          v88 = *(_DWORD *)(v83 + 120);
          v89 = v88;
        }
        else
        {
          v89 = *(_DWORD *)(v83 + 120);
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v89);
          v88 = (int)(float)(*(float *)v4.m128i_i32 * v86);
        }
        v90 = *(float *)(v83 + 132);
        if ( v90 == 0.0 )
        {
          v91 = 0;
        }
        else
        {
          v4 = (__m128i)COERCE_UNSIGNED_INT((float)v89);
          v91 = (int)(float)(*(float *)v4.m128i_i32 * v90);
        }
        *(_DWORD *)(v83 + 80) = v91;
        *(_DWORD *)(v83 + 84) = v88;
        *(_DWORD *)(v83 + 88) = v89;
        *(_BYTE *)(v83 + 96) = v87;
        *(_DWORD *)(v83 + 92) = v91;
        *(_BYTE *)(v83 + 140) |= 0x20u;
        *(_DWORD *)(v83 + 92) = v85;
      }
      else
      {
        v68 = *((_DWORD *)this + 111);
        v69 = *((_DWORD *)this + 110);
        if ( v68 < v69 )
        {
          v70 = v69 - v68;
          if ( v67 < v70 )
            v70 = (int)(float)((float)(*(float *)v4.m128i_i32 * *((float *)this + 120)) * v66);
          *((_DWORD *)this + 111) = v70 + v68;
          v67 -= v70;
        }
        v71 = *((_QWORD *)this + 44);
        if ( (*(_BYTE *)(v71 + 140) & 2) != 0 )
          *(_DWORD *)(v71 + 92) += v67;
      }
    }
    v16 = v306;
  }
LABEL_85:
  v72 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 312LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 312LL));
  v73 = (*((_BYTE *)this + 537) & 1) == 0;
  *((_QWORD *)this + 57) = *v72;
  if ( !v73 && *((_DWORD *)this + 111) < *((_DWORD *)this + 110) )
  {
    v74 = *((_BYTE *)this + 536);
    if ( (v74 & 0x40) == 0 && (*((_DWORD *)this + 131) != 1 || (v74 & 0x10) != 0) )
      goto LABEL_96;
  }
  v75 = *((_BYTE *)this + 536);
  if ( (v75 & 8) == 0 )
  {
    v185 = 0;
    if ( *((_DWORD *)this + 96) )
    {
      do
      {
        v186 = *((_QWORD *)this + 45);
        v187 = *((_QWORD *)this + 22);
        v310 = 0;
        CBaseExpression::CalculateValue(
          *(CBaseExpression **)(v186 + 8LL * v185++),
          (struct CExpressionValueStack *)v8,
          v187,
          &v310);
      }
      while ( v185 < *((_DWORD *)this + 96) );
      v75 = *((_BYTE *)this + 536);
    }
    if ( (*((_BYTE *)this + 537) & 0x20) != 0 )
    {
      v228 = CKeyframeAnimation::SampleStartingValue(this);
      v24 = v228;
      if ( v228 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v228, 0x8C3u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x633u, 0LL);
        goto LABEL_14;
      }
      v75 = *((_BYTE *)this + 536);
    }
    v75 |= 8u;
    *((_BYTE *)this + 536) = v75;
  }
  if ( v75 >= 0 )
    goto LABEL_92;
  if ( *((int *)this + 125) < 0 )
  {
    v217 = *((_QWORD *)this + 44);
    v218 = *(_DWORD *)(v217 + 112);
    if ( v218 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
      {
        v219 = 3 * (v218 - 1);
        v220 = *(_DWORD *)(*(_QWORD *)(v217 + 104) + 24LL * (unsigned int)(v218 - 1));
        v221 = *((_QWORD *)this + 7);
        if ( v221 )
          CurrentProcessId = *(_DWORD *)(v221 + 28);
        else
          CurrentProcessId = GetCurrentProcessId();
        v223 = *((_QWORD *)this + 7);
        if ( v223 )
          v224 = *(_DWORD *)(v223 + 24);
        else
          v224 = 0;
        McTemplateU0qqpq_EventWriteTransfer(v223, v219, v224, CurrentProcessId, (char)this, v220);
      }
    }
  }
  v164 = *((_BYTE *)this + 537);
  if ( (v164 & 4) != 0 )
    *((_BYTE *)this + 537) = v164 & 0xFB;
  KeyframeSequence::Calculate(*((KeyframeSequence **)this + 44), (struct CExpressionValueStack *)v8);
  v165 = *((_QWORD *)this + 44);
  if ( (*(_BYTE *)(v165 + 140) & 3) != 1 )
    goto LABEL_92;
  v166 = *(_DWORD *)(v165 + 92);
  v167 = *(_DWORD *)(v165 + 80);
  if ( *(_BYTE *)(v165 + 96) )
  {
    if ( v166 > v167 && v166 <= *(_DWORD *)(v165 + 84) )
      goto LABEL_92;
  }
  else if ( v166 >= v167 && v166 < *(_DWORD *)(v165 + 84) )
  {
    goto LABEL_92;
  }
  if ( *((_DWORD *)this + 132) == 4 )
    goto LABEL_92;
  v168 = *((_BYTE *)this + 537) | 4;
  v73 = *((_DWORD *)this + 126) == 0;
  *((_BYTE *)this + 537) = v168;
  if ( v73 )
    goto LABEL_234;
  *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
  if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)v4.m128i_i32 - *(float *)v4.m128i_i32;
    v291.m128_f32[0] = -0.5;
    v282 = (int)*(float *)v4.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, v291));
  }
  else
  {
    *(double *)v4.m128i_i64 = *(float *)v4.m128i_i32 + 6291456.25;
    *(float *)v4.m128i_i32 = *(double *)v4.m128i_i64;
    LODWORD(v311) = v4.m128i_i32[0];
    v282 = v4.m128i_i32[0] << 10 >> 11;
  }
  v283 = 0;
  do
  {
    ++v283;
    if ( v281 < 0 )
    {
      v281 += v282;
    }
    else if ( v281 <= v282 )
    {
      v284 = v281 < 0;
      if ( v281 )
        continue;
      if ( *((float *)this + 120) >= 0.0 )
        break;
      v281 = v282;
    }
    else
    {
      v281 -= v282;
    }
    v284 = v281 < 0;
  }
  while ( v284 || v281 > v282 );
  v285 = *((_DWORD *)this + 126);
  if ( v283 > v285 )
  {
    if ( v285 <= 0 )
      goto LABEL_443;
    *((_DWORD *)this + 126) = 0;
    goto LABEL_234;
  }
  *((_DWORD *)this + 126) = v285 - v283;
LABEL_443:
  if ( v283 )
  {
    v286 = *((_DWORD *)this + 124) + v283;
    *((_DWORD *)this + 124) = v286;
    CKeyframeAnimation::PrepareSequenceForIteration(this, v286);
    KeyframeSequence::Repeat(*((KeyframeSequence **)this + 44), v287);
    goto LABEL_92;
  }
LABEL_234:
  v169 = *((_BYTE *)this + 536) & 0x7F;
  *((_BYTE *)this + 537) = v168 | 2;
  *((_BYTE *)this + 536) = v169;
  if ( (v169 & 0x20) == 0 )
  {
    v170 = CBaseExpression::NotifyAnimationCompleted(this);
    v24 = v170;
    if ( v170 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v170, 0x72Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC47u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x636u, 0LL);
      goto LABEL_14;
    }
  }
LABEL_92:
  v76 = (CExpressionValue *)*((_QWORD *)this + 44);
  if ( !CExpressionValue::HasValue(v76) )
    goto LABEL_104;
  if ( (unsigned int)~*(_DWORD *)(v8 + 8) < 5 )
  {
    v171 = -2147418113;
    v24 = -2147418113;
    v172 = -2147418113;
    v173 = 84;
LABEL_239:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v172,
      v173,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v171,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v171, 0x643u, 0LL);
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(v8 + 8) )
    goto LABEL_95;
  v129 = DynArrayImpl<1>::Grow(v8 + 16, 0x50u, 5, v77, 0LL);
  v24 = v129;
  if ( v129 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0x191u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xE5u, 0LL);
    v172 = v24;
    v173 = 93;
    v171 = v24;
    goto LABEL_239;
  }
  v130 = *(_DWORD *)(v8 + 40);
  v131 = *(_QWORD *)(v8 + 16) + (unsigned int)(80 * v130);
  *(_DWORD *)(v8 + 40) = v130 + 5;
  *(_OWORD *)v131 = 0LL;
  *(_OWORD *)(v131 + 16) = 0LL;
  *(_OWORD *)(v131 + 32) = 0LL;
  *(_OWORD *)(v131 + 48) = 0LL;
  v132 = *(CPathData **)(v131 + 64);
  if ( v132 )
  {
    *(_QWORD *)(v131 + 64) = 0LL;
    v133 = *(void (**)(void))(*(_QWORD *)v132 + 16LL);
    if ( (char *)v133 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v132);
    else
      v133();
  }
  *(_DWORD *)(v131 + 72) = 0;
  *(_OWORD *)(v131 + 80) = 0LL;
  *(_OWORD *)(v131 + 96) = 0LL;
  *(_OWORD *)(v131 + 112) = 0LL;
  *(_OWORD *)(v131 + 128) = 0LL;
  v134 = *(CPathData **)(v131 + 144);
  if ( v134 )
  {
    *(_QWORD *)(v131 + 144) = 0LL;
    v135 = *(void (**)(void))(*(_QWORD *)v134 + 16LL);
    if ( (char *)v135 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v134);
    else
      v135();
  }
  *(_DWORD *)(v131 + 152) = 0;
  *(_OWORD *)(v131 + 160) = 0LL;
  *(_OWORD *)(v131 + 176) = 0LL;
  *(_OWORD *)(v131 + 192) = 0LL;
  *(_OWORD *)(v131 + 208) = 0LL;
  v136 = *(CPathData **)(v131 + 224);
  if ( v136 )
  {
    *(_QWORD *)(v131 + 224) = 0LL;
    v137 = *(void (**)(void))(*(_QWORD *)v136 + 16LL);
    if ( (char *)v137 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v136);
    else
      v137();
  }
  *(_DWORD *)(v131 + 232) = 0;
  *(_OWORD *)(v131 + 240) = 0LL;
  *(_OWORD *)(v131 + 256) = 0LL;
  *(_OWORD *)(v131 + 272) = 0LL;
  *(_OWORD *)(v131 + 288) = 0LL;
  v138 = *(CPathData **)(v131 + 304);
  if ( v138 )
  {
    *(_QWORD *)(v131 + 304) = 0LL;
    v139 = *(void (**)(void))(*(_QWORD *)v138 + 16LL);
    if ( (char *)v139 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v138);
    else
      v139();
  }
  *(_DWORD *)(v131 + 312) = 0;
  *(_OWORD *)(v131 + 320) = 0LL;
  *(_OWORD *)(v131 + 336) = 0LL;
  *(_OWORD *)(v131 + 352) = 0LL;
  *(_OWORD *)(v131 + 368) = 0LL;
  v140 = *(CPathData **)(v131 + 384);
  if ( v140 )
  {
    *(_QWORD *)(v131 + 384) = 0LL;
    v141 = *(void (**)(void))(*(_QWORD *)v140 + 16LL);
    if ( (char *)v141 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v140);
    else
      v141();
  }
  *(_DWORD *)(v131 + 392) = 0;
LABEL_95:
  v78 = *(unsigned int *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = v78 + 1;
  CExpressionValue::CopyFrom((CExpressionValue *)(*(_QWORD *)(v8 + 16) + 80 * v78), v76);
LABEL_96:
  v79 = *((_BYTE *)this + 536);
  v80 = v79;
  if ( (((unsigned __int8)v79 >> 5) & *((_BYTE *)this + 537) & 1) != 0 && v79 < 0 )
  {
    v81 = *((_QWORD *)this + 44);
    *((_BYTE *)this + 536) = v79 & 0x7F;
    *(_BYTE *)(v81 + 140) &= ~2u;
    v80 = *((_BYTE *)this + 536);
  }
  v82 = *((_BYTE *)this + 537);
  if ( (v82 & 2) != 0 )
  {
    --*(_DWORD *)(v8 + 8);
    if ( (*((_BYTE *)this + 537) & 1) == 0 )
    {
LABEL_123:
      v24 = 0;
LABEL_124:
      v96 = *((_BYTE *)this + 537);
      v97 = *((_BYTE *)this + 536);
      *((_DWORD *)this + 111) = 0;
      v98 = v97 & 0x7F;
      *((_BYTE *)this + 536) = v98;
      *((_BYTE *)this + 537) = v96 & 0xF8;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x654u, 0LL);
        goto LABEL_14;
      }
      if ( (v98 & 0x20) == 0 )
      {
        v99 = CBaseExpression::NotifyAnimationStopped(this);
        if ( v99 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x732u, 0LL);
      }
      v100 = *((_BYTE *)this + 536) & 0xFE;
      *((_BYTE *)this + 536) = v100;
      if ( (v100 & 0x20) != 0 )
      {
        v225 = *((_BYTE *)this + 537);
        if ( (v225 & 1) != 0 )
        {
          if ( v100 >= 0 && (v225 & 2) == 0 )
          {
            v226 = (KeyframeSequence *)*((_QWORD *)this + 44);
            *((_BYTE *)this + 536) = v100 | 0x80;
            KeyframeSequence::Play(v226);
          }
        }
        else
        {
          v233 = *((_DWORD *)this + 132);
          *((_DWORD *)this + 124) = 0;
          if ( !v233 || v233 == 2 )
            v234 = v225 >> 3;
          else
            v234 = 0;
          if ( !*((_DWORD *)this + 125) && *((float *)this + 127) != 1.0 )
            v6 = *((_DWORD *)this + 127);
          v235 = 16;
          *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^= (*(_BYTE *)(*((_QWORD *)this + 44) + 140LL) ^ (8 * v234)) & 8;
          v236 = *((_QWORD *)this + 44);
          v237 = *(_BYTE *)(v236 + 140);
          if ( *((float *)this + 120) >= 0.0 )
            v235 = 0;
          *(_BYTE *)(v236 + 96) = *((float *)this + 120) < 0.0;
          *(_BYTE *)(v236 + 140) = v237 & 0xEF | v235;
          *(_DWORD *)(*((_QWORD *)this + 44) + 132LL) = 0;
          *(_DWORD *)(*((_QWORD *)this + 44) + 136LL) = v6;
          KeyframeSequence::Play(*((KeyframeSequence **)this + 44));
          v238 = *((_BYTE *)this + 536) | 0x80;
          *((_BYTE *)this + 537) = *((_BYTE *)this + 537) & 0xFC | 1;
          *((_DWORD *)this + 126) = *((_DWORD *)this + 125);
          *((_BYTE *)this + 536) = v238;
          if ( (v238 & 0x20) == 0 )
          {
            if ( *((_DWORD *)this + 57) != 4 )
              *((_DWORD *)this + 57) = 4;
            if ( *((_DWORD *)this + 111) >= *((_DWORD *)this + 110) )
            {
              v299 = CKeyframeAnimation::SampleExpressionsAndStartingValue(this, (struct CExpressionValueStack *)v8);
              if ( v299 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v299, 0x743u, 0LL);
            }
          }
          *((_BYTE *)this + 537) |= 4u;
        }
        if ( (*((_BYTE *)this + 537) & 1) != 0 )
        {
          v227 = *((_BYTE *)this + 536);
          if ( v227 < 0 )
          {
            *((_BYTE *)this + 536) = v227 & 0x7F;
            *(_BYTE *)(*((_QWORD *)this + 44) + 140LL) &= ~2u;
          }
        }
      }
      else
      {
        *(_QWORD *)((char *)this + 516) = 0LL;
      }
      goto LABEL_12;
    }
    v92 = *((_DWORD *)this + 133);
    if ( v92 == 1 )
    {
      *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
      CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
      KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 44));
      *(_DWORD *)(v128 + 92) = 0;
    }
    else if ( v92 == 2 )
    {
      *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
      *(float *)v4.m128i_i32 = CKeyframeAnimation::GetAnimationTimeLength(this) * 1000.0;
      if ( (_mm_cvtsi128_si32(v4) & 0x7FFFFFFFu) <= 0x497FFFF0 )
      {
        v243 = *(float *)v4.m128i_i32 + 6291456.25;
        *(float *)&v311 = v243;
      }
      v244 = *((_DWORD *)this + 125);
      v245 = 0;
      if ( v244 >= 1 )
        v245 = v244 - 1;
      CKeyframeAnimation::PrepareSequenceForIteration(this, v245);
      KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 44), v246);
    }
    KeyframeSequence::Calculate(*((KeyframeSequence **)this + 44), (struct CExpressionValueStack *)v8);
    v93 = (const struct CExpressionValue *)*((_QWORD *)this + 44);
    if ( (unsigned int)~*(_DWORD *)(v8 + 8) < 5 )
    {
      v191 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x54u,
        0LL);
      v24 = -2147418113;
    }
    else
    {
      if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(v8 + 8) )
        goto LABEL_121;
      memset_0(v314, 0, sizeof(v314));
      v315 = 0LL;
      v316 = 0;
      v190 = DynArray<CExpressionValue,1>::AddAndSet(v8 + 16, v188, (__int64)v314, v189);
      v191 = v190;
      v24 = v190;
      if ( v190 >= 0 )
      {
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v315);
LABEL_121:
        v94 = *(unsigned int *)(v8 + 8);
        *(_DWORD *)(v8 + 8) = v94 + 1;
        CExpressionValue::CopyFrom((CExpressionValue *)(*(_QWORD *)(v8 + 16) + 80 * v94), v93);
        v95 = (KeyframeSequence *)*((_QWORD *)this + 44);
        if ( (*((_BYTE *)v95 + 140) & 1) != 0 )
          KeyframeSequence::Stop(v95);
        goto LABEL_123;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v190,
        0x5Du,
        0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v315);
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v191,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v191, 0x981u, 0LL);
    goto LABEL_124;
  }
  if ( (v82 & 1) == 0 || *((_DWORD *)this + 111) >= *((_DWORD *)this + 110) )
  {
LABEL_12:
    v23 = *(_DWORD *)(v8 + 8);
    if ( v23 != v16 + 1 )
    {
      if ( v23 != v16 )
      {
        v24 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x6A4u, 0LL);
        goto LABEL_14;
      }
      goto LABEL_104;
    }
    v24 = 0;
    goto LABEL_14;
  }
  if ( *((_DWORD *)this + 131) == 1 && (v80 & 0x10) == 0 )
  {
    *((_BYTE *)this + 536) = v80 | 0x10;
    goto LABEL_12;
  }
  if ( (v80 & 0x40) != 0 )
    goto LABEL_12;
LABEL_104:
  v24 = 1;
LABEL_14:
  *a4 = *((_BYTE *)this + 536) & 1;
  *((_BYTE *)this + 536) &= 0x99u;
  return (unsigned int)v24;
}
