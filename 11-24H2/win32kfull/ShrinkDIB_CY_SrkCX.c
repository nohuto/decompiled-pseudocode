/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1400EE710
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400ED40C (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400ED4BC (AlphaBlendBGRF.c)
 *     SrkYDIB_SrkCX @ 0x1400EF320 (SrkYDIB_SrkCX.c)
 *     GetFixupScan @ 0x1400EFB60 (GetFixupScan.c)
 *     FixupGrayScan @ 0x1400EFC9C (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F0050 (FixupColorScan.c)
 *     MappingBGR @ 0x1402FA18C (MappingBGR.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  int *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // r8
  _DWORD *v18; // rsi
  int v19; // edi
  unsigned __int64 v20; // r13
  char *v21; // rbx
  int v22; // r10d
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // r15
  int v26; // r12d
  _WORD *v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  char *v31; // rdi
  __int16 *v32; // r15
  int v33; // ecx
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // rdx
  __int64 v39; // rax
  char *v40; // rcx
  int v41; // eax
  int v42; // eax
  _BYTE *v43; // rdx
  char *v44; // r8
  char *v45; // rcx
  signed __int64 v46; // r9
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int16 v50; // ax
  unsigned int v52; // ecx
  int v53; // r14d
  int *v54; // rdx
  int v55; // r8d
  int v56; // r9d
  int v57; // eax
  char *v58; // rdx
  int v59; // eax
  _BYTE *v60; // r10
  int v61; // eax
  unsigned __int64 v62; // rdx
  unsigned __int16 v63; // r9
  __int64 v64; // r11
  unsigned int v65; // r8d
  int v66; // ecx
  int v67; // eax
  unsigned __int16 v68; // r9
  __int64 v69; // r8
  __int16 v70; // ax
  __int64 v71; // rcx
  unsigned __int16 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r13
  unsigned int v75; // r14d
  unsigned __int64 v76; // rdi
  __int16 *v77; // r15
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  _DWORD *v81; // rdx
  __int64 v82; // rax
  unsigned int v83; // ecx
  int v84; // r14d
  int *v85; // rdx
  int v86; // r8d
  int v87; // r9d
  int v88; // eax
  __int64 v89; // r8
  char *v90; // r10
  signed __int64 v91; // rbx
  _DWORD *v92; // rdx
  __int64 v93; // rax
  __int16 *v94; // r14
  __int64 FixupScan; // rax
  int *v96; // rax
  int v97; // ecx
  __int64 v98; // r8
  char *v99; // rdx
  __int64 v100; // rax
  unsigned __int8 *v101; // rcx
  unsigned __int8 *v102; // rax
  unsigned __int8 *v103; // rax
  int v104; // [rsp+54h] [rbp-ACh]
  unsigned int v105; // [rsp+58h] [rbp-A8h]
  char *v106; // [rsp+60h] [rbp-A0h]
  char *Src; // [rsp+68h] [rbp-98h]
  unsigned int v108; // [rsp+70h] [rbp-90h]
  __int64 v109; // [rsp+78h] [rbp-88h]
  _WORD *v110; // [rsp+80h] [rbp-80h]
  _WORD *v111; // [rsp+80h] [rbp-80h]
  char *v112; // [rsp+90h] [rbp-70h]
  int v113; // [rsp+A0h] [rbp-60h] BYREF
  char v114[16]; // [rsp+A8h] [rbp-58h] BYREF
  void (__fastcall *v115)(char *, __int16 *, _QWORD, __int64); // [rsp+B8h] [rbp-48h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  unsigned int v117; // [rsp+C8h] [rbp-38h]
  __int64 v118; // [rsp+D0h] [rbp-30h]
  unsigned int v119; // [rsp+D8h] [rbp-28h]
  unsigned int v120; // [rsp+DCh] [rbp-24h]
  int v121; // [rsp+E4h] [rbp-1Ch]
  __int64 v122; // [rsp+128h] [rbp+28h]
  int v123; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v124)(int *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v125)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v126; // [rsp+1B8h] [rbp+B8h]
  __int64 v127; // [rsp+1D0h] [rbp+D0h]
  __int64 v128; // [rsp+1D8h] [rbp+D8h]
  __int64 v129; // [rsp+1E0h] [rbp+E0h]
  __int64 v130; // [rsp+220h] [rbp+120h]
  __int64 v131; // [rsp+228h] [rbp+128h]
  __int64 v132; // [rsp+238h] [rbp+138h]
  __int64 v133; // [rsp+240h] [rbp+140h]
  __int64 v134; // [rsp+248h] [rbp+148h]
  int v135; // [rsp+250h] [rbp+150h]
  int v136; // [rsp+254h] [rbp+154h]
  int v137; // [rsp+258h] [rbp+158h]
  unsigned __int8 *v138; // [rsp+260h] [rbp+160h]
  unsigned __int8 *v139; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v140; // [rsp+270h] [rbp+170h]
  int v141; // [rsp+278h] [rbp+178h]
  __int16 *v142; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 *v143; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v144; // [rsp+2C8h] [rbp+1C8h]
  __int64 v145; // [rsp+2D0h] [rbp+1D0h]
  __int64 v146; // [rsp+2D8h] [rbp+1D8h]
  _BYTE *v147; // [rsp+2E0h] [rbp+1E0h]
  _BYTE *v148; // [rsp+2E8h] [rbp+1E8h]
  int v149; // [rsp+2F0h] [rbp+1F0h]

  memset_0(&v113, 0, 0x258uLL);
  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v2 = &v113;
  v3 = 4LL;
  do
  {
    v2 += 32;
    v4 = *a1;
    v5 = a1[1];
    a1 += 8;
    *((_OWORD *)v2 - 8) = v4;
    v6 = *(a1 - 6);
    *((_OWORD *)v2 - 7) = v5;
    v7 = *(a1 - 5);
    *((_OWORD *)v2 - 6) = v6;
    v8 = *(a1 - 4);
    *((_OWORD *)v2 - 5) = v7;
    v9 = *(a1 - 3);
    *((_OWORD *)v2 - 4) = v8;
    v10 = *(a1 - 2);
    *((_OWORD *)v2 - 3) = v9;
    v11 = *(a1 - 1);
    *((_OWORD *)v2 - 2) = v10;
    *((_OWORD *)v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 10);
  v13 = a1[1];
  *(_OWORD *)v2 = *a1;
  v14 = a1[2];
  *((_OWORD *)v2 + 1) = v13;
  v15 = a1[3];
  *((_OWORD *)v2 + 2) = v14;
  v16 = a1[4];
  *((_OWORD *)v2 + 3) = v15;
  *((_OWORD *)v2 + 4) = v16;
  *((_QWORD *)v2 + 10) = v12;
  v17 = v128;
  v18 = *(_DWORD **)(v128 + 32);
  v19 = *(unsigned __int16 *)(v128 + 14);
  v109 = *(_QWORD *)(v128 + 24);
  v20 = (unsigned __int64)(v18 + 256);
  v21 = (char *)(v18 + 515);
  v104 = 12 * *(_DWORD *)(v127 + 20);
  v22 = v104;
  v23 = v104 + 24;
  v24 = (char *)v18 + v23 + 2048;
  v25 = &v24[v23 + 12];
  Src = v24 + 12;
  v106 = v25;
  v108 = *(unsigned __int16 *)(v127 + 12) - 1;
  if ( *(_WORD *)(v128 + 14) )
  {
    v94 = v142;
    FixupScan = GetFixupScan(&v113, v142);
    SrkYDIB_SrkCX(v127, FixupScan, v94);
    v96 = v18;
    v97 = -v19;
    do
    {
      v97 += v19;
      *v96++ = v97;
    }
    while ( (unsigned __int64)v96 < v20 );
    v22 = v104;
    v98 = (__int64)v94 + 1;
    v99 = v25;
    do
    {
      v100 = *(unsigned __int8 *)(v98 + 1);
      v98 += 3LL;
      *(_DWORD *)v99 = v18[v100];
      *((_DWORD *)v99 + 1) = v18[*(unsigned __int8 *)(v98 - 3)];
      *((_DWORD *)v99 + 2) = v18[*(unsigned __int8 *)(v98 - 4)];
      v99 += 12;
    }
    while ( v99 < &v25[v104] );
    v17 = v128;
    if ( !*(_WORD *)(v128 + 10) )
      v113 |= 0x20u;
  }
  v26 = *(unsigned __int16 *)(v17 + 12);
  v27 = *(_WORD **)(v17 + 40);
  v105 = 0;
  if ( *(_WORD *)(v17 + 12) )
  {
    v74 = v22;
    do
    {
      v75 = (unsigned __int16)*v27;
      v111 = v27 + 1;
      v76 = (unsigned __int64)&v25[v74];
      v77 = v142;
      v78 = GetFixupScan(&v113, v142);
      SrkYDIB_SrkCX(v127, v78, v77);
      if ( (v75 & 0x4000) != 0 )
      {
        v83 = v75;
        v84 = v75 & 0x3FFF;
        v85 = v18;
        v86 = -v84;
        v87 = (v83 >> 15) + *(_DWORD *)(v109 + 4) - v84;
        v88 = -v87;
        do
        {
          v86 += v84;
          v88 += v87;
          *v85 = v86;
          v85[256] = v88;
          ++v85;
        }
        while ( v85 < v18 + 256 );
        v89 = (__int64)v77 + 1;
        v90 = v21;
        v91 = v21 - v106;
        v92 = v106 + 4;
        do
        {
          v93 = *(unsigned __int8 *)(v89 + 1);
          v92 += 3;
          v89 += 3LL;
          *(v92 - 4) += v18[v93];
          *(v92 - 3) += v18[*(unsigned __int8 *)(v89 - 3)];
          *(v92 - 2) += v18[*(unsigned __int8 *)(v89 - 4)];
          *(_DWORD *)((char *)v92 + v91 - 16) = v18[*(unsigned __int8 *)(v89 - 2) + 256];
          *(_DWORD *)((char *)v92 + v91 - 12) = v18[*(unsigned __int8 *)(v89 - 3) + 256];
          *(_DWORD *)((char *)v92 + v91 - 8) = v18[*(unsigned __int8 *)(v89 - 4) + 256];
        }
        while ( (unsigned __int64)(v92 - 1) < v76 );
        v21 = Src;
        v25 = v90;
        Src = v106;
        --v26;
        v106 = v90;
      }
      else
      {
        v79 = (__int64)v77 + 1;
        v80 = v109 + ((v75 >> 5) & 0x400);
        v81 = v106 + 8;
        do
        {
          v82 = *(unsigned __int8 *)(v79 + 1);
          v81 += 3;
          v79 += 3LL;
          *(v81 - 5) += *(_DWORD *)(v80 + 4 * v82);
          *(v81 - 4) += *(_DWORD *)(v80 + 4LL * *(unsigned __int8 *)(v79 - 3));
          *(v81 - 3) += *(_DWORD *)(v80 + 4LL * *(unsigned __int8 *)(v79 - 4));
        }
        while ( (unsigned __int64)(v81 - 2) < v76 );
        v25 = v106;
      }
      v27 = v111;
    }
    while ( v26 );
    v17 = v128;
    v20 = (unsigned __int64)(v18 + 256);
  }
  if ( *(_WORD *)(v17 + 12) == 1 )
    memmove(v21, Src, v104);
  v28 = (unsigned __int16)*v27;
  if ( *v27 )
  {
    v29 = v104;
    do
    {
      v30 = (unsigned __int64)&v25[v29];
      v110 = v27 + 1;
      v31 = v25;
      v32 = v142;
      if ( (v113 & 0x40) != 0 )
      {
        if ( (v114[0] & 4) != 0 )
          FixupGrayScan(&v113, v142);
        else
          FixupColorScan(&v113, v142);
      }
      else
      {
        v33 = v120;
        if ( (v113 & 0x20) != 0 )
        {
          v33 = v120 + 1;
          v120 = v33;
          if ( v33 > (int)v117 )
          {
            v33 = v117;
            v120 = v117;
          }
          v34 = v116 + (int)(v121 * (v117 - v33));
          v35 = v114[0] | 2;
          v118 = v34;
          v113 &= ~0x20u;
          v114[0] |= 2u;
        }
        else
        {
          v34 = v118;
          v35 = v114[0];
        }
        if ( v142 )
        {
          v115(v114, v142, v117, v116);
        }
        else if ( (v35 & 2) != 0 )
        {
          if ( !v33 || (v120 = v33 - 1, v33 == 1) )
          {
            if ( (v35 & 1) != 0 )
            {
              v118 = v116;
              v120 = v117;
            }
            else
            {
              v114[0] = v35 & 0xFD;
            }
          }
          else
          {
            v118 = v121 + v34;
          }
        }
      }
      if ( (v113 & 8) != 0 && v32 )
      {
        MappingBGR(v32, v119, v131, v138);
        v101 = &v138[v141];
        if ( v101 == v139 )
          v101 = v140;
        v138 = v101;
      }
      SrkYDIB_SrkCX(v127, v32, v32);
      if ( (v28 & 0x4000) != 0 )
      {
        v52 = v28;
        v53 = v28 & 0x3FFF;
        v54 = v18;
        v55 = -v53;
        v56 = (v52 >> 15) + *(_DWORD *)(v109 + 4) - v53;
        v57 = -v56;
        do
        {
          v55 += v53;
          v57 += v56;
          *v54 = v55;
          v54[256] = v57;
          ++v54;
        }
        while ( (unsigned __int64)v54 < v20 );
        v58 = Src;
        v112 = v21;
        v59 = *(_DWORD *)&Src[v104 - 4];
        *(_QWORD *)&Src[v104] = *(_QWORD *)&Src[v104 - 12];
        *(_DWORD *)&Src[v104 + 8] = v59;
        v60 = v147;
        if ( v108 )
        {
          v72 = *v32;
          v73 = *((unsigned __int8 *)v32 + 2);
          v32 = (__int16 *)((char *)v32 + 3);
          *(_DWORD *)v106 += v18[v73];
          v31 = v106 + 12;
          *((_DWORD *)v106 + 1) += v18[HIBYTE(v72)];
          *((_DWORD *)v106 + 2) += v18[(unsigned __int8)v72];
          *(_DWORD *)v21 = v18[v73 + 256];
          v58 = Src + 12;
          *((_DWORD *)v21 + 1) = v18[HIBYTE(v72) + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v72 + 256];
          v21 += 12;
        }
        else
        {
          v61 = *((_DWORD *)Src + 2);
          *(_QWORD *)(Src - 12) = *(_QWORD *)Src;
          *((_DWORD *)Src - 1) = v61;
        }
        v62 = (unsigned __int64)(v58 + 20);
        do
        {
          v63 = *v32;
          v64 = *((unsigned __int8 *)v32 + 2);
          v32 = (__int16 *)((char *)v32 + 3);
          *(_DWORD *)v31 += v18[v64];
          *((_DWORD *)v31 + 1) += v18[HIBYTE(v63)];
          *((_DWORD *)v31 + 2) += v18[(unsigned __int8)v63];
          v65 = (12 * *(_DWORD *)(v62 - 12)
               - *(_DWORD *)(v62 - 24)
               - *(_DWORD *)v62
               - *((_DWORD *)v31 + 2)
               - *((_DWORD *)v21 + 2)) >> 16;
          if ( (v65 & 0xFF00) != 0 )
            v65 = ~HIBYTE(v65);
          *v60 = v65;
          v66 = (12 * *(_DWORD *)(v62 - 16)
               - *(_DWORD *)(v62 - 28)
               - *(_DWORD *)(v62 - 4)
               - *((_DWORD *)v31 + 1)
               - *((_DWORD *)v21 + 1)) >> 16;
          if ( (v66 & 0xFF00) != 0 )
            LOBYTE(v66) = ~HIBYTE(v66);
          v60[1] = v66;
          v67 = (12 * *(_DWORD *)(v62 - 20)
               - *(_DWORD *)(v62 - 32)
               - *(_DWORD *)(v62 - 8)
               - *(_DWORD *)v31
               - *(_DWORD *)v21) >> 16;
          if ( (v67 & 0xFF00) != 0 )
            LOBYTE(v67) = ~HIBYTE(v67);
          v60[2] = v67;
          v31 += 12;
          v62 += 12LL;
          *(_DWORD *)v21 = v18[v64 + 256];
          *((_DWORD *)v21 + 1) = v18[HIBYTE(v63) + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v63 + 256];
          v21 += 12;
          v60 += v149;
        }
        while ( v60 != v148 );
        if ( (unsigned __int64)v31 < v30 )
        {
          v69 = *((unsigned __int8 *)v32 + 2);
          v68 = *v32;
          v62 = (unsigned __int8)HIBYTE(*v32);
          *(_DWORD *)v31 += v18[v69];
          *((_DWORD *)v31 + 1) += v18[v62];
          *((_DWORD *)v31 + 2) += v18[(unsigned __int8)v68];
          *(_DWORD *)v21 = v18[v69 + 256];
          *((_DWORD *)v21 + 1) = v18[v62 + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v68 + 256];
        }
        v25 = v112;
        v70 = v113;
        v21 = Src;
        Src = v106;
        v106 = v112;
        if ( (v113 & 0x80u) != 0 )
        {
          v124(&v113, v62);
          v70 = v113;
        }
        if ( (v70 & 0x800) != 0 )
        {
          AlphaBlendBGRF(&v113);
          LOBYTE(v70) = v113;
        }
        if ( (v70 & 0x10) != 0 )
        {
          MappingBGRF(v143, v144, v131, v138);
          v102 = &v138[v141];
          if ( v102 == v139 )
            v102 = v140;
          v138 = v102;
        }
        v125(&v113, v145, v146, v122, v130, v132, v132 + v136, v137, v126);
        v71 = v135 + v132;
        if ( v71 == v133 )
          v71 = v134;
        v122 += v123;
        ++v105;
        v132 = v71;
      }
      else
      {
        v36 = (__int64)v32 + 1;
        v37 = v109 + ((v28 >> 5) & 0x400);
        v38 = v106 + 8;
        do
        {
          v39 = *(unsigned __int8 *)(v36 + 1);
          v38 += 3;
          v36 += 3LL;
          *(v38 - 5) += *(_DWORD *)(v37 + 4 * v39);
          *(v38 - 4) += *(_DWORD *)(v37 + 4LL * *(unsigned __int8 *)(v36 - 3));
          *(v38 - 3) += *(_DWORD *)(v37 + 4LL * *(unsigned __int8 *)(v36 - 4));
        }
        while ( (unsigned __int64)(v38 - 2) < v30 );
        v25 = v106;
      }
      v27 = v110;
      v29 = v104;
      v28 = (unsigned __int16)*v110;
    }
    while ( *v110 );
  }
  if ( v122 == v129 )
    return v105;
  v40 = &Src[v104];
  v41 = *((_DWORD *)v40 - 1);
  *(_QWORD *)v40 = *(_QWORD *)(v40 - 12);
  *((_DWORD *)v40 + 2) = v41;
  v42 = *((_DWORD *)Src + 2);
  v43 = v147;
  *(_QWORD *)(Src - 12) = *(_QWORD *)Src;
  *((_DWORD *)Src - 1) = v42;
  v44 = &Src[12 * v108];
  v45 = &v21[12 * v108 + 4];
  v46 = Src - v21;
  do
  {
    v47 = (11 * *(_DWORD *)&v45[v46 + 4] - *(_DWORD *)&v45[v46 - 8] - *(_DWORD *)&v45[v46 + 16] - *((_DWORD *)v45 + 1)) >> 16;
    if ( (v47 & 0xFF00) != 0 )
      LOBYTE(v47) = ~HIBYTE(v47);
    *v43 = v47;
    v48 = (11 * *(_DWORD *)&v45[v46] - *(_DWORD *)&v45[v46 - 12] - *(_DWORD *)&v45[v46 + 12] - *(_DWORD *)v45) >> 16;
    if ( (v48 & 0xFF00) != 0 )
      LOBYTE(v48) = ~HIBYTE(v48);
    v43[1] = v48;
    v49 = (11 * *(_DWORD *)v44 - *(_DWORD *)&v45[v46 + 8] - *(_DWORD *)&v45[v46 - 16] - *((_DWORD *)v45 - 1)) >> 16;
    if ( (v49 & 0xFF00) != 0 )
      LOBYTE(v49) = ~HIBYTE(v49);
    v43[2] = v49;
    v44 += 12;
    v45 += 12;
    v43 += v149;
  }
  while ( v43 != v148 );
  v50 = v113;
  if ( (v113 & 0x80u) != 0 )
  {
    ((void (__fastcall *)(int *, _BYTE *, char *))v124)(&v113, v43, v44);
    v50 = v113;
  }
  if ( (v50 & 0x800) != 0 )
  {
    AlphaBlendBGRF(&v113);
    LOBYTE(v50) = v113;
  }
  if ( (v50 & 0x10) != 0 )
  {
    MappingBGRF(v143, v144, v131, v138);
    v103 = &v138[v141];
    if ( v103 == v139 )
      v103 = v140;
    v138 = v103;
  }
  v125(&v113, v145, v146, v122, v130, v132, v132 + v136, v137, v126);
  return v105 + 1;
}
