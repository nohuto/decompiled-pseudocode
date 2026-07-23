/*
 * XREFs of LZ4HC_compress_generic @ 0x1405F49BC
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x1405FEF20 (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4HC_compress_generic_dictCtx @ 0x1405F7104 (LZ4HC_compress_generic_dictCtx.c)
 *     LZ4HC_countPattern @ 0x1405FECE4 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1405FEDD0 (LZ4HC_reverseCountPattern.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall LZ4HC_compress_generic(__int64 a1, unsigned int *a2, _BYTE *a3, int *a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // r10d
  int *v8; // r15
  _BYTE *v9; // r13
  unsigned int *v10; // r12
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  unsigned int *v15; // r11
  _BYTE *v16; // r14
  _BYTE *v17; // rcx
  char *v18; // rbx
  unsigned __int64 v19; // r8
  _BYTE *v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  int v23; // esi
  __int64 v24; // r13
  unsigned int v25; // r15d
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  int v28; // r8d
  unsigned int v29; // r9d
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // r11d
  int v34; // edi
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rbx
  _DWORD *v37; // rdx
  _QWORD *v38; // r10
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  unsigned int v43; // ecx
  signed int v46; // ecx
  int v47; // r15d
  unsigned int v48; // esi
  _DWORD *v49; // rdx
  _QWORD *v50; // r8
  _QWORD *v51; // rbx
  _QWORD *v52; // rcx
  _QWORD *v53; // rdx
  unsigned int v56; // ecx
  signed int v59; // ebx
  _QWORD *v60; // r9
  _QWORD *v61; // rdx
  _QWORD *v62; // rcx
  unsigned int v66; // ecx
  unsigned int v68; // r8d
  bool v69; // cf
  unsigned __int64 v70; // r11
  _DWORD *v71; // rbx
  unsigned __int64 v72; // r11
  unsigned __int64 v73; // rdi
  __int64 v74; // r9
  _DWORD *v75; // r11
  __int64 v76; // r8
  __int64 v77; // rcx
  _QWORD *v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // r8
  unsigned int v81; // r11d
  __int64 v82; // rcx
  int v83; // eax
  int v84; // r11d
  unsigned int v85; // eax
  unsigned int v86; // r11d
  unsigned __int64 v87; // rcx
  unsigned int v88; // edi
  unsigned __int64 v89; // rdx
  unsigned int v90; // ecx
  unsigned __int64 v91; // r13
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rbx
  int v94; // r9d
  unsigned __int64 v95; // rax
  int v96; // r15d
  unsigned int *v97; // rbx
  __int64 v98; // r8
  char *v99; // rcx
  __int64 v100; // r9
  unsigned int v101; // edi
  char *v102; // rdx
  unsigned int v103; // esi
  int v104; // r10d
  unsigned int v105; // r12d
  unsigned int v106; // r9d
  char *v107; // r8
  __int64 v108; // r13
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  __int64 v111; // r9
  unsigned int v112; // r13d
  unsigned __int64 v113; // r11
  int v114; // r10d
  int v115; // r12d
  int v116; // ecx
  __int64 v117; // rax
  char *v118; // rdi
  int v119; // r15d
  __int64 v120; // rbx
  int v121; // ecx
  char *v122; // r9
  int v123; // edx
  unsigned __int64 v124; // r10
  unsigned int v125; // eax
  _QWORD *v126; // r10
  _QWORD *v127; // rdx
  _QWORD *v128; // rcx
  char *v129; // rdi
  __int64 v131; // r8
  char *v132; // rcx
  unsigned int v134; // ecx
  int v137; // ecx
  __int64 v138; // rax
  __int64 v139; // r12
  char *v140; // r15
  _QWORD *v141; // rbx
  _QWORD *v142; // rdx
  _QWORD *v143; // r10
  _QWORD *v144; // rcx
  unsigned int v147; // ecx
  signed int v150; // esi
  _QWORD *v151; // rbx
  _QWORD *v152; // rdx
  _QWORD *v153; // rcx
  unsigned int v157; // ecx
  int v159; // edx
  unsigned __int64 v160; // rdi
  int v161; // ecx
  char *v162; // r10
  int v163; // r9d
  unsigned __int64 v164; // rbx
  unsigned int v165; // eax
  __int64 v166; // r9
  char *v167; // rcx
  int v168; // esi
  unsigned int v169; // r15d
  unsigned int v170; // ebx
  unsigned __int64 v171; // rdi
  int v172; // esi
  char *v173; // rbx
  unsigned __int64 v174; // rsi
  __int64 v175; // r9
  __int64 v176; // r8
  __int64 v177; // rcx
  char *v178; // rdx
  unsigned int v179; // eax
  unsigned int v180; // edi
  __int64 v181; // r8
  __int64 v182; // rcx
  unsigned __int64 v183; // rcx
  unsigned int v184; // r15d
  unsigned __int64 v185; // rdx
  unsigned int v186; // ecx
  unsigned __int64 v187; // r12
  int v188; // r8d
  int v189; // ecx
  unsigned __int64 v190; // rcx
  int v191; // r13d
  unsigned int *v192; // r11
  __int64 v193; // rdx
  _QWORD *v194; // r12
  __int64 v195; // rcx
  unsigned int v196; // r13d
  __int64 v197; // r8
  unsigned int v198; // ebx
  int v199; // r10d
  unsigned int v200; // r15d
  unsigned int v201; // r9d
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rcx
  unsigned int v205; // r13d
  __int64 v206; // r9
  unsigned int v207; // r14d
  int v208; // ecx
  int v209; // r11d
  _DWORD *v210; // rbx
  int v211; // esi
  __int64 v212; // r11
  unsigned int v213; // ecx
  _DWORD *v214; // r9
  int v215; // edx
  char *v216; // r10
  unsigned int v217; // eax
  _BYTE *v218; // rdx
  _QWORD *v219; // r10
  _QWORD *v220; // rdx
  _QWORD *v221; // rcx
  unsigned int v224; // ecx
  int v227; // ecx
  bool v228; // cc
  unsigned int v229; // r11d
  _DWORD *v230; // rsi
  _QWORD *v231; // r11
  _QWORD *v232; // rdx
  _QWORD *v233; // r10
  _QWORD *v234; // rcx
  unsigned int v237; // ecx
  signed int v240; // ebx
  _QWORD *v241; // r11
  _QWORD *v242; // rdx
  _QWORD *v243; // rcx
  unsigned int v247; // ecx
  int v249; // r8d
  __int64 v250; // r11
  int v251; // ecx
  _DWORD *v252; // r10
  int v253; // edx
  char *v254; // rsi
  unsigned int v255; // eax
  int v256; // ebx
  __int64 v257; // rax
  _BYTE *v258; // rdx
  unsigned int v259; // r12d
  unsigned __int64 v260; // rsi
  unsigned int v261; // ebx
  unsigned __int64 v262; // rbx
  int v263; // eax
  int v264; // r15d
  _DWORD *v265; // rbx
  unsigned __int64 v266; // r11
  unsigned __int64 v267; // rsi
  __int64 v268; // r9
  _DWORD *v269; // r11
  __int64 v270; // r8
  __int64 v271; // rcx
  _DWORD *v272; // rdx
  unsigned int v273; // eax
  _DWORD *v274; // r8
  unsigned int v275; // r11d
  __int64 v276; // r8
  __int64 v277; // rcx
  int v278; // eax
  int v279; // r11d
  unsigned __int64 v280; // rcx
  unsigned int v281; // esi
  unsigned __int64 v282; // rdx
  unsigned int v283; // ecx
  unsigned __int64 v284; // rcx
  int v285; // ecx
  _BYTE *v286; // r15
  _BYTE *v287; // r8
  char *v288; // r10
  _BYTE *v289; // r14
  unsigned __int64 v290; // r12
  unsigned __int64 v291; // r13
  unsigned __int128 v292; // rax
  _QWORD *v293; // rcx
  _WORD *v294; // r14
  unsigned __int64 v295; // rcx
  char v296; // al
  unsigned __int64 v297; // rcx
  unsigned __int64 v298; // rdx
  _BYTE *v299; // r14
  int v300; // ecx
  _BYTE *v301; // r8
  char *v302; // r10
  _BYTE *v303; // r14
  unsigned __int64 v304; // r12
  unsigned __int64 v305; // r13
  unsigned __int128 v306; // rax
  _QWORD *v307; // rcx
  _WORD *v308; // r14
  unsigned __int64 v309; // rcx
  char v310; // al
  unsigned __int64 v311; // rcx
  unsigned __int64 v312; // rdx
  _BYTE *v313; // r14
  unsigned __int64 v314; // r11
  char *v315; // rbx
  char *v316; // r13
  char *v317; // r9
  unsigned __int64 v318; // rsi
  _BYTE *v319; // r14
  unsigned __int64 v320; // r12
  unsigned __int128 v321; // rax
  _QWORD *v322; // rcx
  _WORD *v323; // r14
  _BYTE *v324; // r14
  unsigned __int64 v325; // rcx
  char v326; // al
  unsigned __int64 v327; // rcx
  unsigned __int64 v328; // rdx
  _BYTE *v329; // r14
  char *v330; // r13
  char *v331; // r9
  unsigned __int64 v332; // rsi
  _BYTE *v333; // r14
  unsigned __int64 v334; // r12
  unsigned __int128 v335; // rax
  _QWORD *v336; // rcx
  _WORD *v337; // r14
  unsigned __int64 v338; // rcx
  char v339; // al
  unsigned __int64 v340; // rcx
  unsigned __int64 v341; // rdx
  _BYTE *v342; // r14
  unsigned __int64 v343; // rcx
  _BYTE *v344; // r12
  char *v345; // r13
  unsigned __int64 v346; // rdi
  _BYTE *v347; // r14
  unsigned __int64 v348; // rsi
  unsigned __int128 v349; // rax
  _QWORD *v350; // rcx
  _WORD *v351; // r14
  unsigned __int64 v352; // rcx
  char v353; // al
  unsigned __int64 v354; // rcx
  unsigned __int64 v355; // rdx
  _BYTE *v356; // r14
  unsigned __int64 v357; // rdi
  unsigned __int64 v358; // r8
  _BYTE *v359; // r14
  unsigned __int64 v360; // rsi
  unsigned __int128 v361; // rax
  _QWORD *v362; // rcx
  __int64 v363; // r11
  _WORD *v364; // r14
  unsigned __int64 v365; // rcx
  char v366; // al
  unsigned __int64 v367; // rcx
  unsigned __int64 v368; // rdx
  _BYTE *v369; // r14
  size_t v370; // rbx
  _BYTE *v371; // r8
  int v372; // r14d
  int v373; // esi
  size_t v374; // rdi
  _BYTE *v375; // r14
  unsigned __int128 v376; // rax
  int v377; // r14d
  unsigned int v379; // [rsp+40h] [rbp-C0h]
  int v380; // [rsp+40h] [rbp-C0h]
  int v381; // [rsp+40h] [rbp-C0h]
  unsigned int v382; // [rsp+44h] [rbp-BCh]
  unsigned int v383; // [rsp+44h] [rbp-BCh]
  int v384; // [rsp+48h] [rbp-B8h]
  int v385; // [rsp+48h] [rbp-B8h]
  unsigned int v386; // [rsp+48h] [rbp-B8h]
  unsigned int v387; // [rsp+4Ch] [rbp-B4h]
  unsigned int v388; // [rsp+4Ch] [rbp-B4h]
  unsigned int v389; // [rsp+50h] [rbp-B0h]
  int v390; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v391; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v392; // [rsp+60h] [rbp-A0h]
  unsigned int v393; // [rsp+68h] [rbp-98h]
  unsigned int v394; // [rsp+68h] [rbp-98h]
  unsigned int v395; // [rsp+68h] [rbp-98h]
  char *v396; // [rsp+70h] [rbp-90h]
  unsigned __int64 v397; // [rsp+70h] [rbp-90h]
  unsigned int v398; // [rsp+78h] [rbp-88h]
  unsigned int v399; // [rsp+78h] [rbp-88h]
  unsigned int v400; // [rsp+78h] [rbp-88h]
  unsigned __int64 v401; // [rsp+80h] [rbp-80h]
  unsigned int v402; // [rsp+88h] [rbp-78h]
  char *v403; // [rsp+88h] [rbp-78h]
  _DWORD *v404; // [rsp+88h] [rbp-78h]
  int v405; // [rsp+90h] [rbp-70h]
  unsigned int v406; // [rsp+90h] [rbp-70h]
  unsigned int v407; // [rsp+90h] [rbp-70h]
  unsigned int *v408; // [rsp+98h] [rbp-68h]
  unsigned __int64 v409; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v410; // [rsp+A0h] [rbp-60h]
  _BYTE *v411; // [rsp+A8h] [rbp-58h]
  _QWORD *v412; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v413; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v414; // [rsp+B0h] [rbp-50h]
  _QWORD *v415; // [rsp+B8h] [rbp-48h]
  __int64 v416; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v417; // [rsp+B8h] [rbp-48h]
  int v418; // [rsp+C0h] [rbp-40h]
  int v419; // [rsp+C0h] [rbp-40h]
  _BYTE *v420; // [rsp+C8h] [rbp-38h]
  __int64 v421; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v422; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v423; // [rsp+D8h] [rbp-28h]
  __int64 v424; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v425; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v426; // [rsp+E8h] [rbp-18h]
  int v427; // [rsp+ECh] [rbp-14h]
  __int64 v428; // [rsp+F0h] [rbp-10h]
  char *v429; // [rsp+100h] [rbp+0h]
  size_t v430; // [rsp+100h] [rbp+0h]
  char *v431; // [rsp+108h] [rbp+8h]
  __int64 v432; // [rsp+108h] [rbp+8h]
  unsigned __int64 v433; // [rsp+110h] [rbp+10h]
  unsigned __int64 v434; // [rsp+110h] [rbp+10h]
  int v436; // [rsp+1A8h] [rbp+A8h]
  int v437; // [rsp+1B0h] [rbp+B0h]
  int v439; // [rsp+1C8h] [rbp+C8h]
  int v440; // [rsp+1C8h] [rbp+C8h]
  int v441; // [rsp+1C8h] [rbp+C8h]

  v437 = (int)a3;
  v436 = (int)a2;
  v7 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( !*(_QWORD *)(a1 + 262184) )
  {
    if ( a7 == 2 && a5 < 1 )
      return v7;
    v12 = *v8;
    if ( (unsigned int)v12 > 0x7E000000 )
      return v7;
    *(_QWORD *)(a1 + 0x40000) += v12;
    v13 = a2;
    v14 = *v8;
    v15 = v10;
    v16 = a3;
    v17 = &a3[a5];
    v18 = (char *)v10 + v14;
    v19 = (unsigned __int64)v10 + v14 - 12;
    v20 = v17 - 5;
    if ( a7 != 2 )
      v20 = &v9[a5];
    v411 = v20;
    v391 = (unsigned __int64)v10;
    v408 = v10;
    v429 = (char *)v10 + v14;
    v428 = (__int64)v10 + v14 - 12;
    v392 = (unsigned __int64)(v18 - 5);
    v420 = v9;
    v401 = 0LL;
    v425 = 0LL;
    *v8 = 0;
    if ( (int)v14 >= 13 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v13 > v19 )
          goto LABEL_639;
        v21 = *(unsigned int *)(v11 + 262172);
        v22 = *(_QWORD **)(v11 + 262152);
        v23 = 3;
        v24 = *(unsigned int *)(v11 + 262168);
        v25 = v24 + (_DWORD)v13 - (_DWORD)v22;
        v384 = 3;
        v412 = v22;
        v398 = v25;
        v26 = *(_DWORD *)(v11 + 262172);
        v393 = v26;
        if ( (int)v21 + 0x10000 <= v25 )
          v26 = v25 - 0xFFFF;
        v27 = *v13;
        v405 = 256;
        v422 = *(_QWORD *)(v11 + 262160) + v24 - v21;
        v415 = *(_QWORD **)(v11 + 262160);
        v28 = 0;
        v379 = v26;
        v29 = *(_DWORD *)(a1 + 262176);
        v439 = 0;
        v409 = 0LL;
        v402 = 0;
        if ( v29 < v25 )
        {
          v30 = (_DWORD *)((char *)v22 + v29 - v24);
          do
          {
            v31 = (unsigned __int64)(unsigned int)(-1640531535 * *v30) >> 17;
            v32 = v29 - *(_DWORD *)(a1 + 4 * v31);
            if ( v32 > 0xFFFF )
              LOWORD(v32) = -1;
            v30 = (_DWORD *)((char *)v30 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v29 + 0x20000) = v32;
            *(_DWORD *)(a1 + 4 * v31) = v29++;
          }
          while ( v29 < v25 );
          v23 = 3;
          v28 = 0;
          LODWORD(v21) = v393;
        }
        v11 = a1;
        *(_DWORD *)(a1 + 262176) = v25;
        v33 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v13) >> 17));
        if ( v33 >= v26 )
        {
          while ( 1 )
          {
            v34 = v28;
            if ( v405 <= 0 )
            {
LABEL_100:
              v16 = v420;
              v7 = v402;
              v13 = (unsigned int *)v391;
              v11 = a1;
              break;
            }
            --v405;
            if ( v33 < (unsigned int)v24 )
            {
              v49 = (_DWORD *)((char *)v415 + v33 - (unsigned int)v21);
              if ( v33 <= (int)v24 - 4 && *v49 == v27 )
              {
                v50 = (_QWORD *)(v391 + (unsigned int)v24 - v33);
                v51 = (_QWORD *)(v391 + 4);
                if ( (unsigned __int64)v50 > v392 )
                  v50 = (_QWORD *)v392;
                v52 = (_QWORD *)(v391 + 4);
                v53 = v49 + 1;
                if ( v51 >= (_QWORD *)((char *)v50 - 7) )
                {
                  while ( v52 < (_QWORD *)((char *)v50 - 7) )
                  {
                    if ( *v53 != *v52 )
                    {
                      __asm { tzcnt   rax, r9 }
                      v56 = ((unsigned int)_RAX >> 3) - (_DWORD)v51 + (_DWORD)v52;
                      goto LABEL_71;
                    }
                    ++v52;
LABEL_59:
                    ++v53;
                  }
                  if ( v52 < (_QWORD *)((char *)v50 - 3) && *(_DWORD *)v53 == *(_DWORD *)v52 )
                  {
                    v52 = (_QWORD *)((char *)v52 + 4);
                    v53 = (_QWORD *)((char *)v53 + 4);
                  }
                  if ( v52 < (_QWORD *)((char *)v50 - 1) && *(_WORD *)v53 == *(_WORD *)v52 )
                  {
                    v52 = (_QWORD *)((char *)v52 + 2);
                    v53 = (_QWORD *)((char *)v53 + 2);
                  }
                  if ( v52 < v50 && *(_BYTE *)v53 == *(_BYTE *)v52 )
                    LODWORD(v52) = (_DWORD)v52 + 1;
                  v56 = (_DWORD)v52 - (_DWORD)v51;
                }
                else
                {
                  if ( *v53 == *v51 )
                  {
                    v52 = (_QWORD *)(v391 + 12);
                    goto LABEL_59;
                  }
                  __asm { tzcnt   rcx, r9 }
                  v56 = (unsigned int)_RCX >> 3;
                }
LABEL_71:
                v35 = v391;
                v59 = v56 + 4;
                v60 = (_QWORD *)(v391 + (int)(v56 + 4));
                if ( v60 == v50 && (unsigned __int64)v50 < v392 )
                {
                  v61 = v412;
                  v62 = (_QWORD *)(v391 + v59);
                  if ( (unsigned __int64)v60 >= v392 - 7 )
                    goto LABEL_76;
                  if ( *v412 != *v60 )
                  {
                    __asm { tzcnt   rcx, rdx }
                    v66 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v62 = v60 + 1;
                    v61 = v412 + 1;
LABEL_76:
                    while ( (unsigned __int64)v62 < v392 - 7 )
                    {
                      if ( *v61 != *v62 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v66 = ((unsigned int)_RAX >> 3) - (_DWORD)v60 + (_DWORD)v62;
                        goto LABEL_91;
                      }
                      ++v62;
                      ++v61;
                    }
                    if ( (unsigned __int64)v62 < v392 - 3 && *(_DWORD *)v61 == *(_DWORD *)v62 )
                    {
                      v62 = (_QWORD *)((char *)v62 + 4);
                      v61 = (_QWORD *)((char *)v61 + 4);
                    }
                    if ( (unsigned __int64)v62 < v392 - 1 && *(_WORD *)v61 == *(_WORD *)v62 )
                    {
                      v62 = (_QWORD *)((char *)v62 + 2);
                      v61 = (_QWORD *)((char *)v61 + 2);
                    }
                    if ( (unsigned __int64)v62 < v392 && *(_BYTE *)v61 == *(_BYTE *)v62 )
                      LODWORD(v62) = (_DWORD)v62 + 1;
                    v66 = (_DWORD)v62 - (_DWORD)v60;
                  }
LABEL_91:
                  v35 = v391;
                  v59 += v66;
                }
                v28 = v439;
                if ( v59 > v23 )
                {
                  v384 = v59;
                  v402 = v25 - v33;
                }
              }
              else
              {
                v35 = v391;
              }
              v36 = v392;
            }
            else
            {
              v35 = v391;
              v36 = v392;
              v37 = (_DWORD *)((char *)v412 + v33 - (unsigned int)v24);
              if ( *(_WORD *)(v23 + v391 - 1) == *(_WORD *)((char *)v37 + v23 - 1) && *v37 == v27 )
              {
                v38 = (_QWORD *)(v391 + 4);
                v39 = v37 + 1;
                v40 = (_QWORD *)(v391 + 4);
                if ( v391 + 4 >= v392 - 7 )
                {
                  while ( (unsigned __int64)v40 < v392 - 7 )
                  {
                    if ( *v39 != *v40 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v43 = ((unsigned int)_RAX >> 3) - (_DWORD)v38 + (_DWORD)v40;
                      goto LABEL_41;
                    }
                    ++v40;
LABEL_29:
                    ++v39;
                  }
                  if ( (unsigned __int64)v40 < v392 - 3 && *(_DWORD *)v39 == *(_DWORD *)v40 )
                  {
                    v40 = (_QWORD *)((char *)v40 + 4);
                    v39 = (_QWORD *)((char *)v39 + 4);
                  }
                  if ( (unsigned __int64)v40 < v392 - 1 && *(_WORD *)v39 == *(_WORD *)v40 )
                  {
                    v40 = (_QWORD *)((char *)v40 + 2);
                    v39 = (_QWORD *)((char *)v39 + 2);
                  }
                  if ( (unsigned __int64)v40 < v392 && *(_BYTE *)v39 == *(_BYTE *)v40 )
                    LODWORD(v40) = (_DWORD)v40 + 1;
                  v43 = (_DWORD)v40 - (_DWORD)v38;
                }
                else
                {
                  if ( *v39 == *v38 )
                  {
                    v40 = (_QWORD *)(v391 + 12);
                    goto LABEL_29;
                  }
                  __asm { tzcnt   rcx, r8 }
                  v43 = (unsigned int)_RCX >> 3;
                }
LABEL_41:
                v28 = v439;
                v46 = v43 + 4;
                if ( v46 > v23 )
                {
                  v384 = v46;
                  v402 = v25 - v33;
                }
                v35 = v391;
              }
            }
            v47 = 1;
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v33 + 0x20000) != 1 )
              goto LABEL_97;
            v48 = v33 - 1;
            if ( v28 )
            {
              v439 = v34;
              if ( v34 != 2 )
                goto LABEL_97;
            }
            else
            {
              if ( (_BYTE)v27 != HIBYTE(v27) || (unsigned __int16)v27 != HIWORD(v27) )
              {
                v439 = 1;
LABEL_97:
                v68 = v379;
LABEL_98:
                v33 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v33 + 0x20000);
                goto LABEL_99;
              }
              v439 = 2;
              v409 = (unsigned int)LZ4HC_countPattern(v35 + 4, v36, v27, 0LL) + 4LL;
            }
            v68 = v379;
            if ( v48 < v379 || (unsigned int)v24 - v48 - 1 < 3 )
              goto LABEL_98;
            if ( v48 >= (unsigned int)v24 )
            {
              v47 = 0;
              v71 = (_DWORD *)((char *)v412 + v48 - (unsigned int)v24);
            }
            else
            {
              v71 = (_DWORD *)((char *)v415 + v48 - v393);
            }
            if ( *v71 != v27 )
              goto LABEL_98;
            v72 = v392;
            if ( v47 )
              v72 = v422;
            v73 = (unsigned int)LZ4HC_countPattern(v71 + 1, v72, v27, 0LL) + 4LL;
            if ( v47 )
            {
              if ( (_DWORD *)((char *)v71 + v73) == v75 )
              {
                v76 = v27;
                v77 = 8 * (v73 & 3);
                if ( v77 )
                  v76 = (unsigned int)__ROL4__(v27, v77);
                v73 += (unsigned int)LZ4HC_countPattern(v412, v392, v76, v74);
              }
              v78 = v415;
            }
            else
            {
              v78 = v412;
            }
            v79 = LZ4HC_reverseCountPattern(v71, v78, v27);
            v81 = v79;
            if ( !v47 && (_QWORD *)((char *)v71 - v79) == v412 && v393 < (unsigned int)v24 )
            {
              v82 = 8LL * (-v79 & 3);
              if ( v82 )
                v80 = (unsigned int)__ROL4__(v80, v82);
              v83 = LZ4HC_reverseCountPattern(v422, v415, v80);
              v81 = v83 + v84;
            }
            v68 = v379;
            v85 = v48 - v81;
            v86 = v379;
            if ( v85 > v379 )
              v86 = v85;
            v87 = v73 + v48 - v86;
            if ( v87 < v409 || v73 > v409 )
            {
              if ( (unsigned int)v24 - v86 - 1 < 3 )
              {
                v33 = v24;
              }
              else
              {
                v23 = v384;
                v89 = v409;
                if ( v87 < v409 )
                  v89 = v87;
                if ( v384 < v89 )
                {
                  if ( v391 + v24 - v86 - (_QWORD)v412 > 0xFFFF )
                    goto LABEL_100;
                  v23 = v89;
                  v384 = v89;
                  v402 = v398 - v86;
                }
                v90 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v86 + 0x20000);
                if ( v90 > v86 )
                  goto LABEL_100;
                v33 = v86 - v90;
              }
            }
            else
            {
              v88 = v48 + v73 - v409;
              v33 = v24;
              if ( (unsigned int)v24 - v88 - 1 >= 3 )
                v33 = v88;
            }
LABEL_99:
            v23 = v384;
            v69 = v33 < v68;
            v28 = v439;
            v25 = v398;
            LODWORD(v21) = v393;
            if ( v69 )
              goto LABEL_100;
          }
        }
        v70 = __PAIR64__(v23, v7);
        v423 = __PAIR64__(v23, v7);
        v410 = __PAIR64__(v23, v7);
        if ( v23 < 4 )
        {
          v15 = v408;
          v13 = (unsigned int *)((char *)v13 + 1);
          v20 = v411;
          v7 = 0;
          goto LABEL_103;
        }
        v91 = v391;
        v92 = v391;
        v427 = v23;
LABEL_143:
        v93 = v428;
        v413 = v92;
        while ( 1 )
        {
          v94 = HIDWORD(v410);
          v440 = HIDWORD(v410);
          v95 = SHIDWORD(v410) + v91;
          if ( v95 > v93 )
          {
            v7 = 0;
            v397 = 0LL;
            v172 = 0;
            v171 = 0LL;
          }
          else
          {
            v96 = HIDWORD(v410);
            v385 = HIDWORD(v410);
            v401 = v95 - 2;
            v97 = (unsigned int *)(v95 - 2);
            v98 = *(unsigned int *)(a1 + 262168);
            v99 = *(char **)(a1 + 262152);
            v100 = *(unsigned int *)(a1 + 262172);
            v101 = v95 - 2 + *(_DWORD *)(a1 + 262168) - (_DWORD)v99;
            v403 = v99;
            v382 = *(_DWORD *)(a1 + 262168);
            v394 = v101;
            v406 = *(_DWORD *)(a1 + 262172);
            if ( (int)v100 + 0x10000 <= v101 )
              v389 = v101 - 0xFFFF;
            else
              v389 = *(_DWORD *)(a1 + 262172);
            v102 = *(char **)(a1 + 262160);
            v103 = *v97;
            v396 = v102;
            v431 = &v102[v98 - v100];
            v104 = (_DWORD)v97 - v391;
            v418 = 256;
            v105 = 0;
            v380 = 0;
            v433 = 0LL;
            v399 = 0;
            v106 = *(_DWORD *)(a1 + 262176);
            v387 = *v97;
            if ( v106 >= v101 )
            {
              v108 = a1;
            }
            else
            {
              v107 = &v99[v106 - v98];
              v108 = a1;
              do
              {
                v109 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v107) >> 17;
                v110 = v106 - *(_DWORD *)(a1 + 4 * v109);
                if ( v110 > 0xFFFF )
                  LOWORD(v110) = -1;
                ++v107;
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v106 + 0x20000) = v110;
                *(_DWORD *)(a1 + 4 * v109) = v106++;
              }
              while ( v106 < v101 );
              v70 = v423;
              LODWORD(v98) = v382;
              v96 = HIDWORD(v410);
              v102 = v396;
            }
            *(_DWORD *)(v108 + 262176) = v101;
            v111 = v104;
            v416 = v104;
            v112 = *(_DWORD *)(v108 + 4 * ((unsigned __int64)(-1640531535 * *v97) >> 17));
            if ( v112 >= v389 )
            {
              v113 = v95 - 2;
              while ( 1 )
              {
                v114 = v380;
                v115 = 0;
                v116 = v380;
                if ( v418 <= 0 )
                {
LABEL_270:
                  v70 = v423;
                  v16 = v420;
                  v105 = v399;
                  break;
                }
                --v418;
                if ( v112 < (unsigned int)v98 )
                {
                  v138 = v112 - v406;
                  v139 = (unsigned int)v138;
                  v140 = &v102[v138];
                  if ( v112 <= (int)v98 - 4 && *(_DWORD *)v140 == v103 )
                  {
                    v141 = (_QWORD *)(v113 + 4);
                    v142 = v140 + 4;
                    v143 = (_QWORD *)(v113 + (unsigned int)v98 - v112);
                    v144 = (_QWORD *)(v113 + 4);
                    if ( (unsigned __int64)v143 > v392 )
                      v143 = (_QWORD *)v392;
                    if ( v141 >= (_QWORD *)((char *)v143 - 7) )
                    {
                      while ( v144 < (_QWORD *)((char *)v143 - 7) )
                      {
                        if ( *v142 != *v144 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v147 = ((unsigned int)_RAX >> 3) - (_DWORD)v141 + (_DWORD)v144;
                          goto LABEL_219;
                        }
                        ++v144;
LABEL_207:
                        ++v142;
                      }
                      if ( v144 < (_QWORD *)((char *)v143 - 3) && *(_DWORD *)v142 == *(_DWORD *)v144 )
                      {
                        v144 = (_QWORD *)((char *)v144 + 4);
                        v142 = (_QWORD *)((char *)v142 + 4);
                      }
                      if ( v144 < (_QWORD *)((char *)v143 - 1) && *(_WORD *)v142 == *(_WORD *)v144 )
                      {
                        v144 = (_QWORD *)((char *)v144 + 2);
                        v142 = (_QWORD *)((char *)v142 + 2);
                      }
                      if ( v144 < v143 && *(_BYTE *)v142 == *(_BYTE *)v144 )
                        LODWORD(v144) = (_DWORD)v144 + 1;
                      v147 = (_DWORD)v144 - (_DWORD)v141;
                    }
                    else
                    {
                      if ( *v142 == *v141 )
                      {
                        v144 = (_QWORD *)(v113 + 12);
                        goto LABEL_207;
                      }
                      __asm { tzcnt   rcx, r8 }
                      v147 = (unsigned int)_RCX >> 3;
                    }
LABEL_219:
                    v150 = v147 + 4;
                    v151 = (_QWORD *)(v113 + (int)(v147 + 4));
                    if ( v151 == v143 && (unsigned __int64)v143 < v392 )
                    {
                      v152 = v403;
                      v153 = (_QWORD *)(v113 + v150);
                      if ( (unsigned __int64)v151 >= v392 - 7 )
                        goto LABEL_224;
                      if ( *v151 != *(_QWORD *)v403 )
                      {
                        __asm { tzcnt   rcx, rcx }
                        v157 = (unsigned int)_RCX >> 3;
                      }
                      else
                      {
                        v153 = v151 + 1;
                        v152 = v403 + 8;
LABEL_224:
                        while ( (unsigned __int64)v153 < v392 - 7 )
                        {
                          if ( *v152 != *v153 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v157 = ((unsigned int)_RAX >> 3) - (_DWORD)v151 + (_DWORD)v153;
                            goto LABEL_239;
                          }
                          ++v153;
                          ++v152;
                        }
                        if ( (unsigned __int64)v153 < v392 - 3 && *(_DWORD *)v152 == *(_DWORD *)v153 )
                        {
                          v153 = (_QWORD *)((char *)v153 + 4);
                          v152 = (_QWORD *)((char *)v152 + 4);
                        }
                        if ( (unsigned __int64)v153 < v392 - 1 && *(_WORD *)v152 == *(_WORD *)v153 )
                        {
                          v153 = (_QWORD *)((char *)v153 + 2);
                          v152 = (_QWORD *)((char *)v152 + 2);
                        }
                        if ( (unsigned __int64)v153 < v392 && *(_BYTE *)v152 == *(_BYTE *)v153 )
                          LODWORD(v153) = (_DWORD)v153 + 1;
                        v157 = (_DWORD)v153 - (_DWORD)v151;
                      }
LABEL_239:
                      v150 += v157;
                    }
                    if ( v416 )
                    {
                      v159 = 0;
                      v160 = 0LL;
                      if ( (__int64)(v391 - v113) <= v396 - v140 )
                        v161 = (_DWORD)v396 - (_DWORD)v140;
                      else
                        v161 = v391 - v113;
                      v162 = v140 - 4;
                      v163 = -v161;
                      v164 = v113 - (_QWORD)v140;
                      while ( v163 > 3 )
                      {
                        if ( *(_DWORD *)v162 != *(_DWORD *)&v162[v164] )
                        {
                          v101 = v394;
                          v115 = 0;
                          _BitScanReverse(&v165, *(_DWORD *)v162 ^ *(_DWORD *)&v162[v164]);
                          v159 -= (31 - v165) >> 3;
                          goto LABEL_255;
                        }
                        v159 -= 4;
                        v163 -= 4;
                        v160 -= 4LL;
                        v162 -= 4;
                      }
                      v166 = v161;
                      if ( (__int64)v160 > v161 )
                      {
                        v167 = &v140[v160 - 1];
                        do
                        {
                          if ( v167[SHIDWORD(v410) - (_QWORD)v396 - v139 - 2 + v391] != *v167 )
                            break;
                          --v167;
                          --v159;
                        }
                        while ( (__int64)&v167[1LL - (_QWORD)v396 - v139] > v166 );
                      }
                      v101 = v394;
                      v115 = 0;
                    }
                    else
                    {
                      v115 = 0;
                      v159 = 0;
                    }
LABEL_255:
                    v116 = v380;
                    v168 = v150 - v159;
                    v114 = v380;
                    LODWORD(v98) = v382;
                    if ( v168 > v385 )
                    {
                      v385 = v168;
                      v401 = v113 + v159;
                      v399 = v101 - v112;
                    }
                    goto LABEL_258;
                  }
                  v129 = (char *)v392;
                }
                else
                {
                  v117 = v112 - (unsigned int)v98;
                  v118 = &v403[v117];
                  if ( *(_WORD *)(v96 + v391 - 1) != *(_WORD *)&v403[v117 - v111 - 1 + v96] || *(_DWORD *)v118 != v387 )
                  {
                    v116 = v380;
LABEL_258:
                    v103 = v387;
                    v129 = (char *)v392;
                    goto LABEL_262;
                  }
                  v119 = 0;
                  if ( v111 )
                  {
                    v120 = 0LL;
                    if ( (__int64)(v391 - v113) <= -v117 )
                      v121 = v98 - v112;
                    else
                      v121 = v391 - v113;
                    v122 = v118 - 4;
                    v123 = -v121;
                    v124 = v113 - (_QWORD)v118;
                    while ( v123 > 3 )
                    {
                      if ( *(_DWORD *)v122 != *(_DWORD *)&v122[v124] )
                      {
                        _BitScanReverse(&v125, *(_DWORD *)v122 ^ *(_DWORD *)&v122[v124]);
                        v119 -= (31 - v125) >> 3;
                        goto LABEL_170;
                      }
                      v119 -= 4;
                      v123 -= 4;
                      v120 -= 4LL;
                      v122 -= 4;
                    }
                    v131 = v121;
                    if ( v120 > v121 )
                    {
                      v132 = &v403[v120 - 1 + (unsigned int)v117];
                      do
                      {
                        if ( v132[v391 - 2 + SHIDWORD(v410) - (_QWORD)v403 - (unsigned int)v117] != *v132 )
                          break;
                        --v132;
                        --v119;
                      }
                      while ( (__int64)&v132[1LL - (_QWORD)v403 - (unsigned int)v117] > v131 );
                    }
                  }
LABEL_170:
                  v126 = (_QWORD *)(v113 + 4);
                  v127 = v118 + 4;
                  v128 = (_QWORD *)(v113 + 4);
                  v129 = (char *)v392;
                  if ( v113 + 4 >= v392 - 7 )
                  {
                    while ( (unsigned __int64)v128 < v392 - 7 )
                    {
                      if ( *v127 != *v128 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v134 = ((unsigned int)_RAX >> 3) - (_DWORD)v126 + (_DWORD)v128;
                        goto LABEL_194;
                      }
                      ++v128;
LABEL_182:
                      ++v127;
                    }
                    if ( (unsigned __int64)v128 < v392 - 3 && *(_DWORD *)v127 == *(_DWORD *)v128 )
                    {
                      v128 = (_QWORD *)((char *)v128 + 4);
                      v127 = (_QWORD *)((char *)v127 + 4);
                    }
                    if ( (unsigned __int64)v128 < v392 - 1 && *(_WORD *)v127 == *(_WORD *)v128 )
                    {
                      v128 = (_QWORD *)((char *)v128 + 2);
                      v127 = (_QWORD *)((char *)v127 + 2);
                    }
                    if ( (unsigned __int64)v128 < v392 && *(_BYTE *)v127 == *(_BYTE *)v128 )
                      LODWORD(v128) = (_DWORD)v128 + 1;
                    v134 = (_DWORD)v128 - (_DWORD)v126;
                  }
                  else
                  {
                    if ( *v127 == *v126 )
                    {
                      v128 = (_QWORD *)(v113 + 12);
                      goto LABEL_182;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v134 = (unsigned int)_RCX >> 3;
                  }
LABEL_194:
                  LODWORD(v98) = v382;
                  v103 = v387;
                  v137 = v134 - v119 + 4;
                  if ( v137 <= v385 )
                  {
                    v116 = v380;
                    v114 = v380;
                    goto LABEL_262;
                  }
                  v385 = v137;
                  v116 = v380;
                  v114 = v380;
                  v401 = v113 + v119;
                  v399 = v394 - v112;
                }
                v115 = 0;
LABEL_262:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000) != 1 )
                  goto LABEL_267;
                v169 = v112 - 1;
                if ( v114 )
                {
                  v380 = v116;
                  if ( v116 != 2 )
                    goto LABEL_267;
                }
                else
                {
                  if ( (_BYTE)v103 != HIBYTE(v103) || (unsigned __int16)v103 != HIWORD(v103) )
                  {
                    LODWORD(v98) = v382;
                    v380 = 1;
LABEL_267:
                    v170 = v389;
LABEL_268:
                    v112 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000);
                    goto LABEL_269;
                  }
                  v380 = 2;
                  v433 = (unsigned int)LZ4HC_countPattern(v113 + 4, v129, v103, 1LL) + 4LL;
                }
                v170 = v389;
                LODWORD(v98) = v382;
                if ( v169 < v389 || v382 - v112 < 3 )
                  goto LABEL_268;
                if ( v169 >= v382 )
                {
                  v173 = &v403[v169 - v382];
                }
                else
                {
                  v115 = 1;
                  v173 = &v396[v169 - v406];
                }
                if ( *(_DWORD *)v173 != v103 )
                  goto LABEL_267;
                if ( v115 )
                  v129 = v431;
                v174 = (unsigned int)LZ4HC_countPattern(v173 + 4, v129, v103, 1LL) + 4LL;
                if ( v115 )
                {
                  if ( &v173[v174] == v129 )
                  {
                    v176 = v387;
                    v177 = 8 * (v174 & 3);
                    if ( v177 )
                      v176 = (unsigned int)__ROL4__(v387, v177);
                    v174 += (unsigned int)LZ4HC_countPattern(v403, v392, v176, v175);
                  }
                  v178 = v396;
                }
                else
                {
                  v178 = v403;
                }
                v179 = LZ4HC_reverseCountPattern(v173, v178, v387);
                LODWORD(v98) = v382;
                v180 = v179;
                if ( !v115 && &v173[-v179] == v403 && v406 < v382 )
                {
                  v181 = v387;
                  v182 = 8LL * (-v179 & 3);
                  if ( v182 )
                    v181 = (unsigned int)__ROL4__(v387, v182);
                  v180 = LZ4HC_reverseCountPattern(v431, v396, v181) + v179;
                  LODWORD(v98) = v382;
                }
                v170 = v389;
                v112 = v389;
                if ( v169 - v180 > v389 )
                  v112 = v169 - v180;
                v183 = v174 + v169 - v112;
                if ( v183 < v433 || v174 > v433 )
                {
                  if ( (unsigned int)v98 - v112 - 1 < 3 )
                  {
                    v112 = v98;
                  }
                  else if ( !v416 )
                  {
                    v96 = v385;
                    v185 = v433;
                    if ( v183 < v433 )
                      v185 = v183;
                    if ( v385 < v185 )
                    {
                      if ( v113 + (unsigned int)v98 - (unsigned __int64)v112 - (_QWORD)v403 > 0xFFFF )
                        goto LABEL_270;
                      v96 = v185;
                      v385 = v185;
                      v399 = v394 - v112;
                      v401 = v113;
                    }
                    v186 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000);
                    if ( v186 > v112 )
                      goto LABEL_270;
                    v112 -= v186;
                  }
                }
                else
                {
                  v184 = v174 + v169 - v433;
                  v112 = v98;
                  if ( (unsigned int)v98 - v184 - 1 >= 3 )
                    v112 = v184;
                }
LABEL_269:
                v103 = v387;
                v96 = v385;
                v101 = v394;
                v102 = v396;
                v111 = v416;
                if ( v112 < v170 )
                  goto LABEL_270;
              }
            }
            v92 = v413;
            v7 = 0;
            v94 = HIDWORD(v410);
            v91 = v391;
            v93 = v428;
            v171 = __PAIR64__(v96, v105);
            v397 = __PAIR64__(v96, v105);
            v172 = v96;
          }
          v417 = v171;
          if ( v172 <= v94 )
          {
            v343 = v391;
            v15 = v408;
            v286 = v16;
            v344 = v16;
            v345 = v16;
            v346 = v391 - (_QWORD)v408;
            v347 = v16 + 1;
            if ( a7 )
            {
              v20 = v411;
              if ( &v347[v346 / 0xFF + 8 + v346] > v411 )
                goto LABEL_618;
            }
            if ( v346 < 0xF )
            {
              *v344 = 16 * v346;
            }
            else
            {
              v348 = v346 - 15;
              *v344 = -16;
              if ( v346 - 15 >= 0xFF )
              {
                v349 = v348 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v349) = -1;
                memset_0(v347, SDWORD2(v349), v348 / 0xFF);
                v94 = HIDWORD(v410);
                v347 += v348 / 0xFF;
                v15 = v408;
                LOBYTE(v348) = v348 / 0xFF + v348;
                v7 = 0;
              }
              *v347++ = v348;
            }
            v350 = v347;
            do
            {
              *v350 = *(_QWORD *)((char *)v350 + (char *)v15 - v347);
              ++v350;
            }
            while ( v350 < (_QWORD *)&v347[v346] );
            v351 = &v347[v346];
            v20 = v411;
            v352 = v94 - 4LL;
            *v351 = v410;
            v16 = v351 + 1;
            v420 = v16;
            if ( a7 && &v16[v352 / 0xFF + 6] > v411 )
              goto LABEL_617;
            v353 = *v345;
            if ( v352 < 0xF )
            {
              *v344 = v352 + v353;
            }
            else
            {
              v354 = v94 - 19LL;
              *v344 = v353 + 15;
              if ( v354 >= 0x1FE )
              {
                v355 = v354 / 0x1FE;
                v354 %= 0x1FEuLL;
                do
                {
                  *v16 = -1;
                  v356 = v16 + 1;
                  *v356 = -1;
                  v16 = v356 + 1;
                  --v355;
                }
                while ( v355 );
              }
              if ( v354 >= 0xFF )
              {
                LOBYTE(v354) = v354 + 1;
                *v16++ = -1;
              }
              *v16++ = v354;
              v420 = v16;
            }
            v13 = (unsigned int *)(v94 + v391);
            goto LABEL_612;
          }
          v187 = v401;
          if ( v92 < v91 && v401 < v91 + v427 )
          {
            LOWORD(v410) = v70;
            v91 = v92;
            v94 = HIDWORD(v70);
            v440 = HIDWORD(v70);
            v391 = v92;
          }
          if ( (__int64)(v401 - v91) >= 3 )
            break;
          v91 = v401;
          v391 = v401;
          v410 = v171;
        }
        while ( 1 )
        {
          if ( (__int64)(v187 - v91) < 18 )
          {
            v188 = v94;
            if ( v94 > 18 )
              v188 = 18;
            if ( v91 + v188 > v187 + v172 - 4LL )
              v188 = v172 + v187 - v91 - 4;
            v189 = v188 + v91 - v187;
            if ( v189 > 0 )
            {
              v187 += v189;
              v172 -= v189;
              v401 = v187;
              HIDWORD(v397) = v172;
              v171 = v397;
              v417 = v397;
            }
          }
          v190 = v187 + v172;
          if ( v190 > v93 )
          {
            v263 = 0;
            v262 = 0LL;
          }
          else
          {
            v191 = v190 - 3;
            v425 = v190 - 3;
            v192 = (unsigned int *)(v190 - 3);
            v434 = v190 - 3;
            v381 = v172;
            v193 = *(unsigned int *)(a1 + 262172);
            v194 = *(_QWORD **)(a1 + 262152);
            v195 = *(unsigned int *)(a1 + 262168);
            v196 = v195 + v191 - (_DWORD)v194;
            v404 = v194;
            v407 = *(_DWORD *)(a1 + 262168);
            v395 = v196;
            v383 = *(_DWORD *)(a1 + 262172);
            if ( (int)v193 + 0x10000 <= v196 )
              v386 = v196 - 0xFFFF;
            else
              v386 = *(_DWORD *)(a1 + 262172);
            v197 = *(_QWORD *)(a1 + 262160);
            v198 = *v192;
            v426 = v197 + v195 - v193;
            v199 = (_DWORD)v192 - v401;
            v419 = 256;
            v200 = 0;
            v390 = 0;
            v414 = 0LL;
            v400 = 0;
            v201 = *(_DWORD *)(a1 + 262176);
            v421 = v197;
            v388 = *v192;
            if ( v201 < v196 )
            {
              v202 = (_DWORD *)((char *)v194 + v201 - v195);
              do
              {
                v203 = (unsigned __int64)(unsigned int)(-1640531535 * *v202) >> 17;
                v204 = v201 - *(_DWORD *)(a1 + 4 * v203);
                if ( v204 > 0xFFFF )
                  LOWORD(v204) = -1;
                v202 = (_DWORD *)((char *)v202 + 1);
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v201 + 0x20000) = v204;
                *(_DWORD *)(a1 + 4 * v203) = v201++;
              }
              while ( v201 < v196 );
              v192 = (unsigned int *)v434;
              v198 = v388;
              LODWORD(v193) = v383;
              v197 = v421;
            }
            *(_DWORD *)(a1 + 262176) = v196;
            v205 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(-1640531535 * *v192) >> 17));
            v206 = v199;
            v424 = v199;
            if ( v205 >= v386 )
            {
              v207 = v407;
              v432 = v172;
              while ( 1 )
              {
                v208 = v390;
                if ( v419 <= 0 )
                {
LABEL_451:
                  v171 = v417;
                  v16 = v420;
                  v172 = HIDWORD(v397);
                  v200 = v400;
                  break;
                }
                --v419;
                if ( v205 < v207 )
                {
                  v230 = (_DWORD *)(v197 + v205 - (unsigned int)v193);
                  if ( v205 > v207 - 4 || *v230 != v198 )
                    goto LABEL_442;
                  v231 = (_QWORD *)(v434 + 4);
                  v232 = v230 + 1;
                  v233 = (_QWORD *)(v434 + v207 - v205);
                  v234 = (_QWORD *)(v434 + 4);
                  if ( (unsigned __int64)v233 > v392 )
                    v233 = (_QWORD *)v392;
                  if ( v231 >= (_QWORD *)((char *)v233 - 7) )
                  {
                    while ( v234 < (_QWORD *)((char *)v233 - 7) )
                    {
                      if ( *v232 != *v234 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v237 = ((unsigned int)_RAX >> 3) - (_DWORD)v231 + (_DWORD)v234;
                        goto LABEL_401;
                      }
                      ++v234;
LABEL_389:
                      ++v232;
                    }
                    if ( v234 < (_QWORD *)((char *)v233 - 3) && *(_DWORD *)v232 == *(_DWORD *)v234 )
                    {
                      v234 = (_QWORD *)((char *)v234 + 4);
                      v232 = (_QWORD *)((char *)v232 + 4);
                    }
                    if ( v234 < (_QWORD *)((char *)v233 - 1) && *(_WORD *)v232 == *(_WORD *)v234 )
                    {
                      v234 = (_QWORD *)((char *)v234 + 2);
                      v232 = (_QWORD *)((char *)v232 + 2);
                    }
                    if ( v234 < v233 && *(_BYTE *)v232 == *(_BYTE *)v234 )
                      LODWORD(v234) = (_DWORD)v234 + 1;
                    v237 = (_DWORD)v234 - (_DWORD)v231;
                  }
                  else
                  {
                    if ( *v232 == *v231 )
                    {
                      v234 = (_QWORD *)(v434 + 12);
                      goto LABEL_389;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v237 = (unsigned int)_RCX >> 3;
                  }
LABEL_401:
                  v240 = v237 + 4;
                  v241 = (_QWORD *)(v434 + (int)(v237 + 4));
                  if ( v241 == v233 && (unsigned __int64)v233 < v392 )
                  {
                    v242 = v194;
                    v243 = (_QWORD *)(v434 + v240);
                    if ( (unsigned __int64)v241 >= v392 - 7 )
                      goto LABEL_406;
                    if ( *v194 != *v241 )
                    {
                      __asm { tzcnt   rcx, rdx }
                      v247 = (unsigned int)_RCX >> 3;
                    }
                    else
                    {
                      v243 = v241 + 1;
                      v242 = v194 + 1;
LABEL_406:
                      while ( (unsigned __int64)v243 < v392 - 7 )
                      {
                        if ( *v242 != *v243 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v247 = ((unsigned int)_RAX >> 3) - (_DWORD)v241 + (_DWORD)v243;
                          goto LABEL_421;
                        }
                        ++v243;
                        ++v242;
                      }
                      if ( (unsigned __int64)v243 < v392 - 3 && *(_DWORD *)v242 == *(_DWORD *)v243 )
                      {
                        v243 = (_QWORD *)((char *)v243 + 4);
                        v242 = (_QWORD *)((char *)v242 + 4);
                      }
                      if ( (unsigned __int64)v243 < v392 - 1 && *(_WORD *)v242 == *(_WORD *)v243 )
                      {
                        v243 = (_QWORD *)((char *)v243 + 2);
                        v242 = (_QWORD *)((char *)v242 + 2);
                      }
                      if ( (unsigned __int64)v243 < v392 && *(_BYTE *)v242 == *(_BYTE *)v243 )
                        LODWORD(v243) = (_DWORD)v243 + 1;
                      v247 = (_DWORD)v243 - (_DWORD)v241;
                    }
LABEL_421:
                    v240 += v247;
                  }
                  v249 = 0;
                  if ( v424 )
                  {
                    v250 = 0LL;
                    if ( (__int64)(v401 - v434) <= v421 - (__int64)v230 )
                      v251 = v421 - (_DWORD)v230;
                    else
                      v251 = v401 - v434;
                    v252 = (_DWORD *)(v434 - 4);
                    v253 = -v251;
                    v254 = (char *)v230 - v434;
                    while ( v253 > 3 )
                    {
                      if ( *v252 != *(_DWORD *)((char *)v252 + (_QWORD)v254) )
                      {
                        _BitScanReverse(&v255, *v252 ^ *(_DWORD *)((char *)v252 + (_QWORD)v254));
                        v249 -= (31 - v255) >> 3;
                        goto LABEL_431;
                      }
                      v249 -= 4;
                      v253 -= 4;
                      v250 -= 4LL;
                      --v252;
                    }
                    if ( v250 <= v251 )
                    {
                      v229 = v383;
                    }
                    else
                    {
                      v257 = v250 + v432;
                      v229 = v383;
                      v258 = (_BYTE *)(v257 + v401 - 4);
                      do
                      {
                        if ( *v258 != v258[v421 + 3 + v205 - v383 - v432 - v401] )
                          break;
                        --v258;
                        --v249;
                      }
                      while ( (__int64)&v258[4 - v432 - v401] > v251 );
                      v207 = v407;
                    }
                  }
                  else
                  {
LABEL_431:
                    v229 = v383;
                  }
                  v256 = v240 - v249;
                  v208 = v390;
                  if ( v256 > v381 )
                  {
                    v381 = v256;
                    v400 = v395 - v205;
                    v425 = v434 + v249;
                  }
                  v198 = v388;
                }
                else
                {
                  v209 = v381;
                  v210 = (_DWORD *)((char *)v194 + v205 - v207);
                  if ( *(_WORD *)(v381 + v401 - 1) != *(_WORD *)((char *)v210 + v381 - v206 - 1) || *v210 != v388 )
                  {
                    v198 = v388;
LABEL_442:
                    v229 = v383;
                    goto LABEL_443;
                  }
                  v211 = 0;
                  if ( v206 )
                  {
                    v212 = 0LL;
                    if ( (__int64)(v401 - v434) <= -(__int64)(v205 - v207) )
                      v213 = v207 - v205;
                    else
                      v213 = v401 - v434;
                    v214 = (_DWORD *)(v434 - 4);
                    v215 = -v213;
                    v216 = (char *)v210 - v434;
                    while ( v215 > 3 )
                    {
                      if ( *v214 != *(_DWORD *)((char *)v214 + (_QWORD)v216) )
                      {
                        _BitScanReverse(&v217, *v214 ^ *(_DWORD *)((char *)v214 + (_QWORD)v216));
                        v211 -= (31 - v217) >> 3;
                        goto LABEL_355;
                      }
                      v211 -= 4;
                      v215 -= 4;
                      v212 -= 4LL;
                      --v214;
                    }
                    if ( v212 > (int)v213 )
                    {
                      v218 = (_BYTE *)(v212 + v432 + v401 - 4);
                      do
                      {
                        if ( *v218 != v218[(_QWORD)v194 + v205 - v207 - v432 - v401 + 3] )
                          break;
                        --v218;
                        --v211;
                      }
                      while ( (__int64)&v218[4 - v432 - v401] > (int)v213 );
                      v207 = v407;
                    }
LABEL_355:
                    v209 = v381;
                  }
                  v219 = (_QWORD *)(v434 + 4);
                  v220 = v210 + 1;
                  v221 = (_QWORD *)(v434 + 4);
                  if ( v434 + 4 >= v392 - 7 )
                  {
                    while ( (unsigned __int64)v221 < v392 - 7 )
                    {
                      if ( *v220 != *v221 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v224 = ((unsigned int)_RAX >> 3) - (_DWORD)v219 + (_DWORD)v221;
                        goto LABEL_375;
                      }
                      ++v221;
LABEL_363:
                      ++v220;
                    }
                    if ( (unsigned __int64)v221 < v392 - 3 && *(_DWORD *)v220 == *(_DWORD *)v221 )
                    {
                      v221 = (_QWORD *)((char *)v221 + 4);
                      v220 = (_QWORD *)((char *)v220 + 4);
                    }
                    if ( (unsigned __int64)v221 < v392 - 1 && *(_WORD *)v220 == *(_WORD *)v221 )
                    {
                      v221 = (_QWORD *)((char *)v221 + 2);
                      v220 = (_QWORD *)((char *)v220 + 2);
                    }
                    if ( (unsigned __int64)v221 < v392 && *(_BYTE *)v220 == *(_BYTE *)v221 )
                      LODWORD(v221) = (_DWORD)v221 + 1;
                    v224 = (_DWORD)v221 - (_DWORD)v219;
                  }
                  else
                  {
                    if ( *v220 == *v219 )
                    {
                      v221 = (_QWORD *)(v434 + 12);
                      goto LABEL_363;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v224 = (unsigned int)_RCX >> 3;
                  }
LABEL_375:
                  v198 = v388;
                  v227 = v224 - v211 + 4;
                  v228 = v227 <= v209;
                  v229 = v383;
                  if ( !v228 )
                  {
                    v381 = v227;
                    v400 = v395 - v205;
                    v425 = v434 + v211;
                  }
                  v208 = v390;
                }
LABEL_443:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000) != 1 )
                  goto LABEL_448;
                v259 = v205 - 1;
                if ( v208 )
                {
                  if ( v390 != 2 )
                    goto LABEL_448;
                  v260 = v392;
                }
                else
                {
                  if ( (_BYTE)v198 != HIBYTE(v198) || (unsigned __int16)v198 != HIWORD(v198) )
                  {
                    v390 = 1;
LABEL_448:
                    v261 = v386;
LABEL_449:
                    v205 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000);
                    goto LABEL_450;
                  }
                  v260 = v392;
                  v390 = 2;
                  v414 = (unsigned int)LZ4HC_countPattern(v434 + 4, v392, v198, 1LL) + 4LL;
                }
                v261 = v386;
                if ( v259 < v386 || v207 - v205 < 3 )
                  goto LABEL_449;
                if ( v259 >= v207 )
                {
                  v264 = 0;
                  v265 = (_DWORD *)((char *)v404 + v259 - v207);
                }
                else
                {
                  v264 = 1;
                  v265 = (_DWORD *)(v421 + v259 - v229);
                }
                if ( *v265 != v388 )
                  goto LABEL_448;
                v266 = v260;
                if ( v264 )
                  v266 = v426;
                v267 = (unsigned int)LZ4HC_countPattern(v265 + 1, v266, v388, 1LL) + 4LL;
                if ( v264 )
                {
                  if ( (_DWORD *)((char *)v265 + v267) == v269 )
                  {
                    v270 = v388;
                    v271 = 8 * (v267 & 3);
                    if ( v271 )
                      v270 = (unsigned int)__ROL4__(v388, v271);
                    v267 += (unsigned int)LZ4HC_countPattern(v404, v392, v270, v268);
                  }
                  v272 = (_DWORD *)v421;
                }
                else
                {
                  v272 = v404;
                }
                v273 = LZ4HC_reverseCountPattern(v265, v272, v388);
                v274 = v404;
                v275 = v273;
                if ( !v264 && (_DWORD *)((char *)v265 - v273) == v404 && v383 < v207 )
                {
                  v276 = v388;
                  v277 = 8LL * (-v273 & 3);
                  if ( v277 )
                    v276 = (unsigned int)__ROL4__(v388, v277);
                  v278 = LZ4HC_reverseCountPattern(v426, v421, v276);
                  v275 = v278 + v279;
                  v274 = v404;
                }
                v261 = v386;
                v205 = v386;
                if ( v259 - v275 > v386 )
                  v205 = v259 - v275;
                v280 = v267 + v259 - v205;
                if ( v280 < v414 || v267 > v414 )
                {
                  if ( v207 - v205 - 1 < 3 )
                  {
                    v205 = v207;
                  }
                  else if ( !v424 )
                  {
                    v282 = v414;
                    if ( v280 < v414 )
                      v282 = v267 + v259 - v205;
                    if ( v381 < v282 )
                    {
                      if ( v434 + v207 - (unsigned __int64)v205 - (_QWORD)v274 > 0xFFFF )
                        goto LABEL_451;
                      v381 = v282;
                      v400 = v395 - v205;
                      v425 = v434;
                    }
                    v283 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000);
                    if ( v283 > v205 )
                      goto LABEL_451;
                    v205 -= v283;
                  }
                }
                else
                {
                  v281 = v259 + v267 - v414;
                  v205 = v207;
                  if ( v207 - v281 - 1 >= 3 )
                    v205 = v281;
                }
LABEL_450:
                v194 = v404;
                v69 = v205 < v261;
                v198 = v388;
                LODWORD(v193) = v383;
                v197 = v421;
                v206 = v424;
                if ( v69 )
                  goto LABEL_451;
              }
            }
            v7 = 0;
            v91 = v391;
            v187 = v401;
            v262 = __PAIR64__(v381, v200);
            v263 = v381;
          }
          if ( v263 <= v172 )
            break;
          v94 = v440;
          v284 = v440 + v91;
          if ( v425 >= v284 + 3 )
          {
            if ( v187 < v284 )
            {
              if ( (__int64)(v187 - v91) >= 18 )
              {
                v94 = v187 - v91;
                v440 = v187 - v91;
              }
              else
              {
                if ( v440 > 18 )
                  v94 = 18;
                v440 = v94;
                if ( v91 + v94 > v187 + v172 - 4LL )
                {
                  v94 = v172 + v187 - v91 - 4;
                  v440 = v94;
                }
                v285 = v94 + v91 - v187;
                if ( v285 > 0 )
                {
                  v401 = v285 + v187;
                  HIDWORD(v397) = v172 - v285;
                  v171 = v397;
                }
              }
            }
            v15 = v408;
            v286 = v16;
            v287 = v16;
            v288 = v16;
            v289 = v16 + 1;
            v290 = v91 - (_QWORD)v408;
            if ( a7 )
            {
              v20 = v411;
              if ( &v289[v290 + 8 + v290 / 0xFF] > v411 )
                goto LABEL_617;
            }
            if ( v290 < 0xF )
            {
              *v287 = 16 * v290;
            }
            else
            {
              v291 = v290 - 15;
              *v287 = -16;
              if ( v290 - 15 >= 0xFF )
              {
                v292 = v291 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v292) = -1;
                memset_0(v289, SDWORD2(v292), v291 / 0xFF);
                v15 = v408;
                v289 += v291 / 0xFF;
                v287 = v286;
                v288 = v286;
                v291 %= 0xFFuLL;
              }
              *v289++ = v291;
              v91 = v391;
            }
            v293 = v289;
            do
            {
              *v293 = *(_QWORD *)((char *)v293 + (char *)v15 - v289);
              ++v293;
            }
            while ( v293 < (_QWORD *)&v289[v290] );
            v294 = &v289[v290];
            v94 = v440;
            *v294 = v410;
            v16 = v294 + 1;
            v295 = v440 - 4LL;
            v420 = v16;
            if ( a7 )
            {
              v20 = v411;
              if ( &v16[v295 / 0xFF + 6] > v411 )
                goto LABEL_617;
            }
            v296 = *v288;
            if ( v295 < 0xF )
            {
              *v287 = v295 + v296;
            }
            else
            {
              v297 = v440 - 19LL;
              *v287 = v296 + 15;
              if ( v297 >= 0x1FE )
              {
                v298 = v297 / 0x1FE;
                v297 %= 0x1FEuLL;
                do
                {
                  *v16 = -1;
                  v299 = v16 + 1;
                  *v299 = -1;
                  v16 = v299 + 1;
                  --v298;
                }
                while ( v298 );
              }
              if ( v297 >= 0xFF )
              {
                LOBYTE(v297) = v297 + 1;
                *v16++ = -1;
              }
              *v16++ = v297;
              v420 = v16;
            }
            LOWORD(v410) = v171;
            v187 = v425;
            v94 = HIDWORD(v171);
            v171 = v262;
            v397 = v262;
            v7 = 0;
            v172 = HIDWORD(v262);
            v408 = (unsigned int *)(v440 + v91);
            v91 = v401;
            v417 = v262;
            v93 = v428;
            v391 = v401;
            v401 = v425;
            v440 = v94;
          }
          else
          {
            if ( v425 >= v284 )
            {
              if ( v187 < v284 )
              {
                v300 = v440 + v91 - v187;
                v401 = v300 + v187;
                if ( v172 - v300 >= 4 )
                {
                  HIDWORD(v397) = v172 - v300;
                  v171 = v397;
                }
                else
                {
                  v401 = v425;
                  v171 = v262;
                }
              }
              v15 = v408;
              v286 = v16;
              v301 = v16;
              v302 = v16;
              v303 = v16 + 1;
              v304 = v91 - (_QWORD)v408;
              if ( a7 )
              {
                v20 = v411;
                if ( &v303[v304 + 8 + v304 / 0xFF] > v411 )
                  goto LABEL_617;
              }
              if ( v304 < 0xF )
              {
                *v301 = 16 * v304;
              }
              else
              {
                v305 = v304 - 15;
                *v301 = -16;
                if ( v304 - 15 >= 0xFF )
                {
                  v306 = v305 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v306) = -1;
                  memset_0(v303, SDWORD2(v306), v305 / 0xFF);
                  v15 = v408;
                  v303 += v305 / 0xFF;
                  v301 = v286;
                  v302 = v286;
                  v305 %= 0xFFuLL;
                }
                *v303++ = v305;
                v91 = v391;
              }
              v307 = v303;
              do
              {
                *v307 = *(_QWORD *)((char *)v307 + (char *)v15 - v303);
                ++v307;
              }
              while ( v307 < (_QWORD *)&v303[v304] );
              v308 = &v303[v304];
              v94 = v440;
              *v308 = v410;
              v16 = v308 + 1;
              v309 = v440 - 4LL;
              v420 = v16;
              if ( a7 )
              {
                v20 = v411;
                if ( &v16[v309 / 0xFF + 6] > v411 )
                  goto LABEL_617;
              }
              v310 = *v302;
              if ( v309 < 0xF )
              {
                *v301 = v309 + v310;
              }
              else
              {
                v311 = v440 - 19LL;
                *v301 = v310 + 15;
                if ( v311 >= 0x1FE )
                {
                  v312 = v311 / 0x1FE;
                  v311 %= 0x1FEuLL;
                  do
                  {
                    *v16 = -1;
                    v313 = v16 + 1;
                    *v313 = -1;
                    v16 = v313 + 1;
                    --v312;
                  }
                  while ( v312 );
                }
                if ( v311 >= 0xFF )
                {
                  LOBYTE(v311) = v311 + 1;
                  *v16++ = -1;
                }
                *v16++ = v311;
                v420 = v16;
              }
              v92 = v401;
              v70 = v171;
              v408 = (unsigned int *)(v440 + v91);
              v91 = v425;
              v391 = v425;
              v410 = v262;
              v423 = v171;
              v427 = HIDWORD(v171);
              goto LABEL_143;
            }
            v397 = v262;
            v171 = v262;
            v172 = HIDWORD(v262);
            v187 = v425;
            v417 = v262;
            v93 = v428;
            v401 = v425;
          }
        }
        if ( v187 < v91 + v440 )
          v440 = v187 - v91;
        v314 = v391;
        v286 = v16;
        v315 = (char *)v408;
        v316 = v16;
        v317 = v16;
        v318 = v391 - (_QWORD)v408;
        v319 = v16 + 1;
        if ( a7 && &v319[v318 / 0xFF + 8 + v318] > v411 )
        {
          v94 = v440;
          v15 = v408;
          v20 = v411;
          goto LABEL_617;
        }
        if ( v318 < 0xF )
        {
          *v316 = 16 * v318;
        }
        else
        {
          v320 = v318 - 15;
          *v316 = -16;
          if ( v318 - 15 >= 0xFF )
          {
            v321 = v320 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v321) = -1;
            memset_0(v319, SDWORD2(v321), v320 / 0xFF);
            v314 = v391;
            v319 += v320 / 0xFF;
            v315 = (char *)v408;
            v317 = v316;
            LOBYTE(v320) = v320 / 0xFF + v320;
            v7 = 0;
          }
          *v319++ = v320;
          v187 = v401;
        }
        v322 = v319;
        do
        {
          *v322 = *(_QWORD *)((char *)v322 + v315 - v319);
          ++v322;
        }
        while ( v322 < (_QWORD *)&v319[v318] );
        v323 = &v319[v318];
        *v323 = v410;
        v324 = v323 + 1;
        v325 = v440 - 4LL;
        if ( a7 )
        {
          v20 = v411;
          if ( &v324[v325 / 0xFF + 6] > v411 )
          {
            v94 = v440;
            v15 = v408;
            goto LABEL_617;
          }
        }
        v326 = *v317;
        if ( v325 < 0xF )
        {
          *v316 = v326 + v325;
        }
        else
        {
          v327 = v440 - 19LL;
          *v316 = v326 + 15;
          if ( v327 >= 0x1FE )
          {
            v328 = v327 / 0x1FE;
            v327 %= 0x1FEuLL;
            do
            {
              *v324 = -1;
              v329 = v324 + 1;
              *v329 = -1;
              v324 = v329 + 1;
              --v328;
            }
            while ( v328 );
          }
          if ( v327 >= 0xFF )
          {
            LOBYTE(v327) = v327 + 1;
            *v324++ = -1;
          }
          *v324++ = v327;
        }
        v15 = (unsigned int *)(v440 + v314);
        v391 = v187;
        v408 = v15;
        v286 = v324;
        v330 = v324;
        v331 = v324;
        v332 = v187 - (_QWORD)v15;
        v333 = v324 + 1;
        if ( a7 )
        {
          if ( &v333[v332 + 8 + v332 / 0xFF] > v411 )
            break;
        }
        if ( v332 < 0xF )
        {
          *v330 = 16 * v332;
        }
        else
        {
          v334 = v332 - 15;
          *v330 = -16;
          if ( v332 - 15 >= 0xFF )
          {
            v335 = v334 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v335) = -1;
            memset_0(v333, SDWORD2(v335), v334 / 0xFF);
            v15 = v408;
            v333 += v334 / 0xFF;
            v331 = v330;
            v334 %= 0xFFuLL;
            v7 = 0;
          }
          *v333++ = v334;
          v187 = v401;
        }
        v336 = v333;
        do
        {
          *v336 = *(_QWORD *)((char *)v336 + (char *)v15 - v333);
          ++v336;
        }
        while ( v336 < (_QWORD *)&v333[v332] );
        v337 = &v333[v332];
        v20 = v411;
        *v337 = v397;
        v16 = v337 + 1;
        v338 = SHIDWORD(v397) - 4LL;
        v420 = v16;
        if ( a7 && &v16[v338 / 0xFF + 6] > v411 )
          goto LABEL_614;
        v339 = *v331;
        if ( v338 < 0xF )
        {
          *v330 = v339 + v338;
        }
        else
        {
          v340 = SHIDWORD(v397) - 19LL;
          *v330 = v339 + 15;
          if ( v340 >= 0x1FE )
          {
            v341 = v340 / 0x1FE;
            v340 %= 0x1FEuLL;
            do
            {
              *v16 = -1;
              v342 = v16 + 1;
              *v342 = -1;
              v16 = v342 + 1;
              --v341;
            }
            while ( v341 );
          }
          if ( v340 >= 0xFF )
          {
            LOBYTE(v340) = v340 + 1;
            *v16++ = -1;
          }
          *v16++ = v340;
          v420 = v16;
        }
        v13 = (unsigned int *)(v187 + SHIDWORD(v397));
LABEL_612:
        v11 = a1;
        v15 = v13;
        v408 = v13;
LABEL_103:
        v19 = v428;
        v391 = (unsigned __int64)v13;
      }
      v20 = v411;
      v408 = v15;
LABEL_614:
      LOWORD(v410) = v171;
      v94 = HIDWORD(v171);
LABEL_617:
      v343 = v391;
LABEL_618:
      if ( a7 != 2 )
      {
        v372 = 0;
LABEL_654:
        *(_BYTE *)(a1 + 262183) = 1;
        return (unsigned int)v372;
      }
      v357 = v343 - (_QWORD)v15;
      v16 = v286;
      v358 = (v343 - (unsigned __int64)v15 + 240) / 0xFF + v343 - (_QWORD)v15 + 1;
      if ( &v286[v358] <= v20 - 3 )
      {
        if ( v94 > (unsigned __int64)(255 * (&v20[-v358 - 3] - v286) + 18) )
          v94 = 255 * ((_DWORD)v20 - 3 - v358 - (_DWORD)v286) + 18;
        v441 = v94;
        if ( (__int64)&v20[v94 - v358 - (_QWORD)v286 + 2] >= 12 )
        {
          v359 = v286 + 1;
          if ( v357 < 0xF )
          {
            *v286 = 16 * v357;
          }
          else
          {
            v360 = v357 - 15;
            *v286 = -16;
            if ( v357 - 15 >= 0xFF )
            {
              v361 = v360 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v361) = -1;
              memset_0(v286 + 1, SDWORD2(v361), v360 / 0xFF);
              v94 = v441;
              v359 += v360 / 0xFF;
              v15 = v408;
              LOBYTE(v360) = v360 / 0xFF + v360;
            }
            *v359++ = v360;
            v20 = v411;
          }
          v362 = v359;
          v363 = (char *)v15 - v359;
          do
          {
            *v362 = *(_QWORD *)((char *)v362 + v363);
            ++v362;
          }
          while ( v362 < (_QWORD *)&v359[v357] );
          v364 = &v359[v357];
          v365 = v94 - 4LL;
          *v364 = v410;
          v16 = v364 + 1;
          v366 = *v286;
          if ( v365 < 0xF )
          {
            *v286 = v365 + v366;
          }
          else
          {
            v367 = v94 - 19LL;
            *v286 = v366 + 15;
            if ( v367 >= 0x1FE )
            {
              v368 = v367 / 0x1FE;
              v367 %= 0x1FEuLL;
              do
              {
                *v16 = -1;
                v369 = v16 + 1;
                *v369 = -1;
                v16 = v369 + 1;
                --v368;
              }
              while ( v368 );
            }
            if ( v367 >= 0xFF )
            {
              LOBYTE(v367) = v367 + 1;
              *v16++ = -1;
            }
            *v16++ = v367;
          }
          v15 = (unsigned int *)(v391 + v94);
          v408 = v15;
        }
      }
LABEL_639:
      LODWORD(v9) = v437;
      LODWORD(v10) = v436;
      v8 = a4;
      v18 = v429;
    }
    v370 = v18 - (char *)v15;
    v430 = v370;
    v371 = v16;
    if ( a7 == 2 )
    {
      v20 += 5;
    }
    else if ( !a7 )
    {
      goto LABEL_648;
    }
    if ( &v16[(v370 + 240) / 0xFF + 1 + v370] > v20 )
    {
      if ( a7 == 1 )
      {
        v372 = 0;
        goto LABEL_654;
      }
      v370 = v20 - v16 - 1 - ((unsigned __int64)(v20 - v16 - 1 + 241) >> 8);
      v430 = v370;
    }
LABEL_648:
    v373 = v370 + (_DWORD)v15;
    if ( v370 < 0xF )
    {
      *v16 = 16 * v370;
      v377 = (_DWORD)v16 + 1;
    }
    else
    {
      *v16 = -16;
      v374 = v370 - 15;
      v375 = v16 + 1;
      if ( v370 - 15 >= 0xFF )
      {
        v376 = v374 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v376) = -1;
        memset_0(v375, SDWORD2(v376), v374 / 0xFF);
        v15 = v408;
        v375 += v374 / 0xFF;
        v370 = v430;
        LOBYTE(v374) = v374 / 0xFF + v374;
      }
      v371 = v375;
      *v375 = v374;
      v377 = (_DWORD)v375 + 1;
    }
    memmove(v371 + 1, v15, v370);
    v372 = v370 + v377 - (_DWORD)v9;
    *v8 = v373 - (_DWORD)v10;
    if ( v372 > 0 )
      return (unsigned int)v372;
    goto LABEL_654;
  }
  return LZ4HC_compress_generic_dictCtx(a1, a2, a3, v8, a5);
}
