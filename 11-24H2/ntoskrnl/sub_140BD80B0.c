/*
 * XREFs of sub_140BD80B0 @ 0x140BD80B0
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeInitializeGate @ 0x1404842C4 (KeInitializeGate.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140BD80B0(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        ULONG_PTR a4,
        int a5,
        int *a6,
        unsigned int *a7)
{
  _BYTE *v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rbx
  int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  unsigned __int64 v19; // rdx
  int v20; // edi
  int v21; // ecx
  unsigned int *v22; // r15
  unsigned int *v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // r9
  const char *v26; // rax
  int v27; // r10d
  __int64 v28; // rdi
  unsigned __int64 v29; // r8
  unsigned int i; // r11d
  __int64 v31; // rax
  __int64 v32; // r8
  signed __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // zf
  unsigned __int64 j; // rax
  _QWORD *v39; // r14
  int v40; // r15d
  __int64 v41; // rcx
  __int64 v42; // r13
  int v43; // edi
  unsigned int *v44; // rcx
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  int *v48; // rcx
  __int64 v49; // r15
  ULONG_PTR v50; // rdi
  _QWORD *v51; // rax
  unsigned __int64 v52; // rcx
  unsigned int v53; // esi
  unsigned int *v54; // r14
  __int64 v55; // rcx
  unsigned int *v56; // rcx
  int v57; // eax
  __int64 *v58; // rax
  int v59; // ecx
  int *v60; // r11
  int v61; // ecx
  _DWORD *v62; // rax
  __int16 v63; // cx
  unsigned __int64 v64; // r9
  char *v65; // rdx
  int v66; // r11d
  char *v67; // r9
  __int64 v68; // r8
  char *v69; // r10
  char *v70; // rdi
  char v71; // cl
  char v72; // al
  unsigned int v73; // edx
  char *v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // cl
  char v78; // al
  int v79; // r8d
  __int64 v80; // rdx
  char v81; // cl
  char v82; // al
  int v83; // r8d
  __int64 v84; // rdx
  char v85; // cl
  char v86; // al
  int v87; // eax
  unsigned int v88; // edx
  unsigned int v89; // ecx
  unsigned int v90; // eax
  unsigned int v91; // r8d
  unsigned int v92; // eax
  unsigned __int64 v93; // rdi
  __int64 v94; // r14
  char v95; // al
  unsigned __int8 v96; // r15
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // r12
  int v99; // eax
  unsigned __int64 v100; // rax
  unsigned __int128 v101; // rax
  unsigned __int64 v102; // r8
  char v103; // cl
  int v104; // r9d
  char v105; // cl
  int v106; // r9d
  int v107; // r9d
  unsigned int v108; // r9d
  unsigned __int64 v109; // rax
  __int64 v110; // rcx
  unsigned int v111; // r9d
  __int64 v112; // rax
  _BYTE *v113; // rdi
  _DWORD *v114; // rax
  unsigned int v115; // edi
  __int64 v116; // rax
  int v117; // ecx
  __int64 v118; // rcx
  __int64 v119; // r10
  __int64 v120; // r8
  _QWORD *v121; // rdx
  int v122; // ecx
  __int64 v123; // rax
  unsigned int v124; // r8d
  int v125; // r10d
  const char *v126; // rax
  __int64 v127; // rsi
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // r8
  unsigned int k; // r11d
  __int64 v131; // rax
  __int64 v132; // r8
  unsigned __int64 v133; // rcx
  unsigned int v134; // r14d
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int64 m; // rax
  _DWORD *v138; // r14
  unsigned int *v139; // rsi
  unsigned __int64 v140; // rax
  unsigned __int128 v141; // rax
  unsigned __int64 v142; // r8
  char v143; // cl
  int v144; // r9d
  char v145; // cl
  int v146; // r9d
  int v147; // r9d
  unsigned int v148; // r9d
  unsigned __int64 v149; // rax
  __int64 v150; // rcx
  unsigned int v151; // r9d
  __int64 v152; // rax
  _BYTE *v153; // rdi
  __int64 v154; // r8
  int v155; // edx
  unsigned __int64 v156; // rax
  unsigned __int128 v157; // rax
  unsigned __int64 v158; // r8
  char v159; // cl
  int v160; // r10d
  char v161; // cl
  int v162; // r10d
  int v163; // r10d
  unsigned int v164; // r10d
  unsigned __int64 v165; // rax
  __int64 v166; // rcx
  unsigned int v167; // r10d
  __int64 v168; // rax
  _BYTE *v169; // rbx
  int v170; // ecx
  __int64 v171; // rcx
  __int64 v172; // r10
  __int64 v173; // r8
  _QWORD *v174; // rdx
  unsigned __int64 v175; // r9
  __int64 v176; // rax
  int v177; // ecx
  unsigned __int64 v178; // rax
  unsigned __int128 v179; // rax
  unsigned __int64 v180; // r8
  char v181; // cl
  int v182; // r9d
  char v183; // cl
  int v184; // r9d
  int v185; // r9d
  unsigned int v186; // r9d
  unsigned __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rax
  _BYTE *v190; // rbx
  int v191; // eax
  unsigned int v192; // [rsp+38h] [rbp-D0h]
  unsigned int v193; // [rsp+3Ch] [rbp-CCh]
  unsigned int v194; // [rsp+40h] [rbp-C8h]
  unsigned int v195; // [rsp+44h] [rbp-C4h]
  _DWORD *v196; // [rsp+48h] [rbp-C0h]
  __int64 v197; // [rsp+50h] [rbp-B8h]
  __int64 v198; // [rsp+58h] [rbp-B0h]
  unsigned int *v199; // [rsp+60h] [rbp-A8h]
  _DWORD *v200; // [rsp+68h] [rbp-A0h]
  int *v201; // [rsp+70h] [rbp-98h]
  unsigned __int64 v202; // [rsp+78h] [rbp-90h]
  unsigned __int64 v203; // [rsp+78h] [rbp-90h]
  __int64 v204; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v205[24]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v206; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v207[88]; // [rsp+B0h] [rbp-58h] BYREF
  int v208; // [rsp+108h] [rbp+0h]
  int v209; // [rsp+10Ch] [rbp+4h]
  int v210; // [rsp+110h] [rbp+8h]
  int v211; // [rsp+114h] [rbp+Ch]
  int v212; // [rsp+118h] [rbp+10h]
  int v213; // [rsp+11Ch] [rbp+14h]
  int v214; // [rsp+120h] [rbp+18h]
  int v215; // [rsp+124h] [rbp+1Ch]
  int v216; // [rsp+128h] [rbp+20h]
  int v217; // [rsp+12Ch] [rbp+24h]
  int v218; // [rsp+130h] [rbp+28h]
  int v219; // [rsp+134h] [rbp+2Ch]
  int v220; // [rsp+138h] [rbp+30h]
  unsigned int v221; // [rsp+13Ch] [rbp+34h]
  int v222; // [rsp+140h] [rbp+38h]
  int v223; // [rsp+144h] [rbp+3Ch]
  int v224; // [rsp+148h] [rbp+40h]
  int v225; // [rsp+14Ch] [rbp+44h]
  int v226; // [rsp+150h] [rbp+48h]
  int v227; // [rsp+154h] [rbp+4Ch]
  int v228; // [rsp+158h] [rbp+50h]
  int v229; // [rsp+15Ch] [rbp+54h]
  int v230; // [rsp+160h] [rbp+58h]
  int v231; // [rsp+164h] [rbp+5Ch]
  int v232; // [rsp+168h] [rbp+60h]
  int v233; // [rsp+16Ch] [rbp+64h]
  int v234; // [rsp+170h] [rbp+68h]
  int v235; // [rsp+174h] [rbp+6Ch]
  int v236; // [rsp+178h] [rbp+70h]
  int v237; // [rsp+17Ch] [rbp+74h]
  int v238; // [rsp+180h] [rbp+78h]
  int v239; // [rsp+184h] [rbp+7Ch]
  int v240; // [rsp+188h] [rbp+80h]
  int v241; // [rsp+18Ch] [rbp+84h]
  int v242; // [rsp+190h] [rbp+88h]
  int v243; // [rsp+194h] [rbp+8Ch]
  int v244; // [rsp+198h] [rbp+90h]
  int v245; // [rsp+19Ch] [rbp+94h]
  int v246; // [rsp+1A0h] [rbp+98h]
  int v247; // [rsp+1A4h] [rbp+9Ch]
  int v248; // [rsp+1A8h] [rbp+A0h]
  int v249; // [rsp+1ACh] [rbp+A4h]
  __int64 v250; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v251; // [rsp+1B8h] [rbp+B0h]
  __int64 v252; // [rsp+1C0h] [rbp+B8h]
  __int64 v253; // [rsp+1C8h] [rbp+C0h]
  __int64 v254; // [rsp+1D0h] [rbp+C8h]
  __int64 v255; // [rsp+1D8h] [rbp+D0h]
  __int64 v256; // [rsp+1E0h] [rbp+D8h]
  __int64 v257; // [rsp+1E8h] [rbp+E0h]
  __int64 v258; // [rsp+1F0h] [rbp+E8h]
  __int64 v259; // [rsp+1F8h] [rbp+F0h]
  __int64 v260; // [rsp+200h] [rbp+F8h]
  __int64 v261; // [rsp+208h] [rbp+100h]
  unsigned __int8 CurrentIrql; // [rsp+258h] [rbp+150h]
  unsigned int v264; // [rsp+258h] [rbp+150h]

  v7 = *(_BYTE **)a1;
  v8 = a3;
  v197 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 520LL))(a4);
  if ( !v197 )
    return 3221225595LL;
  v9 = *((unsigned int *)v7 + 513);
  v199 = 0LL;
  v192 = 0;
  v200 = 0LL;
  v202 = v8 / 0xC;
  v10 = 4 * (v8 / 0xC);
  v11 = (a5 & 0x10) != 0 ? 43 : 1;
  v12 = v10 + v9 + 48;
  if ( v12 <= *((_DWORD *)v7 + 665) )
  {
    v13 = (__int64)v7;
    *((_DWORD *)v7 + 513) = v12;
  }
  else
  {
    v13 = sub_140BD9AF8(v7, v12, *((unsigned int *)v7 + 593));
    if ( !v13 )
      return 3221225626LL;
    v15 = *((_DWORD *)v7 + 630);
    if ( (v15 & 2) == 0 )
    {
      v16 = *((_DWORD *)v7 + 513);
      v17 = *((_QWORD *)v7 + 253);
      v18 = (v15 & 0x10000000) != 0 ? *((_DWORD *)v7 + 593) : 0;
      if ( v16 >= 8 )
      {
        v19 = (unsigned __int64)v16 >> 3;
        do
        {
          *(_QWORD *)v7 = 0LL;
          v16 -= 8;
          v7 += 8;
          --v19;
        }
        while ( v19 );
      }
      for ( ; v16; --v16 )
        *v7++ = 0;
      v20 = *(_DWORD *)(v13 + 2372);
      *(_DWORD *)(v13 + 2372) = v18;
      if ( v18 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v13 + 872))(v17);
      }
      else if ( (*(_DWORD *)(v13 + 2520) & 0x8000000) != 0 || !v18 )
      {
        (*(void (__fastcall **)(__int64))(v13 + 264))(v17);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v13 + 568))(v17 - 8, *(_QWORD *)(v17 - 8));
      }
      *(_DWORD *)(v13 + 2372) = v20;
    }
    *(_DWORD *)(v13 + 2520) &= ~2u;
  }
  ++*(_DWORD *)(v13 + 2092);
  v21 = 48;
  v22 = (unsigned int *)(v13 + v9);
  v201 = (int *)v22;
  v23 = v22;
  v24 = 6LL;
  do
  {
    *(_QWORD *)v23 = 0LL;
    v21 -= 8;
    v23 += 2;
    --v24;
  }
  while ( v24 );
  for ( ; v21; --v21 )
  {
    *(_BYTE *)v23 = 0;
    v23 = (unsigned int *)((char *)v23 + 1);
  }
  *v22 = v11;
  v25 = a2;
  *((_QWORD *)v22 + 1) = a2;
  v26 = (const char *)a2;
  v22[4] = v8;
  *(_DWORD *)(v13 + 2120) += v8;
  v27 = *(_DWORD *)(v13 + 2100);
  v28 = *(_QWORD *)(v13 + 2104);
  if ( v26 < &v26[v8] )
  {
    do
    {
      _mm_prefetch(v26, 0);
      v26 += 64;
    }
    while ( v26 < (const char *)a2 + v8 );
  }
  v29 = *(_QWORD *)(v13 + 2104);
  for ( i = (unsigned int)v8 >> 7; i; --i )
  {
    v31 = 8LL;
    do
    {
      v32 = *((_QWORD *)v25 + 1) ^ __ROL8__(*(_QWORD *)v25 ^ v29, v27);
      v25 += 4;
      v29 = __ROL8__(v32, v27);
      --v31;
    }
    while ( v31 );
    v33 = __ROL8__(v28 ^ ((char *)v25 - (char *)a2), 17) ^ v28 ^ ((char *)v25 - (char *)a2);
    v252 = ((unsigned __int64)v33 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v27 = ((unsigned __int8)(v252 ^ v33) ^ (unsigned __int8)v27) & 0x3F;
    if ( !v27 )
      LOBYTE(v27) = 1;
  }
  v34 = v8 & 0x7F;
  if ( (unsigned int)v34 >= 8 )
  {
    v35 = (v8 & 0x7F) >> 3;
    do
    {
      v29 = __ROL8__(*(_QWORD *)v25 ^ v29, v27);
      v25 += 2;
      v34 = (unsigned int)(v34 - 8);
      --v35;
    }
    while ( v35 );
  }
  if ( (_DWORD)v34 )
  {
    do
    {
      v36 = *(unsigned __int8 *)v25;
      v25 = (unsigned int *)((char *)v25 + 1);
      v29 = __ROL8__(v36 ^ v29, v27);
      v37 = (_DWORD)v34 == 1;
      v34 = (unsigned int)(v34 - 1);
    }
    while ( !v37 );
  }
  for ( j = v29; ; v29 = (unsigned int)j ^ (unsigned int)v29 )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  LODWORD(v29) = v29 & 0x7FFFFFFF;
  v22[5] = v29;
  *(_DWORD *)(v13 + 2120) += v8;
  v39 = v22 + 6;
  v40 = -1073741275;
  *(_QWORD *)a1 = v13;
  v41 = *(_QWORD *)(v13 + 1336);
  CurrentIrql = KeGetCurrentIrql();
  v42 = 15LL;
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v13 + 352))(v41, v34, v29, v25);
  v43 = 24;
  v44 = **(unsigned int ***)(v13 + 1568);
  v45 = (unsigned __int64)(v44 + 4);
  while ( *(_QWORD *)(v45 + 8) != a4 )
  {
    v45 += 24LL;
    if ( v45 >= (unsigned __int64)&v44[6 * *v44 + 4] )
      goto LABEL_45;
  }
  v40 = 0;
  *(_OWORD *)v39 = *(_OWORD *)v45;
  v39[2] = *(_QWORD *)(v45 + 16);
LABEL_45:
  (*(void (__fastcall **)(_QWORD))(v13 + 416))(*(_QWORD *)(v13 + 1336));
  __writecr8(CurrentIrql);
  if ( v40 >= 0 )
  {
    v48 = v201;
    v50 = a4;
    v49 = v197;
  }
  else
  {
    v46 = v39;
    v47 = 3LL;
    do
    {
      *v46 = 0LL;
      v43 -= 8;
      ++v46;
      --v47;
    }
    while ( v47 );
    for ( ; v43; --v43 )
    {
      *(_BYTE *)v46 = 0;
      v46 = (_QWORD *)((char *)v46 + 1);
    }
    v48 = v201;
    v49 = v197;
    v50 = a4;
    *((_QWORD *)v201 + 4) = a4;
    v201[10] = *(_DWORD *)(v197 + 80);
    *v39 = 1LL;
  }
  v51 = v48 + 12;
  v196 = v48 + 12;
  if ( v10 >= 8 )
  {
    v52 = (unsigned __int64)v10 >> 3;
    do
    {
      *v51 = -1LL;
      v10 -= 8;
      ++v51;
      --v52;
    }
    while ( v52 );
  }
  for ( ; v10; --v10 )
  {
    *(_BYTE *)v51 = -1;
    v51 = (_QWORD *)((char *)v51 + 1);
  }
  v53 = 0;
  v54 = a2;
  v195 = -1;
  v193 = 0;
  v55 = 3LL * (unsigned int)v202;
  v203 = 0LL;
  v56 = &a2[v55];
  v37 = (*(_DWORD *)(v13 + 2524) & 0x40) == 0;
  v251 = v56;
  v57 = -9;
  if ( !v37 )
    v57 = a5;
  v210 = v57;
  if ( a2 == v56 )
  {
    *a6 = 0;
    *a7 = 0;
    return 0LL;
  }
  if ( (*(_DWORD *)(v13 + 2520) & 0x100000) != 0 )
  {
    v264 = 0;
    v58 = &v204;
    v59 = 120;
    do
    {
      *v58 = 0LL;
      v59 -= 8;
      ++v58;
      --v42;
    }
    while ( v42 );
    for ( ; v59; --v59 )
    {
      *(_BYTE *)v58 = 0;
      v58 = (__int64 *)((char *)v58 + 1);
    }
  }
  else
  {
    v264 = 1024;
    v204 = v13;
    v206 = 0LL;
    KeInitializeGate((__int64)v205, 0);
  }
  v60 = (int *)(*(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))(v13 + 544))(v49, v50, *a2);
  v198 = (__int64)v60;
  v250 = v11;
  if ( !v60 )
    goto LABEL_298;
  while ( 2 )
  {
    if ( (v60[9] & 0x2000000) != 0 )
      goto LABEL_76;
    v61 = *v60;
    v62 = v60 + 1;
    if ( *v60 == 1414090313 && *v62 == 1195525195 )
      goto LABEL_76;
    if ( v61 == 1162297680 )
    {
      v63 = *(_WORD *)v62;
      if ( *(_WORD *)v62 == 30839 || v63 == 29303 || v63 == 30583 )
      {
LABEL_76:
        v64 = 1LL;
        goto LABEL_99;
      }
    }
    else if ( v61 == 1095914053 && *(_WORD *)v62 == 16724 )
    {
      goto LABEL_76;
    }
    v65 = *(char **)(v13 + 2384);
    v66 = 7;
    v67 = *(char **)(v13 + 2392);
    v68 = v198 - (_QWORD)v65;
    v69 = *(char **)(v13 + 2400);
    v70 = *(char **)(v13 + 2408);
    while ( 1 )
    {
      v71 = v65[v68];
      v72 = *v65++;
      if ( v71 != v72 )
        break;
      if ( !--v66 )
      {
        v60 = (int *)v198;
LABEL_97:
        v64 = 1LL;
        goto LABEL_99;
      }
    }
    v60 = (int *)v198;
    v73 = 8;
    v74 = (char *)v198;
    while ( 1 )
    {
      v75 = *(_QWORD *)v74;
      v74 += 8;
      v76 = *(_QWORD *)v67;
      v67 += 8;
      if ( v75 != v76 )
        break;
      v73 -= 8;
      if ( v73 < 8 )
      {
        if ( !v73 )
          goto LABEL_97;
        while ( 1 )
        {
          v77 = *v74++;
          v78 = *v67++;
          if ( v77 != v78 )
            goto LABEL_90;
          if ( !--v73 )
            goto LABEL_97;
        }
      }
    }
LABEL_90:
    v79 = 4;
    v80 = v198 - (_QWORD)v69;
    while ( 1 )
    {
      v81 = v69[v80];
      v82 = *v69++;
      if ( v81 != v82 )
        break;
      if ( !--v79 )
        goto LABEL_97;
    }
    v83 = 6;
    v84 = v198 - (_QWORD)v70;
    while ( 1 )
    {
      v85 = v70[v84];
      v86 = *v70++;
      if ( v85 != v86 )
        break;
      if ( !--v83 )
        goto LABEL_97;
    }
    v64 = 0LL;
LABEL_99:
    v87 = v60[9];
    if ( v87 < 0 )
      v64 = 1LL;
    v194 = v64;
    if ( v250 == 43 && (v87 & 0x20000000) == 0 )
    {
      v64 = 1LL;
      v194 = 1;
LABEL_105:
      if ( *v60 == 1414090313 && v60[1] == 1195525195 )
      {
        if ( (*(_DWORD *)(v13 + 2524) & 0x2000) != 0 )
          v64 = 0LL;
        v194 = v64;
      }
      goto LABEL_110;
    }
    if ( (_DWORD)v64 )
      goto LABEL_105;
LABEL_110:
    v88 = v60[4];
    v89 = v60[3];
    if ( v88 <= v60[2] )
      v88 = v60[2];
    v221 = v89 + v88;
    do
    {
      v90 = v54[2];
      if ( (v90 & 1) == 0 )
      {
        v91 = v54[2];
        if ( v90 >= v195 )
          v91 = v195;
        v195 = v91;
        if ( v90 > v193 )
        {
          v193 = v54[2];
          v195 = v91;
        }
      }
      v92 = *v54;
      v93 = a4 + *v54;
      v94 = v54[1] - *v54;
      if ( v250 != 43 )
      {
        if ( (_DWORD)v64 )
          goto LABEL_140;
        goto LABEL_129;
      }
      if ( (_DWORD)v64
        || v89 - v92 < 6
        || v92 - v53 < 6
        || (v95 = *(_BYTE *)(v93 - 1), *(_BYTE *)(v93 - 6) != 76)
        || *(_BYTE *)(v93 - 5) != 0x87
        || *(_BYTE *)(v93 - 4)
        || *(_BYTE *)(v93 - 3) != 0x98
        || *(_BYTE *)(v93 - 2) != 0xC3
        || v95 != -112 && v95 != -15 )
      {
LABEL_140:
        if ( !v192 )
        {
LABEL_175:
          v114 = v196;
          *v196 = 0x80000000;
          goto LABEL_176;
        }
        v100 = __rdtsc();
        v101 = (__ROR8__(v100, 3) ^ v100) * (unsigned __int128)0x7010008004002001uLL;
        v253 = *((_QWORD *)&v101 + 1);
        v102 = ((unsigned __int64)v101 ^ *((_QWORD *)&v101 + 1)) % 0xB;
        if ( (unsigned int)v102 > 5 )
        {
          switch ( (_DWORD)v102 )
          {
            case 6:
              v105 = 24;
              v209 = __ROL4__(1464235086, 24) ^ 6;
              v106 = v209;
              break;
            case 7:
              v103 = 7;
              v208 = __ROR4__(1666411585, 7);
              v104 = v208;
              goto LABEL_151;
            case 8:
              v105 = 8;
              v248 = __ROL4__(1113876033, 8);
              v107 = v248;
              goto LABEL_164;
            case 9:
              v105 = 33;
              v247 = __ROL4__(1480806214, 33) ^ 9;
              v106 = v247;
              break;
            default:
              v109 = __rdtsc();
              v110 = __ROR8__(v109, 3);
              v261 = ((v110 ^ v109) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v111 = (67117057 * (v110 ^ v109)) ^ v261;
              v108 = ((((((v111 % 0x1A + 97) << 8) | ((v111 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v111 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v111 >> 10) % 0x1A + 97)) << 8) | ((v111 >> 15) % 0x1A + 65);
              goto LABEL_165;
          }
        }
        else
        {
          if ( (_DWORD)v102 == 5 )
          {
            v105 = 5;
            v246 = __ROL4__(1766089295, 5);
            v107 = v246;
            goto LABEL_164;
          }
          if ( (_DWORD)v102 )
          {
            if ( (_DWORD)v102 == 1 )
            {
              v103 = 1;
              v245 = __ROR4__(1700422467, 1);
              v104 = v245;
              goto LABEL_151;
            }
            if ( (_DWORD)v102 != 2 )
            {
              if ( (_DWORD)v102 != 3 )
              {
                v103 = ((unsigned __int64)v101 ^ *((_QWORD *)&v101 + 1)) % 0xB;
                v242 = __ROR4__(1886800198, v102);
                v104 = v242;
LABEL_151:
                v108 = __ROL4__(v104, v103);
LABEL_165:
                v112 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v13 + 256))(64LL, 80LL, v108);
                v113 = v207;
                if ( v112 )
                  v113 = (_BYTE *)v112;
                *(_QWORD *)v113 = &v204;
                *((_QWORD *)v113 + 1) = a4;
                *((_QWORD *)v113 + 2) = v199;
                *((_QWORD *)v113 + 3) = v200;
                *((_QWORD *)v113 + 8) = sub_140BE2C70;
                *((_DWORD *)v113 + 8) = v192;
                *((_DWORD *)v113 + 10) = 0;
                *((_QWORD *)v113 + 9) = v113;
                *((_QWORD *)v113 + 6) = 0LL;
                if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
                  KeWaitForGate((__int64)v205, 0LL);
                HIDWORD(v206) = 1;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v113 + 48), CriticalWorkQueue);
                if ( v113 == v207 && HIDWORD(v206) )
                {
                  do
                    KeWaitForGate((__int64)v205, 0LL);
                  while ( (_DWORD)v206 );
                  v206 = 0LL;
                }
                v192 = 0;
                goto LABEL_175;
              }
              v105 = 15;
              v243 = __ROL4__(1920421956, 15) ^ 3;
              v106 = v243;
              goto LABEL_163;
            }
            v105 = 2;
            v244 = __ROL4__(1634559043, 2);
            v107 = v244;
LABEL_164:
            v108 = __ROR4__(v107, v105);
            goto LABEL_165;
          }
          v105 = 6;
          v229 = __ROL4__(1665295171, 6);
          v106 = v229;
        }
LABEL_163:
        v107 = v102 ^ v106;
        goto LABEL_164;
      }
LABEL_129:
      if ( (v210 & 8) == 0 )
        goto LABEL_196;
      v64 = 4095LL;
      if ( (((v93 & 0xFFF) + v94 + 4095) & 0xFFFFFFFFFFFFF000uLL) == 0x1000 && (v93 & 0xFFFFFFFFFFFFF000uLL) == v203 )
        goto LABEL_196;
      if ( !(_DWORD)v94 || (*(_DWORD *)(v13 + 2524) & 0x40) == 0 )
        goto LABEL_181;
      v96 = KeGetCurrentIrql();
      v97 = v93 & 0xFFFFFFFFFFFFF000uLL;
      v98 = (v93 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_135:
      __writecr8(2uLL);
      while ( 1 )
      {
        v99 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v13 + 1128))(v97, 1LL);
        if ( v99 == -1073741267 )
        {
          if ( v96 <= 1u )
          {
            __writecr8(v96);
            KeGetCurrentIrql();
            goto LABEL_135;
          }
          goto LABEL_178;
        }
        if ( v99 < 0 )
          break;
LABEL_178:
        v97 += 4096LL;
        v98 += 4096LL;
        if ( v98 == (((unsigned int)v94 + v93 - 1) | 0xFFF) )
        {
          __writecr8(v96);
          goto LABEL_195;
        }
      }
      __writecr8(v96);
LABEL_181:
      if ( !*(_DWORD *)(v13 + 2328) )
      {
        *(_QWORD *)(v13 + 2336) = v13 - 0x5C5FC0A76E374B18LL;
        if ( v201 )
        {
          *(_QWORD *)(v13 + 2344) = (char *)v201 - 0x4C48B4211BBACBEBLL;
          v116 = *v201;
        }
        else
        {
          *(_QWORD *)(v13 + 2344) = 0LL;
          v116 = 0LL;
        }
        *(_QWORD *)(v13 + 2352) = v116;
        v117 = *(_DWORD *)(v13 + 2520);
        *(_QWORD *)(v13 + 2360) = v93;
        *(_DWORD *)(v13 + 2328) = 1;
        if ( (v117 & 0x20000000) == 0 && (*(_DWORD *)(v13 + 2524) & 0x200000) != 0 && (v117 & 1) != 0 )
        {
          v118 = *(unsigned int *)(v13 + 2676);
          v119 = *(_QWORD *)(v13 + 2104);
          v120 = *(_QWORD *)(v13 + 2680);
          v121 = (_QWORD *)(v118 + v13);
          v64 = v118 + v13 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v13 + 2052) - v118) >> 3);
          while ( v121 != (_QWORD *)v64 )
          {
            *v121 ^= v120;
            v120 = ((v119 ^ *v121++) + __ROR8__(v120, v120 & 0x3F)) ^ 0xEFA;
          }
          *(_DWORD *)(v13 + 2524) &= ~0x200000u;
          if ( v120 != *(_QWORD *)(v13 + 2688) )
          {
            v122 = *(_DWORD *)(v13 + 2052);
            v123 = *(_QWORD *)(v13 + 1416);
            *(_QWORD *)v123 = v13;
            *(_DWORD *)(v123 + 16) = v122;
            if ( !*(_DWORD *)(v13 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v13 + 1416) + 24LL) = v120 ^ *(_QWORD *)(v13 + 2688);
            sub_140BDA384(v13, 0LL, v120, 256LL);
          }
        }
      }
LABEL_195:
      v203 = (v93 + (unsigned int)v94) & 0xFFFFFFFFFFFFF000uLL;
LABEL_196:
      v124 = v264;
      if ( v264 )
      {
        v114 = v196;
        if ( v192 )
        {
          v139 = v199;
          v138 = v200;
        }
        else
        {
          v138 = v196;
          v139 = a2;
          v199 = a2;
          v200 = v196;
        }
        v115 = v192 + 1;
        v192 = v115;
        if ( v115 < v264 )
          goto LABEL_253;
        v140 = __rdtsc();
        v141 = (__ROR8__(v140, 3) ^ v140) * (unsigned __int128)0x7010008004002001uLL;
        v255 = *((_QWORD *)&v141 + 1);
        v142 = ((unsigned __int64)v141 ^ *((_QWORD *)&v141 + 1)) % 0xB;
        if ( (unsigned int)v142 > 5 )
        {
          if ( (_DWORD)v142 == 6 )
          {
            v145 = 24;
            v220 = __ROL4__(1464235086, 24) ^ 6;
            v146 = v220;
            goto LABEL_240;
          }
          if ( (_DWORD)v142 != 7 )
          {
            if ( (_DWORD)v142 == 8 )
            {
              v145 = 8;
              v218 = __ROL4__(1113876033, 8);
              v147 = v218;
              goto LABEL_241;
            }
            if ( (_DWORD)v142 == 9 )
            {
              v145 = 33;
              v217 = __ROL4__(1480806214, 33) ^ 9;
              v146 = v217;
              goto LABEL_240;
            }
            v149 = __rdtsc();
            v150 = __ROR8__(v149, 3);
            v256 = ((v150 ^ v149) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v151 = (67117057 * (v150 ^ v149)) ^ v256;
            v148 = ((((((v151 % 0x1A + 97) << 8) | ((v151 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v151 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v151 >> 10) % 0x1A + 97)) << 8) | ((v151 >> 15) % 0x1A + 65);
LABEL_242:
            v152 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v13 + 256))(64LL, 80LL, v148);
            v153 = v207;
            if ( v152 )
              v153 = (_BYTE *)v152;
            *(_QWORD *)v153 = &v204;
            *((_QWORD *)v153 + 1) = a4;
            *((_QWORD *)v153 + 3) = v138;
            *((_QWORD *)v153 + 2) = v139;
            *((_QWORD *)v153 + 8) = sub_140BE2C70;
            *((_DWORD *)v153 + 8) = v192;
            *((_DWORD *)v153 + 10) = 0;
            *((_QWORD *)v153 + 9) = v153;
            *((_QWORD *)v153 + 6) = 0LL;
            if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
              KeWaitForGate((__int64)v205, 0LL);
            HIDWORD(v206) = 1;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v153 + 48), CriticalWorkQueue);
            if ( v153 == v207 && HIDWORD(v206) )
            {
              do
                KeWaitForGate((__int64)v205, 0LL);
              while ( (_DWORD)v206 );
              v206 = 0LL;
            }
            v114 = v196;
            v115 = 0;
            v192 = 0;
            goto LABEL_252;
          }
          v143 = 7;
          v219 = __ROR4__(1666411585, 7);
          v144 = v219;
        }
        else
        {
          if ( (_DWORD)v142 == 5 )
          {
            v145 = 5;
            v216 = __ROL4__(1766089295, 5);
            v147 = v216;
            goto LABEL_241;
          }
          if ( !(_DWORD)v142 )
          {
            v145 = 6;
            v215 = __ROL4__(1665295171, 6);
            v146 = v215;
            goto LABEL_240;
          }
          if ( (_DWORD)v142 != 1 )
          {
            if ( (_DWORD)v142 == 2 )
            {
              v145 = 2;
              v213 = __ROL4__(1634559043, 2);
              v147 = v213;
            }
            else
            {
              if ( (_DWORD)v142 != 3 )
              {
                v143 = ((unsigned __int64)v141 ^ *((_QWORD *)&v141 + 1)) % 0xB;
                v211 = __ROR4__(1886800198, v142);
                v144 = v211;
                goto LABEL_228;
              }
              v145 = 15;
              v212 = __ROL4__(1920421956, 15) ^ 3;
              v146 = v212;
LABEL_240:
              v147 = v142 ^ v146;
            }
LABEL_241:
            v148 = __ROR4__(v147, v145);
            goto LABEL_242;
          }
          v143 = 1;
          v214 = __ROR4__(1700422467, 1);
          v144 = v214;
        }
LABEL_228:
        v148 = __ROL4__(v144, v143);
        goto LABEL_242;
      }
      *(_DWORD *)(v13 + 2120) += v94;
      v64 = v93;
      v125 = *(_DWORD *)(v13 + 2100);
      v126 = (const char *)v93;
      v127 = *(_QWORD *)(v13 + 2104);
      v128 = v93 + (unsigned int)v94;
      if ( v93 < v128 )
      {
        do
        {
          _mm_prefetch(v126, 0);
          v126 += 64;
        }
        while ( (unsigned __int64)v126 < v128 );
      }
      v129 = *(_QWORD *)(v13 + 2104);
      for ( k = (unsigned int)v94 >> 7; k; --k )
      {
        v131 = 8LL;
        do
        {
          v132 = *(_QWORD *)(v64 + 8) ^ __ROL8__(*(_QWORD *)v64 ^ v129, v125);
          v64 += 16LL;
          v129 = __ROL8__(v132, v125);
          --v131;
        }
        while ( v131 );
        v133 = __ROL8__(v127 ^ (v64 - v93), 17) ^ v127 ^ (v64 - v93);
        v254 = (v133 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v125 = ((unsigned __int8)(v254 ^ v133) ^ (unsigned __int8)v125) & 0x3F;
        if ( !v125 )
          LOBYTE(v125) = 1;
      }
      v134 = v94 & 0x7F;
      if ( v134 >= 8 )
      {
        v135 = (unsigned __int64)v134 >> 3;
        do
        {
          v129 = __ROL8__(*(_QWORD *)v64 ^ v129, v125);
          v64 += 8LL;
          v134 -= 8;
          --v135;
        }
        while ( v135 );
      }
      for ( ; v134; --v134 )
      {
        v136 = *(unsigned __int8 *)v64++;
        v129 = __ROL8__(v136 ^ v129, v125);
      }
      for ( m = v129; ; LODWORD(v129) = m ^ v129 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      v114 = v196;
      *v196 = v129 & 0x7FFFFFFF;
LABEL_176:
      v115 = v192;
LABEL_252:
      v124 = v264;
LABEL_253:
      v53 = a2[1];
      v54 = a2 + 3;
      a2 = v54;
      if ( v54 == v251 )
      {
        v155 = v195;
        if ( v195 == -1 )
          v155 = -(v193 != 0);
        *a6 = v155;
        *a7 = v193;
        if ( v124 )
        {
          if ( !v115 )
            goto LABEL_295;
          v156 = __rdtsc();
          v157 = (__ROR8__(v156, 3) ^ v156) * (unsigned __int128)0x7010008004002001uLL;
          v257 = *((_QWORD *)&v157 + 1);
          v158 = ((unsigned __int64)v157 ^ *((_QWORD *)&v157 + 1)) % 0xB;
          if ( (unsigned int)v158 <= 5 )
          {
            if ( (_DWORD)v158 == 5 )
            {
              v161 = 5;
              v227 = __ROL4__(1766089295, 5);
              v163 = v227;
              goto LABEL_285;
            }
            if ( !(_DWORD)v158 )
            {
              v161 = 6;
              v226 = __ROL4__(1665295171, 6);
              v162 = v226;
              goto LABEL_284;
            }
            if ( (_DWORD)v158 != 1 )
            {
              if ( (_DWORD)v158 == 2 )
              {
                v161 = 2;
                v224 = __ROL4__(1634559043, 2);
                v163 = v224;
              }
              else
              {
                if ( (_DWORD)v158 != 3 )
                {
                  v159 = ((unsigned __int64)v157 ^ *((_QWORD *)&v157 + 1)) % 0xB;
                  v222 = __ROR4__(1886800198, v158);
                  v160 = v222;
                  goto LABEL_272;
                }
                v161 = 15;
                v223 = __ROL4__(1920421956, 15) ^ 3;
                v162 = v223;
LABEL_284:
                v163 = v158 ^ v162;
              }
LABEL_285:
              v164 = __ROR4__(v163, v161);
              goto LABEL_286;
            }
            v159 = 1;
            v225 = __ROR4__(1700422467, 1);
            v160 = v225;
LABEL_272:
            v164 = __ROL4__(v160, v159);
            goto LABEL_286;
          }
          switch ( (_DWORD)v158 )
          {
            case 6:
              v161 = 24;
              v231 = __ROL4__(1464235086, 24) ^ 6;
              v162 = v231;
              goto LABEL_284;
            case 7:
              v159 = 7;
              v230 = __ROR4__(1666411585, 7);
              v160 = v230;
              goto LABEL_272;
            case 8:
              v161 = 8;
              v249 = __ROL4__(1113876033, 8);
              v163 = v249;
              goto LABEL_285;
            case 9:
              v161 = 33;
              v228 = __ROL4__(1480806214, 33) ^ 9;
              v162 = v228;
              goto LABEL_284;
          }
          v165 = __rdtsc();
          v166 = __ROR8__(v165, 3);
          v258 = ((v166 ^ v165) * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v167 = (67117057 * (v166 ^ v165)) ^ v258;
          v164 = ((((((v167 % 0x1A + 97) << 8) | ((v167 >> 5)
                                                - 26
                                                * ((unsigned int)((1321528399 * (unsigned __int64)(v167 >> 5)) >> 32) >> 3)
                                                + 65)) << 8) | ((v167 >> 10)
                                                              - 26
                                                              * ((unsigned int)((1321528399
                                                                               * (unsigned __int64)(v167 >> 10)) >> 32) >> 3)
                                                              + 97)) << 8) | ((v167 >> 15) % 0x1A + 65);
LABEL_286:
          v168 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v13 + 256))(64LL, 80LL, v164);
          v169 = v207;
          if ( v168 )
            v169 = (_BYTE *)v168;
          *(_QWORD *)v169 = &v204;
          *((_QWORD *)v169 + 1) = a4;
          *((_QWORD *)v169 + 2) = v199;
          *((_QWORD *)v169 + 3) = v200;
          *((_QWORD *)v169 + 8) = sub_140BE2C70;
          *((_DWORD *)v169 + 8) = v115;
          *((_DWORD *)v169 + 10) = 0;
          *((_QWORD *)v169 + 9) = v169;
          *((_QWORD *)v169 + 6) = 0LL;
          if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
            KeWaitForGate((__int64)v205, 0LL);
          HIDWORD(v206) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v169 + 48), CriticalWorkQueue);
          if ( v169 == v207 )
          {
            if ( HIDWORD(v206) )
            {
              do
                KeWaitForGate((__int64)v205, 0LL);
              while ( (_DWORD)v206 );
              v206 = 0LL;
              goto LABEL_295;
            }
          }
          else
          {
LABEL_295:
            if ( HIDWORD(v206) )
            {
              do
                KeWaitForGate((__int64)v205, 0LL);
              while ( (_DWORD)v206 );
            }
          }
        }
        return 0LL;
      }
      v154 = *v54;
      v196 = v114 + 1;
      v89 = *(_DWORD *)(v198 + 12);
      if ( (unsigned int)v154 < v89 )
        break;
      v64 = v194;
    }
    while ( v54[1] <= v221 );
    v198 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, __int64, unsigned __int64))(v13 + 544))(v197, a4, v154, v64);
    v60 = (int *)v198;
    if ( v198 )
      continue;
    break;
  }
LABEL_298:
  v170 = *(_DWORD *)(v13 + 2520);
  if ( (v170 & 0x100000) == 0 )
  {
    v232 = -402653175;
    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, a4, 8uLL, 0LL);
  }
  if ( !*(_DWORD *)(v13 + 2328) )
  {
    *(_QWORD *)(v13 + 2344) = 0LL;
    *(_QWORD *)(v13 + 2336) = v13 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v13 + 2352) = 271LL;
    *(_QWORD *)(v13 + 2360) = a4;
    *(_DWORD *)(v13 + 2328) = 1;
    if ( (v170 & 0x20000000) == 0 && (*(_DWORD *)(v13 + 2524) & 0x200000) != 0 && (v170 & 1) != 0 )
    {
      v171 = *(unsigned int *)(v13 + 2676);
      v172 = *(_QWORD *)(v13 + 2104);
      v173 = *(_QWORD *)(v13 + 2680);
      v174 = (_QWORD *)(v171 + v13);
      v175 = v171 + v13 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v13 + 2052) - v171) >> 3);
      while ( v174 != (_QWORD *)v175 )
      {
        *v174 ^= v173;
        v173 = ((v172 ^ *v174++) + __ROR8__(v173, v173 & 0x3F)) ^ 0xEFA;
      }
      *(_DWORD *)(v13 + 2524) &= ~0x200000u;
      if ( v173 != *(_QWORD *)(v13 + 2688) )
      {
        v176 = *(_QWORD *)(v13 + 1416);
        v177 = *(_DWORD *)(v13 + 2052);
        *(_QWORD *)v176 = v13;
        *(_DWORD *)(v176 + 16) = v177;
        if ( !*(_DWORD *)(v13 + 2328) )
          *(_QWORD *)(*(_QWORD *)(v13 + 1416) + 24LL) = v173 ^ *(_QWORD *)(v13 + 2688);
        sub_140BDA384(v13, 0LL, v173, 256LL);
      }
    }
  }
  if ( v264 )
  {
    if ( !v192 )
      goto LABEL_345;
    v178 = __rdtsc();
    v179 = (__ROR8__(v178, 3) ^ v178) * (unsigned __int128)0x7010008004002001uLL;
    v259 = *((_QWORD *)&v179 + 1);
    v180 = ((unsigned __int64)v179 ^ *((_QWORD *)&v179 + 1)) % 0xB;
    if ( (unsigned int)v180 <= 5 )
    {
      if ( (_DWORD)v180 == 5 )
      {
        v183 = 5;
        v238 = __ROL4__(1766089295, 5);
        v185 = v238;
        goto LABEL_335;
      }
      if ( !(_DWORD)v180 )
      {
        v183 = 6;
        v237 = __ROL4__(1665295171, 6);
        v184 = v237;
        goto LABEL_334;
      }
      if ( (_DWORD)v180 != 1 )
      {
        if ( (_DWORD)v180 == 2 )
        {
          v183 = 2;
          v235 = __ROL4__(1634559043, 2);
          v185 = v235;
        }
        else
        {
          if ( (_DWORD)v180 != 3 )
          {
            v181 = ((unsigned __int64)v179 ^ *((_QWORD *)&v179 + 1)) % 0xB;
            v233 = __ROR4__(1886800198, v180);
            v182 = v233;
            goto LABEL_322;
          }
          v183 = 15;
          v234 = __ROL4__(1920421956, 15) ^ 3;
          v184 = v234;
LABEL_334:
          v185 = v180 ^ v184;
        }
LABEL_335:
        v186 = __ROR4__(v185, v183);
        goto LABEL_336;
      }
      v181 = 1;
      v236 = __ROR4__(1700422467, 1);
      v182 = v236;
LABEL_322:
      v186 = __ROL4__(v182, v181);
      goto LABEL_336;
    }
    switch ( (_DWORD)v180 )
    {
      case 6:
        v183 = 24;
        v184 = __ROL4__(1464235086, 24) ^ 6;
        goto LABEL_334;
      case 7:
        v181 = 7;
        v241 = __ROR4__(1666411585, 7);
        v182 = v241;
        goto LABEL_322;
      case 8:
        v183 = 8;
        v240 = __ROL4__(1113876033, 8);
        v185 = v240;
        goto LABEL_335;
      case 9:
        v183 = 33;
        v239 = __ROL4__(1480806214, 33) ^ 9;
        v184 = v239;
        goto LABEL_334;
    }
    v187 = __rdtsc();
    v188 = __ROR8__(v187, 3);
    v260 = ((v188 ^ v187) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v186 = ((((((((unsigned int)v260 ^ (67117057 * ((unsigned int)v188 ^ (unsigned int)v187))) % 0x1A + 97) << 8) | ((((unsigned int)v260 ^ (67117057 * ((unsigned int)v188 ^ (unsigned int)v187))) >> 5) % 0x1A + 65)) << 8) | ((((unsigned int)v260 ^ (67117057 * ((unsigned int)v188 ^ (unsigned int)v187))) >> 10) % 0x1A + 97)) << 8) | ((((unsigned int)v260 ^ (67117057 * ((unsigned int)v188 ^ (unsigned int)v187))) >> 15) % 0x1A + 65);
LABEL_336:
    v189 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v13 + 256))(64LL, 80LL, v186);
    v190 = v207;
    if ( v189 )
      v190 = (_BYTE *)v189;
    *(_QWORD *)v190 = &v204;
    *((_QWORD *)v190 + 2) = v199;
    *((_QWORD *)v190 + 3) = v200;
    *((_DWORD *)v190 + 8) = v192;
    *((_QWORD *)v190 + 8) = sub_140BE2C70;
    *((_QWORD *)v190 + 1) = a4;
    *((_DWORD *)v190 + 10) = 0;
    *((_QWORD *)v190 + 9) = v190;
    *((_QWORD *)v190 + 6) = 0LL;
    if ( _InterlockedIncrement((volatile signed __int32 *)&v206) == 1 && HIDWORD(v206) )
      KeWaitForGate((__int64)v205, 0LL);
    HIDWORD(v206) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v190 + 48), CriticalWorkQueue);
    if ( v190 != v207 )
    {
LABEL_345:
      v191 = HIDWORD(v206);
      goto LABEL_347;
    }
    if ( HIDWORD(v206) )
    {
      do
        KeWaitForGate((__int64)v205, 0LL);
      while ( (_DWORD)v206 );
      v206 = 0LL;
      v191 = 0;
LABEL_347:
      while ( v191 )
      {
        KeWaitForGate((__int64)v205, 0LL);
        v191 = v206;
      }
    }
  }
  return 3221225595LL;
}
