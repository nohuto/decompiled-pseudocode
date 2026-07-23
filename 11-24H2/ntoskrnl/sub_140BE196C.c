/*
 * XREFs of sub_140BE196C @ 0x140BE196C
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
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140516BA0 @ 0x140516BA0 (sub_140516BA0.c)
 *     MmImageSectionPagable @ 0x140A33BFC (MmImageSectionPagable.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140BE196C(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // esi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // di
  int v10; // r12d
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // xmm1_8
  int v14; // ecx
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  unsigned int v19; // r14d
  unsigned int v20; // eax
  _BYTE *v21; // rsi
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rdx
  int v27; // ebx
  int v28; // ecx
  _BYTE *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 i; // rax
  _QWORD *v34; // rdx
  __int64 v35; // r8
  char *v36; // rcx
  char v37; // al
  _QWORD *v38; // rax
  unsigned __int64 v39; // rcx
  int v40; // edx
  _DWORD *v41; // rbx
  bool v42; // zf
  int v43; // ecx
  _DWORD *v44; // rax
  __int16 v45; // cx
  char *v46; // r8
  char *v47; // r10
  __int64 v48; // r9
  char *v49; // r11
  char *v50; // r14
  int v51; // r12d
  char v52; // cl
  char v53; // al
  unsigned int v54; // r8d
  char *v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // cl
  char v59; // al
  int v60; // r9d
  __int64 v61; // r8
  char v62; // cl
  char v63; // al
  int v64; // r9d
  __int64 v65; // r8
  char v66; // cl
  char v67; // al
  unsigned int v68; // ecx
  int v69; // edx
  unsigned int v70; // eax
  BOOL v71; // r12d
  unsigned int v72; // r14d
  BOOL v73; // r11d
  int v74; // ecx
  _QWORD *v75; // rax
  __int64 v76; // rdx
  ULONG_PTR v77; // rdx
  unsigned int v78; // r13d
  _BYTE *v79; // rcx
  ULONG_PTR v80; // rax
  __int64 v81; // r8
  char *v82; // rbx
  int v83; // edx
  int v84; // eax
  __int16 v85; // ax
  char *v86; // r8
  char *v87; // r10
  __int64 v88; // r9
  char *v89; // r11
  int v90; // r12d
  char *v91; // r14
  char v92; // cl
  char v93; // al
  unsigned int v94; // r8d
  char *v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rax
  char v98; // cl
  char v99; // al
  int v100; // r9d
  __int64 v101; // r8
  char v102; // cl
  char v103; // al
  int v104; // r9d
  __int64 v105; // r8
  char v106; // cl
  char v107; // al
  unsigned int v108; // ecx
  int v109; // eax
  int v110; // edx
  __int64 *v111; // rax
  unsigned int *v112; // rcx
  unsigned __int64 v113; // r9
  _BYTE *v114; // rax
  unsigned __int64 j; // r13
  __int64 v116; // r14
  unsigned __int64 v117; // rax
  unsigned int v118; // eax
  unsigned int v119; // eax
  __int64 v120; // r14
  __int64 v121; // rbx
  unsigned int v122; // r12d
  _QWORD *v123; // r13
  ULONG_PTR v124; // r14
  _QWORD *v125; // r11
  _QWORD *v126; // r10
  unsigned __int64 v127; // rax
  int v128; // r9d
  const char *v129; // rax
  unsigned __int64 v130; // rsi
  unsigned __int64 v131; // r8
  __int64 v132; // rax
  __int64 v133; // r8
  _QWORD *v134; // r10
  __int64 v135; // r8
  unsigned __int128 v136; // rax
  unsigned __int64 v137; // rax
  _DWORD *v138; // r12
  _DWORD *v139; // r9
  _QWORD *v140; // r10
  char *v141; // r11
  int v142; // r8d
  char *v143; // rcx
  _QWORD *v144; // rdx
  __int64 v145; // r13
  char v146; // al
  int v147; // ecx
  unsigned int v148; // r15d
  unsigned int v149; // r12d
  unsigned __int64 v150; // rax
  unsigned __int128 v151; // rax
  unsigned __int64 v152; // rcx
  int v153; // ecx
  int v154; // ecx
  unsigned int v155; // r9d
  int v156; // ecx
  int v157; // ecx
  int v158; // ecx
  unsigned __int64 v159; // rax
  __int64 v160; // rcx
  unsigned int v161; // r9d
  __int64 v162; // rax
  _BYTE *v163; // rbx
  __int64 k; // rcx
  unsigned __int64 v165; // rax
  __int64 v166; // r14
  __int64 v167; // r13
  unsigned int v168; // eax
  __int64 v169; // rbx
  int v171; // ecx
  unsigned int v172; // eax
  __int64 v173; // r8
  int v174; // ecx
  unsigned __int64 v175; // rdx
  int v176; // esi
  __int64 v177; // rsi
  int v178; // ecx
  _QWORD *v179; // rax
  __int64 v180; // rdx
  _QWORD *v181; // r9
  int v182; // r10d
  const char *v183; // rax
  unsigned __int64 v184; // r8
  unsigned int m; // r11d
  __int64 v186; // rax
  __int64 v187; // r8
  _QWORD *v188; // r9
  __int64 v189; // r8
  __int64 v190; // rcx
  unsigned int v191; // edx
  unsigned __int64 v192; // rax
  __int64 v193; // rax
  unsigned __int64 n; // rax
  int v195; // ecx
  __int64 v196; // rcx
  __int64 v197; // r10
  __int64 v198; // r8
  __int64 *v199; // rdx
  unsigned __int64 v200; // r9
  __int64 v201; // rax
  __int64 v202; // rax
  int v203; // edx
  int v204; // [rsp+38h] [rbp-D0h]
  BOOL v205; // [rsp+38h] [rbp-D0h]
  int v206; // [rsp+38h] [rbp-D0h]
  _BYTE *v207; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v208; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v209; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v210; // [rsp+48h] [rbp-C0h]
  _BYTE *v211; // [rsp+50h] [rbp-B8h]
  _DWORD *v212; // [rsp+50h] [rbp-B8h]
  __int64 v213; // [rsp+50h] [rbp-B8h]
  __int64 v214; // [rsp+50h] [rbp-B8h]
  unsigned int v215; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v216; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v217; // [rsp+60h] [rbp-A8h]
  __int64 v218; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v219; // [rsp+70h] [rbp-98h]
  __int64 v220; // [rsp+78h] [rbp-90h]
  _QWORD *v221; // [rsp+80h] [rbp-88h] BYREF
  int v222; // [rsp+88h] [rbp-80h]
  int v223; // [rsp+8Ch] [rbp-7Ch]
  int v224; // [rsp+90h] [rbp-78h]
  int v225; // [rsp+94h] [rbp-74h]
  int v226; // [rsp+98h] [rbp-70h]
  int v227; // [rsp+9Ch] [rbp-6Ch]
  int v228; // [rsp+A0h] [rbp-68h]
  int v229; // [rsp+A4h] [rbp-64h]
  int v230; // [rsp+A8h] [rbp-60h]
  int v231; // [rsp+ACh] [rbp-5Ch]
  __int64 v232; // [rsp+B0h] [rbp-58h]
  __int128 v233; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v234; // [rsp+C8h] [rbp-40h]
  _BYTE *v235; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v236[24]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v237; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v238[88]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v239; // [rsp+158h] [rbp+50h]
  __int64 v240; // [rsp+160h] [rbp+58h]
  __int64 v241; // [rsp+168h] [rbp+60h]
  _BYTE v242[168]; // [rsp+170h] [rbp+68h] BYREF
  ULONG_PTR v244; // [rsp+230h] [rbp+128h]
  unsigned __int16 v246; // [rsp+240h] [rbp+138h]
  int v247; // [rsp+240h] [rbp+138h]

  v244 = a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 520LL))(a2);
  v6 = v5;
  if ( !v5 )
    return 3221225595LL;
  v246 = *(_WORD *)(v5 + 6);
  if ( !v246 || *(_DWORD *)(v5 + 56) < 0x1000u || (a2 & 0xFFF) != 0 )
  {
    v195 = *((_DWORD *)v3 + 630);
    if ( (v195 & 0x100000) == 0 )
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, a2, 4uLL, 0LL);
    if ( !*((_DWORD *)v3 + 582) )
    {
      *((_QWORD *)v3 + 293) = 0LL;
      *((_QWORD *)v3 + 294) = 271LL;
      *((_QWORD *)v3 + 292) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 295) = a2;
      *((_DWORD *)v3 + 582) = 1;
      if ( (v195 & 0x20000000) == 0 && (*((_DWORD *)v3 + 631) & 0x200000) != 0 && (v195 & 1) != 0 )
      {
        v196 = *((unsigned int *)v3 + 669);
        v197 = *((_QWORD *)v3 + 263);
        v198 = *((_QWORD *)v3 + 335);
        v199 = (__int64 *)&v3[v196];
        v200 = (unsigned __int64)&v3[8 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v3 + 513) - v196) >> 3) + v196];
        if ( &v3[v196] != (_BYTE *)v200 )
        {
          do
          {
            *v199 ^= v198;
            v201 = *v199++;
            v198 = ((v197 ^ v201) + __ROR8__(v198, v198 & 0x3F)) ^ 0xEFA;
          }
          while ( v199 != (__int64 *)v200 );
        }
        *((_DWORD *)v3 + 631) &= ~0x200000u;
        if ( v198 != *((_QWORD *)v3 + 336) )
        {
          v202 = *((_QWORD *)v3 + 177);
          v203 = *((_DWORD *)v3 + 513);
          *(_QWORD *)v202 = v3;
          *(_DWORD *)(v202 + 16) = v203;
          if ( !*((_DWORD *)v3 + 582) )
            *(_QWORD *)(*((_QWORD *)v3 + 177) + 24LL) = v198 ^ *((_QWORD *)v3 + 336);
          sub_140BDA384((__int64)v3, 0LL, v198, 256LL);
        }
      }
    }
    return 3221225595LL;
  }
  v7 = -1073741275;
  v8 = *((_QWORD *)v3 + 167);
  v216 = *(_DWORD *)(v5 + 84);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*((void (__fastcall **)(__int64))v3 + 44))(v8);
  v10 = 24;
  v11 = (unsigned int *)**((_QWORD **)v3 + 196);
  v12 = (unsigned __int64)(v11 + 4);
  while ( *(_QWORD *)(v12 + 8) != a2 )
  {
    v12 += 24LL;
    if ( v12 >= (unsigned __int64)&v11[6 * *v11 + 4] )
      goto LABEL_10;
  }
  v7 = 0;
  v13 = *(_QWORD *)(v12 + 16);
  v233 = *(_OWORD *)v12;
  v234 = v13;
LABEL_10:
  (*((void (__fastcall **)(_QWORD))v3 + 52))(*((_QWORD *)v3 + 167));
  __writecr8(CurrentIrql);
  if ( v7 >= 0 )
  {
    v17 = (unsigned int)v234;
  }
  else
  {
    v14 = 24;
    v15 = &v233;
    v16 = 3LL;
    do
    {
      *(_QWORD *)v15 = 0LL;
      v14 -= 8;
      v15 = (__int128 *)((char *)v15 + 8);
      --v16;
    }
    while ( v16 );
    for ( ; v14; --v14 )
    {
      *(_BYTE *)v15 = 0;
      v15 = (__int128 *)((char *)v15 + 1);
    }
    v17 = *(unsigned int *)(v6 + 80);
    LODWORD(v234) = *(_DWORD *)(v6 + 80);
    *((_QWORD *)&v233 + 1) = a2;
    *(_QWORD *)&v233 = 1LL;
  }
  v18 = *((_DWORD *)v3 + 593);
  v219 = ((a2 & 0xFFF) + 4095 + v17) >> 12;
  v204 = *((_DWORD *)v3 + 513);
  v19 = 20 * v219;
  v20 = 20 * v219 + v204 + 48;
  if ( v20 <= *((_DWORD *)v3 + 665) )
  {
    v21 = v3;
    v220 = (__int64)v3;
    *((_DWORD *)v3 + 513) = v20;
  }
  else
  {
    v220 = sub_140BD9AF8(v3, v20, v18);
    v21 = (_BYTE *)v220;
    if ( !v220 )
      return 3221225626LL;
    v22 = *((_DWORD *)v3 + 630);
    if ( (v22 & 2) == 0 )
    {
      v23 = *((_DWORD *)v3 + 513);
      v24 = *((_QWORD *)v3 + 253);
      v25 = (v22 & 0x10000000) != 0 ? *((_DWORD *)v3 + 593) : 0;
      if ( v23 >= 8 )
      {
        v26 = (unsigned __int64)v23 >> 3;
        do
        {
          *(_QWORD *)v3 = 0LL;
          v23 -= 8;
          v3 += 8;
          --v26;
        }
        while ( v26 );
      }
      for ( ; v23; --v23 )
        *v3++ = 0;
      v27 = *((_DWORD *)v21 + 593);
      *((_DWORD *)v21 + 593) = v25;
      if ( v25 == 3 )
      {
        (*((void (__fastcall **)(__int64))v21 + 109))(v24);
      }
      else if ( (*((_DWORD *)v21 + 630) & 0x8000000) != 0 || !v25 )
      {
        (*((void (__fastcall **)(__int64))v21 + 33))(v24);
      }
      else
      {
        (*((void (__fastcall **)(__int64, _QWORD))v21 + 71))(v24 - 8, *(_QWORD *)(v24 - 8));
      }
      *((_DWORD *)v21 + 593) = v27;
    }
    *((_DWORD *)v21 + 630) &= ~2u;
  }
  ++*((_DWORD *)v21 + 523);
  v28 = 48;
  v29 = &v21[v204];
  v211 = v29;
  v30 = v29;
  v31 = 6LL;
  do
  {
    *v30 = 0LL;
    v28 -= 8;
    ++v30;
    --v31;
  }
  while ( v31 );
  for ( ; v28; --v28 )
  {
    *(_BYTE *)v30 = 0;
    v30 = (_QWORD *)((char *)v30 + 1);
  }
  *(_DWORD *)v29 = 33;
  *((_QWORD *)v29 + 1) = 0LL;
  *((_DWORD *)v29 + 4) = 0;
  v32 = *((_QWORD *)v21 + 263);
  for ( i = v32; ; LODWORD(v32) = i ^ v32 )
  {
    i >>= 31;
    if ( !i )
      break;
  }
  v34 = v29 + 24;
  v35 = 3LL;
  *((_DWORD *)v29 + 5) = v32 & 0x7FFFFFFF;
  v36 = (char *)&v233;
  *(_QWORD *)a1 = v21;
  do
  {
    v10 -= 8;
    *v34 = *(_QWORD *)v36;
    v36 += 8;
    ++v34;
    --v35;
  }
  while ( v35 );
  for ( ; v10; --v10 )
  {
    v37 = *v36++;
    *(_BYTE *)v34 = v37;
    v34 = (_QWORD *)((char *)v34 + 1);
  }
  LOBYTE(v34) = 1;
  v221 = (_QWORD *)(*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v21 + 64))(
                     v244,
                     v34,
                     12LL,
                     &v215);
  if ( !v221 )
    v215 = 0;
  if ( (a3 & 1) == 0 )
  {
    v221 = 0LL;
    v215 = 0;
  }
  v207 = v29 + 48;
  v218 = (__int64)&v29[20 * (unsigned int)v219 + 48];
  v38 = v29 + 48;
  if ( v19 >= 8 )
  {
    v39 = (unsigned __int64)v19 >> 3;
    do
    {
      *v38 = -1LL;
      v19 -= 8;
      ++v38;
      --v39;
    }
    while ( v39 );
  }
  for ( ; v19; --v19 )
  {
    *(_BYTE *)v38 = -1;
    v38 = (_QWORD *)((char *)v38 + 1);
  }
  v40 = 0;
  v41 = (_DWORD *)(v6 + *(unsigned __int16 *)(v6 + 20) + 24LL);
  v42 = (v41[9] & 0x2000000) == 0;
  v219 = (unsigned __int64)&v41[10 * v246];
  if ( !v42 )
    goto LABEL_61;
  v43 = *v41;
  v44 = v41 + 1;
  if ( *v41 == 1414090313 && *v44 == 1195525195 )
    goto LABEL_61;
  if ( v43 == 1162297680 )
  {
    v45 = *(_WORD *)v44;
    if ( *(_WORD *)v44 == 30839 || v45 == 29303 || v45 == 30583 )
    {
LABEL_61:
      v40 = 1;
      goto LABEL_62;
    }
  }
  else if ( v43 == 1095914053 && *(_WORD *)v44 == 16724 )
  {
    goto LABEL_61;
  }
  v46 = (char *)*((_QWORD *)v21 + 298);
  v47 = (char *)*((_QWORD *)v21 + 299);
  v48 = (char *)v41 - v46;
  v49 = (char *)*((_QWORD *)v21 + 300);
  v50 = (char *)*((_QWORD *)v21 + 301);
  v51 = 7;
  while ( 1 )
  {
    v52 = v46[v48];
    v53 = *v46++;
    if ( v52 != v53 )
      break;
    if ( !--v51 )
      goto LABEL_61;
  }
  v54 = 8;
  v55 = (char *)v41;
  while ( 1 )
  {
    v56 = *(_QWORD *)v55;
    v55 += 8;
    v57 = *(_QWORD *)v47;
    v47 += 8;
    if ( v56 != v57 )
      break;
    v54 -= 8;
    if ( v54 < 8 )
    {
      if ( !v54 )
        goto LABEL_61;
      while ( 1 )
      {
        v58 = *v55++;
        v59 = *v47++;
        if ( v58 != v59 )
          goto LABEL_77;
        if ( !--v54 )
          goto LABEL_61;
      }
    }
  }
LABEL_77:
  v60 = 4;
  v61 = (char *)v41 - v49;
  while ( 1 )
  {
    v62 = v49[v61];
    v63 = *v49++;
    if ( v62 != v63 )
      break;
    if ( !--v60 )
      goto LABEL_61;
  }
  v64 = 6;
  v65 = (char *)v41 - v50;
  while ( 1 )
  {
    v66 = v50[v65];
    v67 = *v50++;
    if ( v66 != v67 )
      break;
    if ( !--v64 )
      goto LABEL_61;
  }
LABEL_62:
  if ( (int)v41[9] < 0 )
  {
    v40 = 1;
LABEL_87:
    if ( *v41 == 1414090313 && v41[1] == 1195525195 && (*((_DWORD *)v21 + 631) & 0x2000) != 0 )
      v40 = 0;
    goto LABEL_91;
  }
  if ( v40 )
    goto LABEL_87;
LABEL_91:
  v68 = v41[4];
  v42 = v40 == 0;
  v69 = v41[3];
  v70 = v41[2];
  v71 = v42;
  LODWORD(v217) = v69;
  if ( v68 <= v70 )
    v68 = v70;
  v72 = (v68 + v69 + 4095) & 0xFFFFF000;
  v73 = MmImageSectionPagable((__int64)v41) != 0;
  v205 = v73;
  if ( (*((_DWORD *)v21 + 630) & 0x100000) != 0 )
  {
    v74 = 120;
    v247 = 0;
    v75 = &v235;
    v76 = 15LL;
    do
    {
      *v75 = 0LL;
      v74 -= 8;
      ++v75;
      --v76;
    }
    while ( v76 );
    for ( ; v74; --v74 )
    {
      *(_BYTE *)v75 = 0;
      v75 = (_QWORD *)((char *)v75 + 1);
    }
  }
  else
  {
    v247 = 128;
    v235 = v21;
    v237 = 0LL;
    KeInitializeGate((__int64)v236, 0);
    v73 = v205;
  }
  v77 = v244;
  v78 = 0;
  v79 = v207;
  v80 = v244;
  v81 = v218;
  v209 = v244;
  if ( v207 != (_BYTE *)v218 )
  {
    v82 = (char *)(v41 + 1);
    while ( v78 < (unsigned int)v217 )
    {
      if ( v78 < v216 )
      {
LABEL_148:
        v110 = 0;
        v111 = (__int64 *)&v221;
        v112 = &v215;
        do
        {
          v113 = *v111;
          if ( *v112 && v209 >= v113 && v209 <= v113 + *v112 - 1LL )
          {
            v79 = v207;
            v80 = v209;
            v81 = v218;
            goto LABEL_159;
          }
          ++v110;
          ++v112;
          ++v111;
        }
        while ( !v110 );
        if ( v78 >= (unsigned int)v217 && v73 )
        {
          v114 = v207;
        }
        else
        {
          v114 = v207;
          *((_DWORD *)v207 + 4) &= ~0x80000000;
        }
        v114[15] &= ~0x80u;
        v79 = v207;
        v81 = v218;
LABEL_158:
        v80 = v209;
      }
LABEL_159:
      v80 += 4096LL;
      v79 += 20;
      v78 += 4096;
      v209 = v80;
      v207 = v79;
      if ( v79 == (_BYTE *)v81 )
      {
        v77 = v244;
        goto LABEL_161;
      }
    }
    if ( v78 < v72 )
    {
LABEL_145:
      if ( v71 )
        goto LABEL_148;
      goto LABEL_159;
    }
    if ( v82 + 36 == (char *)v219 || v78 < *((_DWORD *)v82 + 12) )
      goto LABEL_158;
    v82 += 40;
    v83 = 0;
    if ( (*((_DWORD *)v82 + 8) & 0x2000000) != 0 )
      goto LABEL_108;
    v84 = *((_DWORD *)v82 - 1);
    if ( v84 == 1414090313 )
    {
      if ( *(_DWORD *)v82 == 1195525195 )
      {
LABEL_108:
        v83 = 1;
        goto LABEL_135;
      }
    }
    else if ( v84 == 1162297680 )
    {
      v85 = *(_WORD *)v82;
      if ( *(_WORD *)v82 == 30839 || v85 == 29303 || v85 == 30583 )
        goto LABEL_108;
      goto LABEL_116;
    }
    if ( v84 == 1095914053 && *(_WORD *)v82 == 16724 )
      goto LABEL_108;
LABEL_116:
    v86 = (char *)*((_QWORD *)v21 + 298);
    v87 = (char *)*((_QWORD *)v21 + 299);
    v88 = v82 - v86;
    v89 = (char *)*((_QWORD *)v21 + 300);
    v90 = 7;
    v91 = (char *)*((_QWORD *)v21 + 301);
    while ( 1 )
    {
      v92 = v86[v88 - 4];
      v93 = *v86++;
      if ( v92 != v93 )
        break;
      if ( !--v90 )
      {
LABEL_134:
        v83 = 1;
        goto LABEL_135;
      }
    }
    v94 = 8;
    v95 = v82 - 4;
    while ( 1 )
    {
      v96 = *(_QWORD *)v95;
      v95 += 8;
      v97 = *(_QWORD *)v87;
      v87 += 8;
      if ( v96 != v97 )
        break;
      v94 -= 8;
      if ( v94 < 8 )
      {
        if ( !v94 )
          goto LABEL_134;
        while ( 1 )
        {
          v98 = *v95++;
          v99 = *v87++;
          if ( v98 != v99 )
            goto LABEL_127;
          if ( !--v94 )
            goto LABEL_134;
        }
      }
    }
LABEL_127:
    v100 = 4;
    v101 = v82 - v89;
    while ( 1 )
    {
      v102 = v89[v101 - 4];
      v103 = *v89++;
      if ( v102 != v103 )
        break;
      if ( !--v100 )
        goto LABEL_134;
    }
    v104 = 6;
    v105 = v82 - v91;
    while ( 1 )
    {
      v106 = v91[v105 - 4];
      v107 = *v91++;
      if ( v106 != v107 )
        break;
      if ( !--v104 )
        goto LABEL_134;
    }
LABEL_135:
    if ( *((int *)v82 + 8) >= 0 )
    {
      if ( !v83 )
      {
LABEL_142:
        v108 = *((_DWORD *)v82 + 3);
        v71 = v83 == 0;
        if ( v108 <= *((_DWORD *)v82 + 1) )
          v108 = *((_DWORD *)v82 + 1);
        v72 = (v108 + 4095 + *((_DWORD *)v82 + 2)) & 0xFFFFF000;
        v109 = MmImageSectionPagable((__int64)(v82 - 4));
        v79 = v207;
        v81 = v218;
        v42 = v109 == 0;
        v80 = v209;
        v73 = !v42;
        goto LABEL_145;
      }
    }
    else
    {
      v83 = 1;
    }
    if ( *((_DWORD *)v82 - 1) == 1414090313 && *(_DWORD *)v82 == 1195525195 && (*((_DWORD *)v21 + 631) & 0x2000) != 0 )
      v83 = 0;
    goto LABEL_142;
  }
LABEL_161:
  for ( j = (unsigned __int64)(v211 + 48); ; j += 20LL * (unsigned int)v116 )
  {
    v219 = j;
    if ( j == v81 )
      break;
    LODWORD(v116) = 0;
    v117 = j;
    do
    {
      if ( *(char *)(v117 + 15) < 0 )
        break;
      v116 = (unsigned int)(v116 + 1);
      v117 = j + 20 * v116;
    }
    while ( v117 != v81 );
    v206 = v116;
    if ( (_DWORD)v116 )
    {
      v118 = v247;
      if ( v247 )
      {
        v148 = 0;
        do
        {
          v149 = v116 - v148;
          if ( (unsigned int)v116 - v148 > v118 )
            v149 = v118;
          v214 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v21 + 32))(
                   64LL,
                   *((_QWORD *)v21 + 347),
                   *((unsigned int *)v21 + 524));
          v150 = __rdtsc();
          v151 = (__ROR8__(v150, 3) ^ v150) * (unsigned __int128)0x7010008004002001uLL;
          v240 = *((_QWORD *)&v151 + 1);
          v152 = ((unsigned __int64)v151 ^ *((_QWORD *)&v151 + 1)) % 0xB;
          if ( (unsigned int)v152 > 5 )
          {
            v156 = v152 - 6;
            if ( v156 )
            {
              v157 = v156 - 1;
              if ( v157 )
              {
                v158 = v157 - 1;
                if ( v158 )
                {
                  if ( v158 == 1 )
                  {
                    v228 = -1333354875;
                    v155 = __ROR4__(-1333354868, 33);
                  }
                  else
                  {
                    v159 = __rdtsc();
                    v160 = __ROR8__(v159, 3);
                    v241 = ((v160 ^ v159) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v161 = (67117057 * (v160 ^ v159)) ^ v241;
                    v155 = ((((((v161 % 0x1A + 97) << 8) | ((v161 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v161 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v161 >> 10) % 0x1A + 97)) << 8) | ((v161 >> 15) % 0x1A + 65);
                  }
                }
                else
                {
                  v229 = 1684422978;
                  v155 = __ROR4__(1684422978, 8);
                }
              }
              else
              {
                v230 = -2100910376;
                v155 = __ROL4__(-2100910376, 7);
              }
            }
            else
            {
              v231 = 1314342514;
              v155 = __ROR4__(1314342516, 24);
            }
          }
          else if ( (_DWORD)v152 == 5 )
          {
            v227 = 680282605;
            v155 = __ROR4__(680282605, 5);
          }
          else if ( (_DWORD)v152 )
          {
            v153 = v152 - 1;
            if ( v153 )
            {
              v154 = v153 - 1;
              if ( v154 )
              {
                if ( v154 == 1 )
                {
                  v223 = -1474152136;
                  v155 = __ROR4__(-1474152133, 15);
                }
                else
                {
                  v222 = 1728537748;
                  v155 = __ROL4__(1728537748, 4);
                }
              }
              else
              {
                v224 = -2051698419;
                v155 = __ROR4__(-2051698419, 2);
              }
            }
            else
            {
              v225 = -1297272415;
              v155 = __ROL4__(-1297272415, 1);
            }
          }
          else
          {
            v226 = -795291432;
            v155 = __ROR4__(-795291432, 6);
          }
          v162 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v21 + 32))(64LL, 80LL, v155);
          v163 = v238;
          if ( v162 )
            v163 = (_BYTE *)v162;
          *(_QWORD *)v163 = &v235;
          *((_QWORD *)v163 + 1) = v214;
          *((_QWORD *)v163 + 2) = v244 + (v148 << 12);
          *((_DWORD *)v163 + 8) = v149;
          *((_DWORD *)v163 + 10) = 1;
          *((_QWORD *)v163 + 9) = v163;
          *((_QWORD *)v163 + 6) = 0LL;
          *((_QWORD *)v163 + 3) = j + 20LL * v148;
          *((_QWORD *)v163 + 8) = sub_140BE2C70;
          if ( _InterlockedIncrement((volatile signed __int32 *)&v237) == 1 && HIDWORD(v237) )
            KeWaitForGate((__int64)v236, 0LL);
          HIDWORD(v237) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v163 + 48), CriticalWorkQueue);
          if ( v163 == v238 && HIDWORD(v237) )
          {
            do
              KeWaitForGate((__int64)v236, 0LL);
            while ( (_DWORD)v237 );
            v237 = 0LL;
            v21 = (_BYTE *)v220;
          }
          if ( !v214 && HIDWORD(v237) )
          {
            do
              KeWaitForGate((__int64)v236, 0LL);
            while ( (_DWORD)v237 );
            v237 = 0LL;
            v21 = (_BYTE *)v220;
          }
          v118 = v247;
          v148 += v247;
        }
        while ( v148 < (unsigned int)v116 );
      }
      else
      {
        v119 = v116;
        v210 = j;
        v120 = *((_QWORD *)v21 + 346);
        v232 = v120;
        v216 = v119;
        v208 = v77;
        do
        {
          v121 = 8LL;
          v122 = 0;
          if ( v119 < 8 )
            v121 = v119;
          v123 = (_QWORD *)v120;
          v124 = v208;
          v212 = v242;
          do
          {
            v123[1] = 4096LL;
            v125 = (_QWORD *)(v124 + (v122 << 12));
            *v123 = v125;
            v126 = v125;
            v127 = *((_QWORD *)v21 + 263);
            *((_DWORD *)v21 + 530) += 4096;
            v128 = *((_DWORD *)v21 + 525);
            v217 = v127;
            v129 = (const char *)v125;
            if ( v125 < v125 + 512 )
            {
              do
              {
                _mm_prefetch(v129, 0);
                v129 += 64;
              }
              while ( v129 < (const char *)v125 + 4096 );
            }
            v130 = v217;
            v131 = v217;
            LODWORD(v217) = 32;
            do
            {
              v132 = 8LL;
              do
              {
                v133 = *v126 ^ v131;
                v134 = v126 + 1;
                v135 = *v134 ^ __ROL8__(v133, v128);
                v126 = v134 + 1;
                v131 = __ROL8__(v135, v128);
                --v132;
              }
              while ( v132 );
              v136 = (__ROL8__(v130 ^ ((char *)v126 - (char *)v125), 17) ^ v130 ^ ((char *)v126 - (char *)v125))
                   * (unsigned __int128)0x7010008004002001uLL;
              v239 = *((_QWORD *)&v136 + 1);
              v128 = ((unsigned __int8)v136 ^ (unsigned __int8)(BYTE8(v136) ^ v128)) & 0x3F;
              if ( !v128 )
                LOBYTE(v128) = 1;
              LODWORD(v217) = v217 - 1;
            }
            while ( (_DWORD)v217 );
            v21 = (_BYTE *)v220;
            v137 = v131;
            v124 = v208;
            while ( 1 )
            {
              v137 >>= 31;
              if ( !v137 )
                break;
              LODWORD(v131) = v137 ^ v131;
            }
            ++v122;
            v123 += 6;
            *v212++ = v131 & 0x7FFFFFFF;
          }
          while ( v122 < (unsigned int)v121 );
          v120 = v232;
          sub_140516BA0((__int64)v21, v232, v121);
          v138 = v242;
          v213 = (unsigned int)v121;
          v139 = (_DWORD *)(v210 + 16);
          v140 = (_QWORD *)v210;
          v141 = (char *)(v120 + 16);
          do
          {
            v142 = 16;
            v143 = v141;
            v144 = v140;
            v145 = 2LL;
            do
            {
              v142 -= 8;
              *v144 = *(_QWORD *)v143;
              v143 += 8;
              ++v144;
              --v145;
            }
            while ( v145 );
            for ( ; v142; --v142 )
            {
              v146 = *v143++;
              *(_BYTE *)v144 = v146;
              v144 = (_QWORD *)((char *)v144 + 1);
            }
            v141 += 48;
            v140 = (_QWORD *)((char *)v140 + 20);
            v147 = *v138++ ^ *v139;
            *v139 ^= v147 & 0x7FFFFFFF;
            v139 += 5;
            --v213;
          }
          while ( v213 );
          v21 = (_BYTE *)v220;
          v208 += (unsigned int)((_DWORD)v121 << 12);
          v119 = v216 - v121;
          v210 += 20 * v121;
          *(_DWORD *)(v220 + 2120) += (_DWORD)v121 << 15;
          v216 = v119;
        }
        while ( v119 );
        LODWORD(v116) = v206;
        j = v219;
      }
      v81 = v218;
    }
    for ( k = 5LL * (unsigned int)v116; ; k = 5 * v116 )
    {
      v165 = j + 4 * k;
      if ( v165 == v81 || *(char *)(v165 + 15) >= 0 )
        break;
      v116 = (unsigned int)(v116 + 1);
    }
    v77 = (unsigned int)((_DWORD)v116 << 12) + v244;
    v244 = v77;
  }
  if ( v247 && HIDWORD(v237) )
  {
    do
      KeWaitForGate((__int64)v236, 0LL);
    while ( (_DWORD)v237 );
    v237 = 0LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v166 = v215;
    if ( v215 )
    {
      v167 = *((unsigned int *)v21 + 513);
      v168 = v167 + 48;
      if ( (unsigned int)(v167 + 48) <= *((_DWORD *)v21 + 665) )
      {
        v169 = (__int64)v21;
        *((_DWORD *)v21 + 513) = v168;
      }
      else
      {
        v169 = sub_140BD9AF8(v21, v168, *((_DWORD *)v21 + 593));
        if ( !v169 )
          return 3221225626LL;
        v171 = *((_DWORD *)v21 + 630);
        if ( (v171 & 2) == 0 )
        {
          v172 = *((_DWORD *)v21 + 513);
          v173 = *((_QWORD *)v21 + 253);
          v174 = (v171 & 0x10000000) != 0 ? *((_DWORD *)v21 + 593) : 0;
          if ( v172 >= 8 )
          {
            v175 = (unsigned __int64)v172 >> 3;
            do
            {
              *(_QWORD *)v21 = 0LL;
              v172 -= 8;
              v21 += 8;
              --v175;
            }
            while ( v175 );
          }
          for ( ; v172; --v172 )
            *v21++ = 0;
          v176 = *(_DWORD *)(v169 + 2372);
          *(_DWORD *)(v169 + 2372) = v174;
          if ( v174 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v169 + 872))(v173);
          }
          else if ( (*(_DWORD *)(v169 + 2520) & 0x8000000) != 0 || !v174 )
          {
            (*(void (__fastcall **)(__int64))(v169 + 264))(v173);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v169 + 568))(v173 - 8, *(_QWORD *)(v173 - 8));
          }
          *(_DWORD *)(v169 + 2372) = v176;
        }
        *(_DWORD *)(v169 + 2520) &= ~2u;
      }
      ++*(_DWORD *)(v169 + 2092);
      v177 = v169 + v167;
      v178 = 48;
      v179 = (_QWORD *)(v169 + v167);
      v180 = 6LL;
      do
      {
        *v179 = 0LL;
        v178 -= 8;
        ++v179;
        --v180;
      }
      while ( v180 );
      for ( ; v178; --v178 )
      {
        *(_BYTE *)v179 = 0;
        v179 = (_QWORD *)((char *)v179 + 1);
      }
      v181 = v221;
      *(_DWORD *)v177 = 13;
      *(_QWORD *)(v177 + 8) = v181;
      *(_DWORD *)(v177 + 16) = v166;
      *(_DWORD *)(v169 + 2120) += v166;
      v182 = *(_DWORD *)(v169 + 2100);
      if ( v181 < (_QWORD *)((char *)v181 + v166) )
      {
        v183 = (const char *)v181;
        do
        {
          _mm_prefetch(v183, 0);
          v183 += 64;
        }
        while ( v183 < (const char *)v181 + v166 );
      }
      v184 = *(_QWORD *)(v169 + 2104);
      for ( m = (unsigned int)v166 >> 7; m; --m )
      {
        v186 = 8LL;
        do
        {
          v187 = *v181 ^ v184;
          v188 = v181 + 1;
          v189 = *v188 ^ __ROL8__(v187, v182);
          v181 = v188 + 1;
          v184 = __ROL8__(v189, v182);
          --v186;
        }
        while ( v186 );
        v190 = __ROL8__(*(_QWORD *)(v169 + 2104) ^ ((char *)v181 - (char *)v221), 17) ^ *(_QWORD *)(v169 + 2104) ^ ((char *)v181 - (char *)v221);
        v182 = ((unsigned __int8)(v190 ^ (((unsigned __int64)v190 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v182) & 0x3F;
        if ( !v182 )
          LOBYTE(v182) = 1;
      }
      v191 = v166 & 0x7F;
      if ( v191 >= 8 )
      {
        v192 = (unsigned __int64)(v166 & 0x7F) >> 3;
        do
        {
          v184 = __ROL8__(*v181++ ^ v184, v182);
          v191 -= 8;
          --v192;
        }
        while ( v192 );
      }
      for ( ; v191; --v191 )
      {
        v193 = *(unsigned __int8 *)v181;
        v181 = (_QWORD *)((char *)v181 + 1);
        v184 = __ROL8__(v193 ^ v184, v182);
      }
      for ( n = v184; ; LODWORD(v184) = n ^ v184 )
      {
        n >>= 31;
        if ( !n )
          break;
      }
      *(_DWORD *)(v177 + 20) = v184 & 0x7FFFFFFF;
      *(_DWORD *)(v169 + 2120) += v166;
      if ( (*(_DWORD *)(v169 + 2520) & 0x20000000) != 0 )
      {
        if ( (_DWORD)v166 )
          sub_140516B3C(v169, (__int64)v221, v166, v177 + 28);
      }
      *(_DWORD *)(v177 + 24) = 1;
      *(_QWORD *)a1 = v169;
    }
  }
  return 0LL;
}
