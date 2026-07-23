/*
 * XREFs of LZ4HC_compress_generic @ 0x1800F6B7C
 * Callers:
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180152F04 (LZ4_compress_HC_extStateHC_fastReset.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1800F2F5C (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1800F2FB8 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_compress_generic_dictCtx @ 0x1800F951C (LZ4HC_compress_generic_dictCtx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4HC_compress_generic(__int64 a1, unsigned int *a2, _BYTE *a3, int *a4, int a5, __int64 a6, int a7)
{
  unsigned int v7; // r10d
  _DWORD *v8; // r15
  unsigned int *v9; // r13
  __int64 v10; // r12
  unsigned int *v11; // r11
  _BYTE *v12; // r14
  __int64 v13; // rdx
  unsigned int *v14; // r9
  char *v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  size_t v18; // rbx
  _BYTE *v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  int v22; // esi
  __int64 v23; // r13
  unsigned int v24; // r15d
  unsigned int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned int v27; // r12d
  int v28; // r8d
  unsigned int v29; // r9d
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  _DWORD *v33; // r9
  unsigned int v34; // r11d
  int v35; // ebx
  _DWORD *v36; // r14
  _DWORD *v37; // rdx
  _QWORD *v38; // r10
  _QWORD *v39; // rcx
  _QWORD *v40; // r8
  _QWORD *v41; // rdx
  unsigned int v43; // ecx
  signed int v44; // r10d
  _QWORD *v45; // r9
  _QWORD *v46; // rdx
  _QWORD *v47; // rcx
  unsigned int v51; // ecx
  unsigned __int64 v52; // r10
  int v53; // r15d
  unsigned int v54; // esi
  unsigned int v55; // r8d
  bool v56; // cf
  unsigned __int64 v57; // r11
  char *v58; // r13
  char *v59; // rcx
  unsigned __int64 v60; // rbx
  int v61; // r9d
  char *v62; // rax
  int v63; // esi
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // r12
  unsigned __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rcx
  int v70; // ecx
  _BYTE *v71; // r15
  _BYTE *v72; // r8
  char *v73; // r10
  _BYTE *v74; // r14
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // r13
  _QWORD *v77; // rcx
  _WORD *v78; // r14
  unsigned __int64 v79; // rcx
  char v80; // al
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // r11
  unsigned __int64 v84; // rdi
  __int64 v85; // r11
  unsigned __int64 v86; // rdx
  unsigned int v87; // eax
  int v88; // r8d
  unsigned int v89; // r11d
  unsigned int v90; // eax
  unsigned int v91; // r11d
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  unsigned int v94; // ecx
  __int64 v95; // rcx
  int v96; // eax
  int v97; // r11d
  unsigned int v98; // edi
  _DWORD *v99; // r11
  unsigned int *v100; // rbx
  char *v101; // r13
  char *v102; // r9
  unsigned __int64 v103; // rsi
  _BYTE *v104; // r14
  unsigned __int64 v105; // r12
  _QWORD *v106; // rcx
  _WORD *v107; // r14
  _BYTE *v108; // r14
  unsigned __int64 v109; // rcx
  char v110; // al
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  _BYTE *v113; // r14
  char *v114; // r13
  char *v115; // r9
  unsigned __int64 v116; // rsi
  _BYTE *v117; // r14
  unsigned __int64 v118; // r12
  _QWORD *v119; // rcx
  _WORD *v120; // r14
  unsigned __int64 v121; // rcx
  char v122; // al
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rdx
  _BYTE *v125; // r14
  int v126; // ecx
  _BYTE *v127; // r8
  char *v128; // r10
  _BYTE *v129; // r14
  unsigned __int64 v130; // r12
  unsigned __int64 v131; // r13
  _QWORD *v132; // rcx
  _WORD *v133; // r14
  unsigned __int64 v134; // rcx
  char v135; // al
  _DWORD *v136; // rdx
  _QWORD *v137; // r9
  _QWORD *v138; // rdx
  _QWORD *v139; // rcx
  unsigned int v143; // ecx
  char *v144; // rcx
  _BYTE *v145; // r12
  char *v146; // r13
  unsigned __int64 v147; // rdi
  _BYTE *v148; // r14
  unsigned __int64 v149; // rsi
  _QWORD *v150; // rcx
  _WORD *v151; // r14
  unsigned __int64 v152; // rcx
  char v153; // al
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  _BYTE *v156; // r14
  int v158; // esi
  size_t v159; // rdi
  _BYTE *v160; // r14
  int v161; // r14d
  int v162; // r14d
  int v164; // r8d
  int v165; // ecx
  unsigned int *v166; // rbx
  __int64 v167; // r8
  unsigned int v168; // r12d
  _QWORD *v169; // r15
  unsigned int v170; // r13d
  unsigned __int64 v171; // rdx
  int v172; // r10d
  unsigned int v173; // esi
  __int64 v174; // rcx
  __int64 v175; // r8
  unsigned int v176; // edi
  unsigned int v177; // r9d
  _DWORD *v178; // r8
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  unsigned int v181; // r13d
  __int64 v182; // r8
  unsigned __int64 v183; // r11
  int v184; // ecx
  unsigned int v185; // edi
  __int64 v186; // rax
  unsigned __int64 v187; // rbx
  __int64 v188; // r15
  _DWORD *v189; // rsi
  unsigned int *v190; // rax
  unsigned int *v191; // r11
  __int64 v192; // r8
  _QWORD *v193; // rdx
  __int64 v194; // r15
  unsigned int v195; // r13d
  unsigned int v196; // ebx
  int v197; // r10d
  unsigned int v198; // r12d
  unsigned int v199; // r9d
  _DWORD *v200; // r8
  unsigned __int64 v201; // rdx
  unsigned __int64 v202; // rcx
  unsigned __int64 v203; // rcx
  unsigned int v204; // r11d
  unsigned int v205; // r13d
  __int64 v206; // rdx
  unsigned __int64 v207; // r14
  __int64 v208; // r12
  int v209; // ecx
  _DWORD *v210; // rbx
  signed int v212; // ecx
  unsigned __int64 v215; // rcx
  unsigned __int64 v216; // rdx
  _BYTE *v217; // r14
  unsigned __int64 v219; // rcx
  unsigned __int64 v220; // rdx
  _BYTE *v221; // r14
  int v222; // r10d
  __int64 v223; // rax
  __int64 v224; // rdi
  _DWORD *v225; // rbx
  int v226; // esi
  __int64 v227; // r10
  unsigned int v228; // eax
  _DWORD *v229; // r8
  int v230; // ecx
  unsigned __int64 v231; // r9
  unsigned int v232; // eax
  _QWORD *v233; // r9
  _QWORD *v234; // rdx
  _QWORD *v235; // rcx
  unsigned __int64 v238; // rdi
  unsigned __int64 v239; // r8
  _BYTE *v240; // r14
  unsigned __int64 v241; // rsi
  _QWORD *v242; // rcx
  __int64 v243; // r11
  _WORD *v244; // r14
  unsigned __int64 v245; // rcx
  char v246; // al
  unsigned __int64 v247; // rcx
  unsigned __int64 v248; // rdx
  _BYTE *v249; // r14
  int v250; // r10d
  _DWORD *v251; // r11
  int v252; // ebx
  __int64 v253; // r10
  int v254; // eax
  _DWORD *v255; // r8
  int v256; // ecx
  char *v257; // r9
  unsigned int v258; // eax
  _QWORD *v259; // r10
  _QWORD *v260; // rdx
  _QWORD *v261; // r9
  _QWORD *v262; // rcx
  _BYTE *v265; // rcx
  int v266; // edx
  int v267; // edi
  unsigned int v268; // r15d
  unsigned int v269; // r10d
  int v270; // r12d
  unsigned __int64 v271; // rbx
  unsigned __int64 v272; // rdi
  unsigned __int64 v273; // rsi
  unsigned __int64 v274; // rdx
  unsigned int v275; // eax
  _QWORD *v276; // r8
  unsigned int v277; // edi
  unsigned __int64 v278; // rcx
  unsigned __int64 v279; // rdx
  unsigned int v280; // ecx
  int v281; // r8d
  __int64 v282; // rcx
  unsigned int v283; // r15d
  unsigned int v284; // ecx
  signed int v286; // edi
  _QWORD *v287; // r10
  _QWORD *v288; // rdx
  _QWORD *v289; // rcx
  unsigned int v292; // ecx
  unsigned __int64 v293; // rbx
  int v294; // eax
  _DWORD *v295; // r9
  int v296; // r8d
  unsigned __int64 v297; // r10
  _QWORD *v300; // r10
  _QWORD *v301; // rdx
  _QWORD *v302; // r9
  _QWORD *v303; // rcx
  _BYTE *v306; // rdx
  int v307; // r8d
  int v308; // r11d
  unsigned int v309; // r12d
  unsigned __int64 v310; // rsi
  int v311; // r15d
  unsigned __int64 v312; // rbx
  unsigned __int64 v313; // r11
  unsigned __int64 v314; // rsi
  __int64 v315; // r11
  unsigned __int64 v316; // rdx
  unsigned int v317; // eax
  int v318; // r8d
  bool v319; // zf
  unsigned int v320; // r11d
  unsigned int v321; // eax
  unsigned __int64 v322; // rcx
  unsigned __int64 v323; // rdx
  unsigned int v324; // ecx
  __int64 v325; // rcx
  int v326; // eax
  int v327; // r11d
  unsigned int v328; // esi
  unsigned int v329; // ecx
  signed int v331; // r11d
  _QWORD *v332; // r10
  _QWORD *v333; // rdx
  _QWORD *v334; // rcx
  unsigned int v336; // ecx
  __int64 v337; // r10
  int v338; // eax
  _DWORD *v339; // r9
  int v340; // ecx
  char *v341; // rbx
  _BYTE *v342; // rcx
  _BYTE *v343; // rdx
  _QWORD *v344; // r9
  _QWORD *v345; // rdx
  _QWORD *v346; // rcx
  unsigned int v348; // ecx
  int v349; // ecx
  unsigned int v351; // ecx
  int v353; // ecx
  unsigned int v356; // eax
  unsigned int v358; // eax
  unsigned int v364; // r8d
  __int64 v365; // rcx
  unsigned int v366; // r8d
  __int64 v367; // rcx
  unsigned int v368; // r8d
  __int64 v369; // rcx
  unsigned __int128 v370; // rax
  unsigned __int128 v371; // rax
  unsigned __int128 v372; // rax
  unsigned __int128 v373; // rax
  unsigned __int128 v374; // rax
  unsigned __int128 v375; // rax
  unsigned __int128 v376; // rax
  int v377; // [rsp+28h] [rbp-D8h]
  unsigned int v378; // [rsp+40h] [rbp-C0h]
  unsigned int v379; // [rsp+40h] [rbp-C0h]
  int v380; // [rsp+40h] [rbp-C0h]
  int v381; // [rsp+44h] [rbp-BCh]
  unsigned int v382; // [rsp+44h] [rbp-BCh]
  unsigned int v383; // [rsp+48h] [rbp-B8h]
  int v384; // [rsp+48h] [rbp-B8h]
  unsigned int v385; // [rsp+48h] [rbp-B8h]
  int v386; // [rsp+4Ch] [rbp-B4h]
  unsigned int v387; // [rsp+4Ch] [rbp-B4h]
  unsigned int v388; // [rsp+4Ch] [rbp-B4h]
  int v389; // [rsp+50h] [rbp-B0h]
  int v390; // [rsp+50h] [rbp-B0h]
  _DWORD *v391; // [rsp+58h] [rbp-A8h]
  unsigned int v392; // [rsp+60h] [rbp-A0h]
  unsigned int v393; // [rsp+60h] [rbp-A0h]
  unsigned int v394; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v395; // [rsp+68h] [rbp-98h]
  unsigned __int64 v396; // [rsp+70h] [rbp-90h]
  _QWORD *v397; // [rsp+70h] [rbp-90h]
  unsigned __int64 v398; // [rsp+78h] [rbp-88h]
  unsigned int v399; // [rsp+80h] [rbp-80h]
  unsigned int v400; // [rsp+80h] [rbp-80h]
  unsigned int v401; // [rsp+80h] [rbp-80h]
  _QWORD *v402; // [rsp+88h] [rbp-78h]
  unsigned __int64 v403; // [rsp+88h] [rbp-78h]
  unsigned int *v404; // [rsp+90h] [rbp-70h]
  int v405; // [rsp+98h] [rbp-68h]
  int v406; // [rsp+98h] [rbp-68h]
  unsigned int v407; // [rsp+98h] [rbp-68h]
  unsigned __int64 v408; // [rsp+A0h] [rbp-60h]
  unsigned int v409; // [rsp+A8h] [rbp-58h]
  int v410; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v411; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v412; // [rsp+B0h] [rbp-50h]
  __int64 v413; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v414; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v415; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v416; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v417; // [rsp+C0h] [rbp-40h]
  __int64 v418; // [rsp+C0h] [rbp-40h]
  _BYTE *v419; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v420; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v421; // [rsp+D8h] [rbp-28h]
  char *v422; // [rsp+E0h] [rbp-20h]
  __int64 v423; // [rsp+E0h] [rbp-20h]
  __int64 v424; // [rsp+F0h] [rbp-10h]
  char *v425; // [rsp+F8h] [rbp-8h]
  size_t v426; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v427; // [rsp+100h] [rbp+0h]
  _QWORD *v428; // [rsp+100h] [rbp+0h]
  unsigned __int64 v429; // [rsp+108h] [rbp+8h]
  unsigned __int64 v430; // [rsp+108h] [rbp+8h]
  unsigned __int64 v431; // [rsp+110h] [rbp+10h]
  int v432; // [rsp+114h] [rbp+14h]
  unsigned __int64 v433; // [rsp+118h] [rbp+18h]
  int v435; // [rsp+1A8h] [rbp+A8h]
  int v436; // [rsp+1B0h] [rbp+B0h]
  int v438; // [rsp+1C8h] [rbp+C8h]
  int v439; // [rsp+1C8h] [rbp+C8h]
  int v440; // [rsp+1C8h] [rbp+C8h]

  v436 = (int)a3;
  v435 = (int)a2;
  v7 = 0;
  v8 = a4;
  v9 = a2;
  v10 = a1;
  if ( !*(_QWORD *)(a1 + 262184) )
  {
    if ( a7 == 2 && a5 < 1 || (unsigned int)*a4 > 0x7E000000 )
      return v7;
    v11 = a2;
    *(_QWORD *)(a1 + 0x40000) += *a4;
    v12 = a3;
    v13 = *a4;
    v14 = v9;
    v15 = (char *)v9 + v13;
    v16 = (unsigned __int64)v9 + v13 - 12;
    v17 = (unsigned __int64)&a3[a5 - 5];
    if ( a7 != 2 )
      v17 = (unsigned __int64)&a3[a5];
    v408 = v17;
    v391 = v9;
    v404 = v9;
    v425 = (char *)v9 + v13;
    v424 = (__int64)v9 + v13 - 12;
    v395 = (unsigned __int64)(v15 - 5);
    v419 = a3;
    v398 = 0LL;
    v420 = 0LL;
    *v8 = 0;
    if ( (int)v13 < 13 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( (unsigned __int64)v14 > v16 )
        goto LABEL_378;
      v20 = *(unsigned int *)(v10 + 262172);
      v21 = *(_QWORD **)(v10 + 262152);
      v22 = 3;
      v23 = *(unsigned int *)(v10 + 262168);
      v24 = v23 + (_DWORD)v14 - (_DWORD)v21;
      v386 = 3;
      v402 = v21;
      v399 = v24;
      v25 = *(_DWORD *)(v10 + 262172);
      v392 = v25;
      if ( (int)v20 + 0x10000 <= v24 )
        v25 = v24 - 0xFFFF;
      v26 = *(_QWORD *)(v10 + 262160);
      v27 = *v14;
      v405 = 256;
      v414 = v26 + v23 - v20;
      v378 = v25;
      v28 = 0;
      v411 = v26;
      v29 = *(_DWORD *)(a1 + 262176);
      v438 = 0;
      v416 = 0LL;
      v383 = 0;
      if ( v29 < v24 )
      {
        v30 = (_DWORD *)((char *)v21 + v29 - v23);
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
        while ( v29 < v24 );
        v22 = 3;
        v28 = 0;
        LODWORD(v20) = v392;
      }
      v33 = v391;
      *(_DWORD *)(a1 + 262176) = v24;
      v34 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v391) >> 17));
      if ( v34 >= v25 )
      {
        while ( 1 )
        {
          v35 = v28;
          if ( v405 <= 0 )
          {
LABEL_65:
            v12 = v419;
            v7 = v383;
            v33 = v391;
            break;
          }
          v36 = v391;
          --v405;
          if ( v34 >= (unsigned int)v23 )
          {
            v52 = v395;
            v136 = (_DWORD *)((char *)v21 + v34 - (unsigned int)v23);
            if ( *(_WORD *)((char *)v391 + v22 - 1) == *(_WORD *)((char *)v136 + v22 - 1) && *v136 == v27 )
            {
              v137 = v391 + 1;
              v138 = v136 + 1;
              v139 = v391 + 1;
              if ( (unsigned __int64)(v391 + 1) >= v395 - 7 )
              {
                while ( (unsigned __int64)v139 < v395 - 7 )
                {
                  if ( *v138 != *v139 )
                  {
                    __asm { tzcnt   rax, rax }
                    v143 = ((unsigned int)_RAX >> 3) - (_DWORD)v137 + (_DWORD)v139;
                    goto LABEL_280;
                  }
                  ++v139;
LABEL_187:
                  ++v138;
                }
                if ( (unsigned __int64)v139 < v395 - 3 && *(_DWORD *)v138 == *(_DWORD *)v139 )
                {
                  v139 = (_QWORD *)((char *)v139 + 4);
                  v138 = (_QWORD *)((char *)v138 + 4);
                }
                if ( (unsigned __int64)v139 < v395 - 1 && *(_WORD *)v138 == *(_WORD *)v139 )
                {
                  v139 = (_QWORD *)((char *)v139 + 2);
                  v138 = (_QWORD *)((char *)v138 + 2);
                }
                if ( (unsigned __int64)v139 < v395 && *(_BYTE *)v138 == *(_BYTE *)v139 )
                  LODWORD(v139) = (_DWORD)v139 + 1;
                v143 = (_DWORD)v139 - (_DWORD)v137;
              }
              else
              {
                if ( *v138 == *v137 )
                {
                  v139 = v391 + 3;
                  goto LABEL_187;
                }
                __asm { tzcnt   rcx, rax }
                v143 = (unsigned int)_RCX >> 3;
              }
LABEL_280:
              v28 = v438;
              v212 = v143 + 4;
              if ( v212 > v22 )
              {
                v386 = v212;
                v383 = v24 - v34;
                v36 = v391;
              }
            }
          }
          else
          {
            v37 = (_DWORD *)(v411 + v34 - (unsigned int)v20);
            if ( v34 <= (int)v23 - 4 && *v37 == v27 )
            {
              v38 = v391 + 1;
              v39 = v391 + 1;
              v40 = (_QWORD *)((char *)v391 + (unsigned int)v23 - v34);
              if ( (unsigned __int64)v40 > v395 )
                v40 = (_QWORD *)v395;
              v41 = v37 + 1;
              if ( v38 >= (_QWORD *)((char *)v40 - 7) )
              {
                while ( v39 < (_QWORD *)((char *)v40 - 7) )
                {
                  if ( *v41 != *v39 )
                  {
                    __asm { tzcnt   rax, rax }
                    v43 = ((unsigned int)_RAX >> 3) - (_DWORD)v38 + (_DWORD)v39;
                    goto LABEL_45;
                  }
                  ++v39;
LABEL_33:
                  ++v41;
                }
                if ( v39 < (_QWORD *)((char *)v40 - 3) && *(_DWORD *)v41 == *(_DWORD *)v39 )
                {
                  v39 = (_QWORD *)((char *)v39 + 4);
                  v41 = (_QWORD *)((char *)v41 + 4);
                }
                if ( v39 < (_QWORD *)((char *)v40 - 1) && *(_WORD *)v41 == *(_WORD *)v39 )
                {
                  v39 = (_QWORD *)((char *)v39 + 2);
                  v41 = (_QWORD *)((char *)v41 + 2);
                }
                if ( v39 < v40 && *(_BYTE *)v41 == *(_BYTE *)v39 )
                  LODWORD(v39) = (_DWORD)v39 + 1;
                v43 = (_DWORD)v39 - (_DWORD)v38;
              }
              else
              {
                if ( *v41 == *v38 )
                {
                  v39 = v391 + 3;
                  goto LABEL_33;
                }
                __asm { tzcnt   rcx, rax }
                v43 = (unsigned int)_RCX >> 3;
              }
LABEL_45:
              v44 = v43 + 4;
              v45 = (_QWORD *)((char *)v391 + (int)(v43 + 4));
              if ( v45 == v40 && (unsigned __int64)v40 < v395 )
              {
                v46 = v21;
                v47 = (_QWORD *)((char *)v391 + v44);
                if ( (unsigned __int64)v45 >= v395 - 7 )
                  goto LABEL_50;
                if ( *v21 != *v45 )
                {
                  __asm { tzcnt   rcx, rax }
                  v51 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v47 = v45 + 1;
                  v46 = v21 + 1;
LABEL_50:
                  while ( (unsigned __int64)v47 < v395 - 7 )
                  {
                    if ( *v46 != *v47 )
                    {
                      __asm { tzcnt   rax, rax }
                      v51 = ((unsigned int)_RAX >> 3) - (_DWORD)v45 + (_DWORD)v47;
                      goto LABEL_54;
                    }
                    ++v47;
                    ++v46;
                  }
                  if ( (unsigned __int64)v47 < v395 - 3 && *(_DWORD *)v46 == *(_DWORD *)v47 )
                  {
                    v47 = (_QWORD *)((char *)v47 + 4);
                    v46 = (_QWORD *)((char *)v46 + 4);
                  }
                  if ( (unsigned __int64)v47 < v395 - 1 && *(_WORD *)v46 == *(_WORD *)v47 )
                  {
                    v47 = (_QWORD *)((char *)v47 + 2);
                    v46 = (_QWORD *)((char *)v46 + 2);
                  }
                  if ( (unsigned __int64)v47 < v395 && *(_BYTE *)v46 == *(_BYTE *)v47 )
                    LODWORD(v47) = (_DWORD)v47 + 1;
                  v51 = (_DWORD)v47 - (_DWORD)v45;
                }
LABEL_54:
                v44 += v51;
              }
              v28 = v438;
              if ( v44 > v22 )
              {
                v386 = v44;
                v383 = v24 - v34;
              }
            }
            v52 = v395;
          }
          v53 = 1;
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v34 + 0x20000) != 1 )
            goto LABEL_62;
          v54 = v34 - 1;
          if ( v28 )
          {
            v438 = v35;
            if ( v35 != 2 )
              goto LABEL_62;
            v81 = v416;
          }
          else
          {
            if ( (_BYTE)v27 != HIBYTE(v27) || (unsigned __int16)v27 != HIWORD(v27) )
            {
              v438 = 1;
LABEL_62:
              v55 = v378;
LABEL_63:
              v34 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v34 + 0x20000);
              goto LABEL_64;
            }
            v438 = 2;
            v81 = (unsigned int)LZ4HC_countPattern(v36 + 1, v52, v27) + 4LL;
            v416 = v81;
          }
          v55 = v378;
          if ( v54 < v378 || (unsigned int)v23 - v54 - 1 < 3 )
            goto LABEL_63;
          if ( v54 >= (unsigned int)v23 )
          {
            v53 = 0;
            v82 = (unsigned __int64)v21 + v54 - (unsigned int)v23;
          }
          else
          {
            v82 = v411 + v54 - v392;
          }
          if ( *(_DWORD *)v82 != v27 )
            goto LABEL_63;
          v83 = v395;
          if ( v53 )
            v83 = v414;
          v84 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v82 + 4), v83, v27) + 4LL;
          if ( v53 )
          {
            if ( v84 + v82 == v85 )
            {
              v364 = v27;
              v365 = 8 * (v84 & 3);
              if ( v365 )
                v364 = __ROL4__(v27, v365);
              v84 += (unsigned int)LZ4HC_countPattern(v402, v395, v364);
            }
            v86 = v411;
          }
          else
          {
            v86 = (unsigned __int64)v402;
          }
          v87 = LZ4HC_reverseCountPattern(v82, v86, v27);
          v89 = v87;
          if ( !v53 && (_QWORD *)(v82 - v87) == v402 && v392 < (unsigned int)v23 )
          {
            v95 = 8LL * (-v87 & 3);
            if ( v95 )
              v88 = __ROL4__(v88, v95);
            v96 = LZ4HC_reverseCountPattern(v414, v411, v88);
            v89 = v96 + v97;
          }
          v55 = v378;
          v90 = v54 - v89;
          v91 = v378;
          if ( v90 > v378 )
            v91 = v90;
          v92 = v84 + v54 - v91;
          if ( v92 >= v81 && v84 <= v81 )
          {
            v98 = v54 + v84 - v81;
            v34 = v23;
            if ( (unsigned int)v23 - v98 - 1 >= 3 )
              v34 = v98;
            goto LABEL_118;
          }
          if ( (unsigned int)v23 - v91 - 1 < 3 )
          {
            v34 = v23;
LABEL_118:
            v21 = v402;
            goto LABEL_64;
          }
          v22 = v386;
          v21 = v402;
          v93 = v81;
          if ( v92 < v81 )
            v93 = v92;
          if ( v386 < v93 )
          {
            if ( (unsigned __int64)v391 + v23 - v91 - (_QWORD)v402 > 0xFFFF )
              goto LABEL_65;
            v22 = v93;
            v386 = v93;
            v383 = v399 - v91;
          }
          v94 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v91 + 0x20000);
          if ( v94 > v91 )
            goto LABEL_65;
          v34 = v91 - v94;
LABEL_64:
          v22 = v386;
          v56 = v34 < v55;
          v28 = v438;
          v24 = v399;
          LODWORD(v20) = v392;
          if ( v56 )
            goto LABEL_65;
        }
      }
      v57 = __PAIR64__(v22, v7);
      v417 = __PAIR64__(v22, v7);
      v403 = __PAIR64__(v22, v7);
      if ( v22 >= 4 )
        break;
      v11 = v404;
      v14 = (_DWORD *)((char *)v33 + 1);
      v17 = v408;
      v7 = 0;
LABEL_163:
      v10 = a1;
      v16 = v424;
      v391 = v14;
    }
    v58 = (char *)v391;
    v59 = (char *)v391;
    v432 = v22;
LABEL_68:
    v60 = v424;
    v422 = v59;
    while ( 1 )
    {
      v61 = HIDWORD(v403);
      v439 = HIDWORD(v403);
      v62 = &v58[SHIDWORD(v403)];
      if ( (unsigned __int64)v62 > v60 )
      {
        v7 = 0;
        v396 = 0LL;
        v63 = 0;
        v64 = 0LL;
        goto LABEL_71;
      }
      v398 = (unsigned __int64)(v62 - 2);
      v166 = (unsigned int *)(v62 - 2);
      v384 = HIDWORD(v403);
      v167 = *(unsigned int *)(a1 + 262172);
      v168 = v167;
      v169 = *(_QWORD **)(a1 + 262152);
      v397 = v169;
      v170 = (_DWORD)v62 - 2 + *(_DWORD *)(a1 + 262168) - (_DWORD)v169;
      v409 = *(_DWORD *)(a1 + 262168);
      v400 = v170;
      v379 = *(_DWORD *)(a1 + 262172);
      if ( (int)v167 + 0x10000 <= v170 )
        v168 = v170 - 0xFFFF;
      v171 = *(_QWORD *)(a1 + 262160);
      v172 = (_DWORD)v166 - (_DWORD)v391;
      v173 = *v166;
      v174 = v171 - v167;
      v387 = v168;
      v175 = a1;
      v427 = *(unsigned int *)(a1 + 262168) + v174;
      v415 = v171;
      v176 = 0;
      v406 = 256;
      v177 = *(_DWORD *)(a1 + 262176);
      v381 = *v166;
      v389 = 0;
      v429 = 0LL;
      v393 = 0;
      if ( v177 < v170 )
      {
        v178 = (_DWORD *)((char *)v169 + v177 - (unsigned __int64)*(unsigned int *)(a1 + 262168));
        do
        {
          v179 = (unsigned __int64)(unsigned int)(-1640531535 * *v178) >> 17;
          v180 = v177 - *(_DWORD *)(a1 + 4 * v179);
          if ( v180 > 0xFFFF )
            LOWORD(v180) = -1;
          v178 = (_DWORD *)((char *)v178 + 1);
          *(_WORD *)(a1 + 2LL * (unsigned __int16)v177 + 0x20000) = v180;
          *(_DWORD *)(a1 + 4 * v179) = v177++;
        }
        while ( v177 < v170 );
        v57 = v417;
        v173 = v381;
        v171 = v415;
        v175 = a1;
      }
      *(_DWORD *)(v175 + 262176) = v170;
      v181 = *(_DWORD *)(v175 + 4 * ((unsigned __int64)(-1640531535 * *v166) >> 17));
      v182 = v172;
      v413 = v172;
      if ( v181 >= v168 )
        break;
LABEL_321:
      v7 = 0;
      v59 = v422;
      v61 = HIDWORD(v403);
      v58 = (char *)v391;
      v60 = v424;
      v64 = __PAIR64__(v384, v176);
      v396 = v64;
      v63 = v384;
LABEL_71:
      v412 = v64;
      if ( v63 <= v61 )
      {
        v144 = (char *)v391;
        v11 = v404;
        v71 = v12;
        v145 = v12;
        v146 = v12;
        v147 = (char *)v391 - (char *)v404;
        v148 = v12 + 1;
        if ( a7 )
        {
          v17 = v408;
          if ( (unsigned __int64)&v148[v147 / 0xFF + 8 + v147] > v408 )
            goto LABEL_359;
        }
        if ( v147 < 0xF )
        {
          *v145 = 16 * v147;
        }
        else
        {
          v149 = v147 - 15;
          *v145 = -16;
          if ( v147 - 15 >= 0xFF )
          {
            v374 = v149 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v374) = -1;
            memset_thunk_772440563353939046(v148, SDWORD2(v374), v149 / 0xFF);
            v61 = HIDWORD(v403);
            v148 += v149 / 0xFF;
            v11 = v404;
            LOBYTE(v149) = v149 / 0xFF + v149;
            v7 = 0;
          }
          *v148++ = v149;
        }
        v150 = v148;
        do
        {
          *v150 = *(_QWORD *)((char *)v150 + (char *)v11 - v148);
          ++v150;
        }
        while ( v150 < (_QWORD *)&v148[v147] );
        v151 = &v148[v147];
        v17 = v408;
        v152 = v61 - 4LL;
        *v151 = v403;
        v12 = v151 + 1;
        v419 = v12;
        if ( a7 && (unsigned __int64)&v12[v152 / 0xFF + 6] > v408 )
          goto LABEL_358;
        v153 = *v146;
        if ( v152 < 0xF )
        {
          *v145 = v152 + v153;
        }
        else
        {
          v154 = v61 - 19LL;
          *v145 = v153 + 15;
          if ( v154 >= 0x1FE )
          {
            v155 = v154 / 0x1FE;
            v154 %= 0x1FEuLL;
            do
            {
              *v12 = -1;
              v156 = v12 + 1;
              *v156 = -1;
              v12 = v156 + 1;
              --v155;
            }
            while ( v155 );
          }
          if ( v154 >= 0xFF )
          {
            LOBYTE(v154) = v154 + 1;
            *v12++ = -1;
          }
          *v12++ = v154;
          v419 = v12;
        }
        v14 = (_DWORD *)((char *)v391 + v61);
LABEL_162:
        v11 = v14;
        v404 = v14;
        goto LABEL_163;
      }
      v65 = v398;
      if ( v59 < v58 && v398 < (unsigned __int64)&v58[v432] )
      {
        LOWORD(v403) = v57;
        v58 = v59;
        v61 = HIDWORD(v57);
        v439 = HIDWORD(v57);
        v391 = v59;
      }
      if ( (__int64)(v398 - (_QWORD)v58) >= 3 )
      {
        while ( 1 )
        {
          if ( (__int64)(v65 - (_QWORD)v58) < 18 )
          {
            v164 = v61;
            if ( v61 > 18 )
              v164 = 18;
            if ( (unsigned __int64)&v58[v164] > v65 + v63 - 4LL )
              v164 = v63 + v65 - (_DWORD)v58 - 4;
            v165 = v164 + (_DWORD)v58 - v65;
            if ( v165 > 0 )
            {
              v65 += v165;
              v63 -= v165;
              v398 = v65;
              HIDWORD(v396) = v63;
              v64 = v396;
              v412 = v396;
            }
          }
          v66 = v65 + v63;
          if ( v66 > v60 )
          {
            v67 = 0;
            v68 = 0LL;
            goto LABEL_77;
          }
          v190 = (unsigned int *)(v66 - 3);
          v380 = v63;
          v420 = v66 - 3;
          v191 = (unsigned int *)(v66 - 3);
          v430 = v66 - 3;
          v192 = *(unsigned int *)(a1 + 262172);
          v193 = *(_QWORD **)(a1 + 262152);
          v194 = *(unsigned int *)(a1 + 262168);
          v195 = v194 + v66 - 3 - (_DWORD)v193;
          v428 = v193;
          v388 = *(_DWORD *)(a1 + 262168);
          v407 = v195;
          v394 = *(_DWORD *)(a1 + 262172);
          if ( (int)v192 + 0x10000 <= v195 )
            v385 = v195 - 0xFFFF;
          else
            v385 = *(_DWORD *)(a1 + 262172);
          v196 = *v190;
          v433 = *(_QWORD *)(a1 + 262160) + v194 - v192;
          v421 = *(_QWORD *)(a1 + 262160);
          v197 = (_DWORD)v190 - v65;
          v410 = 256;
          v198 = 0;
          v390 = 0;
          v431 = 0LL;
          v401 = 0;
          v199 = *(_DWORD *)(a1 + 262176);
          v382 = *v191;
          if ( v199 < v195 )
          {
            v200 = (_DWORD *)((char *)v193 + v199 - v194);
            do
            {
              v201 = (unsigned __int64)(unsigned int)(-1640531535 * *v200) >> 17;
              v202 = v199 - *(_DWORD *)(a1 + 4 * v201);
              if ( v202 > 0xFFFF )
                LOWORD(v202) = -1;
              v200 = (_DWORD *)((char *)v200 + 1);
              *(_WORD *)(a1 + 2LL * (unsigned __int16)v199 + 0x20000) = v202;
              *(_DWORD *)(a1 + 4 * v201) = v199++;
            }
            while ( v199 < v195 );
            v191 = (unsigned int *)v430;
            LODWORD(v194) = v388;
            v196 = v382;
            LODWORD(v192) = v394;
          }
          *(_DWORD *)(a1 + 262176) = v195;
          v203 = -1640531535 * *v191;
          v204 = v385;
          v205 = *(_DWORD *)(a1 + 4 * (v203 >> 17));
          v206 = v197;
          v418 = v197;
          if ( v205 >= v385 )
            break;
LABEL_338:
          v7 = 0;
          v58 = (char *)v391;
          v68 = __PAIR64__(v380, v198);
          v65 = v398;
          v67 = v380;
LABEL_77:
          if ( v67 <= v63 )
          {
            if ( v65 < (unsigned __int64)&v58[v439] )
              v439 = v65 - (_DWORD)v58;
            v99 = v391;
            v71 = v12;
            v100 = v404;
            v101 = v12;
            v102 = v12;
            v103 = (char *)v391 - (char *)v404;
            v104 = v12 + 1;
            if ( a7 && (unsigned __int64)&v104[v103 / 0xFF + 8 + v103] > v408 )
            {
              v61 = v439;
              v11 = v404;
              v17 = v408;
LABEL_358:
              v144 = (char *)v391;
LABEL_359:
              if ( a7 != 2 )
              {
                v162 = 0;
                goto LABEL_215;
              }
              v238 = v144 - (char *)v11;
              v12 = v71;
              v239 = (v144 - (char *)v11 + 240) / 0xFFuLL + v144 - (char *)v11 + 1;
              if ( (unsigned __int64)&v71[v239] <= v17 - 3 )
              {
                if ( v61 > 255 * (v17 - 3 - v239 - (unsigned __int64)v71) + 18 )
                  v61 = 255 * (v17 - 3 - v239 - (_DWORD)v71) + 18;
                v440 = v61;
                if ( (__int64)(v17 + v61 - v239 - (_QWORD)v71 + 2) >= 12 )
                {
                  v240 = v71 + 1;
                  if ( v238 < 0xF )
                  {
                    *v71 = 16 * v238;
                  }
                  else
                  {
                    v241 = v238 - 15;
                    *v71 = -16;
                    if ( v238 - 15 >= 0xFF )
                    {
                      v375 = v241 * (unsigned __int128)0x8080808080808081uLL;
                      BYTE8(v375) = -1;
                      memset_thunk_772440563353939046(v71 + 1, SDWORD2(v375), v241 / 0xFF);
                      v61 = v440;
                      v240 += v241 / 0xFF;
                      v11 = v404;
                      LOBYTE(v241) = v241 / 0xFF + v241;
                    }
                    *v240++ = v241;
                    v17 = v408;
                  }
                  v242 = v240;
                  v243 = (char *)v11 - v240;
                  do
                  {
                    *v242 = *(_QWORD *)((char *)v242 + v243);
                    ++v242;
                  }
                  while ( v242 < (_QWORD *)&v240[v238] );
                  v244 = &v240[v238];
                  v245 = v61 - 4LL;
                  *v244 = v403;
                  v12 = v244 + 1;
                  v246 = *v71;
                  if ( v245 < 0xF )
                  {
                    *v71 = v245 + v246;
                  }
                  else
                  {
                    v247 = v61 - 19LL;
                    *v71 = v246 + 15;
                    if ( v247 >= 0x1FE )
                    {
                      v248 = v247 / 0x1FE;
                      v247 %= 0x1FEuLL;
                      do
                      {
                        *v12 = -1;
                        v249 = v12 + 1;
                        *v249 = -1;
                        v12 = v249 + 1;
                        --v248;
                      }
                      while ( v248 );
                    }
                    if ( v247 >= 0xFF )
                    {
                      LOBYTE(v247) = v247 + 1;
                      *v12++ = -1;
                    }
                    *v12++ = v247;
                  }
                  v11 = (_DWORD *)((char *)v391 + v61);
                  v404 = v11;
                }
              }
LABEL_378:
              LODWORD(v9) = v435;
              v8 = a4;
              v15 = v425;
LABEL_7:
              v18 = v15 - (char *)v11;
              v426 = v18;
              v19 = v12;
              if ( a7 == 2 )
              {
                v17 += 5LL;
              }
              else if ( !a7 )
              {
LABEL_210:
                v158 = v18 + (_DWORD)v11;
                if ( v18 < 0xF )
                {
                  *v12 = 16 * v18;
                  v161 = (_DWORD)v12 + 1;
                }
                else
                {
                  *v12 = -16;
                  v159 = v18 - 15;
                  v160 = v12 + 1;
                  if ( v18 - 15 >= 0xFF )
                  {
                    v376 = v159 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v376) = -1;
                    memset_thunk_772440563353939046(v160, SDWORD2(v376), v159 / 0xFF);
                    v11 = v404;
                    v160 += v159 / 0xFF;
                    v18 = v426;
                    LOBYTE(v159) = v159 / 0xFF + v159;
                  }
                  v19 = v160;
                  *v160 = v159;
                  v161 = (_DWORD)v160 + 1;
                }
                memmove(v19 + 1, v11, v18);
                v162 = v18 + v161 - v436;
                *v8 = v158 - (_DWORD)v9;
                if ( v162 > 0 )
                  return (unsigned int)v162;
                goto LABEL_215;
              }
              if ( (unsigned __int64)&v12[(v18 + 240) / 0xFF + 1 + v18] <= v17 )
                goto LABEL_210;
              if ( a7 != 1 )
              {
                v18 = v17 - (_QWORD)v12 - 1 - ((v17 - (unsigned __int64)v12 - 1 + 241) >> 8);
                v426 = v18;
                goto LABEL_210;
              }
              v162 = 0;
LABEL_215:
              *(_BYTE *)(a1 + 262183) = 1;
              return (unsigned int)v162;
            }
            if ( v103 < 0xF )
            {
              *v101 = 16 * v103;
            }
            else
            {
              v105 = v103 - 15;
              *v101 = -16;
              if ( v103 - 15 >= 0xFF )
              {
                v372 = v105 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v372) = -1;
                memset_thunk_772440563353939046(v104, SDWORD2(v372), v105 / 0xFF);
                v99 = v391;
                v104 += v105 / 0xFF;
                v100 = v404;
                v102 = v101;
                LOBYTE(v105) = v105 / 0xFF + v105;
                v7 = 0;
              }
              *v104++ = v105;
              v65 = v398;
            }
            v106 = v104;
            do
            {
              *v106 = *(_QWORD *)((char *)v106 + (char *)v100 - v104);
              ++v106;
            }
            while ( v106 < (_QWORD *)&v104[v103] );
            v107 = &v104[v103];
            *v107 = v403;
            v108 = v107 + 1;
            v109 = v439 - 4LL;
            if ( a7 )
            {
              v17 = v408;
              if ( (unsigned __int64)&v108[v109 / 0xFF + 6] > v408 )
              {
                v61 = v439;
                v11 = v404;
                goto LABEL_358;
              }
            }
            v110 = *v102;
            if ( v109 < 0xF )
            {
              *v101 = v110 + v109;
            }
            else
            {
              v111 = v439 - 19LL;
              *v101 = v110 + 15;
              if ( v111 >= 0x1FE )
              {
                v112 = v111 / 0x1FE;
                v111 %= 0x1FEuLL;
                do
                {
                  *v108 = -1;
                  v113 = v108 + 1;
                  *v113 = -1;
                  v108 = v113 + 1;
                  --v112;
                }
                while ( v112 );
              }
              if ( v111 >= 0xFF )
              {
                LOBYTE(v111) = v111 + 1;
                *v108++ = -1;
              }
              *v108++ = v111;
            }
            v11 = (_DWORD *)((char *)v99 + v439);
            v391 = (_DWORD *)v65;
            v404 = v11;
            v71 = v108;
            v114 = v108;
            v115 = v108;
            v116 = v65 - (_QWORD)v11;
            v117 = v108 + 1;
            if ( a7 && (unsigned __int64)&v117[v116 + 8 + v116 / 0xFF] > v408 )
            {
              v17 = v408;
              v404 = v11;
LABEL_267:
              LOWORD(v403) = v64;
              v61 = HIDWORD(v64);
              goto LABEL_358;
            }
            if ( v116 < 0xF )
            {
              *v114 = 16 * v116;
            }
            else
            {
              v118 = v116 - 15;
              *v114 = -16;
              if ( v116 - 15 >= 0xFF )
              {
                v373 = v118 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v373) = -1;
                memset_thunk_772440563353939046(v117, SDWORD2(v373), v118 / 0xFF);
                v11 = v404;
                v117 += v118 / 0xFF;
                v115 = v114;
                v118 %= 0xFFuLL;
                v7 = 0;
              }
              *v117++ = v118;
              v65 = v398;
            }
            v119 = v117;
            do
            {
              *v119 = *(_QWORD *)((char *)v119 + (char *)v11 - v117);
              ++v119;
            }
            while ( v119 < (_QWORD *)&v117[v116] );
            v120 = &v117[v116];
            v17 = v408;
            *v120 = v396;
            v12 = v120 + 1;
            v121 = SHIDWORD(v396) - 4LL;
            v419 = v12;
            if ( a7 && (unsigned __int64)&v12[v121 / 0xFF + 6] > v408 )
              goto LABEL_267;
            v122 = *v115;
            if ( v121 < 0xF )
            {
              *v114 = v122 + v121;
            }
            else
            {
              v123 = SHIDWORD(v396) - 19LL;
              *v114 = v122 + 15;
              if ( v123 >= 0x1FE )
              {
                v124 = v123 / 0x1FE;
                v123 %= 0x1FEuLL;
                do
                {
                  *v12 = -1;
                  v125 = v12 + 1;
                  *v125 = -1;
                  v12 = v125 + 1;
                  --v124;
                }
                while ( v124 );
              }
              if ( v123 >= 0xFF )
              {
                LOBYTE(v123) = v123 + 1;
                *v12++ = -1;
              }
              *v12++ = v123;
              v419 = v12;
            }
            v14 = (unsigned int *)(v65 + SHIDWORD(v396));
            goto LABEL_162;
          }
          v61 = v439;
          v69 = (unsigned __int64)&v58[v439];
          if ( v420 >= v69 + 3 )
          {
            if ( v65 < v69 )
            {
              if ( (__int64)(v65 - (_QWORD)v58) >= 18 )
              {
                v61 = v65 - (_DWORD)v58;
                v439 = v65 - (_DWORD)v58;
              }
              else
              {
                if ( v439 > 18 )
                  v61 = 18;
                v439 = v61;
                if ( (unsigned __int64)&v58[v61] > v65 + v63 - 4LL )
                {
                  v61 = v63 + v65 - (_DWORD)v58 - 4;
                  v439 = v61;
                }
                v126 = v61 + (_DWORD)v58 - v65;
                if ( v126 > 0 )
                {
                  v398 = v126 + v65;
                  HIDWORD(v396) = v63 - v126;
                  v64 = v396;
                }
              }
            }
            v11 = v404;
            v71 = v12;
            v127 = v12;
            v128 = v12;
            v129 = v12 + 1;
            v130 = v58 - (char *)v404;
            if ( a7 )
            {
              v17 = v408;
              if ( (unsigned __int64)&v129[v130 + 8 + v130 / 0xFF] > v408 )
                goto LABEL_358;
            }
            if ( v130 < 0xF )
            {
              *v127 = 16 * v130;
            }
            else
            {
              v131 = v130 - 15;
              *v127 = -16;
              if ( v130 - 15 >= 0xFF )
              {
                v370 = v131 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v370) = -1;
                memset_thunk_772440563353939046(v129, SDWORD2(v370), v131 / 0xFF);
                v11 = v404;
                v129 += v131 / 0xFF;
                v127 = v71;
                v128 = v71;
                v131 %= 0xFFuLL;
              }
              *v129++ = v131;
              v58 = (char *)v391;
            }
            v132 = v129;
            do
            {
              *v132 = *(_QWORD *)((char *)v132 + (char *)v11 - v129);
              ++v132;
            }
            while ( v132 < (_QWORD *)&v129[v130] );
            v133 = &v129[v130];
            v61 = v439;
            *v133 = v403;
            v12 = v133 + 1;
            v134 = v439 - 4LL;
            v419 = v12;
            if ( a7 )
            {
              v17 = v408;
              if ( (unsigned __int64)&v12[v134 / 0xFF + 6] > v408 )
                goto LABEL_358;
            }
            v135 = *v128;
            if ( v134 >= 0xF )
            {
              v215 = v439 - 19LL;
              *v127 = v135 + 15;
              if ( v215 >= 0x1FE )
              {
                v216 = v215 / 0x1FE;
                v215 %= 0x1FEuLL;
                do
                {
                  *v12 = -1;
                  v217 = v12 + 1;
                  *v217 = -1;
                  v12 = v217 + 1;
                  --v216;
                }
                while ( v216 );
              }
              if ( v215 >= 0xFF )
              {
                LOBYTE(v215) = v215 + 1;
                *v12++ = -1;
              }
              *v12++ = v215;
              v419 = v12;
            }
            else
            {
              *v127 = v134 + v135;
            }
            LOWORD(v403) = v64;
            v65 = v420;
            v61 = HIDWORD(v64);
            v64 = v68;
            v396 = v68;
            v7 = 0;
            v63 = HIDWORD(v68);
            v404 = (unsigned int *)&v58[v439];
            v58 = (char *)v398;
            v412 = v68;
            v60 = v424;
            v391 = (_DWORD *)v398;
            v398 = v420;
            v439 = v61;
          }
          else
          {
            if ( v420 >= v69 )
            {
              if ( v65 < v69 )
              {
                v70 = v439 + (_DWORD)v58 - v65;
                v398 = v70 + v65;
                if ( v63 - v70 >= 4 )
                {
                  HIDWORD(v396) = v63 - v70;
                  v64 = v396;
                }
                else
                {
                  v398 = v420;
                  v64 = v68;
                }
              }
              v11 = v404;
              v71 = v12;
              v72 = v12;
              v73 = v12;
              v74 = v12 + 1;
              v75 = v58 - (char *)v404;
              if ( a7 )
              {
                v17 = v408;
                if ( (unsigned __int64)&v74[v75 + 8 + v75 / 0xFF] > v408 )
                  goto LABEL_358;
              }
              if ( v75 < 0xF )
              {
                *v72 = 16 * v75;
              }
              else
              {
                v76 = v75 - 15;
                *v72 = -16;
                if ( v75 - 15 >= 0xFF )
                {
                  v371 = v76 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v371) = -1;
                  memset_thunk_772440563353939046(v74, SDWORD2(v371), v76 / 0xFF);
                  v11 = v404;
                  v74 += v76 / 0xFF;
                  v72 = v71;
                  v73 = v71;
                  v76 %= 0xFFuLL;
                }
                *v74++ = v76;
                v58 = (char *)v391;
              }
              v77 = v74;
              do
              {
                *v77 = *(_QWORD *)((char *)v77 + (char *)v11 - v74);
                ++v77;
              }
              while ( v77 < (_QWORD *)&v74[v75] );
              v78 = &v74[v75];
              v61 = v439;
              *v78 = v403;
              v12 = v78 + 1;
              v79 = v439 - 4LL;
              v419 = v12;
              if ( a7 )
              {
                v17 = v408;
                if ( (unsigned __int64)&v12[v79 / 0xFF + 6] > v408 )
                  goto LABEL_358;
              }
              v80 = *v73;
              if ( v79 >= 0xF )
              {
                v219 = v439 - 19LL;
                *v72 = v80 + 15;
                if ( v219 >= 0x1FE )
                {
                  v220 = v219 / 0x1FE;
                  v219 %= 0x1FEuLL;
                  do
                  {
                    *v12 = -1;
                    v221 = v12 + 1;
                    *v221 = -1;
                    v12 = v221 + 1;
                    --v220;
                  }
                  while ( v220 );
                }
                if ( v219 >= 0xFF )
                {
                  LOBYTE(v219) = v219 + 1;
                  *v12++ = -1;
                }
                *v12++ = v219;
                v419 = v12;
              }
              else
              {
                *v72 = v79 + v80;
              }
              v59 = (char *)v398;
              v57 = v64;
              v404 = (unsigned int *)&v58[v439];
              v58 = (char *)v420;
              v391 = (_DWORD *)v420;
              v403 = v68;
              v417 = v64;
              v432 = HIDWORD(v64);
              goto LABEL_68;
            }
            v396 = v68;
            v64 = v68;
            v63 = HIDWORD(v68);
            v65 = v420;
            v412 = v68;
            v60 = v424;
            v398 = v420;
          }
        }
        v207 = (unsigned __int64)v428;
        v208 = v63;
        v423 = v63;
        while ( 2 )
        {
          v209 = v390;
          if ( v410 <= 0 )
          {
LABEL_337:
            v64 = v412;
            v12 = v419;
            v63 = HIDWORD(v396);
            v198 = v401;
            goto LABEL_338;
          }
          --v410;
          if ( v205 >= (unsigned int)v194 )
          {
            v250 = v380;
            v251 = (_DWORD *)(v207 + v205 - (unsigned int)v194);
            if ( *(_WORD *)(v380 + v398 - 1) != *(_WORD *)((char *)v251 + v380 - v206 - 1) || *v251 != v196 )
              goto LABEL_495;
            v252 = 0;
            if ( v206 )
            {
              v253 = 0LL;
              if ( (__int64)(v398 - v430) <= -(__int64)(v205 - (unsigned int)v194) )
                v254 = v194 - v205;
              else
                v254 = v398 - v430;
              v255 = (_DWORD *)(v430 - 4);
              v256 = -v254;
              v257 = (char *)v251 - v430;
              while ( v256 > 3 )
              {
                if ( *v255 != *(_DWORD *)((char *)v255 + (_QWORD)v257) )
                {
                  _BitScanReverse(&v258, *v255 ^ *(_DWORD *)((char *)v255 + (_QWORD)v257));
                  v252 -= (31 - v258) >> 3;
                  goto LABEL_580;
                }
                v252 -= 4;
                v256 -= 4;
                v253 -= 4LL;
                --v255;
              }
              if ( v253 > v254 )
              {
                v343 = (_BYTE *)(v253 + v208 + v398 - 4);
                do
                {
                  if ( *v343 != v343[v207 + 3 + v205 - (unsigned int)v194 - v208 - v398] )
                    break;
                  --v343;
                  --v252;
                }
                while ( (__int64)&v343[4 - v208 - v398] > v254 );
                v207 = (unsigned __int64)v428;
              }
LABEL_580:
              v250 = v380;
            }
            v344 = (_QWORD *)(v430 + 4);
            v345 = v251 + 1;
            v346 = (_QWORD *)(v430 + 4);
            if ( v430 + 4 >= v395 - 7 )
            {
              while ( (unsigned __int64)v346 < v395 - 7 )
              {
                if ( *v345 != *v346 )
                {
                  __asm { tzcnt   rax, rax }
                  v348 = ((unsigned int)_RAX >> 3) - (_DWORD)v344 + (_DWORD)v346;
                  goto LABEL_596;
                }
                ++v346;
LABEL_584:
                ++v345;
              }
              if ( (unsigned __int64)v346 < v395 - 3 && *(_DWORD *)v345 == *(_DWORD *)v346 )
              {
                v346 = (_QWORD *)((char *)v346 + 4);
                v345 = (_QWORD *)((char *)v345 + 4);
              }
              if ( (unsigned __int64)v346 < v395 - 1 && *(_WORD *)v345 == *(_WORD *)v346 )
              {
                v346 = (_QWORD *)((char *)v346 + 2);
                v345 = (_QWORD *)((char *)v345 + 2);
              }
              if ( (unsigned __int64)v346 < v395 && *(_BYTE *)v345 == *(_BYTE *)v346 )
                LODWORD(v346) = (_DWORD)v346 + 1;
              v348 = (_DWORD)v346 - (_DWORD)v344;
            }
            else
            {
              if ( *v345 == *v344 )
              {
                v346 = (_QWORD *)(v430 + 12);
                goto LABEL_584;
              }
              __asm { tzcnt   rcx, rax }
              v348 = (unsigned int)_RCX >> 3;
            }
LABEL_596:
            v204 = v385;
            v349 = v348 - v252 + 4;
            if ( v349 > v250 )
            {
              v380 = v349;
              v420 = v430 + v252;
              v401 = v407 - v205;
            }
            v196 = v382;
            v209 = v390;
          }
          else
          {
            v210 = (_DWORD *)(v421 + v205 - (unsigned int)v192);
            if ( v205 <= (int)v194 - 4 && *v210 == v382 )
            {
              v300 = (_QWORD *)(v430 + 4);
              v301 = v210 + 1;
              v302 = (_QWORD *)(v430 + (unsigned int)v194 - v205);
              v303 = (_QWORD *)(v430 + 4);
              if ( (unsigned __int64)v302 > v395 )
                v302 = (_QWORD *)v395;
              if ( v300 >= (_QWORD *)((char *)v302 - 7) )
              {
                while ( v303 < (_QWORD *)((char *)v302 - 7) )
                {
                  if ( *v301 != *v303 )
                  {
                    __asm { tzcnt   rax, rax }
                    v329 = ((unsigned int)_RAX >> 3) - (_DWORD)v300 + (_DWORD)v303;
                    goto LABEL_546;
                  }
                  ++v303;
LABEL_483:
                  ++v301;
                }
                if ( v303 < (_QWORD *)((char *)v302 - 3) && *(_DWORD *)v301 == *(_DWORD *)v303 )
                {
                  v303 = (_QWORD *)((char *)v303 + 4);
                  v301 = (_QWORD *)((char *)v301 + 4);
                }
                if ( v303 < (_QWORD *)((char *)v302 - 1) && *(_WORD *)v301 == *(_WORD *)v303 )
                {
                  v303 = (_QWORD *)((char *)v303 + 2);
                  v301 = (_QWORD *)((char *)v301 + 2);
                }
                if ( v303 < v302 && *(_BYTE *)v301 == *(_BYTE *)v303 )
                  LODWORD(v303) = (_DWORD)v303 + 1;
                v329 = (_DWORD)v303 - (_DWORD)v300;
              }
              else
              {
                if ( *v301 == *v300 )
                {
                  v303 = (_QWORD *)(v430 + 12);
                  goto LABEL_483;
                }
                __asm { tzcnt   rcx, rax }
                v329 = (unsigned int)_RCX >> 3;
              }
LABEL_546:
              v331 = v329 + 4;
              v332 = (_QWORD *)(v430 + (int)(v329 + 4));
              if ( v332 == v302 && (unsigned __int64)v302 < v395 )
              {
                v333 = (_QWORD *)v207;
                v334 = (_QWORD *)(v430 + v331);
                if ( (unsigned __int64)v332 >= v395 - 7 )
                  goto LABEL_551;
                if ( *(_QWORD *)v207 != *v332 )
                {
                  __asm { tzcnt   rcx, rax }
                  v336 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v334 = v332 + 1;
                  v333 = (_QWORD *)(v207 + 8);
LABEL_551:
                  while ( (unsigned __int64)v334 < v395 - 7 )
                  {
                    if ( *v333 != *v334 )
                    {
                      __asm { tzcnt   rax, rax }
                      v336 = ((unsigned int)_RAX >> 3) - (_DWORD)v332 + (_DWORD)v334;
                      goto LABEL_562;
                    }
                    ++v334;
                    ++v333;
                  }
                  if ( (unsigned __int64)v334 < v395 - 3 && *(_DWORD *)v333 == *(_DWORD *)v334 )
                  {
                    v334 = (_QWORD *)((char *)v334 + 4);
                    v333 = (_QWORD *)((char *)v333 + 4);
                  }
                  if ( (unsigned __int64)v334 < v395 - 1 && *(_WORD *)v333 == *(_WORD *)v334 )
                  {
                    v334 = (_QWORD *)((char *)v334 + 2);
                    v333 = (_QWORD *)((char *)v333 + 2);
                  }
                  if ( (unsigned __int64)v334 < v395 && *(_BYTE *)v333 == *(_BYTE *)v334 )
                    LODWORD(v334) = (_DWORD)v334 + 1;
                  v336 = (_DWORD)v334 - (_DWORD)v332;
                }
LABEL_562:
                v331 += v336;
              }
              v307 = 0;
              if ( v418 )
              {
                v337 = 0LL;
                if ( (__int64)(v398 - v430) <= (__int64)(v421 - (_QWORD)v210) )
                  v338 = v421 - (_DWORD)v210;
                else
                  v338 = v398 - v430;
                v339 = (_DWORD *)(v430 - 4);
                v340 = -v338;
                v341 = (char *)v210 - v430;
                while ( v340 > 3 )
                {
                  if ( *v339 != *(_DWORD *)((char *)v339 + (_QWORD)v341) )
                  {
                    _BitScanReverse(&v358, *v339 ^ *(_DWORD *)((char *)v339 + (_QWORD)v341));
                    v307 -= (31 - v358) >> 3;
                    goto LABEL_493;
                  }
                  v307 -= 4;
                  v340 -= 4;
                  v337 -= 4LL;
                  --v339;
                }
                if ( v337 > v338 )
                {
                  v306 = (_BYTE *)(v337 + v423 + v398 - 4);
                  do
                  {
                    if ( *v306 != v306[v421 + 3 + v205 - v394 - v423 - v398] )
                      break;
                    --v306;
                    --v307;
                  }
                  while ( (__int64)&v306[4 - v423 - v398] > v338 );
                  LODWORD(v194) = v388;
                }
              }
LABEL_493:
              v196 = v382;
              v308 = v331 - v307;
              v209 = v390;
              if ( v308 > v380 )
              {
                v380 = v308;
                v420 = v430 + v307;
                v401 = v407 - v205;
              }
LABEL_495:
              v204 = v385;
            }
            else
            {
              v196 = v382;
            }
          }
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000) == 1 )
          {
            v309 = v205 - 1;
            if ( v209 )
            {
              if ( v390 == 2 )
              {
                v310 = v395;
                goto LABEL_502;
              }
            }
            else if ( (_BYTE)v196 == HIBYTE(v196) && (unsigned __int16)v196 == HIWORD(v196) )
            {
              v310 = v395;
              v390 = 2;
              v431 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v430 + 4), v395, v196) + 4LL;
LABEL_502:
              if ( v309 >= v204 && (unsigned int)v194 - v205 >= 3 )
              {
                if ( v309 >= (unsigned int)v194 )
                {
                  v311 = 0;
                  v312 = v207 + v309 - v388;
                }
                else
                {
                  v311 = 1;
                  v312 = v421 + v309 - v394;
                }
                if ( *(_DWORD *)v312 == v382 )
                {
                  v313 = v310;
                  if ( v311 )
                    v313 = v433;
                  v314 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v312 + 4), v313, v382) + 4LL;
                  if ( v311 )
                  {
                    if ( v314 + v312 == v315 )
                    {
                      v368 = v382;
                      v369 = 8 * (v314 & 3);
                      if ( v369 )
                        v368 = __ROL4__(v382, v369);
                      v314 += (unsigned int)LZ4HC_countPattern((_QWORD *)v207, v395, v368);
                    }
                    v316 = v421;
                  }
                  else
                  {
                    v316 = v207;
                  }
                  v317 = LZ4HC_reverseCountPattern(v312, v316, v382);
                  v319 = v311 == 0;
                  v320 = v317;
                  LODWORD(v194) = v388;
                  if ( v319 && v312 - v317 == v207 && v394 < v388 )
                  {
                    v325 = 8LL * (-v317 & 3);
                    if ( v325 )
                      v318 = __ROL4__(v318, v325);
                    v326 = LZ4HC_reverseCountPattern(v433, v421, v318);
                    v320 = v326 + v327;
                  }
                  v321 = v309 - v320;
                  v204 = v385;
                  v205 = v385;
                  if ( v321 > v385 )
                    v205 = v321;
                  v322 = v314 + v309 - v205;
                  if ( v322 >= v431 && v314 <= v431 )
                  {
                    v328 = v309 + v314 - v431;
                    v205 = v388;
                    if ( v388 - v328 - 1 >= 3 )
                      v205 = v328;
                    goto LABEL_335;
                  }
                  v206 = v418;
                  if ( v388 - v205 - 1 < 3 )
                  {
                    v205 = v388;
                  }
                  else if ( !v418 )
                  {
                    v323 = v431;
                    if ( v322 < v431 )
                      v323 = v314 + v309 - v205;
                    if ( v380 < v323 )
                    {
                      if ( v430 + v388 - (unsigned __int64)v205 - v207 > 0xFFFF )
                        goto LABEL_337;
                      v380 = v323;
                      v401 = v407 - v205;
                      v420 = v430;
                    }
                    v324 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000);
                    if ( v324 > v205 )
                      goto LABEL_337;
                    v205 -= v324;
LABEL_335:
                    v206 = v418;
                  }
                  v196 = v382;
                  LODWORD(v192) = v394;
                  v208 = v423;
                  if ( v205 < v204 )
                    goto LABEL_337;
                  continue;
                }
                LODWORD(v194) = v388;
              }
            }
            else
            {
              v390 = 1;
            }
          }
          break;
        }
        v205 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v205 + 0x20000);
        goto LABEL_335;
      }
      v58 = (char *)v398;
      v391 = (_DWORD *)v398;
      v403 = v64;
    }
    v183 = (unsigned __int64)(v62 - 2);
    while ( 1 )
    {
      v184 = v389;
      if ( v406 <= 0 )
      {
LABEL_320:
        v57 = v417;
        v12 = v419;
        v176 = v393;
        goto LABEL_321;
      }
      --v406;
      if ( v181 >= v409 )
      {
        v222 = v384;
        v223 = v181 - v409;
        v224 = (unsigned int)v223;
        v225 = (_DWORD *)((char *)v169 + v223);
        if ( *(_WORD *)((char *)v391 + v384 - 1) == *(_WORD *)((char *)v169 + v223 - v182 + v384 - 1) && *v225 == v173 )
        {
          v226 = 0;
          if ( v182 )
          {
            v227 = 0LL;
            if ( (__int64)((__int64)v391 - v183) <= -v223 )
              v228 = v409 - v181;
            else
              v228 = (_DWORD)v391 - v183;
            v229 = v225 - 1;
            v230 = -v228;
            v231 = v183 - (_QWORD)v225;
            while ( v230 > 3 )
            {
              if ( *v229 != *(_DWORD *)((char *)v229 + v231) )
              {
                _BitScanReverse(&v232, *v229 ^ *(_DWORD *)((char *)v229 + v231));
                v226 -= (31 - v232) >> 3;
                goto LABEL_350;
              }
              v226 -= 4;
              v230 -= 4;
              v227 -= 4LL;
              --v229;
            }
            if ( v227 > (int)v228 )
            {
              v342 = (char *)v169 + v227 + v224 - 1;
              do
              {
                if ( v342[(_QWORD)v391 + SHIDWORD(v403) - (_QWORD)v169 - v224 - 2] != *v342 )
                  break;
                --v342;
                --v226;
              }
              while ( (__int64)&v342[1LL - (_QWORD)v169 - v224] > (int)v228 );
            }
LABEL_350:
            v222 = v384;
          }
          v233 = (_QWORD *)(v183 + 4);
          v234 = v225 + 1;
          v235 = (_QWORD *)(v183 + 4);
          v187 = v395;
          if ( v183 + 4 >= v395 - 7 )
          {
            while ( (unsigned __int64)v235 < v395 - 7 )
            {
              if ( *v234 != *v235 )
              {
                __asm { tzcnt   rax, rax }
                v351 = ((unsigned int)_RAX >> 3) - (_DWORD)v233 + (_DWORD)v235;
                goto LABEL_611;
              }
              ++v235;
LABEL_354:
              ++v234;
            }
            if ( (unsigned __int64)v235 < v395 - 3 && *(_DWORD *)v234 == *(_DWORD *)v235 )
            {
              v235 = (_QWORD *)((char *)v235 + 4);
              v234 = (_QWORD *)((char *)v234 + 4);
            }
            if ( (unsigned __int64)v235 < v395 - 1 && *(_WORD *)v234 == *(_WORD *)v235 )
            {
              v235 = (_QWORD *)((char *)v235 + 2);
              v234 = (_QWORD *)((char *)v234 + 2);
            }
            if ( (unsigned __int64)v235 < v395 && *(_BYTE *)v234 == *(_BYTE *)v235 )
              LODWORD(v235) = (_DWORD)v235 + 1;
            v351 = (_DWORD)v235 - (_DWORD)v233;
          }
          else
          {
            if ( *v234 == *v233 )
            {
              v235 = (_QWORD *)(v183 + 12);
              goto LABEL_354;
            }
            __asm { tzcnt   rcx, rax }
            v351 = (unsigned int)_RCX >> 3;
          }
LABEL_611:
          v353 = v351 - v226 + 4;
          if ( v353 > v222 )
          {
            v384 = v353;
            v398 = v183 + v226;
            v393 = v400 - v181;
          }
          v173 = v381;
          v184 = v389;
        }
        else
        {
          v187 = v395;
        }
      }
      else
      {
        v185 = v379;
        v186 = v181 - v379;
        v187 = v395;
        v188 = (unsigned int)v186;
        v189 = (_DWORD *)(v186 + v171);
        if ( v181 > v409 - 4 || *v189 != v381 )
        {
          v173 = v381;
          goto LABEL_409;
        }
        v259 = (_QWORD *)(v183 + 4);
        v260 = v189 + 1;
        v261 = (_QWORD *)(v183 + v409 - v181);
        v262 = (_QWORD *)(v183 + 4);
        if ( (unsigned __int64)v261 > v395 )
          v261 = (_QWORD *)v395;
        if ( v259 >= (_QWORD *)((char *)v261 - 7) )
        {
          while ( v262 < (_QWORD *)((char *)v261 - 7) )
          {
            if ( *v260 != *v262 )
            {
              __asm { tzcnt   rax, rax }
              v284 = ((unsigned int)_RAX >> 3) - (_DWORD)v259 + (_DWORD)v262;
              goto LABEL_460;
            }
            ++v262;
LABEL_397:
            ++v260;
          }
          if ( v262 < (_QWORD *)((char *)v261 - 3) && *(_DWORD *)v260 == *(_DWORD *)v262 )
          {
            v262 = (_QWORD *)((char *)v262 + 4);
            v260 = (_QWORD *)((char *)v260 + 4);
          }
          if ( v262 < (_QWORD *)((char *)v261 - 1) && *(_WORD *)v260 == *(_WORD *)v262 )
          {
            v262 = (_QWORD *)((char *)v262 + 2);
            v260 = (_QWORD *)((char *)v260 + 2);
          }
          if ( v262 < v261 && *(_BYTE *)v260 == *(_BYTE *)v262 )
            LODWORD(v262) = (_DWORD)v262 + 1;
          v284 = (_DWORD)v262 - (_DWORD)v259;
        }
        else
        {
          if ( *v260 == *v259 )
          {
            v262 = (_QWORD *)(v183 + 12);
            goto LABEL_397;
          }
          __asm { tzcnt   rcx, rax }
          v284 = (unsigned int)_RCX >> 3;
        }
LABEL_460:
        v286 = v284 + 4;
        v287 = (_QWORD *)(v183 + (int)(v284 + 4));
        if ( v287 == v261 && (unsigned __int64)v261 < v395 )
        {
          v288 = v397;
          v289 = (_QWORD *)(v183 + v286);
          if ( (unsigned __int64)v287 >= v395 - 7 )
            goto LABEL_474;
          if ( *v287 != *v397 )
          {
            __asm { tzcnt   rcx, rax }
            v292 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v289 = v287 + 1;
            v288 = v397 + 1;
LABEL_474:
            while ( (unsigned __int64)v289 < v395 - 7 )
            {
              if ( *v288 != *v289 )
              {
                __asm { tzcnt   rax, rax }
                v292 = ((unsigned int)_RAX >> 3) - (_DWORD)v287 + (_DWORD)v289;
                goto LABEL_465;
              }
              ++v289;
              ++v288;
            }
            if ( (unsigned __int64)v289 < v395 - 3 && *(_DWORD *)v288 == *(_DWORD *)v289 )
            {
              v289 = (_QWORD *)((char *)v289 + 4);
              v288 = (_QWORD *)((char *)v288 + 4);
            }
            if ( (unsigned __int64)v289 < v395 - 1 && *(_WORD *)v288 == *(_WORD *)v289 )
            {
              v289 = (_QWORD *)((char *)v289 + 2);
              v288 = (_QWORD *)((char *)v288 + 2);
            }
            if ( (unsigned __int64)v289 < v395 && *(_BYTE *)v288 == *(_BYTE *)v289 )
              LODWORD(v289) = (_DWORD)v289 + 1;
            v292 = (_DWORD)v289 - (_DWORD)v287;
          }
LABEL_465:
          v286 += v292;
        }
        v266 = 0;
        if ( v413 )
        {
          v293 = 0LL;
          if ( (__int64)((__int64)v391 - v183) <= (__int64)(v415 - (_QWORD)v189) )
            v294 = v415 - (_DWORD)v189;
          else
            v294 = (_DWORD)v391 - v183;
          v295 = v189 - 1;
          v296 = -v294;
          v297 = v183 - (_QWORD)v189;
          while ( v296 > 3 )
          {
            if ( *v295 != *(_DWORD *)((char *)v295 + v297) )
            {
              _BitScanReverse(&v356, *v295 ^ *(_DWORD *)((char *)v295 + v297));
              v266 -= (31 - v356) >> 3;
              goto LABEL_405;
            }
            v266 -= 4;
            v296 -= 4;
            v293 -= 4LL;
            --v295;
          }
          if ( (__int64)v293 > v294 )
          {
            v265 = (char *)&v189[v293 / 4 - 1] + 3;
            do
            {
              if ( v265[(_QWORD)v391 + SHIDWORD(v403) - v415 - v188 - 2] != *v265 )
                break;
              --v265;
              --v266;
            }
            while ( (__int64)&v265[1 - v415 - v188] > v294 );
          }
LABEL_405:
          v187 = v395;
        }
        v173 = v381;
        v267 = v286 - v266;
        v184 = v389;
        if ( v267 > v384 )
        {
          v384 = v267;
          v393 = v400 - v181;
          v398 = v183 + v266;
        }
      }
      v185 = v379;
LABEL_409:
      if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v181 + 0x20000) != 1 )
        goto LABEL_413;
      v268 = v181 - 1;
      if ( v184 )
      {
        if ( v389 != 2 )
          goto LABEL_413;
      }
      else
      {
        if ( (_BYTE)v173 != HIBYTE(v173) || (unsigned __int16)v173 != HIWORD(v173) )
        {
          v389 = 1;
LABEL_413:
          v269 = v387;
LABEL_414:
          v181 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v181 + 0x20000);
          goto LABEL_319;
        }
        v389 = 2;
        v429 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v183 + 4), v187, v173) + 4LL;
      }
      v269 = v387;
      if ( v268 < v387 || v409 - v181 < 3 )
        goto LABEL_414;
      if ( v268 >= v409 )
      {
        v270 = 0;
        v271 = (unsigned __int64)v397 + v268 - v409;
      }
      else
      {
        v270 = 1;
        v271 = v415 + v268 - v185;
      }
      if ( *(_DWORD *)v271 != v173 )
        goto LABEL_414;
      v272 = v395;
      if ( v270 )
        v272 = v427;
      v273 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v271 + 4), v272, v173) + 4LL;
      if ( v270 )
      {
        if ( v273 + v271 == v272 )
        {
          v366 = v381;
          v367 = 8 * (v273 & 3);
          if ( v367 )
            v366 = __ROL4__(v381, v367);
          v273 += (unsigned int)LZ4HC_countPattern(v397, v395, v366);
        }
        v274 = v415;
      }
      else
      {
        v274 = (unsigned __int64)v397;
      }
      v275 = LZ4HC_reverseCountPattern(v271, v274, v381);
      v276 = v397;
      v277 = v275;
      if ( !v270 && (_QWORD *)(v271 - v275) == v397 && v379 < v409 )
      {
        v281 = v381;
        v282 = 8LL * (-v275 & 3);
        if ( v282 )
          v281 = __ROL4__(v381, v282);
        v277 = LZ4HC_reverseCountPattern(v427, v415, v281) + v275;
        v276 = v397;
      }
      v269 = v387;
      v181 = v387;
      if ( v268 - v277 > v387 )
        v181 = v268 - v277;
      v278 = v273 + v268 - v181;
      if ( v278 < v429 || v273 > v429 )
      {
        if ( v409 - v181 - 1 < 3 )
        {
          v181 = v409;
        }
        else if ( !v413 )
        {
          v279 = v429;
          if ( v278 < v429 )
            v279 = v273 + v268 - v181;
          if ( v384 < v279 )
          {
            if ( v183 + v409 - (unsigned __int64)v181 - (_QWORD)v276 > 0xFFFF )
              goto LABEL_320;
            v384 = v279;
            v393 = v400 - v181;
            v398 = v183;
          }
          v280 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v181 + 0x20000);
          if ( v280 > v181 )
            goto LABEL_320;
          v181 -= v280;
        }
      }
      else
      {
        v283 = v273 + v268 - v429;
        v181 = v409;
        if ( v409 - v283 - 1 >= 3 )
          v181 = v283;
      }
LABEL_319:
      v169 = v397;
      v173 = v381;
      v171 = v415;
      v182 = v413;
      if ( v181 < v269 )
        goto LABEL_320;
    }
  }
  return LZ4HC_compress_generic_dictCtx((void *)a1, a2, a5, v377, a7);
}
