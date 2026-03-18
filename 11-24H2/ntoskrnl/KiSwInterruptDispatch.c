/*
 * XREFs of KiSwInterruptDispatch @ 0x1405088F0
 * Callers:
 *     KiSwInterrupt @ 0x1406B1390 (KiSwInterrupt.c)
 * Callees:
 *     KiGetTrapFrameMode @ 0x1404492B0 (KiGetTrapFrameMode.c)
 *     KeExitRetpoline @ 0x14046029C (KeExitRetpoline.c)
 *     KiReadKernelDr7 @ 0x1405B77B8 (KiReadKernelDr7.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     sub_140BD8384 @ 0x140BD8384 (sub_140BD8384.c)
 *     SdbpCheckDll @ 0x140BDA7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDAA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDAA70 (KeGuardCheckICall.c)
 */

char __fastcall KiSwInterruptDispatch(__int64 a1)
{
  const void *v1; // rdi
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  _QWORD *Pool2; // rax
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r14
  int v11; // r10d
  _QWORD *v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  const char *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int i; // r11d
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r8
  _QWORD *v31; // rdx
  unsigned __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rax
  int v35; // ecx
  unsigned int *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // r15
  int v40; // r14d
  _QWORD *v41; // r8
  unsigned int v42; // r9d
  int *v43; // rsi
  __int64 v44; // r10
  __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  _QWORD *v48; // r11
  __int64 v49; // r8
  _QWORD *v50; // r9
  const char *v51; // rax
  int v52; // r14d
  __int64 v53; // r15
  unsigned __int64 v54; // rdi
  unsigned int v55; // r10d
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned __int64 v58; // rcx
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // zf
  unsigned __int64 j; // rax
  unsigned int v64; // edi
  BOOL v65; // r12d
  __int64 v66; // rcx
  unsigned __int8 v67; // r13
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // r14
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rcx
  __int64 v75; // rdi
  unsigned __int64 v76; // r11
  int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int8 v80; // r14
  unsigned int *v81; // rcx
  unsigned int *v82; // rdi
  char v83; // r15
  unsigned __int64 v84; // r13
  __int64 v85; // rdx
  char *v86; // r8
  unsigned int *v87; // r9
  __int64 v88; // rcx
  __int64 v89; // rax
  char v90; // cl
  char v91; // al
  int v92; // ecx
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // r10
  __int64 v96; // r8
  _QWORD *v97; // rdx
  unsigned __int64 v98; // r9
  int v99; // ecx
  __int64 v100; // rax
  int v101; // ecx
  __int64 v102; // rcx
  __int64 v103; // r10
  __int64 v104; // r8
  _QWORD *v105; // rdx
  unsigned __int64 v106; // r9
  int v107; // ecx
  __int64 v108; // rax
  __int64 v109; // rcx
  unsigned __int8 v110; // r15
  unsigned __int64 v111; // rdx
  unsigned int *v112; // rcx
  unsigned int *v113; // rdi
  unsigned __int64 v114; // r14
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  int v117; // ecx
  __int64 v118; // rcx
  __int64 v119; // r10
  __int64 v120; // r8
  _QWORD *v121; // rdx
  unsigned __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned int *v126; // rcx
  unsigned int *v127; // rdi
  char v128; // r15
  unsigned __int64 v129; // r12
  __int64 v130; // rdx
  char *v131; // r8
  unsigned int *v132; // r9
  __int64 v133; // rcx
  __int64 v134; // rax
  char v135; // cl
  char v136; // al
  int v137; // ecx
  int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // r10
  __int64 v141; // r8
  _QWORD *v142; // rdx
  unsigned __int64 v143; // r9
  __int64 v144; // rax
  int v145; // ecx
  int v146; // ecx
  __int64 v147; // rcx
  __int64 v148; // r10
  _QWORD *v149; // rdx
  unsigned __int64 v150; // r9
  int v151; // ecx
  __int64 v152; // rax
  __int64 v153; // rdi
  __int64 v154; // rsi
  __int64 v155; // r14
  __int64 v156; // r15
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v158; // r9
  __int64 v159; // rax
  unsigned __int64 v160; // rdx
  __int64 v161; // r11
  unsigned __int64 v162; // rcx
  unsigned __int64 v163; // r14
  unsigned __int64 v164; // r15
  _QWORD *v165; // r11
  unsigned __int64 v166; // rcx
  unsigned __int64 v167; // rax
  __int64 v168; // r12
  unsigned __int64 v169; // r8
  _QWORD *v170; // rcx
  unsigned __int64 v171; // r9
  signed __int64 v172; // r8
  unsigned int v173; // esi
  __int64 v174; // r10
  unsigned __int64 *v175; // rcx
  __int64 v176; // rdx
  __int64 v177; // r9
  unsigned __int64 v178; // rax
  __int64 *v179; // r13
  __int64 v180; // rax
  unsigned __int64 v181; // rdx
  unsigned __int64 v182; // rcx
  unsigned int v183; // r9d
  _QWORD *v184; // r10
  unsigned int v185; // edi
  unsigned __int64 v186; // rsi
  char *v187; // r10
  unsigned __int64 v188; // rcx
  unsigned __int64 v189; // rax
  unsigned __int64 v190; // r8
  unsigned __int64 v191; // rax
  __int64 v192; // rdx
  _BYTE *v193; // r9
  __int64 v194; // r11
  __int64 v195; // r10
  unsigned __int64 v196; // rax
  unsigned __int64 *v197; // rcx
  __int64 *v198; // r11
  __int64 v199; // rax
  unsigned __int64 v200; // rdx
  unsigned __int64 v201; // rcx
  unsigned __int64 v202; // r8
  int v203; // esi
  _QWORD *v204; // r9
  __int64 v205; // r11
  const char *v206; // rax
  int v207; // r10d
  int v208; // edi
  __int64 v209; // r8
  __int64 v210; // rax
  __int64 v211; // r8
  unsigned __int128 v212; // rax
  __int64 v213; // rax
  void (__fastcall *v214)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *KernelDr7; // rax
  __int64 v216; // rcx
  unsigned __int64 v217; // rcx
  unsigned __int64 v218; // rax
  int v219; // ecx
  int v220; // ecx
  int v221; // ecx
  int v222; // ecx
  int v223; // ecx
  volatile signed __int32 *v224; // rax
  _QWORD *v226; // [rsp+40h] [rbp-C0h]
  int v227; // [rsp+40h] [rbp-C0h]
  __int64 v228; // [rsp+48h] [rbp-B8h]
  unsigned int v229; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v230; // [rsp+58h] [rbp-A8h]
  char v231; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v232; // [rsp+68h] [rbp-98h]
  unsigned __int64 v233; // [rsp+70h] [rbp-90h]
  __int64 v234; // [rsp+78h] [rbp-88h]
  unsigned __int64 v235; // [rsp+80h] [rbp-80h]
  __int64 v236; // [rsp+88h] [rbp-78h]
  unsigned __int64 k; // [rsp+90h] [rbp-70h]
  __int64 v238; // [rsp+98h] [rbp-68h]
  __int64 v239; // [rsp+A0h] [rbp-60h]
  __int64 v240; // [rsp+A8h] [rbp-58h]
  __int64 v241; // [rsp+B0h] [rbp-50h]
  __int64 v242; // [rsp+B8h] [rbp-48h]
  __int64 v243; // [rsp+C0h] [rbp-40h]
  __int64 v244; // [rsp+C8h] [rbp-38h]
  _QWORD v245[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v246[12]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v248; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v249; // [rsp+170h] [rbp+70h]
  unsigned __int64 v250; // [rsp+178h] [rbp+78h]

  v1 = *(const void **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2524LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  v3 = __rdtsc();
  v240 = ((__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  Pool2 = (_QWORD *)ExAllocatePool2(0x42uLL);
  v226 = Pool2;
  v5 = Pool2;
  if ( Pool2 )
  {
    v6 = Pool2 + 4;
    Pool2[3] = Pool2;
    *Pool2 = 0LL;
    Pool2[2] = sub_140519060;
    v248 = Pool2 + 4;
    memmove(Pool2 + 4, v1, 0xAE8uLL);
    v5[348] = v1;
    v5[349] = v5 + 353;
    v7 = __rdtsc();
    *((_DWORD *)v5 + 538) = 0;
    v8 = *((unsigned int *)v5 + 531);
    v9 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
    v241 = *((_QWORD *)&v9 + 1);
    *((_DWORD *)v5 + 536) = (*((_QWORD *)&v9 + 1) ^ (unsigned __int64)v9) % v8;
    v10 = v5[348];
    v11 = *((_DWORD *)v5 + 533);
    v12 = (_QWORD *)v10;
    v13 = __rdtsc();
    v14 = __ROR8__(v13, 3);
    v15 = v5[267];
    v242 = ((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v5 + 540) = (67117057 * (v14 ^ v13)) ^ v242;
    v5[350] = ((unsigned __int64)v5 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
    v16 = (const char *)v10;
    v17 = *(unsigned int *)(v10 + 2052);
    if ( v10 < v10 + v17 )
    {
      do
      {
        _mm_prefetch(v16, 0);
        v16 += 64;
      }
      while ( (unsigned __int64)v16 < v10 + v17 );
    }
    v18 = v15;
    for ( i = (unsigned int)v17 >> 7; i; --i )
    {
      v20 = 8LL;
      do
      {
        v21 = v12[1] ^ __ROL8__(*v12 ^ v18, v11);
        v12 += 2;
        v18 = __ROL8__(v21, v11);
        --v20;
      }
      while ( v20 );
      v22 = __ROL8__(v15 ^ ((unsigned __int64)v12 - v10), 17) ^ v15 ^ ((unsigned __int64)v12 - v10);
      v243 = (v22 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v11 = ((unsigned __int8)(v243 ^ v22) ^ (unsigned __int8)v11) & 0x3F;
      if ( !v11 )
        LOBYTE(v11) = 1;
    }
    v23 = v17 & 0x7F;
    if ( v23 >= 8 )
    {
      v24 = (unsigned __int64)(v17 & 0x7F) >> 3;
      do
      {
        v18 = __ROL8__(*v12++ ^ v18, v11);
        v23 -= 8;
        --v24;
      }
      while ( v24 );
    }
    for ( ; v23; --v23 )
    {
      v25 = *(unsigned __int8 *)v12;
      v12 = (_QWORD *)((char *)v12 + 1);
      v18 = __ROL8__(v25 ^ v18, v11);
    }
    if ( v18 != qword_140FC5A50 )
    {
      v26 = v5[181];
      *(_QWORD *)v26 = v10;
      *(_DWORD *)(v26 + 16) = v17;
      if ( !*((_DWORD *)v5 + 590) )
      {
        *(_QWORD *)(v5[181] + 24LL) = qword_140FC5A50 ^ v18;
        if ( !*((_DWORD *)v5 + 590) )
        {
          v5[297] = 0LL;
          v27 = *((_DWORD *)v5 + 638);
          v5[296] = v5 - 0xB8BF814EDC6E95FLL;
          v5[298] = 273LL;
          v5[299] = v18;
          *((_DWORD *)v5 + 590) = 1;
          if ( (v27 & 0x20000000) == 0 && (*((_DWORD *)v5 + 639) & 0x200000) != 0 && (v27 & 1) != 0 )
          {
            v28 = *((unsigned int *)v5 + 677);
            v29 = v5[267];
            v30 = v5[339];
            v31 = (_QWORD *)((char *)v6 + v28);
            v32 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 521) - v28) >> 3] + v28;
            while ( v31 != (_QWORD *)v32 )
            {
              *v31 ^= v30;
              v30 = ((v29 ^ *v31++) + __ROR8__(v30, v30 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v5 + 639) &= ~0x200000u;
            if ( v30 != v5[340] )
            {
              v33 = *((_DWORD *)v5 + 521);
              v34 = v5[181];
              *(_QWORD *)v34 = v6;
              *(_DWORD *)(v34 + 16) = v33;
              if ( !*((_DWORD *)v5 + 590) )
                *(_QWORD *)(v5[181] + 24LL) = v30 ^ v5[340];
              sub_140BD8384(v5 + 4, 0LL, v30, 256LL);
            }
          }
        }
      }
    }
    v35 = 4;
    v228 = 0LL;
    v36 = &v229;
    do
    {
      *(_BYTE *)v36 = 0;
      v36 = (unsigned int *)((char *)v36 + 1);
      --v35;
    }
    while ( v35 );
    v37 = 2LL;
    v38 = 0;
    v249 = 0;
    v39 = 6LL;
    v40 = 48;
    if ( *((_DWORD *)v5 + 531) )
    {
      while ( 1 )
      {
        v41 = v6;
        v42 = 0;
        if ( v6[344] )
          v41 = (_QWORD *)v6[344];
        v43 = (int *)((char *)v41 + *((unsigned int *)v41 + 522));
        if ( (_DWORD)v228 && HIDWORD(v228) <= v38 )
        {
          v42 = HIDWORD(v228);
          v43 = (int *)((char *)v41 + v229);
        }
        if ( v42 != v38 )
        {
          v44 = v38 - v42;
          v42 = v38;
          while ( 1 )
          {
            if ( *v43 == 1 )
            {
LABEL_57:
              v45 = 4 * (v43[4] / 0xCu) + 48;
              goto LABEL_58;
            }
            if ( *v43 == 7 )
            {
              v45 = (unsigned int)(24 * (v43[6] + 2));
              goto LABEL_59;
            }
            if ( *v43 == 8 )
              break;
            switch ( *v43 )
            {
              case 10:
                v45 = (unsigned int)(16 * (v43[7] + 3));
                break;
              case 28:
                v46 = *((unsigned __int16 *)v43 + 20);
LABEL_55:
                v45 = (v46 + 55) & 0xFFFFFFF8;
                break;
              case 30:
                v45 = (((v43[9] != 0 ? v43[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v43 + 20) + 2);
                goto LABEL_58;
              case 33:
                v45 = 20 * (unsigned int)(((v43[8] & 0xFFF) + (unsigned __int64)(unsigned int)v43[10] + 4095) >> 12)
                    + 48;
LABEL_58:
                v37 = 2LL;
                break;
              case 43:
                goto LABEL_57;
              default:
                v45 = 48LL;
                break;
            }
LABEL_59:
            v43 = (int *)((char *)v43 + v45);
            if ( !--v44 )
            {
              v6 = v248;
              v38 = v249;
              goto LABEL_61;
            }
          }
          v46 = *((unsigned __int16 *)v43 + 16);
          goto LABEL_55;
        }
LABEL_61:
        LODWORD(v228) = 1;
        HIDWORD(v228) = v42;
        v229 = (_DWORD)v43 - (_DWORD)v41;
        v47 = *v43;
        if ( (_DWORD)v47 == 36 )
          break;
        if ( (unsigned int)v47 > 0x2B )
          goto LABEL_196;
        v123 = 0x80200000002LL;
        if ( !_bittest64(&v123, v47) )
          goto LABEL_196;
        v124 = v6[167];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v6[44])(v124);
        v126 = *(unsigned int **)v6[196];
        v127 = v126 + 4;
        v128 = *((_BYTE *)v126 + 12);
        v129 = (unsigned __int64)&v126[6 * *v126 + 4];
        do
        {
          v130 = 24LL;
          v131 = (char *)(v43 + 6);
          v132 = v127;
          while ( 1 )
          {
            v133 = *(_QWORD *)v132;
            v132 += 2;
            v134 = *(_QWORD *)v131;
            v131 += 8;
            if ( v133 != v134 )
              break;
            v130 = (unsigned int)(v130 - 8);
            if ( (unsigned int)v130 < 8 )
            {
              if ( !(_DWORD)v130 )
                goto LABEL_169;
              while ( 1 )
              {
                v135 = *(_BYTE *)v132;
                v132 = (unsigned int *)((char *)v132 + 1);
                v136 = *v131++;
                if ( v135 != v136 )
                  goto LABEL_168;
                v62 = (_DWORD)v130 == 1;
                v130 = (unsigned int)(v130 - 1);
                if ( v62 )
                  goto LABEL_169;
              }
            }
          }
LABEL_168:
          v127 += 6;
        }
        while ( (unsigned __int64)v127 < v129 );
LABEL_169:
        ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v6[52])(v6[167], v130, v131, v132);
        __writecr8(CurrentIrql);
        if ( !v128 )
          goto LABEL_187;
        v137 = *((_DWORD *)v6 + 631);
        if ( (v137 & 0x10) != 0 && !*((_DWORD *)v6 + 582) )
        {
          v6[292] = v6 - 0xB8BF814EDC6E963LL;
          v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
          v6[294] = *v43;
          v138 = *((_DWORD *)v6 + 630);
          v6[295] = 1LL;
          *((_DWORD *)v6 + 582) = 1;
          if ( (v138 & 0x20000000) == 0 && (v137 & 0x200000) != 0 && (v138 & 1) != 0 )
          {
            v139 = *((unsigned int *)v6 + 669);
            v140 = v6[263];
            v141 = v6[335];
            v142 = (_QWORD *)((char *)v6 + v139);
            v143 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v139) >> 3] + v139;
            while ( v142 != (_QWORD *)v143 )
            {
              *v142 ^= v141;
              v141 = ((v140 ^ *v142++) + __ROR8__(v141, v141 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v6 + 631) &= ~0x200000u;
            if ( v141 != v6[336] )
            {
              v144 = v6[177];
              v145 = *((_DWORD *)v6 + 513);
              *(_QWORD *)v144 = v6;
              *(_DWORD *)(v144 + 16) = v145;
              if ( !*((_DWORD *)v6 + 582) )
                *(_QWORD *)(v6[177] + 24LL) = v6[336] ^ v141;
              sub_140BD8384(v6, 0LL, v141, 256LL);
            }
          }
        }
        if ( *((_QWORD *)v43 + 3) != 1LL )
        {
LABEL_187:
          if ( v127 == (unsigned int *)v129 && !*((_DWORD *)v6 + 582) )
          {
            v146 = *((_DWORD *)v6 + 630);
            v6[292] = v6 - 0xB8BF814EDC6E963LL;
            v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
            v6[294] = *v43;
            v6[295] = v127;
            *((_DWORD *)v6 + 582) = 1;
            if ( (v146 & 0x20000000) == 0 && (*((_DWORD *)v6 + 631) & 0x200000) != 0 && (v146 & 1) != 0 )
            {
              v147 = *((unsigned int *)v6 + 669);
              v148 = v6[263];
              v120 = v6[335];
              v149 = (_QWORD *)((char *)v6 + v147);
              v150 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v147) >> 3] + v147;
              while ( v149 != (_QWORD *)v150 )
              {
                *v149 ^= v120;
                v120 = ((v148 ^ *v149++) + __ROR8__(v120, v120 & 0x3F)) ^ 0xEFA;
              }
LABEL_191:
              *((_DWORD *)v6 + 631) &= ~0x200000u;
              if ( v120 != v6[336] )
              {
                v151 = *((_DWORD *)v6 + 513);
                v152 = v6[177];
                *(_QWORD *)v152 = v6;
                *(_DWORD *)(v152 + 16) = v151;
                if ( !*((_DWORD *)v6 + 582) )
                  *(_QWORD *)(v6[177] + 24LL) = v120 ^ v6[336];
                sub_140BD8384(v6, 0LL, v120, 256LL);
              }
            }
          }
        }
LABEL_195:
        v38 = v249;
        v40 = 48;
        v39 = 6LL;
LABEL_196:
        ++v38;
        v37 = 2LL;
        v249 = v38;
        if ( v38 >= *((_DWORD *)v6 + 523) )
          goto LABEL_197;
      }
      v48 = (_QWORD *)*((_QWORD *)v43 + 1);
      v49 = (unsigned int)v43[4];
      v50 = v48;
      *((_DWORD *)v6 + 530) += v49;
      v51 = (const char *)v48;
      v52 = *((_DWORD *)v6 + 525);
      v53 = v6[263];
      if ( v48 < (_QWORD *)((char *)v48 + v49) )
      {
        do
        {
          _mm_prefetch(v51, 0);
          v51 += 64;
        }
        while ( v51 < (const char *)v48 + v49 );
      }
      v54 = v6[263];
      v55 = (unsigned int)v49 >> 7;
      if ( (unsigned int)v49 >> 7 )
      {
        do
        {
          v56 = 8LL;
          do
          {
            v57 = v50[1] ^ __ROL8__(*v50 ^ v54, v52);
            v50 += 2;
            v54 = __ROL8__(v57, v52);
            --v56;
          }
          while ( v56 );
          v58 = __ROL8__(v53 ^ ((char *)v50 - (char *)v48), 17) ^ v53 ^ ((char *)v50 - (char *)v48);
          v37 = (v58 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v244 = v37;
          v52 = ((unsigned __int8)(v37 ^ v58) ^ (unsigned __int8)v52) & 0x3F;
          if ( !v52 )
            LOBYTE(v52) = 1;
          --v55;
        }
        while ( v55 );
        v6 = v248;
      }
      v59 = v49 & 0x7F;
      if ( (unsigned int)v59 >= 8 )
      {
        v60 = (unsigned __int64)(unsigned int)v59 >> 3;
        do
        {
          v54 = __ROL8__(*v50++ ^ v54, v52);
          v59 = (unsigned int)(v59 - 8);
          --v60;
        }
        while ( v60 );
      }
      if ( (_DWORD)v59 )
      {
        do
        {
          v61 = *(unsigned __int8 *)v50;
          v50 = (_QWORD *)((char *)v50 + 1);
          v54 = __ROL8__(v61 ^ v54, v52);
          v62 = (_DWORD)v59 == 1;
          v59 = (unsigned int)(v59 - 1);
        }
        while ( !v62 );
      }
      for ( j = v54; ; LODWORD(v54) = j ^ v54 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v64 = v54 & 0x7FFFFFFF;
      v65 = 0;
      if ( v64 != v43[5] )
      {
        if ( !*v43 )
          v65 = v43[6] != 0;
        v66 = (unsigned int)v43[4];
        v37 = *((_QWORD *)v43 + 1);
        if ( v43[4] && (*((_DWORD *)v6 + 631) & 0x40) != 0 )
        {
          v67 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v68 = v37 & 0xFFFFFFFFFFFFF000uLL;
          v230 = (v37 + v66 - 1) | 0xFFF;
          v250 = (v37 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v69 = v67;
            while ( 1 )
            {
              v70 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v6[141])(v68, 0LL, v59, v50);
              if ( v70 != -1073741267 )
                break;
              if ( v65 )
                goto LABEL_93;
              if ( v67 > 1u )
                goto LABEL_91;
              v69 = v67;
              __writecr8(v67);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v70 < 0 )
            {
LABEL_93:
              __writecr8(v69);
              goto LABEL_94;
            }
LABEL_91:
            v68 += 4096LL;
            v250 += 4096LL;
            if ( v250 != v230 )
              continue;
            break;
          }
          __writecr8(v69);
        }
        else
        {
LABEL_94:
          v50 = v6;
          if ( !*((_DWORD *)v6 + 582) )
            *(_QWORD *)(v6[177] + 24LL) = v64 ^ (unsigned __int64)(unsigned int)v43[5];
          v71 = *((_QWORD *)v43 + 1);
          if ( !*((_DWORD *)v6 + 582) )
          {
            v37 = 1LL;
            v6[292] = v6 - 0xB8BF814EDC6E963LL;
            v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
            v72 = *v43;
            v6[295] = v71;
            v73 = *((_DWORD *)v6 + 630);
            v6[294] = v72;
            *((_DWORD *)v6 + 582) = 1;
            if ( (v73 & 0x20000000) == 0 && (*((_DWORD *)v6 + 631) & 0x200000) != 0 && (v73 & 1) != 0 )
            {
              v74 = *((unsigned int *)v6 + 669);
              v75 = v6[263];
              v59 = v6[335];
              v37 = (__int64)v6 + v74;
              v76 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v74) >> 3] + v74;
              while ( v37 != v76 )
              {
                *(_QWORD *)v37 ^= v59;
                v59 = ((v75 ^ *(_QWORD *)v37) + __ROR8__(v59, v59 & 0x3F)) ^ 0xEFA;
                v37 += 8LL;
              }
              *((_DWORD *)v6 + 631) &= ~0x200000u;
              if ( v59 != v6[336] )
              {
                v77 = *((_DWORD *)v6 + 513);
                v78 = v6[177];
                *(_QWORD *)v78 = v6;
                *(_DWORD *)(v78 + 16) = v77;
                if ( !*((_DWORD *)v6 + 582) )
                  *(_QWORD *)(v6[177] + 24LL) = v59 ^ v6[336];
                sub_140BD8384(v6, 0LL, v59, 256LL);
              }
            }
          }
        }
      }
      v79 = v6[167];
      v80 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v6[44])(v79, v37, v59, v50);
      v81 = *(unsigned int **)v6[196];
      v82 = v81 + 4;
      v83 = *((_BYTE *)v81 + 12);
      v84 = (unsigned __int64)&v81[6 * *v81 + 4];
      do
      {
        v85 = 24LL;
        v86 = (char *)(v43 + 6);
        v87 = v82;
        while ( 1 )
        {
          v88 = *(_QWORD *)v87;
          v87 += 2;
          v89 = *(_QWORD *)v86;
          v86 += 8;
          if ( v88 != v89 )
            break;
          v85 = (unsigned int)(v85 - 8);
          if ( (unsigned int)v85 < 8 )
          {
            if ( !(_DWORD)v85 )
              goto LABEL_116;
            while ( 1 )
            {
              v90 = *(_BYTE *)v87;
              v87 = (unsigned int *)((char *)v87 + 1);
              v91 = *v86++;
              if ( v90 != v91 )
                goto LABEL_115;
              v62 = (_DWORD)v85 == 1;
              v85 = (unsigned int)(v85 - 1);
              if ( v62 )
                goto LABEL_116;
            }
          }
        }
LABEL_115:
        v82 += 6;
      }
      while ( (unsigned __int64)v82 < v84 );
LABEL_116:
      ((void (__fastcall *)(_QWORD, __int64, char *, unsigned int *))v6[52])(v6[167], v85, v86, v87);
      __writecr8(v80);
      if ( !v83 )
        goto LABEL_308;
      v92 = *((_DWORD *)v6 + 631);
      if ( (v92 & 0x10) != 0 && !*((_DWORD *)v6 + 582) )
      {
        v6[292] = v6 - 0xB8BF814EDC6E963LL;
        v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
        v6[294] = *v43;
        v93 = *((_DWORD *)v6 + 630);
        v6[295] = 1LL;
        *((_DWORD *)v6 + 582) = 1;
        if ( (v93 & 0x20000000) == 0 && (v92 & 0x200000) != 0 && (v93 & 1) != 0 )
        {
          v94 = *((unsigned int *)v6 + 669);
          v95 = v6[263];
          v96 = v6[335];
          v97 = (_QWORD *)((char *)v6 + v94);
          v98 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v94) >> 3] + v94;
          while ( v97 != (_QWORD *)v98 )
          {
            *v97 ^= v96;
            v96 = ((v95 ^ *v97++) + __ROR8__(v96, v96 & 0x3F)) ^ 0xEFA;
          }
          *((_DWORD *)v6 + 631) &= ~0x200000u;
          if ( v96 != v6[336] )
          {
            v99 = *((_DWORD *)v6 + 513);
            v100 = v6[177];
            *(_QWORD *)v100 = v6;
            *(_DWORD *)(v100 + 16) = v99;
            if ( !*((_DWORD *)v6 + 582) )
              *(_QWORD *)(v6[177] + 24LL) = v96 ^ v6[336];
            sub_140BD8384(v6, 0LL, v96, 256LL);
          }
        }
      }
      if ( *((_QWORD *)v43 + 3) != 1LL )
      {
LABEL_308:
        if ( v82 == (unsigned int *)v84 && !*((_DWORD *)v6 + 582) )
        {
          v101 = *((_DWORD *)v6 + 630);
          v6[292] = v6 - 0xB8BF814EDC6E963LL;
          v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
          v6[294] = *v43;
          v6[295] = v82;
          *((_DWORD *)v6 + 582) = 1;
          if ( (v101 & 0x20000000) == 0 && (*((_DWORD *)v6 + 631) & 0x200000) != 0 && (v101 & 1) != 0 )
          {
            v102 = *((unsigned int *)v6 + 669);
            v103 = v6[263];
            v104 = v6[335];
            v105 = (_QWORD *)((char *)v6 + v102);
            v106 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v102) >> 3] + v102;
            while ( v105 != (_QWORD *)v106 )
            {
              *v105 ^= v104;
              v104 = ((v103 ^ *v105++) + __ROR8__(v104, v104 & 0x3F)) ^ 0xEFA;
            }
            *((_DWORD *)v6 + 631) &= ~0x200000u;
            if ( v104 != v6[336] )
            {
              v107 = *((_DWORD *)v6 + 513);
              v108 = v6[177];
              *(_QWORD *)v108 = v6;
              *(_DWORD *)(v108 + 16) = v107;
              if ( !*((_DWORD *)v6 + 582) )
                *(_QWORD *)(v6[177] + 24LL) = v104 ^ v6[336];
              sub_140BD8384(v6, 0LL, v104, 256LL);
            }
          }
        }
      }
      v109 = v6[167];
      v110 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v6[44])(v109);
      v111 = 0LL;
      v112 = *(unsigned int **)v6[196];
      v113 = v112 + 4;
      v114 = (unsigned __int64)&v112[6 * *v112 + 4];
      while ( 1 )
      {
        v113 += 6;
        if ( (unsigned __int64)v113 >= v114 )
          break;
        v115 = *((_QWORD *)v113 + 1);
        if ( v115 < v111 )
          break;
        if ( (v115 & 0xFFFFFFFFFFFFF000uLL) != v115 )
          break;
        v116 = v115 + v113[4];
        if ( v116 <= v115 || v116 == v111 )
          break;
        v111 = v115 + v113[4];
      }
      ((void (__fastcall *)(_QWORD))v6[52])(v6[167]);
      __writecr8(v110);
      if ( v113 == (unsigned int *)v114 )
        goto LABEL_195;
      if ( *((_DWORD *)v6 + 582) )
        goto LABEL_195;
      v117 = *((_DWORD *)v6 + 630);
      v6[292] = v6 - 0xB8BF814EDC6E963LL;
      v6[293] = (char *)v43 - 0x4C48B4211BBACBEBLL;
      v6[294] = *v43;
      v6[295] = v113;
      *((_DWORD *)v6 + 582) = 1;
      if ( (v117 & 0x20000000) != 0 || (*((_DWORD *)v6 + 631) & 0x200000) == 0 || (v117 & 1) == 0 )
        goto LABEL_195;
      v118 = *((unsigned int *)v6 + 669);
      v119 = v6[263];
      v120 = v6[335];
      v121 = (_QWORD *)((char *)v6 + v118);
      v122 = (unsigned __int64)&v6[(unsigned __int64)(unsigned int)(*((_DWORD *)v6 + 513) - v118) >> 3] + v118;
      while ( v121 != (_QWORD *)v122 )
      {
        *v121 ^= v120;
        v120 = ((v119 ^ *v121++) + __ROR8__(v120, v120 & 0x3F)) ^ 0xEFA;
      }
      goto LABEL_191;
    }
LABEL_197:
    if ( *((_DWORD *)v6 + 582) )
    {
      v153 = v6[294];
      v154 = v6[295];
      v155 = v6[293];
      v156 = v6[292];
      v238 = v153;
      v239 = v154;
      v230 = v155;
      v227 = v156;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v158 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v6[200]);
      v159 = v6[201];
      v233 = v158;
      v160 = v6[241] + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v159);
      v161 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v6[203]);
      v236 = v161;
      if ( (unsigned __int64)&v231 > v158 || (unsigned __int64)&v231 < v158 - *((unsigned int *)v6 + 383) )
      {
        if ( *((_BYTE *)&CurrentPrcb->MxCsr + v6[202])
          && (unsigned __int64)&v231 <= v160
          && (unsigned __int64)&v231 >= v160 - *((unsigned int *)v6 + 382) )
        {
          v233 = v160;
        }
        else
        {
          v233 = *(_QWORD *)(v161 + v6[209]);
        }
      }
      if ( (v6[315] & 0x4000000) == 0 )
      {
        v62 = (*((_DWORD *)v6 + 631) & 0x400000) == 0;
        v235 = 0LL;
        if ( v62 )
        {
          v162 = __readcr0();
          v235 = v162;
          __writecr0(v162 & 0xFFFFFFFFFFFEFFFFuLL);
        }
        v163 = (unsigned __int64)(v6 + 350);
        v164 = (unsigned __int64)&v6[2 * *((unsigned int *)v6 + 698) + 350];
        v160 = 0LL;
        v165 = (_QWORD *)v164;
        for ( k = v164; (unsigned int)v160 < *((_DWORD *)v6 + 699); v160 = (unsigned int)(v160 + 1) )
        {
          *(_QWORD *)*v165 = v165[1];
          v166 = __readcr4();
          if ( (v166 & 0x20080) != 0 )
          {
            __writecr4(v166 ^ 0x80);
            __writecr4(v166);
          }
          else
          {
            v167 = __readcr3();
            __writecr3(v167);
          }
          v165 += 2;
        }
        if ( v163 < v164 )
        {
          do
          {
            v62 = (*((_DWORD *)v6 + 631) & 0x400000) == 0;
            v168 = *(unsigned int *)(v163 + 8);
            v169 = *(_QWORD *)v163;
            LODWORD(v250) = *(_DWORD *)(v163 + 8);
            if ( v62 )
            {
              v160 = (unsigned int)v168;
              v170 = v165;
              if ( (unsigned int)v168 >= 8 )
              {
                v171 = (unsigned __int64)(unsigned int)v168 >> 3;
                do
                {
                  v160 = (unsigned int)(v160 - 8);
                  *(_QWORD *)v169 = *v170++;
                  v169 += 8LL;
                  --v171;
                }
                while ( v171 );
              }
              if ( (_DWORD)v160 )
              {
                v172 = v169 - (_QWORD)v170;
                do
                {
                  *((_BYTE *)v170 + v172) = *(_BYTE *)v170;
                  v170 = (_QWORD *)((char *)v170 + 1);
                  v62 = (_DWORD)v160 == 1;
                  v160 = (unsigned int)(v160 - 1);
                }
                while ( !v62 );
              }
            }
            else
            {
              v249 = v168;
              v232 = (unsigned __int64)v165;
              v173 = v168;
              v160 = ((v169 & 0xFFF) + v168 + 4095) >> 12;
              if ( (_DWORD)v160 )
              {
                v234 = (unsigned int)v160;
                do
                {
                  v174 = v6[187];
                  v175 = v245;
                  v176 = 4LL;
                  LODWORD(v177) = 4;
                  v178 = v174 + ((v169 >> 9) & 0x7FFFFFFFF8LL);
                  do
                  {
                    *v175++ = v178;
                    v178 = v174 + ((v178 >> 9) & 0x7FFFFFFFF8LL);
                    --v176;
                  }
                  while ( v176 );
                  do
                  {
                    v62 = (_DWORD)v177 == 1;
                    v177 = (unsigned int)(v177 - 1);
                  }
                  while ( !v62 && (*(_DWORD *)v245[v177] & 0x80) == 0 );
                  v179 = (__int64 *)v245[v177];
                  v180 = *v179 | 0x62;
                  *v179 = v180;
                  v181 = __readcr4();
                  if ( (v181 & 0x20080) != 0 )
                  {
                    __writecr4(v181 ^ 0x80);
                    __writecr4(v181);
                  }
                  else
                  {
                    v182 = __readcr3();
                    __writecr3(v182);
                  }
                  v183 = v173;
                  v184 = (_QWORD *)v169;
                  if ( 4096 - (v169 & 0xFFF) < v173 )
                    v183 = 4096 - (v169 & 0xFFF);
                  v160 = v232;
                  v185 = v183;
                  if ( v183 >= 8 )
                  {
                    v186 = (unsigned __int64)v183 >> 3;
                    do
                    {
                      v185 -= 8;
                      *v184 = *(_QWORD *)v160;
                      v160 += 8LL;
                      ++v184;
                      --v186;
                    }
                    while ( v186 );
                    v173 = v249;
                  }
                  if ( v185 )
                  {
                    v187 = (char *)v184 - v160;
                    do
                    {
                      v187[v160] = *(_BYTE *)v160;
                      ++v160;
                      --v185;
                    }
                    while ( v185 );
                  }
                  v232 += v183;
                  v169 += v183;
                  v173 -= v183;
                  *v179 = v180;
                  v249 = v173;
                  v188 = __readcr4();
                  if ( (v188 & 0x20080) != 0 )
                  {
                    __writecr4(v188 ^ 0x80);
                    __writecr4(v188);
                  }
                  else
                  {
                    v189 = __readcr3();
                    __writecr3(v189);
                  }
                  --v234;
                }
                while ( v234 );
                v164 = k;
                LODWORD(v168) = v250;
              }
            }
            v163 += 16LL;
            v165 = (_QWORD *)((char *)v165 + (unsigned int)v168);
          }
          while ( v163 < v164 );
          v153 = v238;
          LODWORD(v154) = v239;
        }
        v190 = v6[69];
        if ( (*((_DWORD *)v6 + 631) & 0x400000) != 0 )
        {
          v192 = v6[187];
          v193 = &v248;
          LOBYTE(v248) = -61;
          v194 = 4LL;
          LODWORD(v195) = 4;
          v196 = v192 + ((v190 >> 9) & 0x7FFFFFFFF8LL);
          v197 = v246;
          do
          {
            *v197++ = v196;
            v196 = v192 + ((v196 >> 9) & 0x7FFFFFFFF8LL);
            --v194;
          }
          while ( v194 );
          do
            v195 = (unsigned int)(v195 - 1);
          while ( (_DWORD)v195 && (*(_DWORD *)v246[v195] & 0x80) == 0 );
          v198 = (__int64 *)v246[v195];
          v199 = *v198 | 0x62;
          *v198 = v199;
          v200 = __readcr4();
          if ( (v200 & 0x20080) != 0 )
          {
            __writecr4(v200 ^ 0x80);
            __writecr4(v200);
          }
          else
          {
            v201 = __readcr3();
            __writecr3(v201);
          }
          v160 = (v190 & 0xFFF) != 4096;
          if ( (v190 & 0xFFF) != 0x1000 )
          {
            v202 = v190 - (_QWORD)&v248;
            do
            {
              v193[v202] = *v193;
              ++v193;
              v160 = (unsigned int)(v160 - 1);
            }
            while ( (_DWORD)v160 );
          }
          *v198 = v199;
          v217 = __readcr4();
          if ( (v217 & 0x20080) != 0 )
          {
            __writecr4(v217 ^ 0x80);
            __writecr4(v217);
          }
          else
          {
            v218 = __readcr3();
            __writecr3(v218);
          }
        }
        else
        {
          v191 = v235;
          *(_BYTE *)v190 = -61;
          __writecr0(v191);
        }
        LODWORD(v156) = v227;
        LODWORD(v155) = v230;
        v161 = v236;
      }
      if ( *((_DWORD *)v6 + 594) && KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v219 = *((_DWORD *)v6 + 594);
      if ( v219 )
      {
        v220 = v219 - 1;
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
                if ( v223 == 1 )
                {
                  v160 = (*((_DWORD *)v6 + 630) >> 9) & 0x1F;
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v6[203]),
                    v160);
                }
                else
                {
                  _InterlockedOr64((volatile signed __int64 *)(v6[182] + 832LL), 1uLL);
                }
              }
              else
              {
                v160 = *(_QWORD *)(v6[215] + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v6[203]) + v6[211]);
                _interlockedbittestandset((volatile signed __int32 *)v160, (*((_DWORD *)v6 + 630) >> 9) & 0x1F);
              }
              goto LABEL_303;
            }
            v224 = (volatile signed __int32 *)v6[171];
          }
          else
          {
            v224 = (volatile signed __int32 *)v6[170];
          }
        }
        else
        {
          v224 = (volatile signed __int32 *)v6[168];
        }
        _interlockedbittestandset64(v224, 0LL);
      }
LABEL_303:
      *(_QWORD *)(v161 + v6[212]) = 0LL;
      *(_QWORD *)(v161 + v6[214]) = 0LL;
      KeGuardCheckICall(v6[45], v160);
      SdbpCheckDll(265, v156, v155, v154, v153, v6[45], v233 - 8);
      JUMPOUT(0x14050A0ADLL);
    }
    *((_DWORD *)v6 + 530) += 1584;
    v203 = *((_DWORD *)v6 + 49);
    v204 = v6;
    v205 = v6[263];
    v206 = (const char *)v6;
    *((_DWORD *)v6 + 49) = 0;
    v207 = *((_DWORD *)v6 + 525);
    if ( v6 < v6 + 198 )
    {
      do
      {
        _mm_prefetch(v206, 0);
        v206 += 64;
      }
      while ( v206 < (const char *)v6 + 1584 );
    }
    v208 = 12;
    v209 = v205;
    do
    {
      v210 = 8LL;
      do
      {
        v211 = v204[1] ^ __ROL8__(*v204 ^ v209, v207);
        v204 += 2;
        v209 = __ROL8__(v211, v207);
        --v210;
      }
      while ( v210 );
      v212 = (__ROL8__(v205 ^ ((char *)v204 - (char *)v6), 17) ^ v205 ^ (unsigned __int64)((char *)v204 - (char *)v6))
           * (unsigned __int128)0x7010008004002001uLL;
      v207 = (BYTE8(v212) ^ (unsigned __int8)(v212 ^ v207)) & 0x3F;
      if ( !v207 )
        LOBYTE(v207) = 1;
      --v208;
    }
    while ( v208 );
    v2 = a1;
    do
    {
      v209 = __ROL8__(*v204++ ^ v209, v207);
      v40 -= 8;
      --v39;
    }
    while ( v39 );
    for ( ; v40; --v40 )
    {
      v213 = *(unsigned __int8 *)v204;
      v204 = (_QWORD *)((char *)v204 + 1);
      v209 = __ROL8__(v213 ^ v209, v207);
    }
    v214 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v6[36];
    *((_DWORD *)v6 + 49) = v203;
    v6[333] = v209;
    v214(v226, 1LL, v209, v204);
  }
  LOBYTE(KernelDr7) = KiGetTrapFrameMode(v2);
  v216 = (_BYTE)KernelDr7 != 0;
  if ( (_BYTE)KernelDr7 )
  {
    _disable();
    KernelDr7 = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                         + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1624LL));
    _enable();
    LODWORD(v216) = _bittest(KernelDr7, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !(_DWORD)v216 )
  {
    KernelDr7 = (const signed __int32 *)KiReadKernelDr7();
    if ( KernelDr7 )
      __writedr(7u, (unsigned __int64)KernelDr7);
  }
  return (char)KernelDr7;
}
