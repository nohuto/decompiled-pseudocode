/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x180047498
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x1800473BC (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180053660 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180061D30 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x18006AA70 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18006B5E4 (RtlUIntAdd.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18006FFE4 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     StringCchLengthW @ 0x180070654 (StringCchLengthW.c)
 *     StringLengthWorkerW @ 0x180070678 (StringLengthWorkerW.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800719CC (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x180071A3C (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x18009D084 (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     wcscmp_0 @ 0x1800A7826 (wcscmp_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A7910 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  __int64 v2; // r12
  int v3; // edi
  int *v5; // r14
  int v6; // eax
  char *v7; // rax
  __int64 v8; // r15
  _BYTE *v9; // r13
  int v10; // eax
  unsigned __int8 *v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // r11d
  int v14; // ebx
  int v15; // r10d
  int v16; // r9d
  int v17; // ecx
  int v18; // r10d
  int v19; // r11d
  int v20; // r9d
  unsigned int v21; // r8d
  int v22; // r11d
  unsigned int v23; // r8d
  int v24; // r11d
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // r8d
  int v28; // r11d
  int v29; // r8d
  unsigned int v30; // r11d
  int v31; // edx
  int v32; // r11d
  unsigned int v33; // esi
  int v34; // r11d
  int v35; // esi
  int v36; // r11d
  int v37; // esi
  unsigned int v38; // edi
  int v39; // esi
  int v40; // edi
  int v41; // esi
  unsigned int v42; // edi
  int v43; // esi
  int v44; // r11d
  int v45; // ecx
  const WCHAR *v46; // rbx
  unsigned __int64 v47; // rcx
  char v48; // al
  int v49; // r15d
  __int64 v50; // rbx
  HMODULE *v51; // rdi
  __int64 v52; // rdx
  __int64 (__fastcall **v53)(); // rax
  __int64 (__fastcall **v54)(); // rcx
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  const WCHAR *v68; // rdx
  __int64 v69; // rax
  const WCHAR *v70; // rbx
  char *v71; // rdi
  unsigned int v72; // eax
  unsigned int v73; // esi
  unsigned int v74; // r13d
  const CHAR *v75; // rdx
  __int64 v76; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  wchar_t *v78; // rsi
  void *v79; // rbx
  int v80; // r13d
  signed int v81; // r15d
  __int64 v82; // rbx
  void *v83; // rdi
  HANDLE v84; // rax
  _OWORD *v85; // rax
  void *v86; // rbx
  int v87; // r13d
  HANDLE v88; // rax
  _QWORD *v89; // r8
  HANDLE v90; // rax
  HANDLE v91; // rax
  HLOCAL v92; // r15
  unsigned int v93; // esi
  int v94; // eax
  int v95; // ebx
  unsigned int v96; // edx
  unsigned int v97; // eax
  unsigned int v98; // ecx
  unsigned int v99; // eax
  int v100; // edx
  unsigned int v101; // edi
  HANDLE v102; // rax
  _DWORD *v103; // rax
  unsigned int *v104; // rdx
  unsigned int i; // ecx
  unsigned int v106; // eax
  unsigned int v107; // r9d
  unsigned int v108; // r11d
  unsigned int v109; // ecx
  unsigned int *v110; // rdx
  unsigned int j; // r8d
  unsigned int v112; // eax
  unsigned int v113; // r11d
  unsigned int v114; // r10d
  unsigned int v115; // edi
  HANDLE v116; // rax
  int *v117; // rax
  unsigned __int64 v118; // r9
  int *v119; // rdi
  unsigned __int8 *v120; // rdi
  int v121; // edi
  __int64 v122; // r9
  unsigned int v123; // r10d
  __int64 v124; // r11
  int *v125; // r13
  unsigned __int64 k; // rcx
  unsigned __int8 v127; // al
  void *v128; // rdx
  _QWORD *v129; // r10
  unsigned int v130; // r10d
  int v131; // eax
  int v132; // r9d
  int v133; // eax
  int v134; // r9d
  unsigned int v135; // r11d
  unsigned int v136; // r10d
  int v137; // r9d
  unsigned int v138; // r11d
  unsigned int v139; // edi
  HANDLE v140; // rax
  _DWORD *v141; // rdi
  int v142; // r13d
  unsigned int v143; // r10d
  unsigned __int8 v144; // al
  unsigned __int64 v145; // rcx
  _BYTE *v146; // rcx
  unsigned int v147; // r8d
  unsigned __int8 *v148; // r9
  unsigned int v149; // r11d
  int v150; // r10d
  SIZE_T v151; // r13
  unsigned __int8 *v152; // rdx
  int v153; // edi
  int v154; // r15d
  int v155; // r14d
  int v156; // ebx
  unsigned int v157; // r13d
  unsigned __int64 v158; // rax
  int v159; // r9d
  int v160; // r8d
  int v161; // r11d
  int v162; // r8d
  int v163; // r11d
  int v164; // r8d
  unsigned int v165; // r11d
  int v166; // r8d
  int v167; // r11d
  int v168; // r8d
  int v169; // r11d
  int v170; // r8d
  int v171; // r11d
  unsigned int v172; // r8d
  unsigned int v173; // r11d
  int v174; // r8d
  int v175; // r11d
  int v176; // r8d
  int v177; // r11d
  int v178; // r8d
  int v179; // r11d
  int v180; // r8d
  int v181; // r11d
  unsigned int v182; // r8d
  int v183; // r11d
  int v184; // ecx
  _BYTE *v185; // r14
  HANDLE v186; // rax
  unsigned int *v187; // rdi
  unsigned int *v188; // rax
  unsigned int v189; // r13d
  HANDLE v190; // rax
  void *v191; // rax
  void *v192; // rdi
  unsigned int *v193; // rax
  HANDLE v194; // rax
  HANDLE v195; // rax
  HANDLE v196; // rax
  HANDLE v197; // rax
  unsigned int *v198; // rax
  HANDLE v199; // rax
  __int64 v200; // rdx
  unsigned int v201; // r10d
  int v202; // r13d
  unsigned int v203; // r10d
  SIZE_T v204; // rdi
  unsigned __int8 *v205; // r13
  unsigned int *v206; // rcx
  int v207; // r11d
  unsigned int v208; // edi
  int v209; // r11d
  unsigned int *v210; // rcx
  unsigned int v211; // edi
  HANDLE v212; // rax
  void *v213; // rcx
  _QWORD *v214; // rdi
  signed int v215; // r13d
  HANDLE v216; // rax
  HANDLE v217; // rax
  HANDLE v218; // rax
  HANDLE v219; // rax
  _QWORD *v220; // rdi
  char *v221; // r13
  char v222; // di
  _DWORD *v223; // r11
  _DWORD *v224; // rcx
  int v225; // edi
  int v226; // r8d
  unsigned int v227; // r13d
  _BYTE *v228; // r12
  unsigned int v229; // esi
  unsigned int v230; // r14d
  int v231; // r11d
  unsigned __int8 *v232; // rbx
  unsigned __int64 v233; // rax
  int v234; // r10d
  int v235; // r9d
  int v236; // ecx
  int v237; // r10d
  int v238; // r13d
  int v239; // r9d
  int v240; // esi
  int v241; // r13d
  unsigned int v242; // esi
  int v243; // r13d
  int v244; // esi
  unsigned int v245; // r13d
  int v246; // esi
  int v247; // r13d
  int v248; // esi
  unsigned int v249; // r13d
  int v250; // esi
  int v251; // r13d
  unsigned int v252; // esi
  int v253; // r13d
  int v254; // esi
  int v255; // r13d
  int v256; // esi
  int v257; // r13d
  int v258; // esi
  int v259; // r13d
  int v260; // esi
  unsigned int v261; // r13d
  int v262; // esi
  int v263; // edx
  int v264; // ecx
  unsigned int *v265; // rcx
  unsigned int v266; // edi
  __int64 v267; // r9
  unsigned int *v268; // rcx
  __int64 v269; // r9
  __int64 v270; // r9
  unsigned int v271; // r10d
  int v272; // r9d
  __int64 v273; // r11
  __int64 v274; // rcx
  __int64 v275; // r9
  __int64 v276; // r9
  unsigned int v277; // r10d
  int v278; // r9d
  __int64 v279; // r11
  __int64 v280; // r10
  unsigned int *v281; // rcx
  __int64 v282; // r9
  __int64 v283; // r9
  int v284; // r9d
  unsigned int *v285; // rcx
  __int64 v286; // r9
  __int64 v287; // r9
  int v288; // r9d
  HANDLE v289; // rax
  LPVOID v290; // rax
  _OWORD *v291; // rcx
  HANDLE v292; // rax
  LPVOID v293; // rax
  HANDLE v294; // rax
  _DWORD *v295; // rax
  void *v296; // rdi
  int v297; // eax
  void *v298; // r10
  __int64 v299; // rcx
  unsigned int v300; // r11d
  HANDLE v301; // rax
  void *v302; // rax
  HANDLE v303; // rax
  void *v304; // rcx
  SIZE_T v305; // rax
  _OWORD *v306; // r14
  void *v307; // rdi
  HANDLE v308; // rax
  void *v309; // rdi
  HANDLE v310; // rax
  WCHAR *v311; // rbx
  unsigned int v312; // r11d
  int v313; // eax
  unsigned int v314; // r9d
  unsigned int v315; // r11d
  int v316; // r10d
  int v317; // eax
  unsigned int v318; // r11d
  int v319; // r10d
  int v320; // eax
  int v321; // r10d
  unsigned int v322; // edi
  HANDLE v323; // rax
  LPVOID v324; // rax
  _DWORD *v325; // rdi
  unsigned int v326; // r9d
  unsigned int v327; // r10d
  __int64 v328; // r11
  int *v329; // rax
  __int64 kk; // r9
  int v331; // eax
  __int64 v332; // r9
  unsigned int v333; // r10d
  int v334; // r9d
  int v335; // r10d
  __int64 v336; // rcx
  unsigned __int64 v337; // rcx
  HANDLE ProcessHeap; // rax
  size_t v339; // rcx
  wchar_t *v340; // rdi
  __int64 v341; // r9
  wchar_t *v342; // rax
  wchar_t *v343; // r8
  signed int LastError; // eax
  __int64 (__fastcall *v345)(); // rdi
  DWORD CurrentThreadId; // eax
  size_t v347; // rcx
  signed int v348; // eax
  void *v349; // rdi
  __int64 v350; // r9
  void *v351; // rax
  void *v352; // r8
  signed int v353; // eax
  HANDLE CurrentProcess; // rax
  signed int v355; // eax
  unsigned int v356; // r10d
  _DWORD *v357; // rax
  unsigned int v358; // r11d
  size_t v359; // rdx
  const wchar_t *v360; // rcx
  int v361; // r9d
  int v362; // r10d
  SIZE_T *v363; // rax
  unsigned int *v364; // r9
  unsigned int v365; // r11d
  __int64 v366; // rdx
  __int64 v367; // r9
  int v368; // r11d
  _DWORD *v369; // r9
  unsigned int *v370; // r9
  unsigned int v371; // eax
  __int64 v372; // rdx
  __int64 v373; // r9
  _DWORD *v374; // r9
  __int64 v375; // r11
  void *v376; // rcx
  int *v377; // rax
  unsigned int *v378; // r9
  unsigned int v379; // r11d
  __int64 v380; // rdx
  __int64 v381; // r9
  int v382; // r11d
  unsigned int *v383; // r9
  unsigned int *v384; // r9
  unsigned int v385; // r11d
  __int64 v386; // rdx
  __int64 v387; // r9
  int v388; // r11d
  unsigned int *v389; // r9
  unsigned int *v390; // rax
  __int64 v391; // rcx
  unsigned int v392; // r9d
  unsigned int v393; // r11d
  unsigned int v394; // r11d
  unsigned int v395; // r11d
  unsigned int v396; // r11d
  unsigned int v397; // ecx
  __int64 v398; // r9
  void *v399; // rcx
  HANDLE v400; // rax
  int v401; // r8d
  char v402; // r12
  unsigned int v403; // eax
  int v404; // edx
  int v405; // ecx
  int v406; // r14d
  unsigned int v407; // r8d
  unsigned int v408; // r15d
  int v409; // edx
  unsigned int v410; // esi
  char v411; // dl
  void *v412; // rax
  void *v413; // rcx
  void *v414; // rcx
  __int64 v415; // r9
  HANDLE v416; // rax
  void *v417; // r10
  unsigned __int8 *v418; // r11
  void *v419; // r10
  unsigned int v420; // edi
  void *v421; // r10
  void *v422; // r10
  unsigned int v423; // r11d
  unsigned int v424; // eax
  FARPROC v425; // rax
  int v426; // eax
  signed int v427; // eax
  void *v428; // r10
  int v429; // r11d
  unsigned int v430; // r10d
  int v431; // r11d
  int v432; // r11d
  unsigned int v433; // r9d
  int v434; // r11d
  unsigned int v435; // edi
  int v436; // r11d
  int v437; // r10d
  int v438; // r11d
  HANDLE v439; // rax
  _QWORD *v440; // rax
  void *v441; // rdi
  HANDLE v442; // rax
  HANDLE v443; // rax
  HANDLE v444; // rax
  HANDLE v445; // rax
  int v446; // r15d
  void *v447; // rdx
  int v448; // eax
  char v449; // r12
  int v450; // ecx
  unsigned int v451; // r10d
  char *v452; // rsi
  unsigned int v453; // r12d
  int v454; // ecx
  int v455; // edx
  int v456; // eax
  int v457; // r13d
  WCHAR *v458; // r11
  _QWORD *v459; // r10
  WCHAR *v460; // r11
  _QWORD *v461; // r10
  _QWORD *v462; // r10
  WCHAR *v463; // r11
  _DWORD *v464; // rax
  __int64 v465; // r11
  unsigned __int64 v466; // r10
  unsigned __int64 v467; // r10
  unsigned int v468; // r11d
  __int64 v469; // rdx
  unsigned int v470; // ecx
  HANDLE v471; // rax
  HANDLE v472; // rax
  HANDLE v473; // rax
  HANDLE v474; // rax
  HANDLE v475; // rax
  HANDLE v476; // rax
  HANDLE v477; // rax
  HANDLE v478; // rax
  HANDLE v479; // rax
  HANDLE v480; // rax
  HANDLE v481; // rax
  HANDLE v482; // rax
  HANDLE v483; // rax
  unsigned int v484; // edi
  LPVOID *v485; // rax
  int v486; // r9d
  unsigned int *v487; // rax
  int v488; // r11d
  int v489; // r9d
  unsigned int *v490; // rax
  int v491; // eax
  int v492; // r9d
  const void *v493; // r10
  size_t v494; // r11
  int *v495; // rax
  HANDLE v496; // rax
  HANDLE v497; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v499; // rax
  unsigned int v500; // edi
  int v501; // eax
  char *v502; // rax
  _BYTE *v503; // rsi
  __int64 v504; // rax
  unsigned int v505; // r15d
  unsigned __int8 *v506; // rdi
  unsigned int v507; // r14d
  int v508; // ebx
  int v509; // r12d
  int v510; // r11d
  int v511; // r10d
  int v512; // ecx
  int v513; // r11d
  int v514; // r14d
  int v515; // r10d
  unsigned int v516; // r9d
  int v517; // r14d
  unsigned int v518; // r9d
  int v519; // r14d
  int v520; // r9d
  unsigned int v521; // r14d
  int v522; // r9d
  int v523; // r14d
  int v524; // r9d
  unsigned int v525; // r14d
  int v526; // r9d
  int v527; // r14d
  unsigned int v528; // r15d
  int v529; // r14d
  int v530; // r15d
  int v531; // r14d
  int v532; // r15d
  unsigned int v533; // r8d
  int v534; // r15d
  int v535; // r8d
  int v536; // r15d
  unsigned int v537; // r8d
  int v538; // r15d
  int v539; // r14d
  int v540; // ecx
  char v541; // al
  unsigned __int64 v542; // rcx
  const WCHAR *v543; // rbx
  HMODULE *v544; // rbx
  __int64 v545; // r14
  __int64 v546; // rdx
  __int64 (__fastcall **v547)(); // rax
  __int64 (__fastcall **v548)(); // rcx
  __int128 v549; // xmm1
  __int128 v550; // xmm0
  __int128 v551; // xmm1
  __int128 v552; // xmm0
  __int128 v553; // xmm1
  __int128 v554; // xmm0
  __int128 v555; // xmm1
  __int128 v556; // xmm1
  __int128 v557; // xmm0
  __int128 v558; // xmm1
  __int128 v559; // xmm0
  __int128 v560; // xmm1
  __int128 v561; // xmm0
  const WCHAR *v562; // rdx
  __int64 v563; // rax
  const WCHAR *v564; // rbx
  HMODULE *v565; // r8
  int v566; // r14d
  __int64 v567; // rcx
  unsigned __int64 v568; // rcx
  unsigned int v569; // ecx
  unsigned int v570; // eax
  const CHAR *v571; // rdx
  __int64 v572; // rax
  __int64 (__fastcall *v573)(); // rcx
  HANDLE v574; // rax
  int v575; // eax
  char *v576; // rax
  _BYTE *v577; // rsi
  __int64 v578; // rax
  unsigned int v579; // r15d
  unsigned __int8 *v580; // rdi
  unsigned int v581; // r14d
  int v582; // ebx
  int v583; // r12d
  int v584; // r11d
  int v585; // r10d
  int v586; // ecx
  int v587; // r11d
  int v588; // r14d
  int v589; // r10d
  unsigned int v590; // r9d
  int v591; // r14d
  unsigned int v592; // r9d
  int v593; // r14d
  int v594; // r9d
  unsigned int v595; // r14d
  int v596; // r9d
  int v597; // r14d
  int v598; // r9d
  unsigned int v599; // r14d
  int v600; // edx
  int v601; // r14d
  unsigned int v602; // r15d
  int v603; // r14d
  int v604; // r15d
  int v605; // r14d
  int v606; // r15d
  unsigned int v607; // r8d
  int v608; // r15d
  int v609; // r8d
  int v610; // r15d
  unsigned int v611; // r8d
  int v612; // r15d
  int v613; // r14d
  int v614; // ecx
  char v615; // al
  unsigned __int64 v616; // rcx
  WCHAR *v617; // rbx
  HMODULE *v618; // rbx
  __int64 v619; // r14
  __int64 v620; // rdx
  __int64 (__fastcall **v621)(); // rax
  __int64 (__fastcall **v622)(); // rcx
  __int128 v623; // xmm1
  __int128 v624; // xmm0
  __int128 v625; // xmm1
  __int128 v626; // xmm0
  __int128 v627; // xmm1
  __int128 v628; // xmm0
  __int128 v629; // xmm1
  __int128 v630; // xmm1
  __int128 v631; // xmm0
  __int128 v632; // xmm1
  __int128 v633; // xmm0
  __int128 v634; // xmm1
  __int128 v635; // xmm0
  const WCHAR *v636; // rdx
  __int64 v637; // rax
  WCHAR *v638; // rbx
  HMODULE *v639; // r8
  int v640; // r14d
  __int64 v641; // rcx
  unsigned __int64 v642; // rcx
  unsigned int v643; // ecx
  unsigned int v644; // eax
  const CHAR *v645; // rdx
  __int64 v646; // rax
  __int64 (__fastcall *v647)(); // rcx
  HANDLE v648; // rax
  signed int v649; // eax
  signed int v650; // r14d
  _DWORD *v651; // rbx
  void *v652; // rax
  void *v653; // rax
  _DWORD *v654; // rdi
  _DWORD *v655; // rax
  __int64 v656; // rbx
  _DWORD *v657; // rsi
  unsigned int m; // r15d
  __int64 v659; // rax
  unsigned int v660; // eax
  unsigned int v661; // edi
  __int64 v662; // rdx
  unsigned int n; // ecx
  signed int v664; // eax
  __int64 v665; // rdi
  __int64 v666; // rcx
  const wchar_t *v667; // rcx
  __int64 v668; // r8
  const wchar_t **v669; // rdx
  __int64 v670; // rax
  const unsigned __int16 *v671; // rbx
  char *v672; // rax
  unsigned __int64 v673; // rcx
  const unsigned __int16 *v674; // r8
  _BYTE *v675; // r14
  int v676; // r10d
  unsigned __int8 *v677; // rsi
  int v678; // edi
  unsigned int v679; // r11d
  unsigned int v680; // ebx
  __int64 v681; // r15
  int v682; // r9d
  int v683; // r8d
  int v684; // eax
  int v685; // r9d
  int v686; // ebx
  int v687; // r8d
  unsigned int v688; // r11d
  int v689; // ebx
  unsigned int v690; // r11d
  int v691; // ebx
  int v692; // r11d
  unsigned int v693; // ebx
  int v694; // r11d
  int v695; // ebx
  int v696; // r11d
  unsigned int v697; // ebx
  int v698; // ecx
  int v699; // ebx
  unsigned int v700; // r11d
  int v701; // ebx
  int v702; // r11d
  int v703; // ebx
  int v704; // r11d
  unsigned int v705; // edx
  int v706; // r11d
  int v707; // edx
  int v708; // r11d
  unsigned int v709; // edx
  int v710; // r11d
  int v711; // ebx
  int v712; // eax
  char *v713; // r10
  unsigned __int64 v714; // rax
  __m128 v715; // xmm1
  __m128 v716; // xmm0
  __m128 v717; // xmm0
  __m128 v718; // xmm1
  __m128 v719; // xmm1
  __m128 v720; // xmm1
  _QWORD *v721; // rdx
  __int64 v722; // r8
  unsigned int ii; // ecx
  __int64 v724; // rax
  void *v725; // rax
  _OWORD *v726; // rbx
  unsigned int v727; // eax
  unsigned int v728; // ecx
  _BYTE *v729; // rax
  __int64 v730; // r9
  int v731; // eax
  void *v732; // rax
  __int64 v733; // r9
  signed int v734; // eax
  void **v735; // rax
  __int64 v736; // rax
  _WORD *v737; // rdi
  __int64 v738; // rcx
  void **v739; // rax
  void **v740; // rax
  void **v741; // rax
  signed int v742; // eax
  unsigned int v743; // edi
  const unsigned __int16 *v744; // rax
  int v745; // eax
  __int64 v746; // rax
  signed int v747; // eax
  int v748; // eax
  __int64 v749; // rax
  signed int v750; // eax
  int v751; // ebx
  unsigned int v752; // edx
  int v753; // eax
  __int32 v754; // ebx
  void *v755; // rdi
  int v756; // edi
  void *v757; // rdi
  int v758; // edi
  __int64 v759; // rdx
  __int64 v760; // rdi
  int v761; // eax
  __int64 v762; // rax
  signed int v763; // eax
  signed int v764; // eax
  void *v765; // rdi
  __int64 v766; // rbx
  int v767; // edi
  int v768; // eax
  unsigned __int64 v769; // rdx
  __int32 v770; // edx
  int v771; // r14d
  int v772; // ebx
  int v773; // edi
  HAM_ACTIVITY_RM_CONTEXT *v774; // rax
  int v775; // edx
  int v776; // ecx
  HAM_ACTIVITY_RM_CONTEXT *v777; // rax
  int v778; // ebx
  int v779; // eax
  __int64 v780; // rbx
  HMODULE *v781; // rdi
  __int64 v782; // rdx
  __int64 (__fastcall **v783)(); // rax
  __int64 (__fastcall **v784)(); // rcx
  __int128 v785; // xmm1
  __int128 v786; // xmm0
  __int128 v787; // xmm1
  __int128 v788; // xmm0
  __int128 v789; // xmm1
  __int128 v790; // xmm0
  __int128 v791; // xmm1
  __int128 v792; // xmm1
  __int128 v793; // xmm0
  __int128 v794; // xmm1
  __int128 v795; // xmm0
  __int128 v796; // xmm1
  __int128 v797; // xmm0
  unsigned int v798; // edi
  __int64 v799; // rax
  int v800; // edi
  int v801; // eax
  void *v802; // r14
  __int64 v803; // rax
  __int64 v804; // rax
  HAM_ACTIVITY_RM_CONTEXT *v805; // rbx
  signed int v806; // eax
  signed int v807; // edi
  bool v808; // zf
  SIZE_T v809; // rcx
  __int64 v810; // rax
  __int64 (__fastcall *v811)(); // rdi
  __int64 v812; // rax
  __int32 v813; // r10d
  __int32 v814; // r9d
  __int32 v815; // r8d
  __int32 v816; // edx
  int v817; // r14d
  int v818; // r11d
  __int64 v819; // rdi
  int v820; // r8d
  SIZE_T v821; // rdx
  size_t v822; // rax
  unsigned __int8 *v823; // r9
  int v824; // r8d
  size_t v825; // r10
  int v826; // r8d
  int v827; // edi
  int v828; // edx
  int v829; // edi
  int v830; // edx
  int v831; // edi
  int v832; // ecx
  void *v833; // r14
  __int64 v834; // rax
  __int64 v835; // rax
  HAM_ACTIVITY_RM_CONTEXT *v836; // rbx
  signed int v837; // eax
  signed int v838; // edi
  SIZE_T v839; // rcx
  __int64 v840; // rax
  __int64 (__fastcall *v841)(); // rdi
  __int64 v842; // rax
  int v843; // eax
  __int32 v844; // r10d
  __int32 v845; // r9d
  __int32 v846; // r8d
  __int32 v847; // edx
  int v848; // r14d
  int v849; // r11d
  SIZE_T v850; // rdx
  size_t v851; // rax
  unsigned __int8 *v852; // r9
  int v853; // r8d
  size_t v854; // r10
  int v855; // r8d
  int v856; // edi
  int v857; // edx
  int v858; // edi
  int v859; // edx
  int v860; // edi
  int v861; // ecx
  HAM_ACTIVITY_RM_CONTEXT *v862; // r14
  SIZE_T v863; // rdi
  char v864; // al
  __int32 v865; // edi
  unsigned __int32 v866; // ebx
  __int32 v867; // r14d
  __int32 v868; // ecx
  __int32 v869; // edi
  __int32 v870; // r14d
  __int64 v871; // rax
  __int64 v872; // rax
  __int32 v873; // edi
  __int64 v874; // rax
  signed int v875; // eax
  signed int v876; // edi
  LPVOID v877; // rcx
  __int64 v878; // rcx
  __int64 v879; // rcx
  __int64 v880; // rcx
  int v881; // eax
  __int64 v882; // rbx
  HMODULE *v883; // rdi
  __int64 v884; // rdx
  __int64 (__fastcall **v885)(); // rax
  __int64 (__fastcall **v886)(); // rcx
  __int128 v887; // xmm1
  __int128 v888; // xmm0
  __int128 v889; // xmm1
  __int128 v890; // xmm0
  __int128 v891; // xmm1
  __int128 v892; // xmm0
  __int128 v893; // xmm1
  __int128 v894; // xmm1
  __int128 v895; // xmm0
  __int128 v896; // xmm1
  __int128 v897; // xmm0
  __int128 v898; // xmm1
  __int128 v899; // xmm0
  int v900; // eax
  int v901; // r14d
  int v902; // eax
  char *v903; // rax
  _BYTE *v904; // r15
  int v905; // esi
  unsigned __int8 *v906; // rbx
  unsigned int v907; // r14d
  unsigned int v908; // r11d
  int v909; // eax
  int v910; // r10d
  int v911; // r9d
  int v912; // ecx
  int v913; // r10d
  int v914; // r11d
  int v915; // r9d
  unsigned int v916; // r8d
  int v917; // r11d
  unsigned int v918; // r8d
  int v919; // r11d
  int v920; // r8d
  unsigned int v921; // r11d
  int v922; // r8d
  int v923; // r11d
  int v924; // r8d
  unsigned int v925; // r11d
  int v926; // edx
  int v927; // r11d
  unsigned int v928; // r14d
  int v929; // r11d
  int v930; // r14d
  int v931; // r11d
  int v932; // r14d
  unsigned int v933; // edi
  int v934; // r14d
  int v935; // edi
  int v936; // r14d
  unsigned int v937; // edi
  int v938; // r14d
  int v939; // r11d
  int v940; // ecx
  char v941; // al
  unsigned __int64 v942; // rcx
  WCHAR *v943; // rbx
  __int64 v944; // rbx
  HMODULE *v945; // rdi
  __int64 v946; // rdx
  __int64 (__fastcall **v947)(); // rax
  __int64 (__fastcall **v948)(); // rcx
  __int128 v949; // xmm1
  __int128 v950; // xmm0
  __int128 v951; // xmm1
  __int128 v952; // xmm0
  __int128 v953; // xmm1
  __int128 v954; // xmm0
  __int128 v955; // xmm1
  __int128 v956; // xmm1
  __int128 v957; // xmm0
  __int128 v958; // xmm1
  __int128 v959; // xmm0
  __int128 v960; // xmm1
  __int128 v961; // xmm0
  char *v962; // rcx
  __int64 v963; // rax
  __int64 (__fastcall *v964)(); // rdi
  __int64 v965; // rax
  int v966; // eax
  __int32 v967; // r10d
  int v968; // edx
  int v969; // r9d
  int v970; // ecx
  int v971; // r8d
  int v972; // eax
  __int64 v973; // rdi
  int v974; // edx
  unsigned __int8 *v975; // r11
  const WCHAR *v976; // rax
  unsigned __int8 *v977; // r9
  int v978; // esi
  signed __int64 v979; // r10
  int v980; // r8d
  int v981; // edi
  int v982; // edx
  int v983; // edi
  int v984; // edx
  int v985; // edi
  int v986; // ecx
  void *v987; // rdi
  __int64 v988; // rax
  __int32 v989; // r14d
  __int64 v990; // rax
  signed int v991; // eax
  signed int v992; // edi
  HAM_ACTIVITY_RM_CONTEXT *v993; // r14
  SIZE_T v994; // rcx
  __int64 v995; // rax
  __int64 (__fastcall *v996)(); // rdi
  __int64 v997; // rax
  int v998; // eax
  __int32 v999; // r9d
  int v1000; // edx
  __int32 v1001; // r10d
  int v1002; // r8d
  int v1003; // ecx
  int v1004; // r11d
  __int64 v1005; // rdi
  int v1006; // esi
  const WCHAR *v1007; // rdx
  size_t v1008; // rax
  unsigned __int8 *v1009; // r9
  int v1010; // r8d
  size_t v1011; // r10
  int v1012; // r8d
  int v1013; // edi
  int v1014; // edx
  int v1015; // edi
  int v1016; // edx
  int v1017; // edi
  int v1018; // ecx
  const WCHAR *v1019; // rdx
  __int64 v1020; // rax
  WCHAR *v1021; // rbx
  char *v1022; // r14
  int v1023; // edi
  __int64 v1024; // rcx
  unsigned __int64 v1025; // rcx
  unsigned int v1026; // ecx
  unsigned int v1027; // eax
  const CHAR *v1028; // rdx
  __int64 v1029; // rax
  __int64 (__fastcall *v1030)(); // rcx
  HANDLE v1031; // rax
  __int64 v1032; // rbx
  int v1033; // eax
  HMODULE *v1034; // rdi
  __int64 v1035; // rdx
  __int64 (__fastcall **v1036)(); // rax
  __int64 (__fastcall **v1037)(); // rcx
  __int128 v1038; // xmm1
  __int128 v1039; // xmm0
  __int128 v1040; // xmm1
  __int128 v1041; // xmm0
  __int128 v1042; // xmm1
  __int128 v1043; // xmm0
  __int128 v1044; // xmm1
  __int128 v1045; // xmm1
  __int128 v1046; // xmm0
  __int128 v1047; // xmm1
  __int128 v1048; // xmm0
  __int128 v1049; // xmm1
  __int128 v1050; // xmm0
  HANDLE v1051; // rax
  HANDLE v1052; // rax
  unsigned int *v1053; // r9
  unsigned int v1054; // r11d
  unsigned int *v1055; // rax
  __int64 v1056; // r9
  int v1057; // r10d
  unsigned int v1058; // r11d
  unsigned int *v1059; // r10
  unsigned int v1060; // r11d
  __int64 v1061; // rdx
  __int64 v1062; // r9
  __int64 v1063; // r10
  int v1064; // r11d
  _DWORD *v1065; // r10
  __int64 v1066; // r9
  unsigned int v1067; // edi
  int v1068; // r10d
  __int64 v1069; // r11
  unsigned int *v1070; // r10
  unsigned int v1071; // r11d
  __int64 v1072; // rdx
  __int64 v1073; // r9
  __int64 v1074; // r10
  int v1075; // r11d
  unsigned int v1076; // r9d
  unsigned int *v1077; // r10
  unsigned int v1078; // edi
  int v1079; // r10d
  unsigned int v1080; // r11d
  unsigned int *v1081; // r9
  unsigned int v1082; // r10d
  __int64 v1083; // rdx
  __int64 v1084; // r9
  int v1085; // r10d
  _DWORD *v1086; // r9
  _QWORD *v1087; // rax
  __int64 v1088; // rcx
  unsigned int v1089; // edi
  int v1090; // edi
  unsigned int v1091; // r9d
  unsigned int v1092; // ecx
  unsigned int v1093; // edi
  HANDLE v1094; // rax
  unsigned __int8 *v1095; // rax
  int v1096; // eax
  WCHAR *v1097; // r9
  unsigned int v1098; // r10d
  void *v1099; // rcx
  int v1100; // eax
  WCHAR *v1101; // r9
  HANDLE v1102; // rax
  int v1103; // edi
  _BYTE *v1104; // rdx
  unsigned __int8 v1105; // al
  unsigned __int64 v1106; // rcx
  unsigned int v1107; // r8d
  unsigned __int8 *v1108; // r9
  unsigned int v1109; // r11d
  int v1110; // r10d
  int v1111; // edx
  char v1112; // r11
  int v1113; // r8d
  int v1114; // ecx
  unsigned int v1115; // r8d
  unsigned int v1116; // r15d
  int v1117; // eax
  unsigned int v1118; // esi
  _BYTE *v1119; // r12
  char v1120; // cl
  int v1121; // edi
  int v1122; // r15d
  _BYTE *v1123; // rbx
  int v1124; // r14d
  unsigned __int8 *v1125; // r13
  unsigned __int64 v1126; // rax
  int v1127; // r10d
  int v1128; // r9d
  int v1129; // ecx
  int v1130; // r10d
  int v1131; // r9d
  int v1132; // r8d
  int v1133; // r11d
  int v1134; // edx
  int v1135; // r11d
  int v1136; // r8d
  int v1137; // r11d
  int v1138; // r8d
  unsigned int v1139; // r11d
  int v1140; // r8d
  int v1141; // r11d
  int v1142; // r8d
  int v1143; // r11d
  int v1144; // r8d
  int v1145; // r11d
  unsigned int v1146; // r8d
  unsigned int v1147; // r11d
  int v1148; // r8d
  int v1149; // r11d
  int v1150; // r8d
  int v1151; // r11d
  int v1152; // r8d
  int v1153; // r11d
  int v1154; // r8d
  int v1155; // r11d
  unsigned int v1156; // r8d
  int v1157; // ecx
  unsigned int v1158; // ecx
  HANDLE v1159; // rax
  _QWORD *v1160; // rax
  _QWORD *v1161; // rsi
  signed int v1162; // edi
  HANDLE v1163; // rax
  void *v1164; // rax
  HANDLE v1165; // rax
  _OWORD *v1166; // rax
  HANDLE v1167; // rax
  _QWORD *v1168; // rax
  HANDLE v1169; // rax
  HANDLE v1170; // rax
  HANDLE v1171; // rax
  HANDLE v1172; // rax
  unsigned int *v1173; // rax
  unsigned int *v1174; // rsi
  HANDLE v1175; // rax
  __int64 v1176; // rdx
  int v1177; // edi
  unsigned int v1178; // r11d
  unsigned int v1179; // r11d
  unsigned int v1180; // edi
  HANDLE v1181; // rax
  _DWORD *v1182; // rax
  __int64 v1183; // r9
  int v1184; // eax
  void *v1185; // rcx
  __int64 v1186; // r9
  void *v1187; // rcx
  int v1188; // eax
  void *v1189; // r9
  __int64 v1190; // r9
  void *v1191; // rcx
  int v1192; // eax
  void *v1193; // r9
  __int64 v1194; // r9
  HANDLE v1195; // rax
  int v1196; // eax
  void *v1197; // r9
  __int64 v1198; // rcx
  void *v1199; // rsi
  HANDLE v1200; // rax
  void *v1201; // r15
  HANDLE v1202; // rax
  void *v1203; // r15
  HANDLE v1204; // rax
  void *v1205; // r15
  HANDLE v1206; // rax
  HANDLE v1207; // rax
  HANDLE v1208; // rax
  HANDLE v1209; // rax
  void *v1210; // r15
  HANDLE v1211; // rax
  void *v1212; // r15
  HANDLE v1213; // rax
  void *v1214; // r15
  HANDLE v1215; // rax
  HANDLE v1216; // rax
  HANDLE v1217; // rax
  void *v1218; // r9
  unsigned __int8 *v1219; // r10
  unsigned __int8 *v1220; // rdi
  unsigned int *v1221; // rcx
  int v1222; // r10d
  __int64 v1223; // r9
  int v1224; // r10d
  void *v1225; // r9
  unsigned int *v1226; // rcx
  unsigned int v1227; // r10d
  __int64 v1228; // r9
  int v1229; // r10d
  void *v1230; // r9
  unsigned int v1231; // ecx
  unsigned int v1232; // r10d
  void *v1233; // r9
  unsigned int v1234; // edi
  HANDLE v1235; // rax
  int *v1236; // rax
  int *v1237; // r11
  FARPROC v1238; // rax
  int v1239; // eax
  __int64 v1240; // r9
  signed int v1241; // eax
  signed int v1242; // edi
  __int64 v1243; // r9
  SIZE_T v1244; // r10
  unsigned int v1245; // r10d
  __int64 v1246; // r9
  __int64 v1247; // r9
  SIZE_T v1248; // r11
  unsigned int v1249; // r11d
  __int64 v1250; // r9
  int v1251; // r9d
  unsigned int v1252; // r10d
  int v1253; // r9d
  int v1254; // r10d
  int v1255; // r11d
  HANDLE v1256; // rax
  _QWORD *v1257; // rax
  _QWORD *v1258; // rcx
  HANDLE v1259; // rax
  void *v1260; // rcx
  HANDLE v1261; // rax
  void *v1262; // rcx
  HANDLE v1263; // rax
  void *v1264; // rcx
  _QWORD *v1265; // rax
  HANDLE v1266; // rax
  HANDLE v1267; // rax
  HANDLE v1268; // rax
  HANDLE v1269; // rax
  unsigned int *v1270; // rax
  unsigned int *v1271; // r9
  HANDLE v1272; // rax
  HANDLE v1273; // rax
  HANDLE v1274; // rax
  HANDLE v1275; // rax
  unsigned __int64 v1276; // rdi
  WCHAR *v1277; // r9
  unsigned __int8 *v1278; // r8
  unsigned int *v1279; // r11
  unsigned __int8 v1280; // al
  LPCWSTR v1281; // rcx
  int v1282; // r10d
  int v1283; // edi
  unsigned __int8 *v1284; // rdx
  int v1285; // ecx
  int v1286; // ecx
  unsigned __int8 *v1287; // r15
  unsigned int v1288; // r8d
  unsigned int v1289; // r9d
  int v1290; // eax
  unsigned int v1291; // edi
  int v1292; // r13d
  unsigned int v1293; // r12d
  char v1294; // dl
  SIZE_T v1295; // rdi
  _BYTE *v1296; // r13
  int v1297; // r11d
  unsigned __int8 *v1298; // r14
  int v1299; // edi
  SIZE_T v1300; // rsi
  int v1301; // r12d
  unsigned int v1302; // eax
  int v1303; // ebx
  int v1304; // r10d
  int v1305; // r9d
  int v1306; // ecx
  int v1307; // r10d
  int v1308; // r8d
  int v1309; // r9d
  unsigned int v1310; // eax
  int v1311; // r8d
  unsigned int v1312; // eax
  int v1313; // r8d
  int v1314; // eax
  unsigned int v1315; // r8d
  int v1316; // eax
  int v1317; // r8d
  int v1318; // eax
  unsigned int v1319; // r8d
  int v1320; // eax
  int v1321; // r8d
  unsigned int v1322; // eax
  int v1323; // r8d
  int v1324; // eax
  int v1325; // r8d
  int v1326; // eax
  unsigned int v1327; // edi
  int v1328; // eax
  int v1329; // edi
  int v1330; // eax
  unsigned int v1331; // edi
  int v1332; // ecx
  unsigned int v1333; // r8d
  unsigned int v1334; // r8d
  SIZE_T jj; // rcx
  unsigned int *v1336; // r15
  unsigned int *v1337; // r10
  int v1338; // edi
  WCHAR *v1339; // r9
  unsigned int *v1340; // r10
  WCHAR *v1341; // r9
  unsigned int *v1342; // r10
  WCHAR *v1343; // r9
  unsigned int *v1344; // r10
  __int64 v1345; // r11
  void *v1346; // r9
  void *v1347; // r10
  unsigned int *v1348; // r9
  unsigned __int64 v1349; // r10
  unsigned int v1350; // r11d
  __int64 v1351; // rdx
  __int64 v1352; // r9
  HANDLE v1353; // rax
  size_t v1354; // r15
  void *v1355; // rcx
  HANDLE v1356; // rax
  HANDLE v1357; // rax
  HMODULE *v1358; // rdi
  __int64 v1359; // rdx
  __int64 (__fastcall **v1360)(); // rax
  __int64 (__fastcall **v1361)(); // rcx
  __int128 v1362; // xmm1
  __int128 v1363; // xmm0
  __int128 v1364; // xmm1
  __int128 v1365; // xmm0
  __int128 v1366; // xmm1
  __int128 v1367; // xmm0
  __int128 v1368; // xmm1
  __int128 v1369; // xmm1
  __int128 v1370; // xmm0
  __int128 v1371; // xmm1
  __int128 v1372; // xmm0
  __int128 v1373; // xmm1
  __int128 v1374; // xmm0
  unsigned __int8 v1375; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1376; // [rsp+60h] [rbp-A0h]
  unsigned int v1377; // [rsp+64h] [rbp-9Ch]
  unsigned int v1378; // [rsp+64h] [rbp-9Ch]
  unsigned int v1379; // [rsp+64h] [rbp-9Ch]
  int v1380; // [rsp+64h] [rbp-9Ch]
  unsigned int v1381; // [rsp+64h] [rbp-9Ch]
  int v1382; // [rsp+64h] [rbp-9Ch]
  int v1383; // [rsp+64h] [rbp-9Ch]
  int v1384; // [rsp+64h] [rbp-9Ch]
  int v1385; // [rsp+64h] [rbp-9Ch]
  __int32 v1386; // [rsp+64h] [rbp-9Ch]
  int v1387; // [rsp+64h] [rbp-9Ch]
  WCHAR *v1388; // [rsp+68h] [rbp-98h]
  size_t v1389; // [rsp+68h] [rbp-98h]
  size_t v1390; // [rsp+68h] [rbp-98h]
  size_t v1391; // [rsp+68h] [rbp-98h]
  size_t v1392; // [rsp+68h] [rbp-98h]
  size_t v1393; // [rsp+68h] [rbp-98h]
  int v1394; // [rsp+68h] [rbp-98h]
  int v1395; // [rsp+68h] [rbp-98h]
  int v1396; // [rsp+68h] [rbp-98h]
  int v1397; // [rsp+68h] [rbp-98h]
  int v1398; // [rsp+68h] [rbp-98h]
  unsigned int v1399; // [rsp+68h] [rbp-98h]
  unsigned int v1400; // [rsp+68h] [rbp-98h]
  int v1401; // [rsp+68h] [rbp-98h]
  int v1402; // [rsp+68h] [rbp-98h]
  int v1403; // [rsp+68h] [rbp-98h]
  unsigned int v1404; // [rsp+68h] [rbp-98h]
  int v1405; // [rsp+68h] [rbp-98h]
  void *lpMem; // [rsp+70h] [rbp-90h]
  void *lpMema; // [rsp+70h] [rbp-90h]
  char *lpMemb; // [rsp+70h] [rbp-90h]
  unsigned int *lpMemc; // [rsp+70h] [rbp-90h]
  void *lpMemd; // [rsp+70h] [rbp-90h]
  void *lpMeme; // [rsp+70h] [rbp-90h]
  void *lpMemf; // [rsp+70h] [rbp-90h]
  char *lpMemg; // [rsp+70h] [rbp-90h]
  LPVOID lpMemh; // [rsp+70h] [rbp-90h]
  void *lpMemi; // [rsp+70h] [rbp-90h]
  void *lpMemj; // [rsp+70h] [rbp-90h]
  void *lpMemk; // [rsp+70h] [rbp-90h]
  void *lpMeml; // [rsp+70h] [rbp-90h]
  LPVOID lpMemm; // [rsp+70h] [rbp-90h]
  void *lpMemn; // [rsp+70h] [rbp-90h]
  void *lpMemo; // [rsp+70h] [rbp-90h]
  void *lpMemp; // [rsp+70h] [rbp-90h]
  void *lpMemq; // [rsp+70h] [rbp-90h]
  void *lpMemr; // [rsp+70h] [rbp-90h]
  void *lpMems; // [rsp+70h] [rbp-90h]
  HAM_ACTIVITY_RM_CONTEXT *lpMemt; // [rsp+70h] [rbp-90h]
  LPVOID lpMemu; // [rsp+70h] [rbp-90h]
  unsigned __int8 *lpMemv; // [rsp+70h] [rbp-90h]
  unsigned int v1429; // [rsp+78h] [rbp-88h]
  unsigned int v1430; // [rsp+78h] [rbp-88h]
  unsigned int v1431; // [rsp+78h] [rbp-88h]
  int v1432; // [rsp+78h] [rbp-88h]
  int v1433; // [rsp+78h] [rbp-88h]
  int v1434; // [rsp+78h] [rbp-88h]
  int v1435; // [rsp+78h] [rbp-88h]
  int v1436; // [rsp+78h] [rbp-88h]
  LPVOID v1437; // [rsp+80h] [rbp-80h]
  LPVOID v1438; // [rsp+80h] [rbp-80h]
  void *v1439; // [rsp+80h] [rbp-80h]
  const unsigned __int16 *v1440; // [rsp+80h] [rbp-80h]
  __int64 v1441; // [rsp+80h] [rbp-80h]
  __int64 v1442; // [rsp+80h] [rbp-80h]
  int v1443; // [rsp+80h] [rbp-80h]
  int v1444; // [rsp+80h] [rbp-80h]
  int v1445; // [rsp+80h] [rbp-80h]
  int v1446; // [rsp+80h] [rbp-80h]
  int v1447; // [rsp+80h] [rbp-80h]
  unsigned int v1448; // [rsp+80h] [rbp-80h]
  unsigned int v1449; // [rsp+80h] [rbp-80h]
  unsigned int v1450; // [rsp+80h] [rbp-80h]
  WCHAR *v1451; // [rsp+80h] [rbp-80h]
  unsigned int v1452; // [rsp+80h] [rbp-80h]
  unsigned int v1453; // [rsp+80h] [rbp-80h]
  _BYTE *v1454; // [rsp+88h] [rbp-78h]
  size_t v1455; // [rsp+88h] [rbp-78h]
  char *v1456; // [rsp+88h] [rbp-78h]
  size_t v1457; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v1458; // [rsp+88h] [rbp-78h]
  size_t v1459; // [rsp+88h] [rbp-78h]
  size_t v1460; // [rsp+88h] [rbp-78h]
  size_t v1461; // [rsp+88h] [rbp-78h]
  size_t v1462; // [rsp+88h] [rbp-78h]
  size_t v1463; // [rsp+88h] [rbp-78h]
  size_t v1464; // [rsp+88h] [rbp-78h]
  size_t v1465; // [rsp+88h] [rbp-78h]
  size_t v1466; // [rsp+88h] [rbp-78h]
  unsigned int *v1467; // [rsp+88h] [rbp-78h]
  void *v1468; // [rsp+88h] [rbp-78h]
  void *v1469; // [rsp+88h] [rbp-78h]
  void *v1470; // [rsp+88h] [rbp-78h]
  void *v1471; // [rsp+88h] [rbp-78h]
  void *v1472; // [rsp+88h] [rbp-78h]
  void *v1473; // [rsp+88h] [rbp-78h]
  unsigned int v1474; // [rsp+90h] [rbp-70h]
  int v1475; // [rsp+90h] [rbp-70h]
  unsigned int v1476; // [rsp+90h] [rbp-70h]
  int v1477; // [rsp+90h] [rbp-70h]
  unsigned int v1478; // [rsp+90h] [rbp-70h]
  __int32 v1479; // [rsp+90h] [rbp-70h]
  SIZE_T v1480; // [rsp+98h] [rbp-68h]
  SIZE_T v1481; // [rsp+98h] [rbp-68h]
  SIZE_T v1482; // [rsp+98h] [rbp-68h]
  WCHAR *v1483; // [rsp+98h] [rbp-68h]
  SIZE_T v1484; // [rsp+98h] [rbp-68h]
  SIZE_T v1485; // [rsp+98h] [rbp-68h]
  SIZE_T v1486; // [rsp+98h] [rbp-68h]
  SIZE_T v1487; // [rsp+98h] [rbp-68h]
  SIZE_T v1488; // [rsp+98h] [rbp-68h]
  SIZE_T v1489; // [rsp+98h] [rbp-68h]
  SIZE_T v1490; // [rsp+98h] [rbp-68h]
  SIZE_T v1491; // [rsp+98h] [rbp-68h]
  SIZE_T v1492; // [rsp+98h] [rbp-68h]
  int *v1493; // [rsp+98h] [rbp-68h]
  int v1494; // [rsp+A0h] [rbp-60h]
  char *v1495; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1496; // [rsp+A0h] [rbp-60h]
  LPVOID v1497; // [rsp+A0h] [rbp-60h]
  LPVOID v1498; // [rsp+A0h] [rbp-60h]
  _OWORD *v1499; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1500; // [rsp+A0h] [rbp-60h]
  void *v1501; // [rsp+A0h] [rbp-60h]
  void *v1502; // [rsp+A0h] [rbp-60h]
  void *v1503; // [rsp+A0h] [rbp-60h]
  _OWORD *v1504; // [rsp+A0h] [rbp-60h]
  int v1505; // [rsp+A8h] [rbp-58h]
  unsigned int v1506; // [rsp+A8h] [rbp-58h]
  LPVOID v1507; // [rsp+A8h] [rbp-58h]
  _BYTE *v1508; // [rsp+A8h] [rbp-58h]
  int v1509; // [rsp+A8h] [rbp-58h]
  int v1510; // [rsp+A8h] [rbp-58h]
  int v1511; // [rsp+A8h] [rbp-58h]
  int v1512; // [rsp+A8h] [rbp-58h]
  unsigned int v1513; // [rsp+A8h] [rbp-58h]
  char v1514; // [rsp+A8h] [rbp-58h]
  int v1515; // [rsp+A8h] [rbp-58h]
  int dwBytes; // [rsp+B0h] [rbp-50h]
  unsigned int dwBytesa; // [rsp+B0h] [rbp-50h]
  int dwBytesb; // [rsp+B0h] [rbp-50h]
  unsigned int dwBytesc; // [rsp+B0h] [rbp-50h]
  unsigned int dwBytesd; // [rsp+B0h] [rbp-50h]
  unsigned __int32 dwBytese; // [rsp+B0h] [rbp-50h]
  int *v1522; // [rsp+B8h] [rbp-48h]
  SIZE_T v1523; // [rsp+B8h] [rbp-48h]
  SIZE_T v1524; // [rsp+B8h] [rbp-48h]
  SIZE_T v1525; // [rsp+B8h] [rbp-48h]
  SIZE_T v1526; // [rsp+B8h] [rbp-48h]
  SIZE_T v1527; // [rsp+B8h] [rbp-48h]
  HAM_ACTIVITY_RM_CONTEXT *v1528; // [rsp+B8h] [rbp-48h]
  SIZE_T v1529; // [rsp+B8h] [rbp-48h]
  SIZE_T v1530; // [rsp+B8h] [rbp-48h]
  unsigned int v1531; // [rsp+B8h] [rbp-48h]
  void *v1532; // [rsp+B8h] [rbp-48h]
  SIZE_T v1533; // [rsp+B8h] [rbp-48h]
  void *v1534; // [rsp+B8h] [rbp-48h]
  _QWORD *v1535; // [rsp+C0h] [rbp-40h]
  SIZE_T v1536; // [rsp+C0h] [rbp-40h]
  char *v1537; // [rsp+C0h] [rbp-40h]
  const unsigned __int16 *v1538; // [rsp+C0h] [rbp-40h]
  SIZE_T v1539; // [rsp+C0h] [rbp-40h]
  SIZE_T v1540; // [rsp+C0h] [rbp-40h]
  SIZE_T v1541; // [rsp+C0h] [rbp-40h]
  SIZE_T v1542; // [rsp+C0h] [rbp-40h]
  SIZE_T v1543; // [rsp+C0h] [rbp-40h]
  SIZE_T v1544; // [rsp+C0h] [rbp-40h]
  unsigned int *v1545; // [rsp+C0h] [rbp-40h]
  SIZE_T v1546; // [rsp+C0h] [rbp-40h]
  void *v1547; // [rsp+C8h] [rbp-38h]
  char *v1548; // [rsp+C8h] [rbp-38h]
  SIZE_T v1549; // [rsp+C8h] [rbp-38h]
  __int32 v1550; // [rsp+C8h] [rbp-38h]
  unsigned int v1551; // [rsp+C8h] [rbp-38h]
  int v1552; // [rsp+C8h] [rbp-38h]
  unsigned int v1553; // [rsp+C8h] [rbp-38h]
  SIZE_T v1554; // [rsp+C8h] [rbp-38h]
  SIZE_T v1555; // [rsp+C8h] [rbp-38h]
  int v1556; // [rsp+D0h] [rbp-30h]
  int v1557; // [rsp+D0h] [rbp-30h]
  unsigned int v1558; // [rsp+D0h] [rbp-30h]
  unsigned int v1559; // [rsp+D0h] [rbp-30h]
  unsigned int v1560; // [rsp+D0h] [rbp-30h]
  unsigned int v1561; // [rsp+D0h] [rbp-30h]
  int v1562; // [rsp+D0h] [rbp-30h]
  unsigned int v1563; // [rsp+D0h] [rbp-30h]
  unsigned int v1564; // [rsp+D0h] [rbp-30h]
  _BYTE *v1565; // [rsp+D0h] [rbp-30h]
  int v1566; // [rsp+D8h] [rbp-28h]
  int v1567; // [rsp+D8h] [rbp-28h]
  unsigned int v1568; // [rsp+D8h] [rbp-28h]
  unsigned int v1569; // [rsp+D8h] [rbp-28h]
  unsigned int v1570; // [rsp+D8h] [rbp-28h]
  int v1571; // [rsp+D8h] [rbp-28h]
  int v1572; // [rsp+D8h] [rbp-28h]
  int v1573; // [rsp+D8h] [rbp-28h]
  int v1574; // [rsp+D8h] [rbp-28h]
  int v1575; // [rsp+D8h] [rbp-28h]
  int v1576; // [rsp+E0h] [rbp-20h]
  unsigned int v1577; // [rsp+E0h] [rbp-20h]
  unsigned int v1578; // [rsp+E0h] [rbp-20h]
  int v1579; // [rsp+E0h] [rbp-20h]
  unsigned int v1580; // [rsp+E0h] [rbp-20h]
  SIZE_T v1581; // [rsp+E0h] [rbp-20h]
  unsigned int v1582; // [rsp+E0h] [rbp-20h]
  int v1583; // [rsp+E0h] [rbp-20h]
  unsigned int v1584; // [rsp+E0h] [rbp-20h]
  int v1585; // [rsp+E0h] [rbp-20h]
  _BYTE *v1586; // [rsp+E8h] [rbp-18h]
  _DWORD *v1587; // [rsp+E8h] [rbp-18h]
  SIZE_T v1588; // [rsp+E8h] [rbp-18h]
  unsigned int v1589; // [rsp+E8h] [rbp-18h]
  int v1590; // [rsp+E8h] [rbp-18h]
  SIZE_T v1591; // [rsp+E8h] [rbp-18h]
  SIZE_T v1592; // [rsp+E8h] [rbp-18h]
  void *v1593; // [rsp+E8h] [rbp-18h]
  void *v1594; // [rsp+F0h] [rbp-10h]
  unsigned int v1595; // [rsp+F0h] [rbp-10h]
  int v1596; // [rsp+F0h] [rbp-10h]
  int v1597; // [rsp+F0h] [rbp-10h]
  int v1598; // [rsp+F0h] [rbp-10h]
  void *v1599; // [rsp+F0h] [rbp-10h]
  _QWORD *v1600; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v1601; // [rsp+F8h] [rbp-8h]
  _DWORD *v1602; // [rsp+F8h] [rbp-8h]
  _BYTE *v1603; // [rsp+F8h] [rbp-8h]
  __int32 v1604; // [rsp+F8h] [rbp-8h]
  unsigned int v1605; // [rsp+F8h] [rbp-8h]
  int v1606; // [rsp+F8h] [rbp-8h]
  int v1607; // [rsp+F8h] [rbp-8h]
  void *v1608; // [rsp+F8h] [rbp-8h]
  SIZE_T v1609; // [rsp+100h] [rbp+0h]
  SIZE_T v1610; // [rsp+100h] [rbp+0h]
  int v1611; // [rsp+100h] [rbp+0h]
  int v1612; // [rsp+100h] [rbp+0h]
  int v1613; // [rsp+100h] [rbp+0h]
  int v1614; // [rsp+100h] [rbp+0h]
  unsigned int v1615; // [rsp+100h] [rbp+0h]
  unsigned int v1616; // [rsp+100h] [rbp+0h]
  WCHAR *v1617; // [rsp+100h] [rbp+0h]
  unsigned int v1618; // [rsp+100h] [rbp+0h]
  WCHAR *lpModuleName; // [rsp+108h] [rbp+8h]
  int lpModuleNamea; // [rsp+108h] [rbp+8h]
  WCHAR *lpModuleNameb; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNamec; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNamed; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNamee; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNamef; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNameg; // [rsp+108h] [rbp+8h]
  HAM_ACTIVITY_RM_CONTEXT *lpModuleNameh; // [rsp+108h] [rbp+8h]
  WCHAR *lpModuleNamei; // [rsp+108h] [rbp+8h]
  LPCWSTR lpModuleNamej; // [rsp+108h] [rbp+8h]
  _BYTE *Src; // [rsp+110h] [rbp+10h]
  unsigned __int64 Srca; // [rsp+110h] [rbp+10h]
  LPVOID Srcb; // [rsp+110h] [rbp+10h]
  void *Srcc; // [rsp+110h] [rbp+10h]
  LPVOID Srcd; // [rsp+110h] [rbp+10h]
  unsigned int *Srce; // [rsp+110h] [rbp+10h]
  _BYTE *Srcf; // [rsp+110h] [rbp+10h]
  unsigned int Size; // [rsp+118h] [rbp+18h]
  void *Sizea; // [rsp+118h] [rbp+18h]
  void *Sizeb; // [rsp+118h] [rbp+18h]
  void *Sizec; // [rsp+118h] [rbp+18h]
  SIZE_T Sized; // [rsp+118h] [rbp+18h]
  _DWORD *Sizee; // [rsp+118h] [rbp+18h]
  void *Sizef; // [rsp+118h] [rbp+18h]
  SIZE_T Sizeg; // [rsp+118h] [rbp+18h]
  void *Sizeh; // [rsp+118h] [rbp+18h]
  int v1646; // [rsp+120h] [rbp+20h]
  unsigned int v1647; // [rsp+120h] [rbp+20h]
  int v1648; // [rsp+120h] [rbp+20h]
  __int32 v1649; // [rsp+120h] [rbp+20h]
  LPCWSTR v1650; // [rsp+128h] [rbp+28h]
  WCHAR *v1651; // [rsp+128h] [rbp+28h]
  LPCWSTR v1652; // [rsp+128h] [rbp+28h]
  LPCWSTR v1653; // [rsp+128h] [rbp+28h]
  LPCWSTR v1654; // [rsp+128h] [rbp+28h]
  WCHAR *v1655; // [rsp+128h] [rbp+28h]
  LPCWSTR v1656; // [rsp+128h] [rbp+28h]
  int v1657; // [rsp+130h] [rbp+30h]
  int v1658; // [rsp+130h] [rbp+30h]
  __int32 v1659; // [rsp+138h] [rbp+38h]
  __int64 v1660; // [rsp+138h] [rbp+38h]
  int v1661; // [rsp+140h] [rbp+40h]
  char v1662; // [rsp+144h] [rbp+44h]
  unsigned int v1663; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v1664; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1665; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1666; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1667; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1668; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1669; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1670; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1671; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1672; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1673; // [rsp+170h] [rbp+70h]
  unsigned int v1674; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1675; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1676; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1677; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1678; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1679; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1680; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v1681; // [rsp+190h] [rbp+90h]
  unsigned int v1682; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1683; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1684; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v1685; // [rsp+1A0h] [rbp+A0h]
  unsigned int v1686; // [rsp+1A4h] [rbp+A4h]
  unsigned int v1687; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1688; // [rsp+1ACh] [rbp+ACh] BYREF
  int v1689; // [rsp+1B0h] [rbp+B0h] BYREF
  SIZE_T v1690; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1691; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1692; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1693; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1694; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1695; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1696; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1697; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1698; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1699; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1700; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1701; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1702; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1703; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1704; // [rsp+1F8h] [rbp+F8h]
  unsigned int v1705; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1706; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1707; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1708; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1709; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1710; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1711; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1712; // [rsp+218h] [rbp+118h] BYREF
  _DWORD *v1713; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1714; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1715; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1716; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1717; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1718; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1719; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1720; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1721; // [rsp+248h] [rbp+148h] BYREF
  wchar_t *v1722; // [rsp+250h] [rbp+150h] BYREF
  void *v1723; // [rsp+258h] [rbp+158h] BYREF
  HLOCAL hMem; // [rsp+260h] [rbp+160h]
  size_t pcchLength; // [rsp+268h] [rbp+168h] BYREF
  size_t v1726; // [rsp+270h] [rbp+170h] BYREF
  size_t v1727; // [rsp+278h] [rbp+178h] BYREF
  size_t v1728; // [rsp+280h] [rbp+180h] BYREF
  size_t v1729; // [rsp+288h] [rbp+188h] BYREF
  size_t v1730; // [rsp+290h] [rbp+190h] BYREF
  void *v1731[2]; // [rsp+298h] [rbp+198h] BYREF
  void *v1732; // [rsp+2A8h] [rbp+1A8h] BYREF
  size_t v1733; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v1734; // [rsp+2B8h] [rbp+1B8h] BYREF
  HMODULE phModule; // [rsp+2C0h] [rbp+1C0h] BYREF
  void *v1736; // [rsp+2C8h] [rbp+1C8h] BYREF
  void *v1737; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned __int64 v1738; // [rsp+2D8h] [rbp+1D8h] BYREF
  unsigned __int64 v1739; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned __int64 v1740; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1741; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int *v1742; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int *v1743; // [rsp+300h] [rbp+200h] BYREF
  __int64 v1744; // [rsp+308h] [rbp+208h] BYREF
  unsigned int *v1745; // [rsp+310h] [rbp+210h] BYREF
  int *v1746; // [rsp+318h] [rbp+218h] BYREF
  __int64 v1747; // [rsp+320h] [rbp+220h] BYREF
  void **v1748; // [rsp+328h] [rbp+228h] BYREF
  _DWORD *v1749; // [rsp+330h] [rbp+230h] BYREF
  void *v1750; // [rsp+338h] [rbp+238h] BYREF
  __int64 v1751; // [rsp+340h] [rbp+240h]
  _OWORD *v1752; // [rsp+348h] [rbp+248h] BYREF
  _QWORD v1753[4]; // [rsp+350h] [rbp+250h] BYREF
  __int64 v1754; // [rsp+370h] [rbp+270h]
  __int64 v1755; // [rsp+378h] [rbp+278h] BYREF
  __int64 v1756; // [rsp+380h] [rbp+280h] BYREF
  __int64 v1757; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1758; // [rsp+390h] [rbp+290h] BYREF
  int *v1759; // [rsp+398h] [rbp+298h]
  _QWORD v1760[2]; // [rsp+3A0h] [rbp+2A0h] BYREF
  size_t v1761; // [rsp+3B0h] [rbp+2B0h] BYREF
  size_t v1762; // [rsp+3B8h] [rbp+2B8h] BYREF
  size_t v1763; // [rsp+3C0h] [rbp+2C0h] BYREF
  void *v1764[2]; // [rsp+3C8h] [rbp+2C8h] BYREF
  void *v1765; // [rsp+3D8h] [rbp+2D8h] BYREF
  size_t v1766; // [rsp+3E0h] [rbp+2E0h] BYREF
  size_t v1767; // [rsp+3E8h] [rbp+2E8h] BYREF
  HMODULE hModule; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v1769; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1770; // [rsp+400h] [rbp+300h] BYREF
  void *v1771; // [rsp+408h] [rbp+308h] BYREF
  unsigned __int64 v1772; // [rsp+410h] [rbp+310h] BYREF
  void *v1773; // [rsp+418h] [rbp+318h] BYREF
  int *v1774; // [rsp+420h] [rbp+320h] BYREF
  _DWORD *v1775; // [rsp+428h] [rbp+328h] BYREF
  __int128 v1776; // [rsp+430h] [rbp+330h]
  __int64 v1777; // [rsp+440h] [rbp+340h]
  void *v1778[2]; // [rsp+448h] [rbp+348h] BYREF
  _QWORD *v1779; // [rsp+458h] [rbp+358h] BYREF
  size_t v1780[2]; // [rsp+460h] [rbp+360h] BYREF
  __int64 v1781; // [rsp+470h] [rbp+370h]
  _QWORD v1782[2]; // [rsp+478h] [rbp+378h] BYREF
  _QWORD v1783[2]; // [rsp+488h] [rbp+388h] BYREF
  _QWORD v1784[2]; // [rsp+498h] [rbp+398h] BYREF
  _QWORD v1785[2]; // [rsp+4A8h] [rbp+3A8h] BYREF
  unsigned int *v1786; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int128 v1787; // [rsp+4C0h] [rbp+3C0h]
  __int128 v1788; // [rsp+4D0h] [rbp+3D0h] BYREF
  size_t v1789[2]; // [rsp+4E0h] [rbp+3E0h] BYREF
  LPVOID v1790[2]; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1791; // [rsp+500h] [rbp+400h]
  _QWORD v1792[2]; // [rsp+508h] [rbp+408h] BYREF
  void *v1793; // [rsp+518h] [rbp+418h] BYREF
  __int128 v1794; // [rsp+520h] [rbp+420h] BYREF
  __int128 v1795; // [rsp+530h] [rbp+430h]
  __int128 v1796; // [rsp+540h] [rbp+440h] BYREF
  __int128 v1797; // [rsp+550h] [rbp+450h]
  int v1798; // [rsp+560h] [rbp+460h] BYREF
  _DWORD v1799[5]; // [rsp+564h] [rbp+464h] BYREF
  SIZE_T v1800; // [rsp+578h] [rbp+478h]
  int v1801; // [rsp+5D0h] [rbp+4D0h] BYREF
  _DWORD v1802[5]; // [rsp+5D4h] [rbp+4D4h] BYREF
  size_t v1803; // [rsp+5E8h] [rbp+4E8h]
  int v1804; // [rsp+640h] [rbp+540h] BYREF
  char v1805[20]; // [rsp+644h] [rbp+544h] BYREF
  SIZE_T v1806; // [rsp+658h] [rbp+558h]
  int v1807; // [rsp+6B0h] [rbp+5B0h] BYREF
  _DWORD v1808[5]; // [rsp+6B4h] [rbp+5B4h] BYREF
  size_t v1809; // [rsp+6C8h] [rbp+5C8h]
  int v1810; // [rsp+720h] [rbp+620h] BYREF
  char v1811[20]; // [rsp+724h] [rbp+624h] BYREF
  SIZE_T v1812; // [rsp+738h] [rbp+638h]
  int v1813; // [rsp+790h] [rbp+690h] BYREF
  _DWORD v1814[5]; // [rsp+794h] [rbp+694h] BYREF
  size_t v1815; // [rsp+7A8h] [rbp+6A8h]
  int v1816; // [rsp+800h] [rbp+700h] BYREF
  _DWORD v1817[3]; // [rsp+804h] [rbp+704h] BYREF
  __int16 v1818; // [rsp+812h] [rbp+712h]
  __int64 v1819; // [rsp+818h] [rbp+718h]
  int v1820; // [rsp+870h] [rbp+770h] BYREF
  char v1821[20]; // [rsp+874h] [rbp+774h] BYREF
  char *v1822; // [rsp+888h] [rbp+788h]
  int v1823; // [rsp+8E0h] [rbp+7E0h] BYREF
  char v1824[20]; // [rsp+8E4h] [rbp+7E4h] BYREF
  SIZE_T v1825; // [rsp+8F8h] [rbp+7F8h]
  int v1826; // [rsp+950h] [rbp+850h] BYREF
  int v1827; // [rsp+954h] [rbp+854h]
  void *v1828; // [rsp+958h] [rbp+858h]
  void *v1829; // [rsp+960h] [rbp+860h]
  void *v1830; // [rsp+968h] [rbp+868h]
  size_t v1831; // [rsp+970h] [rbp+870h]
  void *v1832; // [rsp+978h] [rbp+878h]
  __int64 v1833; // [rsp+980h] [rbp+880h]
  int v1834; // [rsp+988h] [rbp+888h]
  __m128i v1835; // [rsp+98Ch] [rbp+88Ch] BYREF
  __m128i v1836; // [rsp+99Ch] [rbp+89Ch] BYREF
  unsigned int v1837; // [rsp+9ACh] [rbp+8ACh] BYREF
  unsigned int v1838; // [rsp+9B0h] [rbp+8B0h]
  unsigned __int32 v1839; // [rsp+9B4h] [rbp+8B4h]
  unsigned int v1840; // [rsp+9B8h] [rbp+8B8h]
  unsigned __int64 v1841; // [rsp+9C0h] [rbp+8C0h]
  unsigned __int64 v1842; // [rsp+9C8h] [rbp+8C8h]
  __int64 v1843; // [rsp+9D0h] [rbp+8D0h]
  __int64 v1844; // [rsp+9D8h] [rbp+8D8h]
  __int128 v1845; // [rsp+9E0h] [rbp+8E0h] BYREF
  __int64 v1846; // [rsp+9F0h] [rbp+8F0h] BYREF
  unsigned __int32 v1847; // [rsp+9F8h] [rbp+8F8h]
  __int32 v1848; // [rsp+9FCh] [rbp+8FCh]
  __int128 v1849; // [rsp+A00h] [rbp+900h] BYREF
  __int128 v1850; // [rsp+A10h] [rbp+910h] BYREF
  __int128 v1851; // [rsp+A20h] [rbp+920h]
  __int128 v1852; // [rsp+A30h] [rbp+930h] BYREF
  _OWORD v1853[2]; // [rsp+A40h] [rbp+940h] BYREF
  __int128 v1854; // [rsp+A60h] [rbp+960h] BYREF
  __int128 v1855; // [rsp+A70h] [rbp+970h] BYREF
  __int64 v1856; // [rsp+A80h] [rbp+980h]
  __int128 v1857; // [rsp+A88h] [rbp+988h] BYREF
  __int128 v1858; // [rsp+A98h] [rbp+998h] BYREF
  __int64 v1859; // [rsp+AA8h] [rbp+9A8h]
  _DWORD v1860[12]; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int128 v1861; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int128 v1862; // [rsp+AF0h] [rbp+9F0h]
  __int64 v1863; // [rsp+B00h] [rbp+A00h]
  int v1864; // [rsp+B08h] [rbp+A08h]
  __int128 v1865; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1866; // [rsp+B20h] [rbp+A20h]
  __int64 v1867; // [rsp+B30h] [rbp+A30h]
  int v1868; // [rsp+B38h] [rbp+A38h]
  __int128 v1869; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1870; // [rsp+B50h] [rbp+A50h]
  __int64 v1871; // [rsp+B60h] [rbp+A60h]
  int v1872; // [rsp+B68h] [rbp+A68h]
  __int128 v1873; // [rsp+B70h] [rbp+A70h] BYREF
  __int128 v1874; // [rsp+B80h] [rbp+A80h]
  __int64 v1875; // [rsp+B90h] [rbp+A90h]
  int v1876; // [rsp+B98h] [rbp+A98h]
  _DWORD v1877[6]; // [rsp+BA0h] [rbp+AA0h] BYREF
  char v1878; // [rsp+BBAh] [rbp+ABAh]
  unsigned __int16 v1879[34]; // [rsp+BBCh] [rbp+ABCh] BYREF
  _DWORD v1880[6]; // [rsp+C00h] [rbp+B00h] BYREF
  char v1881; // [rsp+C1Ah] [rbp+B1Ah]
  unsigned __int16 v1882[34]; // [rsp+C1Ch] [rbp+B1Ch] BYREF
  _DWORD v1883[6]; // [rsp+C60h] [rbp+B60h] BYREF
  char v1884; // [rsp+C7Ah] [rbp+B7Ah]
  unsigned __int16 v1885[34]; // [rsp+C7Ch] [rbp+B7Ch] BYREF
  _BYTE v1886[68]; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int16 v1887; // [rsp+D04h] [rbp+C04h]
  unsigned __int16 v1888; // [rsp+D66h] [rbp+C66h]
  __int64 v1889; // [rsp+D6Ch] [rbp+C6Ch]
  _OWORD v1890[3]; // [rsp+DA0h] [rbp+CA0h] BYREF
  int v1891; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int128 v1892; // [rsp+DD8h] [rbp+CD8h]
  __int128 v1893; // [rsp+DE8h] [rbp+CE8h]
  __int128 v1894; // [rsp+DF8h] [rbp+CF8h]
  __int64 v1895; // [rsp+E08h] [rbp+D08h]
  __int64 v1896; // [rsp+E10h] [rbp+D10h] BYREF
  char v1897[152]; // [rsp+E18h] [rbp+D18h] BYREF
  int v1898; // [rsp+EB0h] [rbp+DB0h]
  __int16 v1899; // [rsp+EB4h] [rbp+DB4h]
  _BYTE v1900[176]; // [rsp+EC0h] [rbp+DC0h] BYREF
  WCHAR Filename[264]; // [rsp+F70h] [rbp+E70h] BYREF

  v1759 = a1;
  LODWORD(v2) = 0;
  v3 = 0;
  AcquireSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    return (unsigned int)v3;
  }
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  AcquireSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
    goto LABEL_101;
  }
  v1681 = 0;
  v5 = 0LL;
  v1685 = 0;
  v1686 = 0;
  v1646 = 0;
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v6 = dword_1800E97E8;
  v1661 = -1;
  if ( dword_1800E97E8 )
    goto LABEL_42;
  dwBytes = 0;
  v7 = (char *)MemoryAlloc(0x338uLL);
  v1388 = (WCHAR *)v7;
  if ( !v7 )
    goto LABEL_15;
  v8 = 103LL;
  v9 = v7 + 7;
  v10 = 0;
  v11 = (unsigned __int8 *)&unk_1800C1552;
  v12 = 0;
  v13 = 0;
  v14 = -1;
  do
  {
    v15 = *(v11 - 1) | (*(v11 - 2) << 8);
    v16 = v11[2] << 8;
    v17 = *v11;
    v11 += 8;
    v18 = *(v11 - 7) | ((v17 | (v15 << 8)) << 8);
    v19 = v18 ^ v13;
    v20 = *(v11 - 3) | ((*(v11 - 4) | ((*(v11 - 5) | v16) << 8)) << 8);
    v21 = v20 ^ v12 ^ v19 ^ 0xAC987321;
    v22 = (__ROR4__(v21, 22) + 4991 * __ROR4__(v21 + 1419157410, 27)) ^ v19;
    v23 = (43881 * __ROR4__(v22 + 133239679, 9) - __ROR4__(v22, 30)) ^ v21;
    v24 = (24670 * v23 - (v23 >> 13) - 123127970) ^ v22;
    v25 = (2033 * __ROR4__(v24 ^ 0xAB69, 26) - __ROR4__(v24, 30)) ^ v23;
    v26 = (133239679 - (v25 ^ 0xAB69605E)) ^ v24;
    v27 = (43881 * (v26 ^ 0x137F)) ^ __ROR4__(v26, 6) ^ v25;
    v28 = (__ROR4__(v27, 30) + 24670 * __ROR4__(v27 + 133239679, 15)) ^ v26;
    v29 = (2033 * __ROR4__(v28 + 1419157410, 14) - __ROR4__(v28, 24)) ^ v27;
    v30 = __ROR4__(v29, 10) ^ (4991 * __ROR4__(v29 ^ 0xAB69605E, 12)) ^ v28;
    v31 = v29 ^ (v30 >> 10) ^ (43881 * (v30 ^ 0x7F1));
    v32 = (2033 * (__ROR4__(~v31, 5) + 24670)) ^ v30;
    v33 = v31 ^ (v32 - 2033) ^ 0xAB69605E;
    v34 = ((v33 >> 2) + 4991 * __ROR4__(v31 ^ (v32 - 2033) ^ 0xAB6967AF, 30)) ^ v32;
    v35 = (__ROR4__(v34, 25) + 43881 * __ROR4__(v34 - 133239679, 6)) ^ v33;
    v36 = (24670 * (v35 ^ 0x137F) + __ROR4__(v35, 9)) ^ v34;
    v37 = (__ROR4__(v36, 25) + 2033 * __ROR4__(v36 ^ 0xAB69, 27)) ^ v35;
    v38 = v37 ^ v36 ^ 0xAC987321;
    v39 = (4991 * __ROR4__(v38, 3) - 219010071) ^ v37;
    v40 = (24670 * __ROR4__(v39 - 133239679, 1) - __ROR4__(v39, 6)) ^ v38;
    v41 = (__ROR4__(v40, 18) + 2033 * __ROR4__(v40 - 1419157410, 29)) ^ v39;
    v42 = (4991 * __ROR4__(v41 - 1419157410, 17) - __ROR4__(v41, 14)) ^ v40;
    v43 = (v42 >> 3) ^ (43881 * (v42 ^ 0x605E)) ^ v41;
    v44 = 24670 * __ROR4__(v43 ^ 0x7F1137F, 28);
    v45 = __ROR4__(v43, 30);
    v12 = v14 ^ v43;
    v14 = v20;
    v13 = v10 ^ v42 ^ v45 ^ v44;
    *(v9 - 4) = v13;
    *v9 = v12;
    v9 += 8;
    v10 = v18;
    *(v9 - 13) = BYTE1(v13);
    *(v9 - 9) = BYTE1(v12);
    *(v9 - 14) = (unsigned __int16)(v13 >> 8) >> 8;
    *(v9 - 10) = (unsigned __int16)(v12 >> 8) >> 8;
    *(v9 - 15) = __ROR4__((((v13 >> 8) | (v13 << 24)) >> 8) | (((v13 >> 8) | (v13 << 24)) << 24), 8);
    *(v9 - 11) = __ROR4__((((v12 >> 8) | (v12 << 24)) >> 8) | (((v12 >> 8) | (v12 << 24)) << 24), 8);
    --v8;
  }
  while ( v8 );
  v46 = v1388;
  LODWORD(v2) = 0;
  v47 = 0LL;
  v48 = 0;
  v5 = 0LL;
  v49 = 0;
  do
    v48 ^= *((_BYTE *)v1388 + v47++);
  while ( v47 < 0x338 );
  if ( v48 == 64LL )
  {
    *((_BYTE *)v1388 + 823) = 0;
    memset_0(&unk_1800E9390, 0, 0x60uLL);
    v74 = 0;
    while ( *(_BYTE *)v46 )
    {
      v68 = v46;
      v69 = -1LL;
      do
        ++v69;
      while ( v46[v69] );
      v70 = &v46[v69];
      v71 = (char *)&unk_1800E9390 + 24 * v74;
      if ( !GetModuleHandleExW(0, v68, (HMODULE *)v71) )
      {
        v49 = -1073741702;
        break;
      }
      v49 = 0;
      if ( **(_WORD **)v71 == 23117
        && (v336 = *(int *)(*(_QWORD *)v71 + 60LL), (unsigned int)v336 < 0x10000000)
        && (v337 = *(_QWORD *)v71 + v336, v337 >= *(_QWORD *)v71)
        && *(_DWORD *)v337 == 17744 )
      {
        if ( ((*(_WORD *)(v337 + 24) - 267) & 0xFEFF) != 0 )
        {
          v49 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v71 + 12) = *(_QWORD *)(v337 + 136);
          *((_DWORD *)v71 + 2) = *(_DWORD *)(v337 + 80);
        }
      }
      else
      {
        v49 = -1073741701;
      }
      v72 = *(_DWORD *)(v70 + 1);
      v73 = 0;
      v1429 = v72;
      v46 = v70 + 3;
      while ( v73 < v72 )
      {
        v75 = (const CHAR *)v46;
        v76 = -1LL;
        do
          ++v76;
        while ( *((_BYTE *)v46 + v76) );
        v46 = (const WCHAR *)((char *)v46 + v76 + 1);
        if ( v49 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v71, v75);
          if ( !ProcAddress )
            goto LABEL_38;
          off_1800E7000[dwBytes] = ProcAddress;
        }
        ++dwBytes;
        v72 = v1429;
        ++v73;
      }
      ++v74;
    }
LABEL_38:
    if ( v1388 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1388);
    }
    if ( v49 < 0 )
      goto LABEL_15;
    v6 = dword_1800E97E8;
LABEL_42:
    dword_1800E97E8 = v6 + 1;
    goto LABEL_43;
  }
  MemoryFree(v1388);
LABEL_15:
  v50 = 4LL;
  v51 = (HMODULE *)&unk_1800E9390;
  do
  {
    if ( *v51 )
      FreeLibrary(*v51);
    v51 += 3;
    --v50;
  }
  while ( v50 );
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  v52 = 2LL;
  v53 = off_1800E7000;
  v54 = off_1800A91A0;
  do
  {
    v55 = *((_OWORD *)v54 + 1);
    *(_OWORD *)v53 = *(_OWORD *)v54;
    v56 = *((_OWORD *)v54 + 2);
    *((_OWORD *)v53 + 1) = v55;
    v57 = *((_OWORD *)v54 + 3);
    *((_OWORD *)v53 + 2) = v56;
    v58 = *((_OWORD *)v54 + 4);
    *((_OWORD *)v53 + 3) = v57;
    v59 = *((_OWORD *)v54 + 5);
    *((_OWORD *)v53 + 4) = v58;
    v60 = *((_OWORD *)v54 + 6);
    *((_OWORD *)v53 + 5) = v59;
    v61 = *((_OWORD *)v54 + 7);
    v54 += 16;
    *((_OWORD *)v53 + 6) = v60;
    v53 += 16;
    *((_OWORD *)v53 - 1) = v61;
    --v52;
  }
  while ( v52 );
  v62 = *((_OWORD *)v54 + 1);
  *(_OWORD *)v53 = *(_OWORD *)v54;
  v63 = *((_OWORD *)v54 + 2);
  *((_OWORD *)v53 + 1) = v62;
  v64 = *((_OWORD *)v54 + 3);
  *((_OWORD *)v53 + 2) = v63;
  v65 = *((_OWORD *)v54 + 4);
  *((_OWORD *)v53 + 3) = v64;
  v66 = *((_OWORD *)v54 + 5);
  *((_OWORD *)v53 + 4) = v65;
  v67 = *((_OWORD *)v54 + 6);
  *((_OWORD *)v53 + 5) = v66;
  *((_OWORD *)v53 + 6) = v67;
LABEL_43:
  v78 = 0LL;
  _InterlockedExchange(&dword_1800E97EC, 0);
  v79 = 0LL;
  v80 = 0;
  v81 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_44;
  v1390 = off_1800E7110[0]();
  v339 = v1390;
  if ( !v1390 )
  {
    GetLastError();
LABEL_360:
    v1646 = 0;
    goto LABEL_49;
  }
  v1687 = 0;
  v340 = 0LL;
  v1722 = 0LL;
  v341 = 0LL;
  v342 = 0LL;
  while ( 1 )
  {
    v343 = v340;
    if ( !v342 )
      v343 = 0LL;
    if ( ((unsigned int (__fastcall *)(size_t, __int64, wchar_t *, __int64, unsigned int *))off_1800E7130[0])(
           v339,
           2LL,
           v343,
           v341,
           &v1687) )
    {
      v78 = v340;
      v1722 = 0LL;
      goto LABEL_376;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( v340 )
      goto LABEL_370;
    v340 = (wchar_t *)MemoryAlloc(v1687);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1722);
    v1722 = v340;
    v342 = v340;
    if ( !v340 )
    {
      v81 = -2147024882;
      goto LABEL_376;
    }
    v341 = v1687;
    v339 = v1390;
  }
  if ( !LastError )
  {
LABEL_370:
    v81 = -2147467259;
    goto LABEL_376;
  }
  if ( LastError > 0 )
    v81 = (unsigned __int16)LastError | 0x80070000;
  else
    v81 = LastError;
LABEL_376:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1722);
  if ( v81 >= 0 )
  {
    v345 = off_1800E7128[0];
    CurrentThreadId = GetCurrentThreadId();
    v1391 = ((__int64 (__fastcall *)(_QWORD))v345)(CurrentThreadId);
    v347 = v1391;
    if ( v1391 )
    {
      v1688 = 0;
      v349 = 0LL;
      v1723 = 0LL;
      v81 = 0;
      v350 = 0LL;
      v351 = 0LL;
      while ( 1 )
      {
        v352 = v349;
        if ( !v351 )
          v352 = 0LL;
        if ( ((unsigned int (__fastcall *)(size_t, __int64, void *, __int64, unsigned int *))off_1800E7130[0])(
               v347,
               2LL,
               v352,
               v350,
               &v1688) )
        {
          v79 = v349;
          v1723 = 0LL;
          goto LABEL_397;
        }
        v353 = GetLastError();
        if ( v353 != 122 )
          break;
        if ( v349 )
          goto LABEL_391;
        v349 = MemoryAlloc(v1688);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1723);
        v1723 = v349;
        v351 = v349;
        if ( !v349 )
        {
          v81 = -2147024882;
          goto LABEL_397;
        }
        v350 = v1688;
        v347 = v1391;
      }
      if ( !v353 )
      {
LABEL_391:
        v81 = -2147467259;
        goto LABEL_397;
      }
      if ( v353 > 0 )
        v81 = (unsigned __int16)v353 | 0x80070000;
      else
        v81 = v353;
LABEL_397:
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1723);
      if ( v81 < 0 )
      {
LABEL_45:
        if ( !v79 )
          goto LABEL_46;
        goto LABEL_407;
      }
      if ( v78 && !wcscmp_0(v78, L"WinSta0") && v79 && !wcscmp_0((const wchar_t *)v79, L"Default") )
      {
        v1689 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1689) )
        {
          v355 = GetLastError();
          v81 = v355;
          if ( v355 > 0 )
            v81 = (unsigned __int16)v355 | 0x80070000;
          if ( v81 >= 0 )
            v81 = -2147467259;
LABEL_407:
          MemoryFree(v79);
          goto LABEL_46;
        }
        if ( (v1689 & 0xF) == 0 )
          v80 = 1;
      }
LABEL_44:
      v1646 = v80;
      goto LABEL_45;
    }
    v348 = GetLastError();
    v81 = v348;
    if ( v348 > 0 )
      v81 = (unsigned __int16)v348 | 0x80070000;
    if ( v81 >= 0 )
      v81 = -2147467259;
  }
LABEL_46:
  if ( v78 )
    MemoryFree(v78);
  if ( v81 < 0 )
    goto LABEL_360;
LABEL_49:
  v82 = 4LL;
  hMem = LocalAlloc(0x40u, 4uLL);
  if ( !hMem )
  {
    v92 = 0LL;
    v87 = -2147024882;
    goto LABEL_66;
  }
  v1430 = 0;
  v1700 = 0;
  *(_OWORD *)v1780 = 0LL;
  v83 = 0LL;
  v1776 = 0LL;
  v84 = GetProcessHeap();
  v85 = HeapAlloc(v84, 8u, 0xA0uLL);
  v1662 = 56;
  v86 = v85;
  v1389 = 3LL;
  v87 = -1073741801;
  if ( v85 )
  {
    v1437 = v85;
    *v85 = xmmword_1800E79B0[0];
    v85[1] = xmmword_1800E79B0[1];
    v85[2] = xmmword_1800E79B0[2];
    v85[3] = xmmword_1800E79B0[3];
    v85[4] = xmmword_1800E79B0[4];
    v85[5] = xmmword_1800E79B0[5];
    v85[6] = xmmword_1800E79B0[6];
    v85[7] = xmmword_1800E79B0[7];
    v85[8] = xmmword_1800E79B0[8];
    v85[9] = xmmword_1800E79B0[9];
    v88 = GetProcessHeap();
    v89 = HeapAlloc(v88, 8u, 8uLL);
    if ( !v89 )
    {
      v1657 = -1073741801;
      goto LABEL_56;
    }
    *v89 = qword_1800E78F8;
    v1609 = __rdtsc();
    v83 = v89;
    v1547 = v89;
    pcchLength = 0LL;
    if ( StringLengthWorkerW((STRSAFE_PCNZWCH)0xB8, 0xC4uLL, &pcchLength) < 0 )
    {
      pcchLength = 0LL;
LABEL_90:
      v87 = -1073741762;
      goto LABEL_55;
    }
    v1712 = 0;
    v87 = RtlUIntAdd(4LL, (unsigned int)(2 * ++pcchLength), &v1712);
    v1657 = v87;
    if ( v87 < 0 )
      goto LABEL_56;
    v96 = -1;
    if ( v1712 + 196 >= 0xC4 )
      v96 = v1712 + 196;
    v87 = v1712 >= 0xFFFFFF3C ? -805306219 : 0x10000000;
    v1657 = v87;
    if ( v1712 + 196 < 0xC4 )
      goto LABEL_680;
    v97 = v96 + 8;
    v98 = -1;
    if ( v96 + 8 >= v96 )
      v98 = v96 + 8;
    v87 = v97 < v96 ? -805306219 : 0x10000000;
    v1657 = v87;
    if ( v97 < v96 )
      goto LABEL_680;
    v99 = v98 + 8;
    v100 = -1;
    if ( v98 + 8 >= v98 )
      v100 = v98 + 8;
    v87 = v99 < v98 ? -805306219 : 0x10000000;
    v1657 = v87;
    if ( v99 < v98 )
    {
LABEL_680:
      if ( v87 < 0 )
        goto LABEL_56;
      goto LABEL_681;
    }
    HIDWORD(v1780[0]) = v100;
    v101 = v100;
    v102 = GetProcessHeap();
    v103 = HeapAlloc(v102, 8u, v101);
    if ( !v103 )
    {
      v87 = -1073741801;
      v1657 = -1073741801;
      v83 = v1547;
      goto LABEL_56;
    }
    v1780[1] = (size_t)v103;
    LODWORD(v1780[0]) = 0;
    LODWORD(v1782[0]) = 0;
    v1781 = 0LL;
    v83 = v1547;
    v1602 = v103;
    v1657 = RtlULongLongAdd(v103, 4LL, v1782, 8LL);
    v87 = v1657;
    if ( v1657 < 0 )
      goto LABEL_56;
    if ( (unsigned __int64)(v1602 + 2) > v1780[1] + HIDWORD(v1780[0]) )
      goto LABEL_414;
    v357 = (_DWORD *)v1782[0];
    *v1602 = 4;
    *v357 = 0;
    v358 = ++LODWORD(v1780[0]);
    if ( v86 )
    {
      if ( !v356 )
        goto LABEL_127;
    }
    else if ( v356 )
    {
      goto LABEL_127;
    }
    if ( v1780[1] )
    {
      v104 = (unsigned int *)v1780[1];
      for ( i = 0; ; ++i )
      {
        v1377 = v107;
        if ( i >= v358 )
          break;
        v106 = *v104 + 4;
        if ( v106 < 4 || (unsigned int *)((char *)v104 + v106) < v104 )
          goto LABEL_54;
        v104 = (unsigned int *)((char *)v104 + v106);
      }
      if ( v104 + 1 < v104 )
        goto LABEL_54;
      if ( (unsigned __int64)v104 + v356 + 4 > v1780[1] + HIDWORD(v1780[0]) )
        goto LABEL_414;
      *v104 = v356;
      if ( v86 )
      {
        memcpy_0(v104 + 1, v86, v356);
        v107 = v1377;
      }
      v108 = 4;
      v1437 = v86;
    }
    else
    {
      v1714 = 0;
      v1657 = RtlUIntAdd(4LL, v356, &v1714);
      v87 = v1657;
      if ( v1657 < 0 )
        goto LABEL_56;
      v1657 = RtlUIntAdd(HIDWORD(v1780[0]), v1714, (char *)v1780 + 4);
      v87 = v1657;
      if ( v1657 < 0 )
        goto LABEL_56;
    }
    v109 = ++LODWORD(v1780[0]);
    if ( !v107 )
      goto LABEL_127;
    if ( !v1780[1] )
    {
      v1715 = 0;
      v1657 = RtlUIntAdd(v108, v107, &v1715);
      v87 = v1657;
      if ( v1657 < 0 )
        goto LABEL_56;
      v1657 = RtlUIntAdd(HIDWORD(v1780[0]), v1715, (char *)v1780 + 4);
      v87 = v1657;
      if ( v1657 < 0 )
        goto LABEL_56;
      v114 = LODWORD(v1780[0]) + 1;
      goto LABEL_421;
    }
    v110 = (unsigned int *)v1780[1];
    for ( j = 0; j < v109; ++j )
    {
      v112 = *v110 + 4;
      if ( v112 < v108 || (unsigned int *)((char *)v110 + v112) < v110 )
        goto LABEL_54;
      v110 = (unsigned int *)((char *)v110 + v112);
    }
    if ( v110 + 1 >= v110 )
    {
      if ( (unsigned __int64)v110 + v107 + 4 > v1780[1] + HIDWORD(v1780[0]) )
        goto LABEL_414;
      *v110 = v107;
      memcpy_0(v110 + 1, v1547, v107);
      v113 = 4;
      v114 = LODWORD(v1780[0]) + 1;
      v1437 = v86;
LABEL_421:
      LODWORD(v1780[0]) = v114;
      LODWORD(v1783[0]) = 0;
      v1782[1] = 0LL;
      if ( v1780[1] )
      {
        v364 = (unsigned int *)v1780[1];
        v365 = 0;
        v1726 = v1780[1];
        while ( v365 < v114 )
        {
          v366 = *v364;
          v1717 = 0;
          v1657 = RtlUIntAdd(4LL, v366, &v1717);
          v87 = v1657;
          if ( v1657 < 0 )
            goto LABEL_56;
          v1657 = RtlULongLongAdd(v367, v1717, &v1726, v367);
          v87 = v1657;
          if ( v1657 < 0 )
            goto LABEL_56;
          v364 = (unsigned int *)v1726;
          v365 = v368 + 1;
        }
        v1657 = RtlULongLongAdd(v364, 4LL, v1783, v364);
        v87 = v1657;
        if ( v1657 >= 0 )
        {
          if ( (unsigned __int64)(v369 + 3) > v1780[1] + HIDWORD(v1780[0]) )
            goto LABEL_414;
          v363 = (SIZE_T *)v1783[0];
          v360 = (const wchar_t *)v1609;
          *v369 = 8;
          *v363 = v1609;
          v362 = LODWORD(v1780[0]) + 1;
          goto LABEL_425;
        }
      }
      else
      {
        v1716 = 0;
        v1657 = RtlUIntAdd(v113, 8LL, &v1716);
        v87 = v1657;
        if ( v1657 < 0 )
          goto LABEL_56;
        v87 = RtlUIntAdd(HIDWORD(v1780[0]), v1716, (char *)v1780 + 4);
        v1657 = v87;
        if ( v87 >= 0 )
        {
          v362 = v361 + LODWORD(v1780[0]);
LABEL_425:
          LODWORD(v1780[0]) = v362;
          goto LABEL_161;
        }
      }
      if ( v87 < 0 )
        goto LABEL_56;
LABEL_161:
      v1727 = 0LL;
      if ( StringCchLengthW(v360, v359, &v1727) >= 0 )
      {
        v1657 = RtlULongLongAdd(v1727, 1LL, &v1727, 1LL);
        v87 = v1657;
        if ( v1657 < 0 )
          goto LABEL_168;
        LODWORD(v1784[0]) = 0;
        v1783[1] = 0LL;
        if ( 2 * (_DWORD)v1727 )
        {
          if ( !v1780[1] )
          {
            v1718 = 0;
            v1657 = RtlUIntAdd(4LL, (unsigned int)(2 * v1727), &v1718);
            v87 = v1657;
            if ( v1657 >= 0 )
            {
              v131 = RtlUIntAdd(HIDWORD(v1780[0]), v1718, (char *)v1780 + 4);
              v130 = v1780[0];
              v87 = v131;
              v1657 = v131;
              if ( v131 >= 0 )
              {
                v130 = v132 + LODWORD(v1780[0]);
                v1657 = 0;
                LODWORD(v1780[0]) += v132;
                v87 = 0;
              }
            }
            goto LABEL_168;
          }
          v370 = (unsigned int *)v1780[1];
          v371 = 0;
          v1728 = v1780[1];
          while ( 1 )
          {
            v1378 = v371;
            if ( v371 >= v130 )
              break;
            v372 = *v370;
            v1719 = 0;
            v1657 = RtlUIntAdd(4LL, v372, &v1719);
            v87 = v1657;
            if ( v1657 < 0 )
              goto LABEL_168;
            v1657 = RtlULongLongAdd(v373, v1719, &v1728, v373);
            v87 = v1657;
            if ( v1657 < 0 )
              goto LABEL_168;
            v370 = (unsigned int *)v1728;
            v371 = v1378 + 1;
          }
          v1657 = RtlULongLongAdd(v370, 4LL, v1784, v370);
          v87 = v1657;
          if ( v1657 < 0 )
          {
LABEL_168:
            if ( v87 < 0 )
              goto LABEL_56;
            LODWORD(v1785[0]) = 0;
            v1784[1] = 0LL;
            if ( v1780[1] )
            {
              v378 = (unsigned int *)v1780[1];
              v379 = 0;
              v1729 = v1780[1];
              while ( v379 < v130 )
              {
                v380 = *v378;
                v1684 = 0;
                v1657 = RtlUIntAdd(4LL, v380, &v1684);
                v87 = v1657;
                if ( v1657 < 0 )
                  goto LABEL_56;
                v1657 = RtlULongLongAdd(v381, v1684, &v1729, v381);
                v87 = v1657;
                if ( v1657 < 0 )
                  goto LABEL_56;
                v378 = (unsigned int *)v1729;
                v379 = v382 + 1;
              }
              v1657 = RtlULongLongAdd(v378, 4LL, v1785, v378);
              v87 = v1657;
              if ( v1657 < 0 )
              {
LABEL_172:
                if ( v87 < 0 )
                  goto LABEL_56;
LABEL_173:
                LODWORD(v1786) = 0;
                v1785[1] = 0LL;
                if ( v1780[1] )
                {
                  v384 = (unsigned int *)v1780[1];
                  v385 = 0;
                  v1730 = v1780[1];
                  while ( v385 < v136 )
                  {
                    v386 = *v384;
                    v1664 = 0;
                    v1657 = RtlUIntAdd(4LL, v386, &v1664);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlULongLongAdd(v387, v1664, &v1730, v387);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v384 = (unsigned int *)v1730;
                    v385 = v388 + 1;
                  }
                  v1657 = RtlULongLongAdd(v384, 4LL, &v1786, v384);
                  v87 = v1657;
                  if ( v1657 >= 0 )
                  {
                    if ( (unsigned __int64)(v389 + 2) > v1780[1] + HIDWORD(v1780[0]) )
                      goto LABEL_414;
                    v390 = v1786;
                    *v389 = v138;
                    *v390 = v138;
                    LODWORD(v1780[0]) += v138 - 3;
LABEL_463:
                    v1665 = 0;
                    v1657 = RtlUIntAdd(v138, v138, &v1665);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1666 = v1665;
                    v1667 = 0;
                    v1657 = RtlUIntAdd(v391, 8LL, &v1667);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlUIntAdd(v392, v1667, &v1666);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_290;
                    v1668 = 0;
                    v1657 = RtlUIntAdd(v393, v393, &v1668);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlUIntAdd(v1666, v1668, &v1666);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_290;
                    v1669 = 0;
                    v1657 = RtlUIntAdd(v394, v394, &v1669);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlUIntAdd(v1666, v1669, &v1666);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_290;
                    v1670 = 0;
                    v1657 = RtlUIntAdd(v395, v395, &v1670);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlUIntAdd(v1666, v1670, &v1666);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_290;
                    v1671 = 0;
                    v1657 = RtlUIntAdd(v396, v396, &v1671);
                    v87 = v1657;
                    if ( v1657 < 0 )
                      goto LABEL_56;
                    v1657 = RtlUIntAdd(v1666, v1671, &v1666);
                    v87 = v1657;
                    if ( v1657 < 0 )
                    {
LABEL_290:
                      if ( v87 < 0 )
                        goto LABEL_56;
                    }
                    else
                    {
                      v1430 = v1666;
                    }
                    v1601 = 0LL;
                    v1379 = 0;
                    v1587 = 0LL;
                    v1594 = 0LL;
                    v1474 = 0;
                    v1522 = 0LL;
                    v1535 = 0LL;
                    lpModuleName = 0LL;
                    v1507 = (LPVOID)__rdtsc();
                    v1672 = 8;
                    v142 = RtlUIntAdd(8LL, HIDWORD(v1780[0]), &v1672);
                    if ( v142 < 0 )
                    {
LABEL_181:
                      v87 = v142 | 0x10000000;
                      v1657 = v87;
                      if ( v87 < 0 )
                        goto LABEL_135;
                      if ( !v1601 )
                      {
                        v87 = -805306355;
                        goto LABEL_55;
                      }
                      v1480 = v143;
                      if ( !v143 || (Size = v143 + 8, (Src = MemoryAlloc(v143 + 8LL)) == 0LL) )
                      {
                        v120 = v1601;
                        v87 = -805306367;
                        v1657 = -805306367;
LABEL_632:
                        v472 = GetProcessHeap();
                        HeapFree(v472, 0, v120);
LABEL_137:
                        if ( v1587 )
                        {
                          lpMemn = (void *)*((_QWORD *)v1587 + 1);
                          if ( lpMemn )
                          {
                            v473 = GetProcessHeap();
                            HeapFree(v473, 0, lpMemn);
                            *((_QWORD *)v1587 + 1) = 0LL;
                          }
                          lpMemo = (void *)*((_QWORD *)v1587 + 3);
                          if ( lpMemo )
                          {
                            v474 = GetProcessHeap();
                            HeapFree(v474, 0, lpMemo);
                            *((_QWORD *)v1587 + 3) = 0LL;
                          }
                          lpMemp = (void *)*((_QWORD *)v1587 + 5);
                          if ( lpMemp )
                          {
                            v475 = GetProcessHeap();
                            HeapFree(v475, 0, lpMemp);
                            *((_QWORD *)v1587 + 5) = 0LL;
                          }
                          v476 = GetProcessHeap();
                          HeapFree(v476, 0, v1587);
                        }
                        if ( v1594 )
                        {
                          v477 = GetProcessHeap();
                          HeapFree(v477, 0, v1594);
                        }
                        if ( v1522 )
                        {
                          v478 = GetProcessHeap();
                          HeapFree(v478, 0, v1522);
                        }
                        if ( v1535 )
                        {
                          lpMemq = (void *)v1535[1];
                          if ( lpMemq )
                          {
                            v479 = GetProcessHeap();
                            HeapFree(v479, 0, lpMemq);
                            v1535[1] = 0LL;
                          }
                          lpMemr = (void *)v1535[3];
                          if ( lpMemr )
                          {
                            v480 = GetProcessHeap();
                            HeapFree(v480, 0, lpMemr);
                            v1535[3] = 0LL;
                          }
                          lpMems = (void *)v1535[5];
                          if ( lpMems )
                          {
                            v481 = GetProcessHeap();
                            HeapFree(v481, 0, lpMems);
                            v1535[5] = 0LL;
                          }
                          v482 = GetProcessHeap();
                          HeapFree(v482, 0, v1535);
                        }
                        if ( lpModuleName )
                        {
                          v483 = GetProcessHeap();
                          HeapFree(v483, 0, lpModuleName);
                        }
                        if ( v87 < 0 )
                          goto LABEL_154;
                        if ( (_DWORD)v1776 )
                        {
                          if ( !*((_QWORD *)&v1776 + 1) )
                            goto LABEL_648;
                          v1741 = (int *)*((_QWORD *)&v1776 + 1);
                          v121 = **((_DWORD **)&v1776 + 1);
                          v1657 = RtlULongLongAdd(*((_QWORD *)&v1776 + 1), 4LL, &v1741, v118);
                          v87 = v1657;
                          if ( v1657 < 0 )
                          {
LABEL_154:
                            v83 = v1547;
                            goto LABEL_56;
                          }
                          v125 = v1741;
                          if ( !v121 )
                            v125 = 0LL;
                          v1741 = v125;
                          if ( v121 != (_DWORD)v124 )
                            goto LABEL_152;
                          v87 = *v125;
                          v1657 = v87;
                          if ( v87 == -805306333 )
                          {
                            v1700 = -2147024774;
                          }
                          else
                          {
                            v1700 = v87;
                            if ( v87 != -2147024774 )
                            {
                              v1700 = v87;
                              if ( v87 < 0 )
                                goto LABEL_154;
                            }
                          }
                          if ( (_DWORD)v1776 == 6 )
                          {
                            if ( *((_QWORD *)&v1776 + 1) )
                            {
                              v265 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                              v266 = 0;
                              v1742 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                              while ( v266 < v123 )
                              {
                                v1657 = RtlULongLongAdd(v265, v124, &v1742, *v265);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_154;
                                v1657 = RtlULongLongAdd(v1742, (unsigned int)v267, &v1742, v267);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_154;
                                v265 = v1742;
                                v266 += v123;
                              }
                              v484 = *v265;
                              v1657 = RtlULongLongAdd(v265, v124, &v1742, v122);
                              v87 = v1657;
                              if ( v1657 < 0 )
                                goto LABEL_154;
                              v485 = (LPVOID *)v1742;
                              if ( !v484 )
                                v485 = 0LL;
                              v1742 = (unsigned int *)v485;
                              if ( v484 != 8 )
                              {
LABEL_152:
                                v87 = -1073741789;
LABEL_153:
                                v1657 = v87;
                                goto LABEL_154;
                              }
                              v83 = v1547;
                              lpMemh = *v485;
                              if ( *((_QWORD *)&v1776 + 1) )
                              {
                                v268 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                                v269 = 0LL;
                                v1743 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                                while ( (unsigned int)v269 < 2 )
                                {
                                  v1657 = RtlULongLongAdd(v268, v273, &v1743, v269);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_56;
                                  v1657 = RtlULongLongAdd(v1743, v271, &v1743, v270);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_56;
                                  v268 = v1743;
                                  v269 = (unsigned int)(v272 + 1);
                                }
                                v1657 = RtlULongLongAdd(v268, v273, &v1743, *v268);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_56;
                                v487 = v1743;
                                if ( !v486 )
                                  v487 = 0LL;
                                v1743 = v487;
                                if ( v486 != (_DWORD)v279 )
                                  goto LABEL_414;
                                v1506 = *v487;
                                if ( *((_QWORD *)&v1776 + 1) )
                                {
                                  v274 = *((_QWORD *)&v1776 + 1);
                                  v275 = 0LL;
                                  v1744 = *((_QWORD *)&v1776 + 1);
                                  while ( (unsigned int)v275 < 3 )
                                  {
                                    v1657 = RtlULongLongAdd(v274, v279, &v1744, v275);
                                    v87 = v1657;
                                    if ( v1657 < 0 )
                                      goto LABEL_56;
                                    v1657 = RtlULongLongAdd(v1744, v277, &v1744, v276);
                                    v87 = v1657;
                                    if ( v1657 < 0 )
                                      goto LABEL_56;
                                    v274 = v1744;
                                    v275 = (unsigned int)(v278 + 1);
                                  }
                                  v1657 = RtlULongLongAdd(v274, 4LL, &v1744, v275);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_56;
                                  v280 = v1744;
                                  if ( !v488 )
                                    v280 = 0LL;
                                  v1744 = v280;
                                  if ( *((_QWORD *)&v1776 + 1) )
                                  {
                                    v281 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                                    v282 = 0LL;
                                    v1745 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                                    while ( (unsigned int)v282 < 4 )
                                    {
                                      v1558 = *v281;
                                      v1657 = RtlULongLongAdd(v281, 4LL, &v1745, v282);
                                      v87 = v1657;
                                      if ( v1657 < 0 )
                                        goto LABEL_56;
                                      v1657 = RtlULongLongAdd(v1745, v1558, &v1745, v283);
                                      v87 = v1657;
                                      if ( v1657 < 0 )
                                        goto LABEL_56;
                                      v281 = v1745;
                                      v282 = (unsigned int)(v284 + 1);
                                    }
                                    v1657 = RtlULongLongAdd(v281, 4LL, &v1745, *v281);
                                    v87 = v1657;
                                    if ( v1657 < 0 )
                                      goto LABEL_56;
                                    v490 = v1745;
                                    if ( !v489 )
                                      v490 = 0LL;
                                    v1745 = v490;
                                    if ( v489 == 4 )
                                    {
                                      v1559 = *v490;
                                      if ( *((_QWORD *)&v1776 + 1) )
                                      {
                                        v285 = (unsigned int *)*((_QWORD *)&v1776 + 1);
                                        v286 = 0LL;
                                        v1746 = (int *)*((_QWORD *)&v1776 + 1);
                                        while ( (unsigned int)v286 < 5 )
                                        {
                                          v1578 = *v285;
                                          v1657 = RtlULongLongAdd(v285, 4LL, &v1746, v286);
                                          v87 = v1657;
                                          if ( v1657 < 0 )
                                            goto LABEL_56;
                                          v1657 = RtlULongLongAdd(v1746, v1578, &v1746, v287);
                                          v87 = v1657;
                                          if ( v1657 < 0 )
                                            goto LABEL_56;
                                          v285 = (unsigned int *)v1746;
                                          v286 = (unsigned int)(v288 + 1);
                                        }
                                        v491 = RtlULongLongAdd(v285, 4LL, &v1746, *v285);
                                        v87 = v491;
                                        if ( v491 < 0 )
                                        {
                                          v1657 = v491;
                                          goto LABEL_56;
                                        }
                                        v495 = v1746;
                                        if ( !v492 )
                                          v495 = 0LL;
                                        v1746 = v495;
                                        if ( v492 == 4 )
                                        {
                                          if ( (LPVOID)v1609 != lpMemh )
                                          {
                                            v87 = -1073425151;
                                            goto LABEL_55;
                                          }
                                          v1646 = *v495;
                                          v1686 = v1506;
                                          if ( v1559 > 4 || (unsigned int)v494 > 4 )
                                          {
                                            v87 = -2147024774;
                                            goto LABEL_55;
                                          }
                                          memcpy_0(hMem, v493, v494);
LABEL_681:
                                          if ( v1700 )
                                            v87 = v1700;
                                          goto LABEL_55;
                                        }
                                        goto LABEL_414;
                                      }
                                      goto LABEL_127;
                                    }
LABEL_414:
                                    v87 = -1073741789;
                                    goto LABEL_55;
                                  }
                                }
                              }
LABEL_127:
                              v87 = -1073741811;
                              goto LABEL_55;
                            }
LABEL_648:
                            v87 = -1073741811;
                            goto LABEL_153;
                          }
                        }
                        v87 = -1073425151;
                        goto LABEL_153;
                      }
                      v144 = 0;
                      v1375 = 0;
                      v145 = 0LL;
                      if ( v1379 )
                      {
                        do
                          v144 ^= v1601[v145++];
                        while ( v145 < v1379 );
                        v1375 = v144;
                      }
                      v146 = Src;
                      v1842 = 0xC81ECB17B1B54A58uLL;
                      v147 = -1;
                      v1586 = Src;
                      v1658 = 0;
                      v1566 = 0;
                      v148 = v1601;
                      v149 = 0;
                      v150 = v1379 & 7;
                      if ( (v1379 & 7) != 0 )
                      {
                        v1567 = 0;
                        v401 = 0;
                        v402 = 56;
                        v403 = 0;
                        do
                        {
                          v404 = *v148++;
                          if ( v403 >= 4 )
                          {
                            v405 = v1567;
                            v401 |= v404 << v402;
                          }
                          else
                          {
                            v405 = (v404 << (v402 - 32)) | v1567;
                            v1567 = v405;
                          }
                          ++v403;
                          v402 -= 8;
                        }
                        while ( (int)v403 < v150 );
                        v144 = v1375;
                        v149 = v405 ^ 0xB17A307A;
                        v406 = v401;
                        v407 = v401 ^ 0x42F6B18D;
                        v408 = v405 ^ 0xB17A307A;
                        v409 = 0;
                        v410 = v407;
                        v1579 = 0;
                        do
                        {
                          v1566 = v405;
                          v1508 = v1586 + 1;
                          if ( v409 >= 4 )
                          {
                            v410 = (v410 << 8) | HIBYTE(v410);
                            v411 = v410;
                          }
                          else
                          {
                            v408 = (v408 << 8) | HIBYTE(v408);
                            v411 = v408;
                          }
                          *v1586 = v411;
                          v409 = v1579 + 1;
                          ++v1586;
                          v1579 = v409;
                        }
                        while ( v409 < v150 );
                        v146 = v1508;
                        v1658 = v406;
                        v1547 = v83;
                        LODWORD(v2) = 0;
                        v1437 = v86;
                        v5 = 0LL;
                        if ( (unsigned int)v150 <= 4 )
                        {
                          v147 = 0;
                          if ( (unsigned int)v150 >= 4 )
                            goto LABEL_189;
                          v149 = v149 >> (8 * (4 - v150)) << (8 * (4 - v150));
                        }
                        else
                        {
                          v147 = v407 >> (8 * (8 - v150)) << (8 * (8 - v150));
                        }
                        v146 = v1508;
                      }
LABEL_189:
                      v151 = v1379;
                      if ( (unsigned __int64)v1379 >> 3 )
                      {
                        v152 = v148 + 2;
                        v153 = HIDWORD(v1842);
                        v154 = v1566;
                        v155 = v1658;
                        v1576 = WORD1(v1842);
                        v156 = WORD2(v1842);
                        v1556 = HIWORD(v1842);
                        v157 = HIDWORD(v1842) ^ 0xB1B54A58;
                        v158 = (unsigned __int64)v1379 >> 3;
                        lpMemb = v146 + 7;
                        do
                        {
                          v159 = v152[5] | ((v152[4] | ((v152[3] | (v152[2] << 8)) << 8)) << 8);
                          v160 = v159 ^ v147;
                          v161 = (v152[1] | ((*v152 | ((*(v152 - 1) | (*(v152 - 2) << 8)) << 8)) << 8)) ^ v153 ^ (v160 - 19032) ^ v149;
                          v162 = (__ROR4__(v161, 7) + WORD1(v1842) * __ROR4__(v153 ^ v161, 15)) ^ v160;
                          v163 = (v156 * __ROR4__(v162 - 1313519016, 9) - __ROR4__(v162, 10)) ^ v161;
                          v164 = (__ROR4__(v163, 27) + HIWORD(v1842) * __ROR4__(v156 ^ v163, 28)) ^ v162;
                          v165 = (v153 - (v164 ^ 0xB1B54A58)) ^ v163;
                          v166 = (WORD1(v1842) * (v165 - 19032) - (v165 >> 6)) ^ v164;
                          v167 = (19032 * (v156 ^ __ROR4__(v166, 15))) ^ v165;
                          v168 = (v156 * (HIWORD(v1842) + __ROR4__(~v167, 3))) ^ v166;
                          v169 = (v168 - v153 - 19032) ^ v167;
                          v170 = (v1576 * (v1556 ^ v169)) ^ __ROR4__(v169, 10) ^ v168;
                          v171 = __ROR4__(v170, 3) ^ (v156 * __ROR4__(v170 ^ 0x4A58, 26)) ^ v169;
                          v172 = (19032 * (__ROR4__(v171, 15) - HIWORD(v1842))) ^ v170;
                          v173 = (v172 >> 15) ^ (19032 * ((8 * (v172 - v156)) | ((v172 - v156) >> 29))) ^ (v172 >> 1) ^ (19032 * (HIWORD(v1842) ^ v172)) ^ v171;
                          v174 = (WORD1(v1842) * (v173 - v156) - (v173 >> 13)) ^ v172;
                          v175 = __ROR4__(v174, 11) ^ (v156 * __ROR4__(-1313519016 - v174, 9)) ^ v173;
                          v176 = (v175 + 1313519016 - HIWORD(v1842)) ^ v174;
                          v177 = (19032 * (v1576 ^ v176) - __ROR4__(v176, 7)) ^ v175;
                          v178 = (WORD1(v1842) * __ROR4__(HIWORD(v1842) ^ v177, 28) - __ROR4__(v177, 16)) ^ v176;
                          v179 = (__ROR4__(v178, 4) + v156 * __ROR4__(-1313519016 - v178, 10)) ^ v177;
                          v180 = __ROR4__(v179, 9) ^ (HIWORD(v1842) * __ROR4__(v179 + 1313519016, 4)) ^ v178;
                          v181 = (19032 * __ROR4__(v180 ^ v153, 24) - __ROR4__(v180, 30)) ^ v179;
                          v182 = (WORD1(v1842) * __ROR4__(v153 - v181, 11) - __ROR4__(v181, 12)) ^ v180;
                          v183 = (v182 >> 8) ^ (v156 * (WORD1(v1842) ^ v182)) ^ v181;
                          v184 = v183 ^ v157;
                          v149 = v154 ^ v183;
                          v147 = v155 ^ v184 ^ v182;
                          v185 = lpMemb;
                          lpMemb += 8;
                          v154 = v152[1] | ((*v152 | ((*(v152 - 1) | (*(v152 - 2) << 8)) << 8)) << 8);
                          *(v185 - 4) = v149;
                          *v185 = v147;
                          *(v185 - 5) = BYTE1(v149);
                          *(v185 - 1) = BYTE1(v147);
                          v152 += 8;
                          *(v185 - 6) = (unsigned __int16)(v149 >> 8) >> 8;
                          v153 = HIDWORD(v1842);
                          *(v185 - 2) = (unsigned __int16)(v147 >> 8) >> 8;
                          *(v185 - 7) = __ROR4__(
                                          (((v149 >> 8) | (v149 << 24)) >> 8) | (((v149 >> 8) | (v149 << 24)) << 24),
                                          8);
                          *(v185 - 3) = __ROR4__(
                                          (((v147 >> 8) | (v147 << 24)) >> 8) | (((v147 >> 8) | (v147 << 24)) << 24),
                                          8);
                          --v158;
                          v155 = v159;
                        }
                        while ( v158 );
                        v144 = v1375;
                        LODWORD(v2) = 0;
                        v86 = v1437;
                        v5 = 0LL;
                        v151 = v1480;
                      }
                      *(_QWORD *)&Src[v151] = v144;
                      v186 = GetProcessHeap();
                      v187 = (unsigned int *)HeapAlloc(v186, 8u, 0x30uLL);
                      v188 = 0LL;
                      if ( v187 )
                        v188 = v187;
                      lpMemc = v188;
                      v189 = v187 == 0LL ? 0xC0000017 : 0;
                      if ( v187 )
                      {
                        *v188 = Size;
                        v190 = GetProcessHeap();
                        v191 = HeapAlloc(v190, 8u, Size);
                        if ( v191 )
                        {
                          *((_QWORD *)lpMemc + 1) = v191;
                          memcpy_0(v191, Src, Size);
                          v192 = v1547;
                          lpMemc[4] = 160;
                          v289 = GetProcessHeap();
                          v290 = HeapAlloc(v289, 8u, 0xA0uLL);
                          if ( v290 )
                          {
                            *((_QWORD *)lpMemc + 3) = v290;
                            v291 = (_OWORD *)*((_QWORD *)lpMemc + 3);
                            *v291 = xmmword_1800E7900[0];
                            v291[1] = xmmword_1800E7900[1];
                            v291[2] = xmmword_1800E7900[2];
                            v291[3] = xmmword_1800E7900[3];
                            v291[4] = xmmword_1800E7900[4];
                            v291[5] = xmmword_1800E7900[5];
                            v291[6] = xmmword_1800E7900[6];
                            v291[7] = xmmword_1800E7900[7];
                            v291[8] = xmmword_1800E7900[8];
                            v291[9] = xmmword_1800E7900[9];
                            lpMemc[8] = 8;
                            v292 = GetProcessHeap();
                            v293 = HeapAlloc(v292, 8u, 8uLL);
                            if ( v293 )
                            {
                              *((_QWORD *)lpMemc + 5) = v293;
                              v189 = 0;
                              **((_QWORD **)lpMemc + 5) = qword_1800E79A0;
                              v198 = lpMemc;
                              goto LABEL_208;
                            }
                            v189 = -1073741801;
                          }
                          else
                          {
                            v189 = -1073741801;
                          }
LABEL_199:
                          v193 = lpMemc;
                          if ( lpMemc )
                          {
                            Sizea = (void *)*((_QWORD *)lpMemc + 1);
                            if ( Sizea )
                            {
                              v194 = GetProcessHeap();
                              HeapFree(v194, 0, Sizea);
                              v193 = lpMemc;
                              *((_QWORD *)lpMemc + 1) = 0LL;
                            }
                            Sizeb = (void *)*((_QWORD *)v193 + 3);
                            if ( Sizeb )
                            {
                              v195 = GetProcessHeap();
                              HeapFree(v195, 0, Sizeb);
                              v193 = lpMemc;
                              *((_QWORD *)lpMemc + 3) = 0LL;
                            }
                            Sizec = (void *)*((_QWORD *)v193 + 5);
                            if ( Sizec )
                            {
                              v196 = GetProcessHeap();
                              HeapFree(v196, 0, Sizec);
                              *((_QWORD *)lpMemc + 5) = 0LL;
                            }
                            v197 = GetProcessHeap();
                            HeapFree(v197, 0, lpMemc);
                          }
                          v198 = 0LL;
LABEL_208:
                          v1547 = v192;
                          v1587 = v198;
                          v199 = GetProcessHeap();
                          HeapFree(v199, 0, Src);
                          v118 = (unsigned __int64)v1587;
                          Sized = (SIZE_T)v192;
                          v87 = v189 | 0x10000000;
                          v1657 = v87;
                          if ( v87 < 0 )
                            goto LABEL_135;
                          v200 = (unsigned int)*v1587;
                          v1673 = 0;
                          v1674 = 4;
                          v202 = RtlUIntAdd(4LL, v200, &v1674);
                          if ( v202 >= 0 )
                          {
                            v202 = RtlUIntAdd(v1674, v201, &v1674);
                            if ( v202 >= 0 )
                            {
                              v202 = RtlUIntAdd(v1674, *(unsigned int *)(v118 + 16), &v1674);
                              if ( v202 >= 0 )
                              {
                                v202 = RtlUIntAdd(v1674, v203, &v1674);
                                if ( v202 >= 0 )
                                {
                                  v202 = RtlUIntAdd(v1674, *(unsigned int *)(v118 + 32), &v1674);
                                  if ( v202 >= 0 )
                                  {
                                    v204 = v1674;
                                    v1673 = v1674;
                                    v294 = GetProcessHeap();
                                    v295 = HeapAlloc(v294, 8u, v204);
                                    v296 = v295;
                                    if ( !v295 )
                                    {
                                      v87 = -805306345;
                                      goto LABEL_134;
                                    }
                                    v1732 = v295;
                                    *v295 = *v1587;
                                    v202 = RtlULongLongAdd(v295, 4LL, &v1732, v1587);
                                    v412 = v296;
                                    if ( v202 < 0 )
                                      goto LABEL_299;
                                    memcpy_0(v1732, *(const void **)(v118 + 8), *(unsigned int *)v118);
                                    v202 = RtlULongLongAdd(v1732, (unsigned int)*v1587, &v1732, v1587);
                                    v412 = v296;
                                    if ( v202 < 0 )
                                      goto LABEL_299;
                                    v413 = v1732;
                                    *(_DWORD *)v1732 = *(_DWORD *)(v118 + 16);
                                    v202 = RtlULongLongAdd(v413, 4LL, &v1732, v118);
                                    v412 = v296;
                                    if ( v202 < 0 )
                                      goto LABEL_299;
                                    memcpy_0(v1732, *(const void **)(v118 + 24), *(unsigned int *)(v118 + 16));
                                    v202 = RtlULongLongAdd(v1732, (unsigned int)v1587[4], &v1732, v1587);
                                    v412 = v296;
                                    if ( v202 < 0
                                      || (v414 = v1732,
                                          *(_DWORD *)v1732 = *(_DWORD *)(v118 + 32),
                                          v202 = RtlULongLongAdd(v414, 4LL, &v1732, v118),
                                          v412 = v296,
                                          v202 < 0)
                                      || (memcpy_0(v1732, *(const void **)(v118 + 40), *(unsigned int *)(v118 + 32)),
                                          v202 = RtlULongLongAdd(v1732, (unsigned int)v1587[8], &v1732, v415),
                                          v412 = v296,
                                          v202 < 0) )
                                    {
LABEL_299:
                                      if ( v412 )
                                      {
                                        v416 = GetProcessHeap();
                                        HeapFree(v416, 0, v296);
                                      }
                                    }
                                    else
                                    {
                                      v1474 = v1673;
                                      v1594 = v296;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          v87 = v202 | 0x10000000;
                          v1657 = v87;
                          if ( v87 < 0 )
                            goto LABEL_135;
                          v1675 = 8;
                          v297 = RtlUIntAdd(8LL, v1430, &v1675);
                          v87 = v297 | 0x10000000;
                          v1657 = v297 | 0x10000000;
                          if ( v297 < 0 )
                            goto LABEL_135;
                          v1676 = 0;
                          v299 = (v1675 + 7) & 0xFFFFFFF8;
                          if ( (unsigned int)v299 < v1675 )
                          {
                            v87 = -1073741675;
                            goto LABEL_134;
                          }
                          v1547 = (void *)Sized;
                          v1676 = (v1675 + 7) & 0xFFFFFFF8;
                          v1594 = v298;
                          v1657 = RtlUIntAdd(v299, 8LL, &v1676);
                          v87 = v1657;
                          if ( v1657 >= 0 )
                          {
                            v205 = v418;
                            v1587 = (_DWORD *)v118;
                            v1547 = (void *)Sized;
                            v1594 = v417;
                            if ( v1780[1] )
                            {
                              v1587 = (_DWORD *)v118;
                              v1547 = (void *)Sized;
                              v1594 = v417;
                              if ( LODWORD(v1780[0]) > 1 )
                              {
                                v206 = (unsigned int *)v1780[1];
                                v118 = 4LL;
                                v1733 = v1780[1];
                                v207 = 0;
                                v1438 = v86;
                                v1601 = v205;
                                while ( !v207 )
                                {
                                  v208 = *v206;
                                  v1657 = RtlULongLongAdd(v206, v118, &v1733, v118);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_135;
                                  v1657 = RtlULongLongAdd(v1733, v208, &v1733, v118);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_135;
                                  v206 = (unsigned int *)v1733;
                                  v207 = v209 + 1;
                                }
                                v1657 = RtlULongLongAdd(v206, v118, &v1733, v118);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_135;
                                v1594 = v419;
                                if ( !v1780[1] || (v1594 = v419, LODWORD(v1780[0]) <= 2) )
                                {
                                  v87 = -1073741811;
                                  goto LABEL_134;
                                }
                                v210 = (unsigned int *)v1780[1];
                                v211 = 0;
                                v1734 = v1780[1];
                                while ( v211 < 2 )
                                {
                                  v1657 = RtlULongLongAdd(v210, 4LL, &v1734, *v210);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_135;
                                  v1657 = RtlULongLongAdd(v1734, (unsigned int)v118, &v1734, v118);
                                  v87 = v1657;
                                  if ( v1657 < 0 )
                                    goto LABEL_135;
                                  v210 = (unsigned int *)v1734;
                                  ++v211;
                                }
                                v420 = *v210;
                                v1657 = RtlULongLongAdd(v210, 4LL, &v1734, 4LL);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_135;
                                v1594 = v421;
                                v1677 = v118;
                                v1657 = RtlUIntAdd((unsigned int)v118, v1676, &v1677);
                                v87 = v1657;
                                if ( v1657 < 0 )
                                  goto LABEL_520;
                                v1657 = RtlUIntAdd(v1677, (unsigned int)v118, &v1677);
                                v87 = v1657;
                                if ( v1657 < 0
                                  || (v1657 = RtlUIntAdd(v1677, v423, &v1677), v87 = v1657, v1657 < 0)
                                  || (v1657 = RtlUIntAdd(v1677, (unsigned int)v118, &v1677), v87 = v1657, v1657 < 0)
                                  || (v1657 = RtlUIntAdd(v1677, v420, &v1677), v87 = v1657, v1657 < 0) )
                                {
LABEL_520:
                                  if ( v87 < 0 )
                                    goto LABEL_135;
                                  v424 = 0;
                                }
                                else
                                {
                                  v424 = v1677;
                                }
                                v1594 = v422;
                                if ( v424 > 0x400000 )
                                {
                                  v87 = -2147418113;
                                  goto LABEL_134;
                                }
                                dwBytesa = v424;
                                v115 = v424;
                                v116 = GetProcessHeap();
                                v117 = (int *)HeapAlloc(v116, 8u, v115);
                                v119 = 0LL;
                                if ( v117 )
                                  v119 = v117;
                                v1522 = v119;
                                v87 = v117 != 0LL ? 0x10000000 : -805306345;
                                v1657 = v87;
                                if ( !v117 )
                                  goto LABEL_135;
                                phModule = 0LL;
                                v1794 = 0LL;
                                v1795 = 0LL;
                                if ( !v1594 || !v119 )
                                {
                                  v87 = -2147024809;
LABEL_134:
                                  v1657 = v87;
LABEL_135:
                                  v120 = v1601;
                                  goto LABEL_136;
                                }
                                LODWORD(v1795) = v1474;
                                *(_QWORD *)((char *)&v1795 + 4) = dwBytesa;
                                *(_QWORD *)&v1794 = v1594;
                                *((_QWORD *)&v1794 + 1) = v119;
                                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                  && (v425 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                {
                                  v426 = ((__int64 (__fastcall *)(__int64, __int128 *))v425)(134LL, &v1794);
                                  v87 = v426 | 0x10000000;
                                  v1657 = v426 | 0x10000000;
                                  if ( v426 >= 0 )
                                  {
                                    v300 = DWORD1(v1795);
                                    goto LABEL_308;
                                  }
                                }
                                else
                                {
                                  v427 = GetLastError();
                                  v1657 = v427;
                                  v87 = v427;
                                  if ( v427 > 0 )
                                  {
                                    v87 = (unsigned __int16)v427 | 0x80070000;
                                    v1657 = v87;
                                  }
                                  if ( v87 >= 0 )
                                  {
                                    v87 = -2147467259;
                                    v1657 = -2147467259;
                                  }
                                }
                                if ( v87 == -805306333 )
                                {
                                  v87 = -2147024774;
                                  goto LABEL_134;
                                }
                                if ( v87 < 0 )
                                  goto LABEL_135;
                                v300 = dwBytesa;
LABEL_308:
                                v1678 = 0;
                                v1736 = v119;
                                if ( v300 < 4 )
                                {
LABEL_309:
                                  v87 = -805306306;
                                  goto LABEL_134;
                                }
                                v1509 = *v119;
                                v215 = RtlULongLongAdd(v119, 4LL, &v1736, v118);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                v215 = RtlUIntAdd(0LL, 4LL, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v429 - v1678 < (unsigned int)v428 )
                                  goto LABEL_309;
                                lpMemi = v1736;
                                Srcb = v428;
                                v215 = RtlULongLongAdd(v1736, (unsigned int)v428, &v1736, v118);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                v215 = RtlUIntAdd(v1678, v430, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v431 - v1678 < 4 )
                                  goto LABEL_309;
                                v1560 = *(_DWORD *)v1736;
                                v215 = RtlULongLongAdd(v1736, 4LL, &v1736, *(unsigned int *)v1736);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                v215 = RtlUIntAdd(v1678, 4LL, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v432 - v1678 < (unsigned int)v118 )
                                  goto LABEL_309;
                                Sizef = v1736;
                                v1482 = v118;
                                v215 = RtlULongLongAdd(v1736, (unsigned int)v118, &v1736, v118);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                v215 = RtlUIntAdd(v1678, v433, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v434 - v1678 < 4 )
                                  goto LABEL_309;
                                v435 = *(_DWORD *)v1736;
                                v1580 = *(_DWORD *)v1736;
                                v215 = RtlULongLongAdd(v1736, 4LL, &v1736, v118);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                v215 = RtlUIntAdd(v1678, 4LL, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v436 - v1678 < v435 )
                                  goto LABEL_309;
                                v215 = RtlUIntAdd(v1678, v435, &v1678);
                                if ( v215 < 0 )
                                  goto LABEL_572;
                                if ( v438 != v1678 || v437 + v435 + (unsigned int)v118 + 12LL != v438 )
                                  goto LABEL_309;
                                v439 = GetProcessHeap();
                                v440 = HeapAlloc(v439, 8u, 0x30uLL);
                                v214 = 0LL;
                                if ( v440 )
                                  v214 = v440;
                                v1536 = (SIZE_T)v214;
                                v215 = v440 == 0LL ? 0xC0000017 : 0;
                                if ( !v440 )
                                  goto LABEL_231;
                                if ( lpMemi )
                                {
                                  *(_DWORD *)v214 = v1509;
                                  v301 = GetProcessHeap();
                                  v302 = HeapAlloc(v301, 8u, (SIZE_T)Srcb);
                                  if ( !v302 )
                                  {
                                    v215 = -1073741801;
                                    goto LABEL_231;
                                  }
                                  v214[1] = v302;
                                  v215 = 0;
                                  memcpy_0(v302, lpMemi, (size_t)Srcb);
                                  v441 = v1547;
                                  v1438 = v86;
                                }
                                else
                                {
                                  *(_DWORD *)v214 = 0;
                                  v214[1] = 0LL;
                                  v441 = v1547;
                                }
                                v305 = v1536;
                                if ( Sizef )
                                {
                                  *(_DWORD *)(v1536 + 16) = v1560;
                                  v212 = GetProcessHeap();
                                  v213 = HeapAlloc(v212, 8u, v1482);
                                  if ( !v213 )
                                  {
LABEL_230:
                                    v214 = (_QWORD *)v1536;
                                    v215 = -1073741801;
LABEL_231:
                                    if ( v214 )
                                    {
                                      lpMemd = (void *)v214[1];
                                      if ( lpMemd )
                                      {
                                        v216 = GetProcessHeap();
                                        HeapFree(v216, 0, lpMemd);
                                        v214[1] = 0LL;
                                      }
                                      lpMeme = (void *)v214[3];
                                      if ( lpMeme )
                                      {
                                        v217 = GetProcessHeap();
                                        HeapFree(v217, 0, lpMeme);
                                        v214[3] = 0LL;
                                      }
                                      lpMemf = (void *)v214[5];
                                      if ( lpMemf )
                                      {
                                        v218 = GetProcessHeap();
                                        HeapFree(v218, 0, lpMemf);
                                        v214[5] = 0LL;
                                      }
                                      v219 = GetProcessHeap();
                                      HeapFree(v219, 0, v214);
                                    }
                                    v220 = 0LL;
                                    goto LABEL_240;
                                  }
                                  *(_QWORD *)(v1536 + 24) = v213;
                                  v215 = 0;
                                  memcpy_0(v213, Sizef, v1482);
                                  v305 = v1536;
                                  v1547 = v441;
                                  v1438 = v86;
                                }
                                else
                                {
                                  *(_DWORD *)(v1536 + 16) = 0;
                                  *(_QWORD *)(v1536 + 24) = 0LL;
                                }
                                if ( !v1736 )
                                {
                                  *(_DWORD *)(v305 + 32) = 0;
                                  *(_QWORD *)(v305 + 40) = 0LL;
                                  goto LABEL_314;
                                }
                                *(_DWORD *)(v305 + 32) = v1580;
                                v303 = GetProcessHeap();
                                v304 = HeapAlloc(v303, 8u, v1580);
                                if ( v304 )
                                {
                                  *(_QWORD *)(v1536 + 40) = v304;
                                  v215 = 0;
                                  memcpy_0(v304, v1736, v1580);
                                  v305 = v1536;
                                  v1547 = v441;
                                  v1438 = v86;
LABEL_314:
                                  v220 = (_QWORD *)v305;
LABEL_240:
                                  if ( v215 >= 0 )
                                  {
                                    v118 = (unsigned __int64)v220;
                                    v1535 = v220;
                                    goto LABEL_242;
                                  }
                                  v1535 = 0LL;
                                  v118 = 0LL;
                                  if ( !v220 )
                                  {
LABEL_242:
                                    v87 = v215 | 0x10000000;
                                    v1657 = v87;
                                    if ( v87 < 0 )
                                      goto LABEL_135;
                                    if ( !v118
                                      || (v221 = *(char **)(v118 + 8), (lpMemg = v221) == 0LL)
                                      || !*(_DWORD *)v118 )
                                    {
                                      v87 = -805306355;
                                      goto LABEL_134;
                                    }
                                    Srca = *(unsigned int *)v118 - 8LL;
                                    v222 = *(_DWORD *)v118 - 8;
                                    Sizee = MemoryAlloc(Srca);
                                    v223 = Sizee;
                                    if ( !Sizee )
                                      goto LABEL_159;
                                    v1844 = 0x7F1137FAB69605ELL;
                                    v1481 = (SIZE_T)v221;
                                    v127 = 0;
                                    lpModuleNamea = v222 & 7;
                                    v224 = Sizee;
                                    v1454 = Sizee;
                                    v1577 = 0;
                                    if ( (v222 & 7) == 0 )
                                    {
                                      v225 = 0;
                                      v226 = -1;
                                      v227 = 0;
                                      goto LABEL_249;
                                    }
                                    v446 = 0;
                                    v447 = v1547;
                                    v448 = 0;
                                    v449 = 56;
                                    do
                                    {
                                      v450 = (unsigned __int8)*v221++;
                                      if ( v1577 >= 4 )
                                        v448 |= v450 << v449;
                                      else
                                        v446 |= v450 << (v449 - 32);
                                      v449 -= 8;
                                      ++v1577;
                                    }
                                    while ( (int)v1577 < lpModuleNamea );
                                    v451 = v448 ^ 0x699A899C;
                                    v452 = v221;
                                    v227 = v446 ^ 0x92F65A5;
                                    v1510 = v448;
                                    v127 = 0;
                                    v1380 = 0;
                                    v453 = v446 ^ 0x92F65A5;
                                    v454 = 0;
                                    v1568 = v451;
                                    do
                                    {
                                      v1547 = v447;
                                      v1581 = (SIZE_T)(v1454 + 1);
                                      if ( v454 >= 4 )
                                      {
                                        v455 = (v1568 << 8) | HIBYTE(v1568);
                                        v1568 = v455;
                                      }
                                      else
                                      {
                                        v453 = (v453 << 8) | HIBYTE(v453);
                                        LOBYTE(v455) = v453;
                                      }
                                      *v1454 = v455;
                                      v454 = v1380 + 1;
                                      ++v1454;
                                      v447 = v1547;
                                      v1380 = v454;
                                    }
                                    while ( v454 < lpModuleNamea );
                                    v224 = (_DWORD *)v1581;
                                    v223 = Sizee;
                                    v1481 = (SIZE_T)v452;
                                    LODWORD(v2) = 0;
                                    v5 = 0LL;
                                    v1438 = v86;
                                    v1455 = v1581;
                                    if ( (unsigned int)lpModuleNamea <= 4 )
                                    {
                                      v1577 = 0;
                                      if ( (unsigned int)lpModuleNamea >= 4 )
                                        goto LABEL_589;
                                      v227 = v227 >> (8 * (4 - lpModuleNamea)) << (8 * (4 - lpModuleNamea));
                                    }
                                    else
                                    {
                                      v1577 = v451 >> (8 * (8 - lpModuleNamea)) << (8 * (8 - lpModuleNamea));
                                    }
                                    v224 = (_DWORD *)v1455;
LABEL_589:
                                    v225 = v446;
                                    v226 = v1510;
LABEL_249:
                                    if ( Srca >> 3 )
                                    {
                                      v228 = (char *)v224 + 7;
                                      v229 = v1577;
                                      v230 = HIDWORD(v1844) ^ 0xAB69605E;
                                      v231 = HIDWORD(v1844);
                                      v232 = (unsigned __int8 *)(v1481 + 2);
                                      v1505 = WORD2(v1844);
                                      v1557 = WORD1(v1844);
                                      v233 = Srca >> 3;
                                      do
                                      {
                                        v234 = *(v232 - 1) | (*(v232 - 2) << 8);
                                        v235 = v232[2] << 8;
                                        v236 = *v232;
                                        v232 += 8;
                                        v237 = *(v232 - 7) | ((v236 | (v234 << 8)) << 8);
                                        v238 = v237 ^ v227;
                                        v239 = *(v232 - 3) | ((*(v232 - 4) | ((*(v232 - 5) | v235) << 8)) << 8);
                                        v240 = v238 ^ v230 ^ v239 ^ v229;
                                        v241 = (__ROR4__(v240, 22) + v1505 * __ROR4__(v240 + 1419157410, 27)) ^ v238;
                                        v242 = (WORD1(v1844) * __ROR4__(v231 + v241, 9) - __ROR4__(v241, 30)) ^ v240;
                                        v243 = (24670 * (v242 - v1505) - (v242 >> 13)) ^ v241;
                                        v244 = (HIWORD(v1844) * __ROR4__(v243 ^ WORD1(v1844), 26) - __ROR4__(v243, 30)) ^ v242;
                                        v245 = (v231 - (v244 ^ 0xAB69605E)) ^ v243;
                                        v246 = (v1557 * (v245 ^ v1505)) ^ __ROR4__(v245, 6) ^ v244;
                                        v247 = (__ROR4__(v246, 30) + 24670 * __ROR4__(v231 + v246, 15)) ^ v245;
                                        v248 = (HIWORD(v1844) * __ROR4__(v247 + 1419157410, 14) - __ROR4__(v247, 24)) ^ v246;
                                        v249 = __ROR4__(v248, 10) ^ (v1505 * __ROR4__(v248 ^ 0xAB69605E, 12)) ^ v247;
                                        v250 = (v249 >> 10) ^ (WORD1(v1844) * (v249 ^ HIWORD(v1844))) ^ v248;
                                        v251 = (HIWORD(v1844) * (__ROR4__(~v250, 5) + 24670)) ^ v249;
                                        v252 = (v251 - HIWORD(v1844)) ^ 0xAB69605E ^ v250;
                                        v253 = ((v252 >> 2) + v1505 * __ROR4__(v252 ^ HIWORD(v1844), 30)) ^ v251;
                                        v254 = (__ROR4__(v253, 25) + WORD1(v1844) * __ROR4__(v253 - v231, 6)) ^ v252;
                                        v255 = (24670 * (v254 ^ v1505) + __ROR4__(v254, 9)) ^ v253;
                                        v256 = (__ROR4__(v255, 25) + HIWORD(v1844) * __ROR4__(v255 ^ WORD1(v1844), 27)) ^ v254;
                                        v257 = v256 ^ v230 ^ v255;
                                        v258 = (v1505 * (__ROR4__(v257, 3) - WORD1(v1844))) ^ v256;
                                        v259 = (24670 * __ROR4__(v258 - v231, 1) - __ROR4__(v258, 6)) ^ v257;
                                        v260 = (__ROR4__(v259, 18) + HIWORD(v1844) * __ROR4__(v259 - 1419157410, 29)) ^ v258;
                                        v261 = (v1505 * __ROR4__(v260 - 1419157410, 17) - __ROR4__(v260, 14)) ^ v259;
                                        v262 = (v261 >> 3) ^ (WORD1(v1844) * (v261 ^ 0x605E)) ^ v260;
                                        v263 = v262 ^ v231;
                                        v264 = __ROR4__(v262, 30);
                                        v229 = v226 ^ v262;
                                        v227 = v225 ^ v264 ^ (24670 * __ROR4__(v263, 28)) ^ v261;
                                        *(v228 - 4) = v227;
                                        *v228 = v229;
                                        v228 += 8;
                                        *(v228 - 13) = BYTE1(v227);
                                        *(v228 - 9) = BYTE1(v229);
                                        *(v228 - 14) = (unsigned __int16)(v227 >> 8) >> 8;
                                        *(v228 - 10) = (unsigned __int16)(v229 >> 8) >> 8;
                                        v225 = v237;
                                        *(v228 - 15) = __ROR4__(
                                                         (((v227 >> 8) | (v227 << 24)) >> 8) | (((v227 >> 8) | (v227 << 24)) << 24),
                                                         8);
                                        v226 = v239;
                                        *(v228 - 11) = __ROR4__(
                                                         (((v229 >> 8) | (v229 << 24)) >> 8) | (((v229 >> 8) | (v229 << 24)) << 24),
                                                         8);
                                        --v233;
                                      }
                                      while ( v233 );
                                      v127 = 0;
                                      LODWORD(v2) = 0;
                                      v86 = v1438;
                                      v5 = 0LL;
                                      v223 = Sizee;
                                    }
                                    for ( k = 0LL; k < Srca; ++k )
                                      v127 ^= *((_BYTE *)v223 + k);
                                    v128 = v1547;
                                    v118 = (unsigned __int64)v1535;
                                    v129 = v1535;
                                    if ( v127 != *(_QWORD *)&lpMemg[Srca] )
                                    {
                                      MemoryFree(v223);
LABEL_159:
                                      lpModuleName = 0LL;
                                      v87 = -805306367;
                                      goto LABEL_134;
                                    }
                                    v1679 = 0;
                                    v1737 = v223;
                                    if ( (unsigned int)Srca >= 4 )
                                    {
                                      v1511 = *v223;
                                      v456 = RtlULongLongAdd(v223, 4LL, &v1737, v1535);
                                      v118 = (unsigned __int64)v1587;
                                      v457 = v456;
                                      v120 = v1601;
                                      lpModuleName = v458;
                                      v1535 = v459;
                                      if ( v456 < 0 )
                                        goto LABEL_630;
                                      v457 = RtlUIntAdd(0LL, 4LL, &v1679);
                                      lpModuleName = (WCHAR *)v223;
                                      v1535 = v129;
                                      v1587 = (_DWORD *)v118;
                                      if ( v457 < 0 )
                                        goto LABEL_630;
                                      if ( (unsigned int)Srca - v1679 < 4 )
                                      {
                                        v1587 = (_DWORD *)v118;
LABEL_628:
                                        v1535 = v129;
                                        lpModuleName = (WCHAR *)v223;
LABEL_629:
                                        v457 = -1073741762;
                                        goto LABEL_630;
                                      }
                                      v1561 = *(_DWORD *)v1737;
                                      v457 = RtlULongLongAdd(v1737, 4LL, &v1737, v118);
                                      lpModuleName = v460;
                                      v1535 = v461;
                                      v1587 = (_DWORD *)v118;
                                      if ( v457 < 0 )
                                        goto LABEL_630;
                                      v457 = RtlUIntAdd(v1679, 4LL, &v1679);
                                      lpModuleName = (WCHAR *)v223;
                                      v1535 = v129;
                                      v1587 = (_DWORD *)v118;
                                      if ( v457 < 0 )
                                        goto LABEL_630;
                                      if ( (unsigned int)Srca - v1679 < v1561 )
                                      {
                                        v1587 = (_DWORD *)v118;
                                        goto LABEL_628;
                                      }
                                      v457 = RtlUIntAdd(v1679, v1561, &v1679);
                                      lpModuleName = (WCHAR *)v223;
                                      v1535 = v129;
                                      v1587 = (_DWORD *)v118;
                                      if ( v457 < 0 )
                                        goto LABEL_630;
                                      if ( (char *)v223 + (unsigned int)Srca >= (char *)v1737 + v1561
                                        && (unsigned __int64)v223
                                         + (unsigned int)Srca
                                         - (unsigned __int64)v1561
                                         - (_QWORD)v1737 < 8 )
                                      {
                                        v457 = 0;
                                        v120 = v1601;
                                        lpMemm = 0LL;
                                        v1738 = 0LL;
                                        v1739 = 0LL;
                                        v1740 = 0LL;
                                        v1582 = 0;
                                        lpModuleName = (WCHAR *)v223;
                                        v1535 = v129;
                                        v1587 = (_DWORD *)v118;
                                        if ( !v1737 )
                                          goto LABEL_615;
                                        Srcc = v1737;
                                        v457 = RtlULongLongAdd(v1737, v1561, &v1738, v118);
                                        v464 = (_DWORD *)v118;
                                        v1587 = (_DWORD *)v118;
                                        v120 = v1601;
                                        lpModuleName = v463;
                                        v1535 = v462;
                                        if ( v457 >= 0 )
                                        {
                                          v118 = (unsigned __int64)Srcc;
                                          lpModuleName = v463;
                                          v465 = 4LL;
                                          v1535 = v462;
                                          v466 = v1738;
                                          v1587 = v464;
                                          while ( v118 < v466 )
                                          {
                                            v457 = RtlULongLongAdd(v118, v465, &v1739, v118);
                                            if ( v457 < 0 )
                                              goto LABEL_623;
                                            if ( v1739 > v467 )
                                              goto LABEL_613;
                                            v469 = *(unsigned int *)v118;
                                            v1680 = 0;
                                            v457 = RtlUIntAdd(v468, v469, &v1680);
                                            if ( v457 < 0 )
                                              goto LABEL_630;
                                            v457 = RtlULongLongAdd(v118, v1680, &v1740, v118);
                                            if ( v457 < 0 )
                                              goto LABEL_623;
                                            v118 = v1740;
                                            if ( v1740 > v466 )
                                              goto LABEL_613;
                                            ++v1582;
                                          }
                                          if ( v118 != v466 )
                                          {
LABEL_613:
                                            v457 = -1073741811;
                                            goto LABEL_630;
                                          }
LABEL_615:
                                          v470 = v1561;
                                          if ( v1561 )
                                          {
                                            v471 = GetProcessHeap();
                                            lpMemm = HeapAlloc(v471, 8u, v1561);
                                            v118 = (unsigned __int64)lpMemm;
                                            if ( !lpMemm )
                                            {
                                              v457 = -1073741801;
                                              goto LABEL_623;
                                            }
                                            v470 = v1561;
                                            v457 = 0;
                                          }
                                          else
                                          {
                                            v118 = 0LL;
                                          }
                                          if ( v1737 )
                                            memcpy_0((void *)v118, v1737, v470);
                                          *((_QWORD *)&v1776 + 1) = lpMemm;
                                          *(_QWORD *)&v1776 = __PAIR64__(v1561, v1582);
LABEL_623:
                                          if ( v457 < 0 || v1511 == (_DWORD)v1776 )
                                            goto LABEL_630;
                                          goto LABEL_629;
                                        }
LABEL_630:
                                        v87 = v457 | 0x10000000;
                                        v1657 = v87;
LABEL_136:
                                        if ( !v120 )
                                          goto LABEL_137;
                                        goto LABEL_632;
                                      }
                                      v128 = v1547;
                                      v1587 = (_DWORD *)v118;
                                    }
                                    v120 = v1601;
                                    v1547 = v128;
                                    goto LABEL_628;
                                  }
                                  lpMemj = (void *)v220[1];
                                  if ( lpMemj )
                                  {
                                    v442 = GetProcessHeap();
                                    HeapFree(v442, 0, lpMemj);
                                    v220[1] = 0LL;
                                  }
                                  lpMemk = (void *)v220[3];
                                  if ( lpMemk )
                                  {
                                    v443 = GetProcessHeap();
                                    HeapFree(v443, 0, lpMemk);
                                    v220[3] = 0LL;
                                  }
                                  lpMeml = (void *)v220[5];
                                  if ( lpMeml )
                                  {
                                    v444 = GetProcessHeap();
                                    HeapFree(v444, 0, lpMeml);
                                    v220[5] = 0LL;
                                  }
                                  v445 = GetProcessHeap();
                                  HeapFree(v445, 0, v220);
                                  v1535 = 0LL;
LABEL_572:
                                  v118 = 0LL;
                                  goto LABEL_242;
                                }
                                goto LABEL_230;
                              }
                            }
                            v87 = -1073741811;
                            v1657 = -1073741811;
                          }
                          v120 = v418;
                          goto LABEL_136;
                        }
                        v189 = -1073741801;
                      }
                      v192 = v1547;
                      goto LABEL_199;
                    }
                    v397 = (v1672 + 7) & 0xFFFFFFF8;
                    if ( v397 < v1672 )
                    {
                      v87 = -805306219;
                      goto LABEL_55;
                    }
                    v1672 = (v1672 + 7) & 0xFFFFFFF8;
                    v139 = v397;
                    v140 = GetProcessHeap();
                    v141 = HeapAlloc(v140, 8u, v139);
                    if ( v141 )
                    {
                      v1731[0] = v141;
                      *v141 = v1780[0];
                      v1439 = v141;
                      v142 = RtlULongLongAdd(v141, 4LL, v1731, 4LL);
                      if ( v142 >= 0 )
                      {
                        v399 = v1731[0];
                        *(_DWORD *)v1731[0] = HIDWORD(v1780[0]);
                        v1439 = v141;
                        v142 = RtlULongLongAdd(v399, (unsigned int)v398, v1731, v398);
                        if ( v142 >= 0 )
                        {
                          *(_QWORD *)((char *)v141 + v1672 - 8) = v1507;
                          memcpy_0(v1731[0], (const void *)v1780[1], HIDWORD(v1780[0]));
                          v143 = v1672;
                          v1379 = v1672;
                          v1601 = (unsigned __int8 *)v141;
                          goto LABEL_180;
                        }
                      }
                      v400 = GetProcessHeap();
                      HeapFree(v400, 0, v1439);
                    }
                    else
                    {
                      v142 = -1073741801;
                    }
                    v143 = 0;
LABEL_180:
                    v83 = v1547;
                    v1437 = v86;
                    goto LABEL_181;
                  }
                }
                else
                {
                  v1663 = 0;
                  v1657 = RtlUIntAdd(v135, v135, &v1663);
                  v87 = v1657;
                  if ( v1657 < 0 )
                    goto LABEL_56;
                  v1657 = RtlUIntAdd(HIDWORD(v1780[0]), v1663, (char *)v1780 + 4);
                  v87 = v1657;
                  if ( v1657 >= 0 )
                  {
                    LODWORD(v1780[0]) += v137;
                    goto LABEL_463;
                  }
                }
                if ( v87 < 0 )
                  goto LABEL_56;
                goto LABEL_463;
              }
              if ( (unsigned __int64)(v383 + 2) > v1780[1] + HIDWORD(v1780[0]) )
                goto LABEL_414;
              v377 = (int *)v1785[0];
              *v383 = v135;
              v134 = 1;
              *v377 = v1646;
              v136 = v1780[0];
            }
            else
            {
              v1720 = 0;
              v1657 = RtlUIntAdd(4LL, 4LL, &v1720);
              v87 = v1657;
              if ( v1657 < 0 )
                goto LABEL_56;
              v133 = RtlUIntAdd(HIDWORD(v1780[0]), v1720, (char *)v1780 + 4);
              v136 = v1780[0];
              v87 = v133;
              v1657 = v133;
              if ( v133 < 0 )
                goto LABEL_172;
            }
            v136 += v134;
            LODWORD(v1780[0]) = v136;
            goto LABEL_173;
          }
          if ( (unsigned __int64)v374 + v375 + 4 <= v1780[1] + HIDWORD(v1780[0]) )
          {
            v376 = (void *)v1784[0];
            *v374 = v375;
            memcpy_0(v376, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v375);
            v130 = ++LODWORD(v1780[0]);
            goto LABEL_168;
          }
          v87 = -1073741789;
        }
        else
        {
          v87 = -1073741811;
        }
        v1657 = v87;
        goto LABEL_168;
      }
      goto LABEL_90;
    }
LABEL_54:
    v87 = -1073741675;
LABEL_55:
    v1657 = v87;
    goto LABEL_56;
  }
  v1657 = -1073741801;
  v86 = 0LL;
LABEL_56:
  v1780[0] = 0LL;
  lpMem = (void *)v1780[1];
  if ( v1780[1] )
  {
    v90 = GetProcessHeap();
    HeapFree(v90, 0, lpMem);
    v1780[1] = 0LL;
  }
  *(_QWORD *)&v1776 = 0LL;
  lpMema = (void *)*((_QWORD *)&v1776 + 1);
  if ( *((_QWORD *)&v1776 + 1) )
  {
    v91 = GetProcessHeap();
    HeapFree(v91, 0, lpMema);
    *((_QWORD *)&v1776 + 1) = 0LL;
  }
  if ( v86 )
  {
    v496 = GetProcessHeap();
    HeapFree(v496, 0, v86);
  }
  if ( v83 )
  {
    v497 = GetProcessHeap();
    HeapFree(v497, 0, v83);
  }
  if ( v87 < 0 )
  {
    v92 = hMem;
    v82 = 4LL;
LABEL_66:
    v93 = 0;
    goto LABEL_67;
  }
  if ( !v1646 )
    goto LABEL_324;
  v1747 = 0LL;
  dword_1800E8498 = v1646;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1289;
  lpMemt = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70F8[0])(
                                        0LL,
                                        0LL,
                                        1027LL);
  if ( !lpMemt )
  {
    GetLastError();
    goto LABEL_1289;
  }
  v499 = off_1800E7098[0]();
  v500 = dword_1800E8498;
  qword_1800E97E0 = v499;
  v1512 = dword_1800E8498;
  memset_0(&v1826, 0, 0x70uLL);
  Srcd = 0LL;
  memset(v1860, 0, 44);
  v1851 = 0LL;
  Sizeg = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v501 = dword_1800E97E8;
  if ( dword_1800E97E8 )
  {
LABEL_736:
    dword_1800E97E8 = v501 + 1;
    goto LABEL_737;
  }
  v1562 = 0;
  v1583 = 0;
  v1569 = 0;
  v502 = (char *)MemoryAlloc(0x338uLL);
  v1483 = (WCHAR *)v502;
  if ( !v502 )
    goto LABEL_700;
  v503 = v502 + 7;
  v504 = 103LL;
  v505 = 0;
  v506 = (unsigned __int8 *)&unk_1800C1552;
  v507 = 0;
  v508 = 0;
  v509 = -1;
  do
  {
    v510 = *(v506 - 1) | (*(v506 - 2) << 8);
    v511 = v506[2] << 8;
    v512 = *v506;
    v506 += 8;
    v513 = *(v506 - 7) | ((v512 | (v510 << 8)) << 8);
    v514 = v513 ^ v507;
    v515 = *(v506 - 3) | ((*(v506 - 4) | ((*(v506 - 5) | v511) << 8)) << 8);
    v516 = v514 ^ v505 ^ v515 ^ 0xAC987321;
    v517 = (__ROR4__(v516, 22) + 4991 * __ROR4__(v516 + 1419157410, 27)) ^ v514;
    v518 = (43881 * __ROR4__(v517 + 133239679, 9) - __ROR4__(v517, 30)) ^ v516;
    v519 = (24670 * v518 - (v518 >> 13) - 123127970) ^ v517;
    v520 = (2033 * __ROR4__(v519 ^ 0xAB69, 26) - __ROR4__(v519, 30)) ^ v518;
    v521 = (133239679 - (v520 ^ 0xAB69605E)) ^ v519;
    v522 = (43881 * (v521 ^ 0x137F)) ^ __ROR4__(v521, 6) ^ v520;
    v523 = (__ROR4__(v522, 30) + 24670 * __ROR4__(v522 + 133239679, 15)) ^ v521;
    v524 = (2033 * __ROR4__(v523 + 1419157410, 14) - __ROR4__(v523, 24)) ^ v522;
    v525 = __ROR4__(v524, 10) ^ (4991 * __ROR4__(v524 ^ 0xAB69605E, 12)) ^ v523;
    v526 = (v525 >> 10) ^ (43881 * (v525 ^ 0x7F1)) ^ v524;
    v527 = (2033 * (__ROR4__(~v526, 5) + 24670)) ^ v525;
    v528 = v526 ^ (v527 - 2033) ^ 0xAB69605E;
    v529 = ((v528 >> 2) + 4991 * __ROR4__(v526 ^ (v527 - 2033) ^ 0xAB6967AF, 30)) ^ v527;
    v530 = (__ROR4__(v529, 25) + 43881 * __ROR4__(v529 - 133239679, 6)) ^ v528;
    v531 = (24670 * (v530 ^ 0x137F) + __ROR4__(v530, 9)) ^ v529;
    v532 = (__ROR4__(v531, 25) + 2033 * __ROR4__(v531 ^ 0xAB69, 27)) ^ v530;
    v533 = v531 ^ v532 ^ 0xAC987321;
    v534 = (4991 * __ROR4__(v533, 3) - 219010071) ^ v532;
    v535 = (24670 * __ROR4__(v534 - 133239679, 1) - __ROR4__(v534, 6)) ^ v533;
    v536 = (__ROR4__(v535, 18) + 2033 * __ROR4__(v535 - 1419157410, 29)) ^ v534;
    v537 = (4991 * __ROR4__(v536 - 1419157410, 17) - __ROR4__(v536, 14)) ^ v535;
    v538 = (v537 >> 3) ^ (43881 * (v537 ^ 0x605E)) ^ v536;
    v539 = 24670 * __ROR4__(v538 ^ 0x7F1137F, 28);
    v540 = __ROR4__(v538, 30);
    v505 = v509 ^ v538;
    v509 = v515;
    v507 = v508 ^ v537 ^ v540 ^ v539;
    *(v503 - 4) = v507;
    *v503 = v505;
    v503 += 8;
    v508 = v513;
    *(v503 - 13) = BYTE1(v507);
    *(v503 - 9) = BYTE1(v505);
    *(v503 - 14) = (unsigned __int16)(v507 >> 8) >> 8;
    *(v503 - 10) = (unsigned __int16)(v505 >> 8) >> 8;
    *(v503 - 15) = __ROR4__((((v507 >> 8) | (v507 << 24)) >> 8) | (((v507 >> 8) | (v507 << 24)) << 24), 8);
    *(v503 - 11) = __ROR4__((((v505 >> 8) | (v505 << 24)) >> 8) | (((v505 >> 8) | (v505 << 24)) << 24), 8);
    --v504;
  }
  while ( v504 );
  v541 = 0;
  LODWORD(v2) = 0;
  v500 = v1512;
  v542 = 0LL;
  v87 = v1657;
  v543 = v1483;
  do
    v541 ^= *((_BYTE *)v1483 + v542++);
  while ( v542 < 0x338 );
  if ( v541 != 64LL )
  {
    MemoryFree(v1483);
    goto LABEL_700;
  }
  *((_BYTE *)v1483 + 823) = 0;
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  while ( *(_BYTE *)v543 )
  {
    v562 = v543;
    v563 = -1LL;
    do
      ++v563;
    while ( v543[v563] );
    v564 = &v543[v563];
    v1456 = (char *)&unk_1800E9390 + 24 * v1569;
    if ( !GetModuleHandleExW(0, v562, (HMODULE *)v1456) )
    {
      v566 = -1073741702;
      goto LABEL_732;
    }
    v565 = (HMODULE *)((char *)&unk_1800E9390 + 24 * v1569);
    v566 = 0;
    v1583 = 0;
    if ( **(_WORD **)v1456 == 23117
      && (v567 = *(int *)(*(_QWORD *)v1456 + 60LL), (unsigned int)v567 < 0x10000000)
      && (v568 = *(_QWORD *)v1456 + v567, v568 >= *(_QWORD *)v1456)
      && *(_DWORD *)v568 == 17744 )
    {
      if ( ((*(_WORD *)(v568 + 24) - 267) & 0xFEFF) == 0 )
      {
        *(_QWORD *)(v1456 + 12) = *(_QWORD *)(v568 + 136);
        *((_DWORD *)v1456 + 2) = *(_DWORD *)(v568 + 80);
        goto LABEL_721;
      }
      v566 = -1073741811;
    }
    else
    {
      v566 = -1073741701;
    }
    v1583 = v566;
LABEL_721:
    v569 = *(_DWORD *)(v564 + 1);
    v570 = 0;
    v1381 = v569;
    v543 = v564 + 3;
    while ( 1 )
    {
      v1431 = v570;
      if ( v570 >= v569 )
        break;
      v571 = (const CHAR *)v543;
      v572 = -1LL;
      do
        ++v572;
      while ( *((_BYTE *)v543 + v572) );
      v543 = (const WCHAR *)((char *)v543 + v572 + 1);
      if ( v566 >= 0 )
      {
        v573 = GetProcAddress(*v565, v571);
        if ( !v573 )
          goto LABEL_732;
        v565 = (HMODULE *)((char *)&unk_1800E9390 + 24 * v1569);
        off_1800E7000[v1562] = v573;
        v569 = v1381;
      }
      ++v1562;
      v570 = v1431 + 1;
    }
    ++v1569;
  }
  v566 = v1583;
LABEL_732:
  if ( v1483 )
  {
    v574 = GetProcessHeap();
    HeapFree(v574, 0, v1483);
  }
  if ( v566 >= 0 )
  {
    v501 = dword_1800E97E8;
    goto LABEL_736;
  }
LABEL_700:
  v544 = (HMODULE *)&unk_1800E9390;
  v545 = 4LL;
  do
  {
    if ( *v544 )
      FreeLibrary(*v544);
    v544 += 3;
    --v545;
  }
  while ( v545 );
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  v546 = 2LL;
  v547 = off_1800E7000;
  v548 = off_1800A91A0;
  do
  {
    v549 = *((_OWORD *)v548 + 1);
    *(_OWORD *)v547 = *(_OWORD *)v548;
    v550 = *((_OWORD *)v548 + 2);
    *((_OWORD *)v547 + 1) = v549;
    v551 = *((_OWORD *)v548 + 3);
    *((_OWORD *)v547 + 2) = v550;
    v552 = *((_OWORD *)v548 + 4);
    *((_OWORD *)v547 + 3) = v551;
    v553 = *((_OWORD *)v548 + 5);
    *((_OWORD *)v547 + 4) = v552;
    v554 = *((_OWORD *)v548 + 6);
    *((_OWORD *)v547 + 5) = v553;
    v555 = *((_OWORD *)v548 + 7);
    v548 += 16;
    *((_OWORD *)v547 + 6) = v554;
    v547 += 16;
    *((_OWORD *)v547 - 1) = v555;
    --v546;
  }
  while ( v546 );
  v556 = *((_OWORD *)v548 + 1);
  *(_OWORD *)v547 = *(_OWORD *)v548;
  v557 = *((_OWORD *)v548 + 2);
  *((_OWORD *)v547 + 1) = v556;
  v558 = *((_OWORD *)v548 + 3);
  *((_OWORD *)v547 + 2) = v557;
  v559 = *((_OWORD *)v548 + 4);
  *((_OWORD *)v547 + 3) = v558;
  v560 = *((_OWORD *)v548 + 5);
  *((_OWORD *)v547 + 4) = v559;
  v561 = *((_OWORD *)v548 + 6);
  *((_OWORD *)v547 + 5) = v560;
  *((_OWORD *)v547 + 6) = v561;
LABEL_737:
  v1563 = 0;
  v1584 = 0;
  _InterlockedExchange(&dword_1800E97EC, 0);
  v1898 = 0;
  v1899 = 0;
  v1748 = 0LL;
  v1787 = 0LL;
  v1570 = 0;
  v1432 = 0;
  v1484 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v575 = dword_1800E97E8;
  if ( dword_1800E97E8 )
  {
LABEL_783:
    dword_1800E97E8 = v575 + 1;
    goto LABEL_784;
  }
  v1475 = 0;
  dwBytesb = 0;
  v1647 = 0;
  v576 = (char *)MemoryAlloc(0x338uLL);
  lpModuleNameb = (WCHAR *)v576;
  if ( !v576 )
    goto LABEL_747;
  v577 = v576 + 7;
  v578 = 103LL;
  v579 = 0;
  v580 = (unsigned __int8 *)&unk_1800C1552;
  v581 = 0;
  v582 = 0;
  v583 = -1;
  do
  {
    v584 = *(v580 - 1) | (*(v580 - 2) << 8);
    v585 = v580[2] << 8;
    v586 = *v580;
    v580 += 8;
    v587 = *(v580 - 7) | ((v586 | (v584 << 8)) << 8);
    v588 = v587 ^ v581;
    v589 = *(v580 - 3) | ((*(v580 - 4) | ((*(v580 - 5) | v585) << 8)) << 8);
    v590 = v588 ^ v579 ^ v589 ^ 0xAC987321;
    v591 = (__ROR4__(v590, 22) + 4991 * __ROR4__(v590 + 1419157410, 27)) ^ v588;
    v592 = (43881 * __ROR4__(v591 + 133239679, 9) - __ROR4__(v591, 30)) ^ v590;
    v593 = (24670 * v592 - (v592 >> 13) - 123127970) ^ v591;
    v594 = (2033 * __ROR4__(v593 ^ 0xAB69, 26) - __ROR4__(v593, 30)) ^ v592;
    v595 = (133239679 - (v594 ^ 0xAB69605E)) ^ v593;
    v596 = (43881 * (v595 ^ 0x137F)) ^ __ROR4__(v595, 6) ^ v594;
    v597 = (__ROR4__(v596, 30) + 24670 * __ROR4__(v596 + 133239679, 15)) ^ v595;
    v598 = (2033 * __ROR4__(v597 + 1419157410, 14) - __ROR4__(v597, 24)) ^ v596;
    v599 = __ROR4__(v598, 10) ^ (4991 * __ROR4__(v598 ^ 0xAB69605E, 12)) ^ v597;
    v600 = v598 ^ (v599 >> 10) ^ (43881 * (v599 ^ 0x7F1));
    v601 = (2033 * (__ROR4__(~v600, 5) + 24670)) ^ v599;
    v602 = v600 ^ (v601 - 2033) ^ 0xAB69605E;
    v603 = ((v602 >> 2) + 4991 * __ROR4__(v600 ^ (v601 - 2033) ^ 0xAB6967AF, 30)) ^ v601;
    v604 = (__ROR4__(v603, 25) + 43881 * __ROR4__(v603 - 133239679, 6)) ^ v602;
    v605 = (24670 * (v604 ^ 0x137F) + __ROR4__(v604, 9)) ^ v603;
    v606 = (__ROR4__(v605, 25) + 2033 * __ROR4__(v605 ^ 0xAB69, 27)) ^ v604;
    v607 = v606 ^ v605 ^ 0xAC987321;
    v608 = (4991 * __ROR4__(v607, 3) - 219010071) ^ v606;
    v609 = (24670 * __ROR4__(v608 - 133239679, 1) - __ROR4__(v608, 6)) ^ v607;
    v610 = (__ROR4__(v609, 18) + 2033 * __ROR4__(v609 - 1419157410, 29)) ^ v608;
    v611 = (4991 * __ROR4__(v610 - 1419157410, 17) - __ROR4__(v610, 14)) ^ v609;
    v612 = (v611 >> 3) ^ (43881 * (v611 ^ 0x605E)) ^ v610;
    v613 = 24670 * __ROR4__(v612 ^ 0x7F1137F, 28);
    v614 = __ROR4__(v612, 30);
    v579 = v583 ^ v612;
    v583 = v589;
    v581 = v582 ^ v611 ^ v614 ^ v613;
    *(v577 - 4) = v581;
    *v577 = v579;
    v577 += 8;
    v582 = v587;
    *(v577 - 13) = BYTE1(v581);
    *(v577 - 9) = BYTE1(v579);
    *(v577 - 14) = (unsigned __int16)(v581 >> 8) >> 8;
    *(v577 - 10) = (unsigned __int16)(v579 >> 8) >> 8;
    *(v577 - 15) = __ROR4__((((v581 >> 8) | (v581 << 24)) >> 8) | (((v581 >> 8) | (v581 << 24)) << 24), 8);
    *(v577 - 11) = __ROR4__((((v579 >> 8) | (v579 << 24)) >> 8) | (((v579 >> 8) | (v579 << 24)) << 24), 8);
    --v578;
  }
  while ( v578 );
  v615 = 0;
  LODWORD(v2) = 0;
  v500 = v1512;
  v616 = 0LL;
  v87 = v1657;
  v617 = lpModuleNameb;
  do
    v615 ^= *((_BYTE *)lpModuleNameb + v616++);
  while ( v616 < 0x338 );
  if ( v615 != 64LL )
  {
    MemoryFree(lpModuleNameb);
    goto LABEL_747;
  }
  *((_BYTE *)lpModuleNameb + 823) = 0;
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v617 )
    {
      v636 = v617;
      v637 = -1LL;
      do
        ++v637;
      while ( v617[v637] );
      v638 = &v617[v637];
      v1537 = (char *)&unk_1800E9390 + 24 * v1647;
      if ( !GetModuleHandleExW(0, v636, (HMODULE *)v1537) )
      {
        v640 = -1073741702;
        goto LABEL_779;
      }
      v639 = (HMODULE *)((char *)&unk_1800E9390 + 24 * v1647);
      v640 = 0;
      dwBytesb = 0;
      if ( **(_WORD **)v1537 == 23117
        && (v641 = *(int *)(*(_QWORD *)v1537 + 60LL), (unsigned int)v641 < 0x10000000)
        && (v642 = *(_QWORD *)v1537 + v641, v642 >= *(_QWORD *)v1537)
        && *(_DWORD *)v642 == 17744 )
      {
        if ( ((*(_WORD *)(v642 + 24) - 267) & 0xFEFF) != 0 )
        {
          v640 = -1073741811;
          goto LABEL_766;
        }
        *(_QWORD *)(v1537 + 12) = *(_QWORD *)(v642 + 136);
        *((_DWORD *)v1537 + 2) = *(_DWORD *)(v642 + 80);
      }
      else
      {
        v640 = -1073741701;
LABEL_766:
        dwBytesb = v640;
      }
      v643 = *(_DWORD *)(v638 + 1);
      v644 = 0;
      v1595 = v643;
      v617 = v638 + 3;
      while ( 1 )
      {
        v1513 = v644;
        if ( v644 >= v643 )
          break;
        v645 = (const CHAR *)v617;
        v646 = -1LL;
        do
          ++v646;
        while ( *((_BYTE *)v617 + v646) );
        v617 = (WCHAR *)((char *)v617 + v646 + 1);
        if ( v640 >= 0 )
        {
          v647 = GetProcAddress(*v639, v645);
          if ( !v647 )
            goto LABEL_779;
          v639 = (HMODULE *)((char *)&unk_1800E9390 + 24 * v1647);
          off_1800E7000[v1475] = v647;
          v643 = v1595;
        }
        ++v1475;
        v644 = v1513 + 1;
      }
      ++v1647;
      continue;
    }
    break;
  }
  v640 = dwBytesb;
LABEL_779:
  if ( lpModuleNameb )
  {
    v648 = GetProcessHeap();
    HeapFree(v648, 0, lpModuleNameb);
  }
  if ( v640 >= 0 )
  {
    v575 = dword_1800E97E8;
    goto LABEL_783;
  }
LABEL_747:
  v618 = (HMODULE *)&unk_1800E9390;
  v619 = 4LL;
  do
  {
    if ( *v618 )
      FreeLibrary(*v618);
    v618 += 3;
    --v619;
  }
  while ( v619 );
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  v620 = 2LL;
  v621 = off_1800E7000;
  v622 = off_1800A91A0;
  do
  {
    v623 = *((_OWORD *)v622 + 1);
    *(_OWORD *)v621 = *(_OWORD *)v622;
    v624 = *((_OWORD *)v622 + 2);
    *((_OWORD *)v621 + 1) = v623;
    v625 = *((_OWORD *)v622 + 3);
    *((_OWORD *)v621 + 2) = v624;
    v626 = *((_OWORD *)v622 + 4);
    *((_OWORD *)v621 + 3) = v625;
    v627 = *((_OWORD *)v622 + 5);
    *((_OWORD *)v621 + 4) = v626;
    v628 = *((_OWORD *)v622 + 6);
    *((_OWORD *)v621 + 5) = v627;
    v629 = *((_OWORD *)v622 + 7);
    v622 += 16;
    *((_OWORD *)v621 + 6) = v628;
    v621 += 16;
    *((_OWORD *)v621 - 1) = v629;
    --v620;
  }
  while ( v620 );
  v630 = *((_OWORD *)v622 + 1);
  *(_OWORD *)v621 = *(_OWORD *)v622;
  v631 = *((_OWORD *)v622 + 2);
  *((_OWORD *)v621 + 1) = v630;
  v632 = *((_OWORD *)v622 + 3);
  *((_OWORD *)v621 + 2) = v631;
  v633 = *((_OWORD *)v622 + 4);
  *((_OWORD *)v621 + 3) = v632;
  v634 = *((_OWORD *)v622 + 5);
  *((_OWORD *)v621 + 4) = v633;
  v635 = *((_OWORD *)v622 + 6);
  *((_OWORD *)v621 + 5) = v634;
  *((_OWORD *)v621 + 6) = v635;
LABEL_784:
  _InterlockedExchange(&dword_1800E97EC, 0);
  memset_0(&v1826, 0, 0x70uLL);
  v1596 = v500 & 0xF;
  LOWORD(v1898) = (v500 >> 4) & 0xF;
  HIWORD(v1898) = (v500 >> 8) & 0xF;
  v1851 = 0LL;
  v1899 = (v500 >> 12) & 0xF;
  lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70F8[0])(0LL, 0LL, 1027LL);
  v1514 = -1;
  if ( lpModuleNamec )
  {
    v1476 = 0;
    v1750 = 0LL;
    v651 = 0LL;
    v1752 = 0LL;
    v1749 = 0LL;
    memset(v1890, 0, sizeof(v1890));
    v1753[0] = 0LL;
    v1682 = 0;
    v650 = 0;
    v1713 = 0LL;
    v1683 = 0;
    if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1800E70A0[0])(
            8LL,
            &v1682,
            0LL,
            &v1683) )
      goto LABEL_807;
    v652 = MemoryAlloc(2LL * v1683);
    SP<unsigned long,SP_MEM<unsigned long>>::operator=(v1753, v652);
    if ( !v1753[0]
      || (v653 = MemoryAlloc(4LL * (v1682 + 1)),
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1713, v653),
          (v654 = v1713) == 0LL) )
    {
      v650 = -2147024882;
      goto LABEL_800;
    }
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1800E70A0[0])(
           8LL,
           &v1682,
           v1753[0],
           &v1683) )
    {
      v655 = v654;
      if ( v1682 )
      {
        v656 = v1753[0];
        v657 = v654;
        for ( m = 0; m < v1682; ++m )
        {
          *v657 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800E70B0[0])(v656, 0LL);
          v659 = -1LL;
          do
            ++v659;
          while ( *(_WORD *)(v656 + 2 * v659) );
          ++v657;
          v656 += 2 * v659 + 2;
        }
        v87 = v1657;
        v650 = 0;
        v1713 = v657;
        v655 = v657;
      }
      *v655 = 1033;
      v651 = v654;
      v1713 = 0LL;
      v1476 = v1682 + 1;
      v1749 = v654;
    }
    else
    {
LABEL_807:
      v664 = GetLastError();
      v650 = v664;
      if ( v664 > 0 )
        v650 = (unsigned __int16)v664 | 0x80070000;
      if ( v650 >= 0 )
        v650 = -2147467259;
    }
LABEL_800:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1713);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1753);
    if ( v650 < 0 )
    {
      v673 = 0LL;
      v671 = 0LL;
      v674 = 0LL;
    }
    else
    {
      v660 = 0;
      v661 = 0;
      dwBytesc = 0;
      if ( v1476 )
      {
        v662 = 0LL;
        while ( 2 )
        {
          for ( n = 0; n < 0x26; ++n )
          {
            if ( v651[v662] == dword_1800CC0C0[n] )
            {
              v660 = n;
              dwBytesc = n;
              goto LABEL_815;
            }
          }
          ++v661;
          ++v662;
          if ( v661 < v1476 )
            continue;
          break;
        }
        v660 = 0;
      }
LABEL_815:
      v665 = v660;
      v1477 = 0;
      v666 = (unsigned int)dword_1800CC0C0[v660];
      memset(v1853, 0, sizeof(v1853));
      if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1800E70A8[0])(v666, v1900, 85LL)
        && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *))off_1800E7090[0])(v1900, 88LL, v1853) > 0 )
      {
        v1477 = (HIDWORD(v1853[0]) >> 27) & 1;
      }
      memset_0(v1897, 0, 0x90uLL);
      v667 = L"Segoe UI Light";
      v668 = 19LL;
      v669 = (const wchar_t **)&v1896;
      do
      {
        *v669 = v667;
        v670 = -1LL;
        do
          ++v670;
        while ( v667[v670] );
        ++v669;
        v667 += v670 + 1;
        --v668;
      }
      while ( v668 );
      v1484 = *(_QWORD *)&v1897[8 * byte_1800CC160[3 * v665] - 8];
      v1457 = *(_QWORD *)&v1897[8 * byte_1800CC160[3 * v665 + 1] - 8];
      v671 = *(const unsigned __int16 **)&v1897[8 * byte_1800CC160[3 * v665 + 2] - 8];
      v1440 = v671;
      v1610 = (SIZE_T)v671;
      v672 = (char *)MemoryAlloc(0x1C90uLL);
      v1548 = v672;
      if ( v672 )
      {
        v675 = v672 + 7;
        v676 = -1;
        v677 = (unsigned __int8 *)&unk_1800CA422;
        v678 = 0;
        v679 = 0;
        v680 = 0;
        v681 = 914LL;
        do
        {
          v682 = *(v677 - 1) | (*(v677 - 2) << 8);
          v683 = v677[2] << 8;
          v684 = *v677;
          v677 += 8;
          v685 = *(v677 - 7) | ((v684 | (v682 << 8)) << 8);
          v686 = v685 ^ v680;
          v687 = *(v677 - 3) | ((*(v677 - 4) | ((*(v677 - 5) | v683) << 8)) << 8);
          v688 = v686 ^ v687 ^ v679 ^ 0xAC987321;
          v689 = (__ROR4__(v688, 22) + 4991 * __ROR4__(v688 + 1419157410, 27)) ^ v686;
          v690 = (43881 * __ROR4__(v689 + 133239679, 9) - __ROR4__(v689, 30)) ^ v688;
          v691 = (24670 * v690 - (v690 >> 13) - 123127970) ^ v689;
          v692 = (2033 * __ROR4__(v691 ^ 0xAB69, 26) - __ROR4__(v691, 30)) ^ v690;
          v693 = (133239679 - (v692 ^ 0xAB69605E)) ^ v691;
          v694 = (43881 * (v693 ^ 0x137F)) ^ __ROR4__(v693, 6) ^ v692;
          v695 = (__ROR4__(v694, 30) + 24670 * __ROR4__(v694 + 133239679, 15)) ^ v693;
          v696 = (2033 * __ROR4__(v695 + 1419157410, 14) - __ROR4__(v695, 24)) ^ v694;
          v697 = __ROR4__(v696, 10) ^ (4991 * __ROR4__(v696 ^ 0xAB69605E, 12)) ^ v695;
          v698 = v696 ^ (v697 >> 10) ^ (43881 * (v697 ^ 0x7F1));
          v699 = (2033 * (__ROR4__(~v698, 5) + 24670)) ^ v697;
          v700 = v698 ^ (v699 - 2033) ^ 0xAB69605E;
          v701 = ((v700 >> 2) + 4991 * __ROR4__(v698 ^ (v699 - 2033) ^ 0xAB6967AF, 30)) ^ v699;
          v702 = (__ROR4__(v701, 25) + 43881 * __ROR4__(v701 - 133239679, 6)) ^ v700;
          v703 = (24670 * (v702 ^ 0x137F) + __ROR4__(v702, 9)) ^ v701;
          v704 = (__ROR4__(v703, 25) + 2033 * __ROR4__(v703 ^ 0xAB69, 27)) ^ v702;
          v705 = v704 ^ v703 ^ 0xAC987321;
          v706 = (4991 * __ROR4__(v705, 3) - 219010071) ^ v704;
          v707 = (24670 * __ROR4__(v706 - 133239679, 1) - __ROR4__(v706, 6)) ^ v705;
          v708 = (__ROR4__(v707, 18) + 2033 * __ROR4__(v707 - 1419157410, 29)) ^ v706;
          v709 = (4991 * __ROR4__(v708 - 1419157410, 17) - __ROR4__(v708, 14)) ^ v707;
          v710 = (v709 >> 3) ^ (43881 * (v709 ^ 0x605E)) ^ v708;
          v711 = 24670 * __ROR4__(v710 ^ 0x7F1137F, 28);
          v712 = __ROR4__(v710, 30);
          v679 = v676 ^ v710;
          v676 = v687;
          v680 = v678 ^ v709 ^ v712 ^ v711;
          *(v675 - 4) = v680;
          *v675 = v679;
          v675 += 8;
          *(v675 - 13) = BYTE1(v680);
          *(v675 - 9) = BYTE1(v679);
          *(v675 - 14) = (unsigned __int16)(v680 >> 8) >> 8;
          *(v675 - 10) = (unsigned __int16)(v679 >> 8) >> 8;
          *(v675 - 15) = __ROR4__((((v680 >> 8) | (v680 << 24)) >> 8) | (((v680 >> 8) | (v680 << 24)) << 24), 8);
          v678 = v685;
          *(v675 - 11) = __ROR4__((((v679 >> 8) | (v679 << 24)) >> 8) | (((v679 >> 8) | (v679 << 24)) << 24), 8);
          --v681;
        }
        while ( v681 );
        v713 = v1548;
        LODWORD(v2) = 0;
        v714 = 0LL;
        v715 = 0LL;
        do
        {
          v716 = (__m128)_mm_loadu_si128((const __m128i *)&v1548[v714]);
          v714 += 16LL;
          v717 = _mm_xor_ps(v716, v715);
          v715 = v717;
        }
        while ( v714 < 0x1C90 );
        v718 = _mm_xor_ps(v717, (__m128)_mm_srli_si128((__m128i)v717, 8));
        v719 = _mm_xor_ps(v718, (__m128)_mm_srli_si128((__m128i)v718, 4));
        v720 = _mm_xor_ps(v719, (__m128)_mm_srli_si128((__m128i)v719, 2));
        if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v720, (__m128)_mm_srli_si128((__m128i)v720, 1))) == 127LL )
        {
          v1750 = v1548;
          v650 = 0;
          v1751 = 7312LL;
          if ( v1548 )
            v1751 = 7312LL;
          else
            v713 = 0LL;
          v721 = v1890;
          v722 = 6LL;
          do
          {
            for ( ii = 0; ii < 0x26; ++ii )
            {
              if ( dwBytesc == ii )
                *v721 = v713;
              v724 = -1LL;
              do
                ++v724;
              while ( v713[v724] );
              v713 += v724 + 1;
            }
            ++v721;
            --v722;
          }
          while ( v722 );
          v725 = MemoryAlloc(0x18uLL);
          SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1752, v725);
          v726 = v1752;
          if ( v1752 )
          {
            v727 = 0;
            *v1752 = 0LL;
            *((_QWORD *)v726 + 2) = 0LL;
            v1751 = 7312LL;
            while ( 2 )
            {
              dwBytesd = v727;
              if ( v727 >= 3 )
              {
                v735 = (void **)v726;
                v726 = 0LL;
                v1748 = v735;
                v1826 = v1477;
                v1752 = 0LL;
              }
              else
              {
                v728 = 0;
                v1549 = v727;
                while ( 1 )
                {
                  if ( v728 >= 6 )
                    goto LABEL_858;
                  if ( *((_WORD *)&v1898 + v727) == word_1800CC1D8[v728] )
                    break;
                  ++v728;
                }
                v729 = (_BYTE *)*((_QWORD *)v1890 + v728);
                v730 = -1LL;
                v1603 = v729;
                do
                  ++v730;
                while ( v729[v730] );
                v731 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))off_1800E70C0[0])(
                         65001LL,
                         0LL,
                         v729,
                         (unsigned int)(v730 + 1),
                         0LL,
                         0);
                v1648 = v731;
                if ( v731 )
                {
                  v732 = MemoryAlloc(2LL * v731);
                  *((_QWORD *)v726 + v1549) = v732;
                  if ( !v732 )
                    goto LABEL_850;
                  v733 = -1LL;
                  do
                    ++v733;
                  while ( v1603[v733] );
                  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, void *, int))off_1800E70C0[0])(
                         65001LL,
                         0LL,
                         v1603,
                         (unsigned int)(v733 + 1),
                         v732,
                         v1648) )
                  {
LABEL_858:
                    v727 = dwBytesd + 1;
                    continue;
                  }
                }
                v734 = GetLastError();
                v650 = v734;
                if ( v734 > 0 )
                  v650 = (unsigned __int16)v734 | 0x80070000;
                if ( v650 >= 0 )
                  v650 = -2147467259;
              }
              break;
            }
          }
          else
          {
LABEL_850:
            v650 = -2147024882;
          }
          if ( v726 )
          {
            v736 = 3LL;
            v1440 = (const unsigned __int16 *)v1610;
            v1751 = 7312LL;
            do
            {
              v737 = *(_WORD **)v726;
              if ( *(_QWORD *)v726 )
              {
                v738 = -1LL;
                do
                  ++v738;
                while ( v737[v738] );
                memset(v737, 0, 2 * v738 + 2);
                MemoryFree(*(void **)v726);
                v736 = v1389;
              }
              v726 = (_OWORD *)((char *)v726 + 8);
              v1389 = --v736;
            }
            while ( v736 );
          }
          v673 = v1751;
        }
        else
        {
          v650 = -1073425151;
          MemoryFree(v1548);
          v673 = 0LL;
        }
        v671 = v1440;
      }
      else
      {
        v650 = -2147024882;
        v673 = 0LL;
      }
      v674 = (const unsigned __int16 *)v1457;
    }
    v1458 = v674;
    if ( v1750 )
      memset(v1750, 0, v673);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1752);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1750);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1749);
    if ( v650 < 0 )
      goto LABEL_985;
    if ( v1748 )
      v739 = v1748;
    else
      v739 = 0LL;
    v1828 = *v739;
    if ( v1748 )
      v740 = v1748;
    else
      v740 = 0LL;
    v1829 = v740[1];
    if ( v1748 )
      v741 = v1748;
    else
      v741 = 0LL;
    v1830 = v741[2];
    v1788 = 0LL;
    LODWORD(v1788) = 16;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800E7168)(
                          66LL,
                          0LL,
                          &v1788,
                          0LL) )
    {
      v742 = GetLastError();
      v650 = v742;
      if ( v742 > 0 )
        v650 = (unsigned __int16)v742 | 0x80070000;
      v1827 = 0;
      if ( v650 >= 0 )
        v650 = -2147467259;
      goto LABEL_985;
    }
    v1827 = BYTE4(v1788) & 1;
    if ( v1596 == 1 )
    {
      v1563 = 42;
    }
    else
    {
      if ( v1596 != 2 )
      {
        if ( v1596 == 3 )
        {
          v1563 = 225;
          v1584 = 225;
        }
LABEL_898:
        v743 = 96;
        v1478 = 96;
        memset_0(v1886, 0, 0xDCuLL);
        v1887 = 220;
        if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800E70E0[0])(0LL, 0xFFFFFFFFLL, v1886) )
        {
          v743 = v1888;
          *(_QWORD *)&v1787 = 0LL;
          *((_QWORD *)&v1787 + 1) = v1889;
          if ( v1888 < 0x60u )
            v743 = 96;
          v1478 = v743;
        }
        v744 = v671;
        if ( v1596 == 1 )
          v744 = (const unsigned __int16 *)v1484;
        v1538 = v744;
        memset_0(v1877, 0, 0x5CuLL);
        v650 = 0;
        v1523 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70F8[0])(0LL, 0LL, 1027LL);
        if ( !v1523 )
          goto LABEL_952;
        v745 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1563, v743, 72LL);
        v1877[4] = 400;
        v1877[0] = -v745;
        v1878 = 5;
        StringCchCopyW(v1879, 0x20uLL, v1538);
        v746 = ((__int64 (__fastcall *)(_DWORD *))off_1800E7020[0])(v1877);
        if ( v746 )
        {
          v1831 = v746;
        }
        else
        {
          v747 = GetLastError();
          v650 = v747;
          if ( v747 > 0 )
            v650 = (unsigned __int16)v747 | 0x80070000;
          if ( v650 >= 0 )
            v650 = -2147467259;
        }
        ((void (__fastcall *)(_QWORD, SIZE_T))off_1800E7160[0])(0LL, v1523);
        if ( v650 < 0 )
          goto LABEL_985;
        if ( v1596 == 1 )
          v671 = (const unsigned __int16 *)v1484;
        memset_0(v1880, 0, 0x5CuLL);
        v650 = 0;
        v1485 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70F8[0])(0LL, 0LL, 1027LL);
        if ( !v1485 )
          goto LABEL_952;
        v748 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1584, v743, 72LL);
        v1880[4] = 400;
        v1880[0] = -v748;
        v1881 = 5;
        StringCchCopyW(v1882, 0x20uLL, v671);
        v749 = ((__int64 (__fastcall *)(_DWORD *))off_1800E7020[0])(v1880);
        if ( v749 )
        {
          v1832 = (void *)v749;
        }
        else
        {
          v750 = GetLastError();
          v650 = v750;
          if ( v750 > 0 )
            v650 = (unsigned __int16)v750 | 0x80070000;
          if ( v650 >= 0 )
            v650 = -2147467259;
        }
        ((void (__fastcall *)(_QWORD, SIZE_T))off_1800E7160[0])(0LL, v1485);
        if ( v650 < 0 )
          goto LABEL_985;
        v751 = 0;
        v752 = 0;
        switch ( v1596 )
        {
          case 1:
            goto LABEL_925;
          case 2:
            v752 = 0;
            v751 = SDWORD2(v1787) / 4;
            break;
          case 3:
LABEL_925:
            v751 = DWORD2(v1787);
            v752 = HIDWORD(v1787);
            break;
        }
        *((_QWORD *)&v1851 + 1) = __PAIR64__(v752, v751);
        if ( v1596 == 1 )
        {
          v753 = 150;
          v1570 = 150;
          v1432 = 32;
        }
        else
        {
          v753 = 0;
          if ( (unsigned int)(v1596 - 2) < 2 )
          {
            v1570 = 0;
            v1432 = 0;
          }
        }
        v754 = v751 - v753;
        v755 = v1828;
        v1836.m128i_i32[2] = v754;
        v1835.m128i_i32[2] = v754;
        v1486 = ((__int64 (__fastcall *)(LPCWSTR, size_t))off_1800E7078)(lpModuleNamec, v1831);
        v756 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1800E70D8)(
                 lpModuleNamec,
                 v755,
                 0xFFFFFFFFLL,
                 &v1835,
                 3152,
                 0LL);
        v650 = v756 != 0 ? 0 : 0x80004005;
        if ( v1486 )
          ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1800E7078)(lpModuleNamec, v1486);
        if ( !v756 )
          goto LABEL_985;
        v757 = v1829;
        v1487 = ((__int64 (__fastcall *)(LPCWSTR, void *))off_1800E7078)(lpModuleNamec, v1832);
        v758 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1800E70D8)(
                 lpModuleNamec,
                 v757,
                 0xFFFFFFFFLL,
                 &v1836,
                 3152,
                 0LL);
        v650 = v758 != 0 ? 0 : 0x80004005;
        if ( v1487 )
          ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1800E7078)(lpModuleNamec, v1487);
        if ( !v758 )
          goto LABEL_985;
        if ( (unsigned int)(v1596 - 2) <= 1 )
        {
          v754 = v1836.m128i_i32[2];
          if ( v1835.m128i_i32[2] > v1836.m128i_i32[2] )
            v754 = v1835.m128i_i32[2];
        }
        if ( v1826 )
        {
          off_1800E7150((HAM_ACTIVITY_RM_CONTEXT *)&v1835, (void *)(unsigned int)(v754 - v1835.m128i_i32[2]));
          v759 = (unsigned int)(v754 - v1836.m128i_i32[2]);
        }
        else
        {
          off_1800E7150((HAM_ACTIVITY_RM_CONTEXT *)&v1835, (void *)v1570);
          v759 = v1570;
        }
        ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1800E7150)(
          &v1836,
          v759,
          (unsigned int)(v1835.m128i_i32[3] + v1432));
        if ( (unsigned int)(v1596 - 2) <= 1 )
        {
          *((_QWORD *)&v1851 + 1) = __PAIR64__(v1836.m128i_u32[3], v754);
          v1834 = -5723992;
          goto LABEL_972;
        }
        if ( v1596 != 1 )
          goto LABEL_972;
        v1834 = 0xFFFFFF;
        memset_0(v1883, 0, 0x5CuLL);
        v650 = 0;
        v760 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70F8[0])(0LL, 0LL, 1027LL);
        if ( v760 )
        {
          v761 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800E70B8[0])(11LL, v1478);
          v1883[4] = 400;
          v1883[0] = -v761;
          v1884 = 5;
          StringCchCopyW(v1885, 0x20uLL, v1458);
          v762 = ((__int64 (__fastcall *)(_DWORD *))off_1800E7020[0])(v1883);
          if ( v762 )
          {
            v1833 = v762;
          }
          else
          {
            v763 = GetLastError();
            v650 = v763;
            if ( v763 > 0 )
              v650 = (unsigned __int16)v763 | 0x80070000;
            if ( v650 >= 0 )
              v650 = -2147467259;
          }
          ((void (__fastcall *)(_QWORD, __int64))off_1800E7160[0])(0LL, v760);
          if ( v650 < 0 )
            goto LABEL_985;
          v765 = v1830;
          v1839 = v754;
          v766 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800E7078)(lpModuleNamec, v1833);
          v767 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1800E70D8)(
                   lpModuleNamec,
                   v765,
                   0xFFFFFFFFLL,
                   &v1837,
                   1120,
                   0LL);
          v650 = v767 == 0 ? 0x80004005 : 0;
          if ( v766 )
            ((void (__fastcall *)(LPCWSTR, __int64))off_1800E7078)(lpModuleNamec, v766);
          if ( !v767 )
            goto LABEL_985;
          v768 = v1839 + 24;
          if ( (int)(v1839 + 24) < 90 )
            v768 = 90;
          v1839 = v768;
          v1840 = 32;
          v1837 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1837, v1478, 96LL);
          v1838 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1838, v1478, 96LL);
          v1839 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1839, v1478, 96LL);
          v1840 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800E70B8[0])(v1840, v1478, 96LL);
          if ( v1826 )
          {
            v769 = v1835.m128i_u32[0];
            if ( v1835.m128i_i32[0] >= v1836.m128i_i32[0] )
              v769 = v1836.m128i_u32[0];
          }
          else
          {
            v770 = v1835.m128i_i32[2];
            if ( v1835.m128i_i32[2] <= v1836.m128i_i32[2] )
              v770 = v1836.m128i_i32[2];
            v769 = v1837 + v770 - v1839;
          }
          off_1800E7150((HAM_ACTIVITY_RM_CONTEXT *)&v1837, (void *)v769);
LABEL_972:
          v771 = v1826;
          v772 = HIDWORD(v1851);
          v773 = DWORD2(v1851);
          switch ( v1596 )
          {
            case 1:
              *(_QWORD *)&v1851 = 0LL;
              goto LABEL_984;
            case 2:
              v1859 = 0LL;
              v1857 = 0LL;
              v1858 = 0LL;
              v777 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD))off_1800E7148[0])(0LL);
              LODWORD(v1857) = 40;
              if ( !(unsigned int)off_1800E7108(v777, &v1857) )
              {
LABEL_984:
                v650 = 0;
LABEL_985:
                ((void (__fastcall *)(_QWORD, LPCWSTR))off_1800E7160[0])(0LL, lpModuleNamec);
                goto LABEL_986;
              }
              off_1800E7140[0](0LL, (char *)&v1858 + 4);
              off_1800E7140[0](0LL, (char *)&v1858 + 12);
              if ( v771 )
                v775 = DWORD1(v1858) + 5 * HIDWORD(v1858) / 100;
              else
                v775 = 95 * (HIDWORD(v1858) - v773) / 100;
              v776 = 95 * (v1859 - v772);
              break;
            case 3:
              v1856 = 0LL;
              v1854 = 0LL;
              v1855 = 0LL;
              v774 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(_QWORD))off_1800E7148[0])(0LL);
              LODWORD(v1854) = 40;
              if ( !(unsigned int)off_1800E7108(v774, &v1854) )
                goto LABEL_984;
              off_1800E7140[0](0LL, (char *)&v1855 + 4);
              off_1800E7140[0](0LL, (char *)&v1855 + 12);
              v775 = 50 * (HIDWORD(v1855) - v773) / 100;
              v776 = 50 * (v1856 - v772);
              break;
            default:
              goto LABEL_984;
          }
          LODWORD(v1851) = v775;
          DWORD1(v1851) = v776 / 100;
          goto LABEL_984;
        }
LABEL_952:
        v764 = GetLastError();
        v650 = v764;
        if ( v764 > 0 )
          v650 = (unsigned __int16)v764 | 0x80070000;
        if ( v650 >= 0 )
          v650 = -2147467259;
        goto LABEL_985;
      }
      v1563 = 15;
    }
    v1584 = 11;
    goto LABEL_898;
  }
  v649 = GetLastError();
  v650 = v649;
  if ( v649 > 0 )
    v650 = (unsigned __int16)v649 | 0x80070000;
  if ( v650 >= 0 )
    v650 = -2147467259;
LABEL_986:
  v778 = 1;
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v779 = dword_1800E97E8;
  if ( dword_1800E97E8 > 0 )
  {
    --dword_1800E97E8;
    if ( v779 == 1 )
    {
      v780 = 4LL;
      v781 = (HMODULE *)&unk_1800E9390;
      do
      {
        if ( *v781 )
          FreeLibrary(*v781);
        v781 += 3;
        --v780;
      }
      while ( v780 );
      memset_0(&unk_1800E9390, 0, 0x60uLL);
      v782 = 2LL;
      v783 = off_1800E7000;
      v784 = off_1800A91A0;
      do
      {
        v785 = *((_OWORD *)v784 + 1);
        *(_OWORD *)v783 = *(_OWORD *)v784;
        v786 = *((_OWORD *)v784 + 2);
        *((_OWORD *)v783 + 1) = v785;
        v787 = *((_OWORD *)v784 + 3);
        *((_OWORD *)v783 + 2) = v786;
        v788 = *((_OWORD *)v784 + 4);
        *((_OWORD *)v783 + 3) = v787;
        v789 = *((_OWORD *)v784 + 5);
        *((_OWORD *)v783 + 4) = v788;
        v790 = *((_OWORD *)v784 + 6);
        *((_OWORD *)v783 + 5) = v789;
        v791 = *((_OWORD *)v784 + 7);
        v784 += 16;
        *((_OWORD *)v783 + 6) = v790;
        v783 += 16;
        *((_OWORD *)v783 - 1) = v791;
        --v782;
      }
      while ( v782 );
      v778 = 1;
      v792 = *((_OWORD *)v784 + 1);
      *(_OWORD *)v783 = *(_OWORD *)v784;
      v793 = *((_OWORD *)v784 + 2);
      *((_OWORD *)v783 + 1) = v792;
      v794 = *((_OWORD *)v784 + 3);
      *((_OWORD *)v783 + 2) = v793;
      v795 = *((_OWORD *)v784 + 4);
      *((_OWORD *)v783 + 3) = v794;
      v796 = *((_OWORD *)v784 + 5);
      *((_OWORD *)v783 + 4) = v795;
      v797 = *((_OWORD *)v784 + 6);
      *((_OWORD *)v783 + 5) = v796;
      *((_OWORD *)v783 + 6) = v797;
    }
  }
  _InterlockedExchange(&dword_1800E97EC, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1748);
  if ( v650 < 0 )
    goto LABEL_1129;
  v798 = v1851;
  v1754 = v1851;
  v1816 = 0;
  memset_0(v1817, 0, 0x64uLL);
  v799 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800E7050[0])(lpMemt, 7LL);
  if ( v799 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v799, 104LL, &v1816) )
  {
    if ( v1818 != 32 || !v1819 || v1817[0] <= 0 || v1817[1] <= 0 )
      v778 = 0;
    if ( v778 )
    {
LABEL_1006:
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1800E7150)(&v1835, v798, HIDWORD(v1754));
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1800E7150)(&v1836, v798, HIDWORD(v1754));
      v800 = v1596;
      if ( v1596 == 1 )
        Sizeg = ((__int64 (__fastcall *)(_QWORD))off_1800E7028[0])(v1827 == 0 ? 0xB26720 : 0);
      goto LABEL_1008;
    }
  }
  else
  {
    v778 = 0;
  }
  if ( v1596 == 1 )
    goto LABEL_1006;
  v800 = v1596;
LABEL_1008:
  v1564 = off_1800E7080(lpMemt, (void *)1);
  v801 = 2064;
  if ( v1826 )
    v801 = 133138;
  v1585 = v801;
  if ( !v778 )
  {
    if ( v1827 || (v864 = -64, v800 == 1) )
      v864 = -1;
    LOWORD(v1575) = 0;
    BYTE2(v1575) = v864;
    HIBYTE(v1575) = 1;
    v1386 = 0;
    v1436 = 0;
    v1479 = 0;
    v1492 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7010[0])(lpMemt);
    if ( !v1492 )
      goto LABEL_1097;
    if ( v800 == 1 )
    {
      v865 = 0;
      v866 = v1836.m128i_i32[2] - v1836.m128i_i32[0];
      v867 = 0;
      if ( v1836.m128i_i32[2] - v1836.m128i_i32[0] <= v1835.m128i_i32[2] - v1835.m128i_i32[0] )
        v866 = v1835.m128i_i32[2] - v1835.m128i_i32[0];
      v868 = v1836.m128i_i32[3] - v1835.m128i_i32[1];
      dwBytese = v866;
      v1649 = v1836.m128i_i32[3] - v1835.m128i_i32[1];
      if ( v1826 )
      {
        v1386 = v1835.m128i_i32[0] + v866 - v1835.m128i_i32[2];
        v865 = v1386;
        v1479 = v1836.m128i_i32[0] + v866 - v1836.m128i_i32[2];
        v868 = v1836.m128i_i32[3] - v1835.m128i_i32[1];
        v867 = v1479;
      }
      v1659 = v1835.m128i_i32[3] - v1835.m128i_i32[1];
      v869 = v1835.m128i_i32[2] + v865 - v1835.m128i_i32[0];
      v870 = v1836.m128i_i32[2] + v867 - v1836.m128i_i32[0];
      v1604 = v1836.m128i_i32[1] - v1835.m128i_i32[1];
      v1550 = v1836.m128i_i32[3] - v1835.m128i_i32[1];
    }
    else
    {
      v866 = DWORD2(v1851);
      v868 = HIDWORD(v1851);
      dwBytese = DWORD2(v1851);
      v1659 = _mm_cvtsi128_si32(_mm_srli_si128(v1835, 12));
      v1436 = _mm_cvtsi128_si32(_mm_srli_si128(v1835, 4));
      v1550 = _mm_cvtsi128_si32(_mm_srli_si128(v1836, 12));
      v869 = _mm_cvtsi128_si32(_mm_srli_si128(v1835, 8));
      v1604 = _mm_cvtsi128_si32(_mm_srli_si128(v1836, 4));
      v1649 = HIDWORD(v1851);
      v1386 = _mm_cvtsi128_si32(v1835);
      v870 = _mm_cvtsi128_si32(_mm_srli_si128(v1836, 8));
      v1479 = _mm_cvtsi128_si32(v1836);
    }
    v1860[2] = -v868;
    v1757 = 0LL;
    memset(&v1860[4], 0, 28);
    v1860[0] = 40;
    v1860[1] = v866;
    v1860[3] = 2097153;
    v871 = ((__int64 (__fastcall *)(SIZE_T, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E7018[0])(
             v1492,
             v1860,
             0LL,
             &v1757,
             0LL,
             0);
    Srcd = (LPVOID)v871;
    if ( !v871 )
    {
      GetLastError();
      v863 = v1492;
      goto LABEL_1126;
    }
    ((void (__fastcall *)(SIZE_T, __int64))off_1800E7078)(v1492, v871);
    if ( v1596 == 1 && Sizeg )
    {
      v1846 = 0LL;
      v1848 = v1649;
      v1847 = v866;
      ((void (__fastcall *)(SIZE_T, __int64 *))off_1800E70E8[0])(v1492, &v1846);
    }
    v1611 = v1827;
    v1463 = v1831;
    lpModuleNamef = (LPCWSTR)v1828;
    v1798 = 0;
    memset_0(v1799, 0, 0x64uLL);
    v1820 = 0;
    memset_0(v1821, 0, 0x64uLL);
    v1541 = 0LL;
    v1443 = 0;
    v1394 = 0;
    v1869 = 0LL;
    v1871 = 0LL;
    v1870 = 0LL;
    v1872 = 0;
    v1845 = 0LL;
    if ( !lpModuleNamef )
      goto LABEL_1122;
    v872 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E7050[0])(v1492, 7LL);
    if ( v872 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v872, 104LL, &v1798) )
      {
        v1541 = v1800;
        v1443 = v1799[0];
        v1394 = v1799[1];
      }
      v1528 = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(SIZE_T))off_1800E7010[0])(v1492);
      if ( v1528 )
      {
        v873 = v869 - v1386;
        DWORD2(v1869) = v1436 - v1659;
        v1758 = 0LL;
        v1870 = 0LL;
        v1871 = 0LL;
        v1872 = 0;
        LODWORD(v1869) = 40;
        DWORD1(v1869) = v873;
        HIDWORD(v1869) = 2097153;
        v874 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E7018[0])(
                 v1528,
                 &v1869,
                 0LL,
                 &v1758,
                 0LL,
                 0);
        v1650 = (LPCWSTR)v874;
        if ( v874 )
        {
          v808 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v874, 104LL, &v1820) == 0;
          v962 = 0LL;
          if ( !v808 )
            v962 = v1822;
          DWORD2(v1845) = v873;
          HIDWORD(v1845) = v1659 - v1436;
          v1495 = v962;
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR))off_1800E7078)(v1528, v1650);
          off_1800E7080(v1528, (void *)1);
          v963 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, size_t))off_1800E7078)(v1528, v1463);
          v964 = off_1800E70E8[0];
          v1464 = v963;
          v965 = ((__int64 (__fastcall *)(_QWORD))off_1800E7070[0])(0LL);
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v964)(v1528, &v1845, v965);
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800E70D8)(
            v1528,
            lpModuleNamef,
            0xFFFFFFFFLL,
            &v1845,
            v1585,
            0LL);
          if ( v1596 == 1 )
          {
            if ( v1611 )
              v966 = ((__int64 (__fastcall *)(__int64))off_1800E7118[0])(8LL);
            else
              v966 = 0xFFFFFF;
          }
          else
          {
            v966 = -5723992;
          }
          v967 = 0;
          v968 = 0;
          v1613 = v966;
          v969 = -v1386;
          if ( v1386 >= 0 )
          {
            v967 = v1386;
            v969 = 0;
          }
          v970 = -v1436;
          if ( v1436 >= 0 )
          {
            v968 = v1436;
            v970 = 0;
          }
          v971 = DWORD2(v1845) - v969;
          if ( DWORD2(v1845) - v969 >= v1443 - v967 )
            v971 = v1443 - v967;
          v1387 = v971;
          v972 = HIDWORD(v1845) - v970;
          if ( HIDWORD(v1845) - v970 >= v1394 - v968 )
            v972 = v1394 - v968;
          v876 = 0;
          v1396 = v972;
          if ( v971 > 0 && v972 > 0 )
          {
            v973 = v1443;
            v974 = v1443 * v968;
            v1445 = 0;
            v975 = (unsigned __int8 *)&v1495[4 * v969 + 4 * (__int64)(DWORD2(v1845) * v970)];
            v1496 = v975;
            v976 = (const WCHAR *)(v1541 + 4 * (v967 + (__int64)v974));
            v1542 = 4LL * SDWORD2(v1845);
            v1660 = 2 * v973;
            lpModuleNameg = v976;
            do
            {
              v977 = v975 + 2;
              v978 = 0;
              v979 = (char *)v976 - (char *)v975;
              do
              {
                if ( (unsigned __int8)((*v977 + *(v977 - 2) + 2 * (unsigned int)*(v977 - 1)) >> 2) != 0xFF )
                {
                  v980 = (unsigned __int8)~((*v977 + *(v977 - 2) + 2 * (unsigned int)*(v977 - 1)) >> 2);
                  v977[v979] -= ~((*v977 + *(v977 - 2) + 2 * (unsigned int)*(v977 - 1)) >> 2) * (v1613 - v977[v979]);
                  v981 = v977[v979 - 1];
                  v982 = (unsigned __int64)(2155905153LL * v980 * (BYTE1(v1613) - v981)) >> 32;
                  v977[v979 - 1] = v981 + (v982 >> 7 < 0) + (v982 >> 7);
                  v983 = v977[v979 - 2];
                  v984 = (unsigned __int64)(2155905153LL * v980 * (BYTE2(v1613) - v983)) >> 32;
                  v977[v979 - 2] = v983 + (v984 >> 7 < 0) + (v984 >> 7);
                  v985 = v977[v979 + 1];
                  v986 = v980 * (255 - v985);
                  v971 = v1387;
                  v977[v979 + 1] = v985 + v986 / 255;
                }
                v977 += 4;
                ++v978;
                v876 = 0;
              }
              while ( v978 < v971 );
              v975 = &v1496[v1542];
              v976 = &lpModuleNameg[v1660];
              v1496 += v1542;
              lpModuleNameg = (LPCWSTR)((char *)lpModuleNameg + v1660 * 2);
              ++v1445;
            }
            while ( v1445 < v1396 );
            v87 = v1657;
            v866 = dwBytese;
          }
          ((void (__fastcall *)(LPCWSTR))off_1800E7038)(v1650);
          if ( v1464 )
            ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, size_t))off_1800E7078)(v1528, v1464);
        }
        else
        {
          v875 = GetLastError();
          v876 = v875;
          if ( v875 > 0 )
            v876 = (unsigned __int16)v875 | 0x80070000;
          if ( v876 >= 0 )
            v876 = -2147467259;
        }
        ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7030[0])(v1528);
        if ( v876 < 0 )
          goto LABEL_1122;
        v987 = v1829;
        v1397 = v1827;
        v1497 = v1832;
        v1652 = (LPCWSTR)v1829;
        v1801 = 0;
        memset_0(v1802, 0, 0x64uLL);
        v1823 = 0;
        memset_0(v1824, 0, 0x64uLL);
        v1465 = 0LL;
        v1446 = 0;
        v808 = v987 == 0LL;
        v1614 = 0;
        v863 = v1492;
        v1873 = 0LL;
        v1875 = 0LL;
        v1874 = 0LL;
        v1876 = 0;
        v1852 = 0LL;
        if ( v808 )
          goto LABEL_1123;
        v988 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800E7050[0])(v1492, 7LL);
        if ( !v988 )
        {
          GetLastError();
          goto LABEL_1123;
        }
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v988, 104LL, &v1801) )
        {
          v1465 = v1803;
          v1446 = v1802[0];
          v1614 = v1802[1];
        }
        lpModuleNameh = (HAM_ACTIVITY_RM_CONTEXT *)((__int64 (__fastcall *)(SIZE_T))off_1800E7010[0])(v1492);
        if ( lpModuleNameh )
        {
          v989 = v870 - v1479;
          DWORD2(v1873) = v1604 - v1550;
          v1760[0] = 0LL;
          v1874 = 0LL;
          v1875 = 0LL;
          v1876 = 0;
          LODWORD(v1873) = 40;
          DWORD1(v1873) = v989;
          HIDWORD(v1873) = 2097153;
          v990 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_1800E7018[0])(
                   lpModuleNameh,
                   &v1873,
                   0LL,
                   v1760,
                   0LL,
                   0);
          v1543 = v990;
          if ( !v990 )
          {
            v991 = GetLastError();
            v992 = v991;
            if ( v991 > 0 )
              v992 = (unsigned __int16)v991 | 0x80070000;
            if ( v992 >= 0 )
              v992 = -2147467259;
            v993 = lpModuleNameh;
            goto LABEL_1241;
          }
          v808 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v990, 104LL, &v1823) == 0;
          v994 = 0LL;
          if ( !v808 )
            v994 = v1825;
          HIDWORD(v1852) = v1550 - v1604;
          v1529 = v994;
          DWORD2(v1852) = v989;
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(lpModuleNameh, v1543);
          off_1800E7080(lpModuleNameh, (void *)1);
          v995 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800E7078)(lpModuleNameh, v1497);
          v996 = off_1800E70E8[0];
          v1498 = (LPVOID)v995;
          v997 = ((__int64 (__fastcall *)(_QWORD))off_1800E7070[0])(0LL);
          v993 = lpModuleNameh;
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v996)(lpModuleNameh, &v1852, v997);
          ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800E70D8)(
            lpModuleNameh,
            v1652,
            0xFFFFFFFFLL,
            &v1852,
            v1585,
            0LL);
          if ( v1596 == 1 )
          {
            if ( !v1397 )
            {
              v1398 = 0xFFFFFF;
LABEL_1222:
              v999 = 0;
              v1000 = -v1479;
              v1001 = 0;
              v992 = 0;
              if ( v1479 >= 0 )
              {
                v999 = v1479;
                v1000 = 0;
              }
              v1002 = -v1604;
              if ( v1604 >= 0 )
              {
                v1001 = v1604;
                v1002 = 0;
              }
              v1003 = DWORD2(v1852) - v1000;
              if ( DWORD2(v1852) - v1000 >= v1446 - v999 )
                v1003 = v1446 - v999;
              v1004 = HIDWORD(v1852) - v1002;
              if ( HIDWORD(v1852) - v1002 >= v1614 - v1001 )
                v1004 = v1614 - v1001;
              if ( v1003 > 0 && v1004 > 0 )
              {
                v1005 = v1446;
                v1006 = v1003;
                v1447 = 0;
                v1007 = (const WCHAR *)(v1529 + 4 * (v1000 + (__int64)(v1002 * DWORD2(v1852))));
                v1653 = v1007;
                v1008 = v1465 + 4 * (v999 + (__int64)(v1001 * (int)v1005));
                v1530 = 2LL * SDWORD2(v1852);
                v1588 = 4 * v1005;
                v1466 = v1008;
                do
                {
                  v1009 = (unsigned __int8 *)(v1007 + 1);
                  v1552 = 0;
                  v1010 = 0;
                  v1011 = v1008 - (_QWORD)v1007;
                  do
                  {
                    if ( (unsigned __int8)((*v1009 + *(v1009 - 2) + 2 * (unsigned int)*(v1009 - 1)) >> 2) != 0xFF )
                    {
                      v1012 = (unsigned __int8)~((*v1009 + *(v1009 - 2) + 2 * (unsigned int)*(v1009 - 1)) >> 2);
                      v1009[v1011] -= ~((*v1009 + *(v1009 - 2) + 2 * (unsigned int)*(v1009 - 1)) >> 2)
                                    * (v1514 - v1009[v1011]);
                      v1013 = v1009[v1011 - 1];
                      v1014 = (unsigned __int64)(2155905153LL * v1012 * (BYTE1(v1398) - v1013)) >> 32;
                      v1009[v1011 - 1] = v1013 + (v1014 >> 7 < 0) + (v1014 >> 7);
                      v1015 = v1009[v1011 - 2];
                      v1016 = (unsigned __int64)(2155905153LL * v1012 * (BYTE2(v1398) - v1015)) >> 32;
                      v1009[v1011 - 2] = v1015 + (v1016 >> 7 < 0) + (v1016 >> 7);
                      v1017 = v1009[v1011 + 1];
                      v1018 = v1012 * (255 - v1017);
                      v1010 = v1552;
                      v1009[v1011 + 1] = v1017 + v1018 / 255;
                    }
                    ++v1010;
                    v1009 += 4;
                    v1552 = v1010;
                    v992 = 0;
                  }
                  while ( v1010 < v1006 );
                  v1007 = &v1653[v1530];
                  v1008 = v1588 + v1466;
                  v1653 = (LPCWSTR)((char *)v1653 + v1530 * 2);
                  v1466 += v1588;
                  ++v1447;
                }
                while ( v1447 < v1004 );
                v866 = dwBytese;
                v993 = lpModuleNameh;
              }
              ((void (__fastcall *)(SIZE_T))off_1800E7038)(v1543);
              if ( v1498 )
                ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, LPVOID))off_1800E7078)(v993, v1498);
LABEL_1241:
              ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7030[0])(v993);
              if ( v992 >= 0 )
              {
                v862 = lpMemt;
                v863 = v1492;
                if ( v1596 == 1 )
                  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _QWORD, _QWORD, _QWORD, __int32, SIZE_T, _DWORD, _DWORD, int))off_1800E7000[0])(
                    lpMemt,
                    v1835.m128i_u32[0],
                    v1835.m128i_u32[1],
                    v866,
                    v1649,
                    v1492,
                    0,
                    0,
                    13369376);
                else
                  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, _QWORD, _QWORD, _QWORD, __int32, SIZE_T, _DWORD, _DWORD, unsigned __int32, __int32, int))off_1800E7040[0])(
                    lpMemt,
                    (unsigned int)v1851,
                    DWORD1(v1851),
                    v866,
                    v1649,
                    v1492,
                    0,
                    0,
                    v866,
                    v1649,
                    v1575);
LABEL_1245:
                off_1800E7080(v862, (void *)v1564);
                v877 = Srcd;
                if ( !Srcd )
                {
LABEL_1125:
                  if ( !v863 )
                    goto LABEL_1127;
LABEL_1126:
                  ((void (__fastcall *)(SIZE_T))off_1800E7030[0])(v863);
                  goto LABEL_1127;
                }
LABEL_1124:
                ((void (__fastcall *)(LPVOID))off_1800E7038)(v877);
                goto LABEL_1125;
              }
              goto LABEL_1122;
            }
            v998 = ((__int64 (__fastcall *)(__int64))off_1800E7118[0])(8LL);
          }
          else
          {
            v998 = -5723992;
          }
          v1398 = v998;
          v1514 = v998;
          goto LABEL_1222;
        }
      }
    }
    GetLastError();
LABEL_1122:
    v863 = v1492;
LABEL_1123:
    v877 = Srcd;
    goto LABEL_1124;
  }
  v802 = v1828;
  v1571 = v1827;
  v1488 = v1831;
  v1813 = 0;
  memset_0(v1814, 0, 0x64uLL);
  v1810 = 0;
  memset_0(v1811, 0, 0x64uLL);
  v1459 = 0LL;
  v1382 = 0;
  v1433 = 0;
  v1863 = 0LL;
  v1864 = 0;
  v1861 = 0LL;
  v1862 = 0LL;
  v1850 = 0LL;
  if ( !v802 )
    goto LABEL_1127;
  v803 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800E7050[0])(lpMemt, 7LL);
  if ( !v803 )
    goto LABEL_1097;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v803, 104LL, &v1813) )
  {
    v1459 = v1815;
    v1382 = v1814[0];
    v1433 = v1814[1];
  }
  v804 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7010[0])(lpMemt);
  lpModuleNamed = (LPCWSTR)v804;
  v805 = (HAM_ACTIVITY_RM_CONTEXT *)v804;
  if ( !v804 )
    goto LABEL_1097;
  DWORD1(v1861) = v1835.m128i_i32[2] - v1835.m128i_i32[0];
  DWORD2(v1861) = v1835.m128i_i32[1] - v1835.m128i_i32[3];
  v1755 = 0LL;
  v1862 = 0LL;
  v1863 = 0LL;
  v1864 = 0;
  LODWORD(v1861) = 40;
  HIDWORD(v1861) = 2097153;
  v1539 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E7018[0])(
            v804,
            &v1861,
            0LL,
            &v1755,
            0LL,
            0);
  if ( v1539 )
  {
    v808 = ((unsigned int (__fastcall *)(SIZE_T, __int64, int *))off_1800E7068[0])(v1539, 104LL, &v1810) == 0;
    v809 = 0LL;
    if ( !v808 )
      v809 = v1812;
    DWORD2(v1850) = v1835.m128i_i32[2] - v1835.m128i_i32[0];
    HIDWORD(v1850) = v1835.m128i_i32[3] - v1835.m128i_i32[1];
    v1524 = v809;
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v805, v1539);
    off_1800E7080(v805, (void *)1);
    v810 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v805, v1488);
    v811 = off_1800E70E8[0];
    v1489 = v810;
    v812 = ((__int64 (__fastcall *)(_QWORD))off_1800E7070[0])(0LL);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v811)(v805, &v1850, v812);
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int128 *, int, _QWORD))off_1800E70D8)(
      v805,
      v802,
      0xFFFFFFFFLL,
      &v1850,
      v1585,
      0LL);
    if ( v1596 == 1 )
    {
      if ( v1571 )
        v1572 = ((__int64 (__fastcall *)(__int64))off_1800E7118[0])(8LL);
      else
        v1572 = 0xFFFFFF;
    }
    else
    {
      v1572 = -5723992;
    }
    v813 = 0;
    v814 = -v1835.m128i_i32[0];
    v815 = 0;
    if ( v1835.m128i_i32[0] >= 0 )
    {
      v813 = v1835.m128i_i32[0];
      v814 = 0;
    }
    v816 = -v1835.m128i_i32[1];
    v807 = 0;
    if ( v1835.m128i_i32[1] >= 0 )
    {
      v816 = 0;
      v815 = v1835.m128i_i32[1];
    }
    v817 = DWORD2(v1850) - v814;
    if ( DWORD2(v1850) - v814 >= v1382 - v813 )
      v817 = v1382 - v813;
    v818 = HIDWORD(v1850) - v816;
    if ( HIDWORD(v1850) - v816 >= v1433 - v815 )
      v818 = v1433 - v815;
    if ( v817 > 0 && v818 > 0 )
    {
      v819 = v1382;
      v820 = v1382 * v815;
      v1383 = 0;
      v821 = v1524 + 4 * (v814 + (__int64)(DWORD2(v1850) * v816));
      v1525 = v821;
      v822 = v1459 + 4 * (v813 + (__int64)v820);
      v1392 = 4LL * SDWORD2(v1850);
      v1441 = 4 * v819;
      v1460 = v822;
      do
      {
        v1434 = 0;
        v823 = (unsigned __int8 *)(v821 + 2);
        v824 = 0;
        v825 = v822 - v821;
        do
        {
          if ( (unsigned __int8)((*v823 + *(v823 - 2) + 2 * (unsigned int)*(v823 - 1)) >> 2) != 0xFF )
          {
            v826 = (unsigned __int8)~((*v823 + *(v823 - 2) + 2 * (unsigned int)*(v823 - 1)) >> 2);
            v823[v825] -= ~((*v823 + *(v823 - 2) + 2 * (unsigned int)*(v823 - 1)) >> 2) * (v1572 - v823[v825]);
            v827 = v823[v825 - 1];
            v828 = (unsigned __int64)(2155905153LL * v826 * (BYTE1(v1572) - v827)) >> 32;
            v823[v825 - 1] = v827 + (v828 >> 7 < 0) + (v828 >> 7);
            v829 = v823[v825 - 2];
            v830 = (unsigned __int64)(2155905153LL * v826 * (BYTE2(v1572) - v829)) >> 32;
            v823[v825 - 2] = v829 + (v830 >> 7 < 0) + (v830 >> 7);
            v831 = v823[v825 + 1];
            v832 = v826 * (255 - v831);
            v824 = v1434;
            v823[v825 + 1] = v831 + v832 / 255;
          }
          ++v824;
          v823 += 4;
          v1434 = v824;
          v807 = 0;
        }
        while ( v824 < v817 );
        v821 = v1392 + v1525;
        v822 = v1441 + v1460;
        v1525 += v1392;
        v1460 += v1441;
        ++v1383;
      }
      while ( v1383 < v818 );
      v87 = v1657;
      v805 = (HAM_ACTIVITY_RM_CONTEXT *)lpModuleNamed;
    }
    ((void (__fastcall *)(SIZE_T))off_1800E7038)(v1539);
    if ( v1489 )
      ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v805, v1489);
  }
  else
  {
    v806 = GetLastError();
    v807 = v806;
    if ( v806 > 0 )
      v807 = (unsigned __int16)v806 | 0x80070000;
    if ( v807 >= 0 )
      v807 = -2147467259;
  }
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7030[0])(v805);
  if ( v807 < 0 )
    goto LABEL_1127;
  v833 = v1829;
  v1573 = v1827;
  v1490 = (SIZE_T)v1832;
  v1807 = 0;
  memset_0(v1808, 0, 0x64uLL);
  v1804 = 0;
  memset_0(v1805, 0, 0x64uLL);
  v1461 = 0LL;
  v1384 = 0;
  v1435 = 0;
  v1867 = 0LL;
  v1868 = 0;
  v1865 = 0LL;
  v1866 = 0LL;
  v1849 = 0LL;
  if ( !v833 )
    goto LABEL_1127;
  v834 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int64))off_1800E7050[0])(lpMemt, 7LL);
  if ( !v834 )
    goto LABEL_1097;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1800E7068[0])(v834, 104LL, &v1807) )
  {
    v1461 = v1809;
    v1384 = v1808[0];
    v1435 = v1808[1];
  }
  v835 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7010[0])(lpMemt);
  lpModuleNamee = (LPCWSTR)v835;
  v836 = (HAM_ACTIVITY_RM_CONTEXT *)v835;
  if ( !v835 )
  {
LABEL_1097:
    GetLastError();
    goto LABEL_1127;
  }
  DWORD1(v1865) = v1836.m128i_i32[2] - v1836.m128i_i32[0];
  DWORD2(v1865) = v1836.m128i_i32[1] - v1836.m128i_i32[3];
  v1756 = 0LL;
  v1866 = 0LL;
  v1867 = 0LL;
  v1868 = 0;
  LODWORD(v1865) = 40;
  HIDWORD(v1865) = 2097153;
  v1540 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800E7018[0])(
            v835,
            &v1865,
            0LL,
            &v1756,
            0LL,
            0);
  if ( !v1540 )
  {
    v837 = GetLastError();
    v838 = v837;
    if ( v837 > 0 )
      v838 = (unsigned __int16)v837 | 0x80070000;
    if ( v838 >= 0 )
      v838 = -2147467259;
    goto LABEL_1091;
  }
  v808 = ((unsigned int (__fastcall *)(SIZE_T, __int64, int *))off_1800E7068[0])(v1540, 104LL, &v1804) == 0;
  v839 = 0LL;
  if ( !v808 )
    v839 = v1806;
  DWORD2(v1849) = v1836.m128i_i32[2] - v1836.m128i_i32[0];
  HIDWORD(v1849) = v1836.m128i_i32[3] - v1836.m128i_i32[1];
  v1526 = v839;
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v836, v1540);
  off_1800E7080(v836, (void *)1);
  v840 = ((__int64 (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v836, v1490);
  v841 = off_1800E70E8[0];
  v1491 = v840;
  v842 = ((__int64 (__fastcall *)(_QWORD))off_1800E7070[0])(0LL);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, __int128 *, __int64))v841)(v836, &v1849, v842);
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, void *, __int64, __int128 *, int, _QWORD))off_1800E70D8)(
    v836,
    v833,
    0xFFFFFFFFLL,
    &v1849,
    v1585,
    0LL);
  if ( v1596 == 1 )
  {
    if ( v1573 )
    {
      v843 = ((__int64 (__fastcall *)(__int64))off_1800E7118[0])(8LL);
      goto LABEL_1071;
    }
    v1597 = 0xFFFFFF;
  }
  else
  {
    v843 = -5723992;
LABEL_1071:
    v1597 = v843;
    v1514 = v843;
  }
  v844 = 0;
  v845 = -v1836.m128i_i32[0];
  v846 = 0;
  if ( v1836.m128i_i32[0] >= 0 )
  {
    v844 = v1836.m128i_i32[0];
    v845 = 0;
  }
  v847 = -v1836.m128i_i32[1];
  v838 = 0;
  if ( v1836.m128i_i32[1] >= 0 )
  {
    v847 = 0;
    v846 = v1836.m128i_i32[1];
  }
  v848 = DWORD2(v1849) - v845;
  if ( DWORD2(v1849) - v845 >= v1384 - v844 )
    v848 = v1384 - v844;
  v849 = HIDWORD(v1849) - v847;
  if ( HIDWORD(v1849) - v847 >= v1435 - v846 )
    v849 = v1435 - v846;
  if ( v848 > 0 && v849 > 0 )
  {
    v1574 = 0;
    v850 = v1526 + 4 * (v845 + (__int64)(DWORD2(v1849) * v847));
    v1527 = v850;
    v851 = v1461 + 4 * (v844 + (__int64)(v1384 * v846));
    v1393 = 4LL * SDWORD2(v1849);
    v1442 = 4LL * v1384;
    v1462 = v851;
    do
    {
      v852 = (unsigned __int8 *)(v850 + 2);
      v1385 = 0;
      v853 = 0;
      v854 = v851 - v850;
      do
      {
        if ( (unsigned __int8)((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2) != 0xFF )
        {
          v855 = (unsigned __int8)~((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2);
          v852[v854] -= ~((*v852 + *(v852 - 2) + 2 * (unsigned int)*(v852 - 1)) >> 2) * (v1514 - v852[v854]);
          v856 = v852[v854 - 1];
          v857 = (unsigned __int64)(2155905153LL * v855 * (BYTE1(v1597) - v856)) >> 32;
          v852[v854 - 1] = v856 + (v857 >> 7 < 0) + (v857 >> 7);
          v858 = v852[v854 - 2];
          v859 = (unsigned __int64)(2155905153LL * v855 * (BYTE2(v1597) - v858)) >> 32;
          v852[v854 - 2] = v858 + (v859 >> 7 < 0) + (v859 >> 7);
          v860 = v852[v854 + 1];
          v861 = v855 * (255 - v860);
          v853 = v1385;
          v852[v854 + 1] = v860 + v861 / 255;
        }
        ++v853;
        v852 += 4;
        v1385 = v853;
        v838 = 0;
      }
      while ( v853 < v848 );
      v850 = v1393 + v1527;
      v851 = v1442 + v1462;
      v1527 += v1393;
      v1462 += v1442;
      ++v1574;
    }
    while ( v1574 < v849 );
    v836 = (HAM_ACTIVITY_RM_CONTEXT *)lpModuleNamee;
  }
  ((void (__fastcall *)(SIZE_T))off_1800E7038)(v1540);
  if ( v1491 )
    ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *, SIZE_T))off_1800E7078)(v836, v1491);
LABEL_1091:
  ((void (__fastcall *)(HAM_ACTIVITY_RM_CONTEXT *))off_1800E7030[0])(v836);
  if ( v838 >= 0 )
  {
    v862 = lpMemt;
    v863 = 0LL;
    goto LABEL_1245;
  }
LABEL_1127:
  if ( Sizeg )
    ((void (__fastcall *)(SIZE_T))off_1800E7038)(Sizeg);
LABEL_1129:
  if ( v1828 )
  {
    v878 = -1LL;
    do
      ++v878;
    while ( *((_WORD *)v1828 + v878) );
    memset(v1828, 0, 2 * v878 + 2);
    MemoryFree(v1828);
    v1828 = 0LL;
  }
  if ( v1829 )
  {
    v879 = -1LL;
    do
      ++v879;
    while ( *((_WORD *)v1829 + v879) );
    memset(v1829, 0, 2 * v879 + 2);
    MemoryFree(v1829);
    v1829 = 0LL;
  }
  if ( v1830 )
  {
    v880 = -1LL;
    do
      ++v880;
    while ( *((_WORD *)v1830 + v880) );
    memset(v1830, 0, 2 * v880 + 2);
    MemoryFree(v1830);
    v1830 = 0LL;
  }
  if ( v1831 )
  {
    off_1800E7038();
    v1831 = 0LL;
  }
  if ( v1832 )
  {
    off_1800E7038();
    v1832 = 0LL;
  }
  if ( v1833 )
  {
    off_1800E7038();
    v1833 = 0LL;
  }
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v881 = dword_1800E97E8;
  if ( dword_1800E97E8 > 0 )
  {
    --dword_1800E97E8;
    if ( v881 == 1 )
    {
      v882 = 4LL;
      v883 = (HMODULE *)&unk_1800E9390;
      do
      {
        if ( *v883 )
          FreeLibrary(*v883);
        v883 += 3;
        --v882;
      }
      while ( v882 );
      memset_0(&unk_1800E9390, 0, 0x60uLL);
      v884 = 2LL;
      v885 = off_1800E7000;
      v886 = off_1800A91A0;
      do
      {
        v887 = *((_OWORD *)v886 + 1);
        *(_OWORD *)v885 = *(_OWORD *)v886;
        v888 = *((_OWORD *)v886 + 2);
        *((_OWORD *)v885 + 1) = v887;
        v889 = *((_OWORD *)v886 + 3);
        *((_OWORD *)v885 + 2) = v888;
        v890 = *((_OWORD *)v886 + 4);
        *((_OWORD *)v885 + 3) = v889;
        v891 = *((_OWORD *)v886 + 5);
        *((_OWORD *)v885 + 4) = v890;
        v892 = *((_OWORD *)v886 + 6);
        *((_OWORD *)v885 + 5) = v891;
        v893 = *((_OWORD *)v886 + 7);
        v886 += 16;
        *((_OWORD *)v885 + 6) = v892;
        v885 += 16;
        *((_OWORD *)v885 - 1) = v893;
        --v884;
      }
      while ( v884 );
      v894 = *((_OWORD *)v886 + 1);
      *(_OWORD *)v885 = *(_OWORD *)v886;
      v895 = *((_OWORD *)v886 + 2);
      *((_OWORD *)v885 + 1) = v894;
      v896 = *((_OWORD *)v886 + 3);
      *((_OWORD *)v885 + 2) = v895;
      v897 = *((_OWORD *)v886 + 4);
      *((_OWORD *)v885 + 3) = v896;
      v898 = *((_OWORD *)v886 + 5);
      *((_OWORD *)v885 + 4) = v897;
      v899 = *((_OWORD *)v886 + 6);
      *((_OWORD *)v885 + 5) = v898;
      *((_OWORD *)v885 + 6) = v899;
    }
  }
  _InterlockedExchange(&dword_1800E97EC, 0);
  v1395 = dword_1800E8498;
  v900 = off_1800E7098[0]();
  v1891 = 0;
  v901 = v900 - qword_1800E97E0;
  v1494 = v900 - qword_1800E97E0;
  v1895 = 0LL;
  v1892 = 0LL;
  v1893 = 0LL;
  v1894 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v902 = dword_1800E97E8;
  if ( dword_1800E97E8 )
  {
LABEL_1276:
    dword_1800E97E8 = v902 + 1;
    goto LABEL_1277;
  }
  v1444 = 0;
  v1612 = 0;
  v1551 = 0;
  v903 = (char *)MemoryAlloc(0x338uLL);
  v1651 = (WCHAR *)v903;
  if ( !v903 )
    goto LABEL_1168;
  v904 = v903 + 7;
  v905 = 0;
  v906 = (unsigned __int8 *)&unk_1800C1552;
  v907 = 0;
  v908 = 0;
  v2 = 103LL;
  v909 = -1;
  do
  {
    v910 = *(v906 - 1) | (*(v906 - 2) << 8);
    v911 = v906[2] << 8;
    v912 = *v906;
    v906 += 8;
    v913 = *(v906 - 7) | ((v912 | (v910 << 8)) << 8);
    v914 = v913 ^ v908;
    v915 = *(v906 - 3) | ((*(v906 - 4) | ((*(v906 - 5) | v911) << 8)) << 8);
    v916 = v915 ^ v907 ^ v914 ^ 0xAC987321;
    v917 = (__ROR4__(v916, 22) + 4991 * __ROR4__(v916 + 1419157410, 27)) ^ v914;
    v918 = (43881 * __ROR4__(v917 + 133239679, 9) - __ROR4__(v917, 30)) ^ v916;
    v919 = (24670 * v918 - (v918 >> 13) - 123127970) ^ v917;
    v920 = (2033 * __ROR4__(v919 ^ 0xAB69, 26) - __ROR4__(v919, 30)) ^ v918;
    v921 = (133239679 - (v920 ^ 0xAB69605E)) ^ v919;
    v922 = (43881 * (v921 ^ 0x137F)) ^ __ROR4__(v921, 6) ^ v920;
    v923 = (__ROR4__(v922, 30) + 24670 * __ROR4__(v922 + 133239679, 15)) ^ v921;
    v924 = (2033 * __ROR4__(v923 + 1419157410, 14) - __ROR4__(v923, 24)) ^ v922;
    v925 = __ROR4__(v924, 10) ^ (4991 * __ROR4__(v924 ^ 0xAB69605E, 12)) ^ v923;
    v926 = v924 ^ (v925 >> 10) ^ (43881 * (v925 ^ 0x7F1));
    v927 = (2033 * (__ROR4__(~v926, 5) + 24670)) ^ v925;
    v928 = v926 ^ (v927 - 2033) ^ 0xAB69605E;
    v929 = ((v928 >> 2) + 4991 * __ROR4__(v926 ^ (v927 - 2033) ^ 0xAB6967AF, 30)) ^ v927;
    v930 = (__ROR4__(v929, 25) + 43881 * __ROR4__(v929 - 133239679, 6)) ^ v928;
    v931 = (24670 * (v930 ^ 0x137F) + __ROR4__(v930, 9)) ^ v929;
    v932 = (__ROR4__(v931, 25) + 2033 * __ROR4__(v931 ^ 0xAB69, 27)) ^ v930;
    v933 = v931 ^ v932 ^ 0xAC987321;
    v934 = (4991 * __ROR4__(v933, 3) - 219010071) ^ v932;
    v935 = (24670 * __ROR4__(v934 - 133239679, 1) - __ROR4__(v934, 6)) ^ v933;
    v936 = (__ROR4__(v935, 18) + 2033 * __ROR4__(v935 - 1419157410, 29)) ^ v934;
    v937 = (4991 * __ROR4__(v936 - 1419157410, 17) - __ROR4__(v936, 14)) ^ v935;
    v938 = (v937 >> 3) ^ (43881 * (v937 ^ 0x605E)) ^ v936;
    v939 = 24670 * __ROR4__(v938 ^ 0x7F1137F, 28);
    v940 = __ROR4__(v938, 30);
    v907 = v909 ^ v938;
    v909 = v915;
    v908 = v905 ^ v937 ^ v940 ^ v939;
    *(v904 - 4) = v908;
    *v904 = v907;
    v904 += 8;
    v905 = v913;
    *(v904 - 13) = BYTE1(v908);
    *(v904 - 9) = BYTE1(v907);
    *(v904 - 14) = (unsigned __int16)(v908 >> 8) >> 8;
    *(v904 - 10) = (unsigned __int16)(v907 >> 8) >> 8;
    *(v904 - 15) = __ROR4__((((v908 >> 8) | (v908 << 24)) >> 8) | (((v908 >> 8) | (v908 << 24)) << 24), 8);
    *(v904 - 11) = __ROR4__((((v907 >> 8) | (v907 << 24)) >> 8) | (((v907 >> 8) | (v907 << 24)) << 24), 8);
    --v2;
  }
  while ( v2 );
  v941 = 0;
  v87 = v1657;
  v942 = 0LL;
  v943 = v1651;
  do
    v941 ^= *((_BYTE *)v1651 + v942++);
  while ( v942 < 0x338 );
  if ( v941 != 64LL )
  {
    MemoryFree(v1651);
    goto LABEL_1167;
  }
  *((_BYTE *)v1651 + 823) = 0;
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v943 )
    {
      v1019 = v943;
      v1020 = -1LL;
      do
        ++v1020;
      while ( v943[v1020] );
      v1021 = &v943[v1020];
      v1022 = (char *)&unk_1800E9390 + 24 * v1551;
      if ( !GetModuleHandleExW(0, v1019, (HMODULE *)v1022) )
      {
        v1023 = -1073741702;
        goto LABEL_1272;
      }
      v1023 = 0;
      v1612 = 0;
      if ( **(_WORD **)v1022 == 23117
        && (v1024 = *(int *)(*(_QWORD *)v1022 + 60LL), (unsigned int)v1024 < 0x10000000)
        && (v1025 = *(_QWORD *)v1022 + v1024, v1025 >= *(_QWORD *)v1022)
        && *(_DWORD *)v1025 == 17744 )
      {
        if ( ((*(_WORD *)(v1025 + 24) - 267) & 0xFEFF) != 0 )
        {
          v1023 = -1073741811;
          goto LABEL_1259;
        }
        *(_QWORD *)(v1022 + 12) = *(_QWORD *)(v1025 + 136);
        *((_DWORD *)v1022 + 2) = *(_DWORD *)(v1025 + 80);
      }
      else
      {
        v1023 = -1073741701;
LABEL_1259:
        v1612 = v1023;
      }
      v1026 = *(_DWORD *)(v1021 + 1);
      v1027 = 0;
      v1605 = v1026;
      v943 = v1021 + 3;
      while ( 1 )
      {
        v1589 = v1027;
        if ( v1027 >= v1026 )
          break;
        v1028 = (const CHAR *)v943;
        v1029 = -1LL;
        do
          ++v1029;
        while ( *((_BYTE *)v943 + v1029) );
        v943 = (WCHAR *)((char *)v943 + v1029 + 1);
        if ( v1023 >= 0 )
        {
          v1030 = GetProcAddress(*(HMODULE *)v1022, v1028);
          if ( !v1030 )
            goto LABEL_1272;
          off_1800E7000[v1444] = v1030;
          v1026 = v1605;
        }
        ++v1444;
        v1027 = v1589 + 1;
      }
      ++v1551;
      continue;
    }
    break;
  }
  v1023 = v1612;
LABEL_1272:
  if ( v1651 )
  {
    v1031 = GetProcessHeap();
    HeapFree(v1031, 0, v1651);
  }
  if ( v1023 >= 0 )
  {
    v902 = dword_1800E97E8;
    v901 = v1494;
    goto LABEL_1276;
  }
LABEL_1167:
  v901 = v1494;
LABEL_1168:
  v944 = 4LL;
  v945 = (HMODULE *)&unk_1800E9390;
  do
  {
    if ( *v945 )
      FreeLibrary(*v945);
    v945 += 3;
    --v944;
  }
  while ( v944 );
  memset_0(&unk_1800E9390, 0, 0x60uLL);
  v946 = 2LL;
  v947 = off_1800E7000;
  v948 = off_1800A91A0;
  do
  {
    v949 = *((_OWORD *)v948 + 1);
    *(_OWORD *)v947 = *(_OWORD *)v948;
    v950 = *((_OWORD *)v948 + 2);
    *((_OWORD *)v947 + 1) = v949;
    v951 = *((_OWORD *)v948 + 3);
    *((_OWORD *)v947 + 2) = v950;
    v952 = *((_OWORD *)v948 + 4);
    *((_OWORD *)v947 + 3) = v951;
    v953 = *((_OWORD *)v948 + 5);
    *((_OWORD *)v947 + 4) = v952;
    v954 = *((_OWORD *)v948 + 6);
    *((_OWORD *)v947 + 5) = v953;
    v955 = *((_OWORD *)v948 + 7);
    v948 += 16;
    *((_OWORD *)v947 + 6) = v954;
    v947 += 16;
    *((_OWORD *)v947 - 1) = v955;
    --v946;
  }
  while ( v946 );
  v956 = *((_OWORD *)v948 + 1);
  *(_OWORD *)v947 = *(_OWORD *)v948;
  v957 = *((_OWORD *)v948 + 2);
  *((_OWORD *)v947 + 1) = v956;
  v958 = *((_OWORD *)v948 + 3);
  *((_OWORD *)v947 + 2) = v957;
  v959 = *((_OWORD *)v948 + 4);
  *((_OWORD *)v947 + 3) = v958;
  v960 = *((_OWORD *)v948 + 5);
  *((_OWORD *)v947 + 4) = v959;
  v961 = *((_OWORD *)v948 + 6);
  *((_OWORD *)v947 + 5) = v960;
  *((_OWORD *)v947 + 6) = v961;
LABEL_1277:
  _InterlockedExchange(&dword_1800E97EC, 0);
  v1032 = 4LL;
  LODWORD(v1895) = v1395;
  LODWORD(v1892) = v901;
  v1891 = 1;
  LODWORD(v1893) = -1721306479;
  DWORD2(v1892) = 1;
  LODWORD(v1894) = 1;
  DWORD2(v1893) = 1;
  DWORD2(v1894) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800E70D0)(0LL, 8225LL, 4LL, &v1891);
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v1033 = dword_1800E97E8;
  if ( dword_1800E97E8 > 0 )
  {
    --dword_1800E97E8;
    if ( v1033 == 1 )
    {
      v1034 = (HMODULE *)&unk_1800E9390;
      do
      {
        if ( *v1034 )
          FreeLibrary(*v1034);
        v1034 += 3;
        --v1032;
      }
      while ( v1032 );
      memset_0(&unk_1800E9390, 0, 0x60uLL);
      v1035 = 2LL;
      v1036 = off_1800E7000;
      v1037 = off_1800A91A0;
      do
      {
        v1038 = *((_OWORD *)v1037 + 1);
        *(_OWORD *)v1036 = *(_OWORD *)v1037;
        v1039 = *((_OWORD *)v1037 + 2);
        *((_OWORD *)v1036 + 1) = v1038;
        v1040 = *((_OWORD *)v1037 + 3);
        *((_OWORD *)v1036 + 2) = v1039;
        v1041 = *((_OWORD *)v1037 + 4);
        *((_OWORD *)v1036 + 3) = v1040;
        v1042 = *((_OWORD *)v1037 + 5);
        *((_OWORD *)v1036 + 4) = v1041;
        v1043 = *((_OWORD *)v1037 + 6);
        *((_OWORD *)v1036 + 5) = v1042;
        v1044 = *((_OWORD *)v1037 + 7);
        v1037 += 16;
        *((_OWORD *)v1036 + 6) = v1043;
        v1036 += 16;
        *((_OWORD *)v1036 - 1) = v1044;
        --v1035;
      }
      while ( v1035 );
      v1045 = *((_OWORD *)v1037 + 1);
      *(_OWORD *)v1036 = *(_OWORD *)v1037;
      v1046 = *((_OWORD *)v1037 + 2);
      *((_OWORD *)v1036 + 1) = v1045;
      v1047 = *((_OWORD *)v1037 + 3);
      *((_OWORD *)v1036 + 2) = v1046;
      v1048 = *((_OWORD *)v1037 + 4);
      *((_OWORD *)v1036 + 3) = v1047;
      v1049 = *((_OWORD *)v1037 + 5);
      *((_OWORD *)v1036 + 4) = v1048;
      v1050 = *((_OWORD *)v1037 + 6);
      *((_OWORD *)v1036 + 5) = v1049;
      *((_OWORD *)v1036 + 6) = v1050;
    }
  }
  _InterlockedExchange(&dword_1800E97EC, 0);
  ((void (__fastcall *)(_QWORD, HAM_ACTIVITY_RM_CONTEXT *))off_1800E7160[0])(0LL, lpMemt);
LABEL_1289:
  SH<void *,SH_HANDLE>::Reset(&v1747);
  *(_OWORD *)v1789 = 0LL;
  v311 = 0LL;
  *(_OWORD *)v1790 = 0LL;
  v1051 = GetProcessHeap();
  v306 = HeapAlloc(v1051, 8u, 0xA0uLL);
  if ( !v306 )
  {
    v306 = 0LL;
    goto LABEL_316;
  }
  *v306 = xmmword_1800E79B0[0];
  v306[1] = xmmword_1800E79B0[1];
  v306[2] = xmmword_1800E79B0[2];
  v306[3] = xmmword_1800E79B0[3];
  v306[4] = xmmword_1800E79B0[4];
  v306[5] = xmmword_1800E79B0[5];
  v306[6] = xmmword_1800E79B0[6];
  v306[7] = xmmword_1800E79B0[7];
  v306[8] = xmmword_1800E79B0[8];
  v306[9] = xmmword_1800E79B0[9];
  v1052 = GetProcessHeap();
  v311 = (WCHAR *)HeapAlloc(v1052, 8u, 8uLL);
  if ( !v311 )
  {
    v311 = 0LL;
    goto LABEL_316;
  }
  *(_QWORD *)v311 = qword_1800E78F8;
  lpMemu = (LPVOID)__rdtsc();
  v1690 = 0LL;
  if ( (int)RtlUIntAdd(4LL, 4LL, (char *)&v1690 + 4) < 0 )
    goto LABEL_316;
  if ( (int)RtlUIntAdd(0LL, HIDWORD(v1690), &v1690) < 0 )
    goto LABEL_316;
  v1691 = 0;
  if ( (int)RtlUIntAdd(v312, 160LL, &v1691) < 0 )
    goto LABEL_316;
  v313 = RtlUIntAdd((unsigned int)v1690, v1691, &v1690);
  if ( (v316 | v313) < 0 )
    goto LABEL_316;
  v1692 = 0;
  if ( (int)RtlUIntAdd(v315, v314, &v1692) < 0 )
    goto LABEL_316;
  v317 = RtlUIntAdd((unsigned int)v1690, v1692, &v1690);
  if ( (v319 | v317) < 0 )
    goto LABEL_316;
  v1693 = 0;
  if ( (int)RtlUIntAdd(v318, 8LL, &v1693) < 0 )
    goto LABEL_316;
  v320 = RtlUIntAdd((unsigned int)v1690, v1693, &v1690);
  if ( (v321 | v320) < 0 )
    goto LABEL_316;
  HIDWORD(v1789[0]) = v1690;
  v322 = v1690;
  v323 = GetProcessHeap();
  v324 = HeapAlloc(v323, 8u, v322);
  if ( !v324 )
    goto LABEL_316;
  v1789[1] = (size_t)v324;
  LODWORD(v1792[0]) = 0;
  LODWORD(v1789[0]) = 0;
  v1791 = 0LL;
  v1760[1] = v324;
  v1654 = v311;
  v1499 = v306;
  if ( (int)RtlULongLongAdd(v324, 4LL, v1792, v324) < 0 || (unsigned __int64)(v1053 + 2) > v1789[1] + HIDWORD(v1789[0]) )
    goto LABEL_316;
  v1055 = (unsigned int *)v1792[0];
  *v1053 = v1054;
  *v1055 = v1054;
  v1056 = (unsigned int)++LODWORD(v1789[0]);
  LODWORD(v1793) = 0;
  v1792[1] = 0LL;
  if ( v1789[1] )
  {
    v1059 = (unsigned int *)v1789[1];
    v1060 = 0;
    v1761 = v1789[1];
    while ( v1060 < (unsigned int)v1056 )
    {
      v1061 = *v1059;
      v1695 = 0;
      if ( (int)RtlUIntAdd(4LL, v1061, &v1695) < 0 || (int)RtlULongLongAdd(v1063, v1695, &v1761, v1062) < 0 )
        goto LABEL_316;
      v1059 = (unsigned int *)v1761;
      v1060 = v1064 + 1;
    }
    if ( (int)RtlULongLongAdd(v1059, 4LL, &v1793, v1056) >= 0
      && (unsigned __int64)(v1065 + 41) <= v1789[1] + HIDWORD(v1789[0]) )
    {
      *v1065 = 160;
      memcpy_0(v1793, v306, 0xA0uLL);
      v1058 = 4;
      v1057 = 1;
      goto LABEL_1307;
    }
    goto LABEL_316;
  }
  v1694 = 0;
  if ( (int)RtlUIntAdd(v1054, 160LL, &v1694) < 0 || (int)RtlUIntAdd(HIDWORD(v1789[0]), v1694, (char *)v1789 + 4) < 0 )
    goto LABEL_316;
LABEL_1307:
  v1066 = 8LL;
  v1067 = v1057 + LODWORD(v1789[0]);
  LODWORD(v1778[0]) = 0;
  LODWORD(v1789[0]) += v1057;
  v1777 = 0LL;
  if ( v1789[1] )
  {
    v1070 = (unsigned int *)v1789[1];
    v1071 = 0;
    v1762 = v1789[1];
    while ( v1071 < v1067 )
    {
      v1072 = *v1070;
      v1697 = 0;
      if ( (int)RtlUIntAdd(4LL, v1072, &v1697) < 0 || (int)RtlULongLongAdd(v1074, v1697, &v1762, v1073) < 0 )
        goto LABEL_316;
      v1070 = (unsigned int *)v1762;
      v1071 = v1075 + 1;
    }
    if ( (int)RtlULongLongAdd(v1070, 4LL, v1778, v1066) >= 0
      && (unsigned __int64)v1077 + v1076 + 4 <= v1789[1] + HIDWORD(v1789[0]) )
    {
      *v1077 = v1076;
      memcpy_0(v1778[0], v311, v1076);
      v1069 = 4LL;
      v1068 = 1;
      goto LABEL_1319;
    }
    goto LABEL_316;
  }
  v1696 = 0;
  if ( (int)RtlUIntAdd(v1058, 8LL, &v1696) < 0 || (int)RtlUIntAdd(HIDWORD(v1789[0]), v1696, (char *)v1789 + 4) < 0 )
    goto LABEL_316;
LABEL_1319:
  v1078 = v1068 + LODWORD(v1789[0]);
  LODWORD(v1779) = 0;
  LODWORD(v1789[0]) += v1068;
  v1778[1] = 0LL;
  if ( v1789[1] )
  {
    v1081 = (unsigned int *)v1789[1];
    v1082 = 0;
    v1763 = v1789[1];
    while ( v1082 < v1078 )
    {
      v1083 = *v1081;
      v1699 = 0;
      if ( (int)RtlUIntAdd((unsigned int)v1069, v1083, &v1699) < 0
        || (int)RtlULongLongAdd(v1084, v1699, &v1763, v1084) < 0 )
      {
        goto LABEL_316;
      }
      v1081 = (unsigned int *)v1763;
      v1082 = v1085 + 1;
    }
    if ( (int)RtlULongLongAdd(v1081, v1069, &v1779, v1081) >= 0
      && (unsigned __int64)(v1086 + 3) <= v1789[1] + HIDWORD(v1789[0]) )
    {
      v1087 = v1779;
      *v1086 = 8;
      *v1087 = lpMemu;
      ++LODWORD(v1789[0]);
      goto LABEL_1331;
    }
    goto LABEL_316;
  }
  v1698 = 0;
  if ( (int)RtlUIntAdd((unsigned int)v1069, 8LL, &v1698) < 0
    || (int)RtlUIntAdd(HIDWORD(v1789[0]), v1698, (char *)v1789 + 4) < 0 )
  {
    goto LABEL_316;
  }
  LODWORD(v1789[0]) += v1079;
LABEL_1331:
  v1711 = 0;
  if ( (int)RtlUIntAdd(v1080, v1080, &v1711) < 0 )
    goto LABEL_316;
  v1089 = v1711;
  v1701 = v1711;
  v1702 = 0;
  if ( (int)RtlUIntAdd(v1088, 8LL, &v1702) < 0 || (int)RtlUIntAdd(v1089, v1702, &v1701) < 0 )
    goto LABEL_316;
  v1399 = v1701;
  lpMemv = 0LL;
  v1448 = 0;
  Srce = 0LL;
  Sizeh = 0LL;
  v1615 = 0;
  v1493 = 0LL;
  v1467 = 0LL;
  lpModuleNamei = 0LL;
  v1544 = __rdtsc();
  v1703 = 8;
  v1090 = RtlUIntAdd(8LL, HIDWORD(v1789[0]), &v1703);
  if ( v1090 >= 0 )
  {
    v1092 = (v1703 + 7) & 0xFFFFFFF8;
    if ( v1092 < v1703 )
      goto LABEL_316;
    v1703 = (v1703 + 7) & 0xFFFFFFF8;
    v1093 = v1092;
    v1094 = GetProcessHeap();
    v1095 = (unsigned __int8 *)HeapAlloc(v1094, 8u, v1093);
    v1500 = v1095;
    if ( v1095 )
    {
      v1764[0] = v1095;
      *(_DWORD *)v1095 = v1789[0];
      v1096 = RtlULongLongAdd(v1095, 4LL, v1764, v1095);
      v1655 = v1097;
      v1090 = v1096;
      if ( v1096 >= 0 )
      {
        v1099 = v1764[0];
        *(_DWORD *)v1764[0] = HIDWORD(v1789[0]);
        v1100 = RtlULongLongAdd(v1099, v1098, v1764, v1097);
        v1655 = v1101;
        v1090 = v1100;
        if ( v1100 >= 0 )
        {
          *(_QWORD *)((char *)v1101 + v1703 - 8) = v1544;
          memcpy_0(v1764[0], (const void *)v1789[1], HIDWORD(v1789[0]));
          v1091 = v1703;
          lpMemv = v1500;
          v1448 = v1703;
          goto LABEL_1343;
        }
      }
      v1102 = GetProcessHeap();
      HeapFree(v1102, 0, v1655);
    }
    else
    {
      v1090 = -1073741801;
    }
    v1091 = 0;
LABEL_1343:
    v1654 = v311;
    v1499 = v306;
  }
  v1103 = v1090 | 0x10000000;
  if ( v1103 < 0 )
    goto LABEL_1414;
  if ( !lpMemv )
    goto LABEL_316;
  if ( !v1091 || (v1531 = v1091 + 8, v1565 = MemoryAlloc(v1091 + 8LL), (v1104 = v1565) == 0LL) )
  {
    v1199 = lpMemv;
    v1103 = -805306367;
    goto LABEL_1416;
  }
  v1105 = 0;
  v1376 = 0;
  v1106 = 0LL;
  if ( v1448 )
  {
    do
      v1105 ^= lpMemv[v1106++];
    while ( v1106 < v1448 );
    v1376 = v1105;
  }
  v1107 = -1;
  v1841 = 0xC81ECB17B1B54A58uLL;
  v1108 = lpMemv;
  v1606 = 0;
  v1109 = 0;
  v1110 = v1448 & 7;
  if ( (v1448 & 7) != 0 )
  {
    v1607 = 0;
    v1111 = 0;
    v1112 = 56;
    do
    {
      v1113 = *v1108++;
      if ( (unsigned int)v2 >= 4 )
      {
        v1114 = (v1113 << v1112) | v1607;
        v1607 = v1114;
      }
      else
      {
        v1114 = v1607;
        v1111 |= v1113 << (v1112 - 32);
      }
      LODWORD(v2) = v2 + 1;
      v1112 -= 8;
    }
    while ( (int)v2 < v1110 );
    v1109 = v1111 ^ 0xB17A307A;
    v1115 = v1114 ^ 0x42F6B18D;
    v1116 = v1111 ^ 0xB17A307A;
    v1117 = 0;
    v1118 = v1114 ^ 0x42F6B18D;
    v1119 = v1565;
    do
    {
      v1606 = v1114;
      Srcf = v1119 + 1;
      v1590 = v1111;
      if ( v1117 >= 4 )
      {
        v1118 = (v1118 << 8) | HIBYTE(v1118);
        v1120 = v1118;
      }
      else
      {
        v1116 = (v1116 << 8) | HIBYTE(v1116);
        v1120 = v1116;
      }
      ++v1117;
      *v1119++ = v1120;
      v1114 = v1606;
    }
    while ( v1117 < v1110 );
    v1105 = v1376;
    v1104 = Srcf;
    v1499 = v306;
    v87 = v1657;
    LODWORD(v2) = 0;
    v1654 = v311;
    if ( (unsigned int)v1110 > 4 )
    {
      v1107 = v1115 >> (8 * (8 - v1110)) << (8 * (8 - v1110));
      goto LABEL_1364;
    }
    v1107 = 0;
    if ( (unsigned int)v1110 >= 4 )
    {
LABEL_1364:
      v1121 = v1590;
    }
    else
    {
      v1121 = v1590;
      v1109 = v1109 >> (8 * (4 - v1110)) << (8 * (4 - v1110));
    }
  }
  else
  {
    v1121 = 0;
  }
  if ( (unsigned __int64)v1448 >> 3 )
  {
    v1122 = v1606;
    v1123 = v1104 + 7;
    v1124 = WORD2(v1841);
    v1125 = v1108 + 2;
    v1598 = WORD1(v1841);
    v1515 = HIWORD(v1841);
    v1126 = (unsigned __int64)v1448 >> 3;
    do
    {
      v1127 = *(v1125 - 1) | (*(v1125 - 2) << 8);
      v1128 = v1125[2] << 8;
      v1129 = *v1125;
      v1125 += 8;
      v1130 = *(v1125 - 7) | ((v1129 | (v1127 << 8)) << 8);
      v1131 = *(v1125 - 3) | ((*(v1125 - 4) | ((*(v1125 - 5) | v1128) << 8)) << 8);
      v1132 = v1131 ^ v1107;
      v1133 = v1109 ^ v1130 ^ (v1132 - 19032);
      v1134 = __ROR4__(v1133, 15);
      v1135 = HIDWORD(v1841) ^ v1133;
      v1136 = (__ROR4__(v1135, 7) + WORD1(v1841) * v1134) ^ v1132;
      v1137 = (v1124 * __ROR4__(v1136 - 1313519016, 9) - __ROR4__(v1136, 10)) ^ v1135;
      v1138 = (__ROR4__(v1137, 27) + HIWORD(v1841) * __ROR4__(v1124 ^ v1137, 28)) ^ v1136;
      v1139 = (HIDWORD(v1841) - (v1138 ^ 0xB1B54A58)) ^ v1137;
      v1140 = (WORD1(v1841) * (v1139 - 19032) - (v1139 >> 6)) ^ v1138;
      v1141 = (19032 * (v1124 ^ __ROR4__(v1140, 15))) ^ v1139;
      v1142 = (v1124 * (HIWORD(v1841) + __ROR4__(~v1141, 3))) ^ v1140;
      v1143 = (v1142 - 19032 - HIDWORD(v1841)) ^ v1141;
      v1144 = (v1598 * (v1515 ^ v1143)) ^ __ROR4__(v1143, 10) ^ v1142;
      v1145 = __ROR4__(v1144, 3) ^ (v1124 * __ROR4__(v1144 ^ 0x4A58, 26)) ^ v1143;
      v1146 = (19032 * (__ROR4__(v1145, 15) - HIWORD(v1841))) ^ v1144;
      v1147 = (v1146 >> 15) ^ (19032 * ((8 * (v1146 - v1124)) | ((v1146 - v1124) >> 29))) ^ (v1146 >> 1) ^ (19032 * (HIWORD(v1841) ^ v1146)) ^ v1145;
      v1148 = (WORD1(v1841) * (v1147 - v1124) - (v1147 >> 13)) ^ v1146;
      v1149 = __ROR4__(v1148, 11) ^ (v1124 * __ROR4__(-1313519016 - v1148, 9)) ^ v1147;
      v1150 = (v1149 + 1313519016 - HIWORD(v1841)) ^ v1148;
      v1151 = (19032 * (v1598 ^ v1150) - __ROR4__(v1150, 7)) ^ v1149;
      v1152 = (WORD1(v1841) * __ROR4__(HIWORD(v1841) ^ v1151, 28) - __ROR4__(v1151, 16)) ^ v1150;
      v1153 = (__ROR4__(v1152, 4) + v1124 * __ROR4__(-1313519016 - v1152, 10)) ^ v1151;
      v1154 = __ROR4__(v1153, 9) ^ (HIWORD(v1841) * __ROR4__(v1153 + 1313519016, 4)) ^ v1152;
      v1155 = (19032 * __ROR4__(HIDWORD(v1841) ^ v1154, 24) - __ROR4__(v1154, 30)) ^ v1153;
      v1156 = (WORD1(v1841) * __ROR4__(HIDWORD(v1841) - v1155, 11) - __ROR4__(v1155, 12)) ^ v1154;
      v1157 = (v1156 >> 8) ^ (v1124 * (WORD1(v1841) ^ v1156)) ^ v1155;
      v1109 = v1121 ^ v1157;
      v1158 = HIDWORD(v1841) ^ v1157 ^ 0xB1B54A58;
      *(v1123 - 4) = v1109;
      v1107 = v1122 ^ v1158 ^ v1156;
      *v1123 = v1107;
      v1123 += 8;
      *(v1123 - 13) = BYTE1(v1109);
      v1122 = v1131;
      *(v1123 - 9) = BYTE1(v1107);
      v1121 = v1130;
      *(v1123 - 14) = (unsigned __int16)(v1109 >> 8) >> 8;
      *(v1123 - 10) = (unsigned __int16)(v1107 >> 8) >> 8;
      *(v1123 - 15) = __ROR4__((((v1109 >> 8) | (v1109 << 24)) >> 8) | (((v1109 >> 8) | (v1109 << 24)) << 24), 8);
      *(v1123 - 11) = __ROR4__((((v1107 >> 8) | (v1107 << 24)) >> 8) | (((v1107 >> 8) | (v1107 << 24)) << 24), 8);
      --v1126;
    }
    while ( v1126 );
    v1105 = v1376;
    v87 = v1657;
    LODWORD(v2) = 0;
    v311 = (WCHAR *)v1654;
    v306 = v1499;
  }
  *(_QWORD *)&v1565[v1448] = v1105;
  v1159 = GetProcessHeap();
  v1160 = HeapAlloc(v1159, 8u, 0x30uLL);
  v1161 = 0LL;
  if ( v1160 )
    v1161 = v1160;
  v1162 = v1160 == 0LL ? 0xC0000017 : 0;
  if ( v1160 )
  {
    *(_DWORD *)v1161 = v1531;
    v1163 = GetProcessHeap();
    v1164 = HeapAlloc(v1163, 8u, v1531);
    if ( v1164 )
    {
      v1161[1] = v1164;
      memcpy_0(v1164, v1565, v1531);
      *((_DWORD *)v1161 + 4) = 160;
      v1165 = GetProcessHeap();
      v1166 = HeapAlloc(v1165, 8u, 0xA0uLL);
      if ( v1166 )
      {
        v1161[3] = v1166;
        *v1166 = xmmword_1800E7900[0];
        v1166[1] = xmmword_1800E7900[1];
        v1166[2] = xmmword_1800E7900[2];
        v1166[3] = xmmword_1800E7900[3];
        v1166[4] = xmmword_1800E7900[4];
        v1166[5] = xmmword_1800E7900[5];
        v1166[6] = xmmword_1800E7900[6];
        v1166[7] = xmmword_1800E7900[7];
        v1166[8] = xmmword_1800E7900[8];
        v1166[9] = xmmword_1800E7900[9];
        *((_DWORD *)v1161 + 8) = 8;
        v1167 = GetProcessHeap();
        v1168 = HeapAlloc(v1167, 8u, 8uLL);
        if ( !v1168 )
        {
          v1162 = -1073741801;
          goto LABEL_1376;
        }
        v1161[5] = v1168;
        v1162 = 0;
        *v1168 = qword_1800E79A0;
        v1173 = (unsigned int *)v1161;
LABEL_1386:
        v1174 = v1173;
        goto LABEL_1393;
      }
    }
    v1162 = -1073741801;
  }
LABEL_1376:
  if ( v1161 )
  {
    v1501 = (void *)v1161[1];
    if ( v1501 )
    {
      v1169 = GetProcessHeap();
      HeapFree(v1169, 0, v1501);
      v1161[1] = 0LL;
    }
    v1502 = (void *)v1161[3];
    if ( v1502 )
    {
      v1170 = GetProcessHeap();
      HeapFree(v1170, 0, v1502);
      v1161[3] = 0LL;
    }
    v1503 = (void *)v1161[5];
    if ( v1503 )
    {
      v1171 = GetProcessHeap();
      HeapFree(v1171, 0, v1503);
      v1161[5] = 0LL;
    }
    v1172 = GetProcessHeap();
    HeapFree(v1172, 0, v1161);
  }
  if ( v1162 >= 0 )
  {
    v1173 = 0LL;
    goto LABEL_1386;
  }
  v1174 = 0LL;
LABEL_1393:
  Srce = v1174;
  v1175 = GetProcessHeap();
  HeapFree(v1175, 0, v1565);
  v1103 = v1162 | 0x10000000;
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1176 = *v1174;
  v1704 = 0;
  v1705 = 4;
  v1177 = RtlUIntAdd(4LL, v1176, &v1705);
  if ( v1177 < 0 )
    goto LABEL_1410;
  v1177 = RtlUIntAdd(v1705, v1178, &v1705);
  if ( v1177 < 0 )
    goto LABEL_1410;
  v1177 = RtlUIntAdd(v1705, v1174[4], &v1705);
  if ( v1177 < 0 )
    goto LABEL_1410;
  v1177 = RtlUIntAdd(v1705, v1179, &v1705);
  if ( v1177 < 0 )
    goto LABEL_1410;
  v1177 = RtlUIntAdd(v1705, v1174[8], &v1705);
  if ( v1177 < 0 )
    goto LABEL_1410;
  v1704 = v1705;
  v1180 = v1705;
  v1181 = GetProcessHeap();
  v1182 = HeapAlloc(v1181, 8u, v1180);
  v1591 = (SIZE_T)v1182;
  if ( !v1182 )
  {
    v1103 = -805306345;
    goto LABEL_1414;
  }
  v1765 = v1182;
  *v1182 = *v1174;
  v1184 = RtlULongLongAdd(v1182, 4LL, &v1765, v1183);
  v1599 = v1185;
  v1177 = v1184;
  if ( v1184 < 0 )
    goto LABEL_1638;
  memcpy_0(v1765, *((const void **)v1174 + 1), *v1174);
  v1177 = RtlULongLongAdd(v1765, *v1174, &v1765, v1186);
  v1185 = (void *)v1591;
  v1599 = (void *)v1591;
  if ( v1177 < 0 )
    goto LABEL_1638;
  v1187 = v1765;
  *(_DWORD *)v1765 = v1174[4];
  v1188 = RtlULongLongAdd(v1187, 4LL, &v1765, v1591);
  v1185 = v1189;
  v1177 = v1188;
  v1599 = v1189;
  if ( v1188 < 0 )
    goto LABEL_1638;
  memcpy_0(v1765, *((const void **)v1174 + 3), v1174[4]);
  v1177 = RtlULongLongAdd(v1765, v1174[4], &v1765, v1190);
  v1185 = (void *)v1591;
  v1599 = (void *)v1591;
  if ( v1177 < 0 )
    goto LABEL_1638;
  v1191 = v1765;
  *(_DWORD *)v1765 = v1174[8];
  v1192 = RtlULongLongAdd(v1191, 4LL, &v1765, v1591);
  v1185 = v1193;
  v1177 = v1192;
  v1599 = v1193;
  if ( v1192 < 0
    || (memcpy_0(v1765, *((const void **)v1174 + 5), v1174[8]),
        v1177 = RtlULongLongAdd(v1765, v1174[8], &v1765, v1194),
        v1599 = (void *)v1591,
        v1185 = (void *)v1591,
        v1177 < 0) )
  {
LABEL_1638:
    if ( v1185 )
    {
      v1195 = GetProcessHeap();
      HeapFree(v1195, 0, v1599);
    }
  }
  else
  {
    Sizeh = (void *)v1591;
    v1615 = v1704;
  }
LABEL_1410:
  v1103 = v1177 | 0x10000000;
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1706 = 8;
  v1196 = RtlUIntAdd(8LL, v1399, &v1706);
  v1103 = v1196 | 0x10000000;
  if ( v1196 < 0 )
    goto LABEL_1414;
  v1707 = 0;
  v1198 = (v1706 + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v1198 < v1706 )
  {
    v1103 = -1073741675;
    goto LABEL_1414;
  }
  v1707 = (v1706 + 7) & 0xFFFFFFF8;
  Sizeh = v1197;
  Srce = v1174;
  v1103 = RtlUIntAdd(v1198, 8LL, &v1707);
  if ( v1103 < 0 )
  {
LABEL_1449:
    v1199 = v1219;
    goto LABEL_1415;
  }
  v1220 = v1219;
  Srce = v1174;
  Sizeh = v1218;
  if ( !v1789[1] || (Srce = v1174, Sizeh = v1218, LODWORD(v1789[0]) <= 1) )
  {
    v1103 = -1073741811;
    goto LABEL_1449;
  }
  v1221 = (unsigned int *)v1789[1];
  v1222 = 0;
  v1766 = v1789[1];
  v1656 = v311;
  v1504 = v306;
  lpMemv = v1220;
  while ( 1 )
  {
    v1400 = *v1221;
    if ( v1222 )
      break;
    v1103 = RtlULongLongAdd(v1221, 4LL, &v1766, v1218);
    if ( v1103 < 0 )
      goto LABEL_1414;
    v1103 = RtlULongLongAdd(v1766, v1400, &v1766, v1223);
    if ( v1103 < 0 )
      goto LABEL_1414;
    v1221 = (unsigned int *)v1766;
    v1222 = v1224 + 1;
  }
  v1103 = RtlULongLongAdd(v1221, 4LL, &v1766, v1218);
  if ( v1103 < 0 )
    goto LABEL_1414;
  Sizeh = v1225;
  if ( !v1789[1] || (Sizeh = v1225, LODWORD(v1789[0]) <= 2) )
  {
    v1103 = -1073741811;
    goto LABEL_1414;
  }
  v1226 = (unsigned int *)v1789[1];
  v1227 = 0;
  v1767 = v1789[1];
  while ( v1227 < 2 )
  {
    v1449 = *v1226;
    v1103 = RtlULongLongAdd(v1226, 4LL, &v1767, v1225);
    if ( v1103 < 0 )
      goto LABEL_1414;
    v1103 = RtlULongLongAdd(v1767, v1449, &v1767, v1228);
    if ( v1103 < 0 )
      goto LABEL_1414;
    v1226 = (unsigned int *)v1767;
    v1227 = v1229 + 1;
  }
  v1103 = RtlULongLongAdd(v1226, 4LL, &v1767, v1225);
  if ( v1103 < 0 )
    goto LABEL_1414;
  Sizeh = v1230;
  v1708 = 4;
  v1103 = RtlUIntAdd(4LL, v1707, &v1708);
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1103 = RtlUIntAdd(v1708, v1231, &v1708);
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1103 = RtlUIntAdd(v1708, v1400, &v1708);
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1103 = RtlUIntAdd(v1708, 4LL, &v1708);
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1103 = RtlUIntAdd(v1708, v1232, &v1708);
  if ( v1103 < 0 )
    goto LABEL_1414;
  Sizeh = v1233;
  if ( v1708 > 0x400000 )
  {
    v1103 = -2147418113;
    goto LABEL_1414;
  }
  v1553 = v1708;
  v1234 = v1708;
  v1235 = GetProcessHeap();
  v1236 = (int *)HeapAlloc(v1235, 8u, v1234);
  v1237 = 0LL;
  if ( v1236 )
    v1237 = v1236;
  v1493 = v1237;
  v1103 = v1236 != 0LL ? 0x10000000 : -805306345;
  if ( !v1236 )
    goto LABEL_1414;
  hModule = 0LL;
  v1796 = 0LL;
  v1797 = 0LL;
  if ( !Sizeh || !v1237 )
  {
    v1103 = -2147024809;
    goto LABEL_1414;
  }
  LODWORD(v1797) = v1615;
  *(_QWORD *)((char *)&v1797 + 4) = v1553;
  *(_QWORD *)&v1796 = Sizeh;
  *((_QWORD *)&v1796 + 1) = v1237;
  if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
    && (v1238 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
  {
    v1239 = ((__int64 (__fastcall *)(__int64, __int128 *))v1238)(134LL, &v1796);
    v1103 = v1239 | 0x10000000;
    if ( v1239 >= 0 )
    {
      v1240 = DWORD1(v1797);
      goto LABEL_1488;
    }
  }
  else
  {
    v1241 = GetLastError();
    v1103 = v1241;
    if ( v1241 > 0 )
      v1103 = (unsigned __int16)v1241 | 0x80070000;
    if ( v1103 >= 0 )
      v1103 = -2147467259;
  }
  if ( v1103 == -805306333 )
  {
    v1103 = -2147024774;
    goto LABEL_1414;
  }
  if ( v1103 < 0 )
    goto LABEL_1414;
  v1240 = v1553;
LABEL_1488:
  v1545 = 0LL;
  v1709 = 0;
  v1769 = v1493;
  if ( (unsigned int)v1240 < 4 )
    goto LABEL_1513;
  v1401 = *v1493;
  v1242 = RtlULongLongAdd(v1493, 4LL, &v1769, v1240);
  if ( v1242 < 0 )
    goto LABEL_1544;
  v1242 = RtlUIntAdd(0LL, 4LL, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( (unsigned int)v1243 - v1709 < (unsigned int)v1244 )
    goto LABEL_1513;
  v1532 = v1769;
  v1554 = v1244;
  v1242 = RtlULongLongAdd(v1769, (unsigned int)v1244, &v1769, v1243);
  if ( v1242 < 0 )
    goto LABEL_1544;
  v1242 = RtlUIntAdd(v1709, v1245, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( (unsigned int)v1246 - v1709 < 4 )
    goto LABEL_1513;
  v1450 = *(_DWORD *)v1769;
  v1242 = RtlULongLongAdd(v1769, 4LL, &v1769, v1246);
  if ( v1242 < 0 )
    goto LABEL_1544;
  v1242 = RtlUIntAdd(v1709, 4LL, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( (unsigned int)v1247 - v1709 < (unsigned int)v1248 )
    goto LABEL_1513;
  v1608 = v1769;
  v1592 = v1248;
  v1242 = RtlULongLongAdd(v1769, (unsigned int)v1248, &v1769, v1247);
  if ( v1242 < 0 )
    goto LABEL_1544;
  v1242 = RtlUIntAdd(v1709, v1249, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( (unsigned int)v1250 - v1709 < 4 )
    goto LABEL_1513;
  v1616 = *(_DWORD *)v1769;
  v1242 = RtlULongLongAdd(v1769, 4LL, &v1769, v1250);
  if ( v1242 < 0 )
    goto LABEL_1544;
  v1242 = RtlUIntAdd(v1709, 4LL, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( v1251 - v1709 < v1252 )
    goto LABEL_1513;
  v1242 = RtlUIntAdd(v1709, v1252, &v1709);
  if ( v1242 < 0 )
    goto LABEL_1544;
  if ( v1253 != v1709 || (unsigned int)(v1401 + v1254 + v1255) + 12LL != v1253 )
  {
LABEL_1513:
    v1103 = -805306306;
    goto LABEL_1414;
  }
  v1256 = GetProcessHeap();
  v1257 = HeapAlloc(v1256, 8u, 0x30uLL);
  v1258 = 0LL;
  if ( v1257 )
    v1258 = v1257;
  v1600 = v1258;
  v1242 = v1257 == 0LL ? 0xC0000017 : 0;
  if ( !v1257 )
    goto LABEL_1523;
  if ( v1532 )
  {
    *(_DWORD *)v1258 = v1401;
    v1259 = GetProcessHeap();
    v1260 = HeapAlloc(v1259, 8u, v1554);
    if ( v1260 )
    {
      v1600[1] = v1260;
      v1242 = 0;
      memcpy_0(v1260, v1532, v1554);
      v1258 = v1600;
      Srce = v1174;
      v1656 = v311;
      v1504 = v306;
      goto LABEL_1515;
    }
LABEL_1522:
    v1242 = -1073741801;
LABEL_1523:
    v1265 = v1600;
    if ( v1600 )
    {
      v1468 = (void *)v1600[1];
      if ( v1468 )
      {
        v1266 = GetProcessHeap();
        HeapFree(v1266, 0, v1468);
        v1265 = v1600;
        v1600[1] = 0LL;
      }
      v1469 = (void *)v1265[3];
      if ( v1469 )
      {
        v1267 = GetProcessHeap();
        HeapFree(v1267, 0, v1469);
        v1265 = v1600;
        v1600[3] = 0LL;
      }
      v1470 = (void *)v1265[5];
      if ( v1470 )
      {
        v1268 = GetProcessHeap();
        HeapFree(v1268, 0, v1470);
        v1600[5] = 0LL;
      }
      v1269 = GetProcessHeap();
      HeapFree(v1269, 0, v1600);
    }
    v1270 = 0LL;
  }
  else
  {
    *(_DWORD *)v1258 = 0;
    v1258[1] = 0LL;
LABEL_1515:
    if ( v1608 )
    {
      *((_DWORD *)v1258 + 4) = v1450;
      v1261 = GetProcessHeap();
      v1262 = HeapAlloc(v1261, 8u, v1592);
      if ( !v1262 )
        goto LABEL_1522;
      v1600[3] = v1262;
      v1242 = 0;
      memcpy_0(v1262, v1608, v1592);
      v1258 = v1600;
      Srce = v1174;
      v1656 = v311;
      v1504 = v306;
    }
    else
    {
      *((_DWORD *)v1258 + 4) = 0;
      v1258[3] = 0LL;
    }
    if ( v1769 )
    {
      *((_DWORD *)v1258 + 8) = v1616;
      v1263 = GetProcessHeap();
      v1264 = HeapAlloc(v1263, 8u, v1616);
      if ( !v1264 )
        goto LABEL_1522;
      v1600[5] = v1264;
      v1242 = 0;
      memcpy_0(v1264, v1769, v1616);
      v1258 = v1600;
      Srce = v1174;
      v1656 = v311;
      v1504 = v306;
    }
    else
    {
      *((_DWORD *)v1258 + 8) = 0;
      v1258[5] = 0LL;
    }
    v1270 = (unsigned int *)v1258;
    v1545 = (unsigned int *)v1258;
  }
  if ( v1242 >= 0 )
  {
    v1271 = v1270;
    v1467 = v1270;
    goto LABEL_1545;
  }
  v1467 = 0LL;
  v1271 = 0LL;
  if ( v1270 )
  {
    v1471 = (void *)*((_QWORD *)v1270 + 1);
    if ( v1471 )
    {
      v1272 = GetProcessHeap();
      HeapFree(v1272, 0, v1471);
      v1270 = v1545;
      *((_QWORD *)v1545 + 1) = 0LL;
    }
    v1472 = (void *)*((_QWORD *)v1270 + 3);
    if ( v1472 )
    {
      v1273 = GetProcessHeap();
      HeapFree(v1273, 0, v1472);
      v1270 = v1545;
      *((_QWORD *)v1545 + 3) = 0LL;
    }
    v1473 = (void *)*((_QWORD *)v1270 + 5);
    if ( v1473 )
    {
      v1274 = GetProcessHeap();
      HeapFree(v1274, 0, v1473);
      *((_QWORD *)v1545 + 5) = 0LL;
    }
    v1275 = GetProcessHeap();
    HeapFree(v1275, 0, v1545);
    v1467 = 0LL;
LABEL_1544:
    v1271 = 0LL;
  }
LABEL_1545:
  v1103 = v1242 | 0x10000000;
  if ( v1103 < 0 )
  {
LABEL_1414:
    v1199 = lpMemv;
    goto LABEL_1415;
  }
  if ( !v1271 || (v1546 = *((_QWORD *)v1271 + 1)) == 0 || !*v1271 )
  {
    v1103 = -805306355;
    goto LABEL_1414;
  }
  v1276 = *v1271 - 8LL;
  v1533 = v1276;
  lpModuleNamej = (LPCWSTR)MemoryAlloc(v1276);
  v1277 = (WCHAR *)lpModuleNamej;
  if ( !lpModuleNamej )
    goto LABEL_1579;
  v1278 = (unsigned __int8 *)v1546;
  v1279 = v1467;
  v1280 = 0;
  v1281 = lpModuleNamej;
  v1843 = 0x7F1137FAB69605ELL;
  v1555 = v1546;
  v1617 = (WCHAR *)lpModuleNamej;
  v1282 = v1276 & 7;
  if ( (v1276 & 7) == 0 )
  {
    v1403 = 0;
    v1288 = 0;
    v1452 = 0;
    goto LABEL_1571;
  }
  v1661 = 0;
  v1283 = 0;
  if ( !v1282 )
  {
    v1288 = 154101157;
    v1403 = 0;
    v1661 = 0;
    v1452 = 0;
LABEL_1568:
    v1288 = v1288 >> (8 * (4 - v1282)) << (8 * (4 - v1282));
LABEL_1569:
    v1281 = v1617;
    goto LABEL_1571;
  }
  v1284 = lpMemv;
  do
  {
    v1285 = *v1278++;
    v1402 = v1285;
    if ( (unsigned int)v2 >= 4 )
    {
      v1286 = (v1285 << v1662) | v1661;
      v1661 |= v1402 << v1662;
    }
    else
    {
      v1283 |= v1285 << (v1662 - 32);
      v1286 = v1661;
    }
    v1662 -= 8;
    LODWORD(v2) = v2 + 1;
  }
  while ( (int)v2 < v1282 );
  v1287 = v1278;
  v1288 = v1283 ^ 0x92F65A5;
  v1289 = v1283 ^ 0x92F65A5;
  v1290 = v1283;
  v1291 = v1286 ^ 0x699A899C;
  v1281 = lpModuleNamej;
  v1292 = 0;
  v1293 = v1291;
  do
  {
    lpMemv = v1284;
    v1451 = (WCHAR *)((char *)v1281 + 1);
    if ( v1292 >= 4 )
    {
      v1293 = (v1293 << 8) | HIBYTE(v1293);
      v1294 = v1293;
    }
    else
    {
      v1289 = (v1289 << 8) | HIBYTE(v1289);
      v1294 = v1289;
    }
    ++v1292;
    *(_BYTE *)v1617 = v1294;
    v1281 = (LPCWSTR)((char *)v1281 + 1);
    v1284 = lpMemv;
    v1617 = v1451;
  }
  while ( v1292 < v1282 );
  v87 = v1657;
  v1277 = (WCHAR *)lpModuleNamej;
  v1403 = v1290;
  v1280 = 0;
  v1555 = (SIZE_T)v1287;
  LODWORD(v2) = 0;
  Srce = v1174;
  v1504 = v306;
  v1656 = v311;
  v1617 = v1451;
  if ( (unsigned int)v1282 > 4 )
  {
    v1452 = v1291 >> (8 * (8 - v1282)) << (8 * (8 - v1282));
    goto LABEL_1569;
  }
  v1452 = 0;
  if ( (unsigned int)v1282 < 4 )
    goto LABEL_1568;
LABEL_1571:
  v1295 = v1533;
  if ( v1533 >> 3 )
  {
    v1296 = (char *)v1281 + 7;
    v1297 = HIDWORD(v1843);
    v1298 = (unsigned __int8 *)(v1555 + 2);
    v1299 = WORD1(v1843);
    v1300 = v1533 >> 3;
    v1301 = v1403;
    v1302 = v1452;
    v1303 = WORD2(v1843);
    do
    {
      v1304 = *(v1298 - 1) | (*(v1298 - 2) << 8);
      v1305 = v1298[2] << 8;
      v1306 = *v1298;
      v1298 += 8;
      v1307 = *(v1298 - 7) | ((v1306 | (v1304 << 8)) << 8);
      v1308 = v1307 ^ v1288;
      v1309 = *(v1298 - 3) | ((*(v1298 - 4) | ((*(v1298 - 5) | v1305) << 8)) << 8);
      v1310 = v1308 ^ v1297 ^ 0xAB69605E ^ v1309 ^ v1302;
      v1311 = (__ROR4__(v1310, 22) + v1303 * __ROR4__(v1310 + 1419157410, 27)) ^ v1308;
      v1312 = (v1299 * __ROR4__(v1311 + v1297, 9) - __ROR4__(v1311, 30)) ^ v1310;
      v1313 = (24670 * (v1312 - v1303) - (v1312 >> 13)) ^ v1311;
      v1314 = (HIWORD(v1843) * __ROR4__(v1313 ^ v1299, 26) - __ROR4__(v1313, 30)) ^ v1312;
      v1315 = (v1297 - (v1314 ^ 0xAB69605E)) ^ v1313;
      v1316 = (v1299 * (v1315 ^ v1303)) ^ __ROR4__(v1315, 6) ^ v1314;
      v1317 = (__ROR4__(v1316, 30) + 24670 * __ROR4__(v1316 + v1297, 15)) ^ v1315;
      v1318 = (HIWORD(v1843) * __ROR4__(v1317 + 1419157410, 14) - __ROR4__(v1317, 24)) ^ v1316;
      v1319 = __ROR4__(v1318, 10) ^ (v1303 * __ROR4__(v1318 ^ 0xAB69605E, 12)) ^ v1317;
      v1320 = (v1319 >> 10) ^ (v1299 * (v1319 ^ HIWORD(v1843))) ^ v1318;
      v1321 = (HIWORD(v1843) * (__ROR4__(~v1320, 5) + 24670)) ^ v1319;
      v1322 = (v1321 - HIWORD(v1843)) ^ 0xAB69605E ^ v1320;
      v1323 = ((v1322 >> 2) + v1303 * __ROR4__(v1322 ^ HIWORD(v1843), 30)) ^ v1321;
      v1324 = (__ROR4__(v1323, 25) + v1299 * __ROR4__(v1323 - v1297, 6)) ^ v1322;
      v1325 = (24670 * (v1324 ^ v1303) + __ROR4__(v1324, 9)) ^ v1323;
      v1326 = (__ROR4__(v1325, 25) + HIWORD(v1843) * __ROR4__(v1325 ^ v1299, 27)) ^ v1324;
      v1327 = v1297 ^ v1325 ^ v1326 ^ 0xAB69605E;
      v1328 = (v1303 * (__ROR4__(v1327, 3) - WORD1(v1843))) ^ v1326;
      v1329 = (24670 * __ROR4__(v1328 - v1297, 1) - __ROR4__(v1328, 6)) ^ v1327;
      v1330 = (__ROR4__(v1329, 18) + HIWORD(v1843) * __ROR4__(v1329 - 1419157410, 29)) ^ v1328;
      v1331 = (v1303 * __ROR4__(v1330 - 1419157410, 17) - __ROR4__(v1330, 14)) ^ v1329;
      v1332 = (v1331 >> 3) ^ (WORD1(v1843) * (v1331 ^ 0x605E)) ^ v1330;
      v1302 = v1661 ^ v1332;
      v1661 = v1309;
      v1333 = v1301 ^ v1331 ^ __ROR4__(v1332, 30) ^ (24670 * __ROR4__(v1297 ^ v1332, 28));
      *(v1296 - 4) = v1333;
      *v1296 = v1302;
      v1296 += 8;
      v1404 = v1333;
      v1301 = v1307;
      *(v1296 - 13) = BYTE1(v1333);
      *(v1296 - 9) = BYTE1(v1302);
      v1334 = (((v1333 >> 8) | (v1333 << 24)) >> 8) | (((v1333 >> 8) | (v1333 << 24)) << 24);
      *(v1296 - 14) = v1334;
      v1299 = WORD1(v1843);
      *(v1296 - 10) = (unsigned __int16)(v1302 >> 8) >> 8;
      *(v1296 - 15) = __ROR4__(v1334, 8);
      v1288 = v1404;
      *(v1296 - 11) = __ROR4__((((v1302 >> 8) | (v1302 << 24)) >> 8) | (((v1302 >> 8) | (v1302 << 24)) << 24), 8);
      --v1300;
    }
    while ( v1300 );
    v1280 = 0;
    LODWORD(v2) = 0;
    v87 = v1657;
    v311 = (WCHAR *)v1656;
    v306 = v1504;
    v1174 = Srce;
    v1279 = v1467;
    v1277 = (WCHAR *)lpModuleNamej;
    v1295 = v1533;
  }
  for ( jj = 0LL; jj < v1295; ++jj )
    v1280 ^= *((_BYTE *)v1277 + jj);
  v1336 = v1174;
  v1337 = v1279;
  Srce = v1174;
  v1467 = v1279;
  if ( v1280 != *(_QWORD *)(v1295 + v1546) )
  {
    MemoryFree(v1277);
LABEL_1579:
    v1103 = -805306367;
    lpModuleNamei = 0LL;
    goto LABEL_1414;
  }
  v1710 = 0;
  v1770 = v1277;
  if ( (unsigned int)v1295 < 4 )
  {
    v1199 = lpMemv;
    goto LABEL_1582;
  }
  v1405 = *(_DWORD *)v1277;
  v1199 = lpMemv;
  v1338 = RtlULongLongAdd(v1277, 4LL, &v1770, v1277);
  lpModuleNamei = v1339;
  v1467 = v1340;
  Srce = v1336;
  if ( v1338 < 0 )
    goto LABEL_1584;
  v1338 = RtlUIntAdd(0LL, 4LL, &v1710);
  lpModuleNamei = v1277;
  v1467 = v1337;
  Srce = v1336;
  if ( v1338 < 0 )
    goto LABEL_1584;
  if ( (unsigned int)v1533 - v1710 < 4 )
    goto LABEL_1582;
  v1453 = *(_DWORD *)v1770;
  v1338 = RtlULongLongAdd(v1770, 4LL, &v1770, v1277);
  lpModuleNamei = v1341;
  v1467 = v1342;
  Srce = v1336;
  if ( v1338 < 0 )
    goto LABEL_1584;
  v1338 = RtlUIntAdd(v1710, 4LL, &v1710);
  lpModuleNamei = v1277;
  v1467 = v1337;
  Srce = v1336;
  if ( v1338 < 0 )
    goto LABEL_1584;
  if ( (unsigned int)v1533 - v1710 < v1453 )
    goto LABEL_1582;
  v1338 = RtlUIntAdd(v1710, v1453, &v1710);
  lpModuleNamei = v1277;
  v1467 = v1337;
  Srce = v1336;
  if ( v1338 < 0 )
    goto LABEL_1584;
  if ( (char *)v1277 + (unsigned int)v1533 < (char *)v1770 + v1453
    || (unsigned __int64)v1277 + (unsigned int)v1533 - (unsigned __int64)v1453 - (_QWORD)v1770 >= 8 )
  {
LABEL_1582:
    Srce = v1336;
    v1467 = v1337;
    lpModuleNamei = v1277;
LABEL_1583:
    v1338 = -1073741762;
    goto LABEL_1584;
  }
  v1338 = 0;
  v1534 = 0LL;
  v1771 = 0LL;
  v1772 = 0LL;
  v1773 = 0LL;
  v1618 = 0;
  lpModuleNamei = v1277;
  v1467 = v1337;
  Srce = v1336;
  if ( !v1770 )
    goto LABEL_1606;
  v1593 = v1770;
  v1338 = RtlULongLongAdd(v1770, v1453, &v1771, v1277);
  lpModuleNamei = v1343;
  v1467 = v1344;
  Srce = v1336;
  if ( v1338 >= 0 )
  {
    lpModuleNamei = v1343;
    v1345 = 4LL;
    v1346 = v1593;
    v1467 = v1344;
    v1347 = v1771;
    Srce = v1336;
    while ( v1346 < v1347 )
    {
      v1338 = RtlULongLongAdd(v1346, v1345, &v1772, v1346);
      if ( v1338 < 0 )
        goto LABEL_1614;
      if ( v1772 > v1349 )
        goto LABEL_1604;
      v1351 = *v1348;
      v1721 = 0;
      v1338 = RtlUIntAdd(v1350, v1351, &v1721);
      if ( v1338 < 0 )
        goto LABEL_1584;
      v1338 = RtlULongLongAdd(v1352, v1721, &v1773, v1352);
      if ( v1338 < 0 )
        goto LABEL_1614;
      v1346 = v1773;
      if ( v1773 > v1347 )
        goto LABEL_1604;
      ++v1618;
    }
    if ( v1346 != v1347 )
    {
LABEL_1604:
      v1338 = -1073741811;
      goto LABEL_1584;
    }
LABEL_1606:
    if ( v1453 )
    {
      v1353 = GetProcessHeap();
      v1354 = v1453;
      v1534 = HeapAlloc(v1353, 8u, v1453);
      v1355 = v1534;
      if ( v1534 )
      {
        v1338 = 0;
        goto LABEL_1611;
      }
      v1338 = -1073741801;
    }
    else
    {
      v1354 = 0LL;
      v1355 = 0LL;
LABEL_1611:
      if ( v1770 )
        memcpy_0(v1355, v1770, v1354);
      v1790[1] = v1534;
      v1790[0] = (LPVOID)__PAIR64__(v1453, v1618);
    }
LABEL_1614:
    if ( v1338 >= 0 && v1405 != LODWORD(v1790[0]) )
      goto LABEL_1583;
  }
LABEL_1584:
  v1103 = v1338 | 0x10000000;
LABEL_1415:
  if ( v1199 )
  {
LABEL_1416:
    v1200 = GetProcessHeap();
    HeapFree(v1200, 0, v1199);
  }
  if ( Srce )
  {
    v1201 = (void *)*((_QWORD *)Srce + 1);
    if ( v1201 )
    {
      v1202 = GetProcessHeap();
      HeapFree(v1202, 0, v1201);
      *((_QWORD *)Srce + 1) = 0LL;
    }
    v1203 = (void *)*((_QWORD *)Srce + 3);
    if ( v1203 )
    {
      v1204 = GetProcessHeap();
      HeapFree(v1204, 0, v1203);
      *((_QWORD *)Srce + 3) = 0LL;
    }
    v1205 = (void *)*((_QWORD *)Srce + 5);
    if ( v1205 )
    {
      v1206 = GetProcessHeap();
      HeapFree(v1206, 0, v1205);
      *((_QWORD *)Srce + 5) = 0LL;
    }
    v1207 = GetProcessHeap();
    HeapFree(v1207, 0, Srce);
  }
  if ( Sizeh )
  {
    v1208 = GetProcessHeap();
    HeapFree(v1208, 0, Sizeh);
  }
  if ( v1493 )
  {
    v1209 = GetProcessHeap();
    HeapFree(v1209, 0, v1493);
  }
  if ( v1467 )
  {
    v1210 = (void *)*((_QWORD *)v1467 + 1);
    if ( v1210 )
    {
      v1211 = GetProcessHeap();
      HeapFree(v1211, 0, v1210);
      *((_QWORD *)v1467 + 1) = 0LL;
    }
    v1212 = (void *)*((_QWORD *)v1467 + 3);
    if ( v1212 )
    {
      v1213 = GetProcessHeap();
      HeapFree(v1213, 0, v1212);
      *((_QWORD *)v1467 + 3) = 0LL;
    }
    v1214 = (void *)*((_QWORD *)v1467 + 5);
    if ( v1214 )
    {
      v1215 = GetProcessHeap();
      HeapFree(v1215, 0, v1214);
      *((_QWORD *)v1467 + 5) = 0LL;
    }
    v1216 = GetProcessHeap();
    HeapFree(v1216, 0, v1467);
  }
  if ( lpModuleNamei )
  {
    v1217 = GetProcessHeap();
    HeapFree(v1217, 0, lpModuleNamei);
  }
  if ( v1103 >= 0 )
  {
    if ( LODWORD(v1790[0]) )
    {
      v325 = v1790[1];
      if ( v1790[1] )
      {
        v1774 = (int *)v1790[1];
        if ( (int)RtlULongLongAdd(v1790[1], 4LL, &v1774, LODWORD(v1790[0])) >= 0 )
        {
          v329 = v1774;
          if ( !*v325 )
            v329 = 0LL;
          v1774 = v329;
          if ( *v325 == (_DWORD)v328 && *v329 >= 0 && v325 && v326 > v327 )
          {
            v1775 = v325;
            for ( kk = 0LL; ; kk = (unsigned int)(v335 + v334) )
            {
              v331 = RtlULongLongAdd(v325, v328, &v1775, kk);
              if ( (unsigned int)v332 >= v333
                || v331 < 0
                || (int)RtlULongLongAdd(v1775, (unsigned int)*v325, &v1775, v332) < 0 )
              {
                break;
              }
              v325 = v1775;
            }
          }
        }
      }
    }
  }
LABEL_316:
  v1789[0] = 0LL;
  v307 = (void *)v1789[1];
  if ( v1789[1] )
  {
    v308 = GetProcessHeap();
    HeapFree(v308, 0, v307);
    v1789[1] = 0LL;
  }
  v1790[0] = 0LL;
  v309 = v1790[1];
  if ( v1790[1] )
  {
    v310 = GetProcessHeap();
    HeapFree(v310, 0, v309);
    v1790[1] = 0LL;
  }
  if ( v306 )
  {
    v1356 = GetProcessHeap();
    HeapFree(v1356, 0, v306);
  }
  if ( v311 )
  {
    v1357 = GetProcessHeap();
    HeapFree(v1357, 0, v311);
  }
LABEL_324:
  v93 = v1686;
  v92 = 0LL;
  v5 = (int *)hMem;
  v82 = 4LL;
LABEL_67:
  while ( _InterlockedCompareExchange(&dword_1800E97EC, 1, 0) )
    ;
  v94 = dword_1800E97E8;
  if ( dword_1800E97E8 > 0 )
  {
    --dword_1800E97E8;
    if ( v94 == 1 )
    {
      v1358 = (HMODULE *)&unk_1800E9390;
      do
      {
        if ( *v1358 )
          FreeLibrary(*v1358);
        v1358 += 3;
        --v82;
      }
      while ( v82 );
      memset_0(&unk_1800E9390, 0, 0x60uLL);
      v1359 = 2LL;
      v1360 = off_1800E7000;
      v1361 = off_1800A91A0;
      do
      {
        v1362 = *((_OWORD *)v1361 + 1);
        *(_OWORD *)v1360 = *(_OWORD *)v1361;
        v1363 = *((_OWORD *)v1361 + 2);
        *((_OWORD *)v1360 + 1) = v1362;
        v1364 = *((_OWORD *)v1361 + 3);
        *((_OWORD *)v1360 + 2) = v1363;
        v1365 = *((_OWORD *)v1361 + 4);
        *((_OWORD *)v1360 + 3) = v1364;
        v1366 = *((_OWORD *)v1361 + 5);
        *((_OWORD *)v1360 + 4) = v1365;
        v1367 = *((_OWORD *)v1361 + 6);
        *((_OWORD *)v1360 + 5) = v1366;
        v1368 = *((_OWORD *)v1361 + 7);
        v1361 += 16;
        *((_OWORD *)v1360 + 6) = v1367;
        v1360 += 16;
        *((_OWORD *)v1360 - 1) = v1368;
        --v1359;
      }
      while ( v1359 );
      v1369 = *((_OWORD *)v1361 + 1);
      *(_OWORD *)v1360 = *(_OWORD *)v1361;
      v1370 = *((_OWORD *)v1361 + 2);
      *((_OWORD *)v1360 + 1) = v1369;
      v1371 = *((_OWORD *)v1361 + 3);
      *((_OWORD *)v1360 + 2) = v1370;
      v1372 = *((_OWORD *)v1361 + 4);
      *((_OWORD *)v1360 + 3) = v1371;
      v1373 = *((_OWORD *)v1361 + 5);
      *((_OWORD *)v1360 + 4) = v1372;
      v1374 = *((_OWORD *)v1361 + 6);
      *((_OWORD *)v1360 + 5) = v1373;
      *((_OWORD *)v1360 + 6) = v1374;
    }
  }
  _InterlockedExchange(&dword_1800E97EC, 0);
  if ( v92 )
    LocalFree(v92);
  if ( v87 < 0 )
  {
    switch ( v87 )
    {
      case -805306316:
        v1685 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v1685 = -1073418201;
        break;
      case -805306306:
        v1685 = -1073418200;
        break;
      default:
        v1685 = v87;
        if ( v87 == -2147024774 )
          goto LABEL_94;
        break;
    }
    v95 = v1681;
LABEL_74:
    v3 = v1685;
  }
  else
  {
    if ( v93 == 4 )
    {
      v95 = *v5;
      goto LABEL_74;
    }
LABEL_94:
    v95 = v1681;
    v3 = -1073418210;
  }
  if ( v5 )
    LocalFree(v5);
  if ( v3 < 0 )
  {
    if ( v3 == -1073418222 )
      v3 = 0;
  }
  else if ( v95 == 1 )
  {
    LODWORD(v2) = 1;
  }
  *v1759 = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
LABEL_101:
  ReleaseSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
