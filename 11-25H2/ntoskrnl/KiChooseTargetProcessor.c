/*
 * XREFs of KiChooseTargetProcessor @ 0x1404E7040
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140305140 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140318A40 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSelectCandidateProcessor @ 0x14032DF70 (KiSelectCandidateProcessor.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x14032EC90 (KiIsIsolationUnitIdleByHandle.c)
 *     KiSelectProcessorToPreempt @ 0x140330680 (KiSelectProcessorToPreempt.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403E05A0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiQueryDpcRuntimeHistory @ 0x1403F7390 (KiQueryDpcRuntimeHistory.c)
 *     KiSelectIdleProcessor @ 0x1403F74D0 (KiSelectIdleProcessor.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x1403F777C (KiFindRankBiasedIdleSmtSet.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x1404287F0 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     KeKeepData @ 0x14047EE88 (KeKeepData.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall KiChooseTargetProcessor(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r13
  int v26; // edx
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // bx
  unsigned __int16 v32; // cx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdi
  int v36; // eax
  int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rbx
  char RankBiasedIdleSmtSet; // al
  unsigned __int8 v43; // r10
  __int64 v44; // r8
  unsigned __int8 v45; // r9
  __int64 v46; // rdx
  unsigned __int8 v47; // cl
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // cl
  unsigned __int64 v54; // rax
  int v55; // edx
  __int64 v56; // rax
  unsigned __int64 FirstSetRightGroupMask; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r15d
  __int64 v62; // r13
  int v63; // esi
  int v64; // eax
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rbx
  unsigned __int8 v70; // r10
  __int64 v71; // rdx
  unsigned __int8 v72; // r9
  __int64 v73; // r8
  unsigned __int8 v74; // cl
  __int64 v75; // r8
  __int64 v76; // rax
  char v77; // cl
  unsigned __int64 v78; // rax
  int v79; // edx
  __int64 v80; // rax
  unsigned __int16 v81; // ax
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r15
  int v86; // esi
  int v87; // eax
  int v88; // r14d
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // rbx
  unsigned __int8 v94; // r10
  __int64 v95; // rdx
  unsigned __int8 v96; // r9
  __int64 v97; // r8
  unsigned __int8 v98; // cl
  __int64 v99; // r8
  __int64 v100; // rax
  char v101; // cl
  unsigned __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  unsigned __int16 v105; // ax
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int16 v109; // cx
  __int64 v110; // rax
  int v111; // edx
  __int16 v112; // cx
  __int64 v113; // r14
  int v114; // r15d
  int v115; // esi
  int v116; // eax
  unsigned __int64 v117; // rcx
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned __int16 v121; // cx
  __int64 v122; // rax
  __int64 v123; // rdi
  __int64 v124; // r15
  __int64 v125; // r14
  unsigned __int16 v126; // ax
  unsigned __int16 v127; // bx
  unsigned __int16 v128; // cx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rcx
  unsigned __int64 v132; // rdi
  unsigned __int64 v133; // rbx
  __int64 v134; // r11
  unsigned __int8 v135; // r10
  __int64 v136; // r8
  unsigned __int8 v137; // r9
  __int64 v138; // rdx
  unsigned __int8 v139; // cl
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  char v145; // cl
  unsigned __int64 v146; // rax
  int v147; // edx
  __int64 v148; // rax
  unsigned __int16 v149; // bx
  __int64 v150; // rax
  __int64 v151; // r13
  __int64 v152; // rax
  __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int16 i; // cx
  __int64 v157; // rsi
  __int64 v158; // rax
  unsigned __int16 v159; // cx
  unsigned __int64 result; // rax
  _BYTE *v161; // rcx
  unsigned int v162; // edx
  __int64 *v163; // rsi
  __int64 v164; // r14
  __int64 v165; // rdi
  int v166; // ebx
  unsigned __int64 v167; // r9
  __int64 *v168; // r8
  unsigned __int64 v169; // r9
  unsigned __int64 *v170; // r8
  int v171; // edx
  int v172; // r9d
  __int64 v173; // rcx
  unsigned __int64 v174; // r9
  unsigned __int64 *v175; // r8
  int v176; // edx
  __int64 v177; // rax
  __int64 v178; // r15
  unsigned __int8 *v179; // rbx
  __int64 v180; // rsi
  unsigned int v181; // ebx
  int v182; // edx
  char *v183; // rax
  signed int v184; // ecx
  __int64 *v185; // r10
  char v186; // bl
  signed int v187; // r13d
  int v188; // eax
  __int64 *v189; // r11
  int v190; // esi
  unsigned __int64 v191; // rdx
  unsigned __int64 *v192; // r9
  unsigned int v193; // edi
  __int64 v194; // rdx
  __int64 v195; // rcx
  unsigned int v196; // r8d
  unsigned __int64 *v197; // r10
  __int64 v198; // rdx
  __int64 v199; // rcx
  unsigned __int64 *v200; // r8
  int v201; // edx
  unsigned __int64 v202; // r9
  _BYTE *v203; // rax
  unsigned int v204; // ecx
  __int64 *v205; // r14
  __int64 v206; // r15
  __int64 v207; // rsi
  int v208; // edi
  unsigned __int64 *v209; // r8
  unsigned __int64 v210; // r9
  int v211; // edx
  __int64 v212; // rcx
  __int64 v213; // r11
  __int64 v214; // rbx
  int IsIsolationUnitIdleByHandle; // eax
  __int64 v216; // [rsp+30h] [rbp-D0h] BYREF
  int v217; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v218; // [rsp+40h] [rbp-C0h] BYREF
  int v219; // [rsp+48h] [rbp-B8h]
  __int64 v220; // [rsp+50h] [rbp-B0h]
  __int64 v221; // [rsp+58h] [rbp-A8h]
  __int64 v222; // [rsp+60h] [rbp-A0h]
  __int64 v223; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v224; // [rsp+70h] [rbp-90h] BYREF
  __int64 v225; // [rsp+78h] [rbp-88h] BYREF
  __int64 v226; // [rsp+80h] [rbp-80h]
  __int64 v227; // [rsp+88h] [rbp-78h] BYREF
  __int64 v228; // [rsp+90h] [rbp-70h]
  __int64 v229; // [rsp+98h] [rbp-68h] BYREF
  __int64 v230; // [rsp+A0h] [rbp-60h]
  __int64 v231; // [rsp+A8h] [rbp-58h] BYREF
  int v232; // [rsp+B0h] [rbp-50h]
  int v233; // [rsp+B4h] [rbp-4Ch]
  int v234; // [rsp+B8h] [rbp-48h]
  int v235; // [rsp+BCh] [rbp-44h]
  int v236; // [rsp+C0h] [rbp-40h]
  __int64 v237; // [rsp+C8h] [rbp-38h]
  __int64 v238; // [rsp+D0h] [rbp-30h]
  __int64 v239; // [rsp+D8h] [rbp-28h]
  __int64 v240; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v241; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v242; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v243; // [rsp+F8h] [rbp-8h]
  _QWORD v244[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v245; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v246; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v247; // [rsp+120h] [rbp+20h] BYREF
  __int64 v248; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v249; // [rsp+130h] [rbp+30h] BYREF
  __int64 v250[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v251[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v252[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v253[2]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v254[72]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v255; // [rsp+1C0h] [rbp+C0h]
  __int128 v256; // [rsp+1C8h] [rbp+C8h] BYREF
  _OWORD v257[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int16 v258; // [rsp+200h] [rbp+100h]
  unsigned __int16 v259; // [rsp+202h] [rbp+102h]
  int v260; // [rsp+204h] [rbp+104h]
  _QWORD v261[33]; // [rsp+208h] [rbp+108h] BYREF
  _OWORD v262[4]; // [rsp+310h] [rbp+210h] BYREF
  _OWORD v263[4]; // [rsp+350h] [rbp+250h] BYREF
  _OWORD v264[4]; // [rsp+390h] [rbp+290h] BYREF
  _OWORD v265[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned __int16 v266; // [rsp+410h] [rbp+310h]
  unsigned __int16 v267; // [rsp+412h] [rbp+312h]
  int v268; // [rsp+414h] [rbp+314h]
  _QWORD v269[33]; // [rsp+418h] [rbp+318h] BYREF

  v5 = *(unsigned int *)(a2 + 588);
  v230 = a4;
  LODWORD(v7) = 0;
  v228 = a2;
  v8 = a2;
  v222 = a1;
  v9 = KiProcessorBlock[v5];
  v10 = a1;
  v221 = v9;
  v217 = 0;
  v216 = a5;
  HIDWORD(v216) = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  while ( 1 )
  {
LABEL_2:
    v218 = 0LL;
    v11 = *(unsigned int *)(v8 + 536);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v224 = 0LL;
    v12 = (*(_BYTE *)(v10 + 14524) & 1) == 0;
    v241 = 0LL;
    v13 = KiProcessorBlock[v11];
    v226 = v13;
    if ( !v12 && (*(_BYTE *)(v8 + 643) == 15 || *(_DWORD *)(v8 + 84) < (unsigned int)KiShortExecutionCycles) )
    {
      v14 = (__int64 *)(v10 + 192);
      v15 = *(_QWORD *)(v10 + 192);
      v16 = *(unsigned __int16 *)(v15 + 136);
      if ( (unsigned __int16)v16 >= *a3 )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)&a3[4 * v16 + 4];
      v18 = *(_QWORD *)(v15 + 8);
      v224 = v18 & v17;
      v19 = v18 & v17 & *(_QWORD *)(v15 + 8LL * SHIDWORD(v216) + 16);
      v224 = v19;
      if ( !v19 )
        goto LABEL_43;
      v20 = v19;
      v21 = *(_QWORD *)(v10 + 36464) & v19;
      if ( v21 )
      {
        v19 &= *(_QWORD *)(v10 + 36464);
        v224 = v21;
        v20 = v21;
      }
      if ( KiDispatchInterruptCost == -1 || !*(_QWORD *)(v10 + 14368) || (v20 & *(_QWORD *)(v10 + 200)) == 0 )
      {
LABEL_25:
        if ( (*(_BYTE *)(v15 + 184) & 1) == 0 )
        {
LABEL_35:
          if ( (v19 & ~*(_QWORD *)(v10 + 36448)) != 0 )
            v19 &= ~*(_QWORD *)(v10 + 36448);
          v224 = v19;
          goto LABEL_38;
        }
        if ( (_BYTE)v216 && KiFindRankBiasedIdleSmtSet(v15, &v224) )
        {
LABEL_32:
          v19 = v224;
LABEL_38:
          v26 = *(unsigned __int8 *)(v10 + 208);
          v27 = *(_DWORD *)(v10 + 36436);
          if ( *(_BYTE *)(v13 + 208) == (_BYTE)v26 && (*(_QWORD *)(v10 + 36456) & *(_QWORD *)(v13 + 200)) != 0LL )
            LOBYTE(v27) = *(_BYTE *)(v13 + 209);
          LODWORD(v7) = 0;
          _BitScanForward64(&v28, __ROR8__(v19, v27));
          v232 = v28;
          v25 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * v26 + (((_BYTE)v28 + (_BYTE)v27) & 0x3Fu))];
LABEL_42:
          if ( v25 )
            goto LABEL_365;
          goto LABEL_43;
        }
        v19 = v224 & *(_QWORD *)(v15 + 24);
        if ( v19 )
        {
          if ( !(_BYTE)v216 || (unsigned int)__popcnt(v18) >= KiPerfIsoEnabled )
            goto LABEL_35;
        }
        else if ( !(_BYTE)v216 )
        {
          if ( !KiReduceByEffectiveIdleSmtSet(v10, &v224) )
          {
            v19 = v224;
            goto LABEL_35;
          }
          goto LABEL_32;
        }
LABEL_43:
        v9 = v221;
        goto LABEL_44;
      }
      if ( !*(_DWORD *)(v10 + 14424) && (*(_WORD *)(v10 + 14524) & 0xFFDF) == 1 )
      {
        v22 = *(_QWORD *)(v10 + 14376);
        if ( v22 != -1LL )
        {
LABEL_19:
          if ( v22 != -2LL )
          {
            v23 = __rdtsc();
            v24 = (((unsigned __int64)HIDWORD(v23) << 32) | (unsigned int)v23) - *(_QWORD *)(v10 + 14384);
            if ( v22 < v24 || v22 - v24 < KiDispatchInterruptCost )
            {
              v25 = v10;
              goto LABEL_42;
            }
          }
          goto LABEL_24;
        }
        if ( KiQueryDpcRuntimeHistory(v10, *(_QWORD *)(v10 + 14368), &v241) )
        {
          v22 = v241;
          LODWORD(v7) = 0;
          *(_QWORD *)(v10 + 14376) = v241;
          goto LABEL_19;
        }
        *(_QWORD *)(v10 + 14376) = -2LL;
      }
LABEL_24:
      v19 = v224;
      goto LABEL_25;
    }
    v14 = (__int64 *)(v10 + 192);
LABEL_44:
    if ( (KiVelocityFlags & 0x800000) == 0 )
      break;
    memset_0(v261, 0, 0x100uLL);
    v29 = *(_QWORD *)(v13 + 192);
    v240 = *v14;
    v243 = 0LL;
    v25 = 0LL;
    v220 = *(_QWORD *)(v9 + 192);
    v259 = 32;
    v239 = KeNodeBlock[*(unsigned __int16 *)(v220 + 138)];
    v238 = KeNodeBlock[*(unsigned __int16 *)(v29 + 138)];
    v237 = KeNodeBlock[*(unsigned __int16 *)(v240 + 138)];
    memset_0(v261, 0, 0x100uLL);
    v30 = v259;
    v31 = *a3;
    if ( *a3 > v259 )
      v31 = v259;
    v258 = v31;
    v32 = 0;
    v260 = 0;
    if ( v31 )
    {
      memmove(v261, a3 + 4, 8LL * v31);
      v30 = v259;
      v32 = v31;
    }
    if ( v32 < v30 )
    {
      do
      {
        v33 = v32++;
        v261[v33] = 0LL;
      }
      while ( v32 < v259 );
    }
    v34 = v220;
    v35 = 0LL;
    v219 = HIDWORD(v216);
    *(_OWORD *)v254 = 0LL;
    if ( v220 == v29 )
      v25 = v13;
    *(_QWORD *)&v254[16] = 0LL;
    v36 = HIDWORD(v216);
    v37 = (*(unsigned __int8 *)(v239 + 10) >> 3) & 1;
    if ( v37 > SHIDWORD(v216) )
      v36 = (*(unsigned __int8 *)(v239 + 10) >> 3) & 1;
    for ( HIDWORD(v216) = v36; ; HIDWORD(v216) = v37 )
    {
      if ( v34 )
      {
        v38 = *(unsigned __int16 *)(v34 + 136);
        memset(v262, 0, sizeof(v262));
        if ( (unsigned __int16)v38 >= *a3 )
          v39 = 0LL;
        else
          v39 = *(_QWORD *)&a3[4 * v38 + 4];
        v40 = *(_QWORD *)(v34 + 8);
        v41 = v39 & v40 & *(_QWORD *)(v34 + 8LL * SHIDWORD(v216) + 16);
        v223 = v41;
        if ( !v41 )
        {
          v35 = 0LL;
          goto LABEL_107;
        }
        if ( (*(_BYTE *)(v34 + 184) & 1) != 0 )
        {
          if ( (_BYTE)v216 )
          {
            RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v34, &v223);
            v34 = v220;
            if ( RankBiasedIdleSmtSet )
            {
              v41 = v223;
              goto LABEL_76;
            }
          }
          v41 = v223;
          if ( (v223 & *(_QWORD *)(v34 + 24)) == 0 )
          {
            if ( !(_BYTE)v216 )
            {
              if ( *v14 == v34 )
              {
                KiReduceByEffectiveIdleSmtSet(v222, &v223);
                v34 = v220;
                v41 = v223;
              }
              goto LABEL_76;
            }
            v35 = 0LL;
LABEL_107:
            v56 = *(unsigned __int16 *)(v34 + 136);
            if ( v258 > (unsigned __int16)v56 )
              v261[v56] &= ~*(_QWORD *)(v34 + 128);
            goto LABEL_109;
          }
          if ( (_BYTE)v216 && (unsigned int)__popcnt(v40) < KiPerfIsoEnabled )
          {
            v35 = 0LL;
            goto LABEL_107;
          }
          v41 = v223 & *(_QWORD *)(v34 + 24);
        }
LABEL_76:
        RtlCopyVolatileMemory(v262, (const void *)(v34 + 576), 0x40uLL);
        v43 = -1;
        v44 = 0LL;
        v45 = 0;
        v46 = 0LL;
        do
        {
          if ( ((1LL << v45) & v41) != 0 )
          {
            v47 = *((_BYTE *)v262 + v46);
            if ( v47 == v43 )
            {
              v44 |= 1LL << v46;
            }
            else if ( v47 < v43 )
            {
              v43 = *((_BYTE *)v262 + v46);
              v44 = 1LL << v45;
            }
          }
          ++v45;
          ++v46;
        }
        while ( v45 < 0x40u );
        v223 = v44;
        if ( (v44 & *(_QWORD *)(v221 + 200)) != 0 )
        {
          v35 = v221;
        }
        else
        {
          if ( v25 && (v44 & *(_QWORD *)(v25 + 200)) != 0 )
          {
            LODWORD(v7) = 0;
            HIDWORD(v216) = v219;
            goto LABEL_365;
          }
          v48 = *(_QWORD *)(v221 + 36448) & v44;
          if ( v48 )
          {
            v44 &= *(_QWORD *)(v221 + 36448);
            v223 = v48;
          }
          else if ( v25 && (v49 = *(_QWORD *)(v25 + 36448) & v44) != 0 )
          {
            v44 &= *(_QWORD *)(v25 + 36448);
            v223 = v49;
          }
          else
          {
            v50 = *(_QWORD *)(v221 + 36472) & v44;
            if ( v50 )
            {
              v44 &= *(_QWORD *)(v221 + 36472);
              v223 = v50;
            }
            else if ( v25 && (v51 = *(_QWORD *)(v25 + 36448) & v44) != 0 )
            {
              v44 &= *(_QWORD *)(v25 + 36448);
              v223 = v51;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v52 = *(_QWORD *)(v221 + 36464) & v44;
              if ( v52 )
              {
                v44 &= *(_QWORD *)(v221 + 36464);
                v223 = v52;
              }
              else if ( v25 )
              {
                if ( (*(_QWORD *)(v25 + 36464) & v44) != 0 )
                  v44 &= *(_QWORD *)(v25 + 36464);
                v223 = v44;
              }
            }
          }
          v53 = *(_BYTE *)(v221 + 209);
          _BitScanForward64(&v54, __ROR8__(v44, v53));
          v55 = *(unsigned __int8 *)(v221 + 208) << 6;
          v233 = v54;
          v35 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (((_BYTE)v54 + v53) & 0x3Fu) + v55)];
        }
        if ( v35 )
          break;
        v34 = v220;
        goto LABEL_107;
      }
LABEL_109:
      *(_QWORD *)v254 = v239;
      *(_OWORD *)&v254[8] = 0LL;
      RtlCopyVolatileMemory(&v254[8], (const void *)(v239 + 16), 0x10uLL);
      while ( 1 )
      {
        v250[0] = 32LL;
        v250[1] = (__int64)&v254[8];
        if ( !RtlNumberOfSetBitsEx(v250) )
          break;
        FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v254[8]);
        _bittestandreset64((signed __int64 *)&v254[8], FirstSetRightGroupMask);
        v58 = *(_QWORD *)(*(_QWORD *)v254 + 8 * FirstSetRightGroupMask + 32);
        if ( v58 != v220 )
        {
          v59 = *(unsigned __int16 *)(v58 + 136);
          if ( (unsigned __int16)v59 < *a3 )
          {
            if ( *(_QWORD *)&a3[4 * v59 + 4] )
            {
              v35 = KiSelectIdleProcessor(
                      a3,
                      v222,
                      v221,
                      *(_QWORD *)(*(_QWORD *)v254 + 8 * FirstSetRightGroupMask + 32),
                      0LL,
                      (char *)&v216);
              if ( v35 )
                goto LABEL_120;
              v60 = *(unsigned __int16 *)(v58 + 136);
              if ( v258 > (unsigned __int16)v60 )
                v261[v60] &= ~*(_QWORD *)(v58 + 128);
            }
          }
        }
      }
      if ( v37 <= v219 )
        break;
      v34 = v220;
      --v37;
    }
LABEL_120:
    v61 = v219;
    HIDWORD(v216) = v219;
    if ( v35 )
      goto LABEL_363;
    v62 = v220;
    if ( v220 != v29 )
    {
      memset(&v254[24], 0, 24);
      v35 = 0LL;
      if ( (KiVelocityFlags & 0x800000) == 0 || (v63 = 1, (*(_BYTE *)(v238 + 10) & 8) == 0) )
        v63 = 0;
      v64 = HIDWORD(v216);
      v65 = v222;
      if ( v63 > v219 )
        v64 = v63;
      HIDWORD(v216) = v64;
      while ( !v29 )
      {
LABEL_167:
        *(_QWORD *)&v254[24] = v238;
        *(_OWORD *)&v254[32] = 0LL;
        RtlCopyVolatileMemory(&v254[32], (const void *)(v238 + 16), 0x10uLL);
        while ( 1 )
        {
          v251[0] = 32LL;
          v251[1] = (__int64)&v254[32];
          if ( !RtlNumberOfSetBitsEx(v251) )
            break;
          v81 = KeFindFirstSetRightGroupMask((__int64 *)&v254[32]);
          _bittestandreset64((signed __int64 *)&v254[32], v81);
          v82 = *(_QWORD *)(*(_QWORD *)&v254[24] + 8LL * v81 + 32);
          if ( v82 != v29 )
          {
            v83 = *(unsigned __int16 *)(v82 + 136);
            if ( (unsigned __int16)v83 < *a3 )
            {
              if ( *(_QWORD *)&a3[4 * v83 + 4] )
              {
                v35 = KiSelectIdleProcessor(a3, v65, v221, v82, 0LL, (char *)&v216);
                if ( v35 )
                  goto LABEL_177;
                v84 = *(unsigned __int16 *)(v82 + 136);
                if ( v258 > (unsigned __int16)v84 )
                  v261[v84] &= ~*(_QWORD *)(v82 + 128);
              }
            }
          }
        }
        if ( v63 <= v61 )
        {
LABEL_177:
          v62 = v220;
          HIDWORD(v216) = v61;
          if ( !v35 )
            goto LABEL_178;
LABEL_363:
          LODWORD(v7) = 0;
          goto LABEL_364;
        }
        HIDWORD(v216) = --v63;
      }
      v66 = *(unsigned __int16 *)(v29 + 136);
      memset(v263, 0, sizeof(v263));
      if ( (unsigned __int16)v66 >= *a3 )
        v67 = 0LL;
      else
        v67 = *(_QWORD *)&a3[4 * v66 + 4];
      v68 = *(_QWORD *)(v29 + 8);
      v69 = v67 & v68 & *(_QWORD *)(v29 + 8LL * SHIDWORD(v216) + 16);
      v229 = v69;
      if ( !v69 )
      {
        v35 = 0LL;
        goto LABEL_165;
      }
      if ( (*(_BYTE *)(v29 + 184) & 1) != 0 )
      {
        if ( (_BYTE)v216 && KiFindRankBiasedIdleSmtSet(v29, &v229) )
        {
          v69 = v229;
          goto LABEL_147;
        }
        v69 = v229;
        if ( (v229 & *(_QWORD *)(v29 + 24)) != 0 )
        {
          if ( !(_BYTE)v216 || (unsigned int)__popcnt(v68) >= KiPerfIsoEnabled )
          {
            v69 = v229 & *(_QWORD *)(v29 + 24);
            goto LABEL_147;
          }
          v35 = 0LL;
LABEL_165:
          v80 = *(unsigned __int16 *)(v29 + 136);
          if ( v258 > (unsigned __int16)v80 )
            v261[v80] &= ~*(_QWORD *)(v29 + 128);
          goto LABEL_167;
        }
        if ( (_BYTE)v216 )
        {
          v35 = 0LL;
          goto LABEL_165;
        }
        if ( *(_QWORD *)(v65 + 192) == v29 )
        {
          KiReduceByEffectiveIdleSmtSet(v65, &v229);
          v69 = v229;
        }
      }
LABEL_147:
      RtlCopyVolatileMemory(v263, (const void *)(v29 + 576), 0x40uLL);
      v70 = -1;
      v71 = 0LL;
      v72 = 0;
      v73 = 0LL;
      do
      {
        if ( ((1LL << v72) & v69) != 0 )
        {
          v74 = *((_BYTE *)v263 + v73);
          if ( v74 == v70 )
          {
            v71 |= 1LL << v73;
          }
          else if ( v74 < v70 )
          {
            v70 = *((_BYTE *)v263 + v73);
            v71 = 1LL << v72;
          }
        }
        ++v72;
        ++v73;
      }
      while ( v72 < 0x40u );
      v229 = v71;
      if ( (v71 & *(_QWORD *)(v226 + 200)) != 0 )
      {
        v35 = v226;
      }
      else
      {
        v75 = *(_QWORD *)(v226 + 36448) & v71;
        if ( v75 )
        {
          v229 = *(_QWORD *)(v226 + 36448) & v71;
        }
        else
        {
          v75 = *(_QWORD *)(v226 + 36472) & v71;
          if ( v75 )
          {
            v229 = *(_QWORD *)(v226 + 36472) & v71;
          }
          else
          {
            v75 = v71;
            if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v76 = *(_QWORD *)(v226 + 36464) & v71;
              if ( v76 )
              {
                v229 = *(_QWORD *)(v226 + 36464) & v71;
                v75 = v76;
              }
            }
          }
        }
        v77 = *(_BYTE *)(v226 + 209);
        _BitScanForward64(&v78, __ROR8__(v75, v77));
        v79 = *(unsigned __int8 *)(v226 + 208) << 6;
        v234 = v78;
        v35 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (((_BYTE)v78 + v77) & 0x3Fu) + v79)];
      }
      if ( v35 )
        goto LABEL_177;
      goto LABEL_165;
    }
LABEL_178:
    v85 = v240;
    if ( v240 == v62 || v240 == v29 )
      goto LABEL_236;
    memset(&v254[48], 0, 24);
    v35 = 0LL;
    if ( (KiVelocityFlags & 0x800000) == 0 || (v86 = 1, (*(_BYTE *)(v237 + 10) & 8) == 0) )
      v86 = 0;
    v87 = HIDWORD(v216);
    v88 = v219;
    v89 = v222;
    if ( v86 > v219 )
      v87 = v86;
    HIDWORD(v216) = v87;
    while ( 2 )
    {
      if ( v85 )
      {
        v90 = *(unsigned __int16 *)(v85 + 136);
        memset(v264, 0, sizeof(v264));
        if ( (unsigned __int16)v90 >= *a3 )
          v91 = 0LL;
        else
          v91 = *(_QWORD *)&a3[4 * v90 + 4];
        v92 = *(_QWORD *)(v85 + 8);
        v93 = v91 & v92 & *(_QWORD *)(v85 + 8LL * SHIDWORD(v216) + 16);
        v227 = v93;
        if ( v93 )
        {
          if ( (*(_BYTE *)(v85 + 184) & 1) != 0 )
          {
            if ( (_BYTE)v216 && KiFindRankBiasedIdleSmtSet(v85, &v227) )
            {
              v93 = v227;
            }
            else
            {
              v93 = v227;
              if ( (v227 & *(_QWORD *)(v85 + 24)) != 0 )
              {
                if ( (_BYTE)v216 && (unsigned int)__popcnt(v92) < KiPerfIsoEnabled )
                {
                  v35 = 0LL;
                  goto LABEL_223;
                }
                v93 = v227 & *(_QWORD *)(v85 + 24);
              }
              else
              {
                if ( (_BYTE)v216 )
                {
                  v35 = 0LL;
                  goto LABEL_223;
                }
                if ( *(_QWORD *)(v89 + 192) == v85 )
                {
                  KiReduceByEffectiveIdleSmtSet(v89, &v227);
                  v93 = v227;
                }
              }
            }
          }
          RtlCopyVolatileMemory(v264, (const void *)(v85 + 576), 0x40uLL);
          v94 = -1;
          v95 = 0LL;
          v96 = 0;
          v97 = 0LL;
          do
          {
            if ( ((1LL << v96) & v93) != 0 )
            {
              v98 = *((_BYTE *)v264 + v97);
              if ( v98 == v94 )
              {
                v95 |= 1LL << v97;
              }
              else if ( v98 < v94 )
              {
                v94 = *((_BYTE *)v264 + v97);
                v95 = 1LL << v96;
              }
            }
            ++v96;
            ++v97;
          }
          while ( v96 < 0x40u );
          v227 = v95;
          if ( (v95 & *(_QWORD *)(v89 + 200)) != 0 )
          {
            v35 = v89;
          }
          else
          {
            v99 = *(_QWORD *)(v89 + 36448) & v95;
            if ( v99 )
            {
              v227 = *(_QWORD *)(v89 + 36448) & v95;
            }
            else
            {
              v99 = *(_QWORD *)(v89 + 36472) & v95;
              if ( v99 )
              {
                v227 = *(_QWORD *)(v89 + 36472) & v95;
              }
              else
              {
                v99 = v95;
                if ( (KiCacheAwareScheduling & 1) != 0 )
                {
                  v100 = *(_QWORD *)(v89 + 36464) & v95;
                  if ( v100 )
                  {
                    v227 = *(_QWORD *)(v89 + 36464) & v95;
                    v99 = v100;
                  }
                }
              }
            }
            v101 = *(_BYTE *)(v89 + 209);
            _BitScanForward64(&v102, __ROR8__(v99, v101));
            v103 = *(unsigned __int8 *)(v89 + 208) << 6;
            v236 = v102;
            v35 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (((_BYTE)v102 + v101) & 0x3Fu) + v103)];
          }
          if ( v35 )
            break;
        }
        else
        {
          v35 = 0LL;
        }
LABEL_223:
        v104 = *(unsigned __int16 *)(v85 + 136);
        if ( v258 > (unsigned __int16)v104 )
          v261[v104] &= ~*(_QWORD *)(v85 + 128);
      }
      *(_QWORD *)&v254[48] = v237;
      *(_OWORD *)&v254[56] = 0LL;
      RtlCopyVolatileMemory(&v254[56], (const void *)(v237 + 16), 0x10uLL);
      while ( 1 )
      {
        v252[0] = 32LL;
        v252[1] = (__int64)&v254[56];
        if ( !RtlNumberOfSetBitsEx(v252) )
          break;
        v105 = KeFindFirstSetRightGroupMask((__int64 *)&v254[56]);
        _bittestandreset64((signed __int64 *)&v254[56], v105);
        v106 = *(_QWORD *)(*(_QWORD *)&v254[48] + 8LL * v105 + 32);
        if ( v106 != v85 )
        {
          v107 = *(unsigned __int16 *)(v106 + 136);
          if ( (unsigned __int16)v107 < *a3 )
          {
            if ( *(_QWORD *)&a3[4 * v107 + 4] )
            {
              v35 = KiSelectIdleProcessor(a3, v89, v221, v106, 0LL, (char *)&v216);
              if ( v35 )
                goto LABEL_235;
              v108 = *(unsigned __int16 *)(v106 + 136);
              if ( v258 > (unsigned __int16)v108 )
                v261[v108] &= ~*(_QWORD *)(v106 + 128);
            }
          }
        }
      }
      if ( v86 > v88 )
      {
        HIDWORD(v216) = --v86;
        continue;
      }
      break;
    }
LABEL_235:
    v62 = v220;
    HIDWORD(v216) = v88;
    if ( v35 )
      goto LABEL_363;
LABEL_236:
    LODWORD(v7) = 0;
    v109 = 0;
    if ( v258 )
    {
      while ( !v261[v109] )
      {
        if ( ++v109 >= v258 )
          goto LABEL_364;
      }
      LOWORD(v110) = *(_WORD *)(v62 + 138);
      v111 = 0;
      v112 = WORD1(v243);
      LOWORD(v219) = v110;
      LODWORD(v220) = 0;
      LODWORD(v226) = WORD1(v243);
      while ( 1 )
      {
        if ( v112 )
        {
          LODWORD(v220) = ++v111;
          if ( v111 == (unsigned __int16)KeNumberNodes )
            break;
          v110 = *(unsigned int *)(qword_140E2D890
                                 + 4LL * (v111 + (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)v110));
          v112 = v226;
        }
        else
        {
          v112 = 1;
          v110 = (unsigned __int16)v110;
          LODWORD(v226) = 1;
        }
        if ( (_DWORD)v110 == -1 )
          break;
        v113 = KeNodeBlock[v110];
        LOWORD(v110) = v219;
        if ( v113 != v237 && v113 != v238 && v113 != v239 )
        {
          v35 = 0LL;
          v114 = HIDWORD(v216);
          if ( (KiVelocityFlags & 0x800000) == 0 || (v115 = 1, (*(_BYTE *)(v113 + 10) & 8) == 0) )
            v115 = 0;
          v116 = HIDWORD(v216);
          if ( v115 > SHIDWORD(v216) )
            v116 = v115;
          for ( HIDWORD(v216) = v116; ; HIDWORD(v216) = v115 )
          {
            v255 = v113;
            v256 = 0LL;
            RtlCopyVolatileMemory(&v256, (const void *)(v113 + 16), 0x10uLL);
            while ( 1 )
            {
              v253[0] = 32LL;
              v253[1] = (__int64)&v256;
              if ( !RtlNumberOfSetBitsEx(v253) )
                break;
              v117 = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v256);
              _bittestandreset64((signed __int64 *)&v256, v117);
              v118 = *(_QWORD *)(v255 + 8 * v117 + 32);
              if ( v118 )
              {
                v119 = *(unsigned __int16 *)(v118 + 136);
                if ( (unsigned __int16)v119 < *a3 )
                {
                  if ( *(_QWORD *)&a3[4 * v119 + 4] )
                  {
                    v35 = KiSelectIdleProcessor(a3, v222, v221, *(_QWORD *)(v255 + 8 * v117 + 32), 0LL, (char *)&v216);
                    if ( v35 )
                      goto LABEL_265;
                    v120 = *(unsigned __int16 *)(v118 + 136);
                    if ( v258 > (unsigned __int16)v120 )
                      v261[v120] &= ~*(_QWORD *)(v118 + 128);
                  }
                }
              }
            }
            if ( v115 <= v114 )
              break;
            --v115;
          }
LABEL_265:
          LODWORD(v7) = 0;
          HIDWORD(v216) = v114;
          v25 = v35;
          if ( v35 )
            goto LABEL_365;
          v121 = 0;
          if ( !v258 )
            goto LABEL_269;
          while ( !v261[v121] )
          {
            if ( ++v121 >= v258 )
              goto LABEL_269;
          }
          v111 = v220;
          v112 = v226;
          LOWORD(v110) = v219;
        }
      }
    }
LABEL_364:
    v25 = v35;
    if ( !v35 )
      goto LABEL_269;
LABEL_365:
    v244[0] = v25;
    result = SHIDWORD(v216) ^ (v25 ^ SHIDWORD(v216)) & 0xFFFFFFFFFFFFFFFEuLL;
    v218 = result;
    if ( HIDWORD(v216) )
    {
      if ( HIDWORD(v216) == 1 )
      {
        v161 = *(_BYTE **)(v25 + 36440);
        v162 = (unsigned __int8)*v161;
        v163 = (__int64 *)(v161 + 8);
        if ( *v161 )
          goto LABEL_370;
      }
    }
    else
    {
      v163 = v244;
      v162 = 1;
LABEL_370:
      v164 = v162;
      do
      {
        v165 = *v163;
        v166 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v165 + 48), 0LL) )
        {
          do
          {
            if ( (++v166 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait();
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v165 + 48) );
        }
        ++v163;
        LODWORD(v7) = 0;
        --v164;
      }
      while ( v164 );
      result = v218;
    }
    v167 = result & 0xFFFFFFFFFFFFFFFEuLL;
    v168 = 0LL;
    v244[1] = result & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (result & 1) != 0 )
    {
      if ( (result & 1) == 1 )
      {
        v168 = (__int64 *)(*(_QWORD *)(v167 + 36440) + 8LL);
        LODWORD(v7) = **(unsigned __int8 **)(v167 + 36440);
      }
      LOBYTE(v172) = 1;
      if ( (_DWORD)v7 )
      {
        v7 = (unsigned int)v7;
        do
        {
          v173 = *v168++;
          v172 = ((*(_BYTE *)(v173 + 35) & 1) == 0) & (unsigned __int8)v172;
          --v7;
        }
        while ( v7 );
        if ( !v172 )
          goto LABEL_394;
      }
LABEL_384:
      if ( (*(_BYTE *)(v25 + 35) & 0x10) == 0 )
      {
        v212 = v230;
        *(_QWORD *)v230 = result;
        *(_QWORD *)(v212 + 8) = 1LL;
        return result;
      }
      LODWORD(v7) = 0;
      v169 = result & 0xFFFFFFFFFFFFFFFEuLL;
      v246 = result & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (result & 1) != 0 )
      {
        v170 = (unsigned __int64 *)(*(_QWORD *)(v169 + 36440) + 8LL);
        v171 = **(unsigned __int8 **)(v169 + 36440);
        if ( !**(_BYTE **)(v169 + 36440) )
          goto LABEL_399;
      }
      else
      {
        v170 = &v246;
        v171 = 1;
      }
      do
        _InterlockedAnd64((volatile signed __int64 *)(v170[--v171] + 48), 0LL);
      while ( v171 );
      v8 = v228;
      v10 = v222;
      v9 = v221;
    }
    else
    {
      if ( (*(_BYTE *)(v167 + 35) & 1) == 0 )
        goto LABEL_384;
LABEL_394:
      LODWORD(v7) = 0;
      v174 = result & 0xFFFFFFFFFFFFFFFEuLL;
      v245 = result & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (result & 1) != 0 )
      {
        v175 = (unsigned __int64 *)(*(_QWORD *)(v174 + 36440) + 8LL);
        v176 = **(unsigned __int8 **)(v174 + 36440);
        if ( **(_BYTE **)(v174 + 36440) )
          goto LABEL_398;
      }
      else
      {
        v175 = &v245;
        v176 = 1;
        do
LABEL_398:
          _InterlockedAnd64((volatile signed __int64 *)(v175[--v176] + 48), 0LL);
        while ( v176 );
      }
LABEL_399:
      v8 = v228;
      v10 = v222;
      v9 = v221;
    }
  }
  memset_0(v269, 0, 0x100uLL);
  v124 = *(_QWORD *)(v13 + 192);
  v125 = *(_QWORD *)(v9 + 192);
  v231 = 0LL;
  v267 = 32;
  v25 = 0LL;
  memset(v257, 0, sizeof(v257));
  memset_0(v269, 0, 0x100uLL);
  v126 = v267;
  v127 = *a3;
  if ( *a3 > v267 )
    v127 = v267;
  v266 = v127;
  v128 = 0;
  v268 = 0;
  if ( v127 )
  {
    memmove(v269, a3 + 4, 8LL * v127);
    v126 = v267;
    v128 = v127;
  }
  if ( v128 < v126 )
  {
    do
    {
      v129 = v128++;
      v269[v129] = 0LL;
    }
    while ( v128 < v267 );
  }
  v130 = *(unsigned __int16 *)(v125 + 136);
  v265[0] = 0LL;
  if ( v124 == v125 )
    v25 = v13;
  memset(&v265[1], 0, 48);
  if ( (unsigned __int16)v130 >= *a3 )
    v131 = 0LL;
  else
    v131 = *(_QWORD *)&a3[4 * v130 + 4];
  v132 = *(_QWORD *)(v125 + 8);
  v133 = v131 & v132 & *(_QWORD *)(v125 + 8LL * SHIDWORD(v216) + 16);
  v225 = v133;
  if ( !v133 )
  {
    v134 = v221;
    v35 = 0LL;
    goto LABEL_329;
  }
  if ( (*(_BYTE *)(v125 + 184) & 1) == 0 )
    goto LABEL_298;
  if ( (_BYTE)v216 && KiFindRankBiasedIdleSmtSet(v125, &v225) )
  {
    v133 = v225;
    goto LABEL_298;
  }
  v133 = v225;
  if ( (v225 & *(_QWORD *)(v125 + 24)) != 0 )
  {
    if ( !(_BYTE)v216 || (unsigned int)__popcnt(v132) >= KiPerfIsoEnabled )
    {
      v133 = v225 & *(_QWORD *)(v125 + 24);
      goto LABEL_298;
    }
    v134 = v221;
    v35 = 0LL;
  }
  else
  {
    if ( (_BYTE)v216 )
    {
      v134 = v221;
      v35 = 0LL;
      goto LABEL_329;
    }
    if ( *(_QWORD *)(v222 + 192) == v125 )
    {
      KiReduceByEffectiveIdleSmtSet(v222, &v225);
      v133 = v225;
    }
LABEL_298:
    RtlCopyVolatileMemory(v265, (const void *)(v125 + 576), 0x40uLL);
    v135 = -1;
    v136 = 0LL;
    v137 = 0;
    v138 = 0LL;
    do
    {
      if ( ((1LL << v137) & v133) != 0 )
      {
        v139 = *((_BYTE *)v265 + v138);
        if ( v139 == v135 )
        {
          v136 |= 1LL << v138;
        }
        else if ( v139 < v135 )
        {
          v135 = *((_BYTE *)v265 + v138);
          v136 = 1LL << v137;
        }
      }
      ++v137;
      ++v138;
    }
    while ( v137 < 0x40u );
    v134 = v221;
    v225 = v136;
    if ( (v136 & *(_QWORD *)(v221 + 200)) != 0 )
    {
      v35 = v221;
      LODWORD(v7) = 0;
    }
    else
    {
      if ( v25 && (v136 & *(_QWORD *)(v25 + 200)) != 0 )
      {
LABEL_309:
        LODWORD(v7) = 0;
        goto LABEL_365;
      }
      v140 = *(_QWORD *)(v221 + 36448) & v136;
      if ( v140 )
      {
        v136 &= *(_QWORD *)(v221 + 36448);
        v225 = v140;
      }
      else if ( v25 && (v141 = *(_QWORD *)(v25 + 36448) & v136) != 0 )
      {
        v136 &= *(_QWORD *)(v25 + 36448);
        v225 = v141;
      }
      else
      {
        v142 = *(_QWORD *)(v221 + 36472) & v136;
        if ( v142 )
        {
          v136 &= *(_QWORD *)(v221 + 36472);
          v225 = v142;
        }
        else if ( v25 && (v143 = *(_QWORD *)(v25 + 36448) & v136) != 0 )
        {
          v136 &= *(_QWORD *)(v25 + 36448);
          v225 = v143;
        }
        else if ( (KiCacheAwareScheduling & 1) != 0 )
        {
          v144 = *(_QWORD *)(v221 + 36464) & v136;
          if ( v144 )
          {
            v136 &= *(_QWORD *)(v221 + 36464);
            v225 = v144;
          }
          else if ( v25 )
          {
            if ( (*(_QWORD *)(v25 + 36464) & v136) != 0 )
              v136 &= *(_QWORD *)(v25 + 36464);
            v225 = v136;
          }
        }
      }
      v145 = *(_BYTE *)(v221 + 209);
      LODWORD(v7) = 0;
      _BitScanForward64(&v146, __ROR8__(v136, v145));
      v147 = *(unsigned __int8 *)(v221 + 208) << 6;
      v235 = v146;
      v35 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + (((_BYTE)v146 + v145) & 0x3Fu) + v147)];
    }
    if ( v35 )
      goto LABEL_364;
  }
LABEL_329:
  v148 = *(unsigned __int16 *)(v125 + 136);
  v149 = v266;
  if ( v266 > (unsigned __int16)v148 )
  {
    v269[v148] &= ~*(_QWORD *)(v125 + 128);
    v149 = v266;
  }
  if ( v124 == v125 || (v150 = *(unsigned __int16 *)(v124 + 136), (unsigned __int16)v150 >= v149) )
  {
    v151 = v222;
  }
  else
  {
    v151 = v222;
    if ( v269[v150] )
    {
      v35 = KiSelectIdleProcessor(a3, v222, v134, v124, v13, (char *)&v216);
      if ( v35 )
        goto LABEL_363;
    }
  }
  v152 = *(unsigned __int16 *)(v124 + 136);
  if ( v149 > (unsigned __int16)v152 )
  {
    v269[v152] &= ~*(_QWORD *)(v124 + 128);
    v149 = v266;
  }
  v153 = *(_QWORD *)(v151 + 192);
  v231 = v153;
  if ( v153 != v125 && v153 != v124 )
  {
    v154 = *(unsigned __int16 *)(v153 + 136);
    if ( (unsigned __int16)v154 < v149 )
    {
      if ( v269[v154] )
      {
        v35 = KiSelectIdleProcessor(a3, v151, v221, v153, v151, (char *)&v216);
        if ( v35 )
          goto LABEL_363;
      }
    }
  }
  v155 = *(unsigned __int16 *)(v153 + 136);
  if ( v149 > (unsigned __int16)v155 )
  {
    v269[v155] &= ~*(_QWORD *)(v153 + 128);
    v149 = v266;
  }
  for ( i = 0; i < v149; ++i )
  {
    if ( v269[i] )
    {
      KiInitializeSystemSubNodeEnumerationContext((__int64)v257, *(_WORD *)(v125 + 138));
      if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v257, &v231) )
        goto LABEL_363;
      while ( 1 )
      {
        v157 = v231;
        if ( v231 != v125 && v231 != v124 && v231 != *(_QWORD *)(v151 + 192) )
        {
          v35 = KiSelectIdleProcessor(a3, v151, v221, v231, 0LL, (char *)&v216);
          v25 = v35;
          if ( v35 )
            goto LABEL_309;
          v158 = *(unsigned __int16 *)(v157 + 136);
          if ( v149 > (unsigned __int16)v158 )
          {
            v269[v158] &= ~*(_QWORD *)(v157 + 128);
            v149 = v266;
          }
          v159 = 0;
          if ( !v149 )
            goto LABEL_269;
          while ( !v269[v159] )
          {
            if ( ++v159 >= v149 )
              goto LABEL_269;
          }
          v151 = v222;
        }
        if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v257, &v231) )
          goto LABEL_363;
      }
    }
  }
LABEL_269:
  v122 = *(unsigned __int8 *)(v221 + 208);
  if ( (unsigned __int16)v122 >= *a3 )
  {
    v123 = 0LL;
  }
  else
  {
    _mm_lfence();
    v123 = *(_QWORD *)&a3[4 * v122 + 4];
  }
  v8 = v228;
  v220 = v123;
  v177 = KiSelectProcessorToPreempt(v228, v221, v123, 0LL);
  v240 = v177;
  v178 = v177;
  v179 = *(unsigned __int8 **)(v177 + 56);
  v180 = *(_QWORD *)(v177 + 192);
  v226 = v180;
  v181 = *v179;
  v182 = HIDWORD(v216);
  if ( SHIDWORD(v216) < (int)(v181 >> 7) )
    v182 = v181 >> 7;
  KiAcquirePrcbLocksForIsolationUnit(v177, v182, &v218);
  v183 = *(char **)(v178 + 56);
  if ( ((*v183 ^ v181) & 0x80u) != 0 )
  {
    v184 = v218 & 1;
    v185 = 0LL;
    while ( 1 )
    {
      v186 = *v183;
      v187 = HIDWORD(v216);
      v188 = (unsigned __int8)*v183 >> 7;
      if ( SHIDWORD(v216) < v188 )
        v187 = v188;
      if ( v187 == v184 )
      {
LABEL_465:
        v8 = v228;
        v180 = v226;
        v123 = v220;
        break;
      }
      if ( v187 < v184 )
      {
        KiDowngradeIsolationUnitLockHandle(&v218, v187);
        goto LABEL_465;
      }
      v189 = v185;
      v190 = (int)v185;
      v191 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      v192 = (unsigned __int64 *)v185;
      v242 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      v193 = (unsigned int)v185;
      if ( (v218 & 1) != 0 )
      {
        if ( (v218 & 1) == 1 )
        {
          v189 = (__int64 *)(*(_QWORD *)(v191 + 36440) + 8LL);
          v190 = **(unsigned __int8 **)(v191 + 36440);
        }
      }
      else
      {
        v189 = (__int64 *)&v242;
        v190 = 1;
      }
      if ( v187 )
      {
        if ( v187 == 1 )
        {
          v192 = (unsigned __int64 *)(*(_QWORD *)(v191 + 36440) + 8LL);
          v193 = **(unsigned __int8 **)(v191 + 36440);
        }
        v194 = *v189;
        LODWORD(v195) = (_DWORD)v185;
        v196 = (unsigned int)v185;
        if ( !v193 )
        {
LABEL_420:
          v218 = v218 & 0xFFFFFFFFFFFFFFFEuLL | v187 & 1;
          goto LABEL_465;
        }
      }
      else
      {
        v194 = *v189;
        v192 = &v242;
        v193 = 1;
        LODWORD(v195) = (_DWORD)v185;
        v196 = (unsigned int)v185;
      }
      v197 = v192;
      while ( 1 )
      {
        if ( *v197 == v194 )
        {
          v195 = (unsigned int)(v195 + 1);
          if ( (_DWORD)v195 == v190 )
            v194 = -1LL;
          else
            v194 = v189[v195];
          goto LABEL_428;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(*v197 + 48), 0LL) )
          break;
LABEL_428:
        ++v196;
        ++v197;
        if ( v196 >= v193 )
          goto LABEL_420;
      }
      v198 = *v189;
      v185 = 0LL;
      LODWORD(v199) = 0;
      if ( v196 )
      {
        v185 = (__int64 *)v196;
        do
        {
          if ( v198 == *v192 )
          {
            v199 = (unsigned int)(v199 + 1);
            if ( (_DWORD)v199 == v190 )
              v198 = -1LL;
            else
              v198 = v189[v199];
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*v192 + 48), 0LL);
          }
          ++v192;
          v185 = (__int64 *)((char *)v185 - 1);
        }
        while ( v185 );
      }
      v200 = (unsigned __int64 *)v185;
      v201 = (int)v185;
      v202 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      v247 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v218 & 1) == 0 )
      {
        v200 = &v247;
        v201 = 1;
        goto LABEL_444;
      }
      if ( (v218 & 1) == 1 )
      {
        v200 = (unsigned __int64 *)(*(_QWORD *)(v202 + 36440) + 8LL);
        v201 = **(unsigned __int8 **)(v202 + 36440);
      }
      while ( v201 )
LABEL_444:
        _InterlockedAnd64((volatile signed __int64 *)(v200[--v201] + 48), 0LL);
      v248 = v178;
      v218 = v187 ^ (v178 ^ v187) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v187 )
      {
        if ( v187 == 1 )
        {
          v203 = *(_BYTE **)(v178 + 36440);
          v204 = (unsigned __int8)*v203;
          v205 = (__int64 *)(v203 + 8);
          if ( *v203 )
            goto LABEL_450;
        }
      }
      else
      {
        v205 = &v248;
        v204 = 1;
LABEL_450:
        v206 = v204;
        do
        {
          v207 = *v205;
          v208 = (int)v185;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v207 + 48), 0LL) )
          {
            do
            {
              if ( (++v208 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v207 + 48) );
          }
          ++v205;
          v185 = 0LL;
          --v206;
        }
        while ( v206 );
        v178 = v240;
      }
      v183 = *(char **)(v178 + 56);
      if ( ((*v183 ^ v186) & 0x80u) == 0 )
        goto LABEL_465;
      v184 = v187;
    }
  }
  if ( a5 )
  {
    IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v218);
    v214 = v230;
    *(_DWORD *)(v230 + 8) = IsIsolationUnitIdleByHandle;
  }
  else
  {
    if ( (*(_QWORD *)(v180 + 8LL * SHIDWORD(v216) + 16) & *(_QWORD *)(v180 + 8) & v123) != 0 )
    {
      LODWORD(v7) = 0;
      v209 = 0LL;
      v210 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      v211 = 0;
      v249 = v218 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v218 & 1) != 0 )
      {
        if ( (v218 & 1) == 1 )
        {
          v209 = (unsigned __int64 *)(*(_QWORD *)(v210 + 36440) + 8LL);
          v211 = **(unsigned __int8 **)(v210 + 36440);
        }
        while ( v211 )
LABEL_474:
          _InterlockedAnd64((volatile signed __int64 *)(v209[--v211] + 48), 0LL);
        v10 = v222;
        v9 = v221;
        goto LABEL_2;
      }
      v209 = &v249;
      v211 = 1;
      goto LABEL_474;
    }
    if ( (*(_BYTE *)(v178 + 35) & 0x10) == 0 && (unsigned int)KiIsIsolationUnitIdleByHandle(&v218) )
    {
      v230 = v123;
      v228 = v213;
      KeKeepData();
      KeKeepData();
      __fastfail(0x21u);
    }
    v214 = v230;
    *(_DWORD *)(v230 + 8) = 0;
  }
  if ( (*(_BYTE *)(v178 + 35) & 0x10) != 0 )
  {
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v218);
    KiSelectCandidateProcessor(v178, v8, -1LL, SHIDWORD(v216), &v218);
    *(_DWORD *)(v214 + 8) = KiIsIsolationUnitIdleByHandle(&v218) != 0;
  }
  result = v218;
  *(_QWORD *)v214 = v218;
  *(_DWORD *)(v214 + 12) = 0;
  return result;
}
