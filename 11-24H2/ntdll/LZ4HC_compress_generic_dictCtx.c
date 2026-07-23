/*
 * XREFs of LZ4HC_compress_generic_dictCtx @ 0x1800F951C
 * Callers:
 *     LZ4HC_compress_generic @ 0x1800F6B7C (LZ4HC_compress_generic.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1800F2F5C (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1800F2FB8 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_rotatePattern @ 0x18010DDB8 (LZ4HC_rotatePattern.c)
 *     LZ4HC_setExternalDict @ 0x18011BB84 (LZ4HC_setExternalDict.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LZ4HC_compress_generic_dictCtx(
        unsigned int *a1,
        unsigned int *Src,
        _BYTE *a3,
        unsigned int *a4,
        int a5,
        int a6,
        int a7)
{
  unsigned int *v7; // rdi
  __int64 v9; // r9
  _BYTE *v10; // r12
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int *v14; // r10
  int v15; // r15d
  __int64 v16; // rax
  unsigned int *v17; // r9
  __int64 v18; // rdx
  char *v19; // rbx
  unsigned int *v20; // r8
  unsigned __int64 v21; // r11
  _BYTE *v22; // r14
  int v23; // esi
  __int64 v24; // rdx
  _QWORD *v25; // rdi
  unsigned int v26; // ebx
  __int64 v27; // r13
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  unsigned int v30; // r10d
  int v31; // r8d
  unsigned int v32; // r9d
  _DWORD *v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  char *v36; // r9
  unsigned int v37; // r11d
  int v38; // ebx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // r14
  _QWORD *v41; // r8
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  unsigned int v46; // ecx
  signed int v49; // ecx
  unsigned int v50; // esi
  unsigned __int64 v51; // r14
  _DWORD *v52; // rdx
  char *v53; // r8
  char *v54; // r9
  _QWORD *v55; // rdx
  char *v56; // rcx
  unsigned int v59; // ecx
  signed int v62; // r10d
  char *v63; // r9
  _QWORD *v64; // rdx
  char *v65; // rcx
  unsigned int v69; // ecx
  unsigned int v71; // r8d
  bool v72; // cf
  unsigned __int64 v73; // r11
  int v74; // r15d
  unsigned __int64 v75; // rbx
  unsigned __int64 v76; // r11
  unsigned __int64 v77; // rdi
  __int64 v78; // r11
  unsigned int v79; // r8d
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  unsigned int v82; // eax
  int v83; // r8d
  unsigned int v84; // r11d
  __int64 v85; // rcx
  int v86; // eax
  int v87; // r11d
  unsigned int v88; // eax
  unsigned int v89; // r11d
  unsigned __int64 v90; // rcx
  unsigned int v91; // edi
  unsigned __int64 v92; // rdx
  unsigned int v93; // ecx
  char *v94; // rcx
  unsigned int *v95; // r10
  int v96; // esi
  char *v97; // rax
  unsigned int *v98; // rbx
  __int64 v99; // r9
  __int64 v100; // r8
  unsigned int v101; // r12d
  _QWORD *v102; // rcx
  unsigned int v103; // r13d
  unsigned __int64 v104; // rdx
  unsigned int v105; // r15d
  int v106; // r10d
  unsigned int v107; // edi
  unsigned int v108; // r9d
  _DWORD *v109; // r8
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rcx
  unsigned int v112; // r13d
  __int64 v113; // r9
  unsigned __int64 v114; // r11
  int v115; // ecx
  __int64 v116; // rax
  __int64 v117; // rdi
  _DWORD *v118; // rbx
  int v119; // esi
  __int64 v120; // r10
  int v121; // eax
  _DWORD *v122; // r8
  int v123; // ecx
  unsigned __int64 v124; // r9
  unsigned int v125; // eax
  _QWORD *v126; // r9
  _QWORD *v127; // rdx
  _QWORD *v128; // rcx
  unsigned __int64 v129; // rbx
  _BYTE *v131; // rcx
  unsigned int v133; // ecx
  int v136; // ecx
  __int64 v137; // rax
  __int64 v138; // r15
  _DWORD *v139; // rsi
  _QWORD *v140; // r10
  _QWORD *v141; // r8
  _QWORD *v142; // rdx
  _QWORD *v143; // rcx
  unsigned int v146; // ecx
  signed int v149; // edi
  _QWORD *v150; // r9
  _QWORD *v151; // rdx
  _QWORD *v152; // rcx
  unsigned int v156; // ecx
  int v158; // edx
  __int64 v159; // rbx
  int v160; // eax
  _DWORD *v161; // r9
  int v162; // ecx
  unsigned __int64 v163; // r10
  unsigned int v164; // eax
  unsigned __int64 v165; // rsi
  int v166; // edi
  _BYTE *v167; // rcx
  unsigned int v168; // edi
  unsigned int v169; // r10d
  unsigned __int64 v170; // rdi
  int v171; // r8d
  int v172; // r12d
  unsigned __int64 v173; // rbx
  unsigned __int64 v174; // rsi
  unsigned __int64 v175; // r15
  unsigned int v176; // r8d
  __int64 v177; // rcx
  unsigned __int64 v178; // rdx
  unsigned int v179; // eax
  unsigned int v180; // esi
  int v181; // r8d
  __int64 v182; // rcx
  unsigned __int64 v183; // rcx
  unsigned int v184; // edi
  unsigned __int64 v185; // rdx
  unsigned int v186; // ecx
  unsigned __int64 v187; // r11
  int v188; // edx
  int v189; // edx
  unsigned __int64 v190; // rcx
  int v191; // r11d
  unsigned __int64 v192; // r15
  __int64 v193; // r10
  _QWORD *v194; // rdx
  unsigned int v195; // r12d
  __int64 v196; // rcx
  unsigned int v197; // r11d
  unsigned int v198; // ebx
  unsigned int v199; // esi
  int v200; // r10d
  unsigned int v201; // r9d
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rcx
  __int64 v205; // rdx
  unsigned int v206; // r13d
  unsigned int v207; // edi
  unsigned __int64 v208; // r14
  int v209; // ecx
  _DWORD *v210; // r10
  int v211; // ebx
  __int64 v212; // r11
  unsigned int v213; // eax
  _DWORD *v214; // rdx
  int v215; // ecx
  char *v216; // r9
  unsigned int v217; // eax
  _BYTE *v218; // rdx
  _QWORD *v219; // r9
  _QWORD *v220; // rdx
  _QWORD *v221; // rcx
  unsigned __int64 v222; // r10
  unsigned int v225; // ecx
  int v228; // ecx
  unsigned int v229; // r11d
  _DWORD *v230; // rbx
  _QWORD *v231; // r10
  _QWORD *v232; // rdx
  _QWORD *v233; // r8
  _QWORD *v234; // rcx
  unsigned int v237; // ecx
  signed int v240; // r11d
  _QWORD *v241; // r9
  _QWORD *v242; // rdx
  _QWORD *v243; // rcx
  unsigned int v247; // ecx
  int v249; // edx
  __int64 v250; // r10
  unsigned int v251; // eax
  unsigned __int64 v252; // r8
  int v253; // ecx
  char *v254; // rbx
  unsigned int v255; // eax
  _BYTE *v256; // r8
  int v257; // r11d
  unsigned int v258; // esi
  unsigned int v259; // r9d
  int v260; // r12d
  unsigned __int64 v261; // rbx
  unsigned __int64 v262; // r11
  __int64 v263; // r11
  unsigned __int64 v264; // r15
  unsigned int v265; // r8d
  __int64 v266; // rcx
  unsigned __int64 v267; // rdx
  unsigned int v268; // eax
  int v269; // r8d
  unsigned int v270; // r11d
  __int64 v271; // rcx
  int v272; // eax
  int v273; // r11d
  unsigned __int64 v274; // rcx
  unsigned int v275; // esi
  unsigned __int64 v276; // rbx
  int v277; // eax
  unsigned __int64 v278; // rdx
  unsigned int v279; // ecx
  unsigned __int64 v280; // rcx
  int v281; // ecx
  unsigned __int64 v282; // r12
  _BYTE *v283; // r15
  _BYTE *v284; // r8
  char *v285; // r10
  _BYTE *v286; // r14
  unsigned __int64 v287; // r13
  unsigned __int128 v288; // rax
  _QWORD *v289; // rcx
  _WORD *v290; // r14
  unsigned __int64 v291; // rcx
  char v292; // al
  unsigned __int64 v293; // rcx
  unsigned __int64 v294; // rdx
  _BYTE *v295; // r14
  unsigned int *v296; // rcx
  int v297; // ecx
  unsigned int *v298; // r11
  _BYTE *v299; // r8
  char *v300; // r10
  _BYTE *v301; // r14
  unsigned __int64 v302; // r12
  unsigned __int64 v303; // r13
  unsigned __int128 v304; // rax
  _QWORD *v305; // rcx
  _WORD *v306; // r14
  unsigned __int64 v307; // rcx
  char v308; // al
  unsigned __int64 v309; // rcx
  unsigned __int64 v310; // rdx
  _BYTE *v311; // r14
  char *v312; // r10
  unsigned int *v313; // rbx
  char *v314; // r13
  char *v315; // r9
  unsigned __int64 v316; // rsi
  _BYTE *v317; // r14
  unsigned __int64 v318; // r12
  unsigned __int128 v319; // rax
  _QWORD *v320; // rcx
  _WORD *v321; // r14
  _BYTE *v322; // r14
  unsigned __int64 v323; // rcx
  char v324; // al
  unsigned __int64 v325; // rcx
  unsigned __int64 v326; // rdx
  _BYTE *v327; // r14
  char *v328; // r13
  char *v329; // r9
  unsigned __int64 v330; // rsi
  _BYTE *v331; // r14
  unsigned __int64 v332; // r12
  unsigned __int128 v333; // rax
  _QWORD *v334; // rcx
  _WORD *v335; // r14
  unsigned __int64 v336; // rcx
  char v337; // al
  unsigned __int64 v338; // rcx
  unsigned __int64 v339; // rdx
  _BYTE *v340; // r14
  _BYTE *v341; // r12
  char *v342; // r13
  unsigned __int64 v343; // rdi
  _BYTE *v344; // r14
  unsigned __int64 v345; // rsi
  unsigned __int128 v346; // rax
  _QWORD *v347; // rcx
  _WORD *v348; // r14
  unsigned __int64 v349; // rcx
  char v350; // al
  unsigned __int64 v351; // rcx
  unsigned __int64 v352; // rdx
  _BYTE *v353; // r14
  char *v354; // r9
  unsigned __int64 v355; // rdi
  unsigned __int64 v356; // r8
  _BYTE *v357; // r14
  unsigned __int64 v358; // rsi
  unsigned __int128 v359; // rax
  _QWORD *v360; // rcx
  __int64 v361; // r10
  _WORD *v362; // r14
  unsigned __int64 v363; // rcx
  char v364; // al
  unsigned __int64 v365; // rcx
  unsigned __int64 v366; // rdx
  _BYTE *v367; // r14
  int v368; // ebx
  size_t v369; // rbx
  _BYTE *v370; // r8
  int v371; // esi
  size_t v372; // rdi
  _BYTE *v373; // r14
  unsigned __int128 v374; // rax
  int v375; // r14d
  unsigned int v377; // r13d
  unsigned int *v378; // r9
  unsigned int *v379; // r11
  __int64 v380; // rdx
  char *v381; // rbx
  unsigned int *v382; // r8
  unsigned __int64 v383; // r10
  char *v384; // rax
  _BYTE *v385; // r14
  __int64 v386; // r8
  int v387; // ebx
  _QWORD *v388; // r15
  __int64 v389; // r13
  unsigned int v390; // esi
  unsigned int v391; // r12d
  unsigned int v392; // r10d
  unsigned int v393; // r9d
  unsigned int v394; // edi
  _DWORD *v395; // r8
  unsigned __int64 v396; // rdx
  unsigned __int64 v397; // rcx
  char *v398; // r9
  unsigned int v399; // r11d
  int v400; // ecx
  int v401; // edi
  int v402; // r14d
  _DWORD *v403; // rdx
  unsigned __int64 v404; // r10
  _QWORD *v405; // r8
  _QWORD *v406; // rdx
  _QWORD *v407; // rcx
  unsigned int v410; // ecx
  signed int v413; // ecx
  _DWORD *v414; // rdx
  char *v415; // r8
  char *v416; // r9
  _QWORD *v417; // rdx
  char *v418; // rcx
  unsigned int v421; // ecx
  signed int v424; // r10d
  char *v425; // r9
  _QWORD *v426; // rdx
  char *v427; // rcx
  unsigned int v431; // ecx
  unsigned int v433; // esi
  unsigned int v434; // ebx
  unsigned __int64 v435; // r11
  char *v436; // rbx
  unsigned __int64 v437; // r11
  char *v438; // r11
  unsigned __int64 v439; // r15
  unsigned int v440; // eax
  _QWORD *v441; // r10
  char *v442; // r11
  unsigned __int64 i; // rcx
  char *v444; // rdx
  __int64 v445; // r8
  int v446; // eax
  int v447; // r8d
  unsigned __int64 j; // rcx
  char *v449; // rdx
  unsigned int v450; // r11d
  unsigned __int64 v451; // rcx
  unsigned int v452; // esi
  unsigned __int64 v453; // rdx
  unsigned int v454; // ecx
  char *v455; // rdx
  unsigned int *v456; // r10
  int v457; // esi
  char *v458; // rcx
  int v459; // r15d
  unsigned int *v460; // rbx
  __int64 v461; // rcx
  char *v462; // rdi
  __int64 v463; // rsi
  unsigned int v464; // r15d
  unsigned int v465; // r12d
  int v466; // r10d
  unsigned int v467; // r8d
  unsigned int v468; // r9d
  char *v469; // r8
  int v470; // edi
  unsigned __int64 v471; // rdx
  unsigned __int64 v472; // rcx
  __int64 v473; // rdx
  unsigned int v474; // r13d
  unsigned __int64 v475; // r11
  __int64 v476; // r12
  int v477; // r9d
  int v478; // ebx
  char *v479; // r10
  int v480; // edi
  __int64 v481; // rbx
  int v482; // eax
  char *v483; // r8
  int v484; // ecx
  unsigned __int64 v485; // r9
  unsigned int v486; // eax
  char *v487; // rdx
  _QWORD *v488; // r9
  _QWORD *v489; // rdx
  _QWORD *v490; // rcx
  unsigned __int64 v491; // r10
  unsigned int v494; // ecx
  int v497; // ecx
  _DWORD *v498; // rsi
  _QWORD *v499; // r10
  _QWORD *v500; // rdx
  _QWORD *v501; // rcx
  _QWORD *v502; // r8
  unsigned int v505; // ecx
  signed int v508; // edi
  _QWORD *v509; // r9
  _QWORD *v510; // rdx
  _QWORD *v511; // rcx
  unsigned int v515; // ecx
  __int64 v517; // rbx
  int v518; // edx
  unsigned int v519; // eax
  _DWORD *v520; // r9
  int v521; // ecx
  unsigned __int64 v522; // r10
  unsigned int v523; // eax
  unsigned __int64 v524; // r8
  int v525; // edi
  unsigned int v526; // r12d
  unsigned int v527; // r15d
  unsigned int v528; // ebx
  unsigned __int64 v529; // rdi
  int v530; // r8d
  char *v531; // rbx
  unsigned __int64 v532; // rsi
  unsigned __int64 v533; // r15
  unsigned int v534; // eax
  _QWORD *v535; // r10
  unsigned __int64 k; // rcx
  char *v537; // r9
  __int64 v538; // r9
  int v539; // eax
  int v540; // r9d
  unsigned __int64 v541; // rcx
  char *v542; // r8
  unsigned __int64 v543; // rcx
  unsigned int v544; // r15d
  unsigned __int64 v545; // rdx
  unsigned int v546; // ecx
  unsigned __int64 v547; // r12
  int v548; // edx
  int v549; // edx
  unsigned __int64 v550; // rcx
  int v551; // r15d
  unsigned int *v552; // r11
  __int64 v553; // r10
  _QWORD *v554; // r12
  __int64 v555; // rcx
  unsigned int v556; // r15d
  unsigned int v557; // esi
  unsigned int v558; // ebx
  __int64 v559; // rax
  int v560; // r10d
  unsigned int v561; // r9d
  _DWORD *v562; // r8
  unsigned __int64 v563; // rdx
  unsigned __int64 v564; // rcx
  __int64 v565; // rdx
  unsigned int v566; // r13d
  unsigned __int64 v567; // r9
  unsigned int v568; // r14d
  unsigned __int64 v569; // rdi
  __int64 v570; // rsi
  int v571; // ecx
  int v572; // r10d
  _DWORD *v573; // r11
  int v574; // ebx
  __int64 v575; // r10
  int v576; // eax
  _DWORD *v577; // r8
  int v578; // ecx
  char *v579; // r9
  unsigned int v580; // eax
  _BYTE *v581; // rdx
  _QWORD *v582; // r9
  _QWORD *v583; // rdx
  _QWORD *v584; // rcx
  unsigned __int64 v585; // r11
  unsigned int v588; // ecx
  int v591; // ecx
  _DWORD *v592; // rsi
  _QWORD *v593; // r10
  _QWORD *v594; // rdx
  _QWORD *v595; // r8
  _QWORD *v596; // rcx
  unsigned int v599; // ecx
  signed int v602; // ebx
  _QWORD *v603; // r9
  _QWORD *v604; // rdx
  _QWORD *v605; // rcx
  unsigned int v609; // ecx
  int v611; // edx
  __int64 v612; // r11
  unsigned int v613; // eax
  _DWORD *v614; // r9
  int v615; // ecx
  unsigned __int64 v616; // r10
  unsigned int v617; // eax
  _BYTE *v618; // r8
  int v619; // ebx
  unsigned int v620; // r12d
  unsigned int v621; // ebx
  unsigned __int64 v622; // rbx
  int v623; // eax
  int v624; // esi
  char *v625; // rbx
  char *v626; // r11
  unsigned __int64 v627; // r15
  unsigned int v628; // eax
  _QWORD *v629; // r10
  char *v630; // r11
  unsigned __int64 m; // rcx
  char *v632; // r9
  __int64 v633; // r9
  int v634; // eax
  int v635; // r9d
  unsigned __int64 v636; // rcx
  char *v637; // r8
  unsigned __int64 v638; // rcx
  unsigned int v639; // r15d
  unsigned __int64 v640; // rdx
  unsigned int v641; // ecx
  unsigned __int64 v642; // rcx
  int v643; // ecx
  _BYTE *v644; // r15
  _BYTE *v645; // r8
  char *v646; // r10
  unsigned __int64 v647; // r13
  _BYTE *v648; // r14
  unsigned __int64 v649; // r12
  unsigned __int128 v650; // rax
  _QWORD *v651; // rcx
  _WORD *v652; // r14
  unsigned __int64 v653; // rcx
  char v654; // al
  unsigned __int64 v655; // rcx
  unsigned __int64 v656; // rdx
  _BYTE *v657; // r14
  unsigned int *v658; // rcx
  int v659; // ecx
  _BYTE *v660; // r8
  char *v661; // r10
  _BYTE *v662; // r14
  unsigned __int64 v663; // r13
  unsigned __int64 v664; // r12
  unsigned __int128 v665; // rax
  _QWORD *v666; // rcx
  _WORD *v667; // r14
  unsigned __int64 v668; // rcx
  char v669; // al
  unsigned __int64 v670; // rcx
  unsigned __int64 v671; // rdx
  _BYTE *v672; // r14
  unsigned int *v673; // rcx
  char *v674; // r10
  char *v675; // r13
  char *v676; // r9
  unsigned __int64 v677; // rsi
  _BYTE *v678; // r14
  unsigned __int64 v679; // r12
  unsigned __int128 v680; // rax
  _QWORD *v681; // rcx
  _WORD *v682; // r14
  _BYTE *v683; // r14
  unsigned __int64 v684; // rcx
  char v685; // al
  unsigned __int64 v686; // rcx
  unsigned __int64 v687; // rdx
  _BYTE *v688; // r14
  char *v689; // r13
  char *v690; // r9
  unsigned __int64 v691; // rsi
  _BYTE *v692; // r14
  unsigned __int64 v693; // r12
  unsigned __int128 v694; // rax
  _QWORD *v695; // rcx
  _WORD *v696; // r14
  unsigned __int64 v697; // rcx
  char v698; // al
  unsigned __int64 v699; // rcx
  unsigned __int64 v700; // rdx
  _BYTE *v701; // r14
  _BYTE *v702; // r12
  char *v703; // r13
  _BYTE *v704; // r14
  unsigned __int64 v705; // rdi
  unsigned __int64 v706; // rsi
  unsigned __int128 v707; // rax
  _QWORD *v708; // rcx
  _WORD *v709; // r14
  unsigned __int64 v710; // rcx
  char v711; // al
  unsigned __int64 v712; // rcx
  unsigned __int64 v713; // rdx
  _BYTE *v714; // r14
  char *v715; // r9
  unsigned __int64 v716; // rdi
  unsigned __int64 v717; // r8
  _BYTE *v718; // r14
  unsigned __int64 v719; // rsi
  unsigned __int128 v720; // rax
  _QWORD *v721; // rcx
  __int64 v722; // r11
  _WORD *v723; // r14
  unsigned __int64 v724; // rcx
  char v725; // al
  unsigned __int64 v726; // rcx
  unsigned __int64 v727; // rdx
  _BYTE *v728; // r14
  size_t v729; // rbx
  _BYTE *v730; // r8
  int v731; // ebx
  int v732; // esi
  size_t v733; // rdi
  _BYTE *v734; // r14
  unsigned __int128 v735; // rax
  int v736; // r14d
  unsigned int *v737; // r10
  _BYTE *v738; // rcx
  unsigned int *v739; // r9
  __int64 v740; // rdx
  char *v741; // rbx
  unsigned int *v742; // r8
  _BYTE *v743; // r13
  _BYTE *v744; // r14
  __int64 v745; // rax
  _QWORD *v746; // r12
  int v747; // r10d
  __int64 v748; // r13
  __int64 v749; // rdi
  unsigned int v750; // esi
  unsigned int v751; // r15d
  int v752; // r8d
  unsigned int v753; // r9d
  int v754; // edx
  _DWORD *v755; // r8
  unsigned __int64 v756; // rdx
  unsigned __int64 v757; // rcx
  _DWORD *v758; // r9
  unsigned int v759; // r11d
  int v760; // ebx
  _DWORD *v761; // rdx
  _QWORD *v762; // r8
  _QWORD *v763; // rdx
  _QWORD *v764; // rcx
  unsigned int v767; // ecx
  signed int v770; // ecx
  unsigned int v771; // esi
  unsigned int v772; // eax
  _DWORD *v773; // rdx
  _QWORD *v774; // r8
  _QWORD *v775; // r9
  _QWORD *v776; // rdx
  _QWORD *v777; // rcx
  unsigned int v780; // ecx
  signed int v783; // r10d
  _QWORD *v784; // r9
  _QWORD *v785; // rdx
  _QWORD *v786; // rcx
  unsigned int v790; // ecx
  int v792; // r15d
  unsigned __int64 v793; // rbx
  unsigned __int64 v794; // r11
  unsigned __int64 v795; // rdi
  __int64 v796; // r11
  unsigned int v797; // eax
  unsigned __int64 v798; // rdx
  unsigned int v799; // eax
  unsigned int v800; // r11d
  int v801; // eax
  int v802; // eax
  int v803; // r11d
  unsigned int v804; // eax
  unsigned int v805; // r11d
  unsigned __int64 v806; // rcx
  unsigned int v807; // edi
  unsigned __int64 v808; // rdx
  unsigned int v809; // ecx
  int v810; // edx
  _DWORD *v811; // r11
  __int64 v812; // r12
  __int64 v813; // r15
  __int64 v814; // rsi
  unsigned int v815; // edi
  int v816; // r10d
  unsigned int v817; // r9d
  _DWORD *v818; // rdx
  unsigned __int64 v819; // r8
  _QWORD *v820; // r11
  _QWORD *v821; // rdx
  _QWORD *v822; // rcx
  unsigned int v825; // ecx
  signed int v828; // ecx
  int v829; // ecx
  char *v830; // r9
  unsigned __int64 v831; // r11
  char *v832; // rdx
  unsigned int *v833; // r10
  int v834; // esi
  char *v835; // rcx
  unsigned int *v836; // rax
  char *v837; // rdi
  __int64 v838; // r12
  _QWORD *v839; // rdx
  unsigned int v840; // ebx
  __int64 v841; // r13
  unsigned int v842; // esi
  unsigned __int64 v843; // r8
  int v844; // r10d
  int v845; // r15d
  unsigned int v846; // r9d
  _DWORD *v847; // r8
  unsigned __int64 v848; // rdx
  unsigned __int64 v849; // rcx
  __int64 v850; // r9
  unsigned int v851; // esi
  _QWORD *v852; // r11
  int v853; // r10d
  _DWORD *v854; // rbx
  __int64 v855; // rax
  unsigned int v856; // r9d
  int v857; // edi
  unsigned __int64 v858; // r10
  int v859; // eax
  _DWORD *v860; // r8
  int v861; // ecx
  char *v862; // r9
  unsigned int v863; // eax
  _BYTE *v864; // rdx
  _QWORD *v865; // r9
  _QWORD *v866; // rdx
  _QWORD *v867; // rcx
  unsigned int v870; // ecx
  int v873; // ecx
  _DWORD *v874; // rdi
  _QWORD *v875; // r10
  _QWORD *v876; // rdx
  _QWORD *v877; // r9
  _QWORD *v878; // rcx
  unsigned int v881; // ecx
  signed int v884; // ebx
  _QWORD *v885; // r10
  _QWORD *v886; // rdx
  _QWORD *v887; // rcx
  unsigned int v891; // ecx
  int v893; // r8d
  unsigned __int64 v894; // r10
  int v895; // eax
  _DWORD *v896; // r9
  int v897; // ecx
  char *v898; // rdi
  unsigned int v899; // eax
  unsigned __int64 v900; // rdi
  int v901; // ebx
  _BYTE *v902; // rdx
  unsigned int v903; // r12d
  int v904; // r9d
  __int64 v905; // r8
  __int64 v906; // r13
  unsigned int v907; // r12d
  int v908; // r15d
  unsigned int v909; // esi
  __int64 v910; // r11
  int v911; // eax
  _DWORD *v912; // rbx
  _QWORD *v913; // r10
  _QWORD *v914; // rdx
  unsigned __int64 v915; // r8
  _QWORD *v916; // rcx
  int v918; // r15d
  unsigned __int64 v919; // rbx
  unsigned __int64 v920; // rsi
  unsigned __int64 v921; // rdi
  unsigned __int64 v922; // r11
  unsigned int v923; // eax
  _QWORD *v924; // r11
  unsigned __int64 v925; // rdx
  unsigned int v926; // eax
  unsigned int v927; // r8d
  unsigned int v928; // esi
  int v929; // eax
  unsigned int v930; // eax
  unsigned __int64 v931; // rcx
  unsigned int v932; // edi
  unsigned __int64 v933; // rdx
  unsigned int v934; // ecx
  unsigned int v936; // ecx
  unsigned int v939; // edi
  int v940; // edx
  __int64 v941; // r8
  int v942; // eax
  _DWORD *v943; // r9
  int v944; // ecx
  char *v945; // rbx
  unsigned int v946; // eax
  _BYTE *v947; // rcx
  int v948; // edi
  int v949; // ecx
  unsigned __int64 v950; // rdi
  int v951; // r8d
  unsigned __int64 v952; // r12
  int v953; // edx
  int v954; // ecx
  unsigned __int64 v955; // rcx
  unsigned int *v956; // rax
  _DWORD *v957; // rbx
  __int64 v958; // rsi
  __int64 v959; // r12
  unsigned int v960; // r11d
  _QWORD *v961; // rdx
  unsigned int v962; // r13d
  int v963; // r10d
  int v964; // r15d
  unsigned int v965; // r9d
  _DWORD *v966; // r8
  unsigned __int64 v967; // rdx
  unsigned __int64 v968; // rcx
  unsigned int v969; // r13d
  __int64 v970; // rdx
  unsigned __int64 v971; // rdi
  int v972; // r10d
  _DWORD *v973; // r11
  int v974; // ebx
  __int64 v975; // r10
  int v976; // eax
  _DWORD *v977; // r8
  int v978; // ecx
  char *v979; // r9
  unsigned int v980; // eax
  _BYTE *v981; // rdx
  _QWORD *v982; // r9
  _QWORD *v983; // rdx
  _QWORD *v984; // rcx
  unsigned int v987; // ecx
  int v990; // ecx
  _DWORD *v991; // rbx
  _QWORD *v992; // r10
  _QWORD *v993; // rdx
  _QWORD *v994; // r8
  _QWORD *v995; // rcx
  unsigned int v998; // ecx
  signed int v1001; // r11d
  _QWORD *v1002; // r9
  _QWORD *v1003; // rdx
  _QWORD *v1004; // rcx
  unsigned int v1008; // ecx
  int v1010; // edx
  __int64 v1011; // r10
  int v1012; // eax
  _DWORD *v1013; // r9
  int v1014; // ecx
  char *v1015; // rbx
  unsigned int v1016; // eax
  _BYTE *v1017; // r8
  int v1018; // r11d
  unsigned int v1019; // esi
  unsigned int v1020; // r15d
  int v1021; // r12d
  unsigned __int64 v1022; // rbx
  unsigned __int64 v1023; // r11
  __int64 v1024; // r11
  unsigned __int64 v1025; // r15
  unsigned int v1026; // eax
  unsigned __int64 v1027; // r13
  unsigned __int64 v1028; // rdx
  unsigned int v1029; // eax
  unsigned int v1030; // r8d
  bool v1031; // zf
  unsigned int v1032; // r11d
  int v1033; // eax
  int v1034; // eax
  int v1035; // r11d
  unsigned int v1036; // eax
  unsigned __int64 v1037; // rcx
  unsigned int v1038; // esi
  unsigned __int64 v1039; // rdx
  unsigned int v1040; // ecx
  int v1041; // r9d
  __int64 v1042; // r8
  __int64 v1043; // r13
  unsigned int v1044; // r12d
  int v1045; // r15d
  unsigned int v1046; // esi
  __int64 v1047; // rdi
  int v1048; // eax
  _DWORD *v1049; // r11
  char *v1050; // r10
  _QWORD *v1051; // rdx
  char *v1052; // r8
  char *v1053; // rcx
  unsigned int v1056; // ecx
  unsigned int v1059; // ebx
  int v1060; // edx
  __int64 v1061; // r8
  int v1062; // eax
  _DWORD *v1063; // r9
  int v1064; // ecx
  char *v1065; // r11
  unsigned int v1066; // eax
  _BYTE *v1067; // rcx
  int v1068; // ebx
  int v1069; // ecx
  unsigned __int64 v1070; // rbx
  int v1071; // eax
  unsigned __int64 v1072; // rcx
  int v1073; // ecx
  unsigned __int64 v1074; // r13
  _BYTE *v1075; // r15
  _BYTE *v1076; // r8
  char *v1077; // r10
  _BYTE *v1078; // r14
  unsigned __int64 v1079; // r12
  unsigned __int128 v1080; // rax
  _QWORD *v1081; // rcx
  _WORD *v1082; // r14
  unsigned __int64 v1083; // rcx
  char v1084; // al
  unsigned __int64 v1085; // rcx
  unsigned __int64 v1086; // rdx
  _BYTE *v1087; // r14
  unsigned int *v1088; // rcx
  int v1089; // ecx
  unsigned __int64 v1090; // r13
  _BYTE *v1091; // r8
  char *v1092; // r10
  _BYTE *v1093; // r14
  unsigned __int64 v1094; // r12
  unsigned __int128 v1095; // rax
  _QWORD *v1096; // rcx
  _WORD *v1097; // r14
  unsigned __int64 v1098; // rcx
  char v1099; // al
  unsigned __int64 v1100; // rcx
  unsigned __int64 v1101; // rdx
  _BYTE *v1102; // r14
  unsigned int *v1103; // rcx
  _DWORD *v1104; // r10
  unsigned int *v1105; // rbx
  char *v1106; // r13
  char *v1107; // r9
  unsigned __int64 v1108; // rsi
  _BYTE *v1109; // r14
  unsigned __int64 v1110; // r12
  unsigned __int128 v1111; // rax
  _QWORD *v1112; // rcx
  _WORD *v1113; // r14
  _BYTE *v1114; // r14
  unsigned __int64 v1115; // rcx
  char v1116; // al
  unsigned __int64 v1117; // rcx
  unsigned __int64 v1118; // rdx
  _BYTE *v1119; // r14
  unsigned int *v1120; // r10
  char *v1121; // r13
  char *v1122; // r9
  unsigned __int64 v1123; // rsi
  _BYTE *v1124; // r14
  unsigned __int64 v1125; // r12
  unsigned __int128 v1126; // rax
  _QWORD *v1127; // rcx
  _WORD *v1128; // r14
  unsigned __int64 v1129; // rcx
  char v1130; // al
  unsigned __int64 v1131; // rcx
  unsigned __int64 v1132; // rdx
  _BYTE *v1133; // r14
  _BYTE *v1134; // r12
  char *v1135; // r13
  _BYTE *v1136; // r14
  unsigned __int64 v1137; // rdi
  unsigned __int64 v1138; // rsi
  unsigned __int128 v1139; // rax
  _QWORD *v1140; // rcx
  _WORD *v1141; // r14
  unsigned __int64 v1142; // rcx
  char v1143; // al
  unsigned __int64 v1144; // rcx
  unsigned __int64 v1145; // rdx
  _BYTE *v1146; // r14
  _DWORD *v1147; // r9
  unsigned __int64 v1148; // rdi
  unsigned __int64 v1149; // r8
  _BYTE *v1150; // r14
  unsigned __int64 v1151; // rsi
  unsigned __int128 v1152; // rax
  _QWORD *v1153; // rcx
  __int64 v1154; // r10
  _WORD *v1155; // r14
  unsigned __int64 v1156; // rcx
  char v1157; // al
  unsigned __int64 v1158; // rcx
  unsigned __int64 v1159; // rdx
  _BYTE *v1160; // r14
  size_t v1161; // rbx
  _BYTE *v1162; // r8
  int v1163; // esi
  size_t v1164; // rdi
  _BYTE *v1165; // r14
  unsigned __int128 v1166; // rax
  int v1167; // r14d
  unsigned int v1168; // [rsp+20h] [rbp-E0h]
  int v1169; // [rsp+20h] [rbp-E0h]
  int v1170; // [rsp+20h] [rbp-E0h]
  int v1171; // [rsp+20h] [rbp-E0h]
  unsigned int v1172; // [rsp+20h] [rbp-E0h]
  int v1173; // [rsp+20h] [rbp-E0h]
  int v1174; // [rsp+20h] [rbp-E0h]
  int v1175; // [rsp+20h] [rbp-E0h]
  unsigned int v1176; // [rsp+20h] [rbp-E0h]
  unsigned int v1177; // [rsp+20h] [rbp-E0h]
  int v1178; // [rsp+24h] [rbp-DCh]
  unsigned int v1179; // [rsp+24h] [rbp-DCh]
  unsigned int v1180; // [rsp+24h] [rbp-DCh]
  int v1181; // [rsp+24h] [rbp-DCh]
  unsigned int v1182; // [rsp+24h] [rbp-DCh]
  int v1183; // [rsp+24h] [rbp-DCh]
  int v1184; // [rsp+24h] [rbp-DCh]
  int v1185; // [rsp+24h] [rbp-DCh]
  unsigned int v1186; // [rsp+28h] [rbp-D8h]
  unsigned int v1187; // [rsp+28h] [rbp-D8h]
  unsigned int v1188; // [rsp+28h] [rbp-D8h]
  int v1189; // [rsp+28h] [rbp-D8h]
  unsigned int v1190; // [rsp+28h] [rbp-D8h]
  unsigned int v1191; // [rsp+28h] [rbp-D8h]
  int v1192; // [rsp+28h] [rbp-D8h]
  int v1193; // [rsp+28h] [rbp-D8h]
  int v1194; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1195; // [rsp+2Ch] [rbp-D4h]
  int v1196; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1197; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1198; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1199; // [rsp+2Ch] [rbp-D4h]
  int v1200; // [rsp+2Ch] [rbp-D4h]
  int v1201; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1202; // [rsp+2Ch] [rbp-D4h]
  char *v1203; // [rsp+30h] [rbp-D0h]
  char *v1204; // [rsp+30h] [rbp-D0h]
  _DWORD *v1205; // [rsp+30h] [rbp-D0h]
  int v1206; // [rsp+38h] [rbp-C8h]
  unsigned int v1207; // [rsp+38h] [rbp-C8h]
  int v1208; // [rsp+38h] [rbp-C8h]
  unsigned int v1209; // [rsp+38h] [rbp-C8h]
  unsigned int v1210; // [rsp+38h] [rbp-C8h]
  unsigned int v1211; // [rsp+38h] [rbp-C8h]
  unsigned int v1212; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1213; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1214; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1215; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1216; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1217; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1218; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1219; // [rsp+3Ch] [rbp-C4h]
  unsigned int v1220; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v1221; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v1222; // [rsp+40h] [rbp-C0h]
  unsigned int *v1223; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v1224; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1225; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1226; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1227; // [rsp+48h] [rbp-B8h]
  unsigned int v1228; // [rsp+50h] [rbp-B0h]
  int v1229; // [rsp+50h] [rbp-B0h]
  unsigned int v1230; // [rsp+50h] [rbp-B0h]
  int v1231; // [rsp+50h] [rbp-B0h]
  int v1232; // [rsp+50h] [rbp-B0h]
  int v1233; // [rsp+50h] [rbp-B0h]
  unsigned int v1234; // [rsp+50h] [rbp-B0h]
  int v1235; // [rsp+50h] [rbp-B0h]
  unsigned int v1236; // [rsp+50h] [rbp-B0h]
  unsigned int v1237; // [rsp+54h] [rbp-ACh]
  unsigned int v1238; // [rsp+54h] [rbp-ACh]
  unsigned int v1239; // [rsp+54h] [rbp-ACh]
  unsigned int v1240; // [rsp+54h] [rbp-ACh]
  unsigned int v1241; // [rsp+54h] [rbp-ACh]
  unsigned int v1242; // [rsp+54h] [rbp-ACh]
  unsigned int v1243; // [rsp+54h] [rbp-ACh]
  int v1244; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v1245; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1246; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1247; // [rsp+58h] [rbp-A8h]
  _BYTE *v1248; // [rsp+58h] [rbp-A8h]
  unsigned int *v1249; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1250; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1251; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1252; // [rsp+68h] [rbp-98h]
  unsigned int *v1253; // [rsp+68h] [rbp-98h]
  unsigned __int64 v1254; // [rsp+68h] [rbp-98h]
  _QWORD *v1255; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1256; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1257; // [rsp+70h] [rbp-90h]
  _BYTE *v1258; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1259; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1260; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1261; // [rsp+78h] [rbp-88h]
  __int64 v1262; // [rsp+78h] [rbp-88h]
  _QWORD *v1263; // [rsp+78h] [rbp-88h]
  __int64 v1264; // [rsp+78h] [rbp-88h]
  int v1265; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v1266; // [rsp+80h] [rbp-80h]
  __int64 v1267; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1268; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1269; // [rsp+80h] [rbp-80h]
  char *v1270; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1271; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1272; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1273; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1274; // [rsp+80h] [rbp-80h]
  _BYTE *v1275; // [rsp+90h] [rbp-70h]
  _BYTE *v1276; // [rsp+90h] [rbp-70h]
  unsigned __int64 v1277; // [rsp+90h] [rbp-70h]
  char *v1278; // [rsp+98h] [rbp-68h]
  size_t v1279; // [rsp+98h] [rbp-68h]
  char *v1280; // [rsp+98h] [rbp-68h]
  __int64 v1281; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1282; // [rsp+98h] [rbp-68h]
  char *v1283; // [rsp+98h] [rbp-68h]
  size_t v1284; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1285; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1286; // [rsp+A0h] [rbp-60h]
  char *v1287; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1288; // [rsp+A0h] [rbp-60h]
  int v1289; // [rsp+A8h] [rbp-58h]
  unsigned int v1290; // [rsp+A8h] [rbp-58h]
  int v1291; // [rsp+A8h] [rbp-58h]
  unsigned int v1292; // [rsp+A8h] [rbp-58h]
  unsigned int v1293; // [rsp+A8h] [rbp-58h]
  unsigned int v1294; // [rsp+A8h] [rbp-58h]
  unsigned int v1295; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1296; // [rsp+A8h] [rbp-58h]
  unsigned int v1297; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v1298; // [rsp+B0h] [rbp-50h]
  __int64 v1299; // [rsp+B0h] [rbp-50h]
  char *v1300; // [rsp+B0h] [rbp-50h]
  size_t v1301; // [rsp+B0h] [rbp-50h]
  __int64 v1302; // [rsp+B0h] [rbp-50h]
  __int64 v1303; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v1304; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1305; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1306; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1307; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v1308; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v1309; // [rsp+C0h] [rbp-40h]
  __int64 v1310; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v1311; // [rsp+C0h] [rbp-40h]
  char *v1312; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1313; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1314; // [rsp+C8h] [rbp-38h]
  __int64 v1315; // [rsp+C8h] [rbp-38h]
  unsigned int *v1316; // [rsp+D0h] [rbp-30h]
  unsigned int *v1317; // [rsp+D0h] [rbp-30h]
  unsigned int *v1318; // [rsp+D0h] [rbp-30h]
  _QWORD *v1319; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v1320; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v1321; // [rsp+E0h] [rbp-20h]
  __int64 v1322; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v1323; // [rsp+E0h] [rbp-20h]
  char *v1324; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1325; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1326; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1327; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1328; // [rsp+E8h] [rbp-18h]
  _QWORD *v1329; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1330; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1331; // [rsp+F0h] [rbp-10h]
  __int64 v1332; // [rsp+F0h] [rbp-10h]
  int v1333; // [rsp+F4h] [rbp-Ch]
  unsigned __int64 v1334; // [rsp+F8h] [rbp-8h]
  char *v1335; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v1336; // [rsp+F8h] [rbp-8h]
  int v1337; // [rsp+FCh] [rbp-4h]
  unsigned __int64 v1338; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1339; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1340; // [rsp+100h] [rbp+0h]
  _QWORD *v1341; // [rsp+108h] [rbp+8h]
  __int64 v1342; // [rsp+108h] [rbp+8h]
  __int64 v1343; // [rsp+108h] [rbp+8h]
  unsigned __int64 v1344; // [rsp+108h] [rbp+8h]
  unsigned __int64 v1345; // [rsp+110h] [rbp+10h]
  __int64 v1346; // [rsp+110h] [rbp+10h]
  char *v1347; // [rsp+128h] [rbp+28h]
  int v1348; // [rsp+130h] [rbp+30h] BYREF
  int v1349; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v1350; // [rsp+140h] [rbp+40h] BYREF
  int v1351; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1352; // [rsp+150h] [rbp+50h] BYREF
  int v1353; // [rsp+158h] [rbp+58h] BYREF
  int v1355; // [rsp+1B8h] [rbp+B8h]
  int v1358; // [rsp+1D8h] [rbp+D8h]
  int v1359; // [rsp+1D8h] [rbp+D8h]
  int v1360; // [rsp+1D8h] [rbp+D8h]
  int v1361; // [rsp+1D8h] [rbp+D8h]
  int v1362; // [rsp+1D8h] [rbp+D8h]
  int v1363; // [rsp+1D8h] [rbp+D8h]
  int v1364; // [rsp+1D8h] [rbp+D8h]
  int v1365; // [rsp+1D8h] [rbp+D8h]
  int v1366; // [rsp+1D8h] [rbp+D8h]

  v1355 = (int)Src;
  v7 = a1;
  v9 = *((_QWORD *)a1 + 0x8000);
  v10 = a3;
  v12 = v9 + a1[65542] - a1[65543] - *((_QWORD *)a1 + 32769);
  if ( v12 >= 0x10000 )
  {
    v13 = 0;
    *((_QWORD *)a1 + 32773) = 0LL;
    if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
      return v13;
    v14 = Src;
    v15 = (int)a3;
    v16 = v9 + (int)*a4;
    v17 = Src;
    *((_QWORD *)a1 + 0x8000) = v16;
    v18 = (int)*a4;
    v19 = (char *)Src + v18;
    v20 = (unsigned int *)((char *)Src + v18 - 12);
    v21 = (unsigned __int64)&a3[a5 - 5];
    if ( a7 != 2 )
      v21 = (unsigned __int64)&a3[a5];
    v1203 = (char *)Src;
    v1249 = Src;
    v1224 = v21;
    v22 = a3;
    v1278 = v19;
    v1316 = v20;
    v1221 = (unsigned __int64)(v19 - 5);
    v1275 = a3;
    v1252 = 0LL;
    v1304 = 0LL;
    *a4 = 0;
    if ( (int)v18 >= 13 )
    {
      while ( 1 )
      {
LABEL_8:
        if ( v17 > v20 )
          goto LABEL_639;
        v23 = 3;
        v1194 = 3;
        v24 = a1[65543];
        v25 = (_QWORD *)*((_QWORD *)a1 + 32769);
        v26 = v24;
        v27 = a1[65542];
        v1255 = v25;
        v1212 = a1[65543];
        v28 = (_DWORD)v17 + a1[65542] - (_DWORD)v25;
        v1228 = v28;
        if ( (int)v24 + 0x10000 <= v28 )
          v26 = v28 - 0xFFFF;
        v29 = *v17;
        v1289 = 256;
        v1307 = *((_QWORD *)a1 + 32770) + v27 - v24;
        v30 = 0;
        v31 = 0;
        v1358 = 0;
        v1320 = 0LL;
        v1237 = 0;
        v1168 = v26;
        v1266 = *((_QWORD *)a1 + 32770);
        v32 = a1[65544];
        if ( v32 < v28 )
        {
          v33 = (_DWORD *)((char *)v25 + v32 - v27);
          do
          {
            v34 = (unsigned __int64)(unsigned int)(-1640531535 * *v33) >> 17;
            v35 = v32 - a1[v34];
            if ( v35 > 0xFFFF )
              LOWORD(v35) = -1;
            v33 = (_DWORD *)((char *)v33 + 1);
            *((_WORD *)a1 + (unsigned __int16)v32 + 0x10000) = v35;
            a1[v34] = v32++;
          }
          while ( v32 < v28 );
          v23 = 3;
          v31 = 0;
          LODWORD(v24) = v1212;
        }
        v36 = v1203;
        a1[65544] = v28;
        v37 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1203) >> 17];
        if ( v37 >= v26 )
        {
          while ( 1 )
          {
            v38 = v31;
            if ( v1289 <= 0 )
            {
LABEL_99:
              v22 = v1275;
              v30 = v1237;
              break;
            }
            --v1289;
            if ( v37 < (unsigned int)v27 )
            {
              v52 = (_DWORD *)(v1266 + v37 - (unsigned int)v24);
              if ( v37 > (int)v27 - 4 || *v52 != v29 )
                goto LABEL_43;
              v40 = v1221;
              v53 = &v36[(unsigned int)v27 - v37];
              if ( (unsigned __int64)v53 > v1221 )
                v53 = (char *)v1221;
              v54 = v36 + 4;
              v55 = v52 + 1;
              v56 = v54;
              if ( v54 >= v53 - 7 )
              {
                while ( v56 < v53 - 7 )
                {
                  if ( *v55 != *(_QWORD *)v56 )
                  {
                    __asm { tzcnt   rax, rax }
                    v59 = ((unsigned int)_RAX >> 3) - (_DWORD)v54 + (_DWORD)v56;
                    goto LABEL_71;
                  }
                  v56 += 8;
LABEL_59:
                  ++v55;
                }
                if ( v56 < v53 - 3 && *(_DWORD *)v55 == *(_DWORD *)v56 )
                {
                  v56 += 4;
                  v55 = (_QWORD *)((char *)v55 + 4);
                }
                if ( v56 < v53 - 1 && *(_WORD *)v55 == *(_WORD *)v56 )
                {
                  v56 += 2;
                  v55 = (_QWORD *)((char *)v55 + 2);
                }
                if ( v56 < v53 && *(_BYTE *)v55 == *v56 )
                  LODWORD(v56) = (_DWORD)v56 + 1;
                v59 = (_DWORD)v56 - (_DWORD)v54;
              }
              else
              {
                if ( *v55 == *(_QWORD *)v54 )
                {
                  v56 = v54 + 8;
                  goto LABEL_59;
                }
                __asm { tzcnt   rcx, rax }
                v59 = (unsigned int)_RCX >> 3;
              }
LABEL_71:
              v62 = v59 + 4;
              v63 = &v1203[v59 + 4];
              if ( v63 == v53 && (unsigned __int64)v53 < v1221 )
              {
                v64 = v25;
                v65 = &v1203[v62];
                if ( (unsigned __int64)v63 >= v1221 - 7 )
                  goto LABEL_76;
                if ( *v25 != *(_QWORD *)v63 )
                {
                  __asm { tzcnt   rcx, rax }
                  v69 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v65 = v63 + 8;
                  v64 = v25 + 1;
LABEL_76:
                  while ( (unsigned __int64)v65 < v1221 - 7 )
                  {
                    if ( *v64 != *(_QWORD *)v65 )
                    {
                      __asm { tzcnt   rax, rax }
                      v69 = ((unsigned int)_RAX >> 3) - (_DWORD)v63 + (_DWORD)v65;
                      goto LABEL_91;
                    }
                    v65 += 8;
                    ++v64;
                  }
                  if ( (unsigned __int64)v65 < v1221 - 3 && *(_DWORD *)v64 == *(_DWORD *)v65 )
                  {
                    v65 += 4;
                    v64 = (_QWORD *)((char *)v64 + 4);
                  }
                  if ( (unsigned __int64)v65 < v1221 - 1 && *(_WORD *)v64 == *(_WORD *)v65 )
                  {
                    v65 += 2;
                    v64 = (_QWORD *)((char *)v64 + 2);
                  }
                  if ( (unsigned __int64)v65 < v1221 && *(_BYTE *)v64 == *v65 )
                    LODWORD(v65) = (_DWORD)v65 + 1;
                  v69 = (_DWORD)v65 - (_DWORD)v63;
                }
LABEL_91:
                v62 += v69;
              }
              v31 = v1358;
              v36 = v1203;
              if ( v62 > v23 )
              {
                v1194 = v62;
                v1237 = v28 - v37;
              }
            }
            else
            {
              v39 = (_DWORD *)((char *)v25 + v37 - (unsigned int)v27);
              if ( *(_WORD *)&v36[v23 - 1] != *(_WORD *)((char *)v39 + v23 - 1) )
                goto LABEL_43;
              v40 = v1221;
              if ( *v39 == v29 )
              {
                v41 = v36 + 4;
                v42 = v39 + 1;
                v43 = v36 + 4;
                if ( (unsigned __int64)(v36 + 4) >= v1221 - 7 )
                {
                  while ( (unsigned __int64)v43 < v1221 - 7 )
                  {
                    if ( *v43 != *v42 )
                    {
                      __asm { tzcnt   rax, rax }
                      v46 = ((unsigned int)_RAX >> 3) - (_DWORD)v41 + (_DWORD)v43;
                      goto LABEL_41;
                    }
                    ++v43;
LABEL_29:
                    ++v42;
                  }
                  if ( (unsigned __int64)v43 < v1221 - 3 && *(_DWORD *)v42 == *(_DWORD *)v43 )
                  {
                    v43 = (_QWORD *)((char *)v43 + 4);
                    v42 = (_QWORD *)((char *)v42 + 4);
                  }
                  if ( (unsigned __int64)v43 < v1221 - 1 && *(_WORD *)v42 == *(_WORD *)v43 )
                  {
                    v43 = (_QWORD *)((char *)v43 + 2);
                    v42 = (_QWORD *)((char *)v42 + 2);
                  }
                  if ( (unsigned __int64)v43 < v1221 && *(_BYTE *)v42 == *(_BYTE *)v43 )
                    LODWORD(v43) = (_DWORD)v43 + 1;
                  v46 = (_DWORD)v43 - (_DWORD)v41;
                }
                else
                {
                  if ( *v41 == *v42 )
                  {
                    v43 = v36 + 12;
                    goto LABEL_29;
                  }
                  __asm { tzcnt   rcx, rax }
                  v46 = (unsigned int)_RCX >> 3;
                }
LABEL_41:
                v31 = v1358;
                v49 = v46 + 4;
                v36 = v1203;
                if ( v49 > v23 )
                {
                  v1194 = v49;
                  v1237 = v28 - v37;
LABEL_43:
                  v40 = v1221;
                }
              }
            }
            if ( *((_WORD *)a1 + (unsigned __int16)v37 + 0x10000) != 1 )
              goto LABEL_96;
            v50 = v37 - 1;
            if ( v31 )
            {
              v1358 = v38;
              if ( v38 != 2 )
                goto LABEL_96;
              v51 = v1320;
            }
            else
            {
              if ( (_BYTE)v29 != HIBYTE(v29) || (unsigned __int16)v29 != HIWORD(v29) )
              {
                v1358 = 1;
LABEL_96:
                v71 = v1168;
LABEL_97:
                v37 -= *((unsigned __int16 *)a1 + (unsigned __int16)v37 + 0x10000);
                goto LABEL_98;
              }
              v1358 = 2;
              v51 = (unsigned int)LZ4HC_countPattern(v36 + 4, v40, v29) + 4LL;
              v1320 = v51;
            }
            v71 = v1168;
            if ( v50 < v1168 || (unsigned int)v27 - v50 - 1 < 3 )
              goto LABEL_97;
            if ( v50 >= (unsigned int)v27 )
            {
              v74 = 0;
              v75 = (unsigned __int64)v25 + v50 - (unsigned int)v27;
            }
            else
            {
              v74 = 1;
              v75 = v1266 + v50 - v1212;
            }
            if ( *(_DWORD *)v75 != v29 )
              goto LABEL_97;
            v76 = v1221;
            if ( v74 )
              v76 = v1307;
            v77 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v75 + 4), v76, v29) + 4LL;
            if ( v74 )
            {
              if ( v77 + v75 == v78 )
              {
                v79 = v29;
                v80 = 8 * (v77 & 3);
                if ( v80 )
                  v79 = __ROL4__(v29, v80);
                v77 += (unsigned int)LZ4HC_countPattern(v1255, v1221, v79);
              }
              v81 = v1266;
            }
            else
            {
              v81 = (unsigned __int64)v1255;
            }
            v82 = LZ4HC_reverseCountPattern(v75, v81, v29);
            v84 = v82;
            if ( !v74 && (_QWORD *)(v75 - v82) == v1255 && v1212 < (unsigned int)v27 )
            {
              v85 = 8LL * (-v82 & 3);
              if ( v85 )
                v83 = __ROL4__(v83, v85);
              v86 = LZ4HC_reverseCountPattern(v1307, v1266, v83);
              v84 = v86 + v87;
            }
            v71 = v1168;
            v88 = v50 - v84;
            v89 = v1168;
            if ( v88 > v1168 )
              v89 = v88;
            v90 = v77 + v50 - v89;
            if ( v90 >= v51 && v77 <= v51 )
            {
              v91 = v50 + v77 - v51;
              v37 = v27;
              if ( (unsigned int)v27 - v91 - 1 >= 3 )
                v37 = v91;
              goto LABEL_142;
            }
            if ( (unsigned int)v27 - v89 - 1 < 3 )
            {
              v37 = v27;
LABEL_142:
              v25 = v1255;
              goto LABEL_98;
            }
            v23 = v1194;
            v25 = v1255;
            v92 = v51;
            v36 = v1203;
            if ( v90 < v51 )
              v92 = v90;
            if ( v1194 < v92 )
            {
              if ( (unsigned __int64)&v1203[v27 - v89 - (_QWORD)v1255] > 0xFFFF )
                goto LABEL_99;
              v23 = v92;
              v1194 = v92;
              v1237 = v1228 - v89;
            }
            v93 = *((unsigned __int16 *)a1 + (unsigned __int16)v89 + 0x10000);
            if ( v93 > v89 )
              goto LABEL_99;
            v37 = v89 - v93;
LABEL_98:
            v23 = v1194;
            v72 = v37 < v71;
            v31 = v1358;
            v28 = v1228;
            LODWORD(v24) = v1212;
            v36 = v1203;
            if ( v72 )
              goto LABEL_99;
          }
        }
        v73 = __PAIR64__(v23, v30);
        v1321 = __PAIR64__(v23, v30);
        v1256 = __PAIR64__(v23, v30);
        if ( v23 < 4 )
        {
          v14 = v1249;
          v17 = (unsigned int *)(v36 + 1);
          goto LABEL_102;
        }
        v94 = v36;
        v1337 = v23;
LABEL_144:
        v95 = v1316;
        v1324 = v94;
        while ( 1 )
        {
          v96 = HIDWORD(v1256);
          v1359 = HIDWORD(v1256);
          v97 = &v36[SHIDWORD(v1256)];
          if ( v97 > (char *)v95 )
          {
            v1246 = 0LL;
            v171 = 0;
            v170 = 0LL;
          }
          else
          {
            v1252 = (unsigned __int64)(v97 - 2);
            v98 = (unsigned int *)(v97 - 2);
            v1206 = HIDWORD(v1256);
            v99 = a1[65543];
            v100 = a1[65542];
            v101 = v99;
            v102 = (_QWORD *)*((_QWORD *)a1 + 32769);
            v1341 = v102;
            v103 = (_DWORD)v97 - 2 + a1[65542] - (_DWORD)v102;
            v1186 = a1[65542];
            v1238 = v103;
            v1290 = a1[65543];
            if ( (int)v99 + 0x10000 <= v103 )
              v101 = v103 - 0xFFFF;
            v104 = *((_QWORD *)a1 + 32770);
            v105 = *v98;
            v1195 = v101;
            v1308 = v100 + v104 - v99;
            v106 = (_DWORD)v98 - (_DWORD)v1203;
            v1229 = 256;
            v107 = 0;
            v1178 = 0;
            v1298 = 0LL;
            v1213 = 0;
            v108 = a1[65544];
            v1245 = v104;
            v1169 = *v98;
            if ( v108 < v103 )
            {
              v109 = (_DWORD *)((char *)v102 + v108 - v100);
              do
              {
                v110 = (unsigned __int64)(unsigned int)(-1640531535 * *v109) >> 17;
                v111 = v108 - a1[v110];
                if ( v111 > 0xFFFF )
                  LOWORD(v111) = -1;
                v109 = (_DWORD *)((char *)v109 + 1);
                *((_WORD *)a1 + (unsigned __int16)v108 + 0x10000) = v111;
                a1[v110] = v108++;
              }
              while ( v108 < v103 );
              v73 = v1321;
              LODWORD(v100) = v1186;
              v105 = v1169;
              v104 = v1245;
            }
            a1[65544] = v103;
            v112 = a1[(unsigned __int64)(-1640531535 * *v98) >> 17];
            v113 = v106;
            v1267 = v106;
            if ( v112 >= v101 )
            {
              v114 = (unsigned __int64)(v97 - 2);
              while ( 1 )
              {
                v115 = v1178;
                if ( v1229 <= 0 )
                {
LABEL_268:
                  v73 = v1321;
                  v22 = v1275;
                  v107 = v1213;
                  goto LABEL_269;
                }
                --v1229;
                if ( v112 >= (unsigned int)v100 )
                  break;
                v137 = v112 - v1290;
                v129 = v1221;
                v138 = (unsigned int)v137;
                v139 = (_DWORD *)(v137 + v104);
                if ( v112 > (int)v100 - 4 || *v139 != v1169 )
                {
                  v105 = v1169;
LABEL_259:
                  v165 = v1245;
                  goto LABEL_260;
                }
                v140 = (_QWORD *)(v114 + 4);
                v141 = (_QWORD *)(v114 + (unsigned int)v100 - v112);
                v142 = v139 + 1;
                v143 = (_QWORD *)(v114 + 4);
                if ( (unsigned __int64)v141 > v1221 )
                  v141 = (_QWORD *)v1221;
                if ( v140 >= (_QWORD *)((char *)v141 - 7) )
                {
                  while ( v143 < (_QWORD *)((char *)v141 - 7) )
                  {
                    if ( *v142 != *v143 )
                    {
                      __asm { tzcnt   rax, rax }
                      v146 = ((unsigned int)_RAX >> 3) - (_DWORD)v140 + (_DWORD)v143;
                      goto LABEL_218;
                    }
                    ++v143;
LABEL_206:
                    ++v142;
                  }
                  if ( v143 < (_QWORD *)((char *)v141 - 3) && *(_DWORD *)v142 == *(_DWORD *)v143 )
                  {
                    v143 = (_QWORD *)((char *)v143 + 4);
                    v142 = (_QWORD *)((char *)v142 + 4);
                  }
                  if ( v143 < (_QWORD *)((char *)v141 - 1) && *(_WORD *)v142 == *(_WORD *)v143 )
                  {
                    v143 = (_QWORD *)((char *)v143 + 2);
                    v142 = (_QWORD *)((char *)v142 + 2);
                  }
                  if ( v143 < v141 && *(_BYTE *)v142 == *(_BYTE *)v143 )
                    LODWORD(v143) = (_DWORD)v143 + 1;
                  v146 = (_DWORD)v143 - (_DWORD)v140;
                }
                else
                {
                  if ( *v142 == *v140 )
                  {
                    v143 = (_QWORD *)(v114 + 12);
                    goto LABEL_206;
                  }
                  __asm { tzcnt   rcx, rax }
                  v146 = (unsigned int)_RCX >> 3;
                }
LABEL_218:
                v149 = v146 + 4;
                v150 = (_QWORD *)(v114 + (int)(v146 + 4));
                if ( v150 == v141 && (unsigned __int64)v141 < v1221 )
                {
                  v151 = v1341;
                  v152 = (_QWORD *)(v114 + v149);
                  if ( (unsigned __int64)v150 >= v1221 - 7 )
                    goto LABEL_223;
                  if ( *v1341 != *v150 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v156 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v152 = v150 + 1;
                    v151 = v1341 + 1;
LABEL_223:
                    while ( (unsigned __int64)v152 < v1221 - 7 )
                    {
                      if ( *v151 != *v152 )
                      {
                        __asm { tzcnt   rax, rax }
                        v156 = ((unsigned int)_RAX >> 3) - (_DWORD)v150 + (_DWORD)v152;
                        goto LABEL_238;
                      }
                      ++v152;
                      ++v151;
                    }
                    if ( (unsigned __int64)v152 < v1221 - 3 && *(_DWORD *)v151 == *(_DWORD *)v152 )
                    {
                      v152 = (_QWORD *)((char *)v152 + 4);
                      v151 = (_QWORD *)((char *)v151 + 4);
                    }
                    if ( (unsigned __int64)v152 < v1221 - 1 && *(_WORD *)v151 == *(_WORD *)v152 )
                    {
                      v152 = (_QWORD *)((char *)v152 + 2);
                      v151 = (_QWORD *)((char *)v151 + 2);
                    }
                    if ( (unsigned __int64)v152 < v1221 && *(_BYTE *)v151 == *(_BYTE *)v152 )
                      LODWORD(v152) = (_DWORD)v152 + 1;
                    v156 = (_DWORD)v152 - (_DWORD)v150;
                  }
LABEL_238:
                  v149 += v156;
                }
                v158 = 0;
                if ( v1267 )
                {
                  v159 = 0LL;
                  if ( (__int64)&v1203[-v114] <= (__int64)(v1245 - (_QWORD)v139) )
                    v160 = v1245 - (_DWORD)v139;
                  else
                    v160 = (_DWORD)v1203 - v114;
                  v161 = v139 - 1;
                  v162 = -v160;
                  v163 = v114 - (_QWORD)v139;
                  while ( v162 > 3 )
                  {
                    if ( *v161 != *(_DWORD *)((char *)v161 + v163) )
                    {
                      v129 = v1221;
                      _BitScanReverse(&v164, *v161 ^ *(_DWORD *)((char *)v161 + v163));
                      v158 -= (31 - v164) >> 3;
                      goto LABEL_248;
                    }
                    v158 -= 4;
                    v162 -= 4;
                    v159 -= 4LL;
                    --v161;
                  }
                  v165 = v1245;
                  if ( v159 > v160 )
                  {
                    v167 = (_BYTE *)(v138 + v159 + v1245 - 1);
                    do
                    {
                      if ( v1203[SHIDWORD(v1256) - v1245 - v138 - 2 + (_QWORD)v167] != *v167 )
                        break;
                      --v167;
                      --v158;
                    }
                    while ( (__int64)&v167[1 - v1245 - v138] > v160 );
                  }
                  v129 = v1221;
                }
                else
                {
LABEL_248:
                  v165 = v1245;
                }
                LODWORD(v100) = v1186;
                v166 = v149 - v158;
                v115 = v1178;
                v105 = v1169;
                if ( v166 > v1206 )
                {
                  v1206 = v166;
                  v1213 = v1238 - v112;
                  v1252 = v114 + v158;
                }
LABEL_260:
                if ( *((_WORD *)a1 + (unsigned __int16)v112 + 0x10000) != 1 )
                  goto LABEL_265;
                v168 = v112 - 1;
                if ( v115 )
                {
                  if ( v1178 != 2 )
                    goto LABEL_265;
                }
                else
                {
                  if ( (_BYTE)v105 != HIBYTE(v105) || (unsigned __int16)v105 != HIWORD(v105) )
                  {
                    LODWORD(v100) = v1186;
                    v1178 = 1;
LABEL_265:
                    v169 = v1195;
LABEL_266:
                    v112 -= *((unsigned __int16 *)a1 + (unsigned __int16)v112 + 0x10000);
                    goto LABEL_267;
                  }
                  v1178 = 2;
                  v1298 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v114 + 4), v129, v105) + 4LL;
                }
                v169 = v1195;
                LODWORD(v100) = v1186;
                if ( v168 < v1195 || v1186 - v112 < 3 )
                  goto LABEL_266;
                if ( v168 >= v1186 )
                {
                  v172 = 0;
                  v173 = (unsigned __int64)v1341 + v168 - v1186;
                }
                else
                {
                  v172 = 1;
                  v173 = v165 + v168 - v1290;
                }
                if ( *(_DWORD *)v173 != v105 )
                  goto LABEL_266;
                v174 = v1221;
                if ( v172 )
                  v174 = v1308;
                v175 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v173 + 4), v174, v105) + 4LL;
                if ( v172 )
                {
                  if ( v175 + v173 == v174 )
                  {
                    v176 = v1169;
                    v177 = 8 * (v175 & 3);
                    if ( v177 )
                      v176 = __ROL4__(v1169, v177);
                    v175 += (unsigned int)LZ4HC_countPattern(v1341, v1221, v176);
                  }
                  v178 = v1245;
                }
                else
                {
                  v178 = (unsigned __int64)v1341;
                }
                v179 = LZ4HC_reverseCountPattern(v173, v178, v1169);
                LODWORD(v100) = v1186;
                v180 = v179;
                if ( !v172 && (_QWORD *)(v173 - v179) == v1341 && v1290 < v1186 )
                {
                  v181 = v1169;
                  v182 = 8LL * (-v179 & 3);
                  if ( v182 )
                    v181 = __ROL4__(v1169, v182);
                  v180 = LZ4HC_reverseCountPattern(v1308, v1245, v181) + v179;
                  LODWORD(v100) = v1186;
                }
                v169 = v1195;
                v112 = v1195;
                if ( v168 - v180 > v1195 )
                  v112 = v168 - v180;
                v183 = v175 + v168 - v112;
                if ( v183 < v1298 || v175 > v1298 )
                {
                  if ( (unsigned int)v100 - v112 - 1 < 3 )
                  {
                    v112 = v100;
                  }
                  else if ( !v1267 )
                  {
                    v96 = v1206;
                    v185 = v1298;
                    if ( v183 < v1298 )
                      v185 = v175 + v168 - v112;
                    if ( v1206 < v185 )
                    {
                      if ( v114 + (unsigned int)v100 - (unsigned __int64)v112 - (_QWORD)v1341 > 0xFFFF )
                        goto LABEL_268;
                      v96 = v185;
                      v1206 = v185;
                      v1213 = v1238 - v112;
                      v1252 = v114;
                    }
                    v186 = *((unsigned __int16 *)a1 + (unsigned __int16)v112 + 0x10000);
                    if ( v186 > v112 )
                      goto LABEL_268;
                    v112 -= v186;
                  }
                }
                else
                {
                  v184 = v175 + v168 - v1298;
                  v112 = v100;
                  if ( (unsigned int)v100 - v184 - 1 >= 3 )
                    v112 = v184;
                }
LABEL_267:
                v105 = v1169;
                v96 = v1206;
                v104 = v1245;
                v113 = v1267;
                if ( v112 < v169 )
                  goto LABEL_268;
              }
              v116 = v112 - (unsigned int)v100;
              v117 = (unsigned int)v116;
              v118 = (_DWORD *)((char *)v1341 + v116);
              if ( *(_WORD *)&v1203[v96 - 1] == *(_WORD *)((char *)v1341 + v116 - v113 + v96 - 1) && *v118 == v105 )
              {
                v119 = 0;
                if ( v113 )
                {
                  v120 = 0LL;
                  if ( (__int64)&v1203[-v114] <= -v116 )
                    v121 = v100 - v112;
                  else
                    v121 = (_DWORD)v1203 - v114;
                  v122 = v118 - 1;
                  v123 = -v121;
                  v124 = v114 - (_QWORD)v118;
                  while ( v123 > 3 )
                  {
                    if ( *v122 != *(_DWORD *)((char *)v122 + v124) )
                    {
                      _BitScanReverse(&v125, *v122 ^ *(_DWORD *)((char *)v122 + v124));
                      v119 -= (31 - v125) >> 3;
                      goto LABEL_169;
                    }
                    v119 -= 4;
                    v123 -= 4;
                    v120 -= 4LL;
                    --v122;
                  }
                  if ( v120 > v121 )
                  {
                    v131 = (char *)v1341 + v117 + v120 - 1;
                    do
                    {
                      if ( v1203[SHIDWORD(v1256) - v117 - (_QWORD)v1341 - 2 + (_QWORD)v131] != *v131 )
                        break;
                      --v131;
                      --v119;
                    }
                    while ( (__int64)&v131[1 - v117 - (_QWORD)v1341] > v121 );
                  }
                }
LABEL_169:
                v126 = (_QWORD *)(v114 + 4);
                v127 = v118 + 1;
                v128 = (_QWORD *)(v114 + 4);
                v129 = v1221;
                if ( v114 + 4 >= v1221 - 7 )
                {
                  while ( (unsigned __int64)v128 < v1221 - 7 )
                  {
                    if ( *v127 != *v128 )
                    {
                      __asm { tzcnt   rax, rax }
                      v133 = ((unsigned int)_RAX >> 3) - (_DWORD)v126 + (_DWORD)v128;
                      goto LABEL_193;
                    }
                    ++v128;
LABEL_181:
                    ++v127;
                  }
                  if ( (unsigned __int64)v128 < v1221 - 3 && *(_DWORD *)v127 == *(_DWORD *)v128 )
                  {
                    v128 = (_QWORD *)((char *)v128 + 4);
                    v127 = (_QWORD *)((char *)v127 + 4);
                  }
                  if ( (unsigned __int64)v128 < v1221 - 1 && *(_WORD *)v127 == *(_WORD *)v128 )
                  {
                    v128 = (_QWORD *)((char *)v128 + 2);
                    v127 = (_QWORD *)((char *)v127 + 2);
                  }
                  if ( (unsigned __int64)v128 < v1221 && *(_BYTE *)v127 == *(_BYTE *)v128 )
                    LODWORD(v128) = (_DWORD)v128 + 1;
                  v133 = (_DWORD)v128 - (_DWORD)v126;
                }
                else
                {
                  if ( *v127 == *v126 )
                  {
                    v128 = (_QWORD *)(v114 + 12);
                    goto LABEL_181;
                  }
                  __asm { tzcnt   rcx, rax }
                  v133 = (unsigned int)_RCX >> 3;
                }
LABEL_193:
                LODWORD(v100) = v1186;
                v136 = v133 - v119 + 4;
                if ( v136 > v1206 )
                {
                  v1206 = v136;
                  v1213 = v1238 - v112;
                  v1252 = v114 + v119;
                }
              }
              else
              {
                v129 = v1221;
              }
              v115 = v1178;
              goto LABEL_259;
            }
LABEL_269:
            v94 = v1324;
            v36 = v1203;
            v95 = v1316;
            HIDWORD(v1345) = v96;
            v96 = HIDWORD(v1256);
            LODWORD(v1345) = v107;
            v170 = v1345;
            v1246 = v1345;
            v171 = HIDWORD(v1345);
          }
          v1309 = v170;
          if ( v171 <= v96 )
          {
            v14 = v1249;
            v283 = v22;
            v341 = v22;
            v342 = v22;
            v343 = v36 - (char *)v1249;
            v344 = v22 + 1;
            if ( a7 )
            {
              v21 = v1224;
              if ( (unsigned __int64)&v344[v343 + 8 + v343 / 0xFF] > v1224 )
                goto LABEL_617;
            }
            if ( v343 < 0xF )
            {
              *v341 = 16 * v343;
            }
            else
            {
              v345 = v343 - 15;
              *v341 = -16;
              if ( v343 - 15 >= 0xFF )
              {
                v346 = v345 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v346) = -1;
                memset_thunk_772440563353939046(v344, SDWORD2(v346), v345 / 0xFF);
                v36 = v1203;
                v344 += v345 / 0xFF;
                v14 = v1249;
                v345 %= 0xFFuLL;
              }
              *v344++ = v345;
              v96 = HIDWORD(v1256);
            }
            v347 = v344;
            do
            {
              *v347 = *(_QWORD *)((char *)v347 + (char *)v14 - v344);
              ++v347;
            }
            while ( v347 < (_QWORD *)&v344[v343] );
            v348 = &v344[v343];
            v21 = v1224;
            v349 = v96 - 4LL;
            *v348 = v1256;
            v22 = v348 + 1;
            v1275 = v22;
            if ( a7 )
            {
              if ( (unsigned __int64)&v22[v349 / 0xFF + 6] > v1224 )
                goto LABEL_617;
            }
            v350 = *v342;
            if ( v349 < 0xF )
            {
              *v341 = v349 + v350;
            }
            else
            {
              v351 = v96 - 19LL;
              *v341 = v350 + 15;
              if ( v351 >= 0x1FE )
              {
                v352 = v351 / 0x1FE;
                v351 %= 0x1FEuLL;
                do
                {
                  *v22 = -1;
                  v353 = v22 + 1;
                  *v353 = -1;
                  v22 = v353 + 1;
                  --v352;
                }
                while ( v352 );
              }
              if ( v351 >= 0xFF )
              {
                LOBYTE(v351) = v351 + 1;
                *v22++ = -1;
              }
              *v22++ = v351;
              v1275 = v22;
            }
            v20 = v1316;
            v17 = (unsigned int *)&v36[v96];
            v1203 = (char *)v17;
            v14 = v17;
            v1249 = v17;
            goto LABEL_8;
          }
          if ( v94 < v36 && v1252 < (unsigned __int64)&v36[v1337] )
          {
            LOWORD(v1256) = v73;
            v36 = v94;
            v96 = HIDWORD(v73);
            v1359 = HIDWORD(v73);
            v1203 = v94;
          }
          if ( (__int64)(v1252 - (_QWORD)v36) >= 3 )
            break;
          v36 = (char *)v1252;
          v1203 = (char *)v1252;
          v1256 = v170;
        }
        v187 = v1252;
        while ( 1 )
        {
          if ( (__int64)(v187 - (_QWORD)v36) < 18 )
          {
            v188 = v96;
            if ( v96 > 18 )
              v188 = 18;
            if ( (unsigned __int64)&v36[v188] > v187 + v171 - 4LL )
              v188 = v171 + v187 - (_DWORD)v36 - 4;
            v189 = (_DWORD)v36 + v188 - v187;
            if ( v189 > 0 )
            {
              v187 += v189;
              v171 -= v189;
              v1252 = v187;
              HIDWORD(v1246) = v171;
              v170 = v1246;
              v1309 = v1246;
            }
          }
          v190 = v187 + v171;
          if ( v190 > (unsigned __int64)v95 )
          {
            v277 = 0;
            v276 = 0LL;
          }
          else
          {
            v191 = v190 - 3;
            v1304 = v190 - 3;
            v192 = v190 - 3;
            v1285 = v190 - 3;
            v1196 = v171;
            v193 = a1[65543];
            v194 = (_QWORD *)*((_QWORD *)a1 + 32769);
            v195 = v193;
            v196 = a1[65542];
            v197 = v196 + v191 - (_DWORD)v194;
            v1329 = v194;
            v1239 = a1[65542];
            v1230 = v197;
            v1179 = a1[65543];
            if ( (int)v193 + 0x10000 <= v197 )
              v195 = v197 - 0xFFFF;
            v198 = *(_DWORD *)v192;
            v1170 = 0;
            v1334 = *((_QWORD *)a1 + 32770) + v196 - v193;
            v199 = 0;
            v1325 = 0LL;
            v200 = v192 - v1252;
            v1214 = 0;
            v1268 = *((_QWORD *)a1 + 32770);
            v1207 = v195;
            v1291 = 256;
            v201 = a1[65544];
            v1187 = *(_DWORD *)v192;
            if ( v201 < v197 )
            {
              v202 = (_DWORD *)((char *)v194 + v201 - v196);
              do
              {
                v203 = (unsigned __int64)(unsigned int)(-1640531535 * *v202) >> 17;
                v204 = v201 - a1[v203];
                if ( v204 > 0xFFFF )
                  LOWORD(v204) = -1;
                v202 = (_DWORD *)((char *)v202 + 1);
                *((_WORD *)a1 + (unsigned __int16)v201 + 0x10000) = v204;
                a1[v203] = v201++;
              }
              while ( v201 < v197 );
              v171 = HIDWORD(v1246);
              v198 = v1187;
            }
            a1[65544] = v197;
            v205 = v200;
            v1299 = v200;
            v206 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v192) >> 17];
            if ( v206 >= v195 )
            {
              v207 = v1239;
              v208 = (unsigned __int64)v1329;
              v1304 = v192;
              v1322 = v171;
              while ( 1 )
              {
                v209 = v1170;
                if ( v1291 <= 0 )
                {
LABEL_476:
                  v170 = v1309;
                  v22 = v1275;
                  v171 = HIDWORD(v1246);
                  v199 = v1214;
                  break;
                }
                --v1291;
                if ( v206 < v207 )
                {
                  v229 = v1179;
                  v230 = (_DWORD *)(v1268 + v206 - v1179);
                  if ( v206 > v207 - 4 || *v230 != v1187 )
                  {
                    v198 = v1187;
                    v222 = v1221;
                    goto LABEL_439;
                  }
                  v231 = (_QWORD *)(v192 + 4);
                  v232 = v230 + 1;
                  v233 = (_QWORD *)(v192 + v207 - v206);
                  v234 = (_QWORD *)(v192 + 4);
                  if ( (unsigned __int64)v233 > v1221 )
                    v233 = (_QWORD *)v1221;
                  if ( v231 >= (_QWORD *)((char *)v233 - 7) )
                  {
                    while ( v234 < (_QWORD *)((char *)v233 - 7) )
                    {
                      if ( *v232 != *v234 )
                      {
                        __asm { tzcnt   rax, rax }
                        v237 = ((unsigned int)_RAX >> 3) - (_DWORD)v231 + (_DWORD)v234;
                        goto LABEL_399;
                      }
                      ++v234;
LABEL_387:
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
                      v234 = (_QWORD *)(v192 + 12);
                      goto LABEL_387;
                    }
                    __asm { tzcnt   rcx, rax }
                    v237 = (unsigned int)_RCX >> 3;
                  }
LABEL_399:
                  v240 = v237 + 4;
                  v241 = (_QWORD *)(v192 + (int)(v237 + 4));
                  if ( v241 == v233 && (unsigned __int64)v233 < v1221 )
                  {
                    v242 = (_QWORD *)v208;
                    v243 = (_QWORD *)(v192 + v240);
                    if ( (unsigned __int64)v241 >= v1221 - 7 )
                      goto LABEL_404;
                    if ( *(_QWORD *)v208 != *v241 )
                    {
                      __asm { tzcnt   rcx, rax }
                      v247 = (unsigned int)_RCX >> 3;
                    }
                    else
                    {
                      v243 = v241 + 1;
                      v242 = (_QWORD *)(v208 + 8);
LABEL_404:
                      while ( (unsigned __int64)v243 < v1221 - 7 )
                      {
                        if ( *v242 != *v243 )
                        {
                          __asm { tzcnt   rax, rax }
                          v247 = ((unsigned int)_RAX >> 3) - (_DWORD)v241 + (_DWORD)v243;
                          goto LABEL_419;
                        }
                        ++v243;
                        ++v242;
                      }
                      if ( (unsigned __int64)v243 < v1221 - 3 && *(_DWORD *)v242 == *(_DWORD *)v243 )
                      {
                        v243 = (_QWORD *)((char *)v243 + 4);
                        v242 = (_QWORD *)((char *)v242 + 4);
                      }
                      if ( (unsigned __int64)v243 < v1221 - 1 && *(_WORD *)v242 == *(_WORD *)v243 )
                      {
                        v243 = (_QWORD *)((char *)v243 + 2);
                        v242 = (_QWORD *)((char *)v242 + 2);
                      }
                      if ( (unsigned __int64)v243 < v1221 && *(_BYTE *)v242 == *(_BYTE *)v243 )
                        LODWORD(v243) = (_DWORD)v243 + 1;
                      v247 = (_DWORD)v243 - (_DWORD)v241;
                    }
LABEL_419:
                    v240 += v247;
                  }
                  v249 = 0;
                  if ( v1299 )
                  {
                    v250 = 0LL;
                    if ( (__int64)(v1252 - v192) <= -(__int64)(v206 - v1179) )
                      v251 = v1179 - v206;
                    else
                      v251 = v1252 - v192;
                    v252 = v192 - 4;
                    v253 = -v251;
                    v254 = (char *)v230 - v192;
                    while ( v253 > 3 )
                    {
                      if ( *(_DWORD *)v252 != *(_DWORD *)&v254[v252] )
                      {
                        _BitScanReverse(&v255, *(_DWORD *)v252 ^ *(_DWORD *)&v254[v252]);
                        v249 -= (31 - v255) >> 3;
                        goto LABEL_434;
                      }
                      v249 -= 4;
                      v253 -= 4;
                      v250 -= 4LL;
                      v252 -= 4LL;
                    }
                    if ( v250 > (int)v251 )
                    {
                      v256 = (_BYTE *)(v1322 + v250 + v1252 - 4);
                      do
                      {
                        if ( *v256 != v256[v1268 + 3 + v206 - v1179 - v1322 - v1252] )
                          break;
                        --v256;
                        --v249;
                      }
                      while ( (__int64)&v256[4 - v1322 - v1252] > (int)v251 );
                      v207 = v1239;
                    }
                  }
LABEL_434:
                  v198 = v1187;
                  v257 = v240 - v249;
                  v209 = v1170;
                  v222 = v1221;
                  if ( v257 > v1196 )
                  {
                    v1196 = v257;
                    v1304 = v192 + v249;
                    v1214 = v1230 - v206;
                  }
                }
                else
                {
                  v210 = (_DWORD *)(v208 + v206 - v207);
                  if ( *(_WORD *)(v1196 + v1252 - 1) == *(_WORD *)((char *)v210 + v1196 - v205 - 1) && *v210 == v198 )
                  {
                    v211 = 0;
                    if ( v205 )
                    {
                      v212 = 0LL;
                      if ( (__int64)(v1252 - v192) <= -(__int64)(v206 - v207) )
                        v213 = v207 - v206;
                      else
                        v213 = v1252 - v192;
                      v214 = (_DWORD *)(v192 - 4);
                      v215 = -v213;
                      v216 = (char *)v210 - v192;
                      while ( v215 > 3 )
                      {
                        if ( *v214 != *(_DWORD *)((char *)v214 + (_QWORD)v216) )
                        {
                          _BitScanReverse(&v217, *v214 ^ *(_DWORD *)((char *)v214 + (_QWORD)v216));
                          v211 -= (31 - v217) >> 3;
                          goto LABEL_353;
                        }
                        v211 -= 4;
                        v215 -= 4;
                        v212 -= 4LL;
                        --v214;
                      }
                      if ( v212 > (int)v213 )
                      {
                        v218 = (_BYTE *)(v212 + v1322 + v1252 - 4);
                        do
                        {
                          if ( *v218 != v218[v208 + 3 + v206 - v207 - v1322 - v1252] )
                            break;
                          --v218;
                          --v211;
                        }
                        while ( (__int64)&v218[4 - v1322 - v1252] > (int)v213 );
                        v208 = (unsigned __int64)v1329;
                      }
LABEL_353:
                      v197 = v1230;
                    }
                    v219 = (_QWORD *)(v192 + 4);
                    v220 = v210 + 1;
                    v221 = (_QWORD *)(v192 + 4);
                    v222 = v1221;
                    if ( v192 + 4 >= v1221 - 7 )
                    {
                      while ( (unsigned __int64)v221 < v1221 - 7 )
                      {
                        if ( *v221 != *v220 )
                        {
                          __asm { tzcnt   rax, rax }
                          v225 = ((unsigned int)_RAX >> 3) - (_DWORD)v219 + (_DWORD)v221;
                          goto LABEL_373;
                        }
                        ++v221;
LABEL_361:
                        ++v220;
                      }
                      if ( (unsigned __int64)v221 < v1221 - 3 && *(_DWORD *)v220 == *(_DWORD *)v221 )
                      {
                        v221 = (_QWORD *)((char *)v221 + 4);
                        v220 = (_QWORD *)((char *)v220 + 4);
                      }
                      if ( (unsigned __int64)v221 < v1221 - 1 && *(_WORD *)v220 == *(_WORD *)v221 )
                      {
                        v221 = (_QWORD *)((char *)v221 + 2);
                        v220 = (_QWORD *)((char *)v220 + 2);
                      }
                      if ( (unsigned __int64)v221 < v1221 && *(_BYTE *)v220 == *(_BYTE *)v221 )
                        LODWORD(v221) = (_DWORD)v221 + 1;
                      v225 = (_DWORD)v221 - (_DWORD)v219;
                    }
                    else
                    {
                      if ( *v219 == *v220 )
                      {
                        v221 = (_QWORD *)(v192 + 12);
                        goto LABEL_361;
                      }
                      __asm { tzcnt   rcx, rax }
                      v225 = (unsigned int)_RCX >> 3;
                    }
LABEL_373:
                    v228 = v225 - v211 + 4;
                    if ( v228 > v1196 )
                    {
                      v1196 = v228;
                      v1304 = v192 + v211;
                      v1214 = v197 - v206;
                    }
                    v198 = v1187;
                    v209 = v1170;
                  }
                  else
                  {
                    v222 = v1221;
                  }
                }
                v229 = v1179;
LABEL_439:
                if ( *((_WORD *)a1 + (unsigned __int16)v206 + 0x10000) != 1 )
                  goto LABEL_444;
                v258 = v206 - 1;
                if ( v209 )
                {
                  if ( v1170 != 2 )
                    goto LABEL_444;
                }
                else
                {
                  if ( (_BYTE)v198 != HIBYTE(v198) || (unsigned __int16)v198 != HIWORD(v198) )
                  {
                    v1170 = 1;
LABEL_444:
                    v259 = v1207;
LABEL_445:
                    v206 -= *((unsigned __int16 *)a1 + (unsigned __int16)v206 + 0x10000);
LABEL_487:
                    v205 = v1299;
                    goto LABEL_475;
                  }
                  v1170 = 2;
                  v1325 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v192 + 4), v222, v198) + 4LL;
                }
                v259 = v1207;
                if ( v258 < v1207 || v207 - v206 < 3 )
                  goto LABEL_445;
                if ( v258 >= v207 )
                {
                  v260 = 0;
                  v261 = v208 + v258 - v207;
                }
                else
                {
                  v260 = 1;
                  v261 = v1268 + v258 - v229;
                }
                if ( *(_DWORD *)v261 != v1187 )
                  goto LABEL_445;
                v262 = v1221;
                if ( v260 )
                  v262 = v1334;
                v264 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v261 + 4), v262, v1187) + 4LL;
                if ( v260 )
                {
                  if ( v264 + v261 == v263 )
                  {
                    v265 = v1187;
                    v266 = 8 * (v264 & 3);
                    if ( v266 )
                      v265 = __ROL4__(v1187, v266);
                    v264 += (unsigned int)LZ4HC_countPattern((_QWORD *)v208, v1221, v265);
                  }
                  v267 = v1268;
                }
                else
                {
                  v267 = v208;
                }
                v268 = LZ4HC_reverseCountPattern(v261, v267, v1187);
                v270 = v268;
                if ( !v260 && v261 - v268 == v208 && v1179 < v207 )
                {
                  v271 = 8LL * (-v268 & 3);
                  if ( v271 )
                    v269 = __ROL4__(v269, v271);
                  v272 = LZ4HC_reverseCountPattern(v1334, v1268, v269);
                  v270 = v272 + v273;
                }
                v259 = v1207;
                v206 = v1207;
                if ( v258 - v270 > v1207 )
                  v206 = v258 - v270;
                v274 = v264 + v258 - v206;
                if ( v274 < v1325 || v264 > v1325 )
                {
                  v205 = v1299;
                  if ( v207 - v206 - 1 < 3 )
                  {
                    v206 = v207;
                  }
                  else if ( !v1299 )
                  {
                    v192 = v1285;
                    v278 = v1325;
                    if ( v274 < v1325 )
                      v278 = v274;
                    if ( v1196 < v278 )
                    {
                      if ( v1285 + v207 - (unsigned __int64)v206 - v208 > 0xFFFF )
                        goto LABEL_476;
                      v1196 = v278;
                      v1214 = v1230 - v206;
                      v1304 = v1285;
                    }
                    v279 = *((unsigned __int16 *)a1 + (unsigned __int16)v206 + 0x10000);
                    if ( v279 > v206 )
                      goto LABEL_476;
                    v206 -= v279;
                    goto LABEL_487;
                  }
                }
                else
                {
                  v205 = v1299;
                  v275 = v264 + v258 - v1325;
                  v206 = v207;
                  if ( v207 - v275 - 1 >= 3 )
                    v206 = v275;
                }
                v192 = v1285;
LABEL_475:
                v198 = v1187;
                v197 = v1230;
                if ( v206 < v259 )
                  goto LABEL_476;
              }
            }
            v36 = v1203;
            v187 = v1252;
            v95 = v1316;
            v276 = __PAIR64__(v1196, v199);
            v277 = v1196;
          }
          if ( v277 <= v171 )
            break;
          v96 = v1359;
          v280 = (unsigned __int64)&v36[v1359];
          if ( v1304 >= v280 + 3 )
          {
            if ( v187 < v280 )
            {
              if ( (__int64)(v187 - (_QWORD)v36) >= 18 )
              {
                v96 = v187 - (_DWORD)v36;
                v1359 = v187 - (_DWORD)v36;
              }
              else
              {
                if ( v1359 > 18 )
                  v96 = 18;
                v1359 = v96;
                if ( (unsigned __int64)&v36[v96] > v187 + v171 - 4LL )
                {
                  v96 = v171 + v187 - (_DWORD)v36 - 4;
                  v1359 = v96;
                }
                v281 = (_DWORD)v36 + v96 - v187;
                if ( v281 > 0 )
                {
                  v187 += v281;
                  v1252 = v187;
                  HIDWORD(v1246) = v171 - v281;
                  v170 = v1246;
                }
              }
            }
            v282 = v36 - (char *)v1249;
            v283 = v22;
            v284 = v22;
            v285 = v22;
            v286 = v22 + 1;
            if ( a7 && (unsigned __int64)&v286[v282 + 8 + v282 / 0xFF] > v1224 )
            {
              v14 = v1249;
              goto LABEL_616;
            }
            if ( v282 < 0xF )
            {
              *v284 = 16 * v282;
            }
            else
            {
              v287 = v282 - 15;
              *v284 = -16;
              if ( v282 - 15 >= 0xFF )
              {
                v288 = v287 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v288) = -1;
                memset_thunk_772440563353939046(v286, SDWORD2(v288), v287 / 0xFF);
                v187 = v1252;
                v286 += v287 / 0xFF;
                v284 = v283;
                v285 = v283;
                v287 %= 0xFFuLL;
              }
              *v286++ = v287;
            }
            v289 = v286;
            do
            {
              *v289 = *(_QWORD *)((char *)v289 + (char *)v1249 - v286);
              ++v289;
            }
            while ( v289 < (_QWORD *)&v286[v282] );
            v290 = &v286[v282];
            v96 = v1359;
            *v290 = v1256;
            v22 = v290 + 1;
            v291 = v1359 - 4LL;
            v1275 = v22;
            if ( a7 && (unsigned __int64)&v22[v291 / 0xFF + 6] > v1224 )
            {
              v21 = v1224;
LABEL_613:
              v14 = v1249;
              goto LABEL_617;
            }
            v292 = *v285;
            if ( v291 < 0xF )
            {
              *v284 = v292 + v291;
            }
            else
            {
              v293 = v1359 - 19LL;
              *v284 = v292 + 15;
              if ( v293 >= 0x1FE )
              {
                v294 = v293 / 0x1FE;
                v293 %= 0x1FEuLL;
                do
                {
                  *v22 = -1;
                  v295 = v22 + 1;
                  *v295 = -1;
                  v22 = v295 + 1;
                  --v294;
                }
                while ( v294 );
              }
              if ( v293 >= 0xFF )
              {
                LOBYTE(v293) = v293 + 1;
                *v22++ = -1;
              }
              *v22++ = v293;
              v1275 = v22;
            }
            v36 = (char *)v187;
            v296 = (unsigned int *)&v1203[v1359];
            v95 = v1316;
            v1256 = v170;
            v170 = v276;
            v96 = HIDWORD(v1256);
            v1246 = v276;
            v171 = HIDWORD(v276);
            v1203 = (char *)v187;
            v187 = v1304;
            v1249 = v296;
            v1359 = HIDWORD(v1256);
            v1252 = v1304;
            v1309 = v276;
          }
          else
          {
            if ( v1304 >= v280 )
            {
              if ( v187 < v280 )
              {
                v297 = (_DWORD)v36 + v1359 - v187;
                v1252 = v297 + v187;
                if ( v171 - v297 >= 4 )
                {
                  HIDWORD(v1246) = v171 - v297;
                  v170 = v1246;
                }
                else
                {
                  v1252 = v1304;
                  v170 = v276;
                }
              }
              v298 = v1249;
              v283 = v22;
              v299 = v22;
              v300 = v22;
              v301 = v22 + 1;
              v302 = v36 - (char *)v1249;
              if ( !a7 || (unsigned __int64)&v301[v302 + 8 + v302 / 0xFF] <= v1224 )
              {
                if ( v302 < 0xF )
                {
                  *v299 = 16 * v302;
                }
                else
                {
                  v303 = v302 - 15;
                  *v299 = -16;
                  if ( v302 - 15 >= 0xFF )
                  {
                    v304 = v303 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v304) = -1;
                    memset_thunk_772440563353939046(v301, SDWORD2(v304), v303 / 0xFF);
                    v298 = v1249;
                    v301 += v303 / 0xFF;
                    v96 = v1359;
                    v299 = v283;
                    LOBYTE(v303) = v303 / 0xFF + v303;
                    v300 = v283;
                  }
                  *v301++ = v303;
                }
                v305 = v301;
                do
                {
                  *v305 = *(_QWORD *)((char *)v305 + (char *)v298 - v301);
                  ++v305;
                }
                while ( v305 < (_QWORD *)&v301[v302] );
                v306 = &v301[v302];
                v307 = v96 - 4LL;
                *v306 = v1256;
                v22 = v306 + 1;
                v1275 = v22;
                if ( a7 )
                {
                  v21 = v1224;
                  if ( (unsigned __int64)&v22[v307 / 0xFF + 6] > v1224 )
                    goto LABEL_613;
                }
                v308 = *v300;
                if ( v307 < 0xF )
                {
                  *v299 = v308 + v307;
                }
                else
                {
                  v309 = v96 - 19LL;
                  *v299 = v308 + 15;
                  if ( v309 >= 0x1FE )
                  {
                    v310 = v309 / 0x1FE;
                    v309 %= 0x1FEuLL;
                    do
                    {
                      *v22 = -1;
                      v311 = v22 + 1;
                      *v311 = -1;
                      v22 = v311 + 1;
                      --v310;
                    }
                    while ( v310 );
                  }
                  if ( v309 >= 0xFF )
                  {
                    LOBYTE(v309) = v309 + 1;
                    *v22++ = -1;
                  }
                  *v22++ = v309;
                  v1275 = v22;
                }
                v73 = v170;
                v1256 = v276;
                v1249 = (unsigned int *)&v1203[v96];
                v36 = (char *)v1304;
                v94 = (char *)v1252;
                v1203 = (char *)v1304;
                v1321 = v170;
                v1337 = HIDWORD(v170);
                goto LABEL_144;
              }
              v14 = v1249;
              goto LABEL_616;
            }
            v1246 = v276;
            v187 = v1304;
            v171 = HIDWORD(v276);
            v170 = v276;
            v1252 = v1304;
            v1309 = v276;
          }
        }
        if ( v187 < (unsigned __int64)&v36[v1359] )
          v1359 = v187 - (_DWORD)v36;
        v312 = v1203;
        v313 = v1249;
        v283 = v22;
        v314 = v22;
        v315 = v22;
        v316 = v1203 - (char *)v1249;
        v317 = v22 + 1;
        if ( a7 && (unsigned __int64)&v317[v316 / 0xFF + 8 + v316] > v1224 )
        {
          v96 = v1359;
          v14 = v1249;
LABEL_616:
          v21 = v1224;
          goto LABEL_617;
        }
        if ( v316 < 0xF )
        {
          *v314 = 16 * v316;
        }
        else
        {
          v318 = v316 - 15;
          *v314 = -16;
          if ( v316 - 15 >= 0xFF )
          {
            v319 = v318 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v319) = -1;
            memset_thunk_772440563353939046(v317, SDWORD2(v319), v318 / 0xFF);
            v312 = v1203;
            v317 += v318 / 0xFF;
            v187 = v1252;
            v315 = v314;
            v313 = v1249;
            LOBYTE(v318) = v318 / 0xFF + v318;
          }
          *v317++ = v318;
        }
        v320 = v317;
        do
        {
          *v320 = *(_QWORD *)((char *)v320 + (char *)v313 - v317);
          ++v320;
        }
        while ( v320 < (_QWORD *)&v317[v316] );
        v321 = &v317[v316];
        v96 = v1359;
        *v321 = v1256;
        v322 = v321 + 1;
        v323 = v1359 - 4LL;
        if ( a7 && (unsigned __int64)&v322[v323 / 0xFF + 6] > v1224 )
        {
          v14 = v1249;
          v21 = v1224;
          goto LABEL_617;
        }
        v324 = *v315;
        if ( v323 < 0xF )
        {
          *v314 = v323 + v324;
        }
        else
        {
          v325 = v1359 - 19LL;
          *v314 = v324 + 15;
          if ( v325 >= 0x1FE )
          {
            v326 = v325 / 0x1FE;
            v325 %= 0x1FEuLL;
            do
            {
              *v322 = -1;
              v327 = v322 + 1;
              *v327 = -1;
              v322 = v327 + 1;
              --v326;
            }
            while ( v326 );
          }
          if ( v325 >= 0xFF )
          {
            LOBYTE(v325) = v325 + 1;
            *v322++ = -1;
          }
          *v322++ = v325;
        }
        v14 = (unsigned int *)&v312[v1359];
        v1203 = (char *)v187;
        v1249 = v14;
        v283 = v322;
        v328 = v322;
        v329 = v322;
        v330 = v187 - (_QWORD)v14;
        v331 = v322 + 1;
        if ( a7 )
        {
          if ( (unsigned __int64)&v331[v330 + 8 + v330 / 0xFF] > v1224 )
            break;
        }
        if ( v330 < 0xF )
        {
          *v328 = 16 * v330;
        }
        else
        {
          v332 = v330 - 15;
          *v328 = -16;
          if ( v330 - 15 >= 0xFF )
          {
            v333 = v332 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v333) = -1;
            memset_thunk_772440563353939046(v331, SDWORD2(v333), v332 / 0xFF);
            v187 = v1252;
            v331 += v332 / 0xFF;
            v14 = v1249;
            v329 = v328;
            v332 %= 0xFFuLL;
          }
          *v331++ = v332;
        }
        v334 = v331;
        do
        {
          *v334 = *(_QWORD *)((char *)v334 + (char *)v14 - v331);
          ++v334;
        }
        while ( v334 < (_QWORD *)&v331[v330] );
        v335 = &v331[v330];
        *v335 = v1246;
        v22 = v335 + 1;
        v336 = SHIDWORD(v1246) - 4LL;
        v1275 = v22;
        if ( a7 && (unsigned __int64)&v22[v336 / 0xFF + 6] > v1224 )
          goto LABEL_609;
        v337 = *v329;
        if ( v336 < 0xF )
        {
          *v328 = v337 + v336;
        }
        else
        {
          v338 = SHIDWORD(v1246) - 19LL;
          *v328 = v337 + 15;
          if ( v338 >= 0x1FE )
          {
            v339 = v338 / 0x1FE;
            v338 %= 0x1FEuLL;
            do
            {
              *v22 = -1;
              v340 = v22 + 1;
              *v340 = -1;
              v22 = v340 + 1;
              --v339;
            }
            while ( v339 );
          }
          if ( v338 >= 0xFF )
          {
            LOBYTE(v338) = v338 + 1;
            *v22++ = -1;
          }
          *v22++ = v338;
          v1275 = v22;
        }
        v17 = (unsigned int *)(v187 + SHIDWORD(v1246));
        v14 = v17;
        v1249 = v17;
LABEL_102:
        v21 = v1224;
        v20 = v1316;
        v1203 = (char *)v17;
      }
      v1249 = v14;
LABEL_609:
      v21 = v1224;
      LOWORD(v1256) = v170;
      v96 = HIDWORD(v170);
LABEL_617:
      if ( a7 != 2 )
      {
        v368 = 0;
LABEL_653:
        *((_BYTE *)a1 + 262183) = 1;
        return (unsigned int)v368;
      }
      v354 = v1203;
      v22 = v283;
      v355 = v1203 - (char *)v14;
      v356 = (v1203 - (char *)v14 + 240) / 0xFFuLL + v1203 - (char *)v14 + 1;
      if ( (unsigned __int64)&v283[v356] <= v21 - 3 )
      {
        if ( v96 > 255 * (v21 - 3 - v356 - (unsigned __int64)v283) + 18 )
          v96 = 255 * (v21 - 3 - v356 - (_DWORD)v283) + 18;
        v1360 = v96;
        if ( (__int64)(v21 + v96 - v356 - (_QWORD)v283 + 2) >= 12 )
        {
          v357 = v283 + 1;
          if ( v355 < 0xF )
          {
            *v283 = 16 * v355;
          }
          else
          {
            v358 = v355 - 15;
            *v283 = -16;
            if ( v355 - 15 >= 0xFF )
            {
              v359 = v358 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v359) = -1;
              memset_thunk_772440563353939046(v283 + 1, SDWORD2(v359), v358 / 0xFF);
              v354 = v1203;
              v357 += v358 / 0xFF;
              v14 = v1249;
              v21 = v1224;
              LOBYTE(v358) = v358 / 0xFF + v358;
            }
            *v357 = v358;
            v96 = v1360;
            ++v357;
          }
          v360 = v357;
          v361 = (char *)v14 - v357;
          do
          {
            *v360 = *(_QWORD *)((char *)v360 + v361);
            ++v360;
          }
          while ( v360 < (_QWORD *)&v357[v355] );
          v362 = &v357[v355];
          v363 = v96 - 4LL;
          *v362 = v1256;
          v22 = v362 + 1;
          v364 = *v283;
          if ( v363 < 0xF )
          {
            *v283 = v363 + v364;
          }
          else
          {
            v365 = v96 - 19LL;
            *v283 = v364 + 15;
            if ( v365 >= 0x1FE )
            {
              v366 = v365 / 0x1FE;
              v365 %= 0x1FEuLL;
              do
              {
                *v22 = -1;
                v367 = v22 + 1;
                *v367 = -1;
                v22 = v367 + 1;
                --v366;
              }
              while ( v366 );
            }
            if ( v365 >= 0xFF )
            {
              LOBYTE(v365) = v365 + 1;
              *v22++ = -1;
            }
            *v22++ = v365;
          }
          v14 = (unsigned int *)&v354[v96];
          v1249 = v14;
        }
      }
LABEL_639:
      v15 = (int)a3;
      v19 = v1278;
    }
    v369 = v19 - (char *)v14;
    v1279 = v369;
    v370 = v22;
    if ( a7 == 2 )
    {
      v21 += 5LL;
    }
    else if ( !a7 )
    {
      goto LABEL_647;
    }
    if ( (unsigned __int64)&v22[(v369 + 240) / 0xFF + 1 + v369] > v21 )
    {
      if ( a7 == 1 )
      {
        v368 = 0;
        goto LABEL_653;
      }
      v369 = v21 - (_QWORD)v22 - 1 - ((v21 - (unsigned __int64)v22 - 1 + 241) >> 8);
      v1279 = v369;
    }
LABEL_647:
    v371 = v369 + (_DWORD)v14;
    if ( v369 < 0xF )
    {
      *v22 = 16 * v369;
      v375 = (_DWORD)v22 + 1;
    }
    else
    {
      *v22 = -16;
      v372 = v369 - 15;
      v373 = v22 + 1;
      if ( v369 - 15 >= 0xFF )
      {
        v374 = v372 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v374) = -1;
        memset_thunk_772440563353939046(v373, SDWORD2(v374), v372 / 0xFF);
        v14 = v1249;
        v373 += v372 / 0xFF;
        v369 = v1279;
        LOBYTE(v372) = v372 / 0xFF + v372;
      }
      v370 = v373;
      *v373 = v372;
      v375 = (_DWORD)v373 + 1;
    }
    memmove(v370 + 1, v14, v369);
    v368 = v375 + v369 - v15;
    *a4 = v371 - v1355;
    if ( v368 > 0 )
      return (unsigned int)v368;
    goto LABEL_653;
  }
  v377 = 0;
  if ( v12 || (int)*a4 <= 4096 )
  {
    if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
      return v377;
    v737 = Src;
    v738 = &a3[a5];
    *((_QWORD *)v7 + 0x8000) = v9 + (int)*a4;
    v739 = Src;
    v740 = (int)*a4;
    v741 = (char *)Src + v740;
    v742 = (unsigned int *)((char *)Src + v740 - 12);
    v1254 = 0LL;
    v1306 = 0LL;
    *a4 = 0;
    v743 = v738 - 5;
    if ( a7 != 2 )
      v743 = v738;
    v1205 = Src;
    v1223 = Src;
    v744 = v10;
    v1248 = v743;
    v1283 = v741;
    v1318 = v742;
    v1251 = (unsigned __int64)(v741 - 5);
    v1258 = v10;
    if ( (int)v740 >= 13 )
    {
      while ( 2 )
      {
        if ( v739 > v742 )
          goto LABEL_2093;
        v745 = *((_QWORD *)v7 + 32773);
        v746 = (_QWORD *)*((_QWORD *)v7 + 32769);
        v747 = 3;
        v748 = v7[65542];
        v749 = v7[65543];
        v750 = v748 + (_DWORD)v739 - (_DWORD)v746;
        v1342 = v745;
        v751 = v749;
        v1183 = 3;
        v1190 = v750;
        v1234 = v749;
        if ( (int)v749 + 0x10000 <= v750 )
          v751 = v750 - 0xFFFF;
        v752 = 0;
        v1313 = 0LL;
        v1295 = *v739;
        v1218 = v751;
        v753 = a1[65544];
        v1272 = *((_QWORD *)a1 + 32770);
        v1364 = 0;
        v1260 = v748 + v1272 - v749;
        v754 = 256;
        v1174 = 256;
        v1199 = 0;
        if ( v753 < v750 )
        {
          v755 = (_DWORD *)((char *)v746 + v753 - v748);
          do
          {
            v756 = (unsigned __int64)(unsigned int)(-1640531535 * *v755) >> 17;
            v757 = v753 - a1[v756];
            if ( v757 > 0xFFFF )
              LOWORD(v757) = -1;
            v755 = (_DWORD *)((char *)v755 + 1);
            *((_WORD *)a1 + (unsigned __int16)v753 + 0x10000) = v757;
            a1[v756] = v753++;
          }
          while ( v753 < v750 );
          v752 = 0;
          v754 = 256;
        }
        v758 = v1205;
        a1[65544] = v750;
        v759 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *v1205) >> 17];
        while ( 1 )
        {
          v760 = v752;
          if ( v759 < v751 || v754 <= 0 )
            break;
          v1174 = v754 - 1;
          if ( v759 < (unsigned int)v748 )
          {
            v773 = (_DWORD *)(v1272 + v759 - (unsigned int)v749);
            if ( v759 <= (int)v748 - 4 && *v773 == v1295 )
            {
              v774 = (_QWORD *)((char *)v758 + (unsigned int)v748 - v759);
              if ( (unsigned __int64)v774 > v1251 )
                v774 = (_QWORD *)v1251;
              v775 = v758 + 1;
              v776 = v773 + 1;
              v777 = v775;
              if ( v775 >= (_QWORD *)((char *)v774 - 7) )
              {
                while ( v777 < (_QWORD *)((char *)v774 - 7) )
                {
                  if ( *v776 != *v777 )
                  {
                    __asm { tzcnt   rax, rax }
                    v780 = ((unsigned int)_RAX >> 3) - (_DWORD)v775 + (_DWORD)v777;
                    goto LABEL_1418;
                  }
                  ++v777;
LABEL_1406:
                  ++v776;
                }
                if ( v777 < (_QWORD *)((char *)v774 - 3) && *(_DWORD *)v776 == *(_DWORD *)v777 )
                {
                  v777 = (_QWORD *)((char *)v777 + 4);
                  v776 = (_QWORD *)((char *)v776 + 4);
                }
                if ( v777 < (_QWORD *)((char *)v774 - 1) && *(_WORD *)v776 == *(_WORD *)v777 )
                {
                  v777 = (_QWORD *)((char *)v777 + 2);
                  v776 = (_QWORD *)((char *)v776 + 2);
                }
                if ( v777 < v774 && *(_BYTE *)v776 == *(_BYTE *)v777 )
                  LODWORD(v777) = (_DWORD)v777 + 1;
                v780 = (_DWORD)v777 - (_DWORD)v775;
              }
              else
              {
                if ( *v776 == *v775 )
                {
                  v777 = v775 + 1;
                  goto LABEL_1406;
                }
                __asm { tzcnt   rcx, rax }
                v780 = (unsigned int)_RCX >> 3;
              }
LABEL_1418:
              v783 = v780 + 4;
              v784 = (_QWORD *)((char *)v1205 + (int)(v780 + 4));
              if ( v784 == v774 && (unsigned __int64)v774 < v1251 )
              {
                v785 = v746;
                v786 = (_QWORD *)((char *)v1205 + v783);
                if ( (unsigned __int64)v784 >= v1251 - 7 )
                  goto LABEL_1423;
                if ( *v746 != *v784 )
                {
                  __asm { tzcnt   rcx, rax }
                  v790 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v786 = v784 + 1;
                  v785 = v746 + 1;
LABEL_1423:
                  while ( (unsigned __int64)v786 < v1251 - 7 )
                  {
                    if ( *v785 != *v786 )
                    {
                      __asm { tzcnt   rax, rax }
                      v790 = ((unsigned int)_RAX >> 3) - (_DWORD)v784 + (_DWORD)v786;
                      goto LABEL_1438;
                    }
                    ++v786;
                    ++v785;
                  }
                  if ( (unsigned __int64)v786 < v1251 - 3 && *(_DWORD *)v785 == *(_DWORD *)v786 )
                  {
                    v786 = (_QWORD *)((char *)v786 + 4);
                    v785 = (_QWORD *)((char *)v785 + 4);
                  }
                  if ( (unsigned __int64)v786 < v1251 - 1 && *(_WORD *)v785 == *(_WORD *)v786 )
                  {
                    v786 = (_QWORD *)((char *)v786 + 2);
                    v785 = (_QWORD *)((char *)v785 + 2);
                  }
                  if ( (unsigned __int64)v786 < v1251 && *(_BYTE *)v785 == *(_BYTE *)v786 )
                    LODWORD(v786) = (_DWORD)v786 + 1;
                  v790 = (_DWORD)v786 - (_DWORD)v784;
                }
LABEL_1438:
                v783 += v790;
              }
              v752 = v1364;
              v758 = v1205;
              if ( v783 > v1183 )
              {
                v1183 = v783;
                v1199 = v750 - v759;
              }
            }
          }
          else
          {
            v761 = (_DWORD *)((char *)v746 + v759 - (unsigned int)v748);
            if ( *(_WORD *)((char *)v758 + v747 - 1) == *(_WORD *)((char *)v761 + v747 - 1) && *v761 == v1295 )
            {
              v762 = v758 + 1;
              v763 = v761 + 1;
              v764 = v758 + 1;
              if ( (unsigned __int64)(v758 + 1) >= v1251 - 7 )
              {
                while ( (unsigned __int64)v764 < v1251 - 7 )
                {
                  if ( *v763 != *v764 )
                  {
                    __asm { tzcnt   rax, rax }
                    v767 = ((unsigned int)_RAX >> 3) - (_DWORD)v762 + (_DWORD)v764;
                    goto LABEL_1389;
                  }
                  ++v764;
LABEL_1377:
                  ++v763;
                }
                if ( (unsigned __int64)v764 < v1251 - 3 && *(_DWORD *)v763 == *(_DWORD *)v764 )
                {
                  v764 = (_QWORD *)((char *)v764 + 4);
                  v763 = (_QWORD *)((char *)v763 + 4);
                }
                if ( (unsigned __int64)v764 < v1251 - 1 && *(_WORD *)v763 == *(_WORD *)v764 )
                {
                  v764 = (_QWORD *)((char *)v764 + 2);
                  v763 = (_QWORD *)((char *)v763 + 2);
                }
                if ( (unsigned __int64)v764 < v1251 && *(_BYTE *)v763 == *(_BYTE *)v764 )
                  LODWORD(v764) = (_DWORD)v764 + 1;
                v767 = (_DWORD)v764 - (_DWORD)v762;
              }
              else
              {
                if ( *v763 == *v762 )
                {
                  v764 = v758 + 3;
                  goto LABEL_1377;
                }
                __asm { tzcnt   rcx, rax }
                v767 = (unsigned int)_RCX >> 3;
              }
LABEL_1389:
              v752 = v1364;
              v770 = v767 + 4;
              v758 = v1205;
              if ( v770 > v747 )
              {
                v1183 = v770;
                v1199 = v750 - v759;
              }
            }
          }
          if ( *((_WORD *)a1 + (unsigned __int16)v759 + 0x10000) != 1 )
            goto LABEL_1478;
          v771 = v759 - 1;
          if ( v752 )
          {
            v1364 = v760;
            v752 = v760;
            if ( v760 != 2 )
              goto LABEL_1477;
          }
          else
          {
            if ( (_BYTE)v1295 != HIBYTE(v1295) || (unsigned __int16)v1295 != HIWORD(v1295) )
            {
              v752 = 1;
              v1364 = 1;
LABEL_1477:
              v750 = v1190;
LABEL_1478:
              v759 -= *((unsigned __int16 *)a1 + (unsigned __int16)v759 + 0x10000);
LABEL_1479:
              v747 = v1183;
              v758 = v1205;
              goto LABEL_1480;
            }
            v1364 = 2;
            v772 = LZ4HC_countPattern(v758 + 1, v1251, v1295);
            v752 = 2;
            v1313 = v772 + 4LL;
          }
          if ( v771 < v751 || (unsigned int)v748 - v771 - 1 < 3 )
            goto LABEL_1477;
          if ( v771 >= (unsigned int)v748 )
          {
            v792 = 0;
            v793 = (unsigned __int64)v746 + v771 - (unsigned int)v748;
          }
          else
          {
            v792 = 1;
            v793 = v1272 + v771 - (unsigned int)v749;
          }
          if ( *(_DWORD *)v793 != v1295 )
          {
            v751 = v1218;
            goto LABEL_1477;
          }
          v794 = v1251;
          if ( v792 )
            v794 = v1260;
          v795 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v793 + 4), v794, v1295) + 4LL;
          if ( v792 )
          {
            if ( v795 + v793 == v796 )
            {
              v797 = LZ4HC_rotatePattern(v795, v1295);
              v795 += (unsigned int)LZ4HC_countPattern(v746, v1251, v797);
            }
            v798 = v1272;
          }
          else
          {
            v798 = (unsigned __int64)v746;
          }
          v799 = LZ4HC_reverseCountPattern(v793, v798, v1295);
          v800 = v799;
          if ( !v792 && (_QWORD *)(v793 - v799) == v746 && v1234 < (unsigned int)v748 )
          {
            v801 = LZ4HC_rotatePattern(-v799, v1295);
            v802 = LZ4HC_reverseCountPattern(v1260, v1272, v801);
            v800 = v802 + v803;
          }
          v751 = v1218;
          v804 = v771 - v800;
          v805 = v1218;
          if ( v804 > v1218 )
            v805 = v804;
          v806 = v795 + v771 - v805;
          if ( v806 < v1313 || v795 > v1313 )
          {
            v750 = v1190;
            if ( (unsigned int)v748 - v805 - 1 < 3 )
            {
              LODWORD(v749) = v1234;
              v759 = v748;
              v752 = v1364;
              goto LABEL_1479;
            }
            v758 = v1205;
            v808 = v1313;
            v747 = v1183;
            if ( v806 < v1313 )
              v808 = v806;
            if ( v1183 < v808 )
            {
              if ( (unsigned __int64)(v748 + (char *)v1205 - v805 - (char *)v746) > 0xFFFF )
                break;
              v747 = v808;
              v1183 = v808;
              v1199 = v1190 - v805;
            }
            v809 = *((unsigned __int16 *)a1 + (unsigned __int16)v805 + 0x10000);
            if ( v809 > v805 )
              break;
            LODWORD(v749) = v1234;
            v759 = v805 - v809;
            v752 = v1364;
LABEL_1480:
            v754 = v1174;
          }
          else
          {
            v752 = v1364;
            v747 = v1183;
            v807 = v771 + v795 - v1313;
            v750 = v1190;
            v754 = v1174;
            v758 = v1205;
            v759 = v748;
            if ( (unsigned int)v748 - v807 - 1 >= 3 )
              v759 = v807;
            LODWORD(v749) = v1234;
          }
        }
        v810 = v1174;
        v744 = v1258;
        if ( v1174 > 0 && v750 - v751 < 0xFFFF )
        {
          v811 = v1205;
          v812 = *(_QWORD *)(v1342 + 262152);
          v813 = *(unsigned int *)(v1342 + 262168);
          v814 = v813 + *(_QWORD *)(v1342 + 0x40000) - v812;
          v815 = *(_DWORD *)(v1342 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v1205) >> 17));
          v816 = v1218 + v815 - v814;
          v817 = v1190 - v816;
          if ( v1190 - v816 <= 0xFFFF )
          {
            do
            {
              v1175 = v810 - 1;
              if ( !v810 )
                break;
              v818 = (_DWORD *)(v812 + v815 - v813);
              if ( *v818 == v1295 )
              {
                v819 = (unsigned __int64)v811 + v814 - v815;
                if ( v819 > v1251 )
                  v819 = v1251;
                v820 = v811 + 1;
                v821 = v818 + 1;
                v822 = v820;
                if ( (unsigned __int64)v820 >= v819 - 7 )
                {
                  while ( (unsigned __int64)v822 < v819 - 7 )
                  {
                    if ( *v822 != *v821 )
                    {
                      __asm { tzcnt   rax, rax }
                      v825 = ((unsigned int)_RAX >> 3) - (_DWORD)v820 + (_DWORD)v822;
                      goto LABEL_1507;
                    }
                    ++v822;
LABEL_1495:
                    ++v821;
                  }
                  if ( (unsigned __int64)v822 < v819 - 3 && *(_DWORD *)v821 == *(_DWORD *)v822 )
                  {
                    v822 = (_QWORD *)((char *)v822 + 4);
                    v821 = (_QWORD *)((char *)v821 + 4);
                  }
                  if ( (unsigned __int64)v822 < v819 - 1 && *(_WORD *)v821 == *(_WORD *)v822 )
                  {
                    v822 = (_QWORD *)((char *)v822 + 2);
                    v821 = (_QWORD *)((char *)v821 + 2);
                  }
                  if ( (unsigned __int64)v822 < v819 && *(_BYTE *)v821 == *(_BYTE *)v822 )
                    LODWORD(v822) = (_DWORD)v822 + 1;
                  v825 = (_DWORD)v822 - (_DWORD)v820;
                }
                else
                {
                  if ( *v820 == *v821 )
                  {
                    v822 = v820 + 1;
                    goto LABEL_1495;
                  }
                  __asm { tzcnt   rcx, rax }
                  v825 = (unsigned int)_RCX >> 3;
                }
LABEL_1507:
                v811 = v1205;
                v828 = v825 + 4;
                if ( v828 > v1183 )
                {
                  v1183 = v828;
                  v1199 = v817;
                }
              }
              v810 = v1175;
              v829 = *(unsigned __int16 *)(v1342 + 2LL * (unsigned __int16)v815 + 0x20000);
              v816 -= v829;
              v815 -= v829;
              v817 = v1190 - v816;
            }
            while ( v1190 - v816 <= 0xFFFF );
            v744 = v1258;
          }
        }
        v830 = (char *)v1205;
        v831 = __PAIR64__(v1183, v1199);
        v1296 = __PAIR64__(v1183, v1199);
        v1277 = __PAIR64__(v1183, v1199);
        if ( v1183 < 4 )
        {
          v737 = v1223;
          v739 = (_DWORD *)((char *)v1205 + 1);
          goto LABEL_1513;
        }
        v832 = (char *)v1205;
        v1333 = v1183;
        v1335 = (char *)v1205;
LABEL_1515:
        v833 = v1318;
        while ( 2 )
        {
          v834 = HIDWORD(v1277);
          v1365 = HIDWORD(v1277);
          v835 = &v830[SHIDWORD(v1277)];
          if ( v835 > (char *)v833 )
          {
            v1227 = 0LL;
            v951 = 0;
            v950 = 0LL;
          }
          else
          {
            v836 = (unsigned int *)(v835 - 2);
            v1184 = HIDWORD(v1277);
            v837 = v835 - 2;
            v1254 = (unsigned __int64)(v835 - 2);
            v1347 = v835 - 2;
            v1273 = (unsigned __int64)(v835 - 2);
            v838 = a1[65543];
            v839 = (_QWORD *)*((_QWORD *)a1 + 32769);
            v840 = v838;
            v841 = a1[65542];
            v1343 = *((_QWORD *)a1 + 32773);
            v1319 = v839;
            v842 = (_DWORD)v835 - 2 + a1[65542] - (_DWORD)v839;
            v1219 = a1[65543];
            v1210 = v842;
            if ( (int)v838 + 0x10000 <= v842 )
              v840 = v842 - 0xFFFF;
            v843 = *((_QWORD *)a1 + 32770);
            v1200 = 256;
            v1261 = v843 + v841 - v838;
            v844 = (_DWORD)v836 - (_DWORD)v1205;
            v1191 = *v836;
            v845 = 0;
            v1235 = 0;
            v1314 = 0LL;
            v1243 = 0;
            v846 = a1[65544];
            v1176 = v840;
            v1226 = v843;
            if ( v846 < v842 )
            {
              v847 = (_DWORD *)((char *)v839 + v846 - v841);
              do
              {
                v848 = (unsigned __int64)(unsigned int)(-1640531535 * *v847) >> 17;
                v849 = v846 - a1[v848];
                if ( v849 > 0xFFFF )
                  LOWORD(v849) = -1;
                v847 = (_DWORD *)((char *)v847 + 1);
                *((_WORD *)a1 + (unsigned __int16)v846 + 0x10000) = v849;
                a1[v848] = v846++;
              }
              while ( v846 < v842 );
              v831 = v1296;
              LODWORD(v838) = v1219;
              v843 = v1226;
            }
            v850 = v844;
            v1302 = v844;
            a1[65544] = v842;
            v851 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v837) >> 17];
            if ( v851 >= v840 )
            {
              v852 = v1319;
              while ( 1 )
              {
                if ( v1200 <= 0 )
                {
LABEL_1641:
                  v831 = v1296;
                  v744 = v1258;
                  v837 = (char *)v1273;
                  goto LABEL_1642;
                }
                --v1200;
                if ( v851 >= (unsigned int)v841 )
                  break;
                v856 = v1191;
                v874 = (_DWORD *)(v843 + v851 - (unsigned int)v838);
                if ( v851 > (int)v841 - 4 || *v874 != v1191 )
                  goto LABEL_1632;
                v875 = (_QWORD *)(v1273 + 4);
                v876 = v874 + 1;
                v877 = (_QWORD *)(v1273 + (unsigned int)v841 - v851);
                v878 = (_QWORD *)(v1273 + 4);
                if ( (unsigned __int64)v877 > v1251 )
                  v877 = (_QWORD *)v1251;
                if ( v875 >= (_QWORD *)((char *)v877 - 7) )
                {
                  while ( v878 < (_QWORD *)((char *)v877 - 7) )
                  {
                    if ( *v876 != *v878 )
                    {
                      __asm { tzcnt   rax, rax }
                      v881 = ((unsigned int)_RAX >> 3) - (_DWORD)v875 + (_DWORD)v878;
                      goto LABEL_1591;
                    }
                    ++v878;
LABEL_1579:
                    ++v876;
                  }
                  if ( v878 < (_QWORD *)((char *)v877 - 3) && *(_DWORD *)v876 == *(_DWORD *)v878 )
                  {
                    v878 = (_QWORD *)((char *)v878 + 4);
                    v876 = (_QWORD *)((char *)v876 + 4);
                  }
                  if ( v878 < (_QWORD *)((char *)v877 - 1) && *(_WORD *)v876 == *(_WORD *)v878 )
                  {
                    v878 = (_QWORD *)((char *)v878 + 2);
                    v876 = (_QWORD *)((char *)v876 + 2);
                  }
                  if ( v878 < v877 && *(_BYTE *)v876 == *(_BYTE *)v878 )
                    LODWORD(v878) = (_DWORD)v878 + 1;
                  v881 = (_DWORD)v878 - (_DWORD)v875;
                }
                else
                {
                  if ( *v876 == *v875 )
                  {
                    v878 = (_QWORD *)(v1273 + 12);
                    goto LABEL_1579;
                  }
                  __asm { tzcnt   rcx, rax }
                  v881 = (unsigned int)_RCX >> 3;
                }
LABEL_1591:
                v884 = v881 + 4;
                v885 = (_QWORD *)(v1273 + (int)(v881 + 4));
                if ( v885 == v877 && (unsigned __int64)v877 < v1251 )
                {
                  v886 = v852;
                  v887 = (_QWORD *)(v1273 + v884);
                  if ( (unsigned __int64)v885 >= v1251 - 7 )
                    goto LABEL_1596;
                  if ( *v852 != *v885 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v891 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v887 = v885 + 1;
                    v886 = v852 + 1;
LABEL_1596:
                    while ( (unsigned __int64)v887 < v1251 - 7 )
                    {
                      if ( *v886 != *v887 )
                      {
                        __asm { tzcnt   rax, rax }
                        v891 = ((unsigned int)_RAX >> 3) - (_DWORD)v885 + (_DWORD)v887;
                        goto LABEL_1611;
                      }
                      ++v887;
                      ++v886;
                    }
                    if ( (unsigned __int64)v887 < v1251 - 3 && *(_DWORD *)v886 == *(_DWORD *)v887 )
                    {
                      v887 = (_QWORD *)((char *)v887 + 4);
                      v886 = (_QWORD *)((char *)v886 + 4);
                    }
                    if ( (unsigned __int64)v887 < v1251 - 1 && *(_WORD *)v886 == *(_WORD *)v887 )
                    {
                      v887 = (_QWORD *)((char *)v887 + 2);
                      v886 = (_QWORD *)((char *)v886 + 2);
                    }
                    if ( (unsigned __int64)v887 < v1251 && *(_BYTE *)v886 == *(_BYTE *)v887 )
                      LODWORD(v887) = (_DWORD)v887 + 1;
                    v891 = (_DWORD)v887 - (_DWORD)v885;
                  }
LABEL_1611:
                  v884 += v891;
                }
                v893 = 0;
                if ( v1302 )
                {
                  v894 = 0LL;
                  if ( (__int64)((__int64)v1205 - v1273) <= (__int64)(v1226 - (_QWORD)v874) )
                    v895 = v1226 - (_DWORD)v874;
                  else
                    v895 = (_DWORD)v1205 - v1273;
                  v896 = (_DWORD *)(v1273 - 4);
                  v897 = -v895;
                  v898 = (char *)v874 - v1273;
                  while ( v897 > 3 )
                  {
                    if ( *v896 != *(_DWORD *)((char *)v896 + (_QWORD)v898) )
                    {
                      _BitScanReverse(&v899, *v896 ^ *(_DWORD *)((char *)v896 + (_QWORD)v898));
                      v893 -= (31 - v899) >> 3;
                      goto LABEL_1621;
                    }
                    v893 -= 4;
                    v897 -= 4;
                    v894 -= 4LL;
                    --v896;
                  }
                  if ( (__int64)v894 <= v895 )
                  {
                    v900 = v1226;
                  }
                  else
                  {
                    v902 = (char *)&v1205[v894 / 4 - 1] + SHIDWORD(v1277) + 1;
                    v900 = v1226;
                    do
                    {
                      if ( *v902 != v902[v851
                                       - (unsigned int)v838
                                       - (__int64)SHIDWORD(v1277)
                                       - (_QWORD)v1205
                                       + 2
                                       + v1226] )
                        break;
                      --v902;
                      --v893;
                    }
                    while ( (__int64)&v902[3LL - SHIDWORD(v1277) - (_QWORD)v1205] > v895 );
                    v852 = v1319;
                  }
                }
                else
                {
LABEL_1621:
                  v900 = v1226;
                }
                v856 = v1191;
                v901 = v884 - v893;
                if ( v901 > v1184 )
                {
                  v1184 = v901;
                  v1243 = v1210 - v851;
                  v1254 = v1273 + v893;
                }
                v840 = v1176;
LABEL_1633:
                if ( *((_WORD *)a1 + (unsigned __int16)v851 + 0x10000) != 1 )
                  goto LABEL_1638;
                v903 = v851 - 1;
                if ( v1235 )
                {
                  v1235 = v845;
                  if ( v845 != 2 )
                    goto LABEL_1638;
                }
                else
                {
                  if ( (_BYTE)v856 != HIBYTE(v856) || (unsigned __int16)v856 != HIWORD(v856) )
                  {
                    v1235 = 1;
LABEL_1638:
                    v840 = v1176;
                    v851 -= *((unsigned __int16 *)a1 + (unsigned __int16)v851 + 0x10000);
LABEL_1639:
                    v850 = v1302;
                    goto LABEL_1640;
                  }
                  v1235 = 2;
                  v1314 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1273 + 4), v1251, v856) + 4LL;
                }
                if ( v903 < v840 || (unsigned int)v841 - v851 < 3 )
                  goto LABEL_1638;
                if ( v903 >= (unsigned int)v841 )
                {
                  v918 = 0;
                  v919 = (unsigned __int64)v852 + v903 - (unsigned int)v841;
                }
                else
                {
                  v918 = 1;
                  v919 = v900 + v903 - v1219;
                }
                if ( *(_DWORD *)v919 != v1191 )
                  goto LABEL_1638;
                v920 = v1251;
                if ( v918 )
                  v920 = v1261;
                v921 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v919 + 4), v920, v1191) + 4LL;
                if ( v918 )
                {
                  if ( v921 + v919 == v920 )
                  {
                    v923 = LZ4HC_rotatePattern(v921, v1191);
                    v921 += (unsigned int)LZ4HC_countPattern(v924, v1251, v923);
                  }
                  v925 = v1226;
                }
                else
                {
                  v925 = v922;
                }
                v926 = LZ4HC_reverseCountPattern(v919, v925, v1191);
                v928 = v926;
                if ( !v918 && (_QWORD *)(v919 - v926) == v852 && v1219 < (unsigned int)v841 )
                {
                  v929 = LZ4HC_rotatePattern(-v926, v927);
                  v928 += LZ4HC_reverseCountPattern(v1261, v1226, v929);
                }
                v840 = v1176;
                v930 = v903 - v928;
                v851 = v1176;
                if ( v930 > v1176 )
                  v851 = v930;
                v931 = v921 + v903 - v851;
                if ( v931 >= v1314 && v921 <= v1314 )
                {
                  v932 = v903 + v921 - v1314;
                  v851 = v841;
                  if ( (unsigned int)v841 - v932 - 1 >= 3 )
                    v851 = v932;
                  goto LABEL_1639;
                }
                v850 = v1302;
                if ( (unsigned int)v841 - v851 - 1 < 3 )
                {
                  v851 = v841;
                }
                else if ( !v1302 )
                {
                  v933 = v1314;
                  if ( v931 < v1314 )
                    v933 = v921 + v903 - v851;
                  if ( v1184 < v933 )
                  {
                    if ( v1273 + v841 - v851 - (_QWORD)v852 > 0xFFFF )
                      goto LABEL_1641;
                    v1184 = v933;
                    v1243 = v1210 - v851;
                    v1254 = v1273;
                  }
                  v934 = *((unsigned __int16 *)a1 + (unsigned __int16)v851 + 0x10000);
                  if ( v934 > v851 )
                    goto LABEL_1641;
                  v851 -= v934;
                }
LABEL_1640:
                LODWORD(v838) = v1219;
                v843 = v1226;
                v845 = v1235;
                if ( v851 < v840 )
                  goto LABEL_1641;
              }
              v853 = v1184;
              v854 = (_DWORD *)((char *)v852 + v851 - (unsigned int)v841);
              v855 = v1184 - v850;
              v856 = v1191;
              if ( *(_WORD *)((char *)v1205 + v1184 - 1) == *(_WORD *)((char *)v854 + v855 - 1) && *v854 == v1191 )
              {
                v857 = 0;
                if ( v1302 )
                {
                  v858 = 0LL;
                  if ( (__int64)((__int64)v1205 - v1273) <= -(__int64)(v851 - (unsigned int)v841) )
                    v859 = v841 - v851;
                  else
                    v859 = (_DWORD)v1205 - v1273;
                  v860 = (_DWORD *)(v1273 - 4);
                  v861 = -v859;
                  v862 = (char *)v854 - v1273;
                  while ( v861 > 3 )
                  {
                    if ( *v860 != *(_DWORD *)((char *)v860 + (_QWORD)v862) )
                    {
                      _BitScanReverse(&v863, *v860 ^ *(_DWORD *)((char *)v860 + (_QWORD)v862));
                      v857 -= (31 - v863) >> 3;
                      goto LABEL_1545;
                    }
                    v857 -= 4;
                    v861 -= 4;
                    v858 -= 4LL;
                    --v860;
                  }
                  if ( (__int64)v858 > v859 )
                  {
                    v864 = (char *)&v1205[v858 / 4 - 1] + SHIDWORD(v1277) + 1;
                    do
                    {
                      if ( *v864 != v864[(_QWORD)v852
                                       + v851
                                       - (unsigned int)v841
                                       - (__int64)SHIDWORD(v1277)
                                       - (_QWORD)v1205
                                       + 2] )
                        break;
                      --v864;
                      --v857;
                    }
                    while ( (__int64)&v864[3LL - SHIDWORD(v1277) - (_QWORD)v1205] > v859 );
                    v852 = v1319;
                  }
LABEL_1545:
                  v853 = v1184;
                }
                v865 = (_QWORD *)(v1273 + 4);
                v866 = v854 + 1;
                v867 = (_QWORD *)(v1273 + 4);
                if ( v1273 + 4 >= v1251 - 7 )
                {
                  while ( (unsigned __int64)v867 < v1251 - 7 )
                  {
                    if ( *v866 != *v867 )
                    {
                      __asm { tzcnt   rax, rax }
                      v870 = ((unsigned int)_RAX >> 3) - (_DWORD)v865 + (_DWORD)v867;
                      goto LABEL_1565;
                    }
                    ++v867;
LABEL_1553:
                    ++v866;
                  }
                  if ( (unsigned __int64)v867 < v1251 - 3 && *(_DWORD *)v866 == *(_DWORD *)v867 )
                  {
                    v867 = (_QWORD *)((char *)v867 + 4);
                    v866 = (_QWORD *)((char *)v866 + 4);
                  }
                  if ( (unsigned __int64)v867 < v1251 - 1 && *(_WORD *)v866 == *(_WORD *)v867 )
                  {
                    v867 = (_QWORD *)((char *)v867 + 2);
                    v866 = (_QWORD *)((char *)v866 + 2);
                  }
                  if ( (unsigned __int64)v867 < v1251 && *(_BYTE *)v866 == *(_BYTE *)v867 )
                    LODWORD(v867) = (_DWORD)v867 + 1;
                  v870 = (_DWORD)v867 - (_DWORD)v865;
                }
                else
                {
                  if ( *v866 == *v865 )
                  {
                    v867 = (_QWORD *)(v1273 + 12);
                    goto LABEL_1553;
                  }
                  __asm { tzcnt   rcx, rax }
                  v870 = (unsigned int)_RCX >> 3;
                }
LABEL_1565:
                v840 = v1176;
                v856 = v1191;
                v873 = v870 - v857 + 4;
                if ( v873 > v853 )
                {
                  v1184 = v873;
                  v1243 = v1210 - v851;
                  v1254 = v1273 + v857;
                }
              }
              else
              {
                v840 = v1176;
              }
LABEL_1632:
              v900 = v1226;
              goto LABEL_1633;
            }
LABEL_1642:
            v904 = v1200;
            if ( v1200 > 0 && v1210 - v840 < 0xFFFF )
            {
              v905 = *(unsigned int *)(v1343 + 262168);
              v906 = *(_QWORD *)(v1343 + 262152);
              v1262 = v905 + *(_QWORD *)(v1343 + 0x40000) - v906;
              v907 = *(_DWORD *)(v1343 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v837) >> 17));
              v908 = v840 + v907 - v1262;
              v909 = v1210 - v908;
              if ( v1210 - v908 <= 0xFFFF )
              {
                v910 = v905 + *(_QWORD *)(v1343 + 0x40000) - v906;
                do
                {
                  v911 = v904--;
                  v1201 = v904;
                  if ( !v911 )
                    break;
                  v912 = (_DWORD *)(v907 + v906 - v905);
                  if ( *v912 == v1191 )
                  {
                    v913 = v837 + 4;
                    v914 = v912 + 1;
                    v915 = (unsigned __int64)&v1347[v910 - v907];
                    v916 = v837 + 4;
                    if ( v915 > v1251 )
                      v915 = v1251;
                    if ( (unsigned __int64)v913 >= v915 - 7 )
                    {
                      while ( (unsigned __int64)v916 < v915 - 7 )
                      {
                        if ( *v914 != *v916 )
                        {
                          __asm { tzcnt   rax, rax }
                          v936 = ((unsigned int)_RAX >> 3) - (_DWORD)v913 + (_DWORD)v916;
                          goto LABEL_1704;
                        }
                        ++v916;
LABEL_1692:
                        ++v914;
                      }
                      if ( (unsigned __int64)v916 < v915 - 3 && *(_DWORD *)v914 == *(_DWORD *)v916 )
                      {
                        v916 = (_QWORD *)((char *)v916 + 4);
                        v914 = (_QWORD *)((char *)v914 + 4);
                      }
                      if ( (unsigned __int64)v916 < v915 - 1 && *(_WORD *)v914 == *(_WORD *)v916 )
                      {
                        v916 = (_QWORD *)((char *)v916 + 2);
                        v914 = (_QWORD *)((char *)v914 + 2);
                      }
                      if ( (unsigned __int64)v916 < v915 && *(_BYTE *)v914 == *(_BYTE *)v916 )
                        LODWORD(v916) = (_DWORD)v916 + 1;
                      v936 = (_DWORD)v916 - (_DWORD)v913;
                    }
                    else
                    {
                      if ( *v914 == *v913 )
                      {
                        v916 = v837 + 12;
                        goto LABEL_1692;
                      }
                      __asm { tzcnt   rcx, rax }
                      v936 = (unsigned int)_RCX >> 3;
                    }
LABEL_1704:
                    v939 = v936 + 4;
                    v940 = 0;
                    if ( v1302 )
                    {
                      v941 = 0LL;
                      if ( (__int64)((__int64)v1205 - v1273) <= v906 - (__int64)v912 )
                        v942 = v906 - (_DWORD)v912;
                      else
                        v942 = (_DWORD)v1205 - v1273;
                      v943 = (_DWORD *)(v1273 - 4);
                      v944 = -v942;
                      v945 = (char *)v912 - v1273;
                      while ( v944 > 3 )
                      {
                        if ( *v943 != *(_DWORD *)((char *)v943 + (_QWORD)v945) )
                        {
                          _BitScanReverse(&v946, *v943 ^ *(_DWORD *)((char *)v943 + (_QWORD)v945));
                          v940 -= (31 - v946) >> 3;
                          goto LABEL_1718;
                        }
                        v940 -= 4;
                        v944 -= 4;
                        v941 -= 4LL;
                        --v943;
                      }
                      if ( v941 > v942 )
                      {
                        v947 = (_BYTE *)(v941 + v906 + v907 - (unsigned __int64)*(unsigned int *)(v1343 + 262168) - 1);
                        do
                        {
                          if ( *((_BYTE *)v1205 + SHIDWORD(v1277) + v941 - 3) != *v947 )
                            break;
                          --v940;
                          --v941;
                          --v947;
                        }
                        while ( v941 > v942 );
                        v910 = v1262;
                      }
                    }
LABEL_1718:
                    v905 = *(unsigned int *)(v1343 + 262168);
                    v948 = v939 - v940;
                    v904 = v1201;
                    if ( v948 <= v1184 )
                    {
                      v837 = (char *)v1273;
                    }
                    else
                    {
                      v1184 = v948;
                      v837 = (char *)v1273;
                      v1243 = v909;
                      v1254 = v1273 + v940;
                    }
                  }
                  v949 = *(unsigned __int16 *)(v1343 + 2LL * (unsigned __int16)v907 + 0x20000);
                  v908 -= v949;
                  v907 -= v949;
                  v909 = v1210 - v908;
                }
                while ( v1210 - v908 <= 0xFFFF );
                v831 = v1296;
                v744 = v1258;
              }
            }
            v832 = v1335;
            v834 = HIDWORD(v1277);
            v830 = (char *)v1205;
            v833 = v1318;
            v950 = __PAIR64__(v1184, v1243);
            v1227 = __PAIR64__(v1184, v1243);
            v951 = v1184;
          }
          v1311 = v950;
          if ( v951 <= v834 )
          {
            v737 = v1223;
            v1075 = v744;
            v1134 = v744;
            v1135 = v744;
            v1136 = v744 + 1;
            v1137 = v830 - (char *)v1223;
            if ( a7 && &v1136[v1137 + 8 + v1137 / 0xFF] > v1248 )
              goto LABEL_2071;
            if ( v1137 < 0xF )
            {
              *v1134 = 16 * v1137;
            }
            else
            {
              v1138 = v1137 - 15;
              *v1134 = -16;
              if ( v1137 - 15 >= 0xFF )
              {
                v1139 = v1138 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1139) = -1;
                memset_thunk_772440563353939046(v1136, SDWORD2(v1139), v1138 / 0xFF);
                v830 = (char *)v1205;
                v1136 += v1138 / 0xFF;
                v737 = v1223;
                v1138 %= 0xFFuLL;
              }
              *v1136++ = v1138;
              v834 = HIDWORD(v1277);
            }
            v1140 = v1136;
            do
            {
              *v1140 = *(_QWORD *)((char *)v1140 + (char *)v737 - v1136);
              ++v1140;
            }
            while ( v1140 < (_QWORD *)&v1136[v1137] );
            v1141 = &v1136[v1137];
            v1142 = v834 - 4LL;
            *v1141 = v1277;
            v744 = v1141 + 1;
            v1258 = v744;
            if ( a7 )
            {
              if ( &v744[v1142 / 0xFF + 6] > v1248 )
                goto LABEL_2071;
            }
            v1143 = *v1135;
            if ( v1142 < 0xF )
            {
              *v1134 = v1143 + v1142;
            }
            else
            {
              v1144 = v834 - 19LL;
              *v1134 = v1143 + 15;
              if ( v1144 >= 0x1FE )
              {
                v1145 = v1144 / 0x1FE;
                v1144 %= 0x1FEuLL;
                do
                {
                  *v744 = -1;
                  v1146 = v744 + 1;
                  *v1146 = -1;
                  v744 = v1146 + 1;
                  --v1145;
                }
                while ( v1145 );
              }
              if ( v1144 >= 0xFF )
              {
                LOBYTE(v1144) = v1144 + 1;
                *v744++ = -1;
              }
              *v744++ = v1144;
              v1258 = v744;
            }
            v739 = (unsigned int *)&v830[v834];
          }
          else
          {
            v952 = v1254;
            if ( v832 < v830 && v1254 < (unsigned __int64)&v830[v1333] )
            {
              LOWORD(v1277) = v831;
              v830 = v832;
              v834 = HIDWORD(v831);
              v1365 = HIDWORD(v831);
              v1205 = v832;
            }
            if ( (__int64)(v1254 - (_QWORD)v830) < 3 )
            {
              v830 = (char *)v1254;
              v1205 = (_DWORD *)v1254;
              v1277 = v950;
              continue;
            }
            while ( 1 )
            {
              if ( (__int64)(v952 - (_QWORD)v830) < 18 )
              {
                v953 = v834;
                if ( v834 > 18 )
                  v953 = 18;
                if ( (unsigned __int64)&v830[v953] > v952 + v951 - 4LL )
                  v953 = v952 + v951 - (_DWORD)v830 - 4;
                v954 = v953 + (_DWORD)v830 - v952;
                if ( v954 > 0 )
                {
                  v952 += v954;
                  v951 -= v954;
                  v1254 = v952;
                  HIDWORD(v1227) = v951;
                  v950 = v1227;
                  v1311 = v1227;
                }
              }
              v955 = v952 + v951;
              if ( v955 > (unsigned __int64)v833 )
              {
                v1071 = 0;
                v1070 = 0LL;
              }
              else
              {
                v956 = (unsigned int *)(v955 - 3);
                v1185 = v951;
                v957 = (_DWORD *)(v955 - 3);
                v1306 = v955 - 3;
                v1274 = v955 - 3;
                v958 = a1[65543];
                v959 = a1[65542];
                v960 = v958;
                v961 = (_QWORD *)*((_QWORD *)a1 + 32769);
                v962 = v955 - 3 + a1[65542] - (_DWORD)v961;
                v1332 = *((_QWORD *)a1 + 32773);
                v1263 = v961;
                v1202 = a1[65542];
                v1236 = v962;
                v1297 = a1[65543];
                if ( (int)v958 + 0x10000 <= v962 )
                  v960 = v962 - 0xFFFF;
                v963 = (_DWORD)v956 - v1254;
                v1288 = *((_QWORD *)a1 + 32770);
                v1192 = 256;
                v1344 = v959 + v1288 - v958;
                v1211 = *v956;
                v964 = 0;
                v1244 = 0;
                v1336 = 0LL;
                v1220 = 0;
                v965 = a1[65544];
                v1177 = v960;
                if ( v965 < v962 )
                {
                  v966 = (_DWORD *)((char *)v961 + v965 - v959);
                  do
                  {
                    v967 = (unsigned __int64)(unsigned int)(-1640531535 * *v966) >> 17;
                    v968 = v965 - a1[v967];
                    if ( v968 > 0xFFFF )
                      LOWORD(v968) = -1;
                    v966 = (_DWORD *)((char *)v966 + 1);
                    *((_WORD *)a1 + (unsigned __int16)v965 + 0x10000) = v968;
                    a1[v967] = v965++;
                  }
                  while ( v965 < v962 );
                  LODWORD(v959) = v1202;
                  v951 = HIDWORD(v1227);
                  LODWORD(v958) = v1297;
                }
                a1[65544] = v962;
                v969 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *v957) >> 17];
                v970 = v963;
                v1303 = v963;
                if ( v969 >= v960 )
                {
                  v971 = (unsigned __int64)v1263;
                  v1315 = v951;
                  v1306 = (unsigned __int64)v957;
                  while ( 1 )
                  {
                    if ( v1192 <= 0 )
                    {
LABEL_1896:
                      v950 = v1311;
                      v744 = v1258;
                      v957 = (_DWORD *)v1274;
                      break;
                    }
                    --v1192;
                    if ( v969 < (unsigned int)v959 )
                    {
                      v991 = (_DWORD *)(v1288 + v969 - (unsigned int)v958);
                      if ( v969 <= (int)v959 - 4 && *v991 == v1211 )
                      {
                        v992 = (_QWORD *)(v1274 + 4);
                        v993 = v991 + 1;
                        v994 = (_QWORD *)(v1274 + (unsigned int)v959 - v969);
                        v995 = (_QWORD *)(v1274 + 4);
                        if ( (unsigned __int64)v994 > v1251 )
                          v994 = (_QWORD *)v1251;
                        if ( v992 >= (_QWORD *)((char *)v994 - 7) )
                        {
                          while ( v995 < (_QWORD *)((char *)v994 - 7) )
                          {
                            if ( *v993 != *v995 )
                            {
                              __asm { tzcnt   rax, rax }
                              v998 = ((unsigned int)_RAX >> 3) - (_DWORD)v992 + (_DWORD)v995;
                              goto LABEL_1813;
                            }
                            ++v995;
LABEL_1801:
                            ++v993;
                          }
                          if ( v995 < (_QWORD *)((char *)v994 - 3) && *(_DWORD *)v993 == *(_DWORD *)v995 )
                          {
                            v995 = (_QWORD *)((char *)v995 + 4);
                            v993 = (_QWORD *)((char *)v993 + 4);
                          }
                          if ( v995 < (_QWORD *)((char *)v994 - 1) && *(_WORD *)v993 == *(_WORD *)v995 )
                          {
                            v995 = (_QWORD *)((char *)v995 + 2);
                            v993 = (_QWORD *)((char *)v993 + 2);
                          }
                          if ( v995 < v994 && *(_BYTE *)v993 == *(_BYTE *)v995 )
                            LODWORD(v995) = (_DWORD)v995 + 1;
                          v998 = (_DWORD)v995 - (_DWORD)v992;
                        }
                        else
                        {
                          if ( *v993 == *v992 )
                          {
                            v995 = (_QWORD *)(v1274 + 12);
                            goto LABEL_1801;
                          }
                          __asm { tzcnt   rcx, rax }
                          v998 = (unsigned int)_RCX >> 3;
                        }
LABEL_1813:
                        v1001 = v998 + 4;
                        v1002 = (_QWORD *)(v1274 + (int)(v998 + 4));
                        if ( v1002 == v994 && (unsigned __int64)v994 < v1251 )
                        {
                          v1003 = (_QWORD *)v971;
                          v1004 = (_QWORD *)(v1274 + v1001);
                          if ( (unsigned __int64)v1002 >= v1251 - 7 )
                            goto LABEL_1818;
                          if ( *(_QWORD *)v971 != *v1002 )
                          {
                            __asm { tzcnt   rcx, rax }
                            v1008 = (unsigned int)_RCX >> 3;
                          }
                          else
                          {
                            v1004 = v1002 + 1;
                            v1003 = (_QWORD *)(v971 + 8);
LABEL_1818:
                            while ( (unsigned __int64)v1004 < v1251 - 7 )
                            {
                              if ( *v1003 != *v1004 )
                              {
                                __asm { tzcnt   rax, rax }
                                v1008 = ((unsigned int)_RAX >> 3) - (_DWORD)v1002 + (_DWORD)v1004;
                                goto LABEL_1833;
                              }
                              ++v1004;
                              ++v1003;
                            }
                            if ( (unsigned __int64)v1004 < v1251 - 3 && *(_DWORD *)v1003 == *(_DWORD *)v1004 )
                            {
                              v1004 = (_QWORD *)((char *)v1004 + 4);
                              v1003 = (_QWORD *)((char *)v1003 + 4);
                            }
                            if ( (unsigned __int64)v1004 < v1251 - 1 && *(_WORD *)v1003 == *(_WORD *)v1004 )
                            {
                              v1004 = (_QWORD *)((char *)v1004 + 2);
                              v1003 = (_QWORD *)((char *)v1003 + 2);
                            }
                            if ( (unsigned __int64)v1004 < v1251 && *(_BYTE *)v1003 == *(_BYTE *)v1004 )
                              LODWORD(v1004) = (_DWORD)v1004 + 1;
                            v1008 = (_DWORD)v1004 - (_DWORD)v1002;
                          }
LABEL_1833:
                          v1001 += v1008;
                        }
                        v1010 = 0;
                        if ( v1303 )
                        {
                          v1011 = 0LL;
                          if ( (__int64)(v1254 - v1274) <= -(__int64)(v969 - (unsigned int)v958) )
                            v1012 = v958 - v969;
                          else
                            v1012 = v1254 - v1274;
                          v1013 = (_DWORD *)(v1274 - 4);
                          v1014 = -v1012;
                          v1015 = (char *)v991 - v1274;
                          while ( v1014 > 3 )
                          {
                            if ( *v1013 != *(_DWORD *)((char *)v1013 + (_QWORD)v1015) )
                            {
                              _BitScanReverse(&v1016, *v1013 ^ *(_DWORD *)((char *)v1013 + (_QWORD)v1015));
                              v1010 -= (31 - v1016) >> 3;
                              goto LABEL_1848;
                            }
                            v1010 -= 4;
                            v1014 -= 4;
                            v1011 -= 4LL;
                            --v1013;
                          }
                          if ( v1011 > v1012 )
                          {
                            v1017 = (_BYTE *)(v1011 + v1254 + v1315 - 4);
                            do
                            {
                              if ( *v1017 != v1017[v1288 + 3 + v969 - (unsigned int)v958 - v1254 - v1315] )
                                break;
                              --v1017;
                              --v1010;
                            }
                            while ( (__int64)&v1017[4 - v1254 - v1315] > v1012 );
                            LODWORD(v959) = v1202;
                          }
                        }
LABEL_1848:
                        v1018 = v1001 - v1010;
                        if ( v1018 > v1185 )
                        {
                          v1185 = v1018;
                          v1306 = v1274 + v1010;
                          v1220 = v1236 - v969;
                        }
LABEL_1850:
                        v960 = v1177;
                      }
                    }
                    else
                    {
                      v972 = v1185;
                      v973 = (_DWORD *)(v971 + v969 - (unsigned int)v959);
                      if ( *(_WORD *)(v1185 + v1254 - 1) != *(_WORD *)((char *)v973 + v1185 - v970 - 1)
                        || *v973 != v1211 )
                      {
                        goto LABEL_1850;
                      }
                      v974 = 0;
                      if ( v970 )
                      {
                        v975 = 0LL;
                        if ( (__int64)(v1254 - v1274) <= -(__int64)(v969 - (unsigned int)v959) )
                          v976 = v971 - (_DWORD)v973;
                        else
                          v976 = v1254 - v1274;
                        v977 = (_DWORD *)(v1274 - 4);
                        v978 = -v976;
                        v979 = (char *)v973 - v1274;
                        while ( v978 > 3 )
                        {
                          if ( *v977 != *(_DWORD *)((char *)v977 + (_QWORD)v979) )
                          {
                            _BitScanReverse(&v980, *v977 ^ *(_DWORD *)((char *)v977 + (_QWORD)v979));
                            v974 -= (31 - v980) >> 3;
                            goto LABEL_1767;
                          }
                          v974 -= 4;
                          v978 -= 4;
                          v975 -= 4LL;
                          --v977;
                        }
                        if ( v975 > v976 )
                        {
                          v981 = (_BYTE *)(v975 + v1254 + v1315 - 4);
                          do
                          {
                            if ( *v981 != v981[v971 + 3 + v969 - (unsigned int)v959 - v1254 - v1315] )
                              break;
                            --v981;
                            --v974;
                          }
                          while ( (__int64)&v981[4 - v1254 - v1315] > v976 );
                          v971 = (unsigned __int64)v1263;
                        }
LABEL_1767:
                        v972 = v1185;
                      }
                      v982 = (_QWORD *)(v1274 + 4);
                      v983 = v973 + 1;
                      v984 = (_QWORD *)(v1274 + 4);
                      if ( v1274 + 4 >= v1251 - 7 )
                      {
                        while ( (unsigned __int64)v984 < v1251 - 7 )
                        {
                          if ( *v983 != *v984 )
                          {
                            __asm { tzcnt   rax, rax }
                            v987 = ((unsigned int)_RAX >> 3) - (_DWORD)v982 + (_DWORD)v984;
                            goto LABEL_1787;
                          }
                          ++v984;
LABEL_1775:
                          ++v983;
                        }
                        if ( (unsigned __int64)v984 < v1251 - 3 && *(_DWORD *)v983 == *(_DWORD *)v984 )
                        {
                          v984 = (_QWORD *)((char *)v984 + 4);
                          v983 = (_QWORD *)((char *)v983 + 4);
                        }
                        if ( (unsigned __int64)v984 < v1251 - 1 && *(_WORD *)v983 == *(_WORD *)v984 )
                        {
                          v984 = (_QWORD *)((char *)v984 + 2);
                          v983 = (_QWORD *)((char *)v983 + 2);
                        }
                        if ( (unsigned __int64)v984 < v1251 && *(_BYTE *)v983 == *(_BYTE *)v984 )
                          LODWORD(v984) = (_DWORD)v984 + 1;
                        v987 = (_DWORD)v984 - (_DWORD)v982;
                      }
                      else
                      {
                        if ( *v983 == *v982 )
                        {
                          v984 = (_QWORD *)(v1274 + 12);
                          goto LABEL_1775;
                        }
                        __asm { tzcnt   rcx, rax }
                        v987 = (unsigned int)_RCX >> 3;
                      }
LABEL_1787:
                      v960 = v1177;
                      v990 = v987 - v974 + 4;
                      if ( v990 > v972 )
                      {
                        v1185 = v990;
                        v1306 = v1274 + v974;
                        v1220 = v1236 - v969;
                      }
                    }
                    if ( *((_WORD *)a1 + (unsigned __int16)v969 + 0x10000) != 1 )
                      goto LABEL_1893;
                    v1019 = v969 - 1;
                    if ( v1244 )
                    {
                      v1244 = v964;
                      if ( v964 != 2 )
                        goto LABEL_1893;
                      v1020 = v1211;
                    }
                    else
                    {
                      v1020 = v1211;
                      if ( (_BYTE)v1211 != HIBYTE(v1211) || (unsigned __int16)v1211 != HIWORD(v1211) )
                      {
                        v1244 = 1;
                        goto LABEL_1893;
                      }
                      v1244 = 2;
                      v1336 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1274 + 4), v1251, v1211) + 4LL;
                    }
                    if ( v1019 < v960 || (unsigned int)v959 - v969 < 3 )
                      goto LABEL_1893;
                    if ( v1019 >= (unsigned int)v959 )
                    {
                      v1021 = 0;
                      v1022 = v971 + v1019 - v1202;
                    }
                    else
                    {
                      v1021 = 1;
                      v1022 = v1288 + v1019 - v1297;
                    }
                    if ( *(_DWORD *)v1022 != v1020 )
                    {
                      LODWORD(v959) = v1202;
LABEL_1893:
                      v969 -= *((unsigned __int16 *)a1 + (unsigned __int16)v969 + 0x10000);
LABEL_1894:
                      v970 = v1303;
                      goto LABEL_1895;
                    }
                    v1023 = v1251;
                    if ( v1021 )
                      v1023 = v1344;
                    v1025 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v1022 + 4), v1023, v1020) + 4LL;
                    if ( v1021 )
                    {
                      if ( v1025 + v1022 == v1024 )
                      {
                        v1026 = LZ4HC_rotatePattern(v1025, v1211);
                        v1025 += (unsigned int)LZ4HC_countPattern((_QWORD *)v971, v1251, v1026);
                      }
                      v1027 = v1288;
                      v1028 = v1288;
                    }
                    else
                    {
                      v1027 = v1288;
                      v1028 = v971;
                    }
                    v1029 = LZ4HC_reverseCountPattern(v1022, v1028, v1211);
                    v1031 = v1021 == 0;
                    v1032 = v1029;
                    LODWORD(v959) = v1202;
                    if ( v1031 && v1022 - v1029 == v971 && v1297 < v1202 )
                    {
                      v1033 = LZ4HC_rotatePattern(-v1029, v1030);
                      v1034 = LZ4HC_reverseCountPattern(v1344, v1027, v1033);
                      v1032 = v1034 + v1035;
                    }
                    v1036 = v1019 - v1032;
                    v960 = v1177;
                    v969 = v1177;
                    if ( v1036 > v1177 )
                      v969 = v1036;
                    v1037 = v1025 + v1019 - v969;
                    if ( v1037 >= v1336 && v1025 <= v1336 )
                    {
                      v1038 = v1025 + v1019 - v1336;
                      v969 = v1202;
                      if ( v1202 - v1038 - 1 >= 3 )
                        v969 = v1038;
                      goto LABEL_1894;
                    }
                    v970 = v1303;
                    if ( v1202 - v969 - 1 < 3 )
                    {
                      v969 = v1202;
                    }
                    else if ( !v1303 )
                    {
                      v1039 = v1336;
                      if ( v1037 < v1336 )
                        v1039 = v1025 + v1019 - v969;
                      if ( v1185 < v1039 )
                      {
                        if ( v1202 + v1274 - v969 - v971 > 0xFFFF )
                          goto LABEL_1896;
                        v1185 = v1039;
                        v1220 = v1236 - v969;
                        v1306 = v1274;
                      }
                      v1040 = *((unsigned __int16 *)a1 + (unsigned __int16)v969 + 0x10000);
                      if ( v1040 > v969 )
                        goto LABEL_1896;
                      v969 -= v1040;
                      goto LABEL_1894;
                    }
LABEL_1895:
                    LODWORD(v958) = v1297;
                    v964 = v1244;
                    if ( v969 < v960 )
                      goto LABEL_1896;
                  }
                }
                v1041 = v1192;
                if ( v1192 > 0 && v1236 - v960 < 0xFFFF )
                {
                  v1042 = *(unsigned int *)(v1332 + 262168);
                  v1043 = *(_QWORD *)(v1332 + 262152);
                  v1264 = v1042 + *(_QWORD *)(v1332 + 0x40000) - v1043;
                  v1044 = *(_DWORD *)(v1332 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v957) >> 17));
                  v1045 = v960 + v1044 - v1264;
                  v1046 = v1236 - v1045;
                  if ( v1236 - v1045 <= 0xFFFF )
                  {
                    v1047 = v1042 + *(_QWORD *)(v1332 + 0x40000) - v1043;
                    do
                    {
                      v1048 = v1041--;
                      v1193 = v1041;
                      if ( !v1048 )
                        break;
                      v1049 = (_DWORD *)(v1043 + v1044 - v1042);
                      if ( *v1049 == v1211 )
                      {
                        v1050 = (char *)(v957 + 1);
                        v1051 = v1049 + 1;
                        v1052 = (char *)v957 + v1047 - v1044;
                        v1053 = (char *)(v957 + 1);
                        if ( (unsigned __int64)v1052 > v1251 )
                          v1052 = (char *)v1251;
                        if ( v1050 >= v1052 - 7 )
                        {
                          while ( v1053 < v1052 - 7 )
                          {
                            if ( *(_QWORD *)v1053 != *v1051 )
                            {
                              __asm { tzcnt   rax, rax }
                              v1056 = ((unsigned int)_RAX >> 3) - (_DWORD)v1050 + (_DWORD)v1053;
                              goto LABEL_1924;
                            }
                            v1053 += 8;
LABEL_1912:
                            ++v1051;
                          }
                          if ( v1053 < v1052 - 3 && *(_DWORD *)v1051 == *(_DWORD *)v1053 )
                          {
                            v1053 += 4;
                            v1051 = (_QWORD *)((char *)v1051 + 4);
                          }
                          if ( v1053 < v1052 - 1 && *(_WORD *)v1051 == *(_WORD *)v1053 )
                          {
                            v1053 += 2;
                            v1051 = (_QWORD *)((char *)v1051 + 2);
                          }
                          if ( v1053 < v1052 && *(_BYTE *)v1051 == *v1053 )
                            LODWORD(v1053) = (_DWORD)v1053 + 1;
                          v1056 = (_DWORD)v1053 - (_DWORD)v1050;
                        }
                        else
                        {
                          if ( *(_QWORD *)v1050 == *v1051 )
                          {
                            v1053 = (char *)(v957 + 3);
                            goto LABEL_1912;
                          }
                          __asm { tzcnt   rcx, rax }
                          v1056 = (unsigned int)_RCX >> 3;
                        }
LABEL_1924:
                        v1059 = v1056 + 4;
                        v1060 = 0;
                        if ( v1303 )
                        {
                          v1061 = 0LL;
                          if ( (__int64)(v1254 - v1274) <= v1043 - (__int64)v1049 )
                            v1062 = v1043 - (_DWORD)v1049;
                          else
                            v1062 = v1254 - v1274;
                          v1063 = (_DWORD *)(v1274 - 4);
                          v1064 = -v1062;
                          v1065 = (char *)v1049 - v1274;
                          while ( v1064 > 3 )
                          {
                            if ( *v1063 != *(_DWORD *)((char *)v1063 + (_QWORD)v1065) )
                            {
                              _BitScanReverse(&v1066, *v1063 ^ *(_DWORD *)((char *)v1063 + (_QWORD)v1065));
                              v1060 -= (31 - v1066) >> 3;
                              goto LABEL_1938;
                            }
                            v1060 -= 4;
                            v1064 -= 4;
                            v1061 -= 4LL;
                            --v1063;
                          }
                          if ( v1061 > v1062 )
                          {
                            v1067 = (_BYTE *)(v1043
                                            + v1061
                                            + v1044
                                            - (unsigned __int64)*(unsigned int *)(v1332 + 262168)
                                            - 1);
                            do
                            {
                              if ( *(_BYTE *)(v1061 + SHIDWORD(v1227) + v1254 - 4) != *v1067 )
                                break;
                              --v1060;
                              --v1061;
                              --v1067;
                            }
                            while ( v1061 > v1062 );
                            v1047 = v1264;
                          }
                        }
LABEL_1938:
                        v1042 = *(unsigned int *)(v1332 + 262168);
                        v1068 = v1059 - v1060;
                        v1041 = v1193;
                        if ( v1068 <= v1185 )
                        {
                          v957 = (_DWORD *)v1274;
                        }
                        else
                        {
                          v1185 = v1068;
                          v957 = (_DWORD *)v1274;
                          v1220 = v1046;
                          v1306 = v1274 + v1060;
                        }
                      }
                      v1069 = *(unsigned __int16 *)(v1332 + 2LL * (unsigned __int16)v1044 + 0x20000);
                      v1045 -= v1069;
                      v1044 -= v1069;
                      v1046 = v1236 - v1045;
                    }
                    while ( v1236 - v1045 <= 0xFFFF );
                    v950 = v1311;
                    v744 = v1258;
                  }
                }
                v951 = HIDWORD(v1227);
                v830 = (char *)v1205;
                v952 = v1254;
                v833 = v1318;
                v1070 = __PAIR64__(v1185, v1220);
                v1071 = v1185;
              }
              if ( v1071 <= v951 )
                break;
              v834 = v1365;
              v1072 = (unsigned __int64)&v830[v1365];
              if ( v1306 >= v1072 + 3 )
              {
                if ( v952 < v1072 )
                {
                  if ( (__int64)(v952 - (_QWORD)v830) >= 18 )
                  {
                    v834 = v952 - (_DWORD)v830;
                    v1365 = v952 - (_DWORD)v830;
                  }
                  else
                  {
                    if ( v1365 > 18 )
                      v834 = 18;
                    v1365 = v834;
                    if ( (unsigned __int64)&v830[v834] > v952 + v951 - 4LL )
                    {
                      v834 = v952 + v951 - (_DWORD)v830 - 4;
                      v1365 = v834;
                    }
                    v1073 = v834 + (_DWORD)v830 - v952;
                    if ( v1073 > 0 )
                    {
                      v952 += v1073;
                      v1254 = v952;
                      HIDWORD(v1227) = v951 - v1073;
                      v950 = v1227;
                    }
                  }
                }
                v1074 = v830 - (char *)v1223;
                v1075 = v744;
                v1076 = v744;
                v1077 = v744;
                v1078 = v744 + 1;
                if ( a7 && &v1078[v1074 / 0xFF + 8 + v1074] > v1248 )
                  goto LABEL_2070;
                if ( v1074 < 0xF )
                {
                  *v1076 = 16 * v1074;
                }
                else
                {
                  v1079 = v1074 - 15;
                  *v1076 = -16;
                  if ( v1074 - 15 >= 0xFF )
                  {
                    v1080 = v1079 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1080) = -1;
                    memset_thunk_772440563353939046(v1078, SDWORD2(v1080), v1079 / 0xFF);
                    v1078 += v1079 / 0xFF;
                    v1076 = v1075;
                    v1079 %= 0xFFuLL;
                    v1077 = v1075;
                  }
                  *v1078++ = v1079;
                  v952 = v1254;
                }
                v1081 = v1078;
                do
                {
                  *v1081 = *(_QWORD *)((char *)v1081 + (char *)v1223 - v1078);
                  ++v1081;
                }
                while ( v1081 < (_QWORD *)&v1078[v1074] );
                v1082 = &v1078[v1074];
                v834 = v1365;
                *v1082 = v1277;
                v744 = v1082 + 1;
                v1083 = v1365 - 4LL;
                v1258 = v744;
                if ( a7 )
                {
                  v743 = v1248;
                  if ( &v744[v1083 / 0xFF + 6] > v1248 )
                    goto LABEL_2068;
                }
                v1084 = *v1077;
                if ( v1083 < 0xF )
                {
                  *v1076 = v1083 + v1084;
                }
                else
                {
                  v1085 = v1365 - 19LL;
                  *v1076 = v1084 + 15;
                  if ( v1085 >= 0x1FE )
                  {
                    v1086 = v1085 / 0x1FE;
                    v1085 %= 0x1FEuLL;
                    do
                    {
                      *v744 = -1;
                      v1087 = v744 + 1;
                      *v1087 = -1;
                      v744 = v1087 + 1;
                      --v1086;
                    }
                    while ( v1086 );
                  }
                  if ( v1085 >= 0xFF )
                  {
                    LOBYTE(v1085) = v1085 + 1;
                    *v744++ = -1;
                  }
                  *v744++ = v1085;
                  v1258 = v744;
                }
                v830 = (char *)v952;
                v1088 = (_DWORD *)((char *)v1205 + v1365);
                v833 = v1318;
                v1277 = v950;
                v950 = v1070;
                v834 = HIDWORD(v1277);
                v1227 = v1070;
                v951 = HIDWORD(v1070);
                v1205 = (_DWORD *)v952;
                v952 = v1306;
                v1223 = v1088;
                v1365 = HIDWORD(v1277);
                v1254 = v1306;
                v1311 = v1070;
              }
              else
              {
                if ( v1306 >= v1072 )
                {
                  if ( v952 < v1072 )
                  {
                    v1089 = v1365 + (_DWORD)v830 - v952;
                    v1254 = v1089 + v952;
                    if ( v951 - v1089 >= 4 )
                    {
                      HIDWORD(v1227) = v951 - v1089;
                      v950 = v1227;
                    }
                    else
                    {
                      v1254 = v1306;
                      v950 = v1070;
                    }
                  }
                  v1090 = v830 - (char *)v1223;
                  v1075 = v744;
                  v1091 = v744;
                  v1092 = v744;
                  v1093 = v744 + 1;
                  if ( !a7 || &v1093[v1090 / 0xFF + 8 + v1090] <= v1248 )
                  {
                    if ( v1090 < 0xF )
                    {
                      *v1091 = 16 * v1090;
                    }
                    else
                    {
                      v1094 = v1090 - 15;
                      *v1091 = -16;
                      if ( v1090 - 15 >= 0xFF )
                      {
                        v1095 = v1094 * (unsigned __int128)0x8080808080808081uLL;
                        BYTE8(v1095) = -1;
                        memset_thunk_772440563353939046(v1093, SDWORD2(v1095), v1094 / 0xFF);
                        v1093 += v1094 / 0xFF;
                        v1091 = v1075;
                        v834 = v1365;
                        LOBYTE(v1094) = v1094 / 0xFF + v1094;
                        v1092 = v1075;
                      }
                      *v1093++ = v1094;
                    }
                    v1096 = v1093;
                    do
                    {
                      *v1096 = *(_QWORD *)((char *)v1096 + (char *)v1223 - v1093);
                      ++v1096;
                    }
                    while ( v1096 < (_QWORD *)&v1093[v1090] );
                    v1097 = &v1093[v1090];
                    v1098 = v834 - 4LL;
                    *v1097 = v1277;
                    v744 = v1097 + 1;
                    v1258 = v744;
                    if ( !a7 || (v743 = v1248, &v744[v1098 / 0xFF + 6] <= v1248) )
                    {
                      v1099 = *v1092;
                      if ( v1098 < 0xF )
                      {
                        *v1091 = v1098 + v1099;
                      }
                      else
                      {
                        v1100 = v834 - 19LL;
                        *v1091 = v1099 + 15;
                        if ( v1100 >= 0x1FE )
                        {
                          v1101 = v1100 / 0x1FE;
                          v1100 %= 0x1FEuLL;
                          do
                          {
                            *v744 = -1;
                            v1102 = v744 + 1;
                            *v1102 = -1;
                            v744 = v1102 + 1;
                            --v1101;
                          }
                          while ( v1101 );
                        }
                        if ( v1100 >= 0xFF )
                        {
                          LOBYTE(v1100) = v1100 + 1;
                          *v744++ = -1;
                        }
                        *v744++ = v1100;
                        v1258 = v744;
                      }
                      v831 = v950;
                      v1103 = (_DWORD *)((char *)v1205 + v834);
                      v1277 = v1070;
                      v830 = (char *)v1306;
                      v1205 = (_DWORD *)v1306;
                      v832 = (char *)v1254;
                      v1335 = (char *)v1254;
                      v1223 = v1103;
                      v1296 = v950;
                      v1333 = HIDWORD(v950);
                      goto LABEL_1515;
                    }
LABEL_2068:
                    v737 = v1223;
LABEL_2072:
                    if ( a7 == 2 )
                    {
                      v1147 = v1205;
                      v744 = v1075;
                      v1148 = (char *)v1205 - (char *)v737;
                      v1149 = ((char *)v1205 - (char *)v737 + 240) / 0xFFuLL + (char *)v1205 - (char *)v737 + 1;
                      if ( &v1075[v1149] <= v743 - 3 )
                      {
                        if ( v834 > (unsigned __int64)(255 * (&v743[-v1149 - 3] - v1075) + 18) )
                          v834 = 255 * ((_DWORD)v743 - 3 - v1149 - (_DWORD)v1075) + 18;
                        v1366 = v834;
                        if ( (__int64)&v743[v834 - v1149 - (_QWORD)v1075 + 2] >= 12 )
                        {
                          v1150 = v1075 + 1;
                          if ( v1148 < 0xF )
                          {
                            *v1075 = 16 * v1148;
                          }
                          else
                          {
                            v1151 = v1148 - 15;
                            *v1075 = -16;
                            if ( v1148 - 15 >= 0xFF )
                            {
                              v1152 = v1151 * (unsigned __int128)0x8080808080808081uLL;
                              BYTE8(v1152) = -1;
                              memset_thunk_772440563353939046(v1075 + 1, SDWORD2(v1152), v1151 / 0xFF);
                              v1147 = v1205;
                              v1150 += v1151 / 0xFF;
                              v737 = v1223;
                              LOBYTE(v1151) = v1151 / 0xFF + v1151;
                            }
                            *v1150++ = v1151;
                            v834 = v1366;
                          }
                          v1153 = v1150;
                          v1154 = (char *)v737 - v1150;
                          do
                          {
                            *v1153 = *(_QWORD *)((char *)v1153 + v1154);
                            ++v1153;
                          }
                          while ( v1153 < (_QWORD *)&v1150[v1148] );
                          v1155 = &v1150[v1148];
                          v1156 = v834 - 4LL;
                          *v1155 = v1277;
                          v744 = v1155 + 1;
                          v1157 = *v1075;
                          if ( v1156 < 0xF )
                          {
                            *v1075 = v1157 + v1156;
                          }
                          else
                          {
                            v1158 = v834 - 19LL;
                            *v1075 = v1157 + 15;
                            if ( v1158 >= 0x1FE )
                            {
                              v1159 = v1158 / 0x1FE;
                              v1158 %= 0x1FEuLL;
                              do
                              {
                                *v744 = -1;
                                v1160 = v744 + 1;
                                *v1160 = -1;
                                v744 = v1160 + 1;
                                --v1159;
                              }
                              while ( v1159 );
                            }
                            if ( v1158 >= 0xFF )
                            {
                              LOBYTE(v1158) = v1158 + 1;
                              *v744++ = -1;
                            }
                            *v744++ = v1158;
                          }
                          v737 = (_DWORD *)((char *)v1147 + v834);
                          v1223 = v737;
                        }
                      }
LABEL_2093:
                      LODWORD(v10) = (_DWORD)a3;
                      v741 = v1283;
                      goto LABEL_2094;
                    }
                    v731 = 0;
LABEL_2108:
                    *((_BYTE *)a1 + 262183) = 1;
                    return (unsigned int)v731;
                  }
                  v737 = v1223;
LABEL_2071:
                  v743 = v1248;
                  goto LABEL_2072;
                }
                v1227 = v1070;
                v952 = v1306;
                v951 = HIDWORD(v1070);
                v950 = v1070;
                v1254 = v1306;
                v1311 = v1070;
              }
            }
            if ( v952 < (unsigned __int64)&v830[v1365] )
              v1365 = v952 - (_DWORD)v830;
            v1104 = v1205;
            v1105 = v1223;
            v1075 = v744;
            v1106 = v744;
            v1107 = v744;
            v1108 = (char *)v1205 - (char *)v1223;
            v1109 = v744 + 1;
            if ( a7 && &v1109[v1108 / 0xFF + 8 + v1108] > v1248 )
            {
              v834 = v1365;
              v737 = v1223;
              goto LABEL_2071;
            }
            if ( v1108 < 0xF )
            {
              *v1106 = 16 * v1108;
            }
            else
            {
              v1110 = v1108 - 15;
              *v1106 = -16;
              if ( v1108 - 15 >= 0xFF )
              {
                v1111 = v1110 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1111) = -1;
                memset_thunk_772440563353939046(v1109, SDWORD2(v1111), v1110 / 0xFF);
                v1104 = v1205;
                v1109 += v1110 / 0xFF;
                v1105 = v1223;
                v1107 = v1106;
                LOBYTE(v1110) = v1110 / 0xFF + v1110;
              }
              *v1109++ = v1110;
              v952 = v1254;
            }
            v1112 = v1109;
            do
            {
              *v1112 = *(_QWORD *)((char *)v1112 + (char *)v1105 - v1109);
              ++v1112;
            }
            while ( v1112 < (_QWORD *)&v1109[v1108] );
            v1113 = &v1109[v1108];
            v834 = v1365;
            *v1113 = v1277;
            v1114 = v1113 + 1;
            v1115 = v1365 - 4LL;
            if ( a7 && &v1114[v1115 / 0xFF + 6] > v1248 )
            {
              v737 = v1223;
              v743 = v1248;
              goto LABEL_2072;
            }
            v1116 = *v1107;
            if ( v1115 < 0xF )
            {
              *v1106 = v1115 + v1116;
            }
            else
            {
              v1117 = v1365 - 19LL;
              *v1106 = v1116 + 15;
              if ( v1117 >= 0x1FE )
              {
                v1118 = v1117 / 0x1FE;
                v1117 %= 0x1FEuLL;
                do
                {
                  *v1114 = -1;
                  v1119 = v1114 + 1;
                  *v1119 = -1;
                  v1114 = v1119 + 1;
                  --v1118;
                }
                while ( v1118 );
              }
              if ( v1117 >= 0xFF )
              {
                LOBYTE(v1117) = v1117 + 1;
                *v1114++ = -1;
              }
              *v1114++ = v1117;
            }
            v1120 = (_DWORD *)((char *)v1104 + v1365);
            v1205 = (_DWORD *)v952;
            v1223 = v1120;
            v1075 = v1114;
            v1121 = v1114;
            v1122 = v1114;
            v1123 = v952 - (_QWORD)v1120;
            v1124 = v1114 + 1;
            if ( a7 && &v1124[v1123 / 0xFF + 8 + v1123] > v1248 )
            {
              v1223 = v1120;
LABEL_2065:
              LOWORD(v1277) = v950;
              v834 = HIDWORD(v950);
LABEL_2070:
              v737 = v1223;
              goto LABEL_2071;
            }
            if ( v1123 < 0xF )
            {
              *v1121 = 16 * v1123;
            }
            else
            {
              v1125 = v1123 - 15;
              *v1121 = -16;
              if ( v1123 - 15 >= 0xFF )
              {
                v1126 = v1125 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1126) = -1;
                memset_thunk_772440563353939046(v1124, SDWORD2(v1126), v1125 / 0xFF);
                v1120 = v1223;
                v1124 += v1125 / 0xFF;
                v1122 = v1121;
                v1125 %= 0xFFuLL;
              }
              *v1124++ = v1125;
              v952 = v1254;
            }
            v1127 = v1124;
            do
            {
              *v1127 = *(_QWORD *)((char *)v1127 + (char *)v1120 - v1124);
              ++v1127;
            }
            while ( v1127 < (_QWORD *)&v1124[v1123] );
            v1128 = &v1124[v1123];
            *v1128 = v1227;
            v744 = v1128 + 1;
            v1129 = SHIDWORD(v1227) - 4LL;
            v1258 = v744;
            if ( a7 && &v744[v1129 / 0xFF + 6] > v1248 )
              goto LABEL_2065;
            v1130 = *v1122;
            if ( v1129 < 0xF )
            {
              *v1121 = v1130 + v1129;
            }
            else
            {
              v1131 = SHIDWORD(v1227) - 19LL;
              *v1121 = v1130 + 15;
              if ( v1131 >= 0x1FE )
              {
                v1132 = v1131 / 0x1FE;
                v1131 %= 0x1FEuLL;
                do
                {
                  *v744 = -1;
                  v1133 = v744 + 1;
                  *v1133 = -1;
                  v744 = v1133 + 1;
                  --v1132;
                }
                while ( v1132 );
              }
              if ( v1131 >= 0xFF )
              {
                LOBYTE(v1131) = v1131 + 1;
                *v744++ = -1;
              }
              *v744++ = v1131;
              v1258 = v744;
            }
            v739 = (unsigned int *)(v952 + SHIDWORD(v1227));
          }
          break;
        }
        v737 = v739;
        v1223 = v739;
LABEL_1513:
        v743 = v1248;
        v742 = v1318;
        v7 = a1;
        v1205 = v739;
        continue;
      }
    }
LABEL_2094:
    v1161 = v741 - (char *)v737;
    v1284 = v1161;
    v1162 = v744;
    if ( a7 == 2 )
    {
      v743 += 5;
    }
    else if ( !a7 )
    {
      goto LABEL_2102;
    }
    if ( &v744[(v1161 + 240) / 0xFF + 1 + v1161] > v743 )
    {
      if ( a7 == 1 )
      {
        v731 = 0;
        goto LABEL_2108;
      }
      v1161 = v743 - v744 - 1 - ((unsigned __int64)(v743 - v744 - 1 + 241) >> 8);
      v1284 = v1161;
    }
LABEL_2102:
    v1163 = v1161 + (_DWORD)v737;
    if ( v1161 < 0xF )
    {
      *v744 = 16 * v1161;
      v1167 = (_DWORD)v744 + 1;
    }
    else
    {
      *v744 = -16;
      v1164 = v1161 - 15;
      v1165 = v744 + 1;
      if ( v1161 - 15 >= 0xFF )
      {
        v1166 = v1164 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v1166) = -1;
        memset_thunk_772440563353939046(v1165, SDWORD2(v1166), v1164 / 0xFF);
        v737 = v1223;
        v1165 += v1164 / 0xFF;
        v1161 = v1284;
        LOBYTE(v1164) = v1164 / 0xFF + v1164;
      }
      v1162 = v1165;
      *v1165 = v1164;
      v1167 = (_DWORD)v1165 + 1;
    }
    memmove(v1162 + 1, v737, v1161);
    v731 = v1167 + v1161 - (_DWORD)v10;
    *a4 = v1163 - v1355;
    if ( v731 > 0 )
      return (unsigned int)v731;
    goto LABEL_2108;
  }
  memmove(v7, *((const void **)v7 + 32773), 0x40030uLL);
  LZ4HC_setExternalDict(v7, Src);
  *((_WORD *)v7 + 131090) = 9;
  if ( a7 == 2 && a5 < 1 || *a4 > 0x7E000000 )
    return v377;
  v378 = Src;
  *((_QWORD *)v7 + 0x8000) += (int)*a4;
  v379 = Src;
  v380 = (int)*a4;
  v381 = (char *)Src + v380;
  v382 = (unsigned int *)((char *)Src + v380 - 12);
  v383 = (unsigned __int64)&v10[a5 - 5];
  v384 = (char *)Src + v380 - 5;
  if ( a7 != 2 )
    v383 = (unsigned __int64)&v10[a5];
  v1204 = (char *)Src;
  v1253 = Src;
  v385 = v10;
  v1225 = v383;
  v1300 = v381;
  v1317 = v382;
  v1222 = (unsigned __int64)v384;
  v1276 = v10;
  v1250 = 0LL;
  v1305 = 0LL;
  *a4 = 0;
  if ( (int)v380 < 13 )
  {
LABEL_1334:
    v729 = v381 - (char *)v379;
    v1301 = v729;
    v730 = v385;
    if ( a7 == 2 )
    {
      v383 += 5LL;
    }
    else if ( !a7 )
    {
      goto LABEL_1342;
    }
    if ( (unsigned __int64)&v385[(v729 + 240) / 0xFF + 1 + v729] > v383 )
    {
      if ( a7 == 1 )
      {
        v731 = 0;
        goto LABEL_1348;
      }
      v729 = v383 - (_QWORD)v385 - 1 - ((v383 - (unsigned __int64)v385 - 1 + 241) >> 8);
      v1301 = v729;
    }
LABEL_1342:
    v732 = v729 + (_DWORD)v379;
    if ( v729 < 0xF )
    {
      *v385 = 16 * v729;
      v736 = (_DWORD)v385 + 1;
    }
    else
    {
      *v385 = -16;
      v733 = v729 - 15;
      v734 = v385 + 1;
      if ( v729 - 15 >= 0xFF )
      {
        v735 = v733 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v735) = -1;
        memset_thunk_772440563353939046(v734, SDWORD2(v735), v733 / 0xFF);
        v379 = v1253;
        v734 += v733 / 0xFF;
        v729 = v1301;
        LOBYTE(v733) = v733 / 0xFF + v733;
      }
      v730 = v734;
      *v734 = v733;
      v736 = (_DWORD)v734 + 1;
    }
    memmove(v730 + 1, v379, v729);
    v731 = v736 + v729 - (_DWORD)v10;
    *a4 = v732 - v1355;
    if ( v731 > 0 )
      return (unsigned int)v731;
    goto LABEL_1348;
  }
  while ( 1 )
  {
    if ( v378 > v382 )
      goto LABEL_1333;
    v386 = v7[65543];
    v387 = 3;
    v388 = (_QWORD *)*((_QWORD *)v7 + 32769);
    v389 = v7[65542];
    v1171 = 3;
    v1280 = (char *)v388;
    v390 = (_DWORD)v378 + v7[65542] - (_DWORD)v388;
    v1215 = v386;
    v1292 = v390;
    if ( (int)v386 + 0x10000 <= v390 )
      v1180 = v390 - 0xFFFF;
    else
      v1180 = v7[65543];
    v391 = *v378;
    v392 = (_DWORD)v378 + v389 - (_DWORD)v388;
    v1269 = *((_QWORD *)v7 + 32770);
    v393 = a1[65544];
    v1338 = v1269 - v386 + v389;
    v394 = 0;
    v1231 = 256;
    v1361 = 0;
    v1326 = 0LL;
    v1240 = 0;
    if ( v393 < v392 )
    {
      v395 = (_DWORD *)((char *)v388 + v393 - v389);
      do
      {
        v396 = (unsigned __int64)(unsigned int)(-1640531535 * *v395) >> 17;
        v397 = v393 - a1[v396];
        if ( v397 > 0xFFFF )
          LOWORD(v397) = -1;
        v395 = (_DWORD *)((char *)v395 + 1);
        *((_WORD *)a1 + (unsigned __int16)v393 + 0x10000) = v397;
        a1[v396] = v393++;
      }
      while ( v393 < v392 );
      v387 = 3;
      LODWORD(v386) = v1215;
    }
    v398 = v1204;
    a1[65544] = v392;
    v399 = a1[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1204) >> 17];
    if ( v399 >= v1180 )
    {
      while ( 1 )
      {
        v400 = v1361;
        if ( v1231 <= 0 )
        {
LABEL_760:
          v385 = v1276;
          v394 = v1240;
          v387 = v1171;
          goto LABEL_761;
        }
        v401 = 1;
        --v1231;
        if ( v399 < (unsigned int)v389 )
          break;
        v402 = v1171;
        v403 = (_DWORD *)((char *)v388 + v399 - (unsigned int)v389);
        if ( *(_WORD *)&v398[v1171 - 1] != *(_WORD *)((char *)v403 + v1171 - 1) )
          goto LABEL_753;
        v404 = v1222;
        if ( *v403 == v391 )
        {
          v405 = v398 + 4;
          v406 = v403 + 1;
          v407 = v398 + 4;
          if ( (unsigned __int64)(v398 + 4) >= v1222 - 7 )
          {
            while ( (unsigned __int64)v407 < v1222 - 7 )
            {
              if ( *v406 != *v407 )
              {
                __asm { tzcnt   rax, rax }
                v410 = ((unsigned int)_RAX >> 3) - (_DWORD)v405 + (_DWORD)v407;
                goto LABEL_698;
              }
              ++v407;
LABEL_686:
              ++v406;
            }
            if ( (unsigned __int64)v407 < v1222 - 3 && *(_DWORD *)v406 == *(_DWORD *)v407 )
            {
              v407 = (_QWORD *)((char *)v407 + 4);
              v406 = (_QWORD *)((char *)v406 + 4);
            }
            if ( (unsigned __int64)v407 < v1222 - 1 && *(_WORD *)v406 == *(_WORD *)v407 )
            {
              v407 = (_QWORD *)((char *)v407 + 2);
              v406 = (_QWORD *)((char *)v406 + 2);
            }
            if ( (unsigned __int64)v407 < v1222 && *(_BYTE *)v406 == *(_BYTE *)v407 )
              LODWORD(v407) = (_DWORD)v407 + 1;
            v410 = (_DWORD)v407 - (_DWORD)v405;
          }
          else
          {
            if ( *v406 == *v405 )
            {
              v407 = v398 + 12;
              goto LABEL_686;
            }
            __asm { tzcnt   rcx, rax }
            v410 = (unsigned int)_RCX >> 3;
          }
LABEL_698:
          v398 = v1204;
          v413 = v410 + 4;
          if ( v413 > v1171 )
          {
            v1171 = v413;
            v1240 = v390 - v399;
            v402 = v413;
          }
LABEL_747:
          v400 = v1361;
        }
LABEL_748:
        if ( *((_WORD *)a1 + (unsigned __int16)v399 + 0x10000) != 1 )
          goto LABEL_757;
        v433 = v399 - 1;
        if ( v400 )
        {
          if ( v1361 != 2 )
            goto LABEL_757;
        }
        else
        {
          if ( (_BYTE)v391 != HIBYTE(v391) || (unsigned __int16)v391 != HIWORD(v391) )
          {
            v1361 = 1;
LABEL_757:
            v434 = v1180;
LABEL_758:
            v399 -= *((unsigned __int16 *)a1 + (unsigned __int16)v399 + 0x10000);
            goto LABEL_759;
          }
          v1361 = 2;
          v1326 = (unsigned int)LZ4HC_countPattern(v398 + 4, v404, v391) + 4LL;
        }
        v434 = v1180;
        if ( v433 < v1180 || (unsigned int)v389 - v433 - 1 < 3 )
          goto LABEL_758;
        if ( v433 >= (unsigned int)v389 )
        {
          v401 = 0;
          v436 = (char *)v388 + v433 - (unsigned int)v389;
        }
        else
        {
          v436 = (char *)(v1269 + v433 - v1215);
        }
        if ( *(_DWORD *)v436 != v391 )
          goto LABEL_757;
        v437 = v1222;
        if ( v401 )
          v437 = v1338;
        v439 = (unsigned int)LZ4HC_countPattern(v436 + 4, v437, v391) + 4LL;
        if ( v401 )
        {
          if ( &v436[v439] == v438 )
          {
            v440 = LZ4HC_rotatePattern(v439, v391);
            v439 += (unsigned int)LZ4HC_countPattern(v1280, v1222, v440);
          }
          v441 = (_QWORD *)v1269;
          v442 = v1280;
        }
        else
        {
          v442 = v1280;
          v441 = v1280;
        }
        HIBYTE(v1348) = HIBYTE(v391);
        for ( i = (unsigned __int64)v436; i >= (unsigned __int64)v441 + 4 && *(_DWORD *)(i - 4) == v391; i -= 4LL )
          ;
        v444 = (char *)&v1348 - i + 3;
        while ( i > (unsigned __int64)v441 && *(_BYTE *)(i - 1) == v444[i] )
          --i;
        v445 = (unsigned int)((_DWORD)v436 - i);
        if ( !v401 && &v436[-v445] == v442 && v1215 < (unsigned int)v389 )
        {
          v446 = LZ4HC_rotatePattern((unsigned int)(i - (_DWORD)v436), v391);
          v1349 = v446;
          for ( j = v1338; j >= v1269 + 4 && *(_DWORD *)(j - 4) == v446; j -= 4LL )
            ;
          v449 = (char *)&v1349 - j + 3;
          while ( j > v1269 && *(_BYTE *)(j - 1) == v449[j] )
            --j;
          LODWORD(v445) = v1338 - j + v447;
        }
        v434 = v1180;
        v450 = v1180;
        if ( v433 - (unsigned int)v445 > v1180 )
          v450 = v433 - v445;
        v451 = v439 + v433 - v450;
        if ( v451 >= v1326 && v439 <= v1326 )
        {
          v452 = v439 + v433 - v1326;
          v399 = v389;
          if ( (unsigned int)v389 - v452 - 1 >= 3 )
            v399 = v452;
          goto LABEL_814;
        }
        if ( (unsigned int)v389 - v450 - 1 < 3 )
        {
          v399 = v389;
LABEL_814:
          v388 = v1280;
          goto LABEL_759;
        }
        v388 = v1280;
        v398 = v1204;
        v453 = v1326;
        if ( v451 < v1326 )
          v453 = v451;
        if ( v402 < v453 )
        {
          if ( (unsigned __int64)&v1204[v389 - v450 - (_QWORD)v1280] > 0xFFFF )
            goto LABEL_760;
          v1171 = v453;
          v1240 = v1292 - v450;
        }
        v454 = *((unsigned __int16 *)a1 + (unsigned __int16)v450 + 0x10000);
        if ( v454 > v450 )
          goto LABEL_760;
        v399 = v450 - v454;
LABEL_759:
        v390 = v1292;
        LODWORD(v386) = v1215;
        v398 = v1204;
        if ( v399 < v434 )
          goto LABEL_760;
      }
      v414 = (_DWORD *)(v1269 + v399 - (unsigned int)v386);
      if ( v399 <= (int)v389 - 4 && *v414 == v391 )
      {
        v415 = &v398[(unsigned int)v389 - v399];
        if ( (unsigned __int64)v415 > v1222 )
          v415 = (char *)v1222;
        v416 = v398 + 4;
        v417 = v414 + 1;
        v418 = v416;
        if ( v416 >= v415 - 7 )
        {
          while ( v418 < v415 - 7 )
          {
            if ( *(_QWORD *)v418 != *v417 )
            {
              __asm { tzcnt   rax, rax }
              v421 = ((unsigned int)_RAX >> 3) - (_DWORD)v416 + (_DWORD)v418;
              goto LABEL_723;
            }
            v418 += 8;
LABEL_711:
            ++v417;
          }
          if ( v418 < v415 - 3 && *(_DWORD *)v417 == *(_DWORD *)v418 )
          {
            v418 += 4;
            v417 = (_QWORD *)((char *)v417 + 4);
          }
          if ( v418 < v415 - 1 && *(_WORD *)v417 == *(_WORD *)v418 )
          {
            v418 += 2;
            v417 = (_QWORD *)((char *)v417 + 2);
          }
          if ( v418 < v415 && *(_BYTE *)v417 == *v418 )
            LODWORD(v418) = (_DWORD)v418 + 1;
          v421 = (_DWORD)v418 - (_DWORD)v416;
        }
        else
        {
          if ( *(_QWORD *)v416 == *v417 )
          {
            v418 = v416 + 8;
            goto LABEL_711;
          }
          __asm { tzcnt   rcx, rax }
          v421 = (unsigned int)_RCX >> 3;
        }
LABEL_723:
        v424 = v421 + 4;
        v425 = &v1204[v421 + 4];
        if ( v425 == v415 && (unsigned __int64)v415 < v1222 )
        {
          v426 = v388;
          v427 = &v1204[v424];
          if ( (unsigned __int64)v425 >= v1222 - 7 )
            goto LABEL_728;
          if ( *(_QWORD *)v425 != *v388 )
          {
            __asm { tzcnt   rcx, rax }
            v431 = (unsigned int)_RCX >> 3;
          }
          else
          {
            v427 = v425 + 8;
            v426 = v388 + 1;
LABEL_728:
            while ( (unsigned __int64)v427 < v1222 - 7 )
            {
              if ( *(_QWORD *)v427 != *v426 )
              {
                __asm { tzcnt   rax, rax }
                v431 = ((unsigned int)_RAX >> 3) - (_DWORD)v425 + (_DWORD)v427;
                goto LABEL_743;
              }
              v427 += 8;
              ++v426;
            }
            if ( (unsigned __int64)v427 < v1222 - 3 && *(_DWORD *)v426 == *(_DWORD *)v427 )
            {
              v427 += 4;
              v426 = (_QWORD *)((char *)v426 + 4);
            }
            if ( (unsigned __int64)v427 < v1222 - 1 && *(_WORD *)v426 == *(_WORD *)v427 )
            {
              v427 += 2;
              v426 = (_QWORD *)((char *)v426 + 2);
            }
            if ( (unsigned __int64)v427 < v1222 && *(_BYTE *)v426 == *v427 )
              LODWORD(v427) = (_DWORD)v427 + 1;
            v431 = (_DWORD)v427 - (_DWORD)v425;
          }
LABEL_743:
          v424 += v431;
        }
        v402 = v1171;
        v398 = v1204;
        if ( v424 > v1171 )
        {
          v1171 = v424;
          v402 = v424;
          v1240 = v390 - v399;
          v401 = 1;
        }
        v404 = v1222;
        goto LABEL_747;
      }
      v402 = v1171;
LABEL_753:
      v404 = v1222;
      goto LABEL_748;
    }
LABEL_761:
    v435 = __PAIR64__(v387, v394);
    v1323 = __PAIR64__(v387, v394);
    v1257 = __PAIR64__(v387, v394);
    if ( v387 < 4 )
    {
      v379 = v1253;
      v383 = v1225;
      v378 = (unsigned int *)(v398 + 1);
      goto LABEL_763;
    }
    v455 = v398;
    v1265 = v387;
LABEL_816:
    v456 = v1317;
    v1312 = v455;
    while ( 1 )
    {
      v457 = HIDWORD(v1257);
      v1362 = HIDWORD(v1257);
      v458 = &v398[SHIDWORD(v1257)];
      if ( v458 > (char *)v456 )
      {
        v1247 = 0LL;
        v530 = 0;
        v529 = 0LL;
      }
      else
      {
        v459 = (_DWORD)v458 - 2;
        v1181 = HIDWORD(v1257);
        v1250 = (unsigned __int64)(v458 - 2);
        v460 = (unsigned int *)(v458 - 2);
        v1327 = (unsigned __int64)(v458 - 2);
        v461 = a1[65543];
        v462 = (char *)*((_QWORD *)a1 + 32769);
        v463 = a1[65542];
        v464 = v463 + v459 - (_DWORD)v462;
        v1270 = v462;
        v1188 = a1[65542];
        v1293 = v464;
        v1216 = a1[65543];
        if ( (int)v461 + 0x10000 <= v464 )
          v1172 = v464 - 0xFFFF;
        else
          v1172 = a1[65543];
        v1208 = 0;
        v1330 = 0LL;
        v465 = 0;
        v1241 = 0;
        v466 = (_DWORD)v460 - (_DWORD)v398;
        v1286 = *((_QWORD *)a1 + 32770);
        v467 = *v460;
        v1339 = v463 - v461 + v1286;
        v468 = a1[65544];
        v1232 = 256;
        v1197 = *v460;
        if ( v468 >= v464 )
        {
          v470 = 1;
        }
        else
        {
          v469 = &v462[v468 - v463];
          v470 = 1;
          do
          {
            v471 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v469) >> 17;
            v472 = v468 - a1[v471];
            if ( v472 > 0xFFFF )
              LOWORD(v472) = -1;
            ++v469;
            *((_WORD *)a1 + (unsigned __int16)v468 + 0x10000) = v472;
            a1[v471] = v468++;
          }
          while ( v468 < v464 );
          v435 = v1323;
          v467 = v1197;
        }
        a1[65544] = v464;
        v473 = v466;
        v1281 = v466;
        v474 = a1[(unsigned __int64)(-1640531535 * *v460) >> 17];
        if ( v474 >= v1172 )
        {
          v475 = v1327;
          v476 = SHIDWORD(v1257);
          while ( 1 )
          {
            v477 = v1208;
            if ( v1232 <= 0 )
            {
LABEL_940:
              v435 = v1323;
              v385 = v1276;
              v465 = v1241;
              break;
            }
            --v1232;
            if ( v474 < (unsigned int)v463 )
            {
              v498 = (_DWORD *)(v1286 + v474 - v1216);
              if ( v474 > v1188 - 4 || *v498 != v467 )
              {
                v491 = v1222;
                LODWORD(v463) = v1188;
                goto LABEL_931;
              }
              v499 = (_QWORD *)(v475 + 4);
              v500 = v498 + 1;
              v501 = (_QWORD *)(v475 + 4);
              v502 = (_QWORD *)(v475 + v1188 - v474);
              if ( (unsigned __int64)v502 > v1222 )
                v502 = (_QWORD *)v1222;
              if ( v499 >= (_QWORD *)((char *)v502 - 7) )
              {
                while ( v501 < (_QWORD *)((char *)v502 - 7) )
                {
                  if ( *v500 != *v501 )
                  {
                    __asm { tzcnt   rax, rax }
                    v505 = ((unsigned int)_RAX >> 3) - (_DWORD)v499 + (_DWORD)v501;
                    goto LABEL_892;
                  }
                  ++v501;
LABEL_880:
                  ++v500;
                }
                if ( v501 < (_QWORD *)((char *)v502 - 3) && *(_DWORD *)v500 == *(_DWORD *)v501 )
                {
                  v501 = (_QWORD *)((char *)v501 + 4);
                  v500 = (_QWORD *)((char *)v500 + 4);
                }
                if ( v501 < (_QWORD *)((char *)v502 - 1) && *(_WORD *)v500 == *(_WORD *)v501 )
                {
                  v501 = (_QWORD *)((char *)v501 + 2);
                  v500 = (_QWORD *)((char *)v500 + 2);
                }
                if ( v501 < v502 && *(_BYTE *)v500 == *(_BYTE *)v501 )
                  LODWORD(v501) = (_DWORD)v501 + 1;
                v505 = (_DWORD)v501 - (_DWORD)v499;
              }
              else
              {
                if ( *v500 == *v499 )
                {
                  v501 = (_QWORD *)(v475 + 12);
                  goto LABEL_880;
                }
                __asm { tzcnt   rcx, rax }
                v505 = (unsigned int)_RCX >> 3;
              }
LABEL_892:
              v508 = v505 + 4;
              v509 = (_QWORD *)(v475 + (int)(v505 + 4));
              if ( v509 == v502 && (unsigned __int64)v502 < v1222 )
              {
                v510 = v1270;
                v511 = (_QWORD *)(v475 + v508);
                if ( (unsigned __int64)v509 >= v1222 - 7 )
                  goto LABEL_897;
                if ( *(_QWORD *)v1270 != *v509 )
                {
                  __asm { tzcnt   rcx, rax }
                  v515 = (unsigned int)_RCX >> 3;
                }
                else
                {
                  v511 = v509 + 1;
                  v510 = v1270 + 8;
LABEL_897:
                  while ( (unsigned __int64)v511 < v1222 - 7 )
                  {
                    if ( *v510 != *v511 )
                    {
                      __asm { tzcnt   rax, rax }
                      v515 = ((unsigned int)_RAX >> 3) - (_DWORD)v509 + (_DWORD)v511;
                      goto LABEL_912;
                    }
                    ++v511;
                    ++v510;
                  }
                  if ( (unsigned __int64)v511 < v1222 - 3 && *(_DWORD *)v510 == *(_DWORD *)v511 )
                  {
                    v511 = (_QWORD *)((char *)v511 + 4);
                    v510 = (_QWORD *)((char *)v510 + 4);
                  }
                  if ( (unsigned __int64)v511 < v1222 - 1 && *(_WORD *)v510 == *(_WORD *)v511 )
                  {
                    v511 = (_QWORD *)((char *)v511 + 2);
                    v510 = (_QWORD *)((char *)v510 + 2);
                  }
                  if ( (unsigned __int64)v511 < v1222 && *(_BYTE *)v510 == *(_BYTE *)v511 )
                    LODWORD(v511) = (_DWORD)v511 + 1;
                  v515 = (_DWORD)v511 - (_DWORD)v509;
                }
LABEL_912:
                v508 += v515;
              }
              v517 = 0LL;
              v518 = 0;
              if ( v1281 )
              {
                if ( (__int64)&v1204[-v475] <= -(__int64)(v474 - v1216) )
                  v519 = v1216 - v474;
                else
                  v519 = (_DWORD)v1204 - v475;
                v520 = v498 - 1;
                v521 = -v519;
                v522 = v475 - (_QWORD)v498;
                while ( v521 > 3 )
                {
                  if ( *v520 != *(_DWORD *)((char *)v520 + v522) )
                  {
                    _BitScanReverse(&v523, *v520 ^ *(_DWORD *)((char *)v520 + v522));
                    v518 -= (31 - v523) >> 3;
                    goto LABEL_926;
                  }
                  v518 -= 4;
                  v521 -= 4;
                  v517 -= 4LL;
                  --v520;
                }
                if ( v517 > (int)v519 )
                {
                  v524 = v1286 + v517 - 1 + v474 - v1216;
                  do
                  {
                    if ( v1204[-(v474 - v1216) - v1286 - 2 + SHIDWORD(v1257) + v524] != *(_BYTE *)v524 )
                      break;
                    --v524;
                    --v518;
                  }
                  while ( (__int64)(1LL - (v474 - v1216) - v1286 + v524) > (int)v519 );
                }
              }
LABEL_926:
              LODWORD(v463) = v1188;
              v525 = v508 - v518;
              v477 = v1208;
              v491 = v1222;
              if ( v525 > v1181 )
              {
                v1181 = v525;
                v1241 = v1293 - v474;
                v1250 = v475 + v518;
              }
            }
            else
            {
              v478 = v1181;
              v479 = &v1270[v474 - (unsigned int)v463];
              if ( *(_WORD *)&v1204[v1181 - 1] == *(_WORD *)&v479[v1181 - v473 - 1] && *(_DWORD *)v479 == v467 )
              {
                v480 = 0;
                if ( v473 )
                {
                  v481 = 0LL;
                  if ( (__int64)&v1204[-v475] <= -(__int64)(v474 - (unsigned int)v463) )
                    v482 = v463 - v474;
                  else
                    v482 = (_DWORD)v1204 - v475;
                  v483 = v479 - 4;
                  v484 = -v482;
                  v485 = v475 - (_QWORD)v479;
                  while ( v484 > 3 )
                  {
                    if ( *(_DWORD *)v483 != *(_DWORD *)&v483[v485] )
                    {
                      _BitScanReverse(&v486, *(_DWORD *)v483 ^ *(_DWORD *)&v483[v485]);
                      v480 -= (31 - v486) >> 3;
                      goto LABEL_847;
                    }
                    v480 -= 4;
                    v484 -= 4;
                    v481 -= 4LL;
                    v483 -= 4;
                  }
                  if ( v481 > v482 )
                  {
                    v487 = &v1270[v474 - (unsigned int)v463 - 1 + v481];
                    do
                    {
                      if ( v487[v476 - 2 + &v1204[-(v474 - (unsigned int)v463)] - v1270] != *v487 )
                        break;
                      --v487;
                      --v480;
                    }
                    while ( (__int64)&v487[1LL - (v474 - (unsigned int)v463) - (_QWORD)v1270] > v482 );
                  }
LABEL_847:
                  v478 = v1181;
                }
                v488 = (_QWORD *)(v475 + 4);
                v489 = v479 + 4;
                v490 = (_QWORD *)(v475 + 4);
                v491 = v1222;
                if ( v475 + 4 >= v1222 - 7 )
                {
                  while ( (unsigned __int64)v490 < v1222 - 7 )
                  {
                    if ( *v489 != *v490 )
                    {
                      __asm { tzcnt   rax, rax }
                      v494 = ((unsigned int)_RAX >> 3) - (_DWORD)v488 + (_DWORD)v490;
                      goto LABEL_867;
                    }
                    ++v490;
LABEL_855:
                    ++v489;
                  }
                  if ( (unsigned __int64)v490 < v1222 - 3 && *(_DWORD *)v489 == *(_DWORD *)v490 )
                  {
                    v490 = (_QWORD *)((char *)v490 + 4);
                    v489 = (_QWORD *)((char *)v489 + 4);
                  }
                  if ( (unsigned __int64)v490 < v1222 - 1 && *(_WORD *)v489 == *(_WORD *)v490 )
                  {
                    v490 = (_QWORD *)((char *)v490 + 2);
                    v489 = (_QWORD *)((char *)v489 + 2);
                  }
                  if ( (unsigned __int64)v490 < v1222 && *(_BYTE *)v489 == *(_BYTE *)v490 )
                    LODWORD(v490) = (_DWORD)v490 + 1;
                  v494 = (_DWORD)v490 - (_DWORD)v488;
                }
                else
                {
                  if ( *v489 == *v488 )
                  {
                    v490 = (_QWORD *)(v475 + 12);
                    goto LABEL_855;
                  }
                  __asm { tzcnt   rcx, rax }
                  v494 = (unsigned int)_RCX >> 3;
                }
LABEL_867:
                v477 = v1208;
                v497 = v494 - v480 + 4;
                if ( v497 > v478 )
                {
                  v1181 = v497;
                  v1250 = v475 + v480;
                  v1241 = v1293 - v474;
                }
              }
              else
              {
                v491 = v1222;
              }
            }
            v470 = 1;
LABEL_931:
            if ( *((_WORD *)a1 + (unsigned __int16)v474 + 0x10000) != 1 )
              goto LABEL_936;
            v526 = v474 - 1;
            if ( v477 )
            {
              if ( v1208 != 2 )
                goto LABEL_936;
              v527 = v1197;
            }
            else
            {
              v527 = v1197;
              if ( (_BYTE)v1197 != HIBYTE(v1197) || (unsigned __int16)v1197 != HIWORD(v1197) )
              {
                v1208 = 1;
LABEL_936:
                v528 = v1172;
LABEL_937:
                v470 = 1;
                v474 -= *((unsigned __int16 *)a1 + (unsigned __int16)v474 + 0x10000);
LABEL_938:
                v473 = v1281;
                goto LABEL_939;
              }
              v1208 = 2;
              v1330 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v475 + 4), v491, v1197) + 4LL;
            }
            v528 = v1172;
            if ( v526 < v1172 || (unsigned int)v463 - v474 < 3 )
              goto LABEL_937;
            if ( v526 >= (unsigned int)v463 )
            {
              v470 = 0;
              v531 = &v1270[v526 - (unsigned int)v463];
            }
            else
            {
              v531 = (char *)(v1286 + v526 - v1216);
            }
            if ( *(_DWORD *)v531 != v527 )
              goto LABEL_936;
            v532 = v1222;
            if ( v470 )
              v532 = v1339;
            v533 = (unsigned int)LZ4HC_countPattern(v531 + 4, v532, v527) + 4LL;
            if ( v470 )
            {
              if ( &v531[v533] == (char *)v532 )
              {
                v534 = LZ4HC_rotatePattern(v533, v1197);
                v533 += (unsigned int)LZ4HC_countPattern(v1270, v1222, v534);
              }
              v535 = (_QWORD *)v1286;
            }
            else
            {
              v535 = v1270;
            }
            v1350 = v1197;
            for ( k = (unsigned __int64)v531; k >= (unsigned __int64)v535 + 4 && *(_DWORD *)(k - 4) == v1197; k -= 4LL )
              ;
            v537 = (char *)&v1350 - k + 3;
            while ( k > (unsigned __int64)v535 && *(_BYTE *)(k - 1) == v537[k] )
              --k;
            LODWORD(v463) = v1188;
            v538 = (unsigned int)((_DWORD)v531 - k);
            if ( !v470 && &v531[-v538] == v1270 && v1216 < v1188 )
            {
              v539 = LZ4HC_rotatePattern((unsigned int)(k - (_DWORD)v531), v1197);
              v541 = v1339;
              v1351 = v539;
              while ( v541 >= v1286 + 4 && *(_DWORD *)(v541 - 4) == v539 )
                v541 -= 4LL;
              v542 = (char *)&v1351 - v541 + 3;
              while ( v541 > v1286 && *(_BYTE *)(v541 - 1) == v542[v541] )
                --v541;
              v475 = v1327;
              LODWORD(v538) = v1339 - v541 + v540;
            }
            v528 = v1172;
            v474 = v1172;
            if ( v526 - (unsigned int)v538 > v1172 )
              v474 = v526 - v538;
            v543 = v533 + v526 - v474;
            if ( v543 >= v1330 && v533 <= v1330 )
            {
              v544 = v526 + v533 - v1330;
              v470 = 1;
              v474 = v1188;
              if ( v1188 - v544 - 1 >= 3 )
                v474 = v544;
              goto LABEL_938;
            }
            v473 = v1281;
            v470 = 1;
            if ( v1188 - v474 - 1 < 3 )
            {
              v474 = v1188;
              goto LABEL_939;
            }
            if ( !v1281 )
            {
              v545 = v1330;
              if ( v543 < v1330 )
                v545 = v533 + v526 - v474;
              if ( v1181 < v545 )
              {
                if ( v1188 + v475 - v474 - (unsigned __int64)v1270 > 0xFFFF )
                  goto LABEL_940;
                v1181 = v545;
                v1241 = v1293 - v474;
                v1250 = v475;
              }
              v546 = *((unsigned __int16 *)a1 + (unsigned __int16)v474 + 0x10000);
              if ( v546 > v474 )
                goto LABEL_940;
              v474 -= v546;
              goto LABEL_938;
            }
LABEL_939:
            v467 = v1197;
            v476 = SHIDWORD(v1257);
            if ( v474 < v528 )
              goto LABEL_940;
          }
        }
        v455 = v1312;
        v457 = HIDWORD(v1257);
        v398 = v1204;
        v456 = v1317;
        v529 = __PAIR64__(v1181, v465);
        v1247 = __PAIR64__(v1181, v465);
        v530 = v1181;
      }
      v1271 = v529;
      if ( v530 <= v457 )
      {
        v379 = v1253;
        v644 = v385;
        v702 = v385;
        v703 = v385;
        v704 = v385 + 1;
        v705 = v398 - (char *)v1253;
        if ( a7 )
        {
          v383 = v1225;
          if ( (unsigned __int64)&v704[v705 + 8 + v705 / 0xFF] > v1225 )
            goto LABEL_1308;
        }
        if ( v705 < 0xF )
        {
          *v702 = 16 * v705;
        }
        else
        {
          v706 = v705 - 15;
          *v702 = -16;
          if ( v705 - 15 >= 0xFF )
          {
            v707 = v706 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v707) = -1;
            memset_thunk_772440563353939046(v704, SDWORD2(v707), v706 / 0xFF);
            v398 = v1204;
            v704 += v706 / 0xFF;
            v379 = v1253;
            LOBYTE(v706) = v706 / 0xFF + v706;
          }
          *v704++ = v706;
          v457 = HIDWORD(v1257);
        }
        v708 = v704;
        do
        {
          *v708 = *(_QWORD *)((char *)v708 + (char *)v379 - v704);
          ++v708;
        }
        while ( v708 < (_QWORD *)&v704[v705] );
        v709 = &v704[v705];
        v383 = v1225;
        v710 = v457 - 4LL;
        *v709 = v1257;
        v385 = v709 + 1;
        v1276 = v385;
        if ( a7 )
        {
          if ( (unsigned __int64)&v385[v710 / 0xFF + 6] > v1225 )
            goto LABEL_1308;
        }
        v711 = *v703;
        if ( v710 < 0xF )
        {
          *v702 = v710 + v711;
        }
        else
        {
          v712 = v457 - 19LL;
          *v702 = v711 + 15;
          if ( v712 >= 0x1FE )
          {
            v713 = v712 / 0x1FE;
            v712 %= 0x1FEuLL;
            do
            {
              *v385 = -1;
              v714 = v385 + 1;
              *v714 = -1;
              v385 = v714 + 1;
              --v713;
            }
            while ( v713 );
          }
          if ( v712 >= 0xFF )
          {
            LOBYTE(v712) = v712 + 1;
            *v385++ = -1;
          }
          *v385++ = v712;
          v1276 = v385;
        }
        v378 = (unsigned int *)&v398[v457];
        goto LABEL_1304;
      }
      v547 = v1250;
      if ( v455 < v398 && v1250 < (unsigned __int64)&v398[v1265] )
      {
        LOWORD(v1257) = v435;
        v398 = v455;
        v457 = HIDWORD(v435);
        v1362 = HIDWORD(v435);
        v1204 = v455;
      }
      if ( (__int64)(v1250 - (_QWORD)v398) >= 3 )
        break;
      v398 = (char *)v1250;
      v1204 = (char *)v1250;
      v1257 = v529;
    }
    while ( 1 )
    {
      if ( (__int64)(v547 - (_QWORD)v398) < 18 )
      {
        v548 = v457;
        if ( v457 > 18 )
          v548 = 18;
        if ( (unsigned __int64)&v398[v548] > v547 + v530 - 4LL )
          v548 = v547 + v530 - (_DWORD)v398 - 4;
        v549 = (_DWORD)v398 + v548 - v547;
        if ( v549 > 0 )
        {
          v547 += v549;
          v530 -= v549;
          v1250 = v547;
          HIDWORD(v1247) = v530;
          v529 = v1247;
          v1271 = v1247;
        }
      }
      v550 = v547 + v530;
      if ( v550 > (unsigned __int64)v456 )
      {
        v623 = 0;
        v622 = 0LL;
      }
      else
      {
        v551 = v550 - 3;
        v1305 = v550 - 3;
        v552 = (unsigned int *)(v550 - 3);
        v1328 = v550 - 3;
        v1189 = v530;
        v553 = a1[65543];
        v554 = (_QWORD *)*((_QWORD *)a1 + 32769);
        v555 = a1[65542];
        v556 = v555 + v551 - (_DWORD)v554;
        v1287 = (char *)v554;
        v1198 = a1[65542];
        v1294 = v556;
        v1217 = a1[65543];
        if ( (int)v553 + 0x10000 <= v556 )
          v1182 = v556 - 0xFFFF;
        else
          v1182 = a1[65543];
        v557 = 0;
        v558 = *v552;
        v559 = *((_QWORD *)a1 + 32770) - v553;
        v1173 = 0;
        v1331 = 0LL;
        v1242 = 0;
        v560 = (_DWORD)v552 - v1250;
        v1282 = *((_QWORD *)a1 + 32770);
        v1340 = v555 + v559;
        v561 = a1[65544];
        v1233 = 256;
        v1209 = *v552;
        if ( v561 < v556 )
        {
          v562 = (_DWORD *)((char *)v554 + v561 - v555);
          do
          {
            v563 = (unsigned __int64)(unsigned int)(-1640531535 * *v562) >> 17;
            v564 = v561 - a1[v563];
            if ( v564 > 0xFFFF )
              LOWORD(v564) = -1;
            v562 = (_DWORD *)((char *)v562 + 1);
            *((_WORD *)a1 + (unsigned __int16)v561 + 0x10000) = v564;
            a1[v563] = v561++;
          }
          while ( v561 < v556 );
          v530 = HIDWORD(v1247);
        }
        a1[65544] = v556;
        v565 = v560;
        v1310 = v560;
        v566 = a1[(unsigned __int64)(-1640531535 * *v552) >> 17];
        if ( v566 >= v1182 )
        {
          v567 = v1250;
          v568 = v1198;
          v569 = v1328;
          v1305 = (unsigned __int64)v552;
          v570 = v530;
          v1259 = v1250 + v530;
          v1346 = v530;
          while ( 1 )
          {
            v571 = v1173;
            if ( v1233 <= 0 )
            {
LABEL_1132:
              v529 = v1271;
              v385 = v1276;
              v530 = HIDWORD(v1247);
              v557 = v1242;
              break;
            }
            --v1233;
            if ( v566 < v568 )
            {
              v585 = v1222;
              v592 = (_DWORD *)(v1282 + v566 - v1217);
              if ( v566 <= v568 - 4 && *v592 == v558 )
              {
                v593 = (_QWORD *)(v569 + 4);
                v594 = v592 + 1;
                v595 = (_QWORD *)(v569 + v568 - v566);
                v596 = (_QWORD *)(v569 + 4);
                if ( (unsigned __int64)v595 > v1222 )
                  v595 = (_QWORD *)v1222;
                if ( v593 >= (_QWORD *)((char *)v595 - 7) )
                {
                  while ( v596 < (_QWORD *)((char *)v595 - 7) )
                  {
                    if ( *v596 != *v594 )
                    {
                      __asm { tzcnt   rax, rax }
                      v599 = ((unsigned int)_RAX >> 3) - (_DWORD)v593 + (_DWORD)v596;
                      goto LABEL_1084;
                    }
                    ++v596;
LABEL_1072:
                    ++v594;
                  }
                  if ( v596 < (_QWORD *)((char *)v595 - 3) && *(_DWORD *)v594 == *(_DWORD *)v596 )
                  {
                    v596 = (_QWORD *)((char *)v596 + 4);
                    v594 = (_QWORD *)((char *)v594 + 4);
                  }
                  if ( v596 < (_QWORD *)((char *)v595 - 1) && *(_WORD *)v594 == *(_WORD *)v596 )
                  {
                    v596 = (_QWORD *)((char *)v596 + 2);
                    v594 = (_QWORD *)((char *)v594 + 2);
                  }
                  if ( v596 < v595 && *(_BYTE *)v594 == *(_BYTE *)v596 )
                    LODWORD(v596) = (_DWORD)v596 + 1;
                  v599 = (_DWORD)v596 - (_DWORD)v593;
                }
                else
                {
                  if ( *v593 == *v594 )
                  {
                    v596 = (_QWORD *)(v569 + 12);
                    goto LABEL_1072;
                  }
                  __asm { tzcnt   rcx, rax }
                  v599 = (unsigned int)_RCX >> 3;
                }
LABEL_1084:
                v602 = v599 + 4;
                v603 = (_QWORD *)(v569 + (int)(v599 + 4));
                if ( v603 == v595 && (unsigned __int64)v595 < v1222 )
                {
                  v604 = v554;
                  v605 = (_QWORD *)(v569 + v602);
                  if ( (unsigned __int64)v603 >= v1222 - 7 )
                    goto LABEL_1089;
                  if ( *v603 != *v554 )
                  {
                    __asm { tzcnt   rcx, rax }
                    v609 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v605 = v603 + 1;
                    v604 = v554 + 1;
LABEL_1089:
                    while ( (unsigned __int64)v605 < v1222 - 7 )
                    {
                      if ( *v605 != *v604 )
                      {
                        __asm { tzcnt   rax, rax }
                        v609 = ((unsigned int)_RAX >> 3) - (_DWORD)v603 + (_DWORD)v605;
                        goto LABEL_1104;
                      }
                      ++v605;
                      ++v604;
                    }
                    if ( (unsigned __int64)v605 < v1222 - 3 && *(_DWORD *)v604 == *(_DWORD *)v605 )
                    {
                      v605 = (_QWORD *)((char *)v605 + 4);
                      v604 = (_QWORD *)((char *)v604 + 4);
                    }
                    if ( (unsigned __int64)v605 < v1222 - 1 && *(_WORD *)v604 == *(_WORD *)v605 )
                    {
                      v605 = (_QWORD *)((char *)v605 + 2);
                      v604 = (_QWORD *)((char *)v604 + 2);
                    }
                    if ( (unsigned __int64)v605 < v1222 && *(_BYTE *)v604 == *(_BYTE *)v605 )
                      LODWORD(v605) = (_DWORD)v605 + 1;
                    v609 = (_DWORD)v605 - (_DWORD)v603;
                  }
LABEL_1104:
                  v602 += v609;
                }
                v611 = 0;
                if ( v1310 )
                {
                  v612 = 0LL;
                  if ( (__int64)(v1250 - v569) <= -(__int64)(v566 - v1217) )
                    v613 = v1217 - v566;
                  else
                    v613 = v1250 - v569;
                  v614 = v592 - 1;
                  v615 = -v613;
                  v616 = v569 - (_QWORD)v592;
                  while ( v615 > 3 )
                  {
                    if ( *v614 != *(_DWORD *)((char *)v614 + v616) )
                    {
                      _BitScanReverse(&v617, *v614 ^ *(_DWORD *)((char *)v614 + v616));
                      v611 -= (31 - v617) >> 3;
                      goto LABEL_1118;
                    }
                    v611 -= 4;
                    v615 -= 4;
                    v612 -= 4LL;
                    --v614;
                  }
                  if ( v612 > (int)v613 )
                  {
                    v618 = (_BYTE *)(v612 - 1 + v1282 + v566 - v1217);
                    do
                    {
                      if ( v618[v1346 - 3 + v1250 - (v566 - v1217) - v1282] != *v618 )
                        break;
                      --v618;
                      --v611;
                    }
                    while ( (__int64)&v618[1LL - (v566 - v1217) - v1282] > (int)v613 );
                  }
LABEL_1118:
                  v585 = v1222;
                }
                v619 = v602 - v611;
                v571 = v1173;
                if ( v619 > v1189 )
                {
                  v1189 = v619;
                  v1242 = v1294 - v566;
                  v1305 = v569 + v611;
                }
                v558 = v1209;
              }
            }
            else
            {
              v572 = v1189;
              v573 = (_DWORD *)((char *)v554 + v566 - v568);
              if ( *(_WORD *)(v567 + v1189 - 1) == *(_WORD *)((char *)v573 + v1189 - v565 - 1) && *v573 == v558 )
              {
                v574 = 0;
                if ( v565 )
                {
                  v575 = 0LL;
                  if ( (__int64)(v567 - v569) <= -(__int64)(v566 - v568) )
                    v576 = (_DWORD)v554 - (_DWORD)v573;
                  else
                    v576 = v567 - v569;
                  v577 = (_DWORD *)(v569 - 4);
                  v578 = -v576;
                  v579 = (char *)v573 - v569;
                  while ( v578 > 3 )
                  {
                    if ( *v577 != *(_DWORD *)((char *)v577 + (_QWORD)v579) )
                    {
                      _BitScanReverse(&v580, *v577 ^ *(_DWORD *)((char *)v577 + (_QWORD)v579));
                      v574 -= (31 - v580) >> 3;
                      goto LABEL_1038;
                    }
                    v574 -= 4;
                    v578 -= 4;
                    v575 -= 4LL;
                    --v577;
                  }
                  if ( v575 > v576 )
                  {
                    v581 = (_BYTE *)(v575 + v1259 - 4);
                    do
                    {
                      if ( *v581 != v581[(_QWORD)v554 + v566 - v568 - v1250 - v570 + 3] )
                        break;
                      --v581;
                      --v574;
                    }
                    while ( (__int64)&v581[4 - v1250 - v570] > v576 );
                    v568 = v1198;
                  }
LABEL_1038:
                  v572 = v1189;
                }
                v582 = (_QWORD *)(v569 + 4);
                v583 = v573 + 1;
                v584 = (_QWORD *)(v569 + 4);
                v585 = v1222;
                if ( v569 + 4 >= v1222 - 7 )
                {
                  while ( (unsigned __int64)v584 < v1222 - 7 )
                  {
                    if ( *v583 != *v584 )
                    {
                      __asm { tzcnt   rax, rax }
                      v588 = ((unsigned int)_RAX >> 3) - (_DWORD)v582 + (_DWORD)v584;
                      goto LABEL_1058;
                    }
                    ++v584;
LABEL_1046:
                    ++v583;
                  }
                  if ( (unsigned __int64)v584 < v1222 - 3 && *(_DWORD *)v583 == *(_DWORD *)v584 )
                  {
                    v584 = (_QWORD *)((char *)v584 + 4);
                    v583 = (_QWORD *)((char *)v583 + 4);
                  }
                  if ( (unsigned __int64)v584 < v1222 - 1 && *(_WORD *)v583 == *(_WORD *)v584 )
                  {
                    v584 = (_QWORD *)((char *)v584 + 2);
                    v583 = (_QWORD *)((char *)v583 + 2);
                  }
                  if ( (unsigned __int64)v584 < v1222 && *(_BYTE *)v583 == *(_BYTE *)v584 )
                    LODWORD(v584) = (_DWORD)v584 + 1;
                  v588 = (_DWORD)v584 - (_DWORD)v582;
                }
                else
                {
                  if ( *v583 == *v582 )
                  {
                    v584 = (_QWORD *)(v569 + 12);
                    goto LABEL_1046;
                  }
                  __asm { tzcnt   rcx, rax }
                  v588 = (unsigned int)_RCX >> 3;
                }
LABEL_1058:
                v591 = v588 - v574 + 4;
                if ( v591 > v572 )
                {
                  v1189 = v591;
                  v1305 = v569 + v574;
                  v1242 = v1294 - v566;
                }
                v558 = v1209;
                v571 = v1173;
              }
              else
              {
                v585 = v1222;
              }
            }
            if ( *((_WORD *)a1 + (unsigned __int16)v566 + 0x10000) != 1 )
              goto LABEL_1128;
            v620 = v566 - 1;
            if ( v571 )
            {
              if ( v1173 != 2 )
                goto LABEL_1128;
            }
            else
            {
              if ( (_BYTE)v558 != HIBYTE(v558) || (unsigned __int16)v558 != HIWORD(v558) )
              {
                v1173 = 1;
LABEL_1128:
                v621 = v1182;
LABEL_1129:
                v566 -= *((unsigned __int16 *)a1 + (unsigned __int16)v566 + 0x10000);
LABEL_1130:
                v565 = v1310;
                goto LABEL_1131;
              }
              v1173 = 2;
              v1331 = (unsigned int)LZ4HC_countPattern((_QWORD *)(v569 + 4), v585, v558) + 4LL;
            }
            v621 = v1182;
            if ( v620 < v1182 || v568 - v566 < 3 )
              goto LABEL_1129;
            if ( v620 >= v568 )
            {
              v624 = 0;
              v625 = &v1287[v620 - v568];
            }
            else
            {
              v624 = 1;
              v625 = (char *)(v1282 + v620 - v1217);
            }
            if ( *(_DWORD *)v625 != v1209 )
              goto LABEL_1128;
            if ( v624 )
              v585 = v1340;
            v627 = (unsigned int)LZ4HC_countPattern(v625 + 4, v585, v1209) + 4LL;
            if ( v624 )
            {
              if ( &v625[v627] == v626 )
              {
                v628 = LZ4HC_rotatePattern(v627, v1209);
                v627 += (unsigned int)LZ4HC_countPattern(v1287, v1222, v628);
              }
              v629 = (_QWORD *)v1282;
              v630 = v1287;
            }
            else
            {
              v630 = v1287;
              v629 = v1287;
            }
            v1352 = v1209;
            for ( m = (unsigned __int64)v625; m >= (unsigned __int64)v629 + 4 && *(_DWORD *)(m - 4) == v1209; m -= 4LL )
              ;
            v632 = (char *)&v1352 - m + 3;
            while ( m > (unsigned __int64)v629 && *(_BYTE *)(m - 1) == v632[m] )
              --m;
            v633 = (unsigned int)((_DWORD)v625 - m);
            if ( !v624 && &v625[-v633] == v630 && v1217 < v568 )
            {
              v634 = LZ4HC_rotatePattern((unsigned int)(m - (_DWORD)v625), v1209);
              v636 = v1340;
              v1353 = v634;
              while ( v636 >= v1282 + 4 && *(_DWORD *)(v636 - 4) == v634 )
                v636 -= 4LL;
              v637 = (char *)&v1353 - v636 + 3;
              while ( v636 > v1282 && *(_BYTE *)(v636 - 1) == v637[v636] )
                --v636;
              v569 = v1328;
              LODWORD(v633) = v1340 - v636 + v635;
            }
            v621 = v1182;
            v566 = v1182;
            if ( v620 - (unsigned int)v633 > v1182 )
              v566 = v620 - v633;
            v638 = v627 + v620 - v566;
            if ( v638 >= v1331 && v627 <= v1331 )
            {
              v639 = v620 + v627 - v1331;
              v566 = v568;
              if ( v568 - v639 - 1 >= 3 )
                v566 = v639;
              goto LABEL_1130;
            }
            v565 = v1310;
            if ( v568 - v566 - 1 < 3 )
            {
              v566 = v568;
              goto LABEL_1131;
            }
            if ( !v1310 )
            {
              v640 = v1331;
              if ( v638 < v1331 )
                v640 = v627 + v620 - v566;
              if ( v1189 < v640 )
              {
                if ( v568 + v569 - v566 - (unsigned __int64)v630 > 0xFFFF )
                  goto LABEL_1132;
                v1189 = v640;
                v1242 = v1294 - v566;
                v1305 = v569;
              }
              v641 = *((unsigned __int16 *)a1 + (unsigned __int16)v566 + 0x10000);
              if ( v641 > v566 )
                goto LABEL_1132;
              v566 -= v641;
              goto LABEL_1130;
            }
LABEL_1131:
            v554 = v1287;
            v72 = v566 < v621;
            v558 = v1209;
            v570 = v1346;
            v567 = v1250;
            if ( v72 )
              goto LABEL_1132;
          }
        }
        v398 = v1204;
        v547 = v1250;
        v456 = v1317;
        v622 = __PAIR64__(v1189, v557);
        v623 = v1189;
      }
      if ( v623 <= v530 )
        break;
      v457 = v1362;
      v642 = (unsigned __int64)&v398[v1362];
      if ( v1305 >= v642 + 3 )
      {
        if ( v547 < v642 )
        {
          if ( (__int64)(v547 - (_QWORD)v398) >= 18 )
          {
            v457 = v547 - (_DWORD)v398;
            v1362 = v547 - (_DWORD)v398;
          }
          else
          {
            if ( v1362 > 18 )
              v457 = 18;
            v1362 = v457;
            if ( (unsigned __int64)&v398[v457] > v547 + v530 - 4LL )
            {
              v457 = v547 + v530 - (_DWORD)v398 - 4;
              v1362 = v457;
            }
            v643 = (_DWORD)v398 + v457 - v547;
            if ( v643 > 0 )
            {
              v547 += v643;
              v1250 = v547;
              HIDWORD(v1247) = v530 - v643;
              v529 = v1247;
            }
          }
        }
        v379 = v1253;
        v644 = v385;
        v645 = v385;
        v646 = v385;
        v647 = v398 - (char *)v1253;
        v648 = v385 + 1;
        if ( a7 && (unsigned __int64)&v648[v647 / 0xFF + 8 + v647] > v1225 )
          goto LABEL_1307;
        if ( v647 < 0xF )
        {
          *v645 = 16 * v647;
        }
        else
        {
          v649 = v647 - 15;
          *v645 = -16;
          if ( v647 - 15 >= 0xFF )
          {
            v650 = v649 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v650) = -1;
            memset_thunk_772440563353939046(v648, SDWORD2(v650), v649 / 0xFF);
            v379 = v1253;
            v648 += v649 / 0xFF;
            v645 = v644;
            v646 = v644;
            v649 %= 0xFFuLL;
          }
          *v648++ = v649;
          v547 = v1250;
        }
        v651 = v648;
        do
        {
          *v651 = *(_QWORD *)((char *)v651 + (char *)v379 - v648);
          ++v651;
        }
        while ( v651 < (_QWORD *)&v648[v647] );
        v652 = &v648[v647];
        v457 = v1362;
        *v652 = v1257;
        v385 = v652 + 1;
        v653 = v1362 - 4LL;
        v1276 = v385;
        if ( a7 && (unsigned __int64)&v385[v653 / 0xFF + 6] > v1225 )
          goto LABEL_1317;
        v654 = *v646;
        if ( v653 < 0xF )
        {
          *v645 = v653 + v654;
        }
        else
        {
          v655 = v1362 - 19LL;
          *v645 = v654 + 15;
          if ( v655 >= 0x1FE )
          {
            v656 = v655 / 0x1FE;
            v655 %= 0x1FEuLL;
            do
            {
              *v385 = -1;
              v657 = v385 + 1;
              *v657 = -1;
              v385 = v657 + 1;
              --v656;
            }
            while ( v656 );
          }
          if ( v655 >= 0xFF )
          {
            LOBYTE(v655) = v655 + 1;
            *v385++ = -1;
          }
          *v385++ = v655;
          v1276 = v385;
        }
        v398 = (char *)v547;
        v658 = (unsigned int *)&v1204[v1362];
        v456 = v1317;
        v1257 = v529;
        v529 = v622;
        v457 = HIDWORD(v1257);
        v1247 = v622;
        v530 = HIDWORD(v622);
        v1204 = (char *)v547;
        v547 = v1305;
        v1253 = v658;
        v1362 = HIDWORD(v1257);
        v1250 = v1305;
        v1271 = v622;
      }
      else
      {
        if ( v1305 >= v642 )
        {
          if ( v547 < v642 )
          {
            v659 = (_DWORD)v398 + v1362 - v547;
            v1250 = v659 + v547;
            if ( v530 - v659 >= 4 )
            {
              HIDWORD(v1247) = v530 - v659;
              v529 = v1247;
            }
            else
            {
              v1250 = v1305;
              v529 = v622;
            }
          }
          v379 = v1253;
          v644 = v385;
          v660 = v385;
          v661 = v385;
          v662 = v385 + 1;
          v663 = v398 - (char *)v1253;
          if ( a7 && (unsigned __int64)&v662[v663 / 0xFF + 8 + v663] > v1225 )
            goto LABEL_1307;
          if ( v663 < 0xF )
          {
            *v660 = 16 * v663;
          }
          else
          {
            v664 = v663 - 15;
            *v660 = -16;
            if ( v663 - 15 >= 0xFF )
            {
              v665 = v664 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v665) = -1;
              memset_thunk_772440563353939046(v662, SDWORD2(v665), v664 / 0xFF);
              v379 = v1253;
              v662 += v664 / 0xFF;
              v457 = v1362;
              v660 = v644;
              LOBYTE(v664) = v664 / 0xFF + v664;
              v661 = v644;
            }
            *v662++ = v664;
          }
          v666 = v662;
          do
          {
            *v666 = *(_QWORD *)((char *)v666 + (char *)v379 - v662);
            ++v666;
          }
          while ( v666 < (_QWORD *)&v662[v663] );
          v667 = &v662[v663];
          v668 = v457 - 4LL;
          *v667 = v1257;
          v385 = v667 + 1;
          v1276 = v385;
          if ( a7 && (unsigned __int64)&v385[v668 / 0xFF + 6] > v1225 )
          {
LABEL_1317:
            v383 = v1225;
            goto LABEL_1308;
          }
          v669 = *v661;
          if ( v668 < 0xF )
          {
            *v660 = v669 + v668;
          }
          else
          {
            v670 = v457 - 19LL;
            *v660 = v669 + 15;
            if ( v670 >= 0x1FE )
            {
              v671 = v670 / 0x1FE;
              v670 %= 0x1FEuLL;
              do
              {
                *v385 = -1;
                v672 = v385 + 1;
                *v672 = -1;
                v385 = v672 + 1;
                --v671;
              }
              while ( v671 );
            }
            if ( v670 >= 0xFF )
            {
              LOBYTE(v670) = v670 + 1;
              *v385++ = -1;
            }
            *v385++ = v670;
            v1276 = v385;
          }
          v435 = v529;
          v455 = (char *)v1250;
          v673 = (unsigned int *)&v1204[v457];
          v1257 = v622;
          v398 = (char *)v1305;
          v1204 = (char *)v1305;
          v1253 = v673;
          v1323 = v529;
          v1265 = HIDWORD(v529);
          goto LABEL_816;
        }
        v1247 = v622;
        v547 = v1305;
        v530 = HIDWORD(v622);
        v529 = v622;
        v1250 = v1305;
        v1271 = v622;
      }
    }
    if ( v547 < (unsigned __int64)&v398[v1362] )
      v1362 = v547 - (_DWORD)v398;
    v674 = v1204;
    v379 = v1253;
    v644 = v385;
    v675 = v385;
    v676 = v385;
    v677 = v1204 - (char *)v1253;
    v678 = v385 + 1;
    if ( a7 )
    {
      if ( (unsigned __int64)&v678[v677 / 0xFF + 8 + v677] > v1225 )
        break;
    }
    if ( v677 < 0xF )
    {
      *v675 = 16 * v677;
    }
    else
    {
      v679 = v677 - 15;
      *v675 = -16;
      if ( v677 - 15 >= 0xFF )
      {
        v680 = v679 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v680) = -1;
        memset_thunk_772440563353939046(v678, SDWORD2(v680), v679 / 0xFF);
        v674 = v1204;
        v678 += v679 / 0xFF;
        v379 = v1253;
        v676 = v675;
        LOBYTE(v679) = v679 / 0xFF + v679;
      }
      *v678++ = v679;
      v547 = v1250;
    }
    v681 = v678;
    do
    {
      *v681 = *(_QWORD *)((char *)v681 + (char *)v379 - v678);
      ++v681;
    }
    while ( v681 < (_QWORD *)&v678[v677] );
    v682 = &v678[v677];
    v457 = v1362;
    *v682 = v1257;
    v683 = v682 + 1;
    v684 = v1362 - 4LL;
    if ( a7 && (unsigned __int64)&v683[v684 / 0xFF + 6] > v1225 )
    {
      v383 = v1225;
      goto LABEL_1308;
    }
    v685 = *v676;
    if ( v684 < 0xF )
    {
      *v675 = v685 + v684;
    }
    else
    {
      v686 = v1362 - 19LL;
      *v675 = v685 + 15;
      if ( v686 >= 0x1FE )
      {
        v687 = v686 / 0x1FE;
        v686 %= 0x1FEuLL;
        do
        {
          *v683 = -1;
          v688 = v683 + 1;
          *v688 = -1;
          v683 = v688 + 1;
          --v687;
        }
        while ( v687 );
      }
      if ( v686 >= 0xFF )
      {
        LOBYTE(v686) = v686 + 1;
        *v683++ = -1;
      }
      *v683++ = v686;
    }
    v1204 = (char *)v547;
    v1253 = (unsigned int *)&v674[v1362];
    v644 = v683;
    v689 = v683;
    v690 = v683;
    v691 = v547 - (_QWORD)v1253;
    v692 = v683 + 1;
    v379 = v1253;
    if ( a7 )
    {
      v383 = v1225;
      if ( (unsigned __int64)&v692[v691 / 0xFF + 8 + v691] > v1225 )
        goto LABEL_1305;
    }
    if ( v691 < 0xF )
    {
      *v689 = 16 * v691;
    }
    else
    {
      v693 = v691 - 15;
      *v689 = -16;
      if ( v691 - 15 >= 0xFF )
      {
        v694 = v693 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v694) = -1;
        memset_thunk_772440563353939046(v692, SDWORD2(v694), v693 / 0xFF);
        v379 = v1253;
        v692 += v693 / 0xFF;
        v690 = v689;
        LOBYTE(v693) = v693 / 0xFF + v693;
      }
      *v692++ = v693;
      v547 = v1250;
    }
    v695 = v692;
    do
    {
      *v695 = *(_QWORD *)((char *)v695 + (char *)v379 - v692);
      ++v695;
    }
    while ( v695 < (_QWORD *)&v692[v691] );
    v696 = &v692[v691];
    v383 = v1225;
    *v696 = v1247;
    v385 = v696 + 1;
    v697 = SHIDWORD(v1247) - 4LL;
    v1276 = v385;
    if ( a7 )
    {
      if ( (unsigned __int64)&v385[v697 / 0xFF + 6] > v1225 )
      {
LABEL_1305:
        LOWORD(v1257) = v529;
        v457 = HIDWORD(v529);
        goto LABEL_1308;
      }
    }
    v698 = *v690;
    if ( v697 < 0xF )
    {
      *v689 = v697 + v698;
    }
    else
    {
      v699 = SHIDWORD(v1247) - 19LL;
      *v689 = v698 + 15;
      if ( v699 >= 0x1FE )
      {
        v700 = v699 / 0x1FE;
        v699 %= 0x1FEuLL;
        do
        {
          *v385 = -1;
          v701 = v385 + 1;
          *v701 = -1;
          v385 = v701 + 1;
          --v700;
        }
        while ( v700 );
      }
      if ( v699 >= 0xFF )
      {
        LOBYTE(v699) = v699 + 1;
        *v385++ = -1;
      }
      *v385++ = v699;
      v1276 = v385;
    }
    v378 = (unsigned int *)(v547 + SHIDWORD(v1247));
LABEL_1304:
    v379 = v378;
    v1253 = v378;
LABEL_763:
    v382 = v1317;
    v7 = a1;
    v1204 = (char *)v378;
  }
  v457 = v1362;
LABEL_1307:
  v383 = v1225;
LABEL_1308:
  if ( a7 == 2 )
  {
    v715 = v1204;
    v385 = v644;
    v716 = v1204 - (char *)v379;
    v717 = (v1204 - (char *)v379 + 240) / 0xFFuLL + v1204 - (char *)v379 + 1;
    if ( (unsigned __int64)&v644[v717] <= v383 - 3 )
    {
      if ( v457 > 255 * (v383 - 3 - v717 - (unsigned __int64)v644) + 18 )
        v457 = 255 * (v383 - 3 - v717 - (_DWORD)v644) + 18;
      v1363 = v457;
      if ( (__int64)(v383 + v457 - v717 - (_QWORD)v644 + 2) >= 12 )
      {
        v718 = v644 + 1;
        if ( v716 < 0xF )
        {
          *v644 = 16 * v716;
        }
        else
        {
          v719 = v716 - 15;
          *v644 = -16;
          if ( v716 - 15 >= 0xFF )
          {
            v720 = v719 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v720) = -1;
            memset_thunk_772440563353939046(v644 + 1, SDWORD2(v720), v719 / 0xFF);
            v715 = v1204;
            v718 += v719 / 0xFF;
            v379 = v1253;
            v383 = v1225;
            LOBYTE(v719) = v719 / 0xFF + v719;
          }
          *v718++ = v719;
          v457 = v1363;
        }
        v721 = v718;
        v722 = (char *)v379 - v718;
        do
        {
          *v721 = *(_QWORD *)((char *)v721 + v722);
          ++v721;
        }
        while ( v721 < (_QWORD *)&v718[v716] );
        v723 = &v718[v716];
        v724 = v457 - 4LL;
        *v723 = v1257;
        v385 = v723 + 1;
        v725 = *v644;
        if ( v724 < 0xF )
        {
          *v644 = v725 + v724;
        }
        else
        {
          v726 = v457 - 19LL;
          *v644 = v725 + 15;
          if ( v726 >= 0x1FE )
          {
            v727 = v726 / 0x1FE;
            v726 %= 0x1FEuLL;
            do
            {
              *v385 = -1;
              v728 = v385 + 1;
              *v728 = -1;
              v385 = v728 + 1;
              --v727;
            }
            while ( v727 );
          }
          if ( v726 >= 0xFF )
          {
            LOBYTE(v726) = v726 + 1;
            *v385++ = -1;
          }
          *v385++ = v726;
        }
        v379 = (unsigned int *)&v715[v457];
        v1253 = v379;
      }
    }
LABEL_1333:
    LODWORD(v10) = (_DWORD)a3;
    v381 = v1300;
    goto LABEL_1334;
  }
  v731 = 0;
LABEL_1348:
  *((_BYTE *)a1 + 262183) = 1;
  return (unsigned int)v731;
}
