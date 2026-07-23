/*
 * XREFs of sub_140516C24 @ 0x140516C24
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140516BA0 @ 0x140516BA0 (sub_140516BA0.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140516C24(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int *v3; // rsi
  int *v5; // r12
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  int *v17; // rsi
  __int64 v18; // r9
  char *v19; // r8
  const char *v20; // rax
  unsigned __int64 v21; // rdi
  int v22; // r10d
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned __int64 i; // rax
  _DWORD *v27; // rsi
  unsigned int v28; // edi
  int v29; // r15d
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbp
  int v34; // eax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // r8
  _QWORD *v40; // rdx
  unsigned __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rax
  char *v44; // r9
  char *v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  char v48; // cl
  char v49; // al
  bool v50; // zf
  __int64 v51; // rcx
  unsigned __int8 v52; // r14
  unsigned int *v53; // rcx
  unsigned int *v54; // rdi
  char v55; // r15
  unsigned __int64 v56; // rbp
  __int64 v57; // rdx
  char *v58; // r8
  unsigned int *v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  char v62; // cl
  char v63; // al
  int v64; // r15d
  unsigned __int8 v65; // bp
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rsi
  int v69; // eax
  int v70; // ecx
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // r8
  unsigned __int64 v74; // r9
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  char **v79; // r15
  unsigned int v80; // ecx
  unsigned int v81; // r12d
  unsigned int v82; // edi
  _DWORD *v83; // r14
  char **v84; // rsi
  char *v85; // r9
  char *v86; // r10
  const char *v87; // rax
  int j; // r11d
  unsigned __int64 v89; // r8
  int v90; // ebp
  __int64 v91; // rax
  __int64 v92; // r8
  unsigned __int128 v93; // rax
  unsigned __int64 k; // rax
  __int64 v95; // rsi
  unsigned int v96; // edi
  unsigned int *v97; // rcx
  _DWORD *v98; // rax
  __int64 v99; // r12
  __int64 v100; // r13
  unsigned __int8 v101; // bp
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // r14
  unsigned __int64 v104; // rsi
  int v105; // eax
  __int64 v106; // rcx
  int *v107; // r12
  int v108; // ecx
  __int64 v109; // rcx
  __int64 v110; // r10
  __int64 v111; // r8
  _QWORD *v112; // rdx
  unsigned __int64 v113; // r9
  int v114; // ecx
  __int64 v115; // rax
  unsigned int v116; // edx
  char *v117; // r8
  char *v118; // r9
  __int64 v119; // rcx
  __int64 v120; // rax
  char v121; // cl
  char v122; // al
  __int64 v123; // r13
  unsigned __int8 v124; // bp
  unsigned __int64 v125; // rdi
  unsigned __int64 v126; // r14
  int v127; // eax
  int v128; // ecx
  __int64 v129; // rcx
  __int64 v130; // r11
  __int64 v131; // r8
  _QWORD *v132; // r9
  unsigned __int64 v133; // r10
  int v134; // ecx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rdx
  int v139; // ecx
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // r11
  __int64 v143; // r8
  _QWORD *v144; // r9
  unsigned __int64 v145; // r10
  int v146; // ecx
  __int64 v147; // rax
  int v148; // ecx
  __int64 v149; // rcx
  __int64 v150; // r11
  __int64 v151; // r8
  _QWORD *v152; // r9
  unsigned __int64 v153; // r10
  int v154; // ecx
  __int64 v155; // rax
  __int64 result; // rax
  __int64 v157; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v158; // [rsp+28h] [rbp-C0h]
  __int64 v159; // [rsp+28h] [rbp-C0h]
  __int64 v160; // [rsp+30h] [rbp-B8h]
  __int64 v161; // [rsp+38h] [rbp-B0h]
  unsigned int *v162; // [rsp+38h] [rbp-B0h]
  __int64 v163; // [rsp+40h] [rbp-A8h]
  int v164; // [rsp+48h] [rbp-A0h]
  _BYTE *v165; // [rsp+48h] [rbp-A0h]
  __int64 v166; // [rsp+50h] [rbp-98h]
  int *v167; // [rsp+50h] [rbp-98h]
  unsigned int v168; // [rsp+58h] [rbp-90h]
  __int64 v169; // [rsp+60h] [rbp-88h]
  __int64 v170; // [rsp+68h] [rbp-80h]
  _BYTE v171[16]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v172[104]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v173; // [rsp+F0h] [rbp+8h]
  unsigned int v174; // [rsp+F0h] [rbp+8h]
  int *v175; // [rsp+F8h] [rbp+10h]
  _DWORD *v176; // [rsp+100h] [rbp+18h]
  int v177; // [rsp+100h] [rbp+18h]
  int v178; // [rsp+108h] [rbp+20h]

  v175 = (int *)a2;
  v2 = *(_QWORD *)(a2 + 32);
  v3 = (int *)(a2 + 48);
  v161 = v2;
  v170 = a2 + 48;
  v5 = (int *)a2;
  v6 = *(unsigned int *)(a1 + 2116);
  v7 = ((v2 & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  v8 = (unsigned int)v7;
  v164 = v7;
  v158 = (unsigned int)v7;
  v9 = a2 + 48 + 20LL * (unsigned int)v7;
  v169 = v9;
  v10 = a2 + 48 + 20 * v6;
  v11 = v2 + (unsigned int)((_DWORD)v6 << 12);
  v166 = v10;
  v163 = v11;
  if ( (*(_DWORD *)(a1 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(a1 + 2524) & 0x1000) == 0 || !*(_QWORD *)(a1 + 2768) )
  {
    v12 = 0;
    v173 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 <= 0x10 )
      {
        a2 = v12;
        if ( v12 >= (unsigned int)v7 )
          goto LABEL_53;
      }
      else
      {
        v13 = __rdtsc();
        v14 = __ROR8__(v13, 3);
        a2 = ((((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v14 ^ v13)))
           % v8;
      }
      v15 = (unsigned int)a2;
      a2 = (unsigned int)((_DWORD)a2 << 12);
      v16 = v2 + (unsigned int)a2;
      v17 = &v3[5 * v15];
      v167 = v17;
      if ( *((char *)v17 + 15) >= 0 )
      {
        *(_DWORD *)(a1 + 2120) += 4096;
        LODWORD(v18) = *(_DWORD *)(a1 + 2100);
        v19 = (char *)(v2 + (unsigned int)a2);
        v20 = v19;
        if ( v16 < v16 + 4096 )
        {
          do
          {
            _mm_prefetch(v20, 0);
            v20 += 64;
          }
          while ( (unsigned __int64)v20 < v16 + 4096 );
        }
        v21 = *(_QWORD *)(a1 + 2104);
        v22 = 32;
        do
        {
          v23 = 8LL;
          do
          {
            v24 = *((_QWORD *)v19 + 1) ^ __ROL8__(*(_QWORD *)v19 ^ v21, v18);
            v19 += 16;
            v21 = __ROL8__(v24, v18);
            --v23;
          }
          while ( v23 );
          v25 = __ROL8__(*(_QWORD *)(a1 + 2104) ^ (unsigned __int64)&v19[-v16], 17) ^ *(_QWORD *)(a1 + 2104) ^ (unsigned __int64)&v19[-v16];
          v18 = ((unsigned __int8)(((v25 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v25) ^ (unsigned __int8)v18) & 0x3F;
          if ( !(_DWORD)v18 )
            v18 = 1LL;
          --v22;
        }
        while ( v22 );
        for ( i = v21; ; LODWORD(v21) = i ^ v21 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v27 = v17 + 4;
        v28 = v21 & 0x7FFFFFFF;
        v176 = v27;
        if ( v28 != (*v27 & 0x7FFFFFFF) )
        {
          v29 = *v27 >> 31;
          if ( (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v31 = v16 & 0xFFFFFFFFFFFFF000uLL;
            v32 = (v16 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v33 = CurrentIrql;
              while ( 1 )
              {
                v34 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, __int64))(a1 + 1128))(
                        v31,
                        0LL,
                        v19,
                        v18);
                if ( v34 != -1073741267 )
                  break;
                if ( !v29 )
                  goto LABEL_31;
                if ( CurrentIrql > 1u )
                  goto LABEL_29;
                v33 = CurrentIrql;
                __writecr8(CurrentIrql);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v34 < 0 )
              {
LABEL_31:
                __writecr8(v33);
                v27 = v176;
                v5 = v175;
                goto LABEL_32;
              }
LABEL_29:
              v18 = 4096LL;
              v31 += 4096LL;
              v32 += 4096LL;
              if ( v32 != ((v16 + 4095) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v33);
            v27 = v176;
          }
          else
          {
LABEL_32:
            v35 = (unsigned int)*v27;
            LODWORD(v35) = v35 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(a1 + 2328) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v35 ^ v28;
              if ( !*(_DWORD *)(a1 + 2328) )
              {
                v36 = *(_DWORD *)(a1 + 2520);
                *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2344) = (char *)v5 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2352) = *v5;
                *(_QWORD *)(a1 + 2360) = v16;
                *(_DWORD *)(a1 + 2328) = 1;
                if ( (v36 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v36 & 1) != 0 )
                {
                  v37 = *(unsigned int *)(a1 + 2676);
                  v38 = *(_QWORD *)(a1 + 2104);
                  v39 = *(_QWORD *)(a1 + 2680);
                  v40 = (_QWORD *)(v37 + a1);
                  v41 = v37 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v37) >> 3);
                  while ( v40 != (_QWORD *)v41 )
                  {
                    *v40 ^= v39;
                    v39 = ((v38 ^ *v40++) + __ROR8__(v39, v39 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(a1 + 2524) &= ~0x200000u;
                  if ( v39 != *(_QWORD *)(a1 + 2688) )
                  {
                    v42 = *(_DWORD *)(a1 + 2052);
                    v43 = *(_QWORD *)(a1 + 1416);
                    *(_QWORD *)v43 = a1;
                    *(_DWORD *)(v43 + 16) = v42;
                    if ( !*(_DWORD *)(a1 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v39 ^ *(_QWORD *)(a1 + 2688);
                    sub_140BDA384(a1, 0LL, v39, 256LL);
                  }
                }
              }
            }
          }
        }
        sub_140516B3C(a1, v16, 0x1000u, (__int64)v171);
        v44 = (char *)v167;
        v45 = v171;
        a2 = 16LL;
        do
        {
          v46 = *(_QWORD *)v45;
          v45 += 8;
          v47 = *(_QWORD *)v44;
          v44 += 8;
          if ( v46 != v47 )
            goto LABEL_61;
          a2 = (unsigned int)(a2 - 8);
        }
        while ( (unsigned int)a2 >= 8 );
        if ( !(_DWORD)a2 )
          goto LABEL_50;
        while ( 1 )
        {
          v48 = *v45++;
          v49 = *v44++;
          if ( v48 != v49 )
            break;
          v50 = (_DWORD)a2 == 1;
          a2 = (unsigned int)(a2 - 1);
          if ( v50 )
            goto LABEL_50;
        }
LABEL_61:
        v64 = *v27 >> 31;
        if ( (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
        {
          v65 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v66 = v16 & 0xFFFFFFFFFFFFF000uLL;
          v67 = (v16 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v68 = v65;
            while ( 1 )
            {
              v69 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, char *))(a1 + 1128))(
                      v66,
                      0LL,
                      v45,
                      v44);
              if ( v69 != -1073741267 )
                break;
              if ( !v64 )
                goto LABEL_71;
              if ( v65 > 1u )
                goto LABEL_69;
              v68 = v65;
              __writecr8(v65);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v69 < 0 )
            {
LABEL_71:
              __writecr8(v68);
              goto LABEL_72;
            }
LABEL_69:
            v66 += 4096LL;
            v67 += 4096LL;
            if ( v67 != ((v16 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v68);
LABEL_50:
          v5 = v175;
          goto LABEL_51;
        }
LABEL_72:
        v5 = v175;
        if ( !*(_DWORD *)(a1 + 2328) )
        {
          v70 = *(_DWORD *)(a1 + 2520);
          *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 2344) = (char *)v175 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 2352) = *v175;
          *(_QWORD *)(a1 + 2360) = v16;
          *(_DWORD *)(a1 + 2328) = 1;
          if ( (v70 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v70 & 1) != 0 )
          {
            v71 = *(unsigned int *)(a1 + 2676);
            v72 = *(_QWORD *)(a1 + 2104);
            v73 = *(_QWORD *)(a1 + 2680);
            a2 = v71 + a1;
            v74 = v71 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v71) >> 3);
            while ( a2 != v74 )
            {
              *(_QWORD *)a2 ^= v73;
              v73 = ((v72 ^ *(_QWORD *)a2) + __ROR8__(v73, v73 & 0x3F)) ^ 0xEFA;
              a2 += 8LL;
            }
            *(_DWORD *)(a1 + 2524) &= ~0x200000u;
            if ( v73 != *(_QWORD *)(a1 + 2688) )
            {
              v75 = *(_DWORD *)(a1 + 2052);
              v76 = *(_QWORD *)(a1 + 1416);
              *(_QWORD *)v76 = a1;
              *(_DWORD *)(v76 + 16) = v75;
              if ( !*(_DWORD *)(a1 + 2328) )
                *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v73 ^ *(_QWORD *)(a1 + 2688);
              sub_140BDA384(a1, 0LL, v73, 256LL);
            }
          }
        }
LABEL_51:
        *(_DWORD *)(a1 + 2120) += 0x10000;
        LODWORD(v7) = v164;
        v2 = v161;
        v8 = v158;
      }
      v3 = v5 + 12;
      v12 = v173 + 1;
      v173 = v12;
      if ( v12 >= 0x10 )
        goto LABEL_53;
    }
  }
  if ( v10 == v9 )
  {
LABEL_53:
    v51 = *(_QWORD *)(a1 + 1336);
    v52 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*(void (__fastcall **)(__int64, __int64))(a1 + 352))(v51, a2);
    v53 = **(unsigned int ***)(a1 + 1568);
    v54 = v53 + 4;
    v55 = *((_BYTE *)v53 + 12);
    v56 = (unsigned __int64)&v53[6 * *v53 + 4];
    do
    {
      v57 = 24LL;
      v58 = (char *)(v5 + 6);
      v59 = v54;
      while ( 1 )
      {
        v60 = *(_QWORD *)v59;
        v59 += 2;
        v61 = *(_QWORD *)v58;
        v58 += 8;
        if ( v60 != v61 )
          break;
        v57 = (unsigned int)(v57 - 8);
        if ( (unsigned int)v57 < 8 )
        {
          if ( !(_DWORD)v57 )
            goto LABEL_171;
          while ( 1 )
          {
            v62 = *(_BYTE *)v59;
            v59 = (unsigned int *)((char *)v59 + 1);
            v63 = *v58++;
            if ( v62 != v63 )
              goto LABEL_170;
            v50 = (_DWORD)v57 == 1;
            v57 = (unsigned int)(v57 - 1);
            if ( v50 )
              goto LABEL_171;
          }
        }
      }
LABEL_170:
      v54 += 6;
    }
    while ( (unsigned __int64)v54 < v56 );
LABEL_171:
    (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(a1 + 416))(*(_QWORD *)(a1 + 1336), v57, v58, v59);
    __writecr8(v52);
    if ( !v55 )
      goto LABEL_201;
    v139 = *(_DWORD *)(a1 + 2524);
    if ( (v139 & 0x10) != 0 && !*(_DWORD *)(a1 + 2328) )
    {
      *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 2344) = (char *)v5 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(a1 + 2352) = *v5;
      v140 = *(_DWORD *)(a1 + 2520);
      *(_QWORD *)(a1 + 2360) = 1LL;
      *(_DWORD *)(a1 + 2328) = 1;
      if ( (v140 & 0x20000000) == 0 && (v139 & 0x200000) != 0 && (v140 & 1) != 0 )
      {
        v141 = *(unsigned int *)(a1 + 2676);
        v142 = *(_QWORD *)(a1 + 2104);
        v143 = *(_QWORD *)(a1 + 2680);
        v144 = (_QWORD *)(v141 + a1);
        v145 = v141 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v141) >> 3);
        while ( v144 != (_QWORD *)v145 )
        {
          *v144 ^= v143;
          v143 = ((*v144++ ^ v142) + __ROR8__(v143, v143 & 0x3F)) ^ 0xEFA;
        }
        *(_DWORD *)(a1 + 2524) &= ~0x200000u;
        if ( v143 != *(_QWORD *)(a1 + 2688) )
        {
          v146 = *(_DWORD *)(a1 + 2052);
          v147 = *(_QWORD *)(a1 + 1416);
          *(_QWORD *)v147 = a1;
          *(_DWORD *)(v147 + 16) = v146;
          if ( !*(_DWORD *)(a1 + 2328) )
            *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v143 ^ *(_QWORD *)(a1 + 2688);
          sub_140BDA384(a1, 0LL, v143, 256LL);
        }
      }
    }
    if ( *((_QWORD *)v5 + 3) != 1LL )
    {
LABEL_201:
      if ( v54 == (unsigned int *)v56 && !*(_DWORD *)(a1 + 2328) )
      {
        v148 = *(_DWORD *)(a1 + 2520);
        *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2344) = (char *)v5 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 2352) = *v5;
        *(_QWORD *)(a1 + 2360) = v54;
        *(_DWORD *)(a1 + 2328) = 1;
        if ( (v148 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v148 & 1) != 0 )
        {
          v149 = *(unsigned int *)(a1 + 2676);
          v150 = *(_QWORD *)(a1 + 2104);
          v151 = *(_QWORD *)(a1 + 2680);
          v152 = (_QWORD *)(v149 + a1);
          v153 = v149 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v149) >> 3);
          while ( v152 != (_QWORD *)v153 )
          {
            *v152 ^= v151;
            v151 = ((*v152++ ^ v150) + __ROR8__(v151, v151 & 0x3F)) ^ 0xEFA;
          }
          *(_DWORD *)(a1 + 2524) &= ~0x200000u;
          if ( v151 != *(_QWORD *)(a1 + 2688) )
          {
            v154 = *(_DWORD *)(a1 + 2052);
            v155 = *(_QWORD *)(a1 + 1416);
            *(_QWORD *)v155 = a1;
            *(_DWORD *)(v155 + 16) = v154;
            if ( !*(_DWORD *)(a1 + 2328) )
              *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v151 ^ *(_QWORD *)(a1 + 2688);
            sub_140BDA384(a1, 0LL, v151, 256LL);
          }
        }
      }
    }
    LODWORD(v138) = 0;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 2120) < *(_DWORD *)(a1 + 2124) )
    {
      v77 = 0LL;
      if ( v10 != v9 )
      {
        v78 = v10;
        do
        {
          if ( *(char *)(v78 + 15) < 0 )
            break;
          v77 = (unsigned int)(v77 + 1);
          v78 = v10 + 20 * v77;
        }
        while ( v78 != v9 );
        v11 = v163;
        if ( (_DWORD)v77 )
        {
          v79 = *(char ***)(a1 + 2768);
          v80 = v77;
          v178 = 0;
          v159 = (__int64)v79;
          v177 = v77;
          v160 = v10;
          v157 = v163;
          while ( 1 )
          {
            v81 = 8;
            if ( v80 < 8 )
              v81 = v80;
            v82 = 0;
            v168 = v81;
            v83 = v172;
            v84 = v79;
            do
            {
              v84[1] = (char *)4096;
              v85 = (char *)(v11 + (v82 << 12));
              *v84 = v85;
              v86 = v85;
              *(_DWORD *)(a1 + 2120) += 4096;
              v87 = v85;
              for ( j = *(_DWORD *)(a1 + 2100); v87 < v85 + 4096; v87 += 64 )
                _mm_prefetch(v87, 0);
              v89 = *(_QWORD *)(a1 + 2104);
              v90 = 32;
              do
              {
                v91 = 8LL;
                do
                {
                  v92 = *((_QWORD *)v86 + 1) ^ __ROL8__(*(_QWORD *)v86 ^ v89, j);
                  v86 += 16;
                  v89 = __ROL8__(v92, j);
                  --v91;
                }
                while ( v91 );
                v93 = (__ROL8__(*(_QWORD *)(a1 + 2104) ^ (v86 - v85), 17) ^ *(_QWORD *)(a1 + 2104) ^ (unsigned __int64)(v86 - v85))
                    * (unsigned __int128)0x7010008004002001uLL;
                j = ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE8(v93) ^ j)) & 0x3F;
                if ( !j )
                  LOBYTE(j) = 1;
                --v90;
              }
              while ( v90 );
              for ( k = v89; ; LODWORD(v89) = k ^ v89 )
              {
                k >>= 31;
                if ( !k )
                  break;
              }
              v11 = v157;
              *v83 = v89 & 0x7FFFFFFF;
              ++v82;
              ++v83;
              v84 += 6;
            }
            while ( v82 < v81 );
            v95 = v160;
            v79 = (char **)v159;
            sub_140516BA0(a1, v159, v81);
            v96 = 0;
            v174 = 0;
            v97 = (unsigned int *)v172;
            v98 = (_DWORD *)(v160 + 16);
            v165 = v172;
            v162 = (unsigned int *)(v160 + 16);
            do
            {
              v99 = *v97;
              if ( (_DWORD)v99 == (*v98 & 0x7FFFFFFF) )
                goto LABEL_130;
              v100 = v11 + (v96 << 12);
              if ( (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
              {
                v101 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v102 = v100 & 0xFFFFFFFFFFFFF000uLL;
                v103 = (v100 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 2 )
                {
                  v104 = v101;
                  while ( 1 )
                  {
                    v105 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 1128))(v102, 0LL);
                    if ( v105 != -1073741267 )
                      break;
                    if ( v101 > 1u )
                      goto LABEL_115;
                    v104 = v101;
                    __writecr8(v101);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v105 < 0 )
                  {
                    __writecr8(v104);
                    v96 = v174;
                    v11 = v157;
                    v95 = v160;
                    v79 = (char **)v159;
                    break;
                  }
LABEL_115:
                  v102 += 4096LL;
                  v103 += 4096LL;
                  if ( v103 != ((v100 + 4095) | 0xFFF) )
                    continue;
                  goto LABEL_116;
                }
              }
              v106 = *v162;
              LODWORD(v106) = v106 & 0x7FFFFFFF;
              if ( *(_DWORD *)(a1 + 2328)
                || (*(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v99 ^ v106, *(_DWORD *)(a1 + 2328)) )
              {
LABEL_130:
                v107 = v175;
              }
              else
              {
                v107 = v175;
                v108 = *(_DWORD *)(a1 + 2520);
                *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2344) = (char *)v175 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2352) = *v175;
                *(_QWORD *)(a1 + 2360) = v100;
                *(_DWORD *)(a1 + 2328) = 1;
                if ( (v108 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v108 & 1) != 0 )
                {
                  v109 = *(unsigned int *)(a1 + 2676);
                  v110 = *(_QWORD *)(a1 + 2104);
                  v111 = *(_QWORD *)(a1 + 2680);
                  v112 = (_QWORD *)(v109 + a1);
                  v113 = v109 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v109) >> 3);
                  while ( v112 != (_QWORD *)v113 )
                  {
                    *v112 ^= v111;
                    v111 = ((v110 ^ *v112++) + __ROR8__(v111, v111 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(a1 + 2524) &= ~0x200000u;
                  if ( v111 != *(_QWORD *)(a1 + 2688) )
                  {
                    v114 = *(_DWORD *)(a1 + 2052);
                    v115 = *(_QWORD *)(a1 + 1416);
                    *(_QWORD *)v115 = a1;
                    *(_DWORD *)(v115 + 16) = v114;
                    if ( !*(_DWORD *)(a1 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v111 ^ *(_QWORD *)(a1 + 2688);
                    sub_140BDA384(a1, 0LL, v111, 256LL);
                  }
                }
              }
              v116 = 16;
              v117 = (char *)(v95 + 20LL * v96);
              v118 = (char *)&v79[6 * v96 + 2];
              while ( 1 )
              {
                v119 = *(_QWORD *)v118;
                v118 += 8;
                v120 = *(_QWORD *)v117;
                v117 += 8;
                if ( v119 != v120 )
                  break;
                v116 -= 8;
                if ( v116 < 8 )
                {
                  if ( !v116 )
                    goto LABEL_159;
                  while ( 1 )
                  {
                    v121 = *v118++;
                    v122 = *v117++;
                    if ( v121 != v122 )
                      goto LABEL_138;
                    if ( !--v116 )
                      goto LABEL_159;
                  }
                }
              }
LABEL_138:
              v123 = v11 + (v96 << 12);
              if ( (*(_DWORD *)(a1 + 2524) & 0x40) != 0 )
              {
                v124 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v125 = v123 & 0xFFFFFFFFFFFFF000uLL;
                v126 = (v123 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 2 )
                {
                  v104 = v124;
                  while ( 1 )
                  {
                    v127 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *, char *))(a1 + 1128))(
                             v125,
                             0LL,
                             v117,
                             v118);
                    if ( v127 != -1073741267 )
                      break;
                    if ( v124 > 1u )
                      goto LABEL_145;
                    v104 = v124;
                    __writecr8(v124);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v127 < 0 )
                  {
                    __writecr8(v104);
                    v96 = v174;
                    goto LABEL_148;
                  }
LABEL_145:
                  v125 += 4096LL;
                  v126 += 4096LL;
                  if ( v126 != ((v123 + 4095) | 0xFFF) )
                    continue;
                  break;
                }
LABEL_116:
                __writecr8(v104);
                v96 = v174;
                goto LABEL_159;
              }
LABEL_148:
              if ( !*(_DWORD *)(a1 + 2328) )
              {
                v128 = *(_DWORD *)(a1 + 2520);
                *(_QWORD *)(a1 + 2336) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 2344) = (char *)v107 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 2352) = *v107;
                *(_QWORD *)(a1 + 2360) = v123;
                *(_DWORD *)(a1 + 2328) = 1;
                if ( (v128 & 0x20000000) == 0 && (*(_DWORD *)(a1 + 2524) & 0x200000) != 0 && (v128 & 1) != 0 )
                {
                  v129 = *(unsigned int *)(a1 + 2676);
                  v130 = *(_QWORD *)(a1 + 2104);
                  v131 = *(_QWORD *)(a1 + 2680);
                  v132 = (_QWORD *)(v129 + a1);
                  v133 = v129 + a1 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2052) - v129) >> 3);
                  while ( v132 != (_QWORD *)v133 )
                  {
                    *v132 ^= v131;
                    v131 = ((*v132++ ^ v130) + __ROR8__(v131, v131 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(a1 + 2524) &= ~0x200000u;
                  if ( v131 != *(_QWORD *)(a1 + 2688) )
                  {
                    v134 = *(_DWORD *)(a1 + 2052);
                    v135 = *(_QWORD *)(a1 + 1416);
                    *(_QWORD *)v135 = a1;
                    *(_DWORD *)(v135 + 16) = v134;
                    if ( !*(_DWORD *)(a1 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(a1 + 1416) + 24LL) = v131 ^ *(_QWORD *)(a1 + 2688);
                    sub_140BDA384(a1, 0LL, v131, 256LL);
                  }
                }
              }
LABEL_159:
              ++v96;
              v97 = (unsigned int *)(v165 + 4);
              v98 = v162 + 5;
              v11 = v157;
              v95 = v160;
              v79 = (char **)v159;
              v174 = v96;
              v165 += 4;
              v162 += 5;
            }
            while ( v96 < v168 );
            v77 = v168 + v178;
            v11 = (v168 << 12) + v157;
            v178 += v168;
            v157 = v11;
            *(_DWORD *)(a1 + 2120) += v168 << 15;
            v80 = v177 - v168;
            v160 += 20LL * v168;
            v177 -= v168;
            if ( *(_DWORD *)(a1 + 2120) >= *(_DWORD *)(a1 + 2124) || !v80 )
            {
              v10 = v166;
              v9 = v169;
              v11 = v163;
              break;
            }
          }
        }
      }
      v136 = v10 + 20 * v77;
      if ( v136 != v9 )
      {
        do
        {
          if ( *(char *)(v136 + 15) >= 0 )
            break;
          v77 = (unsigned int)(v77 + 1);
          v136 = v10 + 20 * v77;
        }
        while ( v136 != v9 );
        v11 = v163;
      }
      v137 = 5 * v77;
      a2 = (unsigned int)((_DWORD)v77 << 12);
      v10 += 4 * v137;
      v11 += (unsigned int)a2;
      v166 = v10;
      v163 = v11;
      if ( v10 == v9 )
      {
        v5 = v175;
        goto LABEL_53;
      }
    }
    v138 = (v10 - v170) / 20;
  }
  result = 2116LL;
  *(_DWORD *)(a1 + 2116) = v138;
  return result;
}
