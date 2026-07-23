/*
 * XREFs of LZ4HC_compress_generic_dictCtx @ 0x1405F7104
 * Callers:
 *     LZ4HC_compress_generic @ 0x1405F49BC (LZ4HC_compress_generic.c)
 * Callees:
 *     LZ4HC_countPattern @ 0x1405FECE4 (LZ4HC_countPattern.c)
 *     LZ4HC_reverseCountPattern @ 0x1405FEDD0 (LZ4HC_reverseCountPattern.c)
 *     LZ4HC_rotatePattern @ 0x1405FEE18 (LZ4HC_rotatePattern.c)
 *     LZ4HC_setExternalDict @ 0x1405FEE30 (LZ4HC_setExternalDict.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall LZ4HC_compress_generic_dictCtx(__int64 a1, char *a2, _BYTE *a3, int *a4, int a5, __int64 a6, int a7)
{
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rax
  char *v15; // r9
  __int64 v16; // rdx
  char *v17; // r10
  _BYTE *v18; // r14
  char *v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r13
  _QWORD *v22; // rcx
  int v23; // esi
  __int64 v24; // r13
  unsigned int v25; // r15d
  __int64 v26; // rdx
  unsigned int v27; // ebx
  int v28; // r8d
  unsigned int v29; // r12d
  unsigned int v30; // r10d
  unsigned int v31; // r9d
  _DWORD *v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  char *v35; // r9
  unsigned int v36; // r11d
  int v37; // edi
  _DWORD *v38; // rdx
  _QWORD *v39; // r9
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  unsigned int v44; // ecx
  signed int v47; // ecx
  _DWORD *v48; // rdx
  char *v49; // r10
  char *v50; // rcx
  char *v51; // r8
  _QWORD *v52; // rdx
  unsigned int v55; // ecx
  signed int v58; // ebx
  char *v59; // r9
  _QWORD *v60; // rdx
  char *v61; // rcx
  unsigned int v65; // ecx
  unsigned int v67; // esi
  unsigned __int64 v68; // rdi
  unsigned int v69; // r8d
  bool v70; // cf
  unsigned __int64 v71; // r11
  int v72; // r15d
  _DWORD *v73; // rbx
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdi
  __int64 v76; // r9
  _DWORD *v77; // r11
  __int64 v78; // r8
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // r8
  unsigned int v83; // r11d
  __int64 v84; // rcx
  int v85; // eax
  int v86; // r11d
  unsigned int v87; // eax
  unsigned int v88; // r11d
  unsigned __int64 v89; // rcx
  unsigned int v90; // edi
  unsigned __int64 v91; // rdx
  unsigned int v92; // ecx
  char *v93; // rcx
  unsigned int v94; // r12d
  int v95; // esi
  unsigned __int64 v96; // rax
  unsigned int *v97; // rbx
  int v98; // r15d
  __int64 v99; // r8
  char *v100; // rcx
  __int64 v101; // r9
  unsigned int v102; // edi
  char *v103; // rdx
  unsigned int v104; // esi
  int v105; // r10d
  unsigned int v106; // r9d
  char *v107; // r8
  __int64 v108; // r13
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  __int64 v111; // r9
  unsigned int v112; // r13d
  unsigned __int64 v113; // r11
  int v114; // r10d
  int v115; // ecx
  __int64 v116; // rax
  char *v117; // rdi
  int v118; // r15d
  __int64 v119; // rbx
  int v120; // ecx
  char *v121; // r8
  int v122; // edx
  unsigned __int64 v123; // r10
  unsigned int v124; // eax
  unsigned __int64 v125; // r12
  _QWORD *v126; // r10
  _QWORD *v127; // rdx
  _QWORD *v128; // rcx
  __int64 v130; // r8
  char *v131; // rcx
  unsigned int v133; // ecx
  int v136; // ecx
  unsigned int v137; // edi
  __int64 v138; // rax
  __int64 v139; // r12
  char *v140; // r15
  _QWORD *v141; // rbx
  _QWORD *v142; // rdx
  _QWORD *v143; // r9
  _QWORD *v144; // rcx
  unsigned int v147; // ecx
  signed int v150; // esi
  _QWORD *v151; // r10
  _QWORD *v152; // rdx
  _QWORD *v153; // rcx
  unsigned int v157; // ecx
  int v159; // edx
  unsigned __int64 v160; // rdi
  int v161; // ecx
  char *v162; // r10
  int v163; // r8d
  unsigned __int64 v164; // rbx
  unsigned int v165; // eax
  __int64 v166; // r9
  char *v167; // rcx
  int v168; // esi
  unsigned int v169; // ebx
  unsigned __int64 v170; // rdi
  int v171; // r8d
  int v172; // r12d
  char *v173; // rbx
  char *v174; // r15
  unsigned __int64 v175; // rsi
  __int64 v176; // r9
  __int64 v177; // r8
  __int64 v178; // rcx
  char *v179; // rdx
  unsigned int v180; // eax
  unsigned int v181; // r15d
  __int64 v182; // r8
  __int64 v183; // rcx
  unsigned __int64 v184; // rcx
  unsigned int v185; // edi
  unsigned __int64 v186; // rdx
  unsigned int v187; // ecx
  unsigned __int64 v188; // r12
  int v189; // edx
  int v190; // ecx
  unsigned __int64 v191; // rcx
  _DWORD *v192; // r15
  int v193; // ebx
  __int64 v194; // r10
  __int64 v195; // rcx
  unsigned int v196; // r12d
  _QWORD *v197; // rdx
  unsigned int v198; // r11d
  unsigned int v199; // esi
  int v200; // r10d
  unsigned int v201; // r9d
  _DWORD *v202; // r8
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rcx
  __int64 v205; // rdx
  unsigned int v206; // r13d
  unsigned int v207; // edi
  _QWORD *v208; // r14
  int v209; // ecx
  _DWORD *v210; // r10
  __int64 v211; // r9
  int v212; // esi
  __int64 v213; // rbx
  unsigned int v214; // ecx
  _DWORD *v215; // r8
  int v216; // edx
  signed __int64 v217; // r11
  unsigned int v218; // eax
  _BYTE *v219; // rdx
  _QWORD *v220; // rdx
  _QWORD *v221; // r10
  _QWORD *v222; // rcx
  unsigned int v225; // ecx
  int v228; // ecx
  bool v229; // cc
  unsigned int v230; // ebx
  _QWORD *v231; // r11
  _DWORD *v232; // rsi
  _QWORD *v233; // r11
  _QWORD *v234; // rdx
  _QWORD *v235; // r9
  _QWORD *v236; // rcx
  unsigned int v239; // ecx
  signed int v242; // ebx
  _QWORD *v243; // r10
  _QWORD *v244; // rdx
  _QWORD *v245; // rcx
  unsigned int v249; // ecx
  int v251; // edx
  __int64 v252; // r11
  unsigned int v253; // ecx
  _DWORD *v254; // r9
  int v255; // r8d
  signed __int64 v256; // rsi
  unsigned int v257; // eax
  _BYTE *v258; // r8
  int v259; // ebx
  unsigned int v260; // esi
  unsigned int v261; // r9d
  int v262; // r12d
  _DWORD *v263; // rbx
  unsigned __int64 v264; // r11
  __int64 v265; // r9
  _DWORD *v266; // r11
  unsigned __int64 v267; // r15
  __int64 v268; // r8
  __int64 v269; // rcx
  _QWORD *v270; // rdx
  unsigned int v271; // eax
  __int64 v272; // r8
  unsigned int v273; // r11d
  __int64 v274; // rcx
  int v275; // eax
  int v276; // r11d
  unsigned __int64 v277; // rcx
  unsigned int v278; // esi
  unsigned __int64 v279; // rbx
  int v280; // eax
  unsigned __int64 v281; // rdx
  unsigned int v282; // ecx
  unsigned __int64 v283; // rcx
  int v284; // ecx
  unsigned __int64 v285; // r12
  _BYTE *v286; // r15
  _BYTE *v287; // r8
  char *v288; // r10
  _BYTE *v289; // r14
  unsigned __int64 v290; // r13
  unsigned __int128 v291; // rax
  _QWORD *v292; // rcx
  _WORD *v293; // r14
  unsigned __int64 v294; // rcx
  char v295; // al
  unsigned __int64 v296; // rcx
  unsigned __int64 v297; // rdx
  _BYTE *v298; // r14
  int v299; // ecx
  unsigned __int64 v300; // r12
  _BYTE *v301; // r8
  char *v302; // r10
  _BYTE *v303; // r14
  unsigned __int64 v304; // r13
  unsigned __int128 v305; // rax
  _QWORD *v306; // rcx
  _WORD *v307; // r14
  unsigned __int64 v308; // rcx
  char v309; // al
  unsigned __int64 v310; // rcx
  unsigned __int64 v311; // rdx
  _BYTE *v312; // r14
  char *v313; // r10
  char *v314; // rbx
  char *v315; // r13
  char *v316; // r9
  unsigned __int64 v317; // rsi
  _BYTE *v318; // r14
  unsigned __int64 v319; // r12
  unsigned __int128 v320; // rax
  _QWORD *v321; // rcx
  _WORD *v322; // r14
  _BYTE *v323; // r14
  unsigned __int64 v324; // rcx
  char v325; // al
  unsigned __int64 v326; // rcx
  unsigned __int64 v327; // rdx
  _BYTE *v328; // r14
  char *v329; // r13
  char *v330; // r9
  unsigned __int64 v331; // rsi
  _BYTE *v332; // r14
  unsigned __int64 v333; // r12
  unsigned __int128 v334; // rax
  _QWORD *v335; // rcx
  _WORD *v336; // r14
  unsigned __int64 v337; // rcx
  char v338; // al
  unsigned __int64 v339; // rcx
  unsigned __int64 v340; // rdx
  _BYTE *v341; // r14
  _BYTE *v342; // r12
  char *v343; // r13
  _BYTE *v344; // r14
  unsigned __int64 v345; // rdi
  unsigned __int64 v346; // rsi
  unsigned __int128 v347; // rax
  _QWORD *v348; // rcx
  _WORD *v349; // r14
  unsigned __int64 v350; // rcx
  char v351; // al
  unsigned __int64 v352; // rcx
  unsigned __int64 v353; // rdx
  _BYTE *v354; // r14
  char *v355; // r9
  unsigned __int64 v356; // rdi
  unsigned __int64 v357; // r8
  _BYTE *v358; // r14
  unsigned __int64 v359; // rsi
  unsigned __int128 v360; // rax
  _QWORD *v361; // rcx
  __int64 v362; // r10
  _WORD *v363; // r14
  unsigned __int64 v364; // rcx
  char v365; // al
  unsigned __int64 v366; // rcx
  unsigned __int64 v367; // rdx
  _BYTE *v368; // r14
  size_t v369; // rbx
  _BYTE *v370; // r8
  int v371; // ebx
  int v372; // esi
  size_t v373; // rdi
  _BYTE *v374; // r14
  unsigned __int128 v375; // rax
  int v376; // r14d
  unsigned int v378; // r13d
  __int64 v379; // rax
  char *v380; // rbx
  __int64 v381; // rdx
  char *v382; // r10
  _BYTE *v383; // r14
  char *v384; // r15
  unsigned __int64 v385; // r8
  unsigned __int64 v386; // r13
  int v387; // r15d
  __int64 v388; // rdx
  _QWORD *v389; // r12
  unsigned int v390; // esi
  __int64 v391; // r13
  unsigned int v392; // edi
  unsigned int v393; // ebx
  unsigned int v394; // r9d
  unsigned int v395; // eax
  unsigned int v396; // r10d
  int v397; // r8d
  _DWORD *v398; // r8
  unsigned __int64 v399; // rdx
  unsigned __int64 v400; // rcx
  __int64 v401; // r9
  char *v402; // r10
  unsigned int v403; // r11d
  unsigned int v404; // r14d
  int v405; // esi
  _DWORD *v406; // rdx
  _QWORD *v407; // r9
  _QWORD *v408; // rdx
  _QWORD *v409; // rcx
  unsigned int v412; // ecx
  signed int v415; // ecx
  _DWORD *v416; // rdx
  char *v417; // r8
  char *v418; // r10
  _QWORD *v419; // rdx
  char *v420; // rcx
  unsigned int v423; // ecx
  signed int v426; // ebx
  char *v427; // r9
  _QWORD *v428; // rdx
  char *v429; // rcx
  unsigned int v433; // ecx
  unsigned int v435; // edi
  unsigned __int64 v436; // rsi
  unsigned int v437; // r9d
  unsigned __int64 v438; // r11
  int v439; // r15d
  _DWORD *v440; // rbx
  unsigned __int64 v441; // r11
  unsigned __int64 v442; // rsi
  _DWORD *v443; // r11
  unsigned int v444; // eax
  __int64 v445; // r9
  _QWORD *v446; // rdx
  unsigned int v447; // eax
  unsigned int v448; // r11d
  unsigned int v449; // eax
  int v450; // eax
  int v451; // r11d
  unsigned int v452; // eax
  unsigned int v453; // r11d
  unsigned __int64 v454; // rcx
  unsigned int v455; // edi
  unsigned __int64 v456; // rdx
  unsigned int v457; // ecx
  char *v458; // rdx
  unsigned __int64 v459; // r9
  int v460; // esi
  char *v461; // rcx
  char *v462; // rbx
  __int64 v463; // r8
  char *v464; // rdx
  __int64 v465; // r12
  unsigned int v466; // edi
  int v467; // r10d
  unsigned int v468; // esi
  unsigned int v469; // r15d
  unsigned int v470; // r9d
  char *v471; // r8
  unsigned __int64 v472; // rdx
  unsigned __int64 v473; // rcx
  unsigned __int64 v474; // rcx
  unsigned int v475; // ebx
  __int64 v476; // rdx
  unsigned int v477; // r13d
  unsigned __int64 v478; // r11
  __int64 v479; // r15
  __int64 v480; // r9
  unsigned int v481; // ecx
  int v482; // ebx
  char *v483; // r10
  int v484; // esi
  __int64 v485; // rdi
  int v486; // ecx
  char *v487; // r8
  int v488; // edx
  unsigned __int64 v489; // rbx
  unsigned int v490; // eax
  char *v491; // rdx
  char *v492; // r15
  _QWORD *v493; // rdx
  _QWORD *v494; // r10
  _QWORD *v495; // rcx
  unsigned int v498; // ecx
  int v501; // ecx
  __int64 v502; // rax
  unsigned int v503; // edi
  char *v504; // r15
  _QWORD *v505; // rbx
  _QWORD *v506; // rdx
  _QWORD *v507; // r9
  _QWORD *v508; // rcx
  unsigned int v511; // ecx
  signed int v514; // esi
  _QWORD *v515; // r10
  _QWORD *v516; // rdx
  _QWORD *v517; // rcx
  unsigned int v521; // ecx
  int v523; // edx
  __int64 v524; // rdi
  int v525; // ecx
  char *v526; // r9
  int v527; // r8d
  unsigned __int64 v528; // rbx
  unsigned int v529; // eax
  __int64 v530; // r8
  int v531; // esi
  int v532; // r12d
  char *v533; // rbx
  unsigned __int64 v534; // rsi
  unsigned int v535; // eax
  __int64 v536; // r9
  char *v537; // rdx
  unsigned int v538; // eax
  bool v539; // zf
  unsigned int v540; // r15d
  unsigned int v541; // eax
  unsigned __int64 v542; // rcx
  unsigned int v543; // edi
  unsigned __int64 v544; // rdx
  unsigned int v545; // ecx
  unsigned __int64 v546; // rdi
  int v547; // r8d
  unsigned __int64 v548; // r12
  int v549; // edx
  int v550; // ecx
  unsigned __int64 v551; // rcx
  _DWORD *v552; // r15
  __int64 v553; // rdx
  _QWORD *v554; // rbx
  __int64 v555; // r9
  unsigned int v556; // ecx
  unsigned int v557; // esi
  int v558; // r11d
  unsigned int v559; // r12d
  unsigned int v560; // r10d
  unsigned int v561; // r9d
  _DWORD *v562; // r8
  unsigned __int64 v563; // rdx
  unsigned __int64 v564; // rcx
  __int64 v565; // rdx
  unsigned int v566; // r13d
  unsigned int v567; // edi
  _QWORD *v568; // r14
  unsigned __int64 v569; // r9
  int v570; // ecx
  int v571; // r11d
  _DWORD *v572; // rbx
  int v573; // esi
  __int64 v574; // r11
  unsigned int v575; // ecx
  _DWORD *v576; // r8
  int v577; // edx
  signed __int64 v578; // r10
  unsigned int v579; // eax
  _BYTE *v580; // rdx
  _QWORD *v581; // r10
  _QWORD *v582; // rdx
  _QWORD *v583; // rcx
  unsigned int v586; // ecx
  unsigned int v589; // ebx
  int v590; // ecx
  unsigned int v591; // r11d
  _DWORD *v592; // rsi
  unsigned __int64 v593; // r8
  _QWORD *v594; // r11
  _QWORD *v595; // rdx
  _QWORD *v596; // rcx
  unsigned int v599; // ecx
  signed int v602; // ebx
  _QWORD *v603; // r10
  _QWORD *v604; // rdx
  _QWORD *v605; // rcx
  unsigned int v609; // ecx
  int v611; // edx
  __int64 v612; // r11
  unsigned int v613; // ecx
  int v614; // r8d
  signed __int64 v615; // rsi
  unsigned int v616; // eax
  _BYTE *v617; // r8
  int v618; // ebx
  unsigned int v619; // esi
  unsigned int v620; // r12d
  int v621; // r12d
  _DWORD *v622; // rbx
  unsigned __int64 v623; // r11
  _DWORD *v624; // r11
  unsigned __int64 v625; // r15
  unsigned int v626; // eax
  __int64 v627; // r9
  _QWORD *v628; // rdx
  unsigned int v629; // eax
  unsigned int v630; // r11d
  unsigned int v631; // eax
  int v632; // eax
  int v633; // r11d
  unsigned __int64 v634; // rcx
  unsigned int v635; // esi
  unsigned __int64 v636; // rbx
  int v637; // eax
  unsigned __int64 v638; // rdx
  unsigned int v639; // ecx
  unsigned __int64 v640; // rcx
  int v641; // ecx
  char *v642; // r11
  _BYTE *v643; // r15
  unsigned __int64 v644; // r13
  _BYTE *v645; // r8
  char *v646; // r10
  _BYTE *v647; // r14
  unsigned __int64 v648; // r12
  unsigned __int128 v649; // rax
  _QWORD *v650; // rcx
  _WORD *v651; // r14
  unsigned __int64 v652; // rcx
  char v653; // al
  unsigned __int64 v654; // rcx
  unsigned __int64 v655; // rdx
  _BYTE *v656; // r14
  char *v657; // r11
  int v658; // ecx
  char *v659; // r11
  unsigned __int64 v660; // r13
  _BYTE *v661; // r8
  char *v662; // r10
  _BYTE *v663; // r14
  unsigned __int64 v664; // r12
  unsigned __int128 v665; // rax
  _QWORD *v666; // rcx
  _WORD *v667; // r14
  unsigned __int64 v668; // rcx
  char v669; // al
  unsigned __int64 v670; // rcx
  unsigned __int64 v671; // rdx
  _BYTE *v672; // r14
  char *v673; // r13
  char *v674; // r9
  _BYTE *v675; // r14
  unsigned __int64 v676; // rsi
  unsigned __int64 v677; // r12
  unsigned __int128 v678; // rax
  _QWORD *v679; // rcx
  _WORD *v680; // r14
  _BYTE *v681; // r14
  unsigned __int64 v682; // rcx
  char v683; // al
  unsigned __int64 v684; // rcx
  unsigned __int64 v685; // rdx
  _BYTE *v686; // r14
  char *v687; // r10
  char *v688; // r13
  char *v689; // r9
  unsigned __int64 v690; // rsi
  _BYTE *v691; // r14
  unsigned __int64 v692; // r12
  unsigned __int128 v693; // rax
  _QWORD *v694; // rcx
  _WORD *v695; // r14
  unsigned __int64 v696; // rcx
  char v697; // al
  unsigned __int64 v698; // rcx
  unsigned __int64 v699; // rdx
  _BYTE *v700; // r14
  _BYTE *v701; // r12
  char *v702; // r13
  _BYTE *v703; // r14
  unsigned __int64 v704; // rdi
  unsigned __int64 v705; // rsi
  unsigned __int128 v706; // rax
  _QWORD *v707; // rcx
  _WORD *v708; // r14
  unsigned __int64 v709; // rcx
  char v710; // al
  unsigned __int64 v711; // rcx
  unsigned __int64 v712; // rdx
  _BYTE *v713; // r14
  char *v714; // r9
  unsigned __int64 v715; // rdi
  unsigned __int64 v716; // r8
  _BYTE *v717; // r14
  unsigned __int64 v718; // rsi
  unsigned __int128 v719; // rax
  _QWORD *v720; // rcx
  __int64 v721; // rbx
  _WORD *v722; // r14
  unsigned __int64 v723; // rcx
  char v724; // al
  unsigned __int64 v725; // rcx
  unsigned __int64 v726; // rdx
  _BYTE *v727; // r14
  int v728; // r14d
  size_t v729; // r15
  _BYTE *v730; // r8
  int v731; // esi
  size_t v732; // rdi
  _BYTE *v733; // r14
  unsigned __int128 v734; // rax
  int v735; // r14d
  __int64 v736; // rax
  _BYTE *v737; // r14
  __int64 v738; // rdx
  unsigned int *v739; // r10
  char *v740; // r9
  _BYTE *v741; // rcx
  char *v742; // rbx
  unsigned __int64 v743; // r8
  _BYTE *v744; // rsi
  __int64 v745; // rdx
  _QWORD *v746; // r12
  unsigned int v747; // ebx
  __int64 v748; // r13
  __int64 v749; // rsi
  unsigned int v750; // edi
  _QWORD *v751; // r8
  unsigned int v752; // r15d
  unsigned __int64 v753; // r9
  int v754; // r8d
  unsigned int v755; // r10d
  unsigned int v756; // r9d
  _DWORD *v757; // r8
  unsigned __int64 v758; // rdx
  unsigned __int64 v759; // rcx
  _DWORD *v760; // r10
  unsigned int v761; // r11d
  unsigned int v762; // r14d
  int v763; // esi
  _DWORD *v764; // rdx
  _QWORD *v765; // r9
  _QWORD *v766; // rdx
  _QWORD *v767; // rcx
  unsigned int v770; // ecx
  signed int v773; // ecx
  _DWORD *v774; // rdx
  _QWORD *v775; // r8
  _QWORD *v776; // r10
  _QWORD *v777; // rdx
  _QWORD *v778; // rcx
  unsigned int v781; // ecx
  signed int v784; // ebx
  _QWORD *v785; // r9
  _QWORD *v786; // rdx
  _QWORD *v787; // rcx
  unsigned int v791; // ecx
  unsigned int v793; // edi
  unsigned __int64 v794; // rsi
  int v795; // edx
  __int64 v796; // r13
  __int64 v797; // r12
  __int64 v798; // r15
  unsigned int v799; // esi
  int v800; // r11d
  unsigned int v801; // r9d
  _DWORD *v802; // rdx
  char *v803; // rbx
  char *v804; // rcx
  char *v805; // r8
  _QWORD *v806; // rdx
  int v808; // r15d
  _DWORD *v809; // rbx
  unsigned __int64 v810; // r11
  unsigned __int64 v811; // rsi
  _DWORD *v812; // r11
  unsigned int v813; // eax
  __int64 v814; // r9
  _QWORD *v815; // rdx
  unsigned int v816; // eax
  unsigned int v817; // r8d
  unsigned int v818; // r11d
  unsigned int v819; // eax
  int v820; // eax
  int v821; // r11d
  unsigned int v822; // eax
  unsigned int v823; // r11d
  unsigned __int64 v824; // rcx
  unsigned int v825; // edi
  unsigned __int64 v826; // rdx
  unsigned int v827; // ecx
  unsigned int v829; // ecx
  signed int v832; // ecx
  int v833; // ecx
  unsigned __int64 v834; // r11
  _DWORD *v835; // rdx
  unsigned __int64 v836; // r8
  int v837; // r9d
  char *v838; // rcx
  char *v839; // rbx
  __int64 v840; // r12
  char *v841; // rdx
  unsigned int v842; // esi
  int v843; // r15d
  __int64 v844; // rcx
  unsigned int v845; // r15d
  char *v846; // rdi
  unsigned int v847; // r9d
  int v848; // r10d
  int v849; // r8d
  char *v850; // r8
  unsigned __int64 v851; // rdx
  unsigned __int64 v852; // rcx
  __int64 v853; // rdx
  unsigned int v854; // r13d
  __int64 v855; // r15
  __int64 v856; // r11
  int v857; // ecx
  char *v858; // rdi
  int v859; // esi
  __int64 v860; // rbx
  int v861; // ecx
  char *v862; // r9
  int v863; // edx
  signed __int64 v864; // r10
  unsigned int v865; // eax
  char *v866; // rdx
  _QWORD *v867; // r10
  _QWORD *v868; // rdx
  _QWORD *v869; // rcx
  unsigned int v872; // ecx
  int v875; // ecx
  unsigned int v876; // r12d
  unsigned int v877; // edi
  char *v878; // r15
  _QWORD *v879; // rdx
  char *v880; // r9
  char *v881; // rbx
  char *v882; // rcx
  unsigned int v885; // ecx
  signed int v888; // esi
  char *v889; // r10
  _QWORD *v890; // rdx
  char *v891; // rcx
  unsigned int v895; // ecx
  int v897; // edx
  __int64 v898; // rdi
  int v899; // ecx
  char *v900; // r10
  int v901; // r8d
  signed __int64 v902; // rbx
  unsigned int v903; // eax
  char *v904; // r8
  int v905; // esi
  int v906; // r10d
  char *v907; // r9
  __int64 v908; // rbx
  __int64 v909; // r8
  unsigned int v910; // edi
  int v911; // r13d
  unsigned int v912; // r12d
  __int64 v913; // r11
  int v914; // eax
  _DWORD *v915; // r15
  _QWORD *v916; // rbx
  _QWORD *v917; // rdx
  unsigned __int64 v918; // r8
  _QWORD *v919; // rcx
  int v921; // r15d
  char *v922; // rbx
  char *v923; // rsi
  unsigned __int64 v924; // rdi
  unsigned int v925; // eax
  __int64 v926; // r9
  char *v927; // r13
  char *v928; // rdx
  unsigned int v929; // eax
  unsigned int v930; // r8d
  unsigned int v931; // esi
  unsigned int v932; // eax
  unsigned int v933; // eax
  unsigned __int64 v934; // rcx
  unsigned int v935; // edi
  unsigned __int64 v936; // rdx
  unsigned int v937; // ecx
  unsigned int v939; // ecx
  unsigned int v942; // esi
  int v943; // edx
  __int64 v944; // r8
  int v945; // ecx
  _DWORD *v946; // r10
  int v947; // r9d
  signed __int64 v948; // rdi
  unsigned int v949; // eax
  int v950; // esi
  int v951; // ecx
  unsigned __int64 v952; // rdi
  int v953; // esi
  __int64 v954; // r9
  _BYTE *v955; // rcx
  unsigned __int64 v956; // r12
  int v957; // edx
  int v958; // ecx
  unsigned __int64 v959; // rcx
  _DWORD *v960; // r11
  __int64 v961; // rbx
  __int64 v962; // rcx
  unsigned int v963; // r12d
  char *v964; // rdx
  unsigned int v965; // r13d
  char *v966; // r8
  int v967; // r10d
  int v968; // r15d
  unsigned int v969; // r9d
  char *v970; // r8
  unsigned __int64 v971; // rdx
  unsigned __int64 v972; // rcx
  unsigned int v973; // r13d
  __int64 v974; // rdx
  unsigned __int64 v975; // r10
  char *v976; // rbx
  int v977; // esi
  __int64 v978; // r11
  int v979; // ecx
  _DWORD *v980; // r9
  int v981; // edx
  char *v982; // r10
  unsigned int v983; // eax
  _BYTE *v984; // rdx
  _QWORD *v985; // r10
  _QWORD *v986; // rdx
  _QWORD *v987; // rcx
  unsigned int v990; // ecx
  int v993; // ecx
  char *v994; // rsi
  _QWORD *v995; // rdx
  _QWORD *v996; // r9
  _QWORD *v997; // r11
  _QWORD *v998; // rcx
  unsigned int v1001; // ecx
  signed int v1004; // ebx
  _QWORD *v1005; // r10
  _QWORD *v1006; // rdx
  _QWORD *v1007; // rcx
  unsigned int v1011; // ecx
  int v1013; // edx
  __int64 v1014; // r11
  int v1015; // ecx
  _DWORD *v1016; // r10
  int v1017; // r8d
  char *v1018; // rsi
  unsigned int v1019; // eax
  _BYTE *v1020; // r8
  int v1021; // ebx
  unsigned int v1022; // esi
  unsigned int v1023; // r15d
  unsigned __int64 v1024; // r11
  int v1025; // r12d
  char *v1026; // rbx
  char *v1027; // r11
  unsigned __int64 v1028; // r15
  unsigned int v1029; // eax
  __int64 v1030; // r9
  char *v1031; // r13
  char *v1032; // rdx
  unsigned int v1033; // eax
  unsigned int v1034; // r8d
  unsigned int v1035; // r11d
  unsigned int v1036; // eax
  int v1037; // eax
  int v1038; // r11d
  unsigned __int64 v1039; // rcx
  unsigned int v1040; // esi
  unsigned __int64 v1041; // rdx
  unsigned int v1042; // ecx
  int v1043; // r10d
  __int64 v1044; // r9
  __int64 v1045; // r8
  unsigned int v1046; // ebx
  int v1047; // r13d
  unsigned int v1048; // r12d
  __int64 v1049; // rdi
  __int64 v1050; // r14
  int v1051; // eax
  _DWORD *v1052; // r15
  _QWORD *v1053; // rdx
  char *v1054; // r8
  char *v1055; // r11
  char *v1056; // rcx
  unsigned int v1059; // ecx
  unsigned int v1062; // esi
  int v1063; // edx
  __int64 v1064; // r8
  int v1065; // ecx
  _DWORD *v1066; // r10
  int v1067; // r9d
  unsigned __int64 v1068; // rbx
  unsigned int v1069; // eax
  int v1070; // esi
  int v1071; // ecx
  unsigned __int64 v1072; // rbx
  int v1073; // eax
  __int64 v1074; // r9
  _BYTE *v1075; // rcx
  _DWORD *v1076; // r13
  char *v1077; // rcx
  int v1078; // ecx
  _DWORD *v1079; // rsi
  _BYTE *v1080; // r15
  unsigned __int64 v1081; // r13
  _BYTE *v1082; // r8
  char *v1083; // r10
  _BYTE *v1084; // r14
  unsigned __int64 v1085; // r12
  unsigned __int128 v1086; // rax
  _QWORD *v1087; // rcx
  _WORD *v1088; // r14
  unsigned __int64 v1089; // rcx
  char v1090; // al
  unsigned __int64 v1091; // rcx
  unsigned __int64 v1092; // rdx
  _BYTE *v1093; // r14
  int v1094; // ecx
  _DWORD *v1095; // rsi
  unsigned __int64 v1096; // r12
  _BYTE *v1097; // r8
  char *v1098; // r10
  _BYTE *v1099; // r14
  unsigned __int64 v1100; // r13
  unsigned __int128 v1101; // rax
  _QWORD *v1102; // rcx
  _WORD *v1103; // r14
  unsigned __int64 v1104; // rcx
  char v1105; // al
  unsigned __int64 v1106; // rcx
  unsigned __int64 v1107; // rdx
  _BYTE *v1108; // r14
  char *v1109; // rbx
  char *v1110; // r13
  char *v1111; // r9
  _BYTE *v1112; // r14
  unsigned __int64 v1113; // rsi
  unsigned __int64 v1114; // r12
  unsigned __int128 v1115; // rax
  _QWORD *v1116; // rcx
  _WORD *v1117; // r14
  _BYTE *v1118; // r14
  unsigned __int64 v1119; // rcx
  char v1120; // al
  unsigned __int64 v1121; // rcx
  unsigned __int64 v1122; // rdx
  _BYTE *v1123; // r14
  char *v1124; // r10
  char *v1125; // r13
  char *v1126; // r9
  unsigned __int64 v1127; // rsi
  _BYTE *v1128; // r14
  unsigned __int64 v1129; // r12
  unsigned __int128 v1130; // rax
  _QWORD *v1131; // rcx
  _WORD *v1132; // r14
  unsigned __int64 v1133; // rcx
  char v1134; // al
  unsigned __int64 v1135; // rcx
  unsigned __int64 v1136; // rdx
  _BYTE *v1137; // r14
  _BYTE *v1138; // r12
  char *v1139; // r13
  _BYTE *v1140; // r14
  unsigned __int64 v1141; // rdi
  unsigned __int64 v1142; // rsi
  unsigned __int128 v1143; // rax
  _QWORD *v1144; // rcx
  _WORD *v1145; // r14
  unsigned __int64 v1146; // rcx
  char v1147; // al
  unsigned __int64 v1148; // rcx
  unsigned __int64 v1149; // rdx
  _BYTE *v1150; // r14
  _DWORD *v1151; // r10
  unsigned __int64 v1152; // rdi
  unsigned __int64 v1153; // r8
  _BYTE *v1154; // r14
  unsigned __int64 v1155; // rsi
  unsigned __int128 v1156; // rax
  _QWORD *v1157; // rcx
  __int64 v1158; // rbx
  _WORD *v1159; // r14
  unsigned __int64 v1160; // rcx
  char v1161; // al
  unsigned __int64 v1162; // rcx
  unsigned __int64 v1163; // rdx
  _BYTE *v1164; // r14
  int v1165; // ebx
  size_t v1166; // rbx
  _BYTE *v1167; // r8
  int v1168; // esi
  size_t v1169; // rdi
  _BYTE *v1170; // r14
  unsigned __int128 v1171; // rax
  int v1172; // r14d
  int v1173; // [rsp+20h] [rbp-E0h]
  int v1174; // [rsp+20h] [rbp-E0h]
  unsigned int v1175; // [rsp+20h] [rbp-E0h]
  unsigned int v1176; // [rsp+20h] [rbp-E0h]
  unsigned int v1177; // [rsp+20h] [rbp-E0h]
  int v1178; // [rsp+20h] [rbp-E0h]
  int v1179; // [rsp+20h] [rbp-E0h]
  int v1180; // [rsp+20h] [rbp-E0h]
  unsigned int v1181; // [rsp+20h] [rbp-E0h]
  int v1182; // [rsp+24h] [rbp-DCh]
  int v1183; // [rsp+24h] [rbp-DCh]
  int v1184; // [rsp+24h] [rbp-DCh]
  unsigned int v1185; // [rsp+24h] [rbp-DCh]
  unsigned int v1186; // [rsp+24h] [rbp-DCh]
  unsigned int v1187; // [rsp+24h] [rbp-DCh]
  int v1188; // [rsp+24h] [rbp-DCh]
  int v1189; // [rsp+24h] [rbp-DCh]
  unsigned int v1190; // [rsp+28h] [rbp-D8h]
  int v1191; // [rsp+28h] [rbp-D8h]
  unsigned int v1192; // [rsp+28h] [rbp-D8h]
  unsigned int v1193; // [rsp+28h] [rbp-D8h]
  unsigned int v1194; // [rsp+28h] [rbp-D8h]
  unsigned int v1195; // [rsp+28h] [rbp-D8h]
  unsigned int v1196; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1197; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1198; // [rsp+2Ch] [rbp-D4h]
  int v1199; // [rsp+2Ch] [rbp-D4h]
  int v1200; // [rsp+2Ch] [rbp-D4h]
  int v1201; // [rsp+2Ch] [rbp-D4h]
  int v1202; // [rsp+2Ch] [rbp-D4h]
  unsigned int v1203; // [rsp+30h] [rbp-D0h]
  unsigned int v1204; // [rsp+30h] [rbp-D0h]
  int v1205; // [rsp+30h] [rbp-D0h]
  unsigned int v1206; // [rsp+30h] [rbp-D0h]
  unsigned int v1207; // [rsp+30h] [rbp-D0h]
  unsigned int v1208; // [rsp+30h] [rbp-D0h]
  int v1209; // [rsp+30h] [rbp-D0h]
  int v1210; // [rsp+30h] [rbp-D0h]
  char *v1211; // [rsp+38h] [rbp-C8h]
  char *v1212; // [rsp+38h] [rbp-C8h]
  _DWORD *v1213; // [rsp+38h] [rbp-C8h]
  unsigned int v1214; // [rsp+40h] [rbp-C0h]
  unsigned int v1215; // [rsp+40h] [rbp-C0h]
  unsigned int v1216; // [rsp+40h] [rbp-C0h]
  unsigned int v1217; // [rsp+40h] [rbp-C0h]
  unsigned int v1218; // [rsp+40h] [rbp-C0h]
  unsigned int v1219; // [rsp+40h] [rbp-C0h]
  int v1220; // [rsp+40h] [rbp-C0h]
  int v1221; // [rsp+40h] [rbp-C0h]
  unsigned int v1222; // [rsp+40h] [rbp-C0h]
  unsigned int v1223; // [rsp+40h] [rbp-C0h]
  unsigned int v1224; // [rsp+44h] [rbp-BCh]
  unsigned int v1225; // [rsp+44h] [rbp-BCh]
  unsigned int v1226; // [rsp+44h] [rbp-BCh]
  unsigned int v1227; // [rsp+44h] [rbp-BCh]
  unsigned int v1228; // [rsp+44h] [rbp-BCh]
  unsigned int v1229; // [rsp+44h] [rbp-BCh]
  unsigned int v1230; // [rsp+44h] [rbp-BCh]
  unsigned int v1231; // [rsp+44h] [rbp-BCh]
  unsigned int v1232; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v1233; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1234; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v1235; // [rsp+48h] [rbp-B8h]
  int v1236; // [rsp+50h] [rbp-B0h]
  unsigned int v1237; // [rsp+50h] [rbp-B0h]
  unsigned int v1238; // [rsp+50h] [rbp-B0h]
  unsigned int v1239; // [rsp+50h] [rbp-B0h]
  unsigned int v1240; // [rsp+50h] [rbp-B0h]
  unsigned int v1241; // [rsp+50h] [rbp-B0h]
  unsigned int v1242; // [rsp+50h] [rbp-B0h]
  unsigned int v1243; // [rsp+50h] [rbp-B0h]
  unsigned int v1244; // [rsp+50h] [rbp-B0h]
  unsigned int v1245; // [rsp+50h] [rbp-B0h]
  char *v1246; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1247; // [rsp+58h] [rbp-A8h]
  char *v1248; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v1249; // [rsp+60h] [rbp-A0h]
  char *v1250; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1251; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v1252; // [rsp+68h] [rbp-98h]
  unsigned __int64 v1253; // [rsp+68h] [rbp-98h]
  _BYTE *v1254; // [rsp+68h] [rbp-98h]
  unsigned __int64 v1255; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1256; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1257; // [rsp+70h] [rbp-90h]
  unsigned __int64 v1258; // [rsp+78h] [rbp-88h]
  _QWORD *v1259; // [rsp+78h] [rbp-88h]
  _BYTE *v1260; // [rsp+78h] [rbp-88h]
  char *v1261; // [rsp+78h] [rbp-88h]
  _DWORD *v1262; // [rsp+78h] [rbp-88h]
  unsigned int v1263; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1264; // [rsp+80h] [rbp-80h]
  int v1265; // [rsp+80h] [rbp-80h]
  unsigned int v1266; // [rsp+80h] [rbp-80h]
  int v1267; // [rsp+80h] [rbp-80h]
  unsigned int v1268; // [rsp+80h] [rbp-80h]
  _QWORD *v1269; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1270; // [rsp+88h] [rbp-78h]
  _DWORD *v1271; // [rsp+88h] [rbp-78h]
  _QWORD *v1272; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1273; // [rsp+88h] [rbp-78h]
  _QWORD *v1274; // [rsp+88h] [rbp-78h]
  char *v1275; // [rsp+88h] [rbp-78h]
  __int64 v1276; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1277; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1278; // [rsp+90h] [rbp-70h]
  unsigned __int64 v1279; // [rsp+90h] [rbp-70h]
  _BYTE *v1280; // [rsp+90h] [rbp-70h]
  char *v1281; // [rsp+98h] [rbp-68h]
  size_t v1282; // [rsp+98h] [rbp-68h]
  __int64 v1283; // [rsp+98h] [rbp-68h]
  __int64 v1284; // [rsp+98h] [rbp-68h]
  __int64 v1285; // [rsp+98h] [rbp-68h]
  char *v1286; // [rsp+98h] [rbp-68h]
  int v1287; // [rsp+A0h] [rbp-60h]
  int v1288; // [rsp+A0h] [rbp-60h]
  int v1289; // [rsp+A0h] [rbp-60h]
  int v1290; // [rsp+A0h] [rbp-60h]
  int v1291; // [rsp+A0h] [rbp-60h]
  int v1292; // [rsp+A0h] [rbp-60h]
  unsigned int v1293; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1294; // [rsp+A8h] [rbp-58h]
  _DWORD *v1295; // [rsp+A8h] [rbp-58h]
  char *v1296; // [rsp+A8h] [rbp-58h]
  __int64 v1297; // [rsp+A8h] [rbp-58h]
  __int64 v1298; // [rsp+A8h] [rbp-58h]
  _QWORD *v1299; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v1300; // [rsp+B0h] [rbp-50h]
  char *v1301; // [rsp+B0h] [rbp-50h]
  int v1302; // [rsp+B4h] [rbp-4Ch]
  _BYTE *v1303; // [rsp+B8h] [rbp-48h]
  __int64 v1304; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1305; // [rsp+B8h] [rbp-48h]
  __int64 v1306; // [rsp+C0h] [rbp-40h]
  char *v1307; // [rsp+C0h] [rbp-40h]
  _QWORD *v1308; // [rsp+C0h] [rbp-40h]
  char *v1309; // [rsp+C0h] [rbp-40h]
  size_t v1310; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v1311; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1312; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1313; // [rsp+C8h] [rbp-38h]
  char *v1314; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v1315; // [rsp+D0h] [rbp-30h]
  char *v1316; // [rsp+D0h] [rbp-30h]
  __int64 v1317; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v1318; // [rsp+D8h] [rbp-28h]
  __int64 v1319; // [rsp+D8h] [rbp-28h]
  __int64 v1320; // [rsp+D8h] [rbp-28h]
  __int64 v1321; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v1322; // [rsp+D8h] [rbp-28h]
  char *v1323; // [rsp+E0h] [rbp-20h]
  char *v1324; // [rsp+E0h] [rbp-20h]
  _DWORD *v1325; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v1326; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v1327; // [rsp+E8h] [rbp-18h]
  char *v1328; // [rsp+E8h] [rbp-18h]
  _QWORD *v1329; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1330; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1331; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1332; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1333; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1334; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1335; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v1336; // [rsp+F8h] [rbp-8h]
  char *v1337; // [rsp+F8h] [rbp-8h]
  __int64 v1338; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v1339; // [rsp+F8h] [rbp-8h]
  __int64 v1340; // [rsp+F8h] [rbp-8h]
  int v1341; // [rsp+FCh] [rbp-4h]
  unsigned __int64 v1342; // [rsp+100h] [rbp+0h]
  unsigned __int64 v1343; // [rsp+100h] [rbp+0h]
  __int64 v1344; // [rsp+108h] [rbp+8h]
  __int64 v1345; // [rsp+108h] [rbp+8h]
  __int64 v1346; // [rsp+108h] [rbp+8h]
  unsigned __int64 v1347; // [rsp+110h] [rbp+10h]
  unsigned __int64 v1348; // [rsp+110h] [rbp+10h]
  char *v1349; // [rsp+110h] [rbp+10h]
  unsigned __int64 v1350; // [rsp+110h] [rbp+10h]
  unsigned __int64 v1351; // [rsp+118h] [rbp+18h]
  char *v1352; // [rsp+118h] [rbp+18h]
  _QWORD *v1353; // [rsp+118h] [rbp+18h]
  int v1354; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 v1355; // [rsp+120h] [rbp+20h]
  unsigned __int64 v1356; // [rsp+120h] [rbp+20h]
  __int64 v1357; // [rsp+120h] [rbp+20h]
  int v1359; // [rsp+1A8h] [rbp+A8h]
  int v1360; // [rsp+1B0h] [rbp+B0h]
  unsigned int v1362; // [rsp+1C8h] [rbp+C8h]
  int v1363; // [rsp+1C8h] [rbp+C8h]
  int v1364; // [rsp+1C8h] [rbp+C8h]
  int v1365; // [rsp+1C8h] [rbp+C8h]
  int v1366; // [rsp+1C8h] [rbp+C8h]
  int v1367; // [rsp+1C8h] [rbp+C8h]
  int v1368; // [rsp+1C8h] [rbp+C8h]
  int v1369; // [rsp+1C8h] [rbp+C8h]
  int v1370; // [rsp+1C8h] [rbp+C8h]

  v1360 = (int)a3;
  v1359 = (int)a2;
  v10 = *(_QWORD *)(a1 + 0x40000);
  v11 = a1;
  v12 = v10 + (unsigned int)(*(_DWORD *)(a1 + 262168) - *(_DWORD *)(a1 + 262172)) - *(_QWORD *)(a1 + 262152);
  if ( v12 < 0x10000 )
  {
    v378 = 0;
    if ( !v12 && *a4 > 4096 )
    {
      memmove((void *)a1, *(const void **)(a1 + 262184), 0x40030uLL);
      LZ4HC_setExternalDict(v11, a2);
      *(_WORD *)(v11 + 262180) = 9;
      if ( a7 == 2 && a5 < 1 )
        return v378;
      v379 = *a4;
      if ( (unsigned int)v379 > 0x7E000000 )
        return v378;
      *(_QWORD *)(v11 + 0x40000) += v379;
      v380 = a2;
      v381 = *a4;
      v382 = a2;
      v383 = a3;
      v384 = &a2[v381];
      v385 = (unsigned __int64)&a2[v381 - 12];
      v1247 = 0LL;
      v1312 = 0LL;
      *a4 = 0;
      v386 = (unsigned __int64)&a3[a5 - 5];
      if ( a7 != 2 )
        v386 = (unsigned __int64)&a3[a5];
      v1253 = v386;
      v1212 = a2;
      v1250 = a2;
      v1316 = &a2[v381];
      v1304 = (__int64)&a2[v381 - 12];
      v1234 = (unsigned __int64)(v384 - 5);
      v1260 = a3;
      if ( (int)v381 < 13 )
        goto LABEL_1277;
      while ( 1 )
      {
LABEL_658:
        if ( (unsigned __int64)v382 > v385 )
          goto LABEL_1276;
        v387 = 3;
        v1265 = 3;
        v388 = *(unsigned int *)(a1 + 262172);
        v389 = *(_QWORD **)(a1 + 262152);
        v390 = v388;
        v391 = *(unsigned int *)(a1 + 262168);
        v392 = v391 + (_DWORD)v382 - (_DWORD)v389;
        v1227 = *(_DWORD *)(a1 + 262172);
        v1239 = v392;
        if ( (int)v388 + 0x10000 <= v392 )
          v390 = v392 - 0xFFFF;
        v393 = 0;
        v394 = *(_DWORD *)(a1 + 262176);
        v1272 = *(_QWORD **)(a1 + 262160);
        v1289 = 256;
        v395 = *(_DWORD *)v382;
        v1351 = (unsigned __int64)v1272 + v391 - v388;
        v396 = v391 + (_DWORD)v382 - (_DWORD)v389;
        v397 = 0;
        v1176 = v390;
        v1365 = 0;
        v1332 = 0LL;
        v1217 = 0;
        if ( v394 < v396 )
        {
          v398 = (_DWORD *)((char *)v389 + v394 - v391);
          do
          {
            v399 = (unsigned __int64)(unsigned int)(-1640531535 * *v398) >> 17;
            v400 = v394 - *(_DWORD *)(a1 + 4 * v399);
            if ( v400 > 0xFFFF )
              LOWORD(v400) = -1;
            v398 = (_DWORD *)((char *)v398 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v394 + 0x20000) = v400;
            *(_DWORD *)(a1 + 4 * v399) = v394++;
          }
          while ( v394 < v396 );
          v397 = 0;
          v387 = 3;
          LODWORD(v388) = v1227;
        }
        v401 = a1;
        *(_DWORD *)(a1 + 262176) = v396;
        v402 = v1212;
        v403 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1212) >> 17));
        if ( v403 >= v390 )
        {
          v404 = v395;
          while ( 1 )
          {
            v405 = v397;
            if ( v1289 <= 0 )
            {
LABEL_749:
              v383 = v1260;
              v393 = v1217;
              break;
            }
            --v1289;
            if ( v403 < (unsigned int)v391 )
            {
              v416 = (_DWORD *)((char *)v1272 + v403 - (unsigned int)v388);
              if ( v403 <= (int)v391 - 4 && *v416 == v404 )
              {
                v417 = &v402[(unsigned int)v391 - v403];
                if ( (unsigned __int64)v417 > v1234 )
                  v417 = (char *)v1234;
                v418 = v402 + 4;
                v419 = v416 + 1;
                v420 = v418;
                if ( v418 >= v417 - 7 )
                {
                  while ( v420 < v417 - 7 )
                  {
                    if ( *(_QWORD *)v420 != *v419 )
                    {
                      __asm { tzcnt   rax, r9 }
                      v423 = ((unsigned int)_RAX >> 3) - (_DWORD)v418 + (_DWORD)v420;
                      goto LABEL_718;
                    }
                    v420 += 8;
LABEL_706:
                    ++v419;
                  }
                  if ( v420 < v417 - 3 && *(_DWORD *)v419 == *(_DWORD *)v420 )
                  {
                    v420 += 4;
                    v419 = (_QWORD *)((char *)v419 + 4);
                  }
                  if ( v420 < v417 - 1 && *(_WORD *)v419 == *(_WORD *)v420 )
                  {
                    v420 += 2;
                    v419 = (_QWORD *)((char *)v419 + 2);
                  }
                  if ( v420 < v417 && *(_BYTE *)v419 == *v420 )
                    LODWORD(v420) = (_DWORD)v420 + 1;
                  v423 = (_DWORD)v420 - (_DWORD)v418;
                }
                else
                {
                  if ( *(_QWORD *)v418 == *v419 )
                  {
                    v420 = v418 + 8;
                    goto LABEL_706;
                  }
                  __asm { tzcnt   rcx, rcx }
                  v423 = (unsigned int)_RCX >> 3;
                }
LABEL_718:
                v402 = v1212;
                v426 = v423 + 4;
                v427 = &v1212[v423 + 4];
                if ( v427 == v417 && (unsigned __int64)v417 < v1234 )
                {
                  v428 = v389;
                  v429 = &v1212[v426];
                  if ( (unsigned __int64)v427 >= v1234 - 7 )
                    goto LABEL_723;
                  if ( *(_QWORD *)v427 != *v389 )
                  {
                    __asm { tzcnt   rcx, rcx }
                    v433 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v429 = v427 + 8;
                    v428 = v389 + 1;
LABEL_723:
                    while ( (unsigned __int64)v429 < v1234 - 7 )
                    {
                      if ( *(_QWORD *)v429 != *v428 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v433 = ((unsigned int)_RAX >> 3) - (_DWORD)v427 + (_DWORD)v429;
                        goto LABEL_738;
                      }
                      v429 += 8;
                      ++v428;
                    }
                    if ( (unsigned __int64)v429 < v1234 - 3 && *(_DWORD *)v428 == *(_DWORD *)v429 )
                    {
                      v429 += 4;
                      v428 = (_QWORD *)((char *)v428 + 4);
                    }
                    if ( (unsigned __int64)v429 < v1234 - 1 && *(_WORD *)v428 == *(_WORD *)v429 )
                    {
                      v429 += 2;
                      v428 = (_QWORD *)((char *)v428 + 2);
                    }
                    if ( (unsigned __int64)v429 < v1234 && *(_BYTE *)v428 == *v429 )
                      LODWORD(v429) = (_DWORD)v429 + 1;
                    v433 = (_DWORD)v429 - (_DWORD)v427;
                  }
LABEL_738:
                  v402 = v1212;
                  v426 += v433;
                }
                v397 = v1365;
                v401 = a1;
                if ( v426 > v387 )
                {
                  v1265 = v426;
                  v1217 = v392 - v403;
                }
              }
            }
            else
            {
              v406 = (_DWORD *)((char *)v389 + v403 - (unsigned int)v391);
              if ( *(_WORD *)&v402[v387 - 1] == *(_WORD *)((char *)v406 + v387 - 1) && *v406 == v404 )
              {
                v407 = v402 + 4;
                v408 = v406 + 1;
                v409 = v402 + 4;
                if ( (unsigned __int64)(v402 + 4) >= v1234 - 7 )
                {
                  while ( (unsigned __int64)v409 < v1234 - 7 )
                  {
                    if ( *v408 != *v409 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v412 = ((unsigned int)_RAX >> 3) - (_DWORD)v407 + (_DWORD)v409;
                      goto LABEL_693;
                    }
                    ++v409;
LABEL_681:
                    ++v408;
                  }
                  if ( (unsigned __int64)v409 < v1234 - 3 && *(_DWORD *)v408 == *(_DWORD *)v409 )
                  {
                    v409 = (_QWORD *)((char *)v409 + 4);
                    v408 = (_QWORD *)((char *)v408 + 4);
                  }
                  if ( (unsigned __int64)v409 < v1234 - 1 && *(_WORD *)v408 == *(_WORD *)v409 )
                  {
                    v409 = (_QWORD *)((char *)v409 + 2);
                    v408 = (_QWORD *)((char *)v408 + 2);
                  }
                  if ( (unsigned __int64)v409 < v1234 && *(_BYTE *)v408 == *(_BYTE *)v409 )
                    LODWORD(v409) = (_DWORD)v409 + 1;
                  v412 = (_DWORD)v409 - (_DWORD)v407;
                }
                else
                {
                  if ( *v408 == *v407 )
                  {
                    v409 = v402 + 12;
                    goto LABEL_681;
                  }
                  __asm { tzcnt   rcx, r8 }
                  v412 = (unsigned int)_RCX >> 3;
                }
LABEL_693:
                v397 = v1365;
                v415 = v412 + 4;
                v402 = v1212;
                v401 = a1;
                if ( v415 > v387 )
                {
                  v1265 = v415;
                  v1217 = v392 - v403;
                }
              }
            }
            if ( *(_WORD *)(v401 + 2LL * (unsigned __int16)v403 + 0x20000) != 1 )
              goto LABEL_746;
            v435 = v403 - 1;
            if ( v397 )
            {
              v1365 = v405;
              if ( v405 != 2 )
                goto LABEL_746;
              v436 = v1234;
            }
            else
            {
              if ( (_BYTE)v404 != HIBYTE(v404) || (unsigned __int16)v404 != HIWORD(v404) )
              {
                v1365 = 1;
LABEL_746:
                v437 = v1176;
LABEL_747:
                v403 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v403 + 0x20000);
                goto LABEL_748;
              }
              v436 = v1234;
              v1365 = 2;
              v1332 = (unsigned int)LZ4HC_countPattern(v402 + 4, v1234, v404, v401) + 4LL;
            }
            v437 = v1176;
            if ( v435 < v1176 || (unsigned int)v391 - v435 - 1 < 3 )
              goto LABEL_747;
            if ( v435 >= (unsigned int)v391 )
            {
              v439 = 0;
              v440 = (_DWORD *)((char *)v389 + v435 - (unsigned int)v391);
            }
            else
            {
              v439 = 1;
              v440 = (_DWORD *)((char *)v1272 + v435 - v1227);
            }
            if ( *v440 != v404 )
              goto LABEL_747;
            v441 = v436;
            if ( v439 )
              v441 = v1351;
            v442 = (unsigned int)LZ4HC_countPattern(v440 + 1, v441, v404, v1176) + 4LL;
            if ( v439 )
            {
              if ( (_DWORD *)((char *)v440 + v442) == v443 )
              {
                v444 = LZ4HC_rotatePattern(v442, v404);
                v442 += (unsigned int)LZ4HC_countPattern(v389, v1234, v444, v445);
              }
              v446 = v1272;
            }
            else
            {
              v446 = v389;
            }
            v447 = LZ4HC_reverseCountPattern(v440, v446, v404);
            v448 = v447;
            if ( !v439 && (_QWORD *)((char *)v440 - v447) == v389 && v1227 < (unsigned int)v391 )
            {
              v449 = LZ4HC_rotatePattern(-v447, v404);
              v450 = LZ4HC_reverseCountPattern(v1351, v1272, v449);
              v448 = v450 + v451;
            }
            v437 = v1176;
            v452 = v435 - v448;
            v453 = v1176;
            if ( v452 > v1176 )
              v453 = v452;
            v454 = v442 + v435 - v453;
            if ( v454 < v1332 || v442 > v1332 )
            {
              if ( (unsigned int)v391 - v453 - 1 < 3 )
              {
                v403 = v391;
              }
              else
              {
                v387 = v1265;
                v402 = v1212;
                v456 = v1332;
                if ( v454 < v1332 )
                  v456 = v442 + v435 - v453;
                if ( v1265 < v456 )
                {
                  if ( (unsigned __int64)(v391 + &v1212[-v453] - (char *)v389) > 0xFFFF )
                    goto LABEL_749;
                  v387 = v456;
                  v1265 = v456;
                  v1217 = v1239 - v453;
                }
                v457 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v453 + 0x20000);
                if ( v457 > v453 )
                  goto LABEL_749;
                v403 = v453 - v457;
              }
            }
            else
            {
              v455 = v442 + v435 - v1332;
              v403 = v391;
              if ( (unsigned int)v391 - v455 - 1 >= 3 )
                v403 = v455;
            }
LABEL_748:
            v392 = v1239;
            v387 = v1265;
            LODWORD(v388) = v1227;
            v397 = v1365;
            v402 = v1212;
            if ( v403 < v437 )
              goto LABEL_749;
            v401 = a1;
          }
        }
        v438 = __PAIR64__(v387, v393);
        v1342 = __PAIR64__(v387, v393);
        v1279 = __PAIR64__(v387, v393);
        if ( v387 < 4 )
        {
          v380 = v1250;
          v382 = v402 + 1;
          goto LABEL_752;
        }
        v458 = v402;
        v1341 = v387;
        v1330 = (unsigned __int64)v402;
LABEL_789:
        v459 = v1304;
        while ( 1 )
        {
          v460 = HIDWORD(v1279);
          v1366 = HIDWORD(v1279);
          v461 = &v402[SHIDWORD(v1279)];
          if ( (unsigned __int64)v461 > v459 )
          {
            v1256 = 0LL;
            v547 = 0;
            v546 = 0LL;
          }
          else
          {
            v1247 = (unsigned __int64)(v461 - 2);
            v462 = v461 - 2;
            v1300 = (unsigned __int64)(v461 - 2);
            v1205 = HIDWORD(v1279);
            v463 = *(unsigned int *)(a1 + 262172);
            v464 = *(char **)(a1 + 262152);
            v465 = *(unsigned int *)(a1 + 262168);
            v466 = v465 + (_DWORD)v461 - 2 - (_DWORD)v464;
            v1324 = v464;
            v1218 = *(_DWORD *)(a1 + 262168);
            v1198 = v466;
            v1228 = *(_DWORD *)(a1 + 262172);
            if ( (int)v463 + 0x10000 <= v466 )
              v1192 = v466 - 0xFFFF;
            else
              v1192 = *(_DWORD *)(a1 + 262172);
            v467 = (_DWORD)v462 - (_DWORD)v1212;
            v468 = *(_DWORD *)v462;
            v1307 = *(char **)(a1 + 262160);
            v1290 = 256;
            v1352 = &v1307[v465 - v463];
            v1177 = 0;
            v469 = 0;
            v1333 = 0LL;
            v1240 = 0;
            v470 = *(_DWORD *)(a1 + 262176);
            v1185 = *(_DWORD *)v462;
            if ( v470 < v466 )
            {
              v471 = &v464[v470 - v465];
              do
              {
                v472 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v471) >> 17;
                v473 = v470 - *(_DWORD *)(a1 + 4 * v472);
                if ( v473 > 0xFFFF )
                  LOWORD(v473) = -1;
                ++v471;
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v470 + 0x20000) = v473;
                *(_DWORD *)(a1 + 4 * v472) = v470++;
              }
              while ( v470 < v466 );
              v438 = v1342;
              LODWORD(v463) = v1228;
            }
            *(_DWORD *)(a1 + 262176) = v466;
            v474 = (unsigned int)(-1640531535 * *(_DWORD *)v462);
            v475 = v1192;
            v476 = v467;
            v1283 = v467;
            v477 = *(_DWORD *)(a1 + 4 * (v474 >> 17));
            if ( v477 >= v1192 )
            {
              v478 = v1300;
              v479 = SHIDWORD(v1279);
              while ( 1 )
              {
                v480 = v1177;
                v481 = v1177;
                if ( v1290 <= 0 )
                {
LABEL_949:
                  v438 = v1342;
                  v383 = v1260;
                  v469 = v1240;
                  break;
                }
                --v1290;
                if ( v477 < (unsigned int)v465 )
                {
                  v504 = &v1307[v477 - (unsigned int)v463];
                  if ( v477 > (int)v465 - 4 || *(_DWORD *)v504 != v468 )
                    goto LABEL_841;
                  v505 = (_QWORD *)(v478 + 4);
                  v506 = v504 + 4;
                  v507 = (_QWORD *)(v478 + (unsigned int)v465 - v477);
                  v508 = (_QWORD *)(v478 + 4);
                  if ( (unsigned __int64)v507 > v1234 )
                    v507 = (_QWORD *)v1234;
                  if ( v505 >= (_QWORD *)((char *)v507 - 7) )
                  {
                    while ( v508 < (_QWORD *)((char *)v507 - 7) )
                    {
                      if ( *v506 != *v508 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v511 = ((unsigned int)_RAX >> 3) - (_DWORD)v505 + (_DWORD)v508;
                        goto LABEL_869;
                      }
                      ++v508;
LABEL_857:
                      ++v506;
                    }
                    if ( v508 < (_QWORD *)((char *)v507 - 3) && *(_DWORD *)v506 == *(_DWORD *)v508 )
                    {
                      v508 = (_QWORD *)((char *)v508 + 4);
                      v506 = (_QWORD *)((char *)v506 + 4);
                    }
                    if ( v508 < (_QWORD *)((char *)v507 - 1) && *(_WORD *)v506 == *(_WORD *)v508 )
                    {
                      v508 = (_QWORD *)((char *)v508 + 2);
                      v506 = (_QWORD *)((char *)v506 + 2);
                    }
                    if ( v508 < v507 && *(_BYTE *)v506 == *(_BYTE *)v508 )
                      LODWORD(v508) = (_DWORD)v508 + 1;
                    v511 = (_DWORD)v508 - (_DWORD)v505;
                  }
                  else
                  {
                    if ( *v506 == *v505 )
                    {
                      v508 = (_QWORD *)(v478 + 12);
                      goto LABEL_857;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v511 = (unsigned int)_RCX >> 3;
                  }
LABEL_869:
                  v514 = v511 + 4;
                  v515 = (_QWORD *)(v478 + (int)(v511 + 4));
                  if ( v515 == v507 && (unsigned __int64)v507 < v1234 )
                  {
                    v516 = v1324;
                    v517 = (_QWORD *)(v478 + v514);
                    if ( (unsigned __int64)v515 >= v1234 - 7 )
                      goto LABEL_874;
                    if ( *(_QWORD *)v1324 != *v515 )
                    {
                      __asm { tzcnt   rcx, rdx }
                      v521 = (unsigned int)_RCX >> 3;
                    }
                    else
                    {
                      v517 = v515 + 1;
                      v516 = v1324 + 8;
LABEL_874:
                      while ( (unsigned __int64)v517 < v1234 - 7 )
                      {
                        if ( *v516 != *v517 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v521 = ((unsigned int)_RAX >> 3) - (_DWORD)v515 + (_DWORD)v517;
                          goto LABEL_889;
                        }
                        ++v517;
                        ++v516;
                      }
                      if ( (unsigned __int64)v517 < v1234 - 3 && *(_DWORD *)v516 == *(_DWORD *)v517 )
                      {
                        v517 = (_QWORD *)((char *)v517 + 4);
                        v516 = (_QWORD *)((char *)v516 + 4);
                      }
                      if ( (unsigned __int64)v517 < v1234 - 1 && *(_WORD *)v516 == *(_WORD *)v517 )
                      {
                        v517 = (_QWORD *)((char *)v517 + 2);
                        v516 = (_QWORD *)((char *)v516 + 2);
                      }
                      if ( (unsigned __int64)v517 < v1234 && *(_BYTE *)v516 == *(_BYTE *)v517 )
                        LODWORD(v517) = (_DWORD)v517 + 1;
                      v521 = (_DWORD)v517 - (_DWORD)v515;
                    }
LABEL_889:
                    v514 += v521;
                  }
                  v523 = 0;
                  if ( v1283 )
                  {
                    v524 = 0LL;
                    if ( (__int64)&v1212[-v478] <= v1307 - v504 )
                      v525 = (_DWORD)v1307 - (_DWORD)v504;
                    else
                      v525 = (_DWORD)v1212 - v478;
                    v526 = v504 - 4;
                    v527 = -v525;
                    v528 = v478 - (_QWORD)v504;
                    while ( v527 > 3 )
                    {
                      if ( *(_DWORD *)v526 != *(_DWORD *)&v526[v528] )
                      {
                        _BitScanReverse(&v529, *(_DWORD *)v526 ^ *(_DWORD *)&v526[v528]);
                        v523 -= (31 - v529) >> 3;
                        goto LABEL_903;
                      }
                      v523 -= 4;
                      v527 -= 4;
                      v524 -= 4LL;
                      v526 -= 4;
                    }
                    if ( v524 > v525 )
                    {
                      v530 = (__int64)&v1307[v524 - 1 + v477 - v1228];
                      do
                      {
                        if ( *(_BYTE *)(SHIDWORD(v1279) + &v1212[-(v477 - v1228)] - v1307 + v530 - 2) != *(_BYTE *)v530 )
                          break;
                        --v530;
                        --v523;
                      }
                      while ( 1LL - (v477 - v1228) - (__int64)v1307 + v530 > v525 );
                    }
LABEL_903:
                    v466 = v1198;
                  }
                  v481 = v1177;
                  v531 = v514 - v523;
                  v475 = v1192;
                  v480 = v1177;
                  v492 = (char *)v1234;
                  if ( v531 > v1205 )
                  {
                    v1205 = v531;
                    v1240 = v466 - v477;
                    v1247 = v478 + v523;
                  }
                  v468 = v1185;
                }
                else
                {
                  v482 = v1205;
                  v483 = &v1324[v477 - (unsigned int)v465];
                  if ( *(_WORD *)&v1212[v1205 - 1] != *(_WORD *)&v483[v1205 - v476 - 1] || *(_DWORD *)v483 != v468 )
                  {
                    v475 = v1192;
                    goto LABEL_841;
                  }
                  v484 = 0;
                  if ( v476 )
                  {
                    v485 = 0LL;
                    if ( (__int64)&v1212[-v478] <= -(__int64)(v477 - (unsigned int)v465) )
                      v486 = (_DWORD)v1324 - (_DWORD)v483;
                    else
                      v486 = (_DWORD)v1212 - v478;
                    v487 = v483 - 4;
                    v488 = -v486;
                    v489 = v478 - (_QWORD)v483;
                    while ( v488 > 3 )
                    {
                      if ( *(_DWORD *)v487 != *(_DWORD *)&v487[v489] )
                      {
                        _BitScanReverse(&v490, *(_DWORD *)v487 ^ *(_DWORD *)&v487[v489]);
                        v484 -= (31 - v490) >> 3;
                        goto LABEL_819;
                      }
                      v484 -= 4;
                      v488 -= 4;
                      v485 -= 4LL;
                      v487 -= 4;
                    }
                    if ( v485 > v486 )
                    {
                      v491 = &v1324[v477 - (unsigned int)v465 - 1 + v485];
                      do
                      {
                        if ( v491[v479 - 2 + &v1212[-(v477 - (unsigned int)v465)] - v1324] != *v491 )
                          break;
                        --v491;
                        --v484;
                      }
                      while ( (__int64)&v491[1LL - (v477 - (unsigned int)v465) - (_QWORD)v1324] > v486 );
                    }
LABEL_819:
                    v482 = v1205;
                    v466 = v1198;
                  }
                  v492 = (char *)v1234;
                  v493 = v483 + 4;
                  v494 = (_QWORD *)(v478 + 4);
                  v495 = (_QWORD *)(v478 + 4);
                  if ( v478 + 4 >= v1234 - 7 )
                  {
                    while ( (unsigned __int64)v495 < v1234 - 7 )
                    {
                      if ( *v493 != *v495 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v498 = ((unsigned int)_RAX >> 3) - (_DWORD)v494 + (_DWORD)v495;
                        goto LABEL_839;
                      }
                      ++v495;
LABEL_827:
                      ++v493;
                    }
                    if ( (unsigned __int64)v495 < v1234 - 3 && *(_DWORD *)v493 == *(_DWORD *)v495 )
                    {
                      v495 = (_QWORD *)((char *)v495 + 4);
                      v493 = (_QWORD *)((char *)v493 + 4);
                    }
                    if ( (unsigned __int64)v495 < v1234 - 1 && *(_WORD *)v493 == *(_WORD *)v495 )
                    {
                      v495 = (_QWORD *)((char *)v495 + 2);
                      v493 = (_QWORD *)((char *)v493 + 2);
                    }
                    if ( (unsigned __int64)v495 < v1234 && *(_BYTE *)v493 == *(_BYTE *)v495 )
                      LODWORD(v495) = (_DWORD)v495 + 1;
                    v498 = (_DWORD)v495 - (_DWORD)v494;
                  }
                  else
                  {
                    if ( *v493 == *v494 )
                    {
                      v495 = (_QWORD *)(v478 + 12);
                      goto LABEL_827;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v498 = (unsigned int)_RCX >> 3;
                  }
LABEL_839:
                  v501 = v498 - v484 + 4;
                  v229 = v501 <= v482;
                  v475 = v1192;
                  if ( !v229 )
                  {
                    v502 = v484;
                    v468 = v1185;
                    v1205 = v501;
                    v481 = v1177;
                    v480 = v1177;
                    v1247 = v478 + v502;
                    v1240 = v466 - v477;
LABEL_841:
                    v492 = (char *)v1234;
                    goto LABEL_842;
                  }
                  v481 = v1177;
                  v480 = v1177;
                  v468 = v1185;
                }
LABEL_842:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v477 + 0x20000) != 1 )
                  goto LABEL_946;
                v503 = v477 - 1;
                if ( (_DWORD)v480 )
                {
                  v1177 = v481;
                  if ( v481 != 2 )
                    goto LABEL_946;
                }
                else
                {
                  if ( (_BYTE)v468 != HIBYTE(v468) || (unsigned __int16)v468 != HIWORD(v468) )
                  {
                    v1177 = 1;
                    goto LABEL_946;
                  }
                  v1177 = 2;
                  v1333 = (unsigned int)LZ4HC_countPattern(v478 + 4, v492, v468, v480) + 4LL;
                }
                if ( v503 < v475 || (unsigned int)v465 - v477 < 3 )
                  goto LABEL_946;
                if ( v503 >= (unsigned int)v465 )
                {
                  v532 = 0;
                  v533 = &v1324[v503 - v1218];
                }
                else
                {
                  v532 = 1;
                  v533 = &v1307[v503 - v1228];
                }
                if ( *(_DWORD *)v533 != v468 )
                {
                  LODWORD(v465) = v1218;
LABEL_946:
                  v475 = v1192;
                  v477 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v477 + 0x20000);
LABEL_947:
                  v476 = v1283;
                  goto LABEL_948;
                }
                if ( v532 )
                  v492 = v1352;
                v534 = (unsigned int)LZ4HC_countPattern(v533 + 4, v492, v468, v480) + 4LL;
                if ( v532 )
                {
                  if ( &v533[v534] == v492 )
                  {
                    v535 = LZ4HC_rotatePattern(v534, v1185);
                    v534 += (unsigned int)LZ4HC_countPattern(v1324, v1234, v535, v536);
                  }
                  v537 = v1307;
                }
                else
                {
                  v537 = v1324;
                }
                v538 = LZ4HC_reverseCountPattern(v533, v537, v1185);
                v539 = v532 == 0;
                v540 = v538;
                LODWORD(v465) = v1218;
                if ( v539 && &v533[-v538] == v1324 && v1228 < v1218 )
                {
                  v541 = LZ4HC_rotatePattern(-v538, v1185);
                  v540 += LZ4HC_reverseCountPattern(v1352, v1307, v541);
                }
                v475 = v1192;
                v477 = v1192;
                if ( v503 - v540 > v1192 )
                  v477 = v503 - v540;
                v542 = v534 + v503 - v477;
                if ( v542 >= v1333 && v534 <= v1333 )
                {
                  v543 = v534 + v503 - v1333;
                  v477 = v1218;
                  if ( v1218 - v543 - 1 >= 3 )
                    v477 = v543;
                  goto LABEL_947;
                }
                v476 = v1283;
                if ( v1218 - v477 - 1 < 3 )
                {
                  v477 = v1218;
                }
                else if ( !v1283 )
                {
                  v544 = v1333;
                  if ( v542 < v1333 )
                    v544 = v534 + v503 - v477;
                  if ( v1205 < v544 )
                  {
                    if ( v1218 + v478 - v477 - (unsigned __int64)v1324 > 0xFFFF )
                      goto LABEL_949;
                    v1205 = v544;
                    v1240 = v1198 - v477;
                    v1247 = v478;
                  }
                  v545 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v477 + 0x20000);
                  if ( v545 > v477 )
                    goto LABEL_949;
                  v477 -= v545;
                  goto LABEL_947;
                }
LABEL_948:
                v468 = v1185;
                v466 = v1198;
                LODWORD(v463) = v1228;
                v479 = SHIDWORD(v1279);
                if ( v477 < v475 )
                  goto LABEL_949;
              }
            }
            v458 = (char *)v1330;
            v460 = HIDWORD(v1279);
            v402 = v1212;
            v459 = v1304;
            v546 = __PAIR64__(v1205, v469);
            v1256 = __PAIR64__(v1205, v469);
            v547 = v1205;
          }
          v1273 = v546;
          if ( v547 <= v460 )
          {
            v380 = v1250;
            v643 = v383;
            v701 = v383;
            v702 = v383;
            v703 = v383 + 1;
            v704 = v402 - v1250;
            if ( a7 && (unsigned __int64)&v703[v704 + 8 + v704 / 0xFF] > v1253 )
              goto LABEL_1249;
            if ( v704 < 0xF )
            {
              *v701 = 16 * v704;
            }
            else
            {
              v705 = v704 - 15;
              *v701 = -16;
              if ( v704 - 15 >= 0xFF )
              {
                v706 = v705 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v706) = -1;
                memset_0(v703, SDWORD2(v706), v705 / 0xFF);
                v402 = v1212;
                v703 += v705 / 0xFF;
                v380 = v1250;
                LOBYTE(v705) = v705 / 0xFF + v705;
              }
              *v703++ = v705;
              v460 = HIDWORD(v1279);
            }
            v707 = v703;
            do
            {
              *v707 = *(_QWORD *)((char *)v707 + v380 - v703);
              ++v707;
            }
            while ( v707 < (_QWORD *)&v703[v704] );
            v708 = &v703[v704];
            v709 = v460 - 4LL;
            *v708 = v1279;
            v383 = v708 + 1;
            v1260 = v383;
            if ( a7 )
            {
              if ( (unsigned __int64)&v383[v709 / 0xFF + 6] > v1253 )
                goto LABEL_1249;
            }
            v710 = *v702;
            if ( v709 < 0xF )
            {
              *v701 = v710 + v709;
            }
            else
            {
              v711 = v460 - 19LL;
              *v701 = v710 + 15;
              if ( v711 >= 0x1FE )
              {
                v712 = v711 / 0x1FE;
                v711 %= 0x1FEuLL;
                do
                {
                  *v383 = -1;
                  v713 = v383 + 1;
                  *v713 = -1;
                  v383 = v713 + 1;
                  --v712;
                }
                while ( v712 );
              }
              if ( v711 >= 0xFF )
              {
                LOBYTE(v711) = v711 + 1;
                *v383++ = -1;
              }
              *v383++ = v711;
              v1260 = v383;
            }
            v386 = v1253;
            v385 = v1304;
            v382 = &v402[v460];
            v380 = v382;
            v1212 = v382;
            v1250 = v382;
            goto LABEL_658;
          }
          v548 = v1247;
          if ( v458 < v402 && v1247 < (unsigned __int64)&v402[v1341] )
          {
            LOWORD(v1279) = v438;
            v402 = v458;
            v460 = HIDWORD(v438);
            v1366 = HIDWORD(v438);
            v1212 = v458;
          }
          if ( (__int64)(v1247 - (_QWORD)v402) >= 3 )
            break;
          v402 = (char *)v1247;
          v1212 = (char *)v1247;
          v1279 = v546;
        }
        while ( 1 )
        {
          if ( (__int64)(v548 - (_QWORD)v402) < 18 )
          {
            v549 = v460;
            if ( v460 > 18 )
              v549 = 18;
            if ( (unsigned __int64)&v402[v549] > v548 + v547 - 4LL )
              v549 = v548 + v547 - (_DWORD)v402 - 4;
            v550 = v549 + (_DWORD)v402 - v548;
            if ( v550 > 0 )
            {
              v548 += v550;
              v547 -= v550;
              v1247 = v548;
              HIDWORD(v1256) = v547;
              v546 = v1256;
              v1273 = v1256;
            }
          }
          v551 = v548 + v547;
          if ( v551 > v459 )
          {
            v637 = 0;
            v636 = 0LL;
          }
          else
          {
            v1312 = v551 - 3;
            v552 = (_DWORD *)(v551 - 3);
            v1295 = (_DWORD *)(v551 - 3);
            v1178 = v547;
            v553 = *(unsigned int *)(a1 + 262168);
            v554 = *(_QWORD **)(a1 + 262152);
            v555 = *(unsigned int *)(a1 + 262172);
            v556 = v551 - 3 + *(_DWORD *)(a1 + 262168) - (_DWORD)v554;
            v1353 = v554;
            v1219 = *(_DWORD *)(a1 + 262168);
            v1229 = v556;
            v1186 = v555;
            if ( (int)v555 + 0x10000 <= v556 )
              v1206 = v556 - 0xFFFF;
            else
              v1206 = *(_DWORD *)(a1 + 262172);
            v557 = *v552;
            v1308 = *(_QWORD **)(a1 + 262160);
            v1199 = 0;
            v558 = (_DWORD)v552 - v548;
            v1343 = 0LL;
            v559 = 0;
            v1241 = 0;
            v1331 = (unsigned __int64)v1308 + v553 - v555;
            v560 = v553 + (_DWORD)v552 - (_DWORD)v554;
            v1291 = 256;
            v1193 = *v552;
            v561 = *(_DWORD *)(a1 + 262176);
            if ( v561 < v560 )
            {
              v562 = (_DWORD *)((char *)v554 + v561 - v553);
              do
              {
                v563 = (unsigned __int64)(unsigned int)(-1640531535 * *v562) >> 17;
                v564 = v561 - *(_DWORD *)(a1 + 4 * v563);
                if ( v564 > 0xFFFF )
                  LOWORD(v564) = -1;
                v562 = (_DWORD *)((char *)v562 + 1);
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v561 + 0x20000) = v564;
                *(_DWORD *)(a1 + 4 * v563) = v561++;
              }
              while ( v561 < v560 );
              v547 = HIDWORD(v1256);
              v552 = v1295;
            }
            *(_DWORD *)(a1 + 262176) = v560;
            v565 = v558;
            v1284 = v558;
            v566 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v552) >> 17));
            if ( v566 >= v1206 )
            {
              v567 = v1219;
              v568 = v554;
              v569 = v547;
              v1334 = v1247 + v547;
              v1344 = v547;
              while ( 1 )
              {
                v570 = v1199;
                if ( v1291 <= 0 )
                {
LABEL_1115:
                  v546 = v1273;
                  v383 = v1260;
                  v547 = HIDWORD(v1256);
                  v559 = v1241;
                  break;
                }
                --v1291;
                if ( v566 < v567 )
                {
                  v589 = v1186;
                  v591 = v1193;
                  v592 = (_DWORD *)((char *)v1308 + v566 - v1186);
                  if ( v566 <= v567 - 4 && *v592 == v1193 )
                  {
                    v593 = v1234;
                    v594 = v552 + 1;
                    v595 = v592 + 1;
                    v596 = v552 + 1;
                    v569 = (unsigned __int64)v552 + v567 - v566;
                    if ( v569 > v1234 )
                      v569 = v1234;
                    if ( (unsigned __int64)v594 >= v569 - 7 )
                    {
                      while ( (unsigned __int64)v596 < v569 - 7 )
                      {
                        if ( *v596 != *v595 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v599 = ((unsigned int)_RAX >> 3) - (_DWORD)v594 + (_DWORD)v596;
                          goto LABEL_1041;
                        }
                        ++v596;
LABEL_1029:
                        ++v595;
                      }
                      if ( (unsigned __int64)v596 < v569 - 3 && *(_DWORD *)v595 == *(_DWORD *)v596 )
                      {
                        v596 = (_QWORD *)((char *)v596 + 4);
                        v595 = (_QWORD *)((char *)v595 + 4);
                      }
                      if ( (unsigned __int64)v596 < v569 - 1 && *(_WORD *)v595 == *(_WORD *)v596 )
                      {
                        v596 = (_QWORD *)((char *)v596 + 2);
                        v595 = (_QWORD *)((char *)v595 + 2);
                      }
                      if ( (unsigned __int64)v596 < v569 && *(_BYTE *)v595 == *(_BYTE *)v596 )
                        LODWORD(v596) = (_DWORD)v596 + 1;
                      v599 = (_DWORD)v596 - (_DWORD)v594;
LABEL_1041:
                      v593 = v1234;
                    }
                    else
                    {
                      if ( *v594 == *v595 )
                      {
                        v596 = v552 + 3;
                        goto LABEL_1029;
                      }
                      __asm { tzcnt   rcx, rcx }
                      v599 = (unsigned int)_RCX >> 3;
                    }
                    v602 = v599 + 4;
                    v603 = (_QWORD *)((char *)v552 + (int)(v599 + 4));
                    if ( v603 == (_QWORD *)v569 && v569 < v593 )
                    {
                      v569 = v593 - 7;
                      v604 = v568;
                      v605 = (_QWORD *)((char *)v552 + v602);
                      if ( (unsigned __int64)v603 >= v593 - 7 )
                        goto LABEL_1047;
                      if ( *v603 != *v568 )
                      {
                        __asm { tzcnt   rcx, rcx }
                        v609 = (unsigned int)_RCX >> 3;
                      }
                      else
                      {
                        v605 = v603 + 1;
                        v604 = v568 + 1;
LABEL_1047:
                        while ( (unsigned __int64)v605 < v569 )
                        {
                          if ( *v605 != *v604 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v609 = ((unsigned int)_RAX >> 3) - (_DWORD)v603 + (_DWORD)v605;
                            goto LABEL_1062;
                          }
                          ++v605;
                          ++v604;
                        }
                        if ( (unsigned __int64)v605 < v1234 - 3 && *(_DWORD *)v604 == *(_DWORD *)v605 )
                        {
                          v605 = (_QWORD *)((char *)v605 + 4);
                          v604 = (_QWORD *)((char *)v604 + 4);
                        }
                        if ( (unsigned __int64)v605 < v1234 - 1 && *(_WORD *)v604 == *(_WORD *)v605 )
                        {
                          v605 = (_QWORD *)((char *)v605 + 2);
                          v604 = (_QWORD *)((char *)v604 + 2);
                        }
                        if ( (unsigned __int64)v605 < v1234 && *(_BYTE *)v604 == *(_BYTE *)v605 )
                          LODWORD(v605) = (_DWORD)v605 + 1;
                        v609 = (_DWORD)v605 - (_DWORD)v603;
                      }
LABEL_1062:
                      v602 += v609;
                    }
                    v611 = 0;
                    if ( v1284 )
                    {
                      v612 = 0LL;
                      if ( (__int64)(v1247 - (_QWORD)v552) <= -(__int64)(v566 - v1186) )
                        v613 = v1186 - v566;
                      else
                        v613 = v1247 - (_DWORD)v552;
                      v569 = (unsigned __int64)(v552 - 1);
                      v614 = -v613;
                      v615 = (char *)v592 - (char *)v552;
                      while ( v614 > 3 )
                      {
                        if ( *(_DWORD *)v569 != *(_DWORD *)(v615 + v569) )
                        {
                          _BitScanReverse(&v616, *(_DWORD *)v569 ^ *(_DWORD *)(v615 + v569));
                          v611 -= (31 - v616) >> 3;
                          goto LABEL_1077;
                        }
                        v611 -= 4;
                        v614 -= 4;
                        v612 -= 4LL;
                        v569 -= 4LL;
                      }
                      v569 = (int)v613;
                      if ( v612 > (int)v613 )
                      {
                        v617 = (_BYTE *)(v612 + v1334 - 4);
                        do
                        {
                          if ( *v617 != v617[(_QWORD)v1308 + v566 - v1186 - v1344 - v1247 + 3] )
                            break;
                          --v617;
                          --v611;
                        }
                        while ( (__int64)&v617[4 - v1344 - v1247] > (int)v613 );
                        v567 = v1219;
                      }
                    }
LABEL_1077:
                    v591 = v1193;
                    v618 = v602 - v611;
                    if ( v618 > v1178 )
                    {
                      v1178 = v618;
                      v1312 = (unsigned __int64)v552 + v611;
                      v1241 = v1229 - v566;
                    }
                    v589 = v1186;
                    goto LABEL_1080;
                  }
                }
                else
                {
                  v571 = v1178;
                  v569 = v1247;
                  v572 = (_DWORD *)((char *)v568 + v566 - v567);
                  if ( *(_WORD *)(v1178 + v1247 - 1) == *(_WORD *)((char *)v572 + v1178 - v565 - 1) && *v572 == v557 )
                  {
                    v573 = 0;
                    if ( v565 )
                    {
                      v574 = 0LL;
                      if ( (__int64)(v1247 - (_QWORD)v552) <= -(__int64)(v566 - v567) )
                        v575 = v567 - v566;
                      else
                        v575 = v1247 - (_DWORD)v552;
                      v576 = v552 - 1;
                      v577 = -v575;
                      v578 = (char *)v572 - (char *)v552;
                      while ( v577 > 3 )
                      {
                        if ( *v576 != *(_DWORD *)((char *)v576 + v578) )
                        {
                          _BitScanReverse(&v579, *v576 ^ *(_DWORD *)((char *)v576 + v578));
                          v573 -= (31 - v579) >> 3;
                          goto LABEL_995;
                        }
                        v573 -= 4;
                        v577 -= 4;
                        v574 -= 4LL;
                        --v576;
                      }
                      if ( v574 > (int)v575 )
                      {
                        v580 = (_BYTE *)(v574 + v1334 - 4);
                        do
                        {
                          if ( *v580 != v580[(_QWORD)v568 + v566 - v567 - v1344 - v1247 + 3] )
                            break;
                          --v580;
                          --v573;
                        }
                        while ( (__int64)&v580[4 - v1344 - v1247] > (int)v575 );
                        v568 = v1353;
                      }
LABEL_995:
                      v571 = v1178;
                    }
                    v581 = v552 + 1;
                    v569 = v1234 - 7;
                    v582 = v572 + 1;
                    v583 = v552 + 1;
                    if ( (unsigned __int64)(v552 + 1) >= v1234 - 7 )
                    {
                      while ( (unsigned __int64)v583 < v569 )
                      {
                        if ( *v582 != *v583 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v586 = ((unsigned int)_RAX >> 3) - (_DWORD)v581 + (_DWORD)v583;
                          goto LABEL_1015;
                        }
                        ++v583;
LABEL_1003:
                        ++v582;
                      }
                      if ( (unsigned __int64)v583 < v1234 - 3 && *(_DWORD *)v582 == *(_DWORD *)v583 )
                      {
                        v583 = (_QWORD *)((char *)v583 + 4);
                        v582 = (_QWORD *)((char *)v582 + 4);
                      }
                      if ( (unsigned __int64)v583 < v1234 - 1 && *(_WORD *)v582 == *(_WORD *)v583 )
                      {
                        v583 = (_QWORD *)((char *)v583 + 2);
                        v582 = (_QWORD *)((char *)v582 + 2);
                      }
                      if ( (unsigned __int64)v583 < v1234 && *(_BYTE *)v582 == *(_BYTE *)v583 )
                        LODWORD(v583) = (_DWORD)v583 + 1;
                      v586 = (_DWORD)v583 - (_DWORD)v581;
                    }
                    else
                    {
                      if ( *v582 == *v581 )
                      {
                        v583 = v552 + 3;
                        goto LABEL_1003;
                      }
                      __asm { tzcnt   rcx, r8 }
                      v586 = (unsigned int)_RCX >> 3;
                    }
LABEL_1015:
                    v589 = v1186;
                    v590 = v586 - v573 + 4;
                    v229 = v590 <= v571;
                    v591 = v1193;
                    if ( !v229 )
                    {
                      v1178 = v590;
                      v1312 = (unsigned __int64)v552 + v573;
                      v1241 = v1229 - v566;
                    }
LABEL_1080:
                    v570 = v1199;
                    goto LABEL_1081;
                  }
                  v591 = v1193;
                  v589 = v1186;
                }
LABEL_1081:
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v566 + 0x20000) != 1 )
                  goto LABEL_1087;
                v619 = v566 - 1;
                if ( v570 )
                {
                  if ( v1199 != 2 )
                    goto LABEL_1087;
                }
                else
                {
                  if ( (_BYTE)v591 != HIBYTE(v591) || (unsigned __int16)v591 != HIWORD(v591) )
                  {
                    v1199 = 1;
LABEL_1087:
                    v620 = v1206;
LABEL_1088:
                    v566 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v566 + 0x20000);
LABEL_1126:
                    v565 = v1284;
                    goto LABEL_1114;
                  }
                  v1199 = 2;
                  v1343 = (unsigned int)LZ4HC_countPattern(v552 + 1, v1234, v591, v569) + 4LL;
                }
                v620 = v1206;
                if ( v619 < v1206 || v567 - v566 < 3 )
                  goto LABEL_1088;
                if ( v619 >= v567 )
                {
                  v621 = 0;
                  v622 = (_DWORD *)((char *)v568 + v619 - v567);
                }
                else
                {
                  v621 = 1;
                  v622 = (_DWORD *)((char *)v1308 + v619 - v589);
                }
                if ( *v622 != v591 )
                  goto LABEL_1087;
                v623 = v1234;
                if ( v621 )
                  v623 = v1331;
                v625 = (unsigned int)LZ4HC_countPattern(v622 + 1, v623, v1193, v569) + 4LL;
                if ( v621 )
                {
                  if ( (_DWORD *)((char *)v622 + v625) == v624 )
                  {
                    v626 = LZ4HC_rotatePattern(v625, v1193);
                    v625 += (unsigned int)LZ4HC_countPattern(v568, v1234, v626, v627);
                  }
                  v628 = v1308;
                }
                else
                {
                  v628 = v568;
                }
                v629 = LZ4HC_reverseCountPattern(v622, v628, v1193);
                v630 = v629;
                if ( !v621 && (_QWORD *)((char *)v622 - v629) == v568 && v1186 < v567 )
                {
                  v631 = LZ4HC_rotatePattern(-v629, v1193);
                  v632 = LZ4HC_reverseCountPattern(v1331, v1308, v631);
                  v630 = v632 + v633;
                }
                v620 = v1206;
                v566 = v1206;
                if ( v619 - v630 > v1206 )
                  v566 = v619 - v630;
                v634 = v625 + v619 - v566;
                if ( v634 < v1343 || v625 > v1343 )
                {
                  v565 = v1284;
                  if ( v567 - v566 - 1 < 3 )
                  {
                    v566 = v567;
                  }
                  else if ( !v1284 )
                  {
                    v552 = v1295;
                    v638 = v1343;
                    if ( v634 < v1343 )
                      v638 = v634;
                    if ( v1178 < v638 )
                    {
                      if ( (unsigned __int64)v1295 + v567 - (unsigned __int64)v566 - (_QWORD)v568 > 0xFFFF )
                        goto LABEL_1115;
                      v1178 = v638;
                      v1241 = v1229 - v566;
                      v1312 = (unsigned __int64)v1295;
                    }
                    v639 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v566 + 0x20000);
                    if ( v639 > v566 )
                      goto LABEL_1115;
                    v566 -= v639;
                    goto LABEL_1126;
                  }
                }
                else
                {
                  v565 = v1284;
                  v635 = v625 + v619 - v1343;
                  v566 = v567;
                  if ( v567 - v635 - 1 >= 3 )
                    v566 = v635;
                }
                v552 = v1295;
LABEL_1114:
                v557 = v1193;
                if ( v566 < v620 )
                  goto LABEL_1115;
              }
            }
            v402 = v1212;
            v459 = v1304;
            v636 = __PAIR64__(v1178, v559);
            v548 = v1247;
            v637 = v1178;
          }
          if ( v637 <= v547 )
            break;
          v460 = v1366;
          v640 = (unsigned __int64)&v402[v1366];
          if ( v1312 >= v640 + 3 )
          {
            if ( v548 < v640 )
            {
              if ( (__int64)(v548 - (_QWORD)v402) >= 18 )
              {
                v460 = v548 - (_DWORD)v402;
                v1366 = v548 - (_DWORD)v402;
              }
              else
              {
                if ( v1366 > 18 )
                  v460 = 18;
                v1366 = v460;
                if ( (unsigned __int64)&v402[v460] > v548 + v547 - 4LL )
                {
                  v460 = v548 + v547 - (_DWORD)v402 - 4;
                  v1366 = v460;
                }
                v641 = v460 + (_DWORD)v402 - v548;
                if ( v641 > 0 )
                {
                  v1247 = v641 + v548;
                  HIDWORD(v1256) = v547 - v641;
                  v546 = v1256;
                }
              }
            }
            v642 = v1212;
            v643 = v383;
            v644 = v1212 - v1250;
            v645 = v383;
            v646 = v383;
            v647 = v383 + 1;
            if ( a7 && (unsigned __int64)&v647[v644 / 0xFF + 8 + v644] > v1253 )
              goto LABEL_1261;
            if ( v644 < 0xF )
            {
              *v645 = 16 * v644;
            }
            else
            {
              v648 = v644 - 15;
              *v645 = -16;
              if ( v644 - 15 >= 0xFF )
              {
                v649 = v648 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v649) = -1;
                memset_0(v647, SDWORD2(v649), v648 / 0xFF);
                v642 = v1212;
                v647 += v648 / 0xFF;
                v645 = v643;
                v646 = v643;
                v648 %= 0xFFuLL;
              }
              *v647++ = v648;
            }
            v650 = v647;
            do
            {
              *v650 = *(_QWORD *)((char *)v650 + v1250 - v647);
              ++v650;
            }
            while ( v650 < (_QWORD *)&v647[v644] );
            v651 = &v647[v644];
            v460 = v1366;
            *v651 = v1279;
            v383 = v651 + 1;
            v652 = v1366 - 4LL;
            v1260 = v383;
            if ( a7 )
            {
              v386 = v1253;
              if ( (unsigned __int64)&v383[v652 / 0xFF + 6] > v1253 )
                goto LABEL_1260;
            }
            v653 = *v646;
            if ( v652 < 0xF )
            {
              *v645 = v653 + v652;
            }
            else
            {
              v654 = v1366 - 19LL;
              *v645 = v653 + 15;
              if ( v654 >= 0x1FE )
              {
                v655 = v654 / 0x1FE;
                v654 %= 0x1FEuLL;
                do
                {
                  *v383 = -1;
                  v656 = v383 + 1;
                  *v656 = -1;
                  v383 = v656 + 1;
                  --v655;
                }
                while ( v655 );
              }
              if ( v654 >= 0xFF )
              {
                LOBYTE(v654) = v654 + 1;
                *v383++ = -1;
              }
              *v383++ = v654;
              v1260 = v383;
            }
            v657 = &v642[v1366];
            v402 = (char *)v1247;
            v459 = v1304;
            v548 = v1312;
            v1279 = v546;
            v546 = v636;
            v460 = HIDWORD(v1279);
            v1256 = v636;
            v547 = HIDWORD(v636);
            v1366 = HIDWORD(v1279);
            v1250 = v657;
            v1212 = (char *)v1247;
            v1247 = v1312;
            v1273 = v636;
          }
          else
          {
            if ( v1312 >= v640 )
            {
              if ( v548 < v640 )
              {
                v658 = v1366 + (_DWORD)v402 - v548;
                v1247 = v658 + v548;
                if ( v547 - v658 >= 4 )
                {
                  HIDWORD(v1256) = v547 - v658;
                  v546 = v1256;
                }
                else
                {
                  v1247 = v1312;
                  v546 = v636;
                }
              }
              v659 = v1212;
              v643 = v383;
              v660 = v1212 - v1250;
              v661 = v383;
              v662 = v383;
              v663 = v383 + 1;
              if ( !a7 || (unsigned __int64)&v663[v660 / 0xFF + 8 + v660] <= v1253 )
              {
                if ( v660 < 0xF )
                {
                  *v661 = 16 * v660;
                }
                else
                {
                  v664 = v660 - 15;
                  *v661 = -16;
                  if ( v660 - 15 >= 0xFF )
                  {
                    v665 = v664 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v665) = -1;
                    memset_0(v663, SDWORD2(v665), v664 / 0xFF);
                    v659 = v1212;
                    v663 += v664 / 0xFF;
                    v460 = v1366;
                    v661 = v643;
                    LOBYTE(v664) = v664 / 0xFF + v664;
                    v662 = v643;
                  }
                  *v663++ = v664;
                }
                v666 = v663;
                do
                {
                  *v666 = *(_QWORD *)((char *)v666 + v1250 - v663);
                  ++v666;
                }
                while ( v666 < (_QWORD *)&v663[v660] );
                v667 = &v663[v660];
                v668 = v460 - 4LL;
                *v667 = v1279;
                v383 = v667 + 1;
                v1260 = v383;
                if ( !a7 || (v386 = v1253, (unsigned __int64)&v383[v668 / 0xFF + 6] <= v1253) )
                {
                  v669 = *v662;
                  if ( v668 < 0xF )
                  {
                    *v661 = v669 + v668;
                  }
                  else
                  {
                    v670 = v460 - 19LL;
                    *v661 = v669 + 15;
                    if ( v670 >= 0x1FE )
                    {
                      v671 = v670 / 0x1FE;
                      v670 %= 0x1FEuLL;
                      do
                      {
                        *v383 = -1;
                        v672 = v383 + 1;
                        *v672 = -1;
                        v383 = v672 + 1;
                        --v671;
                      }
                      while ( v671 );
                    }
                    if ( v670 >= 0xFF )
                    {
                      LOBYTE(v670) = v670 + 1;
                      *v383++ = -1;
                    }
                    *v383++ = v670;
                    v1260 = v383;
                  }
                  v458 = (char *)v1247;
                  v1279 = v636;
                  v1250 = &v659[v460];
                  v402 = (char *)v1312;
                  v1212 = (char *)v1312;
                  v438 = v546;
                  v1330 = v1247;
                  v1342 = v546;
                  v1341 = HIDWORD(v546);
                  goto LABEL_789;
                }
LABEL_1260:
                v380 = v1250;
LABEL_1250:
                if ( a7 != 2 )
                {
                  v728 = 0;
                  goto LABEL_1290;
                }
                v714 = v1212;
                v715 = v1212 - v380;
                v383 = v643;
                v716 = (v1212 - v380 + 240) / 0xFFuLL + v1212 - v380 + 1;
                if ( (unsigned __int64)&v643[v716] <= v386 - 3 )
                {
                  if ( v460 > 255 * (v386 - 3 - v716 - (unsigned __int64)v643) + 18 )
                    v460 = 255 * (v386 - 3 - v716 - (_DWORD)v643) + 18;
                  v1367 = v460;
                  if ( (__int64)(v386 + v460 - v716 - (_QWORD)v643 + 2) >= 12 )
                  {
                    v717 = v643 + 1;
                    if ( v715 < 0xF )
                    {
                      *v643 = 16 * v715;
                    }
                    else
                    {
                      v718 = v715 - 15;
                      *v643 = -16;
                      if ( v715 - 15 >= 0xFF )
                      {
                        v719 = v718 * (unsigned __int128)0x8080808080808081uLL;
                        BYTE8(v719) = -1;
                        memset_0(v643 + 1, SDWORD2(v719), v718 / 0xFF);
                        v714 = v1212;
                        v717 += v718 / 0xFF;
                        v380 = v1250;
                        LOBYTE(v718) = v718 / 0xFF + v718;
                      }
                      *v717++ = v718;
                      v460 = v1367;
                    }
                    v720 = v717;
                    v721 = v380 - v717;
                    do
                    {
                      *v720 = *(_QWORD *)((char *)v720 + v721);
                      ++v720;
                    }
                    while ( v720 < (_QWORD *)&v717[v715] );
                    v722 = &v717[v715];
                    v723 = v460 - 4LL;
                    *v722 = v1279;
                    v383 = v722 + 1;
                    v724 = *v643;
                    if ( v723 < 0xF )
                    {
                      *v643 = v723 + v724;
                    }
                    else
                    {
                      v725 = v460 - 19LL;
                      *v643 = v724 + 15;
                      if ( v725 >= 0x1FE )
                      {
                        v726 = v725 / 0x1FE;
                        v725 %= 0x1FEuLL;
                        do
                        {
                          *v383 = -1;
                          v727 = v383 + 1;
                          *v727 = -1;
                          v383 = v727 + 1;
                          --v726;
                        }
                        while ( v726 );
                      }
                      if ( v725 >= 0xFF )
                      {
                        LOBYTE(v725) = v725 + 1;
                        *v383++ = -1;
                      }
                      *v383++ = v725;
                    }
                    v380 = &v714[v460];
                    v1250 = v380;
                  }
                }
LABEL_1276:
                v384 = v1316;
LABEL_1277:
                v729 = v384 - v380;
                v730 = v383;
                if ( a7 == 2 )
                {
                  v386 += 5LL;
                  goto LABEL_1280;
                }
                if ( a7 )
                {
LABEL_1280:
                  if ( (unsigned __int64)&v383[(v729 + 240) / 0xFF + 1 + v729] > v386 )
                  {
                    if ( a7 == 1 )
                    {
                      v728 = 0;
                      goto LABEL_1290;
                    }
                    v729 = v386 - (_QWORD)v383 - 1 - ((v386 - (unsigned __int64)v383 - 1 + 241) >> 8);
                  }
                }
                v731 = v729 + (_DWORD)v380;
                if ( v729 < 0xF )
                {
                  *v383 = 16 * v729;
                  v735 = (_DWORD)v383 + 1;
                }
                else
                {
                  *v383 = -16;
                  v732 = v729 - 15;
                  v733 = v383 + 1;
                  if ( v729 - 15 >= 0xFF )
                  {
                    v734 = v732 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v734) = -1;
                    memset_0(v733, SDWORD2(v734), v732 / 0xFF);
                    v733 += v732 / 0xFF;
                    v380 = v1250;
                    LOBYTE(v732) = v732 / 0xFF + v732;
                  }
                  v730 = v733;
                  *v733 = v732;
                  v735 = (_DWORD)v733 + 1;
                }
                memmove(v730 + 1, v380, v729);
                v728 = v729 + v735 - v1360;
                *a4 = v731 - v1359;
                if ( v728 <= 0 )
LABEL_1290:
                  *(_BYTE *)(a1 + 262183) = 1;
                return (unsigned int)v728;
              }
LABEL_1261:
              v380 = v1250;
LABEL_1249:
              v386 = v1253;
              goto LABEL_1250;
            }
            v1256 = v636;
            v548 = v1312;
            v547 = HIDWORD(v636);
            v546 = v636;
            v1247 = v1312;
            v1273 = v636;
          }
        }
        if ( v548 < (unsigned __int64)&v402[v1366] )
          v1366 = v548 - (_DWORD)v402;
        v380 = v1250;
        v643 = v383;
        v673 = v383;
        v674 = v383;
        v675 = v383 + 1;
        v676 = v402 - v1250;
        if ( a7 && (unsigned __int64)&v675[v676 + 8 + v676 / 0xFF] > v1253 )
        {
          v460 = v1366;
          goto LABEL_1249;
        }
        if ( v676 < 0xF )
        {
          *v673 = 16 * v676;
        }
        else
        {
          v677 = v676 - 15;
          *v673 = -16;
          if ( v676 - 15 >= 0xFF )
          {
            v678 = v677 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v678) = -1;
            memset_0(v675, SDWORD2(v678), v677 / 0xFF);
            v402 = v1212;
            v675 += v677 / 0xFF;
            v380 = v1250;
            v674 = v673;
            LOBYTE(v677) = v677 / 0xFF + v677;
          }
          *v675++ = v677;
          v548 = v1247;
        }
        v679 = v675;
        do
        {
          *v679 = *(_QWORD *)((char *)v679 + v380 - v675);
          ++v679;
        }
        while ( v679 < (_QWORD *)&v675[v676] );
        v680 = &v675[v676];
        v460 = v1366;
        *v680 = v1279;
        v681 = v680 + 1;
        v682 = v1366 - 4LL;
        if ( a7 && (unsigned __int64)&v681[v682 / 0xFF + 6] > v1253 )
        {
          v386 = v1253;
          goto LABEL_1250;
        }
        v683 = *v674;
        if ( v682 < 0xF )
        {
          *v673 = v683 + v682;
        }
        else
        {
          v684 = v1366 - 19LL;
          *v673 = v683 + 15;
          if ( v684 >= 0x1FE )
          {
            v685 = v684 / 0x1FE;
            v684 %= 0x1FEuLL;
            do
            {
              *v681 = -1;
              v686 = v681 + 1;
              *v686 = -1;
              v681 = v686 + 1;
              --v685;
            }
            while ( v685 );
          }
          if ( v684 >= 0xFF )
          {
            LOBYTE(v684) = v684 + 1;
            *v681++ = -1;
          }
          *v681++ = v684;
        }
        v687 = &v402[v1366];
        v1212 = (char *)v548;
        v643 = v681;
        v688 = v681;
        v689 = v681;
        v690 = v548 - (_QWORD)v687;
        v691 = v681 + 1;
        v380 = v687;
        v1250 = v687;
        if ( a7 && (unsigned __int64)&v691[v690 / 0xFF + 8 + v690] > v1253 )
        {
          v1250 = v687;
LABEL_1248:
          LOWORD(v1279) = v546;
          v460 = HIDWORD(v546);
          goto LABEL_1249;
        }
        if ( v690 < 0xF )
        {
          *v688 = 16 * v690;
        }
        else
        {
          v692 = v690 - 15;
          *v688 = -16;
          if ( v690 - 15 >= 0xFF )
          {
            v693 = v692 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v693) = -1;
            memset_0(v691, SDWORD2(v693), v692 / 0xFF);
            v691 += v692 / 0xFF;
            v689 = v688;
            v380 = v1250;
            LOBYTE(v692) = v692 / 0xFF + v692;
          }
          *v691++ = v692;
          v548 = v1247;
        }
        v694 = v691;
        do
        {
          *v694 = *(_QWORD *)((char *)v694 + v380 - v691);
          ++v694;
        }
        while ( v694 < (_QWORD *)&v691[v690] );
        v695 = &v691[v690];
        *v695 = v1256;
        v383 = v695 + 1;
        v696 = SHIDWORD(v1256) - 4LL;
        v1260 = v383;
        if ( a7 && (unsigned __int64)&v383[v696 / 0xFF + 6] > v1253 )
          goto LABEL_1248;
        v697 = *v689;
        if ( v696 < 0xF )
        {
          *v688 = v697 + v696;
        }
        else
        {
          v698 = SHIDWORD(v1256) - 19LL;
          *v688 = v697 + 15;
          if ( v698 >= 0x1FE )
          {
            v699 = v698 / 0x1FE;
            v698 %= 0x1FEuLL;
            do
            {
              *v383 = -1;
              v700 = v383 + 1;
              *v700 = -1;
              v383 = v700 + 1;
              --v699;
            }
            while ( v699 );
          }
          if ( v698 >= 0xFF )
          {
            LOBYTE(v698) = v698 + 1;
            *v383++ = -1;
          }
          *v383++ = v698;
          v1260 = v383;
        }
        v382 = (char *)(v548 + SHIDWORD(v1256));
        v380 = v382;
        v1250 = v382;
LABEL_752:
        v386 = v1253;
        v385 = v1304;
        v1212 = v382;
      }
    }
    if ( a7 == 2 && a5 < 1 )
      return v378;
    v736 = *a4;
    if ( (unsigned int)v736 > 0x7E000000 )
      return v378;
    *(_QWORD *)(a1 + 0x40000) = v10 + v736;
    v737 = a3;
    v738 = *a4;
    v739 = (unsigned int *)a2;
    v740 = a2;
    v741 = &a3[a5];
    v742 = &a2[v738];
    v743 = (unsigned __int64)&a2[v738 - 12];
    *a4 = 0;
    v744 = v741 - 5;
    if ( a7 != 2 )
      v744 = v741;
    v1280 = a3;
    v1254 = v744;
    v1213 = a2;
    v1248 = a2;
    v1309 = &a2[v738];
    v1317 = (__int64)&a2[v738 - 12];
    v1251 = (unsigned __int64)(v742 - 5);
    v1235 = 0LL;
    v1313 = 0LL;
    if ( (int)v738 >= 13 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v739 > v743 )
          goto LABEL_2039;
        v745 = *(unsigned int *)(v11 + 262172);
        v746 = *(_QWORD **)(v11 + 262152);
        v747 = v745;
        v748 = *(unsigned int *)(v11 + 262168);
        v749 = *(_QWORD *)(v11 + 262184);
        v750 = v748 + (_DWORD)v739 - (_DWORD)v746;
        v1179 = 3;
        v1321 = v749;
        v1207 = v750;
        v1242 = *(_DWORD *)(v11 + 262172);
        if ( (int)v745 + 0x10000 <= v750 )
          v747 = v750 - 0xFFFF;
        v751 = *(_QWORD **)(v11 + 262160);
        v752 = *v739;
        v753 = (unsigned __int64)v751 + v748 - v745;
        v1220 = 256;
        v1274 = v751;
        v754 = 0;
        v1368 = 0;
        v1355 = 0LL;
        v755 = v748 + (_DWORD)v739 - (_DWORD)v746;
        v1187 = 0;
        v1336 = v753;
        v1230 = v747;
        v1266 = v752;
        v756 = *(_DWORD *)(a1 + 262176);
        if ( v756 < v755 )
        {
          v757 = (_DWORD *)((char *)v746 + v756 - v748);
          do
          {
            v758 = (unsigned __int64)(unsigned int)(-1640531535 * *v757) >> 17;
            v759 = v756 - *(_DWORD *)(a1 + 4 * v758);
            if ( v759 > 0xFFFF )
              LOWORD(v759) = -1;
            v757 = (_DWORD *)((char *)v757 + 1);
            *(_WORD *)(a1 + 2LL * (unsigned __int16)v756 + 0x20000) = v759;
            *(_DWORD *)(a1 + 4 * v758) = v756++;
          }
          while ( v756 < v755 );
          LODWORD(v745) = v1242;
          v754 = 0;
        }
        *(_DWORD *)(a1 + 262176) = v755;
        v760 = v1213;
        v761 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v1213) >> 17));
        if ( v761 >= v747 )
        {
          v762 = v750;
          while ( 1 )
          {
            v763 = v754;
            if ( v1220 <= 0 )
            {
LABEL_1389:
              v737 = v1280;
              v750 = v1207;
              v749 = v1321;
              break;
            }
            --v1220;
            if ( v761 < (unsigned int)v748 )
            {
              v774 = (_DWORD *)((char *)v1274 + v761 - (unsigned int)v745);
              if ( v761 <= (int)v748 - 4 && *v774 == v752 )
              {
                v775 = (_QWORD *)((char *)v760 + (unsigned int)v748 - v761);
                if ( (unsigned __int64)v775 > v1251 )
                  v775 = (_QWORD *)v1251;
                v776 = v760 + 1;
                v777 = v774 + 1;
                v778 = v776;
                if ( v776 >= (_QWORD *)((char *)v775 - 7) )
                {
                  while ( v778 < (_QWORD *)((char *)v775 - 7) )
                  {
                    if ( *v777 != *v778 )
                    {
                      __asm { tzcnt   rax, r9 }
                      v781 = ((unsigned int)_RAX >> 3) - (_DWORD)v776 + (_DWORD)v778;
                      goto LABEL_1358;
                    }
                    ++v778;
LABEL_1346:
                    ++v777;
                  }
                  if ( v778 < (_QWORD *)((char *)v775 - 3) && *(_DWORD *)v777 == *(_DWORD *)v778 )
                  {
                    v778 = (_QWORD *)((char *)v778 + 4);
                    v777 = (_QWORD *)((char *)v777 + 4);
                  }
                  if ( v778 < (_QWORD *)((char *)v775 - 1) && *(_WORD *)v777 == *(_WORD *)v778 )
                  {
                    v778 = (_QWORD *)((char *)v778 + 2);
                    v777 = (_QWORD *)((char *)v777 + 2);
                  }
                  if ( v778 < v775 && *(_BYTE *)v777 == *(_BYTE *)v778 )
                    LODWORD(v778) = (_DWORD)v778 + 1;
                  v781 = (_DWORD)v778 - (_DWORD)v776;
                }
                else
                {
                  if ( *v777 == *v776 )
                  {
                    v778 = v776 + 1;
                    goto LABEL_1346;
                  }
                  __asm { tzcnt   rcx, r9 }
                  v781 = (unsigned int)_RCX >> 3;
                }
LABEL_1358:
                v760 = v1213;
                v784 = v781 + 4;
                v785 = (_QWORD *)((char *)v1213 + (int)(v781 + 4));
                if ( v785 == v775 && (unsigned __int64)v775 < v1251 )
                {
                  v786 = v746;
                  v787 = (_QWORD *)((char *)v1213 + v784);
                  if ( (unsigned __int64)v785 >= v1251 - 7 )
                    goto LABEL_1363;
                  if ( *v746 != *v785 )
                  {
                    __asm { tzcnt   rcx, rdx }
                    v791 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v787 = v785 + 1;
                    v786 = v746 + 1;
LABEL_1363:
                    while ( (unsigned __int64)v787 < v1251 - 7 )
                    {
                      if ( *v786 != *v787 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v791 = ((unsigned int)_RAX >> 3) - (_DWORD)v785 + (_DWORD)v787;
                        goto LABEL_1378;
                      }
                      ++v787;
                      ++v786;
                    }
                    if ( (unsigned __int64)v787 < v1251 - 3 && *(_DWORD *)v786 == *(_DWORD *)v787 )
                    {
                      v787 = (_QWORD *)((char *)v787 + 4);
                      v786 = (_QWORD *)((char *)v786 + 4);
                    }
                    if ( (unsigned __int64)v787 < v1251 - 1 && *(_WORD *)v786 == *(_WORD *)v787 )
                    {
                      v787 = (_QWORD *)((char *)v787 + 2);
                      v786 = (_QWORD *)((char *)v786 + 2);
                    }
                    if ( (unsigned __int64)v787 < v1251 && *(_BYTE *)v786 == *(_BYTE *)v787 )
                      LODWORD(v787) = (_DWORD)v787 + 1;
                    v791 = (_DWORD)v787 - (_DWORD)v785;
                  }
LABEL_1378:
                  v760 = v1213;
                  v784 += v791;
                }
                v754 = v1368;
                if ( v784 > v1179 )
                {
                  v1179 = v784;
                  v1187 = v762 - v761;
                }
                v747 = v1230;
              }
            }
            else
            {
              v764 = (_DWORD *)((char *)v746 + v761 - (unsigned int)v748);
              if ( *(_WORD *)((char *)v760 + v1179 - 1) == *(_WORD *)((char *)v764 + v1179 - 1) && *v764 == v752 )
              {
                v765 = v760 + 1;
                v766 = v764 + 1;
                v767 = v760 + 1;
                if ( (unsigned __int64)(v760 + 1) >= v1251 - 7 )
                {
                  while ( (unsigned __int64)v767 < v1251 - 7 )
                  {
                    if ( *v766 != *v767 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v770 = ((unsigned int)_RAX >> 3) - (_DWORD)v765 + (_DWORD)v767;
                      goto LABEL_1333;
                    }
                    ++v767;
LABEL_1321:
                    ++v766;
                  }
                  if ( (unsigned __int64)v767 < v1251 - 3 && *(_DWORD *)v766 == *(_DWORD *)v767 )
                  {
                    v767 = (_QWORD *)((char *)v767 + 4);
                    v766 = (_QWORD *)((char *)v766 + 4);
                  }
                  if ( (unsigned __int64)v767 < v1251 - 1 && *(_WORD *)v766 == *(_WORD *)v767 )
                  {
                    v767 = (_QWORD *)((char *)v767 + 2);
                    v766 = (_QWORD *)((char *)v766 + 2);
                  }
                  if ( (unsigned __int64)v767 < v1251 && *(_BYTE *)v766 == *(_BYTE *)v767 )
                    LODWORD(v767) = (_DWORD)v767 + 1;
                  v770 = (_DWORD)v767 - (_DWORD)v765;
                }
                else
                {
                  if ( *v766 == *v765 )
                  {
                    v767 = v760 + 3;
                    goto LABEL_1321;
                  }
                  __asm { tzcnt   rcx, r8 }
                  v770 = (unsigned int)_RCX >> 3;
                }
LABEL_1333:
                v754 = v1368;
                v773 = v770 + 4;
                v760 = v1213;
                if ( v773 > v1179 )
                {
                  v1179 = v773;
                  v1187 = v762 - v761;
                }
              }
            }
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v761 + 0x20000) != 1 )
              goto LABEL_1387;
            v793 = v761 - 1;
            if ( v754 )
            {
              v1368 = v763;
              if ( v763 != 2 )
                goto LABEL_1387;
              v794 = v1251;
            }
            else
            {
              if ( (_BYTE)v752 != HIBYTE(v752) || (unsigned __int16)v752 != HIWORD(v752) )
              {
                v1368 = 1;
LABEL_1387:
                v747 = v1230;
                v761 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v761 + 0x20000);
                goto LABEL_1388;
              }
              v794 = v1251;
              v1368 = 2;
              v1355 = (unsigned int)LZ4HC_countPattern(v760 + 1, v1251, v752, 1LL) + 4LL;
            }
            if ( v793 < v747 || (unsigned int)v748 - v793 - 1 < 3 )
              goto LABEL_1387;
            if ( v793 >= (unsigned int)v748 )
            {
              v808 = 0;
              v809 = (_DWORD *)((char *)v746 + v793 - (unsigned int)v748);
            }
            else
            {
              v808 = 1;
              v809 = (_DWORD *)((char *)v1274 + v793 - v1242);
            }
            if ( *v809 != v1266 )
              goto LABEL_1387;
            v810 = v794;
            if ( v808 )
              v810 = v1336;
            v811 = (unsigned int)LZ4HC_countPattern(v809 + 1, v810, v1266, 1LL) + 4LL;
            if ( v808 )
            {
              if ( (_DWORD *)((char *)v809 + v811) == v812 )
              {
                v813 = LZ4HC_rotatePattern(v811, v1266);
                v811 += (unsigned int)LZ4HC_countPattern(v746, v1251, v813, v814);
              }
              v815 = v1274;
            }
            else
            {
              v815 = v746;
            }
            v816 = LZ4HC_reverseCountPattern(v809, v815, v1266);
            v818 = v816;
            if ( !v808 && (_QWORD *)((char *)v809 - v816) == v746 && v1242 < (unsigned int)v748 )
            {
              v819 = LZ4HC_rotatePattern(-v816, v817);
              v820 = LZ4HC_reverseCountPattern(v1336, v1274, v819);
              v818 = v820 + v821;
            }
            v747 = v1230;
            v822 = v793 - v818;
            v823 = v1230;
            if ( v822 > v1230 )
              v823 = v822;
            v824 = v811 + v793 - v823;
            if ( v824 < v1355 || v811 > v1355 )
            {
              if ( (unsigned int)v748 - v823 - 1 < 3 )
              {
                v761 = v748;
              }
              else
              {
                v760 = v1213;
                v826 = v1355;
                if ( v824 < v1355 )
                  v826 = v811 + v793 - v823;
                if ( v1179 < v826 )
                {
                  if ( (unsigned __int64)v1213 + v748 - v823 - (_QWORD)v746 > 0xFFFF )
                    goto LABEL_1389;
                  v1179 = v826;
                  v1187 = v762 - v823;
                }
                v827 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v823 + 0x20000);
                if ( v827 > v823 )
                  goto LABEL_1389;
                v761 = v823 - v827;
              }
            }
            else
            {
              v825 = v811 + v793 - v1355;
              v761 = v748;
              if ( (unsigned int)v748 - v825 - 1 >= 3 )
                v761 = v825;
            }
LABEL_1388:
            LODWORD(v745) = v1242;
            v754 = v1368;
            v760 = v1213;
            if ( v761 < v747 )
              goto LABEL_1389;
            v752 = v1266;
          }
        }
        v795 = v1220;
        if ( v1220 > 0 && v750 - v747 < 0xFFFF )
        {
          v796 = *(_QWORD *)(v749 + 262152);
          v797 = *(unsigned int *)(v749 + 262168);
          v798 = v797 + *(_QWORD *)(v749 + 0x40000) - v796;
          v799 = *(_DWORD *)(v749 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v760) >> 17));
          v800 = v747 + v799 - v798;
          v801 = v750 - v800;
          if ( v750 - v800 <= 0xFFFF )
          {
            do
            {
              v1221 = v795 - 1;
              if ( !v795 )
                break;
              v802 = (_DWORD *)(v799 + v796 - v797);
              if ( *v802 == v1266 )
              {
                v803 = (char *)(v760 + 1);
                v804 = (char *)(v760 + 1);
                v805 = (char *)v760 + v798 - v799;
                if ( (unsigned __int64)v805 > v1251 )
                  v805 = (char *)v1251;
                v806 = v802 + 1;
                if ( v803 >= v805 - 7 )
                {
                  while ( v804 < v805 - 7 )
                  {
                    if ( *(_QWORD *)v804 != *v806 )
                    {
                      __asm { tzcnt   rax, r10 }
                      v829 = ((unsigned int)_RAX >> 3) - (_DWORD)v803 + (_DWORD)v804;
                      goto LABEL_1451;
                    }
                    v804 += 8;
LABEL_1439:
                    ++v806;
                  }
                  if ( v804 < v805 - 3 && *(_DWORD *)v806 == *(_DWORD *)v804 )
                  {
                    v804 += 4;
                    v806 = (_QWORD *)((char *)v806 + 4);
                  }
                  if ( v804 < v805 - 1 && *(_WORD *)v806 == *(_WORD *)v804 )
                  {
                    v804 += 2;
                    v806 = (_QWORD *)((char *)v806 + 2);
                  }
                  if ( v804 < v805 && *(_BYTE *)v806 == *v804 )
                    LODWORD(v804) = (_DWORD)v804 + 1;
                  v829 = (_DWORD)v804 - (_DWORD)v803;
LABEL_1451:
                  v760 = v1213;
                }
                else
                {
                  if ( *(_QWORD *)v803 == *v806 )
                  {
                    v804 = (char *)(v760 + 3);
                    goto LABEL_1439;
                  }
                  __asm { tzcnt   rcx, rcx }
                  v829 = (unsigned int)_RCX >> 3;
                }
                v750 = v1207;
                v832 = v829 + 4;
                if ( v832 > v1179 )
                {
                  v1179 = v832;
                  v1187 = v801;
                }
              }
              v795 = v1221;
              v833 = *(unsigned __int16 *)(v1321 + 2LL * (unsigned __int16)v799 + 0x20000);
              v800 -= v833;
              v799 -= v833;
              v801 = v750 - v800;
            }
            while ( v750 - v800 <= 0xFFFF );
            v737 = v1280;
          }
        }
        v834 = __PAIR64__(v1179, v1187);
        v1322 = __PAIR64__(v1179, v1187);
        v1305 = __PAIR64__(v1179, v1187);
        if ( v1179 < 4 )
        {
          v740 = v1248;
          v744 = v1254;
          v739 = (_DWORD *)((char *)v760 + 1);
          goto LABEL_1458;
        }
        v835 = v760;
        v1302 = v1179;
        v1325 = v760;
        while ( 1 )
        {
          v836 = v1317;
          while ( 1 )
          {
            v837 = HIDWORD(v1305);
            v1369 = HIDWORD(v1305);
            v838 = (char *)v760 + SHIDWORD(v1305);
            if ( (unsigned __int64)v838 > v836 )
            {
              v1257 = 0LL;
              v953 = 0;
              v952 = 0LL;
            }
            else
            {
              v1188 = HIDWORD(v1305);
              v839 = v838 - 2;
              v1235 = (unsigned __int64)(v838 - 2);
              v1349 = v838 - 2;
              v1261 = v838 - 2;
              v840 = *(unsigned int *)(a1 + 262172);
              v841 = *(char **)(a1 + 262152);
              v842 = v840;
              v843 = (_DWORD)v838 - 2 - (_DWORD)v841;
              v844 = *(unsigned int *)(a1 + 262168);
              v845 = v844 + v843;
              v1345 = *(_QWORD *)(a1 + 262184);
              v1275 = v841;
              v1292 = *(_DWORD *)(a1 + 262168);
              v1231 = v845;
              v1243 = *(_DWORD *)(a1 + 262172);
              if ( (int)v840 + 0x10000 <= v845 )
                v842 = v845 - 0xFFFF;
              v846 = *(char **)(a1 + 262160);
              v847 = *(_DWORD *)(a1 + 262176);
              v1337 = &v846[v844 - v840];
              v848 = (_DWORD)v839 - (_DWORD)v1213;
              v849 = 0;
              v1200 = 256;
              v1180 = 0;
              v1356 = 0LL;
              v1222 = 0;
              v1194 = v842;
              v1296 = v846;
              v1208 = *(_DWORD *)v839;
              if ( v847 < v845 )
              {
                v850 = &v841[v847 - v844];
                do
                {
                  v851 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v850) >> 17;
                  v852 = v847 - *(_DWORD *)(a1 + 4 * v851);
                  if ( v852 > 0xFFFF )
                    LOWORD(v852) = -1;
                  ++v850;
                  *(_WORD *)(a1 + 2LL * (unsigned __int16)v847 + 0x20000) = v852;
                  *(_DWORD *)(a1 + 4 * v851) = v847++;
                }
                while ( v847 < v845 );
                v834 = v1322;
                v849 = 0;
              }
              *(_DWORD *)(a1 + 262176) = v845;
              v853 = v848;
              v1285 = v848;
              v854 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v839) >> 17));
              if ( v854 >= v842 )
              {
                v855 = SHIDWORD(v1305);
                LODWORD(v856) = v1292;
                while ( 1 )
                {
                  v857 = v849;
                  v1267 = v849;
                  if ( v1200 <= 0 )
                  {
LABEL_1581:
                    v834 = v1322;
                    v737 = v1280;
                    v845 = v1231;
                    break;
                  }
                  --v1200;
                  if ( v854 < (unsigned int)v856 )
                  {
                    v878 = &v846[v854 - (unsigned int)v840];
                    if ( v854 <= (int)v856 - 4 && *(_DWORD *)v878 == v1208 )
                    {
                      v879 = v878 + 4;
                      v880 = &v839[(unsigned int)v856 - v854];
                      if ( (unsigned __int64)v880 > v1251 )
                        v880 = (char *)v1251;
                      v881 = v839 + 4;
                      v882 = v881;
                      if ( v881 >= v880 - 7 )
                      {
                        while ( v882 < v880 - 7 )
                        {
                          if ( *v879 != *(_QWORD *)v882 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v885 = ((unsigned int)_RAX >> 3) - (_DWORD)v881 + (_DWORD)v882;
                            goto LABEL_1539;
                          }
                          v882 += 8;
LABEL_1527:
                          ++v879;
                        }
                        if ( v882 < v880 - 3 && *(_DWORD *)v879 == *(_DWORD *)v882 )
                        {
                          v882 += 4;
                          v879 = (_QWORD *)((char *)v879 + 4);
                        }
                        if ( v882 < v880 - 1 && *(_WORD *)v879 == *(_WORD *)v882 )
                        {
                          v882 += 2;
                          v879 = (_QWORD *)((char *)v879 + 2);
                        }
                        if ( v882 < v880 && *(_BYTE *)v879 == *v882 )
                          LODWORD(v882) = (_DWORD)v882 + 1;
                        v885 = (_DWORD)v882 - (_DWORD)v881;
                      }
                      else
                      {
                        if ( *v879 == *(_QWORD *)v881 )
                        {
                          v882 = v881 + 8;
                          goto LABEL_1527;
                        }
                        __asm { tzcnt   rcx, r8 }
                        v885 = (unsigned int)_RCX >> 3;
                      }
LABEL_1539:
                      v839 = v1261;
                      v888 = v885 + 4;
                      v889 = &v1261[v885 + 4];
                      if ( v889 == v880 && (unsigned __int64)v880 < v1251 )
                      {
                        v890 = v1275;
                        v891 = &v1261[v888];
                        if ( (unsigned __int64)v889 >= v1251 - 7 )
                          goto LABEL_1544;
                        if ( *(_QWORD *)v1275 != *(_QWORD *)v889 )
                        {
                          __asm { tzcnt   rcx, rdx }
                          v895 = (unsigned int)_RCX >> 3;
                        }
                        else
                        {
                          v891 = v889 + 8;
                          v890 = v1275 + 8;
LABEL_1544:
                          while ( (unsigned __int64)v891 < v1251 - 7 )
                          {
                            if ( *v890 != *(_QWORD *)v891 )
                            {
                              __asm { tzcnt   rax, r8 }
                              v895 = ((unsigned int)_RAX >> 3) - (_DWORD)v889 + (_DWORD)v891;
                              goto LABEL_1559;
                            }
                            v891 += 8;
                            ++v890;
                          }
                          if ( (unsigned __int64)v891 < v1251 - 3 && *(_DWORD *)v890 == *(_DWORD *)v891 )
                          {
                            v891 += 4;
                            v890 = (_QWORD *)((char *)v890 + 4);
                          }
                          if ( (unsigned __int64)v891 < v1251 - 1 && *(_WORD *)v890 == *(_WORD *)v891 )
                          {
                            v891 += 2;
                            v890 = (_QWORD *)((char *)v890 + 2);
                          }
                          if ( (unsigned __int64)v891 < v1251 && *(_BYTE *)v890 == *v891 )
                            LODWORD(v891) = (_DWORD)v891 + 1;
                          v895 = (_DWORD)v891 - (_DWORD)v889;
                        }
LABEL_1559:
                        v888 += v895;
                      }
                      v897 = 0;
                      if ( v1285 )
                      {
                        v898 = 0LL;
                        if ( (char *)v1213 - v1261 <= v1296 - v878 )
                          v899 = (_DWORD)v1296 - (_DWORD)v878;
                        else
                          v899 = (_DWORD)v1213 - (_DWORD)v1261;
                        v900 = v878 - 4;
                        v901 = -v899;
                        v902 = v1261 - v878;
                        while ( v901 > 3 )
                        {
                          if ( *(_DWORD *)v900 != *(_DWORD *)&v900[v902] )
                          {
                            _BitScanReverse(&v903, *(_DWORD *)v900 ^ *(_DWORD *)&v900[v902]);
                            v897 -= (31 - v903) >> 3;
                            goto LABEL_1573;
                          }
                          v897 -= 4;
                          v901 -= 4;
                          v898 -= 4LL;
                          v900 -= 4;
                        }
                        if ( v898 > v899 )
                        {
                          v904 = &v1296[v898 - 1 + v854 - (unsigned int)v840];
                          do
                          {
                            if ( v904[(_QWORD)v1213
                                    + SHIDWORD(v1305)
                                    - (unsigned __int64)(v854 - (unsigned int)v840)
                                    - (_QWORD)v1296
                                    - 2] != *v904 )
                              break;
                            --v904;
                            --v897;
                          }
                          while ( (__int64)&v904[1LL - (v854 - (unsigned int)v840) - (_QWORD)v1296] > v899 );
                        }
LABEL_1573:
                        v839 = v1261;
                      }
                      v849 = v1180;
                      v905 = v888 - v897;
                      if ( v905 > v1188 )
                      {
                        v1188 = v905;
                        v1222 = v1231 - v854;
                        v1235 = (unsigned __int64)&v839[v897];
                      }
                      goto LABEL_1511;
                    }
                  }
                  else
                  {
                    v858 = &v1275[v854 - (unsigned int)v856];
                    if ( *(_WORD *)((char *)v1213 + v1188 - 1) == *(_WORD *)&v858[v1188 - v853 - 1]
                      && *(_DWORD *)v858 == v1208 )
                    {
                      v859 = 0;
                      if ( v853 )
                      {
                        v860 = 0LL;
                        if ( (char *)v1213 - v1261 <= -(__int64)(v854 - (unsigned int)v856) )
                          v861 = v856 - v854;
                        else
                          v861 = (_DWORD)v1213 - (_DWORD)v1261;
                        v862 = v858 - 4;
                        v863 = -v861;
                        v864 = v1261 - v858;
                        while ( v863 > 3 )
                        {
                          if ( *(_DWORD *)v862 != *(_DWORD *)&v862[v864] )
                          {
                            _BitScanReverse(&v865, *(_DWORD *)v862 ^ *(_DWORD *)&v862[v864]);
                            v859 -= (31 - v865) >> 3;
                            goto LABEL_1489;
                          }
                          v859 -= 4;
                          v863 -= 4;
                          v860 -= 4LL;
                          v862 -= 4;
                        }
                        if ( v860 > v861 )
                        {
                          v866 = &v1275[v854 - (unsigned int)v856 - 1 + v860];
                          do
                          {
                            if ( v866[(_QWORD)v1213 + v855 - (v854 - (unsigned int)v856) - (_QWORD)v1275 - 2] != *v866 )
                              break;
                            --v866;
                            --v859;
                          }
                          while ( (__int64)&v866[1LL - (v854 - (unsigned int)v856) - (_QWORD)v1275] > v861 );
                        }
LABEL_1489:
                        v839 = v1261;
                      }
                      v867 = v839 + 4;
                      v868 = v858 + 4;
                      v869 = v839 + 4;
                      if ( (unsigned __int64)(v839 + 4) >= v1251 - 7 )
                      {
                        while ( (unsigned __int64)v869 < v1251 - 7 )
                        {
                          if ( *v868 != *v869 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v872 = ((unsigned int)_RAX >> 3) - (_DWORD)v867 + (_DWORD)v869;
                            goto LABEL_1509;
                          }
                          ++v869;
LABEL_1497:
                          ++v868;
                        }
                        if ( (unsigned __int64)v869 < v1251 - 3 && *(_DWORD *)v868 == *(_DWORD *)v869 )
                        {
                          v869 = (_QWORD *)((char *)v869 + 4);
                          v868 = (_QWORD *)((char *)v868 + 4);
                        }
                        if ( (unsigned __int64)v869 < v1251 - 1 && *(_WORD *)v868 == *(_WORD *)v869 )
                        {
                          v869 = (_QWORD *)((char *)v869 + 2);
                          v868 = (_QWORD *)((char *)v868 + 2);
                        }
                        if ( (unsigned __int64)v869 < v1251 && *(_BYTE *)v868 == *(_BYTE *)v869 )
                          LODWORD(v869) = (_DWORD)v869 + 1;
                        v872 = (_DWORD)v869 - (_DWORD)v867;
                      }
                      else
                      {
                        if ( *v868 == *v867 )
                        {
                          v869 = v839 + 12;
                          goto LABEL_1497;
                        }
                        __asm { tzcnt   rcx, r8 }
                        v872 = (unsigned int)_RCX >> 3;
                      }
LABEL_1509:
                      v849 = v1180;
                      v875 = v872 - v859 + 4;
                      if ( v875 > v1188 )
                      {
                        v1188 = v875;
                        v1222 = v1231 - v854;
                        v1235 = (unsigned __int64)&v839[v859];
                      }
LABEL_1511:
                      v842 = v1194;
                      v857 = v1267;
                    }
                  }
                  if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v854 + 0x20000) != 1 )
                    goto LABEL_1578;
                  v876 = v854 - 1;
                  if ( v849 )
                  {
                    v1180 = v857;
                    if ( v857 != 2 )
                      goto LABEL_1578;
                    v877 = v1208;
                  }
                  else
                  {
                    v877 = v1208;
                    if ( (_BYTE)v1208 != HIBYTE(v1208) || (unsigned __int16)v1208 != HIWORD(v1208) )
                    {
                      v1180 = 1;
LABEL_1578:
                      v854 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v854 + 0x20000);
LABEL_1579:
                      v853 = v1285;
                      goto LABEL_1580;
                    }
                    v1180 = 2;
                    v1356 = (unsigned int)LZ4HC_countPattern(v839 + 4, v1251, v1208, 1LL) + 4LL;
                  }
                  if ( v876 < v842 || (unsigned int)v856 - v854 < 3 )
                    goto LABEL_1578;
                  if ( v876 >= (unsigned int)v856 )
                  {
                    v921 = 0;
                    v922 = &v1275[v876 - (unsigned int)v856];
                  }
                  else
                  {
                    v921 = 1;
                    v922 = &v1296[v876 - v1243];
                  }
                  if ( *(_DWORD *)v922 != v877 )
                    goto LABEL_1578;
                  v923 = (char *)v1251;
                  if ( v921 )
                    v923 = v1337;
                  v924 = (unsigned int)LZ4HC_countPattern(v922 + 4, v923, v877, 1LL) + 4LL;
                  if ( v921 )
                  {
                    if ( &v922[v924] == v923 )
                    {
                      v925 = LZ4HC_rotatePattern(v924, v1208);
                      v924 += (unsigned int)LZ4HC_countPattern(v1275, v1251, v925, v926);
                    }
                    v927 = v1296;
                    v928 = v1296;
                  }
                  else
                  {
                    v927 = v1296;
                    v928 = v1275;
                  }
                  v929 = LZ4HC_reverseCountPattern(v922, v928, v1208);
                  v931 = v929;
                  if ( !v921 && &v922[-v929] == v1275 && v1243 < (unsigned int)v856 )
                  {
                    v932 = LZ4HC_rotatePattern(-v929, v930);
                    v931 += LZ4HC_reverseCountPattern(v1337, v927, v932);
                  }
                  v933 = v876 - v931;
                  v842 = v1194;
                  v854 = v1194;
                  if ( v933 > v1194 )
                    v854 = v933;
                  v934 = v924 + v876 - v854;
                  if ( v934 >= v1356 && v924 <= v1356 )
                  {
                    v935 = v876 + v924 - v1356;
                    v854 = v856;
                    if ( (unsigned int)v856 - v935 - 1 >= 3 )
                      v854 = v935;
                    goto LABEL_1579;
                  }
                  v853 = v1285;
                  if ( (unsigned int)v856 - v854 - 1 < 3 )
                  {
                    v854 = v856;
                    goto LABEL_1580;
                  }
                  if ( !v1285 )
                  {
                    v936 = v1356;
                    if ( v934 < v1356 )
                      v936 = v924 + v876 - v854;
                    if ( v1188 < v936 )
                    {
                      if ( (unsigned __int64)(v856 + &v1261[-v854] - v1275) > 0xFFFF )
                        goto LABEL_1581;
                      v1188 = v936;
                      v1222 = v1231 - v854;
                      v1235 = (unsigned __int64)v1261;
                    }
                    v937 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v854 + 0x20000);
                    if ( v937 > v854 )
                      goto LABEL_1581;
                    v854 -= v937;
                    goto LABEL_1579;
                  }
LABEL_1580:
                  LODWORD(v840) = v1243;
                  v846 = v1296;
                  v839 = v1261;
                  v849 = v1180;
                  v855 = SHIDWORD(v1305);
                  if ( v854 < v842 )
                    goto LABEL_1581;
                }
              }
              v906 = v1200;
              if ( v1200 > 0 && v845 - v842 < 0xFFFF )
              {
                v907 = v1261;
                v908 = *(_QWORD *)(v1345 + 262152);
                v909 = *(unsigned int *)(v1345 + 262168);
                v1297 = v909;
                v1276 = v908;
                v1338 = v909 + *(_QWORD *)(v1345 + 0x40000) - v908;
                v910 = *(_DWORD *)(v1345 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1261) >> 17));
                v1244 = v910;
                v911 = v842 + v910 - v1338;
                v912 = v845 - v911;
                if ( v845 - v911 <= 0xFFFF )
                {
                  v913 = v909 + *(_QWORD *)(v1345 + 0x40000) - v908;
                  do
                  {
                    v914 = v906--;
                    v1201 = v906;
                    if ( !v914 )
                      break;
                    v915 = (_DWORD *)(v910 + v908 - v909);
                    if ( *v915 == v1208 )
                    {
                      v916 = v907 + 4;
                      v917 = v915 + 1;
                      v918 = (unsigned __int64)&v1349[v913 - v910];
                      v919 = v907 + 4;
                      if ( v918 > v1251 )
                        v918 = v1251;
                      if ( (unsigned __int64)v916 >= v918 - 7 )
                      {
                        while ( (unsigned __int64)v919 < v918 - 7 )
                        {
                          if ( *v917 != *v919 )
                          {
                            __asm { tzcnt   rax, r9 }
                            v939 = ((unsigned int)_RAX >> 3) - (_DWORD)v916 + (_DWORD)v919;
                            goto LABEL_1645;
                          }
                          ++v919;
LABEL_1633:
                          ++v917;
                        }
                        if ( (unsigned __int64)v919 < v918 - 3 && *(_DWORD *)v917 == *(_DWORD *)v919 )
                        {
                          v919 = (_QWORD *)((char *)v919 + 4);
                          v917 = (_QWORD *)((char *)v917 + 4);
                        }
                        if ( (unsigned __int64)v919 < v918 - 1 && *(_WORD *)v917 == *(_WORD *)v919 )
                        {
                          v919 = (_QWORD *)((char *)v919 + 2);
                          v917 = (_QWORD *)((char *)v917 + 2);
                        }
                        if ( (unsigned __int64)v919 < v918 && *(_BYTE *)v917 == *(_BYTE *)v919 )
                          LODWORD(v919) = (_DWORD)v919 + 1;
                        v939 = (_DWORD)v919 - (_DWORD)v916;
                      }
                      else
                      {
                        if ( *v917 == *v916 )
                        {
                          v919 = v916 + 1;
                          goto LABEL_1633;
                        }
                        __asm { tzcnt   rcx, r9 }
                        v939 = (unsigned int)_RCX >> 3;
                      }
LABEL_1645:
                      v908 = *(_QWORD *)(v1345 + 262152);
                      v942 = v939 + 4;
                      v943 = 0;
                      if ( v1285 )
                      {
                        v944 = 0LL;
                        if ( (char *)v1213 - v1261 <= v1276 - (__int64)v915 )
                          v945 = v1276 - (_DWORD)v915;
                        else
                          v945 = (_DWORD)v1213 - (_DWORD)v1261;
                        v946 = v915 - 1;
                        v947 = -v945;
                        v948 = v1349 - (char *)v915;
                        while ( v947 > 3 )
                        {
                          if ( *v946 != *(_DWORD *)((char *)v946 + v948) )
                          {
                            _BitScanReverse(&v949, *v946 ^ *(_DWORD *)((char *)v946 + v948));
                            v908 = *(_QWORD *)(v1345 + 262152);
                            v943 -= (31 - v949) >> 3;
LABEL_1654:
                            v910 = v1244;
                            goto LABEL_1655;
                          }
                          v943 -= 4;
                          v947 -= 4;
                          v944 -= 4LL;
                          --v946;
                        }
                        v908 = *(_QWORD *)(v1345 + 262152);
                        v954 = v945;
                        if ( v944 <= v945 )
                          goto LABEL_1654;
                        v910 = v1244;
                        v955 = (_BYTE *)(v944 + v1276 + v1244 - v1297 - 1);
                        do
                        {
                          if ( *((_BYTE *)v1213 + SHIDWORD(v1305) + v944 - 3) != *v955 )
                            break;
                          --v943;
                          --v944;
                          --v955;
                        }
                        while ( v944 > v954 );
                        v913 = v1338;
                      }
LABEL_1655:
                      v907 = v1261;
                      v950 = v942 - v943;
                      v909 = v1297;
                      v906 = v1201;
                      if ( v950 > v1188 )
                      {
                        v1188 = v950;
                        v1235 = (unsigned __int64)&v1261[v943];
                        v1222 = v912;
                      }
                    }
                    v951 = *(unsigned __int16 *)(v1345 + 2LL * (unsigned __int16)v910 + 0x20000);
                    v911 -= v951;
                    v910 -= v951;
                    v912 = v1231 - v911;
                    v1244 = v910;
                  }
                  while ( v1231 - v911 <= 0xFFFF );
                  v834 = v1322;
                  v737 = v1280;
                }
              }
              v835 = v1325;
              v837 = HIDWORD(v1305);
              v760 = v1213;
              v836 = v1317;
              v952 = __PAIR64__(v1188, v1222);
              v1257 = __PAIR64__(v1188, v1222);
              v953 = v1188;
            }
            v1277 = v952;
            if ( v953 <= v837 )
            {
              v1109 = v1248;
              v1080 = v737;
              v1138 = v737;
              v1139 = v737;
              v1140 = v737 + 1;
              v1141 = (char *)v760 - v1248;
              if ( a7 )
              {
                v744 = v1254;
                if ( &v1140[v1141 + 8 + v1141 / 0xFF] > v1254 )
                  goto LABEL_2012;
              }
              if ( v1141 < 0xF )
              {
                *v1138 = 16 * v1141;
              }
              else
              {
                v1142 = v1141 - 15;
                *v1138 = -16;
                if ( v1141 - 15 >= 0xFF )
                {
                  v1143 = v1142 * (unsigned __int128)0x8080808080808081uLL;
                  BYTE8(v1143) = -1;
                  memset_0(v1140, SDWORD2(v1143), v1142 / 0xFF);
                  v837 = HIDWORD(v1305);
                  v1140 += v1142 / 0xFF;
                  v760 = v1213;
                  v1109 = v1248;
                  LOBYTE(v1142) = v1142 / 0xFF + v1142;
                }
                *v1140++ = v1142;
              }
              v1144 = v1140;
              do
              {
                *v1144 = *(_QWORD *)((char *)v1144 + v1109 - v1140);
                ++v1144;
              }
              while ( v1144 < (_QWORD *)&v1140[v1141] );
              v1145 = &v1140[v1141];
              v744 = v1254;
              v1146 = v837 - 4LL;
              *v1145 = v1305;
              v737 = v1145 + 1;
              v1280 = v737;
              if ( a7 )
              {
                if ( &v737[v1146 / 0xFF + 6] > v1254 )
                  goto LABEL_2012;
              }
              v1147 = *v1139;
              if ( v1146 < 0xF )
              {
                *v1138 = v1146 + v1147;
              }
              else
              {
                v1148 = v837 - 19LL;
                *v1138 = v1147 + 15;
                if ( v1148 >= 0x1FE )
                {
                  v1149 = v1148 / 0x1FE;
                  v1148 %= 0x1FEuLL;
                  do
                  {
                    *v737 = -1;
                    v1150 = v737 + 1;
                    *v1150 = -1;
                    v737 = v1150 + 1;
                    --v1149;
                  }
                  while ( v1149 );
                }
                if ( v1148 >= 0xFF )
                {
                  LOBYTE(v1148) = v1148 + 1;
                  *v737++ = -1;
                }
                *v737++ = v1148;
                v1280 = v737;
              }
              v739 = (_DWORD *)((char *)v760 + v837);
              goto LABEL_2006;
            }
            v956 = v1235;
            if ( v835 < v760 && v1235 < (unsigned __int64)v760 + v1302 )
            {
              LOWORD(v1305) = v834;
              v760 = v835;
              v837 = HIDWORD(v834);
              v1369 = HIDWORD(v834);
              v1213 = v835;
            }
            if ( (__int64)(v1235 - (_QWORD)v760) >= 3 )
              break;
            v760 = (_DWORD *)v1235;
            v1213 = (_DWORD *)v1235;
            v1305 = v952;
          }
LABEL_1672:
          if ( (__int64)(v956 - (_QWORD)v760) < 18 )
          {
            v957 = v837;
            if ( v837 > 18 )
              v957 = 18;
            if ( (unsigned __int64)v760 + v957 > v956 + v953 - 4LL )
              v957 = v956 + v953 - (_DWORD)v760 - 4;
            v958 = v957 + (_DWORD)v760 - v956;
            if ( v958 > 0 )
            {
              v956 += v958;
              v953 -= v958;
              v1235 = v956;
              HIDWORD(v1257) = v953;
              v952 = v1257;
              v1277 = v1257;
            }
          }
          v959 = v956 + v953;
          if ( v959 > v836 )
          {
            v1073 = 0;
            v1072 = 0LL;
          }
          else
          {
            v960 = (_DWORD *)(v959 - 3);
            v1313 = (unsigned __int64)v960;
            v1326 = v959 - 3;
            v1262 = (_DWORD *)(v959 - 3);
            v961 = *(unsigned int *)(a1 + 262172);
            v962 = *(unsigned int *)(a1 + 262168);
            v963 = v961;
            v964 = *(char **)(a1 + 262152);
            v965 = (_DWORD)v960 + *(_DWORD *)(a1 + 262168) - (_DWORD)v964;
            v1346 = *(_QWORD *)(a1 + 262184);
            v1202 = v953;
            v1301 = v964;
            v1293 = *(_DWORD *)(a1 + 262168);
            v1232 = v965;
            v1195 = *(_DWORD *)(a1 + 262172);
            if ( (int)v961 + 0x10000 <= v965 )
              v963 = v965 - 0xFFFF;
            v966 = *(char **)(a1 + 262160);
            v967 = (_DWORD)v960 - v1235;
            v1209 = 256;
            v1335 = (unsigned __int64)&v966[v962 - v961];
            v1181 = *v960;
            v968 = 0;
            v1189 = 0;
            v1350 = 0LL;
            v1223 = 0;
            v969 = *(_DWORD *)(a1 + 262176);
            v1268 = v963;
            v1286 = v966;
            if ( v969 < v965 )
            {
              v970 = &v964[v969 - v962];
              do
              {
                v971 = (unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v970) >> 17;
                v972 = v969 - *(_DWORD *)(a1 + 4 * v971);
                if ( v972 > 0xFFFF )
                  LOWORD(v972) = -1;
                ++v970;
                *(_WORD *)(a1 + 2LL * (unsigned __int16)v969 + 0x20000) = v972;
                *(_DWORD *)(a1 + 4 * v971) = v969++;
              }
              while ( v969 < v965 );
              v966 = v1286;
              v968 = 0;
            }
            *(_DWORD *)(a1 + 262176) = v965;
            v973 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v960) >> 17));
            v974 = v967;
            v1298 = v967;
            if ( v973 >= v963 )
            {
              v975 = v1235;
              v1313 = (unsigned __int64)v960;
              v1339 = v1235 + v953;
              v1357 = v953;
              while ( 1 )
              {
                if ( v1209 <= 0 )
                {
LABEL_1838:
                  v952 = v1277;
                  v737 = v1280;
                  v953 = HIDWORD(v1257);
                  break;
                }
                --v1209;
                if ( v973 < v1293 )
                {
                  v994 = &v966[v973 - (unsigned int)v961];
                  if ( v973 <= v1293 - 4 && *(_DWORD *)v994 == v1181 )
                  {
                    v995 = v994 + 4;
                    v996 = (_QWORD *)((char *)v960 + v1293 - v973);
                    if ( (unsigned __int64)v996 > v1251 )
                      v996 = (_QWORD *)v1251;
                    v997 = v960 + 1;
                    v998 = v997;
                    if ( v997 >= (_QWORD *)((char *)v996 - 7) )
                    {
                      while ( v998 < (_QWORD *)((char *)v996 - 7) )
                      {
                        if ( *v995 != *v998 )
                        {
                          __asm { tzcnt   rax, r8 }
                          v1001 = ((unsigned int)_RAX >> 3) - (_DWORD)v997 + (_DWORD)v998;
                          goto LABEL_1754;
                        }
                        ++v998;
LABEL_1742:
                        ++v995;
                      }
                      if ( v998 < (_QWORD *)((char *)v996 - 3) && *(_DWORD *)v995 == *(_DWORD *)v998 )
                      {
                        v998 = (_QWORD *)((char *)v998 + 4);
                        v995 = (_QWORD *)((char *)v995 + 4);
                      }
                      if ( v998 < (_QWORD *)((char *)v996 - 1) && *(_WORD *)v995 == *(_WORD *)v998 )
                      {
                        v998 = (_QWORD *)((char *)v998 + 2);
                        v995 = (_QWORD *)((char *)v995 + 2);
                      }
                      if ( v998 < v996 && *(_BYTE *)v995 == *(_BYTE *)v998 )
                        LODWORD(v998) = (_DWORD)v998 + 1;
                      v1001 = (_DWORD)v998 - (_DWORD)v997;
                    }
                    else
                    {
                      if ( *v995 == *v997 )
                      {
                        v998 = v997 + 1;
                        goto LABEL_1742;
                      }
                      __asm { tzcnt   rcx, r8 }
                      v1001 = (unsigned int)_RCX >> 3;
                    }
LABEL_1754:
                    v960 = v1262;
                    v1004 = v1001 + 4;
                    v1005 = (_QWORD *)((char *)v1262 + (int)(v1001 + 4));
                    if ( v1005 == v996 && (unsigned __int64)v996 < v1251 )
                    {
                      v1006 = v1301;
                      v1007 = (_QWORD *)((char *)v1262 + v1004);
                      if ( (unsigned __int64)v1005 >= v1251 - 7 )
                        goto LABEL_1759;
                      if ( *(_QWORD *)v1301 != *v1005 )
                      {
                        __asm { tzcnt   rcx, rdx }
                        v1011 = (unsigned int)_RCX >> 3;
                      }
                      else
                      {
                        v1007 = v1005 + 1;
                        v1006 = v1301 + 8;
LABEL_1759:
                        while ( (unsigned __int64)v1007 < v1251 - 7 )
                        {
                          if ( *v1006 != *v1007 )
                          {
                            __asm { tzcnt   rax, r8 }
                            v1011 = ((unsigned int)_RAX >> 3) - (_DWORD)v1005 + (_DWORD)v1007;
                            goto LABEL_1774;
                          }
                          ++v1007;
                          ++v1006;
                        }
                        if ( (unsigned __int64)v1007 < v1251 - 3 && *(_DWORD *)v1006 == *(_DWORD *)v1007 )
                        {
                          v1007 = (_QWORD *)((char *)v1007 + 4);
                          v1006 = (_QWORD *)((char *)v1006 + 4);
                        }
                        if ( (unsigned __int64)v1007 < v1251 - 1 && *(_WORD *)v1006 == *(_WORD *)v1007 )
                        {
                          v1007 = (_QWORD *)((char *)v1007 + 2);
                          v1006 = (_QWORD *)((char *)v1006 + 2);
                        }
                        if ( (unsigned __int64)v1007 < v1251 && *(_BYTE *)v1006 == *(_BYTE *)v1007 )
                          LODWORD(v1007) = (_DWORD)v1007 + 1;
                        v1011 = (_DWORD)v1007 - (_DWORD)v1005;
                      }
LABEL_1774:
                      v1004 += v1011;
                    }
                    v1013 = 0;
                    if ( v1298 )
                    {
                      v1014 = 0LL;
                      if ( (__int64)(v1235 - (_QWORD)v1262) <= v1286 - v994 )
                        v1015 = (_DWORD)v1286 - (_DWORD)v994;
                      else
                        v1015 = v1235 - (_DWORD)v1262;
                      v1016 = v1262 - 1;
                      v1017 = -v1015;
                      v1018 = (char *)(v994 - (char *)v1262);
                      while ( v1017 > 3 )
                      {
                        if ( *v1016 != *(_DWORD *)((char *)v1016 + (_QWORD)v1018) )
                        {
                          _BitScanReverse(&v1019, *v1016 ^ *(_DWORD *)((char *)v1016 + (_QWORD)v1018));
                          v1013 -= (31 - v1019) >> 3;
                          goto LABEL_1789;
                        }
                        v1013 -= 4;
                        v1017 -= 4;
                        v1014 -= 4LL;
                        --v1016;
                      }
                      if ( v1014 > v1015 )
                      {
                        v1020 = (_BYTE *)(v1014 + v1339 - 4);
                        do
                        {
                          if ( *v1020 != v1286[v973 - v1195 - v1235 - v1357 + 3 + (_QWORD)v1020] )
                            break;
                          --v1020;
                          --v1013;
                        }
                        while ( (__int64)&v1020[4 - v1235 - v1357] > v1015 );
                        v963 = v1268;
                      }
LABEL_1789:
                      v960 = v1262;
                    }
                    v1021 = v1004 - v1013;
                    if ( v1021 > v1202 )
                    {
                      v1202 = v1021;
                      v1313 = (unsigned __int64)v960 + v1013;
                      v1223 = v1232 - v973;
                    }
LABEL_1792:
                    LODWORD(v961) = v1195;
                  }
                }
                else
                {
                  v976 = &v1301[v973 - v1293];
                  if ( *(_WORD *)(v975 + v1202 - 1) != *(_WORD *)&v976[v1202 - v974 - 1] || *(_DWORD *)v976 != v1181 )
                    goto LABEL_1792;
                  v977 = 0;
                  if ( v974 )
                  {
                    v978 = 0LL;
                    if ( (__int64)(v975 - (_QWORD)v1262) <= -(__int64)(v973 - v1293) )
                      v979 = (_DWORD)v1301 - (_DWORD)v976;
                    else
                      v979 = v975 - (_DWORD)v1262;
                    v980 = v1262 - 1;
                    v981 = -v979;
                    v982 = (char *)(v976 - (char *)v1262);
                    while ( v981 > 3 )
                    {
                      if ( *v980 != *(_DWORD *)((char *)v980 + (_QWORD)v982) )
                      {
                        _BitScanReverse(&v983, *v980 ^ *(_DWORD *)((char *)v980 + (_QWORD)v982));
                        v977 -= (31 - v983) >> 3;
                        goto LABEL_1709;
                      }
                      v977 -= 4;
                      v981 -= 4;
                      v978 -= 4LL;
                      --v980;
                    }
                    if ( v978 > v979 )
                    {
                      v984 = (_BYTE *)(v978 + v1339 - 4);
                      do
                      {
                        if ( *v984 != v1301[v973 - v1293 - v1235 - v1357 + 3 + (_QWORD)v984] )
                          break;
                        --v984;
                        --v977;
                      }
                      while ( (__int64)&v984[4 - v1235 - v1357] > v979 );
                      v963 = v1268;
                    }
LABEL_1709:
                    v960 = v1262;
                  }
                  v985 = v960 + 1;
                  v986 = v976 + 4;
                  v987 = v960 + 1;
                  if ( (unsigned __int64)(v960 + 1) >= v1251 - 7 )
                  {
                    while ( (unsigned __int64)v987 < v1251 - 7 )
                    {
                      if ( *v986 != *v987 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v990 = ((unsigned int)_RAX >> 3) - (_DWORD)v985 + (_DWORD)v987;
                        goto LABEL_1729;
                      }
                      ++v987;
LABEL_1717:
                      ++v986;
                    }
                    if ( (unsigned __int64)v987 < v1251 - 3 && *(_DWORD *)v986 == *(_DWORD *)v987 )
                    {
                      v987 = (_QWORD *)((char *)v987 + 4);
                      v986 = (_QWORD *)((char *)v986 + 4);
                    }
                    if ( (unsigned __int64)v987 < v1251 - 1 && *(_WORD *)v986 == *(_WORD *)v987 )
                    {
                      v987 = (_QWORD *)((char *)v987 + 2);
                      v986 = (_QWORD *)((char *)v986 + 2);
                    }
                    if ( (unsigned __int64)v987 < v1251 && *(_BYTE *)v986 == *(_BYTE *)v987 )
                      LODWORD(v987) = (_DWORD)v987 + 1;
                    v990 = (_DWORD)v987 - (_DWORD)v985;
                  }
                  else
                  {
                    if ( *v986 == *v985 )
                    {
                      v987 = v960 + 3;
                      goto LABEL_1717;
                    }
                    __asm { tzcnt   rcx, r8 }
                    v990 = (unsigned int)_RCX >> 3;
                  }
LABEL_1729:
                  LODWORD(v961) = v1195;
                  v993 = v990 - v977 + 4;
                  if ( v993 > v1202 )
                  {
                    v1202 = v993;
                    v1223 = v1232 - v973;
                    v1313 = (unsigned __int64)v960 + v977;
                  }
                }
                if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v973 + 0x20000) != 1 )
                  goto LABEL_1835;
                v1022 = v973 - 1;
                if ( v1189 )
                {
                  v1189 = v968;
                  if ( v968 != 2 )
                    goto LABEL_1835;
                  v1023 = v1181;
                  v1024 = v1251;
                }
                else
                {
                  v1023 = v1181;
                  if ( (_BYTE)v1181 != HIBYTE(v1181) || (unsigned __int16)v1181 != HIWORD(v1181) )
                  {
                    v1189 = 1;
LABEL_1835:
                    v973 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v973 + 0x20000);
                    goto LABEL_1836;
                  }
                  v1189 = 2;
                  v1350 = (unsigned int)LZ4HC_countPattern(v960 + 1, v1251, v1181, 1LL) + 4LL;
                }
                if ( v1022 < v963 || v1293 - v973 < 3 )
                  goto LABEL_1835;
                if ( v1022 >= v1293 )
                {
                  v1025 = 0;
                  v1026 = &v1301[v1022 - v1293];
                }
                else
                {
                  v1025 = 1;
                  v1026 = &v1286[v1022 - (unsigned int)v961];
                }
                if ( *(_DWORD *)v1026 != v1023 )
                {
                  v963 = v1268;
                  goto LABEL_1835;
                }
                if ( v1025 )
                  v1024 = v1335;
                v1028 = (unsigned int)LZ4HC_countPattern(v1026 + 4, v1024, v1023, 1LL) + 4LL;
                if ( v1025 )
                {
                  if ( &v1026[v1028] == v1027 )
                  {
                    v1029 = LZ4HC_rotatePattern(v1028, v1181);
                    v1028 += (unsigned int)LZ4HC_countPattern(v1301, v1251, v1029, v1030);
                  }
                  v1031 = v1286;
                  v1032 = v1286;
                }
                else
                {
                  v1031 = v1286;
                  v1032 = v1301;
                }
                v1033 = LZ4HC_reverseCountPattern(v1026, v1032, v1181);
                v1035 = v1033;
                if ( !v1025 && &v1026[-v1033] == v1301 && v1195 < v1293 )
                {
                  v1036 = LZ4HC_rotatePattern(-v1033, v1034);
                  v1037 = LZ4HC_reverseCountPattern(v1335, v1031, v1036);
                  v1035 = v1037 + v1038;
                }
                v963 = v1268;
                v973 = v1268;
                if ( v1022 - v1035 > v1268 )
                  v973 = v1022 - v1035;
                v1039 = v1028 + v1022 - v973;
                if ( v1039 < v1350 || v1028 > v1350 )
                {
                  v974 = v1298;
                  if ( v1293 - v973 - 1 < 3 )
                  {
                    v973 = v1293;
                    goto LABEL_1837;
                  }
                  if ( v1298 )
                    goto LABEL_1837;
                  v960 = v1262;
                  v1041 = v1350;
                  if ( v1039 < v1350 )
                    v1041 = v1028 + v1022 - v973;
                  if ( v1202 < v1041 )
                  {
                    if ( (unsigned __int64)v1293 + (char *)v1262 - v973 - v1301 > 0xFFFF )
                      goto LABEL_1838;
                    v1202 = v1041;
                    v1223 = v1232 - v973;
                    v1313 = (unsigned __int64)v1262;
                  }
                  v1042 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v973 + 0x20000);
                  if ( v1042 > v973 )
                    goto LABEL_1838;
                  v973 -= v1042;
                }
                else
                {
                  v1040 = v1028 + v1022 - v1350;
                  v973 = v1293;
                  if ( v1293 - v1040 - 1 >= 3 )
                    v973 = v1040;
                }
LABEL_1836:
                v974 = v1298;
LABEL_1837:
                v960 = v1262;
                LODWORD(v961) = v1195;
                v966 = v1286;
                v968 = v1189;
                if ( v973 < v963 )
                  goto LABEL_1838;
                v975 = v1235;
              }
            }
            v1043 = v1209;
            if ( v1209 > 0 && v1232 - v963 < 0xFFFF )
            {
              v1044 = *(_QWORD *)(v1346 + 262152);
              v1045 = *(unsigned int *)(v1346 + 262168);
              v1340 = v1045 + *(_QWORD *)(v1346 + 0x40000) - v1044;
              v1046 = *(_DWORD *)(v1346 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v960) >> 17));
              v1245 = v1046;
              v1047 = v963 + v1046 - v1340;
              v1048 = v1232 - v1047;
              if ( v1232 - v1047 <= 0xFFFF )
              {
                v1049 = v1045 + *(_QWORD *)(v1346 + 0x40000) - v1044;
                v1050 = v953;
                do
                {
                  v1051 = v1043--;
                  v1210 = v1043;
                  if ( !v1051 )
                    break;
                  v1052 = (_DWORD *)(v1044 + v1046 - v1045);
                  if ( *v1052 == v1181 )
                  {
                    v1053 = v1052 + 1;
                    v1054 = (char *)v960 + v1049 - v1046;
                    if ( (unsigned __int64)v1054 > v1251 )
                      v1054 = (char *)v1251;
                    v1055 = (char *)(v960 + 1);
                    v1056 = v1055;
                    if ( v1055 >= v1054 - 7 )
                    {
                      while ( v1056 < v1054 - 7 )
                      {
                        if ( *(_QWORD *)v1056 != *v1053 )
                        {
                          __asm { tzcnt   rax, r9 }
                          v1059 = ((unsigned int)_RAX >> 3) - (_DWORD)v1055 + (_DWORD)v1056;
                          goto LABEL_1866;
                        }
                        v1056 += 8;
LABEL_1854:
                        ++v1053;
                      }
                      if ( v1056 < v1054 - 3 && *(_DWORD *)v1053 == *(_DWORD *)v1056 )
                      {
                        v1056 += 4;
                        v1053 = (_QWORD *)((char *)v1053 + 4);
                      }
                      if ( v1056 < v1054 - 1 && *(_WORD *)v1053 == *(_WORD *)v1056 )
                      {
                        v1056 += 2;
                        v1053 = (_QWORD *)((char *)v1053 + 2);
                      }
                      if ( v1056 < v1054 && *(_BYTE *)v1053 == *v1056 )
                        LODWORD(v1056) = (_DWORD)v1056 + 1;
                      v1059 = (_DWORD)v1056 - (_DWORD)v1055;
LABEL_1866:
                      v1044 = *(_QWORD *)(v1346 + 262152);
                    }
                    else
                    {
                      if ( *(_QWORD *)v1055 == *v1053 )
                      {
                        v1056 = v1055 + 8;
                        goto LABEL_1854;
                      }
                      __asm { tzcnt   rcx, rcx }
                      v1059 = (unsigned int)_RCX >> 3;
                    }
                    v1062 = v1059 + 4;
                    v1063 = 0;
                    if ( v1298 )
                    {
                      v1064 = 0LL;
                      if ( (__int64)(v1235 - (_QWORD)v1262) <= v1044 - (__int64)v1052 )
                        v1065 = v1044 - (_DWORD)v1052;
                      else
                        v1065 = v1235 - (_DWORD)v1262;
                      v1066 = v1052 - 1;
                      v1067 = -v1065;
                      v1068 = v1326 - (_QWORD)v1052;
                      while ( v1067 > 3 )
                      {
                        if ( *v1066 != *(_DWORD *)((char *)v1066 + v1068) )
                        {
                          _BitScanReverse(&v1069, *v1066 ^ *(_DWORD *)((char *)v1066 + v1068));
                          v1063 -= (31 - v1069) >> 3;
LABEL_1876:
                          v1046 = v1245;
                          goto LABEL_1877;
                        }
                        v1063 -= 4;
                        v1067 -= 4;
                        v1064 -= 4LL;
                        --v1066;
                      }
                      v1074 = v1065;
                      if ( v1064 <= v1065 )
                        goto LABEL_1876;
                      v1046 = v1245;
                      v1075 = (_BYTE *)(v1064
                                      + *(_QWORD *)(v1346 + 262152)
                                      + v1245
                                      - (unsigned __int64)*(unsigned int *)(v1346 + 262168)
                                      - 1);
                      do
                      {
                        if ( *(_BYTE *)(v1050 + v1235 + v1064 - 4) != *v1075 )
                          break;
                        --v1063;
                        --v1064;
                        --v1075;
                      }
                      while ( v1064 > v1074 );
                      v1049 = v1340;
                    }
LABEL_1877:
                    v960 = v1262;
                    v1070 = v1062 - v1063;
                    v1044 = *(_QWORD *)(v1346 + 262152);
                    v1045 = *(unsigned int *)(v1346 + 262168);
                    v1043 = v1210;
                    if ( v1070 > v1202 )
                    {
                      v1202 = v1070;
                      v1313 = (unsigned __int64)v1262 + v1063;
                      v1223 = v1048;
                    }
                  }
                  v1071 = *(unsigned __int16 *)(v1346 + 2LL * (unsigned __int16)v1046 + 0x20000);
                  v1047 -= v1071;
                  v1046 -= v1071;
                  v1048 = v1232 - v1047;
                  v1245 = v1046;
                }
                while ( v1232 - v1047 <= 0xFFFF );
                v952 = v1277;
                v737 = v1280;
                v953 = HIDWORD(v1257);
              }
            }
            v760 = v1213;
            v956 = v1235;
            v836 = v1317;
            v1072 = __PAIR64__(v1202, v1223);
            v1073 = v1202;
          }
          if ( v1073 <= v953 )
            break;
          v837 = v1369;
          v1076 = (_DWORD *)v1313;
          v1077 = (char *)v760 + v1369;
          if ( v1313 >= (unsigned __int64)(v1077 + 3) )
          {
            if ( v956 < (unsigned __int64)v1077 )
            {
              if ( (__int64)(v956 - (_QWORD)v760) >= 18 )
              {
                v837 = v956 - (_DWORD)v760;
                v1369 = v956 - (_DWORD)v760;
              }
              else
              {
                if ( v1369 > 18 )
                  v837 = 18;
                v1369 = v837;
                if ( (unsigned __int64)v760 + v837 > v956 + v953 - 4LL )
                {
                  v837 = v956 + v953 - (_DWORD)v760 - 4;
                  v1369 = v837;
                }
                v1078 = v837 + (_DWORD)v760 - v956;
                if ( v1078 > 0 )
                {
                  v956 += v1078;
                  v1235 = v956;
                  HIDWORD(v1257) = v953 - v1078;
                  v952 = v1257;
                }
              }
            }
            v1079 = v1213;
            v1080 = v737;
            v1081 = (char *)v1213 - v1248;
            v1082 = v737;
            v1083 = v737;
            v1084 = v737 + 1;
            if ( a7 && &v1084[v1081 / 0xFF + 8 + v1081] > v1254 )
              goto LABEL_2023;
            if ( v1081 < 0xF )
            {
              *v1082 = 16 * v1081;
            }
            else
            {
              v1085 = v1081 - 15;
              *v1082 = -16;
              if ( v1081 - 15 >= 0xFF )
              {
                v1086 = v1085 * (unsigned __int128)0x8080808080808081uLL;
                BYTE8(v1086) = -1;
                memset_0(v1084, SDWORD2(v1086), v1085 / 0xFF);
                v1084 += v1085 / 0xFF;
                v1082 = v1080;
                v1079 = v1213;
                LOBYTE(v1085) = v1085 / 0xFF + v1085;
                v1083 = v1080;
              }
              *v1084++ = v1085;
              v956 = v1235;
            }
            v1087 = v1084;
            do
            {
              *v1087 = *(_QWORD *)((char *)v1087 + v1248 - v1084);
              ++v1087;
            }
            while ( v1087 < (_QWORD *)&v1084[v1081] );
            v1088 = &v1084[v1081];
            v837 = v1369;
            *v1088 = v1305;
            v737 = v1088 + 1;
            v1089 = v1369 - 4LL;
            v1280 = v737;
            if ( a7 && &v737[v1089 / 0xFF + 6] > v1254 )
            {
              v1109 = v1248;
              v744 = v1254;
              goto LABEL_2012;
            }
            v1090 = *v1083;
            if ( v1089 < 0xF )
            {
              *v1082 = v1089 + v1090;
            }
            else
            {
              v1091 = v1369 - 19LL;
              *v1082 = v1090 + 15;
              if ( v1091 >= 0x1FE )
              {
                v1092 = v1091 / 0x1FE;
                v1091 %= 0x1FEuLL;
                do
                {
                  *v737 = -1;
                  v1093 = v737 + 1;
                  *v1093 = -1;
                  v737 = v1093 + 1;
                  --v1092;
                }
                while ( v1092 );
              }
              if ( v1091 >= 0xFF )
              {
                LOBYTE(v1091) = v1091 + 1;
                *v737++ = -1;
              }
              *v737++ = v1091;
              v1280 = v737;
            }
            v836 = v1317;
            v760 = (_DWORD *)v956;
            v1305 = v952;
            v952 = v1072;
            v837 = HIDWORD(v1305);
            v1257 = v1072;
            v1248 = (char *)v1079 + v1369;
            v953 = HIDWORD(v1072);
            v1213 = (_DWORD *)v956;
            v956 = v1313;
            v1369 = HIDWORD(v1305);
            v1235 = v1313;
            v1277 = v1072;
            goto LABEL_1672;
          }
          if ( v1313 < (unsigned __int64)v1077 )
          {
            v1257 = v1072;
            v956 = v1313;
            v953 = HIDWORD(v1072);
            v952 = v1072;
            v1235 = v1313;
            v1277 = v1072;
            goto LABEL_1672;
          }
          if ( v956 < (unsigned __int64)v1077 )
          {
            v1094 = v1369 + (_DWORD)v760 - v956;
            v1235 = v1094 + v956;
            if ( v953 - v1094 >= 4 )
            {
              HIDWORD(v1257) = v953 - v1094;
              v952 = v1257;
            }
            else
            {
              v1235 = v1313;
              v952 = v1072;
            }
          }
          v1095 = v1213;
          v1080 = v737;
          v1096 = (char *)v1213 - v1248;
          v1097 = v737;
          v1098 = v737;
          v1099 = v737 + 1;
          if ( a7 && &v1099[v1096 / 0xFF + 8 + v1096] > v1254 )
          {
LABEL_2023:
            v1109 = v1248;
            goto LABEL_2011;
          }
          if ( v1096 < 0xF )
          {
            *v1097 = 16 * v1096;
          }
          else
          {
            v1100 = v1096 - 15;
            *v1097 = -16;
            if ( v1096 - 15 >= 0xFF )
            {
              v1101 = v1100 * (unsigned __int128)0x8080808080808081uLL;
              BYTE8(v1101) = -1;
              memset_0(v1099, SDWORD2(v1101), v1100 / 0xFF);
              v1099 += v1100 / 0xFF;
              v1097 = v1080;
              v1095 = v1213;
              LOBYTE(v1100) = v1100 / 0xFF + v1100;
              v1098 = v1080;
            }
            *v1099++ = v1100;
            v1076 = (_DWORD *)v1313;
          }
          v1102 = v1099;
          do
          {
            *v1102 = *(_QWORD *)((char *)v1102 + v1248 - v1099);
            ++v1102;
          }
          while ( v1102 < (_QWORD *)&v1099[v1096] );
          v1103 = &v1099[v1096];
          v837 = v1369;
          *v1103 = v1305;
          v737 = v1103 + 1;
          v1104 = v1369 - 4LL;
          v1280 = v737;
          if ( a7 && &v737[v1104 / 0xFF + 6] > v1254 )
          {
            v1109 = v1248;
            v744 = v1254;
LABEL_2012:
            if ( a7 == 2 )
            {
              v1151 = v1213;
              v737 = v1080;
              v1152 = (char *)v1213 - v1109;
              v1153 = ((char *)v1213 - v1109 + 240) / 0xFFuLL + (char *)v1213 - v1109 + 1;
              if ( &v1080[v1153] > v744 - 3 )
                goto LABEL_2038;
              if ( v837 > (unsigned __int64)(255 * (&v744[-v1153 - 3] - v1080) + 18) )
                v837 = 255 * ((_DWORD)v744 - 3 - v1153 - (_DWORD)v1080) + 18;
              v1370 = v837;
              if ( (__int64)&v744[v837 - v1153 - (_QWORD)v1080 + 2] < 12 )
              {
LABEL_2038:
                v740 = v1248;
              }
              else
              {
                v1154 = v1080 + 1;
                if ( v1152 < 0xF )
                {
                  *v1080 = 16 * v1152;
                }
                else
                {
                  v1155 = v1152 - 15;
                  *v1080 = -16;
                  if ( v1152 - 15 >= 0xFF )
                  {
                    v1156 = v1155 * (unsigned __int128)0x8080808080808081uLL;
                    BYTE8(v1156) = -1;
                    memset_0(v1080 + 1, SDWORD2(v1156), v1155 / 0xFF);
                    v837 = v1370;
                    v1154 += v1155 / 0xFF;
                    v1151 = v1213;
                    v1109 = v1248;
                    LOBYTE(v1155) = v1155 / 0xFF + v1155;
                  }
                  *v1154++ = v1155;
                  v744 = v1254;
                }
                v1157 = v1154;
                v1158 = v1109 - v1154;
                do
                {
                  *v1157 = *(_QWORD *)((char *)v1157 + v1158);
                  ++v1157;
                }
                while ( v1157 < (_QWORD *)&v1154[v1152] );
                v1159 = &v1154[v1152];
                v1160 = v837 - 4LL;
                *v1159 = v1305;
                v737 = v1159 + 1;
                v1161 = *v1080;
                if ( v1160 < 0xF )
                {
                  *v1080 = v1161 + v1160;
                }
                else
                {
                  v1162 = v837 - 19LL;
                  *v1080 = v1161 + 15;
                  if ( v1162 >= 0x1FE )
                  {
                    v1163 = v1162 / 0x1FE;
                    v1162 %= 0x1FEuLL;
                    do
                    {
                      *v737 = -1;
                      v1164 = v737 + 1;
                      *v1164 = -1;
                      v737 = v1164 + 1;
                      --v1163;
                    }
                    while ( v1163 );
                  }
                  if ( v1162 >= 0xFF )
                  {
                    LOBYTE(v1162) = v1162 + 1;
                    *v737++ = -1;
                  }
                  *v737++ = v1162;
                }
                v740 = (char *)v1151 + v837;
                v1248 = v740;
              }
LABEL_2039:
              v742 = v1309;
              goto LABEL_2040;
            }
LABEL_2037:
            v1165 = 0;
LABEL_2052:
            *(_BYTE *)(a1 + 262183) = 1;
            return (unsigned int)v1165;
          }
          v1105 = *v1098;
          if ( v1104 < 0xF )
          {
            *v1097 = v1105 + v1104;
          }
          else
          {
            v1106 = v1369 - 19LL;
            *v1097 = v1105 + 15;
            if ( v1106 >= 0x1FE )
            {
              v1107 = v1106 / 0x1FE;
              v1106 %= 0x1FEuLL;
              do
              {
                *v737 = -1;
                v1108 = v737 + 1;
                *v1108 = -1;
                v737 = v1108 + 1;
                --v1107;
              }
              while ( v1107 );
            }
            if ( v1106 >= 0xFF )
            {
              LOBYTE(v1106) = v1106 + 1;
              *v737++ = -1;
            }
            *v737++ = v1106;
            v1280 = v737;
          }
          v760 = v1076;
          v1213 = v1076;
          v1248 = (char *)v1095 + v1369;
          v835 = (_DWORD *)v1235;
          v1325 = (_DWORD *)v1235;
          v1305 = v1072;
          v834 = v952;
          v1322 = v952;
          v1302 = HIDWORD(v952);
        }
        if ( v956 < (unsigned __int64)v760 + v1369 )
          v1369 = v956 - (_DWORD)v760;
        v1109 = v1248;
        v1080 = v737;
        v1110 = v737;
        v1111 = v737;
        v1112 = v737 + 1;
        v1113 = (char *)v760 - v1248;
        if ( a7 && &v1112[v1113 + 8 + v1113 / 0xFF] > v1254 )
        {
          v837 = v1369;
LABEL_2011:
          v744 = v1254;
          goto LABEL_2012;
        }
        if ( v1113 < 0xF )
        {
          *v1110 = 16 * v1113;
        }
        else
        {
          v1114 = v1113 - 15;
          *v1110 = -16;
          if ( v1113 - 15 >= 0xFF )
          {
            v1115 = v1114 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1115) = -1;
            memset_0(v1112, SDWORD2(v1115), v1114 / 0xFF);
            v760 = v1213;
            v1112 += v1114 / 0xFF;
            v1109 = v1248;
            v1111 = v1110;
            LOBYTE(v1114) = v1114 / 0xFF + v1114;
          }
          *v1112++ = v1114;
          v956 = v1235;
        }
        v1116 = v1112;
        do
        {
          *v1116 = *(_QWORD *)((char *)v1116 + v1109 - v1112);
          ++v1116;
        }
        while ( v1116 < (_QWORD *)&v1112[v1113] );
        v1117 = &v1112[v1113];
        *v1117 = v1305;
        v1118 = v1117 + 1;
        v1119 = v1369 - 4LL;
        if ( a7 )
        {
          v744 = v1254;
          if ( &v1118[v1119 / 0xFF + 6] > v1254 )
          {
            v837 = v1369;
            goto LABEL_2012;
          }
        }
        v1120 = *v1111;
        if ( v1119 < 0xF )
        {
          *v1110 = v1119 + v1120;
        }
        else
        {
          v1121 = v1369 - 19LL;
          *v1110 = v1120 + 15;
          if ( v1121 >= 0x1FE )
          {
            v1122 = v1121 / 0x1FE;
            v1121 %= 0x1FEuLL;
            do
            {
              *v1118 = -1;
              v1123 = v1118 + 1;
              *v1123 = -1;
              v1118 = v1123 + 1;
              --v1122;
            }
            while ( v1122 );
          }
          if ( v1121 >= 0xFF )
          {
            LOBYTE(v1121) = v1121 + 1;
            *v1118++ = -1;
          }
          *v1118++ = v1121;
        }
        v1124 = (char *)v760 + v1369;
        v1213 = (_DWORD *)v956;
        v1080 = v1118;
        v1125 = v1118;
        v1126 = v1118;
        v1127 = v956 - (_QWORD)v1124;
        v1128 = v1118 + 1;
        v1109 = v1124;
        v1248 = v1124;
        if ( a7 && &v1128[v1127 + 8 + v1127 / 0xFF] > v1254 )
        {
          v744 = v1254;
          v1248 = v1124;
LABEL_2008:
          LOWORD(v1305) = v952;
          v837 = HIDWORD(v952);
          goto LABEL_2012;
        }
        if ( v1127 < 0xF )
        {
          *v1125 = 16 * v1127;
        }
        else
        {
          v1129 = v1127 - 15;
          *v1125 = -16;
          if ( v1127 - 15 >= 0xFF )
          {
            v1130 = v1129 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v1130) = -1;
            memset_0(v1128, SDWORD2(v1130), v1129 / 0xFF);
            v1128 += v1129 / 0xFF;
            v1126 = v1125;
            v1109 = v1248;
            LOBYTE(v1129) = v1129 / 0xFF + v1129;
          }
          *v1128++ = v1129;
          v956 = v1235;
        }
        v1131 = v1128;
        do
        {
          *v1131 = *(_QWORD *)((char *)v1131 + v1109 - v1128);
          ++v1131;
        }
        while ( v1131 < (_QWORD *)&v1128[v1127] );
        v1132 = &v1128[v1127];
        v744 = v1254;
        *v1132 = v1257;
        v737 = v1132 + 1;
        v1133 = SHIDWORD(v1257) - 4LL;
        v1280 = v737;
        if ( a7 && &v737[v1133 / 0xFF + 6] > v1254 )
          goto LABEL_2008;
        v1134 = *v1126;
        if ( v1133 < 0xF )
        {
          *v1125 = v1133 + v1134;
        }
        else
        {
          v1135 = SHIDWORD(v1257) - 19LL;
          *v1125 = v1134 + 15;
          if ( v1135 >= 0x1FE )
          {
            v1136 = v1135 / 0x1FE;
            v1135 %= 0x1FEuLL;
            do
            {
              *v737 = -1;
              v1137 = v737 + 1;
              *v1137 = -1;
              v737 = v1137 + 1;
              --v1136;
            }
            while ( v1136 );
          }
          if ( v1135 >= 0xFF )
          {
            LOBYTE(v1135) = v1135 + 1;
            *v737++ = -1;
          }
          *v737++ = v1135;
          v1280 = v737;
        }
        v739 = (unsigned int *)(v956 + SHIDWORD(v1257));
LABEL_2006:
        v740 = (char *)v739;
        v1248 = (char *)v739;
LABEL_1458:
        v743 = v1317;
        v11 = a1;
        v1213 = v739;
      }
    }
LABEL_2040:
    v1166 = v742 - v740;
    v1167 = v737;
    v1310 = v1166;
    if ( a7 == 2 )
    {
      v744 += 5;
    }
    else if ( !a7 )
    {
      goto LABEL_2046;
    }
    if ( &v737[(v1166 + 240) / 0xFF + 1 + v1166] > v744 )
    {
      if ( a7 == 1 )
        goto LABEL_2037;
      v1166 = v744 - v737 - 1 - ((unsigned __int64)(v744 - v737 - 1 + 241) >> 8);
      v1310 = v1166;
    }
LABEL_2046:
    v1168 = v1166 + (_DWORD)v740;
    if ( v1166 < 0xF )
    {
      *v737 = 16 * v1166;
      v1172 = (_DWORD)v737 + 1;
    }
    else
    {
      *v737 = -16;
      v1169 = v1166 - 15;
      v1170 = v737 + 1;
      if ( v1166 - 15 >= 0xFF )
      {
        v1171 = v1169 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v1171) = -1;
        memset_0(v1170, SDWORD2(v1171), v1169 / 0xFF);
        v740 = v1248;
        v1170 += v1169 / 0xFF;
        v1166 = v1310;
        LOBYTE(v1169) = v1169 / 0xFF + v1169;
      }
      v1167 = v1170;
      *v1170 = v1169;
      v1172 = (_DWORD)v1170 + 1;
    }
    memmove(v1167 + 1, v740, v1166);
    v1165 = v1172 + v1166 - v1360;
    *a4 = v1168 - v1359;
    if ( v1165 <= 0 )
      goto LABEL_2052;
    return (unsigned int)v1165;
  }
  v13 = 0;
  *(_QWORD *)(a1 + 262184) = 0LL;
  if ( a7 == 2 && a5 < 1 )
    return v13;
  v14 = *a4;
  if ( (unsigned int)v14 > 0x7E000000 )
    return v13;
  *(_QWORD *)(a1 + 0x40000) = v10 + v14;
  v15 = a2;
  v16 = *a4;
  v17 = a2;
  v18 = a3;
  v19 = &a2[v16];
  v1233 = (unsigned __int64)&a2[v16 - 5];
  v1303 = a3;
  v1211 = a2;
  v1246 = a2;
  v20 = (unsigned __int64)&a2[v16 - 12];
  v21 = (unsigned __int64)&a3[a5 - 5];
  if ( a7 != 2 )
    v21 = (unsigned __int64)&a3[a5];
  v1281 = v19;
  v1255 = v21;
  v1294 = v20;
  v1249 = 0LL;
  v1311 = 0LL;
  *a4 = 0;
  if ( (int)v16 < 13 )
    goto LABEL_634;
  while ( 1 )
  {
    if ( (unsigned __int64)v15 > v20 )
      goto LABEL_633;
    v22 = *(_QWORD **)(v11 + 262152);
    v23 = 3;
    v24 = *(unsigned int *)(v11 + 262168);
    v25 = v24 + (_DWORD)v15 - (_DWORD)v22;
    v1173 = 3;
    v1299 = v22;
    v1263 = v25;
    v26 = *(unsigned int *)(a1 + 262172);
    v1224 = v26;
    v27 = *(_DWORD *)(a1 + 262172);
    if ( (int)v26 + 0x10000 <= v25 )
      v27 = v25 - 0xFFFF;
    v1236 = 256;
    v1269 = *(_QWORD **)(a1 + 262160);
    v28 = 0;
    v29 = *(_DWORD *)v1211;
    v30 = 0;
    v1182 = 0;
    v1318 = 0LL;
    v1214 = 0;
    v1327 = (unsigned __int64)v1269 + v24 - v26;
    v1362 = v27;
    v31 = *(_DWORD *)(a1 + 262176);
    if ( v31 < v25 )
    {
      v32 = (_DWORD *)((char *)v22 + v31 - v24);
      do
      {
        v33 = (unsigned __int64)(unsigned int)(-1640531535 * *v32) >> 17;
        v34 = v31 - *(_DWORD *)(a1 + 4 * v33);
        if ( v34 > 0xFFFF )
          LOWORD(v34) = -1;
        v32 = (_DWORD *)((char *)v32 + 1);
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v31 + 0x20000) = v34;
        *(_DWORD *)(a1 + 4 * v33) = v31++;
      }
      while ( v31 < v25 );
      v23 = 3;
      v28 = 0;
      LODWORD(v26) = v1224;
      v20 = v1294;
    }
    v35 = v1211;
    *(_DWORD *)(a1 + 262176) = v25;
    v36 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v1211) >> 17));
    if ( v36 >= v27 )
    {
      while ( 1 )
      {
        v37 = v28;
        if ( v1236 <= 0 )
        {
LABEL_97:
          v18 = v1303;
          v30 = v1214;
          v20 = v1294;
          break;
        }
        --v1236;
        if ( v36 < (unsigned int)v24 )
        {
          v48 = (_DWORD *)((char *)v1269 + v36 - (unsigned int)v26);
          if ( v36 <= (int)v24 - 4 && *v48 == v29 )
          {
            v49 = v35 + 4;
            v50 = v35 + 4;
            v51 = &v35[(unsigned int)v24 - v36];
            if ( (unsigned __int64)v51 > v1233 )
              v51 = (char *)v1233;
            v52 = v48 + 1;
            if ( v49 >= v51 - 7 )
            {
              while ( v50 < v51 - 7 )
              {
                if ( *v52 != *(_QWORD *)v50 )
                {
                  __asm { tzcnt   rax, r9 }
                  v55 = ((unsigned int)_RAX >> 3) - (_DWORD)v49 + (_DWORD)v50;
                  goto LABEL_66;
                }
                v50 += 8;
LABEL_54:
                ++v52;
              }
              if ( v50 < v51 - 3 && *(_DWORD *)v52 == *(_DWORD *)v50 )
              {
                v50 += 4;
                v52 = (_QWORD *)((char *)v52 + 4);
              }
              if ( v50 < v51 - 1 && *(_WORD *)v52 == *(_WORD *)v50 )
              {
                v50 += 2;
                v52 = (_QWORD *)((char *)v52 + 2);
              }
              if ( v50 < v51 && *(_BYTE *)v52 == *v50 )
                LODWORD(v50) = (_DWORD)v50 + 1;
              v55 = (_DWORD)v50 - (_DWORD)v49;
            }
            else
            {
              if ( *v52 == *(_QWORD *)v49 )
              {
                v50 = v49 + 8;
                goto LABEL_54;
              }
              __asm { tzcnt   rcx, r9 }
              v55 = (unsigned int)_RCX >> 3;
            }
LABEL_66:
            v58 = v55 + 4;
            v59 = &v1211[v55 + 4];
            if ( v59 == v51 && (unsigned __int64)v51 < v1233 )
            {
              v60 = v1299;
              v61 = &v1211[v58];
              if ( (unsigned __int64)v59 >= v1233 - 7 )
                goto LABEL_71;
              if ( *v1299 != *(_QWORD *)v59 )
              {
                __asm { tzcnt   rcx, rdx }
                v65 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v61 = v59 + 8;
                v60 = v1299 + 1;
LABEL_71:
                while ( (unsigned __int64)v61 < v1233 - 7 )
                {
                  if ( *v60 != *(_QWORD *)v61 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v65 = ((unsigned int)_RAX >> 3) - (_DWORD)v59 + (_DWORD)v61;
                    goto LABEL_86;
                  }
                  v61 += 8;
                  ++v60;
                }
                if ( (unsigned __int64)v61 < v1233 - 3 && *(_DWORD *)v60 == *(_DWORD *)v61 )
                {
                  v61 += 4;
                  v60 = (_QWORD *)((char *)v60 + 4);
                }
                if ( (unsigned __int64)v61 < v1233 - 1 && *(_WORD *)v60 == *(_WORD *)v61 )
                {
                  v61 += 2;
                  v60 = (_QWORD *)((char *)v60 + 2);
                }
                if ( (unsigned __int64)v61 < v1233 && *(_BYTE *)v60 == *v61 )
                  LODWORD(v61) = (_DWORD)v61 + 1;
                v65 = (_DWORD)v61 - (_DWORD)v59;
              }
LABEL_86:
              v58 += v65;
            }
            v35 = v1211;
            if ( v58 > v23 )
            {
              v1173 = v58;
              v1214 = v25 - v36;
            }
          }
        }
        else
        {
          v38 = (_DWORD *)((char *)v1299 + v36 - (unsigned int)v24);
          if ( *(_WORD *)&v35[v23 - 1] == *(_WORD *)((char *)v38 + v23 - 1) && *v38 == v29 )
          {
            v39 = v35 + 4;
            v40 = v38 + 1;
            v41 = v39;
            if ( (unsigned __int64)v39 >= v1233 - 7 )
            {
              while ( (unsigned __int64)v41 < v1233 - 7 )
              {
                if ( *v41 != *v40 )
                {
                  __asm { tzcnt   rax, r8 }
                  v44 = ((unsigned int)_RAX >> 3) - (_DWORD)v39 + (_DWORD)v41;
                  goto LABEL_41;
                }
                ++v41;
LABEL_29:
                ++v40;
              }
              if ( (unsigned __int64)v41 < v1233 - 3 && *(_DWORD *)v40 == *(_DWORD *)v41 )
              {
                v41 = (_QWORD *)((char *)v41 + 4);
                v40 = (_QWORD *)((char *)v40 + 4);
              }
              if ( (unsigned __int64)v41 < v1233 - 1 && *(_WORD *)v40 == *(_WORD *)v41 )
              {
                v41 = (_QWORD *)((char *)v41 + 2);
                v40 = (_QWORD *)((char *)v40 + 2);
              }
              if ( (unsigned __int64)v41 < v1233 && *(_BYTE *)v40 == *(_BYTE *)v41 )
                LODWORD(v41) = (_DWORD)v41 + 1;
              v44 = (_DWORD)v41 - (_DWORD)v39;
            }
            else
            {
              if ( *v39 == *v40 )
              {
                v41 = v39 + 1;
                goto LABEL_29;
              }
              __asm { tzcnt   rcx, rcx }
              v44 = (unsigned int)_RCX >> 3;
            }
LABEL_41:
            v35 = v1211;
            v47 = v44 + 4;
            if ( v47 > v23 )
            {
              v1173 = v47;
              v1214 = v25 - v36;
            }
          }
        }
        if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v36 + 0x20000) != 1 )
          goto LABEL_94;
        v67 = v36 - 1;
        if ( v1182 )
        {
          v1182 = v37;
          if ( v37 != 2 )
            goto LABEL_94;
          v68 = v1233;
        }
        else
        {
          if ( (_BYTE)v29 != HIBYTE(v29) || (unsigned __int16)v29 != HIWORD(v29) )
          {
            v1182 = 1;
LABEL_94:
            v69 = v1362;
LABEL_95:
            v36 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v36 + 0x20000);
            goto LABEL_96;
          }
          v68 = v1233;
          v1182 = 2;
          v1318 = (unsigned int)LZ4HC_countPattern(v35 + 4, v1233, v29, v35) + 4LL;
        }
        v69 = v1362;
        if ( v67 < v1362 || (unsigned int)v24 - v67 - 1 < 3 )
          goto LABEL_95;
        if ( v67 >= (unsigned int)v24 )
        {
          v72 = 0;
          v73 = (_DWORD *)((char *)v1299 + v67 - (unsigned int)v24);
        }
        else
        {
          v72 = 1;
          v73 = (_DWORD *)((char *)v1269 + v67 - v1224);
        }
        if ( *v73 != v29 )
          goto LABEL_95;
        v74 = v68;
        if ( v72 )
          v74 = v1327;
        v75 = (unsigned int)LZ4HC_countPattern(v73 + 1, v74, v29, v35) + 4LL;
        if ( v72 )
        {
          if ( (_DWORD *)((char *)v73 + v75) == v77 )
          {
            v78 = v29;
            v79 = 8 * (v75 & 3);
            if ( v79 )
              v78 = (unsigned int)__ROL4__(v29, v79);
            v75 += (unsigned int)LZ4HC_countPattern(v1299, v1233, v78, v76);
          }
          v80 = v1269;
        }
        else
        {
          v80 = v1299;
        }
        v81 = LZ4HC_reverseCountPattern(v73, v80, v29);
        v83 = v81;
        if ( !v72 && (_QWORD *)((char *)v73 - v81) == v1299 && v1224 < (unsigned int)v24 )
        {
          v84 = 8LL * (-v81 & 3);
          if ( v84 )
            v82 = (unsigned int)__ROL4__(v82, v84);
          v85 = LZ4HC_reverseCountPattern(v1327, v1269, v82);
          v83 = v85 + v86;
        }
        v69 = v1362;
        v87 = v67 - v83;
        v88 = v1362;
        if ( v87 > v1362 )
          v88 = v87;
        v89 = v75 + v67 - v88;
        if ( v89 < v1318 || v75 > v1318 )
        {
          if ( (unsigned int)v24 - v88 - 1 < 3 )
          {
            v36 = v24;
          }
          else
          {
            v23 = v1173;
            v35 = v1211;
            v91 = v1318;
            if ( v89 < v1318 )
              v91 = v89;
            if ( v1173 < v91 )
            {
              if ( (unsigned __int64)(v24 + &v1211[-v88] - (char *)v1299) > 0xFFFF )
                goto LABEL_97;
              v23 = v91;
              v1173 = v91;
              v1214 = v1263 - v88;
            }
            v92 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v88 + 0x20000);
            if ( v92 > v88 )
              goto LABEL_97;
            v36 = v88 - v92;
          }
        }
        else
        {
          v90 = v67 + v75 - v1318;
          v36 = v24;
          if ( (unsigned int)v24 - v90 - 1 >= 3 )
            v36 = v90;
        }
LABEL_96:
        v23 = v1173;
        v70 = v36 < v69;
        v28 = v1182;
        v25 = v1263;
        LODWORD(v26) = v1224;
        v35 = v1211;
        if ( v70 )
          goto LABEL_97;
      }
    }
    v71 = __PAIR64__(v23, v30);
    v1270 = __PAIR64__(v23, v30);
    v1278 = __PAIR64__(v23, v30);
    if ( v23 < 4 )
    {
      v17 = v1246;
      v15 = v35 + 1;
      goto LABEL_100;
    }
    v93 = v35;
    v1354 = v23;
    v1347 = (unsigned __int64)v35;
LABEL_141:
    v94 = 0;
LABEL_142:
    v95 = HIDWORD(v1278);
    v1363 = HIDWORD(v1278);
    v96 = (unsigned __int64)&v35[SHIDWORD(v1278)];
    if ( v96 > v20 )
    {
      v1252 = 0LL;
      v171 = 0;
      v170 = 0LL;
    }
    else
    {
      v1249 = v96 - 2;
      v97 = (unsigned int *)(v96 - 2);
      v98 = HIDWORD(v1278);
      v1183 = HIDWORD(v1278);
      v99 = *(unsigned int *)(a1 + 262168);
      v100 = *(char **)(a1 + 262152);
      v101 = *(unsigned int *)(a1 + 262172);
      v102 = v96 - 2 + *(_DWORD *)(a1 + 262168) - (_DWORD)v100;
      v1323 = v100;
      v1196 = *(_DWORD *)(a1 + 262168);
      v1215 = v102;
      v1237 = *(_DWORD *)(a1 + 262172);
      if ( (int)v101 + 0x10000 <= v102 )
        v1203 = v102 - 0xFFFF;
      else
        v1203 = *(_DWORD *)(a1 + 262172);
      v103 = *(char **)(a1 + 262160);
      v104 = *v97;
      v1314 = v103;
      v1287 = 256;
      v105 = (_DWORD)v97 - (_DWORD)v1211;
      v1328 = &v103[v99 - v101];
      v1190 = *v97;
      v106 = *(_DWORD *)(a1 + 262176);
      v1174 = 0;
      v1258 = 0LL;
      v1225 = 0;
      if ( v106 >= v102 )
      {
        v108 = a1;
      }
      else
      {
        v107 = &v100[v106 - v99];
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
        while ( v106 < v102 );
        v71 = v1270;
        LODWORD(v99) = v1196;
        v98 = HIDWORD(v1278);
        v103 = v1314;
      }
      *(_DWORD *)(v108 + 262176) = v102;
      v111 = v105;
      v1319 = v105;
      v112 = *(_DWORD *)(v108 + 4 * ((unsigned __int64)(-1640531535 * *v97) >> 17));
      if ( v112 >= v1203 )
      {
        v113 = v96 - 2;
        while ( 1 )
        {
          v114 = v1174;
          v115 = v1174;
          if ( v1287 <= 0 )
          {
LABEL_266:
            v71 = v1270;
            v18 = v1303;
            v94 = v1225;
            break;
          }
          --v1287;
          if ( v112 < (unsigned int)v99 )
          {
            v138 = v112 - v1237;
            v139 = (unsigned int)v138;
            v140 = &v103[v138];
            if ( v112 > (int)v99 - 4 || *(_DWORD *)v140 != v104 )
              goto LABEL_194;
            v141 = (_QWORD *)(v113 + 4);
            v142 = v140 + 4;
            v143 = (_QWORD *)(v113 + (unsigned int)v99 - v112);
            v144 = (_QWORD *)(v113 + 4);
            if ( (unsigned __int64)v143 > v1233 )
              v143 = (_QWORD *)v1233;
            if ( v141 >= (_QWORD *)((char *)v143 - 7) )
            {
              while ( v144 < (_QWORD *)((char *)v143 - 7) )
              {
                if ( *v142 != *v144 )
                {
                  __asm { tzcnt   rax, r8 }
                  v147 = ((unsigned int)_RAX >> 3) - (_DWORD)v141 + (_DWORD)v144;
                  goto LABEL_222;
                }
                ++v144;
LABEL_210:
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
                goto LABEL_210;
              }
              __asm { tzcnt   rcx, r8 }
              v147 = (unsigned int)_RCX >> 3;
            }
LABEL_222:
            v150 = v147 + 4;
            v151 = (_QWORD *)(v113 + (int)(v147 + 4));
            if ( v151 == v143 && (unsigned __int64)v143 < v1233 )
            {
              v152 = v1323;
              v153 = (_QWORD *)(v113 + v150);
              if ( (unsigned __int64)v151 >= v1233 - 7 )
                goto LABEL_227;
              if ( *(_QWORD *)v1323 != *v151 )
              {
                __asm { tzcnt   rcx, rdx }
                v157 = (unsigned int)_RCX >> 3;
              }
              else
              {
                v153 = v151 + 1;
                v152 = v1323 + 8;
LABEL_227:
                while ( (unsigned __int64)v153 < v1233 - 7 )
                {
                  if ( *v152 != *v153 )
                  {
                    __asm { tzcnt   rax, r8 }
                    v157 = ((unsigned int)_RAX >> 3) - (_DWORD)v151 + (_DWORD)v153;
                    goto LABEL_242;
                  }
                  ++v153;
                  ++v152;
                }
                if ( (unsigned __int64)v153 < v1233 - 3 && *(_DWORD *)v152 == *(_DWORD *)v153 )
                {
                  v153 = (_QWORD *)((char *)v153 + 4);
                  v152 = (_QWORD *)((char *)v152 + 4);
                }
                if ( (unsigned __int64)v153 < v1233 - 1 && *(_WORD *)v152 == *(_WORD *)v153 )
                {
                  v153 = (_QWORD *)((char *)v153 + 2);
                  v152 = (_QWORD *)((char *)v152 + 2);
                }
                if ( (unsigned __int64)v153 < v1233 && *(_BYTE *)v152 == *(_BYTE *)v153 )
                  LODWORD(v153) = (_DWORD)v153 + 1;
                v157 = (_DWORD)v153 - (_DWORD)v151;
              }
LABEL_242:
              v150 += v157;
            }
            v159 = 0;
            if ( v1319 )
            {
              v160 = 0LL;
              if ( (__int64)&v1211[-v113] <= v1314 - v140 )
                v161 = (_DWORD)v1314 - (_DWORD)v140;
              else
                v161 = (_DWORD)v1211 - v113;
              v162 = v140 - 4;
              v163 = -v161;
              v164 = v113 - (_QWORD)v140;
              while ( v163 > 3 )
              {
                if ( *(_DWORD *)v162 != *(_DWORD *)&v162[v164] )
                {
                  _BitScanReverse(&v165, *(_DWORD *)v162 ^ *(_DWORD *)&v162[v164]);
                  v159 -= (31 - v165) >> 3;
                  goto LABEL_256;
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
                  if ( v1211[SHIDWORD(v1278) - v139 - (_QWORD)v1314 - 2 + (_QWORD)v167] != *v167 )
                    break;
                  --v167;
                  --v159;
                }
                while ( (__int64)&v167[1 - v139 - (_QWORD)v1314] > v166 );
              }
LABEL_256:
              v102 = v1215;
            }
            v115 = v1174;
            v168 = v150 - v159;
            v114 = v1174;
            LODWORD(v99) = v1196;
            v125 = v1233;
            if ( v168 > v1183 )
            {
              v1183 = v168;
              v1225 = v102 - v112;
              v1249 = v113 + v159;
            }
            v104 = v1190;
          }
          else
          {
            v116 = v112 - (unsigned int)v99;
            v117 = &v1323[v116];
            if ( *(_WORD *)&v1211[v98 - 1] != *(_WORD *)&v1323[v116 - v111 - 1 + v98] || *(_DWORD *)v117 != v1190 )
            {
              v104 = v1190;
              v115 = v1174;
              goto LABEL_194;
            }
            v118 = 0;
            if ( v111 )
            {
              v119 = 0LL;
              if ( (__int64)&v1211[-v113] <= -v116 )
                v120 = v99 - v112;
              else
                v120 = (_DWORD)v1211 - v113;
              v121 = v117 - 4;
              v122 = -v120;
              v123 = v113 - (_QWORD)v117;
              while ( v122 > 3 )
              {
                if ( *(_DWORD *)v121 != *(_DWORD *)&v121[v123] )
                {
                  _BitScanReverse(&v124, *(_DWORD *)v121 ^ *(_DWORD *)&v121[v123]);
                  v118 -= (31 - v124) >> 3;
                  goto LABEL_168;
                }
                v118 -= 4;
                v122 -= 4;
                v119 -= 4LL;
                v121 -= 4;
              }
              v130 = v120;
              if ( v119 > v120 )
              {
                v131 = &v1323[(unsigned int)v116 - 1 + v119];
                do
                {
                  if ( v1211[SHIDWORD(v1278) - (unsigned __int64)(unsigned int)v116 - (_QWORD)v1323 - 2 + (_QWORD)v131] != *v131 )
                    break;
                  --v131;
                  --v118;
                }
                while ( (__int64)&v131[1LL - (unsigned int)v116 - (_QWORD)v1323] > v130 );
              }
            }
LABEL_168:
            v125 = v1233;
            v126 = (_QWORD *)(v113 + 4);
            v127 = v117 + 4;
            v128 = (_QWORD *)(v113 + 4);
            if ( v113 + 4 >= v1233 - 7 )
            {
              while ( (unsigned __int64)v128 < v1233 - 7 )
              {
                if ( *v127 != *v128 )
                {
                  __asm { tzcnt   rax, r8 }
                  v133 = ((unsigned int)_RAX >> 3) - (_DWORD)v126 + (_DWORD)v128;
                  goto LABEL_192;
                }
                ++v128;
LABEL_180:
                ++v127;
              }
              if ( (unsigned __int64)v128 < v1233 - 3 && *(_DWORD *)v127 == *(_DWORD *)v128 )
              {
                v128 = (_QWORD *)((char *)v128 + 4);
                v127 = (_QWORD *)((char *)v127 + 4);
              }
              if ( (unsigned __int64)v128 < v1233 - 1 && *(_WORD *)v127 == *(_WORD *)v128 )
              {
                v128 = (_QWORD *)((char *)v128 + 2);
                v127 = (_QWORD *)((char *)v127 + 2);
              }
              if ( (unsigned __int64)v128 < v1233 && *(_BYTE *)v127 == *(_BYTE *)v128 )
                LODWORD(v128) = (_DWORD)v128 + 1;
              v133 = (_DWORD)v128 - (_DWORD)v126;
            }
            else
            {
              if ( *v127 == *v126 )
              {
                v128 = (_QWORD *)(v113 + 12);
                goto LABEL_180;
              }
              __asm { tzcnt   rcx, r8 }
              v133 = (unsigned int)_RCX >> 3;
            }
LABEL_192:
            LODWORD(v99) = v1196;
            v104 = v1190;
            v136 = v133 - v118 + 4;
            if ( v136 > v1183 )
            {
              v1183 = v136;
              v115 = v1174;
              v114 = v1174;
              v1249 = v113 + v118;
              v1225 = v1215 - v112;
LABEL_194:
              v125 = v1233;
              goto LABEL_195;
            }
            v115 = v1174;
            v114 = v1174;
          }
LABEL_195:
          if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000) != 1 )
            goto LABEL_263;
          v137 = v112 - 1;
          if ( v114 )
          {
            v1174 = v115;
            if ( v115 != 2 )
              goto LABEL_263;
          }
          else
          {
            if ( (_BYTE)v104 != HIBYTE(v104) || (unsigned __int16)v104 != HIWORD(v104) )
            {
              LODWORD(v99) = v1196;
              v1174 = 1;
LABEL_263:
              v169 = v1203;
LABEL_264:
              v112 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000);
              goto LABEL_265;
            }
            v1174 = 2;
            v1258 = (unsigned int)LZ4HC_countPattern(v113 + 4, v125, v104, 1LL) + 4LL;
          }
          v169 = v1203;
          LODWORD(v99) = v1196;
          if ( v137 < v1203 || v1196 - v112 < 3 )
            goto LABEL_264;
          if ( v137 >= v1196 )
          {
            v172 = 0;
            v173 = &v1323[v137 - v1196];
          }
          else
          {
            v172 = 1;
            v173 = &v1314[v137 - v1237];
          }
          if ( *(_DWORD *)v173 != v104 )
            goto LABEL_263;
          v174 = (char *)v1233;
          if ( v172 )
            v174 = v1328;
          v175 = (unsigned int)LZ4HC_countPattern(v173 + 4, v174, v104, 1LL) + 4LL;
          if ( v172 )
          {
            if ( &v173[v175] == v174 )
            {
              v177 = v1190;
              v178 = 8 * (v175 & 3);
              if ( v178 )
                v177 = (unsigned int)__ROL4__(v1190, v178);
              v175 += (unsigned int)LZ4HC_countPattern(v1323, v1233, v177, v176);
            }
            v179 = v1314;
          }
          else
          {
            v179 = v1323;
          }
          v180 = LZ4HC_reverseCountPattern(v173, v179, v1190);
          LODWORD(v99) = v1196;
          v181 = v180;
          if ( !v172 && &v173[-v180] == v1323 && v1237 < v1196 )
          {
            v182 = v1190;
            v183 = 8LL * (-v180 & 3);
            if ( v183 )
              v182 = (unsigned int)__ROL4__(v1190, v183);
            v181 = LZ4HC_reverseCountPattern(v1328, v1314, v182) + v180;
            LODWORD(v99) = v1196;
          }
          v169 = v1203;
          v112 = v1203;
          if ( v137 - v181 > v1203 )
            v112 = v137 - v181;
          v184 = v175 + v137 - v112;
          if ( v184 < v1258 || v175 > v1258 )
          {
            if ( (unsigned int)v99 - v112 - 1 < 3 )
            {
              v112 = v99;
            }
            else if ( !v1319 )
            {
              v98 = v1183;
              v186 = v1258;
              if ( v184 < v1258 )
                v186 = v175 + v137 - v112;
              if ( v1183 < v186 )
              {
                if ( v113 + (unsigned int)v99 - (unsigned __int64)v112 - (_QWORD)v1323 > 0xFFFF )
                  goto LABEL_266;
                v98 = v186;
                v1183 = v186;
                v1225 = v1215 - v112;
                v1249 = v113;
              }
              v187 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v112 + 0x20000);
              if ( v187 > v112 )
                goto LABEL_266;
              v112 -= v187;
            }
          }
          else
          {
            v185 = v175 + v137 - v1258;
            v112 = v99;
            if ( (unsigned int)v99 - v185 - 1 >= 3 )
              v112 = v185;
          }
LABEL_265:
          v104 = v1190;
          v98 = v1183;
          v102 = v1215;
          v103 = v1314;
          v111 = v1319;
          if ( v112 < v169 )
            goto LABEL_266;
        }
      }
      v93 = (char *)v1347;
      v95 = HIDWORD(v1278);
      v35 = v1211;
      v170 = __PAIR64__(v98, v94);
      v1252 = __PAIR64__(v98, v94);
      v171 = v98;
    }
    v1315 = v170;
    if ( v171 > v95 )
      break;
    v17 = v1246;
    v286 = v18;
    v342 = v18;
    v343 = v18;
    v344 = v18 + 1;
    v345 = v35 - v1246;
    if ( a7 && (unsigned __int64)&v344[v345 + 8 + v345 / 0xFF] > v1255 )
      goto LABEL_608;
    if ( v345 < 0xF )
    {
      *v342 = 16 * v345;
    }
    else
    {
      v346 = v345 - 15;
      *v342 = -16;
      if ( v345 - 15 >= 0xFF )
      {
        v347 = v346 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v347) = -1;
        memset_0(v344, SDWORD2(v347), v346 / 0xFF);
        v35 = v1211;
        v344 += v346 / 0xFF;
        v17 = v1246;
        v346 %= 0xFFuLL;
      }
      *v344++ = v346;
      v95 = HIDWORD(v1278);
    }
    v348 = v344;
    do
    {
      *v348 = *(_QWORD *)((char *)v348 + v17 - v344);
      ++v348;
    }
    while ( v348 < (_QWORD *)&v344[v345] );
    v349 = &v344[v345];
    v350 = v95 - 4LL;
    *v349 = v1278;
    v18 = v349 + 1;
    v1303 = v18;
    if ( a7 )
    {
      if ( (unsigned __int64)&v18[v350 / 0xFF + 6] > v1255 )
        goto LABEL_608;
    }
    v351 = *v343;
    if ( v350 < 0xF )
    {
      *v342 = v350 + v351;
    }
    else
    {
      v352 = v95 - 19LL;
      *v342 = v351 + 15;
      if ( v352 >= 0x1FE )
      {
        v353 = v352 / 0x1FE;
        v352 %= 0x1FEuLL;
        do
        {
          *v18 = -1;
          v354 = v18 + 1;
          *v354 = -1;
          v18 = v354 + 1;
          --v353;
        }
        while ( v353 );
      }
      if ( v352 >= 0xFF )
      {
        LOBYTE(v352) = v352 + 1;
        *v18++ = -1;
      }
      *v18++ = v352;
      v1303 = v18;
    }
    v15 = &v35[v95];
LABEL_604:
    v20 = v1294;
    v17 = v15;
    v1246 = v15;
LABEL_100:
    v21 = v1255;
    v11 = a1;
    v1211 = v15;
  }
  v188 = v1249;
  if ( v93 < v35 && v1249 < (unsigned __int64)&v35[v1354] )
  {
    LOWORD(v1278) = v71;
    v35 = v93;
    v95 = HIDWORD(v71);
    v1363 = HIDWORD(v71);
    v1211 = v93;
  }
  if ( (__int64)(v1249 - (_QWORD)v35) < 3 )
  {
    v1278 = v170;
    v35 = (char *)v1249;
    v20 = v1294;
    v1211 = (char *)v1249;
    goto LABEL_141;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (__int64)(v188 - (_QWORD)v35) < 18 )
      {
        v189 = v95;
        if ( v95 > 18 )
          v189 = 18;
        if ( (unsigned __int64)&v35[v189] > v188 + v171 - 4LL )
          v189 = v171 + v188 - (_DWORD)v35 - 4;
        v190 = v189 + (_DWORD)v35 - v188;
        if ( v190 > 0 )
        {
          v188 += v190;
          v171 -= v190;
          v1249 = v188;
          HIDWORD(v1252) = v171;
          v170 = v1252;
          v1315 = v1252;
        }
      }
      v191 = v188 + v171;
      if ( v191 > v1294 )
      {
        v280 = 0;
        v279 = 0LL;
      }
      else
      {
        v1311 = v191 - 3;
        v192 = (_DWORD *)(v191 - 3);
        v1271 = (_DWORD *)(v191 - 3);
        v193 = v171;
        v1184 = v171;
        v194 = *(unsigned int *)(a1 + 262172);
        v195 = *(unsigned int *)(a1 + 262168);
        v196 = v194;
        v197 = *(_QWORD **)(a1 + 262152);
        v1329 = v197;
        v198 = v1311 + *(_DWORD *)(a1 + 262168) - (_DWORD)v197;
        v1238 = *(_DWORD *)(a1 + 262168);
        v1216 = v198;
        v1204 = *(_DWORD *)(a1 + 262172);
        if ( (int)v194 + 0x10000 <= v198 )
          v196 = v198 - 0xFFFF;
        v1191 = 0;
        v1348 = 0LL;
        v1264 = *(_QWORD *)(a1 + 262160) + v195 - v194;
        v199 = 0;
        v1226 = 0;
        v200 = (_DWORD)v192 - v1249;
        v1259 = *(_QWORD **)(a1 + 262160);
        v1288 = 256;
        v201 = *(_DWORD *)(a1 + 262176);
        v1175 = v196;
        v1197 = *v192;
        if ( v201 < v198 )
        {
          v202 = (_DWORD *)((char *)v197 + v201 - v195);
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
          while ( v201 < v198 );
          v171 = HIDWORD(v1252);
          v193 = v1184;
        }
        *(_DWORD *)(a1 + 262176) = v198;
        v205 = v200;
        v1306 = v200;
        v206 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v192) >> 17));
        if ( v206 >= v196 )
        {
          v207 = v1238;
          v208 = v1329;
          v1311 = (unsigned __int64)v192;
          v1320 = v171;
          while ( 1 )
          {
            v209 = v1191;
            if ( v1288 <= 0 )
            {
LABEL_472:
              v170 = v1315;
              v18 = v1303;
              v171 = HIDWORD(v1252);
              v199 = v1226;
              break;
            }
            --v1288;
            if ( v206 < v207 )
            {
              v230 = v1204;
              v231 = v1259;
              v211 = v1197;
              v232 = (_DWORD *)((char *)v1259 + v206 - v1204);
              if ( v206 <= v207 - 4 && *v232 == v1197 )
              {
                v233 = v192 + 1;
                v234 = v232 + 1;
                v235 = (_QWORD *)((char *)v192 + v207 - v206);
                v236 = v192 + 1;
                if ( (unsigned __int64)v235 > v1233 )
                  v235 = (_QWORD *)v1233;
                if ( v233 >= (_QWORD *)((char *)v235 - 7) )
                {
                  while ( v236 < (_QWORD *)((char *)v235 - 7) )
                  {
                    if ( *v234 != *v236 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v239 = ((unsigned int)_RAX >> 3) - (_DWORD)v233 + (_DWORD)v236;
                      goto LABEL_395;
                    }
                    ++v236;
LABEL_383:
                    ++v234;
                  }
                  if ( v236 < (_QWORD *)((char *)v235 - 3) && *(_DWORD *)v234 == *(_DWORD *)v236 )
                  {
                    v236 = (_QWORD *)((char *)v236 + 4);
                    v234 = (_QWORD *)((char *)v234 + 4);
                  }
                  if ( v236 < (_QWORD *)((char *)v235 - 1) && *(_WORD *)v234 == *(_WORD *)v236 )
                  {
                    v236 = (_QWORD *)((char *)v236 + 2);
                    v234 = (_QWORD *)((char *)v234 + 2);
                  }
                  if ( v236 < v235 && *(_BYTE *)v234 == *(_BYTE *)v236 )
                    LODWORD(v236) = (_DWORD)v236 + 1;
                  v239 = (_DWORD)v236 - (_DWORD)v233;
                }
                else
                {
                  if ( *v234 == *v233 )
                  {
                    v236 = v192 + 3;
                    goto LABEL_383;
                  }
                  __asm { tzcnt   rcx, r8 }
                  v239 = (unsigned int)_RCX >> 3;
                }
LABEL_395:
                v242 = v239 + 4;
                v243 = (_QWORD *)((char *)v192 + (int)(v239 + 4));
                if ( v243 == v235 && (unsigned __int64)v235 < v1233 )
                {
                  v244 = v208;
                  v245 = (_QWORD *)((char *)v192 + v242);
                  if ( (unsigned __int64)v243 >= v1233 - 7 )
                    goto LABEL_400;
                  if ( *v208 != *v243 )
                  {
                    __asm { tzcnt   rcx, rdx }
                    v249 = (unsigned int)_RCX >> 3;
                  }
                  else
                  {
                    v245 = v243 + 1;
                    v244 = v208 + 1;
LABEL_400:
                    while ( (unsigned __int64)v245 < v1233 - 7 )
                    {
                      if ( *v244 != *v245 )
                      {
                        __asm { tzcnt   rax, r8 }
                        v249 = ((unsigned int)_RAX >> 3) - (_DWORD)v243 + (_DWORD)v245;
                        goto LABEL_415;
                      }
                      ++v245;
                      ++v244;
                    }
                    if ( (unsigned __int64)v245 < v1233 - 3 && *(_DWORD *)v244 == *(_DWORD *)v245 )
                    {
                      v245 = (_QWORD *)((char *)v245 + 4);
                      v244 = (_QWORD *)((char *)v244 + 4);
                    }
                    if ( (unsigned __int64)v245 < v1233 - 1 && *(_WORD *)v244 == *(_WORD *)v245 )
                    {
                      v245 = (_QWORD *)((char *)v245 + 2);
                      v244 = (_QWORD *)((char *)v244 + 2);
                    }
                    if ( (unsigned __int64)v245 < v1233 && *(_BYTE *)v244 == *(_BYTE *)v245 )
                      LODWORD(v245) = (_DWORD)v245 + 1;
                    v249 = (_DWORD)v245 - (_DWORD)v243;
                  }
LABEL_415:
                  v242 += v249;
                }
                v251 = 0;
                if ( v1306 )
                {
                  v252 = 0LL;
                  if ( (__int64)(v1249 - (_QWORD)v192) <= -(__int64)(v206 - v1204) )
                    v253 = v1204 - v206;
                  else
                    v253 = v1249 - (_DWORD)v192;
                  v254 = v192 - 1;
                  v255 = -v253;
                  v256 = (char *)v232 - (char *)v192;
                  while ( v255 > 3 )
                  {
                    if ( *v254 != *(_DWORD *)((char *)v254 + v256) )
                    {
                      _BitScanReverse(&v257, *v254 ^ *(_DWORD *)((char *)v254 + v256));
                      v251 -= (31 - v257) >> 3;
                      goto LABEL_430;
                    }
                    v251 -= 4;
                    v255 -= 4;
                    v252 -= 4LL;
                    --v254;
                  }
                  if ( v252 > (int)v253 )
                  {
                    v258 = (_BYTE *)(v252 + v1320 + v1249 - 4);
                    do
                    {
                      if ( *v258 != v258[(_QWORD)v1259 + v206 - v1204 - v1320 - v1249 + 3] )
                        break;
                      --v258;
                      --v251;
                    }
                    while ( (__int64)&v258[4 - v1320 - v1249] > (int)v253 );
                    v207 = v1238;
                  }
                }
LABEL_430:
                v211 = v1197;
                v259 = v242 - v251;
                v209 = v1191;
                v231 = v1259;
                if ( v259 <= v1184 )
                {
                  v230 = v1204;
                }
                else
                {
                  v1184 = v259;
                  v230 = v1204;
                  v1311 = (unsigned __int64)v192 + v251;
                  v1226 = v1216 - v206;
                }
              }
            }
            else
            {
              v210 = (_DWORD *)((char *)v208 + v206 - v207);
              v211 = v1197;
              if ( *(_WORD *)(v193 + v1249 - 1) == *(_WORD *)((char *)v210 + v193 - v205 - 1) && *v210 == v1197 )
              {
                v212 = 0;
                if ( v205 )
                {
                  v213 = 0LL;
                  if ( (__int64)(v1249 - (_QWORD)v192) <= -(__int64)(v206 - v207) )
                    v214 = v207 - v206;
                  else
                    v214 = v1249 - (_DWORD)v192;
                  v215 = v192 - 1;
                  v216 = -v214;
                  v217 = (char *)v210 - (char *)v192;
                  while ( v216 > 3 )
                  {
                    if ( *v215 != *(_DWORD *)((char *)v215 + v217) )
                    {
                      _BitScanReverse(&v218, *v215 ^ *(_DWORD *)((char *)v215 + v217));
                      v212 -= (31 - v218) >> 3;
                      goto LABEL_350;
                    }
                    v212 -= 4;
                    v216 -= 4;
                    v213 -= 4LL;
                    --v215;
                  }
                  if ( v213 > (int)v214 )
                  {
                    v219 = (_BYTE *)(v213 + v1320 + v1249 - 4);
                    do
                    {
                      if ( *v219 != v219[(_QWORD)v208 + v206 - v207 - v1320 - v1249 + 3] )
                        break;
                      --v219;
                      --v212;
                    }
                    while ( (__int64)&v219[4 - v1320 - v1249] > (int)v214 );
                    v208 = v1329;
                  }
LABEL_350:
                  v193 = v1184;
                  v198 = v1216;
                }
                v220 = v210 + 1;
                v221 = v192 + 1;
                v222 = v192 + 1;
                if ( (unsigned __int64)(v192 + 1) >= v1233 - 7 )
                {
                  while ( (unsigned __int64)v222 < v1233 - 7 )
                  {
                    if ( *v222 != *v220 )
                    {
                      __asm { tzcnt   rax, r8 }
                      v225 = ((unsigned int)_RAX >> 3) - (_DWORD)v221 + (_DWORD)v222;
                      goto LABEL_370;
                    }
                    ++v222;
LABEL_358:
                    ++v220;
                  }
                  if ( (unsigned __int64)v222 < v1233 - 3 && *(_DWORD *)v220 == *(_DWORD *)v222 )
                  {
                    v222 = (_QWORD *)((char *)v222 + 4);
                    v220 = (_QWORD *)((char *)v220 + 4);
                  }
                  if ( (unsigned __int64)v222 < v1233 - 1 && *(_WORD *)v220 == *(_WORD *)v222 )
                  {
                    v222 = (_QWORD *)((char *)v222 + 2);
                    v220 = (_QWORD *)((char *)v220 + 2);
                  }
                  if ( (unsigned __int64)v222 < v1233 && *(_BYTE *)v220 == *(_BYTE *)v222 )
                    LODWORD(v222) = (_DWORD)v222 + 1;
                  v225 = (_DWORD)v222 - (_DWORD)v221;
                }
                else
                {
                  if ( *v221 == *v220 )
                  {
                    v222 = v192 + 3;
                    goto LABEL_358;
                  }
                  __asm { tzcnt   rcx, rcx }
                  v225 = (unsigned int)_RCX >> 3;
                }
LABEL_370:
                v211 = v1197;
                v228 = v225 - v212 + 4;
                v229 = v228 <= v193;
                v230 = v1204;
                if ( !v229 )
                {
                  v1184 = v228;
                  v1311 = (unsigned __int64)v192 + v212;
                  v1226 = v198 - v206;
                }
              }
              else
              {
                v230 = v1204;
              }
              v231 = v1259;
              v209 = v1191;
            }
            if ( *(_WORD *)(a1 + 2LL * (unsigned __int16)v206 + 0x20000) != 1 )
              goto LABEL_440;
            v260 = v206 - 1;
            if ( v209 )
            {
              if ( v1191 != 2 )
                goto LABEL_440;
            }
            else
            {
              if ( (_BYTE)v211 != BYTE3(v211) || (unsigned __int16)v211 != WORD1(v211) )
              {
                v1191 = 1;
LABEL_440:
                v261 = v1175;
LABEL_441:
                v206 -= *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v206 + 0x20000);
LABEL_483:
                v205 = v1306;
                goto LABEL_471;
              }
              v1191 = 2;
              v1348 = (unsigned int)LZ4HC_countPattern(v192 + 1, v1233, (unsigned int)v211, v211) + 4LL;
            }
            v261 = v1175;
            if ( v260 < v1175 || v207 - v206 < 3 )
              goto LABEL_441;
            if ( v260 >= v207 )
            {
              v262 = 0;
              v263 = (_DWORD *)((char *)v208 + v260 - v207);
            }
            else
            {
              v262 = 1;
              v263 = (_DWORD *)((char *)v231 + v260 - v230);
            }
            if ( *v263 != v1197 )
              goto LABEL_441;
            v264 = v1233;
            if ( v262 )
              v264 = v1264;
            v267 = (unsigned int)LZ4HC_countPattern(v263 + 1, v264, v1197, v1175) + 4LL;
            if ( v262 )
            {
              if ( (_DWORD *)((char *)v263 + v267) == v266 )
              {
                v268 = v1197;
                v269 = 8 * (v267 & 3);
                if ( v269 )
                  v268 = (unsigned int)__ROL4__(v1197, v269);
                v267 += (unsigned int)LZ4HC_countPattern(v208, v1233, v268, v265);
              }
              v270 = v1259;
            }
            else
            {
              v270 = v208;
            }
            v271 = LZ4HC_reverseCountPattern(v263, v270, v1197);
            v273 = v271;
            if ( !v262 && (_QWORD *)((char *)v263 - v271) == v208 && v1204 < v207 )
            {
              v274 = 8LL * (-v271 & 3);
              if ( v274 )
                v272 = (unsigned int)__ROL4__(v272, v274);
              v275 = LZ4HC_reverseCountPattern(v1264, v1259, v272);
              v273 = v275 + v276;
            }
            v261 = v1175;
            v206 = v1175;
            if ( v260 - v273 > v1175 )
              v206 = v260 - v273;
            v277 = v267 + v260 - v206;
            if ( v277 < v1348 || v267 > v1348 )
            {
              v205 = v1306;
              if ( v207 - v206 - 1 < 3 )
              {
                v206 = v207;
              }
              else if ( !v1306 )
              {
                v193 = v1184;
                v192 = v1271;
                v281 = v1348;
                if ( v277 < v1348 )
                  v281 = v277;
                if ( v1184 < v281 )
                {
                  if ( (unsigned __int64)v1271 + v207 - (unsigned __int64)v206 - (_QWORD)v208 > 0xFFFF )
                    goto LABEL_472;
                  v193 = v281;
                  v1184 = v281;
                  v1226 = v1216 - v206;
                  v1311 = (unsigned __int64)v1271;
                }
                v282 = *(unsigned __int16 *)(a1 + 2LL * (unsigned __int16)v206 + 0x20000);
                if ( v282 > v206 )
                  goto LABEL_472;
                v206 -= v282;
                goto LABEL_483;
              }
            }
            else
            {
              v205 = v1306;
              v278 = v267 + v260 - v1348;
              v206 = v207;
              if ( v207 - v278 - 1 >= 3 )
                v206 = v278;
            }
            v192 = v1271;
LABEL_471:
            v198 = v1216;
            v193 = v1184;
            if ( v206 < v261 )
              goto LABEL_472;
          }
        }
        v35 = v1211;
        v188 = v1249;
        v279 = __PAIR64__(v193, v199);
        v280 = HIDWORD(v279);
      }
      if ( v280 <= v171 )
      {
        if ( v188 < (unsigned __int64)&v35[v1363] )
          v1363 = v188 - (_DWORD)v35;
        v313 = v1211;
        v314 = v1246;
        v286 = v18;
        v315 = v18;
        v316 = v18;
        v317 = v1211 - v1246;
        v318 = v18 + 1;
        if ( a7 && (unsigned __int64)&v318[v317 / 0xFF + 8 + v317] > v1255 )
        {
          v95 = v1363;
          v17 = v1246;
LABEL_608:
          v21 = v1255;
          goto LABEL_609;
        }
        if ( v317 < 0xF )
        {
          *v315 = 16 * v317;
        }
        else
        {
          v319 = v317 - 15;
          *v315 = -16;
          if ( v317 - 15 >= 0xFF )
          {
            v320 = v319 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v320) = -1;
            memset_0(v318, SDWORD2(v320), v319 / 0xFF);
            v313 = v1211;
            v318 += v319 / 0xFF;
            v314 = v1246;
            v316 = v315;
            LOBYTE(v319) = v319 / 0xFF + v319;
          }
          *v318++ = v319;
          v188 = v1249;
        }
        v321 = v318;
        do
        {
          *v321 = *(_QWORD *)((char *)v321 + v314 - v318);
          ++v321;
        }
        while ( v321 < (_QWORD *)&v318[v317] );
        v322 = &v318[v317];
        v95 = v1363;
        *v322 = v1278;
        v323 = v322 + 1;
        v324 = v1363 - 4LL;
        if ( a7 && (unsigned __int64)&v323[v324 / 0xFF + 6] > v1255 )
        {
          v17 = v1246;
          v21 = v1255;
          goto LABEL_609;
        }
        v325 = *v316;
        if ( v324 < 0xF )
        {
          *v315 = v324 + v325;
        }
        else
        {
          v326 = v1363 - 19LL;
          *v315 = v325 + 15;
          if ( v326 >= 0x1FE )
          {
            v327 = v326 / 0x1FE;
            v326 %= 0x1FEuLL;
            do
            {
              *v323 = -1;
              v328 = v323 + 1;
              *v328 = -1;
              v323 = v328 + 1;
              --v327;
            }
            while ( v327 );
          }
          if ( v326 >= 0xFF )
          {
            LOBYTE(v326) = v326 + 1;
            *v323++ = -1;
          }
          *v323++ = v326;
        }
        v17 = &v313[v1363];
        v1211 = (char *)v188;
        v1246 = v17;
        v286 = v323;
        v329 = v323;
        v330 = v323;
        v331 = v188 - (_QWORD)v17;
        v332 = v323 + 1;
        if ( a7 && (unsigned __int64)&v332[v331 + 8 + v331 / 0xFF] > v1255 )
        {
          v1246 = v17;
LABEL_606:
          LOWORD(v1278) = v170;
          v95 = HIDWORD(v170);
          goto LABEL_608;
        }
        if ( v331 < 0xF )
        {
          *v329 = 16 * v331;
        }
        else
        {
          v333 = v331 - 15;
          *v329 = -16;
          if ( v331 - 15 >= 0xFF )
          {
            v334 = v333 * (unsigned __int128)0x8080808080808081uLL;
            BYTE8(v334) = -1;
            memset_0(v332, SDWORD2(v334), v333 / 0xFF);
            v17 = v1246;
            v332 += v333 / 0xFF;
            v330 = v329;
            v333 %= 0xFFuLL;
          }
          *v332++ = v333;
          v188 = v1249;
        }
        v335 = v332;
        do
        {
          *v335 = *(_QWORD *)((char *)v335 + v17 - v332);
          ++v335;
        }
        while ( v335 < (_QWORD *)&v332[v331] );
        v336 = &v332[v331];
        *v336 = v1252;
        v18 = v336 + 1;
        v337 = SHIDWORD(v1252) - 4LL;
        v1303 = v18;
        if ( a7 && (unsigned __int64)&v18[v337 / 0xFF + 6] > v1255 )
          goto LABEL_606;
        v338 = *v330;
        if ( v337 < 0xF )
        {
          *v329 = v338 + v337;
        }
        else
        {
          v339 = SHIDWORD(v1252) - 19LL;
          *v329 = v338 + 15;
          if ( v339 >= 0x1FE )
          {
            v340 = v339 / 0x1FE;
            v339 %= 0x1FEuLL;
            do
            {
              *v18 = -1;
              v341 = v18 + 1;
              *v341 = -1;
              v18 = v341 + 1;
              --v340;
            }
            while ( v340 );
          }
          if ( v339 >= 0xFF )
          {
            LOBYTE(v339) = v339 + 1;
            *v18++ = -1;
          }
          *v18++ = v339;
          v1303 = v18;
        }
        v15 = (char *)(v188 + SHIDWORD(v1252));
        goto LABEL_604;
      }
      v95 = v1363;
      v283 = (unsigned __int64)&v35[v1363];
      if ( v1311 < v283 + 3 )
        break;
      if ( v188 < v283 )
      {
        if ( (__int64)(v188 - (_QWORD)v35) >= 18 )
        {
          v95 = v188 - (_DWORD)v35;
          v1363 = v188 - (_DWORD)v35;
        }
        else
        {
          if ( v1363 > 18 )
            v95 = 18;
          v1363 = v95;
          if ( (unsigned __int64)&v35[v95] > v188 + v171 - 4LL )
          {
            v95 = v171 + v188 - (_DWORD)v35 - 4;
            v1363 = v95;
          }
          v284 = v95 + (_DWORD)v35 - v188;
          if ( v284 > 0 )
          {
            v1249 = v284 + v188;
            HIDWORD(v1252) = v171 - v284;
            v170 = v1252;
          }
        }
      }
      v285 = v35 - v1246;
      v286 = v18;
      v287 = v18;
      v288 = v18;
      v289 = v18 + 1;
      if ( a7 )
      {
        v21 = v1255;
        if ( (unsigned __int64)&v289[v285 + 8 + v285 / 0xFF] > v1255 )
          goto LABEL_620;
      }
      if ( v285 < 0xF )
      {
        *v287 = 16 * v285;
      }
      else
      {
        v290 = v285 - 15;
        *v287 = -16;
        if ( v285 - 15 >= 0xFF )
        {
          v291 = v290 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v291) = -1;
          memset_0(v289, SDWORD2(v291), v290 / 0xFF);
          v289 += v290 / 0xFF;
          v287 = v286;
          v290 %= 0xFFuLL;
          v288 = v286;
        }
        *v289++ = v290;
      }
      v292 = v289;
      do
      {
        *v292 = *(_QWORD *)((char *)v292 + v1246 - v289);
        ++v292;
      }
      while ( v292 < (_QWORD *)&v289[v285] );
      v293 = &v289[v285];
      v95 = v1363;
      *v293 = v1278;
      v18 = v293 + 1;
      v294 = v1363 - 4LL;
      v1303 = v18;
      if ( a7 )
      {
        v21 = v1255;
        if ( (unsigned __int64)&v18[v294 / 0xFF + 6] > v1255 )
          goto LABEL_619;
      }
      v295 = *v288;
      if ( v294 < 0xF )
      {
        *v287 = v295 + v294;
      }
      else
      {
        v296 = v1363 - 19LL;
        *v287 = v295 + 15;
        if ( v296 >= 0x1FE )
        {
          v297 = v296 / 0x1FE;
          v296 %= 0x1FEuLL;
          do
          {
            *v18 = -1;
            v298 = v18 + 1;
            *v298 = -1;
            v18 = v298 + 1;
            --v297;
          }
          while ( v297 );
        }
        if ( v296 >= 0xFF )
        {
          LOBYTE(v296) = v296 + 1;
          *v18++ = -1;
        }
        *v18++ = v296;
        v1303 = v18;
      }
      v35 = (char *)v1249;
      LOWORD(v1278) = v170;
      v188 = v1311;
      v95 = HIDWORD(v170);
      v170 = v279;
      v1252 = v279;
      v171 = HIDWORD(v279);
      v1246 = &v1211[v1363];
      v1363 = v95;
      v1211 = (char *)v1249;
      v1249 = v1311;
      v1315 = v279;
    }
    if ( v1311 >= v283 )
      break;
    v1252 = v279;
    v188 = v1311;
    v171 = HIDWORD(v279);
    v170 = v279;
    v1249 = v1311;
    v1315 = v279;
  }
  if ( v188 < v283 )
  {
    v299 = v1363 + (_DWORD)v35 - v188;
    v1249 = v299 + v188;
    if ( v171 - v299 >= 4 )
    {
      HIDWORD(v1252) = v171 - v299;
      v170 = v1252;
    }
    else
    {
      v1249 = v1311;
      v170 = v279;
    }
  }
  v300 = v35 - v1246;
  v286 = v18;
  v301 = v18;
  v302 = v18;
  v303 = v18 + 1;
  if ( a7 && (v21 = v1255, (unsigned __int64)&v303[v300 + 8 + v300 / 0xFF] > v1255) )
  {
LABEL_620:
    v17 = v1246;
  }
  else
  {
    if ( v300 < 0xF )
    {
      *v301 = 16 * v300;
    }
    else
    {
      v304 = v300 - 15;
      *v301 = -16;
      if ( v300 - 15 >= 0xFF )
      {
        v305 = v304 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v305) = -1;
        memset_0(v303, SDWORD2(v305), v304 / 0xFF);
        v303 += v304 / 0xFF;
        v301 = v286;
        v95 = v1363;
        LOBYTE(v304) = v304 / 0xFF + v304;
        v302 = v286;
      }
      *v303++ = v304;
    }
    v306 = v303;
    do
    {
      *v306 = *(_QWORD *)((char *)v306 + v1246 - v303);
      ++v306;
    }
    while ( v306 < (_QWORD *)&v303[v300] );
    v307 = &v303[v300];
    v94 = 0;
    v308 = v95 - 4LL;
    *v307 = v1278;
    v18 = v307 + 1;
    v1303 = v18;
    if ( !a7 || (v21 = v1255, (unsigned __int64)&v18[v308 / 0xFF + 6] <= v1255) )
    {
      v309 = *v302;
      if ( v308 < 0xF )
      {
        *v301 = v309 + v308;
      }
      else
      {
        v310 = v95 - 19LL;
        *v301 = v309 + 15;
        if ( v310 >= 0x1FE )
        {
          v311 = v310 / 0x1FE;
          v310 %= 0x1FEuLL;
          do
          {
            *v18 = -1;
            v312 = v18 + 1;
            *v312 = -1;
            v18 = v312 + 1;
            --v311;
          }
          while ( v311 );
        }
        if ( v310 >= 0xFF )
        {
          LOBYTE(v310) = v310 + 1;
          *v18++ = -1;
        }
        *v18++ = v310;
        v1303 = v18;
      }
      v71 = v170;
      v1270 = v170;
      v1246 = &v1211[v95];
      v35 = (char *)v1311;
      v93 = (char *)v1249;
      v1354 = HIDWORD(v170);
      v20 = v1294;
      v1347 = v1249;
      v1211 = (char *)v1311;
      v1278 = v279;
      goto LABEL_142;
    }
LABEL_619:
    v17 = v1246;
  }
LABEL_609:
  if ( a7 != 2 )
    goto LABEL_636;
  v355 = v1211;
  v18 = v286;
  v356 = v1211 - v17;
  v357 = (v1211 - v17 + 240) / 0xFFuLL + v1211 - v17 + 1;
  if ( (unsigned __int64)&v286[v357] <= v21 - 3 )
  {
    if ( v95 > 255 * (v21 - 3 - v357 - (unsigned __int64)v286) + 18 )
      v95 = 255 * (v21 - 3 - v357 - (_DWORD)v286) + 18;
    v1364 = v95;
    if ( (__int64)(v21 + v95 - v357 - (_QWORD)v286 + 2) >= 12 )
    {
      v358 = v286 + 1;
      if ( v356 < 0xF )
      {
        *v286 = 16 * v356;
      }
      else
      {
        v359 = v356 - 15;
        *v286 = -16;
        if ( v356 - 15 >= 0xFF )
        {
          v360 = v359 * (unsigned __int128)0x8080808080808081uLL;
          BYTE8(v360) = -1;
          memset_0(v286 + 1, SDWORD2(v360), v359 / 0xFF);
          v355 = v1211;
          v358 += v359 / 0xFF;
          v17 = v1246;
          LOBYTE(v359) = v359 / 0xFF + v359;
        }
        *v358++ = v359;
        v95 = v1364;
      }
      v361 = v358;
      v362 = v17 - v358;
      do
      {
        *v361 = *(_QWORD *)((char *)v361 + v362);
        ++v361;
      }
      while ( v361 < (_QWORD *)&v358[v356] );
      v363 = &v358[v356];
      v364 = v95 - 4LL;
      *v363 = v1278;
      v18 = v363 + 1;
      v365 = *v286;
      if ( v364 < 0xF )
      {
        *v286 = v365 + v364;
      }
      else
      {
        v366 = v95 - 19LL;
        *v286 = v365 + 15;
        if ( v366 >= 0x1FE )
        {
          v367 = v366 / 0x1FE;
          v366 %= 0x1FEuLL;
          do
          {
            *v18 = -1;
            v368 = v18 + 1;
            *v368 = -1;
            v18 = v368 + 1;
            --v367;
          }
          while ( v367 );
        }
        if ( v366 >= 0xFF )
        {
          LOBYTE(v366) = v366 + 1;
          *v18++ = -1;
        }
        *v18++ = v366;
      }
      v17 = &v355[v95];
      v1246 = v17;
    }
  }
LABEL_633:
  v19 = v1281;
LABEL_634:
  v369 = v19 - v17;
  v1282 = v369;
  v370 = v18;
  if ( a7 == 2 )
  {
    v21 += 5LL;
    goto LABEL_638;
  }
  if ( a7 )
  {
LABEL_638:
    if ( (unsigned __int64)&v18[(v369 + 240) / 0xFF + 1 + v369] <= v21 )
      goto LABEL_641;
    if ( a7 != 1 )
    {
      v369 = v21 - (_QWORD)v18 - 1 - ((v21 - (unsigned __int64)v18 - 1 + 241) >> 8);
      v1282 = v369;
      goto LABEL_641;
    }
LABEL_636:
    v371 = 0;
LABEL_647:
    *(_BYTE *)(a1 + 262183) = 1;
  }
  else
  {
LABEL_641:
    v372 = v369 + (_DWORD)v17;
    if ( v369 < 0xF )
    {
      *v18 = 16 * v369;
      v376 = (_DWORD)v18 + 1;
    }
    else
    {
      *v18 = -16;
      v373 = v369 - 15;
      v374 = v18 + 1;
      if ( v369 - 15 >= 0xFF )
      {
        v375 = v373 * (unsigned __int128)0x8080808080808081uLL;
        BYTE8(v375) = -1;
        memset_0(v374, SDWORD2(v375), v373 / 0xFF);
        v17 = v1246;
        v374 += v373 / 0xFF;
        v369 = v1282;
        LOBYTE(v373) = v373 / 0xFF + v373;
      }
      v370 = v374;
      *v374 = v373;
      v376 = (_DWORD)v374 + 1;
    }
    memmove(v370 + 1, v17, v369);
    v371 = v376 + v369 - v1360;
    *a4 = v372 - v1359;
    if ( v371 <= 0 )
      goto LABEL_647;
  }
  return (unsigned int)v371;
}
