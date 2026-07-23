/*
 * XREFs of PropertyEval @ 0x1408D2920
 * Callers:
 *     FilterEvalStrict @ 0x1408CA150 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x1408D1A38 (FilterEvalImpliedAnd.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ArrayContains @ 0x14069D3FC (ArrayContains.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     CompareFileTimeType @ 0x140824A70 (CompareFileTimeType.c)
 *     StringListElementSubstringMatch @ 0x140824BB0 (StringListElementSubstringMatch.c)
 *     StringListContains @ 0x140A10064 (StringListContains.c)
 *     SubstringMatch @ 0x140A1EB1C (SubstringMatch.c)
 */

__int64 __fastcall PropertyEval(
        unsigned int a1,
        char *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int8 *Buf2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r11
  int v10; // esi
  unsigned int v11; // edi
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  int v22; // r9d
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  unsigned int v28; // eax
  __m128i v29; // xmm0
  double v30; // xmm0_8
  int v31; // r9d
  int v32; // r9d
  int v33; // r9d
  int v34; // r9d
  unsigned int v35; // eax
  __m128i v36; // xmm1
  double v37; // xmm1_8
  bool v38; // cf
  int v39; // r9d
  int v40; // r9d
  int v41; // r9d
  int v42; // r9d
  int v43; // r9d
  bool v44; // zf
  unsigned int v45; // eax
  __m128i v46; // xmm1
  float v47; // xmm1_4
  bool v48; // cf
  bool v49; // zf
  int v50; // ecx
  int v51; // r9d
  int v52; // r9d
  int v53; // r9d
  int v54; // r9d
  int v55; // r9d
  int v56; // r9d
  int v57; // r9d
  int v58; // r9d
  int v59; // r9d
  int v60; // r9d
  int v61; // r9d
  int v62; // r9d
  int v63; // r9d
  int v64; // r9d
  int v65; // r9d
  int v66; // r9d
  int v67; // r9d
  int v68; // r9d
  int v69; // r9d
  int v70; // r9d
  int v71; // r9d
  int v72; // r9d
  int v73; // r9d
  int v74; // r9d
  int v75; // r9d
  int v76; // r9d
  int v77; // r9d
  int v78; // r9d
  int v79; // r9d
  int v80; // r9d
  int v81; // r9d
  int v82; // r9d
  int v83; // eax
  int v84; // r9d
  int v85; // r9d
  int v86; // r9d
  int v87; // r9d
  int v88; // r9d
  int v89; // r9d
  int v90; // r9d
  int v91; // r9d
  int v92; // r9d
  int v93; // r9d
  int v94; // r9d
  int v95; // r9d
  int v96; // r9d
  int v97; // r9d
  int v98; // r9d
  int v99; // r9d
  float v100; // xmm0_4
  int v101; // r9d
  int v102; // r9d
  int v103; // r9d
  int v104; // r9d
  int v105; // r9d
  int v106; // r9d
  int v107; // r9d
  int v108; // r9d
  int v109; // r9d
  int v110; // r9d
  int v111; // r9d
  int v112; // r9d
  int v113; // r9d
  int v114; // r9d
  int v115; // r9d
  int v116; // r9d
  int v117; // r9d
  int v118; // r9d
  int v119; // r9d
  int v120; // r9d
  int v121; // r9d
  int v122; // r9d
  int v123; // r9d
  int v124; // r9d
  int v125; // r9d
  int v126; // r9d
  int v127; // r9d
  int v128; // r9d
  int v129; // r9d
  int v130; // r9d
  int v131; // r9d
  int v132; // r9d
  int v133; // r9d
  int v134; // r9d
  int v135; // r9d
  int v136; // r9d
  int v137; // r9d
  int v138; // r9d
  int v139; // r9d
  int v140; // r9d
  int v141; // r9d
  int v142; // r9d
  int v143; // r9d
  int v144; // r9d
  int v145; // r9d
  int v146; // r9d
  int v147; // r9d
  int v148; // r9d
  int v149; // r9d
  int v150; // r9d
  int v151; // r9d
  int v152; // r9d
  int v153; // r9d
  int v154; // r9d
  int v155; // r9d
  int v156; // r9d
  int v157; // r9d
  int v158; // r9d
  int v159; // r9d
  int v160; // r9d
  int v161; // r9d
  int v162; // r9d
  int v163; // r9d
  int v164; // r9d
  int v165; // r9d
  int v166; // r9d
  int v167; // r9d
  int v168; // r9d
  int v169; // r9d
  int v170; // r9d
  int v171; // r9d
  int v172; // r9d
  int v173; // r9d
  int v174; // r9d
  int v175; // r9d
  int v176; // r9d
  int v177; // r9d
  int v178; // r9d
  int v179; // r9d
  int v180; // r9d
  int v181; // r9d
  int v182; // r9d
  int v183; // r9d
  int v184; // r9d
  int v185; // r9d
  int v186; // r9d
  int v187; // r9d
  int v188; // r9d
  int v189; // r9d
  int v190; // r9d
  int v191; // r9d
  int v192; // r9d
  int v193; // r9d
  int v194; // r9d
  int v195; // r9d
  int v196; // r9d
  int v197; // r9d
  int v198; // r9d
  int v199; // r9d
  int v200; // r9d
  int v201; // r9d
  int v202; // r9d
  int v203; // r9d
  int v204; // r9d
  int v205; // r9d
  int v206; // r9d
  int v207; // r9d
  int v208; // r9d
  int v209; // r9d
  int v210; // r9d
  int v211; // r9d
  int v212; // r9d
  int v213; // r9d
  int v214; // r9d
  int v215; // r9d
  int v216; // r9d
  int v217; // r9d
  int v218; // r9d
  int v219; // r9d
  int v220; // r9d
  int v221; // r9d
  int v222; // r9d
  int v223; // r9d
  int v224; // r9d
  int v225; // r9d
  int v226; // r9d
  int v227; // r9d
  int v228; // r9d
  int v229; // r9d
  int v230; // r9d
  int v231; // r9d
  int v232; // r9d
  int v233; // r9d
  int v234; // r9d
  int v235; // r9d
  int v236; // eax
  float v237; // xmm1_4
  int v238; // eax
  float v239; // xmm0_4
  unsigned int v240; // eax
  __m128i v241; // xmm0
  double v242; // xmm0_8
  bool v243; // zf
  unsigned int v244; // eax
  __m128i v245; // xmm1
  double v246; // xmm1_8
  unsigned int v247; // eax
  __m128i v248; // xmm0
  double v249; // xmm0_8
  float v250; // xmm0_4
  float v251; // xmm0_4
  float v252; // xmm0_4
  int v253; // r9d
  int v254; // r9d
  int v255; // r9d
  int v256; // r9d
  unsigned __int64 v257; // rcx
  float v258; // xmm1_4
  bool v259; // zf
  int v260; // r9d
  int v261; // r9d
  int v262; // r9d
  int v263; // r9d
  int v264; // r9d
  int v265; // r9d
  int v266; // r9d
  int v267; // r9d
  int v268; // r9d
  int v269; // r9d
  int v270; // r9d
  int v271; // r9d
  int v272; // r9d
  int v273; // r9d
  int v274; // r9d
  int v275; // r9d
  int v276; // ecx
  int v277; // edx
  int v278; // r9d
  int v279; // r9d
  int v280; // r9d
  int v281; // r9d
  int v282; // r9d
  int v283; // r9d
  int v284; // r9d
  int v285; // r9d
  __int64 v286; // rcx
  int v287; // r9d
  int v288; // r9d
  int v289; // r9d
  int v290; // r9d
  int v291; // r9d
  int v292; // r9d
  int v293; // r9d
  int v294; // r9d
  int v295; // r9d
  int v296; // r9d
  int v297; // r9d
  int v298; // r9d
  int v299; // r9d
  int v300; // r9d
  int v301; // r9d
  int v302; // r9d
  int v303; // r9d
  int v304; // r9d
  int v305; // r9d
  int v306; // r9d
  int v307; // r9d
  int v308; // r9d
  int v309; // r9d
  int v310; // r9d
  int v311; // r9d
  int v312; // r9d
  int v313; // r9d
  int v314; // r9d
  int v315; // r9d
  int v316; // r9d
  int v317; // r9d
  int v318; // r9d
  int v319; // r9d
  int v320; // r9d
  int v321; // r9d
  int v322; // r9d
  int v323; // r9d
  int v324; // r9d
  int v325; // r9d
  int v326; // r9d
  int v327; // r9d
  int v328; // r9d
  int v329; // r9d
  int v330; // r9d
  int v331; // r9d
  int v332; // r9d
  int v333; // r9d
  int v334; // r9d
  int v335; // r9d
  int v336; // r9d
  int v337; // r9d
  int v338; // r9d
  int v339; // r9d
  int v340; // r9d
  int v341; // r9d
  int v342; // r9d
  int v343; // r9d
  int v344; // r9d
  int v345; // r9d
  int v346; // r9d
  unsigned __int64 v347; // rcx
  unsigned __int64 v348; // rcx
  unsigned __int64 v349; // rcx
  unsigned __int64 v350; // rcx
  unsigned __int64 v351; // rcx
  float v352; // xmm0_4
  int v353; // r9d
  int v354; // r9d
  int v355; // r9d
  int v356; // r9d
  unsigned __int64 v357; // rcx
  unsigned __int64 v358; // rcx
  unsigned __int64 v359; // rcx
  unsigned __int64 v360; // rcx
  unsigned __int64 v361; // rcx
  int v362; // r9d
  int v363; // r9d
  int v364; // r9d
  int v365; // r9d
  unsigned int v366; // ecx
  __m128i v367; // xmm1
  float v368; // xmm1_4
  bool v369; // cf
  float v370; // xmm0_4
  unsigned int v371; // ecx
  __m128i v372; // xmm1
  float v373; // xmm1_4
  bool v374; // cf
  bool v375; // zf
  float v376; // xmm0_4
  int v377; // r9d
  int v378; // r9d
  int v379; // r9d
  int v380; // r9d
  float v381; // xmm0_4
  int v382; // r9d
  int v383; // r9d
  int v384; // r9d
  int v385; // r9d
  float v386; // xmm0_4
  int v387; // r9d
  int v388; // r9d
  int v389; // r9d
  int v390; // r9d
  float v391; // xmm0_4
  int v392; // r9d
  int v393; // r9d
  int v394; // r9d
  int v395; // r9d
  float v396; // xmm0_4
  int v397; // r9d
  int v398; // r9d
  int v399; // r9d
  int v400; // r9d
  float v401; // xmm0_4
  int v402; // r9d
  int v403; // r9d
  int v404; // r9d
  int v405; // r9d
  unsigned __int64 v406; // rcx
  unsigned __int64 v407; // rcx
  unsigned __int64 v408; // rcx
  unsigned __int64 v409; // rcx
  int v410; // r9d
  int v411; // r9d
  int v412; // r9d
  int v413; // r9d
  int v414; // r9d
  int v415; // r9d
  int v416; // r9d
  int v417; // r9d
  int v418; // r9d
  int v419; // r9d
  int v420; // r9d
  int v421; // r9d
  int v422; // r9d
  int v423; // r9d
  int v424; // r9d
  unsigned int v425; // ecx
  __m128i v426; // xmm0
  double v427; // xmm0_8
  unsigned int v428; // ecx
  __m128i v429; // xmm1
  double v430; // xmm1_8
  double v431; // xmm0_8
  unsigned int v432; // ecx
  __m128i v433; // xmm1
  double v434; // xmm1_8
  unsigned int v435; // ecx
  __m128i v436; // xmm1
  double v437; // xmm1_8
  int v438; // r9d
  int v439; // r9d
  int v440; // r9d
  int v441; // r9d
  double v442; // xmm0_8
  int v443; // r9d
  int v444; // r9d
  int v445; // r9d
  int v446; // r9d
  double v447; // xmm0_8
  int v448; // r9d
  int v449; // r9d
  int v450; // r9d
  int v451; // r9d
  double v452; // xmm0_8
  int v453; // r9d
  int v454; // r9d
  int v455; // r9d
  int v456; // r9d
  double v457; // xmm0_8
  int v458; // r9d
  int v459; // r9d
  int v460; // r9d
  int v461; // r9d
  double v462; // xmm0_8
  int v463; // r9d
  int v464; // r9d
  int v465; // r9d
  int v466; // r9d
  double v467; // xmm0_8
  int v468; // r9d
  int v469; // r9d
  int v470; // r9d
  int v471; // r9d
  unsigned __int64 v472; // rcx
  double v473; // xmm0_8
  unsigned __int64 v474; // rcx
  unsigned __int64 v475; // rcx
  double v476; // xmm0_8
  unsigned __int64 v477; // rcx
  unsigned __int64 v478; // rcx
  int v479; // r9d
  int v480; // r9d
  int v481; // r9d
  int v482; // r9d
  double v483; // xmm0_8
  int v484; // r9d
  int v485; // r9d
  int v486; // r9d
  int v487; // r9d
  int v488; // r9d
  int v489; // r9d
  int v490; // r9d
  int v491; // r9d
  int v492; // r9d
  int v493; // r9d
  int v494; // r9d
  int v495; // r9d
  int v496; // r9d
  int v497; // r9d
  int v498; // r9d
  int v499; // r9d
  int v500; // r9d
  int v501; // r9d
  int v502; // r9d
  int v503; // r9d
  int v504; // r9d
  int v505; // r9d
  int v506; // r9d
  int v507; // r9d
  int v508; // r9d
  int v509; // r9d
  int v510; // r9d
  int v511; // r9d
  int v512; // r9d
  int v513; // r9d
  int v514; // r9d
  int v515; // r9d
  int v516; // r9d
  int v517; // r9d
  int v518; // r9d
  int v519; // r9d
  int v520; // r9d
  int v521; // r9d
  int v522; // r9d
  int v523; // r9d
  int v524; // r9d
  int v525; // r9d
  int v526; // r9d
  int v527; // r9d
  int v528; // r9d
  int v529; // r9d
  int v530; // r9d
  int v531; // r9d
  int v532; // r9d
  int v533; // r9d
  int v534; // r9d
  int v535; // r9d
  int v536; // r9d
  int v537; // r9d
  int v538; // r9d
  int v539; // r9d
  int v540; // r9d
  int v541; // r9d
  unsigned __int64 v542; // rcx
  int v543; // r9d
  int v544; // r9d
  int v545; // r9d
  int v546; // r9d
  int v547; // r9d
  int v548; // r9d
  int v549; // r9d
  int v550; // r9d
  __int64 v551; // rcx
  bool v552; // zf

  v8 = a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 & 0x10000;
  v13 = a4 & 0x20000;
  v14 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( (_DWORD)v13 && a1 != 8210 && a1 != 18 && a1 != 25 )
  {
    v11 = -1073741637;
    goto LABEL_1240;
  }
  if ( (_DWORD)v14 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1240;
  }
  if ( !a1 || !a5 )
    goto LABEL_1240;
  if ( a1 == 13 )
  {
    if ( a5 == 13 && (_DWORD)v14 == 2 )
    {
      if ( *(_DWORD *)a2 == *(_DWORD *)Buf2
        && *((_DWORD *)a2 + 1) == *((_DWORD *)Buf2 + 1)
        && *((_DWORD *)a2 + 2) == *((_DWORD *)Buf2 + 2)
        && *((_DWORD *)a2 + 3) == *((_DWORD *)Buf2 + 3) )
      {
        v15 = 1;
        goto LABEL_10;
      }
LABEL_9:
      v15 = 0;
LABEL_10:
      *a8 = v15;
      goto LABEL_1240;
    }
LABEL_16:
    v11 = -1073741637;
    goto LABEL_1240;
  }
  if ( a1 > 0x1003 )
  {
    if ( a1 == 4109 )
    {
      if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
        goto LABEL_16;
      if ( (_DWORD)v14 != 2 )
      {
        if ( (_DWORD)v14 == 0x10000000 )
        {
          v15 = ArrayContains((__int64)a2, v8, (__int64)Buf2, a7);
          goto LABEL_10;
        }
        goto LABEL_16;
      }
      goto LABEL_590;
    }
    if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
      goto LABEL_16;
    if ( (_DWORD)v14 == 4096 )
    {
      *a8 = StringListContains((wchar_t *)a2);
      goto LABEL_1240;
    }
    if ( (_DWORD)v14 != 2 )
    {
      if ( (_DWORD)v14 == 0x2000 || (_DWORD)v14 == 12288 || (_DWORD)v14 == 0x4000 )
      {
        v15 = StringListElementSubstringMatch(a2, a5, Buf2, v13, v14);
        goto LABEL_10;
      }
      goto LABEL_16;
    }
    v259 = (_DWORD)v13 == 0;
LABEL_589:
    if ( !v259 )
      goto LABEL_16;
LABEL_590:
    if ( (_DWORD)v8 != a7 || (_DWORD)v8 && memcmp(a2, Buf2, v8) )
      goto LABEL_9;
    goto LABEL_593;
  }
  if ( a1 == 4099 )
  {
LABEL_586:
    v259 = (_DWORD)v14 == 2;
    goto LABEL_589;
  }
  switch ( a1 )
  {
    case 1u:
      if ( a5 != 1 || (_DWORD)v14 != 2 )
        goto LABEL_16;
      if ( a2 || Buf2 )
        goto LABEL_9;
      v15 = 1;
      goto LABEL_10;
    case 2u:
      switch ( a5 )
      {
        case 2:
          if ( (_DWORD)v14 == 6 )
          {
            *a8 = *a2 <= (char)*Buf2;
            goto LABEL_1240;
          }
          v120 = v14 - 2;
          if ( !v120 )
            goto LABEL_36;
          v121 = v120 - 1;
          if ( !v121 )
          {
            *a8 = *a2 > (char)*Buf2;
            goto LABEL_1240;
          }
          v122 = v121 - 1;
          if ( !v122 )
          {
            *a8 = *a2 < (char)*Buf2;
            goto LABEL_1240;
          }
          if ( v122 == 1 )
          {
            *a8 = *a2 >= (char)*Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 3:
          v59 = v14 - 2;
          if ( !v59 )
          {
            *a8 = *a2 == *Buf2;
            goto LABEL_1240;
          }
          v60 = v59 - 1;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( v61 )
            {
              v62 = v61 - 1;
              if ( v62 )
              {
                if ( v62 != 1 )
                  goto LABEL_16;
                v15 = *a2 <= (int)*Buf2;
              }
              else
              {
                v15 = *a2 >= (int)*Buf2;
              }
            }
            else
            {
              v15 = *a2 < (int)*Buf2;
            }
          }
          else
          {
            v15 = *a2 > (int)*Buf2;
          }
          goto LABEL_10;
        case 4:
          v63 = v14 - 2;
          if ( !v63 )
          {
            *a8 = *a2 == *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v64 = v63 - 1;
          if ( !v64 )
          {
            *a8 = *a2 > *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v65 = v64 - 1;
          if ( !v65 )
          {
            *a8 = *a2 < *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v66 = v65 - 1;
          if ( !v66 )
          {
            *a8 = *a2 >= *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v66 == 1 )
          {
            *a8 = *a2 <= *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 5:
          v51 = v14 - 2;
          if ( !v51 )
          {
            *a8 = *a2 == *(unsigned __int16 *)Buf2;
            goto LABEL_1240;
          }
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( v54 )
              {
                if ( v54 != 1 )
                  goto LABEL_16;
                v15 = *a2 <= (int)*(unsigned __int16 *)Buf2;
              }
              else
              {
                v15 = *a2 >= (int)*(unsigned __int16 *)Buf2;
              }
            }
            else
            {
              v15 = *a2 < (int)*(unsigned __int16 *)Buf2;
            }
          }
          else
          {
            v15 = *a2 > (int)*(unsigned __int16 *)Buf2;
          }
          goto LABEL_10;
        case 6:
          v126 = v14 - 2;
          if ( !v126 )
            goto LABEL_615;
          v127 = v126 - 1;
          if ( !v127 )
          {
            *a8 = *a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v128 = v127 - 1;
          if ( !v128 )
          {
            *a8 = *a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v129 = v128 - 1;
          if ( !v129 )
          {
            *a8 = *a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v129 == 1 )
          {
            *a8 = *a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 7:
          v130 = v14 - 2;
          if ( !v130 )
          {
LABEL_615:
            *a8 = *a2 == *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v131 = v130 - 1;
          if ( !v131 )
          {
            *a8 = (unsigned int)*a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v132 = v131 - 1;
          if ( !v132 )
          {
            *a8 = (unsigned int)*a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v133 = v132 - 1;
          if ( !v133 )
          {
            *a8 = (unsigned int)*a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v133 == 1 )
          {
            *a8 = (unsigned int)*a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 8:
        case 14:
          v134 = v14 - 2;
          if ( !v134 )
            goto LABEL_616;
          v135 = v134 - 1;
          if ( !v135 )
          {
            *a8 = *a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v136 = v135 - 1;
          if ( !v136 )
          {
            *a8 = *a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v137 = v136 - 1;
          if ( !v137 )
          {
            *a8 = *a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v137 == 1 )
          {
            *a8 = *a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 9:
          v138 = v14 - 2;
          if ( !v138 )
          {
LABEL_616:
            *a8 = *a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v139 = v138 - 1;
          if ( !v139 )
          {
            *a8 = (unsigned __int64)*a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v140 = v139 - 1;
          if ( !v140 )
          {
            *a8 = (unsigned __int64)*a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v141 = v140 - 1;
          if ( !v141 )
          {
            *a8 = (unsigned __int64)*a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v141 == 1 )
          {
            *a8 = (unsigned __int64)*a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 10:
          v16 = v14 - 2;
          if ( !v16 )
          {
            v44 = (float)*a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            v238 = *a2;
            goto LABEL_345;
          }
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 1 )
                goto LABEL_16;
              *a8 = *(float *)Buf2 >= (float)*a2;
            }
            else
            {
              *a8 = (float)*a2 >= *(float *)Buf2;
            }
          }
          else
          {
            *a8 = *(float *)Buf2 > (float)*a2;
          }
          goto LABEL_1240;
        case 11:
        case 15:
          v67 = v14 - 2;
          if ( !v67 )
          {
            v240 = *a2;
            goto LABEL_348;
          }
          v68 = v67 - 1;
          if ( !v68 )
          {
            *a8 = (double)*a2 > *(double *)Buf2;
            goto LABEL_1240;
          }
          v69 = v68 - 1;
          if ( !v69 )
          {
            *a8 = *(double *)Buf2 > (double)*a2;
            goto LABEL_1240;
          }
          v70 = v69 - 1;
          if ( !v70 )
          {
            *a8 = (double)*a2 >= *(double *)Buf2;
            goto LABEL_1240;
          }
          if ( v70 == 1 )
          {
            *a8 = *(double *)Buf2 >= (double)*a2;
            goto LABEL_1240;
          }
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 3u:
      switch ( a5 )
      {
        case 2:
          v20 = v14 - 2;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                    goto LABEL_16;
                  v15 = (unsigned __int8)*a2 <= (char)*Buf2;
                }
                else
                {
                  v15 = (unsigned __int8)*a2 >= (char)*Buf2;
                }
              }
              else
              {
                v15 = (unsigned __int8)*a2 < (char)*Buf2;
              }
            }
            else
            {
              v15 = (unsigned __int8)*a2 > (char)*Buf2;
            }
          }
          else
          {
            v15 = (unsigned __int8)*a2 == (char)*Buf2;
          }
          goto LABEL_10;
        case 3:
          if ( (_DWORD)v14 == 6 )
          {
            *a8 = (unsigned __int8)*a2 <= *Buf2;
            goto LABEL_1240;
          }
          v123 = v14 - 2;
          if ( !v123 )
            goto LABEL_36;
          v124 = v123 - 1;
          if ( !v124 )
          {
            *a8 = (unsigned __int8)*a2 > *Buf2;
            goto LABEL_1240;
          }
          v125 = v124 - 1;
          if ( !v125 )
          {
            *a8 = (unsigned __int8)*a2 < *Buf2;
            goto LABEL_1240;
          }
          if ( v125 == 1 )
          {
            *a8 = (unsigned __int8)*a2 >= *Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 4:
          v71 = v14 - 2;
          if ( !v71 )
          {
            v15 = (unsigned __int16)(unsigned __int8)*a2 == *(_WORD *)Buf2;
            goto LABEL_10;
          }
          v72 = v71 - 1;
          if ( !v72 )
          {
            v15 = (unsigned __int8)*a2 > *(_WORD *)Buf2;
            goto LABEL_10;
          }
          v73 = v72 - 1;
          if ( !v73 )
          {
            v15 = (unsigned __int8)*a2 < *(_WORD *)Buf2;
            goto LABEL_10;
          }
          v74 = v73 - 1;
          if ( !v74 )
          {
            v15 = (unsigned __int8)*a2 >= *(_WORD *)Buf2;
            goto LABEL_10;
          }
          if ( v74 == 1 )
          {
            v15 = (unsigned __int8)*a2 <= *(_WORD *)Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 5:
          v75 = v14 - 2;
          if ( !v75 )
          {
            *a8 = (unsigned __int16)(unsigned __int8)*a2 == *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v76 = v75 - 1;
          if ( !v76 )
          {
            *a8 = (unsigned __int8)*a2 > (unsigned int)*(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v77 = v76 - 1;
          if ( !v77 )
          {
            *a8 = (unsigned __int8)*a2 < (unsigned int)*(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v78 = v77 - 1;
          if ( !v78 )
          {
            *a8 = (unsigned __int8)*a2 >= (unsigned int)*(_WORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v78 == 1 )
          {
            *a8 = (unsigned __int8)*a2 <= (unsigned int)*(_WORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 6:
          v142 = v14 - 2;
          if ( !v142 )
            goto LABEL_617;
          v143 = v142 - 1;
          if ( !v143 )
          {
            *a8 = (int)(unsigned __int8)*a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v144 = v143 - 1;
          if ( !v144 )
          {
            *a8 = (int)(unsigned __int8)*a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v145 = v144 - 1;
          if ( !v145 )
          {
            *a8 = (int)(unsigned __int8)*a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v145 == 1 )
          {
            *a8 = (int)(unsigned __int8)*a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 7:
          v146 = v14 - 2;
          if ( !v146 )
          {
LABEL_617:
            *a8 = (unsigned __int8)*a2 == *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v147 = v146 - 1;
          if ( !v147 )
          {
            *a8 = (unsigned int)(unsigned __int8)*a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v148 = v147 - 1;
          if ( !v148 )
          {
            *a8 = (unsigned int)(unsigned __int8)*a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v149 = v148 - 1;
          if ( !v149 )
          {
            *a8 = (unsigned int)(unsigned __int8)*a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v149 == 1 )
          {
            *a8 = (unsigned int)(unsigned __int8)*a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 8:
        case 14:
          v150 = v14 - 2;
          if ( !v150 )
            goto LABEL_618;
          v151 = v150 - 1;
          if ( !v151 )
          {
            *a8 = (__int64)(unsigned __int8)*a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v152 = v151 - 1;
          if ( !v152 )
          {
            *a8 = (__int64)(unsigned __int8)*a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v153 = v152 - 1;
          if ( !v153 )
          {
            *a8 = (__int64)(unsigned __int8)*a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v153 == 1 )
          {
            *a8 = (__int64)(unsigned __int8)*a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 9:
          v154 = v14 - 2;
          if ( !v154 )
          {
LABEL_618:
            *a8 = (unsigned __int8)*a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v155 = v154 - 1;
          if ( !v155 )
          {
            *a8 = (unsigned __int64)(unsigned __int8)*a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v156 = v155 - 1;
          if ( !v156 )
          {
            *a8 = (unsigned __int64)(unsigned __int8)*a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v157 = v156 - 1;
          if ( !v157 )
          {
            *a8 = (unsigned __int64)(unsigned __int8)*a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v157 == 1 )
          {
            *a8 = (unsigned __int64)(unsigned __int8)*a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 10:
          v79 = v14 - 2;
          if ( !v79 )
          {
            v44 = (float)(unsigned __int8)*a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v80 = v79 - 1;
          if ( !v80 )
          {
            v238 = (unsigned __int8)*a2;
LABEL_345:
            v239 = (float)v238;
            goto LABEL_346;
          }
          v81 = v80 - 1;
          if ( !v81 )
          {
            v45 = (unsigned __int8)*a2;
            goto LABEL_85;
          }
          v82 = v81 - 1;
          if ( !v82 )
          {
            v83 = (unsigned __int8)*a2;
            goto LABEL_153;
          }
          if ( v82 == 1 )
          {
            *a8 = *(float *)Buf2 >= (float)(unsigned __int8)*a2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 11:
        case 15:
          v84 = v14 - 2;
          if ( !v84 )
          {
            v240 = (unsigned __int8)*a2;
            goto LABEL_348;
          }
          v85 = v84 - 1;
          if ( !v85 )
          {
            v247 = (unsigned __int8)*a2;
            goto LABEL_358;
          }
          v86 = v85 - 1;
          if ( !v86 )
          {
            v244 = (unsigned __int8)*a2;
            goto LABEL_354;
          }
          v87 = v86 - 1;
          if ( !v87 )
          {
            *a8 = (double)(unsigned __int8)*a2 >= *(double *)Buf2;
            goto LABEL_1240;
          }
          if ( v87 == 1 )
          {
            *a8 = *(double *)Buf2 >= (double)(unsigned __int8)*a2;
            goto LABEL_1240;
          }
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_16;
    case 4u:
      switch ( a5 )
      {
        case 2:
          v88 = v14 - 2;
          if ( !v88 )
          {
            v15 = *(_WORD *)a2 == (unsigned __int16)(char)*Buf2;
            goto LABEL_10;
          }
          v89 = v88 - 1;
          if ( !v89 )
          {
            v15 = *(_WORD *)a2 > (unsigned __int16)(char)*Buf2;
            goto LABEL_10;
          }
          v90 = v89 - 1;
          if ( !v90 )
          {
            v15 = *(_WORD *)a2 < (unsigned __int16)(char)*Buf2;
            goto LABEL_10;
          }
          v91 = v90 - 1;
          if ( !v91 )
          {
            v15 = *(_WORD *)a2 >= (unsigned __int16)(char)*Buf2;
            goto LABEL_10;
          }
          if ( v91 == 1 )
          {
            v15 = *(_WORD *)a2 <= (unsigned __int16)(char)*Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 3:
          v158 = v14 - 2;
          if ( !v158 )
            goto LABEL_619;
          v159 = v158 - 1;
          if ( !v159 )
          {
            v15 = *(_WORD *)a2 > *Buf2;
            goto LABEL_10;
          }
          v160 = v159 - 1;
          if ( !v160 )
          {
            v15 = *(_WORD *)a2 < *Buf2;
            goto LABEL_10;
          }
          v161 = v160 - 1;
          if ( !v161 )
          {
            v15 = *(_WORD *)a2 >= *Buf2;
            goto LABEL_10;
          }
          if ( v161 == 1 )
          {
            v15 = *(_WORD *)a2 <= *Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 4:
          v162 = v14 - 2;
          if ( !v162 )
            goto LABEL_620;
          v163 = v162 - 1;
          if ( !v163 )
          {
            *a8 = *(_WORD *)a2 > *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v164 = v163 - 1;
          if ( !v164 )
          {
            *a8 = *(_WORD *)a2 < *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          v165 = v164 - 1;
          if ( !v165 )
          {
            *a8 = *(_WORD *)a2 >= *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v165 == 1 )
          {
            *a8 = *(_WORD *)a2 <= *(_WORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 5:
          v92 = v14 - 2;
          if ( !v92 )
          {
            v15 = *(__int16 *)a2 == *(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v93 = v92 - 1;
          if ( !v93 )
          {
            v15 = *(__int16 *)a2 > (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v94 = v93 - 1;
          if ( !v94 )
          {
            v15 = *(__int16 *)a2 < (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v95 = v94 - 1;
          if ( !v95 )
          {
            v15 = *(__int16 *)a2 >= (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v95 == 1 )
          {
            v15 = *(__int16 *)a2 <= (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 6:
          if ( (_DWORD)v14 == 6 )
          {
            *a8 = *(__int16 *)a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v117 = v14 - 2;
          if ( !v117 )
          {
LABEL_621:
            *a8 = *(__int16 *)a2 == *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v118 = v117 - 1;
          if ( !v118 )
          {
            *a8 = *(__int16 *)a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v119 = v118 - 1;
          if ( !v119 )
          {
            *a8 = *(__int16 *)a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v119 == 1 )
          {
            *a8 = *(__int16 *)a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 7:
          v166 = v14 - 2;
          if ( !v166 )
            goto LABEL_621;
          v167 = v166 - 1;
          if ( !v167 )
          {
            *a8 = (unsigned int)*(__int16 *)a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v168 = v167 - 1;
          if ( !v168 )
          {
            *a8 = (unsigned int)*(__int16 *)a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v169 = v168 - 1;
          if ( !v169 )
          {
            *a8 = (unsigned int)*(__int16 *)a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v169 == 1 )
          {
            *a8 = (unsigned int)*(__int16 *)a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 8:
        case 14:
          v170 = v14 - 2;
          if ( !v170 )
            goto LABEL_622;
          v171 = v170 - 1;
          if ( !v171 )
          {
            *a8 = *(__int16 *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v172 = v171 - 1;
          if ( !v172 )
          {
            *a8 = *(__int16 *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v173 = v172 - 1;
          if ( !v173 )
          {
            *a8 = *(__int16 *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v173 == 1 )
          {
            *a8 = *(__int16 *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 9:
          v174 = v14 - 2;
          if ( !v174 )
          {
LABEL_622:
            *a8 = *(__int16 *)a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v175 = v174 - 1;
          if ( !v175 )
          {
            *a8 = (unsigned __int64)*(__int16 *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v176 = v175 - 1;
          if ( !v176 )
          {
            *a8 = (unsigned __int64)*(__int16 *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v177 = v176 - 1;
          if ( !v177 )
          {
            *a8 = (unsigned __int64)*(__int16 *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v177 == 1 )
          {
            *a8 = (unsigned __int64)*(__int16 *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 10:
          v96 = v14 - 2;
          if ( !v96 )
          {
            v44 = (float)*(__int16 *)a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v97 = v96 - 1;
          if ( !v97 )
          {
            v250 = (float)*(__int16 *)a2;
            v48 = v250 < *(float *)Buf2;
            v49 = v250 == *(float *)Buf2;
            goto LABEL_88;
          }
          v98 = v97 - 1;
          if ( !v98 )
          {
            v45 = *(__int16 *)a2;
            goto LABEL_85;
          }
          v99 = v98 - 1;
          if ( !v99 )
          {
            v83 = *(__int16 *)a2;
LABEL_153:
            v100 = (float)v83;
            goto LABEL_154;
          }
          if ( v99 != 1 )
            goto LABEL_16;
          v236 = *(__int16 *)a2;
          goto LABEL_336;
        case 11:
        case 15:
          v31 = v14 - 2;
          if ( !v31 )
          {
            v240 = *(__int16 *)a2;
            goto LABEL_348;
          }
          v32 = v31 - 1;
          if ( !v32 )
          {
            v247 = *(__int16 *)a2;
            goto LABEL_358;
          }
          v33 = v32 - 1;
          if ( !v33 )
          {
            v244 = *(__int16 *)a2;
            goto LABEL_354;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v28 = *(__int16 *)a2;
            goto LABEL_50;
          }
          if ( v34 != 1 )
            goto LABEL_16;
          v35 = *(__int16 *)a2;
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_60;
    case 5u:
      switch ( a5 )
      {
        case 2:
          v101 = v14 - 2;
          if ( !v101 )
          {
            v15 = *(unsigned __int16 *)a2 == (char)*Buf2;
            goto LABEL_10;
          }
          v102 = v101 - 1;
          if ( !v102 )
          {
            v15 = *(unsigned __int16 *)a2 > (char)*Buf2;
            goto LABEL_10;
          }
          v103 = v102 - 1;
          if ( !v103 )
          {
            v15 = *(unsigned __int16 *)a2 < (char)*Buf2;
            goto LABEL_10;
          }
          v104 = v103 - 1;
          if ( !v104 )
          {
            v15 = *(unsigned __int16 *)a2 >= (char)*Buf2;
            goto LABEL_10;
          }
          if ( v104 == 1 )
          {
            v15 = *(unsigned __int16 *)a2 <= (char)*Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 3:
          v178 = v14 - 2;
          if ( !v178 )
          {
LABEL_619:
            v15 = *(_WORD *)a2 == (unsigned __int16)*Buf2;
            goto LABEL_10;
          }
          v179 = v178 - 1;
          if ( !v179 )
          {
            v15 = (unsigned int)*(_WORD *)a2 > *Buf2;
            goto LABEL_10;
          }
          v180 = v179 - 1;
          if ( !v180 )
          {
            v15 = (unsigned int)*(_WORD *)a2 < *Buf2;
            goto LABEL_10;
          }
          v181 = v180 - 1;
          if ( !v181 )
          {
            v15 = (unsigned int)*(_WORD *)a2 >= *Buf2;
            goto LABEL_10;
          }
          if ( v181 == 1 )
          {
            v15 = (unsigned int)*(_WORD *)a2 <= *Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 4:
          v105 = v14 - 2;
          if ( !v105 )
          {
            v15 = *(unsigned __int16 *)a2 == *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v106 = v105 - 1;
          if ( !v106 )
          {
            v15 = *(unsigned __int16 *)a2 > *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v107 = v106 - 1;
          if ( !v107 )
          {
            v15 = *(unsigned __int16 *)a2 < *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v108 = v107 - 1;
          if ( !v108 )
          {
            v15 = *(unsigned __int16 *)a2 >= *(__int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v108 == 1 )
          {
            v15 = *(unsigned __int16 *)a2 <= *(__int16 *)Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 5:
          v113 = v14 - 2;
          if ( v113 )
          {
            v114 = v113 - 1;
            if ( v114 )
            {
              v115 = v114 - 1;
              if ( v115 )
              {
                v116 = v115 - 1;
                if ( v116 )
                {
                  if ( v116 != 1 )
                    goto LABEL_16;
                  *a8 = *(_WORD *)a2 <= *(_WORD *)Buf2;
                }
                else
                {
                  *a8 = *(_WORD *)a2 >= *(_WORD *)Buf2;
                }
              }
              else
              {
                *a8 = *(_WORD *)a2 < *(_WORD *)Buf2;
              }
            }
            else
            {
              *a8 = *(_WORD *)a2 > *(_WORD *)Buf2;
            }
          }
          else
          {
LABEL_620:
            *a8 = *(_WORD *)a2 == *(_WORD *)Buf2;
          }
          goto LABEL_1240;
        case 6:
          v182 = v14 - 2;
          if ( !v182 )
            goto LABEL_623;
          v183 = v182 - 1;
          if ( !v183 )
          {
            *a8 = (int)*(unsigned __int16 *)a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v184 = v183 - 1;
          if ( !v184 )
          {
            *a8 = (int)*(unsigned __int16 *)a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v185 = v184 - 1;
          if ( !v185 )
          {
            *a8 = (int)*(unsigned __int16 *)a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v185 == 1 )
          {
            *a8 = (int)*(unsigned __int16 *)a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 7:
          v186 = v14 - 2;
          if ( !v186 )
          {
LABEL_623:
            *a8 = *(unsigned __int16 *)a2 == *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v187 = v186 - 1;
          if ( !v187 )
          {
            *a8 = (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v188 = v187 - 1;
          if ( !v188 )
          {
            *a8 = (unsigned int)*(unsigned __int16 *)a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v189 = v188 - 1;
          if ( !v189 )
          {
            *a8 = (unsigned int)*(unsigned __int16 *)a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v189 == 1 )
          {
            *a8 = (unsigned int)*(unsigned __int16 *)a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 8:
        case 14:
          v190 = v14 - 2;
          if ( !v190 )
            goto LABEL_624;
          v191 = v190 - 1;
          if ( !v191 )
          {
            *a8 = (__int64)*(unsigned __int16 *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v192 = v191 - 1;
          if ( !v192 )
          {
            *a8 = (__int64)*(unsigned __int16 *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v193 = v192 - 1;
          if ( !v193 )
          {
            *a8 = (__int64)*(unsigned __int16 *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v193 == 1 )
          {
            *a8 = (__int64)*(unsigned __int16 *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 9:
          v194 = v14 - 2;
          if ( !v194 )
          {
LABEL_624:
            *a8 = *(unsigned __int16 *)a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v195 = v194 - 1;
          if ( !v195 )
          {
            *a8 = (unsigned __int64)*(unsigned __int16 *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v196 = v195 - 1;
          if ( !v196 )
          {
            *a8 = (unsigned __int64)*(unsigned __int16 *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v197 = v196 - 1;
          if ( !v197 )
          {
            *a8 = (unsigned __int64)*(unsigned __int16 *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v197 == 1 )
          {
            *a8 = (unsigned __int64)*(unsigned __int16 *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 10:
          v109 = v14 - 2;
          if ( !v109 )
          {
            v44 = (float)*(unsigned __int16 *)a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v110 = v109 - 1;
          if ( !v110 )
          {
            v251 = (float)*(unsigned __int16 *)a2;
            v48 = v251 < *(float *)Buf2;
            v49 = v251 == *(float *)Buf2;
            goto LABEL_88;
          }
          v111 = v110 - 1;
          if ( !v111 )
          {
            v45 = *(unsigned __int16 *)a2;
LABEL_85:
            v46 = _mm_cvtsi32_si128(v45);
            goto LABEL_86;
          }
          v112 = v111 - 1;
          if ( !v112 )
          {
            v38 = (float)*(unsigned __int16 *)a2 < *(float *)Buf2;
            goto LABEL_63;
          }
          if ( v112 != 1 )
            goto LABEL_16;
          v236 = *(unsigned __int16 *)a2;
LABEL_336:
          v237 = (float)v236;
          goto LABEL_337;
        case 11:
        case 15:
          v24 = v14 - 2;
          if ( !v24 )
          {
            v240 = *(unsigned __int16 *)a2;
LABEL_348:
            v241 = _mm_cvtsi32_si128(v240);
            goto LABEL_349;
          }
          v25 = v24 - 1;
          if ( !v25 )
          {
            v247 = *(unsigned __int16 *)a2;
LABEL_358:
            v248 = _mm_cvtsi32_si128(v247);
            goto LABEL_359;
          }
          v26 = v25 - 1;
          if ( !v26 )
          {
            v244 = *(unsigned __int16 *)a2;
LABEL_354:
            v245 = _mm_cvtsi32_si128(v244);
            goto LABEL_355;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
            v28 = *(unsigned __int16 *)a2;
LABEL_50:
            v29 = _mm_cvtsi32_si128(v28);
            goto LABEL_51;
          }
          if ( v27 != 1 )
            goto LABEL_16;
          v35 = *(unsigned __int16 *)a2;
          break;
        default:
          goto LABEL_16;
      }
LABEL_60:
      v36 = _mm_cvtsi32_si128(v35);
      goto LABEL_61;
    case 6u:
      switch ( a5 )
      {
        case 2:
          v198 = v14 - 2;
          if ( !v198 )
            goto LABEL_625;
          v199 = v198 - 1;
          if ( !v199 )
          {
            v15 = *(_DWORD *)a2 > (char)*Buf2;
            goto LABEL_10;
          }
          v200 = v199 - 1;
          if ( !v200 )
          {
            v15 = *(_DWORD *)a2 < (char)*Buf2;
            goto LABEL_10;
          }
          v201 = v200 - 1;
          if ( !v201 )
          {
            v15 = *(_DWORD *)a2 >= (char)*Buf2;
            goto LABEL_10;
          }
          if ( v201 == 1 )
          {
            v15 = *(_DWORD *)a2 <= (char)*Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 3:
          v202 = v14 - 2;
          if ( !v202 )
            goto LABEL_626;
          v203 = v202 - 1;
          if ( !v203 )
          {
            v15 = *(_DWORD *)a2 > (int)*Buf2;
            goto LABEL_10;
          }
          v204 = v203 - 1;
          if ( !v204 )
          {
            v15 = *(_DWORD *)a2 < (int)*Buf2;
            goto LABEL_10;
          }
          v205 = v204 - 1;
          if ( !v205 )
          {
            v15 = *(_DWORD *)a2 >= (int)*Buf2;
            goto LABEL_10;
          }
          if ( v205 == 1 )
          {
            v15 = *(_DWORD *)a2 <= (int)*Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 4:
          v206 = v14 - 2;
          if ( !v206 )
            goto LABEL_627;
          v207 = v206 - 1;
          if ( !v207 )
          {
            v15 = *(_DWORD *)a2 > *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v208 = v207 - 1;
          if ( !v208 )
          {
            v15 = *(_DWORD *)a2 < *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v209 = v208 - 1;
          if ( !v209 )
          {
            v15 = *(_DWORD *)a2 >= *(__int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v209 == 1 )
          {
            v15 = *(_DWORD *)a2 <= *(__int16 *)Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 5:
          v210 = v14 - 2;
          if ( !v210 )
            goto LABEL_628;
          v211 = v210 - 1;
          if ( !v211 )
          {
            v15 = *(_DWORD *)a2 > (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v212 = v211 - 1;
          if ( !v212 )
          {
            v15 = *(_DWORD *)a2 < (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v213 = v212 - 1;
          if ( !v213 )
          {
            v15 = *(_DWORD *)a2 >= (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v213 == 1 )
          {
            v15 = *(_DWORD *)a2 <= (int)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        case 6:
          v214 = v14 - 2;
          if ( !v214 )
            goto LABEL_1224;
          v215 = v214 - 1;
          if ( !v215 )
          {
            *a8 = *(_DWORD *)a2 > *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v216 = v215 - 1;
          if ( !v216 )
          {
            *a8 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          v217 = v216 - 1;
          if ( !v217 )
          {
            *a8 = *(_DWORD *)a2 >= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v217 == 1 )
          {
            *a8 = *(_DWORD *)a2 <= *(_DWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 7:
          goto LABEL_605;
        case 8:
        case 14:
          v218 = v14 - 2;
          if ( !v218 )
            goto LABEL_632;
          v219 = v218 - 1;
          if ( !v219 )
          {
            *a8 = *(int *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v220 = v219 - 1;
          if ( !v220 )
          {
            *a8 = *(int *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v221 = v220 - 1;
          if ( !v221 )
          {
            *a8 = *(int *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v221 == 1 )
          {
            *a8 = *(int *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 9:
          v222 = v14 - 2;
          if ( !v222 )
          {
LABEL_632:
            *a8 = *(_DWORD *)a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v223 = v222 - 1;
          if ( !v223 )
          {
            *a8 = (unsigned __int64)*(int *)a2 > *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v224 = v223 - 1;
          if ( !v224 )
          {
            *a8 = (unsigned __int64)*(int *)a2 < *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v225 = v224 - 1;
          if ( !v225 )
          {
            *a8 = (unsigned __int64)*(int *)a2 >= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          if ( v225 == 1 )
          {
            *a8 = (unsigned __int64)*(int *)a2 <= *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          goto LABEL_16;
        case 10:
          v55 = v14 - 2;
          if ( !v55 )
          {
            v44 = (float)*(int *)a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v56 = v55 - 1;
          if ( !v56 )
          {
            v252 = (float)*(int *)a2;
            v48 = v252 < *(float *)Buf2;
            v49 = v252 == *(float *)Buf2;
            goto LABEL_88;
          }
          v57 = v56 - 1;
          if ( !v57 )
          {
            v46 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_86:
            LODWORD(v47) = _mm_cvtepi32_ps(v46).m128_u32[0];
            goto LABEL_87;
          }
          v58 = v57 - 1;
          if ( !v58 )
          {
            v38 = (float)*(int *)a2 < *(float *)Buf2;
            goto LABEL_63;
          }
          if ( v58 != 1 )
            goto LABEL_16;
          *a8 = *(float *)Buf2 >= (float)*(int *)a2;
          goto LABEL_1240;
        case 11:
        case 15:
          v39 = v14 - 2;
          if ( !v39 )
          {
            v241 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_349:
            *(_QWORD *)&v242 = *(_OWORD *)&_mm_cvtepi32_pd(v241);
            goto LABEL_350;
          }
          v40 = v39 - 1;
          if ( !v40 )
          {
            v248 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_359:
            *(_QWORD *)&v249 = *(_OWORD *)&_mm_cvtepi32_pd(v248);
            goto LABEL_360;
          }
          v41 = v40 - 1;
          if ( !v41 )
          {
            v245 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_355:
            *(_QWORD *)&v246 = *(_OWORD *)&_mm_cvtepi32_pd(v245);
            goto LABEL_356;
          }
          v42 = v41 - 1;
          if ( !v42 )
          {
            v29 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_51:
            *(_QWORD *)&v30 = *(_OWORD *)&_mm_cvtepi32_pd(v29);
            goto LABEL_52;
          }
          if ( v42 != 1 )
            goto LABEL_16;
          v36 = _mm_cvtsi32_si128(*(_DWORD *)a2);
          break;
        default:
          goto LABEL_16;
      }
LABEL_61:
      *(_QWORD *)&v37 = *(_OWORD *)&_mm_cvtepi32_pd(v36);
      goto LABEL_62;
    case 7u:
      if ( (unsigned int)(v14 - 7) <= 1 )
      {
        if ( a5 != 7 )
          goto LABEL_16;
        v276 = *(_DWORD *)a2;
        v277 = *(_DWORD *)Buf2;
        if ( (_DWORD)v14 == 7 )
          v50 = v277 & v276;
        else
          v50 = v277 | v276;
LABEL_89:
        *a8 = v50;
        goto LABEL_1240;
      }
      switch ( a5 )
      {
        case 9:
          if ( (_DWORD)v14 == 4 )
          {
            *a8 = (unsigned __int64)*(unsigned int *)a2 < *(_QWORD *)Buf2;
            break;
          }
          v229 = v14 - 2;
          if ( v229 )
          {
            v230 = v229 - 1;
            if ( !v230 )
            {
              *a8 = (unsigned __int64)*(unsigned int *)a2 > *(_QWORD *)Buf2;
              break;
            }
            v231 = v230 - 2;
            if ( !v231 )
            {
              *a8 = (unsigned __int64)*(unsigned int *)a2 >= *(_QWORD *)Buf2;
              break;
            }
            if ( v231 == 1 )
            {
              *a8 = (unsigned __int64)*(unsigned int *)a2 <= *(_QWORD *)Buf2;
              break;
            }
            goto LABEL_16;
          }
          goto LABEL_665;
        case 14:
LABEL_316:
          if ( (_DWORD)v14 == 4 )
          {
            *a8 = (__int64)*(unsigned int *)a2 < *(_QWORD *)Buf2;
            break;
          }
          v226 = v14 - 2;
          if ( v226 )
          {
            v227 = v226 - 1;
            if ( !v227 )
            {
              *a8 = (__int64)*(unsigned int *)a2 > *(_QWORD *)Buf2;
              break;
            }
            v228 = v227 - 2;
            if ( !v228 )
            {
              *a8 = (__int64)*(unsigned int *)a2 >= *(_QWORD *)Buf2;
              break;
            }
            if ( v228 == 1 )
            {
              *a8 = (__int64)*(unsigned int *)a2 <= *(_QWORD *)Buf2;
              break;
            }
            goto LABEL_16;
          }
LABEL_665:
          *a8 = *(_DWORD *)a2 == *(_QWORD *)Buf2;
          break;
        case 15:
LABEL_331:
          if ( (_DWORD)v14 == 4 )
          {
            v246 = (double)*(int *)a2;
LABEL_356:
            *a8 = *(double *)Buf2 > v246;
          }
          else
          {
            v235 = v14 - 2;
            if ( !v235 )
            {
              v44 = (double)*(int *)a2 == *(double *)Buf2;
              goto LABEL_342;
            }
            v255 = v235 - 1;
            if ( v255 )
            {
              v256 = v255 - 2;
              if ( v256 )
              {
                if ( v256 != 1 )
                  goto LABEL_16;
                v37 = (double)*(int *)a2;
LABEL_62:
                v38 = *(double *)Buf2 < v37;
LABEL_63:
                *a8 = !v38;
              }
              else
              {
                v30 = (double)*(int *)a2;
LABEL_52:
                *a8 = v30 >= *(double *)Buf2;
              }
            }
            else
            {
              v249 = (double)*(int *)a2;
LABEL_360:
              *a8 = v249 > *(double *)Buf2;
            }
          }
          break;
        case 2:
          if ( (_DWORD)v14 == 4 )
          {
            v15 = *(_DWORD *)a2 < (unsigned int)(char)*Buf2;
            goto LABEL_10;
          }
          v232 = v14 - 2;
          if ( !v232 )
          {
LABEL_625:
            v15 = *(_DWORD *)a2 == (char)*Buf2;
            goto LABEL_10;
          }
          v233 = v232 - 1;
          if ( !v233 )
          {
            v15 = *(_DWORD *)a2 > (unsigned int)(char)*Buf2;
            goto LABEL_10;
          }
          v234 = v233 - 2;
          if ( !v234 )
          {
            v15 = *(_DWORD *)a2 >= (unsigned int)(char)*Buf2;
            goto LABEL_10;
          }
          if ( v234 == 1 )
          {
            v15 = *(_DWORD *)a2 <= (unsigned int)(char)*Buf2;
            goto LABEL_10;
          }
          goto LABEL_16;
        default:
          switch ( a5 )
          {
            case 3:
              v264 = v14 - 2;
              if ( !v264 )
              {
LABEL_626:
                v15 = *(_DWORD *)a2 == *Buf2;
                goto LABEL_10;
              }
              v265 = v264 - 1;
              if ( v265 )
              {
                v266 = v265 - 1;
                if ( v266 )
                {
                  v267 = v266 - 1;
                  if ( v267 )
                  {
                    if ( v267 != 1 )
                      goto LABEL_16;
                    v15 = *(_DWORD *)a2 <= (unsigned int)*Buf2;
                  }
                  else
                  {
                    v15 = *(_DWORD *)a2 >= (unsigned int)*Buf2;
                  }
                }
                else
                {
                  v15 = *(_DWORD *)a2 < (unsigned int)*Buf2;
                }
              }
              else
              {
                v15 = *(_DWORD *)a2 > (unsigned int)*Buf2;
              }
              goto LABEL_10;
            case 4:
              v268 = v14 - 2;
              if ( !v268 )
              {
LABEL_627:
                v15 = *(_DWORD *)a2 == *(__int16 *)Buf2;
                goto LABEL_10;
              }
              v269 = v268 - 1;
              if ( v269 )
              {
                v270 = v269 - 1;
                if ( v270 )
                {
                  v271 = v270 - 1;
                  if ( v271 )
                  {
                    if ( v271 != 1 )
                      goto LABEL_16;
                    v15 = *(_DWORD *)a2 <= (unsigned int)*(__int16 *)Buf2;
                  }
                  else
                  {
                    v15 = *(_DWORD *)a2 >= (unsigned int)*(__int16 *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_DWORD *)a2 < (unsigned int)*(__int16 *)Buf2;
                }
              }
              else
              {
                v15 = *(_DWORD *)a2 > (unsigned int)*(__int16 *)Buf2;
              }
              goto LABEL_10;
            case 5:
              v272 = v14 - 2;
              if ( !v272 )
              {
LABEL_628:
                v15 = *(_DWORD *)a2 == *(unsigned __int16 *)Buf2;
                goto LABEL_10;
              }
              v273 = v272 - 1;
              if ( v273 )
              {
                v274 = v273 - 1;
                if ( v274 )
                {
                  v275 = v274 - 1;
                  if ( v275 )
                  {
                    if ( v275 != 1 )
                      goto LABEL_16;
                    v15 = *(_DWORD *)a2 <= (unsigned int)*(unsigned __int16 *)Buf2;
                  }
                  else
                  {
                    v15 = *(_DWORD *)a2 >= (unsigned int)*(unsigned __int16 *)Buf2;
                  }
                }
                else
                {
                  v15 = *(_DWORD *)a2 < (unsigned int)*(unsigned __int16 *)Buf2;
                }
              }
              else
              {
                v15 = *(_DWORD *)a2 > (unsigned int)*(unsigned __int16 *)Buf2;
              }
              goto LABEL_10;
            case 6:
            case 7:
LABEL_605:
              v260 = v14 - 2;
              if ( !v260 )
                goto LABEL_1224;
              v261 = v260 - 1;
              if ( v261 )
              {
                v262 = v261 - 1;
                if ( v262 )
                {
                  v263 = v262 - 1;
                  if ( v263 )
                  {
                    if ( v263 != 1 )
                      goto LABEL_16;
                    *a8 = *(_DWORD *)a2 <= *(_DWORD *)Buf2;
                  }
                  else
                  {
                    *a8 = *(_DWORD *)a2 >= *(_DWORD *)Buf2;
                  }
                }
                else
                {
                  *a8 = *(_DWORD *)a2 < *(_DWORD *)Buf2;
                }
              }
              else
              {
                *a8 = *(_DWORD *)a2 > *(_DWORD *)Buf2;
              }
              goto LABEL_1240;
            case 8:
              goto LABEL_316;
            case 10:
              if ( (_DWORD)v14 == 4 )
              {
                v47 = (float)*(int *)a2;
                goto LABEL_87;
              }
              v43 = v14 - 2;
              if ( !v43 )
              {
                v44 = (float)*(int *)a2 == *(float *)Buf2;
                goto LABEL_342;
              }
              v253 = v43 - 1;
              if ( !v253 )
              {
                v239 = (float)*(int *)a2;
                goto LABEL_346;
              }
              v254 = v253 - 2;
              if ( !v254 )
              {
                v100 = (float)*(int *)a2;
                goto LABEL_154;
              }
              if ( v254 != 1 )
                goto LABEL_16;
              v237 = (float)*(int *)a2;
              break;
            case 11:
              goto LABEL_331;
            default:
              goto LABEL_16;
          }
LABEL_337:
          *a8 = *(float *)Buf2 >= v237;
          break;
      }
LABEL_1240:
      if ( v12 )
      {
        LOBYTE(v10) = *a8 == 0;
        *a8 = v10;
      }
      return v11;
    case 8u:
      switch ( a5 )
      {
        case 2:
          goto LABEL_677;
        case 3:
          v278 = v14 - 2;
          if ( !v278 )
            goto LABEL_691;
          v279 = v278 - 1;
          if ( !v279 )
            goto LABEL_690;
          v280 = v279 - 1;
          if ( !v280 )
            goto LABEL_689;
          v281 = v280 - 1;
          if ( !v281 )
            goto LABEL_688;
          if ( v281 != 1 )
            goto LABEL_16;
          v15 = *(_QWORD *)a2 <= (__int64)*Buf2;
          break;
        case 4:
          v287 = v14 - 2;
          if ( !v287 )
            goto LABEL_701;
          v288 = v287 - 1;
          if ( !v288 )
            goto LABEL_700;
          v289 = v288 - 1;
          if ( !v289 )
            goto LABEL_699;
          v290 = v289 - 1;
          if ( !v290 )
            goto LABEL_698;
          if ( v290 != 1 )
            goto LABEL_16;
          v15 = *(_QWORD *)a2 <= *(__int16 *)Buf2;
          break;
        case 5:
          v291 = v14 - 2;
          if ( !v291 )
            goto LABEL_711;
          v292 = v291 - 1;
          if ( !v292 )
            goto LABEL_710;
          v293 = v292 - 1;
          if ( !v293 )
            goto LABEL_709;
          v294 = v293 - 1;
          if ( !v294 )
            goto LABEL_708;
          if ( v294 != 1 )
            goto LABEL_16;
          v15 = *(_QWORD *)a2 <= (__int64)*(unsigned __int16 *)Buf2;
          break;
        case 6:
          v295 = v14 - 2;
          if ( !v295 )
            goto LABEL_721;
          v296 = v295 - 1;
          if ( !v296 )
            goto LABEL_720;
          v297 = v296 - 1;
          if ( !v297 )
            goto LABEL_719;
          v298 = v297 - 1;
          if ( !v298 )
            goto LABEL_718;
          if ( v298 != 1 )
            goto LABEL_16;
          v15 = *(_QWORD *)a2 <= *(int *)Buf2;
          break;
        case 7:
          v299 = v14 - 2;
          if ( !v299 )
            goto LABEL_731;
          v300 = v299 - 1;
          if ( !v300 )
            goto LABEL_730;
          v301 = v300 - 1;
          if ( !v301 )
            goto LABEL_729;
          v302 = v301 - 1;
          if ( !v302 )
            goto LABEL_728;
          if ( v302 != 1 )
            goto LABEL_16;
          v15 = *(_QWORD *)a2 <= (__int64)*(unsigned int *)Buf2;
          break;
        case 8:
        case 14:
          goto LABEL_732;
        case 9:
          goto LABEL_742;
        case 10:
          goto LABEL_751;
        case 11:
        case 15:
          v315 = v14 - 2;
          if ( !v315 )
            goto LABEL_770;
          v316 = v315 - 1;
          if ( !v316 )
            goto LABEL_769;
          v317 = v316 - 1;
          if ( !v317 )
            goto LABEL_768;
          v318 = v317 - 1;
          if ( v318 )
            goto LABEL_765;
          goto LABEL_767;
        default:
          goto LABEL_16;
      }
      goto LABEL_10;
    case 9u:
      switch ( a5 )
      {
        case 2:
          v319 = v14 - 2;
          if ( !v319 )
            goto LABEL_687;
          v320 = v319 - 1;
          if ( v320 )
          {
            v321 = v320 - 1;
            if ( v321 )
            {
              v322 = v321 - 1;
              if ( v322 )
              {
                if ( v322 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)(char)*Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)(char)*Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)(char)*Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)(char)*Buf2;
          }
          goto LABEL_10;
        case 3:
          v323 = v14 - 2;
          if ( !v323 )
            goto LABEL_691;
          v324 = v323 - 1;
          if ( v324 )
          {
            v325 = v324 - 1;
            if ( v325 )
            {
              v326 = v325 - 1;
              if ( v326 )
              {
                if ( v326 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)*Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)*Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)*Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)*Buf2;
          }
          goto LABEL_10;
        case 4:
          v327 = v14 - 2;
          if ( !v327 )
            goto LABEL_701;
          v328 = v327 - 1;
          if ( v328 )
          {
            v329 = v328 - 1;
            if ( v329 )
            {
              v330 = v329 - 1;
              if ( v330 )
              {
                if ( v330 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)*(__int16 *)Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)*(__int16 *)Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)*(__int16 *)Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)*(__int16 *)Buf2;
          }
          goto LABEL_10;
        case 5:
          v331 = v14 - 2;
          if ( !v331 )
            goto LABEL_711;
          v332 = v331 - 1;
          if ( v332 )
          {
            v333 = v332 - 1;
            if ( v333 )
            {
              v334 = v333 - 1;
              if ( v334 )
              {
                if ( v334 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)*(unsigned __int16 *)Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)*(unsigned __int16 *)Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)*(unsigned __int16 *)Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)*(unsigned __int16 *)Buf2;
          }
          goto LABEL_10;
        case 6:
          v335 = v14 - 2;
          if ( !v335 )
            goto LABEL_721;
          v336 = v335 - 1;
          if ( v336 )
          {
            v337 = v336 - 1;
            if ( v337 )
            {
              v338 = v337 - 1;
              if ( v338 )
              {
                if ( v338 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)*(int *)Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)*(int *)Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)*(int *)Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)*(int *)Buf2;
          }
          goto LABEL_10;
        case 7:
          v339 = v14 - 2;
          if ( !v339 )
            goto LABEL_731;
          v340 = v339 - 1;
          if ( v340 )
          {
            v341 = v340 - 1;
            if ( v341 )
            {
              v342 = v341 - 1;
              if ( v342 )
              {
                if ( v342 != 1 )
                  goto LABEL_16;
                v15 = *(_QWORD *)a2 <= (unsigned __int64)*(unsigned int *)Buf2;
              }
              else
              {
                v15 = *(_QWORD *)a2 >= (unsigned __int64)*(unsigned int *)Buf2;
              }
            }
            else
            {
              v15 = *(_QWORD *)a2 < (unsigned __int64)*(unsigned int *)Buf2;
            }
          }
          else
          {
            v15 = *(_QWORD *)a2 > (unsigned __int64)*(unsigned int *)Buf2;
          }
          goto LABEL_10;
        case 8:
        case 9:
        case 14:
          goto LABEL_742;
        case 10:
          v343 = v14 - 2;
          if ( !v343 )
          {
            v351 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v352 = (float)(int)(*(_DWORD *)a2 & 1 | (v351 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v351 >> 1));
            else
              v352 = (float)(int)v351;
            v44 = v352 == *(float *)Buf2;
            goto LABEL_342;
          }
          v344 = v343 - 1;
          if ( !v344 )
          {
            v350 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v239 = (float)(int)(*(_DWORD *)a2 & 1 | (v350 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v350 >> 1));
            else
              v239 = (float)(int)v350;
            goto LABEL_346;
          }
          v345 = v344 - 1;
          if ( !v345 )
          {
            v349 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v47 = (float)(int)(*(_DWORD *)a2 & 1 | (v349 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v349 >> 1));
            else
              v47 = (float)(int)v349;
            goto LABEL_87;
          }
          v346 = v345 - 1;
          if ( !v346 )
          {
            v348 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v100 = (float)(int)(*(_DWORD *)a2 & 1 | (v348 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v348 >> 1));
            else
              v100 = (float)(int)v348;
            goto LABEL_154;
          }
          if ( v346 != 1 )
            goto LABEL_16;
          v347 = *(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v237 = (float)(int)(*(_DWORD *)a2 & 1 | (v347 >> 1)) + (float)(int)(*(_DWORD *)a2 & 1 | (v347 >> 1));
          else
            v237 = (float)(int)v347;
          goto LABEL_337;
        case 11:
        case 15:
          v353 = v14 - 2;
          if ( !v353 )
          {
            v361 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v242 = (double)(int)(*(_DWORD *)a2 & 1 | (v361 >> 1)) + (double)(int)(*(_DWORD *)a2 & 1 | (v361 >> 1));
            else
              v242 = (double)(int)v361;
            goto LABEL_350;
          }
          v354 = v353 - 1;
          if ( !v354 )
          {
            v360 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v249 = (double)(int)(*(_DWORD *)a2 & 1 | (v360 >> 1)) + (double)(int)(*(_DWORD *)a2 & 1 | (v360 >> 1));
            else
              v249 = (double)(int)v360;
            goto LABEL_360;
          }
          v355 = v354 - 1;
          if ( !v355 )
          {
            v359 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v246 = (double)(int)(*(_DWORD *)a2 & 1 | (v359 >> 1)) + (double)(int)(*(_DWORD *)a2 & 1 | (v359 >> 1));
            else
              v246 = (double)(int)v359;
            goto LABEL_356;
          }
          v356 = v355 - 1;
          if ( !v356 )
          {
            v358 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v30 = (double)(int)(*(_DWORD *)a2 & 1 | (v358 >> 1)) + (double)(int)(*(_DWORD *)a2 & 1 | (v358 >> 1));
            else
              v30 = (double)(int)v358;
            goto LABEL_52;
          }
          if ( v356 != 1 )
            goto LABEL_16;
          v357 = *(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v37 = (double)(int)(*(_DWORD *)a2 & 1 | (v357 >> 1)) + (double)(int)(*(_DWORD *)a2 & 1 | (v357 >> 1));
          else
            v37 = (double)(int)v357;
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_62;
    case 0xAu:
      if ( a5 != 7 )
      {
        switch ( a5 )
        {
          case 2:
            v362 = v14 - 2;
            if ( !v362 )
            {
              v258 = (float)(char)*Buf2;
              goto LABEL_584;
            }
            v363 = v362 - 1;
            if ( !v363 )
            {
              v371 = (char)*Buf2;
              goto LABEL_886;
            }
            v364 = v363 - 1;
            if ( v364 )
            {
              v365 = v364 - 1;
              if ( !v365 )
              {
                v366 = (char)*Buf2;
                goto LABEL_875;
              }
              if ( v365 != 1 )
                goto LABEL_16;
              v15 = 0;
              LOBYTE(v15) = (float)(char)*Buf2 >= *(float *)a2;
            }
            else
            {
              v15 = 0;
              LOBYTE(v15) = (float)(char)*Buf2 > *(float *)a2;
            }
            goto LABEL_10;
          case 3:
            v377 = v14 - 2;
            if ( !v377 )
            {
              v258 = (float)*Buf2;
              goto LABEL_584;
            }
            v378 = v377 - 1;
            if ( !v378 )
            {
              v371 = *Buf2;
              goto LABEL_886;
            }
            v379 = v378 - 1;
            if ( !v379 )
            {
              v381 = (float)*Buf2;
              v374 = v381 < *(float *)a2;
              v375 = v381 == *(float *)a2;
              goto LABEL_893;
            }
            v380 = v379 - 1;
            if ( !v380 )
            {
              v366 = *Buf2;
              goto LABEL_875;
            }
            if ( v380 != 1 )
              goto LABEL_16;
            v369 = (float)*Buf2 < *(float *)a2;
            goto LABEL_882;
          case 4:
            v382 = v14 - 2;
            if ( !v382 )
            {
              v258 = (float)*(__int16 *)Buf2;
              goto LABEL_584;
            }
            v383 = v382 - 1;
            if ( !v383 )
            {
              v371 = *(__int16 *)Buf2;
              goto LABEL_886;
            }
            v384 = v383 - 1;
            if ( !v384 )
            {
              v386 = (float)*(__int16 *)Buf2;
              v374 = v386 < *(float *)a2;
              v375 = v386 == *(float *)a2;
              goto LABEL_893;
            }
            v385 = v384 - 1;
            if ( !v385 )
            {
              v366 = *(__int16 *)Buf2;
              goto LABEL_875;
            }
            if ( v385 != 1 )
              goto LABEL_16;
            v369 = (float)*(__int16 *)Buf2 < *(float *)a2;
            goto LABEL_882;
          case 5:
            v387 = v14 - 2;
            if ( !v387 )
            {
              v258 = (float)*(unsigned __int16 *)Buf2;
              goto LABEL_584;
            }
            v388 = v387 - 1;
            if ( !v388 )
            {
              v371 = *(unsigned __int16 *)Buf2;
LABEL_886:
              v372 = _mm_cvtsi32_si128(v371);
              goto LABEL_888;
            }
            v389 = v388 - 1;
            if ( !v389 )
            {
              v391 = (float)*(unsigned __int16 *)Buf2;
              v374 = v391 < *(float *)a2;
              v375 = v391 == *(float *)a2;
              goto LABEL_893;
            }
            v390 = v389 - 1;
            if ( !v390 )
            {
              v366 = *(unsigned __int16 *)Buf2;
LABEL_875:
              v367 = _mm_cvtsi32_si128(v366);
              goto LABEL_877;
            }
            if ( v390 != 1 )
              goto LABEL_16;
            v369 = (float)*(unsigned __int16 *)Buf2 < *(float *)a2;
            goto LABEL_882;
          case 6:
            v392 = v14 - 2;
            if ( !v392 )
            {
              v258 = (float)*(int *)Buf2;
              goto LABEL_584;
            }
            v393 = v392 - 1;
            if ( !v393 )
            {
              v372 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_888:
              LODWORD(v373) = _mm_cvtepi32_ps(v372).m128_u32[0];
              goto LABEL_890;
            }
            v394 = v393 - 1;
            if ( !v394 )
            {
              v396 = (float)*(int *)Buf2;
              v374 = v396 < *(float *)a2;
              v375 = v396 == *(float *)a2;
              goto LABEL_893;
            }
            v395 = v394 - 1;
            if ( !v395 )
            {
              v367 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_877:
              LODWORD(v368) = _mm_cvtepi32_ps(v367).m128_u32[0];
              goto LABEL_879;
            }
            if ( v395 != 1 )
              goto LABEL_16;
            v369 = (float)*(int *)Buf2 < *(float *)a2;
            goto LABEL_882;
          case 8:
          case 14:
            v397 = v14 - 2;
            if ( !v397 )
            {
              v258 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_584;
            }
            v398 = v397 - 1;
            if ( !v398 )
            {
              v373 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_890;
            }
            v399 = v398 - 1;
            if ( !v399 )
            {
              v401 = (float)(int)*(_QWORD *)Buf2;
              v374 = v401 < *(float *)a2;
              v375 = v401 == *(float *)a2;
              goto LABEL_893;
            }
            v400 = v399 - 1;
            if ( !v400 )
            {
              v368 = (float)(int)*(_QWORD *)Buf2;
              goto LABEL_879;
            }
            if ( v400 != 1 )
              goto LABEL_16;
            v369 = (float)(int)*(_QWORD *)Buf2 < *(float *)a2;
            goto LABEL_882;
          case 9:
            v402 = v14 - 2;
            if ( !v402 )
            {
              v257 = *(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 >= 0 )
                goto LABEL_583;
              v258 = (float)(int)(*(_DWORD *)Buf2 & 1 | (v257 >> 1)) + (float)(int)(*(_DWORD *)Buf2 & 1 | (v257 >> 1));
              goto LABEL_584;
            }
            v403 = v402 - 1;
            if ( !v403 )
            {
              v409 = *(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v373 = (float)(int)(*(_DWORD *)Buf2 & 1 | (v409 >> 1)) + (float)(int)(*(_DWORD *)Buf2 & 1 | (v409 >> 1));
              else
                v373 = (float)(int)v409;
LABEL_890:
              v374 = *(float *)a2 < v373;
              v375 = *(float *)a2 == v373;
              goto LABEL_893;
            }
            v404 = v403 - 1;
            if ( !v404 )
            {
              v408 = *(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v376 = (float)(int)(*(_DWORD *)Buf2 & 1 | (v408 >> 1)) + (float)(int)(*(_DWORD *)Buf2 & 1 | (v408 >> 1));
              else
                v376 = (float)(int)v408;
              v374 = v376 < *(float *)a2;
              v375 = v376 == *(float *)a2;
              goto LABEL_893;
            }
            v405 = v404 - 1;
            if ( v405 )
            {
              if ( v405 != 1 )
                goto LABEL_16;
              v406 = *(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v370 = (float)(int)(*(_DWORD *)Buf2 & 1 | (v406 >> 1)) + (float)(int)(*(_DWORD *)Buf2 & 1 | (v406 >> 1));
              else
                v370 = (float)(int)v406;
              v369 = v370 < *(float *)a2;
            }
            else
            {
              v407 = *(_QWORD *)Buf2;
              if ( *(__int64 *)Buf2 < 0 )
                v368 = (float)(int)(*(_DWORD *)Buf2 & 1 | (v407 >> 1)) + (float)(int)(*(_DWORD *)Buf2 & 1 | (v407 >> 1));
              else
                v368 = (float)(int)v407;
LABEL_879:
              v369 = *(float *)a2 < v368;
            }
            goto LABEL_882;
          case 10:
            v410 = v14 - 2;
            if ( !v410 )
            {
              v44 = *(float *)a2 == *(float *)Buf2;
              goto LABEL_342;
            }
            v411 = v410 - 1;
            if ( !v411 )
            {
              v239 = *(float *)a2;
              goto LABEL_346;
            }
            v412 = v411 - 1;
            if ( !v412 )
            {
              v48 = *(float *)Buf2 < *(float *)a2;
              v49 = *(float *)Buf2 == *(float *)a2;
              goto LABEL_88;
            }
            v413 = v412 - 1;
            if ( !v413 )
            {
              v100 = *(float *)a2;
              goto LABEL_154;
            }
            if ( v413 != 1 )
              goto LABEL_16;
            v38 = *(float *)Buf2 < *(float *)a2;
            goto LABEL_63;
          case 11:
          case 15:
            v414 = v14 - 2;
            if ( !v414 )
            {
              v242 = *(float *)a2;
              goto LABEL_350;
            }
            v415 = v414 - 1;
            if ( !v415 )
            {
              v249 = *(float *)a2;
              goto LABEL_360;
            }
            v416 = v415 - 1;
            if ( !v416 )
            {
              v246 = *(float *)a2;
              goto LABEL_356;
            }
            v417 = v416 - 1;
            if ( !v417 )
            {
              v30 = *(float *)a2;
              goto LABEL_52;
            }
            if ( v417 != 1 )
              goto LABEL_16;
            v37 = *(float *)a2;
            break;
          default:
            goto LABEL_16;
        }
        goto LABEL_62;
      }
      if ( (_DWORD)v14 == 2 )
      {
        LODWORD(v257) = *(_DWORD *)Buf2;
LABEL_583:
        v258 = (float)(int)v257;
LABEL_584:
        v44 = *(float *)a2 == v258;
        goto LABEL_342;
      }
      v418 = v14 - 3;
      if ( v418 )
      {
        v419 = v418 - 1;
        if ( v419 )
        {
          v420 = v419 - 1;
          if ( v420 )
          {
            if ( v420 != 1 )
              goto LABEL_16;
            v15 = 0;
            LOBYTE(v15) = (float)*(int *)Buf2 >= *(float *)a2;
          }
          else
          {
            v15 = 0;
            LOBYTE(v15) = *(float *)a2 >= (float)*(int *)Buf2;
          }
        }
        else
        {
          v15 = 0;
          LOBYTE(v15) = (float)*(int *)Buf2 > *(float *)a2;
        }
      }
      else
      {
        v15 = 0;
        LOBYTE(v15) = *(float *)a2 > (float)*(int *)Buf2;
      }
      goto LABEL_10;
    case 0xBu:
      switch ( a5 )
      {
        case 2:
          v421 = v14 - 2;
          if ( !v421 )
            goto LABEL_1009;
          v422 = v421 - 1;
          if ( !v422 )
            goto LABEL_1002;
          v423 = v422 - 1;
          if ( !v423 )
            goto LABEL_1001;
          v424 = v423 - 1;
          if ( v424 )
            goto LABEL_989;
          goto LABEL_994;
        case 3:
          v438 = v14 - 2;
          if ( !v438 )
            goto LABEL_1025;
          v439 = v438 - 1;
          if ( !v439 )
            goto LABEL_1024;
          v440 = v439 - 1;
          if ( !v440 )
            goto LABEL_1023;
          v441 = v440 - 1;
          if ( !v441 )
            goto LABEL_1022;
          if ( v441 != 1 )
            goto LABEL_16;
          v369 = (double)*Buf2 < *(double *)a2;
          break;
        case 4:
          v443 = v14 - 2;
          if ( !v443 )
            goto LABEL_1035;
          v444 = v443 - 1;
          if ( !v444 )
            goto LABEL_1034;
          v445 = v444 - 1;
          if ( !v445 )
            goto LABEL_1033;
          v446 = v445 - 1;
          if ( !v446 )
            goto LABEL_1032;
          if ( v446 != 1 )
            goto LABEL_16;
          v369 = (double)*(__int16 *)Buf2 < *(double *)a2;
          break;
        case 5:
          v448 = v14 - 2;
          if ( !v448 )
            goto LABEL_1010;
          v449 = v448 - 1;
          if ( !v449 )
            goto LABEL_1003;
          v450 = v449 - 1;
          if ( !v450 )
            goto LABEL_1042;
          v451 = v450 - 1;
          if ( !v451 )
            goto LABEL_995;
          if ( v451 != 1 )
            goto LABEL_16;
          v369 = (double)*(unsigned __int16 *)Buf2 < *(double *)a2;
          break;
        case 6:
          v453 = v14 - 2;
          if ( !v453 )
            goto LABEL_1012;
          v454 = v453 - 1;
          if ( !v454 )
            goto LABEL_1005;
          v455 = v454 - 1;
          if ( !v455 )
            goto LABEL_1049;
          v456 = v455 - 1;
          if ( !v456 )
            goto LABEL_997;
          if ( v456 != 1 )
            goto LABEL_16;
          v369 = (double)*(int *)Buf2 < *(double *)a2;
          break;
        case 7:
          v458 = v14 - 2;
          if ( !v458 )
            goto LABEL_1059;
          v459 = v458 - 1;
          if ( !v459 )
            goto LABEL_1058;
          v460 = v459 - 1;
          if ( !v460 )
            goto LABEL_1057;
          v461 = v460 - 1;
          if ( !v461 )
            goto LABEL_1056;
          if ( v461 != 1 )
            goto LABEL_16;
          v369 = (double)*(int *)Buf2 < *(double *)a2;
          break;
        case 8:
        case 14:
          v463 = v14 - 2;
          if ( !v463 )
            goto LABEL_1069;
          v464 = v463 - 1;
          if ( !v464 )
            goto LABEL_1068;
          v465 = v464 - 1;
          if ( !v465 )
            goto LABEL_1067;
          v466 = v465 - 1;
          if ( !v466 )
            goto LABEL_1066;
          if ( v466 != 1 )
            goto LABEL_16;
          v369 = (double)(int)*(_QWORD *)Buf2 < *(double *)a2;
          break;
        case 9:
          v468 = v14 - 2;
          if ( !v468 )
            goto LABEL_1089;
          v469 = v468 - 1;
          if ( !v469 )
            goto LABEL_1086;
          v470 = v469 - 1;
          if ( !v470 )
            goto LABEL_1082;
          v471 = v470 - 1;
          if ( !v471 )
            goto LABEL_1079;
          if ( v471 != 1 )
            goto LABEL_16;
          v472 = *(_QWORD *)Buf2;
          if ( *(__int64 *)Buf2 < 0 )
            v473 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v472 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v472 >> 1));
          else
            v473 = (double)(int)v472;
          v369 = v473 < *(double *)a2;
          break;
        case 10:
          v479 = v14 - 2;
          if ( !v479 )
            goto LABEL_1014;
          v480 = v479 - 1;
          if ( !v480 )
            goto LABEL_1007;
          v481 = v480 - 1;
          if ( !v481 )
            goto LABEL_1098;
          v482 = v481 - 1;
          if ( !v482 )
            goto LABEL_999;
          if ( v482 != 1 )
            goto LABEL_16;
          v369 = *(float *)Buf2 < *(double *)a2;
          break;
        case 11:
        case 15:
          goto LABEL_1099;
        default:
          goto LABEL_16;
      }
      goto LABEL_882;
    case 0xCu:
      if ( a5 == 12 )
        goto LABEL_586;
      goto LABEL_16;
    case 0xEu:
      switch ( a5 )
      {
        case 2:
LABEL_677:
          v282 = v14 - 2;
          if ( !v282 )
          {
LABEL_687:
            v15 = *(_QWORD *)a2 == (char)*Buf2;
            goto LABEL_10;
          }
          v283 = v282 - 1;
          if ( !v283 )
          {
            v15 = *(_QWORD *)a2 > (char)*Buf2;
            goto LABEL_10;
          }
          v284 = v283 - 1;
          if ( !v284 )
          {
            v15 = *(_QWORD *)a2 < (char)*Buf2;
            goto LABEL_10;
          }
          v285 = v284 - 1;
          if ( !v285 )
          {
            v15 = *(_QWORD *)a2 >= (char)*Buf2;
            goto LABEL_10;
          }
          if ( v285 != 1 )
            goto LABEL_16;
          v286 = (char)*Buf2;
          goto LABEL_683;
        case 3:
          v488 = v14 - 2;
          if ( !v488 )
          {
LABEL_691:
            v15 = *(_QWORD *)a2 == *Buf2;
            goto LABEL_10;
          }
          v489 = v488 - 1;
          if ( !v489 )
          {
LABEL_690:
            v15 = *(_QWORD *)a2 > (__int64)*Buf2;
            goto LABEL_10;
          }
          v490 = v489 - 1;
          if ( !v490 )
          {
LABEL_689:
            v15 = *(_QWORD *)a2 < (__int64)*Buf2;
            goto LABEL_10;
          }
          v491 = v490 - 1;
          if ( !v491 )
          {
LABEL_688:
            v15 = *(_QWORD *)a2 >= (__int64)*Buf2;
            goto LABEL_10;
          }
          if ( v491 != 1 )
            goto LABEL_16;
          v286 = *Buf2;
          goto LABEL_683;
        case 4:
          v492 = v14 - 2;
          if ( !v492 )
          {
LABEL_701:
            v15 = *(_QWORD *)a2 == *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v493 = v492 - 1;
          if ( !v493 )
          {
LABEL_700:
            v15 = *(_QWORD *)a2 > *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v494 = v493 - 1;
          if ( !v494 )
          {
LABEL_699:
            v15 = *(_QWORD *)a2 < *(__int16 *)Buf2;
            goto LABEL_10;
          }
          v495 = v494 - 1;
          if ( !v495 )
          {
LABEL_698:
            v15 = *(_QWORD *)a2 >= *(__int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v495 != 1 )
            goto LABEL_16;
          v286 = *(__int16 *)Buf2;
          goto LABEL_683;
        case 5:
          v496 = v14 - 2;
          if ( !v496 )
          {
LABEL_711:
            v15 = *(_QWORD *)a2 == *(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v497 = v496 - 1;
          if ( !v497 )
          {
LABEL_710:
            v15 = *(_QWORD *)a2 > (__int64)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v498 = v497 - 1;
          if ( !v498 )
          {
LABEL_709:
            v15 = *(_QWORD *)a2 < (__int64)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          v499 = v498 - 1;
          if ( !v499 )
          {
LABEL_708:
            v15 = *(_QWORD *)a2 >= (__int64)*(unsigned __int16 *)Buf2;
            goto LABEL_10;
          }
          if ( v499 != 1 )
            goto LABEL_16;
          v286 = *(unsigned __int16 *)Buf2;
          goto LABEL_683;
        case 6:
          v500 = v14 - 2;
          if ( !v500 )
          {
LABEL_721:
            v15 = *(_QWORD *)a2 == *(_DWORD *)Buf2;
            goto LABEL_10;
          }
          v501 = v500 - 1;
          if ( !v501 )
          {
LABEL_720:
            v15 = *(_QWORD *)a2 > *(int *)Buf2;
            goto LABEL_10;
          }
          v502 = v501 - 1;
          if ( !v502 )
          {
LABEL_719:
            v15 = *(_QWORD *)a2 < *(int *)Buf2;
            goto LABEL_10;
          }
          v503 = v502 - 1;
          if ( !v503 )
          {
LABEL_718:
            v15 = *(_QWORD *)a2 >= *(int *)Buf2;
            goto LABEL_10;
          }
          if ( v503 != 1 )
            goto LABEL_16;
          v286 = *(int *)Buf2;
          goto LABEL_683;
        case 7:
          v504 = v14 - 2;
          if ( !v504 )
          {
LABEL_731:
            v15 = *(_QWORD *)a2 == *(_DWORD *)Buf2;
            goto LABEL_10;
          }
          v505 = v504 - 1;
          if ( !v505 )
          {
LABEL_730:
            v15 = *(_QWORD *)a2 > (__int64)*(unsigned int *)Buf2;
            goto LABEL_10;
          }
          v506 = v505 - 1;
          if ( !v506 )
          {
LABEL_729:
            v15 = *(_QWORD *)a2 < (__int64)*(unsigned int *)Buf2;
            goto LABEL_10;
          }
          v507 = v506 - 1;
          if ( !v507 )
          {
LABEL_728:
            v15 = *(_QWORD *)a2 >= (__int64)*(unsigned int *)Buf2;
            goto LABEL_10;
          }
          if ( v507 != 1 )
            goto LABEL_16;
          v286 = *(unsigned int *)Buf2;
LABEL_683:
          v15 = *(_QWORD *)a2 <= v286;
          goto LABEL_10;
        case 8:
        case 14:
LABEL_732:
          v303 = v14 - 2;
          if ( !v303 )
            goto LABEL_741;
          v304 = v303 - 1;
          if ( v304 )
          {
            v305 = v304 - 1;
            if ( v305 )
            {
              v306 = v305 - 1;
              if ( v306 )
              {
                if ( v306 != 1 )
                  goto LABEL_16;
                *a8 = *(_QWORD *)a2 <= *(_QWORD *)Buf2;
              }
              else
              {
                *a8 = *(_QWORD *)a2 >= *(_QWORD *)Buf2;
              }
            }
            else
            {
              *a8 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
            }
          }
          else
          {
            *a8 = *(_QWORD *)a2 > *(_QWORD *)Buf2;
          }
          goto LABEL_1240;
        case 9:
LABEL_742:
          v307 = v14 - 2;
          if ( !v307 )
          {
LABEL_741:
            *a8 = *(_QWORD *)a2 == *(_QWORD *)Buf2;
            goto LABEL_1240;
          }
          v308 = v307 - 1;
          if ( v308 )
          {
            v309 = v308 - 1;
            if ( v309 )
            {
              v310 = v309 - 1;
              if ( v310 )
              {
                if ( v310 != 1 )
                  goto LABEL_16;
                *a8 = *(_QWORD *)a2 <= *(_QWORD *)Buf2;
              }
              else
              {
                *a8 = *(_QWORD *)a2 >= *(_QWORD *)Buf2;
              }
            }
            else
            {
              *a8 = *(_QWORD *)a2 < *(_QWORD *)Buf2;
            }
          }
          else
          {
            *a8 = *(_QWORD *)a2 > *(_QWORD *)Buf2;
          }
          goto LABEL_1240;
        case 10:
LABEL_751:
          v311 = v14 - 2;
          if ( !v311 )
          {
            v44 = (float)(int)*(_QWORD *)a2 == *(float *)Buf2;
            goto LABEL_342;
          }
          v312 = v311 - 1;
          if ( !v312 )
          {
            v239 = (float)(int)*(_QWORD *)a2;
LABEL_346:
            v48 = v239 < *(float *)Buf2;
            v49 = v239 == *(float *)Buf2;
            goto LABEL_88;
          }
          v313 = v312 - 1;
          if ( !v313 )
          {
            v47 = (float)(int)*(_QWORD *)a2;
LABEL_87:
            v48 = *(float *)Buf2 < v47;
            v49 = *(float *)Buf2 == v47;
            goto LABEL_88;
          }
          v314 = v313 - 1;
          if ( !v314 )
          {
            v100 = (float)(int)*(_QWORD *)a2;
LABEL_154:
            v38 = v100 < *(float *)Buf2;
            goto LABEL_63;
          }
          if ( v314 != 1 )
            goto LABEL_16;
          v237 = (float)(int)*(_QWORD *)a2;
          goto LABEL_337;
        case 11:
        case 15:
          v508 = v14 - 2;
          if ( !v508 )
          {
LABEL_770:
            v242 = (double)(int)*(_QWORD *)a2;
            goto LABEL_350;
          }
          v509 = v508 - 1;
          if ( !v509 )
          {
LABEL_769:
            v249 = (double)(int)*(_QWORD *)a2;
            goto LABEL_360;
          }
          v510 = v509 - 1;
          if ( !v510 )
          {
LABEL_768:
            v246 = (double)(int)*(_QWORD *)a2;
            goto LABEL_356;
          }
          v318 = v510 - 1;
          if ( !v318 )
          {
LABEL_767:
            v30 = (double)(int)*(_QWORD *)a2;
            goto LABEL_52;
          }
LABEL_765:
          if ( v318 != 1 )
            goto LABEL_16;
          v37 = (double)(int)*(_QWORD *)a2;
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_62;
    case 0xFu:
      switch ( a5 )
      {
        case 2:
          v511 = v14 - 2;
          if ( !v511 )
          {
LABEL_1009:
            v435 = (char)*Buf2;
            goto LABEL_1011;
          }
          v512 = v511 - 1;
          if ( !v512 )
          {
LABEL_1002:
            v432 = (char)*Buf2;
            goto LABEL_1004;
          }
          v513 = v512 - 1;
          if ( !v513 )
          {
LABEL_1001:
            v431 = (double)(char)*Buf2;
            v374 = v431 < *(double *)a2;
            v375 = v431 == *(double *)a2;
            goto LABEL_893;
          }
          v424 = v513 - 1;
          if ( !v424 )
          {
LABEL_994:
            v428 = (char)*Buf2;
            goto LABEL_996;
          }
LABEL_989:
          if ( v424 != 1 )
            goto LABEL_16;
          v425 = (char)*Buf2;
          goto LABEL_991;
        case 3:
          v514 = v14 - 2;
          if ( !v514 )
          {
LABEL_1025:
            v435 = *Buf2;
            goto LABEL_1011;
          }
          v515 = v514 - 1;
          if ( !v515 )
          {
LABEL_1024:
            v432 = *Buf2;
            goto LABEL_1004;
          }
          v516 = v515 - 1;
          if ( !v516 )
          {
LABEL_1023:
            v442 = (double)*Buf2;
            v374 = v442 < *(double *)a2;
            v375 = v442 == *(double *)a2;
            goto LABEL_893;
          }
          v517 = v516 - 1;
          if ( !v517 )
          {
LABEL_1022:
            v428 = *Buf2;
            goto LABEL_996;
          }
          if ( v517 != 1 )
            goto LABEL_16;
          v425 = *Buf2;
          goto LABEL_991;
        case 4:
          v518 = v14 - 2;
          if ( !v518 )
          {
LABEL_1035:
            v435 = *(__int16 *)Buf2;
            goto LABEL_1011;
          }
          v519 = v518 - 1;
          if ( !v519 )
          {
LABEL_1034:
            v432 = *(__int16 *)Buf2;
            goto LABEL_1004;
          }
          v520 = v519 - 1;
          if ( !v520 )
          {
LABEL_1033:
            v447 = (double)*(__int16 *)Buf2;
            v374 = v447 < *(double *)a2;
            v375 = v447 == *(double *)a2;
            goto LABEL_893;
          }
          v521 = v520 - 1;
          if ( !v521 )
          {
LABEL_1032:
            v428 = *(__int16 *)Buf2;
            goto LABEL_996;
          }
          if ( v521 != 1 )
            goto LABEL_16;
          v425 = *(__int16 *)Buf2;
          goto LABEL_991;
        case 5:
          v522 = v14 - 2;
          if ( !v522 )
          {
LABEL_1010:
            v435 = *(unsigned __int16 *)Buf2;
LABEL_1011:
            v436 = _mm_cvtsi32_si128(v435);
            goto LABEL_1013;
          }
          v523 = v522 - 1;
          if ( !v523 )
          {
LABEL_1003:
            v432 = *(unsigned __int16 *)Buf2;
LABEL_1004:
            v433 = _mm_cvtsi32_si128(v432);
            goto LABEL_1006;
          }
          v524 = v523 - 1;
          if ( !v524 )
          {
LABEL_1042:
            v452 = (double)*(unsigned __int16 *)Buf2;
            v374 = v452 < *(double *)a2;
            v375 = v452 == *(double *)a2;
            goto LABEL_893;
          }
          v525 = v524 - 1;
          if ( !v525 )
          {
LABEL_995:
            v428 = *(unsigned __int16 *)Buf2;
LABEL_996:
            v429 = _mm_cvtsi32_si128(v428);
            goto LABEL_998;
          }
          if ( v525 != 1 )
            goto LABEL_16;
          v425 = *(unsigned __int16 *)Buf2;
LABEL_991:
          v426 = _mm_cvtsi32_si128(v425);
          goto LABEL_992;
        case 6:
          v526 = v14 - 2;
          if ( !v526 )
          {
LABEL_1012:
            v436 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_1013:
            *(_QWORD *)&v437 = *(_OWORD *)&_mm_cvtepi32_pd(v436);
            goto LABEL_1015;
          }
          v527 = v526 - 1;
          if ( !v527 )
          {
LABEL_1005:
            v433 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_1006:
            *(_QWORD *)&v434 = *(_OWORD *)&_mm_cvtepi32_pd(v433);
            goto LABEL_1008;
          }
          v528 = v527 - 1;
          if ( !v528 )
          {
LABEL_1049:
            v457 = (double)*(int *)Buf2;
            v374 = v457 < *(double *)a2;
            v375 = v457 == *(double *)a2;
            goto LABEL_893;
          }
          v529 = v528 - 1;
          if ( !v529 )
          {
LABEL_997:
            v429 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_998:
            *(_QWORD *)&v430 = *(_OWORD *)&_mm_cvtepi32_pd(v429);
            goto LABEL_1000;
          }
          if ( v529 != 1 )
            goto LABEL_16;
          v426 = _mm_cvtsi32_si128(*(_DWORD *)Buf2);
LABEL_992:
          *(_QWORD *)&v427 = *(_OWORD *)&_mm_cvtepi32_pd(v426);
          goto LABEL_993;
        case 7:
          v530 = v14 - 2;
          if ( !v530 )
          {
LABEL_1059:
            v437 = (double)*(int *)Buf2;
            goto LABEL_1015;
          }
          v531 = v530 - 1;
          if ( !v531 )
          {
LABEL_1058:
            v434 = (double)*(int *)Buf2;
            goto LABEL_1008;
          }
          v532 = v531 - 1;
          if ( !v532 )
          {
LABEL_1057:
            v462 = (double)*(int *)Buf2;
            v374 = v462 < *(double *)a2;
            v375 = v462 == *(double *)a2;
            goto LABEL_893;
          }
          v533 = v532 - 1;
          if ( !v533 )
          {
LABEL_1056:
            v430 = (double)*(int *)Buf2;
            goto LABEL_1000;
          }
          if ( v533 != 1 )
            goto LABEL_16;
          v427 = (double)*(int *)Buf2;
          goto LABEL_993;
        case 8:
        case 14:
          v534 = v14 - 2;
          if ( !v534 )
          {
LABEL_1069:
            v437 = (double)(int)*(_QWORD *)Buf2;
            goto LABEL_1015;
          }
          v535 = v534 - 1;
          if ( !v535 )
          {
LABEL_1068:
            v434 = (double)(int)*(_QWORD *)Buf2;
            goto LABEL_1008;
          }
          v536 = v535 - 1;
          if ( !v536 )
          {
LABEL_1067:
            v467 = (double)(int)*(_QWORD *)Buf2;
            v374 = v467 < *(double *)a2;
            v375 = v467 == *(double *)a2;
            goto LABEL_893;
          }
          v537 = v536 - 1;
          if ( !v537 )
          {
LABEL_1066:
            v430 = (double)(int)*(_QWORD *)Buf2;
            goto LABEL_1000;
          }
          if ( v537 != 1 )
            goto LABEL_16;
          v427 = (double)(int)*(_QWORD *)Buf2;
          goto LABEL_993;
        case 9:
          v538 = v14 - 2;
          if ( !v538 )
          {
LABEL_1089:
            v478 = *(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v437 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v478 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v478 >> 1));
            else
              v437 = (double)(int)v478;
            goto LABEL_1015;
          }
          v539 = v538 - 1;
          if ( !v539 )
          {
LABEL_1086:
            v477 = *(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v434 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v477 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v477 >> 1));
            else
              v434 = (double)(int)v477;
            goto LABEL_1008;
          }
          v540 = v539 - 1;
          if ( !v540 )
          {
LABEL_1082:
            v475 = *(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v476 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v475 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v475 >> 1));
            else
              v476 = (double)(int)v475;
            v374 = v476 < *(double *)a2;
            v375 = v476 == *(double *)a2;
            goto LABEL_893;
          }
          v541 = v540 - 1;
          if ( !v541 )
          {
LABEL_1079:
            v474 = *(_QWORD *)Buf2;
            if ( *(__int64 *)Buf2 < 0 )
              v430 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v474 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v474 >> 1));
            else
              v430 = (double)(int)v474;
            goto LABEL_1000;
          }
          if ( v541 != 1 )
            goto LABEL_16;
          v542 = *(_QWORD *)Buf2;
          if ( *(__int64 *)Buf2 < 0 )
            v427 = (double)(int)(*(_DWORD *)Buf2 & 1 | (v542 >> 1)) + (double)(int)(*(_DWORD *)Buf2 & 1 | (v542 >> 1));
          else
            v427 = (double)(int)v542;
          goto LABEL_993;
        case 10:
          v543 = v14 - 2;
          if ( !v543 )
          {
LABEL_1014:
            v437 = *(float *)Buf2;
LABEL_1015:
            v44 = *(double *)a2 == v437;
LABEL_342:
            v15 = 1;
            if ( v44 )
              goto LABEL_10;
            goto LABEL_9;
          }
          v544 = v543 - 1;
          if ( v544 )
          {
            v545 = v544 - 1;
            if ( v545 )
            {
              v546 = v545 - 1;
              if ( v546 )
              {
                if ( v546 != 1 )
                  goto LABEL_16;
                v427 = *(float *)Buf2;
LABEL_993:
                v369 = v427 < *(double *)a2;
              }
              else
              {
LABEL_999:
                v430 = *(float *)Buf2;
LABEL_1000:
                v369 = *(double *)a2 < v430;
              }
LABEL_882:
              v15 = !v369;
              goto LABEL_10;
            }
LABEL_1098:
            v483 = *(float *)Buf2;
            v374 = v483 < *(double *)a2;
            v375 = v483 == *(double *)a2;
          }
          else
          {
LABEL_1007:
            v434 = *(float *)Buf2;
LABEL_1008:
            v374 = *(double *)a2 < v434;
            v375 = *(double *)a2 == v434;
          }
LABEL_893:
          v15 = !v374 && !v375;
          goto LABEL_10;
        case 11:
        case 15:
LABEL_1099:
          v484 = v14 - 2;
          if ( !v484 )
          {
            v242 = *(double *)a2;
LABEL_350:
            v243 = v242 == *(double *)Buf2;
            goto LABEL_351;
          }
          v485 = v484 - 1;
          if ( !v485 )
          {
            v249 = *(double *)a2;
            goto LABEL_360;
          }
          v486 = v485 - 1;
          if ( !v486 )
          {
            v48 = *(double *)Buf2 < *(double *)a2;
            v49 = *(double *)Buf2 == *(double *)a2;
LABEL_88:
            v50 = !v48 && !v49;
            goto LABEL_89;
          }
          v487 = v486 - 1;
          if ( !v487 )
          {
            v30 = *(double *)a2;
            goto LABEL_52;
          }
          if ( v487 != 1 )
            goto LABEL_16;
          v38 = *(double *)Buf2 < *(double *)a2;
          goto LABEL_63;
        default:
          goto LABEL_16;
      }
    case 0x10u:
      if ( a5 != 16 )
        goto LABEL_16;
      v547 = v14 - 2;
      if ( !v547 )
      {
        v50 = CompareFileTimeType(a2, Buf2) == 0;
        goto LABEL_89;
      }
      v548 = v547 - 1;
      if ( !v548 )
      {
        v50 = CompareFileTimeType(a2, Buf2) == 1;
        goto LABEL_89;
      }
      v549 = v548 - 1;
      if ( !v549 )
      {
        v50 = CompareFileTimeType(a2, Buf2) == -1;
        goto LABEL_89;
      }
      v550 = v549 - 1;
      if ( v550 )
      {
        if ( v550 != 1 )
          goto LABEL_16;
        if ( (unsigned int)CompareFileTimeType(a2, Buf2) != -1 )
          goto LABEL_1208;
      }
      else if ( (unsigned int)CompareFileTimeType(a2, Buf2) != 1 )
      {
LABEL_1208:
        v15 = CompareFileTimeType(a2, Buf2) == 0;
        goto LABEL_10;
      }
      break;
    case 0x11u:
      if ( (_DWORD)v14 != 2 || a5 != 17 )
        goto LABEL_16;
LABEL_36:
      *a8 = *a2 == (char)*Buf2;
      goto LABEL_1240;
    case 0x12u:
      if ( a5 != 18 )
        goto LABEL_16;
      if ( (_DWORD)v14 == 11 )
        goto LABEL_67;
      if ( (_DWORD)v14 != 2 )
      {
        if ( (unsigned int)(v14 - 9) > 1 )
          goto LABEL_16;
LABEL_67:
        v15 = SubstringMatch(a2, Buf2, v13, v14);
        goto LABEL_10;
      }
LABEL_1228:
      if ( !(_DWORD)v13 )
        goto LABEL_590;
      if ( (_DWORD)v8 && (_DWORD)v8 == a7 )
        *a8 = wcsicmp((const wchar_t *)a2, (const wchar_t *)Buf2) == 0;
      goto LABEL_1240;
    case 0x15u:
      if ( a5 != 21 || (_DWORD)v14 != 2 )
        goto LABEL_16;
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Buf2 + 4) )
        goto LABEL_9;
      v551 = *(_QWORD *)a2 - *(_QWORD *)Buf2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Buf2 )
        v551 = *((_QWORD *)a2 + 1) - *((_QWORD *)Buf2 + 1);
      v243 = v551 == 0;
LABEL_351:
      v15 = 1;
      if ( !v243 )
        goto LABEL_9;
      goto LABEL_10;
    case 0x16u:
      v552 = a5 == 22;
      goto LABEL_1222;
    case 0x17u:
      if ( a5 != 23 || (_DWORD)v14 != 2 )
        goto LABEL_16;
      if ( (_DWORD)v8 != a7 )
        goto LABEL_9;
      if ( !(_DWORD)v8 )
        break;
      if ( memcmp(a2, Buf2, v8) )
        goto LABEL_9;
      v15 = 1;
      goto LABEL_10;
    case 0x18u:
      v552 = a5 == 24;
LABEL_1222:
      if ( !v552 || (_DWORD)v14 != 2 )
        goto LABEL_16;
LABEL_1224:
      *a8 = *(_DWORD *)a2 == *(_DWORD *)Buf2;
      goto LABEL_1240;
    case 0x19u:
      if ( (a5 == 25 || a5 == 18) && (_DWORD)v14 == 2 )
        goto LABEL_1228;
      goto LABEL_16;
    default:
      goto LABEL_16;
  }
LABEL_593:
  v15 = 1;
  goto LABEL_10;
}
