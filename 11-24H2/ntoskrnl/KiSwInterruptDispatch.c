/*
 * XREFs of KiSwInterruptDispatch @ 0x1405061B0
 * Callers:
 *     KiSwInterrupt @ 0x1406B2330 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x140441A00 (KiGetTrapFrameMode.c)
 *     KeExitRetpoline @ 0x14045517C (KeExitRetpoline.c)
 *     KiReadKernelDr7 @ 0x1405B4D88 (KiReadKernelDr7.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     SdbpCheckDll @ 0x140BDC7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  _QWORD *Pool2; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  const char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned int i; // r11d
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r10
  __int64 v31; // r8
  _QWORD *v32; // rdx
  unsigned __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  unsigned int *v37; // rax
  __int64 v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // r15
  int v41; // r14d
  _QWORD *v42; // r8
  unsigned int v43; // r9d
  int *v44; // rsi
  __int64 v45; // r10
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // r8
  _QWORD *v51; // r9
  const char *v52; // rax
  int v53; // r14d
  __int64 v54; // r15
  unsigned __int64 v55; // rdi
  unsigned int v56; // r10d
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  bool v63; // zf
  unsigned __int64 j; // rax
  unsigned int v65; // edi
  BOOL v66; // r12d
  __int64 v67; // rcx
  unsigned __int8 v68; // r13
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // r14
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rdi
  unsigned __int64 v77; // r11
  int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int8 v81; // r14
  unsigned int *v82; // rcx
  unsigned int *v83; // rdi
  char v84; // r15
  unsigned __int64 v85; // r13
  __int64 v86; // rdx
  char *v87; // r8
  unsigned int *v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rax
  char v91; // cl
  char v92; // al
  int v93; // ecx
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // r10
  __int64 v97; // r8
  _QWORD *v98; // rdx
  unsigned __int64 v99; // r9
  int v100; // ecx
  __int64 v101; // rax
  int v102; // ecx
  __int64 v103; // rcx
  __int64 v104; // r10
  __int64 v105; // r8
  _QWORD *v106; // rdx
  unsigned __int64 v107; // r9
  int v108; // ecx
  __int64 v109; // rax
  __int64 v110; // rcx
  unsigned __int8 v111; // r15
  unsigned __int64 v112; // rdx
  unsigned int *v113; // rcx
  unsigned int *v114; // rdi
  unsigned __int64 v115; // r14
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rax
  int v118; // ecx
  __int64 v119; // rcx
  __int64 v120; // r10
  __int64 v121; // r8
  _QWORD *v122; // rdx
  unsigned __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int *v127; // rcx
  unsigned int *v128; // rdi
  char v129; // r15
  unsigned __int64 v130; // r12
  __int64 v131; // rdx
  char *v132; // r8
  unsigned int *v133; // r9
  __int64 v134; // rcx
  __int64 v135; // rax
  char v136; // cl
  char v137; // al
  int v138; // ecx
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // r10
  __int64 v142; // r8
  _QWORD *v143; // rdx
  unsigned __int64 v144; // r9
  __int64 v145; // rax
  int v146; // ecx
  int v147; // ecx
  __int64 v148; // rcx
  __int64 v149; // r10
  _QWORD *v150; // rdx
  unsigned __int64 v151; // r9
  int v152; // ecx
  __int64 v153; // rax
  __int64 v154; // rdi
  __int64 v155; // rsi
  __int64 v156; // r14
  __int64 v157; // r15
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v159; // r9
  __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __int64 v162; // r11
  unsigned __int64 v163; // rcx
  unsigned __int64 v164; // r14
  unsigned __int64 v165; // r15
  _QWORD *v166; // r11
  unsigned __int64 v167; // rcx
  unsigned __int64 v168; // rax
  __int64 v169; // r12
  char *v170; // r8
  _QWORD *v171; // rcx
  unsigned __int64 v172; // r9
  signed __int64 v173; // r8
  unsigned int v174; // esi
  __int64 v175; // r10
  unsigned __int64 *v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // r9
  unsigned __int64 v179; // rax
  __int64 *v180; // r13
  __int64 v181; // rax
  unsigned __int64 v182; // rdx
  unsigned __int64 v183; // rcx
  unsigned int v184; // r9d
  _QWORD *v185; // r10
  unsigned int v186; // edi
  unsigned __int64 v187; // rsi
  char *v188; // r10
  unsigned __int64 v189; // rcx
  unsigned __int64 v190; // rax
  unsigned __int64 v191; // r8
  unsigned __int64 v192; // rax
  __int64 v193; // rdx
  _BYTE *v194; // r9
  __int64 v195; // r11
  __int64 v196; // r10
  unsigned __int64 v197; // rax
  unsigned __int64 *v198; // rcx
  __int64 *v199; // r11
  __int64 v200; // rax
  unsigned __int64 v201; // rdx
  unsigned __int64 v202; // rcx
  unsigned __int64 v203; // r8
  int v204; // esi
  _QWORD *v205; // r9
  __int64 v206; // r11
  const char *v207; // rax
  int v208; // r10d
  int v209; // edi
  __int64 v210; // r8
  __int64 v211; // rax
  __int64 v212; // r8
  unsigned __int128 v213; // rax
  __int64 v214; // rax
  void (__fastcall *v215)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  __int64 v217; // rcx
  unsigned __int64 v218; // rcx
  unsigned __int64 v219; // rax
  int v220; // ecx
  int v221; // ecx
  int v222; // ecx
  int v223; // ecx
  int v224; // ecx
  volatile signed __int32 *v225; // rax
  _QWORD *v227; // [rsp+40h] [rbp-C0h]
  int v228; // [rsp+40h] [rbp-C0h]
  __int64 v229; // [rsp+48h] [rbp-B8h]
  unsigned int v230; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v231; // [rsp+58h] [rbp-A8h]
  char v232; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v233; // [rsp+68h] [rbp-98h]
  unsigned __int64 v234; // [rsp+70h] [rbp-90h]
  __int64 v235; // [rsp+78h] [rbp-88h]
  unsigned __int64 v236; // [rsp+80h] [rbp-80h]
  __int64 v237; // [rsp+88h] [rbp-78h]
  unsigned __int64 k; // [rsp+90h] [rbp-70h]
  __int64 v239; // [rsp+98h] [rbp-68h]
  __int64 v240; // [rsp+A0h] [rbp-60h]
  __int64 v241; // [rsp+A8h] [rbp-58h]
  __int64 v242; // [rsp+B0h] [rbp-50h]
  __int64 v243; // [rsp+B8h] [rbp-48h]
  __int64 v244; // [rsp+C0h] [rbp-40h]
  __int64 v245; // [rsp+C8h] [rbp-38h]
  _QWORD v246[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v247[12]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v249; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v250; // [rsp+170h] [rbp+70h]
  unsigned __int64 v251; // [rsp+178h] [rbp+78h]

  v1 = *(_QWORD **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2524LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v241 = *((_QWORD *)&v4 + 1);
  Pool2 = (_QWORD *)ExAllocatePool2(0x42uLL, v1[347] + 2879LL, dword_140E0F2D0[((unsigned __int8)v4 ^ BYTE8(v4)) & 0xF]);
  v227 = Pool2;
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = Pool2 + 4;
    Pool2[3] = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = sub_140516920;
    v249 = Pool2 + 4;
    memmove(Pool2 + 4, v1, 0xAE8uLL);
    v6[348] = v1;
    v6[349] = v6 + 353;
    v8 = __rdtsc();
    *((_DWORD *)v6 + 538) = 0;
    v9 = *((unsigned int *)v6 + 531);
    v10 = (__ROR8__(v8, 3) ^ v8) * (unsigned __int128)0x7010008004002001uLL;
    v242 = *((_QWORD *)&v10 + 1);
    *((_DWORD *)v6 + 536) = (*((_QWORD *)&v10 + 1) ^ (unsigned __int64)v10) % v9;
    v11 = v6[348];
    v12 = *((_DWORD *)v6 + 533);
    v13 = (_QWORD *)v11;
    v14 = __rdtsc();
    v15 = __ROR8__(v14, 3);
    v16 = v6[267];
    v243 = ((v15 ^ v14) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v6 + 540) = (67117057 * (v15 ^ v14)) ^ v243;
    v6[350] = ((unsigned __int64)v6 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = (const char *)v11;
    v18 = *(unsigned int *)(v11 + 2052);
    if ( v11 < v11 + v18 )
    {
      do
      {
        _mm_prefetch(v17, 0);
        v17 += 64;
      }
      while ( (unsigned __int64)v17 < v11 + v18 );
    }
    v19 = v16;
    for ( i = (unsigned int)v18 >> 7; i; --i )
    {
      v21 = 8LL;
      do
      {
        v22 = v13[1] ^ __ROL8__(*v13 ^ v19, v12);
        v13 += 2;
        v19 = __ROL8__(v22, v12);
        --v21;
      }
      while ( v21 );
      v23 = __ROL8__(v16 ^ ((unsigned __int64)v13 - v11), 17) ^ v16 ^ ((unsigned __int64)v13 - v11);
      v244 = (v23 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v12 = ((unsigned __int8)(v244 ^ v23) ^ (unsigned __int8)v12) & 0x3F;
      if ( !v12 )
        LOBYTE(v12) = 1;
    }
    v24 = v18 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)(v18 & 0x7F) >> 3;
      do
      {
        v19 = __ROL8__(*v13++ ^ v19, v12);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      v19 = __ROL8__(v26 ^ v19, v12);
    }
    if ( v19 != qword_140FC6A90 )
    {
      v27 = v6[181];
      *(_QWORD *)v27 = v11;
      *(_DWORD *)(v27 + 16) = v18;
      if ( !*((_DWORD *)v6 + 590) )
      {
        *(_QWORD *)(v6[181] + 24LL) = qword_140FC6A90 ^ v19;
        if ( !*((_DWORD *)v6 + 590) )
        {
          v6[297] = 0LL;
          v28 = *((_DWORD *)v6 + 638);
          v6[296] = v6 - 0xB8BF814EDC6E95FLL;
          v6[298] = 273LL;
          v6[299] = v19;
          *((_DWORD *)v6 + 590) = 1;
          if ( (v28 & 0x20000000) == 0 && (*((_DWORD *)v6 + 639) & 0x200000) != 0 && (v28 & 1) != 0 )
          {
            v29 = *((unsigned int *)v6 + 677);
            v30 = v6[267];
            v31 = v6[339];
            v32 = (_QWORD *)((char *)v7 + v29);
            v33 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 521) - v29) >> 3] + v29;
            while ( v32 != (_QWORD *)v33 )
            {
              *v32 ^= v31;
              v31 = ((v30 ^ *v32++) + __ROR8__(v31, v31 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v6 + 639) &= ~0x200000u;
            if ( v31 != v6[340] )
            {
              v34 = *((_DWORD *)v6 + 521);
              v35 = v6[181];
              *(_QWORD *)v35 = v7;
              *(_DWORD *)(v35 + 16) = v34;
              if ( !*((_DWORD *)v6 + 590) )
                *(_QWORD *)(v6[181] + 24LL) = v31 ^ v6[340];
              sub_140BDA384(v6 + 4, 0LL, v31, 256LL);
            }
          }
        }
      }
    }
    v36 = 4;
    v229 = 0LL;
    v37 = &v230;
    do
    {
      *(_BYTE *)v37 = 0;
      v37 = (unsigned int *)((char *)v37 + 1);
      --v36;
    }
    while ( v36 );
    v38 = 2LL;
    v39 = 0;
    v250 = 0;
    v40 = 6LL;
    v41 = 48;
    if ( *((_DWORD *)v6 + 531) )
    {
      while ( 1 )
      {
        v42 = v7;
        v43 = 0;
        if ( v7[344] )
          v42 = (_QWORD *)v7[344];
        v44 = (int *)((char *)v42 + *((unsigned int *)v42 + 522));
        if ( (_DWORD)v229 && HIDWORD(v229) <= v39 )
        {
          v43 = HIDWORD(v229);
          v44 = (int *)((char *)v42 + v230);
        }
        if ( v43 != v39 )
        {
          v45 = v39 - v43;
          v43 = v39;
          while ( 1 )
          {
            if ( *v44 == 1 )
            {
LABEL_57:
              v46 = 4 * (v44[4] / 0xCu) + 48;
              goto LABEL_58;
            }
            if ( *v44 == 7 )
            {
              v46 = (unsigned int)(24 * (v44[6] + 2));
              goto LABEL_59;
            }
            if ( *v44 == 8 )
              break;
            switch ( *v44 )
            {
              case 10:
                v46 = (unsigned int)(16 * (v44[7] + 3));
                break;
              case 28:
                v47 = *((unsigned __int16 *)v44 + 20);
LABEL_55:
                v46 = (v47 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v46 = (((v44[9] != 0 ? v44[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v44 + 20) + 2);
                goto LABEL_58;
              case 33:
                v46 = 20 * (unsigned int)(((v44[8] & 0xFFF) + (unsigned __int64)(unsigned int)v44[10] + 4095) >> 12)
                    + 48;
LABEL_58:
                v38 = 2LL;
                break;
              case 43:
                goto LABEL_57;
              default:
                v46 = 48LL;
                break;
            }
LABEL_59:
            v44 = (int *)((char *)v44 + v46);
            if ( !--v45 )
            {
              v7 = v249;
              v39 = v250;
              goto LABEL_61;
            }
          }
          v47 = *((unsigned __int16 *)v44 + 16);
          goto LABEL_55;
        }
LABEL_61:
        LODWORD(v229) = 1;
        HIDWORD(v229) = v43;
        v230 = (_DWORD)v44 - (_DWORD)v42;
        v48 = *v44;
        if ( (_DWORD)v48 == 36 )
          break;
        if ( (unsigned int)v48 > 0x2B )
          goto LABEL_196;
        v124 = 0x80200000002LL;
        if ( !_bittest64(&v124, v48) )
          goto LABEL_196;
        v125 = v7[167];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v7[44])(v125);
        v127 = *(unsigned int **)v7[196];
        v128 = v127 + 4;
        v129 = *((_BYTE *)v127 + 12);
        v130 = (unsigned __int64)&v127[6 * *v127 + 4];
        do
        {
          v131 = 24LL;
          v132 = (char *)(v44 + 6);
          v133 = v128;
          while ( 1 )
          {
            v134 = *(_QWORD *)v133;
            v133 += 2;
            v135 = *(_QWORD *)v132;
            v132 += 8;
            if ( v134 != v135 )
              break;
            v131 = (unsigned int)(v131 - 8);
            if ( (unsigned int)v131 < 8 )
            {
              if ( !(_DWORD)v131 )
                goto LABEL_169;
              while ( 1 )
              {
                v136 = *(_BYTE *)v133;
                v133 = (unsigned int *)((char *)v133 + 1);
                v137 = *v132++;
                if ( v136 != v137 )
                  goto LABEL_168;
                v63 = (_DWORD)v131 == 1;
                v131 = (unsigned int)(v131 - 1);
                if ( v63 )
                  goto LABEL_169;
              }
            }
          }
LABEL_168:
          v128 += 6;
        }
        while ( (unsigned __int64)v128 < v130 );
LABEL_169:
        ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v7[52])(v7[167], v131, v132, v133);
        __writecr8(CurrentIrql);
        if ( !v129 )
          goto LABEL_187;
        v138 = *((_DWORD *)v7 + 631);
        if ( (v138 & 0x10) != 0 && !*((_DWORD *)v7 + 582) )
        {
          v7[292] = v7 - 0xB8BF814EDC6E963LL;
          v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
          v7[294] = *v44;
          v139 = *((_DWORD *)v7 + 630);
          v7[295] = 1LL;
          *((_DWORD *)v7 + 582) = 1;
          if ( (v139 & 0x20000000) == 0 && (v138 & 0x200000) != 0 && (v139 & 1) != 0 )
          {
            v140 = *((unsigned int *)v7 + 669);
            v141 = v7[263];
            v142 = v7[335];
            v143 = (_QWORD *)((char *)v7 + v140);
            v144 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v140) >> 3] + v140;
            while ( v143 != (_QWORD *)v144 )
            {
              *v143 ^= v142;
              v142 = ((v141 ^ *v143++) + __ROR8__(v142, v142 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v7 + 631) &= ~0x200000u;
            if ( v142 != v7[336] )
            {
              v145 = v7[177];
              v146 = *((_DWORD *)v7 + 513);
              *(_QWORD *)v145 = v7;
              *(_DWORD *)(v145 + 16) = v146;
              if ( !*((_DWORD *)v7 + 582) )
                *(_QWORD *)(v7[177] + 24LL) = v7[336] ^ v142;
              sub_140BDA384(v7, 0LL, v142, 256LL);
            }
          }
        }
        if ( *((_QWORD *)v44 + 3) != 1LL )
        {
LABEL_187:
          if ( v128 == (unsigned int *)v130 && !*((_DWORD *)v7 + 582) )
          {
            v147 = *((_DWORD *)v7 + 630);
            v7[292] = v7 - 0xB8BF814EDC6E963LL;
            v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
            v7[294] = *v44;
            v7[295] = v128;
            *((_DWORD *)v7 + 582) = 1;
            if ( (v147 & 0x20000000) == 0 && (*((_DWORD *)v7 + 631) & 0x200000) != 0 && (v147 & 1) != 0 )
            {
              v148 = *((unsigned int *)v7 + 669);
              v149 = v7[263];
              v121 = v7[335];
              v150 = (_QWORD *)((char *)v7 + v148);
              v151 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v148) >> 3] + v148;
              while ( v150 != (_QWORD *)v151 )
              {
                *v150 ^= v121;
                v121 = ((v149 ^ *v150++) + __ROR8__(v121, v121 & 0x3F)) ^ 0xEFA;
              }
LABEL_191:
              *((_DWORD *)v7 + 631) &= ~0x200000u;
              if ( v121 != v7[336] )
              {
                v152 = *((_DWORD *)v7 + 513);
                v153 = v7[177];
                *(_QWORD *)v153 = v7;
                *(_DWORD *)(v153 + 16) = v152;
                if ( !*((_DWORD *)v7 + 582) )
                  *(_QWORD *)(v7[177] + 24LL) = v121 ^ v7[336];
                sub_140BDA384(v7, 0LL, v121, 256LL);
              }
            }
          }
        }
LABEL_195:
        v39 = v250;
        v41 = 48;
        v40 = 6LL;
LABEL_196:
        ++v39;
        v38 = 2LL;
        v250 = v39;
        if ( v39 >= *((_DWORD *)v7 + 523) )
          goto LABEL_197;
      }
      v49 = (_QWORD *)*((_QWORD *)v44 + 1);
      v50 = (unsigned int)v44[4];
      v51 = v49;
      *((_DWORD *)v7 + 530) += v50;
      v52 = (const char *)v49;
      v53 = *((_DWORD *)v7 + 525);
      v54 = v7[263];
      if ( v49 < (_QWORD *)((char *)v49 + v50) )
      {
        do
        {
          _mm_prefetch(v52, 0);
          v52 += 64;
        }
        while ( v52 < (const char *)v49 + v50 );
      }
      v55 = v7[263];
      v56 = (unsigned int)v50 >> 7;
      if ( (unsigned int)v50 >> 7 )
      {
        do
        {
          v57 = 8LL;
          do
          {
            v58 = v51[1] ^ __ROL8__(*v51 ^ v55, v53);
            v51 += 2;
            v55 = __ROL8__(v58, v53);
            --v57;
          }
          while ( v57 );
          v59 = __ROL8__(v54 ^ ((char *)v51 - (char *)v49), 17) ^ v54 ^ ((char *)v51 - (char *)v49);
          v38 = (v59 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v245 = v38;
          v53 = ((unsigned __int8)(v38 ^ v59) ^ (unsigned __int8)v53) & 0x3F;
          if ( !v53 )
            LOBYTE(v53) = 1;
          --v56;
        }
        while ( v56 );
        v7 = v249;
      }
      v60 = v50 & 0x7F;
      if ( (unsigned int)v60 >= 8 )
      {
        v61 = (unsigned __int64)(unsigned int)v60 >> 3;
        do
        {
          v55 = __ROL8__(*v51++ ^ v55, v53);
          v60 = (unsigned int)(v60 - 8);
          --v61;
        }
        while ( v61 );
      }
      if ( (_DWORD)v60 )
      {
        do
        {
          v62 = *(unsigned __int8 *)v51;
          v51 = (_QWORD *)((char *)v51 + 1);
          v55 = __ROL8__(v62 ^ v55, v53);
          v63 = (_DWORD)v60 == 1;
          v60 = (unsigned int)(v60 - 1);
        }
        while ( !v63 );
      }
      for ( j = v55; ; LODWORD(v55) = j ^ v55 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v65 = v55 & 0x7FFFFFFF;
      v66 = 0;
      if ( v65 != v44[5] )
      {
        if ( !*v44 )
          v66 = v44[6] != 0;
        v67 = (unsigned int)v44[4];
        v38 = *((_QWORD *)v44 + 1);
        if ( v44[4] && (*((_DWORD *)v7 + 631) & 0x40) != 0 )
        {
          v68 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v69 = v38 & 0xFFFFFFFFFFFFF000uLL;
          v231 = (v38 + v67 - 1) | 0xFFF;
          v251 = (v38 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v70 = v68;
            while ( 1 )
            {
              v71 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v7[141])(v69, 0LL, v60, v51);
              if ( v71 != -1073741267 )
                break;
              if ( v66 )
                goto LABEL_93;
              if ( v68 > 1u )
                goto LABEL_91;
              v70 = v68;
              __writecr8(v68);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v71 < 0 )
            {
LABEL_93:
              __writecr8(v70);
              goto LABEL_94;
            }
LABEL_91:
            v69 += 4096LL;
            v251 += 4096LL;
            if ( v251 != v231 )
              continue;
            break;
          }
          __writecr8(v70);
        }
        else
        {
LABEL_94:
          v51 = v7;
          if ( !*((_DWORD *)v7 + 582) )
            *(_QWORD *)(v7[177] + 24LL) = v65 ^ (unsigned __int64)(unsigned int)v44[5];
          v72 = *((_QWORD *)v44 + 1);
          if ( !*((_DWORD *)v7 + 582) )
          {
            v38 = 1LL;
            v7[292] = v7 - 0xB8BF814EDC6E963LL;
            v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
            v73 = *v44;
            v7[295] = v72;
            v74 = *((_DWORD *)v7 + 630);
            v7[294] = v73;
            *((_DWORD *)v7 + 582) = 1;
            if ( (v74 & 0x20000000) == 0 && (*((_DWORD *)v7 + 631) & 0x200000) != 0 && (v74 & 1) != 0 )
            {
              v75 = *((unsigned int *)v7 + 669);
              v76 = v7[263];
              v60 = v7[335];
              v38 = (__int64)v7 + v75;
              v77 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v75) >> 3] + v75;
              while ( v38 != v77 )
              {
                *(_QWORD *)v38 ^= v60;
                v60 = ((v76 ^ *(_QWORD *)v38) + __ROR8__(v60, v60 & 0x3F)) ^ 0xEFA;
                v38 += 8LL;
              }
              *((_DWORD *)v7 + 631) &= ~0x200000u;
              if ( v60 != v7[336] )
              {
                v78 = *((_DWORD *)v7 + 513);
                v79 = v7[177];
                *(_QWORD *)v79 = v7;
                *(_DWORD *)(v79 + 16) = v78;
                if ( !*((_DWORD *)v7 + 582) )
                  *(_QWORD *)(v7[177] + 24LL) = v60 ^ v7[336];
                sub_140BDA384(v7, 0LL, v60, 256LL);
              }
            }
          }
        }
      }
      v80 = v7[167];
      v81 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v7[44])(v80, v38, v60, v51);
      v82 = *(unsigned int **)v7[196];
      v83 = v82 + 4;
      v84 = *((_BYTE *)v82 + 12);
      v85 = (unsigned __int64)&v82[6 * *v82 + 4];
      do
      {
        v86 = 24LL;
        v87 = (char *)(v44 + 6);
        v88 = v83;
        while ( 1 )
        {
          v89 = *(_QWORD *)v88;
          v88 += 2;
          v90 = *(_QWORD *)v87;
          v87 += 8;
          if ( v89 != v90 )
            break;
          v86 = (unsigned int)(v86 - 8);
          if ( (unsigned int)v86 < 8 )
          {
            if ( !(_DWORD)v86 )
              goto LABEL_116;
            while ( 1 )
            {
              v91 = *(_BYTE *)v88;
              v88 = (unsigned int *)((char *)v88 + 1);
              v92 = *v87++;
              if ( v91 != v92 )
                goto LABEL_115;
              v63 = (_DWORD)v86 == 1;
              v86 = (unsigned int)(v86 - 1);
              if ( v63 )
                goto LABEL_116;
            }
          }
        }
LABEL_115:
        v83 += 6;
      }
      while ( (unsigned __int64)v83 < v85 );
LABEL_116:
      ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v7[52])(v7[167], v86, v87, v88);
      __writecr8(v81);
      if ( !v84 )
        goto LABEL_308;
      v93 = *((_DWORD *)v7 + 631);
      if ( (v93 & 0x10) != 0 && !*((_DWORD *)v7 + 582) )
      {
        v7[292] = v7 - 0xB8BF814EDC6E963LL;
        v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
        v7[294] = *v44;
        v94 = *((_DWORD *)v7 + 630);
        v7[295] = 1LL;
        *((_DWORD *)v7 + 582) = 1;
        if ( (v94 & 0x20000000) == 0 && (v93 & 0x200000) != 0 && (v94 & 1) != 0 )
        {
          v95 = *((unsigned int *)v7 + 669);
          v96 = v7[263];
          v97 = v7[335];
          v98 = (_QWORD *)((char *)v7 + v95);
          v99 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v95) >> 3] + v95;
          while ( v98 != (_QWORD *)v99 )
          {
            *v98 ^= v97;
            v97 = ((v96 ^ *v98++) + __ROR8__(v97, v97 & 0x3F)) ^ 0xEFA;
          }
          *((_DWORD *)v7 + 631) &= ~0x200000u;
          if ( v97 != v7[336] )
          {
            v100 = *((_DWORD *)v7 + 513);
            v101 = v7[177];
            *(_QWORD *)v101 = v7;
            *(_DWORD *)(v101 + 16) = v100;
            if ( !*((_DWORD *)v7 + 582) )
              *(_QWORD *)(v7[177] + 24LL) = v97 ^ v7[336];
            sub_140BDA384(v7, 0LL, v97, 256LL);
          }
        }
      }
      if ( *((_QWORD *)v44 + 3) != 1LL )
      {
LABEL_308:
        if ( v83 == (unsigned int *)v85 && !*((_DWORD *)v7 + 582) )
        {
          v102 = *((_DWORD *)v7 + 630);
          v7[292] = v7 - 0xB8BF814EDC6E963LL;
          v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
          v7[294] = *v44;
          v7[295] = v83;
          *((_DWORD *)v7 + 582) = 1;
          if ( (v102 & 0x20000000) == 0 && (*((_DWORD *)v7 + 631) & 0x200000) != 0 && (v102 & 1) != 0 )
          {
            v103 = *((unsigned int *)v7 + 669);
            v104 = v7[263];
            v105 = v7[335];
            v106 = (_QWORD *)((char *)v7 + v103);
            v107 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v103) >> 3] + v103;
            while ( v106 != (_QWORD *)v107 )
            {
              *v106 ^= v105;
              v105 = ((v104 ^ *v106++) + __ROR8__(v105, v105 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v7 + 631) &= ~0x200000u;
            if ( v105 != v7[336] )
            {
              v108 = *((_DWORD *)v7 + 513);
              v109 = v7[177];
              *(_QWORD *)v109 = v7;
              *(_DWORD *)(v109 + 16) = v108;
              if ( !*((_DWORD *)v7 + 582) )
                *(_QWORD *)(v7[177] + 24LL) = v105 ^ v7[336];
              sub_140BDA384(v7, 0LL, v105, 256LL);
            }
          }
        }
      }
      v110 = v7[167];
      v111 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v7[44])(v110);
      v112 = 0LL;
      v113 = *(unsigned int **)v7[196];
      v114 = v113 + 4;
      v115 = (unsigned __int64)&v113[6 * *v113 + 4];
      while ( 1 )
      {
        v114 += 6;
        if ( (unsigned __int64)v114 >= v115 )
          break;
        v116 = *((_QWORD *)v114 + 1);
        if ( v116 < v112 )
          break;
        if ( (v116 & 0xFFFFFFFFFFFFF000uLL) != v116 )
          break;
        v117 = v116 + v114[4];
        if ( v117 <= v116 || v117 == v112 )
          break;
        v112 = v116 + v114[4];
      }
      ((void (__fastcall *)(_QWORD))v7[52])(v7[167]);
      __writecr8(v111);
      if ( v114 == (unsigned int *)v115 )
        goto LABEL_195;
      if ( *((_DWORD *)v7 + 582) )
        goto LABEL_195;
      v118 = *((_DWORD *)v7 + 630);
      v7[292] = v7 - 0xB8BF814EDC6E963LL;
      v7[293] = (char *)v44 - 0x4C48B4211BBACBEBLL;
      v7[294] = *v44;
      v7[295] = v114;
      *((_DWORD *)v7 + 582) = 1;
      if ( (v118 & 0x20000000) != 0 || (*((_DWORD *)v7 + 631) & 0x200000) == 0 || (v118 & 1) == 0 )
        goto LABEL_195;
      v119 = *((unsigned int *)v7 + 669);
      v120 = v7[263];
      v121 = v7[335];
      v122 = (_QWORD *)((char *)v7 + v119);
      v123 = (unsigned __int64)&v7[(unsigned __int64)(unsigned int)(*((_DWORD *)v7 + 513) - v119) >> 3] + v119;
      while ( v122 != (_QWORD *)v123 )
      {
        *v122 ^= v121;
        v121 = ((v120 ^ *v122++) + __ROR8__(v121, v121 & 0x3F)) ^ 0xEFA;
      }
      goto LABEL_191;
    }
LABEL_197:
    if ( *((_DWORD *)v7 + 582) )
    {
      v154 = v7[294];
      v155 = v7[295];
      v156 = v7[293];
      v157 = v7[292];
      v239 = v154;
      v240 = v155;
      v231 = v156;
      v228 = v157;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v159 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[200]);
      v160 = v7[201];
      v234 = v159;
      v161 = v7[241] + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v160);
      v162 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[203]);
      v237 = v162;
      if ( (unsigned __int64)&v232 > v159 || (unsigned __int64)&v232 < v159 - *((unsigned int *)v7 + 383) )
      {
        if ( *((_BYTE *)&CurrentPrcb->MxCsr + v7[202])
          && (unsigned __int64)&v232 <= v161
          && (unsigned __int64)&v232 >= v161 - *((unsigned int *)v7 + 382) )
        {
          v234 = v161;
        }
        else
        {
          v234 = *(_QWORD *)(v162 + v7[209]);
        }
      }
      if ( (v7[315] & 0x4000000) == 0 )
      {
        v63 = (*((_DWORD *)v7 + 631) & 0x400000) == 0;
        v236 = 0LL;
        if ( v63 )
        {
          v163 = __readcr0();
          v236 = v163;
          __writecr0(v163 & 0xFFFFFFFFFFFEFFFFuLL);
        }
        v164 = (unsigned __int64)(v7 + 350);
        v165 = (unsigned __int64)&v7[2 * *((unsigned int *)v7 + 698) + 350];
        v161 = 0LL;
        v166 = (_QWORD *)v165;
        for ( k = v165; (unsigned int)v161 < *((_DWORD *)v7 + 699); v161 = (unsigned int)(v161 + 1) )
        {
          *(_QWORD *)*v166 = v166[1];
          v167 = __readcr4();
          if ( (v167 & 0x20080) != 0 )
          {
            __writecr4(v167 ^ 0x80);
            __writecr4(v167);
          }
          else
          {
            v168 = __readcr3();
            __writecr3(v168);
          }
          v166 += 2;
        }
        if ( v164 < v165 )
        {
          do
          {
            v63 = (*((_DWORD *)v7 + 631) & 0x400000) == 0;
            v169 = *(unsigned int *)(v164 + 8);
            v170 = *(char **)v164;
            LODWORD(v251) = *(_DWORD *)(v164 + 8);
            if ( v63 )
            {
              v161 = (unsigned int)v169;
              v171 = v166;
              if ( (unsigned int)v169 >= 8 )
              {
                v172 = (unsigned __int64)(unsigned int)v169 >> 3;
                do
                {
                  v161 = (unsigned int)(v161 - 8);
                  *(_QWORD *)v170 = *v171++;
                  v170 += 8;
                  --v172;
                }
                while ( v172 );
              }
              if ( (_DWORD)v161 )
              {
                v173 = v170 - (char *)v171;
                do
                {
                  *((_BYTE *)v171 + v173) = *(_BYTE *)v171;
                  v171 = (_QWORD *)((char *)v171 + 1);
                  v63 = (_DWORD)v161 == 1;
                  v161 = (unsigned int)(v161 - 1);
                }
                while ( !v63 );
              }
            }
            else
            {
              v250 = v169;
              v233 = (unsigned __int64)v166;
              v174 = v169;
              v161 = ((unsigned __int64)((unsigned __int16)v170 & 0xFFF) + v169 + 4095) >> 12;
              if ( (_DWORD)v161 )
              {
                v235 = (unsigned int)v161;
                do
                {
                  v175 = v7[187];
                  v176 = v246;
                  v177 = 4LL;
                  LODWORD(v178) = 4;
                  v179 = v175 + (((unsigned __int64)v170 >> 9) & 0x7FFFFFFFF8LL);
                  do
                  {
                    *v176++ = v179;
                    v179 = v175 + ((v179 >> 9) & 0x7FFFFFFFF8LL);
                    --v177;
                  }
                  while ( v177 );
                  do
                  {
                    v63 = (_DWORD)v178 == 1;
                    v178 = (unsigned int)(v178 - 1);
                  }
                  while ( !v63 && (*(_DWORD *)v246[v178] & 0x80) == 0 );
                  v180 = (__int64 *)v246[v178];
                  v181 = *v180 | 0x62;
                  *v180 = v181;
                  v182 = __readcr4();
                  if ( (v182 & 0x20080) != 0 )
                  {
                    __writecr4(v182 ^ 0x80);
                    __writecr4(v182);
                  }
                  else
                  {
                    v183 = __readcr3();
                    __writecr3(v183);
                  }
                  v184 = v174;
                  v185 = v170;
                  if ( 4096 - ((unsigned __int16)v170 & 0xFFFu) < v174 )
                    v184 = 4096 - ((unsigned __int16)v170 & 0xFFF);
                  v161 = v233;
                  v186 = v184;
                  if ( v184 >= 8 )
                  {
                    v187 = (unsigned __int64)v184 >> 3;
                    do
                    {
                      v186 -= 8;
                      *v185 = *(_QWORD *)v161;
                      v161 += 8LL;
                      ++v185;
                      --v187;
                    }
                    while ( v187 );
                    v174 = v250;
                  }
                  if ( v186 )
                  {
                    v188 = (char *)v185 - v161;
                    do
                    {
                      v188[v161] = *(_BYTE *)v161;
                      ++v161;
                      --v186;
                    }
                    while ( v186 );
                  }
                  v233 += v184;
                  v170 += v184;
                  v174 -= v184;
                  *v180 = v181;
                  v250 = v174;
                  v189 = __readcr4();
                  if ( (v189 & 0x20080) != 0 )
                  {
                    __writecr4(v189 ^ 0x80);
                    __writecr4(v189);
                  }
                  else
                  {
                    v190 = __readcr3();
                    __writecr3(v190);
                  }
                  --v235;
                }
                while ( v235 );
                v165 = k;
                LODWORD(v169) = v251;
              }
            }
            v164 += 16LL;
            v166 = (_QWORD *)((char *)v166 + (unsigned int)v169);
          }
          while ( v164 < v165 );
          v154 = v239;
          LODWORD(v155) = v240;
        }
        v191 = v7[69];
        if ( (*((_DWORD *)v7 + 631) & 0x400000) != 0 )
        {
          v193 = v7[187];
          v194 = &v249;
          LOBYTE(v249) = -61;
          v195 = 4LL;
          LODWORD(v196) = 4;
          v197 = v193 + ((v191 >> 9) & 0x7FFFFFFFF8LL);
          v198 = v247;
          do
          {
            *v198++ = v197;
            v197 = v193 + ((v197 >> 9) & 0x7FFFFFFFF8LL);
            --v195;
          }
          while ( v195 );
          do
            v196 = (unsigned int)(v196 - 1);
          while ( (_DWORD)v196 && (*(_DWORD *)v247[v196] & 0x80) == 0 );
          v199 = (__int64 *)v247[v196];
          v200 = *v199 | 0x62;
          *v199 = v200;
          v201 = __readcr4();
          if ( (v201 & 0x20080) != 0 )
          {
            __writecr4(v201 ^ 0x80);
            __writecr4(v201);
          }
          else
          {
            v202 = __readcr3();
            __writecr3(v202);
          }
          v161 = (v191 & 0xFFF) != 4096;
          if ( (v191 & 0xFFF) != 0x1000 )
          {
            v203 = v191 - (_QWORD)&v249;
            do
            {
              v194[v203] = *v194;
              ++v194;
              v161 = (unsigned int)(v161 - 1);
            }
            while ( (_DWORD)v161 );
          }
          *v199 = v200;
          v218 = __readcr4();
          if ( (v218 & 0x20080) != 0 )
          {
            __writecr4(v218 ^ 0x80);
            __writecr4(v218);
          }
          else
          {
            v219 = __readcr3();
            __writecr3(v219);
          }
        }
        else
        {
          v192 = v236;
          *(_BYTE *)v191 = -61;
          __writecr0(v192);
        }
        LODWORD(v157) = v228;
        LODWORD(v156) = v231;
        v162 = v237;
      }
      if ( *((_DWORD *)v7 + 594) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v220 = *((_DWORD *)v7 + 594);
      if ( v220 )
      {
        v221 = v220 - 1;
        if ( v221 )
        {
          v222 = v221 - 1;
          if ( v222 )
          {
            v223 = v222 - 1;
            if ( v223 )
            {
              v224 = v223 - 1;
              if ( v224 )
              {
                if ( v224 == 1 )
                {
                  v161 = (*((_DWORD *)v7 + 630) >> 9) & 0x1F;
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v7[203]),
                    v161);
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(v7[182] + 832LL), 1uLL);
                }
              }
              else
              {
                v161 = *(_QWORD *)(v7[215] + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v7[203]) + v7[211]);
                _interlockedbittestandset((volatile signed __int32 *)v161, (*((_DWORD *)v7 + 630) >> 9) & 0x1F);
              }
              goto LABEL_303;
            }
            v225 = (volatile signed __int32 *)v7[171];
          }
          else
          {
            v225 = (volatile signed __int32 *)v7[170];
          }
        }
        else
        {
          v225 = (volatile signed __int32 *)v7[168];
        }
        _interlockedbittestandset64(v225, 0LL);
      }
LABEL_303:
      *(_QWORD *)(v162 + v7[212]) = 0LL;
      *(_QWORD *)(v162 + v7[214]) = 0LL;
      KeGuardCheckICall(v7[45], v161);
      SdbpCheckDll(265, v157, v156, v155, v154, v7[45], v234 - 8);
      JUMPOUT(0x14050796DLL);
    }
    *((_DWORD *)v7 + 530) += 1584;
    v204 = *((_DWORD *)v7 + 49);
    v205 = v7;
    v206 = v7[263];
    v207 = (const char *)v7;
    *((_DWORD *)v7 + 49) = 0;
    v208 = *((_DWORD *)v7 + 525);
    if ( v7 < v7 + 198 )
    {
      do
      {
        _mm_prefetch(v207, 0);
        v207 += 64;
      }
      while ( v207 < (const char *)v7 + 1584 );
    }
    v209 = 12;
    v210 = v206;
    do
    {
      v211 = 8LL;
      do
      {
        v212 = v205[1] ^ __ROL8__(*v205 ^ v210, v208);
        v205 += 2;
        v210 = __ROL8__(v212, v208);
        --v211;
      }
      while ( v211 );
      v213 = (__ROL8__(v206 ^ ((char *)v205 - (char *)v7), 17) ^ v206 ^ (unsigned __int64)((char *)v205 - (char *)v7))
           * (unsigned __int128)0x7010008004002001uLL;
      v208 = (BYTE8(v213) ^ (unsigned __int8)(v213 ^ v208)) & 0x3F;
      if ( !v208 )
        LOBYTE(v208) = 1;
      --v209;
    }
    while ( v209 );
    v2 = a1;
    do
    {
      v210 = __ROL8__(*v205++ ^ v210, v208);
      v41 -= 8;
      --v40;
    }
    while ( v40 );
    for ( ; v41; --v41 )
    {
      v214 = *(unsigned __int8 *)v205;
      v205 = (_QWORD *)((char *)v205 + 1);
      v210 = __ROL8__(v214 ^ v210, v208);
    }
    v215 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v7[36];
    *((_DWORD *)v7 + 49) = v204;
    v7[333] = v210;
    v215(v227, 1LL, v210, v205);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v217 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1624LL));
    _enable();
    LODWORD(v217) = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !(_DWORD)v217 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
