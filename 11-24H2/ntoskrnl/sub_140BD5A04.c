/*
 * XREFs of sub_140BD5A04 @ 0x140BD5A04
 * Callers:
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     sub_140BDAD30 @ 0x140BDAD30 (sub_140BDAD30.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 */

__int64 __fastcall sub_140BD5A04(__int64 *a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  __int64 *v4; // rdi
  __int64 v5; // r12
  _BYTE *v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // r14d
  _BYTE *v13; // r15
  int v14; // r13d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // r11d
  _BYTE *v19; // r10
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r14d
  __int64 (__fastcall *v25)(ULONG_PTR, char *, _BYTE *, __int64); // rax
  __int64 v26; // rax
  ULONG_PTR v27; // r15
  unsigned int **v28; // r8
  int v29; // r12d
  int v30; // ecx
  unsigned int *v31; // rax
  int v32; // ecx
  unsigned int v33; // esi
  __int64 v34; // r9
  _BYTE *v35; // r14
  unsigned int v36; // ecx
  unsigned int v37; // edx
  int v38; // edi
  unsigned int v39; // r11d
  _BYTE *v40; // r10
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  char **v48; // rsi
  _BYTE *v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rdx
  char *v52; // rdx
  __int64 v53; // r9
  ULONG_PTR v54; // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(ULONG_PTR, __int64, _QWORD, __int64 *); // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // ecx
  __int64 (__fastcall *v60)(ULONG_PTR, __int64, __int64, __int64 *); // rax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  int v64; // ecx
  __int64 (__fastcall *v65)(ULONG_PTR); // rax
  __int64 v66; // rdi
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // r11
  __int64 v70; // r8
  _QWORD *v71; // r9
  unsigned __int64 v72; // r10
  int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // r8
  unsigned int v78; // eax
  _BYTE *v79; // rdi
  int v80; // ecx
  unsigned int v81; // eax
  __int64 v82; // r8
  int v83; // edx
  unsigned __int64 v84; // rcx
  int v85; // ebx
  _BYTE *v86; // r10
  _QWORD *v87; // r13
  _DWORD *v88; // r12
  __int64 v89; // r15
  int v90; // ecx
  _QWORD *v91; // rsi
  _QWORD *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // r9
  const char *v95; // rax
  int v96; // ebx
  __int64 v97; // r14
  unsigned __int64 v98; // r8
  unsigned int v99; // r11d
  __int64 v100; // rax
  __int64 v101; // r8
  unsigned __int128 v102; // rax
  unsigned int v103; // edx
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 i; // rax
  char *v107; // r12
  ULONG_PTR v108; // rsi
  __int64 *v109; // rsi
  __int64 v110; // rdx
  _BYTE *v111; // rbx
  int v112; // ecx
  char *v113; // r12
  unsigned int v114; // r9d
  _DWORD *v115; // r15
  _QWORD *v116; // r11
  _QWORD *v117; // rax
  _QWORD *v118; // r10
  const char *v119; // rax
  int v120; // edi
  __int64 v121; // r14
  unsigned __int64 v122; // rcx
  ULONG_PTR v123; // r8
  unsigned int v124; // esi
  __int64 v125; // rdx
  __int64 v126; // rax
  ULONG_PTR v127; // r8
  _QWORD *v128; // r10
  __int64 v129; // r8
  unsigned __int128 v130; // rax
  char v131; // di
  unsigned __int64 v132; // r9
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  bool v135; // zf
  ULONG_PTR j; // rax
  char *v137; // rsi
  __int64 v138; // rsi
  unsigned int v139; // eax
  int v140; // ecx
  unsigned int v141; // eax
  __int64 v142; // r8
  int v143; // edx
  unsigned __int64 v144; // rcx
  int v145; // ebx
  int v146; // ecx
  _QWORD *v147; // rax
  __int64 v148; // rdx
  __int64 v149; // r15
  __int64 v150; // r14
  int v151; // r10d
  __int64 v152; // rbx
  const char *v153; // rax
  unsigned int v154; // r11d
  __int64 v155; // rax
  ULONG_PTR v156; // r8
  _QWORD *v157; // r9
  __int64 v158; // r8
  unsigned __int128 v159; // rax
  unsigned __int64 v160; // rax
  __int64 v161; // rax
  ULONG_PTR k; // rax
  ULONG_PTR v163; // r15
  __int64 v164; // rbx
  __int64 v165; // rax
  int v166; // ecx
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  __int64 v169; // rax
  unsigned __int16 v170; // r10
  int v171; // ecx
  __int64 v172; // rcx
  __int64 v173; // r10
  __int64 v174; // r8
  _QWORD *v175; // rdx
  unsigned __int64 v176; // r9
  int v177; // ecx
  __int64 v178; // rax
  __int64 v179; // rcx
  _BYTE *v180; // rbx
  unsigned int *v181; // r12
  __int64 v182; // r11
  unsigned int v183; // ecx
  unsigned int *v184; // rdx
  unsigned int *v185; // r9
  unsigned int v186; // r13d
  unsigned int v187; // r8d
  unsigned int v188; // r13d
  unsigned int v189; // eax
  __int64 v190; // rax
  unsigned int v191; // esi
  unsigned int v192; // r15d
  unsigned int v193; // esi
  unsigned int *v194; // rax
  unsigned int *v195; // r14
  ULONG_PTR v196; // r8
  unsigned int v197; // eax
  int v198; // ecx
  __int64 v199; // rcx
  __int64 v200; // r10
  __int64 v201; // r8
  _QWORD *v202; // rdx
  unsigned __int64 v203; // r9
  int v204; // ecx
  __int64 v205; // rax
  unsigned int *v206; // rax
  unsigned int v207; // eax
  int v208; // ecx
  __int64 v209; // rcx
  __int64 v210; // r10
  __int64 v211; // r8
  _QWORD *v212; // rdx
  unsigned __int64 v213; // r9
  int v214; // ecx
  __int64 v215; // rax
  int v216; // r9d
  __int64 v217; // r14
  int v218; // ecx
  __int64 v219; // rcx
  __int64 v220; // r11
  _QWORD *v221; // r9
  unsigned __int64 v222; // r10
  __int64 v223; // rax
  int v224; // edx
  int v225; // ecx
  __int64 v226; // rcx
  __int64 v227; // r11
  _QWORD *v228; // r9
  unsigned __int64 v229; // r10
  int v230; // ecx
  __int64 v231; // rax
  __int64 v232; // rcx
  __int64 v233; // rax
  __int64 v234; // r11
  int v235; // ecx
  __int64 v236; // rcx
  __int64 v237; // r11
  _QWORD *v238; // r9
  unsigned __int64 v239; // r10
  int v240; // ecx
  __int64 v241; // rax
  int v242; // edx
  __int64 v243; // rsi
  unsigned int v244; // ecx
  int v245; // ecx
  unsigned int v246; // eax
  __int64 v247; // r8
  int v248; // edx
  unsigned __int64 v249; // rcx
  int v250; // ebx
  __int64 v251; // rdx
  __int64 v252; // rcx
  _QWORD *v253; // rax
  int v254; // r8d
  unsigned int *v255; // rbx
  unsigned __int64 v256; // rdx
  unsigned __int64 m; // rax
  char *v258; // rcx
  char *v259; // r14
  _DWORD *v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rcx
  _DWORD *v263; // r12
  int v264; // r13d
  int v265; // ecx
  _DWORD *v266; // rax
  __int16 v267; // cx
  char *v268; // rdx
  char *v269; // r9
  __int64 v270; // r8
  char *v271; // r10
  int v272; // r11d
  char *v273; // rbx
  char v274; // cl
  char v275; // al
  unsigned int v276; // edx
  char *v277; // r8
  __int64 v278; // rcx
  __int64 v279; // rax
  char v280; // cl
  char v281; // al
  int v282; // r8d
  __int64 v283; // rdx
  char v284; // cl
  char v285; // al
  int v286; // r8d
  __int64 v287; // rdx
  char v288; // cl
  char v289; // al
  int v290; // ecx
  unsigned int v291; // esi
  unsigned int v292; // edx
  unsigned int *v293; // r8
  unsigned int v294; // esi
  unsigned int v295; // r12d
  unsigned int v296; // eax
  unsigned int v297; // r15d
  bool v298; // cf
  unsigned int v299; // r9d
  __int64 v300; // rbx
  unsigned __int64 v301; // r11
  unsigned int *v302; // rdx
  unsigned __int64 v303; // rbx
  unsigned __int64 *v304; // r8
  unsigned int v305; // r10d
  _QWORD *v306; // r10
  int v307; // esi
  const char *v308; // rax
  __int64 v309; // r14
  unsigned __int64 v310; // rcx
  unsigned __int64 v311; // r8
  unsigned int v312; // ebx
  __int64 v313; // rax
  __int64 v314; // r8
  unsigned __int64 v315; // rcx
  unsigned int v316; // r9d
  unsigned __int64 v317; // rax
  __int64 v318; // rax
  unsigned __int64 n; // rax
  unsigned int *v320; // r14
  unsigned int v321; // r15d
  char *v322; // rax
  char v323; // r8
  __int64 v324; // rbx
  int v325; // ecx
  __int64 v326; // rcx
  __int64 v327; // r11
  __int64 v328; // r8
  _QWORD *v329; // r9
  unsigned __int64 v330; // r10
  __int64 v331; // rax
  int v332; // ecx
  unsigned int *v333; // rdx
  unsigned __int64 v334; // r11
  ULONG_PTR *v335; // r8
  unsigned int v336; // r9d
  ULONG_PTR v337; // rbx
  unsigned int ii; // r10d
  _QWORD *v339; // r10
  int v340; // esi
  const char *v341; // rax
  __int64 v342; // r14
  unsigned __int64 v343; // rcx
  unsigned __int64 v344; // r8
  unsigned int v345; // ebx
  __int64 v346; // rax
  __int64 v347; // r8
  unsigned __int128 v348; // rax
  unsigned int v349; // r9d
  unsigned __int64 v350; // rax
  __int64 v351; // rax
  unsigned __int64 jj; // rax
  char *v353; // r14
  unsigned int *v354; // rcx
  unsigned __int64 v355; // r11
  unsigned int v356; // r9d
  _QWORD *v357; // rdx
  unsigned int v358; // r8d
  _QWORD *v359; // r10
  int v360; // esi
  const char *v361; // rax
  __int64 v362; // r14
  unsigned __int64 v363; // rcx
  unsigned __int64 v364; // r8
  unsigned int v365; // ebx
  __int64 v366; // rax
  __int64 v367; // r8
  _QWORD *v368; // r10
  __int64 v369; // r8
  unsigned __int128 v370; // rax
  unsigned int v371; // r9d
  unsigned __int64 v372; // rax
  __int64 v373; // rax
  unsigned __int64 kk; // rax
  unsigned int *v375; // r8
  char *v376; // rax
  __int64 v377; // r15
  __int64 v378; // rax
  __int64 v379; // rcx
  __int64 v380; // rax
  __int64 v381; // rdi
  __int64 mm; // rbx
  __int64 v383; // rax
  __int64 v384; // rdx
  __int64 v385; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v386; // [rsp+50h] [rbp-B8h] BYREF
  char *v387; // [rsp+58h] [rbp-B0h]
  ULONG_PTR v388; // [rsp+60h] [rbp-A8h]
  unsigned int *v389; // [rsp+68h] [rbp-A0h]
  __int64 v390; // [rsp+70h] [rbp-98h]
  unsigned int *v391; // [rsp+78h] [rbp-90h]
  char *v392; // [rsp+80h] [rbp-88h]
  unsigned int *v393; // [rsp+88h] [rbp-80h]
  __int64 v394; // [rsp+90h] [rbp-78h]
  __int64 v395; // [rsp+98h] [rbp-70h]
  __int64 v396; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v397; // [rsp+A8h] [rbp-60h]
  unsigned int v398; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v399; // [rsp+B8h] [rbp-50h]
  int v400; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v401; // [rsp+C8h] [rbp-40h]
  unsigned int v402; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v403; // [rsp+D8h] [rbp-30h] BYREF
  int v404; // [rsp+DCh] [rbp-2Ch] BYREF
  _DWORD v405[6]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v406; // [rsp+F8h] [rbp-10h]
  int v407; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v408[6]; // [rsp+108h] [rbp+0h] BYREF
  char v409[8]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v410; // [rsp+140h] [rbp+38h]
  int v411; // [rsp+14Ch] [rbp+44h]
  __int64 v412; // [rsp+150h] [rbp+48h]
  __int64 v413; // [rsp+158h] [rbp+50h]
  __int64 v414; // [rsp+160h] [rbp+58h]
  __int64 v415; // [rsp+168h] [rbp+60h]
  __int64 v416; // [rsp+170h] [rbp+68h]
  __int64 v417; // [rsp+178h] [rbp+70h]
  char v418[8]; // [rsp+180h] [rbp+78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+188h] [rbp+80h]
  int v420; // [rsp+194h] [rbp+8Ch]
  __int64 v424; // [rsp+200h] [rbp+F8h]
  unsigned int v425; // [rsp+200h] [rbp+F8h]
  unsigned __int16 v426; // [rsp+200h] [rbp+F8h]
  unsigned int v427; // [rsp+200h] [rbp+F8h]

  v3 = a2;
  v4 = a1;
  v386 = (_BYTE *)*a1;
  v5 = (*((__int64 (__fastcall **)(ULONG_PTR, char *))v386 + 66))(a2, v409);
  v424 = v5;
  v6 = 0LL;
  v406 = v410;
  if ( !v410 )
  {
    if ( (*((_DWORD *)v386 + 630) & 0x100000) == 0 )
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v3, 5uLL, 0LL);
    return 3221225595LL;
  }
  v8 = 4;
  v399 = 0LL;
  v9 = &v400;
  do
  {
    *(_BYTE *)v9 = 0;
    v9 = (int *)((char *)v9 + 1);
    --v8;
  }
  while ( v8 );
  v10 = v386;
  v11 = 0LL;
  v12 = *((_DWORD *)v386 + 523);
  if ( !v12 )
    goto LABEL_46;
  v13 = (_BYTE *)*((_QWORD *)v386 + 344);
  v14 = v411;
  v15 = v400;
  v16 = HIDWORD(v399);
  v17 = v399;
  while ( 1 )
  {
    v18 = 0;
    v19 = v386;
    if ( v13 )
      v19 = v13;
    v6 = &v19[*((unsigned int *)v19 + 522)];
    if ( v17 && v16 <= (unsigned int)v11 )
    {
      v18 = v16;
      v6 = &v19[v15];
    }
    if ( v18 != (_DWORD)v11 )
    {
      v20 = (unsigned int)v11 - v18;
      v18 = v11;
      while ( 1 )
      {
        if ( *(_DWORD *)v6 == 1 )
        {
LABEL_31:
          v21 = 4 * (*((_DWORD *)v6 + 4) / 0xCu) + 48;
          goto LABEL_32;
        }
        if ( *(_DWORD *)v6 == 7 )
        {
          v21 = (unsigned int)(24 * (*((_DWORD *)v6 + 6) + 2));
          goto LABEL_32;
        }
        if ( *(_DWORD *)v6 == 8 )
          break;
        switch ( *(_DWORD *)v6 )
        {
          case 0xA:
            v21 = (unsigned int)(16 * (*((_DWORD *)v6 + 7) + 3));
            break;
          case 0x1C:
            v22 = *((unsigned __int16 *)v6 + 20);
LABEL_29:
            v21 = (v22 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v21 = (((*((_DWORD *)v6 + 9) != 0 ? *((_DWORD *)v6 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                + 24 * (*((unsigned __int16 *)v6 + 20) + 2);
            break;
          case 0x21:
            v21 = 20
                * (unsigned int)(((*((_DWORD *)v6 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v6 + 10) + 4095) >> 12)
                + 48;
            break;
          case 0x2B:
            goto LABEL_31;
          default:
            v21 = 48LL;
            break;
        }
LABEL_32:
        v6 += v21;
        if ( !--v20 )
        {
          v3 = a2;
          v5 = v424;
          v14 = v411;
          goto LABEL_34;
        }
      }
      v22 = *((unsigned __int16 *)v6 + 16);
      goto LABEL_29;
    }
LABEL_34:
    v17 = 1;
    LODWORD(v399) = 1;
    v23 = *(_DWORD *)v6;
    v15 = (_DWORD)v6 - (_DWORD)v19;
    v400 = (_DWORD)v6 - (_DWORD)v19;
    v16 = v18;
    HIDWORD(v399) = v18;
    if ( (v23 == 1 || v23 == 12 || v23 == 43) && *((_QWORD *)v6 + 1) == v5 && *((_DWORD *)v6 + 4) == v14 )
      break;
    if ( (unsigned int)(v23 - 33) <= 1 && *((_QWORD *)v6 + 4) == v406 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_45;
  }
  if ( v6 )
    return 3221225742LL;
LABEL_45:
  v4 = a1;
LABEL_46:
  v24 = a3;
  v25 = (__int64 (__fastcall *)(ULONG_PTR, char *, _BYTE *, __int64))*((_QWORD *)v386 + 66);
  v425 = a3;
  v396 = (__int64)v386;
  v26 = v25(v3, v418, v6, v11);
  v27 = BugCheckParameter2;
  v28 = 0LL;
  v29 = v420;
  v391 = (unsigned int *)v26;
  LODWORD(v392) = v420;
  LODWORD(v385) = v420;
  v388 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    if ( (*((_DWORD *)v386 + 630) & 0x100000) == 0 )
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v3, 5uLL, 0LL);
    v30 = -1073741701;
    *v4 = (__int64)v386;
    return (unsigned int)v30;
  }
  v401 = 0LL;
  v31 = &v402;
  v32 = 4;
  do
  {
    *(_BYTE *)v31 = 0;
    v31 = (unsigned int *)((char *)v31 + 1);
    --v32;
  }
  while ( v32 );
  v33 = *((_DWORD *)v10 + 523);
  v34 = 0LL;
  if ( v33 )
  {
    v35 = (_BYTE *)*((_QWORD *)v10 + 344);
    v36 = v402;
    v37 = HIDWORD(v401);
    v38 = v401;
    while ( 1 )
    {
      v39 = 0;
      v40 = v10;
      if ( v35 )
        v40 = v35;
      v28 = (unsigned int **)&v40[*((unsigned int *)v40 + 522)];
      if ( v38 && v37 <= (unsigned int)v34 )
      {
        v39 = v37;
        v28 = (unsigned int **)&v40[v36];
      }
      if ( v39 != (_DWORD)v34 )
        break;
LABEL_79:
      v38 = 1;
      LODWORD(v401) = 1;
      v44 = *(_DWORD *)v28;
      v36 = (_DWORD)v28 - (_DWORD)v40;
      v402 = (_DWORD)v28 - (_DWORD)v40;
      v37 = v39;
      HIDWORD(v401) = v39;
      if ( (v44 == 1 || v44 == 12 || v44 == 43) && v28[1] == v391 && *((_DWORD *)v28 + 4) == v29
        || (unsigned int)(v44 - 33) <= 1 && v28[4] == (unsigned int *)v27 )
      {
        if ( !v28 )
        {
          v24 = a3;
          goto LABEL_91;
        }
LABEL_101:
        v47 = (__int64)v386;
LABEL_563:
        v109 = a1;
        *a1 = v47;
        goto LABEL_564;
      }
      v34 = (unsigned int)(v34 + 1);
      if ( (unsigned int)v34 >= v33 )
      {
        v24 = a3;
        goto LABEL_91;
      }
    }
    v41 = (unsigned int)v34 - v39;
    v39 = v34;
    while ( 2 )
    {
      if ( *(_DWORD *)v28 == 1 )
        goto LABEL_76;
      if ( *(_DWORD *)v28 != 7 )
      {
        switch ( *(_DWORD *)v28 )
        {
          case 8:
            v43 = *((unsigned __int16 *)v28 + 16);
            break;
          case 0xA:
            v42 = (unsigned int)(16 * (*((_DWORD *)v28 + 7) + 3));
            goto LABEL_77;
          case 0x1C:
            v43 = *((unsigned __int16 *)v28 + 20);
            break;
          default:
            switch ( *(_DWORD *)v28 )
            {
              case 0x1E:
                v42 = (((*((_DWORD *)v28 + 9) != 0 ? *((_DWORD *)v28 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v28 + 20) + 2);
                break;
              case 0x21:
                v42 = 20
                    * (unsigned int)((((_DWORD)v28[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v28 + 10) + 4095) >> 12)
                    + 48;
                break;
              case 0x2B:
LABEL_76:
                v42 = 4 * (*((_DWORD *)v28 + 4) / 0xCu) + 48;
                break;
              default:
                v42 = 48LL;
                break;
            }
LABEL_77:
            v28 = (unsigned int **)((char *)v28 + v42);
            if ( !--v41 )
            {
              v27 = v388;
              v29 = (int)v392;
              goto LABEL_79;
            }
            continue;
        }
        v42 = (v43 + 55) & 0xFFFFFFF8;
        goto LABEL_77;
      }
      break;
    }
    v42 = (unsigned int)(24 * (*((_DWORD *)v28 + 6) + 2));
    goto LABEL_77;
  }
LABEL_91:
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 631) & 0x400) == 0 )
  {
    v24 = a3 & 0xFFFFFFEF;
    v425 = a3 & 0xFFFFFFEF;
  }
  if ( (v24 & 0x10) != 0 && !(unsigned int)sub_140BDAD30(v10, v27, v28, v34) )
  {
    v24 &= ~0x10u;
    v425 = v24;
  }
  if ( (v24 & 2) != 0 )
  {
    (*((void (__fastcall **)(ULONG_PTR))v10 + 65))(v27);
    LOBYTE(v45) = 1;
    v46 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))v10 + 64))(v27, v45, 0LL, &v403);
    if ( !v46
      || v403 < 0x28
      || (*((unsigned int (__fastcall **)(ULONG_PTR, _BYTE *, __int64))v10 + 28))(
           v27 + *(unsigned int *)(v46 + 12),
           v10 + 2416,
           5LL) )
    {
      goto LABEL_101;
    }
  }
  v48 = (char **)*((_QWORD *)v10 + 165);
  LODWORD(v393) = v24 & 1;
  _disable();
  v49 = (_BYTE *)v396;
  v50 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v396 + 1624));
  _enable();
  (*((void (__fastcall **)(__int64))v49 + 47))(v50);
  LOBYTE(v51) = 1;
  (*((void (__fastcall **)(_QWORD, __int64))v49 + 31))(*((_QWORD *)v49 + 166), v51);
  v52 = *v48;
  if ( *v48 != (char *)v48 )
  {
    v53 = *(_QWORD *)(v396 + 1880);
    while ( 1 )
    {
      v54 = *(_QWORD *)&v52[*(_QWORD *)(v396 + 1888) - v53];
      if ( v27 >= v54 && v27 < v54 + *(unsigned int *)&v52[*(_QWORD *)(v396 + 1896) - v53] )
        break;
      v52 = *(char **)v52;
      if ( v52 == (char *)v48 )
        goto LABEL_109;
    }
    (*(void (__fastcall **)(char *, _QWORD))(v396 + 232))(&v52[-v53], (unsigned int)!(v24 & 1) + 1);
  }
LABEL_109:
  (*(void (__fastcall **)(_QWORD))(v396 + 296))(*(_QWORD *)(v396 + 1328));
  (*(void (**)(void))(v396 + 384))();
  if ( (*(_DWORD *)(v396 + 2520) & 0x20000000) != 0 )
  {
    v30 = sub_140BE196C(&v386, v27, v24);
    goto LABEL_368;
  }
  v56 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, __int64 *))(v396 + 512);
  v408[4] = 0LL;
  LOBYTE(v55) = 1;
  v405[4] = 0;
  v57 = v56(v27, v55, 0LL, &v385);
  if ( v57 )
  {
    v59 = v385;
  }
  else
  {
    v59 = 0;
    LODWORD(v385) = 0;
  }
  v408[1] = v57;
  v60 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64 *))*((_QWORD *)v49 + 64);
  v405[1] = v59;
  LOBYTE(v58) = 1;
  v397 = v60(v27, v58, 12LL, &v385);
  if ( v397 )
  {
    v62 = v385;
  }
  else
  {
    v62 = 0;
    LODWORD(v385) = 0;
  }
  LODWORD(v387) = v62;
  v408[2] = v397;
  v405[2] = v62;
  LOBYTE(v61) = 1;
  v63 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, __int64 *))v49 + 64))(v27, v61, 10LL, &v385);
  if ( v63 )
  {
    v64 = v385;
  }
  else
  {
    v64 = 0;
    LODWORD(v385) = 0;
  }
  v408[3] = v63;
  v65 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v49 + 65);
  v405[3] = v64;
  v66 = v65(v27);
  if ( !v66 )
  {
    v67 = *((_DWORD *)v49 + 630);
    if ( (v67 & 0x100000) == 0 )
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v27, 7uLL, 0LL);
    if ( !*((_DWORD *)v49 + 582) )
    {
      *((_QWORD *)v49 + 293) = 0LL;
      *((_QWORD *)v49 + 294) = 271LL;
      *((_QWORD *)v49 + 292) = v49 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v49 + 295) = v27;
      *((_DWORD *)v49 + 582) = 1;
      if ( (v67 & 0x20000000) == 0 && (*((_DWORD *)v49 + 631) & 0x200000) != 0 && (v67 & 1) != 0 )
      {
        v68 = *((unsigned int *)v49 + 669);
        v69 = *((_QWORD *)v49 + 263);
        v70 = *((_QWORD *)v49 + 335);
        v71 = &v49[v68];
        v72 = (unsigned __int64)&v49[8 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v49 + 513) - v68) >> 3) + v68];
        while ( v71 != (_QWORD *)v72 )
        {
          *v71 ^= v70;
          v70 = ((*v71++ ^ v69) + __ROR8__(v70, v70 & 0x3F)) ^ 0xEFA;
        }
        *((_DWORD *)v49 + 631) &= ~0x200000u;
        if ( v70 != *((_QWORD *)v49 + 336) )
        {
          v73 = *((_DWORD *)v49 + 513);
          v74 = *((_QWORD *)v49 + 177);
          *(_QWORD *)v74 = v49;
          *(_DWORD *)(v74 + 16) = v73;
          if ( !*((_DWORD *)v49 + 582) )
            *(_QWORD *)(*((_QWORD *)v49 + 177) + 24LL) = v70 ^ *((_QWORD *)v49 + 336);
          sub_140BDA384(v49, 0LL, v70, 256LL);
        }
      }
    }
    v30 = -1073741701;
    goto LABEL_253;
  }
  v75 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v49 + 147))(v27, &v407);
  v76 = *((unsigned int *)v49 + 513);
  v77 = *((unsigned int *)v49 + 593);
  v408[5] = v75;
  v405[5] = v407;
  v405[0] = *(_DWORD *)(v66 + 84);
  v78 = v76 + 288;
  v408[0] = v27;
  if ( (unsigned int)(v76 + 288) <= *((_DWORD *)v49 + 665) )
  {
    v79 = v49;
    v395 = (__int64)v49;
    *((_DWORD *)v49 + 513) = v78;
    goto LABEL_151;
  }
  v395 = sub_140BD9AF8(v49, v78, v77);
  v79 = (_BYTE *)v395;
  if ( !v395 )
    goto LABEL_252;
  v80 = *((_DWORD *)v49 + 630);
  if ( (v80 & 2) == 0 )
  {
    v81 = *((_DWORD *)v49 + 513);
    v82 = *((_QWORD *)v49 + 253);
    v83 = (v80 & 0x10000000) != 0 ? *((_DWORD *)v49 + 593) : 0;
    if ( v81 >= 8 )
    {
      v84 = (unsigned __int64)v81 >> 3;
      do
      {
        *(_QWORD *)v49 = 0LL;
        v81 -= 8;
        v49 += 8;
        --v84;
      }
      while ( v84 );
    }
    for ( ; v81; --v81 )
      *v49++ = 0;
    v85 = *((_DWORD *)v79 + 593);
    *((_DWORD *)v79 + 593) = v83;
    if ( v83 == 3 )
    {
      (*((void (__fastcall **)(__int64))v79 + 109))(v82);
    }
    else if ( (*((_DWORD *)v79 + 630) & 0x8000000) != 0 || !v83 )
    {
      (*((void (__fastcall **)(__int64))v79 + 33))(v82);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v79 + 71))(v82 - 8, *(_QWORD *)(v82 - 8));
    }
    *((_DWORD *)v79 + 593) = v85;
  }
  *((_DWORD *)v79 + 630) &= ~2u;
LABEL_151:
  *((_DWORD *)v79 + 523) += 6;
  v86 = &v79[v76];
  v394 = (__int64)&v79[v76];
  v87 = v408;
  v390 = 6LL;
  v88 = v405;
  do
  {
    v89 = (unsigned int)*v88;
    v90 = 48;
    v91 = (_QWORD *)*v87;
    v92 = v86;
    LODWORD(v389) = *v88;
    v93 = 6LL;
    do
    {
      *v92 = 0LL;
      v90 -= 8;
      ++v92;
      --v93;
    }
    while ( v93 );
    for ( ; v90; --v90 )
    {
      *(_BYTE *)v92 = 0;
      v92 = (_QWORD *)((char *)v92 + 1);
    }
    *(_DWORD *)v86 = 0;
    *((_QWORD *)v86 + 1) = v91;
    v94 = v91;
    *((_DWORD *)v86 + 4) = v89;
    v95 = (const char *)v91;
    *((_DWORD *)v79 + 530) += v89;
    v96 = *((_DWORD *)v79 + 525);
    v97 = *((_QWORD *)v79 + 263);
    if ( v91 < (_QWORD *)((char *)v91 + v89) )
    {
      do
      {
        _mm_prefetch(v95, 0);
        v95 += 64;
      }
      while ( v95 < (const char *)v91 + v89 );
    }
    v98 = *((_QWORD *)v79 + 263);
    v99 = (unsigned int)v89 >> 7;
    if ( (unsigned int)v89 >> 7 )
    {
      do
      {
        v100 = 8LL;
        do
        {
          v101 = v94[1] ^ __ROL8__(*v94 ^ v98, v96);
          v94 += 2;
          v98 = __ROL8__(v101, v96);
          --v100;
        }
        while ( v100 );
        v102 = (__ROL8__(v97 ^ ((char *)v94 - (char *)v91), 17) ^ v97 ^ (unsigned __int64)((char *)v94 - (char *)v91))
             * (unsigned __int128)0x7010008004002001uLL;
        v412 = *((_QWORD *)&v102 + 1);
        v96 = (BYTE8(v102) ^ (unsigned __int8)(v102 ^ v96)) & 0x3F;
        if ( !v96 )
          LOBYTE(v96) = 1;
        --v99;
      }
      while ( v99 );
      v79 = (_BYTE *)v395;
      LODWORD(v89) = (_DWORD)v389;
    }
    v103 = v89 & 0x7F;
    if ( v103 >= 8 )
    {
      v104 = (unsigned __int64)(v89 & 0x7F) >> 3;
      do
      {
        v98 = __ROL8__(*v94++ ^ v98, v96);
        v103 -= 8;
        --v104;
      }
      while ( v104 );
    }
    for ( ; v103; --v103 )
    {
      v105 = *(unsigned __int8 *)v94;
      v94 = (_QWORD *)((char *)v94 + 1);
      v98 = __ROL8__(v105 ^ v98, v96);
    }
    for ( i = v98 >> 31; i; i >>= 31 )
      v98 = (unsigned int)i ^ (unsigned int)v98;
    LODWORD(v98) = v98 & 0x7FFFFFFF;
    *((_DWORD *)v86 + 5) = v98;
    ++v88;
    *((_DWORD *)v79 + 530) += v89;
    v86 += 48;
    ++v87;
    --v390;
  }
  while ( v390 );
  v107 = (char *)v394;
  if ( !v79 )
    goto LABEL_252;
  v108 = v388;
  *(_QWORD *)(v394 + 24) = v388;
  *(_DWORD *)v107 = 44;
  if ( (*((_DWORD *)v79 + 630) & 0x8100000) == 0 && (*((_DWORD *)v79 + 631) & 0x8000) != 0 )
  {
    *((_DWORD *)v107 + 8) |= 1u;
    if ( (unsigned int)sub_140BDAD30(v79, v108, v98, v94) )
      *((_DWORD *)v107 + 8) |= 4u;
  }
  v396 = (__int64)v79;
  v386 = v79;
  v30 = sub_140BD80B0((unsigned int)&v396, (_DWORD)v391, (_DWORD)v392, v108, v425, (__int64)&v398, (__int64)&v404);
  if ( v30 < 0 )
  {
    v109 = a1;
    v47 = (__int64)v386;
    *a1 = (__int64)v386;
    goto LABEL_369;
  }
  v110 = 6LL;
  v111 = (_BYTE *)v396;
  v112 = 48;
  v113 = (char *)(v396 + v107 - v386);
  v114 = v404 - v398;
  v394 = (__int64)v113;
  v115 = v113 + 192;
  v116 = (_QWORD *)(v108 + v398);
  v117 = v113 + 192;
  do
  {
    *v117 = 0LL;
    v112 -= 8;
    ++v117;
    --v110;
  }
  while ( v110 );
  for ( ; v112; --v112 )
  {
    *(_BYTE *)v117 = 0;
    v117 = (_QWORD *)((char *)v117 + 1);
  }
  *v115 = 0;
  v118 = v116;
  *((_QWORD *)v113 + 25) = v116;
  v119 = (const char *)v116;
  *((_DWORD *)v113 + 52) = v114;
  *((_DWORD *)v111 + 530) += v114;
  v120 = *((_DWORD *)v111 + 525);
  v121 = *((_QWORD *)v111 + 263);
  v122 = (unsigned __int64)v116 + v114;
  if ( (unsigned __int64)v116 < v122 )
  {
    do
    {
      _mm_prefetch(v119, 0);
      v119 += 64;
    }
    while ( (unsigned __int64)v119 < v122 );
  }
  v123 = *((_QWORD *)v111 + 263);
  v124 = v114 >> 7;
  v125 = 1LL;
  if ( v114 >> 7 )
  {
    do
    {
      v126 = 8LL;
      do
      {
        v127 = *v118 ^ v123;
        v128 = v118 + 1;
        v129 = *v128 ^ __ROL8__(v127, v120);
        v118 = v128 + 1;
        v123 = __ROL8__(v129, v120);
        --v126;
      }
      while ( v126 );
      v130 = (__ROL8__(v121 ^ ((char *)v118 - (char *)v116), 17) ^ v121 ^ (unsigned __int64)((char *)v118 - (char *)v116))
           * (unsigned __int128)0x7010008004002001uLL;
      v413 = *((_QWORD *)&v130 + 1);
      v131 = v130 ^ BYTE8(v130) ^ v120;
      v125 = 1LL;
      v120 = v131 & 0x3F;
      if ( !v120 )
        LOBYTE(v120) = 1;
      --v124;
    }
    while ( v124 );
    v113 = (char *)v394;
  }
  v132 = v114 & 0x7F;
  if ( (unsigned int)v132 >= 8 )
  {
    v133 = (unsigned __int64)(unsigned int)v132 >> 3;
    do
    {
      v123 = __ROL8__(*v118++ ^ v123, v120);
      v132 = (unsigned int)(v132 - 8);
      --v133;
    }
    while ( v133 );
  }
  if ( (_DWORD)v132 )
  {
    do
    {
      v134 = *(unsigned __int8 *)v118;
      v118 = (_QWORD *)((char *)v118 + 1);
      v123 = __ROL8__(v134 ^ v123, v120);
      v135 = (_DWORD)v132 == 1;
      v132 = (unsigned int)(v132 - 1);
    }
    while ( !v135 );
  }
  for ( j = v123; ; v123 = (unsigned int)j ^ (unsigned int)v123 )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  LODWORD(v123) = v123 & 0x7FFFFFFF;
  v115[5] = v123;
  v137 = v113 + 96;
  *((_DWORD *)v113 + 60) = 48;
  v386 = v111;
  if ( v113 != (char *)-96LL )
  {
    LODWORD(v150) = (_DWORD)v387;
    v47 = (__int64)v111;
    v149 = v397;
    *(_DWORD *)v137 = 13;
    goto LABEL_244;
  }
  v138 = *((unsigned int *)v111 + 513);
  v139 = v138 + 48;
  if ( (unsigned int)(v138 + 48) <= *((_DWORD *)v111 + 665) )
  {
    v47 = (__int64)v111;
    *((_DWORD *)v111 + 513) = v139;
    goto LABEL_220;
  }
  v47 = sub_140BD9AF8(v111, v139, *((unsigned int *)v111 + 593));
  if ( !v47 )
    goto LABEL_252;
  v140 = *((_DWORD *)v111 + 630);
  if ( (v140 & 2) == 0 )
  {
    v141 = *((_DWORD *)v111 + 513);
    v142 = *((_QWORD *)v111 + 253);
    v143 = (v140 & 0x10000000) != 0 ? *((_DWORD *)v111 + 593) : 0;
    if ( v141 >= 8 )
    {
      v144 = (unsigned __int64)v141 >> 3;
      do
      {
        *(_QWORD *)v111 = 0LL;
        v141 -= 8;
        v111 += 8;
        --v144;
      }
      while ( v144 );
    }
    for ( ; v141; --v141 )
      *v111++ = 0;
    v145 = *(_DWORD *)(v47 + 2372);
    *(_DWORD *)(v47 + 2372) = v143;
    if ( v143 == 3 )
    {
      (*(void (__fastcall **)(__int64))(v47 + 872))(v142);
    }
    else if ( (*(_DWORD *)(v47 + 2520) & 0x8000000) != 0 || !v143 )
    {
      (*(void (__fastcall **)(__int64))(v47 + 264))(v142);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(v47 + 568))(v142 - 8, *(_QWORD *)(v142 - 8));
    }
    *(_DWORD *)(v47 + 2372) = v145;
  }
  *(_DWORD *)(v47 + 2520) &= ~2u;
LABEL_220:
  v146 = 48;
  ++*(_DWORD *)(v47 + 2092);
  v137 = (char *)(v47 + v138);
  v147 = v137;
  v148 = 6LL;
  do
  {
    *v147 = 0LL;
    v146 -= 8;
    ++v147;
    --v148;
  }
  while ( v148 );
  for ( ; v146; --v146 )
  {
    *(_BYTE *)v147 = 0;
    v147 = (_QWORD *)((char *)v147 + 1);
  }
  v149 = v397;
  v150 = (unsigned int)v387;
  v132 = v397;
  *(_DWORD *)v137 = 13;
  *((_QWORD *)v137 + 1) = v132;
  *((_DWORD *)v137 + 4) = v150;
  *(_DWORD *)(v47 + 2120) += v150;
  v151 = *(_DWORD *)(v47 + 2100);
  v152 = *(_QWORD *)(v47 + 2104);
  if ( v132 < v132 + v150 )
  {
    v153 = (const char *)v149;
    do
    {
      _mm_prefetch(v153, 0);
      v153 += 64;
    }
    while ( (unsigned __int64)v153 < v132 + v150 );
  }
  v123 = *(_QWORD *)(v47 + 2104);
  v154 = (unsigned int)v150 >> 7;
  if ( (unsigned int)v150 >> 7 )
  {
    do
    {
      v155 = 8LL;
      do
      {
        v156 = *(_QWORD *)v132 ^ v123;
        v157 = (_QWORD *)(v132 + 8);
        v158 = *v157 ^ __ROL8__(v156, v151);
        v132 = (unsigned __int64)(v157 + 1);
        v123 = __ROL8__(v158, v151);
        --v155;
      }
      while ( v155 );
      v159 = (__ROL8__(v152 ^ (v132 - v149), 17) ^ v152 ^ (v132 - v149)) * (unsigned __int128)0x7010008004002001uLL;
      v414 = *((_QWORD *)&v159 + 1);
      v151 = (BYTE8(v159) ^ (unsigned __int8)(v159 ^ v151)) & 0x3F;
      if ( !v151 )
        LOBYTE(v151) = 1;
      --v154;
    }
    while ( v154 );
    v113 = (char *)v394;
    LODWORD(v150) = (_DWORD)v387;
  }
  v125 = v150 & 0x7F;
  if ( (unsigned int)v125 >= 8 )
  {
    v160 = (unsigned __int64)(v150 & 0x7F) >> 3;
    do
    {
      v123 = __ROL8__(*(_QWORD *)v132 ^ v123, v151);
      v132 += 8LL;
      v125 = (unsigned int)(v125 - 8);
      --v160;
    }
    while ( v160 );
  }
  if ( (_DWORD)v125 )
  {
    do
    {
      v161 = *(unsigned __int8 *)v132++;
      v123 = __ROL8__(v161 ^ v123, v151);
      v135 = (_DWORD)v125 == 1;
      v125 = (unsigned int)(v125 - 1);
    }
    while ( !v135 );
  }
  for ( k = v123; ; v123 = (unsigned int)k ^ (unsigned int)v123 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v123) = v123 & 0x7FFFFFFF;
  *((_DWORD *)v137 + 5) = v123;
  *(_DWORD *)(v47 + 2120) += v150;
LABEL_244:
  if ( (*(_DWORD *)(v47 + 2520) & 0x20000000) != 0 && (_DWORD)v150 )
    sub_140516B3C(v47, v149, v150, (__int64)(v137 + 28));
  *((_DWORD *)v137 + 6) = 0;
  if ( (_DWORD)v393 )
    *((_DWORD *)v137 + 6) = 1;
  if ( !v47 )
  {
LABEL_252:
    v30 = -1073741670;
LABEL_253:
    *a1 = (__int64)v386;
    return (unsigned int)v30;
  }
  v163 = v388;
  v386 = (_BYTE *)v47;
  v298 = *((_DWORD *)v113 + 40) < 0x94u;
  *((_DWORD *)v113 + 36) = 35;
  if ( !v298 )
  {
    v164 = *((_QWORD *)v113 + 19);
    v165 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v47 + 520))(
             v163,
             v125,
             v123,
             v132);
    if ( !v165 )
      goto LABEL_252;
    v123 = v163 + *(unsigned int *)(v165 + 80);
    v125 = *((_DWORD *)v113 + 46) | 2u;
    *((_DWORD *)v113 + 46) = v125;
    v166 = v125;
    v167 = *(_QWORD **)(v164 + 112);
    if ( (unsigned __int64)v167 >= v163 && (unsigned __int64)v167 < v123 )
    {
      v166 = v125 | 4;
      *((_QWORD *)v113 + 21) = *v167;
      *((_DWORD *)v113 + 46) = v125 | 4;
    }
    v168 = *(_QWORD **)(v164 + 120);
    if ( (unsigned __int64)v168 >= v163 && (unsigned __int64)v168 < v123 )
    {
      *((_QWORD *)v113 + 22) = *v168;
      *((_DWORD *)v113 + 46) = v166 | 8;
    }
  }
  v386 = (_BYTE *)v47;
  v135 = (*(_DWORD *)(v47 + 2520) & 0x200000) == 0;
  v396 = v47;
  if ( v135 )
    goto LABEL_562;
  v169 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v47 + 520))(
           v163,
           v125,
           v123,
           v132);
  v395 = v169;
  if ( !v169 )
    goto LABEL_262;
  v170 = *(_WORD *)(v169 + 6);
  v426 = v170;
  v397 = (unsigned int)v392 / 0xCuLL;
  if ( !v170 )
  {
    v171 = *(_DWORD *)(v47 + 2520);
    if ( (v171 & 0x100000) == 0 )
      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v163, 0LL, 0LL);
    if ( *(_DWORD *)(v47 + 2328) )
      goto LABEL_262;
    *(_QWORD *)(v47 + 2344) = 0LL;
    *(_QWORD *)(v47 + 2352) = 271LL;
    *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v47 + 2360) = v163;
    *(_DWORD *)(v47 + 2328) = 1;
    if ( (v171 & 0x20000000) != 0 )
      goto LABEL_262;
    if ( (*(_DWORD *)(v47 + 2524) & 0x200000) == 0 )
      goto LABEL_262;
    if ( (v171 & 1) == 0 )
      goto LABEL_262;
    v172 = *(unsigned int *)(v47 + 2676);
    v173 = *(_QWORD *)(v47 + 2104);
    v174 = *(_QWORD *)(v47 + 2680);
    v175 = (_QWORD *)(v172 + v47);
    v176 = v172 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v172) >> 3);
    while ( v175 != (_QWORD *)v176 )
    {
      *v175 ^= v174;
      v174 = ((v173 ^ *v175++) + __ROR8__(v174, v174 & 0x3F)) ^ 0xEFA;
    }
    *(_DWORD *)(v47 + 2524) &= ~0x200000u;
    if ( v174 == *(_QWORD *)(v47 + 2688) )
      goto LABEL_262;
    v177 = *(_DWORD *)(v47 + 2052);
    v178 = *(_QWORD *)(v47 + 1416);
    *(_QWORD *)v178 = v47;
    *(_DWORD *)(v178 + 16) = v177;
    if ( !*(_DWORD *)(v47 + 2328) )
      *(_QWORD *)(*(_QWORD *)(v47 + 1416) + 24LL) = v174 ^ *(_QWORD *)(v47 + 2688);
    v179 = v47;
    goto LABEL_276;
  }
  v180 = (_BYTE *)v47;
  v181 = v391;
  v394 = v169 + *(unsigned __int16 *)(v169 + 20) + 24LL;
  v182 = v394;
  v390 = (__int64)&v391[3 * ((unsigned int)v392 / 0xC)];
  v183 = 0;
  LODWORD(v387) = 0;
  v184 = (unsigned int *)(v394 + 8);
  v185 = (unsigned int *)v390;
  v393 = (unsigned int *)(v394 + 8);
  while ( 2 )
  {
    v186 = v184[2];
    v187 = v184[1];
    if ( v186 <= *v184 )
      v186 = *v184;
    LODWORD(v389) = v184[1];
    v188 = v187 + v186;
    if ( v183 )
    {
      if ( v188 < *(_DWORD *)(v182 + 40LL * (v183 - 1) + 12) )
      {
        v218 = *(_DWORD *)(v47 + 2520);
        if ( (v218 & 0x100000) == 0 )
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v163, 1uLL, 0LL);
        if ( !*(_DWORD *)(v47 + 2328) )
        {
          *(_QWORD *)(v47 + 2344) = 0LL;
          *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
          *(_DWORD *)(v47 + 2328) = 1;
          *(_QWORD *)(v47 + 2352) = 271LL;
          *(_QWORD *)(v47 + 2360) = v163;
          if ( (v218 & 0x20000000) == 0 && (*(_DWORD *)(v47 + 2524) & 0x200000) != 0 && (v218 & 1) != 0 )
          {
            v219 = *(unsigned int *)(v47 + 2676);
            v220 = *(_QWORD *)(v47 + 2104);
            v174 = *(_QWORD *)(v47 + 2680);
            v221 = (_QWORD *)(v219 + v47);
            v222 = v219 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v219) >> 3);
            while ( v221 != (_QWORD *)v222 )
            {
              *v221 ^= v174;
              v174 = ((*v221++ ^ v220) + __ROR8__(v174, v174 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v47 + 2524) &= ~0x200000u;
            if ( v174 != *(_QWORD *)(v47 + 2688) )
            {
              v223 = *(_QWORD *)(v47 + 1416);
              v224 = *(_DWORD *)(v47 + 2052);
              *(_QWORD *)v223 = v47;
              *(_DWORD *)(v223 + 16) = v224;
              if ( !*(_DWORD *)(v47 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v47 + 1416) + 24LL) = *(_QWORD *)(v47 + 2688) ^ v174;
              goto LABEL_337;
            }
          }
        }
        goto LABEL_262;
      }
      v183 = (unsigned int)v387;
    }
    if ( v181 == v185 )
      goto LABEL_324;
LABEL_284:
    v189 = v181[1];
    if ( *v181 >= v188 || v189 <= v187 )
    {
LABEL_323:
      v183 = (unsigned int)v387;
      v170 = v426;
      v182 = v394;
      v185 = (unsigned int *)v390;
LABEL_324:
      v184 += 10;
      v393 = v184;
      LODWORD(v387) = ++v183;
      if ( v183 < v170 )
        continue;
      v216 = v397;
      v217 = v395;
      v234 = v390;
      if ( v181 != (unsigned int *)v390 )
      {
        v235 = *(_DWORD *)(v47 + 2520);
        if ( (v235 & 0x100000) == 0 )
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v163, 3uLL, 0LL);
        if ( *(_DWORD *)(v47 + 2328) )
          goto LABEL_262;
        *(_QWORD *)(v47 + 2344) = 0LL;
        *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v47 + 2352) = 271LL;
        *(_QWORD *)(v47 + 2360) = v163;
        *(_DWORD *)(v47 + 2328) = 1;
        if ( (v235 & 0x20000000) != 0 )
          goto LABEL_262;
        if ( (*(_DWORD *)(v47 + 2524) & 0x200000) == 0 )
          goto LABEL_262;
        if ( (v235 & 1) == 0 )
          goto LABEL_262;
        v236 = *(unsigned int *)(v47 + 2676);
        v237 = *(_QWORD *)(v47 + 2104);
        v174 = *(_QWORD *)(v47 + 2680);
        v238 = (_QWORD *)(v236 + v47);
        v239 = v236 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v236) >> 3);
        while ( v238 != (_QWORD *)v239 )
        {
          *v238 ^= v174;
          v174 = ((*v238++ ^ v237) + __ROR8__(v174, v174 & 0x3F)) ^ 0xEFA;
        }
        *(_DWORD *)(v47 + 2524) &= ~0x200000u;
        if ( v174 == *(_QWORD *)(v47 + 2688) )
          goto LABEL_262;
        v240 = *(_DWORD *)(v47 + 2052);
        v241 = *(_QWORD *)(v47 + 1416);
        *(_QWORD *)v241 = v47;
        *(_DWORD *)(v241 + 16) = v240;
        v232 = *(_QWORD *)(v47 + 2688);
        if ( !*(_DWORD *)(v47 + 2328) )
        {
          v233 = *(_QWORD *)(v47 + 1416);
LABEL_349:
          *(_QWORD *)(v233 + 24) = v174 ^ v232;
        }
LABEL_337:
        v179 = v47;
LABEL_276:
        sub_140BDA384(v179, 0LL, v174, 256LL);
        goto LABEL_262;
      }
      if ( (_DWORD)v397 )
        v242 = (v397 + 6) & 0xFFFFFFF8;
      else
        v242 = 0;
      v243 = *(unsigned int *)(v47 + 2052);
      v244 = v242 + 24 * v170 + v243 + 48;
      if ( v244 <= *(_DWORD *)(v47 + 2660) )
      {
        v395 = v47;
        *(_DWORD *)(v47 + 2052) = v244;
      }
      else
      {
        v395 = sub_140BD9AF8(v47, v244, *(unsigned int *)(v47 + 2372));
        v47 = v395;
        if ( !v395 )
        {
          v30 = -1073741670;
          goto LABEL_368;
        }
        v245 = *((_DWORD *)v180 + 630);
        if ( (v245 & 2) == 0 )
        {
          v246 = *((_DWORD *)v180 + 513);
          v247 = *((_QWORD *)v180 + 253);
          v248 = (v245 & 0x10000000) != 0 ? *((_DWORD *)v180 + 593) : 0;
          if ( v246 >= 8 )
          {
            v249 = (unsigned __int64)v246 >> 3;
            do
            {
              *(_QWORD *)v180 = 0LL;
              v246 -= 8;
              v180 += 8;
              --v249;
            }
            while ( v249 );
          }
          for ( ; v246; --v246 )
            *v180++ = 0;
          v250 = *(_DWORD *)(v47 + 2372);
          *(_DWORD *)(v47 + 2372) = v248;
          if ( v248 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v47 + 872))(v247);
          }
          else if ( (*(_DWORD *)(v47 + 2520) & 0x8000000) != 0 || !v248 )
          {
            (*(void (__fastcall **)(__int64))(v47 + 264))(v247);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v47 + 568))(v247 - 8, *(_QWORD *)(v247 - 8));
          }
          *(_DWORD *)(v47 + 2372) = v250;
        }
        *(_DWORD *)(v47 + 2520) &= ~2u;
        v216 = v397;
        v170 = v426;
        v234 = v390;
      }
      v251 = 6LL;
      v252 = v47 + v243;
      ++*(_DWORD *)(v47 + 2092);
      v253 = (_QWORD *)(v47 + v243);
      v254 = 48;
      do
      {
        *v253 = 0LL;
        v254 -= 8;
        ++v253;
        --v251;
      }
      while ( v251 );
      for ( ; v254; --v254 )
      {
        *(_BYTE *)v253 = 0;
        v253 = (_QWORD *)((char *)v253 + 1);
      }
      v255 = v391;
      *(_QWORD *)(v252 + 8) = v391;
      *(_DWORD *)v252 = 30;
      *(_DWORD *)(v252 + 16) = 0;
      v256 = *(_QWORD *)(v47 + 2104);
      for ( m = v256; ; LODWORD(v256) = m ^ v256 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      v396 = v47;
      *(_DWORD *)(v252 + 20) = v256 & 0x7FFFFFFF;
      *(_QWORD *)(v252 + 24) = v163;
      *(_DWORD *)(v252 + 32) = *(_DWORD *)(v217 + 80);
      *(_DWORD *)(v252 + 36) = (_DWORD)v392;
      *(_WORD *)(v252 + 40) = v170;
      v258 = (char *)(v252 + 48);
      v392 = v258;
      if ( v216 )
        v259 = &v258[((unsigned int)(v216 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
      else
        v259 = v258;
      v387 = v259;
      v397 = (unsigned __int64)&v259[24 * v170];
      if ( v216 )
        v389 = v255 + 3;
      else
        v389 = (unsigned int *)v234;
      if ( v170 )
      {
        v260 = v259 + 8;
        v261 = v170;
        do
        {
          v262 = 2LL;
          do
          {
            *((_QWORD *)v260 - 1) = 0LL;
            *v260 = 0x80000000;
            v260 += 3;
            --v262;
          }
          while ( v262 );
          --v261;
        }
        while ( v261 );
      }
      if ( v259 == &v259[24 * v170] )
      {
LABEL_562:
        v386 = (_BYTE *)v47;
        goto LABEL_563;
      }
      v263 = (_DWORD *)v394;
      while ( 1 )
      {
        v264 = 0;
        if ( (v263[9] & 0x2000000) != 0 )
          break;
        v265 = *v263;
        v266 = v263 + 1;
        if ( *v263 == 1414090313 && *v266 == 1195525195 )
          break;
        if ( v265 == 1162297680 )
        {
          v267 = *(_WORD *)v266;
          if ( *(_WORD *)v266 == 30839 || v267 == 29303 || v267 == 30583 )
            break;
        }
        else if ( v265 == 1095914053 && *(_WORD *)v266 == 16724 )
        {
          break;
        }
        v268 = *(char **)(v47 + 2384);
        v269 = *(char **)(v47 + 2392);
        v270 = (char *)v263 - v268;
        v271 = *(char **)(v47 + 2400);
        v272 = 7;
        v273 = *(char **)(v47 + 2408);
        while ( 1 )
        {
          v274 = v268[v270];
          v275 = *v268++;
          if ( v274 != v275 )
            break;
          if ( !--v272 )
          {
LABEL_434:
            v264 = 1;
            goto LABEL_435;
          }
        }
        v276 = 8;
        v277 = (char *)v263;
        while ( 1 )
        {
          v278 = *(_QWORD *)v277;
          v277 += 8;
          v279 = *(_QWORD *)v269;
          v269 += 8;
          if ( v278 != v279 )
            break;
          v276 -= 8;
          if ( v276 < 8 )
          {
            if ( !v276 )
              goto LABEL_434;
            while ( 1 )
            {
              v280 = *v277++;
              v281 = *v269++;
              if ( v280 != v281 )
                goto LABEL_427;
              if ( !--v276 )
                goto LABEL_434;
            }
          }
        }
LABEL_427:
        v282 = 4;
        v283 = (char *)v263 - v271;
        while ( 1 )
        {
          v284 = v271[v283];
          v285 = *v271++;
          if ( v284 != v285 )
            break;
          if ( !--v282 )
            goto LABEL_434;
        }
        v286 = 6;
        v287 = (char *)v263 - v273;
        while ( 1 )
        {
          v288 = v273[v287];
          v289 = *v273++;
          if ( v288 != v289 )
            break;
          if ( !--v286 )
            goto LABEL_434;
        }
LABEL_435:
        v255 = v391;
LABEL_436:
        v290 = v263[9];
        if ( v290 >= 0 )
        {
          if ( !v264 )
            goto LABEL_443;
        }
        else
        {
          v264 = 1;
        }
        if ( *v263 == 1414090313 && v263[1] == 1195525195 && (*(_DWORD *)(v47 + 2524) & 0x2000) != 0 )
          v264 = 0;
LABEL_443:
        if ( (*(_DWORD *)(v47 + 2524) & 0x4000) != 0
          && (v290 & 0x20000000) != 0
          && (v163 == *(_QWORD *)(v47 + 1504) || v163 == *(_QWORD *)(v47 + 1512)) )
        {
          v264 = 1;
        }
        v291 = v263[4];
        v292 = v263[3];
        v293 = (unsigned int *)v390;
        if ( v291 <= v263[2] )
          v291 = v263[2];
        v294 = v292 + v291;
        LODWORD(v393) = v263[3];
        v427 = v294;
        v295 = v292;
        if ( v255 == (unsigned int *)v390 )
        {
          v297 = 0;
          v298 = v292 != 0;
LABEL_477:
          if ( v298 )
            goto LABEL_529;
          goto LABEL_480;
        }
        v296 = *v255;
        v297 = v255[1];
        v298 = *v255 < v292;
        if ( *v255 <= v292 )
          goto LABEL_477;
        if ( v255[1] <= v294 )
        {
          if ( v264 )
            goto LABEL_482;
          *((_DWORD *)v259 + 1) = v296;
          v299 = v296 - v292;
          *(_DWORD *)v259 = v292;
          v300 = v296 - v292;
          v301 = v388 + v292;
          v302 = v405;
          v303 = v301 + v300;
          v304 = v408;
          v295 = v296;
          v305 = 0;
          while ( v301 >= *v304 + *v302 || v303 <= *v304 )
          {
            ++v305;
            ++v304;
            ++v302;
            if ( v305 >= 6 )
            {
              *(_DWORD *)(v47 + 2120) += v299;
              v306 = (_QWORD *)v301;
              v307 = *(_DWORD *)(v47 + 2100);
              v308 = (const char *)v301;
              v309 = *(_QWORD *)(v47 + 2104);
              v310 = v301 + v299;
              if ( v301 < v310 )
              {
                do
                {
                  _mm_prefetch(v308, 0);
                  v308 += 64;
                }
                while ( (unsigned __int64)v308 < v310 );
              }
              v311 = *(_QWORD *)(v47 + 2104);
              v312 = v299 >> 7;
              if ( v299 >> 7 )
              {
                do
                {
                  v313 = 8LL;
                  do
                  {
                    v314 = v306[1] ^ __ROL8__(*v306 ^ v311, v307);
                    v306 += 2;
                    v311 = __ROL8__(v314, v307);
                    --v313;
                  }
                  while ( v313 );
                  v315 = __ROL8__(v309 ^ ((unsigned __int64)v306 - v301), 17) ^ v309 ^ ((unsigned __int64)v306 - v301);
                  v415 = (v315 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v307 = ((unsigned __int8)(v415 ^ v315) ^ (unsigned __int8)v307) & 0x3F;
                  if ( !v307 )
                    LOBYTE(v307) = 1;
                  --v312;
                }
                while ( v312 );
                v47 = v395;
              }
              v316 = v299 & 0x7F;
              if ( v316 >= 8 )
              {
                v317 = (unsigned __int64)v316 >> 3;
                do
                {
                  v311 = __ROL8__(*v306++ ^ v311, v307);
                  v316 -= 8;
                  --v317;
                }
                while ( v317 );
              }
              for ( ; v316; --v316 )
              {
                v318 = *(unsigned __int8 *)v306;
                v306 = (_QWORD *)((char *)v306 + 1);
                v311 = __ROL8__(v318 ^ v311, v307);
              }
              for ( n = v311; ; LODWORD(v311) = n ^ v311 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v294 = v427;
              *((_DWORD *)v387 + 2) = v311 & 0x7FFFFFFF;
              break;
            }
          }
          v255 = v391;
          v293 = (unsigned int *)v390;
        }
LABEL_480:
        if ( v297 <= v294 && v255 != v293 )
        {
LABEL_482:
          v320 = v389;
          if ( v389 != v293 )
          {
            v321 = v389[1];
            if ( v321 <= v294 )
            {
              v322 = v392;
              do
              {
                if ( v320 == v293 )
                  break;
                if ( v264 )
                {
                  v323 = 0x80;
                }
                else
                {
                  v324 = v255[1];
                  v295 = *v320;
                  if ( *v320 < (unsigned int)v324 )
                  {
                    v325 = *(_DWORD *)(v47 + 2520);
                    if ( (v325 & 0x100000) == 0 )
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v388, 6uLL, 0LL);
                    if ( !*(_DWORD *)(v47 + 2328) )
                    {
                      *(_QWORD *)(v47 + 2344) = 0LL;
                      *(_QWORD *)(v47 + 2352) = 271LL;
                      *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v47 + 2360) = v388;
                      *(_DWORD *)(v47 + 2328) = 1;
                      if ( (v325 & 0x20000000) == 0 && (*(_DWORD *)(v47 + 2524) & 0x200000) != 0 && (v325 & 1) != 0 )
                      {
                        v326 = *(unsigned int *)(v47 + 2676);
                        v327 = *(_QWORD *)(v47 + 2104);
                        v328 = *(_QWORD *)(v47 + 2680);
                        v329 = (_QWORD *)(v326 + v47);
                        v330 = v326 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v326) >> 3);
                        while ( v329 != (_QWORD *)v330 )
                        {
                          *v329 ^= v328;
                          v328 = ((*v329++ ^ v327) + __ROR8__(v328, v328 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v47 + 2524) &= ~0x200000u;
                        if ( v328 != *(_QWORD *)(v47 + 2688) )
                        {
                          v331 = *(_QWORD *)(v47 + 1416);
                          v332 = *(_DWORD *)(v47 + 2052);
                          *(_QWORD *)v331 = v47;
                          *(_DWORD *)(v331 + 16) = v332;
                          if ( !*(_DWORD *)(v47 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v47 + 1416) + 24LL) = v328 ^ *(_QWORD *)(v47 + 2688);
                          sub_140BDA384(v47, 0LL, v328, 256LL);
                        }
                      }
                    }
                  }
                  v333 = v405;
                  v334 = v388 + v324;
                  v335 = v408;
                  v336 = v295 - v324;
                  v337 = v388 + v324 + v295 - (unsigned int)v324;
                  for ( ii = 0; ii < 6; ++ii )
                  {
                    if ( v334 < *v335 + *v333 && v337 > *v335 )
                      goto LABEL_524;
                    ++v335;
                    ++v333;
                  }
                  if ( v336 < 4 )
                  {
LABEL_524:
                    v323 = 0x80;
                    goto LABEL_525;
                  }
                  *(_DWORD *)(v47 + 2120) += v336;
                  v339 = (_QWORD *)v334;
                  v340 = *(_DWORD *)(v47 + 2100);
                  v341 = (const char *)v334;
                  v342 = *(_QWORD *)(v47 + 2104);
                  v343 = v334 + v336;
                  if ( v334 < v343 )
                  {
                    do
                    {
                      _mm_prefetch(v341, 0);
                      v341 += 64;
                    }
                    while ( (unsigned __int64)v341 < v343 );
                  }
                  v344 = *(_QWORD *)(v47 + 2104);
                  v345 = v336 >> 7;
                  if ( v336 >> 7 )
                  {
                    do
                    {
                      v346 = 8LL;
                      do
                      {
                        v347 = v339[1] ^ __ROL8__(*v339 ^ v344, v340);
                        v339 += 2;
                        v344 = __ROL8__(v347, v340);
                        --v346;
                      }
                      while ( v346 );
                      v348 = (__ROL8__(v342 ^ ((unsigned __int64)v339 - v334), 17) ^ v342 ^ ((unsigned __int64)v339
                                                                                           - v334))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v416 = *((_QWORD *)&v348 + 1);
                      v340 = (BYTE8(v348) ^ (unsigned __int8)(v348 ^ v340)) & 0x3F;
                      if ( !v340 )
                        LOBYTE(v340) = 1;
                      --v345;
                    }
                    while ( v345 );
                    v47 = v395;
                  }
                  v349 = v336 & 0x7F;
                  if ( v349 >= 8 )
                  {
                    v350 = (unsigned __int64)v349 >> 3;
                    do
                    {
                      v344 = __ROL8__(*v339++ ^ v344, v340);
                      v349 -= 8;
                      --v350;
                    }
                    while ( v350 );
                  }
                  for ( ; v349; --v349 )
                  {
                    v351 = *(unsigned __int8 *)v339;
                    v339 = (_QWORD *)((char *)v339 + 1);
                    v344 = __ROL8__(v351 ^ v344, v340);
                  }
                  for ( jj = v344; ; LOBYTE(v344) = jj ^ v344 )
                  {
                    jj >>= 7;
                    if ( !jj )
                      break;
                  }
                  v294 = v427;
                  v323 = v344 & 0x7F;
                  v320 = v389;
LABEL_525:
                  v322 = v392;
                  v255 = v391;
                }
                *v322 = v323;
                v255 += 3;
                v320 += 3;
                v293 = (unsigned int *)v390;
                v322 = v392 + 1;
                v391 = v255;
                ++v392;
                v389 = v320;
                if ( v320 != (unsigned int *)v390 )
                  v321 = v320[1];
              }
              while ( v321 <= v294 );
            }
          }
        }
LABEL_529:
        v353 = v387;
        v163 = v388;
        if ( !v264 && v295 != v294 )
        {
          v354 = v405;
          v355 = v388 + v295;
          *((_DWORD *)v387 + 3) = v295;
          *((_DWORD *)v353 + 4) = v294;
          v356 = v294 - v295;
          v357 = v408;
          v358 = 0;
          while ( v355 >= *v357 + (unsigned __int64)*v354 || v355 + v294 - v295 <= *v357 )
          {
            ++v358;
            ++v357;
            ++v354;
            if ( v358 >= 6 )
            {
              *(_DWORD *)(v47 + 2120) += v356;
              v359 = (_QWORD *)v355;
              v360 = *(_DWORD *)(v47 + 2100);
              v361 = (const char *)v355;
              v362 = *(_QWORD *)(v47 + 2104);
              v363 = v355 + v356;
              if ( v355 < v363 )
              {
                do
                {
                  _mm_prefetch(v361, 0);
                  v361 += 64;
                }
                while ( (unsigned __int64)v361 < v363 );
              }
              v364 = *(_QWORD *)(v47 + 2104);
              v365 = v356 >> 7;
              if ( v356 >> 7 )
              {
                do
                {
                  v366 = 8LL;
                  do
                  {
                    v367 = *v359 ^ v364;
                    v368 = v359 + 1;
                    v369 = *v368 ^ __ROL8__(v367, v360);
                    v359 = v368 + 1;
                    v364 = __ROL8__(v369, v360);
                    --v366;
                  }
                  while ( v366 );
                  v370 = (__ROL8__(v362 ^ ((unsigned __int64)v359 - v355), 17) ^ v362 ^ ((unsigned __int64)v359 - v355))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v417 = *((_QWORD *)&v370 + 1);
                  v360 = (BYTE8(v370) ^ (unsigned __int8)(v370 ^ v360)) & 0x3F;
                  if ( !v360 )
                    LOBYTE(v360) = 1;
                  --v365;
                }
                while ( v365 );
                v163 = v388;
              }
              v371 = v356 & 0x7F;
              if ( v371 >= 8 )
              {
                v372 = (unsigned __int64)v371 >> 3;
                do
                {
                  v364 = __ROL8__(*v359++ ^ v364, v360);
                  v371 -= 8;
                  --v372;
                }
                while ( v372 );
              }
              for ( ; v371; --v371 )
              {
                v373 = *(unsigned __int8 *)v359;
                v359 = (_QWORD *)((char *)v359 + 1);
                v364 = __ROL8__(v373 ^ v364, v360);
              }
              for ( kk = v364; ; LODWORD(v364) = kk ^ v364 )
              {
                kk >>= 31;
                if ( !kk )
                  break;
              }
              v353 = v387;
              v294 = v427;
              *((_DWORD *)v387 + 5) = v364 & 0x7FFFFFFF;
              break;
            }
          }
          v255 = v391;
        }
        if ( v255 != (unsigned int *)v390 && *v255 >= (unsigned int)v393 && v255[1] <= v294 )
        {
          v375 = v389;
          if ( v389 != (unsigned int *)v390 )
          {
            v376 = v392;
            *v392 = 0x80;
            v392 = v376 + 1;
            v389 = v375 + 3;
          }
          v255 += 3;
          v391 = v255;
        }
        v259 = v353 + 24;
        v263 = (_DWORD *)(v394 + 40);
        v387 = v259;
        v394 += 40LL;
        if ( v259 == (char *)v397 )
        {
          v47 = v396;
          goto LABEL_562;
        }
      }
      v264 = 1;
      goto LABEL_436;
    }
    break;
  }
  if ( *v181 >= v187 && v189 <= v188 )
  {
    v190 = v181[2];
    if ( (v190 & 1) != 0 || (*(_BYTE *)(v190 + v163) & 0x20) != 0 )
    {
      v191 = v184[2];
      v192 = v184[1];
      if ( v191 <= *v184 )
        v191 = *v184;
      v193 = v192 + v191;
      v194 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR))(v47 + 1048))(v181, v388);
      v195 = v194;
      if ( *v194 < v192 || v194[1] > v193 )
      {
        v196 = v388;
        v197 = ((_DWORD)v194 - v388) | 0x80000000;
        v198 = *(_DWORD *)(v47 + 2520);
        if ( (v198 & 0x100000) == 0 )
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v388, v197, 0LL);
        if ( !*(_DWORD *)(v47 + 2328) )
        {
          *(_QWORD *)(v47 + 2344) = 0LL;
          *(_QWORD *)(v47 + 2352) = 271LL;
          *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v47 + 2360) = v196;
          *(_DWORD *)(v47 + 2328) = 1;
          if ( (v198 & 0x20000000) == 0 && (*(_DWORD *)(v47 + 2524) & 0x200000) != 0 && (v198 & 1) != 0 )
          {
            v199 = *(unsigned int *)(v47 + 2676);
            v200 = *(_QWORD *)(v47 + 2104);
            v201 = *(_QWORD *)(v47 + 2680);
            v202 = (_QWORD *)(v199 + v47);
            v203 = v199 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v199) >> 3);
            while ( v202 != (_QWORD *)v203 )
            {
              *v202 ^= v201;
              v201 = ((v200 ^ *v202++) + __ROR8__(v201, v201 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v47 + 2524) &= ~0x200000u;
            if ( v201 != *(_QWORD *)(v47 + 2688) )
            {
              v204 = *(_DWORD *)(v47 + 2052);
              v205 = *(_QWORD *)(v47 + 1416);
              *(_QWORD *)v205 = v47;
              *(_DWORD *)(v205 + 16) = v204;
              if ( !*(_DWORD *)(v47 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v47 + 1416) + 24LL) = v201 ^ *(_QWORD *)(v47 + 2688);
              sub_140BDA384(v47, 0LL, v201, 256LL);
            }
          }
        }
      }
      v206 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v47 + 1056))(
                               v195,
                               v388,
                               v388 + *v195);
      if ( *v206 >= v192 && v206[1] <= v193 )
      {
        v163 = v388;
      }
      else
      {
        v163 = v388;
        v207 = ((_DWORD)v206 - v388) | 0x80000000;
        v208 = *(_DWORD *)(v47 + 2520);
        if ( (v208 & 0x100000) == 0 )
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v388, v207, 0LL);
        if ( !*(_DWORD *)(v47 + 2328) )
        {
          *(_QWORD *)(v47 + 2344) = 0LL;
          *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
          *(_DWORD *)(v47 + 2328) = 1;
          *(_QWORD *)(v47 + 2352) = 271LL;
          *(_QWORD *)(v47 + 2360) = v163;
          if ( (v208 & 0x20000000) == 0 && (*(_DWORD *)(v47 + 2524) & 0x200000) != 0 && (v208 & 1) != 0 )
          {
            v209 = *(unsigned int *)(v47 + 2676);
            v210 = *(_QWORD *)(v47 + 2104);
            v211 = *(_QWORD *)(v47 + 2680);
            v212 = (_QWORD *)(v209 + v47);
            v213 = v209 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v209) >> 3);
            while ( v212 != (_QWORD *)v213 )
            {
              *v212 ^= v211;
              v211 = ((v210 ^ *v212++) + __ROR8__(v211, v211 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v47 + 2524) &= ~0x200000u;
            if ( v211 != *(_QWORD *)(v47 + 2688) )
            {
              v214 = *(_DWORD *)(v47 + 2052);
              v215 = *(_QWORD *)(v47 + 1416);
              *(_QWORD *)v215 = v47;
              *(_DWORD *)(v215 + 16) = v214;
              if ( !*(_DWORD *)(v47 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v47 + 1416) + 24LL) = v211 ^ *(_QWORD *)(v47 + 2688);
              sub_140BDA384(v47, 0LL, v211, 256LL);
            }
          }
        }
      }
      v184 = v393;
      v187 = (unsigned int)v389;
    }
    v181 += 3;
    if ( v181 == (unsigned int *)v390 )
      goto LABEL_323;
    goto LABEL_284;
  }
  v225 = *(_DWORD *)(v47 + 2520);
  if ( (v225 & 0x100000) == 0 )
    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v163, 2uLL, 0LL);
  if ( !*(_DWORD *)(v47 + 2328) )
  {
    *(_QWORD *)(v47 + 2344) = 0LL;
    *(_QWORD *)(v47 + 2336) = v47 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(v47 + 2328) = 1;
    *(_QWORD *)(v47 + 2352) = 271LL;
    *(_QWORD *)(v47 + 2360) = v163;
    if ( (v225 & 0x20000000) == 0 && (*(_DWORD *)(v47 + 2524) & 0x200000) != 0 && (v225 & 1) != 0 )
    {
      v226 = *(unsigned int *)(v47 + 2676);
      v227 = *(_QWORD *)(v47 + 2104);
      v174 = *(_QWORD *)(v47 + 2680);
      v228 = (_QWORD *)(v226 + v47);
      v229 = v226 + v47 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v47 + 2052) - v226) >> 3);
      while ( v228 != (_QWORD *)v229 )
      {
        *v228 ^= v174;
        v174 = ((*v228++ ^ v227) + __ROR8__(v174, v174 & 0x3F)) ^ 0xEFA;
      }
      *(_DWORD *)(v47 + 2524) &= ~0x200000u;
      if ( v174 != *(_QWORD *)(v47 + 2688) )
      {
        v230 = *(_DWORD *)(v47 + 2052);
        v231 = *(_QWORD *)(v47 + 1416);
        *(_QWORD *)v231 = v47;
        *(_DWORD *)(v231 + 16) = v230;
        v232 = *(_QWORD *)(v47 + 2688);
        if ( !*(_DWORD *)(v47 + 2328) )
        {
          v233 = *(_QWORD *)(v47 + 1416);
          goto LABEL_349;
        }
        goto LABEL_337;
      }
    }
  }
LABEL_262:
  v30 = -1073741701;
LABEL_368:
  v109 = a1;
  v47 = (__int64)v386;
  *a1 = (__int64)v386;
  if ( v30 < 0 )
  {
LABEL_369:
    if ( v30 != -1073741554 )
      return (unsigned int)v30;
  }
LABEL_564:
  if ( (a3 & 0x80000004) != 0x80000004 )
  {
    v377 = v406;
    v378 = (*(__int64 (__fastcall **)(__int64))(v47 + 520))(v406);
    v379 = *(unsigned int *)(v378 + 148);
    if ( (unsigned int)v379 >= 0x14 )
    {
      v380 = *(unsigned int *)(v378 + 144);
      v381 = v377 + v380 + v379;
      for ( mm = v380 + v377; mm != v381; mm += 20LL )
      {
        if ( !*(_DWORD *)(mm + 12) )
          break;
        v383 = *(unsigned int *)(mm + 16);
        if ( !(_DWORD)v383 )
          break;
        v384 = *(_QWORD *)(v383 + v377);
        if ( v384 )
        {
          result = sub_140BD5A04(&v386, v384, a3 & 0x7FFFFFEF | 0x80000000);
          *v109 = (__int64)v386;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}
