/*
 * XREFs of ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1800F394C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800F2D78 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D4C64 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800FF470 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800FF498 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     RtlULongLongAdd @ 0x18018E718 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18018F6A0 (RtlUIntAdd.c)
 *     StringLengthWorkerW @ 0x1801AE508 (StringLengthWorkerW.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CBACC (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1806830FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaAvailability::IsCortanaAllowedOnSKU(CortanaAvailability *this, unsigned __int8 *a2)
{
  int *v2; // r14
  int v3; // r15d
  int v4; // eax
  _BYTE *v5; // rsi
  _BYTE *v6; // r13
  int v7; // r8d
  unsigned __int8 *v8; // r14
  int v9; // eax
  unsigned int v10; // r11d
  unsigned int v11; // ebx
  __int64 v12; // r12
  int v13; // r10d
  int v14; // r9d
  int v15; // ecx
  int v16; // r10d
  int v17; // ebx
  int v18; // r9d
  unsigned int v19; // r11d
  int v20; // ebx
  unsigned int v21; // r11d
  int v22; // ebx
  int v23; // r11d
  unsigned int v24; // ebx
  int v25; // r11d
  int v26; // ebx
  int v27; // r11d
  unsigned int v28; // ebx
  int v29; // edx
  int v30; // ebx
  unsigned int v31; // r11d
  int v32; // ebx
  int v33; // r11d
  int v34; // ebx
  int v35; // r11d
  unsigned int v36; // edi
  int v37; // r11d
  int v38; // edi
  int v39; // r11d
  unsigned int v40; // edi
  int v41; // r11d
  int v42; // ebx
  int v43; // ecx
  char v44; // al
  unsigned __int64 v45; // rcx
  int v46; // r12d
  __int64 v47; // rbx
  HMODULE *v48; // rdi
  __int64 v49; // rdx
  __int64 (__fastcall **v50)(); // rax
  __int64 (__fastcall **v51)(); // rcx
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  _BYTE *v65; // rsi
  char *v66; // rdi
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned int v69; // eax
  const CHAR *v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // ebx
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  wchar_t *v75; // rdi
  wchar_t *v76; // rsi
  signed int LastError; // r12d
  __int64 v78; // r13
  void *v79; // rbx
  __int64 i; // r9
  __int64 (__fastcall *v81)(); // rbx
  DWORD CurrentThreadId; // eax
  __int64 v83; // rax
  wchar_t *v84; // rbx
  __int64 v85; // r9
  __int64 v86; // rbx
  void *v87; // r13
  int v88; // r12d
  int v89; // esi
  const void **v90; // r11
  int v91; // eax
  HANDLE CurrentProcess; // rax
  bool v93; // sf
  unsigned int v94; // r13d
  __int64 v95; // rax
  const WCHAR *v96; // rdx
  int v97; // eax
  int v98; // edi
  HMODULE *v100; // rdi
  __int64 v101; // rdx
  __int64 (__fastcall **v102)(); // rax
  __int64 (__fastcall **v103)(); // rcx
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm1
  __int128 v112; // xmm0
  __int128 v113; // xmm1
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  _QWORD *v117; // rbx
  HANDLE v118; // rax
  _OWORD *v119; // rax
  void *v120; // r13
  HANDLE v121; // rax
  void *v122; // rdi
  HANDLE v123; // rax
  void *v124; // rdi
  HANDLE v125; // rax
  HANDLE v126; // rax
  HANDLE v127; // rax
  __int64 v128; // rcx
  unsigned int v129; // r9d
  unsigned int v130; // r10d
  unsigned int v131; // r11d
  unsigned int v132; // edi
  unsigned int v133; // ecx
  unsigned int v134; // r11d
  size_t v135; // rdx
  unsigned int v136; // r9d
  int v137; // r12d
  int v138; // r10d
  int v139; // r9d
  int v140; // r13d
  int v141; // edx
  int v142; // r13d
  int v143; // r15d
  int v144; // r13d
  unsigned int v145; // r15d
  int v146; // r13d
  int v147; // r15d
  int v148; // r13d
  int v149; // r15d
  int v150; // r13d
  int v151; // r15d
  unsigned int v152; // r13d
  unsigned int v153; // r15d
  int v154; // r13d
  int v155; // r15d
  int v156; // r13d
  int v157; // r15d
  int v158; // r13d
  int v159; // r15d
  int v160; // r13d
  int v161; // r15d
  unsigned int v162; // r13d
  int v163; // r15d
  unsigned int v164; // ecx
  unsigned int v165; // r15d
  unsigned int v166; // r13d
  _BYTE *v167; // rax
  unsigned __int8 *v168; // rdx
  int v169; // edi
  int v170; // r8d
  int v171; // eax
  unsigned __int64 v172; // r14
  unsigned __int8 v173; // al
  WCHAR *v174; // rbx
  void *v175; // r14
  const void **v176; // r13
  HANDLE v177; // rax
  unsigned int *v178; // rsi
  unsigned int *v179; // rax
  signed int v180; // edi
  HANDLE v181; // rax
  void *v182; // rax
  const void **v183; // rsi
  unsigned int *v184; // rax
  HANDLE v185; // rax
  HANDLE v186; // rax
  HANDLE v187; // rax
  HANDLE v188; // rax
  unsigned __int16 *v189; // rax
  HANDLE v190; // rax
  unsigned __int16 *v191; // rax
  int v192; // edi
  __int64 v193; // rdx
  __int64 v194; // rcx
  int v195; // edi
  const void **v196; // r11
  unsigned int v197; // edi
  HANDLE v198; // rax
  _DWORD *v199; // rax
  int v200; // edi
  unsigned int v201; // ecx
  int v202; // r8d
  const void **v203; // r10
  int v204; // ecx
  char v205; // r12
  int v206; // r8d
  unsigned int v207; // r8d
  int v208; // r15d
  unsigned int v209; // r9d
  unsigned int v210; // esi
  int v211; // edx
  _BYTE *v212; // rax
  unsigned int v213; // r13d
  int v214; // r9d
  char v215; // cl
  HANDLE v216; // rax
  _OWORD *v217; // rax
  FARPROC v218; // rax
  signed int v219; // eax
  unsigned int v220; // r9d
  _DWORD *v221; // rsi
  unsigned int v222; // r9d
  int v223; // r10d
  const void **v224; // rax
  int i1; // edx
  _DWORD *v226; // rcx
  void *v227; // rdi
  HANDLE v228; // rax
  void *v229; // rsi
  HANDLE v230; // rax
  HANDLE v231; // rax
  int v232; // eax
  signed int v233; // edi
  unsigned __int16 *v234; // r10
  unsigned __int64 v235; // rdi
  unsigned int *v236; // rax
  _BYTE *v237; // rcx
  unsigned __int8 *v238; // rdx
  unsigned __int8 v239; // al
  unsigned int v240; // r10d
  unsigned int v241; // ecx
  int v242; // r8d
  _QWORD *v243; // r11
  int v244; // r9d
  unsigned int *v245; // rdi
  unsigned int v246; // r9d
  unsigned int v247; // r10d
  unsigned int *v248; // rax
  unsigned int v249; // edi
  unsigned int *v250; // r9
  __int64 v251; // rdx
  __int64 v252; // r9
  int v253; // r11d
  int v254; // eax
  unsigned int *v255; // r9
  unsigned int v256; // r10d
  unsigned int v257; // r9d
  unsigned int *v258; // r9
  __int64 v259; // rdx
  __int64 v260; // r9
  int v261; // r11d
  int v262; // eax
  unsigned int *v263; // r9
  unsigned int v264; // r10d
  unsigned int v265; // r9d
  unsigned int v266; // edi
  unsigned int v267; // r9d
  __int64 v268; // rcx
  unsigned int v269; // edi
  int v270; // edi
  unsigned int v271; // r9d
  unsigned int v272; // ecx
  unsigned int v273; // edi
  HANDLE v274; // rax
  unsigned __int8 *v275; // rax
  int v276; // eax
  __int64 v277; // r10
  WCHAR *v278; // r9
  HANDLE v279; // rax
  unsigned int *v280; // r9
  unsigned int v281; // r10d
  __int64 v282; // rdx
  __int64 v283; // r9
  int v284; // r10d
  _DWORD *v285; // r9
  _QWORD *v286; // rax
  __int64 v287; // rcx
  unsigned int v288; // r9d
  unsigned int v289; // r10d
  unsigned int v290; // edi
  HANDLE v291; // rax
  unsigned int *v292; // rax
  unsigned __int64 v293; // rcx
  void *v294; // r9
  HANDLE v295; // rax
  unsigned int v296; // edx
  unsigned int v297; // eax
  unsigned int v298; // edi
  HANDLE v299; // rax
  const void **v300; // rax
  const void **v301; // r11
  int v302; // eax
  void *v303; // rcx
  void *v304; // rcx
  int v305; // eax
  void *v306; // r9
  void *v307; // rcx
  int v308; // eax
  void *v309; // r9
  int v310; // eax
  HANDLE v311; // rax
  LPVOID v312; // rax
  void *v313; // rdx
  unsigned int *v314; // rdx
  _QWORD *v315; // r10
  void *v316; // r9
  char *v317; // r11
  unsigned int *v318; // rax
  __int64 v319; // rdx
  unsigned int v320; // ecx
  HANDLE v321; // rax
  LPVOID v322; // rax
  int v323; // eax
  HANDLE v324; // rax
  _OWORD *v325; // rax
  HANDLE v326; // rax
  WCHAR *v327; // rax
  __int64 v328; // rcx
  unsigned int v329; // r10d
  unsigned int v330; // edi
  unsigned int *v331; // r8
  __int64 v332; // rcx
  char *v333; // r15
  HANDLE v334; // rax
  unsigned __int16 *v335; // rax
  HANDLE v336; // rax
  HANDLE v337; // rax
  HANDLE v338; // rax
  int v339; // r9d
  SIZE_T v340; // r10
  unsigned int v341; // r10d
  int v342; // r9d
  int v343; // r9d
  SIZE_T v344; // r11
  unsigned int v345; // r11d
  int v346; // r9d
  int v347; // r9d
  unsigned int v348; // r10d
  int v349; // r9d
  int v350; // r10d
  int v351; // r11d
  HANDLE v352; // rax
  _QWORD *v353; // rax
  _QWORD *v354; // rcx
  HANDLE v355; // rax
  void *v356; // rcx
  DWORD ModuleFileNameW; // eax
  unsigned int v358; // r14d
  __int64 v359; // rax
  unsigned int v360; // edi
  int v361; // eax
  char *v362; // rax
  _BYTE *v363; // rsi
  int v364; // r12d
  unsigned __int8 *v365; // rdi
  unsigned int v366; // r15d
  __int64 v367; // rax
  int v368; // ebx
  int v369; // r11d
  int v370; // r10d
  int v371; // ecx
  int v372; // r11d
  int v373; // r14d
  int v374; // r10d
  unsigned int v375; // r9d
  int v376; // r14d
  unsigned int v377; // r9d
  int v378; // r14d
  int v379; // r9d
  unsigned int v380; // r14d
  int v381; // r9d
  int v382; // r14d
  int v383; // r9d
  unsigned int v384; // r14d
  int v385; // r9d
  int v386; // r14d
  unsigned int v387; // r15d
  int v388; // r14d
  int v389; // r15d
  int v390; // r14d
  int v391; // r15d
  unsigned int v392; // r8d
  int v393; // r15d
  int v394; // r8d
  int v395; // r15d
  unsigned int v396; // r8d
  int v397; // r15d
  int v398; // r14d
  int v399; // ecx
  unsigned __int64 v400; // rcx
  const WCHAR *v401; // rbx
  char v402; // al
  HMODULE *v403; // rbx
  __int64 v404; // r14
  __int64 v405; // rdx
  __int64 (__fastcall **v406)(); // rax
  __int64 (__fastcall **v407)(); // rcx
  __int128 v408; // xmm1
  __int128 v409; // xmm0
  __int128 v410; // xmm1
  __int128 v411; // xmm0
  __int128 v412; // xmm1
  __int128 v413; // xmm0
  __int128 v414; // xmm1
  __int128 v415; // xmm1
  __int128 v416; // xmm0
  __int128 v417; // xmm1
  __int128 v418; // xmm0
  __int128 v419; // xmm1
  __int128 v420; // xmm0
  signed int v421; // r14d
  unsigned __int64 v422; // rcx
  unsigned __int16 *v423; // r8
  char *v424; // rbx
  void **v425; // rax
  _DWORD *v426; // rbx
  signed int v427; // eax
  unsigned int v428; // edi
  char *v429; // rax
  bool v430; // sf
  int v431; // eax
  unsigned int v432; // edi
  int v433; // ebx
  __int64 v434; // rax
  int v435; // edi
  int v436; // eax
  void *v437; // rdi
  __int64 v438; // rax
  CToastCenterExperienceManager *v439; // rbx
  signed int v440; // edi
  bool v441; // sf
  int v442; // eax
  int v443; // eax
  int v444; // r14d
  int v445; // eax
  char *v446; // rax
  _BYTE *v447; // rsi
  int v448; // r15d
  unsigned __int8 *v449; // rbx
  int v450; // eax
  unsigned int v451; // r14d
  __int64 v452; // r12
  unsigned int v453; // r11d
  int v454; // r10d
  int v455; // r9d
  int v456; // ecx
  int v457; // r10d
  int v458; // r11d
  int v459; // r9d
  unsigned int v460; // r8d
  int v461; // r11d
  unsigned int v462; // r8d
  int v463; // r11d
  int v464; // r8d
  unsigned int v465; // r11d
  int v466; // r8d
  int v467; // r11d
  int v468; // r8d
  unsigned int v469; // r11d
  int v470; // edx
  int v471; // r11d
  unsigned int v472; // r14d
  int v473; // r11d
  int v474; // r14d
  int v475; // r11d
  int v476; // r14d
  unsigned int v477; // edi
  int v478; // r14d
  int v479; // edi
  int v480; // r14d
  unsigned int v481; // edi
  int v482; // r14d
  int v483; // r11d
  int v484; // ecx
  WCHAR *v485; // rbx
  unsigned __int64 v486; // rcx
  char v487; // al
  HMODULE *v488; // rdi
  __int64 v489; // rbx
  HMODULE *v490; // rdi
  __int64 v491; // rdx
  __int64 (__fastcall **v492)(); // rax
  __int64 (__fastcall **v493)(); // rcx
  __int128 v494; // xmm1
  __int128 v495; // xmm0
  __int128 v496; // xmm1
  __int128 v497; // xmm0
  __int128 v498; // xmm1
  __int128 v499; // xmm0
  __int128 v500; // xmm1
  __int128 v501; // xmm1
  __int128 v502; // xmm0
  __int128 v503; // xmm1
  __int128 v504; // xmm0
  __int128 v505; // xmm1
  __int128 v506; // xmm0
  __int64 v507; // r11
  unsigned int *v508; // rdi
  unsigned int *v509; // rax
  int i2; // r8d
  bool v511; // sf
  __int64 v512; // rcx
  unsigned int v513; // r11d
  unsigned int v514; // r9d
  unsigned int v515; // r10d
  unsigned int v516; // r11d
  unsigned int v517; // edi
  unsigned int v518; // ecx
  unsigned int v519; // r10d
  unsigned int v520; // eax
  unsigned int v521; // ecx
  unsigned int v522; // edi
  HANDLE v523; // rax
  LPVOID v524; // rdi
  unsigned int v525; // r10d
  _DWORD *v526; // r11
  _DWORD *v527; // rax
  unsigned int v528; // eax
  unsigned int v529; // r9d
  int v530; // eax
  int v531; // r9d
  unsigned int v532; // eax
  unsigned int v533; // r9d
  unsigned int *v534; // r11
  __int64 v535; // rdx
  __int64 v536; // r11
  unsigned int v537; // r10d
  unsigned int *v538; // r11
  int v539; // eax
  int v540; // r9d
  unsigned int v541; // r9d
  size_t v542; // rdx
  unsigned int *v543; // r11
  __int64 v544; // rdx
  __int64 v545; // r11
  unsigned int v546; // r10d
  unsigned int *v547; // r11
  unsigned int *v548; // r10
  unsigned int v549; // r11d
  __int64 v550; // rdx
  __int64 v551; // r10
  int v552; // r11d
  _DWORD *v553; // r10
  SIZE_T *v554; // rax
  unsigned int v555; // r11d
  unsigned int *v556; // r9
  unsigned int v557; // r11d
  __int64 v558; // rdx
  __int64 v559; // r9
  int v560; // r11d
  _DWORD *v561; // r9
  __int64 v562; // r10
  void *v563; // rcx
  __int64 v564; // r11
  __int64 v565; // r11
  int *v566; // rax
  unsigned int v567; // r11d
  unsigned int *v568; // r9
  unsigned int v569; // r10d
  __int64 v570; // rdx
  __int64 v571; // r9
  int v572; // r10d
  _DWORD *v573; // r9
  unsigned int *v574; // r9
  unsigned int v575; // r10d
  __int64 v576; // rdx
  __int64 v577; // r9
  int v578; // r10d
  unsigned int *v579; // r9
  unsigned int *v580; // rax
  __int64 v581; // rcx
  unsigned int v582; // r9d
  unsigned int v583; // r11d
  unsigned int v584; // r11d
  unsigned int v585; // r11d
  unsigned int v586; // r11d
  unsigned int v587; // r9d
  int v588; // r12d
  unsigned int v589; // ecx
  unsigned int v590; // edi
  HANDLE v591; // rax
  char *v592; // rax
  char *v593; // rdi
  unsigned int v594; // r9d
  void *v595; // rcx
  HANDLE v596; // rax
  char *v597; // r8
  unsigned __int8 v598; // al
  unsigned __int64 v599; // rcx
  char *v600; // rcx
  unsigned int v601; // r11d
  unsigned int v602; // r8d
  unsigned __int8 *v603; // r9
  int v604; // r10d
  int v605; // r8d
  char v606; // cl
  int v607; // edx
  int v608; // ecx
  int v609; // edx
  int v610; // r14d
  unsigned int v611; // r8d
  unsigned int v612; // r15d
  int v613; // edx
  unsigned int v614; // esi
  char v615; // dl
  SIZE_T v616; // r12
  _BYTE *v617; // rbx
  int v618; // edi
  unsigned __int8 *v619; // rdx
  int v620; // r15d
  int v621; // r14d
  int v622; // r13d
  unsigned __int64 v623; // rax
  int v624; // r10d
  int v625; // r9d
  int v626; // r8d
  int v627; // r11d
  int v628; // r8d
  int v629; // r11d
  int v630; // r8d
  unsigned int v631; // r11d
  int v632; // r8d
  int v633; // r11d
  int v634; // r8d
  int v635; // r11d
  int v636; // r8d
  int v637; // r11d
  unsigned int v638; // r8d
  unsigned int v639; // r11d
  int v640; // r8d
  int v641; // r11d
  int v642; // r8d
  int v643; // r11d
  int v644; // r8d
  int v645; // r11d
  int v646; // r8d
  int v647; // r11d
  unsigned int v648; // r8d
  int v649; // r11d
  unsigned int v650; // r8d
  HANDLE v651; // rax
  unsigned int *v652; // rcx
  unsigned int *v653; // rax
  unsigned int v654; // r12d
  HANDLE v655; // rax
  void *v656; // rax
  HANDLE v657; // rax
  LPVOID v658; // rax
  _OWORD *v659; // rcx
  HANDLE v660; // rax
  LPVOID v661; // rax
  size_t v662; // rax
  HANDLE v663; // rax
  HANDLE v664; // rax
  HANDLE v665; // rax
  HANDLE v666; // rax
  unsigned int *v667; // rax
  HANDLE v668; // rax
  unsigned __int8 *v669; // r10
  __int64 v670; // rdx
  unsigned int v671; // ecx
  void *v672; // r11
  int v673; // r12d
  __int64 v674; // r9
  __int64 v675; // r9
  unsigned int v676; // edi
  HANDLE v677; // rax
  _DWORD *v678; // rax
  void *v679; // rdi
  const void **v680; // r9
  void *v681; // rax
  __int64 v682; // r9
  void *v683; // rcx
  __int64 v684; // r9
  __int64 v685; // r9
  void *v686; // rcx
  __int64 v687; // r9
  HANDLE v688; // rax
  unsigned int v689; // edx
  __int64 v690; // rcx
  HANDLE v691; // rax
  HANDLE v692; // rax
  HANDLE v693; // rax
  HANDLE v694; // rax
  HANDLE v695; // rax
  HANDLE v696; // rax
  HANDLE v697; // rax
  HANDLE v698; // rax
  HANDLE v699; // rax
  HANDLE v700; // rax
  HANDLE v701; // rax
  HANDLE v702; // rax
  int v703; // r9d
  _DWORD *v704; // r10
  int v705; // r11d
  _DWORD *v706; // r12
  int v707; // edx
  unsigned int *v708; // r9
  unsigned __int8 *v709; // r11
  void *v710; // r11
  unsigned int *v711; // rcx
  int v712; // eax
  unsigned int *v713; // rcx
  unsigned int v714; // eax
  unsigned int v715; // edi
  unsigned int v716; // ecx
  unsigned int *v717; // r9
  void *v718; // r11
  unsigned int v719; // eax
  _DWORD *v720; // r8
  int v721; // r12d
  unsigned int v722; // edi
  HANDLE v723; // rax
  int *v724; // rax
  int *v725; // r10
  FARPROC v726; // rax
  int v727; // eax
  unsigned int v728; // r9d
  signed int v729; // eax
  int v730; // eax
  unsigned int *v731; // r10
  signed int v732; // r12d
  unsigned int *v733; // rcx
  int v734; // r9d
  SIZE_T v735; // r11
  unsigned int v736; // r11d
  int v737; // r9d
  __int64 v738; // rdx
  int v739; // r9d
  SIZE_T v740; // r10
  unsigned int v741; // r10d
  int v742; // r9d
  unsigned int v743; // r9d
  int v744; // r9d
  int v745; // r10d
  int v746; // r11d
  HANDLE v747; // rax
  _QWORD *v748; // rax
  _QWORD *v749; // rcx
  HANDLE v750; // rax
  void *v751; // rcx
  HANDLE v752; // rax
  void *v753; // rcx
  HANDLE v754; // rax
  void *v755; // rcx
  _QWORD *v756; // rax
  HANDLE v757; // rax
  HANDLE v758; // rax
  HANDLE v759; // rax
  HANDLE v760; // rax
  unsigned int *v761; // rax
  HANDLE v762; // rax
  HANDLE v763; // rax
  HANDLE v764; // rax
  HANDLE v765; // rax
  unsigned __int64 v766; // r12
  _DWORD *v767; // r10
  int v768; // eax
  unsigned __int8 *v769; // rcx
  unsigned int *v770; // rdx
  char v771; // cl
  unsigned __int8 *v772; // rsi
  int v773; // r12d
  int v774; // ecx
  int v775; // r12d
  unsigned int v776; // r11d
  unsigned int v777; // r12d
  int v778; // r14d
  int v779; // ecx
  int v780; // edx
  unsigned int v781; // r12d
  int v782; // r8d
  int v783; // eax
  unsigned int v784; // r13d
  int v785; // esi
  _BYTE *v786; // rbx
  size_t v787; // r14
  int v788; // edi
  unsigned __int8 *v789; // rdx
  int v790; // r10d
  int v791; // r11d
  int v792; // r9d
  int v793; // r12d
  int v794; // r11d
  unsigned int v795; // r12d
  int v796; // r11d
  int v797; // r12d
  unsigned int v798; // r11d
  int v799; // r12d
  int v800; // r11d
  int v801; // r12d
  unsigned int v802; // r11d
  int v803; // r12d
  int v804; // r11d
  unsigned int v805; // r12d
  int v806; // r11d
  int v807; // r12d
  int v808; // r11d
  int v809; // r12d
  int v810; // r11d
  int v811; // r12d
  int v812; // r11d
  int v813; // r12d
  unsigned int v814; // r11d
  int v815; // r12d
  int v816; // edx
  int v817; // ecx
  size_t n; // rcx
  void *v819; // r11
  unsigned int *v820; // r9
  void *v821; // rcx
  int v822; // eax
  _DWORD *v823; // r9
  unsigned int *v824; // rcx
  const void *v825; // rdx
  _DWORD *v826; // r8
  unsigned __int64 v827; // rax
  HANDLE v828; // rax
  size_t v829; // rdi
  unsigned int *v830; // rax
  int ii; // r8d
  __int64 v832; // r9
  unsigned int *v833; // rcx
  LPVOID *v834; // rax
  int *v835; // rcx
  unsigned int v836; // r9d
  unsigned int v837; // r10d
  int v838; // r9d
  int v839; // r9d
  int *v840; // r11
  int *v841; // rax
  LPVOID v842; // rcx
  unsigned int v843; // r9d
  unsigned int v844; // r10d
  int v845; // r9d
  int v846; // r11d
  void *v847; // r10
  unsigned int *v848; // rcx
  unsigned int v849; // r9d
  int v850; // r9d
  int v851; // r9d
  unsigned int *v852; // rax
  unsigned int *v853; // rcx
  unsigned int v854; // r9d
  int v855; // r9d
  unsigned int v856; // edi
  const void *v857; // r10
  size_t v858; // r11
  unsigned int *v859; // rax
  const WCHAR *v860; // rdx
  __int64 v861; // rax
  const WCHAR *v862; // rbx
  HMODULE *v863; // r8
  int v864; // r14d
  __int64 v865; // rcx
  unsigned __int64 v866; // rcx
  unsigned int v867; // ecx
  unsigned int v868; // eax
  const CHAR *v869; // rdx
  __int64 v870; // rax
  __int64 (__fastcall *v871)(); // rcx
  HANDLE v872; // rax
  int v873; // eax
  char *v874; // rax
  _BYTE *v875; // r15
  int v876; // ebx
  unsigned __int8 *v877; // rdi
  int v878; // r9d
  __int64 v879; // rax
  unsigned int v880; // r14d
  unsigned int v881; // esi
  int v882; // r11d
  int v883; // r10d
  int v884; // ecx
  int v885; // r11d
  int v886; // esi
  int v887; // r10d
  unsigned int v888; // r14d
  int v889; // esi
  unsigned int v890; // r14d
  int v891; // esi
  int v892; // r14d
  unsigned int v893; // esi
  int v894; // r14d
  int v895; // esi
  int v896; // r14d
  unsigned int v897; // esi
  int v898; // edx
  int v899; // esi
  unsigned int v900; // r14d
  int v901; // esi
  int v902; // r14d
  int v903; // esi
  int v904; // r14d
  unsigned int v905; // r8d
  int v906; // r14d
  int v907; // r8d
  int v908; // r14d
  unsigned int v909; // r8d
  int v910; // r14d
  int v911; // esi
  int v912; // ecx
  const WCHAR *v913; // rbx
  unsigned __int64 v914; // rcx
  char v915; // al
  HMODULE *v916; // rbx
  __int64 v917; // r14
  __int64 v918; // rdx
  __int64 (__fastcall **v919)(); // rax
  __int64 (__fastcall **v920)(); // rcx
  __int128 v921; // xmm1
  __int128 v922; // xmm0
  __int128 v923; // xmm1
  __int128 v924; // xmm0
  __int128 v925; // xmm1
  __int128 v926; // xmm0
  __int128 v927; // xmm1
  __int128 v928; // xmm1
  __int128 v929; // xmm0
  __int128 v930; // xmm1
  __int128 v931; // xmm0
  __int128 v932; // xmm1
  __int128 v933; // xmm0
  const WCHAR *v934; // rdx
  __int64 v935; // rax
  const WCHAR *v936; // rbx
  HMODULE *v937; // r8
  int v938; // r14d
  __int64 v939; // rcx
  unsigned __int64 v940; // rcx
  unsigned int v941; // ecx
  unsigned int v942; // eax
  const CHAR *v943; // rdx
  __int64 v944; // rax
  __int64 (__fastcall *v945)(); // rcx
  HANDLE v946; // rax
  signed int v947; // eax
  bool v948; // sf
  void *v949; // rax
  void *v950; // rax
  _DWORD *v951; // rdi
  _DWORD *v952; // rax
  __int64 v953; // rbx
  _DWORD *v954; // r15
  unsigned int jj; // esi
  __int64 v956; // rax
  unsigned int v957; // eax
  unsigned int v958; // edi
  __int64 v959; // rdx
  unsigned int kk; // ecx
  __int64 v961; // rdi
  __int64 v962; // rcx
  const wchar_t *v963; // rcx
  __int64 v964; // r8
  const wchar_t **v965; // rdx
  __int64 v966; // rax
  char *v967; // rax
  unsigned int v968; // r11d
  int v969; // r12d
  _BYTE *v970; // r14
  unsigned int v971; // ebx
  unsigned __int8 *v972; // rsi
  __int64 v973; // r15
  int v974; // r10d
  int v975; // r9d
  int v976; // r8d
  int v977; // eax
  int v978; // r9d
  int v979; // r11d
  int v980; // r8d
  unsigned int v981; // edi
  int v982; // r11d
  unsigned int v983; // edi
  int v984; // r11d
  int v985; // edi
  unsigned int v986; // r11d
  int v987; // edi
  int v988; // r11d
  int v989; // edi
  unsigned int v990; // r11d
  int v991; // ecx
  int v992; // r11d
  unsigned int v993; // ebx
  int v994; // r11d
  int v995; // ebx
  int v996; // r11d
  int v997; // ebx
  unsigned int v998; // edx
  int v999; // ebx
  int v1000; // edx
  int v1001; // ebx
  unsigned int v1002; // edx
  int v1003; // ebx
  int v1004; // r11d
  int v1005; // eax
  char *v1006; // r10
  unsigned __int64 v1007; // rax
  __m128 v1008; // xmm1
  __m128 v1009; // xmm0
  __m128 v1010; // xmm0
  __m128 v1011; // xmm1
  __m128 v1012; // xmm1
  __m128 v1013; // xmm1
  _QWORD *v1014; // rdx
  __int64 v1015; // r8
  unsigned int mm; // ecx
  __int64 v1017; // rax
  void *v1018; // rax
  _OWORD *v1019; // rbx
  unsigned int v1020; // eax
  unsigned int v1021; // ecx
  _BYTE *v1022; // rax
  __int64 v1023; // r9
  int v1024; // eax
  void *v1025; // rax
  __int64 v1026; // r9
  signed int v1027; // eax
  void **v1028; // rax
  __int64 v1029; // rax
  _WORD *v1030; // rdi
  __int64 v1031; // rcx
  void **v1032; // rax
  void **v1033; // rax
  signed int v1034; // eax
  int v1035; // eax
  __int64 v1036; // rax
  bool v1037; // sf
  signed int v1038; // eax
  int v1039; // eax
  __int64 v1040; // rax
  int v1041; // ebx
  signed int v1042; // eax
  unsigned int v1043; // edx
  int v1044; // eax
  __int32 v1045; // ebx
  void *v1046; // rdi
  int v1047; // edi
  void *v1048; // rdi
  int v1049; // edi
  __int64 v1050; // rdx
  __int64 v1051; // rdi
  bool v1052; // sf
  int v1053; // eax
  __int64 v1054; // rax
  bool v1055; // sf
  void *v1056; // rdi
  __int64 v1057; // rbx
  int v1058; // edi
  int v1059; // eax
  unsigned __int64 v1060; // rdx
  __int32 v1061; // edx
  int v1062; // r14d
  int v1063; // ebx
  int v1064; // edi
  CToastCenterExperienceManager *v1065; // rax
  int v1066; // edx
  int v1067; // ecx
  CToastCenterExperienceManager *v1068; // rax
  HMODULE *v1069; // rdi
  __int64 v1070; // rbx
  __int64 v1071; // rdx
  __int64 (__fastcall **v1072)(); // rax
  __int64 (__fastcall **v1073)(); // rcx
  __int128 v1074; // xmm1
  __int128 v1075; // xmm0
  __int128 v1076; // xmm1
  __int128 v1077; // xmm0
  __int128 v1078; // xmm1
  __int128 v1079; // xmm0
  __int128 v1080; // xmm1
  __int128 v1081; // xmm1
  __int128 v1082; // xmm0
  __int128 v1083; // xmm1
  __int128 v1084; // xmm0
  __int128 v1085; // xmm1
  __int128 v1086; // xmm0
  bool v1087; // zf
  SIZE_T v1088; // rcx
  __int64 v1089; // rax
  __int64 (__fastcall *v1090)(); // rdi
  __int64 v1091; // rax
  __int32 v1092; // r10d
  __int32 v1093; // r9d
  __int32 v1094; // r8d
  __int32 v1095; // edx
  int v1096; // ecx
  int v1097; // r11d
  __int64 v1098; // rdi
  int v1099; // esi
  unsigned __int16 *v1100; // rdx
  __int64 v1101; // rcx
  int v1102; // r8d
  SIZE_T v1103; // rax
  unsigned __int8 *v1104; // r9
  SIZE_T v1105; // r10
  int v1106; // r8d
  int v1107; // edi
  int v1108; // edx
  int v1109; // edi
  int v1110; // edx
  int v1111; // edi
  int v1112; // ecx
  void *v1113; // r14
  __int64 v1114; // rax
  CToastCenterExperienceManager *v1115; // rbx
  signed int v1116; // edi
  bool v1117; // sf
  SIZE_T v1118; // rcx
  __int64 v1119; // rax
  __int64 (__fastcall *v1120)(); // rdi
  __int64 v1121; // rax
  int v1122; // eax
  __int32 v1123; // r10d
  __int32 v1124; // r9d
  __int32 v1125; // r8d
  __int32 v1126; // edx
  int v1127; // r14d
  int v1128; // r11d
  SIZE_T v1129; // rdx
  unsigned __int16 *v1130; // rax
  unsigned __int8 *v1131; // r9
  __int64 v1132; // r10
  int v1133; // r8d
  int v1134; // r8d
  int v1135; // edi
  int v1136; // edx
  int v1137; // edi
  int v1138; // edx
  int v1139; // edi
  int v1140; // ecx
  CToastCenterExperienceManager *v1141; // r14
  size_t v1142; // rdi
  char v1143; // al
  unsigned __int32 v1144; // ebx
  __int32 v1145; // ecx
  int v1146; // edi
  int v1147; // r14d
  __int32 v1148; // edi
  __int32 v1149; // r14d
  __int64 v1150; // rax
  __int64 v1151; // rax
  __int32 v1152; // edi
  __int64 v1153; // rax
  signed int v1154; // edi
  bool v1155; // sf
  SIZE_T v1156; // rcx
  __int64 v1157; // rcx
  __int64 v1158; // rcx
  __int64 v1159; // rcx
  int v1160; // eax
  char *v1161; // rcx
  __int64 v1162; // rax
  __int64 (__fastcall *v1163)(); // rdi
  __int64 v1164; // rax
  int v1165; // eax
  __int64 v1166; // r11
  int v1167; // r9d
  int v1168; // r10d
  int v1169; // r8d
  int v1170; // ecx
  unsigned __int8 *v1171; // rdx
  int v1172; // eax
  int v1173; // r15d
  unsigned __int16 *v1174; // rax
  __int64 v1175; // rcx
  __int64 v1176; // rbx
  signed int v1177; // r11d
  signed __int64 v1178; // r10
  unsigned __int8 *v1179; // r9
  int v1180; // r8d
  int v1181; // r8d
  int v1182; // edi
  int v1183; // edx
  int v1184; // edi
  int v1185; // edx
  int v1186; // edi
  int v1187; // ecx
  void *v1188; // rdi
  __int64 v1189; // rax
  __int32 v1190; // r14d
  __int64 v1191; // rax
  signed int v1192; // edi
  bool v1193; // sf
  CToastCenterExperienceManager *v1194; // r14
  int v1195; // eax
  SIZE_T v1196; // rcx
  __int64 v1197; // rax
  __int64 (__fastcall *v1198)(); // rdi
  __int64 v1199; // rax
  int v1200; // eax
  int v1201; // r10d
  int v1202; // r8d
  __int32 v1203; // edx
  int v1204; // r9d
  int v1205; // ecx
  int v1206; // r11d
  __int64 v1207; // rdi
  int v1208; // edx
  const WCHAR *v1209; // r8
  char *v1210; // rax
  unsigned __int8 *v1211; // r9
  __int64 v1212; // r10
  int nn; // esi
  int v1214; // r8d
  int v1215; // edi
  int v1216; // edx
  int v1217; // edi
  int v1218; // edx
  __int64 v1219; // rbx
  HMODULE *v1220; // rdi
  __int64 v1221; // rdx
  __int64 (__fastcall **v1222)(); // rax
  __int64 (__fastcall **v1223)(); // rcx
  __int128 v1224; // xmm1
  __int128 v1225; // xmm0
  __int128 v1226; // xmm1
  __int128 v1227; // xmm0
  __int128 v1228; // xmm1
  __int128 v1229; // xmm0
  __int128 v1230; // xmm1
  __int128 v1231; // xmm1
  __int128 v1232; // xmm0
  __int128 v1233; // xmm1
  __int128 v1234; // xmm0
  __int128 v1235; // xmm1
  __int128 v1236; // xmm0
  const WCHAR *v1237; // rdx
  __int64 v1238; // rax
  WCHAR *v1239; // rbx
  char *v1240; // r14
  int v1241; // edi
  __int64 v1242; // rcx
  unsigned __int64 v1243; // rcx
  unsigned int v1244; // ecx
  unsigned int v1245; // eax
  const CHAR *v1246; // rdx
  __int64 v1247; // rax
  __int64 (__fastcall *v1248)(); // rcx
  HANDLE v1249; // rax
  __int64 v1250; // rbx
  __int64 v1251; // rdx
  __int64 (__fastcall **v1252)(); // rax
  __int64 (__fastcall **v1253)(); // rcx
  __int128 v1254; // xmm1
  __int128 v1255; // xmm0
  __int128 v1256; // xmm1
  __int128 v1257; // xmm0
  __int128 v1258; // xmm1
  __int128 v1259; // xmm0
  __int128 v1260; // xmm1
  __int128 v1261; // xmm1
  __int128 v1262; // xmm0
  __int128 v1263; // xmm1
  __int128 v1264; // xmm0
  __int128 v1265; // xmm1
  __int128 v1266; // xmm0
  void *v1267; // rcx
  int v1268; // eax
  WCHAR *v1269; // r9
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  HANDLE v1272; // rax
  HANDLE v1273; // rax
  __int64 v1274; // rcx
  int v1275; // eax
  void *v1276; // r9
  unsigned int *v1277; // rax
  unsigned int i3; // r8d
  unsigned int *v1279; // rdi
  unsigned int v1280; // ecx
  void *v1281; // r9
  unsigned int v1282; // r10d
  unsigned int v1283; // r11d
  int v1284; // eax
  int v1285; // eax
  HANDLE v1286; // rax
  void *v1287; // rcx
  HANDLE v1288; // rax
  void *v1289; // rcx
  _QWORD *v1290; // rax
  HANDLE v1291; // rax
  HANDLE v1292; // rax
  HANDLE v1293; // rax
  HANDLE v1294; // rax
  int v1295; // r15d
  unsigned int v1296; // r8d
  unsigned int v1297; // eax
  unsigned int v1298; // r12d
  char v1299; // dl
  int v1300; // esi
  _BYTE *v1301; // r14
  unsigned __int64 v1302; // r12
  int v1303; // edi
  unsigned __int8 *v1304; // rbx
  unsigned int v1305; // r11d
  int v1306; // r13d
  int v1307; // r8d
  unsigned int v1308; // eax
  int v1309; // r10d
  int v1310; // r9d
  int v1311; // ecx
  int v1312; // r10d
  int v1313; // eax
  int v1314; // r9d
  unsigned int v1315; // r11d
  int v1316; // eax
  unsigned int v1317; // r11d
  int v1318; // eax
  int v1319; // r11d
  unsigned int v1320; // eax
  int v1321; // r11d
  int v1322; // eax
  int v1323; // r11d
  unsigned int v1324; // eax
  int v1325; // r11d
  int v1326; // eax
  unsigned int v1327; // r11d
  int v1328; // eax
  int v1329; // r11d
  int v1330; // eax
  int v1331; // r11d
  unsigned int v1332; // edi
  int v1333; // r11d
  int v1334; // edi
  int v1335; // r11d
  unsigned int v1336; // edi
  int v1337; // ecx
  unsigned __int64 i4; // rcx
  HANDLE v1339; // rax
  void *v1340; // rsi
  HANDLE v1341; // rax
  void *v1342; // rsi
  HANDLE v1343; // rax
  void *v1344; // rsi
  HANDLE v1345; // rax
  HANDLE v1346; // rax
  HANDLE v1347; // rax
  HANDLE v1348; // rax
  void *v1349; // r15
  HANDLE v1350; // rax
  void *v1351; // r15
  HANDLE v1352; // rax
  void *v1353; // r15
  HANDLE v1354; // rax
  HANDLE v1355; // rax
  HANDLE v1356; // rax
  HANDLE v1357; // rax
  unsigned __int8 v1358; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1359; // [rsp+60h] [rbp-A0h]
  int v1360; // [rsp+64h] [rbp-9Ch]
  int v1361; // [rsp+64h] [rbp-9Ch]
  unsigned int v1362; // [rsp+64h] [rbp-9Ch]
  int v1363; // [rsp+64h] [rbp-9Ch]
  int v1364; // [rsp+64h] [rbp-9Ch]
  int v1365; // [rsp+64h] [rbp-9Ch]
  int v1366; // [rsp+64h] [rbp-9Ch]
  unsigned int v1367; // [rsp+64h] [rbp-9Ch]
  unsigned int v1368; // [rsp+64h] [rbp-9Ch]
  int v1369; // [rsp+64h] [rbp-9Ch]
  int m; // [rsp+64h] [rbp-9Ch]
  unsigned int v1371; // [rsp+64h] [rbp-9Ch]
  unsigned int v1372; // [rsp+64h] [rbp-9Ch]
  unsigned int v1373; // [rsp+64h] [rbp-9Ch]
  int v1374; // [rsp+64h] [rbp-9Ch]
  const void **v1375; // [rsp+68h] [rbp-98h]
  const void **v1376; // [rsp+68h] [rbp-98h]
  CToastCenterExperienceManager *v1377; // [rsp+68h] [rbp-98h]
  char *v1378; // [rsp+68h] [rbp-98h]
  void *v1379; // [rsp+68h] [rbp-98h]
  void *v1380; // [rsp+68h] [rbp-98h]
  void *v1381; // [rsp+68h] [rbp-98h]
  void *v1382; // [rsp+68h] [rbp-98h]
  void *v1383; // [rsp+68h] [rbp-98h]
  void *v1384; // [rsp+68h] [rbp-98h]
  void *v1385; // [rsp+68h] [rbp-98h]
  void *v1386; // [rsp+68h] [rbp-98h]
  void *v1387; // [rsp+68h] [rbp-98h]
  unsigned int *v1388; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v1389; // [rsp+68h] [rbp-98h]
  unsigned int *v1390; // [rsp+68h] [rbp-98h]
  LPVOID v1391; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1392; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1393; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1394; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1395; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1396; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1397; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1398; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1399; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1400; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1401; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1402; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1403; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1404; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1405; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1406; // [rsp+70h] [rbp-90h]
  LPVOID lpMem; // [rsp+78h] [rbp-88h]
  __int64 lpMema; // [rsp+78h] [rbp-88h]
  int lpMemb; // [rsp+78h] [rbp-88h]
  unsigned int lpMemc; // [rsp+78h] [rbp-88h]
  unsigned int lpMemd; // [rsp+78h] [rbp-88h]
  unsigned int lpMeme; // [rsp+78h] [rbp-88h]
  LPVOID lpMemf; // [rsp+78h] [rbp-88h]
  CToastCenterExperienceManager *lpMemg; // [rsp+78h] [rbp-88h]
  int lpMemh; // [rsp+78h] [rbp-88h]
  void *lpMemi; // [rsp+78h] [rbp-88h]
  LPVOID lpMemj; // [rsp+78h] [rbp-88h]
  int lpMemk; // [rsp+78h] [rbp-88h]
  int lpMeml; // [rsp+78h] [rbp-88h]
  int lpMemm; // [rsp+78h] [rbp-88h]
  int lpMemn; // [rsp+78h] [rbp-88h]
  unsigned int lpMemo; // [rsp+78h] [rbp-88h]
  int lpMemp; // [rsp+78h] [rbp-88h]
  unsigned int *v1424; // [rsp+80h] [rbp-80h]
  WCHAR *v1425; // [rsp+80h] [rbp-80h]
  SIZE_T v1426; // [rsp+80h] [rbp-80h]
  SIZE_T v1427; // [rsp+80h] [rbp-80h]
  SIZE_T v1428; // [rsp+80h] [rbp-80h]
  SIZE_T v1429; // [rsp+80h] [rbp-80h]
  unsigned int v1430; // [rsp+80h] [rbp-80h]
  SIZE_T v1431; // [rsp+80h] [rbp-80h]
  SIZE_T v1432; // [rsp+80h] [rbp-80h]
  SIZE_T v1433; // [rsp+80h] [rbp-80h]
  SIZE_T v1434; // [rsp+80h] [rbp-80h]
  SIZE_T v1435; // [rsp+80h] [rbp-80h]
  SIZE_T v1436; // [rsp+80h] [rbp-80h]
  SIZE_T v1437; // [rsp+80h] [rbp-80h]
  SIZE_T v1438; // [rsp+80h] [rbp-80h]
  SIZE_T v1439; // [rsp+80h] [rbp-80h]
  CToastCenterExperienceManager *v1440; // [rsp+80h] [rbp-80h]
  SIZE_T v1441; // [rsp+88h] [rbp-78h]
  SIZE_T v1442; // [rsp+88h] [rbp-78h]
  unsigned int v1443; // [rsp+88h] [rbp-78h]
  unsigned int v1444; // [rsp+88h] [rbp-78h]
  unsigned int v1445; // [rsp+88h] [rbp-78h]
  SIZE_T v1446; // [rsp+88h] [rbp-78h]
  SIZE_T v1447; // [rsp+88h] [rbp-78h]
  int v1448; // [rsp+88h] [rbp-78h]
  WCHAR *v1449; // [rsp+88h] [rbp-78h]
  SIZE_T v1450; // [rsp+88h] [rbp-78h]
  SIZE_T v1451; // [rsp+88h] [rbp-78h]
  int v1452; // [rsp+88h] [rbp-78h]
  int v1453; // [rsp+88h] [rbp-78h]
  int v1454; // [rsp+88h] [rbp-78h]
  int v1455; // [rsp+88h] [rbp-78h]
  int v1456; // [rsp+88h] [rbp-78h]
  int v1457; // [rsp+88h] [rbp-78h]
  unsigned int v1458; // [rsp+88h] [rbp-78h]
  char *Src; // [rsp+90h] [rbp-70h]
  int Srca; // [rsp+90h] [rbp-70h]
  unsigned int Srcb; // [rsp+90h] [rbp-70h]
  int Srcc; // [rsp+90h] [rbp-70h]
  unsigned int Srcd; // [rsp+90h] [rbp-70h]
  unsigned int Srce; // [rsp+90h] [rbp-70h]
  unsigned int Srcf; // [rsp+90h] [rbp-70h]
  unsigned int Srcg; // [rsp+90h] [rbp-70h]
  unsigned int Srch; // [rsp+90h] [rbp-70h]
  unsigned int Srci; // [rsp+90h] [rbp-70h]
  unsigned int Srcj; // [rsp+90h] [rbp-70h]
  unsigned int Srck; // [rsp+90h] [rbp-70h]
  int Srcl; // [rsp+90h] [rbp-70h]
  unsigned int Srcm; // [rsp+90h] [rbp-70h]
  unsigned int Srcn; // [rsp+90h] [rbp-70h]
  int Srco; // [rsp+90h] [rbp-70h]
  int Srcp; // [rsp+90h] [rbp-70h]
  int Srcq; // [rsp+90h] [rbp-70h]
  int Srcr; // [rsp+90h] [rbp-70h]
  unsigned int v1478; // [rsp+98h] [rbp-68h]
  unsigned int v1479; // [rsp+98h] [rbp-68h]
  unsigned int v1480; // [rsp+98h] [rbp-68h]
  int v1481; // [rsp+98h] [rbp-68h]
  SIZE_T v1482; // [rsp+98h] [rbp-68h]
  SIZE_T v1483; // [rsp+98h] [rbp-68h]
  LPVOID v1484; // [rsp+98h] [rbp-68h]
  char *v1485; // [rsp+98h] [rbp-68h]
  SIZE_T v1486; // [rsp+98h] [rbp-68h]
  SIZE_T v1487; // [rsp+98h] [rbp-68h]
  SIZE_T v1488; // [rsp+98h] [rbp-68h]
  int v1489; // [rsp+98h] [rbp-68h]
  int v1490; // [rsp+98h] [rbp-68h]
  int v1491; // [rsp+98h] [rbp-68h]
  SIZE_T v1492; // [rsp+98h] [rbp-68h]
  unsigned int v1493; // [rsp+98h] [rbp-68h]
  int v1494; // [rsp+A0h] [rbp-60h]
  unsigned int v1495; // [rsp+A0h] [rbp-60h]
  unsigned int v1496; // [rsp+A0h] [rbp-60h]
  unsigned int v1497; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1498; // [rsp+A0h] [rbp-60h]
  char j; // [rsp+A0h] [rbp-60h]
  int v1500; // [rsp+A0h] [rbp-60h]
  int v1501; // [rsp+A0h] [rbp-60h]
  int v1502; // [rsp+A0h] [rbp-60h]
  unsigned int v1503; // [rsp+A0h] [rbp-60h]
  int v1504; // [rsp+A0h] [rbp-60h]
  int v1505; // [rsp+A0h] [rbp-60h]
  int v1506; // [rsp+A0h] [rbp-60h]
  unsigned int v1507; // [rsp+A0h] [rbp-60h]
  int v1508; // [rsp+A0h] [rbp-60h]
  unsigned int *v1509; // [rsp+A8h] [rbp-58h]
  LPVOID v1510; // [rsp+A8h] [rbp-58h]
  LPVOID v1511; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v1512; // [rsp+A8h] [rbp-58h]
  char *v1513; // [rsp+A8h] [rbp-58h]
  int v1514; // [rsp+A8h] [rbp-58h]
  char *v1515; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v1516; // [rsp+A8h] [rbp-58h]
  LPVOID v1517; // [rsp+A8h] [rbp-58h]
  LPVOID v1518; // [rsp+A8h] [rbp-58h]
  void *v1519; // [rsp+A8h] [rbp-58h]
  void *v1520; // [rsp+A8h] [rbp-58h]
  void *v1521; // [rsp+A8h] [rbp-58h]
  WCHAR *lpModuleName; // [rsp+B0h] [rbp-50h]
  WCHAR *lpModuleNamea; // [rsp+B0h] [rbp-50h]
  WCHAR *lpModuleNameb; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpModuleNamec; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpModuleNamed; // [rsp+B0h] [rbp-50h]
  WCHAR *lpModuleNamee; // [rsp+B0h] [rbp-50h]
  WCHAR *lpModuleNamef; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpModuleNameg; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpModuleNameh; // [rsp+B0h] [rbp-50h]
  LPCWSTR lpModuleNamei; // [rsp+B0h] [rbp-50h]
  _QWORD *v1532; // [rsp+B8h] [rbp-48h]
  void *v1533; // [rsp+B8h] [rbp-48h]
  void *v1534; // [rsp+B8h] [rbp-48h]
  void *v1535; // [rsp+B8h] [rbp-48h]
  SIZE_T v1536; // [rsp+B8h] [rbp-48h]
  unsigned int v1537; // [rsp+B8h] [rbp-48h]
  void *v1538; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1539; // [rsp+B8h] [rbp-48h]
  void *v1540; // [rsp+B8h] [rbp-48h]
  void *v1541; // [rsp+B8h] [rbp-48h]
  void *v1542; // [rsp+B8h] [rbp-48h]
  int v1543; // [rsp+C0h] [rbp-40h]
  unsigned int v1544; // [rsp+C0h] [rbp-40h]
  unsigned int v1545; // [rsp+C0h] [rbp-40h]
  int v1546; // [rsp+C0h] [rbp-40h]
  int v1547; // [rsp+C0h] [rbp-40h]
  int v1548; // [rsp+C0h] [rbp-40h]
  void *v1549; // [rsp+C8h] [rbp-38h]
  char *v1550; // [rsp+C8h] [rbp-38h]
  size_t v1551; // [rsp+C8h] [rbp-38h]
  void *v1552; // [rsp+C8h] [rbp-38h]
  void *v1553; // [rsp+C8h] [rbp-38h]
  void *v1554; // [rsp+C8h] [rbp-38h]
  void *v1555; // [rsp+C8h] [rbp-38h]
  void *v1556; // [rsp+C8h] [rbp-38h]
  void *v1557; // [rsp+C8h] [rbp-38h]
  void *v1558; // [rsp+C8h] [rbp-38h]
  size_t v1559; // [rsp+C8h] [rbp-38h]
  size_t v1560; // [rsp+C8h] [rbp-38h]
  SIZE_T dwBytes; // [rsp+D0h] [rbp-30h]
  unsigned int dwBytesa; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesb; // [rsp+D0h] [rbp-30h]
  void *dwBytesc; // [rsp+D0h] [rbp-30h]
  char *dwBytesd; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytese; // [rsp+D0h] [rbp-30h]
  _DWORD *dwBytesf; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesg; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesh; // [rsp+D0h] [rbp-30h]
  CToastCenterExperienceManager *dwBytesi; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesj; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesk; // [rsp+D0h] [rbp-30h]
  SIZE_T dwBytesl; // [rsp+D0h] [rbp-30h]
  int v1574; // [rsp+D8h] [rbp-28h]
  int v1575; // [rsp+D8h] [rbp-28h]
  unsigned int v1576; // [rsp+D8h] [rbp-28h]
  unsigned int v1577; // [rsp+D8h] [rbp-28h]
  unsigned __int32 v1578; // [rsp+D8h] [rbp-28h]
  unsigned int v1579; // [rsp+E0h] [rbp-20h]
  int v1580; // [rsp+E0h] [rbp-20h]
  unsigned int v1581; // [rsp+E0h] [rbp-20h]
  unsigned int v1582; // [rsp+E0h] [rbp-20h]
  _DWORD *v1583; // [rsp+E0h] [rbp-20h]
  unsigned int v1584; // [rsp+E0h] [rbp-20h]
  int v1585; // [rsp+E0h] [rbp-20h]
  int v1586; // [rsp+E0h] [rbp-20h]
  __int64 v1587; // [rsp+E0h] [rbp-20h]
  char *v1588; // [rsp+E8h] [rbp-18h]
  char *v1589; // [rsp+E8h] [rbp-18h]
  unsigned int v1590; // [rsp+E8h] [rbp-18h]
  int v1591; // [rsp+E8h] [rbp-18h]
  unsigned int v1592; // [rsp+E8h] [rbp-18h]
  char k; // [rsp+E8h] [rbp-18h]
  int v1594; // [rsp+E8h] [rbp-18h]
  const void *v1595; // [rsp+E8h] [rbp-18h]
  unsigned int v1596; // [rsp+E8h] [rbp-18h]
  int v1597; // [rsp+E8h] [rbp-18h]
  int v1598; // [rsp+E8h] [rbp-18h]
  int v1599; // [rsp+E8h] [rbp-18h]
  signed int v1600; // [rsp+E8h] [rbp-18h]
  _BYTE *Size; // [rsp+F0h] [rbp-10h]
  unsigned int Sizea; // [rsp+F0h] [rbp-10h]
  SIZE_T Sizeb; // [rsp+F0h] [rbp-10h]
  unsigned int Sizec; // [rsp+F0h] [rbp-10h]
  SIZE_T Sized; // [rsp+F0h] [rbp-10h]
  SIZE_T Sizee; // [rsp+F0h] [rbp-10h]
  SIZE_T Sizef; // [rsp+F0h] [rbp-10h]
  SIZE_T Sizeg; // [rsp+F0h] [rbp-10h]
  __int32 Sizeh; // [rsp+F0h] [rbp-10h]
  SIZE_T Sizei; // [rsp+F0h] [rbp-10h]
  int Sizej; // [rsp+F0h] [rbp-10h]
  SIZE_T v1612; // [rsp+F8h] [rbp-8h]
  int v1613; // [rsp+F8h] [rbp-8h]
  SIZE_T v1614; // [rsp+F8h] [rbp-8h]
  SIZE_T v1615; // [rsp+F8h] [rbp-8h]
  SIZE_T v1616; // [rsp+F8h] [rbp-8h]
  unsigned int *v1617; // [rsp+F8h] [rbp-8h]
  char *v1618; // [rsp+F8h] [rbp-8h]
  SIZE_T v1619; // [rsp+F8h] [rbp-8h]
  SIZE_T v1620; // [rsp+F8h] [rbp-8h]
  unsigned int v1621; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v1622; // [rsp+100h] [rbp+0h]
  int v1623; // [rsp+100h] [rbp+0h]
  int v1624; // [rsp+100h] [rbp+0h]
  unsigned int v1625; // [rsp+100h] [rbp+0h]
  void *v1626; // [rsp+100h] [rbp+0h]
  void *v1627; // [rsp+100h] [rbp+0h]
  unsigned __int8 *v1628; // [rsp+100h] [rbp+0h]
  char *v1629; // [rsp+100h] [rbp+0h]
  __int32 v1630; // [rsp+100h] [rbp+0h]
  unsigned int v1631; // [rsp+100h] [rbp+0h]
  const void **v1632; // [rsp+108h] [rbp+8h]
  SIZE_T v1633; // [rsp+108h] [rbp+8h]
  char *v1634; // [rsp+108h] [rbp+8h]
  SIZE_T v1635; // [rsp+108h] [rbp+8h]
  SIZE_T v1636; // [rsp+108h] [rbp+8h]
  int v1637; // [rsp+110h] [rbp+10h]
  int v1638; // [rsp+110h] [rbp+10h]
  int v1639; // [rsp+110h] [rbp+10h]
  int *v1640; // [rsp+110h] [rbp+10h]
  unsigned int v1641; // [rsp+110h] [rbp+10h]
  int v1642; // [rsp+110h] [rbp+10h]
  const void **v1643; // [rsp+118h] [rbp+18h]
  const void **v1644; // [rsp+118h] [rbp+18h]
  LPVOID v1645; // [rsp+118h] [rbp+18h]
  CToastCenterExperienceManager *v1646; // [rsp+118h] [rbp+18h]
  char *v1647; // [rsp+118h] [rbp+18h]
  char *v1648; // [rsp+118h] [rbp+18h]
  int v1649; // [rsp+120h] [rbp+20h]
  int v1650; // [rsp+120h] [rbp+20h]
  __int32 v1651; // [rsp+120h] [rbp+20h]
  int v1652; // [rsp+128h] [rbp+28h]
  void *v1653; // [rsp+128h] [rbp+28h]
  unsigned int *v1654; // [rsp+128h] [rbp+28h]
  _QWORD *v1655; // [rsp+128h] [rbp+28h]
  void *v1656; // [rsp+128h] [rbp+28h]
  _BYTE *v1657; // [rsp+128h] [rbp+28h]
  __int32 v1658; // [rsp+128h] [rbp+28h]
  int v1659; // [rsp+128h] [rbp+28h]
  int v1660; // [rsp+130h] [rbp+30h]
  unsigned int v1661; // [rsp+130h] [rbp+30h]
  char v1662; // [rsp+130h] [rbp+30h]
  unsigned int *v1663; // [rsp+130h] [rbp+30h]
  _QWORD *v1664; // [rsp+130h] [rbp+30h]
  unsigned int v1665; // [rsp+130h] [rbp+30h]
  int v1666; // [rsp+138h] [rbp+38h]
  char v1667; // [rsp+13Ch] [rbp+3Ch]
  int v1668; // [rsp+140h] [rbp+40h]
  int v1669; // [rsp+140h] [rbp+40h]
  unsigned int v1670; // [rsp+140h] [rbp+40h]
  unsigned int *v1671; // [rsp+140h] [rbp+40h]
  int v1672; // [rsp+148h] [rbp+48h]
  int v1673; // [rsp+14Ch] [rbp+4Ch]
  unsigned int v1674; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1675; // [rsp+154h] [rbp+54h] BYREF
  int v1676; // [rsp+158h] [rbp+58h] BYREF
  int v1677; // [rsp+15Ch] [rbp+5Ch]
  int v1678; // [rsp+160h] [rbp+60h] BYREF
  int v1679; // [rsp+164h] [rbp+64h] BYREF
  int v1680; // [rsp+168h] [rbp+68h] BYREF
  int v1681; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1682; // [rsp+170h] [rbp+70h] BYREF
  int v1683; // [rsp+174h] [rbp+74h] BYREF
  int v1684; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1685; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1686; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1687; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1688; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1689; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1690; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1691; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1692; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1693; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1694; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1695; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1696; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1697; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1698; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1699; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1700; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1701; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1702; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1703; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1704; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1705; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1706; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1707; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1708; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1709; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1710; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1711; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1712; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1713; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1714; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1715; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1716; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1717; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1718; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1719; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1720; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1721; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1722; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1723; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1724; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1725; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1726; // [rsp+230h] [rbp+130h]
  unsigned int v1727; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1728; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1729; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1730; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1731; // [rsp+244h] [rbp+144h] BYREF
  _DWORD *v1732; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1733; // [rsp+250h] [rbp+150h] BYREF
  size_t v1734; // [rsp+258h] [rbp+158h] BYREF
  CortanaAvailability *v1735; // [rsp+260h] [rbp+160h]
  void *v1736; // [rsp+268h] [rbp+168h]
  size_t pcchLength[2]; // [rsp+270h] [rbp+170h] BYREF
  size_t v1738; // [rsp+280h] [rbp+180h] BYREF
  size_t v1739; // [rsp+288h] [rbp+188h] BYREF
  HMODULE hModule; // [rsp+290h] [rbp+190h] BYREF
  size_t v1741; // [rsp+298h] [rbp+198h] BYREF
  size_t v1742[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  void *v1743; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v1744; // [rsp+2B8h] [rbp+1B8h] BYREF
  void *v1745; // [rsp+2C0h] [rbp+1C0h] BYREF
  HMODULE phModule; // [rsp+2C8h] [rbp+1C8h] BYREF
  void *v1747; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1748; // [rsp+2D8h] [rbp+1D8h] BYREF
  unsigned __int64 v1749; // [rsp+2E0h] [rbp+1E0h] BYREF
  _DWORD *v1750; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1751; // [rsp+2F0h] [rbp+1F0h] BYREF
  LPVOID v1752; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned int *v1753; // [rsp+300h] [rbp+200h] BYREF
  unsigned int *v1754; // [rsp+308h] [rbp+208h] BYREF
  __int64 v1755; // [rsp+310h] [rbp+210h] BYREF
  void **v1756; // [rsp+318h] [rbp+218h] BYREF
  _DWORD *v1757; // [rsp+320h] [rbp+220h] BYREF
  const void **v1758; // [rsp+328h] [rbp+228h] BYREF
  __int64 v1759; // [rsp+330h] [rbp+230h]
  _OWORD *v1760; // [rsp+338h] [rbp+238h] BYREF
  __int64 v1761; // [rsp+340h] [rbp+240h] BYREF
  void *v1762[4]; // [rsp+348h] [rbp+248h] BYREF
  __int64 v1763; // [rsp+368h] [rbp+268h]
  __int64 v1764; // [rsp+370h] [rbp+270h] BYREF
  __int64 v1765; // [rsp+378h] [rbp+278h] BYREF
  __int64 v1766; // [rsp+380h] [rbp+280h] BYREF
  size_t v1767; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1768; // [rsp+390h] [rbp+290h] BYREF
  size_t v1769; // [rsp+398h] [rbp+298h] BYREF
  size_t v1770; // [rsp+3A0h] [rbp+2A0h] BYREF
  _QWORD v1771[2]; // [rsp+3A8h] [rbp+2A8h] BYREF
  size_t v1772; // [rsp+3B8h] [rbp+2B8h] BYREF
  size_t v1773; // [rsp+3C0h] [rbp+2C0h] BYREF
  size_t v1774; // [rsp+3C8h] [rbp+2C8h] BYREF
  void *v1775; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned __int64 v1776; // [rsp+3D8h] [rbp+2D8h] BYREF
  void *v1777[2]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _QWORD v1778[2]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v1779[2]; // [rsp+408h] [rbp+308h] BYREF
  void *v1780[2]; // [rsp+418h] [rbp+318h] BYREF
  void *v1781[2]; // [rsp+428h] [rbp+328h] BYREF
  _QWORD *v1782; // [rsp+438h] [rbp+338h] BYREF
  size_t v1783[2]; // [rsp+440h] [rbp+340h] BYREF
  LPVOID v1784[2]; // [rsp+450h] [rbp+350h]
  size_t v1785[2]; // [rsp+460h] [rbp+360h] BYREF
  __int64 v1786; // [rsp+470h] [rbp+370h]
  void *v1787[2]; // [rsp+478h] [rbp+378h] BYREF
  void *v1788[2]; // [rsp+488h] [rbp+388h] BYREF
  _QWORD v1789[2]; // [rsp+498h] [rbp+398h] BYREF
  _QWORD v1790[2]; // [rsp+4A8h] [rbp+3A8h] BYREF
  _QWORD v1791[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned int *v1792; // [rsp+4C8h] [rbp+3C8h] BYREF
  LPVOID v1793[2]; // [rsp+4D0h] [rbp+3D0h]
  __int128 v1794; // [rsp+4E0h] [rbp+3E0h]
  __int128 v1795; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int128 v1796; // [rsp+500h] [rbp+400h] BYREF
  __int128 v1797; // [rsp+510h] [rbp+410h]
  __int128 v1798; // [rsp+520h] [rbp+420h] BYREF
  __int128 v1799; // [rsp+530h] [rbp+430h]
  int v1800; // [rsp+540h] [rbp+440h] BYREF
  char v1801[20]; // [rsp+544h] [rbp+444h] BYREF
  char *v1802; // [rsp+558h] [rbp+458h]
  int v1803; // [rsp+5B0h] [rbp+4B0h] BYREF
  _DWORD v1804[3]; // [rsp+5B4h] [rbp+4B4h] BYREF
  __int16 v1805; // [rsp+5C2h] [rbp+4C2h]
  __int64 v1806; // [rsp+5C8h] [rbp+4C8h]
  int v1807; // [rsp+620h] [rbp+520h] BYREF
  _DWORD v1808[5]; // [rsp+624h] [rbp+524h] BYREF
  SIZE_T v1809; // [rsp+638h] [rbp+538h]
  int v1810; // [rsp+690h] [rbp+590h] BYREF
  char v1811[20]; // [rsp+694h] [rbp+594h] BYREF
  SIZE_T v1812; // [rsp+6A8h] [rbp+5A8h]
  int v1813; // [rsp+700h] [rbp+600h] BYREF
  _DWORD v1814[5]; // [rsp+704h] [rbp+604h] BYREF
  unsigned __int16 *v1815; // [rsp+718h] [rbp+618h]
  int v1816; // [rsp+770h] [rbp+670h] BYREF
  char v1817[20]; // [rsp+774h] [rbp+674h] BYREF
  SIZE_T v1818; // [rsp+788h] [rbp+688h]
  int v1819; // [rsp+7E0h] [rbp+6E0h] BYREF
  _DWORD v1820[5]; // [rsp+7E4h] [rbp+6E4h] BYREF
  SIZE_T v1821; // [rsp+7F8h] [rbp+6F8h]
  int v1822; // [rsp+850h] [rbp+750h] BYREF
  _DWORD v1823[5]; // [rsp+854h] [rbp+754h] BYREF
  char *v1824; // [rsp+868h] [rbp+768h]
  int v1825; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v1826[20]; // [rsp+8C4h] [rbp+7C4h] BYREF
  SIZE_T v1827; // [rsp+8D8h] [rbp+7D8h]
  int v1828; // [rsp+930h] [rbp+830h] BYREF
  int v1829; // [rsp+934h] [rbp+834h]
  void *v1830; // [rsp+938h] [rbp+838h]
  void *v1831; // [rsp+940h] [rbp+840h]
  void *v1832; // [rsp+948h] [rbp+848h]
  SIZE_T v1833; // [rsp+950h] [rbp+850h]
  void *v1834; // [rsp+958h] [rbp+858h]
  __int64 v1835; // [rsp+960h] [rbp+860h]
  int v1836; // [rsp+968h] [rbp+868h]
  __m128i v1837; // [rsp+96Ch] [rbp+86Ch] BYREF
  __m128i v1838; // [rsp+97Ch] [rbp+87Ch] BYREF
  unsigned int v1839; // [rsp+98Ch] [rbp+88Ch] BYREF
  unsigned int v1840; // [rsp+990h] [rbp+890h]
  unsigned __int32 v1841; // [rsp+994h] [rbp+894h]
  unsigned int v1842; // [rsp+998h] [rbp+898h]
  __int64 v1843; // [rsp+9A0h] [rbp+8A0h]
  unsigned __int64 v1844; // [rsp+9A8h] [rbp+8A8h]
  __int64 v1845; // [rsp+9B0h] [rbp+8B0h]
  unsigned __int64 v1846; // [rsp+9B8h] [rbp+8B8h]
  __int128 v1847; // [rsp+9C0h] [rbp+8C0h] BYREF
  __int128 v1848; // [rsp+9D0h] [rbp+8D0h] BYREF
  __int128 v1849; // [rsp+9E0h] [rbp+8E0h]
  __int128 v1850; // [rsp+9F0h] [rbp+8F0h] BYREF
  __int128 v1851; // [rsp+A00h] [rbp+900h] BYREF
  __int64 v1852; // [rsp+A10h] [rbp+910h] BYREF
  unsigned __int32 v1853; // [rsp+A18h] [rbp+918h]
  __int32 v1854; // [rsp+A1Ch] [rbp+91Ch]
  _OWORD v1855[2]; // [rsp+A20h] [rbp+920h] BYREF
  __int128 v1856; // [rsp+A40h] [rbp+940h] BYREF
  __int128 v1857; // [rsp+A50h] [rbp+950h] BYREF
  __int64 v1858; // [rsp+A60h] [rbp+960h]
  __int128 v1859; // [rsp+A68h] [rbp+968h] BYREF
  __int128 v1860; // [rsp+A78h] [rbp+978h] BYREF
  __int64 v1861; // [rsp+A88h] [rbp+988h]
  _DWORD v1862[12]; // [rsp+A90h] [rbp+990h] BYREF
  __int128 v1863; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1864; // [rsp+AD0h] [rbp+9D0h]
  __int64 v1865; // [rsp+AE0h] [rbp+9E0h]
  int v1866; // [rsp+AE8h] [rbp+9E8h]
  __int128 v1867; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int128 v1868; // [rsp+B00h] [rbp+A00h]
  __int64 v1869; // [rsp+B10h] [rbp+A10h]
  int v1870; // [rsp+B18h] [rbp+A18h]
  __int128 v1871; // [rsp+B20h] [rbp+A20h] BYREF
  __int128 v1872; // [rsp+B30h] [rbp+A30h]
  __int64 v1873; // [rsp+B40h] [rbp+A40h]
  int v1874; // [rsp+B48h] [rbp+A48h]
  __int128 v1875; // [rsp+B50h] [rbp+A50h] BYREF
  __int128 v1876; // [rsp+B60h] [rbp+A60h]
  __int64 v1877; // [rsp+B70h] [rbp+A70h]
  int v1878; // [rsp+B78h] [rbp+A78h]
  _DWORD v1879[6]; // [rsp+B80h] [rbp+A80h] BYREF
  char v1880; // [rsp+B9Ah] [rbp+A9Ah]
  unsigned __int16 v1881[34]; // [rsp+B9Ch] [rbp+A9Ch] BYREF
  _DWORD v1882[6]; // [rsp+BE0h] [rbp+AE0h] BYREF
  char v1883; // [rsp+BFAh] [rbp+AFAh]
  unsigned __int16 v1884[34]; // [rsp+BFCh] [rbp+AFCh] BYREF
  _DWORD v1885[6]; // [rsp+C40h] [rbp+B40h] BYREF
  char v1886; // [rsp+C5Ah] [rbp+B5Ah]
  unsigned __int16 v1887[34]; // [rsp+C5Ch] [rbp+B5Ch] BYREF
  _BYTE v1888[68]; // [rsp+CA0h] [rbp+BA0h] BYREF
  __int16 v1889; // [rsp+CE4h] [rbp+BE4h]
  unsigned __int16 v1890; // [rsp+D46h] [rbp+C46h]
  __int64 v1891; // [rsp+D4Ch] [rbp+C4Ch]
  _OWORD v1892[3]; // [rsp+D80h] [rbp+C80h] BYREF
  int v1893; // [rsp+DB0h] [rbp+CB0h] BYREF
  __int128 v1894; // [rsp+DB8h] [rbp+CB8h]
  __int128 v1895; // [rsp+DC8h] [rbp+CC8h]
  __int128 v1896; // [rsp+DD8h] [rbp+CD8h]
  __int64 v1897; // [rsp+DE8h] [rbp+CE8h]
  __int64 v1898; // [rsp+DF0h] [rbp+CF0h] BYREF
  char v1899[152]; // [rsp+DF8h] [rbp+CF8h] BYREF
  _QWORD v1900[2]; // [rsp+E90h] [rbp+D90h]
  _BYTE v1901[176]; // [rsp+EA0h] [rbp+DA0h] BYREF
  WCHAR Filename[264]; // [rsp+F50h] [rbp+E50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1198h] [rbp+1098h]

  v1735 = this;
  v2 = 0LL;
  v1900[0] = 0LL;
  v1672 = 0;
  v3 = 1;
  v1673 = 0;
  v1574 = 0;
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v4 = dword_1808CCC34;
  v1666 = -1;
  if ( dword_1808CCC34 )
    goto LABEL_35;
  v1543 = 0;
  v5 = MemoryAlloc(0x338uLL);
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 + 7;
  v7 = 0;
  v8 = (unsigned __int8 *)&unk_18077F812;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v12 = 103LL;
  do
  {
    v13 = *(v8 - 1) | (*(v8 - 2) << 8);
    v14 = v8[2] << 8;
    v15 = *v8;
    v8 += 8;
    v16 = *(v8 - 7) | ((v15 | (v13 << 8)) << 8);
    v17 = v16 ^ v11;
    v18 = *(v8 - 3) | ((*(v8 - 4) | ((*(v8 - 5) | v14) << 8)) << 8);
    v19 = v17 ^ v18 ^ v10 ^ 0xAC987321;
    v20 = (__ROR4__(v19, 22) + 4991 * __ROR4__(v19 + 1419157410, 27)) ^ v17;
    v21 = (43881 * __ROR4__(v20 + 133239679, 9) - __ROR4__(v20, 30)) ^ v19;
    v22 = (24670 * v21 - (v21 >> 13) - 123127970) ^ v20;
    v23 = (2033 * __ROR4__(v22 ^ 0xAB69, 26) - __ROR4__(v22, 30)) ^ v21;
    v24 = (133239679 - (v23 ^ 0xAB69605E)) ^ v22;
    v25 = (43881 * (v24 ^ 0x137F)) ^ __ROR4__(v24, 6) ^ v23;
    v26 = (__ROR4__(v25, 30) + 24670 * __ROR4__(v25 + 133239679, 15)) ^ v24;
    v27 = (2033 * __ROR4__(v26 + 1419157410, 14) - __ROR4__(v26, 24)) ^ v25;
    v28 = __ROR4__(v27, 10) ^ (4991 * __ROR4__(v27 ^ 0xAB69605E, 12)) ^ v26;
    v29 = v27 ^ (v28 >> 10) ^ (43881 * (v28 ^ 0x7F1));
    v30 = (2033 * (__ROR4__(~v29, 5) + 24670)) ^ v28;
    v31 = v29 ^ (v30 - 2033) ^ 0xAB69605E;
    v32 = ((v31 >> 2) + 4991 * __ROR4__(v29 ^ (v30 - 2033) ^ 0xAB6967AF, 30)) ^ v30;
    v33 = (__ROR4__(v32, 25) + 43881 * __ROR4__(v32 - 133239679, 6)) ^ v31;
    v34 = (24670 * (v33 ^ 0x137F) + __ROR4__(v33, 9)) ^ v32;
    v35 = (__ROR4__(v34, 25) + 2033 * __ROR4__(v34 ^ 0xAB69, 27)) ^ v33;
    v36 = v35 ^ v34 ^ 0xAC987321;
    v37 = (4991 * __ROR4__(v36, 3) - 219010071) ^ v35;
    v38 = (24670 * __ROR4__(v37 - 133239679, 1) - __ROR4__(v37, 6)) ^ v36;
    v39 = (__ROR4__(v38, 18) + 2033 * __ROR4__(v38 - 1419157410, 29)) ^ v37;
    v40 = (4991 * __ROR4__(v39 - 1419157410, 17) - __ROR4__(v39, 14)) ^ v38;
    v41 = (v40 >> 3) ^ (43881 * (v40 ^ 0x605E)) ^ v39;
    v42 = 24670 * __ROR4__(v41 ^ 0x7F1137F, 28);
    v43 = __ROR4__(v41, 30);
    v10 = v9 ^ v41;
    v9 = v18;
    v11 = v7 ^ v40 ^ v43 ^ v42;
    *(v6 - 4) = v11;
    *v6 = v10;
    v6 += 8;
    *(v6 - 13) = BYTE1(v11);
    *(v6 - 9) = BYTE1(v10);
    *(v6 - 14) = (unsigned __int16)(v11 >> 8) >> 8;
    *(v6 - 10) = (unsigned __int16)(v10 >> 8) >> 8;
    *(v6 - 15) = __ROR4__((((v11 >> 8) | (v11 << 24)) >> 8) | (((v11 >> 8) | (v11 << 24)) << 24), 8);
    v7 = v16;
    *(v6 - 11) = __ROR4__((((v10 >> 8) | (v10 << 24)) >> 8) | (((v10 >> 8) | (v10 << 24)) << 24), 8);
    --v12;
  }
  while ( v12 );
  v44 = 0;
  v45 = 0LL;
  v2 = 0LL;
  v46 = 0;
  do
    v44 ^= v5[v45++];
  while ( v45 < 0x338 );
  if ( v44 == 64LL )
  {
    v5[823] = 0;
    memset_0(&unk_1808C93A0, 0, 0x60uLL);
    lpMemi = v5;
    v94 = 0;
    while ( *v5 )
    {
      v95 = -1LL;
      v96 = (const WCHAR *)v5;
      v72 = 0;
      do
        ++v95;
      while ( *(_WORD *)&v5[2 * v95] );
      v65 = &v5[2 * v95];
      v66 = (char *)&unk_1808C93A0 + 24 * v94;
      if ( !GetModuleHandleExW(0, v96, (HMODULE *)v66) )
      {
        v46 = -1073741702;
        break;
      }
      v46 = 0;
      if ( **(_WORD **)v66 == 23117
        && (v67 = *(int *)(*(_QWORD *)v66 + 60LL), (unsigned int)v67 < 0x10000000)
        && (v68 = *(_QWORD *)v66 + v67, v68 >= *(_QWORD *)v66)
        && *(_DWORD *)v68 == 17744 )
      {
        if ( ((*(_WORD *)(v68 + 24) - 267) & 0xFEFF) != 0 )
        {
          v46 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v66 + 12) = *(_QWORD *)(v68 + 136);
          *((_DWORD *)v66 + 2) = *(_DWORD *)(v68 + 80);
        }
      }
      else
      {
        v46 = -1073741701;
      }
      v69 = *(_DWORD *)(v65 + 2);
      v5 = v65 + 6;
      v1579 = v69;
      while ( v72 < v69 )
      {
        v70 = v5;
        v71 = -1LL;
        do
          ++v71;
        while ( v5[v71] );
        v5 += v71 + 1;
        if ( v46 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v66, v70);
          if ( !ProcAddress )
            goto LABEL_33;
          off_1808C0340[v1543] = ProcAddress;
        }
        ++v1543;
        v69 = v1579;
        ++v72;
      }
      ++v94;
    }
LABEL_33:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMemi);
    if ( v46 < 0 )
      goto LABEL_11;
    v4 = dword_1808CCC34;
LABEL_35:
    dword_1808CCC34 = v4 + 1;
    goto LABEL_36;
  }
  MemoryFree(v5);
LABEL_11:
  v47 = 4LL;
  v48 = (HMODULE *)&unk_1808C93A0;
  do
  {
    if ( *v48 )
      FreeLibrary(*v48);
    v48 += 3;
    --v47;
  }
  while ( v47 );
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  v49 = 2LL;
  v50 = off_1808C0340;
  v51 = off_1807174F0;
  do
  {
    v52 = *((_OWORD *)v51 + 1);
    *(_OWORD *)v50 = *(_OWORD *)v51;
    v53 = *((_OWORD *)v51 + 2);
    *((_OWORD *)v50 + 1) = v52;
    v54 = *((_OWORD *)v51 + 3);
    *((_OWORD *)v50 + 2) = v53;
    v55 = *((_OWORD *)v51 + 4);
    *((_OWORD *)v50 + 3) = v54;
    v56 = *((_OWORD *)v51 + 5);
    *((_OWORD *)v50 + 4) = v55;
    v57 = *((_OWORD *)v51 + 6);
    *((_OWORD *)v50 + 5) = v56;
    v58 = *((_OWORD *)v51 + 7);
    v51 += 16;
    *((_OWORD *)v50 + 6) = v57;
    v50 += 16;
    *((_OWORD *)v50 - 1) = v58;
    --v49;
  }
  while ( v49 );
  v59 = *((_OWORD *)v51 + 1);
  *(_OWORD *)v50 = *(_OWORD *)v51;
  v60 = *((_OWORD *)v51 + 2);
  *((_OWORD *)v50 + 1) = v59;
  v61 = *((_OWORD *)v51 + 3);
  *((_OWORD *)v50 + 2) = v60;
  v62 = *((_OWORD *)v51 + 4);
  *((_OWORD *)v50 + 3) = v61;
  v63 = *((_OWORD *)v51 + 5);
  *((_OWORD *)v50 + 4) = v62;
  v64 = *((_OWORD *)v51 + 6);
  *((_OWORD *)v50 + 5) = v63;
  *((_OWORD *)v50 + 6) = v64;
LABEL_36:
  _InterlockedExchange(&dword_1808CCC40, 0);
  v75 = 0LL;
  v76 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
  {
LABEL_114:
    v91 = 0;
    goto LABEL_71;
  }
  v78 = off_1808C0450[0]();
  if ( !v78 )
  {
    GetLastError();
    goto LABEL_58;
  }
  v1674 = 0;
  v79 = 0LL;
  for ( i = 0LL;
        !((unsigned int (__fastcall *)(__int64, __int64, void *, __int64, unsigned int *))off_1808C0470[0])(
           v78,
           2LL,
           v79,
           i,
           &v1674);
        i = v1674 )
  {
    if ( GetLastError() != 122 )
    {
      if ( !v79 )
        goto LABEL_58;
LABEL_46:
      MemoryFree(v79);
      goto LABEL_58;
    }
    if ( v79 )
      goto LABEL_46;
    v79 = MemoryAlloc(v1674);
    if ( !v79 )
      goto LABEL_58;
  }
  v75 = (wchar_t *)v79;
  v81 = off_1808C0468[0];
  CurrentThreadId = GetCurrentThreadId();
  v83 = ((__int64 (__fastcall *)(_QWORD))v81)(CurrentThreadId);
  lpMem = (LPVOID)v83;
  if ( !v83 )
  {
    LastError = GetLastError();
    v511 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v511 = LastError < 0;
    }
    if ( !v511 )
      LastError = -2147467259;
    goto LABEL_55;
  }
  v1675 = 0;
  v84 = 0LL;
  v85 = 0LL;
  while ( 1 )
  {
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808C0470[0])(
           v83,
           2LL,
           v84,
           v85,
           &v1675) )
    {
      v76 = v84;
      LastError = 0;
      if ( v75 )
      {
        if ( wcscmp_0(v75, L"WinSta0") )
          goto LABEL_114;
        v91 = 0;
        if ( v84 )
        {
          if ( wcscmp_0(v84, L"Default") )
          {
LABEL_70:
            v91 = 0;
            goto LABEL_71;
          }
          v1676 = 0;
          CurrentProcess = GetCurrentProcess();
          if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1676) )
          {
            LastError = GetLastError();
            v93 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v93 = LastError < 0;
            }
            if ( !v93 )
              LastError = -2147467259;
LABEL_72:
            MemoryFree(v76);
            goto LABEL_55;
          }
          if ( (v1676 & 0xF) != 0 )
            goto LABEL_70;
          v91 = 1;
        }
      }
      else
      {
        v91 = 0;
      }
LABEL_71:
      v1574 = v91;
      if ( !v76 )
        goto LABEL_55;
      goto LABEL_72;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( v84 )
    {
      LastError = -2147467259;
LABEL_64:
      MemoryFree(v84);
      goto LABEL_55;
    }
    v84 = (wchar_t *)MemoryAlloc(v1675);
    if ( !v84 )
    {
      LastError = -2147024882;
      goto LABEL_55;
    }
    v85 = v1675;
    v83 = (__int64)lpMem;
  }
  if ( LastError )
  {
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
  }
  else
  {
    LastError = -2147467259;
  }
  if ( v84 )
    goto LABEL_64;
LABEL_55:
  if ( v75 )
    MemoryFree(v75);
  if ( LastError < 0 )
LABEL_58:
    v1574 = 0;
  v86 = 4LL;
  v1736 = LocalAlloc(0x40u, 4uLL);
  if ( !v1736 )
  {
    v87 = 0LL;
    v88 = -2147024882;
    v89 = 0;
LABEL_61:
    LODWORD(v90) = 0;
    goto LABEL_90;
  }
  v117 = 0LL;
  v1677 = 0;
  *(_OWORD *)v1783 = 0LL;
  *(_OWORD *)v1784 = 0LL;
  v118 = GetProcessHeap();
  v119 = HeapAlloc(v118, 8u, 0xA0uLL);
  v1667 = 56;
  v120 = v119;
  lpMema = 3LL;
  v88 = -1073741801;
  if ( !v119 )
  {
    v1668 = -1073741801;
    v120 = 0LL;
    goto LABEL_118;
  }
  *v119 = xmmword_1808C7510[0];
  v119[1] = xmmword_1808C7510[1];
  v119[2] = xmmword_1808C7510[2];
  v119[3] = xmmword_1808C7510[3];
  v119[4] = xmmword_1808C7510[4];
  v119[5] = xmmword_1808C7510[5];
  v119[6] = xmmword_1808C7510[6];
  v119[7] = xmmword_1808C7510[7];
  v119[8] = xmmword_1808C7510[8];
  v119[9] = xmmword_1808C7510[9];
  v121 = GetProcessHeap();
  v117 = HeapAlloc(v121, 8u, 8uLL);
  if ( !v117 )
  {
    v1668 = -1073741801;
    v117 = 0LL;
    goto LABEL_118;
  }
  *v117 = qword_1808C7468;
  v1441 = __rdtsc();
  v1678 = 0;
  v88 = RtlUIntAdd(4LL, 4LL, &v1678);
  v1668 = v88;
  if ( v88 < 0 )
    goto LABEL_118;
  v1679 = 0;
  v88 = RtlUIntAdd(v128, 160LL, &v1679);
  v1668 = v88;
  if ( v88 < 0 )
    goto LABEL_118;
  v132 = -1;
  v133 = v130 + v1679;
  if ( v130 + v1679 >= v130 )
    v132 = v130 + v1679;
  v88 = v133 < v130 ? -805306219 : 0x10000000;
  v1668 = v88;
  if ( v133 >= v130 )
  {
    v1680 = 0;
    v88 = RtlUIntAdd(v131, v129, &v1680);
    v1668 = v88;
    if ( v88 < 0 )
      goto LABEL_118;
    v88 = v132 + v1680 < v132 ? -805306219 : 0x10000000;
    v1668 = v88;
    if ( v132 + v1680 >= v132 )
    {
      v1681 = 0;
      v1668 = RtlUIntAdd(v134, 8LL, &v1681);
      v88 = v1668;
      if ( v1668 < 0 )
        goto LABEL_118;
      v88 = v136 + v1681 < v136 ? -805306219 : 0x10000000;
      v1668 = v88;
      if ( v136 + v1681 >= v136 )
      {
        pcchLength[0] = 0LL;
        if ( StringLengthWorkerW(L"Cortana-AllowCortana-Enabled", v135, pcchLength) < 0 )
        {
          pcchLength[0] = 0LL;
          goto LABEL_593;
        }
        v1682 = 0;
        ++pcchLength[0];
        v88 = RtlUIntAdd(4LL, (unsigned int)(2 * LODWORD(pcchLength[0])), &v1682);
        v1668 = v88;
        if ( v88 < 0 )
          goto LABEL_118;
        v88 = v513 + v1682 < v513 ? -805306219 : 0x10000000;
        v1668 = v88;
        if ( v513 + v1682 >= v513 )
        {
          v1683 = 0;
          v88 = RtlUIntAdd(v512, (unsigned int)v512, &v1683);
          v1668 = v88;
          if ( v88 < 0 )
            goto LABEL_118;
          v517 = v515;
          v518 = v514 + v1683;
          if ( v514 + v1683 >= v514 )
            v517 = v514 + v1683;
          v88 = v518 < v514 ? -805306219 : 0x10000000;
          v1668 = v88;
          if ( v518 >= v514 )
          {
            v1684 = 0;
            v1668 = RtlUIntAdd(v516, v516, &v1684);
            v88 = v1668;
            if ( v1668 < 0 )
              goto LABEL_118;
            v520 = v519;
            v521 = v517 + v1684;
            if ( v517 + v1684 >= v517 )
              v520 = v517 + v1684;
            v88 = v521 < v517 ? -805306219 : 0x10000000;
            v1668 = v88;
            if ( v521 >= v517 )
            {
              HIDWORD(v1783[0]) = v520;
              v522 = v520;
              v523 = GetProcessHeap();
              v524 = HeapAlloc(v523, 8u, v522);
              if ( !v524 )
              {
                v88 = -1073741801;
                goto LABEL_956;
              }
              v1783[1] = (size_t)v524;
              LODWORD(v1783[0]) = 0;
              LODWORD(v1778[0]) = 0;
              v1777[1] = 0LL;
              pcchLength[1] = (size_t)v524;
              Sized = (SIZE_T)v117;
              v1482 = (SIZE_T)v120;
              v88 = RtlULongLongAdd(v524, 4LL, v1778);
              v1668 = v88;
              if ( v88 < 0 )
                goto LABEL_118;
              if ( (unsigned __int64)(v526 + 2) > v1783[1] + HIDWORD(v1783[0]) )
              {
LABEL_628:
                v88 = -1073741789;
                goto LABEL_956;
              }
              v527 = (_DWORD *)v1778[0];
              *v526 = 4;
              *v527 = 0;
              v528 = 0;
              v529 = LODWORD(v1783[0]) + 1;
              LODWORD(v1787[0]) = 0;
              ++LODWORD(v1783[0]);
              v1786 = 0LL;
              if ( v120 )
              {
                if ( v525 )
                  goto LABEL_553;
                goto LABEL_551;
              }
              if ( v525 )
                goto LABEL_551;
LABEL_553:
              if ( !v1783[1] )
              {
                v1685 = 0;
                v1668 = RtlUIntAdd(4LL, v525, &v1685);
                v88 = v1668;
                if ( v1668 >= 0 )
                {
                  v530 = RtlUIntAdd(HIDWORD(v1783[0]), v1685, (char *)v1783 + 4);
                  v531 = v1783[0];
                  v88 = v530;
                  v1668 = v530;
                  if ( v530 >= 0 )
                    goto LABEL_558;
                }
                goto LABEL_118;
              }
              v534 = (unsigned int *)v1783[1];
              v1738 = v1783[1];
              while ( 1 )
              {
                Srcd = v528;
                if ( v528 >= v529 )
                  break;
                v535 = *v534;
                v1686 = 0;
                v1668 = RtlUIntAdd(4LL, v535, &v1686);
                v88 = v1668;
                if ( v1668 < 0 )
                  goto LABEL_118;
                v1668 = RtlULongLongAdd(v536, v1686, &v1738);
                v88 = v1668;
                if ( v1668 < 0 )
                  goto LABEL_118;
                v534 = (unsigned int *)v1738;
                v528 = Srcd + 1;
              }
              v88 = RtlULongLongAdd(v534, 4LL, v1787);
              v1668 = v88;
              if ( v88 < 0 )
                goto LABEL_118;
              if ( (unsigned __int64)v538 + v537 + 4 > v1783[1] + HIDWORD(v1783[0]) )
                goto LABEL_628;
              *v538 = v537;
              if ( v120 )
                memcpy_0(v1787[0], v120, v537);
              v531 = v1783[0];
LABEL_558:
              v532 = 0;
              v533 = v531 + 1;
              LODWORD(v1788[0]) = 0;
              v1787[1] = 0LL;
              LODWORD(v1783[0]) = v533;
              if ( v1783[1] )
              {
                v543 = (unsigned int *)v1783[1];
                v1739 = v1783[1];
                while ( 1 )
                {
                  Srce = v532;
                  if ( v532 >= v533 )
                    break;
                  v544 = *v543;
                  v1688 = 0;
                  v1668 = RtlUIntAdd(4LL, v544, &v1688);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v1668 = RtlULongLongAdd(v545, v1688, &v1739);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v543 = (unsigned int *)v1739;
                  v532 = Srce + 1;
                }
                v88 = RtlULongLongAdd(v543, 4LL, v1788);
                v1668 = v88;
                if ( v88 < 0 )
                  goto LABEL_118;
                if ( (unsigned __int64)v547 + v546 + 4 <= v1783[1] + HIDWORD(v1783[0]) )
                {
                  *v547 = v546;
                  memcpy_0(v1788[0], v117, v546);
                  v540 = v1783[0];
                  goto LABEL_571;
                }
                goto LABEL_628;
              }
              v1687 = 0;
              v1668 = RtlUIntAdd(4LL, 8LL, &v1687);
              v88 = v1668;
              if ( v1668 < 0 )
                goto LABEL_118;
              v539 = RtlUIntAdd(HIDWORD(v1783[0]), v1687, (char *)v1783 + 4);
              v540 = v1783[0];
              v88 = v539;
              v1668 = v539;
              if ( v539 < 0 )
                goto LABEL_118;
LABEL_571:
              v541 = v540 + 1;
              LODWORD(v1789[0]) = 0;
              v1788[1] = 0LL;
              LODWORD(v1783[0]) = v541;
              if ( v1783[1] )
              {
                v548 = (unsigned int *)v1783[1];
                v549 = 0;
                v1770 = v1783[1];
                while ( v549 < v541 )
                {
                  v550 = *v548;
                  v1690 = 0;
                  v1668 = RtlUIntAdd(4LL, v550, &v1690);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlULongLongAdd(v551, v1690, &v1770);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v548 = (unsigned int *)v1770;
                  v549 = v552 + 1;
                }
                v88 = RtlULongLongAdd(v548, 4LL, v1789);
                v1668 = v88;
                if ( v88 < 0 )
                  goto LABEL_118;
                if ( (unsigned __int64)(v553 + 3) <= v1783[1] + HIDWORD(v1783[0]) )
                {
                  v554 = (SIZE_T *)v1789[0];
                  *v553 = 8;
                  *v554 = v1441;
                  ++LODWORD(v1783[0]);
                  goto LABEL_591;
                }
                goto LABEL_628;
              }
              v1689 = 0;
              v1668 = RtlUIntAdd(4LL, 8LL, &v1689);
              v88 = v1668;
              if ( v1668 < 0 )
                goto LABEL_118;
              v88 = RtlUIntAdd(HIDWORD(v1783[0]), v1689, (char *)v1783 + 4);
              v1668 = v88;
              if ( v88 < 0 )
                goto LABEL_118;
              ++LODWORD(v1783[0]);
LABEL_591:
              v1769 = 0LL;
              if ( StringLengthWorkerW(L"Cortana-AllowCortana-Enabled", v542, &v1769) < 0 )
              {
                v1769 = 0LL;
LABEL_593:
                v88 = -1073741762;
                goto LABEL_956;
              }
              v1668 = RtlULongLongAdd(v1769, 1LL, &v1769);
              v88 = v1668;
              if ( v1668 < 0 )
                goto LABEL_118;
              LODWORD(v1790[0]) = 0;
              v1789[1] = 0LL;
              if ( 2 * (_DWORD)v1769 )
              {
                if ( !v1783[1] )
                {
                  v1691 = 0;
                  v1668 = RtlUIntAdd(v555, (unsigned int)(2 * v1769), &v1691);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(HIDWORD(v1783[0]), v1691, (char *)v1783 + 4);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  ++LODWORD(v1783[0]);
                  v88 = 0;
                  v1668 = 0;
LABEL_611:
                  if ( v88 < 0 )
                    goto LABEL_118;
                  LODWORD(v1791[0]) = 0;
                  v1790[1] = 0LL;
                  v564 = 4LL;
                  if ( v1783[1] )
                  {
                    v568 = (unsigned int *)v1783[1];
                    v569 = 0;
                    v1742[0] = v1783[1];
                    while ( v569 < LODWORD(v1783[0]) )
                    {
                      v570 = *v568;
                      v1694 = 0;
                      v1668 = RtlUIntAdd((unsigned int)v564, v570, &v1694);
                      v88 = v1668;
                      if ( v1668 < 0 )
                        goto LABEL_118;
                      v88 = RtlULongLongAdd(v571, v1694, v1742);
                      v1668 = v88;
                      if ( v88 < 0 )
                        goto LABEL_118;
                      v568 = (unsigned int *)v1742[0];
                      v569 = v572 + 1;
                    }
                    v88 = RtlULongLongAdd(v568, v564, v1791);
                    v1668 = v88;
                    if ( v88 < 0 )
                      goto LABEL_118;
                    if ( (unsigned __int64)(v573 + 2) <= v1783[1] + HIDWORD(v1783[0]) )
                    {
                      v566 = (int *)v1791[0];
                      *v573 = v565;
                      *v566 = v1574;
                      goto LABEL_617;
                    }
                    goto LABEL_628;
                  }
                  v1693 = 0;
                  v1668 = RtlUIntAdd(4LL, 4LL, &v1693);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v1668 = RtlUIntAdd(HIDWORD(v1783[0]), v1693, (char *)v1783 + 4);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
LABEL_617:
                  ++LODWORD(v1783[0]);
                  LODWORD(v1792) = 0;
                  v1791[1] = 0LL;
                  if ( v1783[1] )
                  {
                    v574 = (unsigned int *)v1783[1];
                    v575 = 0;
                    v1741 = v1783[1];
                    while ( v575 < LODWORD(v1783[0]) )
                    {
                      v576 = *v574;
                      v1696 = 0;
                      v1668 = RtlUIntAdd((unsigned int)v565, v576, &v1696);
                      v88 = v1668;
                      if ( v1668 < 0 )
                        goto LABEL_118;
                      v88 = RtlULongLongAdd(v577, v1696, &v1741);
                      v1668 = v88;
                      if ( v88 < 0 )
                        goto LABEL_118;
                      v574 = (unsigned int *)v1741;
                      v575 = v578 + 1;
                    }
                    v88 = RtlULongLongAdd(v574, v565, &v1792);
                    v1668 = v88;
                    if ( v88 < 0 )
                      goto LABEL_118;
                    if ( (unsigned __int64)(v579 + 2) <= v1783[1] + HIDWORD(v1783[0]) )
                    {
                      v580 = v1792;
                      *v579 = v567;
                      *v580 = v567;
                      ++LODWORD(v1783[0]);
                      goto LABEL_637;
                    }
                    goto LABEL_628;
                  }
                  v1695 = 0;
                  v1668 = RtlUIntAdd((unsigned int)v565, (unsigned int)v565, &v1695);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(HIDWORD(v1783[0]), v1695, (char *)v1783 + 4);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  ++LODWORD(v1783[0]);
LABEL_637:
                  v1697 = 0;
                  v88 = RtlUIntAdd(v567, v567, &v1697);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1698 = v1697;
                  v1699 = 0;
                  v1668 = RtlUIntAdd(v581, 8LL, &v1699);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(v582, v1699, &v1698);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1700 = 0;
                  v1668 = RtlUIntAdd(v583, v583, &v1700);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(v1698, v1700, &v1698);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1701 = 0;
                  v1668 = RtlUIntAdd(v584, v584, &v1701);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(v1698, v1701, &v1698);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1702 = 0;
                  v1668 = RtlUIntAdd(v585, v585, &v1702);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(v1698, v1702, &v1698);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1703 = 0;
                  v1668 = RtlUIntAdd(v586, v586, &v1703);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlUIntAdd(v1698, v1703, &v1698);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v1581 = v1698;
                  v1628 = 0LL;
                  Srcf = 0;
                  v1617 = 0LL;
                  v1656 = 0LL;
                  v1592 = 0;
                  v1640 = 0LL;
                  v1544 = 0;
                  v1663 = 0LL;
                  dwBytesf = 0LL;
                  v1498 = __rdtsc();
                  v1704 = 8;
                  v588 = RtlUIntAdd(8LL, HIDWORD(v1783[0]), &v1704);
                  if ( v588 >= 0 )
                  {
                    v589 = (v1704 + 7) & 0xFFFFFFF8;
                    if ( v589 < v1704 )
                    {
                      v88 = -805306219;
                      goto LABEL_956;
                    }
                    v1704 = (v1704 + 7) & 0xFFFFFFF8;
                    v590 = v589;
                    v591 = GetProcessHeap();
                    v592 = (char *)HeapAlloc(v591, 8u, v590);
                    v593 = v592;
                    if ( v592 )
                    {
                      v1762[0] = v592;
                      *(_DWORD *)v592 = v1783[0];
                      v588 = RtlULongLongAdd(v592, 4LL, v1762);
                      if ( v588 >= 0 )
                      {
                        v595 = v1762[0];
                        *(_DWORD *)v1762[0] = HIDWORD(v1783[0]);
                        v588 = RtlULongLongAdd(v595, v594, v1762);
                        if ( v588 >= 0 )
                        {
                          *(_QWORD *)&v593[v1704 - 8] = v1498;
                          memcpy_0(v1762[0], (const void *)v1783[1], HIDWORD(v1783[0]));
                          v587 = v1704;
                          Srcf = v1704;
                          v1628 = (unsigned __int8 *)v593;
                          goto LABEL_658;
                        }
                      }
                      v596 = GetProcessHeap();
                      HeapFree(v596, 0, v593);
                    }
                    else
                    {
                      v588 = -1073741801;
                    }
                    v587 = 0;
LABEL_658:
                    Sized = (SIZE_T)v117;
                    v1482 = (SIZE_T)v120;
                  }
                  v88 = v588 | 0x10000000;
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_735;
                  if ( !v1628 )
                  {
                    v88 = -805306355;
                    goto LABEL_956;
                  }
                  v1427 = v587;
                  if ( !v587
                    || (v1537 = v587 + 8, v597 = (char *)MemoryAlloc(v587 + 8LL), v1634 = v597, v598 = 0, !v597) )
                  {
                    v88 = -805306367;
                    v1668 = -805306367;
                    goto LABEL_737;
                  }
                  v1359 = 0;
                  v599 = 0LL;
                  if ( Srcf )
                  {
                    do
                      v598 ^= v1628[v599++];
                    while ( v599 < Srcf );
                    v1359 = v598;
                  }
                  v600 = v597;
                  v1669 = 0;
                  v601 = 0;
                  v1364 = 0;
                  v602 = -1;
                  v1846 = 0xC81ECB17B1B54A58uLL;
                  v1550 = v600;
                  v603 = v1628;
                  v604 = Srcf & 7;
                  if ( (Srcf & 7) != 0 )
                  {
                    v1365 = 0;
                    v605 = 0;
                    v1670 = 0;
                    v606 = 56;
                    for ( j = 56; ; v606 = j )
                    {
                      v607 = *v603++;
                      if ( v1670 >= 4 )
                      {
                        v609 = v607 << v606;
                        v608 = v1365;
                        v605 |= v609;
                      }
                      else
                      {
                        v608 = (v607 << (v606 - 32)) | v1365;
                        v1365 = v608;
                      }
                      j -= 8;
                      if ( (int)++v1670 >= v604 )
                        break;
                    }
                    v601 = v608 ^ 0xB17A307A;
                    v610 = v605;
                    v611 = v605 ^ 0x42F6B18D;
                    v612 = v608 ^ 0xB17A307A;
                    v613 = 0;
                    v1500 = 0;
                    v614 = v611;
                    do
                    {
                      v1364 = v608;
                      v1378 = v1550 + 1;
                      if ( v613 >= 4 )
                      {
                        v614 = (v614 << 8) | HIBYTE(v614);
                        v615 = v614;
                      }
                      else
                      {
                        v612 = (v612 << 8) | HIBYTE(v612);
                        v615 = v612;
                      }
                      *v1550 = v615;
                      v613 = v1500 + 1;
                      ++v1550;
                      v1500 = v613;
                    }
                    while ( v613 < v604 );
                    v600 = v1378;
                    v598 = v1359;
                    v1669 = v610;
                    v2 = (int *)v1900[0];
                    v1482 = (SIZE_T)v120;
                    Sized = (SIZE_T)v117;
                    if ( (unsigned int)v604 > 4 )
                    {
                      v602 = v611 >> (8 * (8 - v604)) << (8 * (8 - v604));
                      goto LABEL_683;
                    }
                    v602 = 0;
                    if ( (unsigned int)v604 < 4 )
                    {
                      v601 = v601 >> (8 * (4 - v604)) << (8 * (4 - v604));
LABEL_683:
                      v600 = v1378;
                    }
                  }
                  v616 = Srcf;
                  if ( (unsigned __int64)Srcf >> 3 )
                  {
                    v617 = v600 + 7;
                    v618 = HIDWORD(v1846);
                    v619 = v603 + 2;
                    v620 = v1364;
                    v621 = v1669;
                    v1501 = WORD1(v1846);
                    v622 = WORD2(v1846);
                    v623 = (unsigned __int64)Srcf >> 3;
                    while ( 1 )
                    {
                      v624 = v619[1] | ((*v619 | ((*(v619 - 1) | (*(v619 - 2) << 8)) << 8)) << 8);
                      v625 = v619[5] | ((v619[4] | ((v619[3] | (v619[2] << 8)) << 8)) << 8);
                      v626 = v625 ^ v602;
                      v627 = v624 ^ v618 ^ (v626 - 19032) ^ v601;
                      v628 = (__ROR4__(v627, 7) + WORD1(v1846) * __ROR4__(v618 ^ v627, 15)) ^ v626;
                      v629 = (v622 * __ROR4__(v628 - 1313519016, 9) - __ROR4__(v628, 10)) ^ v627;
                      v630 = (__ROR4__(v629, 27) + HIWORD(v1846) * __ROR4__(v629 ^ v622, 28)) ^ v628;
                      v631 = (v618 - (v630 ^ 0xB1B54A58)) ^ v629;
                      v632 = (WORD1(v1846) * (v631 - 19032) - (v631 >> 6)) ^ v630;
                      v633 = (19032 * (v622 ^ __ROR4__(v632, 15))) ^ v631;
                      v634 = (v622 * (HIWORD(v1846) + __ROR4__(~v633, 3))) ^ v632;
                      v635 = (v634 - v618 - 19032) ^ v633;
                      v636 = (v1501 * (v635 ^ HIWORD(v1846))) ^ __ROR4__(v635, 10) ^ v634;
                      v637 = __ROR4__(v636, 3) ^ (v622 * __ROR4__(v636 ^ 0x4A58, 26)) ^ v635;
                      v638 = (19032 * (__ROR4__(v637, 15) - HIWORD(v1846))) ^ v636;
                      v639 = (v638 >> 15) ^ (19032 * ((8 * (v638 - v622)) | ((v638 - v622) >> 29))) ^ (v638 >> 1) ^ (19032 * (v638 ^ HIWORD(v1846))) ^ v637;
                      v640 = (WORD1(v1846) * (v639 - v622) - (v639 >> 13)) ^ v638;
                      v641 = __ROR4__(v640, 11) ^ (v622 * __ROR4__(-1313519016 - v640, 9)) ^ v639;
                      v642 = (v641 + 1313519016 - HIWORD(v1846)) ^ v640;
                      v643 = (19032 * (v642 ^ WORD1(v1846)) - __ROR4__(v642, 7)) ^ v641;
                      v644 = (WORD1(v1846) * __ROR4__(v643 ^ HIWORD(v1846), 28) - __ROR4__(v643, 16)) ^ v642;
                      v645 = (__ROR4__(v644, 4) + v622 * __ROR4__(-1313519016 - v644, 10)) ^ v643;
                      v646 = __ROR4__(v645, 9) ^ (HIWORD(v1846) * __ROR4__(v645 + 1313519016, 4)) ^ v644;
                      v647 = (19032 * __ROR4__(v618 ^ v646, 24) - __ROR4__(v646, 30)) ^ v645;
                      v648 = (WORD1(v1846) * __ROR4__(v618 - v647, 11) - __ROR4__(v647, 12)) ^ v646;
                      v649 = (v648 >> 8) ^ (v622 * (WORD1(v1846) ^ v648)) ^ v647;
                      v650 = v649 ^ v618 ^ 0xB1B54A58 ^ v648;
                      v601 = v620 ^ v649;
                      v602 = v621 ^ v650;
                      *(v617 - 4) = v601;
                      *v617 = v602;
                      v617 += 8;
                      v620 = v624;
                      v621 = v625;
                      *(v617 - 13) = BYTE1(v601);
                      *(v617 - 9) = BYTE1(v602);
                      v619 += 8;
                      *(v617 - 14) = (unsigned __int16)(v601 >> 8) >> 8;
                      *(v617 - 10) = (unsigned __int16)(v602 >> 8) >> 8;
                      *(v617 - 15) = __ROR4__(
                                       (((v601 >> 8) | (v601 << 24)) >> 8) | (((v601 >> 8) | (v601 << 24)) << 24),
                                       8);
                      *(v617 - 11) = __ROR4__(
                                       (((v602 >> 8) | (v602 << 24)) >> 8) | (((v602 >> 8) | (v602 << 24)) << 24),
                                       8);
                      if ( !--v623 )
                        break;
                      v618 = HIDWORD(v1846);
                    }
                    v598 = v1359;
                    v2 = (int *)v1900[0];
                    v117 = (_QWORD *)Sized;
                    v120 = (void *)v1482;
                    v616 = v1427;
                  }
                  *(_QWORD *)&v1634[v616] = v598;
                  v651 = GetProcessHeap();
                  v652 = (unsigned int *)HeapAlloc(v651, 8u, 0x30uLL);
                  v653 = 0LL;
                  if ( v652 )
                    v653 = v652;
                  v1551 = (size_t)v653;
                  v654 = v652 == 0LL ? 0xC0000017 : 0;
                  if ( v652 )
                  {
                    *v653 = v1537;
                    v655 = GetProcessHeap();
                    v656 = HeapAlloc(v655, 8u, v1537);
                    if ( v656 )
                    {
                      *(_QWORD *)(v1551 + 8) = v656;
                      memcpy_0(v656, v1634, v1537);
                      *(_DWORD *)(v1551 + 16) = 160;
                      v657 = GetProcessHeap();
                      v658 = HeapAlloc(v657, 8u, 0xA0uLL);
                      if ( v658 )
                      {
                        *(_QWORD *)(v1551 + 24) = v658;
                        v659 = *(_OWORD **)(v1551 + 24);
                        *v659 = xmmword_1808C7470[0];
                        v659[1] = xmmword_1808C7470[1];
                        v659[2] = xmmword_1808C7470[2];
                        v659[3] = xmmword_1808C7470[3];
                        v659[4] = xmmword_1808C7470[4];
                        v659[5] = xmmword_1808C7470[5];
                        v659[6] = xmmword_1808C7470[6];
                        v659[7] = xmmword_1808C7470[7];
                        v659[8] = xmmword_1808C7470[8];
                        v659[9] = xmmword_1808C7470[9];
                        *(_DWORD *)(v1551 + 32) = 8;
                        v660 = GetProcessHeap();
                        v661 = HeapAlloc(v660, 8u, 8uLL);
                        if ( !v661 )
                        {
                          v654 = -1073741801;
                          goto LABEL_696;
                        }
                        *(_QWORD *)(v1551 + 40) = v661;
                        v654 = 0;
                        **(_QWORD **)(v1551 + 40) = qword_1808C7460;
                        v667 = (unsigned int *)v1551;
LABEL_707:
                        v1483 = (SIZE_T)v120;
                        Sizee = (SIZE_T)v117;
                        v1617 = v667;
                        v668 = GetProcessHeap();
                        HeapFree(v668, 0, v1634);
                        v669 = v1628;
                        v88 = v654 | 0x10000000;
                        v1668 = v88;
                        if ( v88 < 0 )
                          goto LABEL_736;
                        v670 = *v1617;
                        v1705 = 0;
                        v1706 = 4;
                        v673 = RtlUIntAdd(4LL, v670, &v1706);
                        if ( v673 < 0 )
                          goto LABEL_725;
                        v673 = RtlUIntAdd(v1706, v671, &v1706);
                        if ( v673 < 0 )
                          goto LABEL_725;
                        v673 = RtlUIntAdd(v1706, *(unsigned int *)(v674 + 16), &v1706);
                        if ( v673 < 0 )
                          goto LABEL_725;
                        v673 = RtlUIntAdd(v1706, 4LL, &v1706);
                        if ( v673 < 0 )
                          goto LABEL_725;
                        v673 = RtlUIntAdd(v1706, *(unsigned int *)(v675 + 32), &v1706);
                        if ( v673 < 0 )
                          goto LABEL_725;
                        v1705 = v1706;
                        v676 = v1706;
                        v677 = GetProcessHeap();
                        v678 = HeapAlloc(v677, 8u, v676);
                        v679 = v678;
                        if ( !v678 )
                        {
                          v88 = -805306345;
                          goto LABEL_734;
                        }
                        v1743 = v678;
                        *v678 = *v1617;
                        v673 = RtlULongLongAdd(v678, 4LL, &v1743);
                        v681 = v679;
                        if ( v673 < 0 )
                          goto LABEL_1661;
                        memcpy_0(v1743, v680[1], *(unsigned int *)v680);
                        v673 = RtlULongLongAdd(v1743, *v1617, &v1743);
                        v681 = v679;
                        if ( v673 < 0 )
                          goto LABEL_1661;
                        v683 = v1743;
                        *(_DWORD *)v1743 = *(_DWORD *)(v682 + 16);
                        v673 = RtlULongLongAdd(v683, 4LL, &v1743);
                        v681 = v679;
                        if ( v673 < 0 )
                          goto LABEL_1661;
                        memcpy_0(v1743, *(const void **)(v684 + 24), *(unsigned int *)(v684 + 16));
                        v673 = RtlULongLongAdd(v1743, v1617[4], &v1743);
                        v681 = v679;
                        if ( v673 < 0
                          || (v686 = v1743,
                              *(_DWORD *)v1743 = *(_DWORD *)(v685 + 32),
                              v673 = RtlULongLongAdd(v686, 4LL, &v1743),
                              v681 = v679,
                              v673 < 0)
                          || (memcpy_0(v1743, *(const void **)(v687 + 40), *(unsigned int *)(v687 + 32)),
                              v673 = RtlULongLongAdd(v1743, v1617[8], &v1743),
                              v681 = v679,
                              v673 < 0) )
                        {
LABEL_1661:
                          if ( v681 )
                          {
                            v688 = GetProcessHeap();
                            HeapFree(v688, 0, v679);
                          }
                          v672 = 0LL;
                        }
                        else
                        {
                          v672 = v679;
                          v1592 = v1705;
                          v1656 = v679;
                        }
                        v669 = v1628;
LABEL_725:
                        v1428 = (SIZE_T)v672;
                        v88 = v673 | 0x10000000;
                        v1668 = v88;
                        if ( v88 < 0 )
                          goto LABEL_736;
                        v689 = -1;
                        if ( v1581 < 0xFFFFFFF8 )
                          v689 = v1581 + 8;
                        v88 = v1581 >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
                        v1668 = v88;
                        if ( v1581 + 8 < 8 )
                          goto LABEL_801;
                        v1707 = 0;
                        v690 = (v689 + 7) & 0xFFFFFFF8;
                        if ( (unsigned int)v690 < v689 )
                        {
                          v88 = -1073741675;
                          v1668 = -1073741675;
                          goto LABEL_736;
                        }
                        v1656 = v672;
                        v1707 = (v689 + 7) & 0xFFFFFFF8;
                        v1668 = RtlUIntAdd(v690, 8LL, &v1707);
                        v88 = v1668;
                        if ( v1668 < 0 )
                          goto LABEL_736;
                        v1628 = v709;
                        v710 = (void *)v1428;
                        v1656 = (void *)v1428;
                        v1617 = v708;
                        if ( v1783[1] )
                        {
                          v1617 = v708;
                          v1628 = v669;
                          v1656 = (void *)v1428;
                          if ( LODWORD(v1783[0]) > 1 )
                          {
                            v711 = (unsigned int *)v1783[1];
                            v712 = 0;
                            v1744 = v1783[1];
                            while ( 1 )
                            {
                              v1366 = v712;
                              if ( v712 )
                                break;
                              Srcg = *v711;
                              v1668 = RtlULongLongAdd(v711, 4LL, &v1744);
                              v88 = v1668;
                              if ( v1668 < 0 )
                                goto LABEL_736;
                              v1668 = RtlULongLongAdd(v1744, Srcg, &v1744);
                              v88 = v1668;
                              if ( v1668 < 0 )
                                goto LABEL_736;
                              v711 = (unsigned int *)v1744;
                              v712 = v1366 + 1;
                            }
                            v1367 = *v711;
                            if ( v711 + 1 < v711 )
                              goto LABEL_800;
                            v1628 = v669;
                            v1617 = v708;
                            v1656 = v710;
                            if ( v1783[1] )
                            {
                              v1617 = v708;
                              v1628 = v669;
                              v1656 = v710;
                              if ( LODWORD(v1783[0]) > 2 )
                              {
                                v713 = (unsigned int *)v1783[1];
                                v714 = 0;
                                v1734 = v1783[1];
                                while ( 1 )
                                {
                                  Srch = v714;
                                  if ( v714 >= 2 )
                                    break;
                                  v1582 = *v713;
                                  v1668 = RtlULongLongAdd(v713, 4LL, &v1734);
                                  v88 = v1668;
                                  if ( v1668 < 0 )
                                    goto LABEL_736;
                                  v1668 = RtlULongLongAdd(v1734, v1582, &v1734);
                                  v88 = v1668;
                                  if ( v1668 < 0 )
                                    goto LABEL_736;
                                  v713 = (unsigned int *)v1734;
                                  v714 = Srch + 1;
                                }
                                v715 = *v713;
                                if ( v713 + 1 >= v713 )
                                {
                                  v1628 = v669;
                                  v1483 = (SIZE_T)v120;
                                  Sizee = (SIZE_T)v117;
                                  v1617 = v708;
                                  v1656 = v710;
                                  v1708 = 4;
                                  v1668 = RtlUIntAdd(4LL, v1707, &v1708);
                                  v88 = v1668;
                                  if ( v1668 >= 0 )
                                  {
                                    v1668 = RtlUIntAdd(v1708, v716, &v1708);
                                    v88 = v1668;
                                    if ( v1668 >= 0 )
                                    {
                                      v1668 = RtlUIntAdd(v1708, v1367, &v1708);
                                      v88 = v1668;
                                      if ( v1668 >= 0 )
                                      {
                                        v1668 = RtlUIntAdd(v1708, 4LL, &v1708);
                                        v88 = v1668;
                                        if ( v1668 >= 0 )
                                        {
                                          v1668 = RtlUIntAdd(v1708, v715, &v1708);
                                          v88 = v1668;
                                          if ( v1668 >= 0 )
                                          {
                                            v719 = v1708;
                                            v1617 = v717;
                                            v1628 = v669;
                                            v1656 = v718;
                                            if ( v1708 > 0x400000 )
                                            {
                                              v88 = -2147418113;
                                              goto LABEL_798;
                                            }
                                            v1544 = v1708;
                                            Sizee = (SIZE_T)v117;
                                            v1483 = (SIZE_T)v120;
LABEL_803:
                                            v722 = v719;
                                            v723 = GetProcessHeap();
                                            v724 = (int *)HeapAlloc(v723, 8u, v722);
                                            v725 = 0LL;
                                            if ( v724 )
                                              v725 = v724;
                                            v1640 = v725;
                                            v88 = v724 != 0LL ? 0x10000000 : -805306345;
                                            v1668 = v88;
                                            if ( !v724 )
                                              goto LABEL_735;
                                            phModule = 0LL;
                                            v1798 = 0LL;
                                            v1799 = 0LL;
                                            if ( !v1656 || !v725 )
                                            {
                                              v88 = -2147024809;
                                              goto LABEL_734;
                                            }
                                            LODWORD(v1799) = v1592;
                                            *(_QWORD *)((char *)&v1799 + 4) = v1544;
                                            *(_QWORD *)&v1798 = v1656;
                                            *((_QWORD *)&v1798 + 1) = v725;
                                            if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                              && (v726 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                            {
                                              v727 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, _QWORD))v726)(
                                                       134LL,
                                                       &v1798,
                                                       32LL,
                                                       0LL);
                                              v88 = v727 | 0x10000000;
                                              v1668 = v727 | 0x10000000;
                                              if ( v727 >= 0 )
                                              {
                                                v728 = DWORD1(v1799);
                                                v1544 = DWORD1(v1799);
                                                goto LABEL_821;
                                              }
                                            }
                                            else
                                            {
                                              v729 = GetLastError();
                                              v1668 = v729;
                                              v88 = v729;
                                              if ( v729 > 0 )
                                              {
                                                v88 = (unsigned __int16)v729 | 0x80070000;
                                                v1668 = v88;
                                              }
                                              if ( v88 >= 0 )
                                              {
                                                v88 = -2147467259;
                                                v1668 = -2147467259;
                                              }
                                            }
                                            if ( v88 == -805306333 )
                                            {
                                              v88 = -2147024774;
                                              goto LABEL_734;
                                            }
                                            if ( v88 < 0 )
                                              goto LABEL_735;
                                            v728 = v1544;
LABEL_821:
                                            v1388 = 0LL;
                                            v1709 = 0;
                                            v1747 = v1640;
                                            if ( v728 >= 4 )
                                            {
                                              v1502 = *v1640;
                                              v730 = RtlULongLongAdd(v1640, 4LL, &v1747);
                                              v731 = 0LL;
                                              v732 = v730;
                                              if ( v730 < 0 )
                                                goto LABEL_878;
                                              v732 = RtlUIntAdd(0LL, 4LL, &v1709);
                                              if ( v732 < 0 )
                                                goto LABEL_879;
                                              if ( v734 - v1709 < (unsigned int)v735 )
                                                goto LABEL_846;
                                              v1552 = v1747;
                                              v1635 = v735;
                                              v732 = RtlULongLongAdd(v1747, (unsigned int)v735, &v1747);
                                              if ( v732 < 0 || (v732 = RtlUIntAdd(v1709, v736, &v1709), v732 < 0) )
                                              {
LABEL_878:
                                                v733 = v731;
                                                goto LABEL_879;
                                              }
                                              v738 = (unsigned int)((_DWORD)v731 + 4);
                                              if ( v737 - v1709 >= (unsigned int)v738 )
                                              {
                                                v1368 = *(_DWORD *)v1747;
                                                v732 = RtlULongLongAdd(v1747, v738, &v1747);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                v732 = RtlUIntAdd(v1709, 4LL, &v1709);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                if ( v739 - v1709 < (unsigned int)v740 )
                                                  goto LABEL_846;
                                                v1538 = v1747;
                                                v1429 = v740;
                                                v732 = RtlULongLongAdd(v1747, (unsigned int)v740, &v1747);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                v732 = RtlUIntAdd(v1709, v741, &v1709);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                if ( v742 - v1709 < 4 )
                                                  goto LABEL_846;
                                                Srci = *(_DWORD *)v1747;
                                                v732 = RtlULongLongAdd(v1747, 4LL, &v1747);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                v732 = RtlUIntAdd(v1709, 4LL, &v1709);
                                                if ( v732 < 0 )
                                                  goto LABEL_877;
                                                if ( v1544 - v1709 < v743 )
                                                  goto LABEL_846;
                                                v732 = RtlUIntAdd(v1709, v743, &v1709);
                                                if ( v732 < 0 )
                                                {
LABEL_877:
                                                  v733 = 0LL;
                                                  LODWORD(v731) = 0;
                                                  goto LABEL_879;
                                                }
                                                if ( v1544 == v1709
                                                  && (unsigned int)(v746 + v744 + v745) + 12LL == v1544 )
                                                {
                                                  v747 = GetProcessHeap();
                                                  v748 = HeapAlloc(v747, 8u, 0x30uLL);
                                                  v749 = 0LL;
                                                  if ( v748 )
                                                    v749 = v748;
                                                  v1664 = v749;
                                                  v732 = v748 == 0LL ? 0xC0000017 : 0;
                                                  if ( !v748 )
                                                    goto LABEL_856;
                                                  if ( v1552 )
                                                  {
                                                    *(_DWORD *)v749 = v1502;
                                                    v750 = GetProcessHeap();
                                                    v751 = HeapAlloc(v750, 8u, v1635);
                                                    if ( v751 )
                                                    {
                                                      v1664[1] = v751;
                                                      v732 = 0;
                                                      memcpy_0(v751, v1552, v1635);
                                                      v749 = v1664;
                                                      Sizee = (SIZE_T)v117;
                                                      v1483 = (SIZE_T)v120;
                                                      goto LABEL_848;
                                                    }
LABEL_855:
                                                    v732 = -1073741801;
LABEL_856:
                                                    v756 = v1664;
                                                    if ( v1664 )
                                                    {
                                                      v1553 = (void *)v1664[1];
                                                      if ( v1553 )
                                                      {
                                                        v757 = GetProcessHeap();
                                                        HeapFree(v757, 0, v1553);
                                                        v756 = v1664;
                                                        v1664[1] = 0LL;
                                                      }
                                                      v1554 = (void *)v756[3];
                                                      if ( v1554 )
                                                      {
                                                        v758 = GetProcessHeap();
                                                        HeapFree(v758, 0, v1554);
                                                        v756 = v1664;
                                                        v1664[3] = 0LL;
                                                      }
                                                      v1555 = (void *)v756[5];
                                                      if ( v1555 )
                                                      {
                                                        v759 = GetProcessHeap();
                                                        HeapFree(v759, 0, v1555);
                                                        v1664[5] = 0LL;
                                                      }
                                                      v760 = GetProcessHeap();
                                                      HeapFree(v760, 0, v1664);
                                                    }
                                                    v761 = 0LL;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)v749 = 0;
                                                    v749[1] = 0LL;
LABEL_848:
                                                    if ( v1538 )
                                                    {
                                                      *((_DWORD *)v749 + 4) = v1368;
                                                      v752 = GetProcessHeap();
                                                      v753 = HeapAlloc(v752, 8u, v1429);
                                                      if ( !v753 )
                                                        goto LABEL_855;
                                                      v1664[3] = v753;
                                                      v732 = 0;
                                                      memcpy_0(v753, v1538, v1429);
                                                      v749 = v1664;
                                                      Sizee = (SIZE_T)v117;
                                                      v1483 = (SIZE_T)v120;
                                                    }
                                                    else
                                                    {
                                                      *((_DWORD *)v749 + 4) = 0;
                                                      v749[3] = 0LL;
                                                    }
                                                    if ( v1747 )
                                                    {
                                                      *((_DWORD *)v749 + 8) = Srci;
                                                      v754 = GetProcessHeap();
                                                      v755 = HeapAlloc(v754, 8u, Srci);
                                                      if ( !v755 )
                                                        goto LABEL_855;
                                                      v1664[5] = v755;
                                                      v732 = 0;
                                                      memcpy_0(v755, v1747, Srci);
                                                      v749 = v1664;
                                                      Sizee = (SIZE_T)v117;
                                                      v1483 = (SIZE_T)v120;
                                                    }
                                                    else
                                                    {
                                                      *((_DWORD *)v749 + 8) = 0;
                                                      v749[5] = 0LL;
                                                    }
                                                    v761 = (unsigned int *)v749;
                                                    v1388 = (unsigned int *)v749;
                                                  }
                                                  LODWORD(v731) = 0;
                                                  if ( v732 < 0 )
                                                  {
                                                    v733 = 0LL;
                                                    v1663 = 0LL;
                                                    if ( v761 )
                                                    {
                                                      v1556 = (void *)*((_QWORD *)v761 + 1);
                                                      if ( v1556 )
                                                      {
                                                        v762 = GetProcessHeap();
                                                        HeapFree(v762, 0, v1556);
                                                        v761 = v1388;
                                                        *((_QWORD *)v1388 + 1) = 0LL;
                                                      }
                                                      v1557 = (void *)*((_QWORD *)v761 + 3);
                                                      if ( v1557 )
                                                      {
                                                        v763 = GetProcessHeap();
                                                        HeapFree(v763, 0, v1557);
                                                        v761 = v1388;
                                                        *((_QWORD *)v1388 + 3) = 0LL;
                                                      }
                                                      v1558 = (void *)*((_QWORD *)v761 + 5);
                                                      if ( v1558 )
                                                      {
                                                        v764 = GetProcessHeap();
                                                        HeapFree(v764, 0, v1558);
                                                        *((_QWORD *)v1388 + 5) = 0LL;
                                                      }
                                                      v765 = GetProcessHeap();
                                                      HeapFree(v765, 0, v1388);
                                                      LODWORD(v731) = 0;
                                                      v733 = 0LL;
                                                      v1663 = 0LL;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v733 = v761;
                                                    v1663 = v761;
                                                  }
LABEL_879:
                                                  v88 = v732 | 0x10000000;
                                                  v1668 = v88;
                                                  if ( v88 >= 0 )
                                                  {
                                                    if ( v733 )
                                                    {
                                                      v1389 = (unsigned __int8 *)*((_QWORD *)v733 + 1);
                                                      if ( v1389 )
                                                      {
                                                        if ( *v733 != (_DWORD)v731 )
                                                        {
                                                          v766 = *v733 - 8LL;
                                                          v1559 = v766;
                                                          v767 = MemoryAlloc(v766);
                                                          dwBytesf = v767;
                                                          v768 = 0;
                                                          if ( v767 )
                                                          {
                                                            v769 = v1389;
                                                            v1430 = v766 & 7;
                                                            v1843 = 0x7F1137FAB69605ELL;
                                                            v1539 = (unsigned __int16 *)v767;
                                                            if ( (v766 & 7) != 0 )
                                                            {
                                                              v1369 = 0;
                                                              Srcj = 0;
                                                              v770 = v1617;
                                                              v771 = 56;
                                                              v772 = v1389;
                                                              for ( k = 56; ; v771 = k )
                                                              {
                                                                v773 = *v772++;
                                                                if ( Srcj >= 4 )
                                                                {
                                                                  v775 = v773 << v771;
                                                                  v774 = v1369;
                                                                  v768 |= v775;
                                                                }
                                                                else
                                                                {
                                                                  v774 = (v773 << (v771 - 32)) | v1369;
                                                                  v1369 = v774;
                                                                }
                                                                k -= 8;
                                                                if ( (int)++Srcj >= (int)v1430 )
                                                                  break;
                                                              }
                                                              v776 = v774 ^ 0x92F65A5;
                                                              v777 = v768 ^ 0x699A899C;
                                                              v778 = v768;
                                                              LOBYTE(v768) = 0;
                                                              v1503 = v774 ^ 0x92F65A5;
                                                              v1594 = 0;
                                                              v779 = 0;
                                                              Srck = v777;
                                                              do
                                                              {
                                                                v1617 = v770;
                                                                v1398 = (unsigned __int16 *)((char *)v1539 + 1);
                                                                if ( v779 >= 4 )
                                                                {
                                                                  v780 = (Srck << 8) | HIBYTE(Srck);
                                                                  Srck = v780;
                                                                }
                                                                else
                                                                {
                                                                  v780 = (v1503 << 8) | HIBYTE(v1503);
                                                                  v1503 = v780;
                                                                }
                                                                *(_BYTE *)v1539 = v780;
                                                                v779 = v1594 + 1;
                                                                v1539 = (unsigned __int16 *)((char *)v1539 + 1);
                                                                v770 = v1617;
                                                                v1594 = v779;
                                                              }
                                                              while ( v779 < (int)v1430 );
                                                              v1504 = v778;
                                                              v2 = (int *)v1900[0];
                                                              v1483 = (SIZE_T)v120;
                                                              Sizee = (SIZE_T)v117;
                                                              v1539 = v1398;
                                                              if ( v1430 <= 4 )
                                                              {
                                                                v781 = 0;
                                                                if ( v1430 < 4 )
                                                                  v776 = v776 >> (8 * (4 - v1430)) << (8 * (4 - v1430));
                                                              }
                                                              else
                                                              {
                                                                v781 = v777 >> (8 * (8 - v1430)) << (8 * (8 - v1430));
                                                              }
                                                              v769 = v772;
                                                              v782 = v1369;
                                                            }
                                                            else
                                                            {
                                                              v782 = 0;
                                                              v1504 = -1;
                                                              v781 = 0;
                                                              v776 = 0;
                                                            }
                                                            if ( v1559 >> 3 )
                                                            {
                                                              v783 = HIDWORD(v1843);
                                                              v784 = HIDWORD(v1843) ^ 0xAB69605E;
                                                              v785 = v1504;
                                                              v786 = (char *)v1539 + 7;
                                                              v787 = v1559 >> 3;
                                                              Srcl = WORD1(v1843);
                                                              v788 = WORD2(v1843);
                                                              v789 = v769 + 2;
                                                              for ( m = WORD2(v1843); ; v788 = m )
                                                              {
                                                                v790 = v789[1] | ((*v789 | ((*(v789 - 1) | (*(v789 - 2) << 8)) << 8)) << 8);
                                                                v791 = v790 ^ v776;
                                                                v1636 = (SIZE_T)(v789 + 8);
                                                                v792 = v789[5] | ((v789[4] | ((v789[3] | (v789[2] << 8)) << 8)) << 8);
                                                                v793 = v791 ^ v784 ^ v792 ^ v781;
                                                                v794 = (__ROR4__(v793, 22)
                                                                      + v788 * __ROR4__(v793 + 1419157410, 27)) ^ v791;
                                                                v795 = (WORD1(v1843) * __ROR4__(v783 + v794, 9)
                                                                      - __ROR4__(v794, 30)) ^ v793;
                                                                v796 = (24670 * (v795 - v788) - (v795 >> 13)) ^ v794;
                                                                v797 = (HIWORD(v1843)
                                                                      * __ROR4__(WORD1(v1843) ^ v796, 26)
                                                                      - __ROR4__(v796, 30)) ^ v795;
                                                                v798 = (v783 - (v797 ^ 0xAB69605E)) ^ v796;
                                                                v799 = (Srcl * (v798 ^ v788)) ^ __ROR4__(v798, 6) ^ v797;
                                                                v800 = (__ROR4__(v799, 30)
                                                                      + 24670 * __ROR4__(v783 + v799, 15)) ^ v798;
                                                                v801 = (HIWORD(v1843) * __ROR4__(v800 + 1419157410, 14)
                                                                      - __ROR4__(v800, 24)) ^ v799;
                                                                v802 = __ROR4__(v801, 10) ^ (v788
                                                                                           * __ROR4__(
                                                                                               v801 ^ 0xAB69605E,
                                                                                               12)) ^ v800;
                                                                v803 = (v802 >> 10) ^ (WORD1(v1843)
                                                                                     * (HIWORD(v1843) ^ v802)) ^ v801;
                                                                v804 = (HIWORD(v1843) * (__ROR4__(~v803, 5) + 24670)) ^ v802;
                                                                v805 = (v804 - HIWORD(v1843)) ^ 0xAB69605E ^ v803;
                                                                v806 = ((v805 >> 2)
                                                                      + v788 * __ROR4__(HIWORD(v1843) ^ v805, 30)) ^ v804;
                                                                v807 = (__ROR4__(v806, 25)
                                                                      + WORD1(v1843) * __ROR4__(v806 - v783, 6)) ^ v805;
                                                                v808 = (24670 * (v807 ^ v788) + __ROR4__(v807, 9)) ^ v806;
                                                                v809 = (__ROR4__(v808, 25)
                                                                      + HIWORD(v1843)
                                                                      * __ROR4__(WORD1(v1843) ^ v808, 27)) ^ v807;
                                                                v810 = v809 ^ v784 ^ v808;
                                                                v811 = (v788 * (__ROR4__(v810, 3) - WORD1(v1843))) ^ v809;
                                                                v812 = (24670 * __ROR4__(v811 - v783, 1)
                                                                      - __ROR4__(v811, 6)) ^ v810;
                                                                v813 = (__ROR4__(v812, 18)
                                                                      + HIWORD(v1843) * __ROR4__(v812 - 1419157410, 29)) ^ v811;
                                                                v814 = (v788 * __ROR4__(v813 - 1419157410, 17)
                                                                      - __ROR4__(v813, 14)) ^ v812;
                                                                v815 = (v814 >> 3) ^ (WORD1(v1843) * (v814 ^ 0x605E)) ^ v813;
                                                                v816 = v815 ^ v783;
                                                                v817 = __ROR4__(v815, 30);
                                                                v781 = v785 ^ v815;
                                                                v785 = v792;
                                                                v776 = v782 ^ v817 ^ (24670 * __ROR4__(v816, 28)) ^ v814;
                                                                *(v786 - 4) = v776;
                                                                *v786 = v781;
                                                                v786 += 8;
                                                                *(v786 - 13) = BYTE1(v776);
                                                                *(v786 - 9) = BYTE1(v781);
                                                                v789 = (unsigned __int8 *)v1636;
                                                                *(v786 - 14) = (unsigned __int16)(v776 >> 8) >> 8;
                                                                *(v786 - 10) = (unsigned __int16)(v781 >> 8) >> 8;
                                                                *(v786 - 15) = __ROR4__(
                                                                                 (((v776 >> 8) | (v776 << 24)) >> 8) | (((v776 >> 8) | (v776 << 24)) << 24),
                                                                                 8);
                                                                v782 = v790;
                                                                *(v786 - 11) = __ROR4__(
                                                                                 (((v781 >> 8) | (v781 << 24)) >> 8) | (((v781 >> 8) | (v781 << 24)) << 24),
                                                                                 8);
                                                                if ( !--v787 )
                                                                  break;
                                                              }
                                                              LOBYTE(v768) = 0;
                                                              v2 = (int *)v1900[0];
                                                              v117 = (_QWORD *)Sizee;
                                                              v120 = (void *)v1483;
                                                              v767 = dwBytesf;
                                                            }
                                                            for ( n = 0LL; n < v1559; ++n )
                                                              LOBYTE(v768) = *((_BYTE *)v767 + n) ^ v768;
                                                            v819 = v1656;
                                                            if ( (unsigned __int8)v768 == *(_QWORD *)&v1389[v1559] )
                                                            {
                                                              v820 = v1617;
                                                              v669 = v1628;
                                                              v720 = dwBytesf;
                                                              if ( (unsigned int)v1559 >= 4 )
                                                              {
                                                                v1505 = *dwBytesf;
                                                                if ( dwBytesf + 1 < dwBytesf )
                                                                  goto LABEL_796;
                                                                if ( (unsigned int)(v1559 - 4) < 4 )
                                                                {
                                                                  v721 = -1073741762;
LABEL_916:
                                                                  v1617 = v820;
                                                                  v1628 = v669;
LABEL_918:
                                                                  v1656 = v819;
                                                                  goto LABEL_797;
                                                                }
                                                                v1371 = dwBytesf[1];
                                                                v1595 = dwBytesf + 2;
                                                                if ( dwBytesf + 2 < dwBytesf + 1 )
                                                                {
                                                                  v721 = -1073741675;
LABEL_952:
                                                                  v1656 = v819;
                                                                  v1628 = v669;
                                                                  v1617 = v820;
                                                                  goto LABEL_797;
                                                                }
                                                                if ( (int)v1559 - 8 >= v1371 )
                                                                {
                                                                  if ( v1371 < 0xFFFFFFF8 )
                                                                  {
                                                                    if ( (char *)dwBytesf + (unsigned int)v1559 < (char *)dwBytesf + v1371 + 8
                                                                      || (unsigned int)v1559
                                                                       + -8LL
                                                                       - (unsigned __int64)v1371 >= 8 )
                                                                    {
                                                                      v721 = -1073741762;
                                                                      v669 = v1628;
                                                                      goto LABEL_918;
                                                                    }
                                                                    v1484 = 0LL;
                                                                    v821 = 0LL;
                                                                    v1749 = 0LL;
                                                                    v721 = 0;
                                                                    Srcm = 0;
                                                                    if ( dwBytesf != (_DWORD *)-8LL )
                                                                    {
                                                                      v1390 = dwBytesf + 2;
                                                                      v822 = RtlULongLongAdd(v1595, v1371, &v1749);
                                                                      v824 = v1663;
                                                                      v721 = v822;
                                                                      v669 = v1628;
                                                                      dwBytesf = v823;
                                                                      v1656 = v819;
                                                                      if ( v822 < 0 )
                                                                        goto LABEL_797;
                                                                      v825 = v1595;
                                                                      v826 = v823;
                                                                      dwBytesf = v823;
                                                                      v820 = v1617;
                                                                      v827 = (unsigned __int64)v1595;
                                                                      v1656 = v819;
                                                                      while ( 1 )
                                                                      {
                                                                        v1671 = v824;
                                                                        v1583 = v826;
                                                                        if ( v827 >= v1749 )
                                                                          break;
                                                                        if ( v827 + 4 < v827 )
                                                                          goto LABEL_796;
                                                                        v1663 = v824;
                                                                        dwBytesf = v826;
                                                                        v1656 = v819;
                                                                        v1617 = v820;
                                                                        v1595 = v825;
                                                                        v1628 = v669;
                                                                        if ( v827 + 4 > v1749 )
                                                                        {
                                                                          dwBytesf = v826;
                                                                          v721 = -1073741811;
                                                                          v1663 = v824;
                                                                          goto LABEL_952;
                                                                        }
                                                                        v1710 = 0;
                                                                        v721 = RtlUIntAdd(4LL, *v1390, &v1710);
                                                                        if ( v721 < 0 )
                                                                        {
                                                                          dwBytesf = v1583;
                                                                          v1663 = v1671;
                                                                          v1628 = v669;
                                                                          v1617 = v820;
                                                                          v1656 = v819;
                                                                          goto LABEL_947;
                                                                        }
                                                                        v827 = (unsigned __int64)v1390 + v1710;
                                                                        if ( v827 < (unsigned __int64)v1390 )
                                                                        {
                                                                          v720 = v1583;
                                                                          v1663 = v1671;
                                                                          goto LABEL_795;
                                                                        }
                                                                        v1390 = (unsigned int *)((char *)v1390 + v1710);
                                                                        v721 = 0;
                                                                        if ( v827 > v1749 )
                                                                        {
                                                                          v721 = -1073741811;
                                                                          goto LABEL_916;
                                                                        }
                                                                        ++Srcm;
                                                                        v824 = v1671;
                                                                        v825 = v1595;
                                                                        v826 = v1583;
                                                                      }
                                                                      if ( v827 != v1749 )
                                                                      {
                                                                        v721 = -1073741811;
                                                                        goto LABEL_797;
                                                                      }
                                                                      v821 = 0LL;
                                                                    }
                                                                    if ( v1371 )
                                                                    {
                                                                      v828 = GetProcessHeap();
                                                                      v829 = v1371;
                                                                      v1484 = HeapAlloc(v828, 8u, v1371);
                                                                      v821 = v1484;
                                                                      if ( !v1484 )
                                                                      {
                                                                        v669 = v1628;
                                                                        v721 = -1073741801;
                                                                        goto LABEL_797;
                                                                      }
                                                                      v721 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      v829 = 0LL;
                                                                    }
                                                                    if ( v1595 )
                                                                    {
                                                                      memcpy_0(v821, v1595, v829);
                                                                      v821 = v1484;
                                                                    }
                                                                    v669 = v1628;
                                                                    v1784[0] = (LPVOID)__PAIR64__(v1371, Srcm);
                                                                    v1784[1] = v821;
LABEL_947:
                                                                    if ( v721 >= 0 && v1505 != LODWORD(v1784[0]) )
                                                                      goto LABEL_949;
LABEL_797:
                                                                    v88 = v721 | 0x10000000;
LABEL_798:
                                                                    v1668 = v88;
LABEL_736:
                                                                    if ( v669 )
                                                                    {
LABEL_737:
                                                                      v691 = GetProcessHeap();
                                                                      HeapFree(v691, 0, v1628);
                                                                    }
                                                                    if ( v1617 )
                                                                    {
                                                                      v1382 = (void *)*((_QWORD *)v1617 + 1);
                                                                      if ( v1382 )
                                                                      {
                                                                        v692 = GetProcessHeap();
                                                                        HeapFree(v692, 0, v1382);
                                                                        *((_QWORD *)v1617 + 1) = 0LL;
                                                                      }
                                                                      v1383 = (void *)*((_QWORD *)v1617 + 3);
                                                                      if ( v1383 )
                                                                      {
                                                                        v693 = GetProcessHeap();
                                                                        HeapFree(v693, 0, v1383);
                                                                        *((_QWORD *)v1617 + 3) = 0LL;
                                                                      }
                                                                      v1384 = (void *)*((_QWORD *)v1617 + 5);
                                                                      if ( v1384 )
                                                                      {
                                                                        v694 = GetProcessHeap();
                                                                        HeapFree(v694, 0, v1384);
                                                                        *((_QWORD *)v1617 + 5) = 0LL;
                                                                      }
                                                                      v695 = GetProcessHeap();
                                                                      HeapFree(v695, 0, v1617);
                                                                    }
                                                                    if ( v1656 )
                                                                    {
                                                                      v696 = GetProcessHeap();
                                                                      HeapFree(v696, 0, v1656);
                                                                    }
                                                                    if ( v1640 )
                                                                    {
                                                                      v697 = GetProcessHeap();
                                                                      HeapFree(v697, 0, v1640);
                                                                    }
                                                                    if ( v1663 )
                                                                    {
                                                                      v1385 = (void *)*((_QWORD *)v1663 + 1);
                                                                      if ( v1385 )
                                                                      {
                                                                        v698 = GetProcessHeap();
                                                                        HeapFree(v698, 0, v1385);
                                                                        *((_QWORD *)v1663 + 1) = 0LL;
                                                                      }
                                                                      v1386 = (void *)*((_QWORD *)v1663 + 3);
                                                                      if ( v1386 )
                                                                      {
                                                                        v699 = GetProcessHeap();
                                                                        HeapFree(v699, 0, v1386);
                                                                        *((_QWORD *)v1663 + 3) = 0LL;
                                                                      }
                                                                      v1387 = (void *)*((_QWORD *)v1663 + 5);
                                                                      if ( v1387 )
                                                                      {
                                                                        v700 = GetProcessHeap();
                                                                        HeapFree(v700, 0, v1387);
                                                                        *((_QWORD *)v1663 + 5) = 0LL;
                                                                      }
                                                                      v701 = GetProcessHeap();
                                                                      HeapFree(v701, 0, v1663);
                                                                    }
                                                                    if ( dwBytesf )
                                                                    {
                                                                      v702 = GetProcessHeap();
                                                                      HeapFree(v702, 0, dwBytesf);
                                                                    }
                                                                    if ( v88 < 0 )
                                                                      goto LABEL_118;
                                                                    if ( !LODWORD(v1784[0]) )
                                                                      goto LABEL_954;
                                                                    if ( !v1784[1] )
                                                                      goto LABEL_551;
                                                                    v1750 = v1784[1];
                                                                    v1668 = RtlULongLongAdd(v1784[1], 4LL, &v1750);
                                                                    v88 = v1668;
                                                                    if ( v1668 < 0 )
                                                                      goto LABEL_118;
                                                                    v706 = v1750;
                                                                    if ( !v703 )
                                                                      v706 = v704;
                                                                    v1750 = v706;
                                                                    if ( v703 != v705 )
                                                                      goto LABEL_628;
                                                                    v88 = *v706;
                                                                    v1668 = v88;
                                                                    if ( v88 == -805306333 )
                                                                    {
                                                                      v707 = -2147024774;
                                                                      v1677 = -2147024774;
                                                                    }
                                                                    else
                                                                    {
                                                                      v707 = v88;
                                                                      v1677 = v88;
                                                                      if ( v88 != -2147024774 )
                                                                      {
                                                                        v1677 = v88;
                                                                        if ( v88 < 0 )
                                                                          goto LABEL_118;
                                                                      }
                                                                    }
                                                                    if ( LODWORD(v1784[0]) != 6 )
                                                                    {
LABEL_954:
                                                                      v88 = -1073425151;
                                                                      goto LABEL_956;
                                                                    }
                                                                    if ( v1784[1] != v704 )
                                                                    {
                                                                      v830 = (unsigned int *)v1784[1];
                                                                      for ( ii = (int)v704; ; ii = 1 )
                                                                      {
                                                                        v832 = *v830;
                                                                        v833 = v830 + 1;
                                                                        if ( ii )
                                                                          break;
                                                                        if ( v833 < v830 )
                                                                          goto LABEL_1014;
                                                                        v830 = (unsigned int *)((char *)v833 + v832);
                                                                        v1677 = v707;
                                                                        if ( (unsigned int *)((char *)v833 + v832) < v833 )
                                                                          goto LABEL_1014;
                                                                      }
                                                                      if ( v833 < v830 )
                                                                      {
LABEL_1014:
                                                                        v88 = -1073741675;
                                                                        goto LABEL_956;
                                                                      }
                                                                      v834 = 0LL;
                                                                      if ( (_DWORD)v832 )
                                                                        v834 = (LPVOID *)v833;
                                                                      if ( (_DWORD)v832 != 8 )
                                                                        goto LABEL_628;
                                                                      v1391 = *v834;
                                                                      if ( !v1784[1] )
                                                                        goto LABEL_551;
                                                                      v835 = (int *)v1784[1];
                                                                      v836 = 0;
                                                                      v1751 = (int *)v1784[1];
                                                                      while ( v836 < 2 )
                                                                      {
                                                                        v1668 = RtlULongLongAdd(v835, 4LL, &v1751);
                                                                        v88 = v1668;
                                                                        if ( v1668 < 0 )
                                                                          goto LABEL_118;
                                                                        v1668 = RtlULongLongAdd(v1751, v837, &v1751);
                                                                        v88 = v1668;
                                                                        if ( v1668 < 0 )
                                                                          goto LABEL_118;
                                                                        v835 = v1751;
                                                                        v836 = v838 + 1;
                                                                      }
                                                                      v1668 = RtlULongLongAdd(v835, 4LL, &v1751);
                                                                      v88 = v1668;
                                                                      if ( v1668 < 0 )
                                                                        goto LABEL_118;
                                                                      v841 = v1751;
                                                                      if ( !v839 )
                                                                        v841 = v840;
                                                                      v1751 = v841;
                                                                      if ( v839 != 4 )
                                                                        goto LABEL_628;
                                                                      v1506 = *v841;
                                                                      if ( v1784[1] == v840 )
                                                                        goto LABEL_551;
                                                                      v842 = v1784[1];
                                                                      v843 = (unsigned int)v840;
                                                                      v1752 = v1784[1];
                                                                      while ( v843 < 3 )
                                                                      {
                                                                        v1668 = RtlULongLongAdd(v842, 4LL, &v1752);
                                                                        v88 = v1668;
                                                                        if ( v1668 < 0 )
                                                                          goto LABEL_118;
                                                                        v1668 = RtlULongLongAdd(v1752, v844, &v1752);
                                                                        v88 = v1668;
                                                                        if ( v1668 < 0 )
                                                                          goto LABEL_118;
                                                                        v842 = v1752;
                                                                        v843 = v845 + 1;
                                                                      }
                                                                      v88 = RtlULongLongAdd(v842, 4LL, &v1752);
                                                                      v1668 = v88;
                                                                      if ( v88 < 0 )
                                                                        goto LABEL_118;
                                                                      v847 = v1752;
                                                                      if ( !v846 )
                                                                        v847 = 0LL;
                                                                      v1752 = v847;
                                                                      if ( v1784[1] )
                                                                      {
                                                                        v848 = (unsigned int *)v1784[1];
                                                                        v849 = 0;
                                                                        v1753 = (unsigned int *)v1784[1];
                                                                        while ( v849 < 4 )
                                                                        {
                                                                          v1372 = *v848;
                                                                          v1668 = RtlULongLongAdd(v848, 4LL, &v1753);
                                                                          v88 = v1668;
                                                                          if ( v1668 < 0 )
                                                                            goto LABEL_118;
                                                                          v1668 = RtlULongLongAdd(v1753, v1372, &v1753);
                                                                          v88 = v1668;
                                                                          if ( v1668 < 0 )
                                                                            goto LABEL_118;
                                                                          v848 = v1753;
                                                                          v849 = v850 + 1;
                                                                        }
                                                                        v1668 = RtlULongLongAdd(v848, 4LL, &v1753);
                                                                        v88 = v1668;
                                                                        if ( v1668 < 0 )
                                                                          goto LABEL_118;
                                                                        v852 = v1753;
                                                                        if ( !v851 )
                                                                          v852 = 0LL;
                                                                        v1753 = v852;
                                                                        if ( v851 != 4 )
                                                                          goto LABEL_628;
                                                                        v1373 = *v852;
                                                                        if ( !v1784[1] )
                                                                          goto LABEL_551;
                                                                        v853 = (unsigned int *)v1784[1];
                                                                        v854 = 0;
                                                                        v1754 = (unsigned int *)v1784[1];
                                                                        while ( v854 < 5 )
                                                                        {
                                                                          Srcn = *v853;
                                                                          v1668 = RtlULongLongAdd(v853, 4LL, &v1754);
                                                                          v88 = v1668;
                                                                          if ( v1668 < 0 )
                                                                            goto LABEL_118;
                                                                          v1668 = RtlULongLongAdd(v1754, Srcn, &v1754);
                                                                          v88 = v1668;
                                                                          if ( v1668 < 0 )
                                                                            goto LABEL_118;
                                                                          v853 = v1754;
                                                                          v854 = v855 + 1;
                                                                        }
                                                                        v856 = *v853;
                                                                        v310 = RtlULongLongAdd(v853, 4LL, &v1754);
                                                                        v1668 = v310;
                                                                        v88 = v310;
                                                                        if ( v310 >= 0 )
                                                                        {
                                                                          v859 = v1754;
                                                                          if ( !v856 )
                                                                            v859 = 0LL;
                                                                          v1754 = v859;
                                                                          if ( v856 == 4 )
                                                                          {
                                                                            if ( (LPVOID)v1441 != v1391 )
                                                                              goto LABEL_954;
                                                                            v1574 = *v859;
                                                                            v1673 = v1506;
                                                                            if ( v1373 <= 4 && (unsigned int)v858 <= 4 )
                                                                            {
                                                                              memcpy_0(v1736, v857, v858);
                                                                              goto LABEL_332;
                                                                            }
                                                                            v88 = -2147024774;
                                                                            goto LABEL_956;
                                                                          }
                                                                          goto LABEL_628;
                                                                        }
LABEL_334:
                                                                        v1668 = v310;
                                                                        goto LABEL_118;
                                                                      }
                                                                    }
LABEL_551:
                                                                    v88 = -1073741811;
LABEL_956:
                                                                    v1668 = v88;
                                                                    goto LABEL_118;
                                                                  }
LABEL_795:
                                                                  v1617 = v820;
                                                                  dwBytesf = v720;
                                                                  v1628 = v669;
                                                                  v1656 = v819;
LABEL_796:
                                                                  v721 = -1073741675;
                                                                  goto LABEL_797;
                                                                }
                                                              }
LABEL_949:
                                                              v721 = -1073741762;
                                                              goto LABEL_797;
                                                            }
                                                            MemoryFree(v767);
                                                          }
                                                          v88 = -805306367;
                                                          dwBytesf = 0LL;
                                                          goto LABEL_734;
                                                        }
                                                      }
                                                    }
                                                    v88 = -805306355;
LABEL_734:
                                                    v1668 = v88;
                                                  }
LABEL_735:
                                                  v669 = v1628;
                                                  goto LABEL_736;
                                                }
                                              }
                                            }
LABEL_846:
                                            v88 = -805306306;
                                            goto LABEL_734;
                                          }
                                        }
                                      }
                                    }
                                  }
LABEL_801:
                                  if ( v88 >= 0 )
                                  {
                                    v719 = 0;
                                    goto LABEL_803;
                                  }
                                  goto LABEL_736;
                                }
LABEL_800:
                                v88 = -1073741675;
                                goto LABEL_798;
                              }
                            }
                          }
                        }
                        v88 = -1073741811;
                        goto LABEL_798;
                      }
                    }
                    v654 = -1073741801;
                  }
LABEL_696:
                  v662 = v1551;
                  if ( v1551 )
                  {
                    v1379 = *(void **)(v1551 + 8);
                    if ( v1379 )
                    {
                      v663 = GetProcessHeap();
                      HeapFree(v663, 0, v1379);
                      v662 = v1551;
                      *(_QWORD *)(v1551 + 8) = 0LL;
                    }
                    v1380 = *(void **)(v662 + 24);
                    if ( v1380 )
                    {
                      v664 = GetProcessHeap();
                      HeapFree(v664, 0, v1380);
                      v662 = v1551;
                      *(_QWORD *)(v1551 + 24) = 0LL;
                    }
                    v1381 = *(void **)(v662 + 40);
                    if ( v1381 )
                    {
                      v665 = GetProcessHeap();
                      HeapFree(v665, 0, v1381);
                      *(_QWORD *)(v1551 + 40) = 0LL;
                    }
                    v666 = GetProcessHeap();
                    HeapFree(v666, 0, (LPVOID)v1551);
                  }
                  v667 = 0LL;
                  goto LABEL_707;
                }
                v556 = (unsigned int *)v1783[1];
                v557 = 0;
                v1767 = v1783[1];
                while ( v557 < LODWORD(v1783[0]) )
                {
                  v558 = *v556;
                  v1692 = 0;
                  v1668 = RtlUIntAdd(4LL, v558, &v1692);
                  v88 = v1668;
                  if ( v1668 < 0 )
                    goto LABEL_118;
                  v88 = RtlULongLongAdd(v559, v1692, &v1767);
                  v1668 = v88;
                  if ( v88 < 0 )
                    goto LABEL_118;
                  v556 = (unsigned int *)v1767;
                  v557 = v560 + 1;
                }
                v1668 = RtlULongLongAdd(v556, 4LL, v1790);
                v88 = v1668;
                if ( v1668 < 0 )
                  goto LABEL_118;
                if ( (unsigned __int64)v561 + v562 + 4 <= v1783[1] + HIDWORD(v1783[0]) )
                {
                  v563 = (void *)v1790[0];
                  *v561 = v562;
                  memcpy_0(v563, L"Cortana-AllowCortana-Enabled", (unsigned int)v562);
                  ++LODWORD(v1783[0]);
                  goto LABEL_611;
                }
                v88 = -1073741789;
              }
              else
              {
                v88 = -1073741811;
              }
              v1668 = v88;
              goto LABEL_611;
            }
          }
        }
      }
    }
  }
  if ( v88 < 0 )
    goto LABEL_118;
LABEL_332:
  v310 = v1677;
  if ( v1677 )
  {
    v88 = v1677;
    goto LABEL_334;
  }
LABEL_118:
  v1783[0] = 0LL;
  v122 = (void *)v1783[1];
  if ( v1783[1] )
  {
    v123 = GetProcessHeap();
    HeapFree(v123, 0, v122);
    v1783[1] = 0LL;
  }
  v1784[0] = 0LL;
  v124 = v1784[1];
  if ( v1784[1] )
  {
    v125 = GetProcessHeap();
    HeapFree(v125, 0, v124);
    v1784[1] = 0LL;
  }
  if ( v120 )
  {
    v126 = GetProcessHeap();
    HeapFree(v126, 0, v120);
  }
  if ( v117 )
  {
    v127 = GetProcessHeap();
    HeapFree(v127, 0, v117);
  }
  if ( v88 < 0 )
  {
    v89 = 0;
    v3 = 1;
    v87 = v1736;
    v86 = 4LL;
    goto LABEL_61;
  }
  v90 = 0LL;
  if ( !v1574 )
    goto LABEL_89;
  v1755 = 0LL;
  dword_1808C9398 = v1574;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  v358 = 0;
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_364;
  v1377 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                             0LL,
                                             0LL,
                                             1027LL);
  if ( !v1377 )
  {
    GetLastError();
    goto LABEL_364;
  }
  v359 = off_1808C03D8[0]();
  v360 = dword_1808C9398;
  qword_1808CCC38 = v359;
  v1494 = dword_1808C9398;
  memset_0(&v1828, 0, 0x70uLL);
  v1633 = 0LL;
  v1849 = 0LL;
  memset(v1862, 0, 44);
  v1536 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v361 = dword_1808CCC34;
  if ( dword_1808CCC34 )
  {
LABEL_1048:
    dword_1808CCC34 = v361 + 1;
    goto LABEL_1049;
  }
  v1361 = 0;
  Srca = 0;
  v1590 = 0;
  v362 = (char *)MemoryAlloc(0x338uLL);
  v1425 = (WCHAR *)v362;
  if ( !v362 )
    goto LABEL_431;
  v363 = v362 + 7;
  v364 = -1;
  v365 = (unsigned __int8 *)&unk_18077F812;
  v366 = 0;
  v367 = 103LL;
  v368 = 0;
  do
  {
    v369 = *(v365 - 1) | (*(v365 - 2) << 8);
    v370 = v365[2] << 8;
    v371 = *v365;
    v365 += 8;
    v372 = *(v365 - 7) | ((v371 | (v369 << 8)) << 8);
    v373 = v372 ^ v358;
    v374 = *(v365 - 3) | ((*(v365 - 4) | ((*(v365 - 5) | v370) << 8)) << 8);
    v375 = v373 ^ v366 ^ v374 ^ 0xAC987321;
    v376 = (__ROR4__(v375, 22) + 4991 * __ROR4__(v375 + 1419157410, 27)) ^ v373;
    v377 = (43881 * __ROR4__(v376 + 133239679, 9) - __ROR4__(v376, 30)) ^ v375;
    v378 = (24670 * v377 - (v377 >> 13) - 123127970) ^ v376;
    v379 = (2033 * __ROR4__(v378 ^ 0xAB69, 26) - __ROR4__(v378, 30)) ^ v377;
    v380 = (133239679 - (v379 ^ 0xAB69605E)) ^ v378;
    v381 = (43881 * (v380 ^ 0x137F)) ^ __ROR4__(v380, 6) ^ v379;
    v382 = (__ROR4__(v381, 30) + 24670 * __ROR4__(v381 + 133239679, 15)) ^ v380;
    v383 = (2033 * __ROR4__(v382 + 1419157410, 14) - __ROR4__(v382, 24)) ^ v381;
    v384 = __ROR4__(v383, 10) ^ (4991 * __ROR4__(v383 ^ 0xAB69605E, 12)) ^ v382;
    v385 = (v384 >> 10) ^ (43881 * (v384 ^ 0x7F1)) ^ v383;
    v386 = (2033 * (__ROR4__(~v385, 5) + 24670)) ^ v384;
    v387 = v385 ^ (v386 - 2033) ^ 0xAB69605E;
    v388 = ((v387 >> 2) + 4991 * __ROR4__(v385 ^ (v386 - 2033) ^ 0xAB6967AF, 30)) ^ v386;
    v389 = (__ROR4__(v388, 25) + 43881 * __ROR4__(v388 - 133239679, 6)) ^ v387;
    v390 = (24670 * (v389 ^ 0x137F) + __ROR4__(v389, 9)) ^ v388;
    v391 = (__ROR4__(v390, 25) + 2033 * __ROR4__(v390 ^ 0xAB69, 27)) ^ v389;
    v392 = v390 ^ v391 ^ 0xAC987321;
    v393 = (4991 * __ROR4__(v392, 3) - 219010071) ^ v391;
    v394 = (24670 * __ROR4__(v393 - 133239679, 1) - __ROR4__(v393, 6)) ^ v392;
    v395 = (__ROR4__(v394, 18) + 2033 * __ROR4__(v394 - 1419157410, 29)) ^ v393;
    v396 = (4991 * __ROR4__(v395 - 1419157410, 17) - __ROR4__(v395, 14)) ^ v394;
    v397 = (v396 >> 3) ^ (43881 * (v396 ^ 0x605E)) ^ v395;
    v398 = 24670 * __ROR4__(v397 ^ 0x7F1137F, 28);
    v399 = __ROR4__(v397, 30);
    v366 = v364 ^ v397;
    v364 = v374;
    v358 = v368 ^ v396 ^ v399 ^ v398;
    *(v363 - 4) = v358;
    *v363 = v366;
    v363 += 8;
    v368 = v372;
    *(v363 - 13) = BYTE1(v358);
    *(v363 - 9) = BYTE1(v366);
    *(v363 - 14) = (unsigned __int16)(v358 >> 8) >> 8;
    *(v363 - 10) = (unsigned __int16)(v366 >> 8) >> 8;
    *(v363 - 15) = __ROR4__((((v358 >> 8) | (v358 << 24)) >> 8) | (((v358 >> 8) | (v358 << 24)) << 24), 8);
    *(v363 - 11) = __ROR4__((((v366 >> 8) | (v366 << 24)) >> 8) | (((v366 >> 8) | (v366 << 24)) << 24), 8);
    --v367;
  }
  while ( v367 );
  v360 = v1494;
  v88 = v1668;
  v400 = 0LL;
  v401 = v1425;
  v402 = 0;
  do
    v402 ^= *((_BYTE *)v1425 + v400++);
  while ( v400 < 0x338 );
  if ( v402 != 64LL )
  {
    MemoryFree(v1425);
    goto LABEL_431;
  }
  *((_BYTE *)v1425 + 823) = 0;
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v401 )
    {
      v860 = v401;
      v861 = -1LL;
      do
        ++v861;
      while ( v401[v861] );
      v862 = &v401[v861];
      v1399 = (unsigned __int16 *)((char *)&unk_1808C93A0 + 24 * v1590);
      if ( !GetModuleHandleExW(0, v860, (HMODULE *)v1399) )
      {
        v864 = -1073741702;
        goto LABEL_1044;
      }
      v863 = (HMODULE *)((char *)&unk_1808C93A0 + 24 * v1590);
      v864 = 0;
      Srca = 0;
      if ( **(_WORD **)v1399 == 23117
        && (v865 = *(int *)(*(_QWORD *)v1399 + 60LL), (unsigned int)v865 < 0x10000000)
        && (v866 = *(_QWORD *)v1399 + v865, v866 >= *(_QWORD *)v1399)
        && *(_DWORD *)v866 == 17744 )
      {
        if ( ((*(_WORD *)(v866 + 24) - 267) & 0xFEFF) != 0 )
        {
          v864 = -1073741811;
          goto LABEL_1031;
        }
        *(_QWORD *)(v1399 + 6) = *(_QWORD *)(v866 + 136);
        *((_DWORD *)v1399 + 2) = *(_DWORD *)(v866 + 80);
      }
      else
      {
        v864 = -1073741701;
LABEL_1031:
        Srca = v864;
      }
      v867 = *(_DWORD *)(v862 + 1);
      v868 = 0;
      v1584 = v867;
      v401 = v862 + 3;
      while ( 1 )
      {
        v1545 = v868;
        if ( v868 >= v867 )
          break;
        v869 = (const CHAR *)v401;
        v870 = -1LL;
        do
          ++v870;
        while ( *((_BYTE *)v401 + v870) );
        v401 = (const WCHAR *)((char *)v401 + v870 + 1);
        if ( v864 >= 0 )
        {
          v871 = GetProcAddress(*v863, v869);
          if ( !v871 )
            goto LABEL_1044;
          v863 = (HMODULE *)((char *)&unk_1808C93A0 + 24 * v1590);
          off_1808C0340[v1361] = v871;
          v867 = v1584;
        }
        ++v1361;
        v868 = v1545 + 1;
      }
      ++v1590;
      continue;
    }
    break;
  }
  v864 = Srca;
LABEL_1044:
  if ( v1425 )
  {
    v872 = GetProcessHeap();
    HeapFree(v872, 0, v1425);
  }
  if ( v864 >= 0 )
  {
    v361 = dword_1808CCC34;
    goto LABEL_1048;
  }
LABEL_431:
  v403 = (HMODULE *)&unk_1808C93A0;
  v404 = 4LL;
  do
  {
    if ( *v403 )
      FreeLibrary(*v403);
    v403 += 3;
    --v404;
  }
  while ( v404 );
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  v405 = 2LL;
  v406 = off_1808C0340;
  v407 = off_1807174F0;
  do
  {
    v408 = *((_OWORD *)v407 + 1);
    *(_OWORD *)v406 = *(_OWORD *)v407;
    v409 = *((_OWORD *)v407 + 2);
    *((_OWORD *)v406 + 1) = v408;
    v410 = *((_OWORD *)v407 + 3);
    *((_OWORD *)v406 + 2) = v409;
    v411 = *((_OWORD *)v407 + 4);
    *((_OWORD *)v406 + 3) = v410;
    v412 = *((_OWORD *)v407 + 5);
    *((_OWORD *)v406 + 4) = v411;
    v413 = *((_OWORD *)v407 + 6);
    *((_OWORD *)v406 + 5) = v412;
    v414 = *((_OWORD *)v407 + 7);
    v407 += 16;
    *((_OWORD *)v406 + 6) = v413;
    v406 += 16;
    *((_OWORD *)v406 - 1) = v414;
    --v405;
  }
  while ( v405 );
  v415 = *((_OWORD *)v407 + 1);
  *(_OWORD *)v406 = *(_OWORD *)v407;
  v416 = *((_OWORD *)v407 + 2);
  *((_OWORD *)v406 + 1) = v415;
  v417 = *((_OWORD *)v407 + 3);
  *((_OWORD *)v406 + 2) = v416;
  v418 = *((_OWORD *)v407 + 4);
  *((_OWORD *)v406 + 3) = v417;
  v419 = *((_OWORD *)v407 + 5);
  *((_OWORD *)v406 + 4) = v418;
  v420 = *((_OWORD *)v407 + 6);
  *((_OWORD *)v406 + 5) = v419;
  *((_OWORD *)v406 + 6) = v420;
LABEL_1049:
  v1362 = 0;
  Srcb = 0;
  _InterlockedExchange(&dword_1808CCC40, 0);
  LODWORD(v1900[0]) = 0;
  WORD2(v1900[0]) = 0;
  v1756 = 0LL;
  v1794 = 0LL;
  v1596 = 0;
  v1546 = 0;
  v1431 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v873 = dword_1808CCC34;
  if ( dword_1808CCC34 )
  {
LABEL_1095:
    dword_1808CCC34 = v873 + 1;
    goto LABEL_447;
  }
  v1575 = 0;
  v1649 = 0;
  v1665 = 0;
  v874 = (char *)MemoryAlloc(0x338uLL);
  v1449 = (WCHAR *)v874;
  if ( !v874 )
    goto LABEL_1059;
  v875 = v874 + 7;
  v876 = -1;
  v877 = (unsigned __int8 *)&unk_18077F812;
  v878 = 0;
  v879 = 103LL;
  v880 = 0;
  v881 = 0;
  do
  {
    v882 = *(v877 - 1) | (*(v877 - 2) << 8);
    v883 = v877[2] << 8;
    v884 = *v877;
    v877 += 8;
    v885 = *(v877 - 7) | ((v884 | (v882 << 8)) << 8);
    v886 = v885 ^ v881;
    v887 = *(v877 - 3) | ((*(v877 - 4) | ((*(v877 - 5) | v883) << 8)) << 8);
    v888 = v886 ^ v887 ^ v880 ^ 0xAC987321;
    v889 = (__ROR4__(v888, 22) + 4991 * __ROR4__(v888 + 1419157410, 27)) ^ v886;
    v890 = (43881 * __ROR4__(v889 + 133239679, 9) - __ROR4__(v889, 30)) ^ v888;
    v891 = (24670 * v890 - (v890 >> 13) - 123127970) ^ v889;
    v892 = (2033 * __ROR4__(v891 ^ 0xAB69, 26) - __ROR4__(v891, 30)) ^ v890;
    v893 = (133239679 - (v892 ^ 0xAB69605E)) ^ v891;
    v894 = (43881 * (v893 ^ 0x137F)) ^ __ROR4__(v893, 6) ^ v892;
    v895 = (__ROR4__(v894, 30) + 24670 * __ROR4__(v894 + 133239679, 15)) ^ v893;
    v896 = (2033 * __ROR4__(v895 + 1419157410, 14) - __ROR4__(v895, 24)) ^ v894;
    v897 = __ROR4__(v896, 10) ^ (4991 * __ROR4__(v896 ^ 0xAB69605E, 12)) ^ v895;
    v898 = v896 ^ (v897 >> 10) ^ (43881 * (v897 ^ 0x7F1));
    v899 = (2033 * (__ROR4__(~v898, 5) + 24670)) ^ v897;
    v900 = v898 ^ (v899 - 2033) ^ 0xAB69605E;
    v901 = ((v900 >> 2) + 4991 * __ROR4__(v898 ^ (v899 - 2033) ^ 0xAB6967AF, 30)) ^ v899;
    v902 = (__ROR4__(v901, 25) + 43881 * __ROR4__(v901 - 133239679, 6)) ^ v900;
    v903 = (24670 * (v902 ^ 0x137F) + __ROR4__(v902, 9)) ^ v901;
    v904 = (__ROR4__(v903, 25) + 2033 * __ROR4__(v903 ^ 0xAB69, 27)) ^ v902;
    v905 = v903 ^ v904 ^ 0xAC987321;
    v906 = (4991 * __ROR4__(v905, 3) - 219010071) ^ v904;
    v907 = (24670 * __ROR4__(v906 - 133239679, 1) - __ROR4__(v906, 6)) ^ v905;
    v908 = (__ROR4__(v907, 18) + 2033 * __ROR4__(v907 - 1419157410, 29)) ^ v906;
    v909 = (4991 * __ROR4__(v908 - 1419157410, 17) - __ROR4__(v908, 14)) ^ v907;
    v910 = (v909 >> 3) ^ (43881 * (v909 ^ 0x605E)) ^ v908;
    v911 = 24670 * __ROR4__(v910 ^ 0x7F1137F, 28);
    v912 = __ROR4__(v910, 30);
    v880 = v876 ^ v910;
    v876 = v887;
    v881 = v878 ^ v909 ^ v912 ^ v911;
    *(v875 - 4) = v881;
    *v875 = v880;
    v875 += 8;
    *(v875 - 13) = BYTE1(v881);
    *(v875 - 9) = BYTE1(v880);
    *(v875 - 14) = (unsigned __int16)(v881 >> 8) >> 8;
    *(v875 - 10) = (unsigned __int16)(v880 >> 8) >> 8;
    *(v875 - 15) = __ROR4__((((v881 >> 8) | (v881 << 24)) >> 8) | (((v881 >> 8) | (v881 << 24)) << 24), 8);
    v878 = v885;
    *(v875 - 11) = __ROR4__((((v880 >> 8) | (v880 << 24)) >> 8) | (((v880 >> 8) | (v880 << 24)) << 24), 8);
    --v879;
  }
  while ( v879 );
  v360 = v1494;
  v913 = v1449;
  v914 = 0LL;
  v915 = 0;
  do
    v915 ^= *((_BYTE *)v1449 + v914++);
  while ( v914 < 0x338 );
  if ( v915 != 64LL )
  {
    MemoryFree(v1449);
    goto LABEL_1059;
  }
  *((_BYTE *)v1449 + 823) = 0;
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v913 )
    {
      v934 = v913;
      v935 = -1LL;
      do
        ++v935;
      while ( v913[v935] );
      v936 = &v913[v935];
      v1485 = (char *)&unk_1808C93A0 + 24 * v1665;
      if ( !GetModuleHandleExW(0, v934, (HMODULE *)v1485) )
      {
        v938 = -1073741702;
        goto LABEL_1091;
      }
      v937 = (HMODULE *)((char *)&unk_1808C93A0 + 24 * v1665);
      v938 = 0;
      v1649 = 0;
      if ( **(_WORD **)v1485 == 23117
        && (v939 = *(int *)(*(_QWORD *)v1485 + 60LL), (unsigned int)v939 < 0x10000000)
        && (v940 = *(_QWORD *)v1485 + v939, v940 >= *(_QWORD *)v1485)
        && *(_DWORD *)v940 == 17744 )
      {
        if ( ((*(_WORD *)(v940 + 24) - 267) & 0xFEFF) != 0 )
        {
          v938 = -1073741811;
          goto LABEL_1078;
        }
        *(_QWORD *)(v1485 + 12) = *(_QWORD *)(v940 + 136);
        *((_DWORD *)v1485 + 2) = *(_DWORD *)(v940 + 80);
      }
      else
      {
        v938 = -1073741701;
LABEL_1078:
        v1649 = v938;
      }
      v941 = *(_DWORD *)(v936 + 1);
      v942 = 0;
      v1641 = v941;
      v913 = v936 + 3;
      while ( 1 )
      {
        v1507 = v942;
        if ( v942 >= v941 )
          break;
        v943 = (const CHAR *)v913;
        v944 = -1LL;
        do
          ++v944;
        while ( *((_BYTE *)v913 + v944) );
        v913 = (const WCHAR *)((char *)v913 + v944 + 1);
        if ( v938 >= 0 )
        {
          v945 = GetProcAddress(*v937, v943);
          if ( !v945 )
            goto LABEL_1091;
          v937 = (HMODULE *)((char *)&unk_1808C93A0 + 24 * v1665);
          off_1808C0340[v1575] = v945;
          v941 = v1641;
        }
        ++v1575;
        v942 = v1507 + 1;
      }
      ++v1665;
      continue;
    }
    break;
  }
  v938 = v1649;
LABEL_1091:
  if ( v1449 )
  {
    v946 = GetProcessHeap();
    HeapFree(v946, 0, v1449);
  }
  if ( v938 >= 0 )
  {
    v873 = dword_1808CCC34;
    goto LABEL_1095;
  }
LABEL_1059:
  v916 = (HMODULE *)&unk_1808C93A0;
  v917 = 4LL;
  do
  {
    if ( *v916 )
      FreeLibrary(*v916);
    v916 += 3;
    --v917;
  }
  while ( v917 );
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  v918 = 2LL;
  v919 = off_1808C0340;
  v920 = off_1807174F0;
  do
  {
    v921 = *((_OWORD *)v920 + 1);
    *(_OWORD *)v919 = *(_OWORD *)v920;
    v922 = *((_OWORD *)v920 + 2);
    *((_OWORD *)v919 + 1) = v921;
    v923 = *((_OWORD *)v920 + 3);
    *((_OWORD *)v919 + 2) = v922;
    v924 = *((_OWORD *)v920 + 4);
    *((_OWORD *)v919 + 3) = v923;
    v925 = *((_OWORD *)v920 + 5);
    *((_OWORD *)v919 + 4) = v924;
    v926 = *((_OWORD *)v920 + 6);
    *((_OWORD *)v919 + 5) = v925;
    v927 = *((_OWORD *)v920 + 7);
    v920 += 16;
    *((_OWORD *)v919 + 6) = v926;
    v919 += 16;
    *((_OWORD *)v919 - 1) = v927;
    --v918;
  }
  while ( v918 );
  v928 = *((_OWORD *)v920 + 1);
  *(_OWORD *)v919 = *(_OWORD *)v920;
  v929 = *((_OWORD *)v920 + 2);
  *((_OWORD *)v919 + 1) = v928;
  v930 = *((_OWORD *)v920 + 3);
  *((_OWORD *)v919 + 2) = v929;
  v931 = *((_OWORD *)v920 + 4);
  *((_OWORD *)v919 + 3) = v930;
  v932 = *((_OWORD *)v920 + 5);
  *((_OWORD *)v919 + 4) = v931;
  v933 = *((_OWORD *)v920 + 6);
  *((_OWORD *)v919 + 5) = v932;
  *((_OWORD *)v919 + 6) = v933;
LABEL_447:
  v426 = 0LL;
  _InterlockedExchange(&dword_1808CCC40, 0);
  memset_0(&v1828, 0, 0x70uLL);
  v1639 = v360 & 0xF;
  LOWORD(v1900[0]) = (v360 >> 4) & 0xF;
  WORD1(v1900[0]) = (v360 >> 8) & 0xF;
  v1849 = 0LL;
  WORD2(v1900[0]) = (v360 >> 12) & 0xF;
  v1446 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
  v1662 = -1;
  if ( !v1446 )
  {
    v947 = GetLastError();
    v421 = v947;
    if ( v947 > 0 )
      v421 = (unsigned __int16)v947 | 0x80070000;
    if ( v421 >= 0 )
      v421 = -2147467259;
    goto LABEL_469;
  }
  v1757 = 0LL;
  v1495 = 0;
  v1745 = 0LL;
  v1759 = 0LL;
  v1760 = 0LL;
  memset(v1892, 0, sizeof(v1892));
  v1761 = 0LL;
  v421 = 0;
  v1711 = 0;
  v1732 = 0LL;
  v1712 = 0;
  if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808C03E0[0])(
          8LL,
          &v1711,
          0LL,
          &v1712) )
  {
    v427 = GetLastError();
    v421 = v427;
    if ( v427 > 0 )
    {
      v421 = (unsigned __int16)v427;
      goto LABEL_1100;
    }
    goto LABEL_1101;
  }
  v949 = MemoryAlloc(2LL * v1712);
  SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1761, v949);
  if ( v1761
    && (v950 = MemoryAlloc(4LL * (v1711 + 1)),
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1732, v950),
        (v951 = v1732) != 0LL) )
  {
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1808C03E0[0])(
           8LL,
           &v1711,
           v1761,
           &v1712) )
    {
      v952 = v951;
      if ( v1711 )
      {
        v953 = v1761;
        v954 = v951;
        for ( jj = 0; jj < v1711; ++jj )
        {
          *v954 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808C03F0)(v953, 0LL);
          v956 = -1LL;
          do
            ++v956;
          while ( *(_WORD *)(v953 + 2 * v956) );
          ++v954;
          v953 += 2 * v956 + 2;
        }
        v421 = 0;
        v1732 = v954;
        v952 = v954;
      }
      *v952 = 1033;
      v426 = v951;
      v1732 = 0LL;
      v1495 = v1711 + 1;
      v1757 = v951;
    }
    else
    {
      v421 = GetLastError();
      v948 = v421 < 0;
      if ( v421 > 0 )
      {
        v421 = (unsigned __int16)v421;
LABEL_1100:
        v421 |= 0x80070000;
LABEL_1101:
        v948 = v421 < 0;
      }
      if ( !v948 )
        v421 = -2147467259;
    }
  }
  else
  {
    v421 = -2147024882;
  }
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1732);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1761);
  if ( v421 >= 0 )
  {
    v957 = 0;
    v958 = 0;
    v1576 = 0;
    if ( v1495 )
    {
      v959 = 0LL;
      while ( 2 )
      {
        for ( kk = 0; kk < 0x26; ++kk )
        {
          if ( v426[v959] == dword_1807CF830[kk] )
          {
            v957 = kk;
            v1576 = kk;
            goto LABEL_1124;
          }
        }
        ++v958;
        ++v959;
        if ( v958 < v1495 )
          continue;
        break;
      }
      v957 = 0;
    }
LABEL_1124:
    v961 = v957;
    v1508 = 0;
    v962 = (unsigned int)dword_1807CF830[v957];
    memset(v1855, 0, sizeof(v1855));
    if ( ((unsigned int (__fastcall *)(__int64, _BYTE *, __int64))off_1808C03E8[0])(v962, v1901, 85LL)
      && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808C03D0[0])(v1901, 88LL, v1855, 16LL) > 0 )
    {
      v1508 = (HIDWORD(v1855[0]) >> 27) & 1;
    }
    memset_0(v1899, 0, 0x90uLL);
    v963 = L"Segoe UI Light";
    v964 = 19LL;
    v965 = (const wchar_t **)&v1898;
    do
    {
      *v965 = v963;
      v966 = -1LL;
      do
        ++v966;
      while ( v963[v966] );
      ++v965;
      v963 += v966 + 1;
      --v964;
    }
    while ( v964 );
    v1431 = *(_QWORD *)&v1899[8 * byte_1807CF7A0[3 * v961] - 8];
    v1400 = *(unsigned __int16 **)&v1899[8 * byte_1807CF7A0[3 * v961 + 1] - 8];
    v424 = *(char **)&v1899[8 * byte_1807CF7A0[3 * v961 + 2] - 8];
    dwBytesg = (SIZE_T)v424;
    v1629 = v424;
    v967 = (char *)MemoryAlloc(0x1C90uLL);
    v968 = 0;
    v1618 = v967;
    if ( v967 )
    {
      v969 = -1;
      v970 = v967 + 7;
      v971 = 0;
      v972 = (unsigned __int8 *)&unk_1807CF8D2;
      v973 = 914LL;
      v974 = 0;
      do
      {
        v975 = *(v972 - 1) | (*(v972 - 2) << 8);
        v976 = v972[2] << 8;
        v977 = *v972;
        v972 += 8;
        v978 = *(v972 - 7) | ((v977 | (v975 << 8)) << 8);
        v979 = v978 ^ v968;
        v980 = *(v972 - 3) | ((*(v972 - 4) | ((*(v972 - 5) | v976) << 8)) << 8);
        v981 = v979 ^ v971 ^ v980 ^ 0xAC987321;
        v982 = (__ROR4__(v981, 22) + 4991 * __ROR4__(v981 + 1419157410, 27)) ^ v979;
        v983 = (43881 * __ROR4__(v982 + 133239679, 9) - __ROR4__(v982, 30)) ^ v981;
        v984 = (24670 * v983 - (v983 >> 13) - 123127970) ^ v982;
        v985 = (2033 * __ROR4__(v984 ^ 0xAB69, 26) - __ROR4__(v984, 30)) ^ v983;
        v986 = (133239679 - (v985 ^ 0xAB69605E)) ^ v984;
        v987 = (43881 * (v986 ^ 0x137F)) ^ __ROR4__(v986, 6) ^ v985;
        v988 = (__ROR4__(v987, 30) + 24670 * __ROR4__(v987 + 133239679, 15)) ^ v986;
        v989 = (2033 * __ROR4__(v988 + 1419157410, 14) - __ROR4__(v988, 24)) ^ v987;
        v990 = __ROR4__(v989, 10) ^ (4991 * __ROR4__(v989 ^ 0xAB69605E, 12)) ^ v988;
        v991 = v989 ^ (v990 >> 10) ^ (43881 * (v990 ^ 0x7F1));
        v992 = (2033 * (__ROR4__(~v991, 5) + 24670)) ^ v990;
        v993 = v991 ^ (v992 - 2033) ^ 0xAB69605E;
        v994 = ((v993 >> 2) + 4991 * __ROR4__(v991 ^ (v992 - 2033) ^ 0xAB6967AF, 30)) ^ v992;
        v995 = (__ROR4__(v994, 25) + 43881 * __ROR4__(v994 - 133239679, 6)) ^ v993;
        v996 = (24670 * (v995 ^ 0x137F) + __ROR4__(v995, 9)) ^ v994;
        v997 = (__ROR4__(v996, 25) + 2033 * __ROR4__(v996 ^ 0xAB69, 27)) ^ v995;
        v998 = v997 ^ v996 ^ 0xAC987321;
        v999 = (4991 * __ROR4__(v998, 3) - 219010071) ^ v997;
        v1000 = (24670 * __ROR4__(v999 - 133239679, 1) - __ROR4__(v999, 6)) ^ v998;
        v1001 = (__ROR4__(v1000, 18) + 2033 * __ROR4__(v1000 - 1419157410, 29)) ^ v999;
        v1002 = (4991 * __ROR4__(v1001 - 1419157410, 17) - __ROR4__(v1001, 14)) ^ v1000;
        v1003 = (v1002 >> 3) ^ (43881 * (v1002 ^ 0x605E)) ^ v1001;
        v1004 = 24670 * __ROR4__(v1003 ^ 0x7F1137F, 28);
        v1005 = __ROR4__(v1003, 30);
        v971 = v969 ^ v1003;
        v969 = v980;
        v968 = v974 ^ v1002 ^ v1005 ^ v1004;
        *(v970 - 4) = v968;
        *v970 = v971;
        v970 += 8;
        v974 = v978;
        *(v970 - 13) = BYTE1(v968);
        *(v970 - 9) = BYTE1(v971);
        *(v970 - 14) = (unsigned __int16)(v968 >> 8) >> 8;
        *(v970 - 10) = (unsigned __int16)(v971 >> 8) >> 8;
        *(v970 - 15) = __ROR4__((((v968 >> 8) | (v968 << 24)) >> 8) | (((v968 >> 8) | (v968 << 24)) << 24), 8);
        *(v970 - 11) = __ROR4__((((v971 >> 8) | (v971 << 24)) >> 8) | (((v971 >> 8) | (v971 << 24)) << 24), 8);
        --v973;
      }
      while ( v973 );
      v88 = v1668;
      v1006 = v1618;
      v1007 = 0LL;
      v1008 = 0LL;
      do
      {
        v1009 = (__m128)_mm_loadu_si128((const __m128i *)&v1618[v1007]);
        v1007 += 16LL;
        v1010 = _mm_xor_ps(v1009, v1008);
        v1008 = v1010;
      }
      while ( v1007 < 0x1C90 );
      v1011 = _mm_xor_ps(v1010, (__m128)_mm_srli_si128((__m128i)v1010, 8));
      v1012 = _mm_xor_ps(v1011, (__m128)_mm_srli_si128((__m128i)v1011, 4));
      v1013 = _mm_xor_ps(v1012, (__m128)_mm_srli_si128((__m128i)v1012, 2));
      if ( (unsigned __int8)_mm_cvtsi128_si32((__m128i)_mm_xor_ps(v1013, (__m128)_mm_srli_si128((__m128i)v1013, 1))) == 127LL )
      {
        v1745 = v1618;
        v421 = 0;
        v1759 = 7312LL;
        if ( v1618 )
          v1759 = 7312LL;
        else
          v1006 = 0LL;
        v1014 = v1892;
        v1015 = 6LL;
        do
        {
          for ( mm = 0; mm < 0x26; ++mm )
          {
            if ( v1576 == mm )
              *v1014 = v1006;
            v1017 = -1LL;
            do
              ++v1017;
            while ( v1006[v1017] );
            v1006 += v1017 + 1;
          }
          ++v1014;
          --v1015;
        }
        while ( v1015 );
        v1018 = MemoryAlloc(0x18uLL);
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1760, v1018);
        v1019 = v1760;
        if ( v1760 )
        {
          v1020 = 0;
          *v1760 = 0LL;
          *((_QWORD *)v1019 + 2) = 0LL;
          v1759 = 7312LL;
          while ( 2 )
          {
            v1577 = v1020;
            if ( v1020 >= 3 )
            {
              v1028 = (void **)v1019;
              v1019 = 0LL;
              v1756 = v1028;
              v1828 = v1508;
              v1760 = 0LL;
            }
            else
            {
              v1021 = 0;
              v1619 = v1020;
              while ( 1 )
              {
                if ( v1021 >= 6 )
                  goto LABEL_1167;
                if ( *((_WORD *)v1900 + v1020) == word_1807CF818[v1021] )
                  break;
                ++v1021;
              }
              v1022 = (_BYTE *)*((_QWORD *)v1892 + v1021);
              v1023 = -1LL;
              v1657 = v1022;
              do
                ++v1023;
              while ( v1022[v1023] );
              v1024 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))off_1808C0400[0])(
                        65001LL,
                        0LL,
                        v1022,
                        (unsigned int)(v1023 + 1),
                        0LL,
                        0);
              v1650 = v1024;
              if ( v1024 )
              {
                v1025 = MemoryAlloc(2LL * v1024);
                *((_QWORD *)v1019 + v1619) = v1025;
                if ( !v1025 )
                  goto LABEL_1159;
                v1026 = -1LL;
                do
                  ++v1026;
                while ( v1657[v1026] );
                if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, void *, int))off_1808C0400[0])(
                       65001LL,
                       0LL,
                       v1657,
                       (unsigned int)(v1026 + 1),
                       v1025,
                       v1650) )
                {
LABEL_1167:
                  v1020 = v1577 + 1;
                  continue;
                }
              }
              v1027 = GetLastError();
              v421 = v1027;
              if ( v1027 > 0 )
                v421 = (unsigned __int16)v1027 | 0x80070000;
              if ( v421 >= 0 )
                v421 = -2147467259;
            }
            break;
          }
        }
        else
        {
LABEL_1159:
          v421 = -2147024882;
        }
        if ( v1019 )
        {
          v1029 = 3LL;
          dwBytesg = (SIZE_T)v1629;
          v1759 = 7312LL;
          do
          {
            v1030 = *(_WORD **)v1019;
            if ( *(_QWORD *)v1019 )
            {
              v1031 = -1LL;
              do
                ++v1031;
              while ( v1030[v1031] );
              memset(v1030, 0, 2 * v1031 + 2);
              MemoryFree(*(void **)v1019);
              v1029 = lpMema;
            }
            v1019 = (_OWORD *)((char *)v1019 + 8);
            lpMema = --v1029;
          }
          while ( v1029 );
        }
      }
      else
      {
        v421 = -1073425151;
        MemoryFree(v1618);
      }
      v422 = v1759;
      v424 = (char *)dwBytesg;
    }
    else
    {
      v421 = -2147024882;
      v422 = 0LL;
    }
    v423 = v1400;
  }
  else
  {
    v422 = 0LL;
    v423 = 0LL;
    v424 = 0LL;
  }
  v1396 = v423;
  if ( v1745 )
    memset(v1745, 0, v422);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1760);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1745);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1757);
  if ( v421 < 0 )
    goto LABEL_468;
  if ( v1756 )
    v425 = v1756;
  else
    v425 = 0LL;
  v1830 = *v425;
  if ( v1756 )
    v1032 = v1756;
  else
    v1032 = 0LL;
  v1831 = v1032[1];
  if ( v1756 )
    v1033 = v1756;
  else
    v1033 = 0LL;
  v1832 = v1033[2];
  v1795 = 0LL;
  LODWORD(v1795) = 16;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808C04A8)(66LL, 0LL, &v1795) )
  {
    v1034 = GetLastError();
    v421 = v1034;
    if ( v1034 > 0 )
      v421 = (unsigned __int16)v1034 | 0x80070000;
    v1829 = 0;
    if ( v421 >= 0 )
      v421 = -2147467259;
    goto LABEL_468;
  }
  v1829 = BYTE4(v1795) & 1;
  switch ( v1639 )
  {
    case 1:
      v1362 = 42;
      goto LABEL_1195;
    case 2:
      v1362 = 15;
LABEL_1195:
      Srcb = 11;
      break;
    case 3:
      v1362 = 225;
      Srcb = 225;
      break;
  }
  v428 = 96;
  v1496 = 96;
  memset_0(v1888, 0, 0xDCuLL);
  v1889 = 220;
  if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808C0420[0])(0LL, 0xFFFFFFFFLL, v1888) )
  {
    v428 = v1890;
    *((_QWORD *)&v1794 + 1) = v1891;
    *(_QWORD *)&v1794 = 0LL;
    if ( v1890 < 0x60u )
      v428 = 96;
    v1496 = v428;
  }
  v429 = v424;
  if ( v1639 == 1 )
    v429 = (char *)v1431;
  dwBytesd = v429;
  memset_0(v1879, 0, 0x5CuLL);
  v421 = 0;
  lpMemf = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
  if ( lpMemf )
  {
    v1035 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1362, v428, 72LL);
    v1879[4] = 400;
    v1879[0] = -v1035;
    v1880 = 5;
    StringCchCopyW((char *)v1881, 32LL, dwBytesd);
    v1036 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1879);
    if ( v1036 )
    {
      v1833 = v1036;
    }
    else
    {
      v421 = GetLastError();
      v1037 = v421 < 0;
      if ( v421 > 0 )
      {
        v421 = (unsigned __int16)v421 | 0x80070000;
        v1037 = v421 < 0;
      }
      if ( !v1037 )
        v421 = -2147467259;
    }
    ((void (__fastcall *)(_QWORD, LPVOID))off_1808C04A0[0])(0LL, lpMemf);
  }
  else
  {
    v421 = GetLastError();
    v430 = v421 < 0;
    if ( v421 > 0 )
    {
      v421 = (unsigned __int16)v421 | 0x80070000;
      v430 = v421 < 0;
    }
    if ( !v430 )
    {
LABEL_466:
      v421 = -2147467259;
      goto LABEL_468;
    }
  }
  if ( v421 >= 0 )
  {
    if ( v1639 == 1 )
      v424 = (char *)v1431;
    memset_0(v1882, 0, 0x5CuLL);
    v421 = 0;
    v1432 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
    if ( !v1432 )
    {
      v1038 = GetLastError();
      v421 = v1038;
      if ( v1038 > 0 )
        v421 = (unsigned __int16)v1038 | 0x80070000;
      if ( v421 >= 0 )
        v421 = -2147467259;
      goto LABEL_468;
    }
    v1039 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(Srcb, v428, 72LL);
    v1882[4] = 400;
    v1882[0] = -v1039;
    v1883 = 5;
    StringCchCopyW((char *)v1884, 32LL, v424);
    v1040 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1882);
    v1041 = 0;
    if ( v1040 )
    {
      v1834 = (void *)v1040;
    }
    else
    {
      v1042 = GetLastError();
      v421 = v1042;
      if ( v1042 > 0 )
        v421 = (unsigned __int16)v1042 | 0x80070000;
      if ( v421 >= 0 )
        v421 = -2147467259;
    }
    ((void (__fastcall *)(_QWORD, SIZE_T))off_1808C04A0[0])(0LL, v1432);
    if ( v421 >= 0 )
    {
      v1043 = 0;
      switch ( v1639 )
      {
        case 1:
          goto LABEL_1220;
        case 2:
          v1043 = 0;
          v1041 = SDWORD2(v1794) / 4;
          break;
        case 3:
LABEL_1220:
          v1041 = DWORD2(v1794);
          v1043 = HIDWORD(v1794);
          break;
      }
      *((_QWORD *)&v1849 + 1) = __PAIR64__(v1043, v1041);
      if ( v1639 == 1 )
      {
        v1044 = 150;
        v1596 = 150;
        v1546 = 32;
      }
      else
      {
        v1044 = 0;
        if ( (unsigned int)(v1639 - 2) < 2 )
        {
          v1596 = 0;
          v1546 = 0;
        }
      }
      v1045 = v1041 - v1044;
      v1046 = v1830;
      v1838.m128i_i32[2] = v1045;
      v1837.m128i_i32[2] = v1045;
      v1433 = ((__int64 (__fastcall *)(SIZE_T, SIZE_T))off_1808C03B8)(v1446, v1833);
      v1047 = ((__int64 (__fastcall *)(SIZE_T, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                v1446,
                v1046,
                0xFFFFFFFFLL,
                &v1837,
                3152,
                0LL);
      v421 = v1047 != 0 ? 0 : 0x80004005;
      if ( v1433 )
        ((void (__fastcall *)(SIZE_T, SIZE_T))off_1808C03B8)(v1446, v1433);
      if ( v1047 )
      {
        v1048 = v1831;
        v1434 = ((__int64 (__fastcall *)(SIZE_T, void *))off_1808C03B8)(v1446, v1834);
        v1049 = ((__int64 (__fastcall *)(SIZE_T, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                  v1446,
                  v1048,
                  0xFFFFFFFFLL,
                  &v1838,
                  3152,
                  0LL);
        v421 = v1049 != 0 ? 0 : 0x80004005;
        if ( v1434 )
          ((void (__fastcall *)(SIZE_T, SIZE_T))off_1808C03B8)(v1446, v1434);
        if ( v1049 )
        {
          if ( (unsigned int)(v1639 - 2) <= 1 )
          {
            v1045 = v1838.m128i_i32[2];
            if ( v1837.m128i_i32[2] > v1838.m128i_i32[2] )
              v1045 = v1837.m128i_i32[2];
          }
          if ( v1828 )
          {
            off_1808C0490(
              (CToastCenterExperienceManager *)&v1837,
              (struct CSingleViewShellExperience *)(unsigned int)(v1045 - v1837.m128i_i32[2]));
            v1050 = (unsigned int)(v1045 - v1838.m128i_i32[2]);
          }
          else
          {
            off_1808C0490((CToastCenterExperienceManager *)&v1837, (struct CSingleViewShellExperience *)v1596);
            v1050 = v1596;
          }
          ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808C0490)(
            &v1838,
            v1050,
            (unsigned int)(v1837.m128i_i32[3] + v1546));
          if ( (unsigned int)(v1639 - 2) <= 1 )
          {
            *((_QWORD *)&v1849 + 1) = __PAIR64__(v1838.m128i_u32[3], v1045);
            v1836 = -5723992;
            goto LABEL_1268;
          }
          if ( v1639 != 1 )
            goto LABEL_1268;
          v1836 = 0xFFFFFF;
          memset_0(v1885, 0, 0x5CuLL);
          v421 = 0;
          v1051 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
          if ( v1051 )
          {
            v1053 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808C03F8)(11LL, v1496);
            v1885[4] = 400;
            v1885[0] = -v1053;
            v1886 = 5;
            StringCchCopyW((char *)v1887, 32LL, (char *)v1396);
            v1054 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1885);
            if ( v1054 )
            {
              v1835 = v1054;
            }
            else
            {
              v421 = GetLastError();
              v1055 = v421 < 0;
              if ( v421 > 0 )
              {
                v421 = (unsigned __int16)v421 | 0x80070000;
                v1055 = v421 < 0;
              }
              if ( !v1055 )
                v421 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, __int64))off_1808C04A0[0])(0LL, v1051);
          }
          else
          {
            v421 = GetLastError();
            v1052 = v421 < 0;
            if ( v421 > 0 )
            {
              v421 = (unsigned __int16)v421 | 0x80070000;
              v1052 = v421 < 0;
            }
            if ( !v1052 )
              goto LABEL_466;
          }
          if ( v421 >= 0 )
          {
            v1056 = v1832;
            v1841 = v1045;
            v1057 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1808C03B8)(v1446, v1835);
            v1058 = ((__int64 (__fastcall *)(SIZE_T, void *, __int64, unsigned int *, int, _QWORD))off_1808C0418)(
                      v1446,
                      v1056,
                      0xFFFFFFFFLL,
                      &v1839,
                      1120,
                      0LL);
            v421 = v1058 == 0 ? 0x80004005 : 0;
            if ( v1057 )
              ((void (__fastcall *)(SIZE_T, __int64))off_1808C03B8)(v1446, v1057);
            if ( v1058 )
            {
              v1059 = v1841 + 24;
              if ( (int)(v1841 + 24) < 90 )
                v1059 = 90;
              v1841 = v1059;
              v1842 = 32;
              v1839 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1839, v1496, 96LL);
              v1840 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1840, v1496, 96LL);
              v1841 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1841, v1496, 96LL);
              v1842 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1842, v1496, 96LL);
              if ( v1828 )
              {
                v1060 = v1837.m128i_u32[0];
                if ( v1837.m128i_i32[0] >= v1838.m128i_i32[0] )
                  v1060 = v1838.m128i_u32[0];
              }
              else
              {
                v1061 = v1837.m128i_i32[2];
                if ( v1837.m128i_i32[2] <= v1838.m128i_i32[2] )
                  v1061 = v1838.m128i_i32[2];
                v1060 = v1839 + v1061 - v1841;
              }
              off_1808C0490((CToastCenterExperienceManager *)&v1839, (struct CSingleViewShellExperience *)v1060);
LABEL_1268:
              v1062 = v1828;
              v1063 = HIDWORD(v1849);
              v1064 = DWORD2(v1849);
              switch ( v1639 )
              {
                case 1:
                  *(_QWORD *)&v1849 = 0LL;
                  break;
                case 2:
                  v1861 = 0LL;
                  v1859 = 0LL;
                  v1860 = 0LL;
                  v1068 = (CToastCenterExperienceManager *)off_1808C0488[0](0LL, (struct CSingleViewShellExperience *)1);
                  LODWORD(v1859) = 40;
                  if ( (unsigned int)off_1808C0448(v1068, (struct CSingleViewShellExperience *)&v1859) )
                  {
                    off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1860 + 4));
                    off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1860 + 12));
                    if ( v1062 )
                      v1066 = DWORD1(v1860) + 5 * HIDWORD(v1860) / 100;
                    else
                      v1066 = 95 * (HIDWORD(v1860) - v1064) / 100;
                    v1067 = 95 * (v1861 - v1063);
LABEL_1275:
                    LODWORD(v1849) = v1066;
                    DWORD1(v1849) = v1067 / 100;
                  }
                  break;
                case 3:
                  v1858 = 0LL;
                  v1856 = 0LL;
                  v1857 = 0LL;
                  v1065 = (CToastCenterExperienceManager *)off_1808C0488[0](0LL, (struct CSingleViewShellExperience *)1);
                  LODWORD(v1856) = 40;
                  if ( (unsigned int)off_1808C0448(v1065, (struct CSingleViewShellExperience *)&v1856) )
                  {
                    off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1857 + 4));
                    off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1857 + 12));
                    v1066 = 50 * (HIDWORD(v1857) - v1064) / 100;
                    v1067 = 50 * (v1858 - v1063);
                    goto LABEL_1275;
                  }
                  break;
              }
              v421 = 0;
            }
          }
        }
      }
    }
  }
LABEL_468:
  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808C04A0[0])(0LL, v1446);
LABEL_469:
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v431 = dword_1808CCC34;
  if ( dword_1808CCC34 > 0 )
  {
    --dword_1808CCC34;
    if ( v431 == 1 )
    {
      v1069 = (HMODULE *)&unk_1808C93A0;
      v1070 = 4LL;
      do
      {
        if ( *v1069 )
          FreeLibrary(*v1069);
        v1069 += 3;
        --v1070;
      }
      while ( v1070 );
      memset_0(&unk_1808C93A0, 0, 0x60uLL);
      v1071 = 2LL;
      v1072 = off_1808C0340;
      v1073 = off_1807174F0;
      do
      {
        v1074 = *((_OWORD *)v1073 + 1);
        *(_OWORD *)v1072 = *(_OWORD *)v1073;
        v1075 = *((_OWORD *)v1073 + 2);
        *((_OWORD *)v1072 + 1) = v1074;
        v1076 = *((_OWORD *)v1073 + 3);
        *((_OWORD *)v1072 + 2) = v1075;
        v1077 = *((_OWORD *)v1073 + 4);
        *((_OWORD *)v1072 + 3) = v1076;
        v1078 = *((_OWORD *)v1073 + 5);
        *((_OWORD *)v1072 + 4) = v1077;
        v1079 = *((_OWORD *)v1073 + 6);
        *((_OWORD *)v1072 + 5) = v1078;
        v1080 = *((_OWORD *)v1073 + 7);
        v1073 += 16;
        *((_OWORD *)v1072 + 6) = v1079;
        v1072 += 16;
        *((_OWORD *)v1072 - 1) = v1080;
        --v1071;
      }
      while ( v1071 );
      v1081 = *((_OWORD *)v1073 + 1);
      *(_OWORD *)v1072 = *(_OWORD *)v1073;
      v1082 = *((_OWORD *)v1073 + 2);
      *((_OWORD *)v1072 + 1) = v1081;
      v1083 = *((_OWORD *)v1073 + 3);
      *((_OWORD *)v1072 + 2) = v1082;
      v1084 = *((_OWORD *)v1073 + 4);
      *((_OWORD *)v1072 + 3) = v1083;
      v1085 = *((_OWORD *)v1073 + 5);
      *((_OWORD *)v1072 + 4) = v1084;
      v1086 = *((_OWORD *)v1073 + 6);
      *((_OWORD *)v1072 + 5) = v1085;
      *((_OWORD *)v1072 + 6) = v1086;
    }
  }
  _InterlockedExchange(&dword_1808CCC40, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1756);
  if ( v421 < 0 )
    goto LABEL_1398;
  v432 = v1849;
  v1763 = v1849;
  v1803 = 0;
  memset_0(v1804, 0, 0x64uLL);
  v433 = 1;
  v434 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(v1377, 7LL);
  if ( v434 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v434, 104LL, &v1803) )
  {
    if ( v1805 != 32 || !v1806 || v1804[0] <= 0 || v1804[1] <= 0 )
      v433 = 0;
    if ( v433 )
    {
LABEL_480:
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(&v1837, v432, HIDWORD(v1763));
      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(&v1838, v432, HIDWORD(v1763));
      v435 = v1639;
      if ( v1639 == 1 )
        v1536 = ((__int64 (__fastcall *)(_QWORD))off_1808C0368[0])(v1829 == 0 ? 0xB26720 : 0);
      goto LABEL_482;
    }
  }
  else
  {
    v433 = 0;
  }
  if ( v1639 == 1 )
    goto LABEL_480;
  v435 = v1639;
LABEL_482:
  v1497 = off_1808C03C0(v1377, (struct CSingleViewShellExperience *)1);
  v436 = 2064;
  if ( v1828 )
    v436 = 133138;
  v1363 = v436;
  if ( !v433 )
  {
    if ( v1829 || (v1143 = -64, v435 == 1) )
      v1143 = -1;
    BYTE2(Srcr) = v1143;
    LOWORD(Srcr) = 0;
    HIBYTE(Srcr) = 1;
    v1599 = 0;
    v1586 = 0;
    v1548 = 0;
    v1560 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(v1377);
    if ( !v1560 )
      goto LABEL_1366;
    if ( v435 == 1 )
    {
      v1144 = v1838.m128i_i32[2] - v1838.m128i_i32[0];
      if ( v1838.m128i_i32[2] - v1838.m128i_i32[0] <= v1837.m128i_i32[2] - v1837.m128i_i32[0] )
        v1144 = v1837.m128i_i32[2] - v1837.m128i_i32[0];
      v1145 = v1838.m128i_i32[3] - v1837.m128i_i32[1];
      v1578 = v1144;
      v1146 = 0;
      v1651 = v1838.m128i_i32[3] - v1837.m128i_i32[1];
      v1147 = 0;
      if ( v1828 )
      {
        v1599 = v1144 + v1837.m128i_i32[0] - v1837.m128i_i32[2];
        v1146 = v1599;
        v1548 = v1144 + v1838.m128i_i32[0] - v1838.m128i_i32[2];
        v1145 = v1838.m128i_i32[3] - v1837.m128i_i32[1];
        v1147 = v1548;
      }
      v1148 = v1837.m128i_i32[2] + v1146 - v1837.m128i_i32[0];
      v1658 = v1837.m128i_i32[3] - v1837.m128i_i32[1];
      v1149 = v1838.m128i_i32[2] + v1147 - v1838.m128i_i32[0];
      v1630 = v1838.m128i_i32[1] - v1837.m128i_i32[1];
      Sizeh = v1838.m128i_i32[3] - v1837.m128i_i32[1];
    }
    else
    {
      v1144 = DWORD2(v1849);
      v1145 = HIDWORD(v1849);
      v1578 = DWORD2(v1849);
      v1658 = _mm_cvtsi128_si32(_mm_srli_si128(v1837, 12));
      v1586 = _mm_cvtsi128_si32(_mm_srli_si128(v1837, 4));
      Sizeh = _mm_cvtsi128_si32(_mm_srli_si128(v1838, 12));
      v1148 = _mm_cvtsi128_si32(_mm_srli_si128(v1837, 8));
      v1630 = _mm_cvtsi128_si32(_mm_srli_si128(v1838, 4));
      v1651 = HIDWORD(v1849);
      v1599 = _mm_cvtsi128_si32(v1837);
      v1149 = _mm_cvtsi128_si32(_mm_srli_si128(v1838, 8));
      v1548 = _mm_cvtsi128_si32(v1838);
    }
    v1766 = 0LL;
    v1862[2] = -v1145;
    memset(&v1862[4], 0, 28);
    v1862[0] = 40;
    v1862[1] = v1144;
    v1862[3] = 2097153;
    v1150 = ((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
              v1560,
              v1862,
              0LL,
              &v1766,
              0LL,
              0);
    v1633 = v1150;
    if ( !v1150 )
    {
      GetLastError();
      v1142 = v1560;
      goto LABEL_1395;
    }
    ((void (__fastcall *)(size_t, __int64))off_1808C03B8)(v1560, v1150);
    if ( v1639 == 1 && v1536 )
    {
      v1852 = 0LL;
      v1854 = v1651;
      v1853 = v1144;
      ((void (__fastcall *)(size_t, __int64 *))off_1808C0428[0])(v1560, &v1852);
    }
    v1489 = v1829;
    v1438 = v1833;
    v1404 = (unsigned __int16 *)v1830;
    v1819 = 0;
    memset_0(v1820, 0, 0x64uLL);
    v1800 = 0;
    memset_0(v1801, 0, 0x64uLL);
    dwBytesj = 0LL;
    v1452 = 0;
    lpMemk = 0;
    v1871 = 0LL;
    v1873 = 0LL;
    v1872 = 0LL;
    v1874 = 0;
    v1847 = 0LL;
    if ( !v1404 )
      goto LABEL_1391;
    v1151 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(v1560, 7LL);
    if ( v1151 )
    {
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v1151, 104LL, &v1819) )
      {
        dwBytesj = v1821;
        v1452 = v1820[0];
        lpMemk = v1820[1];
      }
      v1646 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1560);
      if ( v1646 )
      {
        v1152 = v1148 - v1599;
        DWORD2(v1871) = v1586 - v1658;
        v1768 = 0LL;
        v1873 = 0LL;
        v1874 = 0;
        v1872 = 0LL;
        LODWORD(v1871) = 40;
        DWORD1(v1871) = v1152;
        HIDWORD(v1871) = 2097153;
        v1153 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                  v1646,
                  &v1871,
                  0LL,
                  &v1768,
                  0LL,
                  0);
        lpModuleNameg = (LPCWSTR)v1153;
        if ( v1153 )
        {
          v1160 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v1153, 104LL, &v1800);
          DWORD2(v1847) = v1152;
          v1161 = 0LL;
          if ( v1160 )
            v1161 = v1802;
          HIDWORD(v1847) = v1658 - v1586;
          v1515 = v1161;
          ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(v1646, lpModuleNameg);
          off_1808C03C0(v1646, (struct CSingleViewShellExperience *)1);
          v1162 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(v1646, v1438);
          v1163 = off_1808C0428[0];
          v1439 = v1162;
          v1164 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
          ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v1163)(v1646, &v1847, v1164);
          ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
            v1646,
            v1404,
            0xFFFFFFFFLL,
            &v1847,
            v1363,
            0LL);
          if ( v1639 == 1 )
          {
            if ( v1489 )
              v1165 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
            else
              v1165 = 0xFFFFFF;
          }
          else
          {
            v1165 = -5723992;
          }
          v1166 = v1452;
          v1167 = 0;
          v1168 = 0;
          v1490 = v1165;
          v1169 = -v1599;
          if ( v1599 >= 0 )
          {
            v1167 = v1599;
            v1169 = 0;
          }
          v1170 = -v1586;
          if ( v1586 >= 0 )
          {
            v1168 = v1586;
            v1170 = 0;
          }
          v1171 = (unsigned __int8 *)(unsigned int)(DWORD2(v1847) - v1169);
          if ( (int)v1171 >= v1452 - v1167 )
            v1171 = (unsigned __int8 *)(unsigned int)(v1452 - v1167);
          v1453 = (int)v1171;
          v1172 = HIDWORD(v1847) - v1170;
          if ( HIDWORD(v1847) - v1170 >= lpMemk - v1168 )
            v1172 = lpMemk - v1168;
          v1154 = 0;
          lpMeml = v1172;
          if ( (int)v1171 > 0 )
          {
            v1171 = 0LL;
            if ( v1172 > 0 )
            {
              v1173 = v1453;
              v1659 = 0;
              v1600 = 0;
              v1171 = (unsigned __int8 *)&v1515[4 * v1169 + 4 * (__int64)(DWORD2(v1847) * v1170)];
              v1516 = v1171;
              v1174 = (unsigned __int16 *)(dwBytesj + 4 * (v1167 + (__int64)(v1168 * (int)v1166)));
              v1175 = v1166;
              v1176 = 4LL * SDWORD2(v1847);
              v1177 = 0;
              v1587 = 2 * v1175;
              v1405 = v1174;
              do
              {
                v1454 = 0;
                v1178 = (char *)v1174 - (char *)v1171;
                v1179 = v1171 + 2;
                v1180 = 0;
                do
                {
                  if ( (unsigned __int8)((*v1179 + *(v1179 - 2) + 2 * (unsigned int)*(v1179 - 1)) >> 2) != 0xFF )
                  {
                    v1181 = (unsigned __int8)~((*v1179 + *(v1179 - 2) + 2 * (unsigned int)*(v1179 - 1)) >> 2);
                    v1179[v1178] -= ~((*v1179 + *(v1179 - 2) + 2 * (unsigned int)*(v1179 - 1)) >> 2)
                                  * (v1490 - v1179[v1178]);
                    v1182 = v1179[v1178 - 1];
                    v1183 = (unsigned __int64)(2155905153LL * v1181 * (BYTE1(v1490) - v1182)) >> 32;
                    v1179[v1178 - 1] = v1182 + (v1183 >> 7 < 0) + (v1183 >> 7);
                    v1184 = v1179[v1178 - 2];
                    v1185 = (unsigned __int64)(2155905153LL * v1181 * (BYTE2(v1490) - v1184)) >> 32;
                    v1177 = v1600;
                    v1179[v1178 - 2] = v1184 + (v1185 >> 7 < 0) + (v1185 >> 7);
                    v1186 = v1179[v1178 + 1];
                    v1187 = v1181 * (255 - v1186);
                    v1180 = v1454;
                    v1179[v1178 + 1] = v1186 + v1187 / 255;
                  }
                  ++v1180;
                  v1179 += 4;
                  v1454 = v1180;
                  v1154 = v1177;
                }
                while ( v1180 < v1173 );
                v1171 = &v1516[v1176];
                v1174 = &v1405[v1587];
                v1516 += v1176;
                v1405 = (unsigned __int16 *)((char *)v1405 + v1587 * 2);
                ++v1659;
                v1600 = v1177;
              }
              while ( v1659 < lpMeml );
              v88 = v1668;
              v1144 = v1578;
            }
          }
          ((void (__fastcall *)(LPCWSTR, unsigned __int8 *))off_1808C0378)(lpModuleNameg, v1171);
          if ( v1439 )
            ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(v1646, v1439);
        }
        else
        {
          v1154 = GetLastError();
          v1155 = v1154 < 0;
          if ( v1154 > 0 )
          {
            v1154 = (unsigned __int16)v1154 | 0x80070000;
            v1155 = v1154 < 0;
          }
          if ( !v1155 )
            v1154 = -2147467259;
        }
        ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v1646);
        if ( v1154 < 0 )
          goto LABEL_1391;
        v1188 = v1831;
        lpMemm = v1829;
        v1822 = 0;
        v1517 = v1834;
        lpModuleNameh = (LPCWSTR)v1831;
        memset_0(v1823, 0, 0x64uLL);
        v1825 = 0;
        memset_0(v1826, 0, 0x64uLL);
        v1647 = 0LL;
        v1087 = v1188 == 0LL;
        v1455 = 0;
        v1142 = v1560;
        v1491 = 0;
        v1875 = 0LL;
        v1877 = 0LL;
        v1876 = 0LL;
        v1878 = 0;
        v1848 = 0LL;
        if ( v1087 )
          goto LABEL_1392;
        v1189 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(v1560, 7LL);
        if ( !v1189 )
        {
          GetLastError();
          goto LABEL_1392;
        }
        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v1189, 104LL, &v1822) )
        {
          v1647 = v1824;
          v1455 = v1823[0];
          v1491 = v1823[1];
        }
        v1440 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1560);
        if ( v1440 )
        {
          v1190 = v1149 - v1548;
          DWORD2(v1875) = v1630 - Sizeh;
          v1771[0] = 0LL;
          v1877 = 0LL;
          v1878 = 0;
          v1876 = 0LL;
          LODWORD(v1875) = 40;
          DWORD1(v1875) = v1190;
          HIDWORD(v1875) = 2097153;
          v1191 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_1808C0358[0])(
                    v1440,
                    &v1875,
                    0LL,
                    v1771,
                    0LL,
                    0);
          v1406 = (unsigned __int16 *)v1191;
          if ( !v1191 )
          {
            v1192 = GetLastError();
            v1193 = v1192 < 0;
            if ( v1192 > 0 )
            {
              v1192 = (unsigned __int16)v1192 | 0x80070000;
              v1193 = v1192 < 0;
            }
            if ( !v1193 )
              v1192 = -2147467259;
            v1194 = v1440;
            goto LABEL_1482;
          }
          v1195 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v1191, 104LL, &v1825);
          DWORD2(v1848) = v1190;
          v1196 = 0LL;
          if ( v1195 )
            v1196 = v1827;
          HIDWORD(v1848) = Sizeh - v1630;
          dwBytesk = v1196;
          ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(v1440, v1406);
          off_1808C03C0(v1440, (struct CSingleViewShellExperience *)1);
          v1197 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808C03B8)(v1440, v1517);
          v1198 = off_1808C0428[0];
          v1518 = (LPVOID)v1197;
          v1199 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
          v1194 = v1440;
          ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v1198)(v1440, &v1848, v1199);
          v1192 = 0;
          ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1808C0418)(
            v1440,
            lpModuleNameh,
            0xFFFFFFFFLL,
            &v1848,
            v1363,
            0LL);
          if ( v1639 == 1 )
          {
            if ( !lpMemm )
            {
              lpMemn = 0xFFFFFF;
LABEL_1463:
              v1201 = 0;
              v1202 = -v1548;
              v1203 = 0;
              if ( v1548 >= 0 )
              {
                v1201 = v1548;
                v1202 = 0;
              }
              v1204 = -v1630;
              if ( v1630 >= 0 )
              {
                v1203 = v1630;
                v1204 = 0;
              }
              v1205 = DWORD2(v1848) - v1202;
              if ( DWORD2(v1848) - v1202 >= v1455 - v1201 )
                v1205 = v1455 - v1201;
              v1206 = HIDWORD(v1848) - v1204;
              if ( HIDWORD(v1848) - v1204 >= v1491 - v1203 )
                v1206 = v1491 - v1203;
              if ( v1205 > 0 && v1206 > 0 )
              {
                v1207 = v1455;
                v1208 = v1455 * v1203;
                v1456 = 0;
                v1209 = (const WCHAR *)(dwBytesk + 4 * (v1202 + (__int64)(v1204 * DWORD2(v1848))));
                lpModuleNamei = v1209;
                v1210 = &v1647[4 * v1201 + 4 * (__int64)v1208];
                dwBytesl = 2LL * SDWORD2(v1848);
                v1620 = 4 * v1207;
                v1648 = v1210;
                do
                {
                  v1211 = (unsigned __int8 *)(v1209 + 1);
                  v1212 = v1210 - (char *)v1209;
                  for ( nn = 0; nn < v1205; ++nn )
                  {
                    if ( (unsigned __int8)((*v1211 + *(v1211 - 2) + 2 * (unsigned int)*(v1211 - 1)) >> 2) != 0xFF )
                    {
                      v1214 = (unsigned __int8)~((*v1211 + *(v1211 - 2) + 2 * (unsigned int)*(v1211 - 1)) >> 2);
                      v1211[v1212] -= ~((*v1211 + *(v1211 - 2) + 2 * (unsigned int)*(v1211 - 1)) >> 2)
                                    * (v1662 - v1211[v1212]);
                      v1215 = v1211[v1212 - 1];
                      v1216 = (unsigned __int64)(2155905153LL * v1214 * (BYTE1(lpMemn) - v1215)) >> 32;
                      v1211[v1212 - 1] = v1215 + (v1216 >> 7 < 0) + (v1216 >> 7);
                      v1217 = v1211[v1212 - 2];
                      v1218 = (unsigned __int64)(2155905153LL * v1214 * (BYTE2(lpMemn) - v1217)) >> 32;
                      v1211[v1212 - 2] = v1217 + (v1218 >> 7 < 0) + (v1218 >> 7);
                      v1211[v1212 + 1] += v1214 * (255 - v1211[v1212 + 1]) / 255;
                    }
                    v1211 += 4;
                    v1192 = 0;
                  }
                  v1209 = &lpModuleNamei[dwBytesl];
                  v1210 = &v1648[v1620];
                  lpModuleNamei = (LPCWSTR)((char *)lpModuleNamei + dwBytesl * 2);
                  v1648 += v1620;
                  ++v1456;
                }
                while ( v1456 < v1206 );
                v88 = v1668;
                v1144 = v1578;
                v1194 = v1440;
              }
              ((void (__fastcall *)(unsigned __int16 *))off_1808C0378)(v1406);
              if ( v1518 )
                ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808C03B8)(v1194, v1518);
LABEL_1482:
              ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v1194);
              if ( v1192 >= 0 )
              {
                v1142 = v1560;
                v1141 = v1377;
                if ( v1639 == 1 )
                  ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_1808C0340[0])(
                    v1377,
                    v1837.m128i_u32[0],
                    v1837.m128i_u32[1],
                    v1144,
                    v1651,
                    v1560,
                    0,
                    0,
                    13369376);
                else
                  ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_1808C0380[0])(
                    v1377,
                    (unsigned int)v1849,
                    DWORD1(v1849),
                    v1144,
                    v1651,
                    v1560,
                    0,
                    0,
                    v1144,
                    v1651,
                    Srcr);
LABEL_1486:
                off_1808C03C0(v1141, (struct CSingleViewShellExperience *)v1497);
                v1156 = v1633;
                if ( !v1633 )
                {
LABEL_1394:
                  if ( !v1142 )
                    goto LABEL_1396;
LABEL_1395:
                  ((void (__fastcall *)(size_t))off_1808C0370[0])(v1142);
                  goto LABEL_1396;
                }
LABEL_1393:
                ((void (__fastcall *)(SIZE_T))off_1808C0378)(v1156);
                goto LABEL_1394;
              }
              goto LABEL_1391;
            }
            v1200 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
          }
          else
          {
            v1200 = -5723992;
          }
          lpMemn = v1200;
          v1662 = v1200;
          goto LABEL_1463;
        }
      }
    }
    GetLastError();
LABEL_1391:
    v1142 = v1560;
LABEL_1392:
    v1156 = v1633;
    goto LABEL_1393;
  }
  v437 = v1830;
  Srcc = v1829;
  v1426 = v1833;
  v1397 = (unsigned __int16 *)v1830;
  v1807 = 0;
  memset_0(v1808, 0, 0x64uLL);
  v1810 = 0;
  memset_0(v1811, 0, 0x64uLL);
  dwBytese = 0LL;
  v1591 = 0;
  v1580 = 0;
  v1865 = 0LL;
  v1866 = 0;
  v1863 = 0LL;
  v1864 = 0LL;
  v1850 = 0LL;
  if ( !v437 )
    goto LABEL_1396;
  v438 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(v1377, 7LL);
  if ( !v438 )
    goto LABEL_1366;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v438, 104LL, &v1807) )
  {
    dwBytese = v1809;
    v1591 = v1808[0];
    v1580 = v1808[1];
  }
  lpMemg = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(v1377);
  v439 = lpMemg;
  if ( !lpMemg )
    goto LABEL_1366;
  DWORD1(v1863) = v1837.m128i_i32[2] - v1837.m128i_i32[0];
  DWORD2(v1863) = v1837.m128i_i32[1] - v1837.m128i_i32[3];
  v1764 = 0LL;
  v1865 = 0LL;
  v1866 = 0;
  v1864 = 0LL;
  LODWORD(v1863) = 40;
  HIDWORD(v1863) = 2097153;
  v1447 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
            lpMemg,
            &v1863,
            0LL,
            &v1764,
            0LL,
            0);
  if ( v1447 )
  {
    v1087 = ((unsigned int (__fastcall *)(SIZE_T, __int64, int *))off_1808C03A8[0])(v1447, 104LL, &v1810) == 0;
    v1088 = 0LL;
    if ( !v1087 )
      v1088 = v1812;
    DWORD2(v1850) = v1837.m128i_i32[2] - v1837.m128i_i32[0];
    HIDWORD(v1850) = v1837.m128i_i32[3] - v1837.m128i_i32[1];
    v1486 = v1088;
    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(lpMemg, v1447);
    off_1808C03C0(lpMemg, (struct CSingleViewShellExperience *)1);
    v1089 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(lpMemg, v1426);
    v1090 = off_1808C0428[0];
    v1435 = v1089;
    v1091 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
    ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v1090)(lpMemg, &v1850, v1091);
    v440 = 0;
    ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
      lpMemg,
      v1397,
      0xFFFFFFFFLL,
      &v1850,
      v1363,
      0LL);
    if ( v1639 == 1 )
    {
      if ( Srcc )
        Srco = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
      else
        Srco = 0xFFFFFF;
    }
    else
    {
      Srco = -5723992;
    }
    v1092 = 0;
    v1093 = -v1837.m128i_i32[0];
    v1094 = 0;
    if ( v1837.m128i_i32[0] >= 0 )
    {
      v1092 = v1837.m128i_i32[0];
      v1093 = 0;
    }
    v1095 = -v1837.m128i_i32[1];
    if ( v1837.m128i_i32[1] >= 0 )
    {
      v1094 = v1837.m128i_i32[1];
      v1095 = 0;
    }
    v1096 = DWORD2(v1850) - v1093;
    if ( DWORD2(v1850) - v1093 >= v1591 - v1092 )
      v1096 = v1591 - v1092;
    v1097 = HIDWORD(v1850) - v1095;
    if ( HIDWORD(v1850) - v1095 >= v1580 - v1094 )
      v1097 = v1580 - v1094;
    if ( v1096 > 0 && v1097 > 0 )
    {
      v1098 = v1591;
      v1099 = v1096;
      v1100 = (unsigned __int16 *)(v1486 + 4 * (v1093 + (__int64)(DWORD2(v1850) * v1095)));
      v1101 = v1591 * v1094;
      v1102 = 0;
      v1401 = v1100;
      v1597 = 0;
      v1103 = dwBytese + 4 * (v1092 + v1101);
      v1487 = 2LL * SDWORD2(v1850);
      Sizef = 4 * v1098;
      dwBytesh = v1103;
      while ( 1 )
      {
        v1104 = (unsigned __int8 *)(v1100 + 1);
        v1547 = 0;
        v1105 = v1103 - (_QWORD)v1100;
        do
        {
          if ( (unsigned __int8)((*v1104 + *(v1104 - 2) + 2 * (unsigned int)*(v1104 - 1)) >> 2) != 0xFF )
          {
            v1106 = (unsigned __int8)~((*v1104 + *(v1104 - 2) + 2 * (unsigned int)*(v1104 - 1)) >> 2);
            v1104[v1105] -= ~((*v1104 + *(v1104 - 2) + 2 * (unsigned int)*(v1104 - 1)) >> 2) * (Srco - v1104[v1105]);
            v1107 = v1104[v1105 - 1];
            v1108 = (unsigned __int64)(2155905153LL * v1106 * (BYTE1(Srco) - v1107)) >> 32;
            v1104[v1105 - 1] = v1107 + (v1108 >> 7 < 0) + (v1108 >> 7);
            v1109 = v1104[v1105 - 2];
            v1110 = (unsigned __int64)(2155905153LL * v1106 * (BYTE2(Srco) - v1109)) >> 32;
            v1104[v1105 - 2] = v1109 + (v1110 >> 7 < 0) + (v1110 >> 7);
            v1111 = v1104[v1105 + 1];
            v1112 = v1106 * (255 - v1111);
            v1102 = v1547;
            v1104[v1105 + 1] = v1111
                             + ((((unsigned __int64)(2155905153LL * v1112) >> 32) & 0x80000000) != 0LL)
                             + ((int)((unsigned __int64)(2155905153LL * v1112) >> 32) >> 7);
          }
          ++v1102;
          v1104 += 4;
          v1547 = v1102;
          v440 = 0;
        }
        while ( v1102 < v1099 );
        v1100 = &v1401[v1487];
        v1103 = Sizef + dwBytesh;
        v1401 = (unsigned __int16 *)((char *)v1401 + v1487 * 2);
        dwBytesh += Sizef;
        if ( ++v1597 >= v1097 )
          break;
        v1102 = 0;
      }
      v88 = v1668;
      v439 = lpMemg;
    }
    ((void (__fastcall *)(SIZE_T))off_1808C0378)(v1447);
    if ( v1435 )
      ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(v439, v1435);
  }
  else
  {
    v440 = GetLastError();
    v441 = v440 < 0;
    if ( v440 > 0 )
    {
      v440 = (unsigned __int16)v440 | 0x80070000;
      v441 = v440 < 0;
    }
    if ( !v441 )
      v440 = -2147467259;
  }
  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v439);
  if ( v440 < 0 )
    goto LABEL_1396;
  v1113 = v1831;
  Srcp = v1829;
  v1436 = (SIZE_T)v1834;
  v1813 = 0;
  memset_0(v1814, 0, 0x64uLL);
  v1816 = 0;
  memset_0(v1817, 0, 0x64uLL);
  v1402 = 0LL;
  v1598 = 0;
  v1585 = 0;
  v1869 = 0LL;
  v1870 = 0;
  v1867 = 0LL;
  v1868 = 0LL;
  v1851 = 0LL;
  if ( !v1113 )
    goto LABEL_1396;
  v1114 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(v1377, 7LL);
  if ( !v1114 )
    goto LABEL_1366;
  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v1114, 104LL, &v1813) )
  {
    v1402 = v1815;
    v1598 = v1814[0];
    v1585 = v1814[1];
  }
  dwBytesi = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(v1377);
  v1115 = dwBytesi;
  if ( !dwBytesi )
  {
LABEL_1366:
    GetLastError();
    goto LABEL_1396;
  }
  DWORD1(v1867) = v1838.m128i_i32[2] - v1838.m128i_i32[0];
  DWORD2(v1867) = v1838.m128i_i32[1] - v1838.m128i_i32[3];
  v1765 = 0LL;
  v1869 = 0LL;
  v1870 = 0;
  v1868 = 0LL;
  LODWORD(v1867) = 40;
  HIDWORD(v1867) = 2097153;
  lpMemj = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                     dwBytesi,
                     &v1867,
                     0LL,
                     &v1765,
                     0LL,
                     0);
  if ( !lpMemj )
  {
    v1116 = GetLastError();
    v1117 = v1116 < 0;
    if ( v1116 > 0 )
    {
      v1116 = (unsigned __int16)v1116 | 0x80070000;
      v1117 = v1116 < 0;
    }
    if ( !v1117 )
      v1116 = -2147467259;
    goto LABEL_1360;
  }
  v1087 = ((unsigned int (__fastcall *)(LPVOID, __int64, int *))off_1808C03A8[0])(lpMemj, 104LL, &v1816) == 0;
  v1118 = 0LL;
  if ( !v1087 )
    v1118 = v1818;
  DWORD2(v1851) = v1838.m128i_i32[2] - v1838.m128i_i32[0];
  HIDWORD(v1851) = v1838.m128i_i32[3] - v1838.m128i_i32[1];
  v1450 = v1118;
  ((void (__fastcall *)(CToastCenterExperienceManager *, LPVOID))off_1808C03B8)(dwBytesi, lpMemj);
  off_1808C03C0(dwBytesi, (struct CSingleViewShellExperience *)1);
  v1119 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(dwBytesi, v1436);
  v1120 = off_1808C0428[0];
  v1437 = v1119;
  v1121 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
  ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v1120)(dwBytesi, &v1851, v1121);
  v1116 = 0;
  ((void (__fastcall *)(CToastCenterExperienceManager *, void *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
    dwBytesi,
    v1113,
    0xFFFFFFFFLL,
    &v1851,
    v1363,
    0LL);
  if ( v1639 == 1 )
  {
    if ( Srcp )
    {
      v1122 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
      goto LABEL_1340;
    }
    v1642 = 0xFFFFFF;
  }
  else
  {
    v1122 = -5723992;
LABEL_1340:
    v1642 = v1122;
    v1662 = v1122;
  }
  v1123 = 0;
  v1124 = -v1838.m128i_i32[0];
  v1125 = 0;
  if ( v1838.m128i_i32[0] >= 0 )
  {
    v1123 = v1838.m128i_i32[0];
    v1124 = 0;
  }
  v1126 = -v1838.m128i_i32[1];
  if ( v1838.m128i_i32[1] >= 0 )
  {
    v1126 = 0;
    v1125 = v1838.m128i_i32[1];
  }
  v1127 = DWORD2(v1851) - v1124;
  if ( DWORD2(v1851) - v1124 >= v1598 - v1123 )
    v1127 = v1598 - v1123;
  v1128 = HIDWORD(v1851) - v1126;
  if ( HIDWORD(v1851) - v1126 >= v1585 - v1125 )
    v1128 = v1585 - v1125;
  if ( v1127 > 0 && v1128 > 0 )
  {
    v1374 = 0;
    v1129 = v1450 + 4 * (v1124 + (__int64)(DWORD2(v1851) * v1126));
    v1451 = v1129;
    v1130 = &v1402[2 * v1123 + 2 * (__int64)(v1598 * v1125)];
    v1488 = 4LL * SDWORD2(v1851);
    Sizeg = 2LL * v1598;
    v1403 = v1130;
    do
    {
      v1131 = (unsigned __int8 *)(v1129 + 2);
      Srcq = 0;
      v1132 = (__int64)v1130 - v1129;
      v1133 = 0;
      do
      {
        if ( (unsigned __int8)((*v1131 + *(v1131 - 2) + 2 * (unsigned int)*(v1131 - 1)) >> 2) != 0xFF )
        {
          v1134 = (unsigned __int8)~((*v1131 + *(v1131 - 2) + 2 * (unsigned int)*(v1131 - 1)) >> 2);
          v1131[v1132] -= ~((*v1131 + *(v1131 - 2) + 2 * (unsigned int)*(v1131 - 1)) >> 2) * (v1662 - v1131[v1132]);
          v1135 = v1131[v1132 - 1];
          v1136 = (unsigned __int64)(2155905153LL * v1134 * (BYTE1(v1642) - v1135)) >> 32;
          v1131[v1132 - 1] = v1135 + (v1136 >> 7 < 0) + (v1136 >> 7);
          v1137 = v1131[v1132 - 2];
          v1138 = (unsigned __int64)(2155905153LL * v1134 * (BYTE2(v1642) - v1137)) >> 32;
          v1131[v1132 - 2] = v1137 + (v1138 >> 7 < 0) + (v1138 >> 7);
          v1139 = v1131[v1132 + 1];
          v1140 = v1134 * (255 - v1139);
          v1133 = Srcq;
          v1131[v1132 + 1] = v1139 + v1140 / 255;
        }
        ++v1133;
        v1131 += 4;
        Srcq = v1133;
        v1116 = 0;
      }
      while ( v1133 < v1127 );
      v1129 = v1488 + v1451;
      v1130 = &v1403[Sizeg];
      v1451 += v1488;
      v1403 = (unsigned __int16 *)((char *)v1403 + Sizeg * 2);
      ++v1374;
    }
    while ( v1374 < v1128 );
    v88 = v1668;
    v1115 = dwBytesi;
  }
  ((void (__fastcall *)(LPVOID))off_1808C0378)(lpMemj);
  if ( v1437 )
    ((void (__fastcall *)(CToastCenterExperienceManager *, SIZE_T))off_1808C03B8)(v1115, v1437);
LABEL_1360:
  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v1115);
  if ( v1116 >= 0 )
  {
    v1141 = v1377;
    v1142 = 0LL;
    goto LABEL_1486;
  }
LABEL_1396:
  if ( v1536 )
    ((void (__fastcall *)(SIZE_T))off_1808C0378)(v1536);
LABEL_1398:
  if ( v1830 )
  {
    v1157 = -1LL;
    do
      ++v1157;
    while ( *((_WORD *)v1830 + v1157) );
    memset(v1830, 0, 2 * v1157 + 2);
    MemoryFree(v1830);
    v1830 = 0LL;
  }
  if ( v1831 )
  {
    v1158 = -1LL;
    do
      ++v1158;
    while ( *((_WORD *)v1831 + v1158) );
    memset(v1831, 0, 2 * v1158 + 2);
    MemoryFree(v1831);
    v1831 = 0LL;
  }
  if ( v1832 )
  {
    v1159 = -1LL;
    do
      ++v1159;
    while ( *((_WORD *)v1832 + v1159) );
    memset(v1832, 0, 2 * v1159 + 2);
    MemoryFree(v1832);
    v1832 = 0LL;
  }
  if ( v1833 )
  {
    off_1808C0378();
    v1833 = 0LL;
  }
  if ( v1834 )
  {
    off_1808C0378();
    v1834 = 0LL;
  }
  if ( v1835 )
  {
    off_1808C0378();
    v1835 = 0LL;
  }
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v442 = dword_1808CCC34;
  if ( dword_1808CCC34 > 0 )
  {
    --dword_1808CCC34;
    if ( v442 == 1 )
    {
      v1219 = 4LL;
      v1220 = (HMODULE *)&unk_1808C93A0;
      do
      {
        if ( *v1220 )
          FreeLibrary(*v1220);
        v1220 += 3;
        --v1219;
      }
      while ( v1219 );
      memset_0(&unk_1808C93A0, 0, 0x60uLL);
      v1221 = 2LL;
      v1222 = off_1808C0340;
      v1223 = off_1807174F0;
      do
      {
        v1224 = *((_OWORD *)v1223 + 1);
        *(_OWORD *)v1222 = *(_OWORD *)v1223;
        v1225 = *((_OWORD *)v1223 + 2);
        *((_OWORD *)v1222 + 1) = v1224;
        v1226 = *((_OWORD *)v1223 + 3);
        *((_OWORD *)v1222 + 2) = v1225;
        v1227 = *((_OWORD *)v1223 + 4);
        *((_OWORD *)v1222 + 3) = v1226;
        v1228 = *((_OWORD *)v1223 + 5);
        *((_OWORD *)v1222 + 4) = v1227;
        v1229 = *((_OWORD *)v1223 + 6);
        *((_OWORD *)v1222 + 5) = v1228;
        v1230 = *((_OWORD *)v1223 + 7);
        v1223 += 16;
        *((_OWORD *)v1222 + 6) = v1229;
        v1222 += 16;
        *((_OWORD *)v1222 - 1) = v1230;
        --v1221;
      }
      while ( v1221 );
      v1231 = *((_OWORD *)v1223 + 1);
      *(_OWORD *)v1222 = *(_OWORD *)v1223;
      v1232 = *((_OWORD *)v1223 + 2);
      *((_OWORD *)v1222 + 1) = v1231;
      v1233 = *((_OWORD *)v1223 + 3);
      *((_OWORD *)v1222 + 2) = v1232;
      v1234 = *((_OWORD *)v1223 + 4);
      *((_OWORD *)v1222 + 3) = v1233;
      v1235 = *((_OWORD *)v1223 + 5);
      *((_OWORD *)v1222 + 4) = v1234;
      v1236 = *((_OWORD *)v1223 + 6);
      *((_OWORD *)v1222 + 5) = v1235;
      *((_OWORD *)v1222 + 6) = v1236;
    }
  }
  _InterlockedExchange(&dword_1808CCC40, 0);
  lpMemh = dword_1808C9398;
  v443 = off_1808C03D8[0]();
  v1893 = 0;
  v444 = v443 - qword_1808CCC38;
  v1514 = v443 - qword_1808CCC38;
  v1897 = 0LL;
  v1894 = 0LL;
  v1895 = 0LL;
  v1896 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v445 = dword_1808CCC34;
  if ( dword_1808CCC34 )
  {
LABEL_1525:
    v490 = (HMODULE *)&unk_1808C93A0;
    dword_1808CCC34 = v445 + 1;
    goto LABEL_1526;
  }
  v1448 = 0;
  v1481 = 0;
  Sizec = 0;
  v446 = (char *)MemoryAlloc(0x338uLL);
  lpModuleNamef = (WCHAR *)v446;
  if ( !v446 )
    goto LABEL_509;
  v447 = v446 + 7;
  v448 = 0;
  v449 = (unsigned __int8 *)&unk_18077F812;
  v450 = -1;
  v451 = 0;
  v452 = 103LL;
  v453 = 0;
  do
  {
    v454 = *(v449 - 1) | (*(v449 - 2) << 8);
    v455 = v449[2] << 8;
    v456 = *v449;
    v449 += 8;
    v457 = *(v449 - 7) | ((v456 | (v454 << 8)) << 8);
    v458 = v457 ^ v453;
    v459 = *(v449 - 3) | ((*(v449 - 4) | ((*(v449 - 5) | v455) << 8)) << 8);
    v460 = v459 ^ v451 ^ v458 ^ 0xAC987321;
    v461 = (__ROR4__(v460, 22) + 4991 * __ROR4__(v460 + 1419157410, 27)) ^ v458;
    v462 = (43881 * __ROR4__(v461 + 133239679, 9) - __ROR4__(v461, 30)) ^ v460;
    v463 = (24670 * v462 - (v462 >> 13) - 123127970) ^ v461;
    v464 = (2033 * __ROR4__(v463 ^ 0xAB69, 26) - __ROR4__(v463, 30)) ^ v462;
    v465 = (133239679 - (v464 ^ 0xAB69605E)) ^ v463;
    v466 = (43881 * (v465 ^ 0x137F)) ^ __ROR4__(v465, 6) ^ v464;
    v467 = (__ROR4__(v466, 30) + 24670 * __ROR4__(v466 + 133239679, 15)) ^ v465;
    v468 = (2033 * __ROR4__(v467 + 1419157410, 14) - __ROR4__(v467, 24)) ^ v466;
    v469 = __ROR4__(v468, 10) ^ (4991 * __ROR4__(v468 ^ 0xAB69605E, 12)) ^ v467;
    v470 = v468 ^ (v469 >> 10) ^ (43881 * (v469 ^ 0x7F1));
    v471 = (2033 * (__ROR4__(~v470, 5) + 24670)) ^ v469;
    v472 = v470 ^ (v471 - 2033) ^ 0xAB69605E;
    v473 = ((v472 >> 2) + 4991 * __ROR4__(v470 ^ (v471 - 2033) ^ 0xAB6967AF, 30)) ^ v471;
    v474 = (__ROR4__(v473, 25) + 43881 * __ROR4__(v473 - 133239679, 6)) ^ v472;
    v475 = (24670 * (v474 ^ 0x137F) + __ROR4__(v474, 9)) ^ v473;
    v476 = (__ROR4__(v475, 25) + 2033 * __ROR4__(v475 ^ 0xAB69, 27)) ^ v474;
    v477 = v476 ^ v475 ^ 0xAC987321;
    v478 = (4991 * __ROR4__(v477, 3) - 219010071) ^ v476;
    v479 = (24670 * __ROR4__(v478 - 133239679, 1) - __ROR4__(v478, 6)) ^ v477;
    v480 = (__ROR4__(v479, 18) + 2033 * __ROR4__(v479 - 1419157410, 29)) ^ v478;
    v481 = (4991 * __ROR4__(v480 - 1419157410, 17) - __ROR4__(v480, 14)) ^ v479;
    v482 = (v481 >> 3) ^ (43881 * (v481 ^ 0x605E)) ^ v480;
    v483 = 24670 * __ROR4__(v482 ^ 0x7F1137F, 28);
    v484 = __ROR4__(v482, 30);
    v451 = v450 ^ v482;
    v450 = v459;
    v453 = v448 ^ v481 ^ v484 ^ v483;
    *(v447 - 4) = v453;
    *v447 = v451;
    v447 += 8;
    v448 = v457;
    *(v447 - 13) = BYTE1(v453);
    *(v447 - 9) = BYTE1(v451);
    *(v447 - 14) = (unsigned __int16)(v453 >> 8) >> 8;
    *(v447 - 10) = (unsigned __int16)(v451 >> 8) >> 8;
    *(v447 - 15) = __ROR4__((((v453 >> 8) | (v453 << 24)) >> 8) | (((v453 >> 8) | (v453 << 24)) << 24), 8);
    *(v447 - 11) = __ROR4__((((v451 >> 8) | (v451 << 24)) >> 8) | (((v451 >> 8) | (v451 << 24)) << 24), 8);
    --v452;
  }
  while ( v452 );
  v88 = v1668;
  v485 = lpModuleNamef;
  v486 = 0LL;
  v487 = 0;
  do
    v487 ^= *((_BYTE *)lpModuleNamef + v486++);
  while ( v486 < 0x338 );
  if ( v487 != 64LL )
  {
    MemoryFree(lpModuleNamef);
    goto LABEL_508;
  }
  *((_BYTE *)lpModuleNamef + 823) = 0;
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  while ( 2 )
  {
    if ( *(_BYTE *)v485 )
    {
      v1237 = v485;
      v1238 = -1LL;
      do
        ++v1238;
      while ( v485[v1238] );
      v1239 = &v485[v1238];
      v1240 = (char *)&unk_1808C93A0 + 24 * Sizec;
      if ( !GetModuleHandleExW(0, v1237, (HMODULE *)v1240) )
      {
        v1241 = -1073741702;
        goto LABEL_1521;
      }
      v1241 = 0;
      v1481 = 0;
      if ( **(_WORD **)v1240 == 23117
        && (v1242 = *(int *)(*(_QWORD *)v1240 + 60LL), (unsigned int)v1242 < 0x10000000)
        && (v1243 = *(_QWORD *)v1240 + v1242, v1243 >= *(_QWORD *)v1240)
        && *(_DWORD *)v1243 == 17744 )
      {
        if ( ((*(_WORD *)(v1243 + 24) - 267) & 0xFEFF) != 0 )
        {
          v1241 = -1073741811;
          goto LABEL_1508;
        }
        *(_QWORD *)(v1240 + 12) = *(_QWORD *)(v1243 + 136);
        *((_DWORD *)v1240 + 2) = *(_DWORD *)(v1243 + 80);
      }
      else
      {
        v1241 = -1073741701;
LABEL_1508:
        v1481 = v1241;
      }
      v1244 = *(_DWORD *)(v1239 + 1);
      v1245 = 0;
      v1631 = v1244;
      v485 = v1239 + 3;
      while ( 1 )
      {
        v1621 = v1245;
        if ( v1245 >= v1244 )
          break;
        v1246 = (const CHAR *)v485;
        v1247 = -1LL;
        do
          ++v1247;
        while ( *((_BYTE *)v485 + v1247) );
        v485 = (WCHAR *)((char *)v485 + v1247 + 1);
        if ( v1241 >= 0 )
        {
          v1248 = GetProcAddress(*(HMODULE *)v1240, v1246);
          if ( !v1248 )
            goto LABEL_1521;
          off_1808C0340[v1448] = v1248;
          v1244 = v1631;
        }
        ++v1448;
        v1245 = v1621 + 1;
      }
      ++Sizec;
      continue;
    }
    break;
  }
  v1241 = v1481;
LABEL_1521:
  if ( lpModuleNamef )
  {
    v1249 = GetProcessHeap();
    HeapFree(v1249, 0, lpModuleNamef);
  }
  if ( v1241 >= 0 )
  {
    v445 = dword_1808CCC34;
    v444 = v1514;
    goto LABEL_1525;
  }
LABEL_508:
  v444 = v1514;
LABEL_509:
  v488 = (HMODULE *)&unk_1808C93A0;
  v489 = 4LL;
  do
  {
    if ( *v488 )
      FreeLibrary(*v488);
    v488 += 3;
    --v489;
  }
  while ( v489 );
  v490 = (HMODULE *)&unk_1808C93A0;
  memset_0(&unk_1808C93A0, 0, 0x60uLL);
  v491 = 2LL;
  v492 = off_1808C0340;
  v493 = off_1807174F0;
  do
  {
    v494 = *((_OWORD *)v493 + 1);
    *(_OWORD *)v492 = *(_OWORD *)v493;
    v495 = *((_OWORD *)v493 + 2);
    *((_OWORD *)v492 + 1) = v494;
    v496 = *((_OWORD *)v493 + 3);
    *((_OWORD *)v492 + 2) = v495;
    v497 = *((_OWORD *)v493 + 4);
    *((_OWORD *)v492 + 3) = v496;
    v498 = *((_OWORD *)v493 + 5);
    *((_OWORD *)v492 + 4) = v497;
    v499 = *((_OWORD *)v493 + 6);
    *((_OWORD *)v492 + 5) = v498;
    v500 = *((_OWORD *)v493 + 7);
    v493 += 16;
    *((_OWORD *)v492 + 6) = v499;
    v492 += 16;
    *((_OWORD *)v492 - 1) = v500;
    --v491;
  }
  while ( v491 );
  v501 = *((_OWORD *)v493 + 1);
  *(_OWORD *)v492 = *(_OWORD *)v493;
  v502 = *((_OWORD *)v493 + 2);
  *((_OWORD *)v492 + 1) = v501;
  v503 = *((_OWORD *)v493 + 3);
  *((_OWORD *)v492 + 2) = v502;
  v504 = *((_OWORD *)v493 + 4);
  *((_OWORD *)v492 + 3) = v503;
  v505 = *((_OWORD *)v493 + 5);
  *((_OWORD *)v492 + 4) = v504;
  v506 = *((_OWORD *)v493 + 6);
  *((_OWORD *)v492 + 5) = v505;
  *((_OWORD *)v492 + 6) = v506;
LABEL_1526:
  _InterlockedExchange(&dword_1808CCC40, 0);
  v1250 = 4LL;
  LODWORD(v1897) = lpMemh;
  LODWORD(v1894) = v444;
  v1893 = 1;
  LODWORD(v1895) = -1721306479;
  DWORD2(v1894) = 1;
  LODWORD(v1896) = 1;
  DWORD2(v1895) = 1;
  DWORD2(v1896) = 1;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808C0410)(0LL, 8225LL, 4LL, &v1893);
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v323 = dword_1808CCC34;
  if ( dword_1808CCC34 > 0 )
  {
    --dword_1808CCC34;
    if ( v323 == 1 )
    {
      do
      {
        if ( *v490 )
          FreeLibrary(*v490);
        v490 += 3;
        --v1250;
      }
      while ( v1250 );
      memset_0(&unk_1808C93A0, 0, 0x60uLL);
      v1251 = 2LL;
      v1252 = off_1808C0340;
      v1253 = off_1807174F0;
      do
      {
        v1254 = *((_OWORD *)v1253 + 1);
        *(_OWORD *)v1252 = *(_OWORD *)v1253;
        v1255 = *((_OWORD *)v1253 + 2);
        *((_OWORD *)v1252 + 1) = v1254;
        v1256 = *((_OWORD *)v1253 + 3);
        *((_OWORD *)v1252 + 2) = v1255;
        v1257 = *((_OWORD *)v1253 + 4);
        *((_OWORD *)v1252 + 3) = v1256;
        v1258 = *((_OWORD *)v1253 + 5);
        *((_OWORD *)v1252 + 4) = v1257;
        v1259 = *((_OWORD *)v1253 + 6);
        *((_OWORD *)v1252 + 5) = v1258;
        v1260 = *((_OWORD *)v1253 + 7);
        v1253 += 16;
        *((_OWORD *)v1252 + 6) = v1259;
        v1252 += 16;
        *((_OWORD *)v1252 - 1) = v1260;
        --v1251;
      }
      while ( v1251 );
      v1261 = *((_OWORD *)v1253 + 1);
      *(_OWORD *)v1252 = *(_OWORD *)v1253;
      v1262 = *((_OWORD *)v1253 + 2);
      *((_OWORD *)v1252 + 1) = v1261;
      v1263 = *((_OWORD *)v1253 + 3);
      *((_OWORD *)v1252 + 2) = v1262;
      v1264 = *((_OWORD *)v1253 + 4);
      *((_OWORD *)v1252 + 3) = v1263;
      v1265 = *((_OWORD *)v1253 + 5);
      *((_OWORD *)v1252 + 4) = v1264;
      v1266 = *((_OWORD *)v1253 + 6);
      *((_OWORD *)v1252 + 5) = v1265;
      *((_OWORD *)v1252 + 6) = v1266;
    }
  }
  _InterlockedExchange(&dword_1808CCC40, 0);
  ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808C04A0[0])(0LL, v1377);
LABEL_364:
  SH<void *,SH_HANDLE>::Reset(&v1755);
  *(_OWORD *)v1785 = 0LL;
  v174 = 0LL;
  *(_OWORD *)v1793 = 0LL;
  v324 = GetProcessHeap();
  v325 = HeapAlloc(v324, 8u, 0xA0uLL);
  v90 = 0LL;
  v175 = v325;
  if ( !v325 )
  {
    v175 = 0LL;
    goto LABEL_219;
  }
  *v325 = xmmword_1808C7510[0];
  v325[1] = xmmword_1808C7510[1];
  v325[2] = xmmword_1808C7510[2];
  v325[3] = xmmword_1808C7510[3];
  v325[4] = xmmword_1808C7510[4];
  v325[5] = xmmword_1808C7510[5];
  v325[6] = xmmword_1808C7510[6];
  v325[7] = xmmword_1808C7510[7];
  v325[8] = xmmword_1808C7510[8];
  v325[9] = xmmword_1808C7510[9];
  v326 = GetProcessHeap();
  v327 = (WCHAR *)HeapAlloc(v326, 8u, 8uLL);
  v90 = 0LL;
  v174 = v327;
  if ( !v327 )
  {
    v174 = 0LL;
    goto LABEL_219;
  }
  *(_QWORD *)v327 = qword_1808C7468;
  v1645 = (LPVOID)__rdtsc();
  v1713 = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v1713) >= 0 )
  {
    v1714 = (int)v90;
    if ( (int)RtlUIntAdd(v328, 160LL, &v1714) >= 0 && v1713 + v1714 >= v1713 )
    {
      v1715 = (int)v90;
      if ( (int)RtlUIntAdd(4LL, v329, &v1715) >= 0 && v288 + v1715 >= v288 )
      {
        v1716 = (int)v90;
        if ( (int)RtlUIntAdd(v287, (unsigned int)(v287 + 4), &v1716) >= 0 && v289 + v1716 >= v289 )
        {
          v290 = v289 + v1716;
          HIDWORD(v1785[0]) = v289 + v1716;
          v291 = GetProcessHeap();
          v292 = (unsigned int *)HeapAlloc(v291, 8u, v290);
          v90 = 0LL;
          if ( v292 )
          {
            v1785[1] = (size_t)v292;
            LODWORD(v1785[0]) = 0;
            LODWORD(v1779[0]) = 0;
            v1778[1] = 0LL;
            v245 = v292;
            v1771[1] = v292;
            lpModuleNamed = v174;
            v1511 = v175;
            if ( (int)RtlULongLongAdd(v292, 4LL, v1779) >= 0
              && (unsigned __int64)(v245 + 2) <= v1785[1] + HIDWORD(v1785[0]) )
            {
              v248 = (unsigned int *)v1779[0];
              *v245 = v246;
              *v248 = v246;
              v249 = ++LODWORD(v1785[0]);
              LODWORD(v1780[0]) = 0;
              v1779[1] = 0LL;
              if ( !v175 )
              {
                if ( !v247 )
                  goto LABEL_372;
                goto LABEL_219;
              }
              if ( !v247 )
                goto LABEL_219;
LABEL_372:
              if ( (const void **)v1785[1] == v90 )
              {
                v1717 = (unsigned int)v90;
                if ( (int)RtlUIntAdd(v246, v247, &v1717) >= 0
                  && (int)RtlUIntAdd(HIDWORD(v1785[0]), v1717, (char *)v1785 + 4) >= 0 )
                {
                  goto LABEL_375;
                }
                goto LABEL_219;
              }
              v250 = (unsigned int *)v1785[1];
              v1772 = v1785[1];
              while ( (unsigned int)v90 < v249 )
              {
                v251 = *v250;
                v1718 = 0;
                if ( (int)RtlUIntAdd(4LL, v251, &v1718) < 0 || (int)RtlULongLongAdd(v252, v1718, &v1772) < 0 )
                {
LABEL_252:
                  v90 = 0LL;
                  goto LABEL_219;
                }
                v250 = (unsigned int *)v1772;
                LODWORD(v90) = v253 + 1;
              }
              v254 = RtlULongLongAdd(v250, 4LL, v1780);
              v90 = 0LL;
              if ( v254 >= 0 && (unsigned __int64)v255 + v256 + 4 <= v1785[1] + HIDWORD(v1785[0]) )
              {
                *v255 = v256;
                if ( v175 )
                {
                  memcpy_0(v1780[0], v175, v256);
                  v90 = 0LL;
                }
                v257 = 4;
LABEL_375:
                v330 = LODWORD(v1785[0]) + 1;
                LODWORD(v1781[0]) = 0;
                ++LODWORD(v1785[0]);
                v1780[1] = 0LL;
                if ( v174 )
                {
                  if ( (const void **)v1785[1] == v90 )
                  {
                    v1719 = (unsigned int)v90;
                    if ( (int)RtlUIntAdd(v257, 8LL, &v1719) < 0
                      || (int)RtlUIntAdd(HIDWORD(v1785[0]), v1719, (char *)v1785 + 4) < 0 )
                    {
                      goto LABEL_219;
                    }
                  }
                  else
                  {
                    v258 = (unsigned int *)v1785[1];
                    v1773 = v1785[1];
                    while ( (unsigned int)v90 < v330 )
                    {
                      v259 = *v258;
                      v1720 = 0;
                      if ( (int)RtlUIntAdd(4LL, v259, &v1720) < 0 || (int)RtlULongLongAdd(v260, v1720, &v1773) < 0 )
                        goto LABEL_252;
                      v258 = (unsigned int *)v1773;
                      LODWORD(v90) = v261 + 1;
                    }
                    v262 = RtlULongLongAdd(v258, 4LL, v1781);
                    v90 = 0LL;
                    if ( v262 < 0 || (unsigned __int64)v263 + v264 + 4 > v1785[1] + HIDWORD(v1785[0]) )
                      goto LABEL_219;
                    *v263 = v264;
                    memcpy_0(v1781[0], v174, v264);
                    v90 = 0LL;
                    v265 = 4;
                  }
                  v266 = LODWORD(v1785[0]) + 1;
                  LODWORD(v1782) = 0;
                  ++LODWORD(v1785[0]);
                  v1781[1] = 0LL;
                  if ( (const void **)v1785[1] == v90 )
                  {
                    v1721 = (unsigned int)v90;
                    if ( (int)RtlUIntAdd(v265, 8LL, &v1721) < 0
                      || (int)RtlUIntAdd(HIDWORD(v1785[0]), v1721, (char *)v1785 + 4) < 0 )
                    {
                      goto LABEL_219;
                    }
                  }
                  else
                  {
                    v280 = (unsigned int *)v1785[1];
                    v281 = (unsigned int)v90;
                    v1774 = v1785[1];
                    while ( v281 < v266 )
                    {
                      v282 = *v280;
                      v1722 = (unsigned int)v90;
                      if ( (int)RtlUIntAdd(4LL, v282, &v1722) < 0 || (int)RtlULongLongAdd(v283, v1722, &v1774) < 0 )
                        goto LABEL_219;
                      v280 = (unsigned int *)v1774;
                      v281 = v284 + 1;
                    }
                    if ( (int)RtlULongLongAdd(v280, 4LL, &v1782) < 0
                      || (unsigned __int64)(v285 + 3) > v1785[1] + HIDWORD(v1785[0]) )
                    {
                      goto LABEL_219;
                    }
                    v286 = v1782;
                    *v285 = 8;
                    v267 = 4;
                    *v286 = v1645;
                  }
                  ++LODWORD(v1785[0]);
                  v1723 = (unsigned int)v90;
                  if ( (int)RtlUIntAdd(v267, v267, &v1723) < 0 )
                    goto LABEL_219;
                  v269 = v1723;
                  v1733 = v1723;
                  v1724 = (unsigned int)v90;
                  if ( (int)RtlUIntAdd(v268, 8LL, &v1724) < 0 || (int)RtlUIntAdd(v269, v1724, &v1733) < 0 )
                    goto LABEL_219;
                  v1644 = v90;
                  v176 = v90;
                  v1443 = (unsigned int)v90;
                  v1376 = v90;
                  v1549 = v90;
                  v1478 = (unsigned int)v90;
                  v1632 = v90;
                  Sizea = (unsigned int)v90;
                  v1532 = v90;
                  v1424 = 0LL;
                  lpMemd = v1733;
                  v1395 = (unsigned __int16 *)__rdtsc();
                  v1725 = 8;
                  v270 = RtlUIntAdd(8LL, HIDWORD(v1785[0]), &v1725);
                  if ( v270 < 0 )
                    goto LABEL_295;
                  v272 = (v1725 + 7) & 0xFFFFFFF8;
                  if ( v272 < v1725 )
                    goto LABEL_219;
                  v1725 = (v1725 + 7) & 0xFFFFFFF8;
                  v273 = v272;
                  v274 = GetProcessHeap();
                  v275 = (unsigned __int8 *)HeapAlloc(v274, 8u, v273);
                  v90 = 0LL;
                  v1512 = v275;
                  if ( v275 )
                  {
                    v1775 = v275;
                    *(_DWORD *)v275 = v1785[0];
                    v276 = RtlULongLongAdd(v275, 4LL, &v1775);
                    lpModuleNamee = v278;
                    v270 = v276;
                    if ( v276 >= 0 )
                    {
                      v1267 = v1775;
                      *(_DWORD *)v1775 = HIDWORD(v1785[0]);
                      v1268 = RtlULongLongAdd(v1267, v277, &v1775);
                      lpModuleNamee = v1269;
                      v270 = v1268;
                      if ( v1268 >= 0 )
                      {
                        *(_QWORD *)((char *)v1269 + v1725 - 8) = v1395;
                        memcpy_0(v1775, (const void *)v1785[1], HIDWORD(v1785[0]));
                        v90 = 0LL;
                        v271 = v1725;
                        v1644 = (const void **)v1512;
                        v1443 = v1725;
LABEL_294:
                        lpModuleNamed = v174;
                        v1511 = v175;
LABEL_295:
                        v192 = v270 | 0x10000000;
                        if ( v192 < 0 )
                        {
                          v183 = v1644;
                          goto LABEL_198;
                        }
                        v1392 = (unsigned __int16 *)v90;
                        if ( !v1644 )
                          goto LABEL_219;
                        if ( !v271 || (dwBytesa = v271 + 8, (Src = (char *)MemoryAlloc(v271 + 8LL)) == 0LL) )
                        {
                          v183 = v1644;
                          v192 = -805306367;
                          goto LABEL_1634;
                        }
                        v173 = 0;
                        v1358 = 0;
                        v293 = 0LL;
                        if ( v1443 )
                        {
                          do
                            v173 ^= *((_BYTE *)v1644 + v293++);
                          while ( v293 < v1443 );
                          v1358 = v173;
                        }
                        v201 = 0;
                        v1589 = Src;
                        v1844 = 0xC81ECB17B1B54A58uLL;
                        v1625 = 0;
                        v1661 = v1443 & 7;
                        v203 = v1644;
                        v1613 = -1;
                        v170 = 0;
                        v1652 = 0;
                        if ( (v1443 & 7) != 0 )
                        {
                          v1637 = 0;
                          v214 = 0;
                          v1623 = 0;
                          v205 = 56;
                          while ( 1 )
                          {
                            v202 = *(unsigned __int8 *)v203;
                            v203 = (const void **)((char *)v203 + 1);
                            if ( v201 >= 4 )
                            {
                              v204 = v1637;
                              v214 |= v202 << v205;
                            }
                            else
                            {
                              v204 = (v202 << (v205 - 32)) | v1637;
                              v1637 = v204;
                            }
                            v205 -= 8;
                            v206 = v1623 + 1;
                            v1623 = v206;
                            if ( v206 >= (unsigned __int8)(v1443 & 7) )
                              break;
                            v201 = v206;
                          }
                          v88 = v1668;
                          v207 = v204 ^ 0xB17A307A;
                          v208 = v214;
                          v209 = v214 ^ 0x42F6B18D;
                          v210 = v204 ^ 0xB17A307A;
                          v211 = 0;
                          v1624 = 0;
                          v212 = Src;
                          v213 = v209;
                          while ( 1 )
                          {
                            v1638 = v204;
                            v1612 = (SIZE_T)(v212 + 1);
                            if ( v211 >= 4 )
                            {
                              v213 = (v213 << 8) | HIBYTE(v213);
                              v215 = v213;
                            }
                            else
                            {
                              v210 = (v210 << 8) | HIBYTE(v210);
                              v215 = v210;
                            }
                            *v212++ = v215;
                            ++v1624;
                            v204 = v1638;
                            if ( v1624 >= (int)v1661 )
                              break;
                            v211 = v1624;
                          }
                          v176 = v1376;
                          v1652 = v208;
                          v1589 = (char *)v1612;
                          v173 = v1358;
                          v1625 = v207;
                          v1511 = v175;
                          lpModuleNamed = v174;
                          if ( v1661 > 4 )
                          {
                            v1613 = v209 >> (8 * (8 - v1661)) << (8 * (8 - v1661));
                          }
                          else
                          {
                            v1613 = 0;
                            if ( v1661 < 4 )
                              v1625 = v207 >> (8 * (4 - v1661)) << (8 * (4 - v1661));
                          }
                          v170 = v1638;
                        }
                        if ( (unsigned __int64)v1443 >> 3 )
                        {
                          v168 = (unsigned __int8 *)v203 + 2;
                          v169 = HIDWORD(v1844);
                          v165 = v1625;
                          v166 = v1613;
                          v172 = (unsigned __int64)v1443 >> 3;
                          v1660 = WORD1(v1844);
                          v137 = WORD2(v1844);
                          v1360 = HIWORD(v1844);
                          v171 = v1652;
                          v1588 = v1589 + 7;
                          do
                          {
                            v138 = v168[1] | ((*v168 | ((*(v168 - 1) | (*(v168 - 2) << 8)) << 8)) << 8);
                            v139 = v168[5] | ((v168[4] | ((v168[3] | (v168[2] << 8)) << 8)) << 8);
                            v1622 = v168 + 8;
                            v140 = v139 ^ v166;
                            v141 = v165 ^ v138 ^ (v140 - 19032);
                            v142 = (__ROR4__(v141 ^ v169, 7) + WORD1(v1844) * __ROR4__(v141, 15)) ^ v140;
                            v143 = (v137 * __ROR4__(v142 - 1313519016, 9) - __ROR4__(v142, 10)) ^ v141 ^ v169;
                            v144 = (__ROR4__(v143, 27) + HIWORD(v1844) * __ROR4__(v137 ^ v143, 28)) ^ v142;
                            v145 = (v169 - (v144 ^ 0xB1B54A58)) ^ v143;
                            v146 = (WORD1(v1844) * (v145 - 19032) - (v145 >> 6)) ^ v144;
                            v147 = (19032 * (v137 ^ __ROR4__(v146, 15))) ^ v145;
                            v148 = (v137 * (HIWORD(v1844) + __ROR4__(~v147, 3))) ^ v146;
                            v149 = (v148 - v169 - 19032) ^ v147;
                            v150 = (v1660 * (v1360 ^ v149)) ^ __ROR4__(v149, 10) ^ v148;
                            v151 = __ROR4__(v150, 3) ^ (v137 * __ROR4__(v150 ^ 0x4A58, 26)) ^ v149;
                            v152 = (19032 * (__ROR4__(v151, 15) - HIWORD(v1844))) ^ v150;
                            v153 = (v152 >> 15) ^ (19032 * ((8 * (v152 - v137)) | ((v152 - v137) >> 29))) ^ (v152 >> 1) ^ (19032 * (HIWORD(v1844) ^ v152)) ^ v151;
                            v154 = (WORD1(v1844) * (v153 - v137) - (v153 >> 13)) ^ v152;
                            v155 = __ROR4__(v154, 11) ^ (v137 * __ROR4__(-1313519016 - v154, 9)) ^ v153;
                            v156 = (v155 + 1313519016 - HIWORD(v1844)) ^ v154;
                            v157 = (19032 * (v1660 ^ v156) - __ROR4__(v156, 7)) ^ v155;
                            v158 = (WORD1(v1844) * __ROR4__(HIWORD(v1844) ^ v157, 28) - __ROR4__(v157, 16)) ^ v156;
                            v159 = (__ROR4__(v158, 4) + v137 * __ROR4__(-1313519016 - v158, 10)) ^ v157;
                            v160 = __ROR4__(v159, 9) ^ (HIWORD(v1844) * __ROR4__(v159 + 1313519016, 4)) ^ v158;
                            v161 = (19032 * __ROR4__(v169 ^ v160, 24) - __ROR4__(v160, 30)) ^ v159;
                            v162 = (WORD1(v1844) * __ROR4__(v169 - v161, 11) - __ROR4__(v161, 12)) ^ v160;
                            v163 = (v162 >> 8) ^ (v137 * (WORD1(v1844) ^ v162)) ^ v161;
                            v164 = v163 ^ v169 ^ 0xB1B54A58;
                            v165 = v170 ^ v163;
                            v166 = v171 ^ v164 ^ v162;
                            v167 = v1588;
                            v1588 += 8;
                            *(v167 - 4) = v165;
                            *v167 = v166;
                            *(v167 - 5) = BYTE1(v165);
                            *(v167 - 1) = BYTE1(v166);
                            v168 = v1622;
                            *(v167 - 6) = (unsigned __int16)(v165 >> 8) >> 8;
                            v169 = HIDWORD(v1844);
                            *(v167 - 2) = (unsigned __int16)(v166 >> 8) >> 8;
                            *(v167 - 7) = __ROR4__(
                                            (((v165 >> 8) | (v165 << 24)) >> 8) | (((v165 >> 8) | (v165 << 24)) << 24),
                                            8);
                            v170 = v138;
                            *(v167 - 3) = __ROR4__(
                                            (((v166 >> 8) | (v166 << 24)) >> 8) | (((v166 >> 8) | (v166 << 24)) << 24),
                                            8);
                            v171 = v139;
                            --v172;
                          }
                          while ( v172 );
                          v173 = v1358;
                          v88 = v1668;
                          v174 = (WCHAR *)lpModuleNamed;
                          v175 = v1511;
                          v176 = v1376;
                        }
                        *(_QWORD *)&Src[v1443] = v173;
                        v177 = GetProcessHeap();
                        v178 = (unsigned int *)HeapAlloc(v177, 8u, 0x30uLL);
                        v179 = 0LL;
                        if ( v178 )
                          v179 = v178;
                        v1509 = v179;
                        v180 = v178 == 0LL ? 0xC0000017 : 0;
                        if ( v178 )
                        {
                          *v179 = dwBytesa;
                          v181 = GetProcessHeap();
                          v182 = HeapAlloc(v181, 8u, dwBytesa);
                          if ( !v182 )
                          {
                            v180 = -1073741801;
                            goto LABEL_145;
                          }
                          *((_QWORD *)v1509 + 1) = v182;
                          memcpy_0(v182, Src, dwBytesa);
                          v183 = v1644;
                          v1509[4] = 160;
                          v216 = GetProcessHeap();
                          v217 = HeapAlloc(v216, 8u, 0xA0uLL);
                          if ( v217 )
                          {
                            *((_QWORD *)v1509 + 3) = v217;
                            *v217 = xmmword_1808C7470[0];
                            v217[1] = xmmword_1808C7470[1];
                            v217[2] = xmmword_1808C7470[2];
                            v217[3] = xmmword_1808C7470[3];
                            v217[4] = xmmword_1808C7470[4];
                            v217[5] = xmmword_1808C7470[5];
                            v217[6] = xmmword_1808C7470[6];
                            v217[7] = xmmword_1808C7470[7];
                            v217[8] = xmmword_1808C7470[8];
                            v217[9] = xmmword_1808C7470[9];
                            v1509[8] = 8;
                            v311 = GetProcessHeap();
                            v312 = HeapAlloc(v311, 8u, 8uLL);
                            if ( v312 )
                            {
                              *((_QWORD *)v1509 + 5) = v312;
                              v180 = 0;
                              **((_QWORD **)v1509 + 5) = qword_1808C7460;
                              v189 = (unsigned __int16 *)v1509;
LABEL_156:
                              v176 = (const void **)v189;
                              v1392 = 0LL;
                              goto LABEL_157;
                            }
                          }
                          v180 = -1073741801;
                        }
                        else
                        {
LABEL_145:
                          v183 = v1644;
                        }
                        v184 = v1509;
                        if ( v1509 )
                        {
                          lpModuleName = (WCHAR *)*((_QWORD *)v1509 + 1);
                          if ( lpModuleName )
                          {
                            v185 = GetProcessHeap();
                            HeapFree(v185, 0, lpModuleName);
                            v184 = v1509;
                            *((_QWORD *)v1509 + 1) = 0LL;
                          }
                          lpModuleNamea = (WCHAR *)*((_QWORD *)v184 + 3);
                          if ( lpModuleNamea )
                          {
                            v186 = GetProcessHeap();
                            HeapFree(v186, 0, lpModuleNamea);
                            v184 = v1509;
                            *((_QWORD *)v1509 + 3) = 0LL;
                          }
                          lpModuleNameb = (WCHAR *)*((_QWORD *)v184 + 5);
                          if ( lpModuleNameb )
                          {
                            v187 = GetProcessHeap();
                            HeapFree(v187, 0, lpModuleNameb);
                            *((_QWORD *)v1509 + 5) = 0LL;
                          }
                          v188 = GetProcessHeap();
                          HeapFree(v188, 0, v1509);
                        }
                        if ( v180 >= 0 )
                        {
                          v189 = v1392;
                          goto LABEL_156;
                        }
LABEL_157:
                        v1643 = v183;
                        v1510 = v175;
                        lpModuleNamec = v174;
                        v1375 = v176;
                        v190 = GetProcessHeap();
                        HeapFree(v190, 0, Src);
                        v191 = v1392;
                        if ( v1392 )
                        {
                          v1519 = (void *)*((_QWORD *)v1392 + 1);
                          if ( v1519 )
                          {
                            v1270 = GetProcessHeap();
                            HeapFree(v1270, 0, v1519);
                            v191 = v1392;
                            *((_QWORD *)v1392 + 1) = 0LL;
                          }
                          v1520 = (void *)*((_QWORD *)v191 + 3);
                          if ( v1520 )
                          {
                            v1271 = GetProcessHeap();
                            HeapFree(v1271, 0, v1520);
                            v191 = v1392;
                            *((_QWORD *)v1392 + 3) = 0LL;
                          }
                          v1521 = (void *)*((_QWORD *)v191 + 5);
                          if ( v1521 )
                          {
                            v1272 = GetProcessHeap();
                            HeapFree(v1272, 0, v1521);
                            *((_QWORD *)v1392 + 5) = 0LL;
                          }
                          v1273 = GetProcessHeap();
                          HeapFree(v1273, 0, v1392);
                          v1375 = v176;
                          lpModuleNamec = v174;
                          v1510 = v175;
                          v1643 = v183;
                        }
                        v192 = v180 | 0x10000000;
                        if ( v192 < 0 )
                          goto LABEL_197;
                        v193 = *(unsigned int *)v176;
                        v1726 = 0;
                        v1727 = 4;
                        v195 = RtlUIntAdd(4LL, v193, &v1727);
                        if ( v195 < 0
                          || (v195 = RtlUIntAdd(v1727, v194, &v1727), v195 < 0)
                          || (v195 = RtlUIntAdd(v1727, *((unsigned int *)v176 + 4), &v1727), v195 < 0)
                          || (v195 = RtlUIntAdd(v1727, 4LL, &v1727), v195 < 0)
                          || (v195 = RtlUIntAdd(v1727, *((unsigned int *)v176 + 8), &v1727), v195 < 0) )
                        {
                          v294 = v1549;
                        }
                        else
                        {
                          v1726 = v1727;
                          v197 = v1727;
                          v198 = GetProcessHeap();
                          v199 = HeapAlloc(v198, 8u, v197);
                          v90 = 0LL;
                          v1442 = (SIZE_T)v199;
                          if ( !v199 )
                          {
LABEL_162:
                            v200 = -1073741801;
                            goto LABEL_356;
                          }
                          *v199 = *(_DWORD *)v176;
                          v1777[0] = v199;
                          v302 = RtlULongLongAdd(v199, 4LL, v1777);
                          v1653 = v303;
                          v195 = v302;
                          if ( v302 < 0 )
                            goto LABEL_1662;
                          memcpy_0(v1777[0], v176[1], *(unsigned int *)v176);
                          v195 = RtlULongLongAdd(v1777[0], *(unsigned int *)v176, v1777);
                          v303 = (void *)v1442;
                          v1653 = (void *)v1442;
                          if ( v195 < 0 )
                            goto LABEL_1662;
                          v304 = v1777[0];
                          *(_DWORD *)v1777[0] = *((_DWORD *)v176 + 4);
                          v305 = RtlULongLongAdd(v304, 4LL, v1777);
                          v303 = v306;
                          v195 = v305;
                          v1653 = v306;
                          if ( v305 < 0 )
                            goto LABEL_1662;
                          memcpy_0(v1777[0], v176[3], *((unsigned int *)v176 + 4));
                          v195 = RtlULongLongAdd(v1777[0], *((unsigned int *)v176 + 4), v1777);
                          v303 = (void *)v1442;
                          v1653 = (void *)v1442;
                          if ( v195 < 0 )
                            goto LABEL_1662;
                          v307 = v1777[0];
                          *(_DWORD *)v1777[0] = *((_DWORD *)v176 + 8);
                          v308 = RtlULongLongAdd(v307, 4LL, v1777);
                          v303 = v309;
                          v195 = v308;
                          v1653 = v309;
                          if ( v308 < 0
                            || (memcpy_0(v1777[0], v176[5], *((unsigned int *)v176 + 8)),
                                v195 = RtlULongLongAdd(v1777[0], *((unsigned int *)v176 + 8), v1777),
                                v1653 = (void *)v1442,
                                v303 = (void *)v1442,
                                v195 < 0) )
                          {
LABEL_1662:
                            if ( v303 )
                            {
                              v295 = GetProcessHeap();
                              HeapFree(v295, 0, v1653);
                            }
                            v294 = v1549;
                          }
                          else
                          {
                            v294 = (void *)v1442;
                            v1478 = v1726;
                            v1549 = (void *)v1442;
                          }
                          v196 = v183;
                        }
                        v192 = v195 | 0x10000000;
                        if ( v192 < 0 )
                          goto LABEL_197;
                        v296 = -1;
                        if ( lpMemd < 0xFFFFFFF8 )
                          v296 = lpMemd + 8;
                        v192 = lpMemd >= 0xFFFFFFF8 ? -805306219 : 0x10000000;
                        if ( lpMemd + 8 < 8 )
                        {
                          v90 = 0LL;
                          if ( v192 >= 0 )
                          {
                            v297 = Sizea;
                            goto LABEL_312;
                          }
LABEL_198:
                          if ( !v183 )
                          {
LABEL_199:
                            if ( v176 )
                            {
                              v1340 = (void *)v176[1];
                              if ( v1340 )
                              {
                                v1341 = GetProcessHeap();
                                HeapFree(v1341, 0, v1340);
                                v176[1] = 0LL;
                              }
                              v1342 = (void *)v176[3];
                              if ( v1342 )
                              {
                                v1343 = GetProcessHeap();
                                HeapFree(v1343, 0, v1342);
                                v176[3] = 0LL;
                              }
                              v1344 = (void *)v176[5];
                              if ( v1344 )
                              {
                                v1345 = GetProcessHeap();
                                HeapFree(v1345, 0, v1344);
                                v176[5] = 0LL;
                              }
                              v1346 = GetProcessHeap();
                              HeapFree(v1346, 0, v176);
                              v90 = 0LL;
                            }
                            if ( v1549 )
                            {
                              v1347 = GetProcessHeap();
                              HeapFree(v1347, 0, v1549);
                              v90 = 0LL;
                            }
                            if ( v1632 )
                            {
                              v1348 = GetProcessHeap();
                              HeapFree(v1348, 0, v1632);
                              v90 = 0LL;
                            }
                            if ( v1532 )
                            {
                              v1349 = (void *)v1532[1];
                              if ( v1349 )
                              {
                                v1350 = GetProcessHeap();
                                HeapFree(v1350, 0, v1349);
                                v1532[1] = 0LL;
                              }
                              v1351 = (void *)v1532[3];
                              if ( v1351 )
                              {
                                v1352 = GetProcessHeap();
                                HeapFree(v1352, 0, v1351);
                                v1532[3] = 0LL;
                              }
                              v1353 = (void *)v1532[5];
                              if ( v1353 )
                              {
                                v1354 = GetProcessHeap();
                                HeapFree(v1354, 0, v1353);
                                v1532[5] = 0LL;
                              }
                              v1355 = GetProcessHeap();
                              HeapFree(v1355, 0, v1532);
                              v90 = 0LL;
                            }
                            if ( v1424 )
                            {
                              v1356 = GetProcessHeap();
                              HeapFree(v1356, 0, v1424);
                              v90 = 0LL;
                            }
                            if ( v192 >= 0 )
                            {
                              if ( LODWORD(v1793[0]) )
                              {
                                v221 = v1793[1];
                                if ( v1793[1] )
                                {
                                  v1758 = (const void **)v1793[1];
                                  if ( (int)RtlULongLongAdd(v1793[1], 4LL, &v1758) >= 0 )
                                  {
                                    v224 = v1758;
                                    if ( *v221 == (_DWORD)v90 )
                                      v224 = v90;
                                    v1758 = v224;
                                    if ( *v221 == v223 && *(_DWORD *)v224 >= (int)v90 && v221 && v222 > 1 )
                                    {
                                      for ( i1 = (int)v90; ; i1 = 1 )
                                      {
                                        v226 = v221 + 1;
                                        if ( i1 )
                                          break;
                                        if ( v226 < v221 )
                                          break;
                                        v221 = (_DWORD *)((char *)v226 + (unsigned int)*v221);
                                        if ( v221 < v226 )
                                          break;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_219;
                          }
LABEL_1634:
                          v1339 = GetProcessHeap();
                          HeapFree(v1339, 0, v183);
                          v90 = 0LL;
                          goto LABEL_199;
                        }
                        v1728 = 0;
                        v1274 = (v296 + 7) & 0xFFFFFFF8;
                        if ( (unsigned int)v1274 < v296 )
                        {
                          v192 = -1073741675;
                          goto LABEL_197;
                        }
                        v1728 = (v296 + 7) & 0xFFFFFFF8;
                        v1549 = v294;
                        v183 = v196;
                        v1275 = RtlUIntAdd(v1274, 8LL, &v1728);
                        v90 = 0LL;
                        v192 = v1275;
                        if ( v1275 < 0 )
                          goto LABEL_198;
                        v1549 = v1276;
                        if ( !v1785[1] || (v1549 = v1276, LODWORD(v1785[0]) <= 1) )
                        {
                          v192 = -1073741811;
                          goto LABEL_198;
                        }
                        v509 = (unsigned int *)v1785[1];
                        for ( i2 = 0; ; i2 = 1 )
                        {
                          v507 = *v509;
                          v508 = v509 + 1;
                          if ( i2 )
                            break;
                          v1549 = v1276;
                          if ( v508 < v509 )
                            goto LABEL_1553;
                          v509 = (unsigned int *)((char *)v508 + v507);
                          if ( (unsigned int *)((char *)v508 + v507) < v508 )
                          {
LABEL_1552:
                            v192 = -1073741675;
                            v1549 = v1276;
                            goto LABEL_197;
                          }
                        }
                        if ( v508 < v509 )
                          goto LABEL_1553;
                        v1549 = v1276;
                        if ( LODWORD(v1785[0]) <= 2 )
                        {
                          v192 = -1073741811;
                          goto LABEL_197;
                        }
                        v1277 = (unsigned int *)v1785[1];
                        for ( i3 = 0; ; ++i3 )
                        {
                          lpMemo = *v1277;
                          v1279 = v1277 + 1;
                          if ( i3 >= 2 )
                            break;
                          v1549 = v1276;
                          if ( v1279 < v1277 )
                            goto LABEL_1553;
                          v1277 = (unsigned int *)((char *)v1279 + lpMemo);
                          if ( v1277 < v1279 )
                            goto LABEL_1552;
                        }
                        if ( v1279 < v1277 )
                        {
LABEL_1553:
                          v192 = -1073741675;
                          goto LABEL_197;
                        }
                        v1549 = v1276;
                        v1729 = 4;
                        v192 = RtlUIntAdd(4LL, v1728, &v1729);
                        if ( v192 < 0 || (v192 = RtlUIntAdd(v1729, v1280, &v1729), v192 < 0) )
                        {
                          v90 = 0LL;
                        }
                        else
                        {
                          v1284 = RtlUIntAdd(v1729, v1283, &v1729);
                          v90 = 0LL;
                          v192 = v1284;
                          if ( v1284 >= 0 )
                          {
                            v192 = RtlUIntAdd(v1729, 4LL, &v1729);
                            if ( v192 >= 0 )
                            {
                              v192 = RtlUIntAdd(v1729, lpMemo, &v1729);
                              if ( v192 >= 0 )
                              {
                                v297 = v1729;
                                goto LABEL_1572;
                              }
                            }
                          }
                        }
                        if ( v192 < 0 )
                          goto LABEL_198;
                        v297 = 0;
LABEL_1572:
                        v1549 = v1281;
                        if ( v297 > 0x400000 )
                        {
                          v192 = -2147418113;
                          goto LABEL_198;
                        }
                        Sizea = v297;
                        v1375 = v176;
                        lpModuleNamec = v174;
                        v1510 = v175;
                        v1643 = v183;
                        v1478 = v1282;
LABEL_312:
                        v298 = v297;
                        v299 = GetProcessHeap();
                        v300 = (const void **)HeapAlloc(v299, 8u, v298);
                        v301 = v1632;
                        if ( v300 )
                          v301 = v300;
                        v1632 = v301;
                        v192 = v300 != 0LL ? 0x10000000 : -805306345;
                        if ( !v300 )
                        {
LABEL_197:
                          v90 = 0LL;
                          goto LABEL_198;
                        }
                        hModule = 0LL;
                        v1796 = 0LL;
                        v1797 = 0LL;
                        if ( !v1549 || !v301 )
                        {
                          v192 = -2147024809;
                          goto LABEL_197;
                        }
                        LODWORD(v1797) = v1478;
                        *(_QWORD *)((char *)&v1797 + 4) = Sizea;
                        *(_QWORD *)&v1796 = v1549;
                        *((_QWORD *)&v1796 + 1) = v301;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                          && (v218 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v1285 = ((__int64 (__fastcall *)(__int64, __int128 *))v218)(134LL, &v1796);
                          v192 = v1285 | 0x10000000;
                          if ( v1285 < 0 )
                          {
                            v90 = 0LL;
                            goto LABEL_192;
                          }
                          v220 = DWORD1(v1797);
                        }
                        else
                        {
                          v219 = GetLastError();
                          v90 = 0LL;
                          v192 = v219;
                          if ( v219 > 0 )
                            v192 = (unsigned __int16)v219 | 0x80070000;
                          if ( v192 >= 0 )
                            v192 = -2147467259;
LABEL_192:
                          if ( v192 == -805306333 )
                          {
                            v192 = -2147024774;
                            goto LABEL_198;
                          }
                          if ( v192 < 0 )
                            goto LABEL_198;
                          v220 = Sizea;
                        }
                        v1393 = 0LL;
                        v1730 = 0;
                        v1748 = v1632;
                        if ( v220 < 4 )
                        {
LABEL_196:
                          v192 = -805306306;
                          goto LABEL_197;
                        }
                        lpMemb = *(_DWORD *)v1632;
                        v232 = RtlULongLongAdd(v1632, 4LL, &v1748);
                        v90 = 0LL;
                        v233 = v232;
                        if ( v232 < 0 )
                          goto LABEL_228;
                        v233 = RtlUIntAdd(0LL, 4LL, &v1730);
                        if ( v233 < 0 )
                          goto LABEL_228;
                        if ( v339 - v1730 >= (unsigned int)v340 )
                        {
                          dwBytesc = v1748;
                          Sizeb = v340;
                          v233 = RtlULongLongAdd(v1748, v340, &v1748);
                          if ( v233 < 0 )
                            goto LABEL_228;
                          v233 = RtlUIntAdd(v1730, v341, &v1730);
                          if ( v233 < 0 )
                            goto LABEL_228;
                          if ( v342 - v1730 >= 4 )
                          {
                            v1445 = *(_DWORD *)v1748;
                            v233 = RtlULongLongAdd(v1748, 4LL, &v1748);
                            if ( v233 >= 0 )
                            {
                              v233 = RtlUIntAdd(v1730, 4LL, &v1730);
                              if ( v233 >= 0 )
                              {
                                if ( v343 - v1730 < (unsigned int)v344 )
                                  goto LABEL_196;
                                v1627 = v1748;
                                v1616 = v344;
                                v233 = RtlULongLongAdd(v1748, (unsigned int)v344, &v1748);
                                if ( v233 >= 0 )
                                {
                                  v233 = RtlUIntAdd(v1730, v345, &v1730);
                                  if ( v233 >= 0 )
                                  {
                                    if ( v346 - v1730 < 4 )
                                      goto LABEL_196;
                                    v1480 = *(_DWORD *)v1748;
                                    v233 = RtlULongLongAdd(v1748, 4LL, &v1748);
                                    if ( v233 >= 0 )
                                    {
                                      v233 = RtlUIntAdd(v1730, 4LL, &v1730);
                                      if ( v233 >= 0 )
                                      {
                                        if ( v347 - v1730 < v348 )
                                          goto LABEL_196;
                                        v233 = RtlUIntAdd(v1730, v348, &v1730);
                                        if ( v233 >= 0 )
                                        {
                                          if ( v349 != v1730 || (unsigned int)(lpMemb + v350 + v351) + 12LL != v349 )
                                            goto LABEL_196;
                                          v352 = GetProcessHeap();
                                          v353 = HeapAlloc(v352, 8u, 0x30uLL);
                                          v354 = 0LL;
                                          if ( v353 )
                                            v354 = v353;
                                          v1655 = v354;
                                          v233 = v353 == 0LL ? 0xC0000017 : 0;
                                          if ( !v353 )
                                            goto LABEL_1590;
                                          if ( dwBytesc )
                                          {
                                            *(_DWORD *)v354 = lpMemb;
                                            v355 = GetProcessHeap();
                                            v356 = HeapAlloc(v355, 8u, Sizeb);
                                            if ( v356 )
                                            {
                                              v1655[1] = v356;
                                              v233 = 0;
                                              memcpy_0(v356, dwBytesc, Sizeb);
                                              v354 = v1655;
                                              v1375 = v176;
                                              lpModuleNamec = v174;
                                              v1510 = v175;
                                              v1643 = v183;
                                              goto LABEL_1582;
                                            }
LABEL_1589:
                                            v233 = -1073741801;
LABEL_1590:
                                            v1290 = v1655;
                                            if ( v1655 )
                                            {
                                              v1540 = (void *)v1655[1];
                                              if ( v1540 )
                                              {
                                                v1291 = GetProcessHeap();
                                                HeapFree(v1291, 0, v1540);
                                                v1290 = v1655;
                                                v1655[1] = 0LL;
                                              }
                                              v1541 = (void *)v1290[3];
                                              if ( v1541 )
                                              {
                                                v1292 = GetProcessHeap();
                                                HeapFree(v1292, 0, v1541);
                                                v1290 = v1655;
                                                v1655[3] = 0LL;
                                              }
                                              v1542 = (void *)v1290[5];
                                              if ( v1542 )
                                              {
                                                v1293 = GetProcessHeap();
                                                HeapFree(v1293, 0, v1542);
                                                v1655[5] = 0LL;
                                              }
                                              v1294 = GetProcessHeap();
                                              HeapFree(v1294, 0, v1655);
                                            }
                                            v335 = 0LL;
                                          }
                                          else
                                          {
                                            *(_DWORD *)v354 = 0;
                                            v354[1] = 0LL;
LABEL_1582:
                                            if ( v1627 )
                                            {
                                              *((_DWORD *)v354 + 4) = v1445;
                                              v1286 = GetProcessHeap();
                                              v1287 = HeapAlloc(v1286, 8u, v1616);
                                              if ( !v1287 )
                                                goto LABEL_1589;
                                              v1655[3] = v1287;
                                              v233 = 0;
                                              memcpy_0(v1287, v1627, v1616);
                                              v354 = v1655;
                                              v1375 = v176;
                                              lpModuleNamec = v174;
                                              v1510 = v175;
                                              v1643 = v183;
                                            }
                                            else
                                            {
                                              *((_DWORD *)v354 + 4) = 0;
                                              v354[3] = 0LL;
                                            }
                                            if ( v1748 )
                                            {
                                              *((_DWORD *)v354 + 8) = v1480;
                                              v1288 = GetProcessHeap();
                                              v1289 = HeapAlloc(v1288, 8u, v1480);
                                              if ( !v1289 )
                                                goto LABEL_1589;
                                              v1655[5] = v1289;
                                              v233 = 0;
                                              memcpy_0(v1289, v1748, v1480);
                                              v354 = v1655;
                                              v1375 = v176;
                                              lpModuleNamec = v174;
                                              v1510 = v175;
                                              v1643 = v183;
                                            }
                                            else
                                            {
                                              *((_DWORD *)v354 + 8) = 0;
                                              v354[5] = 0LL;
                                            }
                                            v335 = (unsigned __int16 *)v354;
                                            v1393 = (unsigned __int16 *)v354;
                                          }
                                          v90 = 0LL;
                                          if ( v233 < 0 )
                                          {
                                            v1532 = 0LL;
                                            v234 = 0LL;
                                            if ( v335 )
                                            {
                                              v1533 = (void *)*((_QWORD *)v335 + 1);
                                              if ( v1533 )
                                              {
                                                v334 = GetProcessHeap();
                                                HeapFree(v334, 0, v1533);
                                                v335 = v1393;
                                                *((_QWORD *)v1393 + 1) = 0LL;
                                              }
                                              v1534 = (void *)*((_QWORD *)v335 + 3);
                                              if ( v1534 )
                                              {
                                                v336 = GetProcessHeap();
                                                HeapFree(v336, 0, v1534);
                                                v335 = v1393;
                                                *((_QWORD *)v1393 + 3) = 0LL;
                                              }
                                              v1535 = (void *)*((_QWORD *)v335 + 5);
                                              if ( v1535 )
                                              {
                                                v337 = GetProcessHeap();
                                                HeapFree(v337, 0, v1535);
                                                *((_QWORD *)v1393 + 5) = 0LL;
                                              }
                                              v338 = GetProcessHeap();
                                              HeapFree(v338, 0, v1393);
                                              v90 = 0LL;
                                              v234 = 0LL;
                                              v1532 = 0LL;
                                            }
                                          }
                                          else
                                          {
                                            v234 = v335;
                                            v1532 = v335;
                                          }
LABEL_229:
                                          v192 = v233 | 0x10000000;
                                          if ( v192 < 0 )
                                            goto LABEL_198;
                                          if ( !v234
                                            || (v1394 = (unsigned __int16 *)*((_QWORD *)v234 + 1)) == 0LL
                                            || *(_DWORD *)v234 == (_DWORD)v90 )
                                          {
                                            v192 = -805306355;
                                            goto LABEL_198;
                                          }
                                          v235 = *(unsigned int *)v234 - 8LL;
                                          dwBytes = v235;
                                          v236 = (unsigned int *)MemoryAlloc(v235);
                                          v90 = 0LL;
                                          v1424 = v236;
                                          v237 = v236;
                                          if ( !v236 )
                                          {
LABEL_1625:
                                            v192 = -805306367;
                                            v1424 = 0LL;
                                            goto LABEL_198;
                                          }
                                          v238 = (unsigned __int8 *)v1394;
                                          v1845 = 0x7F1137FAB69605ELL;
                                          v239 = 0;
                                          v1614 = (SIZE_T)v1394;
                                          Size = v237;
                                          v240 = v235 & 7;
                                          if ( (v235 & 7) != 0 )
                                          {
                                            v1666 = 0;
                                            v241 = 0;
                                            lpMemc = 0;
                                            v242 = 0;
                                            v243 = v1532;
                                            do
                                            {
                                              v244 = *v238++;
                                              if ( v241 >= 4 )
                                                v1666 |= v244 << v1667;
                                              else
                                                v242 |= v244 << (v1667 - 32);
                                              v1667 -= 8;
                                              v241 = lpMemc + 1;
                                              lpMemc = v241;
                                            }
                                            while ( (int)v241 < (int)v240 );
                                            v1295 = v242;
                                            v1296 = v242 ^ 0x92F65A5;
                                            v1297 = v1296;
                                            v1457 = 0;
                                            v1298 = v1666 ^ 0x699A899C;
                                            v237 = Size;
                                            do
                                            {
                                              v1614 = (SIZE_T)v238;
                                              v1492 = (SIZE_T)(v237 + 1);
                                              if ( v1457 >= 4 )
                                              {
                                                v1298 = (v1298 << 8) | HIBYTE(v1298);
                                                v1299 = v1298;
                                              }
                                              else
                                              {
                                                v1297 = (v1297 << 8) | HIBYTE(v1297);
                                                v1299 = v1297;
                                              }
                                              *Size = v1299;
                                              ++v237;
                                              ++v1457;
                                              v238 = (unsigned __int8 *)v1614;
                                              Size = (_BYTE *)v1492;
                                            }
                                            while ( v1457 < (int)v240 );
                                            v239 = 0;
                                            v88 = v1668;
                                            lpMemp = v1295;
                                            v1458 = v1296;
                                            v1643 = v183;
                                            v1375 = v176;
                                            v1510 = v175;
                                            lpModuleNamec = v174;
                                            Sizei = v1492;
                                            if ( v240 > 4 )
                                            {
                                              v1493 = (v1666 ^ 0x699A899Cu) >> (8 * (8 - v240)) << (8 * (8 - v240));
                                              goto LABEL_1615;
                                            }
                                            v1493 = 0;
                                            if ( v240 < 4 )
                                            {
                                              v1458 = v1296 >> (8 * (4 - v240)) << (8 * (4 - v240));
LABEL_1615:
                                              v237 = (_BYTE *)Sizei;
                                            }
                                          }
                                          else
                                          {
                                            lpMemp = 0;
                                            v1493 = 0;
                                            v1458 = 0;
                                            v243 = v1532;
                                          }
                                          if ( v235 >> 3 )
                                          {
                                            v1300 = HIDWORD(v1845);
                                            v1301 = v237 + 7;
                                            v1302 = v235 >> 3;
                                            v1303 = WORD1(v1845);
                                            v1304 = (unsigned __int8 *)(v1614 + 2);
                                            v1305 = v1493;
                                            v1306 = lpMemp;
                                            v1307 = WORD2(v1845);
                                            v1308 = v1458;
                                            Sizej = WORD2(v1845);
                                            do
                                            {
                                              v1309 = *(v1304 - 1) | (*(v1304 - 2) << 8);
                                              v1310 = v1304[2] << 8;
                                              v1311 = *v1304;
                                              v1304 += 8;
                                              v1312 = *(v1304 - 7) | ((v1311 | (v1309 << 8)) << 8);
                                              v1313 = v1312 ^ v1308;
                                              v1314 = *(v1304 - 3) | ((*(v1304 - 4) | ((*(v1304 - 5) | v1310) << 8)) << 8);
                                              v1315 = v1313 ^ v1300 ^ 0xAB69605E ^ v1314 ^ v1305;
                                              v1316 = (__ROR4__(v1315, 22) + v1307 * __ROR4__(v1315 + 1419157410, 27)) ^ v1313;
                                              v1317 = (v1303 * __ROR4__(v1316 + v1300, 9) - __ROR4__(v1316, 30)) ^ v1315;
                                              v1318 = (24670 * (v1317 - v1307) - (v1317 >> 13)) ^ v1316;
                                              v1319 = (HIWORD(v1845) * __ROR4__(v1318 ^ v1303, 26) - __ROR4__(v1318, 30)) ^ v1317;
                                              v1320 = (v1300 - (v1319 ^ 0xAB69605E)) ^ v1318;
                                              v1321 = (v1303 * (v1320 ^ v1307)) ^ __ROR4__(v1320, 6) ^ v1319;
                                              v1322 = (__ROR4__(v1321, 30) + 24670 * __ROR4__(v1321 + v1300, 15)) ^ v1320;
                                              v1323 = (HIWORD(v1845) * __ROR4__(v1322 + 1419157410, 14)
                                                     - __ROR4__(v1322, 24)) ^ v1321;
                                              v1324 = __ROR4__(v1323, 10) ^ (v1307 * __ROR4__(v1323 ^ 0xAB69605E, 12)) ^ v1322;
                                              v1325 = (v1324 >> 10) ^ (v1303 * (v1324 ^ HIWORD(v1845))) ^ v1323;
                                              v1326 = (HIWORD(v1845) * (__ROR4__(~v1325, 5) + 24670)) ^ v1324;
                                              v1327 = (v1326 - HIWORD(v1845)) ^ 0xAB69605E ^ v1325;
                                              v1328 = ((v1327 >> 2) + v1307 * __ROR4__(v1327 ^ HIWORD(v1845), 30)) ^ v1326;
                                              v1329 = (__ROR4__(v1328, 25) + v1303 * __ROR4__(v1328 - v1300, 6)) ^ v1327;
                                              v1330 = (24670 * (v1329 ^ v1307) + __ROR4__(v1329, 9)) ^ v1328;
                                              v1331 = (__ROR4__(v1330, 25) + HIWORD(v1845) * __ROR4__(v1330 ^ v1303, 27)) ^ v1329;
                                              v1332 = v1300 ^ v1330 ^ v1331 ^ 0xAB69605E;
                                              v1333 = (v1307 * (__ROR4__(v1332, 3) - WORD1(v1845))) ^ v1331;
                                              v1334 = (24670 * __ROR4__(v1333 - v1300, 1) - __ROR4__(v1333, 6)) ^ v1332;
                                              v1335 = (__ROR4__(v1334, 18)
                                                     + HIWORD(v1845) * __ROR4__(v1334 - 1419157410, 29)) ^ v1333;
                                              v1336 = (v1307 * __ROR4__(v1335 - 1419157410, 17) - __ROR4__(v1335, 14)) ^ v1334;
                                              v1337 = (v1336 >> 3) ^ (WORD1(v1845) * (v1336 ^ 0x605E)) ^ v1335;
                                              v1305 = v1666 ^ v1337;
                                              v1666 = v1314;
                                              v1308 = v1306 ^ v1336 ^ __ROR4__(v1337, 30) ^ (24670
                                                                                           * __ROR4__(v1300 ^ v1337, 28));
                                              *(v1301 - 4) = v1308;
                                              *v1301 = v1305;
                                              v1301 += 8;
                                              v1306 = v1312;
                                              *(v1301 - 13) = BYTE1(v1308);
                                              *(v1301 - 9) = BYTE1(v1305);
                                              v1303 = WORD1(v1845);
                                              *(v1301 - 14) = (unsigned __int16)(v1308 >> 8) >> 8;
                                              *(v1301 - 10) = (unsigned __int16)(v1305 >> 8) >> 8;
                                              *(v1301 - 15) = __ROR4__(
                                                                (((v1308 >> 8) | (v1308 << 24)) >> 8) | (((v1308 >> 8) | (v1308 << 24)) << 24),
                                                                8);
                                              v1307 = Sizej;
                                              *(v1301 - 11) = __ROR4__(
                                                                (((v1305 >> 8) | (v1305 << 24)) >> 8) | (((v1305 >> 8) | (v1305 << 24)) << 24),
                                                                8);
                                              --v1302;
                                            }
                                            while ( v1302 );
                                            v239 = 0;
                                            v88 = v1668;
                                            v174 = (WCHAR *)lpModuleNamec;
                                            v175 = v1510;
                                            v176 = v1375;
                                            v183 = v1643;
                                            v243 = v1532;
                                            v235 = dwBytes;
                                          }
                                          for ( i4 = 0LL; i4 < v235; ++i4 )
                                            v239 ^= *((_BYTE *)v1424 + i4);
                                          v316 = v1549;
                                          v1532 = v243;
                                          if ( v239 != *(_QWORD *)((char *)v1394 + v235) )
                                          {
                                            MemoryFree(v1424);
                                            v90 = 0LL;
                                            goto LABEL_1625;
                                          }
                                          v1532 = v243;
                                          if ( (unsigned int)v235 >= 4 )
                                          {
                                            lpMeme = *v1424;
                                            v331 = v1424 + 1;
                                            v1532 = v243;
                                            if ( v1424 + 1 < v1424 )
                                              goto LABEL_183;
                                            if ( (unsigned int)(v235 - 4) < 4 )
                                            {
                                              v200 = -1073741762;
                                              v1532 = v243;
                                              goto LABEL_184;
                                            }
                                            v332 = *v331;
                                            v333 = (char *)(v1424 + 2);
                                            v1444 = *v331;
                                            if ( v1424 + 2 < v1424 + 1 )
                                              goto LABEL_181;
                                            dwBytesb = (SIZE_T)v243;
                                            if ( (int)v235 - 8 >= (unsigned int)v332 )
                                            {
                                              if ( (unsigned int)v332 < 0xFFFFFFF8 )
                                              {
                                                if ( (char *)v1424 + (unsigned int)v235 < &v333[v332]
                                                  || (unsigned __int64)(unsigned int)v235 - 8 - v332 >= 8 )
                                                {
                                                  v200 = -1073741762;
                                                  v1532 = v243;
LABEL_184:
                                                  v90 = 0LL;
                                                }
                                                else
                                                {
                                                  v1532 = v243;
                                                  v313 = 0LL;
                                                  v1626 = 0LL;
                                                  v1776 = 0LL;
                                                  v200 = 0;
                                                  v1479 = 0;
                                                  v90 = 0LL;
                                                  if ( v1424 == (unsigned int *)-8LL )
                                                    goto LABEL_347;
                                                  v1615 = (SIZE_T)(v1424 + 2);
                                                  v200 = RtlULongLongAdd(v1424 + 2, v332, &v1776);
                                                  v314 = v1424;
                                                  v1532 = (_QWORD *)dwBytesb;
                                                  v90 = 0LL;
                                                  if ( v200 >= 0 )
                                                  {
                                                    v315 = (_QWORD *)dwBytesb;
                                                    v316 = v1549;
                                                    v317 = (char *)(v1424 + 2);
                                                    v1532 = (_QWORD *)dwBytesb;
                                                    v318 = v1424 + 2;
                                                    v1513 = (char *)(v1424 + 2);
                                                    while ( 1 )
                                                    {
                                                      v1654 = v314;
                                                      if ( (unsigned __int64)v318 >= v1776 )
                                                        break;
                                                      if ( v318 + 1 < v318 )
                                                        goto LABEL_183;
                                                      v1424 = v314;
                                                      v1549 = v316;
                                                      v1532 = v315;
                                                      v1513 = v317;
                                                      if ( (unsigned __int64)(v318 + 1) > v1776 )
                                                        goto LABEL_1628;
                                                      v319 = *v318;
                                                      v1731 = 0;
                                                      v200 = RtlUIntAdd(4LL, v319, &v1731);
                                                      if ( v200 < 0 )
                                                      {
                                                        v1424 = v1654;
                                                        v90 = 0LL;
                                                        v1532 = v315;
                                                        v1549 = v316;
                                                        goto LABEL_353;
                                                      }
                                                      v318 = (unsigned int *)(v1615 + v1731);
                                                      if ( (unsigned __int64)v318 < v1615 )
                                                      {
                                                        v1424 = v1654;
                                                        v1532 = v315;
                                                        goto LABEL_182;
                                                      }
                                                      v200 = 0;
                                                      v1615 += v1731;
                                                      if ( (unsigned __int64)v318 > v1776 )
                                                      {
LABEL_1628:
                                                        v200 = -1073741811;
                                                        v1424 = v1654;
                                                        v1532 = v315;
                                                        v1549 = v316;
                                                        goto LABEL_184;
                                                      }
                                                      ++v1479;
                                                      v314 = v1654;
                                                    }
                                                    if ( v318 != (unsigned int *)v1776 )
                                                    {
                                                      v200 = -1073741811;
                                                      goto LABEL_184;
                                                    }
                                                    v333 = v1513;
                                                    v90 = 0LL;
                                                    v313 = 0LL;
LABEL_347:
                                                    v320 = v1444;
                                                    if ( v1444 )
                                                    {
                                                      v321 = GetProcessHeap();
                                                      v322 = HeapAlloc(v321, 8u, v1444);
                                                      v90 = 0LL;
                                                      v1626 = v322;
                                                      v313 = v322;
                                                      if ( !v322 )
                                                        goto LABEL_162;
                                                      v320 = v1444;
                                                      v200 = 0;
                                                    }
                                                    if ( v333 )
                                                    {
                                                      memcpy_0(v1626, v333, v320);
                                                      v313 = v1626;
                                                      v90 = 0LL;
                                                    }
                                                    v1793[0] = (LPVOID)__PAIR64__(v1444, v1479);
                                                    v1793[1] = v313;
LABEL_353:
                                                    if ( v200 >= 0 && lpMeme != LODWORD(v1793[0]) )
                                                      v200 = -1073741762;
                                                  }
                                                }
LABEL_356:
                                                v192 = v200 | 0x10000000;
                                                goto LABEL_198;
                                              }
LABEL_181:
                                              v1532 = v243;
LABEL_182:
                                              v1549 = v316;
LABEL_183:
                                              v200 = -1073741675;
                                              goto LABEL_184;
                                            }
                                          }
                                          v200 = -1073741762;
                                          goto LABEL_184;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            v90 = 0LL;
LABEL_228:
                            v234 = (unsigned __int16 *)v1532;
                            goto LABEL_229;
                          }
                        }
                        v192 = -805306306;
                        goto LABEL_198;
                      }
                    }
                    v279 = GetProcessHeap();
                    HeapFree(v279, 0, lpModuleNamee);
                    v90 = 0LL;
                  }
                  else
                  {
                    v270 = -1073741801;
                  }
                  v271 = (unsigned int)v176;
                  goto LABEL_294;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_219:
  v1785[0] = 0LL;
  v227 = (void *)v1785[1];
  if ( v1785[1] )
  {
    v228 = GetProcessHeap();
    HeapFree(v228, 0, v227);
    v90 = 0LL;
    v1785[1] = 0LL;
  }
  v1793[0] = 0LL;
  v229 = v1793[1];
  if ( v1793[1] )
  {
    v230 = GetProcessHeap();
    HeapFree(v230, 0, v229);
    v90 = 0LL;
    v1793[1] = 0LL;
  }
  if ( v175 )
  {
    v1357 = GetProcessHeap();
    HeapFree(v1357, 0, v175);
    v90 = 0LL;
  }
  if ( v174 )
  {
    v231 = GetProcessHeap();
    HeapFree(v231, 0, v174);
    v90 = 0LL;
  }
LABEL_89:
  v89 = v1673;
  v86 = 4LL;
  v2 = (int *)v1736;
  v87 = v90;
  v3 = 1;
LABEL_90:
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v97 = dword_1808CCC34;
  if ( dword_1808CCC34 > 0 )
  {
    --dword_1808CCC34;
    if ( v97 == 1 )
    {
      v100 = (HMODULE *)&unk_1808C93A0;
      do
      {
        if ( *v100 )
          FreeLibrary(*v100);
        v100 += 3;
        --v86;
      }
      while ( v86 );
      memset_0(&unk_1808C93A0, 0, 0x60uLL);
      v101 = 2LL;
      v102 = off_1808C0340;
      v103 = off_1807174F0;
      do
      {
        v104 = *((_OWORD *)v103 + 1);
        *(_OWORD *)v102 = *(_OWORD *)v103;
        v105 = *((_OWORD *)v103 + 2);
        *((_OWORD *)v102 + 1) = v104;
        v106 = *((_OWORD *)v103 + 3);
        *((_OWORD *)v102 + 2) = v105;
        v107 = *((_OWORD *)v103 + 4);
        *((_OWORD *)v102 + 3) = v106;
        v108 = *((_OWORD *)v103 + 5);
        *((_OWORD *)v102 + 4) = v107;
        v109 = *((_OWORD *)v103 + 6);
        *((_OWORD *)v102 + 5) = v108;
        v110 = *((_OWORD *)v103 + 7);
        v103 += 16;
        *((_OWORD *)v102 + 6) = v109;
        v102 += 16;
        *((_OWORD *)v102 - 1) = v110;
        --v101;
      }
      while ( v101 );
      LODWORD(v90) = 0;
      v111 = *((_OWORD *)v103 + 1);
      *(_OWORD *)v102 = *(_OWORD *)v103;
      v112 = *((_OWORD *)v103 + 2);
      *((_OWORD *)v102 + 1) = v111;
      v113 = *((_OWORD *)v103 + 3);
      *((_OWORD *)v102 + 2) = v112;
      v114 = *((_OWORD *)v103 + 4);
      *((_OWORD *)v102 + 3) = v113;
      v115 = *((_OWORD *)v103 + 5);
      *((_OWORD *)v102 + 4) = v114;
      v116 = *((_OWORD *)v103 + 6);
      *((_OWORD *)v102 + 5) = v115;
      *((_OWORD *)v102 + 6) = v116;
    }
  }
  _InterlockedExchange(&dword_1808CCC40, (__int32)v90);
  if ( v87 )
    LocalFree(v87);
  if ( v88 >= 0 )
  {
    if ( v89 != 4 )
      goto LABEL_96;
    v3 = *v2;
    goto LABEL_110;
  }
  switch ( v88 )
  {
    case -805306316:
      v1672 = -1073418222;
      goto LABEL_110;
    case -805306139:
    case -1073425151:
      v1672 = -1073418201;
      goto LABEL_110;
    case -805306306:
      v1672 = -1073418200;
      goto LABEL_110;
  }
  v1672 = v88;
  if ( v88 == -2147024774 )
LABEL_96:
    v98 = -1073418210;
  else
LABEL_110:
    v98 = v1672;
  if ( v2 )
    LocalFree(v2);
  if ( v98 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v98);
    return (unsigned int)v98;
  }
  else
  {
    *(_BYTE *)v1735 = v3 != 0;
    return 0LL;
  }
}
