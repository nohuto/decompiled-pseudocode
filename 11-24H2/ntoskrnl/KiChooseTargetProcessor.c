/*
 * XREFs of KiChooseTargetProcessor @ 0x1404DE410
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSelectCandidateProcessor @ 0x1402A2F00 (KiSelectCandidateProcessor.c)
 *     KiIsIsolationUnitIdleByHandle @ 0x1402A37F0 (KiIsIsolationUnitIdleByHandle.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x140368B7C (KiFindRankBiasedIdleSmtSet.c)
 *     KiQueryDpcRuntimeHistory @ 0x140368C40 (KiQueryDpcRuntimeHistory.c)
 *     KiSelectIdleProcessor @ 0x1403690F0 (KiSelectIdleProcessor.c)
 *     KiReduceByEffectiveIdleSmtSet @ 0x140369BE0 (KiReduceByEffectiveIdleSmtSet.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403D78B0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiSelectProcessorToPreempt @ 0x14041B510 (KiSelectProcessorToPreempt.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     KeKeepData @ 0x14047A848 (KeKeepData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall KiChooseTargetProcessor(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
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
  __int64 v29; // rdx
  __int64 v30; // r14
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // bx
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdi
  int v37; // eax
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  char RankBiasedIdleSmtSet; // al
  unsigned __int8 v44; // r10
  __int64 v45; // r8
  unsigned __int8 v46; // r9
  __int64 v47; // rdx
  unsigned __int8 v48; // cl
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // cl
  unsigned __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rax
  unsigned __int64 FirstSetRightGroupMask; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // r15d
  __int64 v63; // r13
  int v64; // esi
  int v65; // eax
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rbx
  unsigned __int8 v71; // r10
  __int64 v72; // rdx
  unsigned __int8 v73; // r9
  __int64 v74; // r8
  unsigned __int8 v75; // cl
  __int64 v76; // r8
  __int64 v77; // rax
  char v78; // cl
  unsigned __int64 v79; // rax
  int v80; // edx
  __int64 v81; // rax
  unsigned __int16 v82; // ax
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r15
  int v87; // esi
  int v88; // eax
  int v89; // r14d
  __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rcx
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // rbx
  unsigned __int8 v95; // r10
  __int64 v96; // rdx
  unsigned __int8 v97; // r9
  __int64 v98; // r8
  unsigned __int8 v99; // cl
  __int64 v100; // r8
  __int64 v101; // rax
  char v102; // cl
  unsigned __int64 v103; // rax
  int v104; // edx
  __int64 v105; // rax
  unsigned __int16 v106; // ax
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int16 v110; // cx
  __int64 v111; // rax
  int v112; // edx
  __int16 v113; // cx
  __int64 v114; // r14
  int v115; // r15d
  int v116; // esi
  int v117; // eax
  unsigned __int64 v118; // rcx
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned __int16 v122; // cx
  __int64 v123; // rax
  __int64 v124; // rdi
  __int64 v125; // r15
  __int64 v126; // r14
  unsigned __int16 v127; // ax
  unsigned __int16 v128; // bx
  unsigned __int16 v129; // cx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rcx
  unsigned __int64 v133; // rdi
  unsigned __int64 v134; // rbx
  __int64 v135; // r11
  unsigned __int8 v136; // r10
  __int64 v137; // r8
  unsigned __int8 v138; // r9
  __int64 v139; // rdx
  unsigned __int8 v140; // cl
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  char v146; // cl
  unsigned __int64 v147; // rax
  int v148; // edx
  __int64 v149; // rax
  unsigned __int16 v150; // bx
  __int64 v151; // rax
  __int64 v152; // r13
  __int64 v153; // rax
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rax
  unsigned __int16 i; // cx
  __int64 v158; // rsi
  __int64 v159; // rax
  unsigned __int16 v160; // cx
  unsigned __int64 result; // rax
  _BYTE *v162; // rcx
  unsigned int v163; // edx
  __int64 *v164; // rsi
  __int64 v165; // r14
  __int64 v166; // rdi
  unsigned int v167; // ebx
  unsigned __int64 v168; // r9
  __int64 *v169; // r8
  unsigned __int64 v170; // r9
  unsigned __int64 *v171; // r8
  int v172; // edx
  int v173; // r9d
  __int64 v174; // rcx
  unsigned __int64 v175; // r9
  unsigned __int64 *v176; // r8
  int v177; // edx
  __int64 v178; // rax
  __int64 v179; // r15
  unsigned __int8 *v180; // rbx
  __int64 v181; // rsi
  unsigned int v182; // ebx
  __int64 v183; // rdx
  char *v184; // rax
  signed int v185; // ecx
  __int64 *v186; // r10
  char v187; // bl
  signed int v188; // r13d
  int v189; // eax
  __int64 *v190; // r11
  int v191; // esi
  unsigned __int64 v192; // rdx
  unsigned __int64 *v193; // r9
  unsigned int v194; // edi
  __int64 v195; // rdx
  __int64 v196; // rcx
  unsigned int v197; // r8d
  unsigned __int64 *v198; // r10
  __int64 v199; // rdx
  __int64 v200; // rcx
  unsigned __int64 *v201; // r8
  int v202; // edx
  unsigned __int64 v203; // r9
  _BYTE *v204; // rax
  unsigned int v205; // ecx
  __int64 *v206; // r14
  __int64 v207; // r15
  __int64 v208; // rsi
  unsigned int v209; // edi
  unsigned __int64 *v210; // r8
  unsigned __int64 v211; // r9
  int v212; // edx
  __int64 v213; // rcx
  __int64 v214; // r11
  __int64 v215; // rbx
  int IsIsolationUnitIdleByHandle; // eax
  __int64 v217; // [rsp+30h] [rbp-D0h] BYREF
  int v218; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v219; // [rsp+40h] [rbp-C0h] BYREF
  int v220; // [rsp+48h] [rbp-B8h]
  __int64 v221; // [rsp+50h] [rbp-B0h]
  __int64 v222; // [rsp+58h] [rbp-A8h]
  __int64 v223; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v224; // [rsp+68h] [rbp-98h] BYREF
  __int64 v225; // [rsp+70h] [rbp-90h] BYREF
  __int64 v226; // [rsp+78h] [rbp-88h] BYREF
  __int64 v227; // [rsp+80h] [rbp-80h]
  __int64 v228; // [rsp+88h] [rbp-78h] BYREF
  __int64 v229; // [rsp+90h] [rbp-70h] BYREF
  __int64 v230; // [rsp+98h] [rbp-68h]
  __int64 v231; // [rsp+A0h] [rbp-60h]
  __int64 v232; // [rsp+A8h] [rbp-58h] BYREF
  int v233; // [rsp+B0h] [rbp-50h]
  int v234; // [rsp+B4h] [rbp-4Ch]
  int v235; // [rsp+B8h] [rbp-48h]
  int v236; // [rsp+BCh] [rbp-44h]
  int v237; // [rsp+C0h] [rbp-40h]
  __int64 v238; // [rsp+C8h] [rbp-38h]
  __int64 v239; // [rsp+D0h] [rbp-30h]
  __int64 v240; // [rsp+D8h] [rbp-28h]
  __int64 v241; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v242; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v243; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v244[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v245; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v246; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v247; // [rsp+118h] [rbp+18h] BYREF
  __int64 v248; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v249; // [rsp+128h] [rbp+28h] BYREF
  __int64 v250; // [rsp+130h] [rbp+30h]
  _BYTE v251[72]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v252; // [rsp+180h] [rbp+80h]
  __int128 v253; // [rsp+188h] [rbp+88h] BYREF
  _OWORD v254[2]; // [rsp+198h] [rbp+98h] BYREF
  unsigned __int16 v255; // [rsp+1C0h] [rbp+C0h]
  unsigned __int16 v256; // [rsp+1C2h] [rbp+C2h]
  int v257; // [rsp+1C4h] [rbp+C4h]
  _QWORD v258[33]; // [rsp+1C8h] [rbp+C8h] BYREF
  _OWORD v259[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _OWORD v260[4]; // [rsp+310h] [rbp+210h] BYREF
  _OWORD v261[4]; // [rsp+350h] [rbp+250h] BYREF
  _OWORD v262[4]; // [rsp+390h] [rbp+290h] BYREF
  unsigned __int16 v263; // [rsp+3D0h] [rbp+2D0h]
  unsigned __int16 v264; // [rsp+3D2h] [rbp+2D2h]
  int v265; // [rsp+3D4h] [rbp+2D4h]
  _QWORD v266[33]; // [rsp+3D8h] [rbp+2D8h] BYREF

  v5 = *(unsigned int *)(a2 + 588);
  LODWORD(v6) = 0;
  v231 = a4;
  v230 = a2;
  v8 = a2;
  v223 = a1;
  v9 = KiProcessorBlock[v5];
  v10 = a1;
  v222 = v9;
  v218 = 0;
  v217 = a5;
  HIDWORD(v217) = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  while ( 1 )
  {
LABEL_2:
    v219 = 0LL;
    v11 = *(unsigned int *)(v8 + 536);
    LODWORD(v11) = v11 & 0x7FFFFFFF;
    v224 = 0LL;
    v12 = (*(_BYTE *)(v10 + 14524) & 1) == 0;
    v242 = 0LL;
    v13 = KiProcessorBlock[v11];
    v227 = v13;
    if ( v12 || *(_BYTE *)(v8 + 643) != 15 && *(_DWORD *)(v8 + 84) >= (unsigned int)KiShortExecutionCycles )
    {
      v14 = (__int64 *)(v10 + 192);
      goto LABEL_46;
    }
    v14 = (__int64 *)(v10 + 192);
    v15 = *(_QWORD *)(v10 + 192);
    v16 = *(unsigned __int16 *)(v15 + 136);
    if ( (unsigned __int16)v16 >= *a3 )
      v17 = 0LL;
    else
      v17 = *(_QWORD *)&a3[4 * v16 + 4];
    v18 = *(_QWORD *)(v15 + 8);
    v224 = v18 & v17;
    v19 = v18 & v17 & *(_QWORD *)(v15 + 8LL * SHIDWORD(v217) + 16);
    v224 = v19;
    if ( !v19 )
      goto LABEL_45;
    v20 = v19;
    v21 = *(_QWORD *)(v10 + 36464) & v19;
    if ( v21 )
    {
      v19 &= *(_QWORD *)(v10 + 36464);
      v224 = v21;
      v20 = v21;
    }
    if ( KiDispatchInterruptCost != -1 && *(_QWORD *)(v10 + 14368) && (v20 & *(_QWORD *)(v10 + 200)) != 0 )
    {
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
        if ( KiQueryDpcRuntimeHistory(v10, *(_QWORD *)(v10 + 14368), &v242) )
        {
          v22 = v242;
          LODWORD(v6) = 0;
          *(_QWORD *)(v10 + 14376) = v242;
          goto LABEL_19;
        }
        *(_QWORD *)(v10 + 14376) = -2LL;
      }
LABEL_24:
      v19 = v224;
    }
    if ( (*(_BYTE *)(v15 + 184) & 1) == 0 )
      goto LABEL_35;
    if ( (_BYTE)v217 && KiFindRankBiasedIdleSmtSet(v15, &v224) )
      goto LABEL_32;
    v19 = v224 & *(_QWORD *)(v15 + 24);
    if ( v19 )
    {
      if ( !(_BYTE)v217 || (unsigned int)__popcnt(v18) >= KiPerfIsoEnabled )
        goto LABEL_35;
    }
    else if ( !(_BYTE)v217 )
    {
      if ( KiReduceByEffectiveIdleSmtSet(v10, (__int64)&v224) )
      {
LABEL_32:
        v19 = v224;
      }
      else
      {
        v19 = v224;
LABEL_35:
        if ( (v19 & ~*(_QWORD *)(v10 + 36448)) != 0 )
          v19 &= ~*(_QWORD *)(v10 + 36448);
        v224 = v19;
      }
      v26 = *(unsigned __int8 *)(v10 + 208);
      v27 = *(_DWORD *)(v10 + 36436);
      if ( *(_BYTE *)(v13 + 208) == (_BYTE)v26 && (*(_QWORD *)(v10 + 36456) & *(_QWORD *)(v13 + 200)) != 0LL )
        LOBYTE(v27) = *(_BYTE *)(v13 + 209);
      _BitScanForward64(&v28, __ROR8__(v19, v27));
      LODWORD(v6) = 0;
      v233 = v28;
      v25 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * v26 + (((_BYTE)v28 + (_BYTE)v27) & 0x3Fu))];
LABEL_42:
      if ( v25 )
        goto LABEL_366;
    }
LABEL_45:
    v9 = v222;
LABEL_46:
    if ( (KiVelocityFlags & 0x800000) == 0 )
      break;
    memset_0(v258, 0, 0x100uLL);
    v29 = *v14;
    v30 = *(_QWORD *)(v13 + 192);
    v250 = 0LL;
    v25 = 0LL;
    v221 = *(_QWORD *)(v9 + 192);
    v241 = v29;
    v240 = KeNodeBlock[*(unsigned __int16 *)(v221 + 138)];
    v239 = KeNodeBlock[*(unsigned __int16 *)(v30 + 138)];
    v238 = KeNodeBlock[*(unsigned __int16 *)(v29 + 138)];
    v256 = 32;
    memset_0(v258, 0, 0x100uLL);
    v31 = v256;
    v32 = *a3;
    if ( *a3 > v256 )
      v32 = v256;
    v255 = v32;
    v33 = 0;
    v257 = 0;
    if ( v32 )
    {
      memmove(v258, a3 + 4, 8LL * v32);
      v31 = v256;
      v33 = v32;
    }
    if ( v33 < v31 )
    {
      do
      {
        v34 = v33++;
        v258[v34] = 0LL;
      }
      while ( v33 < v256 );
    }
    v35 = v221;
    v36 = 0LL;
    v220 = HIDWORD(v217);
    *(_OWORD *)v251 = 0LL;
    if ( v221 == v30 )
      v25 = v13;
    *(_QWORD *)&v251[16] = 0LL;
    v37 = HIDWORD(v217);
    v38 = (*(unsigned __int8 *)(v240 + 10) >> 3) & 1;
    if ( v38 > SHIDWORD(v217) )
      v37 = (*(unsigned __int8 *)(v240 + 10) >> 3) & 1;
    for ( HIDWORD(v217) = v37; ; HIDWORD(v217) = v38 )
    {
      if ( v35 )
      {
        v39 = *(unsigned __int16 *)(v35 + 136);
        memset(v259, 0, sizeof(v259));
        if ( (unsigned __int16)v39 >= *a3 )
          v40 = 0LL;
        else
          v40 = *(_QWORD *)&a3[4 * v39 + 4];
        v41 = *(_QWORD *)(v35 + 8);
        v42 = v40 & v41 & *(_QWORD *)(v35 + 8LL * SHIDWORD(v217) + 16);
        v225 = v42;
        if ( !v42 )
        {
          v36 = 0LL;
          goto LABEL_108;
        }
        if ( (*(_BYTE *)(v35 + 184) & 1) != 0 )
        {
          if ( (_BYTE)v217 )
          {
            RankBiasedIdleSmtSet = KiFindRankBiasedIdleSmtSet(v35, &v225);
            v35 = v221;
            if ( RankBiasedIdleSmtSet )
            {
              v42 = v225;
              goto LABEL_77;
            }
          }
          v42 = v225;
          if ( (v225 & *(_QWORD *)(v35 + 24)) == 0 )
          {
            if ( !(_BYTE)v217 )
            {
              if ( *v14 == v35 )
              {
                KiReduceByEffectiveIdleSmtSet(v223, (__int64)&v225);
                v35 = v221;
                v42 = v225;
              }
              goto LABEL_77;
            }
            v36 = 0LL;
LABEL_108:
            v57 = *(unsigned __int16 *)(v35 + 136);
            if ( v255 > (unsigned __int16)v57 )
              v258[v57] &= ~*(_QWORD *)(v35 + 128);
            goto LABEL_110;
          }
          if ( (_BYTE)v217 && (unsigned int)__popcnt(v41) < KiPerfIsoEnabled )
          {
            v36 = 0LL;
            goto LABEL_108;
          }
          v42 = v225 & *(_QWORD *)(v35 + 24);
        }
LABEL_77:
        RtlCopyVolatileMemory(v259, (const void *)(v35 + 576), 0x40uLL);
        v44 = -1;
        v45 = 0LL;
        v46 = 0;
        v47 = 0LL;
        do
        {
          if ( (v42 & (1LL << v46)) != 0 )
          {
            v48 = *((_BYTE *)v259 + v47);
            if ( v48 == v44 )
            {
              v45 |= 1LL << v47;
            }
            else if ( v48 < v44 )
            {
              v44 = *((_BYTE *)v259 + v47);
              v45 = 1LL << v46;
            }
          }
          ++v46;
          ++v47;
        }
        while ( v46 < 0x40u );
        v225 = v45;
        if ( (v45 & *(_QWORD *)(v222 + 200)) != 0 )
        {
          v36 = v222;
        }
        else
        {
          if ( v25 && (v45 & *(_QWORD *)(v25 + 200)) != 0 )
          {
            LODWORD(v6) = 0;
            HIDWORD(v217) = v220;
            goto LABEL_366;
          }
          v49 = *(_QWORD *)(v222 + 36448) & v45;
          if ( v49 )
          {
            v45 &= *(_QWORD *)(v222 + 36448);
            v225 = v49;
          }
          else if ( v25 && (v50 = *(_QWORD *)(v25 + 36448) & v45) != 0 )
          {
            v45 &= *(_QWORD *)(v25 + 36448);
            v225 = v50;
          }
          else
          {
            v51 = *(_QWORD *)(v222 + 36472) & v45;
            if ( v51 )
            {
              v45 &= *(_QWORD *)(v222 + 36472);
              v225 = v51;
            }
            else if ( v25 && (v52 = *(_QWORD *)(v25 + 36448) & v45) != 0 )
            {
              v45 &= *(_QWORD *)(v25 + 36448);
              v225 = v52;
            }
            else if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v53 = *(_QWORD *)(v222 + 36464) & v45;
              if ( v53 )
              {
                v45 &= *(_QWORD *)(v222 + 36464);
                v225 = v53;
              }
              else if ( v25 )
              {
                if ( (*(_QWORD *)(v25 + 36464) & v45) != 0 )
                  v45 &= *(_QWORD *)(v25 + 36464);
                v225 = v45;
              }
            }
          }
          v54 = *(_BYTE *)(v222 + 209);
          _BitScanForward64(&v55, __ROR8__(v45, v54));
          v56 = *(unsigned __int8 *)(v222 + 208) << 6;
          v234 = v55;
          v36 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (((_BYTE)v55 + v54) & 0x3Fu) + v56)];
        }
        if ( v36 )
          break;
        v35 = v221;
        goto LABEL_108;
      }
LABEL_110:
      *(_QWORD *)v251 = v240;
      *(_OWORD *)&v251[8] = 0LL;
      RtlCopyVolatileMemory(&v251[8], (const void *)(v240 + 16), 0x10uLL);
      while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v251[8]) )
      {
        FirstSetRightGroupMask = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v251[8]);
        _bittestandreset64((signed __int64 *)&v251[8], FirstSetRightGroupMask);
        v59 = *(_QWORD *)(*(_QWORD *)v251 + 8 * FirstSetRightGroupMask + 32);
        if ( v59 != v221 )
        {
          v60 = *(unsigned __int16 *)(v59 + 136);
          if ( (unsigned __int16)v60 < *a3 )
          {
            if ( *(_QWORD *)&a3[4 * v60 + 4] )
            {
              v36 = KiSelectIdleProcessor(
                      a3,
                      v223,
                      v222,
                      *(_QWORD *)(*(_QWORD *)v251 + 8 * FirstSetRightGroupMask + 32),
                      0LL,
                      (char *)&v217);
              if ( v36 )
                goto LABEL_121;
              v61 = *(unsigned __int16 *)(v59 + 136);
              if ( v255 > (unsigned __int16)v61 )
                v258[v61] &= ~*(_QWORD *)(v59 + 128);
            }
          }
        }
      }
      if ( v38 <= v220 )
        break;
      v35 = v221;
      --v38;
    }
LABEL_121:
    v62 = v220;
    HIDWORD(v217) = v220;
    if ( v36 )
      goto LABEL_364;
    v63 = v221;
    if ( v221 != v30 )
    {
      memset(&v251[24], 0, 24);
      v36 = 0LL;
      if ( (KiVelocityFlags & 0x800000) == 0 || (v64 = 1, (*(_BYTE *)(v239 + 10) & 8) == 0) )
        v64 = 0;
      v65 = HIDWORD(v217);
      v66 = v223;
      if ( v64 > v220 )
        v65 = v64;
      HIDWORD(v217) = v65;
      while ( !v30 )
      {
LABEL_168:
        *(_QWORD *)&v251[24] = v239;
        *(_OWORD *)&v251[32] = 0LL;
        RtlCopyVolatileMemory(&v251[32], (const void *)(v239 + 16), 0x10uLL);
        while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v251[32]) )
        {
          v82 = KeFindFirstSetRightGroupMask((__int64 *)&v251[32]);
          _bittestandreset64((signed __int64 *)&v251[32], v82);
          v83 = *(_QWORD *)(*(_QWORD *)&v251[24] + 8LL * v82 + 32);
          if ( v83 != v30 )
          {
            v84 = *(unsigned __int16 *)(v83 + 136);
            if ( (unsigned __int16)v84 < *a3 )
            {
              if ( *(_QWORD *)&a3[4 * v84 + 4] )
              {
                v36 = KiSelectIdleProcessor(a3, v66, v222, v83, 0LL, (char *)&v217);
                if ( v36 )
                  goto LABEL_178;
                v85 = *(unsigned __int16 *)(v83 + 136);
                if ( v255 > (unsigned __int16)v85 )
                  v258[v85] &= ~*(_QWORD *)(v83 + 128);
              }
            }
          }
        }
        if ( v64 <= v62 )
        {
LABEL_178:
          v63 = v221;
          HIDWORD(v217) = v62;
          if ( !v36 )
            goto LABEL_179;
LABEL_364:
          LODWORD(v6) = 0;
          goto LABEL_365;
        }
        HIDWORD(v217) = --v64;
      }
      v67 = *(unsigned __int16 *)(v30 + 136);
      memset(v260, 0, sizeof(v260));
      if ( (unsigned __int16)v67 >= *a3 )
        v68 = 0LL;
      else
        v68 = *(_QWORD *)&a3[4 * v67 + 4];
      v69 = *(_QWORD *)(v30 + 8);
      v70 = v68 & v69 & *(_QWORD *)(v30 + 8LL * SHIDWORD(v217) + 16);
      v228 = v70;
      if ( !v70 )
      {
        v36 = 0LL;
        goto LABEL_166;
      }
      if ( (*(_BYTE *)(v30 + 184) & 1) != 0 )
      {
        if ( (_BYTE)v217 && KiFindRankBiasedIdleSmtSet(v30, &v228) )
        {
          v70 = v228;
          goto LABEL_148;
        }
        v70 = v228;
        if ( (v228 & *(_QWORD *)(v30 + 24)) != 0 )
        {
          if ( !(_BYTE)v217 || (unsigned int)__popcnt(v69) >= KiPerfIsoEnabled )
          {
            v70 = v228 & *(_QWORD *)(v30 + 24);
            goto LABEL_148;
          }
          v36 = 0LL;
LABEL_166:
          v81 = *(unsigned __int16 *)(v30 + 136);
          if ( v255 > (unsigned __int16)v81 )
            v258[v81] &= ~*(_QWORD *)(v30 + 128);
          goto LABEL_168;
        }
        if ( (_BYTE)v217 )
        {
          v36 = 0LL;
          goto LABEL_166;
        }
        if ( *(_QWORD *)(v66 + 192) == v30 )
        {
          KiReduceByEffectiveIdleSmtSet(v66, (__int64)&v228);
          v70 = v228;
        }
      }
LABEL_148:
      RtlCopyVolatileMemory(v260, (const void *)(v30 + 576), 0x40uLL);
      v71 = -1;
      v72 = 0LL;
      v73 = 0;
      v74 = 0LL;
      do
      {
        if ( ((1LL << v73) & v70) != 0 )
        {
          v75 = *((_BYTE *)v260 + v74);
          if ( v75 == v71 )
          {
            v72 |= 1LL << v74;
          }
          else if ( v75 < v71 )
          {
            v71 = *((_BYTE *)v260 + v74);
            v72 = 1LL << v73;
          }
        }
        ++v73;
        ++v74;
      }
      while ( v73 < 0x40u );
      v228 = v72;
      if ( (v72 & *(_QWORD *)(v227 + 200)) != 0 )
      {
        v36 = v227;
      }
      else
      {
        v76 = *(_QWORD *)(v227 + 36448) & v72;
        if ( v76 )
        {
          v228 = *(_QWORD *)(v227 + 36448) & v72;
        }
        else
        {
          v76 = *(_QWORD *)(v227 + 36472) & v72;
          if ( v76 )
          {
            v228 = *(_QWORD *)(v227 + 36472) & v72;
          }
          else
          {
            v76 = v72;
            if ( (KiCacheAwareScheduling & 1) != 0 )
            {
              v77 = *(_QWORD *)(v227 + 36464) & v72;
              if ( v77 )
              {
                v228 = *(_QWORD *)(v227 + 36464) & v72;
                v76 = v77;
              }
            }
          }
        }
        v78 = *(_BYTE *)(v227 + 209);
        _BitScanForward64(&v79, __ROR8__(v76, v78));
        v80 = *(unsigned __int8 *)(v227 + 208) << 6;
        v237 = v79;
        v36 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (((_BYTE)v79 + v78) & 0x3Fu) + v80)];
      }
      if ( v36 )
        goto LABEL_178;
      goto LABEL_166;
    }
LABEL_179:
    v86 = v241;
    if ( v241 == v63 || v241 == v30 )
      goto LABEL_237;
    memset(&v251[48], 0, 24);
    v36 = 0LL;
    if ( (KiVelocityFlags & 0x800000) == 0 || (v87 = 1, (*(_BYTE *)(v238 + 10) & 8) == 0) )
      v87 = 0;
    v88 = HIDWORD(v217);
    v89 = v220;
    v90 = v223;
    if ( v87 > v220 )
      v88 = v87;
    HIDWORD(v217) = v88;
    while ( 2 )
    {
      if ( v86 )
      {
        v91 = *(unsigned __int16 *)(v86 + 136);
        memset(v261, 0, sizeof(v261));
        if ( (unsigned __int16)v91 >= *a3 )
          v92 = 0LL;
        else
          v92 = *(_QWORD *)&a3[4 * v91 + 4];
        v93 = *(_QWORD *)(v86 + 8);
        v94 = v92 & v93 & *(_QWORD *)(v86 + 8LL * SHIDWORD(v217) + 16);
        v229 = v94;
        if ( v94 )
        {
          if ( (*(_BYTE *)(v86 + 184) & 1) != 0 )
          {
            if ( (_BYTE)v217 && KiFindRankBiasedIdleSmtSet(v86, &v229) )
            {
              v94 = v229;
            }
            else
            {
              v94 = v229;
              if ( (v229 & *(_QWORD *)(v86 + 24)) != 0 )
              {
                if ( (_BYTE)v217 && (unsigned int)__popcnt(v93) < KiPerfIsoEnabled )
                {
                  v36 = 0LL;
                  goto LABEL_224;
                }
                v94 = v229 & *(_QWORD *)(v86 + 24);
              }
              else
              {
                if ( (_BYTE)v217 )
                {
                  v36 = 0LL;
                  goto LABEL_224;
                }
                if ( *(_QWORD *)(v90 + 192) == v86 )
                {
                  KiReduceByEffectiveIdleSmtSet(v90, (__int64)&v229);
                  v94 = v229;
                }
              }
            }
          }
          RtlCopyVolatileMemory(v261, (const void *)(v86 + 576), 0x40uLL);
          v95 = -1;
          v96 = 0LL;
          v97 = 0;
          v98 = 0LL;
          do
          {
            if ( (v94 & (1LL << v97)) != 0 )
            {
              v99 = *((_BYTE *)v261 + v98);
              if ( v99 == v95 )
              {
                v96 |= 1LL << v98;
              }
              else if ( v99 < v95 )
              {
                v95 = *((_BYTE *)v261 + v98);
                v96 = 1LL << v97;
              }
            }
            ++v97;
            ++v98;
          }
          while ( v97 < 0x40u );
          v229 = v96;
          if ( (v96 & *(_QWORD *)(v90 + 200)) != 0 )
          {
            v36 = v90;
          }
          else
          {
            v100 = *(_QWORD *)(v90 + 36448) & v96;
            if ( v100 )
            {
              v229 = *(_QWORD *)(v90 + 36448) & v96;
            }
            else
            {
              v100 = *(_QWORD *)(v90 + 36472) & v96;
              if ( v100 )
              {
                v229 = *(_QWORD *)(v90 + 36472) & v96;
              }
              else
              {
                v100 = v96;
                if ( (KiCacheAwareScheduling & 1) != 0 )
                {
                  v101 = *(_QWORD *)(v90 + 36464) & v96;
                  if ( v101 )
                  {
                    v229 = *(_QWORD *)(v90 + 36464) & v96;
                    v100 = v101;
                  }
                }
              }
            }
            v102 = *(_BYTE *)(v90 + 209);
            _BitScanForward64(&v103, __ROR8__(v100, v102));
            v104 = *(unsigned __int8 *)(v90 + 208) << 6;
            v235 = v103;
            v36 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (((_BYTE)v103 + v102) & 0x3Fu) + v104)];
          }
          if ( v36 )
            break;
        }
        else
        {
          v36 = 0LL;
        }
LABEL_224:
        v105 = *(unsigned __int16 *)(v86 + 136);
        if ( v255 > (unsigned __int16)v105 )
          v258[v105] &= ~*(_QWORD *)(v86 + 128);
      }
      *(_QWORD *)&v251[48] = v238;
      *(_OWORD *)&v251[56] = 0LL;
      RtlCopyVolatileMemory(&v251[56], (const void *)(v238 + 16), 0x10uLL);
      while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v251[56]) )
      {
        v106 = KeFindFirstSetRightGroupMask((__int64 *)&v251[56]);
        _bittestandreset64((signed __int64 *)&v251[56], v106);
        v107 = *(_QWORD *)(*(_QWORD *)&v251[48] + 8LL * v106 + 32);
        if ( v107 != v86 )
        {
          v108 = *(unsigned __int16 *)(v107 + 136);
          if ( (unsigned __int16)v108 < *a3 )
          {
            if ( *(_QWORD *)&a3[4 * v108 + 4] )
            {
              v36 = KiSelectIdleProcessor(a3, v90, v222, v107, 0LL, (char *)&v217);
              if ( v36 )
                goto LABEL_236;
              v109 = *(unsigned __int16 *)(v107 + 136);
              if ( v255 > (unsigned __int16)v109 )
                v258[v109] &= ~*(_QWORD *)(v107 + 128);
            }
          }
        }
      }
      if ( v87 > v89 )
      {
        HIDWORD(v217) = --v87;
        continue;
      }
      break;
    }
LABEL_236:
    v63 = v221;
    HIDWORD(v217) = v89;
    if ( v36 )
      goto LABEL_364;
LABEL_237:
    LODWORD(v6) = 0;
    v110 = 0;
    if ( v255 )
    {
      while ( !v258[v110] )
      {
        if ( ++v110 >= v255 )
          goto LABEL_365;
      }
      LOWORD(v111) = *(_WORD *)(v63 + 138);
      v112 = 0;
      v113 = WORD1(v250);
      LOWORD(v220) = v111;
      LODWORD(v221) = 0;
      LODWORD(v227) = WORD1(v250);
      while ( 1 )
      {
        v111 = (unsigned __int16)v111;
        if ( v113 )
        {
          LODWORD(v221) = ++v112;
          if ( v112 == (unsigned __int16)KeNumberNodes )
            break;
          v111 = *(unsigned int *)(qword_140E2DC10
                                 + 4LL * (v112 + (unsigned __int16)v111 * (unsigned int)(unsigned __int16)KeNumberNodes));
          v113 = v227;
        }
        else
        {
          v113 = 1;
          LODWORD(v227) = 1;
        }
        if ( (_DWORD)v111 == -1 )
          break;
        v114 = KeNodeBlock[v111];
        LOWORD(v111) = v220;
        if ( v114 != v238 && v114 != v239 && v114 != v240 )
        {
          v36 = 0LL;
          v115 = HIDWORD(v217);
          if ( (KiVelocityFlags & 0x800000) == 0 || (v116 = 1, (*(_BYTE *)(v114 + 10) & 8) == 0) )
            v116 = 0;
          v117 = HIDWORD(v217);
          if ( v116 > SHIDWORD(v217) )
            v117 = v116;
          for ( HIDWORD(v217) = v117; ; HIDWORD(v217) = v116 )
          {
            v252 = v114;
            v253 = 0LL;
            RtlCopyVolatileMemory(&v253, (const void *)(v114 + 16), 0x10uLL);
            while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v253) )
            {
              v118 = (unsigned __int16)KeFindFirstSetRightGroupMask((__int64 *)&v253);
              _bittestandreset64((signed __int64 *)&v253, v118);
              v119 = *(_QWORD *)(v252 + 8 * v118 + 32);
              if ( v119 )
              {
                v120 = *(unsigned __int16 *)(v119 + 136);
                if ( (unsigned __int16)v120 < *a3 )
                {
                  if ( *(_QWORD *)&a3[4 * v120 + 4] )
                  {
                    v36 = KiSelectIdleProcessor(a3, v223, v222, *(_QWORD *)(v252 + 8 * v118 + 32), 0LL, (char *)&v217);
                    if ( v36 )
                      goto LABEL_266;
                    v121 = *(unsigned __int16 *)(v119 + 136);
                    if ( v255 > (unsigned __int16)v121 )
                      v258[v121] &= ~*(_QWORD *)(v119 + 128);
                  }
                }
              }
            }
            if ( v116 <= v115 )
              break;
            --v116;
          }
LABEL_266:
          LODWORD(v6) = 0;
          HIDWORD(v217) = v115;
          v25 = v36;
          if ( v36 )
            goto LABEL_366;
          v122 = 0;
          if ( !v255 )
            goto LABEL_270;
          while ( !v258[v122] )
          {
            if ( ++v122 >= v255 )
              goto LABEL_270;
          }
          v112 = v221;
          v113 = v227;
          LOWORD(v111) = v220;
        }
      }
    }
LABEL_365:
    v25 = v36;
    if ( !v36 )
      goto LABEL_270;
LABEL_366:
    v244[0] = v25;
    result = SHIDWORD(v217) ^ (v25 ^ SHIDWORD(v217)) & 0xFFFFFFFFFFFFFFFEuLL;
    v219 = result;
    if ( HIDWORD(v217) )
    {
      if ( HIDWORD(v217) == 1 )
      {
        v162 = *(_BYTE **)(v25 + 36440);
        v163 = (unsigned __int8)*v162;
        v164 = (__int64 *)(v162 + 8);
        if ( *v162 )
          goto LABEL_371;
      }
    }
    else
    {
      v164 = v244;
      v163 = 1;
LABEL_371:
      v165 = v163;
      do
      {
        v166 = *v164;
        v167 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v166 + 48), 0LL) )
        {
          do
          {
            if ( (++v167 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v167);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v166 + 48) );
        }
        ++v164;
        LODWORD(v6) = 0;
        --v165;
      }
      while ( v165 );
      result = v219;
    }
    v168 = result & 0xFFFFFFFFFFFFFFFEuLL;
    v169 = 0LL;
    v244[1] = result & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (result & 1) == 0 )
    {
      if ( (*(_BYTE *)(v168 + 35) & 1) == 0 )
        goto LABEL_385;
LABEL_395:
      LODWORD(v6) = 0;
      v175 = result & 0xFFFFFFFFFFFFFFFEuLL;
      v245 = result & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (result & 1) != 0 )
      {
        v176 = (unsigned __int64 *)(*(_QWORD *)(v175 + 36440) + 8LL);
        v177 = **(unsigned __int8 **)(v175 + 36440);
        if ( **(_BYTE **)(v175 + 36440) )
          goto LABEL_399;
      }
      else
      {
        v176 = &v245;
        v177 = 1;
        do
LABEL_399:
          _InterlockedAnd64((volatile signed __int64 *)(v176[--v177] + 48), 0LL);
        while ( v177 );
      }
      goto LABEL_400;
    }
    if ( (result & 1) == 1 )
    {
      v169 = (__int64 *)(*(_QWORD *)(v168 + 36440) + 8LL);
      LODWORD(v6) = **(unsigned __int8 **)(v168 + 36440);
    }
    LOBYTE(v173) = 1;
    if ( (_DWORD)v6 )
    {
      v6 = (unsigned int)v6;
      do
      {
        v174 = *v169++;
        v173 = ((*(_BYTE *)(v174 + 35) & 1) == 0) & (unsigned __int8)v173;
        --v6;
      }
      while ( v6 );
      if ( !v173 )
        goto LABEL_395;
    }
LABEL_385:
    if ( (*(_BYTE *)(v25 + 35) & 0x10) == 0 )
    {
      v213 = v231;
      *(_QWORD *)v231 = result;
      *(_QWORD *)(v213 + 8) = 1LL;
      return result;
    }
    LODWORD(v6) = 0;
    v170 = result & 0xFFFFFFFFFFFFFFFEuLL;
    v246 = result & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (result & 1) != 0 )
    {
      v171 = (unsigned __int64 *)(*(_QWORD *)(v170 + 36440) + 8LL);
      v172 = **(unsigned __int8 **)(v170 + 36440);
      if ( !**(_BYTE **)(v170 + 36440) )
        goto LABEL_400;
    }
    else
    {
      v171 = &v246;
      v172 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v171[--v172] + 48), 0LL);
    while ( v172 );
LABEL_400:
    v10 = v223;
    v9 = v222;
    v8 = v230;
  }
  memset_0(v266, 0, 0x100uLL);
  v125 = *(_QWORD *)(v13 + 192);
  v126 = *(_QWORD *)(v9 + 192);
  v232 = 0LL;
  v25 = 0LL;
  v264 = 32;
  memset(v254, 0, sizeof(v254));
  memset_0(v266, 0, 0x100uLL);
  v127 = v264;
  v128 = *a3;
  if ( *a3 > v264 )
    v128 = v264;
  v263 = v128;
  v129 = 0;
  v265 = 0;
  if ( v128 )
  {
    memmove(v266, a3 + 4, 8LL * v128);
    v127 = v264;
    v129 = v128;
  }
  if ( v129 < v127 )
  {
    do
    {
      v130 = v129++;
      v266[v130] = 0LL;
    }
    while ( v129 < v264 );
  }
  v131 = *(unsigned __int16 *)(v126 + 136);
  v262[0] = 0LL;
  if ( v125 == v126 )
    v25 = v13;
  memset(&v262[1], 0, 48);
  if ( (unsigned __int16)v131 >= *a3 )
    v132 = 0LL;
  else
    v132 = *(_QWORD *)&a3[4 * v131 + 4];
  v133 = *(_QWORD *)(v126 + 8);
  v134 = v132 & v133 & *(_QWORD *)(v126 + 8LL * SHIDWORD(v217) + 16);
  v226 = v134;
  if ( !v134 )
  {
    v135 = v222;
    v36 = 0LL;
    goto LABEL_330;
  }
  if ( (*(_BYTE *)(v126 + 184) & 1) == 0 )
    goto LABEL_299;
  if ( (_BYTE)v217 && KiFindRankBiasedIdleSmtSet(v126, &v226) )
  {
    v134 = v226;
    goto LABEL_299;
  }
  v134 = v226;
  if ( (v226 & *(_QWORD *)(v126 + 24)) != 0 )
  {
    if ( !(_BYTE)v217 || (unsigned int)__popcnt(v133) >= KiPerfIsoEnabled )
    {
      v134 = v226 & *(_QWORD *)(v126 + 24);
      goto LABEL_299;
    }
    v135 = v222;
    v36 = 0LL;
  }
  else
  {
    if ( (_BYTE)v217 )
    {
      v135 = v222;
      v36 = 0LL;
      goto LABEL_330;
    }
    if ( *(_QWORD *)(v223 + 192) == v126 )
    {
      KiReduceByEffectiveIdleSmtSet(v223, (__int64)&v226);
      v134 = v226;
    }
LABEL_299:
    RtlCopyVolatileMemory(v262, (const void *)(v126 + 576), 0x40uLL);
    v136 = -1;
    v137 = 0LL;
    v138 = 0;
    v139 = 0LL;
    do
    {
      if ( ((1LL << v138) & v134) != 0 )
      {
        v140 = *((_BYTE *)v262 + v139);
        if ( v140 == v136 )
        {
          v137 |= 1LL << v139;
        }
        else if ( v140 < v136 )
        {
          v136 = *((_BYTE *)v262 + v139);
          v137 = 1LL << v138;
        }
      }
      ++v138;
      ++v139;
    }
    while ( v138 < 0x40u );
    v135 = v222;
    v226 = v137;
    if ( (v137 & *(_QWORD *)(v222 + 200)) != 0 )
    {
      v36 = v222;
      LODWORD(v6) = 0;
    }
    else
    {
      if ( v25 && (v137 & *(_QWORD *)(v25 + 200)) != 0 )
      {
LABEL_310:
        LODWORD(v6) = 0;
        goto LABEL_366;
      }
      v141 = *(_QWORD *)(v222 + 36448) & v137;
      if ( v141 )
      {
        v137 &= *(_QWORD *)(v222 + 36448);
        v226 = v141;
      }
      else if ( v25 && (v142 = *(_QWORD *)(v25 + 36448) & v137) != 0 )
      {
        v137 &= *(_QWORD *)(v25 + 36448);
        v226 = v142;
      }
      else
      {
        v143 = *(_QWORD *)(v222 + 36472) & v137;
        if ( v143 )
        {
          v137 &= *(_QWORD *)(v222 + 36472);
          v226 = v143;
        }
        else if ( v25 && (v144 = *(_QWORD *)(v25 + 36448) & v137) != 0 )
        {
          v137 &= *(_QWORD *)(v25 + 36448);
          v226 = v144;
        }
        else if ( (KiCacheAwareScheduling & 1) != 0 )
        {
          v145 = *(_QWORD *)(v222 + 36464) & v137;
          if ( v145 )
          {
            v137 &= *(_QWORD *)(v222 + 36464);
            v226 = v145;
          }
          else if ( v25 )
          {
            if ( (*(_QWORD *)(v25 + 36464) & v137) != 0 )
              v137 &= *(_QWORD *)(v25 + 36464);
            v226 = v137;
          }
        }
      }
      v146 = *(_BYTE *)(v222 + 209);
      LODWORD(v6) = 0;
      _BitScanForward64(&v147, __ROR8__(v137, v146));
      v148 = *(unsigned __int8 *)(v222 + 208) << 6;
      v236 = v147;
      v36 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (((_BYTE)v147 + v146) & 0x3Fu) + v148)];
    }
    if ( v36 )
      goto LABEL_365;
  }
LABEL_330:
  v149 = *(unsigned __int16 *)(v126 + 136);
  v150 = v263;
  if ( v263 > (unsigned __int16)v149 )
  {
    v266[v149] &= ~*(_QWORD *)(v126 + 128);
    v150 = v263;
  }
  if ( v125 == v126 || (v151 = *(unsigned __int16 *)(v125 + 136), (unsigned __int16)v151 >= v150) )
  {
    v152 = v223;
  }
  else
  {
    v152 = v223;
    if ( v266[v151] )
    {
      v36 = KiSelectIdleProcessor(a3, v223, v135, v125, v13, (char *)&v217);
      if ( v36 )
        goto LABEL_364;
    }
  }
  v153 = *(unsigned __int16 *)(v125 + 136);
  if ( v150 > (unsigned __int16)v153 )
  {
    v266[v153] &= ~*(_QWORD *)(v125 + 128);
    v150 = v263;
  }
  v154 = *(_QWORD *)(v152 + 192);
  v232 = v154;
  if ( v154 != v126 && v154 != v125 )
  {
    v155 = *(unsigned __int16 *)(v154 + 136);
    if ( (unsigned __int16)v155 < v150 )
    {
      if ( v266[v155] )
      {
        v36 = KiSelectIdleProcessor(a3, v152, v222, v154, v152, (char *)&v217);
        if ( v36 )
          goto LABEL_364;
      }
    }
  }
  v156 = *(unsigned __int16 *)(v154 + 136);
  if ( v150 > (unsigned __int16)v156 )
  {
    v266[v156] &= ~*(_QWORD *)(v154 + 128);
    v150 = v263;
  }
  for ( i = 0; i < v150; ++i )
  {
    if ( v266[i] )
    {
      KiInitializeSystemSubNodeEnumerationContext((__int64)v254, *(_WORD *)(v126 + 138));
      if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v254, &v232) )
        goto LABEL_364;
      while ( 1 )
      {
        v158 = v232;
        if ( v232 != v126 && v232 != v125 && v232 != *(_QWORD *)(v152 + 192) )
        {
          v36 = KiSelectIdleProcessor(a3, v152, v222, v232, 0LL, (char *)&v217);
          v25 = v36;
          if ( v36 )
            goto LABEL_310;
          v159 = *(unsigned __int16 *)(v158 + 136);
          if ( v150 > (unsigned __int16)v159 )
          {
            v266[v159] &= ~*(_QWORD *)(v158 + 128);
            v150 = v263;
          }
          v160 = 0;
          if ( !v150 )
            goto LABEL_270;
          while ( !v266[v160] )
          {
            if ( ++v160 >= v150 )
              goto LABEL_270;
          }
          v152 = v223;
        }
        if ( (unsigned int)KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v254, &v232) )
          goto LABEL_364;
      }
    }
  }
LABEL_270:
  v123 = *(unsigned __int8 *)(v222 + 208);
  if ( (unsigned __int16)v123 >= *a3 )
  {
    v124 = 0LL;
  }
  else
  {
    _mm_lfence();
    v124 = *(_QWORD *)&a3[4 * v123 + 4];
  }
  v8 = v230;
  v221 = v124;
  v178 = KiSelectProcessorToPreempt(v230, v222, v124, 0LL);
  v241 = v178;
  v179 = v178;
  v180 = *(unsigned __int8 **)(v178 + 56);
  v181 = *(_QWORD *)(v178 + 192);
  v227 = v181;
  v182 = *v180;
  v183 = HIDWORD(v217);
  if ( SHIDWORD(v217) < (int)(v182 >> 7) )
    v183 = v182 >> 7;
  KiAcquirePrcbLocksForIsolationUnit(v178, v183, &v219);
  v184 = *(char **)(v179 + 56);
  if ( ((*v184 ^ v182) & 0x80u) != 0 )
  {
    v185 = v219 & 1;
    v186 = 0LL;
    while ( 1 )
    {
      v187 = *v184;
      v188 = HIDWORD(v217);
      v189 = (unsigned __int8)*v184 >> 7;
      if ( SHIDWORD(v217) < v189 )
        v188 = v189;
      if ( v188 == v185 )
      {
LABEL_466:
        v8 = v230;
        v181 = v227;
        v124 = v221;
        break;
      }
      if ( v188 < v185 )
      {
        KiDowngradeIsolationUnitLockHandle(&v219, v188);
        goto LABEL_466;
      }
      v190 = v186;
      v191 = (int)v186;
      v192 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      v193 = (unsigned __int64 *)v186;
      v243 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      v194 = (unsigned int)v186;
      if ( (v219 & 1) != 0 )
      {
        if ( (v219 & 1) == 1 )
        {
          v190 = (__int64 *)(*(_QWORD *)(v192 + 36440) + 8LL);
          v191 = **(unsigned __int8 **)(v192 + 36440);
        }
      }
      else
      {
        v190 = (__int64 *)&v243;
        v191 = 1;
      }
      if ( v188 )
      {
        if ( v188 == 1 )
        {
          v193 = (unsigned __int64 *)(*(_QWORD *)(v192 + 36440) + 8LL);
          v194 = **(unsigned __int8 **)(v192 + 36440);
        }
        v195 = *v190;
        LODWORD(v196) = (_DWORD)v186;
        v197 = (unsigned int)v186;
        if ( !v194 )
        {
LABEL_421:
          v219 = v219 & 0xFFFFFFFFFFFFFFFEuLL | v188 & 1;
          goto LABEL_466;
        }
      }
      else
      {
        v195 = *v190;
        v193 = &v243;
        v194 = 1;
        LODWORD(v196) = (_DWORD)v186;
        v197 = (unsigned int)v186;
      }
      v198 = v193;
      while ( 1 )
      {
        if ( *v198 == v195 )
        {
          v196 = (unsigned int)(v196 + 1);
          if ( (_DWORD)v196 == v191 )
            v195 = -1LL;
          else
            v195 = v190[v196];
          goto LABEL_429;
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(*v198 + 48), 0LL) )
          break;
LABEL_429:
        ++v197;
        ++v198;
        if ( v197 >= v194 )
          goto LABEL_421;
      }
      v199 = *v190;
      v186 = 0LL;
      LODWORD(v200) = 0;
      if ( v197 )
      {
        v186 = (__int64 *)v197;
        do
        {
          if ( v199 == *v193 )
          {
            v200 = (unsigned int)(v200 + 1);
            if ( (_DWORD)v200 == v191 )
              v199 = -1LL;
            else
              v199 = v190[v200];
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*v193 + 48), 0LL);
          }
          ++v193;
          v186 = (__int64 *)((char *)v186 - 1);
        }
        while ( v186 );
      }
      v201 = (unsigned __int64 *)v186;
      v202 = (int)v186;
      v203 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      v247 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v219 & 1) == 0 )
      {
        v201 = &v247;
        v202 = 1;
        goto LABEL_445;
      }
      if ( (v219 & 1) == 1 )
      {
        v201 = (unsigned __int64 *)(*(_QWORD *)(v203 + 36440) + 8LL);
        v202 = **(unsigned __int8 **)(v203 + 36440);
      }
      while ( v202 )
LABEL_445:
        _InterlockedAnd64((volatile signed __int64 *)(v201[--v202] + 48), 0LL);
      v248 = v179;
      v219 = v188 ^ (v179 ^ v188) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v188 )
      {
        if ( v188 == 1 )
        {
          v204 = *(_BYTE **)(v179 + 36440);
          v205 = (unsigned __int8)*v204;
          v206 = (__int64 *)(v204 + 8);
          if ( *v204 )
            goto LABEL_451;
        }
      }
      else
      {
        v206 = &v248;
        v205 = 1;
LABEL_451:
        v207 = v205;
        do
        {
          v208 = *v206;
          v209 = (unsigned int)v186;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v208 + 48), 0LL) )
          {
            do
            {
              if ( (++v209 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v209);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v208 + 48) );
          }
          ++v206;
          v186 = 0LL;
          --v207;
        }
        while ( v207 );
        v179 = v241;
      }
      v184 = *(char **)(v179 + 56);
      if ( ((*v184 ^ v187) & 0x80u) == 0 )
        goto LABEL_466;
      v185 = v188;
    }
  }
  if ( a5 )
  {
    IsIsolationUnitIdleByHandle = KiIsIsolationUnitIdleByHandle(&v219);
    v215 = v231;
    *(_DWORD *)(v231 + 8) = IsIsolationUnitIdleByHandle;
  }
  else
  {
    if ( (*(_QWORD *)(v181 + 8LL * SHIDWORD(v217) + 16) & *(_QWORD *)(v181 + 8) & v124) != 0 )
    {
      LODWORD(v6) = 0;
      v210 = 0LL;
      v211 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      v212 = 0;
      v249 = v219 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v219 & 1) != 0 )
      {
        if ( (v219 & 1) == 1 )
        {
          v210 = (unsigned __int64 *)(*(_QWORD *)(v211 + 36440) + 8LL);
          v212 = **(unsigned __int8 **)(v211 + 36440);
        }
        while ( v212 )
LABEL_475:
          _InterlockedAnd64((volatile signed __int64 *)(v210[--v212] + 48), 0LL);
        v10 = v223;
        v9 = v222;
        goto LABEL_2;
      }
      v210 = &v249;
      v212 = 1;
      goto LABEL_475;
    }
    if ( (*(_BYTE *)(v179 + 35) & 0x10) == 0 && (unsigned int)KiIsIsolationUnitIdleByHandle(&v219) )
    {
      v231 = v124;
      v230 = v214;
      KeKeepData();
      KeKeepData();
      __fastfail(0x21u);
    }
    v215 = v231;
    *(_DWORD *)(v231 + 8) = 0;
  }
  if ( (*(_BYTE *)(v179 + 35) & 0x10) != 0 )
  {
    KiReleasePrcbLocksForIsolationUnit((__int64 *)&v219);
    KiSelectCandidateProcessor(v179, v8, -1LL, HIDWORD(v217), &v219);
    *(_DWORD *)(v215 + 8) = KiIsIsolationUnitIdleByHandle(&v219) != 0;
  }
  result = v219;
  *(_QWORD *)v215 = v219;
  *(_DWORD *)(v215 + 12) = 0;
  return result;
}
