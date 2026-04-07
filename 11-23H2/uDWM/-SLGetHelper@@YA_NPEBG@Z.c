/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18004FC3C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180021C38 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x18005AEB0 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18005AED4 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x18005AEF4 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18005B18C (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18005B7BC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(const unsigned __int16 *a1)
{
  void *v1; // r12
  int v2; // edi
  char v3; // si
  int v4; // ebx
  unsigned int v6; // r13d
  void *v7; // rbx
  int v8; // r14d
  void *v9; // r15
  HANDLE ProcessHeap; // rax
  _OWORD *v11; // rax
  HANDLE v12; // rax
  _QWORD *v13; // rax
  SIZE_T v14; // r13
  int v15; // eax
  unsigned int v16; // r9d
  int v17; // eax
  unsigned int v18; // r10d
  int v19; // eax
  unsigned int v20; // r10d
  int v21; // eax
  unsigned int v22; // r10d
  int v23; // eax
  size_t v24; // rdx
  int v25; // eax
  unsigned int v26; // r10d
  int v27; // eax
  unsigned int v28; // r10d
  int v29; // r9d
  int v30; // eax
  int v31; // r9d
  unsigned int v32; // esi
  HANDLE v33; // rax
  void *v34; // rax
  void *v35; // r13
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  _DWORD *v38; // rax
  int v39; // r11d
  int v40; // r11d
  unsigned int *v41; // rax
  __int64 v42; // rdx
  int v43; // r9d
  unsigned int v44; // r11d
  unsigned int v45; // r10d
  int v46; // r11d
  unsigned int *v47; // r10
  __int64 v48; // r10
  int v49; // eax
  unsigned int v50; // r11d
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned int *v53; // r10
  int v54; // eax
  size_t v55; // rdx
  int v56; // r11d
  int v57; // r11d
  int v58; // eax
  _QWORD *v59; // rax
  SIZE_T v60; // rcx
  unsigned int *v61; // r9
  __int64 v62; // r9
  unsigned int v63; // r11d
  _DWORD *v64; // r9
  unsigned int *v65; // r9
  __int64 v66; // r9
  unsigned int v67; // r11d
  _DWORD *v68; // r9
  __int64 v69; // r10
  STRSAFE_PCNZWCH v70; // rdx
  void *v71; // rcx
  int v72; // eax
  int v73; // r11d
  unsigned int *v74; // r9
  __int64 v75; // r9
  unsigned int v76; // r11d
  _DWORD *v77; // r9
  _DWORD *v78; // rax
  unsigned int v79; // r10d
  wchar_t *v80; // rsi
  __int64 v81; // rcx
  unsigned int v82; // r9d
  unsigned int v83; // r10d
  unsigned int v84; // r10d
  unsigned int v85; // r10d
  unsigned int v86; // r10d
  unsigned int v87; // r9d
  _DWORD *v88; // rax
  unsigned int *v89; // r9
  __int64 v90; // r9
  unsigned int v91; // r11d
  unsigned int *v92; // r9
  int v93; // r9d
  int v94; // r14d
  unsigned int v95; // ecx
  unsigned int v96; // esi
  HANDLE v97; // rax
  size_t v98; // rcx
  int v99; // eax
  unsigned int v100; // r11d
  HANDLE v101; // rax
  unsigned __int64 v102; // r14
  void *v103; // rax
  unsigned int v104; // r11d
  size_t v105; // rdx
  unsigned __int8 v106; // al
  unsigned __int64 v107; // rcx
  size_t v108; // rcx
  int v109; // r14d
  unsigned __int8 *v110; // r9
  unsigned int v111; // r8d
  int v112; // r14d
  char v113; // bl
  unsigned int v114; // eax
  unsigned int v115; // edx
  unsigned int v116; // ecx
  _BYTE *v117; // rdx
  unsigned int v118; // r14d
  unsigned int v119; // ecx
  unsigned int v120; // edi
  int v121; // esi
  char v122; // r9
  unsigned int v123; // r8d
  size_t v124; // rdi
  _BYTE *v125; // r15
  int v126; // esi
  unsigned __int8 *v127; // rdx
  int v128; // r12d
  int v129; // eax
  int v130; // r9d
  int v131; // r8d
  int v132; // r14d
  int v133; // r11d
  int v134; // edx
  int v135; // r11d
  int v136; // r14d
  int v137; // r11d
  int v138; // r14d
  unsigned int v139; // r11d
  int v140; // r14d
  int v141; // r11d
  int v142; // r14d
  int v143; // r11d
  int v144; // r14d
  int v145; // r11d
  unsigned int v146; // r14d
  unsigned int v147; // r11d
  int v148; // r14d
  int v149; // r11d
  int v150; // r14d
  int v151; // r11d
  int v152; // r14d
  int v153; // r11d
  int v154; // r14d
  int v155; // r11d
  unsigned int v156; // r14d
  int v157; // r11d
  unsigned int v158; // ecx
  int v159; // r11d
  int v160; // r14d
  int v161; // r11d
  int v162; // r14d
  int v163; // r11d
  int v164; // r14d
  int v165; // r11d
  int v166; // r14d
  HANDLE v167; // rax
  wchar_t *v168; // rax
  int v169; // r14d
  void *v170; // rax
  unsigned int v171; // r14d
  HANDLE v172; // rax
  LPVOID v173; // rdx
  unsigned int v174; // eax
  STRSAFE_PCNZWCH v175; // rax
  void *v176; // rcx
  STRSAFE_PCNZWCH v177; // r14
  HANDLE v178; // rax
  LPVOID v179; // rax
  _OWORD *v180; // rcx
  HANDLE v181; // rax
  LPVOID v182; // rax
  STRSAFE_PCNZWCH v183; // rax
  HANDLE v184; // rax
  HANDLE v185; // rax
  HANDLE v186; // rax
  HANDLE v187; // rax
  STRSAFE_PCNZWCH v188; // rdx
  HANDLE v189; // rax
  _QWORD *v190; // rax
  HANDLE v191; // rax
  HANDLE v192; // rax
  HANDLE v193; // rax
  HANDLE v194; // rax
  unsigned int *v195; // r9
  __int64 v196; // rdx
  unsigned int v197; // ecx
  unsigned int v198; // r11d
  int v199; // r14d
  __int64 v200; // r9
  __int64 v201; // r9
  unsigned int v202; // esi
  HANDLE v203; // rax
  _DWORD *v204; // rax
  int v205; // eax
  const void **v206; // r9
  SIZE_T v207; // rcx
  _DWORD *v208; // r9
  STRSAFE_PCNZWCH v209; // rcx
  __int64 v210; // r9
  SIZE_T v211; // r10
  _DWORD *v212; // r9
  STRSAFE_PCNZWCH v213; // rcx
  __int64 v214; // r9
  SIZE_T v215; // r10
  HANDLE v216; // rax
  int v217; // eax
  unsigned int v218; // ecx
  void *v219; // r9
  void *v220; // r10
  unsigned int v221; // eax
  void *v222; // r9
  void *v223; // r10
  _DWORD *v224; // rcx
  unsigned int v225; // r11d
  _DWORD *v226; // rcx
  int v227; // r11d
  unsigned int v228; // ecx
  unsigned int v229; // r11d
  size_t v230; // r9
  SIZE_T v231; // r10
  SIZE_T v232; // r14
  unsigned int v233; // esi
  HANDLE v234; // rax
  _DWORD *v235; // rax
  _DWORD *v236; // rsi
  HANDLE v237; // rax
  _QWORD *v238; // rsi
  HANDLE v239; // rax
  HANDLE v240; // rax
  HANDLE v241; // rax
  HANDLE v242; // rax
  void *v243; // rsi
  HANDLE v244; // rax
  void *v245; // rsi
  HANDLE v246; // rax
  _QWORD *v247; // rsi
  HANDLE v248; // rax
  HANDLE v249; // rax
  HANDLE v250; // rax
  HANDLE v251; // rax
  void *v252; // rsi
  HANDLE v253; // rax
  int v254; // r9d
  int v255; // r10d
  int *v256; // rax
  int v257; // r15d
  signed int v258; // eax
  FARPROC v259; // rax
  signed int v260; // eax
  int v261; // eax
  _DWORD *v262; // r9
  void *v263; // r10
  wchar_t *v264; // r11
  void *v265; // rcx
  void *v266; // rdx
  void *v267; // r8
  void *v268; // rax
  int v269; // eax
  int v270; // r14d
  wchar_t *v271; // r11
  unsigned int *v272; // rax
  void *v273; // r9
  void *v274; // r10
  void *v275; // r9
  wchar_t *v276; // r11
  void *v277; // r10
  void *v278; // r11
  void *v279; // r9
  void *v280; // r11
  void *v281; // r10
  void *v282; // r9
  wchar_t *v283; // r11
  void *v284; // r10
  void *v285; // r11
  void *v286; // r9
  void *v287; // r11
  void *v288; // r10
  HANDLE v289; // rax
  _QWORD *v290; // rdx
  wchar_t *v291; // r8
  void *v292; // rcx
  HANDLE v293; // rax
  void *v294; // rcx
  SIZE_T v295; // rax
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  void *v300; // rax
  HANDLE v301; // rax
  void *v302; // rcx
  size_t v303; // rax
  unsigned int v304; // r14d
  HANDLE v305; // rax
  void *v306; // rcx
  unsigned int *v307; // r9
  char v308; // r14
  _DWORD *v309; // r11
  int v310; // eax
  size_t v311; // r9
  void *v312; // r10
  size_t v313; // rcx
  int v314; // r11d
  unsigned __int8 *v315; // rdi
  int v316; // ecx
  int v317; // ecx
  _QWORD *v318; // rsi
  void *v319; // r14
  HANDLE v320; // rax
  void *v321; // r14
  HANDLE v322; // rax
  void *v323; // r14
  HANDLE v324; // rax
  HANDLE v325; // rax
  int v326; // ecx
  unsigned int v327; // r14d
  int v328; // ecx
  int v329; // r9d
  unsigned int v330; // ebx
  unsigned int v331; // r8d
  _BYTE *v332; // rdx
  char v333; // r10
  _BYTE *v334; // r12
  int v335; // ebx
  unsigned __int8 *v336; // r15
  int v337; // r11d
  int v338; // esi
  unsigned int v339; // r13d
  SIZE_T v340; // r10
  int v341; // eax
  int v342; // r9d
  int v343; // r8d
  int v344; // ecx
  int v345; // r9d
  int v346; // r14d
  int v347; // r8d
  int v348; // ebx
  int v349; // r14d
  unsigned int v350; // ebx
  int v351; // r14d
  int v352; // ebx
  unsigned int v353; // r14d
  int v354; // ebx
  int v355; // r14d
  int v356; // ebx
  unsigned int v357; // r14d
  int v358; // ebx
  int v359; // r14d
  unsigned int v360; // ebx
  int v361; // r14d
  int v362; // ebx
  int v363; // r14d
  int v364; // ebx
  int v365; // r14d
  int v366; // ebx
  int v367; // r14d
  int v368; // ebx
  unsigned int v369; // r14d
  int v370; // ebx
  int v371; // edx
  int v372; // ecx
  int v373; // ebx
  int v374; // edx
  int v375; // r14d
  int v376; // r14d
  int v377; // ebx
  int v378; // r14d
  int v379; // ebx
  int v380; // r14d
  int v381; // ebx
  SIZE_T i; // rcx
  int v383; // r14d
  void *v384; // r11
  void *v385; // r9
  void *v386; // r9
  void *v387; // r10
  char *v388; // r11
  void *v389; // r11
  void *v390; // r9
  void *v391; // r10
  void *v392; // r10
  void *v393; // r10
  void *v394; // r9
  void *v395; // r11
  wchar_t *v396; // rax
  void *v397; // r9
  size_t v398; // r11
  void *v399; // r10
  size_t v400; // rcx
  unsigned int *v401; // rcx
  void *v402; // r10
  void *v403; // r11
  void *v404; // r9
  size_t v405; // rdx
  unsigned int v406; // edx
  HANDLE v407; // rax
  void *v408; // rcx
  LPVOID v409; // rcx
  unsigned int v410; // r10d
  int v411; // r9d
  int v412; // r9d
  size_t *v413; // rax
  LPVOID v414; // rcx
  unsigned int v415; // r10d
  int v416; // r9d
  int v417; // r9d
  int v418; // r10d
  _DWORD *v419; // rax
  LPVOID v420; // rcx
  unsigned int v421; // r10d
  int v422; // r9d
  int v423; // r9d
  SIZE_T v424; // rax
  LPVOID v425; // rcx
  unsigned int v426; // r10d
  int v427; // r9d
  int v428; // r9d
  __int64 v429; // r10
  _DWORD *v430; // rax
  _DWORD *v431; // rcx
  int v432; // r11d
  int v433; // eax
  unsigned int v434; // r10d
  int v435; // r11d
  unsigned int *v436; // rax
  void *v437; // rsi
  HANDLE v438; // rax
  void *v439; // rsi
  HANDLE v440; // rax
  HANDLE v441; // rax
  HANDLE v442; // rax
  void *v443; // r12
  void *v444; // r15
  HANDLE v445; // rax
  _OWORD *v446; // rax
  HANDLE v447; // rax
  _QWORD *v448; // rax
  void *v449; // r13
  int v450; // eax
  int v451; // r10d
  int v452; // eax
  int v453; // r10d
  int v454; // eax
  int v455; // r10d
  unsigned int v456; // esi
  HANDLE v457; // rax
  void *v458; // rax
  unsigned int v459; // r10d
  _DWORD *v460; // r11
  _DWORD *v461; // rax
  int v462; // r11d
  void *v463; // r11
  int v464; // r9d
  unsigned int *v465; // r9
  __int64 v466; // r9
  unsigned int v467; // r11d
  unsigned int *v468; // r9
  unsigned int v469; // r10d
  unsigned int *v470; // r10
  __int64 v471; // r10
  unsigned int v472; // r9d
  _DWORD *v473; // r10
  int v474; // r9d
  unsigned int *v475; // r10
  __int64 v476; // r10
  unsigned int v477; // r9d
  _DWORD *v478; // r10
  _QWORD *v479; // rax
  SIZE_T v480; // rcx
  __int64 v481; // rcx
  unsigned int v482; // r9d
  unsigned __int8 *v483; // r13
  int v484; // esi
  unsigned int v485; // r9d
  unsigned int v486; // ecx
  unsigned int v487; // esi
  HANDLE v488; // rax
  _DWORD *v489; // rax
  int v490; // eax
  SIZE_T v491; // r9
  void *v492; // rcx
  int v493; // eax
  SIZE_T v494; // r9
  HANDLE v495; // rax
  int v496; // esi
  unsigned __int64 v497; // rsi
  unsigned __int8 v498; // al
  unsigned __int64 v499; // rcx
  SIZE_T v500; // rcx
  int v501; // esi
  unsigned __int8 *v502; // r8
  unsigned int v503; // r11d
  unsigned int v504; // edx
  unsigned int v505; // ecx
  int v506; // esi
  char v507; // bl
  int v508; // r9d
  _BYTE *v509; // rdi
  unsigned int v510; // esi
  int v511; // r8d
  unsigned int v512; // ecx
  unsigned int v513; // r9d
  char v514; // al
  SIZE_T v515; // rdi
  _BYTE *v516; // r15
  int v517; // r13d
  unsigned __int8 *v518; // rdx
  int v519; // r12d
  int v520; // eax
  int v521; // r9d
  int v522; // r8d
  int v523; // esi
  int v524; // r11d
  int v525; // edx
  int v526; // r11d
  int v527; // esi
  int v528; // r11d
  int v529; // esi
  unsigned int v530; // r11d
  int v531; // esi
  int v532; // r11d
  int v533; // esi
  int v534; // r11d
  unsigned int v535; // esi
  int v536; // r11d
  unsigned int v537; // esi
  unsigned int v538; // r11d
  int v539; // esi
  int v540; // r11d
  int v541; // esi
  int v542; // r11d
  int v543; // esi
  int v544; // r11d
  int v545; // esi
  int v546; // r11d
  unsigned int v547; // esi
  int v548; // r11d
  unsigned int v549; // esi
  int v550; // r11d
  int v551; // esi
  int v552; // r11d
  int v553; // esi
  int v554; // r11d
  int v555; // esi
  int v556; // r11d
  int v557; // esi
  void *v558; // rsi
  HANDLE v559; // rax
  unsigned int *v560; // rbx
  int v561; // esi
  HANDLE v562; // rax
  void *v563; // rax
  HANDLE v564; // rax
  _OWORD *v565; // rax
  HANDLE v566; // rax
  _QWORD *v567; // rax
  HANDLE v568; // rax
  _QWORD *v569; // rax
  HANDLE v570; // rax
  HANDLE v571; // rax
  HANDLE v572; // rax
  HANDLE v573; // rax
  __int64 v574; // rdx
  int v575; // esi
  unsigned int v576; // r10d
  unsigned int v577; // r10d
  HANDLE v578; // rax
  HANDLE v579; // rax
  HANDLE v580; // rax
  HANDLE v581; // rax
  unsigned int v582; // ebx
  HANDLE v583; // rax
  _DWORD *v584; // rax
  int v585; // eax
  const void **v586; // r9
  void *v587; // rcx
  STRSAFE_PCNZWCH v588; // rcx
  int v589; // eax
  void *v590; // r10
  STRSAFE_PCNZWCH v591; // rcx
  int v592; // eax
  void *v593; // r10
  HANDLE v594; // rax
  int v595; // eax
  unsigned int v596; // ecx
  void *v597; // r10
  unsigned int v598; // eax
  HANDLE v599; // rax
  _QWORD *v600; // rbx
  void *v601; // rdi
  HANDLE v602; // rax
  void *v603; // rdi
  HANDLE v604; // rax
  void *v605; // rdi
  HANDLE v606; // rax
  HANDLE v607; // rax
  void *v608; // rbx
  HANDLE v609; // rax
  void *v610; // rbx
  HANDLE v611; // rax
  _QWORD *v612; // rbx
  void *v613; // rdi
  HANDLE v614; // rax
  void *v615; // rdi
  HANDLE v616; // rax
  void *v617; // rdi
  HANDLE v618; // rax
  HANDLE v619; // rax
  void *v620; // rbx
  HANDLE v621; // rax
  _DWORD *v622; // rbx
  unsigned int v623; // r9d
  void *v624; // r10
  int *v625; // rax
  SIZE_T v626; // rcx
  unsigned int v627; // ebx
  unsigned int v628; // r10d
  unsigned int v629; // r9d
  void *v630; // rsi
  HANDLE v631; // rax
  void *v632; // rbx
  HANDLE v633; // rax
  HANDLE v634; // rax
  HANDLE v635; // rax
  int v636; // ebx
  void *v637; // r10
  _DWORD *v638; // rcx
  unsigned int v639; // r10d
  int v640; // r11d
  _DWORD *v641; // rcx
  int v642; // r10d
  int v643; // r11d
  unsigned int v644; // ecx
  unsigned int v645; // r10d
  void *v646; // r9
  void *v647; // rsi
  unsigned int v648; // ebx
  HANDLE v649; // rax
  _DWORD *v650; // rax
  _DWORD *v651; // rbx
  signed int v652; // eax
  unsigned int v653; // edx
  FARPROC ProcAddress; // rax
  signed int LastError; // eax
  int v656; // eax
  _DWORD *v657; // r9
  void *v658; // rbx
  unsigned __int8 *v659; // r11
  void *v660; // r10
  void *v661; // rcx
  LPVOID v662; // rax
  int v663; // eax
  int v664; // esi
  unsigned int *v665; // rax
  void *v666; // r9
  unsigned __int8 *v667; // r11
  void *v668; // r10
  int v669; // eax
  wchar_t *v670; // r8
  void *v671; // r11
  int v672; // eax
  void *v673; // r9
  void *v674; // r11
  void *v675; // r10
  void *v676; // r11
  void *v677; // r9
  void *v678; // r11
  void *v679; // r10
  void *v680; // r11
  int v681; // eax
  void *v682; // r9
  void *v683; // r11
  void *v684; // r10
  void *v685; // r11
  void *v686; // r9
  void *v687; // r11
  void *v688; // r10
  void *v689; // r11
  void *v690; // r11
  HANDLE v691; // rax
  _QWORD *v692; // rdx
  wchar_t *v693; // r11
  void *v694; // rcx
  HANDLE v695; // rax
  void *v696; // rcx
  size_t v697; // rax
  HANDLE v698; // rax
  HANDLE v699; // rax
  HANDLE v700; // rax
  HANDLE v701; // rax
  HANDLE v702; // rax
  void *v703; // rcx
  SIZE_T v704; // rax
  unsigned int v705; // esi
  HANDLE v706; // rax
  void *v707; // rcx
  unsigned int *v708; // r11
  char v709; // si
  _DWORD *v710; // r9
  size_t v711; // rdx
  unsigned __int8 v712; // al
  void *v713; // r11
  SIZE_T v714; // r8
  int v715; // r9d
  int v716; // r14d
  unsigned __int8 *v717; // rsi
  int v718; // r10d
  int v719; // ecx
  _QWORD *v720; // rbx
  void *v721; // rsi
  HANDLE v722; // rax
  void *v723; // rsi
  HANDLE v724; // rax
  void *v725; // rsi
  HANDLE v726; // rax
  HANDLE v727; // rax
  unsigned int v728; // ecx
  unsigned int v729; // r10d
  int v730; // eax
  unsigned int v731; // esi
  int v732; // edi
  int v733; // r8d
  _BYTE *v734; // rdx
  char v735; // bl
  int v736; // r14d
  _BYTE *v737; // r13
  int v738; // ebx
  unsigned __int8 *v739; // r12
  unsigned __int64 v740; // r11
  int v741; // eax
  int v742; // r15d
  int v743; // r10d
  int v744; // r9d
  int v745; // ecx
  int v746; // r10d
  int v747; // esi
  int v748; // r9d
  unsigned int v749; // r8d
  int v750; // esi
  unsigned int v751; // r8d
  int v752; // esi
  int v753; // r8d
  unsigned int v754; // esi
  int v755; // r8d
  int v756; // esi
  int v757; // r8d
  unsigned int v758; // esi
  int v759; // r8d
  int v760; // esi
  unsigned int v761; // eax
  int v762; // esi
  int v763; // eax
  int v764; // esi
  int v765; // eax
  unsigned int v766; // esi
  int v767; // eax
  int v768; // esi
  int v769; // eax
  unsigned int v770; // esi
  int v771; // ecx
  int v772; // eax
  int v773; // edx
  int v774; // esi
  int v775; // esi
  int v776; // eax
  int v777; // esi
  int v778; // eax
  int v779; // esi
  int v780; // eax
  unsigned __int64 v781; // rcx
  void *v782; // r8
  void *v783; // r10
  void *v784; // rbx
  int v785; // eax
  void *v786; // rdi
  int v787; // esi
  void *v788; // r9
  void *v789; // r10
  int v790; // eax
  void *v791; // r8
  void *v792; // r9
  void *v793; // r10
  int v794; // eax
  void *v795; // r9
  void *v796; // r10
  LPVOID v797; // rcx
  SIZE_T v798; // r10
  void *v799; // rdi
  void *v800; // rbx
  unsigned int *v801; // rcx
  int v802; // eax
  void *v803; // r9
  void *v804; // r11
  void *v805; // r10
  HANDLE v806; // rax
  SIZE_T v807; // rbx
  void *v808; // rdi
  unsigned int dwBytes; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int dwBytes_4; // [rsp+3Ch] [rbp-CCh]
  void *v811; // [rsp+40h] [rbp-C8h] BYREF
  SIZE_T v812; // [rsp+48h] [rbp-C0h] BYREF
  SIZE_T v813; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID v814; // [rsp+58h] [rbp-B0h]
  SIZE_T v815; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v816; // [rsp+68h] [rbp-A0h]
  __int64 v817; // [rsp+70h] [rbp-98h]
  LPVOID v818; // [rsp+78h] [rbp-90h]
  LPVOID v819; // [rsp+80h] [rbp-88h] BYREF
  size_t v820; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v821; // [rsp+90h] [rbp-78h] BYREF
  SIZE_T v822; // [rsp+98h] [rbp-70h]
  size_t v823; // [rsp+A0h] [rbp-68h] BYREF
  SIZE_T v824; // [rsp+A8h] [rbp-60h]
  void *lpMem; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v826; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID v827; // [rsp+C0h] [rbp-48h]
  void *v828; // [rsp+C8h] [rbp-40h] BYREF
  size_t v829; // [rsp+D0h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+D8h] [rbp-30h] BYREF
  void *v831; // [rsp+E0h] [rbp-28h] BYREF
  void *v832; // [rsp+E8h] [rbp-20h] BYREF
  size_t Size; // [rsp+F0h] [rbp-18h] BYREF
  void *Src; // [rsp+F8h] [rbp-10h]
  SIZE_T v835; // [rsp+100h] [rbp-8h] BYREF
  void *v836; // [rsp+108h] [rbp+0h] BYREF
  LPVOID v837; // [rsp+110h] [rbp+8h]
  SIZE_T v838; // [rsp+118h] [rbp+10h] BYREF
  void *v839; // [rsp+120h] [rbp+18h] BYREF
  unsigned int v840; // [rsp+128h] [rbp+20h] BYREF
  size_t v841; // [rsp+130h] [rbp+28h] BYREF
  void *v842; // [rsp+138h] [rbp+30h]
  int v843; // [rsp+140h] [rbp+38h]
  void *v844; // [rsp+148h] [rbp+40h] BYREF
  SIZE_T v845; // [rsp+150h] [rbp+48h] BYREF
  unsigned int v846; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v847; // [rsp+15Ch] [rbp+54h] BYREF
  LPVOID v848[2]; // [rsp+160h] [rbp+58h]
  unsigned int v849; // [rsp+170h] [rbp+68h] BYREF
  unsigned int v850; // [rsp+174h] [rbp+6Ch] BYREF
  LPVOID v851[2]; // [rsp+178h] [rbp+70h]
  int v852; // [rsp+188h] [rbp+80h]
  int v853; // [rsp+18Ch] [rbp+84h]
  unsigned int v854; // [rsp+190h] [rbp+88h] BYREF
  unsigned int v855; // [rsp+194h] [rbp+8Ch] BYREF
  int v856; // [rsp+198h] [rbp+90h]
  void *v857; // [rsp+1A0h] [rbp+98h]
  int *v858; // [rsp+1A8h] [rbp+A0h] BYREF
  HMODULE phModule; // [rsp+1C8h] [rbp+C0h] BYREF
  HMODULE hModule; // [rsp+1D0h] [rbp+C8h] BYREF
  _QWORD v861[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v862; // [rsp+1F0h] [rbp+E8h]
  unsigned int v863; // [rsp+1F4h] [rbp+ECh]
  int v864; // [rsp+1F8h] [rbp+F0h]
  _QWORD v865[2]; // [rsp+200h] [rbp+F8h] BYREF
  int v866; // [rsp+210h] [rbp+108h]
  int v867; // [rsp+214h] [rbp+10Ch]
  int v868; // [rsp+218h] [rbp+110h]
  __int64 v869; // [rsp+230h] [rbp+128h]
  __int64 v870; // [rsp+238h] [rbp+130h]
  __int64 v871; // [rsp+250h] [rbp+148h]
  STRSAFE_PCNZWCH psz; // [rsp+260h] [rbp+158h] BYREF
  void *v873; // [rsp+268h] [rbp+160h]

  v1 = 0LL;
  psz = a1;
  v852 = 0;
  v2 = 0;
  v858 = 0LL;
  v856 = 0;
  v3 = 1;
  if ( a1 )
  {
    v853 = 0;
    v6 = 0;
    v836 = 0LL;
    dwBytes_4 = 0;
    v857 = LocalAlloc(0x40u, 4uLL);
    v7 = v857;
    SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v836);
    if ( !v7 )
    {
      v836 = 0LL;
      v8 = -2147024882;
LABEL_878:
      v636 = (int)v819;
LABEL_879:
      SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v836);
      if ( v8 >= 0 )
      {
        if ( v636 == 4 )
        {
          v4 = v856;
          v2 = *v858;
LABEL_5:
          v3 = 1;
          goto LABEL_6;
        }
      }
      else
      {
        switch ( v8 )
        {
          case -805306316:
            v4 = -1073418222;
            goto LABEL_5;
          case -805306139:
          case -1073425151:
            v4 = -1073418201;
            goto LABEL_5;
          case -805306306:
            v4 = -1073418200;
            goto LABEL_5;
        }
        v4 = v8;
        if ( v8 != -2147024774 )
          goto LABEL_5;
      }
      v4 = -1073418210;
      goto LABEL_5;
    }
    v836 = v7;
    Src = 0LL;
    *(_OWORD *)v848 = 0LL;
    v9 = 0LL;
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
    v840 = -1;
    v843 = 56;
    if ( !v11 )
    {
      v8 = -1073741801;
      LODWORD(v811) = -1073741801;
      goto LABEL_512;
    }
    v9 = v11;
    *v11 = xmmword_180147A30[0];
    v11[1] = *((_OWORD *)&_ImageBase + 83876);
    v11[2] = *((_OWORD *)&_ImageBase + 83877);
    v11[3] = *((_OWORD *)&_ImageBase + 83878);
    v11[4] = *((_OWORD *)&_ImageBase + 83879);
    v11[5] = *((_OWORD *)&_ImageBase + 83880);
    v11[6] = *((_OWORD *)&_ImageBase + 83881);
    v11[7] = *((_OWORD *)&_ImageBase + 83882);
    v11[8] = *((_OWORD *)&_ImageBase + 83883);
    v11[9] = *((_OWORD *)&_ImageBase + 83884);
    v12 = GetProcessHeap();
    v13 = HeapAlloc(v12, 8u, 8uLL);
    v14 = (SIZE_T)v13;
    if ( !v13 )
    {
      v8 = -1073741801;
      v6 = 0;
      LODWORD(v811) = -1073741801;
      goto LABEL_512;
    }
    *v13 = qword_180147978;
    v838 = __rdtsc();
    dwBytes = 0;
    v15 = RtlUIntAdd(4LL, 4LL, &v813);
    v16 = 0;
    LODWORD(v811) = v15;
    v8 = v15;
    if ( v15 < 0 )
    {
      v1 = (void *)v14;
    }
    else
    {
      v17 = RtlUIntAdd(0LL, (unsigned int)v813, &dwBytes);
      v1 = (void *)v14;
      v8 = v17 | 0x10000000;
      LODWORD(v811) = v17 | 0x10000000;
      if ( v17 < 0 )
        goto LABEL_39;
      LODWORD(v811) = RtlUIntAdd(v18, 160LL, &v813);
      v8 = (int)v811;
      if ( (int)v811 >= 0 )
      {
        v19 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
        v8 = v19 | 0x10000000;
        LODWORD(v811) = v19 | 0x10000000;
        if ( v19 < 0 )
          goto LABEL_39;
        LODWORD(v811) = RtlUIntAdd(v20, v20 + 4, &v813);
        v8 = (int)v811;
        if ( (int)v811 >= 0 )
        {
          v21 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
          v8 = v21 | 0x10000000;
          LODWORD(v811) = v21 | 0x10000000;
          if ( v21 < 0 )
            goto LABEL_39;
          LODWORD(v811) = RtlUIntAdd(v22, v22 + 4, &v813);
          v8 = (int)v811;
          if ( (int)v811 >= 0 )
          {
            v23 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
            v8 = v23 | 0x10000000;
            LODWORD(v811) = v23 | 0x10000000;
            if ( v23 < 0 )
              goto LABEL_39;
            if ( StringCchLengthW(psz, v24, &pcchLength) < 0 )
              goto LABEL_97;
            v8 = RtlUIntAdd(4LL, (unsigned int)(2 * (pcchLength + 1)), &v829);
            LODWORD(v811) = v8;
            if ( v8 < 0 )
              goto LABEL_39;
            v25 = RtlUIntAdd(dwBytes, (unsigned int)v829, &dwBytes);
            v8 = v25 | 0x10000000;
            LODWORD(v811) = v25 | 0x10000000;
            if ( v25 < 0 )
              goto LABEL_39;
            LODWORD(v811) = RtlUIntAdd(v26, v26, &v813);
            v8 = (int)v811;
            if ( (int)v811 < 0 )
              goto LABEL_502;
            v27 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
            v8 = v29 | v27;
            LODWORD(v811) = v29 | v27;
            if ( (v29 | v27) < 0 )
              goto LABEL_39;
            LODWORD(v811) = RtlUIntAdd(v28, v28, &v813);
            v8 = (int)v811;
            if ( (int)v811 < 0 )
              goto LABEL_502;
            v30 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
            v8 = v31 | v30;
            LODWORD(v811) = v31 | v30;
            if ( (v31 | v30) < 0 )
              goto LABEL_39;
            HIDWORD(Size) = dwBytes;
            v32 = dwBytes;
            v33 = GetProcessHeap();
            v34 = HeapAlloc(v33, 8u, v32);
            if ( !v34 )
            {
              v8 = -1073741801;
LABEL_38:
              LODWORD(v811) = v8;
              goto LABEL_39;
            }
            Src = v34;
            LODWORD(Size) = 0;
            v824 = v14;
            v812 = (SIZE_T)v34;
            v35 = v857;
            v826 = v34;
            LODWORD(v815) = 8;
            v828 = v9;
            v821 = v857;
            LODWORD(v811) = RtlULongLongAdd(v34, 4LL, &v831);
            v8 = (int)v811;
            if ( (int)v811 < 0 )
              goto LABEL_39;
            if ( v812 + 8 > (unsigned __int64)Src + HIDWORD(Size) )
              goto LABEL_495;
            v38 = v831;
            *(_DWORD *)v812 = 4;
            *v38 = 0;
            v39 = Size + 1;
            LODWORD(Size) = Size + 1;
            if ( !v36 )
              goto LABEL_37;
            if ( !Src )
            {
              LODWORD(v811) = RtlUIntAdd(4LL, v36, &v813);
              v8 = (int)v811;
              if ( (int)v811 >= 0 )
              {
                v8 = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
                LODWORD(v811) = v8;
                if ( v8 >= 0 )
                {
                  v40 = Size + 1;
                  LODWORD(Size) = Size + 1;
                  goto LABEL_56;
                }
                goto LABEL_39;
              }
              goto LABEL_96;
            }
            v41 = (unsigned int *)Src;
            v820 = (size_t)Src;
            v812 = (SIZE_T)Src;
            LODWORD(v813) = 0;
            if ( !v39 )
              goto LABEL_51;
            while ( 1 )
            {
              v42 = *v41;
              v826 = v9;
              v8 = RtlUIntAdd(4LL, v42, &v829);
              LODWORD(v811) = v8;
              if ( v8 < 0 )
                goto LABEL_511;
              LODWORD(v811) = RtlULongLongAdd(v820, (unsigned int)v829, &v812);
              v8 = (int)v811;
              if ( (int)v811 < 0 )
              {
                v9 = v826;
                goto LABEL_39;
              }
              LODWORD(v813) = v813 + 1;
              if ( (unsigned int)v813 >= v44 )
                break;
              v41 = (unsigned int *)v812;
              v820 = v812;
            }
            v828 = v9;
            v41 = (unsigned int *)v812;
            v820 = v812;
            v824 = (SIZE_T)v1;
            LODWORD(v815) = v43;
            v821 = v35;
LABEL_51:
            LODWORD(v811) = RtlULongLongAdd(v41, 4LL, &v831);
            v8 = (int)v811;
            if ( (int)v811 < 0 )
              goto LABEL_39;
            if ( v45 + v820 + 4 > (unsigned __int64)Src + HIDWORD(Size) )
              goto LABEL_147;
            *(_DWORD *)v820 = v45;
            memcpy_0(v831, v9, v45);
            v40 = Size + 1;
            LODWORD(Size) = Size + 1;
LABEL_56:
            if ( v1 )
            {
              if ( (_DWORD)v815 )
                goto LABEL_60;
              goto LABEL_37;
            }
            if ( (_DWORD)v815 )
            {
LABEL_37:
              v8 = -1073741811;
              goto LABEL_38;
            }
LABEL_60:
            if ( !Src )
            {
              LODWORD(v811) = RtlUIntAdd(4LL, (unsigned int)v815, &v813);
              v8 = (int)v811;
              if ( (int)v811 >= 0 )
              {
                v8 = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
                LODWORD(v811) = v8;
                if ( v8 >= 0 )
                {
                  v46 = Size + 1;
                  LODWORD(Size) = Size + 1;
                  goto LABEL_75;
                }
                goto LABEL_39;
              }
              goto LABEL_96;
            }
            v47 = (unsigned int *)Src;
            v820 = (size_t)Src;
            LODWORD(v813) = 0;
            if ( v40 )
            {
              do
              {
                v8 = RtlUIntAdd(4LL, *v47, &v829);
                LODWORD(v811) = v8;
                if ( v8 < 0 )
                  goto LABEL_511;
                v49 = RtlULongLongAdd(v48, (unsigned int)v829, &v820);
                v51 = 0;
                LODWORD(v811) = v49;
                v8 = v49;
                if ( v49 < 0 )
                  goto LABEL_508;
                v47 = (unsigned int *)v820;
                LODWORD(v813) = v813 + 1;
              }
              while ( (unsigned int)v813 < v50 );
              v824 = (SIZE_T)v1;
              v828 = v9;
              v821 = v35;
            }
            LODWORD(v811) = RtlULongLongAdd(v47, 4LL, &v831);
            v8 = (int)v811;
            if ( (int)v811 < 0 )
              goto LABEL_39;
            if ( (char *)v53 + v52 + 4 > (char *)Src + HIDWORD(Size) )
              goto LABEL_147;
            *v53 = v52;
            if ( v1 )
              memcpy_0(v831, v1, v52);
            v46 = Size + 1;
            LODWORD(Size) = Size + 1;
LABEL_75:
            if ( Src )
            {
              v61 = (unsigned int *)Src;
              v820 = (size_t)Src;
              LODWORD(v813) = 0;
              if ( v46 )
              {
                do
                {
                  v8 = RtlUIntAdd(4LL, *v61, &v829);
                  LODWORD(v811) = v8;
                  if ( v8 < 0 )
                    goto LABEL_511;
                  LODWORD(v811) = RtlULongLongAdd(v62, (unsigned int)v829, &v820);
                  v8 = (int)v811;
                  if ( (int)v811 < 0 )
                    goto LABEL_39;
                  v61 = (unsigned int *)v820;
                  LODWORD(v813) = v813 + 1;
                }
                while ( (unsigned int)v813 < v63 );
                v824 = (SIZE_T)v1;
                v828 = v9;
                v821 = v35;
              }
              LODWORD(v811) = RtlULongLongAdd(v61, 4LL, &v831);
              v8 = (int)v811;
              if ( (int)v811 < 0 )
              {
LABEL_78:
                if ( v8 < 0 )
                  goto LABEL_39;
LABEL_79:
                if ( StringCchLengthW(psz, v55, &v820) >= 0 )
                {
                  LODWORD(v811) = RtlULongLongAdd(v820, 1LL, &v820);
                  v8 = (int)v811;
                  if ( (int)v811 < 0 )
                    goto LABEL_108;
                  if ( !(2 * (_DWORD)v820) )
                  {
                    v8 = -1073741811;
                    goto LABEL_107;
                  }
                  if ( !Src )
                  {
                    LODWORD(v811) = RtlUIntAdd(4LL, (unsigned int)(2 * v820), &v813);
                    v8 = (int)v811;
                    if ( (int)v811 < 0 )
                      goto LABEL_108;
                    v58 = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
                    v57 = Size;
                    v8 = v58;
                    LODWORD(v811) = v58;
                    if ( v58 < 0 )
                      goto LABEL_108;
                    v57 = Size + 1;
                    LODWORD(Size) = Size + 1;
                    v8 = 0;
                    goto LABEL_107;
                  }
                  v65 = (unsigned int *)Src;
                  v820 = (size_t)Src;
                  LODWORD(v813) = 0;
                  if ( v57 )
                  {
                    do
                    {
                      LODWORD(v811) = RtlUIntAdd(4LL, *v65, &v829);
                      v8 = (int)v811;
                      if ( (int)v811 < 0 )
                        goto LABEL_39;
                      LODWORD(v811) = RtlULongLongAdd(v66, (unsigned int)v829, &v820);
                      v8 = (int)v811;
                      if ( (int)v811 < 0 )
                        goto LABEL_39;
                      v65 = (unsigned int *)v820;
                      LODWORD(v813) = v813 + 1;
                    }
                    while ( (unsigned int)v813 < v67 );
                  }
                  LODWORD(v811) = RtlULongLongAdd(v65, 4LL, &v831);
                  v8 = (int)v811;
                  if ( (int)v811 >= 0 )
                  {
                    if ( (char *)v68 + v69 + 4 > (char *)Src + HIDWORD(Size) )
                    {
                      v8 = -1073741789;
LABEL_107:
                      LODWORD(v811) = v8;
                      goto LABEL_108;
                    }
                    v70 = psz;
                    v71 = v831;
                    *v68 = v69;
                    memcpy_0(v71, v70, (unsigned int)v69);
                    v57 = Size + 1;
                    LODWORD(Size) = Size + 1;
LABEL_108:
                    if ( v8 < 0 )
                      goto LABEL_39;
                    if ( !Src )
                    {
                      LODWORD(v811) = RtlUIntAdd(4LL, 4LL, &v813);
                      v8 = (int)v811;
                      if ( (int)v811 >= 0 )
                      {
                        v72 = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
                        v73 = Size;
                        v8 = v72;
                        LODWORD(v811) = v72;
                        if ( v72 >= 0 )
                        {
                          v73 = Size + 1;
                          LODWORD(Size) = Size + 1;
                          goto LABEL_122;
                        }
                        goto LABEL_121;
                      }
LABEL_96:
                      v6 = 0;
                      goto LABEL_512;
                    }
                    v74 = (unsigned int *)Src;
                    v820 = (size_t)Src;
                    LODWORD(v813) = 0;
                    if ( v57 )
                    {
                      do
                      {
                        v8 = RtlUIntAdd(4LL, *v74, &v829);
                        LODWORD(v811) = v8;
                        if ( v8 < 0 )
                          goto LABEL_511;
                        LODWORD(v811) = RtlULongLongAdd(v75, (unsigned int)v829, &v820);
                        v8 = (int)v811;
                        if ( (int)v811 < 0 )
                          goto LABEL_39;
                        v74 = (unsigned int *)v820;
                        LODWORD(v813) = v813 + 1;
                      }
                      while ( (unsigned int)v813 < v76 );
                      v824 = (SIZE_T)v1;
                      v828 = v9;
                      v821 = v35;
                    }
                    LODWORD(v811) = RtlULongLongAdd(v74, 4LL, &v831);
                    v8 = (int)v811;
                    if ( (int)v811 < 0 )
                    {
LABEL_121:
                      if ( v8 < 0 )
                        goto LABEL_39;
LABEL_122:
                      if ( Src )
                      {
                        v89 = (unsigned int *)Src;
                        v820 = (size_t)Src;
                        LODWORD(v813) = 0;
                        if ( v73 )
                        {
                          do
                          {
                            v8 = RtlUIntAdd(4LL, *v89, &v829);
                            LODWORD(v811) = v8;
                            if ( v8 < 0 )
                              goto LABEL_511;
                            LODWORD(v811) = RtlULongLongAdd(v90, (unsigned int)v829, &v820);
                            v8 = (int)v811;
                            if ( (int)v811 < 0 )
                              goto LABEL_39;
                            v89 = (unsigned int *)v820;
                            LODWORD(v813) = v813 + 1;
                          }
                          while ( (unsigned int)v813 < v91 );
                          v824 = (SIZE_T)v1;
                          v828 = v9;
                          v821 = v35;
                        }
                        LODWORD(v811) = RtlULongLongAdd(v89, 4LL, &v831);
                        v8 = (int)v811;
                        if ( (int)v811 < 0 )
                          goto LABEL_125;
                        if ( v92 + 2 > (unsigned int *)((char *)Src + HIDWORD(Size)) )
                          goto LABEL_147;
                        v88 = v831;
                        *v92 = v79;
                        *v88 = v79;
                      }
                      else
                      {
                        v8 = RtlUIntAdd(4LL, 4LL, &v813);
                        LODWORD(v811) = v8;
                        if ( v8 < 0 )
                          goto LABEL_511;
                        LODWORD(v811) = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
                        v8 = (int)v811;
                        if ( (int)v811 < 0 )
                        {
LABEL_125:
                          v80 = 0LL;
                          if ( v8 < 0 )
                            goto LABEL_39;
LABEL_126:
                          LODWORD(v811) = RtlUIntAdd(v79, v79, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v815) = v813;
                          LODWORD(v811) = RtlUIntAdd(v81, 8LL, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v811) = RtlUIntAdd(v82, (unsigned int)v813, &v815);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_148;
                          LODWORD(v811) = RtlUIntAdd(v83, v83, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v811) = RtlUIntAdd((unsigned int)v815, (unsigned int)v813, &v815);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_148;
                          LODWORD(v811) = RtlUIntAdd(v84, v84, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v811) = RtlUIntAdd((unsigned int)v815, (unsigned int)v813, &v815);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_148;
                          LODWORD(v811) = RtlUIntAdd(v85, v85, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v811) = RtlUIntAdd((unsigned int)v815, (unsigned int)v813, &v815);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_148;
                          LODWORD(v811) = RtlUIntAdd(v86, v86, &v813);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                            goto LABEL_39;
                          LODWORD(v811) = RtlUIntAdd((unsigned int)v815, (unsigned int)v813, &v815);
                          v8 = (int)v811;
                          if ( (int)v811 < 0 )
                          {
LABEL_148:
                            if ( v8 < 0 )
                              goto LABEL_39;
                            v87 = v823;
                          }
                          else
                          {
                            v87 = v815;
                          }
                          dwBytes = v87;
                          LODWORD(v822) = 0;
                          v819 = 0LL;
                          v814 = 0LL;
                          LODWORD(v829) = 0;
                          v816 = 0LL;
                          LODWORD(v815) = 0;
                          v827 = 0LL;
                          v837 = 0LL;
                          v818 = 0LL;
                          pcchLength = __rdtsc();
                          v847 = 8;
                          v94 = RtlUIntAdd(8LL, HIDWORD(Size), &v847);
                          if ( v94 >= 0 )
                          {
                            v95 = (v847 + 7) & 0xFFFFFFF8;
                            if ( v95 < v847 )
                            {
                              v8 = -805306219;
LABEL_496:
                              LODWORD(v811) = v8;
LABEL_497:
                              v6 = v37;
                              goto LABEL_512;
                            }
                            v847 = (v847 + 7) & 0xFFFFFFF8;
                            LODWORD(v813) = v93;
                            v96 = v95;
                            v97 = GetProcessHeap();
                            v80 = (wchar_t *)HeapAlloc(v97, 8u, v96);
                            if ( !v80 )
                            {
                              v8 = -805306345;
                              goto LABEL_38;
                            }
                            *(_DWORD *)v80 = Size;
                            v820 = (size_t)v80;
                            v94 = RtlULongLongAdd(v80, 4LL, &v820);
                            psz = v80;
                            dwBytes = v813;
                            v824 = (SIZE_T)v1;
                            v828 = v9;
                            v821 = v35;
                            if ( v94 < 0 )
                              goto LABEL_158;
                            v98 = v820;
                            *(_DWORD *)v820 = HIDWORD(Size);
                            v99 = RtlULongLongAdd(v98, 4LL, &v820);
                            psz = v80;
                            v94 = v99;
                            dwBytes = v100;
                            v824 = (SIZE_T)v1;
                            v828 = v9;
                            v821 = v35;
                            if ( v99 < 0 )
                            {
LABEL_158:
                              v101 = GetProcessHeap();
                              HeapFree(v101, 0, (LPVOID)psz);
                              v37 = v822;
                              v80 = (wchar_t *)v818;
                            }
                            else
                            {
                              *(_QWORD *)((char *)v80 + v847 - 8) = pcchLength;
                              memcpy_0((void *)v820, Src, HIDWORD(Size));
                              v37 = v847;
                              LODWORD(v822) = v847;
                              dwBytes = v813;
                              v818 = v80;
                              v824 = (SIZE_T)v1;
                              v828 = v9;
                              v821 = v35;
                            }
                          }
                          v8 = v94 | 0x10000000;
                          LODWORD(v811) = v8;
                          if ( v8 < 0 )
                            goto LABEL_259;
                          v826 = 0LL;
                          if ( !v80 )
                          {
                            v8 = -805306355;
                            goto LABEL_38;
                          }
                          v102 = v37;
                          if ( !v37
                            || (v812 = v37 + 8LL,
                                v103 = MemoryAlloc(v812),
                                v104 = 0,
                                lpMem = v103,
                                (v105 = (size_t)v103) == 0) )
                          {
                            v8 = -805306367;
                            LODWORD(v811) = -805306367;
LABEL_260:
                            v237 = GetProcessHeap();
                            HeapFree(v237, 0, v80);
LABEL_261:
                            v238 = v819;
                            if ( v819 )
                            {
                              pcchLength = *((_QWORD *)v819 + 1);
                              if ( pcchLength )
                              {
                                v239 = GetProcessHeap();
                                HeapFree(v239, 0, (LPVOID)pcchLength);
                                v238[1] = 0LL;
                              }
                              pcchLength = v238[3];
                              if ( pcchLength )
                              {
                                v240 = GetProcessHeap();
                                HeapFree(v240, 0, (LPVOID)pcchLength);
                                v238[3] = 0LL;
                              }
                              pcchLength = v238[5];
                              if ( pcchLength )
                              {
                                v241 = GetProcessHeap();
                                HeapFree(v241, 0, (LPVOID)pcchLength);
                                v238[5] = 0LL;
                              }
                              v242 = GetProcessHeap();
                              HeapFree(v242, 0, v238);
                            }
                            v243 = v814;
                            if ( v814 )
                            {
                              v244 = GetProcessHeap();
                              HeapFree(v244, 0, v243);
                            }
                            v245 = v816;
                            if ( v816 )
                            {
                              v246 = GetProcessHeap();
                              HeapFree(v246, 0, v245);
                            }
                            v247 = v827;
                            if ( v827 )
                            {
                              pcchLength = *((_QWORD *)v827 + 1);
                              if ( pcchLength )
                              {
                                v248 = GetProcessHeap();
                                HeapFree(v248, 0, (LPVOID)pcchLength);
                                v247[1] = 0LL;
                              }
                              pcchLength = v247[3];
                              if ( pcchLength )
                              {
                                v249 = GetProcessHeap();
                                HeapFree(v249, 0, (LPVOID)pcchLength);
                                v247[3] = 0LL;
                              }
                              pcchLength = v247[5];
                              if ( pcchLength )
                              {
                                v250 = GetProcessHeap();
                                HeapFree(v250, 0, (LPVOID)pcchLength);
                                v247[5] = 0LL;
                              }
                              v251 = GetProcessHeap();
                              HeapFree(v251, 0, v247);
                            }
                            v252 = v837;
                            if ( v837 )
                            {
                              v253 = GetProcessHeap();
                              HeapFree(v253, 0, v252);
                            }
                            if ( v8 >= 0 )
                            {
                              if ( !LODWORD(v848[0]) )
                                goto LABEL_445;
                              if ( !v848[1] )
                                goto LABEL_37;
                              pcchLength = (size_t)v848[1];
                              v8 = RtlULongLongAdd(v848[1], 4LL, &pcchLength);
                              LODWORD(v811) = v8;
                              if ( v8 < 0 )
                                goto LABEL_511;
                              v256 = (int *)pcchLength;
                              if ( !v254 )
                                v256 = 0LL;
                              if ( v254 == v255 )
                              {
                                v8 = *v256;
                                LODWORD(v811) = v8;
                                if ( v8 == -805306333 )
                                {
                                  LODWORD(v813) = -2147024774;
                                  goto LABEL_448;
                                }
                                LODWORD(v813) = v8;
                                if ( v8 == -2147024774 || (LODWORD(v813) = v8, v8 >= 0) )
                                {
LABEL_448:
                                  if ( LODWORD(v848[0]) == 6 )
                                  {
                                    if ( v848[1] )
                                    {
                                      v409 = v848[1];
                                      v812 = (SIZE_T)v848[1];
                                      do
                                      {
                                        LODWORD(v811) = RtlULongLongAdd(v409, 4LL, &v812);
                                        v8 = (int)v811;
                                        if ( (int)v811 < 0 )
                                          goto LABEL_497;
                                        LODWORD(v811) = RtlULongLongAdd(v812, v410, &v812);
                                        v8 = (int)v811;
                                        if ( (int)v811 < 0 )
                                          goto LABEL_497;
                                        v409 = (LPVOID)v812;
                                      }
                                      while ( v411 == -1 );
                                      LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                      v8 = (int)v811;
                                      if ( (int)v811 < 0 )
                                        goto LABEL_497;
                                      v413 = (size_t *)v812;
                                      if ( !v412 )
                                        v413 = 0LL;
                                      if ( v412 == 8 )
                                      {
                                        pcchLength = *v413;
                                        if ( !v848[1] )
                                          goto LABEL_494;
                                        v414 = v848[1];
                                        v812 = (SIZE_T)v848[1];
                                        do
                                        {
                                          LODWORD(v811) = RtlULongLongAdd(v414, 4LL, &v812);
                                          v8 = (int)v811;
                                          if ( (int)v811 < 0 )
                                            goto LABEL_497;
                                          LODWORD(v811) = RtlULongLongAdd(v812, v415, &v812);
                                          v8 = (int)v811;
                                          if ( (int)v811 < 0 )
                                            goto LABEL_497;
                                          v414 = (LPVOID)v812;
                                        }
                                        while ( (unsigned int)(v416 + 1) < 2 );
                                        LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                        v8 = (int)v811;
                                        if ( (int)v811 < 0 )
                                          goto LABEL_497;
                                        v419 = (_DWORD *)v812;
                                        if ( !v417 )
                                          v419 = 0LL;
                                        if ( v417 == v418 )
                                        {
                                          LODWORD(v832) = *v419;
                                          if ( !v848[1] )
                                            goto LABEL_494;
                                          v420 = v848[1];
                                          v812 = (SIZE_T)v848[1];
                                          do
                                          {
                                            LODWORD(v811) = RtlULongLongAdd(v420, 4LL, &v812);
                                            v8 = (int)v811;
                                            if ( (int)v811 < 0 )
                                              goto LABEL_497;
                                            LODWORD(v811) = RtlULongLongAdd(v812, v421, &v812);
                                            v8 = (int)v811;
                                            if ( (int)v811 < 0 )
                                              goto LABEL_497;
                                            v420 = (LPVOID)v812;
                                          }
                                          while ( (unsigned int)(v422 + 1) < 3 );
                                          LODWORD(v822) = *(_DWORD *)v812;
                                          LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                          v8 = (int)v811;
                                          if ( (int)v811 < 0 )
                                            goto LABEL_497;
                                          v424 = v812;
                                          if ( !v423 )
                                            v424 = 0LL;
                                          v835 = v424;
                                          if ( !v848[1] )
                                            goto LABEL_494;
                                          v425 = v848[1];
                                          v812 = (SIZE_T)v848[1];
                                          do
                                          {
                                            LODWORD(v811) = RtlULongLongAdd(v425, 4LL, &v812);
                                            v8 = (int)v811;
                                            if ( (int)v811 < 0 )
                                              goto LABEL_497;
                                            LODWORD(v811) = RtlULongLongAdd(v812, v426, &v812);
                                            v8 = (int)v811;
                                            if ( (int)v811 < 0 )
                                              goto LABEL_497;
                                            v425 = (LPVOID)v812;
                                          }
                                          while ( (unsigned int)(v427 + 1) < 4 );
                                          LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                          v8 = (int)v811;
                                          if ( (int)v811 < 0 )
                                            goto LABEL_497;
                                          v430 = (_DWORD *)v812;
                                          if ( !v428 )
                                            v430 = 0LL;
                                          if ( v428 == (_DWORD)v429 )
                                          {
                                            LODWORD(v829) = *v430;
                                            if ( v848[1] )
                                            {
                                              v431 = v848[1];
                                              v812 = (SIZE_T)v848[1];
                                              do
                                              {
                                                LODWORD(v823) = *v431;
                                                v8 = RtlULongLongAdd(v431, v429, &v812);
                                                LODWORD(v811) = v8;
                                                if ( v8 < 0 )
                                                  goto LABEL_511;
                                                v8 = RtlULongLongAdd(v812, (unsigned int)v823, &v812);
                                                LODWORD(v811) = v8;
                                                if ( v8 < 0 )
                                                  goto LABEL_511;
                                                v431 = (_DWORD *)v812;
                                              }
                                              while ( (unsigned int)(v432 + 1) < 5 );
                                              v433 = RtlULongLongAdd(v812, v429, &v812);
                                              LODWORD(v811) = v433;
                                              v8 = v433;
                                              if ( v433 >= 0 )
                                              {
                                                v436 = (unsigned int *)v812;
                                                if ( !v435 )
                                                  v436 = 0LL;
                                                if ( v435 != v434 )
                                                {
                                                  v8 = -1073741789;
LABEL_500:
                                                  LODWORD(v811) = v8;
                                                  goto LABEL_502;
                                                }
                                                if ( v838 != pcchLength )
                                                {
                                                  v8 = -1073425151;
                                                  goto LABEL_500;
                                                }
                                                v51 = *v436;
                                                v853 = (int)v832;
                                                dwBytes_4 = v51;
                                                if ( (unsigned int)v829 > v434 || (unsigned int)v822 > v434 )
                                                {
                                                  v8 = -2147024774;
                                                  LODWORD(v811) = -2147024774;
LABEL_508:
                                                  v6 = v51;
                                                }
                                                else
                                                {
                                                  memcpy_0(v35, (const void *)v835, (unsigned int)v822);
                                                  v6 = dwBytes_4;
                                                  if ( (_DWORD)v813 )
                                                  {
                                                    v8 = v813;
                                                    LODWORD(v811) = v813;
                                                  }
                                                }
LABEL_512:
                                                Size = 0LL;
                                                v437 = Src;
                                                if ( Src )
                                                {
                                                  v438 = GetProcessHeap();
                                                  HeapFree(v438, 0, v437);
                                                  Src = 0LL;
                                                }
                                                v848[0] = 0LL;
                                                v439 = v848[1];
                                                if ( v848[1] )
                                                {
                                                  v440 = GetProcessHeap();
                                                  HeapFree(v440, 0, v439);
                                                  v848[1] = 0LL;
                                                }
                                                if ( v9 )
                                                {
                                                  v441 = GetProcessHeap();
                                                  HeapFree(v441, 0, v9);
                                                }
                                                if ( v1 )
                                                {
                                                  v442 = GetProcessHeap();
                                                  HeapFree(v442, 0, v1);
                                                }
                                                v443 = 0LL;
                                                if ( v8 < 0 )
                                                {
                                                  v2 = 0;
                                                  goto LABEL_878;
                                                }
                                                if ( !v6 )
                                                {
LABEL_695:
                                                  v636 = v853;
                                                  v2 = v852;
                                                  v858 = (int *)v857;
                                                  v836 = 0LL;
                                                  goto LABEL_879;
                                                }
                                                v842 = 0LL;
                                                v444 = 0LL;
                                                *(_OWORD *)v851 = 0LL;
                                                v445 = GetProcessHeap();
                                                v446 = HeapAlloc(v445, 8u, 0xA0uLL);
                                                if ( !v446 )
                                                  goto LABEL_687;
                                                v444 = v446;
                                                *v446 = xmmword_180147A30[0];
                                                v446[1] = xmmword_180147A30[1];
                                                v446[2] = xmmword_180147A30[2];
                                                v446[3] = xmmword_180147A30[3];
                                                v446[4] = xmmword_180147A30[4];
                                                v446[5] = xmmword_180147A30[5];
                                                v446[6] = xmmword_180147A30[6];
                                                v446[7] = xmmword_180147A30[7];
                                                v446[8] = xmmword_180147A30[8];
                                                v446[9] = xmmword_180147A30[9];
                                                v447 = GetProcessHeap();
                                                v448 = HeapAlloc(v447, 8u, 8uLL);
                                                v449 = v448;
                                                if ( !v448 )
                                                  goto LABEL_687;
                                                *v448 = qword_180147978;
                                                v835 = __rdtsc();
                                                LODWORD(v815) = 0;
                                                v443 = v449;
                                                if ( (int)RtlUIntAdd(4LL, 4LL, &v823) < 0 )
                                                  goto LABEL_687;
                                                if ( (int)RtlUIntAdd(0LL, (unsigned int)v823, &v815) < 0 )
                                                  goto LABEL_687;
                                                if ( (int)RtlUIntAdd(4LL, 160LL, &v823) < 0 )
                                                  goto LABEL_687;
                                                v450 = RtlUIntAdd((unsigned int)v815, (unsigned int)v823, &v815);
                                                if ( (v451 | v450) < 0 )
                                                  goto LABEL_687;
                                                if ( (int)RtlUIntAdd(4LL, 8LL, &v823) < 0 )
                                                  goto LABEL_687;
                                                v452 = RtlUIntAdd((unsigned int)v815, (unsigned int)v823, &v815);
                                                if ( (v453 | v452) < 0 )
                                                  goto LABEL_687;
                                                if ( (int)RtlUIntAdd(4LL, 8LL, &v823) < 0 )
                                                  goto LABEL_687;
                                                v454 = RtlUIntAdd((unsigned int)v815, (unsigned int)v823, &v815);
                                                if ( (v455 | v454) < 0 )
                                                  goto LABEL_687;
                                                HIDWORD(v841) = v815;
                                                v456 = v815;
                                                v457 = GetProcessHeap();
                                                v458 = HeapAlloc(v457, 8u, v456);
                                                if ( !v458 )
                                                  goto LABEL_687;
                                                v842 = v458;
                                                LODWORD(v841) = 0;
                                                v824 = (SIZE_T)v449;
                                                LODWORD(v823) = 8;
                                                v820 = (size_t)v458;
                                                v821 = v444;
                                                if ( (int)RtlULongLongAdd(v458, 4LL, &v839) < 0
                                                  || v460 + 2 > (_DWORD *)((char *)v460 + HIDWORD(v841)) )
                                                {
                                                  goto LABEL_687;
                                                }
                                                v461 = v839;
                                                *v460 = 4;
                                                *v461 = 4;
                                                v462 = v841 + 1;
                                                LODWORD(v841) = v841 + 1;
                                                if ( v842 )
                                                {
                                                  v465 = (unsigned int *)v842;
                                                  lpMem = v842;
                                                  LODWORD(v813) = 0;
                                                  if ( v462 )
                                                  {
                                                    while ( (int)RtlUIntAdd(4LL, *v465, &v823) >= 0
                                                         && (int)RtlULongLongAdd(v466, (unsigned int)v823, &lpMem) >= 0 )
                                                    {
                                                      v465 = (unsigned int *)lpMem;
                                                      LODWORD(v813) = v813 + 1;
                                                      v824 = (SIZE_T)v449;
                                                      v821 = v444;
                                                      if ( (unsigned int)v813 >= v467 )
                                                        goto LABEL_543;
                                                    }
                                                    goto LABEL_687;
                                                  }
LABEL_543:
                                                  if ( (int)RtlULongLongAdd(v465, 4LL, &v839) < 0
                                                    || (char *)v468 + v469 + 4 > (char *)v842 + HIDWORD(v841) )
                                                  {
                                                    goto LABEL_687;
                                                  }
                                                  *v468 = v469;
                                                  memcpy_0(v839, v444, v469);
                                                  v464 = v841 + 1;
                                                  v463 = 0LL;
                                                }
                                                else
                                                {
                                                  if ( (int)RtlUIntAdd(4LL, v459, &v823) < 0
                                                    || (int)RtlUIntAdd(
                                                              HIDWORD(v841),
                                                              (unsigned int)v823,
                                                              (char *)&v841 + 4) < 0 )
                                                  {
                                                    goto LABEL_687;
                                                  }
                                                  v464 = v841 + 1;
                                                }
                                                LODWORD(v841) = v464;
                                                if ( !v449 )
                                                  goto LABEL_687;
                                                if ( v842 == v463 )
                                                {
                                                  if ( (int)RtlUIntAdd(4LL, 8LL, &v823) < 0
                                                    || (int)RtlUIntAdd(
                                                              HIDWORD(v841),
                                                              (unsigned int)v823,
                                                              (char *)&v841 + 4) < 0 )
                                                  {
                                                    goto LABEL_687;
                                                  }
                                                }
                                                else
                                                {
                                                  v470 = (unsigned int *)v842;
                                                  lpMem = v842;
                                                  LODWORD(v813) = (_DWORD)v463;
                                                  if ( v464 )
                                                  {
                                                    while ( (int)RtlUIntAdd(4LL, *v470, &v823) >= 0
                                                         && (int)RtlULongLongAdd(v471, (unsigned int)v823, &lpMem) >= 0 )
                                                    {
                                                      v470 = (unsigned int *)lpMem;
                                                      LODWORD(v813) = v813 + 1;
                                                      v824 = (SIZE_T)v449;
                                                      v821 = v444;
                                                      if ( (unsigned int)v813 >= v472 )
                                                        goto LABEL_555;
                                                    }
                                                    goto LABEL_687;
                                                  }
LABEL_555:
                                                  if ( (int)RtlULongLongAdd(v470, 4LL, &v839) < 0
                                                    || v473 + 3 > (_DWORD *)((char *)v842 + HIDWORD(v841)) )
                                                  {
                                                    goto LABEL_687;
                                                  }
                                                  *v473 = 8;
                                                  memcpy_0(v839, v449, 8uLL);
                                                }
                                                v474 = v841 + 1;
                                                LODWORD(v841) = v841 + 1;
                                                if ( v842 )
                                                {
                                                  v475 = (unsigned int *)v842;
                                                  lpMem = v842;
                                                  LODWORD(v813) = 0;
                                                  if ( v474 )
                                                  {
                                                    while ( (int)RtlUIntAdd(4LL, *v475, &v823) >= 0
                                                         && (int)RtlULongLongAdd(v476, (unsigned int)v823, &lpMem) >= 0 )
                                                    {
                                                      v475 = (unsigned int *)lpMem;
                                                      LODWORD(v813) = v813 + 1;
                                                      v824 = (SIZE_T)v449;
                                                      v821 = v444;
                                                      if ( (unsigned int)v813 >= v477 )
                                                        goto LABEL_566;
                                                    }
                                                    goto LABEL_687;
                                                  }
LABEL_566:
                                                  if ( (int)RtlULongLongAdd(v475, 4LL, &v839) < 0
                                                    || v478 + 3 > (_DWORD *)((char *)v842 + HIDWORD(v841)) )
                                                  {
                                                    goto LABEL_687;
                                                  }
                                                  v479 = v839;
                                                  v480 = v835;
                                                  *v478 = 8;
                                                  *v479 = v480;
                                                }
                                                else if ( (int)RtlUIntAdd(4LL, 8LL, &v823) < 0
                                                       || (int)RtlUIntAdd(
                                                                 HIDWORD(v841),
                                                                 (unsigned int)v823,
                                                                 (char *)&v841 + 4) < 0 )
                                                {
                                                  goto LABEL_687;
                                                }
                                                LODWORD(v841) = v841 + 1;
                                                if ( (int)RtlUIntAdd(4LL, 4LL, &v823) < 0 )
                                                  goto LABEL_687;
                                                LODWORD(v813) = v823;
                                                if ( (int)RtlUIntAdd(v481, (unsigned int)(v481 + 4), &v823) < 0
                                                  || (int)RtlUIntAdd(v482, (unsigned int)v823, &v813) < 0 )
                                                {
                                                  goto LABEL_687;
                                                }
                                                LODWORD(v819) = v813;
                                                v483 = 0LL;
                                                v828 = 0LL;
                                                LODWORD(v829) = 0;
                                                v814 = 0LL;
                                                v818 = 0LL;
                                                LODWORD(v822) = 0;
                                                v816 = 0LL;
                                                dwBytes_4 = 0;
                                                v827 = 0LL;
                                                v837 = 0LL;
                                                v844 = (void *)__rdtsc();
                                                v846 = 8;
                                                v484 = RtlUIntAdd(8LL, HIDWORD(v841), &v846);
                                                if ( v484 >= 0 )
                                                {
                                                  v486 = (v846 + 7) & 0xFFFFFFF8;
                                                  if ( v486 < v846 )
                                                    goto LABEL_687;
                                                  v846 = (v846 + 7) & 0xFFFFFFF8;
                                                  v487 = v486;
                                                  v488 = GetProcessHeap();
                                                  v489 = HeapAlloc(v488, 8u, v487);
                                                  v845 = (SIZE_T)v489;
                                                  if ( !v489 )
                                                    goto LABEL_687;
                                                  v836 = v489;
                                                  *v489 = v841;
                                                  v490 = RtlULongLongAdd(v489, 4LL, &v836);
                                                  v835 = v491;
                                                  v484 = v490;
                                                  v824 = (SIZE_T)v443;
                                                  v821 = v444;
                                                  if ( v490 < 0
                                                    || (v492 = v836,
                                                        *(_DWORD *)v836 = HIDWORD(v841),
                                                        v493 = RtlULongLongAdd(v492, 4LL, &v836),
                                                        v835 = v494,
                                                        v484 = v493,
                                                        v824 = (SIZE_T)v443,
                                                        v821 = v444,
                                                        v493 < 0) )
                                                  {
                                                    v495 = GetProcessHeap();
                                                    HeapFree(v495, 0, (LPVOID)v835);
                                                    v485 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_QWORD *)(v846 + v494 - 8) = v844;
                                                    memcpy_0(v836, v842, HIDWORD(v841));
                                                    v483 = (unsigned __int8 *)v845;
                                                    v485 = v846;
                                                    v828 = (void *)v845;
                                                    LODWORD(v829) = v846;
                                                    v824 = (SIZE_T)v443;
                                                    v821 = v444;
                                                  }
                                                }
                                                v496 = v484 | 0x10000000;
                                                if ( v496 < 0 )
                                                  goto LABEL_648;
                                                v826 = 0LL;
                                                if ( v483 )
                                                {
                                                  v497 = v485;
                                                  if ( !v485
                                                    || (lpMem = (void *)(v485 + 8LL),
                                                        (v844 = MemoryAlloc((unsigned __int64)lpMem)) == 0LL) )
                                                  {
                                                    v496 = -805306367;
LABEL_649:
                                                    v599 = GetProcessHeap();
                                                    HeapFree(v599, 0, v483);
LABEL_650:
                                                    v600 = v814;
                                                    if ( v814 )
                                                    {
                                                      v601 = (void *)*((_QWORD *)v814 + 1);
                                                      if ( v601 )
                                                      {
                                                        v602 = GetProcessHeap();
                                                        HeapFree(v602, 0, v601);
                                                        v600[1] = 0LL;
                                                      }
                                                      v603 = (void *)v600[3];
                                                      if ( v603 )
                                                      {
                                                        v604 = GetProcessHeap();
                                                        HeapFree(v604, 0, v603);
                                                        v600[3] = 0LL;
                                                      }
                                                      v605 = (void *)v600[5];
                                                      if ( v605 )
                                                      {
                                                        v606 = GetProcessHeap();
                                                        HeapFree(v606, 0, v605);
                                                        v600[5] = 0LL;
                                                      }
                                                      v607 = GetProcessHeap();
                                                      HeapFree(v607, 0, v600);
                                                    }
                                                    v608 = v818;
                                                    if ( v818 )
                                                    {
                                                      v609 = GetProcessHeap();
                                                      HeapFree(v609, 0, v608);
                                                    }
                                                    v610 = v816;
                                                    if ( v816 )
                                                    {
                                                      v611 = GetProcessHeap();
                                                      HeapFree(v611, 0, v610);
                                                    }
                                                    v612 = v827;
                                                    if ( v827 )
                                                    {
                                                      v613 = (void *)*((_QWORD *)v827 + 1);
                                                      if ( v613 )
                                                      {
                                                        v614 = GetProcessHeap();
                                                        HeapFree(v614, 0, v613);
                                                        v612[1] = 0LL;
                                                      }
                                                      v615 = (void *)v612[3];
                                                      if ( v615 )
                                                      {
                                                        v616 = GetProcessHeap();
                                                        HeapFree(v616, 0, v615);
                                                        v612[3] = 0LL;
                                                      }
                                                      v617 = (void *)v612[5];
                                                      if ( v617 )
                                                      {
                                                        v618 = GetProcessHeap();
                                                        HeapFree(v618, 0, v617);
                                                        v612[5] = 0LL;
                                                      }
                                                      v619 = GetProcessHeap();
                                                      HeapFree(v619, 0, v612);
                                                    }
                                                    v620 = v837;
                                                    if ( v837 )
                                                    {
                                                      v621 = GetProcessHeap();
                                                      HeapFree(v621, 0, v620);
                                                    }
                                                    if ( v496 >= 0 )
                                                    {
                                                      if ( LODWORD(v851[0]) )
                                                      {
                                                        v622 = v851[1];
                                                        if ( v851[1] )
                                                        {
                                                          v838 = (SIZE_T)v851[1];
                                                          if ( (int)RtlULongLongAdd(v851[1], 4LL, &v838) >= 0 )
                                                          {
                                                            v625 = (int *)v838;
                                                            if ( !*v622 )
                                                              v625 = 0LL;
                                                            v444 = v624;
                                                            if ( *v622 == 4 && *v625 >= 0 )
                                                            {
                                                              if ( v622 && LODWORD(v851[0]) > v623 )
                                                              {
                                                                v626 = (SIZE_T)v622;
                                                                v812 = (SIZE_T)v622;
                                                                v627 = 0;
                                                                v444 = v624;
                                                                while ( (int)RtlULongLongAdd(v626, 4LL, &v812) >= 0
                                                                     && (int)RtlULongLongAdd(v812, v628, &v812) >= 0 )
                                                                {
                                                                  v626 = v812;
                                                                  v627 += v629;
                                                                  if ( v627 >= v629 )
                                                                  {
                                                                    RtlULongLongAdd(v812, 4LL, &v812);
                                                                    goto LABEL_687;
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v444 = v624;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_687;
                                                  }
                                                  v498 = 0;
                                                  LOBYTE(v817) = 0;
                                                  v499 = 0LL;
                                                  if ( v497 )
                                                  {
                                                    do
                                                      v498 ^= v483[v499++];
                                                    while ( v499 < v497 );
                                                    LOBYTE(v817) = v498;
                                                  }
                                                  v500 = (SIZE_T)v844;
                                                  v836 = v844;
                                                  v873 = (void *)0xC81ECB17B1B54A58LL;
                                                  LODWORD(v815) = 0;
                                                  v501 = -1;
                                                  v502 = v483;
                                                  LODWORD(v813) = 0;
                                                  v503 = 0;
                                                  v504 = v829 & 7;
                                                  if ( (v829 & 7) != 0 )
                                                  {
                                                    v505 = 0;
                                                    v506 = 0;
                                                    dwBytes = 0;
                                                    v507 = 56;
                                                    do
                                                    {
                                                      v508 = *v502++;
                                                      if ( v505 >= 4 )
                                                        v506 |= v508 << v507;
                                                      else
                                                        v503 |= v508 << (v507 - 32);
                                                      v507 -= 8;
                                                      v505 = dwBytes + 1;
                                                      LODWORD(v813) = v506;
                                                      LODWORD(v815) = v503;
                                                      dwBytes = v505;
                                                    }
                                                    while ( (int)v505 < (int)v504 );
                                                    v509 = v836;
                                                    v503 ^= 0xB17A307A;
                                                    v510 = v506 ^ 0x42F6B18D;
                                                    pcchLength = (size_t)v502;
                                                    v824 = (SIZE_T)v443;
                                                    v511 = 0;
                                                    v821 = v444;
                                                    v512 = v503;
                                                    v828 = v483;
                                                    v513 = v510;
                                                    do
                                                    {
                                                      v838 = (SIZE_T)(v509 + 1);
                                                      if ( v511 >= 4 )
                                                      {
                                                        v513 = __ROL4__(v513, 8);
                                                        v514 = v513;
                                                      }
                                                      else
                                                      {
                                                        v512 = __ROL4__(v512, 8);
                                                        v514 = v512;
                                                      }
                                                      *v509 = v514;
                                                      ++v511;
                                                      v509 = (_BYTE *)v838;
                                                    }
                                                    while ( v511 < (int)v504 );
                                                    v502 = (unsigned __int8 *)pcchLength;
                                                    v500 = v838;
                                                    v836 = (void *)v838;
                                                    v498 = v817;
                                                    if ( v504 <= 4 )
                                                    {
                                                      v501 = 0;
                                                      if ( v504 >= 4 )
                                                        goto LABEL_602;
                                                      v503 = v503 >> (8 * (4 - v504)) << (8 * (4 - v504));
                                                    }
                                                    else
                                                    {
                                                      v501 = v510 >> (8 * (8 - v504)) << (8 * (8 - v504));
                                                    }
                                                    v500 = (SIZE_T)v836;
                                                  }
LABEL_602:
                                                  v838 = (unsigned __int64)(unsigned int)v829 >> 3;
                                                  if ( v838 )
                                                  {
                                                    v515 = v838;
                                                    v516 = (_BYTE *)(v500 + 7);
                                                    v517 = v815;
                                                    v518 = v502 + 2;
                                                    v519 = WORD2(v873);
                                                    LODWORD(v823) = 19032;
                                                    dwBytes = WORD1(v873);
                                                    LODWORD(v832) = HIWORD(v873);
                                                    v520 = v813;
                                                    do
                                                    {
                                                      v521 = v518[1] | ((*v518 | ((*(v518 - 1) | (*(v518 - 2) << 8)) << 8)) << 8);
                                                      v522 = v518[5] | ((v518[4] | ((v518[3] | (v518[2] << 8)) << 8)) << 8);
                                                      v838 = (SIZE_T)(v518 + 8);
                                                      v523 = v522 ^ v501;
                                                      v524 = v503 ^ v521 ^ (v523 - 19032);
                                                      v525 = __ROR4__(v524, 15);
                                                      v526 = HIDWORD(v873) ^ v524;
                                                      v527 = (__ROR4__(v526, 7) + WORD1(v873) * v525) ^ v523;
                                                      v528 = (v519 * __ROR4__(v527 - 1313519016, 9) - __ROR4__(v527, 10)) ^ v526;
                                                      v529 = (__ROL4__(v528, 5) + HIWORD(v873)
                                                                                * __ROL4__(v519 ^ v528, 4)) ^ v527;
                                                      v530 = (HIDWORD(v873) - (v529 ^ 0xB1B54A58)) ^ v528;
                                                      v531 = (WORD1(v873) * (v530 - 19032) - (v530 >> 6)) ^ v529;
                                                      v532 = (19032 * (v519 ^ __ROR4__(v531, 15))) ^ v530;
                                                      v533 = (v519 * (HIWORD(v873) + __ROR4__(~v532, 3))) ^ v531;
                                                      v534 = (v533 - 19032 - HIDWORD(v873)) ^ v532;
                                                      v535 = (dwBytes * ((unsigned int)v832 ^ v534)) ^ __ROR4__(v534, 10) ^ v533;
                                                      v536 = __ROR4__(v535, 3) ^ (v519 * __ROL4__(v535 ^ 0x4A58, 6)) ^ v534;
                                                      v537 = (19032 * (__ROR4__(v536, 15) - HIWORD(v873))) ^ v535;
                                                      v538 = (v537 >> 15) ^ (19032 * __ROL4__(v537 - v519, 3)) ^ (v537 >> 1) ^ (19032 * (HIWORD(v873) ^ v537)) ^ v536;
                                                      v539 = (WORD1(v873) * (v538 - v519) - (v538 >> 13)) ^ v537;
                                                      v540 = __ROR4__(v539, 11) ^ (v519 * __ROR4__(
                                                                                            -1313519016 - v539,
                                                                                            9)) ^ v538;
                                                      v541 = (v540 + 1313519016 - HIWORD(v873)) ^ v539;
                                                      v542 = (19032 * (dwBytes ^ v541) - __ROR4__(v541, 7)) ^ v540;
                                                      v543 = (WORD1(v873) * __ROL4__(HIWORD(v873) ^ v542, 4)
                                                            - __ROR4__(v542, 16)) ^ v541;
                                                      v544 = (__ROR4__(v543, 4) + v519
                                                                                * __ROR4__(-1313519016 - v543, 10)) ^ v542;
                                                      v545 = __ROR4__(v544, 9) ^ (HIWORD(v873)
                                                                                * __ROR4__(v544 + 1313519016, 4)) ^ v543;
                                                      v546 = (19032 * __ROL4__(HIDWORD(v873) ^ v545, 8)
                                                            - __ROL4__(v545, 2)) ^ v544;
                                                      v547 = (WORD1(v873) * __ROR4__(HIDWORD(v873) - v546, 11)
                                                            - __ROR4__(v546, 12)) ^ v545;
                                                      v548 = (v547 >> 8) ^ (v519 * (WORD1(v873) ^ v547)) ^ v546;
                                                      v518 = (unsigned __int8 *)v838;
                                                      v549 = v548 ^ HIDWORD(v873) ^ v547 ^ 0xB1B54A58;
                                                      v550 = v517 ^ v548;
                                                      *(v516 - 4) = v550;
                                                      v551 = v520 ^ v549;
                                                      *v516 = v551;
                                                      v517 = v521;
                                                      v552 = __ROR4__(v550, 8);
                                                      v520 = v522;
                                                      *(v516 - 5) = v552;
                                                      v516 += 8;
                                                      v553 = __ROR4__(v551, 8);
                                                      *(v516 - 9) = v553;
                                                      v554 = __ROR4__(v552, 8);
                                                      *(v516 - 14) = v554;
                                                      v555 = __ROR4__(v553, 8);
                                                      *(v516 - 10) = v555;
                                                      v556 = __ROR4__(v554, 8);
                                                      v557 = __ROR4__(v555, 8);
                                                      *(v516 - 15) = v556;
                                                      *(v516 - 11) = v557;
                                                      v501 = __ROR4__(v557, 8);
                                                      v503 = __ROR4__(v556, 8);
                                                      --v515;
                                                    }
                                                    while ( v515 );
                                                    v498 = v817;
                                                    v8 = (int)v811;
                                                    v444 = v821;
                                                    v443 = (void *)v824;
                                                    v483 = (unsigned __int8 *)v828;
                                                  }
                                                  v558 = v844;
                                                  *(_QWORD *)((char *)v844 + (unsigned int)v829) = v498;
                                                  v871 = 160LL;
                                                  v559 = GetProcessHeap();
                                                  v560 = (unsigned int *)HeapAlloc(v559, 8u, 0x30uLL);
                                                  if ( v560 )
                                                  {
                                                    *v560 = (unsigned int)lpMem;
                                                    v562 = GetProcessHeap();
                                                    v563 = HeapAlloc(v562, 8u, (unsigned int)lpMem);
                                                    if ( !v563 )
                                                      goto LABEL_627;
                                                    *((_QWORD *)v560 + 1) = v563;
                                                    memcpy_0(v563, v558, (unsigned int)lpMem);
                                                    v560[4] = 160;
                                                    v564 = GetProcessHeap();
                                                    v565 = HeapAlloc(v564, 8u, 0xA0uLL);
                                                    if ( !v565 )
                                                      goto LABEL_627;
                                                    *((_QWORD *)v560 + 3) = v565;
                                                    *v565 = xmmword_180147980[0];
                                                    v565[1] = xmmword_180147980[1];
                                                    v565[2] = xmmword_180147980[2];
                                                    v565[3] = xmmword_180147980[3];
                                                    v565[4] = xmmword_180147980[4];
                                                    v565[5] = xmmword_180147980[5];
                                                    v565[6] = xmmword_180147980[6];
                                                    v565[7] = xmmword_180147980[7];
                                                    v565[8] = xmmword_180147980[8];
                                                    v565[9] = xmmword_180147980[9];
                                                    v560[8] = 8;
                                                    v566 = GetProcessHeap();
                                                    v567 = HeapAlloc(v566, 8u, 8uLL);
                                                    v561 = 0;
                                                    if ( v567 )
                                                    {
                                                      *((_QWORD *)v560 + 5) = v567;
                                                      *v567 = qword_180147A20;
                                                      v826 = 0LL;
                                                    }
                                                    else
                                                    {
LABEL_627:
                                                      v561 = -1073741801;
                                                      v838 = *((_QWORD *)v560 + 1);
                                                      if ( v838 )
                                                      {
                                                        v578 = GetProcessHeap();
                                                        HeapFree(v578, 0, (LPVOID)v838);
                                                        *((_QWORD *)v560 + 1) = 0LL;
                                                      }
                                                      v838 = *((_QWORD *)v560 + 3);
                                                      if ( v838 )
                                                      {
                                                        v579 = GetProcessHeap();
                                                        HeapFree(v579, 0, (LPVOID)v838);
                                                        *((_QWORD *)v560 + 3) = 0LL;
                                                      }
                                                      v838 = *((_QWORD *)v560 + 5);
                                                      if ( v838 )
                                                      {
                                                        v580 = GetProcessHeap();
                                                        HeapFree(v580, 0, (LPVOID)v838);
                                                        *((_QWORD *)v560 + 5) = 0LL;
                                                      }
                                                      v581 = GetProcessHeap();
                                                      HeapFree(v581, 0, v560);
                                                      v560 = 0LL;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v561 = -1073741801;
                                                    v560 = 0LL;
                                                  }
                                                  v814 = v560;
                                                  v568 = GetProcessHeap();
                                                  HeapFree(v568, 0, v844);
                                                  v569 = v826;
                                                  if ( v826 )
                                                  {
                                                    v838 = *((_QWORD *)v826 + 1);
                                                    if ( v838 )
                                                    {
                                                      v570 = GetProcessHeap();
                                                      HeapFree(v570, 0, (LPVOID)v838);
                                                      v569 = v826;
                                                      *((_QWORD *)v826 + 1) = 0LL;
                                                    }
                                                    v838 = v569[3];
                                                    if ( v838 )
                                                    {
                                                      v571 = GetProcessHeap();
                                                      HeapFree(v571, 0, (LPVOID)v838);
                                                      v569 = v826;
                                                      *((_QWORD *)v826 + 3) = 0LL;
                                                    }
                                                    v838 = v569[5];
                                                    if ( v838 )
                                                    {
                                                      v572 = GetProcessHeap();
                                                      HeapFree(v572, 0, (LPVOID)v838);
                                                      *((_QWORD *)v826 + 5) = 0LL;
                                                    }
                                                    v573 = GetProcessHeap();
                                                    HeapFree(v573, 0, v826);
                                                    v814 = v560;
                                                  }
                                                  v496 = v561 | 0x10000000;
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v574 = *v560;
                                                  v836 = v560;
                                                  LODWORD(v815) = 4;
                                                  v575 = RtlUIntAdd(4LL, v574, &v815);
                                                  if ( v575 >= 0 )
                                                  {
                                                    v575 = RtlUIntAdd((unsigned int)v815, v576, &v815);
                                                    if ( v575 >= 0 )
                                                    {
                                                      v575 = RtlUIntAdd((unsigned int)v815, v560[4], &v815);
                                                      if ( v575 >= 0 )
                                                      {
                                                        v575 = RtlUIntAdd((unsigned int)v815, v577, &v815);
                                                        if ( v575 >= 0 )
                                                        {
                                                          v575 = RtlUIntAdd((unsigned int)v815, v560[8], &v815);
                                                          if ( v575 >= 0 )
                                                          {
                                                            LODWORD(v813) = v815;
                                                            v582 = v815;
                                                            v583 = GetProcessHeap();
                                                            v584 = HeapAlloc(v583, 8u, v582);
                                                            lpMem = v584;
                                                            if ( !v584 )
                                                              goto LABEL_725;
                                                            psz = (STRSAFE_PCNZWCH)v584;
                                                            *v584 = *(_DWORD *)v836;
                                                            v585 = RtlULongLongAdd(v584, 4LL, &psz);
                                                            v821 = v587;
                                                            v560 = (unsigned int *)v586;
                                                            v814 = v586;
                                                            v575 = v585;
                                                            if ( v585 < 0 )
                                                              goto LABEL_643;
                                                            memcpy_0((void *)psz, v586[1], *(unsigned int *)v586);
                                                            v575 = RtlULongLongAdd(psz, *v560, &psz);
                                                            v821 = lpMem;
                                                            v814 = v560;
                                                            if ( v575 < 0 )
                                                              goto LABEL_643;
                                                            v588 = psz;
                                                            *(_DWORD *)psz = v560[4];
                                                            v589 = RtlULongLongAdd(v588, 4LL, &psz);
                                                            v821 = v590;
                                                            v575 = v589;
                                                            v814 = v560;
                                                            if ( v589 < 0 )
                                                              goto LABEL_643;
                                                            memcpy_0((void *)psz, *((const void **)v560 + 3), v560[4]);
                                                            v575 = RtlULongLongAdd(psz, v560[4], &psz);
                                                            v821 = lpMem;
                                                            v814 = v560;
                                                            if ( v575 < 0 )
                                                              goto LABEL_643;
                                                            v591 = psz;
                                                            *(_DWORD *)psz = v560[8];
                                                            v592 = RtlULongLongAdd(v591, 4LL, &psz);
                                                            v821 = v593;
                                                            v575 = v592;
                                                            v814 = v560;
                                                            if ( v592 < 0
                                                              || (memcpy_0(
                                                                    (void *)psz,
                                                                    *((const void **)v560 + 5),
                                                                    v560[8]),
                                                                  v575 = RtlULongLongAdd(psz, v560[8], &psz),
                                                                  v814 = v560,
                                                                  v821 = lpMem,
                                                                  v575 < 0) )
                                                            {
LABEL_643:
                                                              v594 = GetProcessHeap();
                                                              HeapFree(v594, 0, v821);
                                                            }
                                                            else
                                                            {
                                                              v818 = lpMem;
                                                              LODWORD(v822) = v813;
                                                              v814 = v560;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  v496 = v575 | 0x10000000;
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v849 = 8;
                                                  v595 = RtlUIntAdd(8LL, (unsigned int)v819, &v849);
                                                  v496 = v595 | 0x10000000;
                                                  if ( v595 < 0 )
                                                    goto LABEL_648;
                                                  v598 = (v849 + 7) & 0xFFFFFFF8;
                                                  if ( v598 < v849 )
                                                  {
                                                    v496 = -1073741675;
                                                    goto LABEL_648;
                                                  }
                                                  v854 = (v849 + 7) & 0xFFFFFFF8;
                                                  v818 = v597;
                                                  v814 = v560;
                                                  v496 = RtlUIntAdd(v598, v596, &v854);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v814 = v560;
                                                  v818 = v637;
                                                  if ( !v842 )
                                                    goto LABEL_717;
                                                  v814 = v560;
                                                  v818 = v637;
                                                  if ( (unsigned int)v841 <= 1 )
                                                    goto LABEL_717;
                                                  v638 = v842;
                                                  v812 = (SIZE_T)v842;
                                                  do
                                                  {
                                                    LODWORD(v819) = *v638;
                                                    v496 = RtlULongLongAdd(v638, 4LL, &v812);
                                                    if ( v496 < 0 )
                                                      goto LABEL_648;
                                                    v496 = RtlULongLongAdd(v812, (unsigned int)v819, &v812);
                                                    if ( v496 < 0 )
                                                      goto LABEL_648;
                                                    v638 = (_DWORD *)v812;
                                                  }
                                                  while ( v639 + v640 < v639 );
                                                  LODWORD(v823) = *(_DWORD *)v812;
                                                  v496 = RtlULongLongAdd(v812, 4LL, &v812);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  if ( !v842 || (unsigned int)v841 <= 2 )
                                                  {
LABEL_717:
                                                    v496 = -1073741811;
                                                    goto LABEL_648;
                                                  }
                                                  v641 = v842;
                                                  v812 = (SIZE_T)v842;
                                                  do
                                                  {
                                                    LODWORD(v819) = *v641;
                                                    v496 = RtlULongLongAdd(v641, 4LL, &v812);
                                                    if ( v496 < 0 )
                                                      goto LABEL_648;
                                                    v496 = RtlULongLongAdd(v812, (unsigned int)v819, &v812);
                                                    if ( v496 < 0 )
                                                      goto LABEL_648;
                                                    v641 = (_DWORD *)v812;
                                                  }
                                                  while ( (unsigned int)(v642 + v643) < 2 );
                                                  v496 = RtlULongLongAdd(v812, 4LL, &v812);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  LODWORD(v815) = 4;
                                                  v496 = RtlUIntAdd(4LL, v854, &v815);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v496 = RtlUIntAdd((unsigned int)v815, v644, &v815);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v496 = RtlUIntAdd((unsigned int)v815, (unsigned int)v823, &v815);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v496 = RtlUIntAdd((unsigned int)v815, 4LL, &v815);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  v496 = RtlUIntAdd((unsigned int)v815, v645, &v815);
                                                  if ( v496 < 0 )
                                                    goto LABEL_648;
                                                  dwBytes_4 = v815;
                                                  if ( (unsigned int)v815 > 0x400000 )
                                                  {
                                                    v496 = -2147418113;
                                                    goto LABEL_648;
                                                  }
                                                  psz = (STRSAFE_PCNZWCH)v560;
                                                  v647 = v646;
                                                  v648 = v815;
                                                  v826 = v646;
                                                  v812 = (SIZE_T)v483;
                                                  v819 = v444;
                                                  v873 = v443;
                                                  v649 = GetProcessHeap();
                                                  v650 = HeapAlloc(v649, 8u, v648);
                                                  v820 = (size_t)v650;
                                                  v651 = v650;
                                                  if ( v650 )
                                                  {
                                                    if ( !v647 )
                                                    {
                                                      v496 = -2147024809;
                                                      v816 = v650;
LABEL_733:
                                                      v444 = v819;
LABEL_743:
                                                      v814 = (LPVOID)psz;
                                                      v818 = v826;
                                                      goto LABEL_648;
                                                    }
                                                    v862 = v822;
                                                    v863 = dwBytes_4;
                                                    v861[0] = v647;
                                                    v861[1] = v650;
                                                    v864 = 0;
                                                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                                                    {
                                                      ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation");
                                                      if ( ProcAddress )
                                                      {
                                                        v656 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(
                                                                 134LL,
                                                                 v861);
                                                        v653 = dwBytes_4;
                                                        v496 = v656 | 0x10000000;
                                                        if ( v656 >= 0 )
                                                        {
                                                          v653 = v863;
                                                          v657 = v651;
                                                          v658 = (void *)psz;
                                                          v659 = v483;
                                                          v660 = v826;
                                                          v661 = v443;
                                                          v662 = v819;
                                                          dwBytes_4 = v863;
                                                          goto LABEL_745;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        LastError = GetLastError();
                                                        v496 = LastError;
                                                        if ( LastError > 0 )
                                                          v496 = (unsigned __int16)LastError | 0x80070000;
                                                        v653 = dwBytes_4;
                                                        if ( v496 >= 0 )
                                                          v496 = -2147467259;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v652 = GetLastError();
                                                      v496 = v652;
                                                      if ( v652 > 0 )
                                                        v496 = (unsigned __int16)v652 | 0x80070000;
                                                      v653 = dwBytes_4;
                                                      if ( v496 >= 0 )
                                                        v496 = -2147467259;
                                                    }
                                                    v816 = v651;
                                                    if ( v496 == -805306333 )
                                                    {
                                                      v496 = -2147024774;
                                                      goto LABEL_733;
                                                    }
                                                    v662 = v819;
                                                    v657 = v651;
                                                    v658 = (void *)psz;
                                                    v661 = v443;
                                                    v660 = v826;
                                                    v444 = v819;
                                                    v814 = (LPVOID)psz;
                                                    v659 = v483;
                                                    v818 = v826;
                                                    if ( v496 >= 0 )
                                                    {
LABEL_745:
                                                      lpMem = 0LL;
                                                      dwBytes = 0;
                                                      v832 = v657;
                                                      if ( v653 < 4 )
                                                      {
                                                        v443 = v661;
                                                        v444 = v662;
                                                        v483 = v659;
LABEL_748:
                                                        v814 = v658;
LABEL_750:
                                                        v816 = v657;
                                                        v496 = -805306306;
                                                        v818 = v660;
                                                        goto LABEL_648;
                                                      }
                                                      LODWORD(v829) = *v657;
                                                      v663 = RtlULongLongAdd(v657, 4LL, &v832);
                                                      v443 = v873;
                                                      v664 = v663;
                                                      v444 = v819;
                                                      v665 = 0LL;
                                                      v816 = v666;
                                                      v483 = v667;
                                                      v814 = v658;
                                                      v824 = (SIZE_T)v873;
                                                      v821 = v819;
                                                      v828 = v667;
                                                      v818 = v668;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      v669 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                                                      v670 = (wchar_t *)psz;
                                                      v664 = v669;
                                                      v665 = 0LL;
                                                      v816 = v657;
                                                      v828 = v671;
                                                      v658 = (void *)psz;
                                                      v814 = (LPVOID)psz;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      if ( dwBytes_4 - dwBytes < (unsigned int)v829 )
                                                        goto LABEL_780;
                                                      pcchLength = (size_t)v832;
                                                      v838 = (unsigned int)v829;
                                                      v672 = RtlULongLongAdd(v832, (unsigned int)v829, &v832);
                                                      v658 = (void *)psz;
                                                      v664 = v672;
                                                      v665 = 0LL;
                                                      v816 = v673;
                                                      v814 = (LPVOID)psz;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v828 = v674;
                                                      v818 = v675;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      v664 = RtlUIntAdd(dwBytes, (unsigned int)v829, &dwBytes);
                                                      v816 = v657;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v828 = v676;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v670 = (wchar_t *)v658;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      if ( dwBytes_4 - dwBytes < 4 )
                                                        goto LABEL_780;
                                                      LODWORD(v822) = *(_DWORD *)v832;
                                                      v664 = RtlULongLongAdd(v832, 4LL, &v832);
                                                      v816 = v677;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v828 = v678;
                                                      v818 = v679;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      v664 = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                                      v816 = v657;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v828 = v680;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v670 = (wchar_t *)v658;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      if ( dwBytes_4 - dwBytes < (unsigned int)v822 )
                                                        goto LABEL_780;
                                                      v844 = v832;
                                                      v835 = (unsigned int)v822;
                                                      v681 = RtlULongLongAdd(v832, (unsigned int)v822, &v832);
                                                      v658 = (void *)psz;
                                                      v664 = v681;
                                                      v665 = 0LL;
                                                      v816 = v682;
                                                      v814 = (LPVOID)psz;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v828 = v683;
                                                      v818 = v684;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      v664 = RtlUIntAdd(dwBytes, (unsigned int)v822, &dwBytes);
                                                      v816 = v657;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v828 = v685;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v670 = (wchar_t *)v658;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      if ( dwBytes_4 - dwBytes < 4 )
                                                        goto LABEL_780;
                                                      LODWORD(v813) = *(_DWORD *)v832;
                                                      v664 = RtlULongLongAdd(v832, 4LL, &v832);
                                                      v816 = v686;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v828 = v687;
                                                      v818 = v688;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      v664 = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                                      v816 = v657;
                                                      v665 = 0LL;
                                                      v814 = v658;
                                                      v828 = v689;
                                                      v824 = (SIZE_T)v443;
                                                      v821 = v444;
                                                      v670 = (wchar_t *)v658;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                        goto LABEL_794;
                                                      if ( dwBytes_4 - dwBytes < (unsigned int)v813 )
                                                      {
LABEL_780:
                                                        v814 = v670;
                                                        goto LABEL_750;
                                                      }
                                                      v664 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
                                                      v665 = 0LL;
                                                      v816 = v657;
                                                      v814 = (LPVOID)psz;
                                                      v824 = (SIZE_T)v443;
                                                      v658 = (void *)psz;
                                                      v821 = v444;
                                                      v828 = v690;
                                                      v818 = v660;
                                                      if ( v664 < 0 )
                                                      {
LABEL_794:
                                                        v708 = v665;
                                                        goto LABEL_795;
                                                      }
                                                      if ( dwBytes_4 != dwBytes )
                                                      {
                                                        v814 = (LPVOID)psz;
                                                        goto LABEL_750;
                                                      }
                                                      if ( (unsigned int)(v813 + v822 + v829) + 12LL != dwBytes_4 )
                                                      {
                                                        v658 = (void *)psz;
                                                        goto LABEL_748;
                                                      }
                                                      v691 = GetProcessHeap();
                                                      v692 = HeapAlloc(v691, 8u, 0x30uLL);
                                                      v823 = (size_t)v692;
                                                      if ( !v692 )
                                                      {
                                                        v496 = -805306345;
                                                        v483 = (unsigned __int8 *)v812;
                                                        v816 = (LPVOID)v820;
                                                        goto LABEL_743;
                                                      }
                                                      v664 = 0;
                                                      v483 = (unsigned __int8 *)v812;
                                                      v693 = (wchar_t *)psz;
                                                      v658 = (void *)psz;
                                                      v694 = v826;
                                                      v814 = (LPVOID)psz;
                                                      v818 = v826;
                                                      v828 = (void *)v812;
                                                      v821 = v444;
                                                      v824 = (SIZE_T)v443;
                                                      v816 = (LPVOID)v820;
                                                      if ( pcchLength )
                                                      {
                                                        *(_DWORD *)v692 = v829;
                                                        v695 = GetProcessHeap();
                                                        v696 = HeapAlloc(v695, 8u, v838);
                                                        if ( !v696 )
                                                        {
                                                          v816 = (LPVOID)v820;
                                                          v818 = v826;
                                                          v814 = v658;
                                                          v824 = (SIZE_T)v443;
                                                          v821 = v444;
                                                          v828 = v483;
LABEL_773:
                                                          v664 = -1073741801;
                                                          v697 = v823;
                                                          v838 = *(_QWORD *)(v823 + 8);
                                                          if ( v838 )
                                                          {
                                                            v698 = GetProcessHeap();
                                                            HeapFree(v698, 0, (LPVOID)v838);
                                                            v697 = v823;
                                                            *(_QWORD *)(v823 + 8) = 0LL;
                                                          }
                                                          v838 = *(_QWORD *)(v697 + 24);
                                                          if ( v838 )
                                                          {
                                                            v699 = GetProcessHeap();
                                                            HeapFree(v699, 0, (LPVOID)v838);
                                                            v697 = v823;
                                                            *(_QWORD *)(v823 + 24) = 0LL;
                                                          }
                                                          v838 = *(_QWORD *)(v697 + 40);
                                                          if ( v838 )
                                                          {
                                                            v700 = GetProcessHeap();
                                                            HeapFree(v700, 0, (LPVOID)v838);
                                                            *(_QWORD *)(v823 + 40) = 0LL;
                                                          }
                                                          v701 = GetProcessHeap();
                                                          HeapFree(v701, 0, (LPVOID)v823);
                                                          v665 = (unsigned int *)lpMem;
                                                          goto LABEL_792;
                                                        }
                                                        *(_QWORD *)(v823 + 8) = v696;
                                                        memcpy_0(v696, (const void *)pcchLength, v838);
                                                        v692 = (_QWORD *)v823;
                                                      }
                                                      else
                                                      {
                                                        v816 = (LPVOID)v820;
                                                        *(_DWORD *)v692 = 0;
                                                        v692[1] = 0LL;
                                                        v658 = v693;
                                                        v814 = v693;
                                                        v824 = (SIZE_T)v443;
                                                        v821 = v444;
                                                        v828 = v483;
                                                        v818 = v694;
                                                      }
                                                      v823 = (size_t)v692;
                                                      if ( v844 )
                                                      {
                                                        *((_DWORD *)v692 + 4) = v822;
                                                        v702 = GetProcessHeap();
                                                        v703 = HeapAlloc(v702, 8u, v835);
                                                        if ( !v703 )
                                                          goto LABEL_773;
                                                        *(_QWORD *)(v823 + 24) = v703;
                                                        v664 = 0;
                                                        memcpy_0(v703, v844, v835);
                                                        v692 = (_QWORD *)v823;
                                                        v814 = v658;
                                                        v824 = (SIZE_T)v443;
                                                        v821 = v444;
                                                        v828 = v483;
                                                      }
                                                      else
                                                      {
                                                        *((_DWORD *)v692 + 4) = 0;
                                                        v692[3] = 0LL;
                                                      }
                                                      if ( v832 )
                                                      {
                                                        v704 = (unsigned int)v813;
                                                        *((_DWORD *)v692 + 8) = v813;
                                                        v705 = v704;
                                                        v838 = v704;
                                                        v706 = GetProcessHeap();
                                                        v707 = HeapAlloc(v706, 8u, v705);
                                                        if ( !v707 )
                                                          goto LABEL_773;
                                                        *(_QWORD *)(v823 + 40) = v707;
                                                        v664 = 0;
                                                        memcpy_0(v707, v832, v838);
                                                        v692 = (_QWORD *)v823;
                                                        v814 = v658;
                                                        v824 = (SIZE_T)v443;
                                                        v821 = v444;
                                                        v828 = v483;
                                                      }
                                                      else
                                                      {
                                                        *((_DWORD *)v692 + 8) = 0;
                                                        v692[5] = 0LL;
                                                      }
                                                      v665 = (unsigned int *)v692;
                                                      lpMem = v692;
LABEL_792:
                                                      v836 = v818;
                                                      v838 = (SIZE_T)v816;
                                                      v844 = v444;
                                                      pcchLength = (size_t)v658;
                                                      v708 = 0LL;
                                                      LODWORD(v813) = v664;
                                                      if ( v664 < 0 )
                                                      {
                                                        v816 = (LPVOID)v838;
                                                        v814 = v658;
                                                        v827 = 0LL;
                                                        v824 = (SIZE_T)v443;
                                                        v821 = v444;
                                                        v828 = v483;
                                                        if ( v665 )
                                                        {
                                                          v720 = lpMem;
                                                          v721 = (void *)*((_QWORD *)lpMem + 1);
                                                          if ( v721 )
                                                          {
                                                            v722 = GetProcessHeap();
                                                            HeapFree(v722, 0, v721);
                                                            v720[1] = 0LL;
                                                          }
                                                          v723 = (void *)v720[3];
                                                          if ( v723 )
                                                          {
                                                            v724 = GetProcessHeap();
                                                            HeapFree(v724, 0, v723);
                                                            v720[3] = 0LL;
                                                          }
                                                          v725 = (void *)v720[5];
                                                          if ( v725 )
                                                          {
                                                            v726 = GetProcessHeap();
                                                            HeapFree(v726, 0, v725);
                                                            v720[5] = 0LL;
                                                          }
                                                          v727 = GetProcessHeap();
                                                          HeapFree(v727, 0, v720);
                                                          v708 = 0LL;
                                                          v658 = (void *)pcchLength;
                                                          v664 = v813;
                                                          v816 = (LPVOID)v838;
                                                          v827 = 0LL;
                                                          v444 = v844;
                                                          v818 = v836;
                                                          v814 = (LPVOID)pcchLength;
                                                          v824 = (SIZE_T)v443;
                                                          v821 = v844;
                                                          v828 = v483;
                                                        }
LABEL_795:
                                                        v496 = v664 | 0x10000000;
                                                        if ( v496 < 0 )
                                                          goto LABEL_648;
                                                        if ( !v708
                                                          || (pcchLength = *((_QWORD *)v708 + 1)) == 0
                                                          || !*v708 )
                                                        {
                                                          v496 = -805306355;
                                                          goto LABEL_648;
                                                        }
                                                        v832 = (void *)(*v708 - 8LL);
                                                        v709 = (char)v832;
                                                        v838 = (SIZE_T)MemoryAlloc((unsigned __int64)v832);
                                                        v710 = (_DWORD *)v838;
                                                        if ( !v838 )
                                                          goto LABEL_831;
                                                        v711 = pcchLength;
                                                        v712 = 0;
                                                        psz = (STRSAFE_PCNZWCH)0x7F1137FAB69605ELL;
                                                        v713 = v827;
                                                        lpMem = (void *)(v709 & 7);
                                                        v714 = v838;
                                                        LOBYTE(v817) = 0;
                                                        v820 = pcchLength;
                                                        if ( (v709 & 7) != 0 )
                                                        {
                                                          v840 = 0;
                                                          LODWORD(v829) = 0;
                                                          v715 = 0;
                                                          v716 = 0;
                                                          v717 = (unsigned __int8 *)v820;
                                                          do
                                                          {
                                                            v718 = *v717++;
                                                            v719 = v843;
                                                            if ( (unsigned int)v716 >= 4 )
                                                            {
                                                              v840 |= v718 << v843;
                                                            }
                                                            else
                                                            {
                                                              v719 = v843;
                                                              v715 |= v718 << (v843 - 32);
                                                            }
                                                            ++v716;
                                                            v843 = v719 - 8;
                                                            v728 = (unsigned int)lpMem;
                                                          }
                                                          while ( v716 < (int)lpMem );
                                                          v8 = (int)v811;
                                                          v729 = v840 ^ 0x699A899C;
                                                          v820 = (size_t)v717;
                                                          v730 = v840 ^ 0x699A899C;
                                                          LODWORD(v829) = v715;
                                                          v731 = v715 ^ 0x92F65A5;
                                                          LODWORD(v819) = 0;
                                                          v732 = v715 ^ 0x92F65A5;
                                                          v710 = (_DWORD *)v838;
                                                          v733 = 0;
                                                          v734 = (_BYTE *)v838;
                                                          v814 = v658;
                                                          v824 = (SIZE_T)v443;
                                                          v821 = v444;
                                                          v828 = v483;
                                                          do
                                                          {
                                                            v835 = (SIZE_T)(v734 + 1);
                                                            if ( v733 >= 4 )
                                                            {
                                                              v730 = __ROL4__(v730, 8);
                                                              v735 = v730;
                                                            }
                                                            else
                                                            {
                                                              v732 = __ROL4__(v732, 8);
                                                              v735 = v732;
                                                            }
                                                            *v734 = v735;
                                                            ++v733;
                                                            v734 = (_BYTE *)v835;
                                                          }
                                                          while ( v733 < (int)v728 );
                                                          v712 = v817;
                                                          v714 = v835;
                                                          v658 = v814;
                                                          if ( v728 > 4 )
                                                          {
                                                            v843 = v729 >> (8 * (8 - (_BYTE)lpMem)) << (8 * (8 - (_BYTE)lpMem));
LABEL_822:
                                                            v711 = v820;
                                                            goto LABEL_823;
                                                          }
                                                          v843 = 0;
                                                          if ( v728 >= 4 )
                                                            goto LABEL_822;
                                                          v711 = v820;
                                                          v731 = v731 >> (8 * (4 - (_BYTE)lpMem)) << (8 * (4 - (_BYTE)lpMem));
                                                        }
                                                        else
                                                        {
                                                          LODWORD(v829) = 0;
                                                          v731 = 0;
                                                          v843 = 0;
                                                        }
LABEL_823:
                                                        if ( (unsigned __int64)v832 >> 3 )
                                                        {
                                                          v736 = HIDWORD(psz);
                                                          v737 = (_BYTE *)(v714 + 7);
                                                          v738 = v829;
                                                          v739 = (unsigned __int8 *)(v711 + 2);
                                                          v740 = (unsigned __int64)v832 >> 3;
                                                          LODWORD(v815) = 24670;
                                                          v741 = v843;
                                                          v742 = WORD2(psz);
                                                          do
                                                          {
                                                            v743 = *(v739 - 1) | (*(v739 - 2) << 8);
                                                            v744 = v739[2] << 8;
                                                            v745 = *v739;
                                                            v739 += 8;
                                                            v746 = *(v739 - 7) | ((v745 | (v743 << 8)) << 8);
                                                            v747 = v746 ^ v731;
                                                            v748 = *(v739 - 3) | ((*(v739 - 4) | ((*(v739 - 5) | v744) << 8)) << 8);
                                                            v749 = v736 ^ v747 ^ v748 ^ v741 ^ 0xAB69605E;
                                                            v750 = (__ROL4__(v749, 10)
                                                                  + v742 * __ROL4__(v749 + 1419157410, 5)) ^ v747;
                                                            v751 = (WORD1(psz) * __ROR4__(v750 + v736, 9)
                                                                  - __ROL4__(v750, 2)) ^ v749;
                                                            v752 = (v815 * (v751 - v742) - (v751 >> 13)) ^ v750;
                                                            v753 = (HIWORD(psz) * __ROL4__(WORD1(psz) ^ v752, 6)
                                                                  - __ROL4__(v752, 2)) ^ v751;
                                                            v754 = (v736 - (v753 ^ 0xAB69605E)) ^ v752;
                                                            v755 = (WORD1(psz) * (v742 ^ v754)) ^ __ROR4__(v754, 6) ^ v753;
                                                            v756 = (__ROL4__(v755, 2) + v815 * __ROR4__(v755 + v736, 15)) ^ v754;
                                                            v757 = (HIWORD(psz) * __ROR4__(v756 + 1419157410, 14)
                                                                  - __ROL4__(v756, 8)) ^ v755;
                                                            v758 = __ROR4__(v757, 10) ^ (v742
                                                                                       * __ROR4__(v757 ^ 0xAB69605E, 12)) ^ v756;
                                                            v759 = (v758 >> 10) ^ (WORD1(psz) * (v758 ^ HIWORD(psz))) ^ v757;
                                                            v760 = (HIWORD(psz) * (v815 + __ROR4__(~v759, 5))) ^ v758;
                                                            v761 = v759 ^ (v760 - HIWORD(psz)) ^ 0xAB69605E;
                                                            v762 = ((v761 >> 2) + v742 * __ROL4__(HIWORD(psz) ^ v761, 2)) ^ v760;
                                                            v763 = (__ROL4__(v762, 7)
                                                                  + WORD1(psz) * __ROR4__(v762 - v736, 6)) ^ v761;
                                                            v764 = (v815 * (v742 ^ v763) + __ROR4__(v763, 9)) ^ v762;
                                                            v765 = (__ROL4__(v764, 7)
                                                                  + HIWORD(psz) * __ROL4__(WORD1(psz) ^ v764, 5)) ^ v763;
                                                            v766 = v736 ^ v765 ^ v764 ^ 0xAB69605E;
                                                            v767 = (v742 * (__ROR4__(v766, 3) - WORD1(psz))) ^ v765;
                                                            v768 = (v815 * __ROR4__(v767 - v736, 1) - __ROR4__(v767, 6)) ^ v766;
                                                            v769 = (__ROL4__(v768, 14)
                                                                  + HIWORD(psz) * __ROL4__(v768 - 1419157410, 3)) ^ v767;
                                                            v770 = (v742 * __ROL4__(v769 - 1419157410, 15)
                                                                  - __ROR4__(v769, 14)) ^ v768;
                                                            v771 = (v770 >> 3) ^ (WORD1(psz) * (v815 ^ v770)) ^ v769;
                                                            v772 = v840 ^ v771;
                                                            v840 = v748;
                                                            v773 = v738 ^ __ROL4__(v771, 2) ^ (v815
                                                                                             * __ROL4__(v736 ^ v771, 4));
                                                            v738 = v746;
                                                            v774 = v773 ^ v770;
                                                            *(v737 - 4) = v774;
                                                            *v737 = v772;
                                                            v737 += 8;
                                                            v775 = __ROR4__(v774, 8);
                                                            *(v737 - 13) = v775;
                                                            v776 = __ROR4__(v772, 8);
                                                            *(v737 - 9) = v776;
                                                            v777 = __ROR4__(v775, 8);
                                                            *(v737 - 14) = v777;
                                                            v778 = __ROR4__(v776, 8);
                                                            *(v737 - 10) = v778;
                                                            v779 = __ROR4__(v777, 8);
                                                            v780 = __ROR4__(v778, 8);
                                                            *(v737 - 15) = v779;
                                                            *(v737 - 11) = v780;
                                                            v741 = __ROR4__(v780, 8);
                                                            v731 = __ROR4__(v779, 8);
                                                            --v740;
                                                          }
                                                          while ( v740 );
                                                          v712 = v817;
                                                          v8 = (int)v811;
                                                          v444 = v821;
                                                          v443 = (void *)v824;
                                                          v483 = (unsigned __int8 *)v828;
                                                          v658 = v814;
                                                          v713 = v827;
                                                          v710 = (_DWORD *)v838;
                                                        }
                                                        v781 = 0LL;
                                                        if ( v832 )
                                                        {
                                                          do
                                                            v712 ^= *((_BYTE *)v710 + v781++);
                                                          while ( v781 < (unsigned __int64)v832 );
                                                        }
                                                        v782 = v658;
                                                        v783 = v713;
                                                        v838 = (SIZE_T)v658;
                                                        v814 = v658;
                                                        v784 = v816;
                                                        v873 = v818;
                                                        v827 = v713;
                                                        if ( v712 != *(_QWORD *)((char *)v832 + pcchLength) )
                                                        {
                                                          MemoryFree(v710);
LABEL_831:
                                                          v496 = -805306367;
                                                          v837 = 0LL;
                                                          goto LABEL_648;
                                                        }
                                                        v826 = v710;
                                                        v840 = 0;
                                                        if ( (unsigned int)v832 < 4 )
                                                        {
                                                          v814 = v782;
LABEL_872:
                                                          v837 = v710;
                                                          v827 = v783;
LABEL_873:
                                                          v787 = -1073741762;
                                                          goto LABEL_874;
                                                        }
                                                        LODWORD(v823) = *v710;
                                                        v785 = RtlULongLongAdd(v710, 4LL, &v826);
                                                        v786 = (void *)v838;
                                                        v787 = v785;
                                                        v818 = v873;
                                                        v837 = v788;
                                                        v827 = v789;
                                                        v816 = v784;
                                                        v814 = (LPVOID)v838;
                                                        if ( v785 < 0 )
                                                          goto LABEL_874;
                                                        v790 = RtlUIntAdd(0LL, 4LL, &v840);
                                                        v791 = v873;
                                                        v787 = v790;
                                                        v818 = v873;
                                                        v837 = v710;
                                                        v827 = v783;
                                                        v816 = v784;
                                                        v814 = v786;
                                                        if ( v790 < 0 )
                                                          goto LABEL_874;
                                                        if ( (unsigned int)v832 - v840 < 4 )
                                                          goto LABEL_861;
                                                        LODWORD(v813) = *(_DWORD *)v826;
                                                        v787 = RtlULongLongAdd(v826, 4LL, &v826);
                                                        v837 = v792;
                                                        v818 = v873;
                                                        v827 = v793;
                                                        v816 = v784;
                                                        v814 = v786;
                                                        if ( v787 < 0 )
                                                          goto LABEL_874;
                                                        v794 = RtlUIntAdd(v840, 4LL, &v840);
                                                        v791 = v873;
                                                        v787 = v794;
                                                        v818 = v873;
                                                        v837 = v710;
                                                        v827 = v783;
                                                        v816 = v784;
                                                        v814 = v786;
                                                        if ( v794 < 0 )
                                                          goto LABEL_874;
                                                        if ( (unsigned int)v832 - v840 < (unsigned int)v813 )
                                                        {
LABEL_861:
                                                          v818 = v791;
                                                        }
                                                        else
                                                        {
                                                          v787 = RtlUIntAdd(v840, (unsigned int)v813, &v840);
                                                          v837 = v710;
                                                          v818 = v873;
                                                          v827 = v783;
                                                          v816 = v784;
                                                          v814 = v786;
                                                          if ( v787 < 0 )
                                                            goto LABEL_874;
                                                          v824 = (unsigned int)v813;
                                                          if ( (char *)v710 + (unsigned int)v832 >= (char *)v826 + (unsigned int)v813
                                                            && (unsigned __int64)(unsigned int)v832
                                                             + (char *)v710
                                                             - (unsigned int)v813
                                                             - (_BYTE *)v826 < 8 )
                                                          {
                                                            v837 = v710;
                                                            v828 = 0LL;
                                                            v787 = 0;
                                                            v843 = 0;
                                                            v818 = v873;
                                                            v827 = v783;
                                                            v816 = v784;
                                                            v814 = v786;
                                                            if ( !v826 )
                                                              goto LABEL_858;
                                                            v820 = (size_t)v826;
                                                            v787 = RtlULongLongAdd(v826, (unsigned int)v813, &v821);
                                                            v818 = v873;
                                                            v837 = v795;
                                                            v827 = v796;
                                                            v816 = v784;
                                                            v814 = v786;
                                                            if ( v787 >= 0 )
                                                            {
                                                              v797 = (LPVOID)v820;
                                                              v818 = v873;
                                                              v837 = v795;
                                                              v827 = v796;
                                                              v816 = v784;
                                                              v814 = v786;
                                                              if ( v820 < (unsigned __int64)v821 )
                                                              {
                                                                v827 = v796;
                                                                v798 = (SIZE_T)v784;
                                                                v837 = v795;
                                                                v799 = v795;
                                                                v816 = v784;
                                                                v800 = (void *)v838;
                                                                v814 = (LPVOID)v838;
                                                                v818 = v873;
                                                                while ( 1 )
                                                                {
                                                                  v812 = v798;
                                                                  v787 = RtlULongLongAdd(v797, 4LL, &v838);
                                                                  if ( v787 < 0 )
                                                                    goto LABEL_874;
                                                                  if ( v838 > (unsigned __int64)v821 )
                                                                    goto LABEL_863;
                                                                  v787 = RtlUIntAdd(4LL, *v801, &v819);
                                                                  if ( v787 < 0 )
                                                                    goto LABEL_874;
                                                                  v802 = RtlULongLongAdd(
                                                                           v820,
                                                                           (unsigned int)v819,
                                                                           &v844);
                                                                  v816 = v805;
                                                                  v787 = v802;
                                                                  v837 = v799;
                                                                  v827 = v804;
                                                                  v814 = v800;
                                                                  v818 = v803;
                                                                  if ( v802 < 0 )
                                                                    goto LABEL_874;
                                                                  v797 = v844;
                                                                  v820 = (size_t)v844;
                                                                  v837 = v799;
                                                                  v827 = v804;
                                                                  v814 = v800;
                                                                  v818 = v803;
                                                                  if ( v844 > v821 )
                                                                  {
                                                                    v787 = -1073741811;
                                                                    v816 = (LPVOID)v812;
                                                                    goto LABEL_874;
                                                                  }
                                                                  ++v843;
                                                                  v798 = v812;
                                                                  v816 = (LPVOID)v812;
                                                                  if ( v844 >= v821 )
                                                                  {
                                                                    v837 = v799;
                                                                    v827 = v804;
                                                                    v816 = (LPVOID)v812;
                                                                    v814 = v800;
                                                                    v818 = v803;
                                                                    break;
                                                                  }
                                                                }
                                                              }
                                                              if ( v797 != v821 )
                                                              {
LABEL_863:
                                                                v787 = -1073741811;
                                                                goto LABEL_874;
                                                              }
LABEL_858:
                                                              if ( (_DWORD)v813 )
                                                              {
                                                                v806 = GetProcessHeap();
                                                                v807 = v824;
                                                                v787 = 0;
                                                                v808 = HeapAlloc(v806, 8u, v824);
                                                                if ( !v808 )
                                                                {
                                                                  v787 = -1073741801;
                                                                  goto LABEL_874;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v807 = v824;
                                                                v808 = v828;
                                                              }
                                                              if ( v826 )
                                                                memcpy_0(v808, v826, v807);
                                                              LODWORD(v851[0]) = v843;
                                                              v851[1] = v808;
                                                              if ( v787 < 0 || (_DWORD)v823 == LODWORD(v851[0]) )
                                                                goto LABEL_874;
                                                              goto LABEL_873;
                                                            }
LABEL_874:
                                                            v496 = v787 | 0x10000000;
                                                            goto LABEL_648;
                                                          }
                                                          v818 = v873;
                                                        }
                                                        v814 = v786;
                                                        v816 = v784;
                                                        goto LABEL_872;
                                                      }
                                                      v827 = v665;
                                                      goto LABEL_794;
                                                    }
LABEL_648:
                                                    if ( !v483 )
                                                      goto LABEL_650;
                                                    goto LABEL_649;
                                                  }
LABEL_725:
                                                  v496 = -805306345;
                                                  goto LABEL_648;
                                                }
LABEL_687:
                                                v841 = 0LL;
                                                v630 = v842;
                                                if ( v842 )
                                                {
                                                  v631 = GetProcessHeap();
                                                  HeapFree(v631, 0, v630);
                                                  v630 = 0LL;
                                                  v842 = 0LL;
                                                }
                                                v851[0] = 0LL;
                                                v632 = v851[1];
                                                if ( v851[1] )
                                                {
                                                  v633 = GetProcessHeap();
                                                  HeapFree(v633, 0, v632);
                                                  v851[1] = v630;
                                                }
                                                if ( v444 )
                                                {
                                                  v634 = GetProcessHeap();
                                                  HeapFree(v634, 0, v444);
                                                }
                                                if ( v443 )
                                                {
                                                  v635 = GetProcessHeap();
                                                  HeapFree(v635, 0, v443);
                                                }
                                                goto LABEL_695;
                                              }
                                              LODWORD(v811) = v433;
LABEL_502:
                                              v6 = 0;
                                              goto LABEL_512;
                                            }
LABEL_494:
                                            v8 = -1073741811;
                                            goto LABEL_496;
                                          }
                                        }
                                      }
LABEL_495:
                                      v8 = -1073741789;
                                      goto LABEL_496;
                                    }
                                    goto LABEL_37;
                                  }
LABEL_445:
                                  v8 = -1073425151;
                                  goto LABEL_38;
                                }
LABEL_511:
                                v6 = 0;
                                goto LABEL_512;
                              }
LABEL_147:
                              v8 = -1073741789;
                              goto LABEL_38;
                            }
                            goto LABEL_39;
                          }
                          v106 = 0;
                          LOBYTE(v817) = 0;
                          v107 = 0LL;
                          if ( v102 )
                          {
                            do
                              v106 ^= *((_BYTE *)v80 + v107++);
                            while ( v107 < v102 );
                            LOBYTE(v817) = v106;
                          }
                          v108 = v105;
                          v820 = v105;
                          v109 = -1;
                          v873 = (void *)0xC81ECB17B1B54A58LL;
                          LODWORD(v811) = 0;
                          v110 = (unsigned __int8 *)v80;
                          LODWORD(v813) = 0;
                          v111 = v822 & 7;
                          if ( (v822 & 7) != 0 )
                          {
                            v112 = 0;
                            v113 = 56;
                            v114 = 0;
                            v115 = dwBytes;
                            do
                            {
                              v116 = *v110++;
                              dwBytes = v116;
                              if ( v114 >= 4 )
                              {
                                dwBytes <<= v113;
                                v112 |= dwBytes;
                              }
                              else
                              {
                                dwBytes <<= v113 - 32;
                                v104 |= dwBytes;
                              }
                              ++v114;
                              LODWORD(v811) = v112;
                              v113 -= 8;
                              LODWORD(v813) = v104;
                            }
                            while ( (int)v114 < (int)v111 );
                            v104 ^= 0xB17A307A;
                            dwBytes = v115;
                            v117 = (_BYTE *)v820;
                            v118 = v112 ^ 0x42F6B18D;
                            v818 = v80;
                            LODWORD(v832) = 0;
                            v119 = v104;
                            v106 = v817;
                            v120 = v118;
                            v121 = 0;
                            v835 = (SIZE_T)v110;
                            v824 = (SIZE_T)v1;
                            v828 = v9;
                            v821 = v35;
                            do
                            {
                              pcchLength = (size_t)(v117 + 1);
                              if ( v121 >= 4 )
                              {
                                v120 = __ROL4__(v120, 8);
                                v122 = v120;
                              }
                              else
                              {
                                v119 = __ROL4__(v119, 8);
                                v122 = v119;
                              }
                              *v117 = v122;
                              ++v121;
                              v117 = (_BYTE *)pcchLength;
                            }
                            while ( v121 < (int)v111 );
                            v80 = (wchar_t *)v818;
                            v108 = pcchLength;
                            v110 = (unsigned __int8 *)v835;
                            v820 = pcchLength;
                            if ( v111 <= 4 )
                            {
                              v109 = 0;
                              if ( v111 < 4 )
                              {
                                v104 = v104 >> (8 * (4 - v111)) << (8 * (4 - v111));
                                v108 = v820;
                              }
                            }
                            else
                            {
                              v109 = v118 >> (8 * (8 - v111)) << (8 * (8 - v111));
                              v108 = pcchLength;
                            }
                          }
                          v123 = v822;
                          pcchLength = (unsigned __int64)(unsigned int)v822 >> 3;
                          if ( pcchLength )
                          {
                            v124 = pcchLength;
                            v125 = (_BYTE *)(v108 + 7);
                            v126 = v813;
                            v127 = v110 + 2;
                            v128 = WORD2(v873);
                            LODWORD(v832) = 19032;
                            LODWORD(v823) = WORD1(v873);
                            v129 = (int)v811;
                            do
                            {
                              v130 = v127[1] | ((*v127 | ((*(v127 - 1) | (*(v127 - 2) << 8)) << 8)) << 8);
                              v131 = v127[5] | ((v127[4] | ((v127[3] | (v127[2] << 8)) << 8)) << 8);
                              pcchLength = (size_t)(v127 + 8);
                              v132 = v131 ^ v109;
                              v133 = v104 ^ v130 ^ (v132 - 19032);
                              v134 = __ROR4__(v133, 15);
                              v135 = HIDWORD(v873) ^ v133;
                              v136 = (__ROR4__(v135, 7) + WORD1(v873) * v134) ^ v132;
                              v137 = (v128 * __ROR4__(v136 - 1313519016, 9) - __ROR4__(v136, 10)) ^ v135;
                              v138 = (__ROL4__(v137, 5) + HIWORD(v873) * __ROL4__(v137 ^ v128, 4)) ^ v136;
                              v139 = (HIDWORD(v873) - (v138 ^ 0xB1B54A58)) ^ v137;
                              v140 = (WORD1(v873) * (v139 - 19032) - (v139 >> 6)) ^ v138;
                              v141 = (19032 * (v128 ^ __ROR4__(v140, 15))) ^ v139;
                              v142 = (v128 * (HIWORD(v873) + __ROR4__(~v141, 3))) ^ v140;
                              v143 = (v142 - 19032 - HIDWORD(v873)) ^ v141;
                              v144 = (v823 * (v143 ^ HIWORD(v873))) ^ __ROR4__(v143, 10) ^ v142;
                              v145 = __ROR4__(v144, 3) ^ (v128 * __ROL4__(v144 ^ 0x4A58, 6)) ^ v143;
                              v146 = (19032 * (__ROR4__(v145, 15) - HIWORD(v873))) ^ v144;
                              v147 = (v146 >> 15) ^ (19032 * __ROL4__(v146 - v128, 3)) ^ (v146 >> 1) ^ (19032 * (v146 ^ HIWORD(v873))) ^ v145;
                              v148 = (WORD1(v873) * (v147 - v128) - (v147 >> 13)) ^ v146;
                              v149 = __ROR4__(v148, 11) ^ (v128 * __ROR4__(-1313519016 - v148, 9)) ^ v147;
                              v150 = (v149 + 1313519016 - HIWORD(v873)) ^ v148;
                              v151 = (19032 * (v150 ^ WORD1(v873)) - __ROR4__(v150, 7)) ^ v149;
                              v152 = (WORD1(v873) * __ROL4__(v151 ^ HIWORD(v873), 4) - __ROR4__(v151, 16)) ^ v150;
                              v153 = (__ROR4__(v152, 4) + v128 * __ROR4__(-1313519016 - v152, 10)) ^ v151;
                              v154 = __ROR4__(v153, 9) ^ (HIWORD(v873) * __ROR4__(v153 + 1313519016, 4)) ^ v152;
                              v155 = (19032 * __ROL4__(v154 ^ HIDWORD(v873), 8) - __ROL4__(v154, 2)) ^ v153;
                              v156 = (WORD1(v873) * __ROR4__(HIDWORD(v873) - v155, 11) - __ROR4__(v155, 12)) ^ v154;
                              v157 = (v156 >> 8) ^ (v128 * (v156 ^ WORD1(v873))) ^ v155;
                              v127 = (unsigned __int8 *)pcchLength;
                              v158 = v157 ^ 0xB1B54A58;
                              v159 = v126 ^ v157;
                              *(v125 - 4) = v159;
                              v126 = v130;
                              v160 = v129 ^ HIDWORD(v873) ^ v158 ^ v156;
                              v161 = __ROR4__(v159, 8);
                              *v125 = v160;
                              v129 = v131;
                              *(v125 - 5) = v161;
                              v125 += 8;
                              v162 = __ROR4__(v160, 8);
                              *(v125 - 9) = v162;
                              v163 = __ROR4__(v161, 8);
                              *(v125 - 14) = v163;
                              v164 = __ROR4__(v162, 8);
                              *(v125 - 10) = v164;
                              v165 = __ROR4__(v163, 8);
                              v166 = __ROR4__(v164, 8);
                              *(v125 - 15) = v165;
                              *(v125 - 11) = v166;
                              v109 = __ROR4__(v166, 8);
                              v104 = __ROR4__(v165, 8);
                              --v124;
                            }
                            while ( v124 );
                            v106 = v817;
                            v9 = v828;
                            v1 = (void *)v824;
                            v35 = v821;
                            v80 = (wchar_t *)v818;
                            v123 = v822;
                          }
                          LODWORD(v813) = dwBytes;
                          *(_QWORD *)((char *)lpMem + v123) = v106;
                          v869 = 8LL;
                          v870 = 160LL;
                          v167 = GetProcessHeap();
                          v168 = (wchar_t *)HeapAlloc(v167, 8u, 0x30uLL);
                          psz = v168;
                          if ( !v168 )
                          {
                            v169 = -1073741801;
                            v170 = 0LL;
LABEL_202:
                            v818 = v80;
                            v819 = v170;
                            v189 = GetProcessHeap();
                            HeapFree(v189, 0, lpMem);
                            v190 = v826;
                            if ( v826 )
                            {
                              pcchLength = *((_QWORD *)v826 + 1);
                              if ( pcchLength )
                              {
                                v191 = GetProcessHeap();
                                HeapFree(v191, 0, (LPVOID)pcchLength);
                                v190 = v826;
                                *((_QWORD *)v826 + 1) = 0LL;
                              }
                              pcchLength = v190[3];
                              if ( pcchLength )
                              {
                                v192 = GetProcessHeap();
                                HeapFree(v192, 0, (LPVOID)pcchLength);
                                v190 = v826;
                                *((_QWORD *)v826 + 3) = 0LL;
                              }
                              pcchLength = v190[5];
                              if ( pcchLength )
                              {
                                v193 = GetProcessHeap();
                                HeapFree(v193, 0, (LPVOID)pcchLength);
                                *((_QWORD *)v826 + 5) = 0LL;
                              }
                              v194 = GetProcessHeap();
                              HeapFree(v194, 0, v826);
                              v195 = (unsigned int *)v819;
                              v818 = v80;
                            }
                            else
                            {
                              v195 = (unsigned int *)v819;
                            }
                            v8 = v169 | 0x10000000;
                            v828 = v80;
                            LODWORD(v811) = v8;
                            LODWORD(v822) = dwBytes;
                            v812 = (SIZE_T)v195;
                            if ( v8 >= 0 )
                            {
                              v196 = *v195;
                              v820 = (size_t)v195;
                              dwBytes = 4;
                              v199 = RtlUIntAdd(4LL, v196, &dwBytes);
                              if ( v199 >= 0 )
                              {
                                v199 = RtlUIntAdd(dwBytes, v197, &dwBytes);
                                if ( v199 >= 0 )
                                {
                                  v199 = RtlUIntAdd(dwBytes, *(unsigned int *)(v200 + 16), &dwBytes);
                                  if ( v199 >= 0 )
                                  {
                                    v199 = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                    if ( v199 >= 0 )
                                    {
                                      v199 = RtlUIntAdd(dwBytes, *(unsigned int *)(v201 + 32), &dwBytes);
                                      if ( v199 >= 0 )
                                      {
                                        LODWORD(v813) = dwBytes;
                                        v202 = dwBytes;
                                        v203 = GetProcessHeap();
                                        v204 = HeapAlloc(v203, 8u, v202);
                                        lpMem = v204;
                                        if ( !v204 )
                                          goto LABEL_258;
                                        psz = (STRSAFE_PCNZWCH)v204;
                                        *v204 = *(_DWORD *)v820;
                                        v205 = RtlULongLongAdd(v204, 4LL, &psz);
                                        v80 = (wchar_t *)v828;
                                        v199 = v205;
                                        v824 = v207;
                                        v819 = v206;
                                        dwBytes = v822;
                                        v818 = v828;
                                        if ( v205 < 0 )
                                          goto LABEL_226;
                                        memcpy_0((void *)psz, v206[1], *(unsigned int *)v206);
                                        v199 = RtlULongLongAdd(psz, *(unsigned int *)v820, &psz);
                                        v824 = (SIZE_T)lpMem;
                                        v819 = v208;
                                        dwBytes = v822;
                                        v818 = v80;
                                        if ( v199 < 0 )
                                          goto LABEL_226;
                                        v209 = psz;
                                        *(_DWORD *)psz = v208[4];
                                        v199 = RtlULongLongAdd(v209, 4LL, &psz);
                                        v824 = v211;
                                        v819 = (LPVOID)v210;
                                        dwBytes = v822;
                                        v818 = v80;
                                        if ( v199 < 0 )
                                          goto LABEL_226;
                                        memcpy_0((void *)psz, *(const void **)(v210 + 24), *(unsigned int *)(v210 + 16));
                                        v199 = RtlULongLongAdd(psz, *(unsigned int *)(v820 + 16), &psz);
                                        v824 = (SIZE_T)lpMem;
                                        v819 = v212;
                                        dwBytes = v822;
                                        v818 = v80;
                                        if ( v199 < 0 )
                                          goto LABEL_226;
                                        v213 = psz;
                                        *(_DWORD *)psz = v212[8];
                                        v199 = RtlULongLongAdd(v213, 4LL, &psz);
                                        v824 = v215;
                                        v819 = (LPVOID)v214;
                                        dwBytes = v822;
                                        v818 = v80;
                                        if ( v199 < 0
                                          || (memcpy_0(
                                                (void *)psz,
                                                *(const void **)(v214 + 40),
                                                *(unsigned int *)(v214 + 32)),
                                              v199 = RtlULongLongAdd(psz, *(unsigned int *)(v820 + 32), &psz),
                                              v198 = v822,
                                              v824 = (SIZE_T)lpMem,
                                              v819 = (LPVOID)v812,
                                              dwBytes = v822,
                                              v818 = v80,
                                              v199 < 0) )
                                        {
LABEL_226:
                                          v216 = GetProcessHeap();
                                          HeapFree(v216, 0, (LPVOID)v824);
                                          v198 = dwBytes;
                                        }
                                        else
                                        {
                                          v814 = lpMem;
                                          LODWORD(v829) = v813;
                                          v819 = (LPVOID)v812;
                                          v818 = v80;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              v8 = v199 | 0x10000000;
                              LODWORD(v811) = v8;
                              if ( v8 >= 0 )
                              {
                                v850 = 8;
                                v217 = RtlUIntAdd(8LL, v198, &v850);
                                v8 = v217 | 0x10000000;
                                LODWORD(v811) = v217 | 0x10000000;
                                if ( v217 >= 0 )
                                {
                                  v221 = (v850 + 7) & 0xFFFFFFF8;
                                  if ( v221 < v850 )
                                  {
                                    v8 = -1073741675;
LABEL_381:
                                    LODWORD(v811) = v8;
                                    goto LABEL_259;
                                  }
                                  v855 = (v850 + 7) & 0xFFFFFFF8;
                                  v814 = v220;
                                  v819 = v219;
                                  LODWORD(v811) = RtlUIntAdd(v221, v218, &v855);
                                  v8 = (int)v811;
                                  if ( (int)v811 < 0 )
                                    goto LABEL_259;
                                  v819 = v222;
                                  v814 = v223;
                                  if ( !Src )
                                    goto LABEL_253;
                                  v819 = v222;
                                  v814 = v223;
                                  if ( (unsigned int)Size <= 1 )
                                    goto LABEL_253;
                                  v224 = Src;
                                  v812 = (SIZE_T)Src;
                                  LODWORD(v813) = 0;
                                  v818 = v80;
                                  do
                                  {
                                    LODWORD(v823) = *v224;
                                    LODWORD(v811) = RtlULongLongAdd(v224, 4LL, &v812);
                                    v8 = (int)v811;
                                    if ( (int)v811 < 0 )
                                      goto LABEL_259;
                                    LODWORD(v811) = RtlULongLongAdd(v812, (unsigned int)v823, &v812);
                                    v8 = (int)v811;
                                    if ( (int)v811 < 0 )
                                      goto LABEL_259;
                                    v224 = (_DWORD *)v812;
                                    LODWORD(v813) = v225 + v813;
                                  }
                                  while ( (unsigned int)v813 < v225 );
                                  LODWORD(v832) = *(_DWORD *)v812;
                                  LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                  v8 = (int)v811;
                                  if ( (int)v811 < 0 )
                                    goto LABEL_259;
                                  if ( !Src || (unsigned int)Size <= 2 )
                                  {
LABEL_253:
                                    v8 = -1073741811;
                                    goto LABEL_381;
                                  }
                                  v226 = Src;
                                  v812 = (SIZE_T)Src;
                                  LODWORD(v813) = 0;
                                  do
                                  {
                                    LODWORD(v823) = *v226;
                                    LODWORD(v811) = RtlULongLongAdd(v226, 4LL, &v812);
                                    v8 = (int)v811;
                                    if ( (int)v811 < 0 )
                                      goto LABEL_259;
                                    LODWORD(v811) = RtlULongLongAdd(v812, (unsigned int)v823, &v812);
                                    v8 = (int)v811;
                                    if ( (int)v811 < 0 )
                                      goto LABEL_259;
                                    v226 = (_DWORD *)v812;
                                    LODWORD(v813) = v227 + v813;
                                  }
                                  while ( (unsigned int)v813 < 2 );
                                  LODWORD(v811) = RtlULongLongAdd(v812, 4LL, &v812);
                                  v8 = (int)v811;
                                  if ( (int)v811 >= 0 )
                                  {
                                    dwBytes = 4;
                                    LODWORD(v811) = RtlUIntAdd(4LL, v855, &dwBytes);
                                    v8 = (int)v811;
                                    if ( (int)v811 >= 0 )
                                    {
                                      LODWORD(v811) = RtlUIntAdd(dwBytes, v228, &dwBytes);
                                      v8 = (int)v811;
                                      if ( (int)v811 >= 0 )
                                      {
                                        LODWORD(v811) = RtlUIntAdd(dwBytes, (unsigned int)v832, &dwBytes);
                                        v8 = (int)v811;
                                        if ( (int)v811 >= 0 )
                                        {
                                          LODWORD(v811) = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                          v8 = (int)v811;
                                          if ( (int)v811 >= 0 )
                                          {
                                            LODWORD(v811) = RtlUIntAdd(dwBytes, v229, &dwBytes);
                                            v8 = (int)v811;
                                            if ( (int)v811 >= 0 )
                                            {
                                              LODWORD(v815) = dwBytes;
                                              if ( dwBytes > 0x400000 )
                                              {
                                                v8 = -2147418113;
                                                goto LABEL_381;
                                              }
                                              v826 = v80;
                                              v232 = v231;
                                              v233 = dwBytes;
                                              v812 = v231;
                                              psz = (STRSAFE_PCNZWCH)v35;
                                              v832 = v9;
                                              v873 = v1;
                                              v823 = v230;
                                              v234 = GetProcessHeap();
                                              v235 = HeapAlloc(v234, 8u, v233);
                                              v820 = (size_t)v235;
                                              v236 = v235;
                                              if ( v235 )
                                              {
                                                if ( !v232 )
                                                {
                                                  v8 = -2147024809;
                                                  v816 = v235;
LABEL_300:
                                                  v1 = v873;
LABEL_310:
                                                  v80 = (wchar_t *)v826;
                                                  v819 = (LPVOID)v823;
                                                  v814 = (LPVOID)v812;
                                                  LODWORD(v811) = v8;
                                                  goto LABEL_259;
                                                }
                                                v257 = v815;
                                                v866 = v829;
                                                v867 = v815;
                                                v865[0] = v232;
                                                v865[1] = v235;
                                                v868 = 0;
                                                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                                                {
                                                  v259 = GetProcAddress(phModule, "NtQuerySystemInformation");
                                                  if ( v259 )
                                                  {
                                                    v261 = ((__int64 (__fastcall *)(__int64, _QWORD *))v259)(
                                                             134LL,
                                                             v865);
                                                    LODWORD(v815) = v257;
                                                    v8 = v261 | 0x10000000;
                                                    LODWORD(v811) = v261 | 0x10000000;
                                                    if ( v261 >= 0 )
                                                    {
                                                      v262 = v236;
                                                      v263 = (void *)v812;
                                                      v264 = (wchar_t *)v826;
                                                      v265 = v832;
                                                      v266 = v873;
                                                      v267 = (void *)v823;
                                                      LODWORD(v815) = v867;
                                                      v268 = v35;
                                                      goto LABEL_312;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v260 = GetLastError();
                                                    v8 = v260;
                                                    if ( v260 > 0 )
                                                      v8 = (unsigned __int16)v260 | 0x80070000;
                                                    LODWORD(v815) = v257;
                                                    if ( v8 >= 0 )
                                                      v8 = -2147467259;
                                                    LODWORD(v811) = v8;
                                                  }
                                                }
                                                else
                                                {
                                                  v258 = GetLastError();
                                                  v8 = v258;
                                                  if ( v258 > 0 )
                                                    v8 = (unsigned __int16)v258 | 0x80070000;
                                                  if ( v8 >= 0 )
                                                    v8 = -2147467259;
                                                  LODWORD(v811) = v8;
                                                }
                                                v816 = v236;
                                                if ( v8 == -805306333 )
                                                {
                                                  v9 = v832;
                                                  v8 = -2147024774;
                                                  goto LABEL_300;
                                                }
                                                v267 = (void *)v823;
                                                v262 = v236;
                                                v266 = v873;
                                                v268 = v35;
                                                v265 = v832;
                                                v1 = v873;
                                                v264 = (wchar_t *)v826;
                                                v9 = v832;
                                                v263 = (void *)v812;
                                                v80 = (wchar_t *)v826;
                                                v819 = (LPVOID)v823;
                                                v814 = (LPVOID)v812;
                                                if ( v8 < 0 )
                                                  goto LABEL_259;
LABEL_312:
                                                lpMem = 0LL;
                                                dwBytes = 0;
                                                v811 = v262;
                                                if ( (unsigned int)v815 < 4 )
                                                {
                                                  v819 = v267;
                                                  v1 = v266;
                                                  v9 = v265;
                                                  v35 = v268;
LABEL_315:
                                                  v80 = v264;
LABEL_317:
                                                  v8 = -805306306;
                                                  v816 = v262;
                                                  LODWORD(v811) = -805306306;
                                                  v814 = v263;
                                                  goto LABEL_259;
                                                }
                                                LODWORD(v829) = *v262;
                                                v269 = RtlULongLongAdd(v262, 4LL, &v811);
                                                v1 = v873;
                                                v270 = v269;
                                                v80 = v271;
                                                v9 = v832;
                                                v35 = (void *)psz;
                                                v819 = (LPVOID)v823;
                                                v272 = 0LL;
                                                v816 = v273;
                                                v824 = (SIZE_T)v873;
                                                v828 = v832;
                                                v821 = (LPVOID)psz;
                                                v818 = v271;
                                                v814 = v274;
                                                if ( v270 < 0 )
                                                  goto LABEL_360;
                                                v270 = RtlUIntAdd(0LL, 4LL, &dwBytes);
                                                v816 = v262;
                                                v819 = (LPVOID)v823;
                                                v272 = 0LL;
                                                v824 = (SIZE_T)v1;
                                                v828 = v9;
                                                v821 = v35;
                                                v818 = v264;
                                                v814 = v263;
                                                if ( v270 < 0 )
                                                  goto LABEL_360;
                                                if ( (unsigned int)v815 - dwBytes < (unsigned int)v829 )
                                                  goto LABEL_314;
                                                v844 = v811;
                                                v845 = (unsigned int)v829;
                                                v270 = RtlULongLongAdd(v811, (unsigned int)v829, &v811);
                                                v816 = v275;
                                                v80 = v276;
                                                v819 = (LPVOID)v823;
                                                v272 = 0LL;
                                                v824 = (SIZE_T)v1;
                                                v828 = v9;
                                                v821 = v35;
                                                v818 = v276;
                                                v814 = v277;
                                                if ( v270 < 0 )
                                                  goto LABEL_360;
                                                v270 = RtlUIntAdd(dwBytes, (unsigned int)v829, &dwBytes);
                                                v816 = v262;
                                                v819 = (LPVOID)v823;
                                                v272 = 0LL;
                                                v824 = (SIZE_T)v1;
                                                v828 = v9;
                                                v821 = v35;
                                                v818 = v278;
                                                v814 = v263;
                                                if ( v270 < 0 )
                                                  goto LABEL_360;
                                                if ( (unsigned int)v815 - dwBytes >= 4 )
                                                {
                                                  LODWORD(v822) = *(_DWORD *)v811;
                                                  v270 = RtlULongLongAdd(v811, 4LL, &v811);
                                                  v816 = v279;
                                                  v819 = (LPVOID)v823;
                                                  v272 = 0LL;
                                                  v824 = (SIZE_T)v1;
                                                  v828 = v9;
                                                  v821 = v35;
                                                  v818 = v280;
                                                  v814 = v281;
                                                  if ( v270 < 0 )
                                                    goto LABEL_360;
                                                  v270 = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                                  v816 = v262;
                                                  v819 = (LPVOID)v823;
                                                  v272 = 0LL;
                                                  v824 = (SIZE_T)v1;
                                                  v828 = v9;
                                                  v821 = v35;
                                                  v818 = v264;
                                                  v814 = v263;
                                                  if ( v270 < 0 )
                                                    goto LABEL_360;
                                                  if ( (unsigned int)v815 - dwBytes < (unsigned int)v822 )
                                                    goto LABEL_314;
                                                  pcchLength = (size_t)v811;
                                                  v835 = (unsigned int)v822;
                                                  v270 = RtlULongLongAdd(v811, (unsigned int)v822, &v811);
                                                  v816 = v282;
                                                  v80 = v283;
                                                  v819 = (LPVOID)v823;
                                                  v272 = 0LL;
                                                  v824 = (SIZE_T)v1;
                                                  v828 = v9;
                                                  v821 = v35;
                                                  v818 = v283;
                                                  v814 = v284;
                                                  if ( v270 < 0 )
                                                    goto LABEL_360;
                                                  v270 = RtlUIntAdd(dwBytes, (unsigned int)v822, &dwBytes);
                                                  v816 = v262;
                                                  v819 = (LPVOID)v823;
                                                  v272 = 0LL;
                                                  v824 = (SIZE_T)v1;
                                                  v828 = v9;
                                                  v821 = v35;
                                                  v818 = v285;
                                                  v814 = v263;
                                                  if ( v270 < 0 )
                                                    goto LABEL_360;
                                                  if ( (unsigned int)v815 - dwBytes >= 4 )
                                                  {
                                                    LODWORD(v813) = *(_DWORD *)v811;
                                                    v270 = RtlULongLongAdd(v811, 4LL, &v811);
                                                    v816 = v286;
                                                    v819 = (LPVOID)v823;
                                                    v272 = 0LL;
                                                    v824 = (SIZE_T)v1;
                                                    v828 = v9;
                                                    v821 = v35;
                                                    v818 = v287;
                                                    v814 = v288;
                                                    if ( v270 < 0 )
                                                      goto LABEL_360;
                                                    v270 = RtlUIntAdd(dwBytes, 4LL, &dwBytes);
                                                    v816 = v262;
                                                    v819 = (LPVOID)v823;
                                                    v272 = 0LL;
                                                    v824 = (SIZE_T)v1;
                                                    v828 = v9;
                                                    v821 = v35;
                                                    v818 = v264;
                                                    v814 = v263;
                                                    if ( v270 < 0 )
                                                      goto LABEL_360;
                                                    if ( (unsigned int)v815 - dwBytes >= (unsigned int)v813 )
                                                    {
                                                      v270 = RtlUIntAdd(dwBytes, (unsigned int)v813, &dwBytes);
                                                      v816 = v262;
                                                      v819 = (LPVOID)v823;
                                                      v272 = 0LL;
                                                      v824 = (SIZE_T)v1;
                                                      v828 = v9;
                                                      v821 = v35;
                                                      v80 = v264;
                                                      v818 = v264;
                                                      v814 = v263;
                                                      if ( v270 < 0 )
                                                        goto LABEL_360;
                                                      if ( (_DWORD)v815 == dwBytes
                                                        && (unsigned int)(v813 + v822 + v829) + 12LL == (unsigned int)v815 )
                                                      {
                                                        v289 = GetProcessHeap();
                                                        v290 = HeapAlloc(v289, 8u, 0x30uLL);
                                                        v815 = (SIZE_T)v290;
                                                        if ( !v290 )
                                                        {
                                                          v8 = -805306345;
                                                          v816 = (LPVOID)v820;
                                                          goto LABEL_310;
                                                        }
                                                        v291 = (wchar_t *)v826;
                                                        v270 = 0;
                                                        v80 = (wchar_t *)v826;
                                                        v292 = (void *)v812;
                                                        v819 = (LPVOID)v823;
                                                        v816 = (LPVOID)v820;
                                                        v814 = (LPVOID)v812;
                                                        v818 = v826;
                                                        v821 = v35;
                                                        v828 = v9;
                                                        v824 = (SIZE_T)v1;
                                                        if ( v844 )
                                                        {
                                                          *(_DWORD *)v290 = v829;
                                                          v293 = GetProcessHeap();
                                                          v294 = HeapAlloc(v293, 8u, v845);
                                                          if ( !v294 )
                                                          {
                                                            v816 = (LPVOID)v820;
                                                            v819 = (LPVOID)v823;
                                                            v814 = (LPVOID)v812;
                                                            v824 = (SIZE_T)v1;
                                                            v828 = v9;
                                                            v821 = v35;
                                                            v818 = v80;
LABEL_340:
                                                            v270 = -1073741801;
                                                            v295 = v815;
                                                            pcchLength = *(_QWORD *)(v815 + 8);
                                                            if ( pcchLength )
                                                            {
                                                              v296 = GetProcessHeap();
                                                              HeapFree(v296, 0, (LPVOID)pcchLength);
                                                              v295 = v815;
                                                              *(_QWORD *)(v815 + 8) = 0LL;
                                                            }
                                                            pcchLength = *(_QWORD *)(v295 + 24);
                                                            if ( pcchLength )
                                                            {
                                                              v297 = GetProcessHeap();
                                                              HeapFree(v297, 0, (LPVOID)pcchLength);
                                                              v295 = v815;
                                                              *(_QWORD *)(v815 + 24) = 0LL;
                                                            }
                                                            pcchLength = *(_QWORD *)(v295 + 40);
                                                            if ( pcchLength )
                                                            {
                                                              v298 = GetProcessHeap();
                                                              HeapFree(v298, 0, (LPVOID)pcchLength);
                                                              *(_QWORD *)(v815 + 40) = 0LL;
                                                            }
                                                            v299 = GetProcessHeap();
                                                            HeapFree(v299, 0, (LPVOID)v815);
                                                            v272 = (unsigned int *)lpMem;
                                                            goto LABEL_358;
                                                          }
                                                          *(_QWORD *)(v815 + 8) = v294;
                                                          memcpy_0(v294, v844, v845);
                                                          v290 = (_QWORD *)v815;
                                                        }
                                                        else
                                                        {
                                                          v816 = (LPVOID)v820;
                                                          v300 = (void *)v823;
                                                          *(_DWORD *)v290 = 0;
                                                          v290[1] = 0LL;
                                                          v80 = v291;
                                                          v819 = v300;
                                                          v824 = (SIZE_T)v1;
                                                          v828 = v9;
                                                          v821 = v35;
                                                          v818 = v291;
                                                          v814 = v292;
                                                        }
                                                        v815 = (SIZE_T)v290;
                                                        if ( pcchLength )
                                                        {
                                                          *((_DWORD *)v290 + 4) = v822;
                                                          v301 = GetProcessHeap();
                                                          v302 = HeapAlloc(v301, 8u, v835);
                                                          if ( !v302 )
                                                            goto LABEL_340;
                                                          *(_QWORD *)(v815 + 24) = v302;
                                                          v270 = 0;
                                                          memcpy_0(v302, (const void *)pcchLength, v835);
                                                          v290 = (_QWORD *)v815;
                                                          v824 = (SIZE_T)v1;
                                                          v828 = v9;
                                                          v821 = v35;
                                                          v818 = v80;
                                                        }
                                                        else
                                                        {
                                                          *((_DWORD *)v290 + 4) = 0;
                                                          v290[3] = 0LL;
                                                        }
                                                        if ( v811 )
                                                        {
                                                          v303 = (unsigned int)v813;
                                                          *((_DWORD *)v290 + 8) = v813;
                                                          v304 = v303;
                                                          pcchLength = v303;
                                                          v305 = GetProcessHeap();
                                                          v306 = HeapAlloc(v305, 8u, v304);
                                                          if ( !v306 )
                                                            goto LABEL_340;
                                                          *(_QWORD *)(v815 + 40) = v306;
                                                          v270 = 0;
                                                          memcpy_0(v306, v811, pcchLength);
                                                          v290 = (_QWORD *)v815;
                                                          v824 = (SIZE_T)v1;
                                                          v828 = v9;
                                                          v821 = v35;
                                                          v818 = v80;
                                                        }
                                                        else
                                                        {
                                                          *((_DWORD *)v290 + 8) = 0;
                                                          v290[5] = 0LL;
                                                        }
                                                        v272 = (unsigned int *)v290;
                                                        lpMem = v290;
LABEL_358:
                                                        v835 = (SIZE_T)v819;
                                                        pcchLength = (size_t)v816;
                                                        v826 = v814;
                                                        v812 = (SIZE_T)v80;
                                                        v845 = (SIZE_T)v9;
                                                        v307 = 0LL;
                                                        LODWORD(v813) = v270;
                                                        if ( v270 < 0 )
                                                        {
                                                          v816 = (LPVOID)pcchLength;
                                                          v819 = (LPVOID)v835;
                                                          v827 = 0LL;
                                                          v824 = (SIZE_T)v1;
                                                          v828 = v9;
                                                          v821 = v35;
                                                          v818 = v80;
                                                          if ( v272 )
                                                          {
                                                            v318 = lpMem;
                                                            v319 = (void *)*((_QWORD *)lpMem + 1);
                                                            if ( v319 )
                                                            {
                                                              v320 = GetProcessHeap();
                                                              HeapFree(v320, 0, v319);
                                                              v318[1] = 0LL;
                                                            }
                                                            v321 = (void *)v318[3];
                                                            if ( v321 )
                                                            {
                                                              v322 = GetProcessHeap();
                                                              HeapFree(v322, 0, v321);
                                                              v318[3] = 0LL;
                                                            }
                                                            v323 = (void *)v318[5];
                                                            if ( v323 )
                                                            {
                                                              v324 = GetProcessHeap();
                                                              HeapFree(v324, 0, v323);
                                                              v318[5] = 0LL;
                                                            }
                                                            v325 = GetProcessHeap();
                                                            HeapFree(v325, 0, v318);
                                                            v307 = 0LL;
                                                            v80 = (wchar_t *)v812;
                                                            v270 = v813;
                                                            v816 = (LPVOID)pcchLength;
                                                            v819 = (LPVOID)v835;
                                                            v827 = 0LL;
                                                            v9 = (void *)v845;
                                                            v814 = v826;
                                                            v824 = (SIZE_T)v1;
                                                            v828 = (void *)v845;
                                                            v821 = v35;
                                                            v818 = (LPVOID)v812;
                                                          }
LABEL_361:
                                                          v8 = v270 | 0x10000000;
                                                          LODWORD(v811) = v8;
                                                          if ( v8 < 0 )
                                                            goto LABEL_259;
                                                          if ( !v307
                                                            || (v844 = (void *)*((_QWORD *)v307 + 1)) == 0LL
                                                            || !*v307 )
                                                          {
                                                            v8 = -805306355;
                                                            goto LABEL_381;
                                                          }
                                                          v813 = *v307 - 8LL;
                                                          v308 = v813;
                                                          v309 = MemoryAlloc(v813);
                                                          v835 = (SIZE_T)v309;
                                                          v310 = 0;
                                                          if ( !v309 )
                                                          {
LABEL_400:
                                                            v837 = 0LL;
                                                            v8 = -805306367;
                                                            goto LABEL_381;
                                                          }
                                                          v311 = (size_t)v844;
                                                          v312 = v827;
                                                          v313 = (size_t)v309;
                                                          pcchLength = v308 & 7;
                                                          LOBYTE(v817) = 0;
                                                          psz = (STRSAFE_PCNZWCH)0x7F1137FAB69605ELL;
                                                          v820 = (size_t)v844;
                                                          lpMem = v309;
                                                          if ( (v308 & 7) != 0 )
                                                          {
                                                            dwBytes = 0;
                                                            v314 = 0;
                                                            v315 = (unsigned __int8 *)v820;
                                                            LODWORD(v815) = 56;
                                                            do
                                                            {
                                                              v316 = *v315++;
                                                              LODWORD(v822) = v316;
                                                              v317 = v815;
                                                              if ( dwBytes >= 4 )
                                                              {
                                                                LODWORD(v822) = (_DWORD)v822 << v815;
                                                                v314 |= v822;
                                                              }
                                                              else
                                                              {
                                                                LODWORD(v822) = (_DWORD)v822 << (v815 - 32);
                                                                v310 |= v822;
                                                                v317 = v815;
                                                              }
                                                              ++dwBytes;
                                                              LODWORD(v815) = v317 - 8;
                                                            }
                                                            while ( (int)dwBytes < (int)pcchLength );
                                                            LODWORD(v829) = v314;
                                                            v326 = v314;
                                                            LODWORD(v811) = v310;
                                                            v309 = (_DWORD *)v835;
                                                            v327 = v310 ^ 0x92F65A5;
                                                            v328 = v326 ^ 0x699A899C;
                                                            v820 = (size_t)v315;
                                                            LOBYTE(v310) = 0;
                                                            v329 = 0;
                                                            v330 = v327;
                                                            v331 = pcchLength;
                                                            LODWORD(v823) = 0;
                                                            v332 = (_BYTE *)v835;
                                                            LODWORD(v822) = v328;
                                                            v824 = (SIZE_T)v1;
                                                            v828 = v9;
                                                            v821 = v35;
                                                            v818 = v80;
                                                            do
                                                            {
                                                              pcchLength = (size_t)(v332 + 1);
                                                              if ( v329 >= 4 )
                                                              {
                                                                v328 = __ROL4__(v328, 8);
                                                                v333 = v328;
                                                              }
                                                              else
                                                              {
                                                                v330 = __ROL4__(v330, 8);
                                                                v333 = v330;
                                                              }
                                                              *v332 = v333;
                                                              ++v329;
                                                              v332 = (_BYTE *)pcchLength;
                                                            }
                                                            while ( v329 < (int)v331 );
                                                            v313 = pcchLength;
                                                            v312 = v827;
                                                            lpMem = (void *)pcchLength;
                                                            if ( v331 > 4 )
                                                            {
                                                              v313 = (size_t)lpMem;
                                                              LODWORD(v822) = (unsigned int)v822 >> (8 * (8 - v331)) << (8 * (8 - v331));
LABEL_391:
                                                              v311 = v820;
                                                              goto LABEL_392;
                                                            }
                                                            LODWORD(v822) = 0;
                                                            if ( v331 >= 4 )
                                                              goto LABEL_391;
                                                            v311 = v820;
                                                            v327 = v327 >> (8 * (4 - v331)) << (8 * (4 - v331));
                                                            v313 = (size_t)lpMem;
                                                          }
                                                          else
                                                          {
                                                            v327 = 0;
                                                            LODWORD(v811) = 0;
                                                            LODWORD(v829) = -1;
                                                            LODWORD(v822) = 0;
                                                          }
LABEL_392:
                                                          if ( v813 >> 3 )
                                                          {
                                                            v334 = (_BYTE *)(v313 + 7);
                                                            v335 = v822;
                                                            v336 = (unsigned __int8 *)(v311 + 2);
                                                            v337 = v829;
                                                            v338 = HIDWORD(psz);
                                                            v339 = HIDWORD(psz) ^ 0xAB69605E;
                                                            v340 = v813 >> 3;
                                                            LODWORD(v815) = WORD2(psz);
                                                            LODWORD(v823) = WORD1(psz);
                                                            dwBytes = 24670;
                                                            v341 = (int)v811;
                                                            do
                                                            {
                                                              v342 = *(v336 - 1) | (*(v336 - 2) << 8);
                                                              v343 = v336[2] << 8;
                                                              v344 = *v336;
                                                              v336 += 8;
                                                              v345 = *(v336 - 7) | ((v344 | (v342 << 8)) << 8);
                                                              v346 = v345 ^ v327;
                                                              v347 = *(v336 - 3) | ((*(v336 - 4) | ((*(v336 - 5) | v343) << 8)) << 8);
                                                              v348 = v339 ^ v346 ^ v347 ^ v335;
                                                              v349 = (__ROL4__(v348, 10)
                                                                    + v815 * __ROL4__(v348 + 1419157410, 5)) ^ v346;
                                                              v350 = (WORD1(psz) * __ROR4__(v338 + v349, 9)
                                                                    - __ROL4__(v349, 2)) ^ v348;
                                                              v351 = (dwBytes * (v350 - v815) - (v350 >> 13)) ^ v349;
                                                              v352 = (HIWORD(psz) * __ROL4__(WORD1(psz) ^ v351, 6)
                                                                    - __ROL4__(v351, 2)) ^ v350;
                                                              v353 = (v338 - (v352 ^ 0xAB69605E)) ^ v351;
                                                              v354 = (v823 * (v815 ^ v353)) ^ __ROR4__(v353, 6) ^ v352;
                                                              v355 = (__ROL4__(v354, 2)
                                                                    + dwBytes * __ROR4__(v338 + v354, 15)) ^ v353;
                                                              v356 = (HIWORD(psz) * __ROR4__(v355 + 1419157410, 14)
                                                                    - __ROL4__(v355, 8)) ^ v354;
                                                              v357 = __ROR4__(v356, 10) ^ (v815
                                                                                         * __ROR4__(
                                                                                             v356 ^ 0xAB69605E,
                                                                                             12)) ^ v355;
                                                              v358 = (v357 >> 10) ^ (WORD1(psz) * (HIWORD(psz) ^ v357)) ^ v356;
                                                              v359 = (HIWORD(psz) * (dwBytes + __ROR4__(~v358, 5))) ^ v357;
                                                              v360 = (v359 - HIWORD(psz)) ^ 0xAB69605E ^ v358;
                                                              v361 = ((v360 >> 2)
                                                                    + v815 * __ROL4__(HIWORD(psz) ^ v360, 2)) ^ v359;
                                                              v362 = (__ROL4__(v361, 7)
                                                                    + WORD1(psz) * __ROR4__(v361 - v338, 6)) ^ v360;
                                                              v363 = (dwBytes * (v815 ^ v362) + __ROR4__(v362, 9)) ^ v361;
                                                              v364 = (__ROL4__(v363, 7)
                                                                    + HIWORD(psz) * __ROL4__(WORD1(psz) ^ v363, 5)) ^ v362;
                                                              v365 = v339 ^ v364 ^ v363;
                                                              v366 = (v815 * (__ROR4__(v365, 3) - WORD1(psz))) ^ v364;
                                                              v367 = (dwBytes * __ROR4__(v366 - v338, 1)
                                                                    - __ROR4__(v366, 6)) ^ v365;
                                                              v368 = (__ROL4__(v367, 14)
                                                                    + HIWORD(psz) * __ROL4__(v367 - 1419157410, 3)) ^ v366;
                                                              v369 = (v815 * __ROL4__(v368 - 1419157410, 15)
                                                                    - __ROR4__(v368, 14)) ^ v367;
                                                              v370 = (v369 >> 3) ^ (WORD1(psz) * (dwBytes ^ v369)) ^ v368;
                                                              v371 = v370 ^ v338;
                                                              v372 = v370;
                                                              v373 = v337 ^ v370;
                                                              v337 = v347;
                                                              v374 = v341 ^ __ROL4__(v372, 2) ^ (dwBytes
                                                                                               * __ROL4__(v371, 4));
                                                              v341 = v345;
                                                              v375 = v374 ^ v369;
                                                              *(v334 - 4) = v375;
                                                              *v334 = v373;
                                                              v334 += 8;
                                                              v376 = __ROR4__(v375, 8);
                                                              *(v334 - 13) = v376;
                                                              v377 = __ROR4__(v373, 8);
                                                              *(v334 - 9) = v377;
                                                              v378 = __ROR4__(v376, 8);
                                                              *(v334 - 14) = v378;
                                                              v379 = __ROR4__(v377, 8);
                                                              *(v334 - 10) = v379;
                                                              v380 = __ROR4__(v378, 8);
                                                              v381 = __ROR4__(v379, 8);
                                                              *(v334 - 15) = v380;
                                                              *(v334 - 11) = v381;
                                                              v335 = __ROR4__(v381, 8);
                                                              v327 = __ROR4__(v380, 8);
                                                              --v340;
                                                            }
                                                            while ( v340 );
                                                            LOBYTE(v310) = v817;
                                                            v9 = v828;
                                                            v1 = (void *)v824;
                                                            v35 = v821;
                                                            v80 = (wchar_t *)v818;
                                                            v312 = v827;
                                                            v309 = (_DWORD *)v835;
                                                          }
                                                          for ( i = 0LL; i < v813; ++i )
                                                            LOBYTE(v310) = *((_BYTE *)v309 + i) ^ v310;
                                                          v812 = (SIZE_T)v819;
                                                          v821 = v814;
                                                          psz = v80;
                                                          v823 = (size_t)v816;
                                                          v827 = v312;
                                                          if ( (unsigned __int8)v310 != *(_QWORD *)((char *)v844 + v813) )
                                                          {
                                                            MemoryFree(v309);
                                                            goto LABEL_400;
                                                          }
                                                          v828 = v309;
                                                          LODWORD(v815) = 0;
                                                          if ( (unsigned int)v813 < 4 )
                                                          {
                                                            v383 = -1073741762;
                                                            v819 = (LPVOID)v812;
                                                            v837 = v309;
                                                            v827 = v312;
                                                            goto LABEL_380;
                                                          }
                                                          LODWORD(v832) = *v309;
                                                          v383 = RtlULongLongAdd(v309, 4LL, &v828);
                                                          v819 = (LPVOID)v812;
                                                          v837 = v384;
                                                          v827 = v385;
                                                          v816 = (LPVOID)v823;
                                                          v814 = v821;
                                                          if ( v383 < 0 )
                                                            goto LABEL_380;
                                                          v383 = RtlUIntAdd(0LL, 4LL, &v815);
                                                          v814 = v821;
                                                          v837 = v388;
                                                          v827 = v386;
                                                          v816 = v387;
                                                          v819 = (LPVOID)v812;
                                                          if ( v383 < 0 )
                                                            goto LABEL_380;
                                                          if ( (unsigned int)(v813 - v815) < 4 )
                                                          {
                                                            v816 = v387;
                                                            v819 = (LPVOID)v812;
LABEL_412:
                                                            v383 = -1073741762;
                                                            v814 = v821;
                                                            v827 = v386;
                                                            v837 = v388;
                                                            goto LABEL_380;
                                                          }
                                                          LODWORD(v822) = *(_DWORD *)v828;
                                                          v383 = RtlULongLongAdd(v828, 4LL, &v828);
                                                          v837 = v389;
                                                          v819 = (LPVOID)v812;
                                                          v814 = v821;
                                                          v827 = v390;
                                                          v816 = v391;
                                                          if ( v383 < 0 )
                                                            goto LABEL_380;
                                                          v383 = RtlUIntAdd((unsigned int)v815, 4LL, &v815);
                                                          v814 = v821;
                                                          v837 = v388;
                                                          v827 = v386;
                                                          v816 = v392;
                                                          v819 = (LPVOID)v812;
                                                          if ( v383 < 0 )
                                                            goto LABEL_380;
                                                          if ( (int)v813 - (int)v815 < (unsigned int)v822 )
                                                          {
                                                            v816 = v392;
                                                            v819 = (LPVOID)v812;
                                                          }
                                                          else
                                                          {
                                                            v383 = RtlUIntAdd(
                                                                     (unsigned int)v815,
                                                                     (unsigned int)v822,
                                                                     &v815);
                                                            v80 = (wchar_t *)psz;
                                                            v814 = v821;
                                                            v837 = v388;
                                                            v827 = v386;
                                                            v816 = v393;
                                                            v819 = (LPVOID)v812;
                                                            if ( v383 < 0 )
                                                              goto LABEL_380;
                                                            if ( &v388[(unsigned int)v813] >= (char *)v828
                                                                                            + (unsigned int)v822
                                                              && (unsigned __int64)&v388[(unsigned int)v813
                                                                                       - (_QWORD)v828
                                                                                       - (unsigned int)v822] < 8 )
                                                            {
                                                              v80 = (wchar_t *)psz;
                                                              v383 = 0;
                                                              v816 = (LPVOID)v823;
                                                              v814 = v821;
                                                              v815 = 0LL;
                                                              LODWORD(v813) = 0;
                                                              v837 = v388;
                                                              v827 = v386;
                                                              v819 = (LPVOID)v812;
                                                              v818 = (LPVOID)psz;
                                                              if ( v828 )
                                                              {
                                                                v820 = (size_t)v828;
                                                                v383 = RtlULongLongAdd(v828, (unsigned int)v822, &v829);
                                                                v818 = (LPVOID)psz;
                                                                v814 = v821;
                                                                v837 = v395;
                                                                v827 = v394;
                                                                v816 = (LPVOID)v823;
                                                                v819 = (LPVOID)v812;
                                                                if ( v383 < 0 )
                                                                {
LABEL_379:
                                                                  v80 = (wchar_t *)v818;
LABEL_380:
                                                                  v8 = v383 | 0x10000000;
                                                                  goto LABEL_381;
                                                                }
                                                                v80 = (wchar_t *)psz;
                                                                v814 = v821;
                                                                v837 = v395;
                                                                v827 = v394;
                                                                v816 = (LPVOID)v823;
                                                                v819 = (LPVOID)v812;
                                                                v818 = (LPVOID)psz;
                                                                if ( v820 < v829 )
                                                                {
                                                                  v816 = (LPVOID)v823;
                                                                  v396 = (wchar_t *)v394;
                                                                  v837 = v395;
                                                                  v397 = (void *)v812;
                                                                  v398 = v823;
                                                                  v827 = v396;
                                                                  v399 = v821;
                                                                  v814 = v821;
                                                                  v400 = v820;
                                                                  v819 = (LPVOID)v812;
                                                                  v818 = (LPVOID)psz;
                                                                  while ( 1 )
                                                                  {
                                                                    psz = v396;
                                                                    v844 = v399;
                                                                    v821 = v397;
                                                                    v812 = (SIZE_T)v837;
                                                                    v873 = (void *)v398;
                                                                    v383 = RtlULongLongAdd(v400, 4LL, &v835);
                                                                    if ( v383 < 0 )
                                                                      goto LABEL_379;
                                                                    if ( v835 > v829 )
                                                                      goto LABEL_431;
                                                                    v383 = RtlUIntAdd(4LL, *v401, &v823);
                                                                    if ( v383 < 0 )
                                                                      goto LABEL_380;
                                                                    v383 = RtlULongLongAdd(
                                                                             v820,
                                                                             (unsigned int)v823,
                                                                             &v845);
                                                                    v827 = v402;
                                                                    v816 = v403;
                                                                    v819 = v404;
                                                                    v837 = (LPVOID)v812;
                                                                    v818 = v80;
                                                                    v814 = v844;
                                                                    if ( v383 < 0 )
                                                                      goto LABEL_379;
                                                                    v400 = v845;
                                                                    v405 = v829;
                                                                    v820 = v845;
                                                                    v814 = v844;
                                                                    v837 = (LPVOID)v812;
                                                                    if ( v845 > v829 )
                                                                    {
                                                                      v383 = -1073741811;
                                                                      v816 = v873;
                                                                      v819 = v821;
                                                                      v827 = (LPVOID)psz;
                                                                      goto LABEL_380;
                                                                    }
                                                                    LODWORD(v813) = v813 + 1;
                                                                    v399 = v844;
                                                                    v396 = (wchar_t *)psz;
                                                                    v398 = (size_t)v873;
                                                                    v397 = v821;
                                                                    v827 = (LPVOID)psz;
                                                                    v816 = v873;
                                                                    v819 = v821;
                                                                    v818 = v80;
                                                                    if ( v845 >= v829 )
                                                                    {
                                                                      v837 = (LPVOID)v812;
                                                                      v827 = (LPVOID)psz;
                                                                      v816 = v873;
                                                                      v819 = v821;
                                                                      v818 = v80;
                                                                      v814 = v844;
                                                                      goto LABEL_433;
                                                                    }
                                                                  }
                                                                }
                                                                v400 = v820;
                                                                v405 = v829;
LABEL_433:
                                                                if ( v400 != v405 )
                                                                {
LABEL_431:
                                                                  v383 = -1073741811;
                                                                  goto LABEL_380;
                                                                }
                                                              }
                                                              v406 = v822;
                                                              if ( (_DWORD)v822 )
                                                              {
                                                                v407 = GetProcessHeap();
                                                                v383 = 0;
                                                                v815 = (SIZE_T)HeapAlloc(v407, 8u, (unsigned int)v822);
                                                                v408 = (void *)v815;
                                                                if ( !v815 )
                                                                {
                                                                  v383 = -1073741801;
                                                                  goto LABEL_380;
                                                                }
                                                                v406 = v822;
                                                              }
                                                              else
                                                              {
                                                                v408 = (void *)v815;
                                                              }
                                                              if ( v828 )
                                                                memcpy_0(v408, v828, v406);
                                                              v848[1] = (LPVOID)v815;
                                                              LODWORD(v848[0]) = v813;
                                                              v80 = (wchar_t *)v818;
                                                              if ( (_DWORD)v832 != (_DWORD)v813 )
                                                                v383 = -1073741762;
                                                              goto LABEL_380;
                                                            }
                                                            v816 = (LPVOID)v823;
                                                            v819 = (LPVOID)v812;
                                                          }
                                                          v80 = (wchar_t *)psz;
                                                          goto LABEL_412;
                                                        }
                                                        v827 = v272;
LABEL_360:
                                                        v307 = v272;
                                                        goto LABEL_361;
                                                      }
                                                    }
LABEL_314:
                                                    v819 = (LPVOID)v823;
                                                    goto LABEL_315;
                                                  }
                                                }
                                                v819 = (LPVOID)v823;
                                                goto LABEL_317;
                                              }
LABEL_258:
                                              v80 = (wchar_t *)v818;
                                              v8 = -805306345;
                                              LODWORD(v811) = -805306345;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
LABEL_259:
                            if ( !v80 )
                              goto LABEL_261;
                            goto LABEL_260;
                          }
                          v171 = v813;
                          *(_DWORD *)v168 = v812;
                          dwBytes = v171;
                          v172 = GetProcessHeap();
                          v173 = HeapAlloc(v172, 8u, (unsigned int)v812);
                          if ( v173 )
                          {
                            v175 = psz;
                            *((_QWORD *)psz + 1) = v173;
                            v176 = (void *)*((_QWORD *)v175 + 1);
                            psz = v175;
                            memcpy_0(v176, lpMem, (unsigned int)v812);
                            LODWORD(v813) = v171;
                            v177 = psz;
                            v821 = v80;
                            *((_DWORD *)psz + 4) = 160;
                            v178 = GetProcessHeap();
                            v179 = HeapAlloc(v178, 8u, 0xA0uLL);
                            if ( !v179 )
                            {
LABEL_194:
                              v169 = -1073741801;
                              v183 = psz;
                              pcchLength = *((_QWORD *)psz + 1);
                              if ( pcchLength )
                              {
                                v184 = GetProcessHeap();
                                HeapFree(v184, 0, (LPVOID)pcchLength);
                                v183 = psz;
                                *((_QWORD *)psz + 1) = 0LL;
                              }
                              pcchLength = *((_QWORD *)v183 + 3);
                              if ( pcchLength )
                              {
                                v185 = GetProcessHeap();
                                HeapFree(v185, 0, (LPVOID)pcchLength);
                                v183 = psz;
                                *((_QWORD *)psz + 3) = 0LL;
                              }
                              pcchLength = *((_QWORD *)v183 + 5);
                              if ( pcchLength )
                              {
                                v186 = GetProcessHeap();
                                HeapFree(v186, 0, (LPVOID)pcchLength);
                                *((_QWORD *)psz + 5) = 0LL;
                              }
                              v187 = GetProcessHeap();
                              HeapFree(v187, 0, (LPVOID)psz);
                              v170 = v826;
                              goto LABEL_202;
                            }
                            *((_QWORD *)v177 + 3) = v179;
                            v180 = (_OWORD *)*((_QWORD *)v177 + 3);
                            dwBytes = v813;
                            *v180 = xmmword_180147980[0];
                            v180[1] = xmmword_180147980[1];
                            v180[2] = xmmword_180147980[2];
                            v180[3] = xmmword_180147980[3];
                            v180[4] = xmmword_180147980[4];
                            v180[5] = xmmword_180147980[5];
                            v180[6] = xmmword_180147980[6];
                            v180[7] = xmmword_180147980[7];
                            v180[8] = xmmword_180147980[8];
                            v180[9] = xmmword_180147980[9];
                            *((_DWORD *)v177 + 8) = 8;
                            v181 = GetProcessHeap();
                            v182 = HeapAlloc(v181, 8u, 8uLL);
                            if ( v182 )
                            {
                              *((_QWORD *)v177 + 5) = v182;
                              v188 = psz;
                              v169 = 0;
                              **((_QWORD **)psz + 5) = qword_180147A20;
                              v170 = (void *)v188;
                              v826 = 0LL;
                              goto LABEL_202;
                            }
                            v174 = v813;
                            v80 = (wchar_t *)v821;
                            psz = v177;
                          }
                          else
                          {
                            v174 = v171;
                          }
                          dwBytes = v174;
                          goto LABEL_194;
                        }
                      }
                      LODWORD(Size) = Size + 1;
                      v80 = 0LL;
                      goto LABEL_126;
                    }
                    if ( v77 + 2 <= (_DWORD *)((char *)Src + HIDWORD(Size)) )
                    {
                      v78 = v831;
                      *v77 = 4;
                      *v78 = 0;
                      v73 = Size + 1;
                      LODWORD(Size) = Size + 1;
                      goto LABEL_122;
                    }
LABEL_95:
                    v8 = -1073741789;
                    LODWORD(v811) = -1073741789;
                    goto LABEL_96;
                  }
LABEL_39:
                  v6 = dwBytes_4;
                  goto LABEL_512;
                }
LABEL_97:
                v8 = -1073741762;
                goto LABEL_38;
              }
              if ( v64 + 3 > (_DWORD *)((char *)Src + HIDWORD(Size)) )
                goto LABEL_95;
              v59 = v831;
              v60 = v838;
              *v64 = 8;
              *v59 = v60;
              v56 = Size;
            }
            else
            {
              LODWORD(v811) = RtlUIntAdd(4LL, 8LL, &v813);
              v8 = (int)v811;
              if ( (int)v811 < 0 )
                goto LABEL_96;
              v54 = RtlUIntAdd(HIDWORD(Size), (unsigned int)v813, (char *)&Size + 4);
              v56 = Size;
              v8 = v54;
              LODWORD(v811) = v54;
              if ( v54 < 0 )
                goto LABEL_78;
            }
            LODWORD(Size) = v56 + 1;
            goto LABEL_79;
          }
        }
      }
    }
    v6 = v16;
    goto LABEL_512;
  }
  v4 = -2147024809;
LABEL_6:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v858);
  if ( v4 < 0 || !v2 )
    return 0;
  return v3;
}
