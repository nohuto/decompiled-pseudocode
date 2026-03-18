/*
 * XREFs of ComputeRGBLUTAA @ 0x14013DE44
 * Callers:
 *     CreateDyesColorMappingTable @ 0x14013C2F8 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1402F49F0 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x14013E82C (MulFD6.c)
 *     RaisePower @ 0x14013E960 (RaisePower.c)
 *     DivFD6 @ 0x14013ED98 (DivFD6.c)
 *     U64DivU32RoundUp @ 0x14013EE58 (U64DivU32RoundUp.c)
 *     Log @ 0x14013F0BC (Log.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeRGBLUTAA(__int64 a1, __int128 *a2, int *a3)
{
  __int64 v5; // rsi
  __int64 SessionState; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int16 v19; // ax
  __int128 v20; // xmm0
  int v21; // r14d
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  int v25; // r11d
  char *v26; // r8
  int v27; // r9d
  int v28; // r10d
  unsigned __int16 v29; // cx
  unsigned int v30; // edx
  char v31; // al
  char *v32; // r8
  char v33; // al
  char *v34; // r8
  int v35; // r9d
  char v36; // al
  char *v37; // r8
  int v38; // r9d
  char v39; // al
  char v40; // r13
  __int64 v41; // r12
  int v42; // r8d
  int v43; // edx
  int v44; // r8d
  __int64 result; // rax
  bool v46; // zf
  int v47; // ecx
  int v48; // esi
  int v49; // r15d
  char v50; // al
  _BYTE *v51; // r14
  char *v52; // rdx
  char *v53; // rax
  char *v54; // rdx
  unsigned int v55; // r9d
  __int64 v56; // rax
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // r8d
  unsigned int v61; // r9d
  unsigned int v62; // eax
  __int64 v63; // rdx
  bool v64; // cf
  unsigned int v65; // ecx
  int v66; // eax
  __int64 v67; // r8
  int v68; // edi
  __int64 v69; // rdx
  __int64 v70; // rcx
  signed int v71; // edi
  int v72; // eax
  int v73; // r15d
  __int64 v74; // rax
  unsigned int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned int v78; // eax
  int v79; // eax
  unsigned int v80; // eax
  unsigned int v81; // eax
  int v82; // eax
  unsigned int v83; // ebx
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r8
  unsigned int v88; // eax
  int v89; // edx
  __int64 v90; // rbx
  int v91; // r8d
  unsigned int v92; // eax
  unsigned int v93; // eax
  unsigned int v94; // eax
  unsigned __int8 *v95; // rbx
  char v96; // r13
  int v97; // r11d
  _OWORD *v98; // r8
  _WORD *v99; // r10
  int v100; // edi
  _WORD *v101; // rsi
  __int64 v102; // r14
  unsigned int v103; // ecx
  unsigned int v104; // r9d
  unsigned int v105; // kr04_4
  __int64 v106; // rcx
  _OWORD *v107; // rax
  __int128 v108; // xmm1
  int v109; // edx
  __int64 v110; // rax
  unsigned int v111; // kr08_4
  __int16 v112; // [rsp+20h] [rbp-E0h]
  __int16 v113; // [rsp+20h] [rbp-E0h]
  __int16 v114; // [rsp+20h] [rbp-E0h]
  __int16 v115; // [rsp+20h] [rbp-E0h]
  unsigned int v116; // [rsp+24h] [rbp-DCh]
  int v117; // [rsp+28h] [rbp-D8h]
  int v118; // [rsp+2Ch] [rbp-D4h]
  _BYTE *v119; // [rsp+30h] [rbp-D0h]
  int v120; // [rsp+30h] [rbp-D0h]
  int v121; // [rsp+38h] [rbp-C8h]
  int v122; // [rsp+3Ch] [rbp-C4h]
  int v123; // [rsp+40h] [rbp-C0h]
  int v124; // [rsp+44h] [rbp-BCh]
  int v125; // [rsp+48h] [rbp-B8h]
  int v126; // [rsp+4Ch] [rbp-B4h]
  unsigned int v127; // [rsp+50h] [rbp-B0h]
  unsigned int v128; // [rsp+54h] [rbp-ACh]
  int v129; // [rsp+58h] [rbp-A8h]
  int v130; // [rsp+5Ch] [rbp-A4h]
  unsigned int v131; // [rsp+60h] [rbp-A0h]
  int v132; // [rsp+64h] [rbp-9Ch]
  char v133; // [rsp+68h] [rbp-98h]
  unsigned int v134; // [rsp+6Ch] [rbp-94h]
  int v135; // [rsp+70h] [rbp-90h]
  int v136; // [rsp+74h] [rbp-8Ch]
  _DWORD *v137; // [rsp+80h] [rbp-80h]
  __int128 v138; // [rsp+88h] [rbp-78h]
  __int128 v139; // [rsp+98h] [rbp-68h]
  __int64 v140; // [rsp+A8h] [rbp-58h]
  __int64 v141; // [rsp+B0h] [rbp-50h]
  char *v142; // [rsp+B8h] [rbp-48h]
  char *v143; // [rsp+C0h] [rbp-40h]
  __int128 v145; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v146; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v147; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v148; // [rsp+100h] [rbp+0h]
  __int128 v149; // [rsp+110h] [rbp+10h] BYREF
  __int128 v150; // [rsp+120h] [rbp+20h] BYREF
  __int128 v151; // [rsp+130h] [rbp+30h]
  __int128 v152; // [rsp+140h] [rbp+40h]
  __int128 v153; // [rsp+150h] [rbp+50h]
  __int128 v154; // [rsp+160h] [rbp+60h]
  __int128 v155; // [rsp+170h] [rbp+70h]
  __int128 v156; // [rsp+180h] [rbp+80h]
  __int128 v157; // [rsp+190h] [rbp+90h]
  __int128 v158; // [rsp+1A0h] [rbp+A0h]
  __int128 v159; // [rsp+1B0h] [rbp+B0h]
  __int128 v160; // [rsp+1C0h] [rbp+C0h]
  __int128 v161; // [rsp+1D0h] [rbp+D0h]
  __int128 v162; // [rsp+1E0h] [rbp+E0h]
  int v163; // [rsp+1F0h] [rbp+F0h]
  int v164; // [rsp+200h] [rbp+100h]
  int v165; // [rsp+204h] [rbp+104h]
  int v166; // [rsp+208h] [rbp+108h]
  _DWORD v167[4]; // [rsp+210h] [rbp+110h]
  __int64 v168; // [rsp+220h] [rbp+120h]
  __int64 v169; // [rsp+228h] [rbp+128h]
  __int64 v170; // [rsp+230h] [rbp+130h]

  v138 = 0LL;
  v139 = 0LL;
  v5 = a1;
  SessionState = W32GetSessionState(a1, a2, a3);
  v7 = *(__int128 *)((char *)a2 + 72);
  v140 = *(_QWORD *)(SessionState + 112);
  v149 = *(__int128 *)((char *)a2 + 56);
  v8 = *(__int128 *)((char *)a2 + 88);
  v150 = v7;
  v9 = *(__int128 *)((char *)a2 + 104);
  v151 = v8;
  v10 = *(__int128 *)((char *)a2 + 120);
  v152 = v9;
  v11 = *(__int128 *)((char *)a2 + 136);
  v153 = v10;
  v12 = *(__int128 *)((char *)a2 + 152);
  v154 = v11;
  v13 = *(__int128 *)((char *)a2 + 184);
  v155 = v12;
  v156 = *(__int128 *)((char *)a2 + 168);
  v14 = *(__int128 *)((char *)a2 + 200);
  v157 = v13;
  v15 = *(__int128 *)((char *)a2 + 216);
  v158 = v14;
  v16 = *(__int128 *)((char *)a2 + 232);
  v159 = v15;
  v17 = *(__int128 *)((char *)a2 + 248);
  v160 = v16;
  v18 = *(__int128 *)((char *)a2 + 264);
  LODWORD(SessionState) = *((_DWORD *)a2 + 70);
  *((_DWORD *)a2 + 14) &= 0xFFFFECC1;
  v161 = v17;
  *(_QWORD *)&v17 = *((_QWORD *)a2 + 2);
  v162 = v18;
  v163 = SessionState;
  v19 = 255;
  v20 = *a2;
  v21 = v149;
  v148 = v17;
  v22 = *(__int128 *)((char *)a2 + 40);
  v147 = v20;
  v23 = *(__int128 *)((char *)a2 + 24);
  v146 = v22;
  v145 = v23;
  if ( (v149 & 0x2000) == 0 )
    v19 = 0;
  *((_WORD *)a2 + 9) = -1;
  HIWORD(v148) = v19;
  WORD2(v148) = v19;
  *((_WORD *)a2 + 1) &= 0xFFFCu;
  v24 = DWORD1(v146);
  *((_DWORD *)a2 + 2) = 0;
  *((_WORD *)a2 + 3) = 0;
  *((_DWORD *)a2 + 3) = 1450709556;
  *((_WORD *)a2 + 8) = -21555;
  v166 = 1000000;
  v165 = 1000000;
  v164 = 1000000;
  v167[2] = v24;
  v167[1] = v24;
  v167[0] = v24;
  v170 = 0LL;
  v169 = 0LL;
  v168 = 0LL;
  if ( (v21 & 0x40000) != 0 )
  {
    DWORD2(v145) = MulFD6(299000LL, HIDWORD(*((_QWORD *)&v145 + 1)));
    LODWORD(v146) = MulFD6(114000LL, HIDWORD(v145));
    *(_WORD *)((char *)&v146 + 9) = 256;
    HIDWORD(v145) -= DWORD2(v145) + v146;
    BYTE11(v146) = 2;
    WORD1(v145) = 0;
    BYTE1(v145) = 0;
  }
  else if ( (v21 & 0x10000) != 0 )
  {
    v46 = (*(_DWORD *)(v5 + 184) & 0x4000) == 0;
    v164 = *(_DWORD *)(v5 + 468);
    v165 = *(_DWORD *)(v5 + 464);
    v166 = *(_DWORD *)(v5 + 460);
    if ( !v46 )
    {
      v168 = v5 + 524;
      v169 = v5 + 500;
      v170 = v5 + 476;
    }
  }
  v25 = HIDWORD(v146);
  v26 = (char *)&v149 + 4;
  v27 = 6;
  if ( (v21 & 0x20000) == 0 )
    v25 = 1000000;
  v28 = 6;
  v29 = v21 & 0x1000;
  HIDWORD(v146) = v25;
  v30 = (v21 & 0x40321000u) >> 16;
  do
  {
    v31 = *v26;
    v26 += 2;
    LOBYTE(v112) = v31;
    HIBYTE(v112) = *(v26 - 1);
    v29 += v112;
    LOWORD(v30) = v29 + v30;
    --v28;
  }
  while ( v28 );
  v32 = (char *)&v150;
  do
  {
    v33 = *v32;
    v32 += 2;
    LOBYTE(v113) = v33;
    HIBYTE(v113) = *(v32 - 1);
    v29 += v113;
    LOWORD(v30) = v29 + v30;
    --v27;
  }
  while ( v27 );
  v34 = (char *)&v147;
  v35 = 12;
  do
  {
    v36 = *v34;
    v34 += 2;
    LOBYTE(v114) = v36;
    HIBYTE(v114) = *(v34 - 1);
    v29 += v114;
    LOWORD(v30) = v29 + v30;
    --v35;
  }
  while ( v35 );
  v37 = (char *)&v145;
  v38 = 16;
  do
  {
    v39 = *v37;
    v37 += 2;
    LOBYTE(v115) = v39;
    HIBYTE(v115) = *(v37 - 1);
    v29 += v115;
    LOWORD(v30) = v29 + v30;
    --v38;
  }
  while ( v38 );
  v40 = v145;
  v41 = 256LL;
  v42 = (unsigned __int16)v30;
  v43 = *(unsigned __int16 *)(v5 + 7058);
  v44 = v29 | (v42 << 16);
  v136 = v43;
  result = *(unsigned __int16 *)(v5 + 7056);
  if ( *a3 != v44 )
  {
    *a3 = v44;
    *(_WORD *)(v5 + 7056) = 256;
    v125 = v21 & 0x1000;
    if ( (v21 & 0x1000) != 0 )
    {
      v74 = 32LL * *(unsigned __int8 *)(v5 + 34);
      v138 = *(_OWORD *)((char *)&RegData + v74);
      v139 = *(_OWORD *)((char *)&RegData + v74 + 16);
    }
    v137 = a3 + 7;
    v130 = DWORD1(v146) - 1;
    v47 = 3;
    v134 = 1000000 - v25;
    if ( (v21 & 0x100000) == 0 || (v40 & 1) != 0 )
      v119 = 0LL;
    else
      v119 = *(_BYTE **)(v5 + 7064);
    v48 = HIDWORD(v146);
    v135 = v21 & 8;
    v49 = v21 & 2;
    v118 = v49;
    v121 = v21 & 0x10;
    v122 = v21 & 0x20;
    v123 = v21 & 0x100;
    v124 = v21 & 0x200;
    v50 = v21;
    v51 = v119;
    v126 = v50 & 4;
    v52 = (char *)&v146 + 12;
    v132 = ~(DWORD1(v146) - 1);
    v53 = (char *)&v150 + 12;
    while ( 1 )
    {
      v142 = v53 - 4;
      v54 = v52 - 1;
      v120 = v47 - 1;
      v143 = v54;
      v55 = *((_DWORD *)v53 - 4);
      v127 = *((_DWORD *)v53 - 1);
      v56 = (unsigned __int8)*v54;
      v116 = v55;
      v131 = *(&v164 + v56);
      v129 = v167[v56];
      DWORD1(v146) = v129;
      v133 = *((_BYTE *)&v145 + v56 + 1);
      v57 = *((_DWORD *)&v145 + v56 + 2);
      v141 = *(&v168 + v56);
      v58 = 0;
      v117 = 0;
      v128 = v57;
      do
      {
        v59 = v58;
        if ( v58 )
        {
          if ( v58 == 255 )
          {
            v66 = 1000000;
          }
          else
          {
            v60 = 62500 * (unsigned __int16)v58;
            v61 = v60 - 198967296 * HIWORD(v58);
            v62 = (unsigned int)(62500 * HIWORD(v58)) >> 16;
            v63 = 16 * (v60 - 198967296 * HIWORD(v59));
            v64 = v60 >= 198967296 * HIWORD(v59);
            v65 = v62 + 1;
            if ( !v64 )
              v65 = v62;
            v66 = U64DivU32RoundUp((v61 >> 28) | (16 * v65), v63, 255LL);
            v55 = v116;
          }
        }
        else
        {
          v66 = 0;
        }
        v67 = 0LL;
        v68 = v66;
        if ( v49 )
          v66 = RaisePower((unsigned int)v66, v55, 0LL);
        if ( v135 )
        {
          if ( v66 <= (int)v152 )
          {
            v69 = DWORD2(v152);
            goto LABEL_38;
          }
          if ( v66 < SDWORD1(v152) )
          {
            v66 -= v152;
            v69 = (unsigned int)v153;
LABEL_38:
            v66 = MulFD6((unsigned int)v66, v69);
            goto LABEL_39;
          }
          v66 = MulFD6((unsigned int)(v66 - DWORD1(v152)), HIDWORD(v152)) + 1000000;
        }
LABEL_39:
        if ( v121 )
          v66 = MulFD6((unsigned int)v66, HIDWORD(v150));
        if ( v122 )
          v66 += v151;
        if ( v123 )
        {
          v75 = Log((unsigned int)(7 * v66 + 1000000), v54, v67);
          v66 = DivFD6(v75, *(unsigned int *)(v140 + 1104));
        }
        if ( v66 < 0 )
        {
          v66 = 0;
        }
        else if ( v66 > 1000000 )
        {
          v66 = 1000000;
        }
        v70 = (unsigned int)(1000000 - v66);
        if ( !v124 )
          v70 = (unsigned int)v66;
        if ( v125 )
        {
          if ( (int)v70 > SDWORD1(v138) )
          {
            if ( (int)v70 < SDWORD2(v138) )
            {
              if ( (int)v70 <= 79996 )
              {
                v85 = DivFD6(v70, 9033000LL);
              }
              else
              {
                v83 = DivFD6((unsigned int)(v70 + 160000), 1160000LL);
                v84 = MulFD6(v83, v83);
                v85 = MulFD6(v83, v84);
              }
              v88 = Log(v85, v86, v87);
              v79 = DWORD2(v139) + MulFD6(v88, HIDWORD(v139));
            }
            else
            {
              v80 = DivFD6((unsigned int)(v70 - DWORD2(v138)), (unsigned int)(1000000 - DWORD2(v138)));
              v81 = RaisePower(v80, 2000000LL, 0LL);
              v82 = MulFD6(v81, (unsigned int)(1000000 - DWORD2(v138)));
              v79 = v139 + MulFD6((unsigned int)(DWORD2(v138) + v82), DWORD1(v139));
            }
          }
          else
          {
            v76 = DivFD6(v70, DWORD1(v138));
            v77 = RaisePower((unsigned int)(1000000 - v76), 1500000LL, 0LL);
            v78 = MulFD6((unsigned int)(1000000 - v77), DWORD1(v138));
            v79 = MulFD6(v78, HIDWORD(v138));
          }
          v70 = (unsigned int)((v79 + 50) / 100);
        }
        if ( (int)v70 < 0 )
        {
          v70 = 0LL;
        }
        else if ( (int)v70 > 1000000 )
        {
          v70 = 1000000LL;
        }
        if ( v126 )
          v70 = (unsigned int)RaisePower(v70, v127, 0LL);
        if ( v51 )
        {
          *v51 = MulFD6(v70, 255LL);
          LODWORD(v70) = v68;
          ++v51;
        }
        v71 = 1000000 - v70;
        if ( (v40 & 1) != 0 )
          v71 = v70;
        if ( v141 )
        {
          v89 = 0;
          LODWORD(v90) = -1;
          do
          {
            v90 = (unsigned int)(v90 + 1);
            v91 = v89;
            v89 = *(_DWORD *)(v141 + 4 * v90);
          }
          while ( v71 > v89 );
          v92 = DivFD6((unsigned int)(v71 - v91), (unsigned int)(v89 - v91));
          v72 = ((_DWORD)v90 << 12) + MulFD6(v92, 4095LL);
        }
        else
        {
          v72 = MulFD6((unsigned int)v71, v128);
        }
        v73 = ((v132 & (v72 + v129)) << v133) | MulFD6(v130 & (unsigned int)(v72 + v129), v131);
        if ( v71 > v48 )
        {
          v93 = DivFD6((unsigned int)(v71 - v48), v134);
          v94 = RaisePower(v93, 2000000LL, 0LL);
          v73 |= (unsigned int)MulFD6(v94, 1365LL) << 21;
        }
        v55 = v116;
        v58 = ++v117;
        *v137 = v73;
        v54 = (char *)(v137 + 1);
        v49 = v118;
        ++v137;
      }
      while ( v117 < 256 );
      v47 = v120;
      v53 = v142;
      v52 = v143;
      if ( !v120 )
      {
        v5 = a1;
        result = 256LL;
        v21 = v149;
        v40 = v145;
        v43 = v136;
        break;
      }
    }
  }
  if ( (v21 & 0x300000) == 0x300000 && (_DWORD)result != v43 )
  {
    v95 = *(unsigned __int8 **)(v5 + 7064);
    v96 = v40 & 1;
    *(_WORD *)(v5 + 7056) = v43;
    *(_WORD *)(v5 + 7058) = v43;
    v97 = 127;
    v98 = v95 + 768;
    v99 = v95 + 2304;
    v100 = 127;
    v101 = v95 + 2304;
    v102 = 256LL;
    v103 = (v43 * ((unsigned int)(unsigned __int8)-(v96 != 0) + 65280) + 127) / 0xFF;
    v104 = (unsigned __int8)-(v96 != 0) + 65280 - v103;
    do
    {
      v105 = v100;
      v100 += v103;
      *v101++ = v105 / 0xFF;
      --v102;
    }
    while ( v102 );
    if ( v96 )
    {
      v106 = 4LL;
      v107 = v95 + 2304;
      do
      {
        *v98 = *v107;
        v98[1] = v107[1];
        v98[2] = v107[2];
        v98[3] = v107[3];
        v98[4] = v107[4];
        v98[5] = v107[5];
        v98[6] = v107[6];
        v98 += 8;
        v108 = v107[7];
        v107 += 8;
        *(v98 - 1) = v108;
        --v106;
      }
      while ( v106 );
    }
    else
    {
      v109 = 768;
      do
      {
        v110 = *v95++;
        *(_WORD *)v98 = v99[v110];
        v98 = (_OWORD *)((char *)v98 + 2);
        --v109;
      }
      while ( v109 );
    }
    do
    {
      v111 = v97;
      result = (unsigned int)(-2139062143 * v97);
      v97 += v104;
      *v99++ = v111 / 0xFF;
      --v41;
    }
    while ( v41 );
  }
  return result;
}
