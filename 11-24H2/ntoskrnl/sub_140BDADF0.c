/*
 * XREFs of sub_140BDADF0 @ 0x140BDADF0
 * Callers:
 *     RtlpComputeEpilogueOffset @ 0x14051840C (RtlpComputeEpilogueOffset.c)
 * Callees:
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     SdbpCheckDll @ 0x140BDC7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 */

__int64 __fastcall sub_140BDADF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  int v6; // ecx
  int v7; // esi
  _QWORD *v8; // r9
  int v9; // r10d
  const char *v10; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // r8
  unsigned __int128 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r8
  _QWORD *v29; // rdx
  unsigned __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  __int64 *v33; // rax
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // r8
  unsigned int v37; // r9d
  int *v38; // rbx
  __int64 v39; // r10
  __int64 v40; // rax
  int v41; // eax
  _QWORD *v42; // r11
  int v43; // r14d
  int v44; // eax
  __int64 v45; // r8
  unsigned __int64 v46; // r15
  _QWORD *v47; // r9
  const char *v48; // rax
  unsigned __int64 v49; // rsi
  unsigned int v50; // r10d
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int128 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  bool v57; // zf
  unsigned __int64 i; // rax
  unsigned int v59; // esi
  BOOL v60; // r12d
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // r14
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // ecx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // r8
  _QWORD *v73; // rdx
  unsigned __int64 v74; // r11
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // r14
  __int64 v79; // r15
  __int64 v80; // r12
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v82; // r9
  __int64 v83; // rax
  unsigned __int64 v84; // rdx
  __int64 v85; // rbx
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r14
  unsigned __int64 v88; // r12
  _QWORD *v89; // rsi
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rax
  __int64 v92; // r13
  unsigned __int64 v93; // r8
  _QWORD *v94; // rcx
  unsigned __int64 v95; // r9
  signed __int64 v96; // r8
  unsigned int v97; // ebx
  __int64 v98; // r10
  unsigned __int64 *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r9
  unsigned __int64 v102; // rax
  __int64 *v103; // r15
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rcx
  unsigned int v107; // r10d
  _QWORD *v108; // r9
  unsigned int v109; // r11d
  unsigned __int64 v110; // rbx
  char *v111; // r9
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // r8
  unsigned __int64 v115; // rax
  __int64 v116; // rdx
  __int64 *v117; // r9
  __int64 v118; // r11
  __int64 v119; // r10
  unsigned __int64 v120; // rax
  unsigned __int64 *v121; // rcx
  __int64 *v122; // r11
  __int64 v123; // rax
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // r8
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // rax
  __int64 v129; // r8
  unsigned __int64 v130; // rax
  __int64 v131; // rcx
  _QWORD *v132; // r9
  unsigned __int64 v133; // rax
  unsigned __int128 v134; // rax
  __int64 v135; // rdx
  char *v136; // rdx
  _QWORD *v137; // rcx
  __int64 v138; // r8
  char v139; // al
  unsigned __int64 v140; // r9
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  volatile signed __int32 *v147; // rax
  signed __int32 v148[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v149; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v150; // [rsp+50h] [rbp-B8h]
  __int64 v151; // [rsp+58h] [rbp-B0h]
  __int64 v152; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v153; // [rsp+68h] [rbp-A0h]
  int v154; // [rsp+70h] [rbp-98h]
  __int64 v155; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v156; // [rsp+80h] [rbp-88h]
  __int64 v157; // [rsp+88h] [rbp-80h]
  unsigned __int64 v158; // [rsp+90h] [rbp-78h]
  __int64 v159; // [rsp+98h] [rbp-70h]
  __int64 v160; // [rsp+A0h] [rbp-68h]
  __int16 v161; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v162; // [rsp+AAh] [rbp-5Eh]
  unsigned __int64 j; // [rsp+B8h] [rbp-50h]
  __int64 v164; // [rsp+C0h] [rbp-48h]
  __int64 v165; // [rsp+C8h] [rbp-40h]
  _BYTE v166[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v167; // [rsp+E0h] [rbp-28h]
  __int64 v168; // [rsp+E8h] [rbp-20h]
  __int64 v169; // [rsp+F0h] [rbp-18h]
  __int64 v170; // [rsp+F8h] [rbp-10h]
  _QWORD v171[4]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v172[5]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v173; // [rsp+180h] [rbp+78h] BYREF

  v173 = a2;
  v2 = a2;
  if ( (*(_DWORD *)(a2 + 2520) & 0x88000) != 0x88000 )
  {
    v3 = *(_QWORD *)(a2 + 2304);
    v4 = 38LL;
    v5 = (_QWORD *)v3;
    v6 = 304;
    do
    {
      *v5 = 0LL;
      v6 -= 8;
      ++v5;
      --v4;
    }
    while ( v4 );
    for ( ; v6; --v6 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 2152);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 2168);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)(v2 + 2184);
    v161 = 303;
    v162 = v3;
    *(_WORD *)(v3 + 16) = v2 + 2200;
    *(_DWORD *)(v3 + 24) = (unsigned __int64)(v2 + 2200) >> 32;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2200) >> 16;
    _disable();
    if ( (*(_DWORD *)(v2 + 2520) & 0x40000000) != 0 )
    {
      __writedr(7u, 0LL);
    }
    else
    {
      __sidt(v166);
      __lidt(&v161);
      __writedr(7u, 0LL);
      __lidt(v166);
    }
    _enable();
  }
  *(_DWORD *)(v2 + 2120) += 1584;
  v7 = *(_DWORD *)(v2 + 196);
  v8 = (_QWORD *)v2;
  v9 = *(_DWORD *)(v2 + 2100);
  v10 = (const char *)v2;
  v11 = *(_QWORD *)(v2 + 2104);
  *(_DWORD *)(v2 + 196) = 0;
  if ( v2 < (unsigned __int64)(v2 + 1584) )
  {
    do
    {
      _mm_prefetch(v10, 0);
      v10 += 64;
    }
    while ( (unsigned __int64)v10 < v2 + 1584 );
  }
  v12 = v11;
  v13 = 12;
  do
  {
    v14 = 8LL;
    do
    {
      v15 = *v8 ^ v12;
      v16 = v8 + 1;
      v17 = *v16 ^ __ROL8__(v15, v9);
      v8 = v16 + 1;
      v12 = __ROL8__(v17, v9);
      --v14;
    }
    while ( v14 );
    v18 = (__ROL8__(v11 ^ ((unsigned __int64)v8 - v2), 17) ^ v11 ^ ((unsigned __int64)v8 - v2))
        * (unsigned __int128)0x7010008004002001uLL;
    v167 = *((_QWORD *)&v18 + 1);
    v9 = ((unsigned __int8)(v18 ^ BYTE8(v18)) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
    --v13;
  }
  while ( v13 );
  v19 = 48;
  v20 = 6LL;
  v21 = 64;
  do
  {
    v12 = __ROL8__(*v8++ ^ v12, v9);
    v19 -= 8;
    --v20;
  }
  while ( v20 );
  for ( ; v19; --v19 )
  {
    v22 = *(unsigned __int8 *)v8;
    v8 = (_QWORD *)((char *)v8 + 1);
    v12 = __ROL8__(v22 ^ v12, v9);
  }
  *(_DWORD *)(v2 + 196) = v7;
  if ( *(_QWORD *)(v2 + 2664) != v12 )
  {
    v23 = *(_QWORD *)(v2 + 1416);
    v24 = *(_DWORD *)(v2 + 2052);
    *(_QWORD *)v23 = v2;
    *(_DWORD *)(v23 + 16) = v24;
    if ( !*(_DWORD *)(v2 + 2328) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = *(_QWORD *)(v2 + 2664) ^ v12;
      if ( !*(_DWORD *)(v2 + 2328) )
      {
        v25 = *(_DWORD *)(v2 + 2520);
        *(_QWORD *)(v2 + 2336) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2344) = 0LL;
        *(_QWORD *)(v2 + 2352) = 265LL;
        *(_QWORD *)(v2 + 2360) = v12;
        *(_DWORD *)(v2 + 2328) = 1;
        if ( (v25 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2524) & 0x200000) != 0 && (v25 & 1) != 0 )
        {
          v26 = *(unsigned int *)(v2 + 2676);
          v27 = *(_QWORD *)(v2 + 2104);
          v28 = *(_QWORD *)(v2 + 2680);
          v29 = (_QWORD *)(v26 + v2);
          v30 = v26 + v2 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2 + 2052) - v26) >> 3);
          while ( v29 != (_QWORD *)v30 )
          {
            *v29 ^= v28;
            v28 = ((v27 ^ *v29++) + __ROR8__(v28, v28 & 0x3F)) ^ 0xEFA;
          }
          *(_DWORD *)(v2 + 2524) &= ~0x200000u;
          if ( v28 != *(_QWORD *)(v2 + 2688) )
          {
            v31 = *(_DWORD *)(v2 + 2052);
            v32 = *(_QWORD *)(v2 + 1416);
            *(_QWORD *)v32 = v2;
            *(_DWORD *)(v32 + 16) = v31;
            if ( !*(_DWORD *)(v2 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v28 ^ *(_QWORD *)(v2 + 2688);
            sub_140BDA384(v2, 0LL, v28, 256LL);
          }
        }
      }
    }
  }
  v151 = 0LL;
  v33 = &v152;
  v34 = 4;
  do
  {
    *(_BYTE *)v33 = 0;
    v33 = (__int64 *)((char *)v33 + 1);
    --v34;
  }
  while ( v34 );
  v35 = 0;
  LODWORD(v149) = 0;
  if ( *(_DWORD *)(v2 + 2048) )
  {
    while ( 1 )
    {
      v36 = v2;
      v37 = 0;
      if ( *(_QWORD *)(v2 + 2752) )
        v36 = *(_QWORD *)(v2 + 2752);
      v38 = (int *)(v36 + *(unsigned int *)(v36 + 2088));
      if ( (_DWORD)v151 && HIDWORD(v151) <= v35 )
      {
        v37 = HIDWORD(v151);
        v38 = (int *)(v36 + (unsigned int)v152);
      }
      if ( v37 != v35 )
        break;
LABEL_63:
      v42 = (_QWORD *)*((_QWORD *)v38 + 1);
      v43 = *(_DWORD *)(v2 + 2100);
      v44 = (_DWORD)v38 - v36;
      v45 = (unsigned int)v38[4];
      *(_DWORD *)(v2 + 2120) += v45;
      v46 = *(_QWORD *)(v2 + 2104);
      HIDWORD(v151) = v37;
      v47 = v42;
      LODWORD(v152) = v44;
      LODWORD(v151) = 1;
      v48 = (const char *)v42;
      if ( v42 < (_QWORD *)((char *)v42 + v45) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( v48 < (const char *)v42 + v45 );
      }
      v49 = v46;
      v50 = (unsigned int)v45 >> 7;
      if ( (unsigned int)v45 >> 7 )
      {
        do
        {
          v51 = 8LL;
          do
          {
            v52 = v47[1] ^ __ROL8__(*v47 ^ v49, v43);
            v47 += 2;
            v49 = __ROL8__(v52, v43);
            --v51;
          }
          while ( v51 );
          v53 = (__ROL8__(v46 ^ ((char *)v47 - (char *)v42), 17) ^ v46 ^ ((char *)v47 - (char *)v42))
              * (unsigned __int128)0x7010008004002001uLL;
          v168 = *((_QWORD *)&v53 + 1);
          v43 = ((unsigned __int8)(v53 ^ BYTE8(v53)) ^ (unsigned __int8)v43) & 0x3F;
          if ( !v43 )
            LOBYTE(v43) = 1;
          --v50;
        }
        while ( v50 );
        v2 = v173;
      }
      v54 = v45 & 0x7F;
      if ( (unsigned int)v54 >= 8 )
      {
        v55 = (unsigned __int64)(unsigned int)v54 >> 3;
        do
        {
          v49 = __ROL8__(*v47++ ^ v49, v43);
          v54 = (unsigned int)(v54 - 8);
          --v55;
        }
        while ( v55 );
      }
      if ( (_DWORD)v54 )
      {
        do
        {
          v56 = *(unsigned __int8 *)v47;
          v47 = (_QWORD *)((char *)v47 + 1);
          v49 = __ROL8__(v56 ^ v49, v43);
          v57 = (_DWORD)v54 == 1;
          v54 = (unsigned int)(v54 - 1);
        }
        while ( !v57 );
      }
      for ( i = v49; ; LODWORD(v49) = i ^ v49 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v59 = v49 & 0x7FFFFFFF;
      v60 = 0;
      if ( v59 != v38[5] )
      {
        if ( !*v38 )
          v60 = v38[6] != 0;
        v61 = (unsigned int)v38[4];
        v62 = *((_QWORD *)v38 + 1);
        if ( v38[4] && (*(_DWORD *)(v2 + 2524) & 0x40) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v64 = v62 & 0xFFFFFFFFFFFFF000uLL;
          v153 = (v62 + v61 - 1) | 0xFFF;
          v150 = (v62 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v65 = CurrentIrql;
            while ( 1 )
            {
              v66 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v2 + 1128))(
                      v64,
                      0LL,
                      v54,
                      v47);
              if ( v66 != -1073741267 )
                break;
              if ( v60 )
                goto LABEL_94;
              if ( CurrentIrql > 1u )
                goto LABEL_92;
              v65 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v66 < 0 )
            {
LABEL_94:
              __writecr8(v65);
              goto LABEL_95;
            }
LABEL_92:
            v64 += 4096LL;
            v150 += 4096LL;
            if ( v150 != v153 )
              continue;
            break;
          }
          __writecr8(v65);
        }
        else
        {
LABEL_95:
          if ( !*(_DWORD *)(v2 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = (unsigned int)v38[5] ^ (unsigned __int64)v59;
          v67 = *((_QWORD *)v38 + 1);
          if ( !*(_DWORD *)(v2 + 2328) )
          {
            *(_QWORD *)(v2 + 2336) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 2344) = (char *)v38 - 0x4C48B4211BBACBEBLL;
            v68 = *v38;
            *(_QWORD *)(v2 + 2360) = v67;
            v69 = *(_DWORD *)(v2 + 2520);
            *(_QWORD *)(v2 + 2352) = v68;
            *(_DWORD *)(v2 + 2328) = 1;
            if ( (v69 & 0x20000000) == 0 && (*(_DWORD *)(v2 + 2524) & 0x200000) != 0 && (v69 & 1) != 0 )
            {
              v70 = *(unsigned int *)(v2 + 2676);
              v71 = *(_QWORD *)(v2 + 2104);
              v72 = *(_QWORD *)(v2 + 2680);
              v73 = (_QWORD *)(v70 + v2);
              v74 = v70 + v2 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v2 + 2052) - v70) >> 3);
              while ( v73 != (_QWORD *)v74 )
              {
                *v73 ^= v72;
                v72 = ((v71 ^ *v73++) + __ROR8__(v72, v72 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v2 + 2524) &= ~0x200000u;
              if ( v72 != *(_QWORD *)(v2 + 2688) )
              {
                v75 = *(_DWORD *)(v2 + 2052);
                v76 = *(_QWORD *)(v2 + 1416);
                *(_QWORD *)v76 = v2;
                *(_DWORD *)(v76 + 16) = v75;
                if ( !*(_DWORD *)(v2 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v2 + 1416) + 24LL) = v72 ^ *(_QWORD *)(v2 + 2688);
                sub_140BDA384(v2, 0LL, v72, 256LL);
              }
            }
          }
        }
      }
      v35 = v149 + 1;
      LODWORD(v149) = v35;
      v21 = 64;
      if ( v35 >= *(_DWORD *)(v2 + 2048) )
        goto LABEL_109;
    }
    v39 = v35 - v37;
    v37 = v35;
    while ( 1 )
    {
      if ( *v38 == 1 )
      {
LABEL_61:
        v40 = 4 * (v38[4] / 0xCu) + 48;
        goto LABEL_62;
      }
      if ( *v38 == 7 )
      {
        v40 = (unsigned int)(24 * (v38[6] + 2));
        goto LABEL_62;
      }
      if ( *v38 == 8 )
        break;
      switch ( *v38 )
      {
        case 10:
          v40 = (unsigned int)(16 * (v38[7] + 3));
          break;
        case 28:
          v41 = *((unsigned __int16 *)v38 + 20);
LABEL_59:
          v40 = (v41 + 55) & 0xFFFFFFF8;
          break;
        case 30:
          v40 = (((v38[9] != 0 ? v38[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v38 + 20) + 2);
          break;
        case 33:
          v40 = 20 * (unsigned int)(((v38[8] & 0xFFF) + (unsigned __int64)(unsigned int)v38[10] + 4095) >> 12) + 48;
          break;
        case 43:
          goto LABEL_61;
        default:
          v40 = 48LL;
          break;
      }
LABEL_62:
      v38 = (int *)((char *)v38 + v40);
      if ( !--v39 )
        goto LABEL_63;
    }
    v41 = *((unsigned __int16 *)v38 + 16);
    goto LABEL_59;
  }
LABEL_109:
  if ( *(_DWORD *)(v2 + 2328) )
  {
    v77 = *(_QWORD *)(v2 + 2352);
    v78 = *(_QWORD *)(v2 + 2360);
    v79 = *(_QWORD *)(v2 + 2344);
    v80 = *(_QWORD *)(v2 + 2336);
    v159 = v77;
    v160 = v78;
    v165 = v79;
    v153 = v80;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v82 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1600));
    v83 = *(_QWORD *)(v2 + 1608);
    v150 = v82;
    v84 = *(_QWORD *)(v2 + 1928) + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v83);
    v85 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1624));
    v164 = v85;
    if ( (unsigned __int64)&v155 > v82 || (unsigned __int64)&v155 < v82 - *(unsigned int *)(v2 + 1532) )
    {
      if ( *((_BYTE *)&CurrentPrcb->MxCsr + *(_QWORD *)(v2 + 1616))
        && (unsigned __int64)&v155 <= v84
        && (unsigned __int64)&v155 >= v84 - *(unsigned int *)(v2 + 1528) )
      {
        v150 = v84;
      }
      else
      {
        v150 = *(_QWORD *)(v85 + *(_QWORD *)(v2 + 1672));
      }
    }
    if ( (*(_DWORD *)(v2 + 2520) & 0x4000000) == 0 )
    {
      v158 = 0LL;
      if ( (*(_DWORD *)(v2 + 2524) & 0x400000) == 0 )
      {
        v86 = __readcr0();
        v158 = v86;
        __writecr0(v86 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v87 = v2 + 2800;
      v84 = 0LL;
      v88 = v2 + 2800 + 16LL * *(unsigned int *)(v2 + 2792);
      v89 = (_QWORD *)v88;
      for ( j = v88; (unsigned int)v84 < *(_DWORD *)(v2 + 2796); v84 = (unsigned int)(v84 + 1) )
      {
        *(_QWORD *)*v89 = v89[1];
        v90 = __readcr4();
        if ( (v90 & 0x20080) != 0 )
        {
          __writecr4(v90 ^ 0x80);
          __writecr4(v90);
        }
        else
        {
          v91 = __readcr3();
          __writecr3(v91);
        }
        v89 += 2;
      }
      if ( v87 < v88 )
      {
        do
        {
          v57 = (*(_DWORD *)(v2 + 2524) & 0x400000) == 0;
          v92 = *(unsigned int *)(v87 + 8);
          v93 = *(_QWORD *)v87;
          v154 = *(_DWORD *)(v87 + 8);
          if ( v57 )
          {
            v84 = (unsigned int)v92;
            v94 = v89;
            if ( (unsigned int)v92 >= 8 )
            {
              v95 = (unsigned __int64)(unsigned int)v92 >> 3;
              do
              {
                v84 = (unsigned int)(v84 - 8);
                *(_QWORD *)v93 = *v94++;
                v93 += 8LL;
                --v95;
              }
              while ( v95 );
            }
            if ( (_DWORD)v84 )
            {
              v96 = v93 - (_QWORD)v94;
              do
              {
                *((_BYTE *)v94 + v96) = *(_BYTE *)v94;
                v94 = (_QWORD *)((char *)v94 + 1);
                v57 = (_DWORD)v84 == 1;
                v84 = (unsigned int)(v84 - 1);
              }
              while ( !v57 );
            }
          }
          else
          {
            v156 = (unsigned __int64)v89;
            v97 = v92;
            v84 = ((v93 & 0xFFF) + v92 + 4095) >> 12;
            LODWORD(v149) = v92;
            if ( (_DWORD)v84 )
            {
              v157 = (unsigned int)v84;
              do
              {
                v98 = *(_QWORD *)(v2 + 1496);
                v99 = v171;
                v100 = 4LL;
                LODWORD(v101) = 4;
                v102 = v98 + ((v93 >> 9) & 0x7FFFFFFFF8LL);
                do
                {
                  *v99++ = v102;
                  v102 = v98 + ((v102 >> 9) & 0x7FFFFFFFF8LL);
                  --v100;
                }
                while ( v100 );
                do
                {
                  v57 = (_DWORD)v101 == 1;
                  v101 = (unsigned int)(v101 - 1);
                }
                while ( !v57 && (*(_DWORD *)v171[v101] & 0x80) == 0 );
                v103 = (__int64 *)v171[v101];
                v104 = *v103 | 0x62;
                *v103 = v104;
                v105 = __readcr4();
                if ( (v105 & 0x20080) != 0 )
                {
                  __writecr4(v105 ^ 0x80);
                  __writecr4(v105);
                }
                else
                {
                  v106 = __readcr3();
                  __writecr3(v106);
                }
                v107 = v97;
                v108 = (_QWORD *)v93;
                if ( 4096 - (v93 & 0xFFF) < v97 )
                  v107 = 4096 - (v93 & 0xFFF);
                v84 = v156;
                v109 = v107;
                if ( v107 >= 8 )
                {
                  v110 = (unsigned __int64)v107 >> 3;
                  do
                  {
                    v109 -= 8;
                    *v108 = *(_QWORD *)v84;
                    v84 += 8LL;
                    ++v108;
                    --v110;
                  }
                  while ( v110 );
                  v97 = v149;
                }
                if ( v109 )
                {
                  v111 = (char *)v108 - v84;
                  do
                  {
                    v111[v84] = *(_BYTE *)v84;
                    ++v84;
                    --v109;
                  }
                  while ( v109 );
                }
                v156 += v107;
                v93 += v107;
                v97 -= v107;
                *v103 = v104;
                LODWORD(v149) = v97;
                v112 = __readcr4();
                if ( (v112 & 0x20080) != 0 )
                {
                  __writecr4(v112 ^ 0x80);
                  __writecr4(v112);
                }
                else
                {
                  v113 = __readcr3();
                  __writecr3(v113);
                }
                --v157;
              }
              while ( v157 );
              v88 = j;
              LODWORD(v92) = v154;
            }
          }
          v87 += 16LL;
          v89 = (_QWORD *)((char *)v89 + (unsigned int)v92);
        }
        while ( v87 < v88 );
        v85 = v164;
        LODWORD(v79) = v165;
      }
      v114 = *(_QWORD *)(v2 + 552);
      if ( (*(_DWORD *)(v2 + 2524) & 0x400000) != 0 )
      {
        v116 = *(_QWORD *)(v2 + 1496);
        v117 = &v173;
        LOBYTE(v173) = -61;
        v118 = 4LL;
        LODWORD(v119) = 4;
        v120 = v116 + ((v114 >> 9) & 0x7FFFFFFFF8LL);
        v121 = v172;
        do
        {
          *v121++ = v120;
          v120 = v116 + ((v120 >> 9) & 0x7FFFFFFFF8LL);
          --v118;
        }
        while ( v118 );
        do
          v119 = (unsigned int)(v119 - 1);
        while ( (_DWORD)v119 && (*(_DWORD *)v172[v119] & 0x80) == 0 );
        v122 = (__int64 *)v172[v119];
        v123 = *v122 | 0x62;
        *v122 = v123;
        v124 = __readcr4();
        if ( (v124 & 0x20080) != 0 )
        {
          __writecr4(v124 ^ 0x80);
          __writecr4(v124);
        }
        else
        {
          v125 = __readcr3();
          __writecr3(v125);
        }
        v84 = (v114 & 0xFFF) != 4096;
        if ( (v114 & 0xFFF) != 0x1000 )
        {
          v126 = v114 - (_QWORD)&v173;
          do
          {
            *((_BYTE *)v117 + v126) = *(_BYTE *)v117;
            v117 = (__int64 *)((char *)v117 + 1);
            v84 = (unsigned int)(v84 - 1);
          }
          while ( (_DWORD)v84 );
        }
        *v122 = v123;
        v127 = __readcr4();
        if ( (v127 & 0x20080) != 0 )
        {
          __writecr4(v127 ^ 0x80);
          __writecr4(v127);
        }
        else
        {
          v128 = __readcr3();
          __writecr3(v128);
        }
      }
      else
      {
        v115 = v158;
        *(_BYTE *)v114 = -61;
        __writecr0(v115);
      }
      v77 = v159;
      LODWORD(v78) = v160;
      LODWORD(v80) = v153;
    }
    if ( *(_DWORD *)(v2 + 2376) && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v142 = *(_DWORD *)(v2 + 2376);
    if ( v142 )
    {
      v143 = v142 - 1;
      if ( v143 )
      {
        v144 = v143 - 1;
        if ( v144 )
        {
          v145 = v144 - 1;
          if ( v145 )
          {
            v146 = v145 - 1;
            if ( v146 )
            {
              if ( v146 == 1 )
              {
                v84 = (*(_DWORD *)(v2 + 2520) >> 9) & 0x1F;
                _interlockedbittestandset(
                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624)),
                  v84);
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2 + 1456) + 832LL), 1uLL);
              }
            }
            else
            {
              v84 = *(_QWORD *)(*(_QWORD *)(v2 + 1720)
                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624))
                              + *(_QWORD *)(v2 + 1688));
              _interlockedbittestandset((volatile signed __int32 *)v84, (*(_DWORD *)(v2 + 2520) >> 9) & 0x1F);
            }
            goto LABEL_211;
          }
          v147 = *(volatile signed __int32 **)(v2 + 1368);
        }
        else
        {
          v147 = *(volatile signed __int32 **)(v2 + 1360);
        }
      }
      else
      {
        v147 = *(volatile signed __int32 **)(v2 + 1344);
      }
      _interlockedbittestandset64(v147, 0LL);
    }
LABEL_211:
    *(_QWORD *)(v85 + *(_QWORD *)(v2 + 1696)) = 0LL;
    *(_QWORD *)(v85 + *(_QWORD *)(v2 + 1712)) = 0LL;
    KeGuardCheckICall(*(_QWORD *)(v2 + 360), v84);
    SdbpCheckDll(265, v80, v79, v78, v77, *(_QWORD *)(v2 + 360), v150 - 8);
    JUMPOUT(0x140BDBDE5LL);
  }
  v129 = v2 + *(unsigned int *)(v2 + 2064);
  if ( (*(_DWORD *)(v2 + 2520) & 0x8000000) != 0 )
  {
    v130 = __rdtsc();
    v131 = __ROR8__(v130, 3);
    v169 = ((v131 ^ v130) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v129 = (__int64)KiMachineCheckControl + 16 * (((unsigned __int8)(v131 ^ v130) ^ (unsigned __int8)v169) & 0xF);
  }
  v132 = *(_QWORD **)(v2 + 2640);
  if ( v132 )
  {
    v133 = __rdtsc();
    v134 = (__ROR8__(v133, 3) ^ v133) * (unsigned __int128)0x7010008004002001uLL;
    v170 = *((_QWORD *)&v134 + 1);
    *((_QWORD *)&v134 + 1) ^= v134;
    v132[2] = *((_QWORD *)&v134 + 1);
    v132[3] = v129 ^ *((_QWORD *)&v134 + 1);
    v132[1] = v2 ^ *((_QWORD *)&v134 + 1);
    _InterlockedOr(v148, 0);
    v129 = *(_QWORD *)(v2 + 752);
  }
  else
  {
    v132 = (_QWORD *)v2;
  }
  *(_QWORD *)(v2 + 1992) = v129;
  *(_QWORD *)(v2 + 2000) = v132;
  *(_QWORD *)(v2 + 1976) = 0LL;
  _disable();
  _enable();
  LOBYTE(v135) = (*(__int64 (__fastcall **)(__int64))(v2 + 632))(v2 + 2080);
  (*(void (__fastcall **)(__int64, __int64))(v2 + 640))(v2 + 2080, v135);
  switch ( *(_DWORD *)(v2 + 2136) )
  {
    case 3:
      _disable();
      *(_QWORD *)(v2 + 2528) = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1624));
      _enable();
      break;
    case 4:
      v140 = *(_QWORD *)(v2 + 2600);
      if ( (*(_DWORD *)(v2 + 2524) & 1) == 0 )
        *(_QWORD *)(*(_QWORD *)(v140 + 56) ^ *(_QWORD *)(v140 + 64)) = v140 ^ *(_QWORD *)(v140 + 72) ^ *(_QWORD *)(v140 + 64);
      *(_QWORD *)(v140 + 72) = 0LL;
      *(_QWORD *)(v140 + 56) = 0LL;
      break;
    case 5:
      v136 = (char *)(v2 + 2536);
      v137 = (_QWORD *)(*(_QWORD *)(v2 + 2528) + 8LL);
      v138 = 8LL;
      do
      {
        v21 -= 8;
        *v137 = *(_QWORD *)v136;
        v136 += 8;
        ++v137;
        --v138;
      }
      while ( v138 );
      for ( ; v21; --v21 )
      {
        v139 = *v136++;
        *(_BYTE *)v137 = v139;
        v137 = (_QWORD *)((char *)v137 + 1);
      }
      break;
  }
  _InterlockedOr(v148, 0);
  return v2;
}
