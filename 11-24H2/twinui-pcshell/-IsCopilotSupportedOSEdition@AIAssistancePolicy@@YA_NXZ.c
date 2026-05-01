/*
 * XREFs of ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180626A60
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x1806356A0 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D4C64 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800FF470 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800FF498 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     RtlULongLongAdd @ 0x18018E718 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18018F6A0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A4CC8 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801DFCD4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802C96A4 (--4-$SP@EV-$SP_HLOCAL@E@@@@QEAAAEAV0@V-$CTypeWrapper@PEAE@@@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CBACC (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18061D540 (--$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0D.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1806830FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall AIAssistancePolicy::IsCopilotSupportedOSEdition(AIAssistancePolicy *this)
{
  int v1; // r15d
  int v2; // eax
  _BYTE *v3; // rbx
  _BYTE *v4; // r15
  __int64 v5; // r14
  int v6; // r8d
  int v7; // r13d
  unsigned __int8 *v8; // r12
  unsigned int v9; // r11d
  unsigned int v10; // esi
  int v11; // r10d
  int v12; // r9d
  int v13; // eax
  int v14; // r10d
  int v15; // esi
  int v16; // r9d
  unsigned int v17; // r11d
  int v18; // esi
  unsigned int v19; // r11d
  int v20; // esi
  int v21; // r11d
  unsigned int v22; // esi
  int v23; // r11d
  int v24; // esi
  int v25; // r11d
  unsigned int v26; // esi
  int v27; // edx
  int v28; // esi
  unsigned int v29; // r11d
  int v30; // esi
  int v31; // r11d
  int v32; // esi
  int v33; // r11d
  unsigned int v34; // edi
  int v35; // r11d
  int v36; // edi
  int v37; // r11d
  unsigned int v38; // edi
  int v39; // r11d
  int v40; // esi
  int v41; // eax
  unsigned __int64 v42; // rax
  char v43; // cl
  int v44; // r14d
  unsigned int v45; // r13d
  __int64 v46; // rbx
  HMODULE *v47; // rdi
  __int64 (__fastcall **v48)(); // rax
  __int64 v49; // rdx
  __int64 (__fastcall **v50)(); // rcx
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  void *v64; // rsi
  __int64 v65; // rax
  const WCHAR *v66; // rdx
  _BYTE *v67; // rbx
  HMODULE *v68; // rdi
  __int64 v69; // rcx
  char *v70; // rcx
  unsigned int v71; // r15d
  unsigned int i; // edi
  __int64 v73; // rax
  const CHAR *v74; // rdx
  __int64 (__fastcall *ProcAddress)(); // rdx
  int v76; // eax
  HANDLE ProcessHeap; // rax
  int v78; // esi
  signed int LastError; // edi
  __int64 v80; // r14
  wchar_t *v81; // rax
  bool v82; // sf
  wchar_t *v83; // rbx
  __int64 j; // r9
  wchar_t *v85; // r8
  signed int v86; // eax
  __int64 (__fastcall *v87)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v89; // r14
  wchar_t *v90; // rax
  wchar_t *v91; // rbx
  __int64 k; // r9
  wchar_t *v93; // r8
  signed int v94; // eax
  HANDLE CurrentProcess; // rax
  bool v96; // sf
  int v97; // r13d
  HLOCAL v98; // rax
  int v99; // r12d
  int v100; // esi
  WCHAR *v101; // rbx
  HANDLE v102; // rax
  _OWORD *v103; // rax
  void *v104; // rsi
  HANDLE v105; // rax
  int v106; // edi
  int v107; // eax
  int v108; // eax
  unsigned int v109; // r11d
  int v110; // eax
  int v111; // r9d
  unsigned int v112; // r11d
  int v113; // r10d
  int v114; // eax
  unsigned int v115; // r11d
  int v116; // r10d
  int v117; // eax
  size_t v118; // rdx
  int v119; // r10d
  int v120; // r11d
  int v121; // eax
  int v122; // eax
  unsigned int v123; // r11d
  int v124; // r10d
  int v125; // eax
  int v126; // r10d
  unsigned int v127; // edi
  HANDLE v128; // rax
  void *v129; // rax
  int v130; // r11d
  int v131; // eax
  _DWORD *v132; // r10
  _DWORD *v133; // rax
  int v134; // eax
  int v135; // r10d
  int v136; // r11d
  int *v137; // r10
  int v138; // edx
  unsigned __int64 v139; // r10
  unsigned int v140; // r11d
  size_t v141; // r9
  _DWORD *v142; // r10
  int v143; // eax
  int v144; // r10d
  int v145; // r11d
  int *v146; // r9
  int v147; // edx
  unsigned __int64 v148; // r9
  unsigned int v149; // r11d
  _DWORD *v150; // r9
  size_t v151; // rdx
  int v152; // r10d
  int *v153; // rdi
  int v154; // edx
  unsigned int v155; // r11d
  SIZE_T *v156; // rax
  unsigned int v157; // r11d
  int v158; // eax
  int v159; // r10d
  int *v160; // rdi
  int v161; // edx
  int v162; // r10d
  __int64 v163; // r9
  void *v164; // rcx
  int v165; // eax
  int v166; // r10d
  int v167; // r11d
  int *v168; // rdi
  int v169; // edx
  unsigned int v170; // r11d
  int *v171; // rax
  int v172; // r10d
  unsigned int v173; // r11d
  int *v174; // rdi
  int v175; // edx
  unsigned int v176; // r11d
  unsigned int *v177; // rax
  unsigned int v178; // ecx
  unsigned int v179; // edi
  unsigned int v180; // r11d
  unsigned int v181; // r11d
  unsigned int v182; // r11d
  unsigned int v183; // r11d
  unsigned int v184; // r9d
  int v185; // r12d
  unsigned int v186; // ecx
  unsigned int v187; // edi
  HANDLE v188; // rax
  char *v189; // rax
  char *v190; // rdi
  unsigned int v191; // r9d
  void *v192; // rcx
  HANDLE v193; // rax
  _BYTE *v194; // r12
  unsigned __int64 v195; // rdi
  char *v196; // r8
  unsigned __int64 v197; // rax
  unsigned __int8 v198; // cl
  unsigned int v199; // r11d
  unsigned __int8 *v200; // rdx
  unsigned int v201; // r10d
  unsigned int v202; // edi
  int v203; // r8d
  char v204; // r9
  int v205; // eax
  int v206; // ecx
  int v207; // r15d
  unsigned int v208; // r11d
  unsigned int v209; // r9d
  int v210; // r14d
  int v211; // eax
  unsigned int v212; // r8d
  char v213; // cl
  int v214; // edi
  unsigned __int8 *v215; // rcx
  int v216; // r15d
  int v217; // r13d
  unsigned __int64 v218; // r12
  int v219; // ebx
  int v220; // r9d
  int v221; // r8d
  int v222; // r11d
  int v223; // r10d
  int v224; // r11d
  int v225; // r10d
  int v226; // r11d
  unsigned int v227; // r10d
  int v228; // r11d
  int v229; // r10d
  int v230; // r11d
  int v231; // r10d
  int v232; // r11d
  int v233; // r10d
  unsigned int v234; // r11d
  unsigned int v235; // r10d
  int v236; // r11d
  int v237; // r10d
  int v238; // r11d
  int v239; // r10d
  int v240; // r11d
  int v241; // r10d
  int v242; // r11d
  int v243; // r10d
  unsigned int v244; // r11d
  int v245; // r10d
  unsigned int v246; // r11d
  _BYTE *v247; // r15
  HANDLE v248; // rax
  unsigned int *v249; // rdi
  HANDLE v250; // rax
  void *v251; // rax
  HANDLE v252; // rax
  LPVOID v253; // rax
  _OWORD *v254; // rcx
  HANDLE v255; // rax
  _QWORD *v256; // rax
  int v257; // r12d
  HANDLE v258; // rax
  HANDLE v259; // rax
  HANDLE v260; // rax
  HANDLE v261; // rax
  HANDLE v262; // rax
  int v263; // edx
  int v264; // ecx
  int v265; // r12d
  unsigned int v266; // edi
  HANDLE v267; // rax
  WCHAR *v268; // rax
  LPVOID v269; // r10
  int v270; // eax
  WCHAR *v271; // rcx
  void *v272; // rcx
  int v273; // eax
  WCHAR *v274; // r9
  void *v275; // rcx
  int v276; // eax
  WCHAR *v277; // r9
  HANDLE v278; // rax
  int v279; // eax
  void *v280; // r9
  _BYTE *v281; // r10
  unsigned int v282; // ecx
  SIZE_T v283; // rax
  HANDLE v284; // rax
  HANDLE v285; // rax
  HANDLE v286; // rax
  HANDLE v287; // rax
  HANDLE v288; // rax
  void *v289; // rdi
  HANDLE v290; // rax
  HANDLE v291; // rax
  _QWORD *v292; // rdi
  HANDLE v293; // rax
  HANDLE v294; // rax
  HANDLE v295; // rax
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  void *v299; // r13
  HANDLE v300; // rax
  void *v301; // r13
  HANDLE v302; // rax
  HANDLE v303; // rax
  HANDLE v304; // rax
  DWORD ModuleFileNameW; // eax
  unsigned int v306; // r13d
  SIZE_T v307; // rdi
  void *v308; // r9
  _BYTE *v309; // r10
  _BYTE *v310; // r12
  unsigned int *v311; // rcx
  unsigned int v312; // edi
  int v313; // r10d
  int v314; // eax
  void *v315; // r9
  _DWORD *v316; // rcx
  unsigned int v317; // edi
  unsigned int v318; // r10d
  int v319; // eax
  int v320; // edi
  void *v321; // r9
  int v322; // ecx
  void *v323; // r9
  unsigned int v324; // r11d
  unsigned int v325; // edi
  HANDLE v326; // rax
  _DWORD *v327; // rax
  _DWORD *v328; // rdi
  signed int v329; // eax
  FARPROC v330; // rax
  int v331; // eax
  unsigned int v332; // r11d
  int v333; // r12d
  unsigned int *v334; // rcx
  unsigned int v335; // r9d
  int v336; // r11d
  int v337; // r9d
  int v338; // r11d
  unsigned int v339; // edi
  int v340; // r11d
  int v341; // r11d
  unsigned int v342; // r10d
  int v343; // r11d
  int v344; // r9d
  int v345; // r10d
  int v346; // r11d
  HANDLE v347; // rax
  SIZE_T v348; // rcx
  HANDLE v349; // rax
  void *v350; // rcx
  const void **v351; // rdi
  HANDLE v352; // rax
  void *v353; // rcx
  HANDLE v354; // rax
  void *v355; // rcx
  SIZE_T v356; // rax
  HANDLE v357; // rax
  HANDLE v358; // rax
  HANDLE v359; // rax
  HANDLE v360; // rax
  unsigned int *v361; // rax
  unsigned int *v362; // r10
  HANDLE v363; // rax
  HANDLE v364; // rax
  HANDLE v365; // rax
  HANDLE v366; // rax
  SIZE_T v367; // r12
  _DWORD *v368; // rax
  _DWORD *v369; // r9
  unsigned __int8 *v370; // r8
  unsigned __int8 v371; // dl
  void *v372; // r11
  unsigned int v373; // r10d
  _BYTE *v374; // rax
  char v375; // cl
  int v376; // edx
  int v377; // r12d
  int v378; // ecx
  int v379; // r12d
  unsigned int v380; // r12d
  SIZE_T v381; // r14
  unsigned int v382; // r8d
  int v383; // r13d
  unsigned int v384; // r9d
  int v385; // ecx
  WCHAR *v386; // rcx
  int v387; // esi
  unsigned int v388; // r14d
  int v389; // r13d
  unsigned int v390; // ebx
  int v391; // edx
  char *v392; // r11
  int v393; // r8d
  unsigned __int8 *v394; // rcx
  int v395; // r10d
  int v396; // r12d
  int v397; // r9d
  int v398; // eax
  int v399; // r9d
  int v400; // edi
  int v401; // r12d
  unsigned int v402; // edi
  int v403; // r12d
  int v404; // edi
  unsigned int v405; // r12d
  int v406; // edi
  int v407; // r12d
  int v408; // edi
  unsigned int v409; // r12d
  int v410; // edi
  int v411; // r12d
  unsigned int v412; // r14d
  int v413; // r12d
  int v414; // r14d
  int v415; // r12d
  int v416; // r14d
  int v417; // r12d
  int v418; // r14d
  int v419; // r12d
  int v420; // r14d
  unsigned int v421; // r12d
  int v422; // r14d
  int v423; // ecx
  int v424; // eax
  WCHAR *v425; // rdx
  size_t m; // rax
  int v427; // r12d
  void *v428; // r9
  void *v429; // r10
  int v430; // eax
  void *v431; // r9
  void *v432; // r10
  SIZE_T v433; // rdx
  void *v434; // r8
  void *v435; // r9
  void *v436; // r10
  int v437; // eax
  WCHAR *v438; // r11
  char *v439; // r9
  void *v440; // r10
  WCHAR *v441; // r11
  void *v442; // r9
  void *v443; // r10
  unsigned __int64 v444; // rdi
  unsigned __int64 v445; // r11
  int *v446; // r11
  int v447; // edx
  unsigned __int64 v448; // r11
  void *v449; // r9
  void *v450; // r10
  unsigned __int64 v451; // rcx
  unsigned int v452; // ecx
  HANDLE v453; // rax
  void *v454; // rdi
  int v455; // edi
  _DWORD *v456; // r10
  __int64 v457; // r11
  _DWORD *v458; // r12
  _DWORD *v459; // rcx
  int v460; // edi
  unsigned int v461; // r9d
  int v462; // edi
  _DWORD *v463; // r10
  __int64 v464; // r11
  _DWORD *v465; // rax
  _DWORD *v466; // rcx
  int v467; // edi
  unsigned int v468; // r9d
  int v469; // edi
  _DWORD *v470; // r10
  __int64 v471; // r11
  _DWORD *v472; // rax
  _DWORD *v473; // rcx
  int v474; // edi
  unsigned int v475; // r9d
  int v476; // edi
  _DWORD *v477; // r10
  _DWORD *v478; // r11
  _DWORD *v479; // rcx
  int v480; // edi
  unsigned int v481; // r9d
  int v482; // edi
  _DWORD *v483; // r10
  _DWORD *v484; // rax
  unsigned int *v485; // rcx
  int v486; // edi
  const void *v487; // r11
  unsigned int *v488; // rdi
  __int64 v489; // rax
  unsigned int v490; // esi
  int v491; // eax
  char *v492; // rax
  _BYTE *v493; // r15
  int v494; // ebx
  unsigned __int8 *v495; // r14
  int v496; // ecx
  unsigned int v497; // r11d
  __int64 v498; // rsi
  int v499; // r10d
  int v500; // r9d
  int v501; // eax
  int v502; // r10d
  int v503; // r11d
  int v504; // r9d
  unsigned int v505; // r8d
  int v506; // r11d
  unsigned int v507; // r8d
  int v508; // r11d
  int v509; // r8d
  unsigned int v510; // r11d
  int v511; // r8d
  int v512; // r11d
  int v513; // r8d
  unsigned int v514; // r11d
  int v515; // r8d
  int v516; // r11d
  unsigned int v517; // r13d
  int v518; // r11d
  int v519; // r13d
  int v520; // r11d
  int v521; // r13d
  unsigned int v522; // edi
  int v523; // r13d
  int v524; // edi
  int v525; // r13d
  unsigned int v526; // edi
  int v527; // r13d
  int v528; // r11d
  int v529; // eax
  unsigned __int64 v530; // rax
  WCHAR *v531; // rbx
  char v532; // cl
  __int64 v533; // rbx
  HMODULE *v534; // rdi
  __int64 v535; // rdx
  __int64 (__fastcall **v536)(); // rax
  __int64 (__fastcall **v537)(); // rcx
  __int128 v538; // xmm1
  __int128 v539; // xmm0
  __int128 v540; // xmm1
  __int128 v541; // xmm0
  __int128 v542; // xmm1
  __int128 v543; // xmm0
  __int128 v544; // xmm1
  __int128 v545; // xmm1
  __int128 v546; // xmm0
  __int128 v547; // xmm1
  __int128 v548; // xmm0
  __int128 v549; // xmm1
  __int128 v550; // xmm0
  const WCHAR *v551; // rdx
  __int64 v552; // rax
  WCHAR *v553; // rbx
  HMODULE *v554; // r13
  int v555; // edi
  __int64 v556; // rcx
  char *v557; // rcx
  unsigned int v558; // eax
  unsigned int v559; // r13d
  __int64 v560; // rcx
  const CHAR *v561; // rdx
  __int64 v562; // rax
  __int64 (__fastcall *v563)(); // rax
  HANDLE v564; // rax
  signed int v565; // r13d
  int v566; // eax
  char *v567; // rax
  _BYTE *v568; // r14
  int v569; // ebx
  unsigned __int8 *v570; // r15
  int v571; // ecx
  unsigned int v572; // r11d
  __int64 v573; // rsi
  int v574; // r10d
  int v575; // r9d
  int v576; // eax
  int v577; // r10d
  int v578; // r11d
  int v579; // r9d
  unsigned int v580; // r8d
  int v581; // r11d
  unsigned int v582; // r8d
  int v583; // r11d
  int v584; // r8d
  unsigned int v585; // r11d
  int v586; // r8d
  int v587; // r11d
  int v588; // r8d
  unsigned int v589; // r11d
  int v590; // r8d
  int v591; // r11d
  unsigned int v592; // r13d
  int v593; // r11d
  int v594; // r13d
  int v595; // r11d
  int v596; // r13d
  unsigned int v597; // edi
  int v598; // r13d
  int v599; // edi
  int v600; // r13d
  unsigned int v601; // edi
  int v602; // r13d
  int v603; // r11d
  int v604; // eax
  unsigned __int64 v605; // rax
  WCHAR *v606; // rbx
  char v607; // cl
  __int64 v608; // rbx
  HMODULE *v609; // rdi
  __int64 v610; // rdx
  __int64 (__fastcall **v611)(); // rax
  __int64 (__fastcall **v612)(); // rcx
  __int128 v613; // xmm1
  __int128 v614; // xmm0
  __int128 v615; // xmm1
  __int128 v616; // xmm0
  __int128 v617; // xmm1
  __int128 v618; // xmm0
  __int128 v619; // xmm1
  __int128 v620; // xmm1
  __int128 v621; // xmm0
  __int128 v622; // xmm1
  __int128 v623; // xmm0
  __int128 v624; // xmm1
  __int128 v625; // xmm0
  const WCHAR *v626; // rdx
  __int64 v627; // rax
  WCHAR *v628; // rbx
  HMODULE *v629; // r13
  int v630; // edi
  __int64 v631; // rcx
  char *v632; // rcx
  int v633; // eax
  unsigned int v634; // r13d
  __int64 v635; // rcx
  const CHAR *v636; // rdx
  __int64 v637; // rax
  __int64 (__fastcall *v638)(); // rax
  HANDLE v639; // rax
  signed int v640; // eax
  char *v641; // rbx
  unsigned int v642; // edi
  bool v643; // sf
  LPVOID v644; // rax
  LPVOID v645; // rax
  _DWORD *v646; // rdi
  unsigned int v647; // r13d
  unsigned int v648; // r8d
  __int64 v649; // rdi
  unsigned int v650; // ecx
  int *v651; // rdx
  bool v652; // sf
  _DWORD *v653; // rax
  char *v654; // rbx
  _DWORD *v655; // r15
  unsigned int ii; // r14d
  __int64 v657; // rax
  __int64 v658; // rdi
  const wchar_t *v659; // rcx
  const wchar_t **v660; // rdx
  __int64 v661; // rax
  __int64 v662; // rcx
  __int64 v663; // rax
  char *v664; // rax
  _BYTE *v665; // r14
  int v666; // r11d
  unsigned __int8 *v667; // r15
  int v668; // eax
  unsigned int v669; // r13d
  unsigned int v670; // ebx
  __int64 v671; // rsi
  int v672; // r10d
  int v673; // r9d
  int v674; // ecx
  int v675; // r10d
  int v676; // ebx
  int v677; // r9d
  unsigned int v678; // r8d
  int v679; // ebx
  unsigned int v680; // r8d
  int v681; // ebx
  int v682; // r8d
  unsigned int v683; // ebx
  int v684; // r8d
  int v685; // ebx
  int v686; // r8d
  unsigned int v687; // ebx
  int v688; // edx
  int v689; // ebx
  unsigned int v690; // r13d
  int v691; // ebx
  int v692; // r13d
  int v693; // ebx
  int v694; // r13d
  unsigned int v695; // edi
  int v696; // r13d
  int v697; // edi
  int v698; // r13d
  unsigned int v699; // edi
  int v700; // r13d
  int v701; // ebx
  int v702; // ecx
  unsigned __int64 v703; // rcx
  _BYTE *v704; // r11
  char v705; // al
  int v706; // r9d
  _QWORD *v707; // rdx
  __int64 v708; // r8
  unsigned int jj; // ecx
  __int64 v710; // rax
  LPVOID v711; // rax
  _OWORD *v712; // rbx
  __int16 *v713; // rcx
  unsigned int v714; // r8d
  char *v715; // rdx
  __int16 v716; // r9
  __int16 *v717; // rcx
  __int64 v718; // rax
  unsigned __int16 *v719; // rax
  __int64 v720; // r9
  int v721; // eax
  LPVOID v722; // rax
  __int64 v723; // r9
  void **v724; // rax
  signed int v725; // eax
  signed int v726; // eax
  __int64 v727; // rcx
  _WORD *v728; // rdi
  __int64 v729; // rcx
  void **v730; // rax
  void **v731; // rax
  void **v732; // rax
  signed int v733; // eax
  int v734; // ebx
  unsigned int v735; // edi
  unsigned __int16 *v736; // rax
  bool v737; // sf
  int v738; // ebx
  int v739; // eax
  __int64 v740; // rbx
  HMODULE *v741; // rdi
  __int64 v742; // rdx
  __int64 (__fastcall **v743)(); // rax
  __int64 (__fastcall **v744)(); // rcx
  __int128 v745; // xmm1
  __int128 v746; // xmm0
  __int128 v747; // xmm1
  __int128 v748; // xmm0
  __int128 v749; // xmm1
  __int128 v750; // xmm0
  __int128 v751; // xmm1
  __int128 v752; // xmm1
  __int128 v753; // xmm0
  __int128 v754; // xmm1
  __int128 v755; // xmm0
  __int128 v756; // xmm1
  __int128 v757; // xmm0
  unsigned int v758; // edi
  int v759; // esi
  __int64 v760; // rax
  int v761; // eax
  __int64 v762; // rax
  bool v763; // sf
  bool v764; // zf
  char *v765; // rbx
  int v766; // eax
  __int64 v767; // rax
  signed int v768; // eax
  int v769; // ebx
  unsigned int v770; // edx
  int v771; // eax
  __int32 v772; // ebx
  void *v773; // rdi
  int v774; // edi
  void *v775; // rdi
  int v776; // edi
  int v777; // edi
  __int64 v778; // rdx
  __int64 v779; // rdi
  signed int v780; // eax
  int v781; // eax
  __int64 v782; // rax
  bool v783; // sf
  void *v784; // rdi
  __int64 v785; // rbx
  int v786; // edi
  int v787; // eax
  unsigned __int64 v788; // rdx
  __int32 v789; // edx
  int v790; // r13d
  int v791; // ebx
  int v792; // edi
  int v793; // edi
  CToastCenterExperienceManager *v794; // rax
  int v795; // edx
  int v796; // ecx
  CToastCenterExperienceManager *v797; // rax
  int v798; // eax
  void *v799; // rdi
  __int64 v800; // rax
  __int64 v801; // rax
  CToastCenterExperienceManager *v802; // rbx
  signed int v803; // edi
  bool v804; // sf
  SIZE_T v805; // rcx
  __int64 v806; // rax
  __int64 (__fastcall *v807)(); // rdi
  __int64 v808; // rax
  __int32 v809; // r10d
  __int32 v810; // r9d
  __int32 v811; // r8d
  __int32 v812; // edx
  int v813; // ecx
  int v814; // r11d
  __int64 v815; // rdi
  const WCHAR *v816; // rdx
  __int64 v817; // rcx
  int v818; // r8d
  unsigned __int16 *v819; // rax
  signed __int64 v820; // r10
  unsigned __int8 *v821; // r9
  int v822; // r8d
  int v823; // edi
  int v824; // edx
  int v825; // edi
  int v826; // edx
  int v827; // edi
  int v828; // ecx
  void *v829; // rdi
  __int64 v830; // rax
  CToastCenterExperienceManager *v831; // rbx
  signed int v832; // eax
  signed int v833; // edi
  SIZE_T v834; // rcx
  __int64 v835; // rax
  __int64 (__fastcall *v836)(); // rdi
  __int64 v837; // rax
  int v838; // eax
  __int32 v839; // r10d
  __int32 v840; // r9d
  __int32 v841; // r8d
  __int32 v842; // edx
  int v843; // esi
  int v844; // r11d
  const WCHAR *v845; // rdx
  unsigned __int16 *v846; // rax
  char v847; // r15
  unsigned __int8 *v848; // r9
  signed __int64 v849; // r10
  int v850; // r8d
  int v851; // r8d
  int v852; // ecx
  int v853; // edi
  int v854; // edx
  int v855; // ecx
  int v856; // edi
  int v857; // edx
  int v858; // edi
  int v859; // ecx
  size_t v860; // rdi
  CToastCenterExperienceManager *v861; // r13
  char v862; // al
  unsigned __int32 v863; // ebx
  __int32 v864; // ecx
  __int32 v865; // r10d
  __int32 v866; // r11d
  int v867; // edi
  int v868; // r13d
  __int64 v869; // rax
  __int64 v870; // rax
  void *v871; // rcx
  const WCHAR *v872; // rax
  signed int v873; // edi
  bool v874; // sf
  char *v875; // rcx
  CToastCenterExperienceManager *v876; // rdi
  __int64 v877; // rax
  __int64 (__fastcall *v878)(); // rdi
  __int64 v879; // rax
  int v880; // eax
  __int64 v881; // r11
  __int32 v882; // r10d
  int v883; // r8d
  int v884; // r9d
  int v885; // ecx
  unsigned __int64 v886; // rdx
  int v887; // eax
  int v888; // r15d
  unsigned __int16 *v889; // rax
  __int64 v890; // rcx
  unsigned __int16 *v891; // rsi
  signed int v892; // r11d
  signed __int64 v893; // r10
  unsigned __int8 *v894; // r9
  int v895; // r8d
  int v896; // r8d
  int v897; // edi
  int v898; // edx
  int v899; // edi
  int v900; // edx
  int v901; // edi
  int v902; // ecx
  void *v903; // rdi
  __int64 v904; // rax
  __int64 v905; // rax
  signed int v906; // edi
  bool v907; // sf
  unsigned __int16 *v908; // r13
  unsigned __int16 *v909; // rcx
  __int64 v910; // rax
  __int64 (__fastcall *v911)(); // rdi
  __int64 v912; // rax
  int v913; // eax
  __int32 v914; // r10d
  int v915; // r9d
  __int32 v916; // r8d
  int v917; // ecx
  int v918; // edx
  int v919; // r11d
  __int64 v920; // rdi
  int v921; // r8d
  const WCHAR *v922; // rdx
  char *v923; // rax
  char v924; // r13
  unsigned __int8 *v925; // r9
  __int64 v926; // r10
  int v927; // r8d
  int v928; // r8d
  int v929; // edi
  int v930; // edx
  int v931; // edi
  int v932; // edx
  int v933; // edi
  int v934; // ecx
  __int64 v935; // rcx
  __int64 v936; // rcx
  __int64 v937; // rcx
  int v938; // eax
  __int64 v939; // rbx
  HMODULE *v940; // rdi
  __int64 v941; // rdx
  __int64 (__fastcall **v942)(); // rax
  __int64 (__fastcall **v943)(); // rcx
  __int128 v944; // xmm1
  __int128 v945; // xmm0
  __int128 v946; // xmm1
  __int128 v947; // xmm0
  __int128 v948; // xmm1
  __int128 v949; // xmm0
  __int128 v950; // xmm1
  __int128 v951; // xmm1
  __int128 v952; // xmm0
  __int128 v953; // xmm1
  __int128 v954; // xmm0
  __int128 v955; // xmm1
  __int128 v956; // xmm0
  int v957; // eax
  int v958; // esi
  int v959; // eax
  const WCHAR *v960; // rax
  int v961; // r15d
  _BYTE *v962; // r14
  int v963; // r13d
  unsigned __int8 *v964; // rcx
  unsigned int v965; // esi
  __int64 v966; // rbx
  unsigned int v967; // r11d
  int v968; // r10d
  int v969; // r9d
  int v970; // eax
  int v971; // r10d
  int v972; // r11d
  int v973; // r9d
  unsigned int v974; // r8d
  int v975; // r11d
  unsigned int v976; // r8d
  int v977; // r11d
  int v978; // r8d
  unsigned int v979; // r11d
  int v980; // r8d
  int v981; // r11d
  int v982; // r8d
  unsigned int v983; // r11d
  int v984; // edx
  int v985; // r11d
  unsigned int v986; // esi
  int v987; // r11d
  int v988; // esi
  int v989; // r11d
  int v990; // esi
  unsigned int v991; // edi
  int v992; // esi
  int v993; // edi
  int v994; // esi
  unsigned int v995; // edi
  int v996; // esi
  int v997; // r11d
  int v998; // eax
  LPCWSTR v999; // rbx
  int v1000; // r13d
  unsigned __int64 v1001; // rax
  char v1002; // cl
  __int64 v1003; // rbx
  HMODULE *v1004; // rdi
  __int64 v1005; // rdx
  __int64 (__fastcall **v1006)(); // rax
  __int64 (__fastcall **v1007)(); // rcx
  __int128 v1008; // xmm1
  __int128 v1009; // xmm0
  __int128 v1010; // xmm1
  __int128 v1011; // xmm0
  __int128 v1012; // xmm1
  __int128 v1013; // xmm0
  __int128 v1014; // xmm1
  __int128 v1015; // xmm1
  __int128 v1016; // xmm0
  __int128 v1017; // xmm1
  __int128 v1018; // xmm0
  __int128 v1019; // xmm1
  __int128 v1020; // xmm0
  WCHAR *v1021; // rsi
  const WCHAR *v1022; // rdx
  __int64 v1023; // rax
  const WCHAR *v1024; // rbx
  HMODULE *v1025; // rdi
  __int64 v1026; // rcx
  char *v1027; // rcx
  unsigned int v1028; // eax
  unsigned int v1029; // edi
  const WCHAR *v1030; // rcx
  const CHAR *v1031; // rdx
  __int64 v1032; // rax
  __int64 (__fastcall *v1033)(); // rax
  HANDLE v1034; // rax
  __int64 v1035; // rbx
  int v1036; // eax
  HMODULE *v1037; // rdi
  __int64 v1038; // rdx
  __int64 (__fastcall **v1039)(); // rax
  __int64 (__fastcall **v1040)(); // rcx
  __int128 v1041; // xmm1
  __int128 v1042; // xmm0
  __int128 v1043; // xmm1
  __int128 v1044; // xmm0
  __int128 v1045; // xmm1
  __int128 v1046; // xmm0
  __int128 v1047; // xmm1
  __int128 v1048; // xmm1
  __int128 v1049; // xmm0
  __int128 v1050; // xmm1
  __int128 v1051; // xmm0
  __int128 v1052; // xmm1
  __int128 v1053; // xmm0
  WCHAR *v1054; // rbx
  HANDLE v1055; // rax
  _OWORD *v1056; // rsi
  HANDLE v1057; // rax
  WCHAR *v1058; // rax
  int v1059; // r9d
  unsigned int v1060; // r10d
  int v1061; // eax
  int v1062; // r9d
  unsigned int v1063; // r10d
  int v1064; // r11d
  int v1065; // eax
  int v1066; // r9d
  unsigned int v1067; // r10d
  int v1068; // r11d
  int v1069; // eax
  int v1070; // r11d
  unsigned int v1071; // edi
  HANDLE v1072; // rax
  LPVOID v1073; // rax
  void *v1074; // rdi
  HANDLE v1075; // rax
  void *v1076; // rdi
  HANDLE v1077; // rax
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  int v1080; // eax
  unsigned int *v1081; // r9
  unsigned int v1082; // r10d
  __int64 v1083; // r11
  unsigned int *v1084; // rax
  int v1085; // r9d
  unsigned int v1086; // r10d
  __int64 v1087; // r11
  int *v1088; // r10
  int v1089; // edx
  unsigned __int64 v1090; // r10
  unsigned int v1091; // r9d
  int v1092; // r11d
  _DWORD *v1093; // r10
  unsigned int v1094; // edi
  int *v1095; // r13
  unsigned int v1096; // r10d
  int *v1097; // r9
  int v1098; // edx
  unsigned __int64 v1099; // r9
  int v1100; // r10d
  _DWORD *v1101; // r9
  unsigned int v1102; // edi
  unsigned int v1103; // r10d
  int v1104; // r11d
  int *v1105; // r9
  int v1106; // edx
  unsigned __int64 v1107; // r9
  int v1108; // r10d
  int v1109; // r11d
  _DWORD *v1110; // r9
  _QWORD *v1111; // rax
  LPVOID v1112; // rcx
  unsigned int v1113; // ecx
  unsigned int v1114; // edi
  int v1115; // edi
  unsigned int v1116; // r9d
  WCHAR *v1117; // r10
  unsigned int v1118; // ecx
  unsigned int v1119; // edi
  HANDLE v1120; // rax
  _DWORD *v1121; // rax
  int v1122; // eax
  unsigned int v1123; // r11d
  const WCHAR *v1124; // rcx
  void *v1125; // rcx
  int v1126; // eax
  const WCHAR *v1127; // r9
  HANDLE v1128; // rax
  int v1129; // edi
  unsigned __int8 *v1130; // rdi
  char *v1131; // rax
  unsigned int v1132; // r10d
  char *v1133; // r8
  unsigned __int64 v1134; // rdx
  unsigned __int8 v1135; // al
  int v1136; // eax
  char *v1137; // r9
  unsigned int v1138; // r11d
  unsigned __int8 *v1139; // rdx
  int v1140; // r8d
  unsigned int v1141; // ecx
  int v1142; // r9d
  char v1143; // r11
  int v1144; // r10d
  char *v1145; // r13
  unsigned int v1146; // r11d
  unsigned int v1147; // r15d
  int v1148; // ecx
  unsigned int v1149; // r14d
  char v1150; // al
  int v1151; // edi
  unsigned __int8 *v1152; // rcx
  int v1153; // r15d
  unsigned int v1154; // esi
  int v1155; // r13d
  unsigned __int64 v1156; // r12
  int v1157; // r9d
  int v1158; // r8d
  int v1159; // r11d
  int v1160; // r10d
  int v1161; // r11d
  int v1162; // r10d
  int v1163; // r11d
  unsigned int v1164; // r10d
  int v1165; // r11d
  unsigned int v1166; // r10d
  int v1167; // r11d
  int v1168; // r10d
  int v1169; // r11d
  int v1170; // r10d
  unsigned int v1171; // r11d
  unsigned int v1172; // r10d
  int v1173; // r11d
  int v1174; // r10d
  int v1175; // r11d
  int v1176; // r10d
  int v1177; // r11d
  int v1178; // r10d
  int v1179; // r11d
  int v1180; // r10d
  unsigned int v1181; // eax
  int v1182; // r10d
  int v1183; // r11d
  _BYTE *v1184; // r15
  HANDLE v1185; // rax
  _QWORD *v1186; // r14
  HANDLE v1187; // rax
  void *v1188; // rax
  HANDLE v1189; // rax
  _OWORD *v1190; // rax
  HANDLE v1191; // rax
  _QWORD *v1192; // rax
  int v1193; // edi
  HANDLE v1194; // rax
  HANDLE v1195; // rax
  HANDLE v1196; // rax
  HANDLE v1197; // rax
  void *v1198; // r14
  HANDLE v1199; // rax
  WCHAR *v1200; // rax
  HANDLE v1201; // rax
  HANDLE v1202; // rax
  HANDLE v1203; // rax
  HANDLE v1204; // rax
  int v1205; // edx
  int v1206; // edi
  int v1207; // r11d
  int v1208; // r11d
  unsigned int v1209; // edi
  HANDLE v1210; // rax
  _DWORD *v1211; // rax
  int v1212; // eax
  LPVOID v1213; // rcx
  void *v1214; // rcx
  int v1215; // eax
  void *v1216; // r9
  void *v1217; // rcx
  int v1218; // eax
  void *v1219; // r9
  HANDLE v1220; // rax
  int v1221; // eax
  void *v1222; // r9
  unsigned int v1223; // ecx
  int v1224; // edi
  void *v1225; // r9
  int v1226; // r10d
  unsigned int *v1227; // rcx
  int v1228; // r10d
  void *v1229; // r9
  unsigned int *v1230; // rcx
  int v1231; // r10d
  void *v1232; // r9
  int v1233; // ecx
  int v1234; // r10d
  void *v1235; // r9
  unsigned int v1236; // edi
  HANDLE v1237; // rax
  _DWORD *v1238; // rax
  _DWORD *v1239; // rdx
  signed int v1240; // eax
  FARPROC v1241; // rax
  int v1242; // eax
  unsigned int v1243; // r9d
  int v1244; // eax
  SIZE_T *v1245; // r10
  int v1246; // edi
  SIZE_T *v1247; // rcx
  int v1248; // r9d
  unsigned int v1249; // r11d
  int v1250; // r11d
  int v1251; // r9d
  int v1252; // r9d
  unsigned int v1253; // r10d
  int v1254; // r10d
  int v1255; // r9d
  int v1256; // r9d
  int v1257; // r9d
  int v1258; // r10d
  int v1259; // r11d
  HANDLE v1260; // rax
  SIZE_T *v1261; // rax
  SIZE_T *v1262; // rcx
  HANDLE v1263; // rax
  void *v1264; // rcx
  HANDLE v1265; // rax
  void *v1266; // rcx
  HANDLE v1267; // rax
  void *v1268; // rcx
  SIZE_T *v1269; // rax
  HANDLE v1270; // rax
  HANDLE v1271; // rax
  HANDLE v1272; // rax
  HANDLE v1273; // rax
  char v1274; // di
  _DWORD *v1275; // r9
  unsigned __int8 *v1276; // rax
  unsigned __int8 v1277; // dl
  SIZE_T *v1278; // r11
  int v1279; // r10d
  unsigned int v1280; // r8d
  int v1281; // edi
  int v1282; // ecx
  unsigned int v1283; // edi
  unsigned __int8 *v1284; // r15
  unsigned int v1285; // r8d
  unsigned int v1286; // edx
  int v1287; // r12d
  unsigned int v1288; // r9d
  char v1289; // al
  unsigned int v1290; // r8d
  int v1291; // r13d
  unsigned __int8 *v1292; // r12
  int v1293; // edx
  _BYTE *v1294; // r14
  SIZE_T v1295; // r11
  int v1296; // ebx
  int v1297; // esi
  int v1298; // r10d
  int v1299; // r9d
  int v1300; // eax
  int v1301; // r10d
  int v1302; // edi
  int v1303; // r9d
  unsigned int v1304; // r8d
  int v1305; // edi
  unsigned int v1306; // r8d
  int v1307; // edi
  int v1308; // r8d
  unsigned int v1309; // edi
  int v1310; // r8d
  int v1311; // edi
  int v1312; // r8d
  unsigned int v1313; // edi
  int v1314; // r8d
  int v1315; // edi
  unsigned int v1316; // r8d
  int v1317; // edi
  int v1318; // r8d
  int v1319; // edi
  int v1320; // r8d
  unsigned int v1321; // edi
  int v1322; // r8d
  int v1323; // edi
  int v1324; // r8d
  unsigned int v1325; // edi
  int v1326; // eax
  unsigned int v1327; // ecx
  unsigned int v1328; // ecx
  SIZE_T n; // rax
  SIZE_T *v1330; // r10
  SIZE_T v1331; // r9
  SIZE_T *v1332; // r10
  int v1333; // eax
  SIZE_T v1334; // r9
  SIZE_T *v1335; // r10
  void *v1336; // r8
  SIZE_T v1337; // r9
  SIZE_T *v1338; // r10
  int v1339; // eax
  void *v1340; // r14
  WCHAR *v1341; // rcx
  SIZE_T v1342; // r9
  SIZE_T *v1343; // r10
  SIZE_T v1344; // r11
  SIZE_T v1345; // r15
  int *v1346; // r11
  int v1347; // edx
  unsigned __int64 v1348; // r11
  void *v1349; // r9
  SIZE_T *v1350; // r10
  __int64 v1351; // rax
  unsigned int v1352; // eax
  HANDLE v1353; // rax
  HANDLE v1354; // rax
  void *v1355; // r14
  HANDLE v1356; // rax
  void *v1357; // r14
  HANDLE v1358; // rax
  void *v1359; // r14
  HANDLE v1360; // rax
  HANDLE v1361; // rax
  HANDLE v1362; // rax
  HANDLE v1363; // rax
  void *v1364; // r15
  HANDLE v1365; // rax
  void *v1366; // r15
  HANDLE v1367; // rax
  void *v1368; // r15
  HANDLE v1369; // rax
  HANDLE v1370; // rax
  void *v1371; // r14
  HANDLE v1372; // rax
  _DWORD *v1373; // rdi
  unsigned int v1374; // r9d
  __int64 v1375; // r10
  unsigned int v1376; // r11d
  int *v1377; // rax
  int v1378; // r9d
  unsigned int v1379; // r11d
  int v1380; // eax
  __int64 v1381; // rbx
  HMODULE *v1382; // rdi
  __int64 v1383; // rdx
  __int64 (__fastcall **v1384)(); // rax
  __int64 (__fastcall **v1385)(); // rcx
  __int128 v1386; // xmm1
  __int128 v1387; // xmm0
  __int128 v1388; // xmm1
  __int128 v1389; // xmm0
  __int128 v1390; // xmm1
  __int128 v1391; // xmm0
  __int128 v1392; // xmm1
  __int128 v1393; // xmm1
  __int128 v1394; // xmm0
  __int128 v1395; // xmm1
  __int128 v1396; // xmm0
  __int128 v1397; // xmm1
  __int128 v1398; // xmm0
  int v1399; // ebx
  int v1400; // edi
  __int64 v1401; // rdx
  const WCHAR *v1402; // rcx
  unsigned __int8 v1404; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1405; // [rsp+60h] [rbp-A0h]
  size_t v1406; // [rsp+68h] [rbp-98h]
  size_t v1407; // [rsp+68h] [rbp-98h]
  size_t v1408; // [rsp+68h] [rbp-98h]
  size_t v1409; // [rsp+68h] [rbp-98h]
  CToastCenterExperienceManager *v1410; // [rsp+68h] [rbp-98h]
  int v1411; // [rsp+68h] [rbp-98h]
  int v1412; // [rsp+68h] [rbp-98h]
  int v1413; // [rsp+68h] [rbp-98h]
  int v1414; // [rsp+68h] [rbp-98h]
  int v1415; // [rsp+68h] [rbp-98h]
  int v1416; // [rsp+68h] [rbp-98h]
  unsigned int v1417; // [rsp+68h] [rbp-98h]
  int v1418; // [rsp+68h] [rbp-98h]
  unsigned int v1419; // [rsp+68h] [rbp-98h]
  int v1420; // [rsp+68h] [rbp-98h]
  int v1421; // [rsp+68h] [rbp-98h]
  unsigned int v1422; // [rsp+68h] [rbp-98h]
  int v1423; // [rsp+68h] [rbp-98h]
  char *lpMem; // [rsp+70h] [rbp-90h]
  _BYTE *lpMema; // [rsp+70h] [rbp-90h]
  void *lpMemb; // [rsp+70h] [rbp-90h]
  void *lpMemc; // [rsp+70h] [rbp-90h]
  void *lpMemd; // [rsp+70h] [rbp-90h]
  void *lpMeme; // [rsp+70h] [rbp-90h]
  void *lpMemf; // [rsp+70h] [rbp-90h]
  void *lpMemg; // [rsp+70h] [rbp-90h]
  void *lpMemh; // [rsp+70h] [rbp-90h]
  void *lpMemi; // [rsp+70h] [rbp-90h]
  void *lpMemj; // [rsp+70h] [rbp-90h]
  CToastCenterExperienceManager *lpMemk; // [rsp+70h] [rbp-90h]
  unsigned int *lpMeml; // [rsp+70h] [rbp-90h]
  unsigned __int8 *lpMemm; // [rsp+70h] [rbp-90h]
  LPVOID lpMemn; // [rsp+70h] [rbp-90h]
  void *lpMemo; // [rsp+70h] [rbp-90h]
  LPCWSTR v1440; // [rsp+78h] [rbp-88h]
  LPCWSTR v1441; // [rsp+78h] [rbp-88h]
  LPCWSTR v1442; // [rsp+78h] [rbp-88h]
  WCHAR *v1443; // [rsp+78h] [rbp-88h]
  LPCWSTR v1444; // [rsp+78h] [rbp-88h]
  LPCWSTR v1445; // [rsp+78h] [rbp-88h]
  LPCWSTR v1446; // [rsp+78h] [rbp-88h]
  LPCWSTR v1447; // [rsp+78h] [rbp-88h]
  int v1448; // [rsp+78h] [rbp-88h]
  int v1449; // [rsp+78h] [rbp-88h]
  int v1450; // [rsp+78h] [rbp-88h]
  int v1451; // [rsp+78h] [rbp-88h]
  int v1452; // [rsp+78h] [rbp-88h]
  int v1453; // [rsp+78h] [rbp-88h]
  unsigned int v1454; // [rsp+78h] [rbp-88h]
  unsigned int v1455; // [rsp+78h] [rbp-88h]
  unsigned int v1456; // [rsp+78h] [rbp-88h]
  int v1457; // [rsp+78h] [rbp-88h]
  unsigned int v1458; // [rsp+78h] [rbp-88h]
  unsigned int v1459; // [rsp+78h] [rbp-88h]
  WCHAR *lpModuleName; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamea; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameb; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamec; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamed; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamee; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamef; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameg; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameh; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamei; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamej; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamek; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamel; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamem; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamen; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNameo; // [rsp+80h] [rbp-80h]
  unsigned int v1476; // [rsp+88h] [rbp-78h]
  unsigned int v1477; // [rsp+88h] [rbp-78h]
  unsigned int v1478; // [rsp+88h] [rbp-78h]
  unsigned int v1479; // [rsp+88h] [rbp-78h]
  unsigned int v1480; // [rsp+88h] [rbp-78h]
  unsigned int v1481; // [rsp+88h] [rbp-78h]
  unsigned int v1482; // [rsp+88h] [rbp-78h]
  unsigned int v1483; // [rsp+88h] [rbp-78h]
  int v1484; // [rsp+88h] [rbp-78h]
  unsigned int v1485; // [rsp+88h] [rbp-78h]
  int v1486; // [rsp+88h] [rbp-78h]
  unsigned int v1487; // [rsp+88h] [rbp-78h]
  unsigned int v1488; // [rsp+88h] [rbp-78h]
  unsigned int v1489; // [rsp+88h] [rbp-78h]
  int v1490; // [rsp+88h] [rbp-78h]
  int v1491; // [rsp+88h] [rbp-78h]
  int v1492; // [rsp+88h] [rbp-78h]
  __int32 v1493; // [rsp+88h] [rbp-78h]
  int v1494; // [rsp+88h] [rbp-78h]
  SIZE_T v1495; // [rsp+88h] [rbp-78h]
  char *v1496; // [rsp+90h] [rbp-70h]
  char *v1497; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1498; // [rsp+90h] [rbp-70h]
  LPVOID v1499; // [rsp+90h] [rbp-70h]
  int v1500; // [rsp+90h] [rbp-70h]
  _OWORD *v1501; // [rsp+90h] [rbp-70h]
  void *v1502; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1503; // [rsp+90h] [rbp-70h]
  void *v1504; // [rsp+90h] [rbp-70h]
  void *v1505; // [rsp+90h] [rbp-70h]
  void *v1506; // [rsp+90h] [rbp-70h]
  void *v1507; // [rsp+90h] [rbp-70h]
  void *v1508; // [rsp+90h] [rbp-70h]
  void *v1509; // [rsp+90h] [rbp-70h]
  _OWORD *v1510; // [rsp+90h] [rbp-70h]
  char *v1511; // [rsp+98h] [rbp-68h]
  size_t v1512; // [rsp+98h] [rbp-68h]
  void *v1513; // [rsp+98h] [rbp-68h]
  void *v1514; // [rsp+98h] [rbp-68h]
  void *v1515; // [rsp+98h] [rbp-68h]
  void *v1516; // [rsp+98h] [rbp-68h]
  void *v1517; // [rsp+98h] [rbp-68h]
  void *v1518; // [rsp+98h] [rbp-68h]
  void *v1519; // [rsp+98h] [rbp-68h]
  size_t v1520; // [rsp+98h] [rbp-68h]
  void *v1521; // [rsp+98h] [rbp-68h]
  size_t v1522; // [rsp+98h] [rbp-68h]
  size_t v1523; // [rsp+98h] [rbp-68h]
  _DWORD *v1524; // [rsp+98h] [rbp-68h]
  SIZE_T v1525; // [rsp+A0h] [rbp-60h]
  SIZE_T v1526; // [rsp+A0h] [rbp-60h]
  SIZE_T v1527; // [rsp+A0h] [rbp-60h]
  SIZE_T v1528; // [rsp+A0h] [rbp-60h]
  SIZE_T v1529; // [rsp+A0h] [rbp-60h]
  SIZE_T v1530; // [rsp+A0h] [rbp-60h]
  int v1531; // [rsp+A0h] [rbp-60h]
  int v1532; // [rsp+A0h] [rbp-60h]
  int v1533; // [rsp+A0h] [rbp-60h]
  int v1534; // [rsp+A0h] [rbp-60h]
  unsigned int v1535; // [rsp+A0h] [rbp-60h]
  int v1536; // [rsp+A0h] [rbp-60h]
  unsigned int v1537; // [rsp+A0h] [rbp-60h]
  int v1538; // [rsp+A0h] [rbp-60h]
  unsigned int v1539; // [rsp+A8h] [rbp-58h]
  int v1540; // [rsp+A8h] [rbp-58h]
  unsigned int v1541; // [rsp+A8h] [rbp-58h]
  int v1542; // [rsp+A8h] [rbp-58h]
  __int32 v1543; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1544; // [rsp+B0h] [rbp-50h]
  __int64 v1545; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1546; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1547; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1548; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1549; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1550; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1551; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1552; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1553; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1554; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1555; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1556; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1557; // [rsp+B0h] [rbp-50h]
  int v1558; // [rsp+B8h] [rbp-48h]
  unsigned int v1559; // [rsp+B8h] [rbp-48h]
  unsigned int v1560; // [rsp+B8h] [rbp-48h]
  int v1561; // [rsp+B8h] [rbp-48h]
  __int32 v1562; // [rsp+B8h] [rbp-48h]
  void *v1563; // [rsp+C0h] [rbp-40h]
  unsigned int v1564; // [rsp+C0h] [rbp-40h]
  unsigned int v1565; // [rsp+C0h] [rbp-40h]
  int v1566; // [rsp+C0h] [rbp-40h]
  unsigned int v1567; // [rsp+C0h] [rbp-40h]
  char *v1568; // [rsp+C0h] [rbp-40h]
  int v1569; // [rsp+C0h] [rbp-40h]
  void *v1570; // [rsp+C0h] [rbp-40h]
  int v1571; // [rsp+C8h] [rbp-38h]
  int v1572; // [rsp+C8h] [rbp-38h]
  unsigned int v1573; // [rsp+C8h] [rbp-38h]
  int v1574; // [rsp+C8h] [rbp-38h]
  unsigned int v1575; // [rsp+C8h] [rbp-38h]
  int v1576; // [rsp+C8h] [rbp-38h]
  int v1577; // [rsp+C8h] [rbp-38h]
  unsigned int v1578; // [rsp+C8h] [rbp-38h]
  int v1579; // [rsp+C8h] [rbp-38h]
  int v1580; // [rsp+C8h] [rbp-38h]
  int v1581; // [rsp+C8h] [rbp-38h]
  int v1582; // [rsp+C8h] [rbp-38h]
  int v1583; // [rsp+C8h] [rbp-38h]
  SIZE_T v1584; // [rsp+D0h] [rbp-30h]
  int v1585; // [rsp+D0h] [rbp-30h]
  int v1586; // [rsp+D0h] [rbp-30h]
  WCHAR *v1587; // [rsp+D0h] [rbp-30h]
  int v1588; // [rsp+D0h] [rbp-30h]
  unsigned int v1589; // [rsp+D0h] [rbp-30h]
  unsigned int v1590; // [rsp+D0h] [rbp-30h]
  int v1591; // [rsp+D0h] [rbp-30h]
  int v1592; // [rsp+D0h] [rbp-30h]
  int v1593; // [rsp+D0h] [rbp-30h]
  int v1594; // [rsp+D0h] [rbp-30h]
  int v1595; // [rsp+D0h] [rbp-30h]
  int v1596; // [rsp+D0h] [rbp-30h]
  int v1597; // [rsp+D0h] [rbp-30h]
  int v1598; // [rsp+D0h] [rbp-30h]
  char *v1599; // [rsp+D0h] [rbp-30h]
  char *v1600; // [rsp+D8h] [rbp-28h]
  const void *v1601; // [rsp+D8h] [rbp-28h]
  _DWORD *v1602; // [rsp+D8h] [rbp-28h]
  LPVOID v1603; // [rsp+D8h] [rbp-28h]
  void *v1604; // [rsp+D8h] [rbp-28h]
  SIZE_T *v1605; // [rsp+D8h] [rbp-28h]
  SIZE_T *v1606; // [rsp+D8h] [rbp-28h]
  _BYTE *v1607; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v1608; // [rsp+E0h] [rbp-20h]
  __int64 v1609; // [rsp+E0h] [rbp-20h]
  __int64 v1610; // [rsp+E0h] [rbp-20h]
  __int32 v1611; // [rsp+E0h] [rbp-20h]
  int v1612; // [rsp+E0h] [rbp-20h]
  unsigned int v1613; // [rsp+E0h] [rbp-20h]
  unsigned int v1614; // [rsp+E0h] [rbp-20h]
  void *v1615; // [rsp+E0h] [rbp-20h]
  _BYTE *v1616; // [rsp+E0h] [rbp-20h]
  unsigned int Size; // [rsp+E8h] [rbp-18h]
  char Sizea; // [rsp+E8h] [rbp-18h]
  int Sizeb; // [rsp+E8h] [rbp-18h]
  void *Sizec; // [rsp+E8h] [rbp-18h]
  unsigned int Sized; // [rsp+E8h] [rbp-18h]
  unsigned int Sizee; // [rsp+E8h] [rbp-18h]
  unsigned int Sizef; // [rsp+E8h] [rbp-18h]
  int Sizeg; // [rsp+E8h] [rbp-18h]
  int Sizeh; // [rsp+E8h] [rbp-18h]
  int Sizei; // [rsp+E8h] [rbp-18h]
  signed int Sizej; // [rsp+E8h] [rbp-18h]
  const void **v1628; // [rsp+F0h] [rbp-10h]
  __int32 v1629; // [rsp+F0h] [rbp-10h]
  LPVOID v1630; // [rsp+F0h] [rbp-10h]
  int v1631; // [rsp+F0h] [rbp-10h]
  unsigned int v1632; // [rsp+F0h] [rbp-10h]
  _BYTE *v1633; // [rsp+F0h] [rbp-10h]
  SIZE_T v1634; // [rsp+F8h] [rbp-8h] BYREF
  SIZE_T v1635; // [rsp+100h] [rbp+0h]
  LPCWSTR v1636; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v1637; // [rsp+110h] [rbp+10h]
  LPVOID v1638; // [rsp+118h] [rbp+18h]
  unsigned __int32 v1639; // [rsp+120h] [rbp+20h]
  LPVOID v1640; // [rsp+128h] [rbp+28h]
  __int64 v1641; // [rsp+130h] [rbp+30h]
  LPVOID v1642; // [rsp+138h] [rbp+38h]
  int v1643; // [rsp+140h] [rbp+40h]
  LPVOID v1644; // [rsp+148h] [rbp+48h]
  int v1645; // [rsp+150h] [rbp+50h] BYREF
  int v1646; // [rsp+154h] [rbp+54h]
  int v1647; // [rsp+158h] [rbp+58h]
  int v1648; // [rsp+15Ch] [rbp+5Ch]
  int v1649; // [rsp+160h] [rbp+60h]
  unsigned int v1650; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1651; // [rsp+168h] [rbp+68h] BYREF
  int v1652; // [rsp+16Ch] [rbp+6Ch] BYREF
  SIZE_T dwBytes; // [rsp+170h] [rbp+70h] BYREF
  int v1654; // [rsp+178h] [rbp+78h] BYREF
  int v1655; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1656; // [rsp+180h] [rbp+80h] BYREF
  int v1657; // [rsp+184h] [rbp+84h] BYREF
  int v1658; // [rsp+188h] [rbp+88h] BYREF
  int v1659; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v1660; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1661; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v1662; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1663; // [rsp+1A4h] [rbp+A4h] BYREF
  int v1664; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1665; // [rsp+1ACh] [rbp+ACh] BYREF
  int v1666; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1667; // [rsp+1B4h] [rbp+B4h] BYREF
  int v1668; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1669; // [rsp+1BCh] [rbp+BCh] BYREF
  int v1670; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1671; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1672; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1673; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1674; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1675; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1676; // [rsp+1D8h] [rbp+D8h] BYREF
  int v1677; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1678; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1679; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1680; // [rsp+1E8h] [rbp+E8h]
  unsigned int v1681; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1682; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1683; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1684; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1685; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1686; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1687; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1688; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1689; // [rsp+20Ch] [rbp+10Ch] BYREF
  SIZE_T v1690; // [rsp+210h] [rbp+110h] BYREF
  int v1691; // [rsp+218h] [rbp+118h] BYREF
  int v1692; // [rsp+21Ch] [rbp+11Ch] BYREF
  int v1693; // [rsp+220h] [rbp+120h] BYREF
  int v1694; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1695; // [rsp+230h] [rbp+130h] BYREF
  int v1696; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1697; // [rsp+238h] [rbp+138h] BYREF
  int v1698; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1699; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1700; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1701; // [rsp+248h] [rbp+148h] BYREF
  int v1702; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1703; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1704; // [rsp+254h] [rbp+154h]
  unsigned int v1705; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1706; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1707; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1708; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1709; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1710; // [rsp+26Ch] [rbp+16Ch] BYREF
  _DWORD *v1711; // [rsp+270h] [rbp+170h] BYREF
  SIZE_T v1712; // [rsp+278h] [rbp+178h] BYREF
  void *v1713; // [rsp+280h] [rbp+180h] BYREF
  unsigned __int16 *v1714; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *String1; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t *v1716; // [rsp+2A8h] [rbp+1A8h] BYREF
  wchar_t *v1717; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v1718[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  size_t pcchLength[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1720; // [rsp+2D8h] [rbp+1D8h] BYREF
  int *v1721; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v1722; // [rsp+2E8h] [rbp+1E8h] BYREF
  size_t v1723[2]; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v1724; // [rsp+300h] [rbp+200h] BYREF
  unsigned int *v1725; // [rsp+308h] [rbp+208h] BYREF
  _DWORD *v1726; // [rsp+310h] [rbp+210h] BYREF
  HMODULE phModule; // [rsp+318h] [rbp+218h] BYREF
  void *v1728; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 v1729; // [rsp+328h] [rbp+228h] BYREF
  void *v1730; // [rsp+330h] [rbp+230h] BYREF
  unsigned __int64 v1731; // [rsp+338h] [rbp+238h] BYREF
  unsigned __int64 v1732; // [rsp+340h] [rbp+240h] BYREF
  unsigned __int64 v1733; // [rsp+348h] [rbp+248h] BYREF
  _DWORD *v1734; // [rsp+350h] [rbp+250h] BYREF
  _DWORD *v1735; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1736; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1737; // [rsp+368h] [rbp+268h] BYREF
  _DWORD *v1738; // [rsp+370h] [rbp+270h] BYREF
  unsigned int *v1739; // [rsp+378h] [rbp+278h] BYREF
  SIZE_T v1740[2]; // [rsp+380h] [rbp+280h] BYREF
  LPVOID v1741; // [rsp+390h] [rbp+290h]
  void **v1742; // [rsp+398h] [rbp+298h] BYREF
  LPVOID v1743; // [rsp+3A8h] [rbp+2A8h]
  void *v1744; // [rsp+3B0h] [rbp+2B0h] BYREF
  void *v1745; // [rsp+3B8h] [rbp+2B8h] BYREF
  unsigned __int64 v1746; // [rsp+3C0h] [rbp+2C0h]
  _OWORD *v1747; // [rsp+3C8h] [rbp+2C8h] BYREF
  char *v1748; // [rsp+3D0h] [rbp+2D0h] BYREF
  LPVOID v1749[4]; // [rsp+3D8h] [rbp+2D8h] BYREF
  void *v1750; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1751; // [rsp+400h] [rbp+300h]
  __int64 v1752; // [rsp+408h] [rbp+308h] BYREF
  __int64 v1753; // [rsp+410h] [rbp+310h] BYREF
  __int64 v1754; // [rsp+418h] [rbp+318h] BYREF
  int *v1755; // [rsp+420h] [rbp+320h] BYREF
  __int64 v1756; // [rsp+428h] [rbp+328h] BYREF
  int *v1757; // [rsp+430h] [rbp+330h] BYREF
  int *v1758; // [rsp+438h] [rbp+338h] BYREF
  _QWORD v1759[4]; // [rsp+440h] [rbp+340h] BYREF
  size_t v1760; // [rsp+460h] [rbp+360h] BYREF
  size_t v1761; // [rsp+468h] [rbp+368h] BYREF
  size_t v1762; // [rsp+470h] [rbp+370h] BYREF
  void *v1763; // [rsp+478h] [rbp+378h] BYREF
  __int64 v1764[2]; // [rsp+480h] [rbp+380h] BYREF
  void *v1765; // [rsp+490h] [rbp+390h] BYREF
  unsigned int *v1766; // [rsp+498h] [rbp+398h] BYREF
  unsigned __int64 v1767; // [rsp+4A0h] [rbp+3A0h] BYREF
  HMODULE hModule; // [rsp+4A8h] [rbp+3A8h] BYREF
  void *v1769; // [rsp+4B0h] [rbp+3B0h] BYREF
  void *v1770; // [rsp+4B8h] [rbp+3B8h] BYREF
  __int64 v1771[2]; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 v1772[2]; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int64 v1773[2]; // [rsp+4E0h] [rbp+3E0h] BYREF
  void *v1774[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  void *v1775[2]; // [rsp+500h] [rbp+400h] BYREF
  _QWORD *v1776; // [rsp+510h] [rbp+410h] BYREF
  void *Src[2]; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1778[2]; // [rsp+528h] [rbp+428h]
  size_t v1779[2]; // [rsp+538h] [rbp+438h] BYREF
  __int64 v1780; // [rsp+548h] [rbp+448h]
  void *v1781[2]; // [rsp+550h] [rbp+450h] BYREF
  void *v1782[2]; // [rsp+560h] [rbp+460h] BYREF
  __int64 v1783[2]; // [rsp+570h] [rbp+470h] BYREF
  __int64 v1784[2]; // [rsp+580h] [rbp+480h] BYREF
  __int64 v1785[2]; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1786; // [rsp+5A0h] [rbp+4A0h] BYREF
  LPVOID v1787[2]; // [rsp+5A8h] [rbp+4A8h]
  __int128 v1788; // [rsp+5B8h] [rbp+4B8h]
  __int128 v1789; // [rsp+5C8h] [rbp+4C8h] BYREF
  __int128 v1790; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int128 v1791; // [rsp+5E8h] [rbp+4E8h]
  __int128 v1792; // [rsp+5F8h] [rbp+4F8h] BYREF
  __int128 v1793; // [rsp+608h] [rbp+508h]
  int v1794; // [rsp+620h] [rbp+520h] BYREF
  char v1795[20]; // [rsp+624h] [rbp+524h] BYREF
  char *v1796; // [rsp+638h] [rbp+538h]
  int v1797; // [rsp+690h] [rbp+590h] BYREF
  _DWORD v1798[3]; // [rsp+694h] [rbp+594h] BYREF
  __int16 v1799; // [rsp+6A2h] [rbp+5A2h]
  __int64 v1800; // [rsp+6A8h] [rbp+5A8h]
  int v1801; // [rsp+700h] [rbp+600h] BYREF
  _DWORD v1802[5]; // [rsp+704h] [rbp+604h] BYREF
  unsigned __int16 *v1803; // [rsp+718h] [rbp+618h]
  int v1804; // [rsp+770h] [rbp+670h] BYREF
  char v1805[20]; // [rsp+774h] [rbp+674h] BYREF
  SIZE_T v1806; // [rsp+788h] [rbp+688h]
  int v1807; // [rsp+7E0h] [rbp+6E0h] BYREF
  _DWORD v1808[5]; // [rsp+7E4h] [rbp+6E4h] BYREF
  unsigned __int16 *v1809; // [rsp+7F8h] [rbp+6F8h]
  int v1810; // [rsp+850h] [rbp+750h] BYREF
  char v1811[20]; // [rsp+854h] [rbp+754h] BYREF
  SIZE_T v1812; // [rsp+868h] [rbp+768h]
  int v1813; // [rsp+8C0h] [rbp+7C0h] BYREF
  _DWORD v1814[5]; // [rsp+8C4h] [rbp+7C4h] BYREF
  unsigned __int16 *v1815; // [rsp+8D8h] [rbp+7D8h]
  int v1816; // [rsp+930h] [rbp+830h] BYREF
  _DWORD v1817[5]; // [rsp+934h] [rbp+834h] BYREF
  void *v1818; // [rsp+948h] [rbp+848h]
  int v1819; // [rsp+9A0h] [rbp+8A0h] BYREF
  char v1820[20]; // [rsp+9A4h] [rbp+8A4h] BYREF
  unsigned __int16 *v1821; // [rsp+9B8h] [rbp+8B8h]
  int v1822; // [rsp+A10h] [rbp+910h] BYREF
  int v1823; // [rsp+A14h] [rbp+914h]
  void *v1824; // [rsp+A18h] [rbp+918h]
  void *v1825; // [rsp+A20h] [rbp+920h]
  void *v1826; // [rsp+A28h] [rbp+928h]
  unsigned __int16 *v1827; // [rsp+A30h] [rbp+930h]
  unsigned __int16 *v1828; // [rsp+A38h] [rbp+938h]
  __int64 v1829; // [rsp+A40h] [rbp+940h]
  int v1830; // [rsp+A48h] [rbp+948h]
  __m128i v1831; // [rsp+A4Ch] [rbp+94Ch] BYREF
  __m128i v1832; // [rsp+A5Ch] [rbp+95Ch] BYREF
  unsigned int v1833; // [rsp+A6Ch] [rbp+96Ch] BYREF
  unsigned int v1834; // [rsp+A70h] [rbp+970h]
  unsigned __int32 v1835; // [rsp+A74h] [rbp+974h]
  unsigned int v1836; // [rsp+A78h] [rbp+978h]
  unsigned __int64 v1837; // [rsp+A80h] [rbp+980h]
  unsigned __int64 v1838; // [rsp+A88h] [rbp+988h]
  __int64 v1839; // [rsp+A90h] [rbp+990h]
  __int64 v1840; // [rsp+A98h] [rbp+998h]
  __int128 v1841; // [rsp+AA0h] [rbp+9A0h] BYREF
  __int128 v1842; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int128 v1843; // [rsp+AC0h] [rbp+9C0h]
  __int128 v1844; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1845; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int64 v1846; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned __int32 v1847; // [rsp+AF8h] [rbp+9F8h]
  __int32 v1848; // [rsp+AFCh] [rbp+9FCh]
  _OWORD v1849[2]; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1850; // [rsp+B20h] [rbp+A20h] BYREF
  __int128 v1851; // [rsp+B30h] [rbp+A30h] BYREF
  __int64 v1852; // [rsp+B40h] [rbp+A40h]
  __int128 v1853; // [rsp+B48h] [rbp+A48h] BYREF
  __int128 v1854; // [rsp+B58h] [rbp+A58h] BYREF
  __int64 v1855; // [rsp+B68h] [rbp+A68h]
  _DWORD v1856[12]; // [rsp+B70h] [rbp+A70h] BYREF
  __int128 v1857; // [rsp+BA0h] [rbp+AA0h] BYREF
  __int128 v1858; // [rsp+BB0h] [rbp+AB0h]
  __int64 v1859; // [rsp+BC0h] [rbp+AC0h]
  int v1860; // [rsp+BC8h] [rbp+AC8h]
  __int128 v1861; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int128 v1862; // [rsp+BE0h] [rbp+AE0h]
  __int64 v1863; // [rsp+BF0h] [rbp+AF0h]
  int v1864; // [rsp+BF8h] [rbp+AF8h]
  __int128 v1865; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v1866; // [rsp+C10h] [rbp+B10h]
  __int64 v1867; // [rsp+C20h] [rbp+B20h]
  int v1868; // [rsp+C28h] [rbp+B28h]
  __int128 v1869; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v1870; // [rsp+C40h] [rbp+B40h]
  __int64 v1871; // [rsp+C50h] [rbp+B50h]
  int v1872; // [rsp+C58h] [rbp+B58h]
  _DWORD v1873[6]; // [rsp+C60h] [rbp+B60h] BYREF
  char v1874; // [rsp+C7Ah] [rbp+B7Ah]
  unsigned __int16 v1875[34]; // [rsp+C7Ch] [rbp+B7Ch] BYREF
  _DWORD v1876[6]; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1877; // [rsp+CDAh] [rbp+BDAh]
  unsigned __int16 v1878[34]; // [rsp+CDCh] [rbp+BDCh] BYREF
  _DWORD v1879[6]; // [rsp+D20h] [rbp+C20h] BYREF
  char v1880; // [rsp+D3Ah] [rbp+C3Ah]
  unsigned __int16 v1881[34]; // [rsp+D3Ch] [rbp+C3Ch] BYREF
  _BYTE v1882[68]; // [rsp+D80h] [rbp+C80h] BYREF
  __int16 v1883; // [rsp+DC4h] [rbp+CC4h]
  unsigned __int16 v1884; // [rsp+E26h] [rbp+D26h]
  __int64 v1885; // [rsp+E2Ch] [rbp+D2Ch]
  _OWORD v1886[3]; // [rsp+E60h] [rbp+D60h] BYREF
  int v1887; // [rsp+E90h] [rbp+D90h] BYREF
  __int128 v1888; // [rsp+E98h] [rbp+D98h]
  __int128 v1889; // [rsp+EA8h] [rbp+DA8h]
  __int128 v1890; // [rsp+EB8h] [rbp+DB8h]
  __int64 v1891; // [rsp+EC8h] [rbp+DC8h]
  __int64 v1892; // [rsp+ED0h] [rbp+DD0h] BYREF
  char v1893[152]; // [rsp+ED8h] [rbp+DD8h] BYREF
  int v1894; // [rsp+F70h] [rbp+E70h] BYREF
  __int16 v1895; // [rsp+F74h] [rbp+E74h]
  _BYTE v1896[176]; // [rsp+F80h] [rbp+E80h] BYREF
  WCHAR Filename[264]; // [rsp+1030h] [rbp+F30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1278h] [rbp+1178h]

  v1648 = 0;
  v1 = 0;
  LODWORD(v1641) = 0;
  v1714 = 0LL;
  v1645 = 0;
  v1649 = 0;
  v1634 = 0LL;
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v2 = dword_1808CCC34;
  v1646 = -1;
  if ( dword_1808CCC34 )
    goto LABEL_43;
  v1647 = 0;
  v3 = MemoryAlloc(0x338uLL);
  if ( !v3 )
    goto LABEL_11;
  v4 = v3 + 7;
  v5 = 103LL;
  v6 = 0;
  v7 = -1;
  v8 = (unsigned __int8 *)&unk_18077F812;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = *(v8 - 1) | (*(v8 - 2) << 8);
    v12 = v8[2] << 8;
    v13 = *v8;
    v8 += 8;
    v14 = *(v8 - 7) | ((v13 | (v11 << 8)) << 8);
    v15 = v14 ^ v10;
    v16 = *(v8 - 3) | ((*(v8 - 4) | ((*(v8 - 5) | v12) << 8)) << 8);
    v17 = v15 ^ v16 ^ v9 ^ 0xAC987321;
    v18 = (__ROR4__(v17, 22) + 4991 * __ROR4__(v17 + 1419157410, 27)) ^ v15;
    v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROR4__(v18, 30)) ^ v17;
    v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
    v21 = (2033 * __ROR4__(v20 ^ 0xAB69, 26) - __ROR4__(v20, 30)) ^ v19;
    v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
    v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
    v24 = (__ROR4__(v23, 30) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
    v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROR4__(v24, 24)) ^ v23;
    v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
    v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
    v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
    v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
    v30 = ((v29 >> 2) + 4991 * __ROR4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 30)) ^ v28;
    v31 = (__ROR4__(v30, 25) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
    v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
    v33 = (__ROR4__(v32, 25) + 2033 * __ROR4__(v32 ^ 0xAB69, 27)) ^ v31;
    v34 = v33 ^ v32 ^ 0xAC987321;
    v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
    v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
    v37 = (__ROR4__(v36, 18) + 2033 * __ROR4__(v36 - 1419157410, 29)) ^ v35;
    v38 = (4991 * __ROR4__(v37 - 1419157410, 17) - __ROR4__(v37, 14)) ^ v36;
    v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
    v40 = 24670 * __ROR4__(v39 ^ 0x7F1137F, 28);
    v41 = __ROR4__(v39, 30);
    v9 = v7 ^ v39;
    v7 = v16;
    v10 = v6 ^ v38 ^ v41 ^ v40;
    *(v4 - 4) = v10;
    *v4 = v9;
    v4 += 8;
    *(v4 - 13) = BYTE1(v10);
    *(v4 - 9) = BYTE1(v9);
    *(v4 - 14) = (unsigned __int16)(v10 >> 8) >> 8;
    *(v4 - 10) = (unsigned __int16)(v9 >> 8) >> 8;
    *(v4 - 15) = __ROR4__((((v10 >> 8) | (v10 << 24)) >> 8) | (((v10 >> 8) | (v10 << 24)) << 24), 8);
    v6 = v14;
    *(v4 - 11) = __ROR4__((((v9 >> 8) | (v9 << 24)) >> 8) | (((v9 >> 8) | (v9 << 24)) << 24), 8);
    --v5;
  }
  while ( v5 );
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  do
    v43 ^= v3[v42++];
  while ( v42 < 0x338 );
  if ( v43 == 64LL )
  {
    v3[823] = 0;
    memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
    v64 = v3;
    if ( *v3 )
    {
      while ( 1 )
      {
        v65 = -1LL;
        v66 = (const WCHAR *)v3;
        v44 = 0;
        do
          ++v65;
        while ( *(_WORD *)&v3[2 * v65] );
        v67 = &v3[2 * v65];
        v68 = &qword_1808C93A0[3 * v45];
        if ( !GetModuleHandleExW(0, v66, v68) )
          break;
        if ( *(_WORD *)*v68 == 23117
          && (v69 = *((int *)*v68 + 15), (unsigned int)v69 < 0x10000000)
          && (v70 = (char *)*v68 + v69, v70 >= (char *)*v68)
          && *(_DWORD *)v70 == 17744 )
        {
          if ( ((*((_WORD *)v70 + 12) - 267) & 0xFEFF) != 0 )
          {
            v44 = -1073741811;
          }
          else
          {
            *(HMODULE *)((char *)v68 + 12) = (HMODULE)*((_QWORD *)v70 + 17);
            *((_DWORD *)v68 + 2) = *((_DWORD *)v70 + 20);
          }
        }
        else
        {
          v44 = -1073741701;
        }
        v71 = *(_DWORD *)(v67 + 2);
        v3 = v67 + 6;
        for ( i = 0; i < v71; v1647 = v76 + 1 )
        {
          v73 = -1LL;
          v74 = v3;
          do
            ++v73;
          while ( v3[v73] );
          v3 += v73 + 1;
          if ( v44 < 0 )
          {
            v76 = v1647;
          }
          else
          {
            ProcAddress = GetProcAddress(qword_1808C93A0[3 * v45], v74);
            if ( !ProcAddress )
              goto LABEL_41;
            v76 = v1647;
            off_1808C0340[v1647] = ProcAddress;
          }
          ++i;
        }
        ++v45;
        if ( !*v3 )
          goto LABEL_41;
      }
      v44 = -1073741702;
    }
LABEL_41:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v64);
    v1 = 0;
    if ( v44 < 0 )
      goto LABEL_11;
    v2 = dword_1808CCC34;
LABEL_43:
    dword_1808CCC34 = v2 + 1;
    goto LABEL_44;
  }
  MemoryFree(v3);
  v1 = 0;
LABEL_11:
  v46 = 4LL;
  v47 = qword_1808C93A0;
  do
  {
    if ( *v47 )
      FreeLibrary(*v47);
    v47 += 3;
    --v46;
  }
  while ( v46 );
  memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
  v48 = off_1808C0340;
  v49 = 2LL;
  v50 = off_1807174F0;
  do
  {
    v51 = *((_OWORD *)v50 + 1);
    *(_OWORD *)v48 = *(_OWORD *)v50;
    v52 = *((_OWORD *)v50 + 2);
    *((_OWORD *)v48 + 1) = v51;
    v53 = *((_OWORD *)v50 + 3);
    *((_OWORD *)v48 + 2) = v52;
    v54 = *((_OWORD *)v50 + 4);
    *((_OWORD *)v48 + 3) = v53;
    v55 = *((_OWORD *)v50 + 5);
    *((_OWORD *)v48 + 4) = v54;
    v56 = *((_OWORD *)v50 + 6);
    *((_OWORD *)v48 + 5) = v55;
    v57 = *((_OWORD *)v50 + 7);
    v50 += 16;
    *((_OWORD *)v48 + 6) = v56;
    v48 += 16;
    *((_OWORD *)v48 - 1) = v57;
    --v49;
  }
  while ( v49 );
  v58 = *((_OWORD *)v50 + 1);
  *(_OWORD *)v48 = *(_OWORD *)v50;
  v59 = *((_OWORD *)v50 + 2);
  *((_OWORD *)v48 + 1) = v58;
  v60 = *((_OWORD *)v50 + 3);
  *((_OWORD *)v48 + 2) = v59;
  v61 = *((_OWORD *)v50 + 4);
  *((_OWORD *)v48 + 3) = v60;
  v62 = *((_OWORD *)v50 + 5);
  *((_OWORD *)v48 + 4) = v61;
  v63 = *((_OWORD *)v50 + 6);
  *((_OWORD *)v48 + 5) = v62;
  *((_OWORD *)v48 + 6) = v63;
LABEL_44:
  _InterlockedExchange(&dword_1808CCC40, 0);
  String1 = 0LL;
  v78 = 0;
  v1716 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_94;
  v80 = off_1808C0450[0]();
  v81 = 0LL;
  if ( !v80 )
  {
LABEL_46:
    LastError = GetLastError();
    v82 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v82 = LastError < 0;
    }
    if ( !v82 )
      LastError = -2147467259;
    goto LABEL_95;
  }
  v1650 = 0;
  v83 = 0LL;
  v1717 = 0LL;
  for ( j = 0LL; ; j = v1650 )
  {
    v85 = v83;
    if ( !v81 )
      v85 = 0LL;
    if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808C0470[0])(
           v80,
           2LL,
           v85,
           j,
           &v1650) )
    {
      String1 = v83;
      v1717 = 0LL;
      goto LABEL_65;
    }
    v86 = GetLastError();
    if ( v86 != 122 )
      break;
    if ( v83 )
      goto LABEL_59;
    v83 = (wchar_t *)MemoryAlloc(v1650);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1717);
    v1717 = v83;
    v81 = v83;
    if ( !v83 )
    {
      LastError = -2147024882;
      goto LABEL_65;
    }
  }
  if ( !v86 )
  {
LABEL_59:
    LastError = -2147467259;
    goto LABEL_65;
  }
  if ( v86 > 0 )
    LastError = (unsigned __int16)v86 | 0x80070000;
  else
    LastError = v86;
LABEL_65:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1717);
  if ( LastError >= 0 )
  {
    v87 = off_1808C0468[0];
    CurrentThreadId = GetCurrentThreadId();
    v89 = ((__int64 (__fastcall *)(_QWORD))v87)(CurrentThreadId);
    v90 = 0LL;
    if ( !v89 )
      goto LABEL_46;
    v1651 = 0;
    v91 = 0LL;
    v1718[0] = 0LL;
    LastError = 0;
    for ( k = 0LL; ; k = v1651 )
    {
      v93 = v91;
      if ( !v90 )
        v93 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808C0470[0])(
             v89,
             2LL,
             v93,
             k,
             &v1651) )
      {
        v1716 = v91;
        v1718[0] = 0LL;
        goto LABEL_82;
      }
      v94 = GetLastError();
      if ( v94 != 122 )
        break;
      if ( v91 )
        goto LABEL_76;
      v91 = (wchar_t *)MemoryAlloc(v1651);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1718);
      v1718[0] = v91;
      v90 = v91;
      if ( !v91 )
      {
        LastError = -2147024882;
        goto LABEL_82;
      }
    }
    if ( !v94 )
    {
LABEL_76:
      LastError = -2147467259;
      goto LABEL_82;
    }
    LastError = v94 > 0 ? (unsigned __int16)v94 | 0x80070000 : v94;
LABEL_82:
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1718);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1716 && !wcscmp_0(v1716, L"Default") )
      {
        v1652 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1652) )
        {
          LastError = GetLastError();
          v96 = LastError < 0;
          if ( LastError > 0 )
          {
            LastError = (unsigned __int16)LastError | 0x80070000;
            v96 = LastError < 0;
          }
          if ( !v96 )
            LastError = -2147467259;
          goto LABEL_95;
        }
        if ( (v1652 & 0xF) == 0 )
          v78 = 1;
      }
LABEL_94:
      v1 = v78;
    }
  }
LABEL_95:
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1716);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&String1);
  v97 = 0;
  if ( LastError >= 0 )
    v97 = v1;
  v1558 = v97;
  v98 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=((void **)&v1634, v98);
  v1637 = (unsigned __int16 *)v1634;
  if ( !v1634 )
  {
    v99 = -2147024882;
    v100 = 0;
    goto LABEL_1565;
  }
  v1639 = 0;
  v101 = 0LL;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v1778 = 0LL;
  v102 = GetProcessHeap();
  v103 = HeapAlloc(v102, 8u, 0xA0uLL);
  v1647 = 56;
  v104 = v103;
  v1406 = (size_t)v103;
  if ( !v103 )
  {
    v99 = -1073741801;
    v1643 = -1073741801;
    v104 = 0LL;
    goto LABEL_103;
  }
  *v103 = xmmword_1808C7510[0];
  v103[1] = xmmword_1808C7510[1];
  v103[2] = xmmword_1808C7510[2];
  v103[3] = xmmword_1808C7510[3];
  v103[4] = xmmword_1808C7510[4];
  v103[5] = xmmword_1808C7510[5];
  v103[6] = xmmword_1808C7510[6];
  v103[7] = xmmword_1808C7510[7];
  v103[8] = xmmword_1808C7510[8];
  v103[9] = xmmword_1808C7510[9];
  v105 = GetProcessHeap();
  v101 = (WCHAR *)HeapAlloc(v105, 8u, 8uLL);
  v1440 = v101;
  if ( !v101 )
  {
    v99 = -1073741801;
    v1643 = -1073741801;
    v101 = 0LL;
    v106 = v97;
    goto LABEL_340;
  }
  *(_QWORD *)v101 = qword_1808C7468;
  v1525 = __rdtsc();
  dwBytes = 0LL;
  v107 = RtlUIntAdd(4u, 4, (int *)&dwBytes + 1);
  v99 = v107;
  v1643 = v107;
  if ( v107 < 0 )
  {
LABEL_103:
    v106 = v97;
    goto LABEL_340;
  }
  v108 = RtlUIntAdd(0, SHIDWORD(dwBytes), (int *)&dwBytes);
  v99 = v108 | 0x10000000;
  v106 = v97;
  v1643 = v108 | 0x10000000;
  if ( v108 < 0 )
    goto LABEL_340;
  v1654 = 0;
  v99 = RtlUIntAdd(v109, 160, &v1654);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_340;
  v110 = RtlUIntAdd(dwBytes, v1654, (int *)&dwBytes);
  v99 = v113 | v110;
  v1643 = v113 | v110;
  if ( (v113 | v110) < 0 )
    goto LABEL_340;
  v1655 = 0;
  v99 = RtlUIntAdd(v112, v111, &v1655);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_340;
  v114 = RtlUIntAdd(dwBytes, v1655, (int *)&dwBytes);
  v99 = v116 | v114;
  v1643 = v116 | v114;
  if ( (v116 | v114) < 0 )
    goto LABEL_340;
  v1656 = 0;
  v99 = RtlUIntAdd(v115, 8, &v1656);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_340;
  v117 = RtlUIntAdd(dwBytes, v1656, (int *)&dwBytes);
  v99 = v119 | v117;
  v1643 = v119 | v117;
  if ( (v119 | v117) < 0 )
    goto LABEL_340;
  pcchLength[0] = 0LL;
  if ( StringCchLengthW(L"WindowsCopilot-Available", v118, pcchLength) < 0 )
  {
LABEL_114:
    v99 = -1073741762;
LABEL_115:
    v106 = v97;
LABEL_339:
    v1643 = v99;
    goto LABEL_340;
  }
  v1657 = 0;
  ++pcchLength[0];
  v99 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), &v1657);
  v1643 = v99;
  if ( v99 >= 0 )
    v120 = v1657;
  v106 = v97;
  if ( v99 < 0 )
    goto LABEL_340;
  v121 = RtlUIntAdd(dwBytes, v120, (int *)&dwBytes);
  v99 = v121 | 0x10000000;
  v1643 = v121 | 0x10000000;
  if ( v121 < 0 )
    goto LABEL_340;
  v1658 = 0;
  v99 = RtlUIntAdd(4u, 4, &v1658);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_340;
  v122 = RtlUIntAdd(dwBytes, v1658, (int *)&dwBytes);
  v99 = v124 | v122;
  v1643 = v124 | v122;
  if ( (v124 | v122) < 0 )
    goto LABEL_340;
  v1659 = 0;
  v99 = RtlUIntAdd(v123, v123, &v1659);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_340;
  v125 = RtlUIntAdd(dwBytes, v1659, (int *)&dwBytes);
  v99 = v126 | v125;
  v1643 = v126 | v125;
  if ( (v126 | v125) < 0 )
    goto LABEL_340;
  HIDWORD(Src[0]) = dwBytes;
  v127 = dwBytes;
  v128 = GetProcessHeap();
  v129 = HeapAlloc(v128, 8u, v127);
  if ( !v129 )
  {
    v131 = -1073741801;
    v99 = -1073741801;
LABEL_127:
    v1643 = v131;
    goto LABEL_556;
  }
  Src[1] = v129;
  LODWORD(v1772[0]) = 0;
  v1771[1] = 0LL;
  LODWORD(Src[0]) = 0;
  pcchLength[1] = (size_t)Src[1];
  v99 = RtlULongLongAdd((unsigned __int64)Src[1], 4LL, v1772);
  v1643 = v99;
  if ( v99 < 0 )
  {
    v106 = v97;
    goto LABEL_340;
  }
  if ( v132 + 2 > (_DWORD *)((char *)v132 + HIDWORD(Src[0])) )
    goto LABEL_130;
  v133 = (_DWORD *)v1772[0];
  *v132 = 4;
  *v133 = 0;
  v130 = ++LODWORD(Src[0]);
  LODWORD(v1781[0]) = 0;
  v1780 = 0LL;
  if ( !v104 )
  {
    v99 = -1073741811;
LABEL_149:
    v1643 = v99;
    goto LABEL_103;
  }
  if ( !Src[1] )
  {
    v1660 = 0;
    v99 = RtlUIntAdd(4u, 160, &v1660);
    v1643 = v99;
    if ( v99 >= 0 )
    {
      v134 = RtlUIntAdd(HIDWORD(Src[0]), v1660, (int *)Src + 1);
      v136 = (int)Src[0];
      v99 = v134;
      v1643 = v134;
      if ( v134 >= 0 )
      {
LABEL_137:
        v136 += v135;
        LODWORD(Src[0]) = v136;
        goto LABEL_147;
      }
      goto LABEL_146;
    }
    goto LABEL_103;
  }
  v137 = (int *)Src[1];
  v1720 = (int *)Src[1];
  v1476 = 0;
  if ( v130 )
  {
    do
    {
      v138 = *v137;
      v1661 = 0;
      v99 = RtlUIntAdd(4u, v138, (int *)&v1661);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v99 = RtlULongLongAdd(v139, v1661, (__int64 *)&v1720);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v137 = v1720;
      ++v1476;
    }
    while ( v1476 < v140 );
    v1440 = v101;
    v1406 = (size_t)v104;
  }
  v99 = RtlULongLongAdd((unsigned __int64)v137, 4LL, (__int64 *)v1781);
  v1643 = v99;
  if ( v99 >= 0 )
  {
    if ( (char *)v142 + v141 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
      goto LABEL_130;
    *v142 = v141;
    memcpy_0(v1781[0], v104, v141);
    v136 = (int)Src[0];
    v135 = 1;
    goto LABEL_137;
  }
LABEL_146:
  v106 = v97;
  if ( v99 < 0 )
    goto LABEL_340;
LABEL_147:
  LODWORD(v1782[0]) = 0;
  v1781[1] = 0LL;
  if ( Src[1] )
  {
    v146 = (int *)Src[1];
    v1721 = (int *)Src[1];
    v1477 = 0;
    if ( v136 )
    {
      do
      {
        v147 = *v146;
        v1663 = 0;
        v99 = RtlUIntAdd(4u, v147, (int *)&v1663);
        v1643 = v99;
        if ( v99 < 0 )
          goto LABEL_103;
        v99 = RtlULongLongAdd(v148, v1663, (__int64 *)&v1721);
        v1643 = v99;
        if ( v99 < 0 )
          goto LABEL_103;
        v146 = v1721;
        ++v1477;
      }
      while ( v1477 < v149 );
      v1440 = v101;
      v1406 = (size_t)v104;
    }
    v99 = RtlULongLongAdd((unsigned __int64)v146, 4LL, (__int64 *)v1782);
    v1643 = v99;
    if ( v99 >= 0 )
    {
      if ( v150 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
        goto LABEL_130;
      *v150 = 8;
      memcpy_0(v1782[0], v101, 8uLL);
      v145 = (int)Src[0];
      v144 = 1;
      goto LABEL_153;
    }
  }
  else
  {
    v1662 = 0;
    v99 = RtlUIntAdd(4u, 8, &v1662);
    v1643 = v99;
    if ( v99 < 0 )
      goto LABEL_103;
    v143 = RtlUIntAdd(HIDWORD(Src[0]), v1662, (int *)Src + 1);
    v145 = (int)Src[0];
    v99 = v143;
    v1643 = v143;
    if ( v143 >= 0 )
    {
LABEL_153:
      v145 += v144;
      LODWORD(Src[0]) = v145;
      goto LABEL_163;
    }
  }
  v106 = v97;
  if ( v99 < 0 )
    goto LABEL_340;
LABEL_163:
  LODWORD(v1783[0]) = 0;
  v1782[1] = 0LL;
  if ( !Src[1] )
  {
    v1664 = 0;
    v99 = RtlUIntAdd(4u, 8, &v1664);
    v1643 = v99;
    if ( v99 < 0 )
      goto LABEL_103;
    v99 = RtlUIntAdd(HIDWORD(Src[0]), v1664, (int *)Src + 1);
    v1643 = v99;
    if ( v99 >= 0 )
    {
      LODWORD(Src[0]) += v152;
      goto LABEL_176;
    }
LABEL_175:
    v106 = v97;
    goto LABEL_340;
  }
  v153 = (int *)Src[1];
  v1722 = (int *)Src[1];
  v1478 = 0;
  if ( v145 )
  {
    do
    {
      v154 = *v153;
      v1665 = 0;
      v99 = RtlUIntAdd(4u, v154, (int *)&v1665);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v99 = RtlULongLongAdd((unsigned __int64)v153, v1665, (__int64 *)&v1722);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v153 = v1722;
      ++v1478;
    }
    while ( v1478 < v155 );
    v1440 = v101;
    v1406 = (size_t)v104;
  }
  v99 = RtlULongLongAdd((unsigned __int64)v153, 4LL, v1783);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_175;
  if ( v153 + 3 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
    goto LABEL_130;
  v156 = (SIZE_T *)v1783[0];
  *v153 = 8;
  *v156 = v1525;
  ++LODWORD(Src[0]);
LABEL_176:
  v1723[0] = 0LL;
  if ( StringCchLengthW(L"WindowsCopilot-Available", v151, v1723) < 0 )
    goto LABEL_114;
  v1643 = RtlULongLongAdd(v1723[0], 1LL, (__int64 *)v1723);
  v99 = v1643;
  if ( v1643 >= 0 )
  {
    LODWORD(v1784[0]) = 0;
    v1783[1] = 0LL;
    if ( 2 * LODWORD(v1723[0]) )
    {
      if ( !Src[1] )
      {
        v1666 = 0;
        v1643 = RtlUIntAdd(4u, 2 * LODWORD(v1723[0]), &v1666);
        v99 = v1643;
        if ( v1643 >= 0 )
        {
          v158 = RtlUIntAdd(HIDWORD(Src[0]), v1666, (int *)Src + 1);
          v157 = (unsigned int)Src[0];
          v99 = v158;
          v1643 = v158;
          if ( v158 >= 0 )
          {
            v157 = v159 + LODWORD(Src[0]);
            v1643 = 0;
            LODWORD(Src[0]) += v159;
            v99 = 0;
          }
        }
        goto LABEL_194;
      }
      v160 = (int *)Src[1];
      v1758 = (int *)Src[1];
      if ( v157 )
      {
        do
        {
          v161 = *v160;
          v1667 = 0;
          v1643 = RtlUIntAdd(4u, v161, (int *)&v1667);
          v99 = v1643;
          if ( v1643 < 0 )
            goto LABEL_194;
          v99 = RtlULongLongAdd((unsigned __int64)v160, v1667, (__int64 *)&v1758);
          v1643 = v99;
          if ( v99 < 0 )
            goto LABEL_194;
          v160 = v1758;
        }
        while ( v162 + 1 < v157 );
      }
      v1643 = RtlULongLongAdd((unsigned __int64)v160, 4LL, v1784);
      v99 = v1643;
      if ( v1643 < 0 )
        goto LABEL_194;
      if ( (char *)v160 + v163 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
      {
        v164 = (void *)v1784[0];
        *v160 = v163;
        memcpy_0(v164, L"WindowsCopilot-Available", (unsigned int)v163);
        v157 = ++LODWORD(Src[0]);
        goto LABEL_194;
      }
      v99 = -1073741789;
    }
    else
    {
      v99 = -1073741811;
    }
    v1643 = v99;
  }
LABEL_194:
  v106 = v97;
  if ( v99 < 0 )
    goto LABEL_340;
  LODWORD(v1785[0]) = 0;
  v1784[1] = 0LL;
  if ( Src[1] )
  {
    v168 = (int *)Src[1];
    v1757 = (int *)Src[1];
    v1479 = 0;
    if ( v157 )
    {
      do
      {
        v169 = *v168;
        v1669 = 0;
        v99 = RtlUIntAdd(4u, v169, (int *)&v1669);
        v1643 = v99;
        if ( v99 < 0 )
          goto LABEL_103;
        v99 = RtlULongLongAdd((unsigned __int64)v168, v1669, (__int64 *)&v1757);
        v1643 = v99;
        if ( v99 < 0 )
          goto LABEL_103;
        v168 = v1757;
        ++v1479;
      }
      while ( v1479 < v170 );
      v1440 = v101;
      v1406 = (size_t)v104;
    }
    v99 = RtlULongLongAdd((unsigned __int64)v168, 4LL, v1785);
    v1643 = v99;
    if ( v99 >= 0 )
    {
      if ( v168 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
        goto LABEL_130;
      v171 = (int *)v1785[0];
      v166 = 1;
      *v168 = 4;
      *v171 = v97;
      v167 = (int)Src[0];
      goto LABEL_198;
    }
  }
  else
  {
    v1668 = 0;
    v99 = RtlUIntAdd(4u, 4, &v1668);
    v1643 = v99;
    if ( v99 < 0 )
      goto LABEL_340;
    v165 = RtlUIntAdd(HIDWORD(Src[0]), v1668, (int *)Src + 1);
    v167 = (int)Src[0];
    v99 = v165;
    v1643 = v165;
    if ( v165 >= 0 )
    {
LABEL_198:
      v167 += v166;
      LODWORD(Src[0]) = v167;
      goto LABEL_208;
    }
  }
  v106 = v97;
  if ( v99 < 0 )
    goto LABEL_340;
LABEL_208:
  LODWORD(v1786) = 0;
  v1785[1] = 0LL;
  if ( !Src[1] )
  {
    v1670 = 0;
    v99 = RtlUIntAdd(4u, 4, &v1670);
    v1643 = v99;
    if ( v99 < 0 )
      goto LABEL_103;
    v99 = RtlUIntAdd(HIDWORD(Src[0]), v1670, (int *)Src + 1);
    v1643 = v99;
    if ( v99 >= 0 )
    {
      LODWORD(Src[0]) += v172;
      goto LABEL_221;
    }
LABEL_220:
    v106 = v97;
    goto LABEL_340;
  }
  v174 = (int *)Src[1];
  v1755 = (int *)Src[1];
  v1480 = 0;
  if ( v167 )
  {
    do
    {
      v175 = *v174;
      v1671 = 0;
      v99 = RtlUIntAdd(4u, v175, (int *)&v1671);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v99 = RtlULongLongAdd((unsigned __int64)v174, v1671, (__int64 *)&v1755);
      v1643 = v99;
      if ( v99 < 0 )
        goto LABEL_103;
      v174 = v1755;
      ++v1480;
    }
    while ( v1480 < v176 );
    v1440 = v101;
    v1406 = (size_t)v104;
  }
  v99 = RtlULongLongAdd((unsigned __int64)v174, 4LL, (__int64 *)&v1786);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_220;
  if ( v174 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
  {
LABEL_130:
    v99 = -1073741789;
    goto LABEL_115;
  }
  v177 = v1786;
  *v174 = v173;
  *v177 = v173;
  LODWORD(Src[0]) += v173 - 3;
LABEL_221:
  v1672 = 0;
  v99 = RtlUIntAdd(v173, v173, (int *)&v1672);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v179 = v1672;
  v1673 = v1672;
  v1674 = 0;
  v99 = RtlUIntAdd(v178, 8, &v1674);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v99 = RtlUIntAdd(v179, v1674, (int *)&v1673);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_233;
  v1675 = 0;
  v99 = RtlUIntAdd(v180, v180, &v1675);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v99 = RtlUIntAdd(v1673, v1675, (int *)&v1673);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_233;
  v1676 = 0;
  v99 = RtlUIntAdd(v181, v181, &v1676);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v99 = RtlUIntAdd(v1673, v1676, (int *)&v1673);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_233;
  v1677 = 0;
  v99 = RtlUIntAdd(v182, v182, &v1677);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v99 = RtlUIntAdd(v1673, v1677, (int *)&v1673);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_233;
  v1678 = 0;
  v99 = RtlUIntAdd(v183, v183, &v1678);
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_103;
  v99 = RtlUIntAdd(v1673, v1678, (int *)&v1673);
  v1643 = v99;
  if ( v99 < 0 )
  {
LABEL_233:
    v106 = v97;
    goto LABEL_340;
  }
  v1639 = v1673;
  v1607 = 0LL;
  v1481 = 0;
  v1628 = 0LL;
  v1638 = 0LL;
  Size = 0;
  v1563 = 0LL;
  v1640 = 0LL;
  v1642 = 0LL;
  v1584 = __rdtsc();
  v1679 = 8;
  v185 = RtlUIntAdd(8u, SHIDWORD(Src[0]), (int *)&v1679);
  if ( v185 >= 0 )
  {
    v186 = (v1679 + 7) & 0xFFFFFFF8;
    if ( v186 < v1679 )
    {
      v99 = -805306219;
      goto LABEL_149;
    }
    v1679 = (v1679 + 7) & 0xFFFFFFF8;
    v187 = v186;
    v188 = GetProcessHeap();
    v189 = (char *)HeapAlloc(v188, 8u, v187);
    v190 = v189;
    if ( v189 )
    {
      *(_DWORD *)v189 = Src[0];
      v1750 = v189;
      v185 = RtlULongLongAdd((unsigned __int64)v189, 4LL, (__int64 *)&v1750);
      if ( v185 >= 0 )
      {
        v192 = v1750;
        *(_DWORD *)v1750 = HIDWORD(Src[0]);
        v185 = RtlULongLongAdd((unsigned __int64)v192, v191, (__int64 *)&v1750);
        if ( v185 >= 0 )
        {
          *(_QWORD *)&v190[v1679 - 8] = v1584;
          memcpy_0(v1750, Src[1], HIDWORD(Src[0]));
          v184 = v1679;
          v1481 = v1679;
          v1607 = v190;
LABEL_244:
          v1440 = v101;
          v1406 = (size_t)v104;
          goto LABEL_245;
        }
      }
      v193 = GetProcessHeap();
      HeapFree(v193, 0, v190);
    }
    else
    {
      v185 = -1073741801;
    }
    v184 = 0;
    goto LABEL_244;
  }
LABEL_245:
  v99 = v185 | 0x10000000;
  v1643 = v99;
  if ( v99 < 0 )
    goto LABEL_310;
  v194 = v1607;
  if ( !v1607 )
  {
    v99 = -805306355;
    goto LABEL_115;
  }
  v195 = v184;
  if ( v184 )
  {
    v1635 = v184 + 8LL;
    v196 = (char *)MemoryAlloc(v1635);
    v1600 = v196;
    v197 = 0LL;
    if ( v196 )
    {
      v198 = 0;
      v1404 = 0;
      if ( v195 )
      {
        do
          v198 ^= v1607[v197++];
        while ( v197 < v195 );
        v1404 = v198;
      }
      v1837 = 0xC81ECB17B1B54A58uLL;
      v199 = -1;
      v1511 = v196;
      v1643 = 0;
      v200 = v1607;
      v1571 = 0;
      v201 = 0;
      v202 = v195 & 7;
      if ( v202 )
      {
        v1572 = 0;
        v203 = 0;
        v204 = 56;
        do
        {
          v205 = *v200;
          if ( v201 >= 4 )
          {
            v206 = v1572;
            v203 |= v205 << v204;
          }
          else
          {
            v206 = (v205 << (v204 - 32)) | v1572;
            v1572 = v206;
          }
          ++v200;
          ++v201;
          v204 -= 8;
        }
        while ( (int)v201 < (int)v202 );
        v1643 = v203;
        v207 = v203;
        v208 = v203 ^ 0x42F6B18D;
        v209 = v203 ^ 0x42F6B18D;
        v201 = v206 ^ 0xB17A307A;
        v210 = v1639;
        v211 = 0;
        v212 = v206 ^ 0xB17A307A;
        v1585 = 0;
        do
        {
          v1571 = v206;
          if ( v211 >= 4 )
          {
            v209 = (v209 << 8) | HIBYTE(v209);
            v213 = v209;
          }
          else
          {
            v212 = (v212 << 8) | HIBYTE(v212);
            v213 = v212;
          }
          *v1511 = v213;
          v206 = v1571;
          v211 = v1585 + 1;
          lpMem = ++v1511;
          v97 = v1558;
          v1585 = v211;
        }
        while ( v211 < (int)v202 );
        v196 = lpMem;
        v1639 = v210;
        v1643 = v207;
        v1406 = (size_t)v104;
        v1440 = v101;
        if ( v202 <= 4 )
        {
          v199 = 0;
          if ( v202 < 4 )
            v201 = v201 >> (8 * (4 - v202)) << (8 * (4 - v202));
        }
        else
        {
          v199 = v208 >> (8 * (8 - v202)) << (8 * (8 - v202));
        }
      }
      if ( (unsigned __int64)v1481 >> 3 )
      {
        v214 = HIDWORD(v1837);
        v215 = v200 + 2;
        v216 = v1571;
        v217 = v1643;
        v218 = (unsigned __int64)v1481 >> 3;
        v1512 = (size_t)(v196 + 7);
        v219 = WORD2(v1837);
        do
        {
          v220 = v215[1] | ((*v215 | ((*(v215 - 1) | (*(v215 - 2) << 8)) << 8)) << 8);
          v221 = v215[5] | ((v215[4] | ((v215[3] | (v215[2] << 8)) << 8)) << 8);
          v222 = v221 ^ v199;
          v223 = v220 ^ v214 ^ (v222 - 19032) ^ v201;
          v224 = (__ROR4__(v223, 7) + WORD1(v1837) * __ROR4__(v223 ^ v214, 15)) ^ v222;
          v225 = (v219 * __ROR4__(v224 - 1313519016, 9) - __ROR4__(v224, 10)) ^ v223;
          v226 = (__ROR4__(v225, 27) + HIWORD(v1837) * __ROR4__(v225 ^ v219, 28)) ^ v224;
          v227 = (v214 - (v226 ^ 0xB1B54A58)) ^ v225;
          v228 = (WORD1(v1837) * (v227 - 19032) - (v227 >> 6)) ^ v226;
          v229 = (19032 * (v219 ^ __ROR4__(v228, 15))) ^ v227;
          v230 = (v219 * (HIWORD(v1837) + __ROR4__(~v229, 3))) ^ v228;
          v231 = (v230 - v214 - 19032) ^ v229;
          v232 = (WORD1(v1837) * (v231 ^ HIWORD(v1837))) ^ __ROR4__(v231, 10) ^ v230;
          v233 = __ROR4__(v232, 3) ^ (v219 * __ROR4__(v232 ^ 0x4A58, 26)) ^ v231;
          v234 = (19032 * (__ROR4__(v233, 15) - HIWORD(v1837))) ^ v232;
          v235 = (v234 >> 15) ^ (19032 * ((8 * (v234 - v219)) | ((v234 - v219) >> 29))) ^ (v234 >> 1) ^ (19032 * (v234 ^ HIWORD(v1837))) ^ v233;
          v236 = (WORD1(v1837) * (v235 - v219) - (v235 >> 13)) ^ v234;
          v237 = __ROR4__(v236, 11) ^ (v219 * __ROR4__(-1313519016 - v236, 9)) ^ v235;
          v238 = (v237 - HIWORD(v1837) + 1313519016) ^ v236;
          v239 = (19032 * (v238 ^ WORD1(v1837)) - __ROR4__(v238, 7)) ^ v237;
          v240 = (WORD1(v1837) * __ROR4__(v239 ^ HIWORD(v1837), 28) - __ROR4__(v239, 16)) ^ v238;
          v241 = (__ROR4__(v240, 4) + v219 * __ROR4__(-1313519016 - v240, 10)) ^ v239;
          v242 = __ROR4__(v241, 9) ^ (HIWORD(v1837) * __ROR4__(v241 + 1313519016, 4)) ^ v240;
          v243 = (19032 * __ROR4__(v242 ^ v214, 24) - __ROR4__(v242, 30)) ^ v241;
          v244 = (WORD1(v1837) * __ROR4__(v214 - v243, 11) - __ROR4__(v243, 12)) ^ v242;
          v245 = (v244 >> 8) ^ (v219 * (v244 ^ WORD1(v1837))) ^ v243;
          v246 = v245 ^ v214 ^ v244 ^ 0xB1B54A58;
          v201 = v216 ^ v245;
          v247 = (_BYTE *)v1512;
          v199 = v217 ^ v246;
          v1512 += 8LL;
          *(v247 - 4) = v201;
          *v247 = v199;
          *(v247 - 5) = BYTE1(v201);
          v217 = v221;
          *(v247 - 1) = BYTE1(v199);
          v215 += 8;
          *(v247 - 6) = (unsigned __int16)(v201 >> 8) >> 8;
          *(v247 - 2) = (unsigned __int16)(v199 >> 8) >> 8;
          *(v247 - 7) = __ROR4__((((v201 >> 8) | (v201 << 24)) >> 8) | (((v201 >> 8) | (v201 << 24)) << 24), 8);
          v214 = HIDWORD(v1837);
          *(v247 - 3) = __ROR4__((((v199 >> 8) | (v199 << 24)) >> 8) | (((v199 >> 8) | (v199 << 24)) << 24), 8);
          v216 = v220;
          --v218;
        }
        while ( v218 );
        v101 = (WCHAR *)v1440;
        v104 = (void *)v1406;
        v97 = v1558;
        v194 = v1607;
      }
      *(_QWORD *)&v1600[v1481] = v1404;
      v248 = GetProcessHeap();
      v249 = (unsigned int *)HeapAlloc(v248, 8u, 0x30uLL);
      if ( v249 )
      {
        *v249 = v1635;
        v250 = GetProcessHeap();
        v251 = HeapAlloc(v250, 8u, (unsigned int)v1635);
        if ( v251 )
        {
          *((_QWORD *)v249 + 1) = v251;
          memcpy_0(v251, v1600, (unsigned int)v1635);
          v1586 = v1639;
          v1607 = v194;
          lpMema = v194;
          v249[4] = 160;
          v252 = GetProcessHeap();
          v253 = HeapAlloc(v252, 8u, 0xA0uLL);
          if ( v253 )
          {
            *((_QWORD *)v249 + 3) = v253;
            v254 = (_OWORD *)*((_QWORD *)v249 + 3);
            v1639 = v1586;
            v1607 = v194;
            *v254 = xmmword_1808C7470[0];
            v254[1] = xmmword_1808C7470[1];
            v254[2] = xmmword_1808C7470[2];
            v254[3] = xmmword_1808C7470[3];
            v254[4] = xmmword_1808C7470[4];
            v254[5] = xmmword_1808C7470[5];
            v254[6] = xmmword_1808C7470[6];
            v254[7] = xmmword_1808C7470[7];
            v254[8] = xmmword_1808C7470[8];
            v254[9] = xmmword_1808C7470[9];
            v249[8] = 8;
            v255 = GetProcessHeap();
            v256 = HeapAlloc(v255, 8u, 8uLL);
            v257 = 0;
            if ( v256 )
            {
              *((_QWORD *)v249 + 5) = v256;
              *v256 = qword_1808C7460;
LABEL_287:
              v1628 = (const void **)v249;
              v262 = GetProcessHeap();
              HeapFree(v262, 0, v1600);
              v99 = v257 | 0x10000000;
              v1643 = v99;
              v1635 = (SIZE_T)v249;
              if ( v99 >= 0 )
              {
                v263 = *v249;
                v1680 = 0;
                v1681 = 4;
                v265 = RtlUIntAdd(4u, v263, (int *)&v1681);
                if ( v265 >= 0 )
                {
                  v265 = RtlUIntAdd(v1681, v264, (int *)&v1681);
                  if ( v265 >= 0 )
                  {
                    v265 = RtlUIntAdd(v1681, v249[4], (int *)&v1681);
                    if ( v265 >= 0 )
                    {
                      v265 = RtlUIntAdd(v1681, 4, (int *)&v1681);
                      if ( v265 >= 0 )
                      {
                        v265 = RtlUIntAdd(v1681, v249[8], (int *)&v1681);
                        if ( v265 >= 0 )
                        {
                          v1680 = v1681;
                          v266 = v1681;
                          v267 = GetProcessHeap();
                          v268 = (WCHAR *)HeapAlloc(v267, 8u, v266);
                          v269 = 0LL;
                          lpModuleName = v268;
                          if ( !v268 )
                          {
                            v99 = -805306345;
LABEL_356:
                            v1643 = v99;
                            goto LABEL_311;
                          }
                          v1713 = v268;
                          *(_DWORD *)v268 = *(_DWORD *)v1628;
                          v270 = RtlULongLongAdd((unsigned __int64)v268, 4LL, (__int64 *)&v1713);
                          v1587 = v271;
                          v265 = v270;
                          if ( v270 < 0 )
                            goto LABEL_303;
                          memcpy_0(v1713, v1628[1], *(unsigned int *)v1628);
                          v265 = RtlULongLongAdd((unsigned __int64)v1713, *(unsigned int *)v1628, (__int64 *)&v1713);
                          v271 = lpModuleName;
                          v1587 = lpModuleName;
                          if ( v265 < 0 )
                            goto LABEL_303;
                          v272 = v1713;
                          *(_DWORD *)v1713 = *((_DWORD *)v1628 + 4);
                          v273 = RtlULongLongAdd((unsigned __int64)v272, 4LL, (__int64 *)&v1713);
                          v271 = v274;
                          v265 = v273;
                          v1587 = v274;
                          if ( v273 < 0 )
                            goto LABEL_303;
                          memcpy_0(v1713, v1628[3], *((unsigned int *)v1628 + 4));
                          v265 = RtlULongLongAdd(
                                   (unsigned __int64)v1713,
                                   *((unsigned int *)v1628 + 4),
                                   (__int64 *)&v1713);
                          v271 = lpModuleName;
                          v1587 = lpModuleName;
                          if ( v265 < 0 )
                            goto LABEL_303;
                          v275 = v1713;
                          *(_DWORD *)v1713 = *((_DWORD *)v1628 + 8);
                          v276 = RtlULongLongAdd((unsigned __int64)v275, 4LL, (__int64 *)&v1713);
                          v271 = v277;
                          v265 = v276;
                          v1587 = v277;
                          if ( v276 < 0
                            || (memcpy_0(v1713, v1628[5], *((unsigned int *)v1628 + 8)),
                                v265 = RtlULongLongAdd(
                                         (unsigned __int64)v1713,
                                         *((unsigned int *)v1628 + 8),
                                         (__int64 *)&v1713),
                                v1587 = lpModuleName,
                                v271 = lpModuleName,
                                v265 < 0) )
                          {
LABEL_303:
                            if ( v271 )
                            {
                              v278 = GetProcessHeap();
                              HeapFree(v278, 0, v1587);
                            }
                          }
                          else
                          {
                            v1638 = lpModuleName;
                            Size = v1680;
                          }
                        }
                      }
                    }
                  }
                }
                v99 = v265 | 0x10000000;
                v1643 = v99;
                if ( v99 >= 0 )
                {
                  v1682 = 8;
                  v279 = RtlUIntAdd(8u, v1639, (int *)&v1682);
                  v99 = v279 | 0x10000000;
                  v1643 = v279 | 0x10000000;
                  if ( v279 < 0 )
                  {
                    v269 = 0LL;
                    goto LABEL_311;
                  }
                  v1683 = 0;
                  v282 = (v1682 + 7) & 0xFFFFFFF8;
                  if ( v282 < v1682 )
                  {
                    v99 = -1073741675;
LABEL_309:
                    v1643 = v99;
                    goto LABEL_310;
                  }
                  v307 = v1635;
                  v1628 = (const void **)v1635;
                  v1683 = (v1682 + 7) & 0xFFFFFFF8;
                  v1638 = v280;
                  v1607 = v281;
                  v1643 = RtlUIntAdd(v282, 8, (int *)&v1683);
                  v99 = v1643;
                  if ( v1643 < 0 )
                  {
                    v283 = (SIZE_T)v309;
                    v269 = 0LL;
                    goto LABEL_312;
                  }
                  v310 = v309;
                  v1607 = v309;
                  v269 = 0LL;
                  v1628 = (const void **)v307;
                  v1638 = v308;
                  if ( !Src[1] )
                  {
LABEL_359:
                    v99 = -1073741811;
                    goto LABEL_356;
                  }
                  v1628 = (const void **)v307;
                  v1638 = v308;
                  if ( LODWORD(Src[0]) <= 1 )
                  {
                    v283 = (SIZE_T)v1607;
                    v99 = -1073741811;
                    v1643 = -1073741811;
                    goto LABEL_312;
                  }
                  v311 = (unsigned int *)Src[1];
                  v1725 = (unsigned int *)Src[1];
                  v1441 = v101;
                  v1407 = (size_t)v104;
                  v1607 = v310;
                  do
                  {
                    v312 = *v311;
                    v1643 = RtlULongLongAdd((unsigned __int64)v311, 4LL, (__int64 *)&v1725);
                    v99 = v1643;
                    if ( v1643 < 0 )
                      goto LABEL_310;
                    v1643 = RtlULongLongAdd((unsigned __int64)v1725, v312, (__int64 *)&v1725);
                    v99 = v1643;
                    if ( v1643 < 0 )
                      goto LABEL_310;
                    v311 = v1725;
                  }
                  while ( v313 == -1 );
                  v1588 = *v1725;
                  v314 = RtlULongLongAdd((unsigned __int64)v1725, 4LL, (__int64 *)&v1725);
                  v269 = 0LL;
                  v1643 = v314;
                  v99 = v314;
                  if ( v314 < 0 )
                    goto LABEL_311;
                  v1638 = v315;
                  if ( !Src[1] )
                    goto LABEL_359;
                  v1638 = v315;
                  if ( LODWORD(Src[0]) <= 2 )
                    goto LABEL_359;
                  v316 = Src[1];
                  v317 = 0;
                  v1726 = Src[1];
                  do
                  {
                    v1643 = RtlULongLongAdd((unsigned __int64)v316, 4LL, (__int64 *)&v1726);
                    v99 = v1643;
                    if ( v1643 < 0 )
                      goto LABEL_310;
                    v319 = RtlULongLongAdd((unsigned __int64)v1726, v318, (__int64 *)&v1726);
                    v269 = 0LL;
                    v1643 = v319;
                    v99 = v319;
                    if ( v319 < 0 )
                      goto LABEL_311;
                    v316 = v1726;
                    ++v317;
                  }
                  while ( v317 < 2 );
                  v320 = *v1726;
                  v1643 = RtlULongLongAdd((unsigned __int64)v1726, 4LL, (__int64 *)&v1726);
                  v99 = v1643;
                  if ( v1643 < 0 )
                    goto LABEL_311;
                  v1638 = v321;
                  v1684 = 4;
                  v1643 = RtlUIntAdd((int)v269 + 4, v1683, (int *)&v1684);
                  v99 = v1643;
                  if ( v1643 < 0 )
                    goto LABEL_380;
                  v1643 = RtlUIntAdd(v1684, v322, (int *)&v1684);
                  v99 = v1643;
                  if ( v1643 < 0
                    || (v1643 = RtlUIntAdd(v1684, v1588, (int *)&v1684), v99 = v1643, v1643 < 0)
                    || (v1643 = RtlUIntAdd(v1684, (int)v269 + 4, (int *)&v1684), v99 = v1643, v1643 < 0)
                    || (v1643 = RtlUIntAdd(v1684, v320, (int *)&v1684), v99 = v1643, v1643 < 0) )
                  {
LABEL_380:
                    if ( v99 < 0 )
                      goto LABEL_311;
                  }
                  else
                  {
                    v324 = v1684;
                  }
                  v1638 = v323;
                  if ( v324 > 0x400000 )
                  {
                    v99 = -2147418113;
                    goto LABEL_356;
                  }
                  v1539 = v324;
                  v325 = v324;
                  v326 = GetProcessHeap();
                  v327 = HeapAlloc(v326, 8u, v325);
                  v328 = 0LL;
                  v269 = 0LL;
                  if ( v327 )
                    v328 = v327;
                  v1563 = v328;
                  v99 = v327 != 0LL ? 0x10000000 : -805306345;
                  v1643 = v99;
                  if ( !v327 )
                    goto LABEL_311;
                  phModule = 0LL;
                  v1792 = 0LL;
                  v1793 = 0LL;
                  if ( !v1638 || !v328 )
                  {
                    v99 = -2147024809;
                    goto LABEL_356;
                  }
                  LODWORD(v1793) = Size;
                  *(_QWORD *)((char *)&v1793 + 4) = v1539;
                  *(_QWORD *)&v1792 = v1638;
                  *((_QWORD *)&v1792 + 1) = v328;
                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                    && (v330 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                  {
                    v331 = ((__int64 (__fastcall *)(__int64, __int128 *))v330)(134LL, &v1792);
                    v99 = v331 | 0x10000000;
                    v1643 = v331 | 0x10000000;
                    if ( v331 >= 0 )
                    {
                      v332 = DWORD1(v1793);
                      v269 = 0LL;
                      goto LABEL_405;
                    }
                    v269 = 0LL;
                  }
                  else
                  {
                    v329 = GetLastError();
                    v269 = 0LL;
                    v1643 = v329;
                    v99 = v329;
                    if ( v329 > 0 )
                    {
                      v99 = (unsigned __int16)v329 | 0x80070000;
                      v1643 = v99;
                    }
                    if ( v99 >= 0 )
                    {
                      v99 = -2147467259;
                      v1643 = -2147467259;
                    }
                  }
                  if ( v99 == -805306333 )
                  {
                    v99 = -2147024774;
                    goto LABEL_356;
                  }
                  if ( v99 < 0 )
                    goto LABEL_311;
                  v332 = v1539;
LABEL_405:
                  lpMeml = 0LL;
                  v1685 = 0;
                  v1728 = v328;
                  if ( v332 < 4 )
                  {
LABEL_406:
                    v99 = -805306306;
                    goto LABEL_356;
                  }
                  v1589 = *v328;
                  v333 = RtlULongLongAdd((unsigned __int64)v328, 4LL, (__int64 *)&v1728);
                  if ( v333 >= 0 )
                  {
                    v333 = RtlUIntAdd(0, 4, (int *)&v1685);
                    if ( v333 < 0 )
                    {
                      v362 = v334;
                      goto LABEL_463;
                    }
                    if ( v336 - v1685 < v335 )
                      goto LABEL_406;
                    v1513 = v1728;
                    v333 = RtlULongLongAdd((unsigned __int64)v1728, v335, (__int64 *)&v1728);
                    if ( v333 >= 0 )
                    {
                      v333 = RtlUIntAdd(v1685, v337, (int *)&v1685);
                      if ( v333 >= 0 )
                      {
                        if ( v338 - v1685 < 4 )
                          goto LABEL_406;
                        v339 = *(_DWORD *)v1728;
                        v1573 = *(_DWORD *)v1728;
                        v333 = RtlULongLongAdd((unsigned __int64)v1728, 4LL, (__int64 *)&v1728);
                        if ( v333 >= 0 )
                        {
                          v333 = RtlUIntAdd(v1685, 4, (int *)&v1685);
                          if ( v333 >= 0 )
                          {
                            if ( v340 - v1685 < v339 )
                              goto LABEL_406;
                            v1601 = v1728;
                            v333 = RtlULongLongAdd((unsigned __int64)v1728, v339, (__int64 *)&v1728);
                            if ( v333 >= 0 )
                            {
                              v333 = RtlUIntAdd(v1685, v339, (int *)&v1685);
                              if ( v333 >= 0 )
                              {
                                if ( v341 - v1685 < 4 )
                                  goto LABEL_406;
                                v1482 = *(_DWORD *)v1728;
                                v333 = RtlULongLongAdd((unsigned __int64)v1728, 4LL, (__int64 *)&v1728);
                                if ( v333 >= 0 )
                                {
                                  v333 = RtlUIntAdd(v1685, 4, (int *)&v1685);
                                  if ( v333 >= 0 )
                                  {
                                    if ( v343 - v1685 < v342 )
                                    {
LABEL_422:
                                      v99 = -805306306;
                                      goto LABEL_309;
                                    }
                                    v333 = RtlUIntAdd(v1685, v342, (int *)&v1685);
                                    if ( v333 >= 0 )
                                    {
                                      if ( v346 != v1685 || v344 + v345 + v339 + 12LL != v346 )
                                        goto LABEL_422;
                                      v347 = GetProcessHeap();
                                      v348 = (SIZE_T)HeapAlloc(v347, 8u, 0x30uLL);
                                      v1635 = v348;
                                      if ( !v348 )
                                      {
                                        v351 = v1628;
                                        v333 = -1073741801;
LABEL_449:
                                        v361 = 0LL;
LABEL_450:
                                        if ( v333 < 0 )
                                        {
                                          v1640 = 0LL;
                                          v362 = 0LL;
                                          if ( v361 )
                                          {
                                            v1517 = (void *)*((_QWORD *)v361 + 1);
                                            if ( v1517 )
                                            {
                                              v363 = GetProcessHeap();
                                              HeapFree(v363, 0, v1517);
                                              v361 = lpMeml;
                                              *((_QWORD *)lpMeml + 1) = 0LL;
                                            }
                                            v1518 = (void *)*((_QWORD *)v361 + 3);
                                            if ( v1518 )
                                            {
                                              v364 = GetProcessHeap();
                                              HeapFree(v364, 0, v1518);
                                              v361 = lpMeml;
                                              *((_QWORD *)lpMeml + 3) = 0LL;
                                            }
                                            v1519 = (void *)*((_QWORD *)v361 + 5);
                                            if ( v1519 )
                                            {
                                              v365 = GetProcessHeap();
                                              HeapFree(v365, 0, v1519);
                                              *((_QWORD *)lpMeml + 5) = 0LL;
                                            }
                                            v366 = GetProcessHeap();
                                            HeapFree(v366, 0, lpMeml);
                                            v362 = 0LL;
                                            v1640 = 0LL;
                                          }
                                        }
                                        else
                                        {
                                          v362 = v361;
                                          v1640 = v361;
                                        }
LABEL_464:
                                        v99 = v333 | 0x10000000;
                                        v1643 = v99;
                                        if ( v99 < 0 )
                                          goto LABEL_310;
                                        if ( !v362
                                          || (lpMemm = (unsigned __int8 *)*((_QWORD *)v362 + 1)) == 0LL
                                          || !*v362 )
                                        {
                                          v99 = -805306355;
                                          goto LABEL_309;
                                        }
                                        v367 = *v362 - 8LL;
                                        v1520 = v367;
                                        v368 = MemoryAlloc(v367);
                                        v269 = 0LL;
                                        v1602 = v368;
                                        v369 = v368;
                                        if ( !v368 )
                                          goto LABEL_495;
                                        v370 = lpMemm;
                                        v371 = 0;
                                        v372 = v1640;
                                        v1839 = 0x7F1137FAB69605ELL;
                                        v1635 = (SIZE_T)lpMemm;
                                        lpModuleNamea = (WCHAR *)v368;
                                        v373 = v367 & 7;
                                        if ( (v367 & 7) != 0 )
                                        {
                                          v1574 = 0;
                                          v1483 = 0;
                                          v374 = v1607;
                                          v375 = 56;
                                          v376 = 0;
                                          for ( Sizea = 56; ; v375 = Sizea )
                                          {
                                            v377 = *v370;
                                            if ( v1483 >= 4 )
                                            {
                                              v379 = v377 << v375;
                                              v378 = v1574;
                                              v376 |= v379;
                                            }
                                            else
                                            {
                                              v378 = (v377 << (v375 - 32)) | v1574;
                                              v1574 = v378;
                                            }
                                            ++v370;
                                            Sizea -= 8;
                                            if ( (int)++v1483 >= (int)v373 )
                                              break;
                                          }
                                          v1635 = (SIZE_T)v370;
                                          v380 = v378 ^ 0x92F65A5;
                                          v381 = (SIZE_T)v370;
                                          v382 = v376 ^ 0x699A899C;
                                          v383 = v376;
                                          v1590 = v376 ^ 0x699A899C;
                                          v1484 = 0;
                                          v384 = v378 ^ 0x92F65A5;
                                          do
                                          {
                                            v1607 = v374;
                                            if ( v1484 >= 4 )
                                            {
                                              v385 = (v1590 << 8) | HIBYTE(v1590);
                                              v1590 = v385;
                                            }
                                            else
                                            {
                                              v384 = (v384 << 8) | HIBYTE(v384);
                                              LOBYTE(v385) = v384;
                                            }
                                            *(_BYTE *)lpModuleNamea = v385;
                                            v386 = (WCHAR *)((char *)lpModuleNamea + 1);
                                            lpModuleNamea = (WCHAR *)((char *)lpModuleNamea + 1);
                                            v371 = 0;
                                            ++v1484;
                                          }
                                          while ( v1484 < (int)v373 );
                                          v369 = v1602;
                                          v1591 = v383;
                                          v97 = v1558;
                                          v1635 = v381;
                                          lpModuleNamea = v386;
                                          v1640 = v372;
                                          v1628 = v351;
                                          v1407 = (size_t)v104;
                                          v1441 = v101;
                                          if ( v373 <= 4 )
                                          {
                                            v1485 = 0;
                                            if ( v373 < 4 )
                                              v380 = v380 >> (8 * (4 - v373)) << (8 * (4 - v373));
                                          }
                                          else
                                          {
                                            v1485 = v382 >> (8 * (8 - v373)) << (8 * (8 - v373));
                                          }
                                        }
                                        else
                                        {
                                          v1591 = -1;
                                          v380 = 0;
                                          v1574 = 0;
                                          v1485 = 0;
                                        }
                                        v1642 = (LPVOID)(v1520 >> 3);
                                        if ( v1520 >> 3 )
                                        {
                                          v387 = HIDWORD(v1839);
                                          v388 = v1485;
                                          v389 = v1574;
                                          v390 = HIDWORD(v1839) ^ 0xAB69605E;
                                          v391 = v1591;
                                          v392 = (char *)v1642;
                                          lpModuleNameb = (WCHAR *)((char *)lpModuleNamea + 7);
                                          v393 = WORD2(v1839);
                                          v394 = (unsigned __int8 *)(v1635 + 2);
                                          Sizeb = WORD2(v1839);
                                          v1643 = 24670;
                                          do
                                          {
                                            v395 = v394[1] | ((*v394 | ((*(v394 - 1) | (*(v394 - 2) << 8)) << 8)) << 8);
                                            v396 = v395 ^ v380;
                                            v397 = v394[4] | ((v394[3] | (v394[2] << 8)) << 8);
                                            v398 = v394[5];
                                            v1635 = (SIZE_T)(v394 + 8);
                                            v399 = v398 | (v397 << 8);
                                            v400 = v396 ^ v399 ^ v388 ^ v390;
                                            v401 = (__ROR4__(v400, 22) + v393 * __ROR4__(v400 + 1419157410, 27)) ^ v396;
                                            v402 = (WORD1(v1839) * __ROR4__(v387 + v401, 9) - __ROR4__(v401, 30)) ^ v400;
                                            v403 = (v1643 * (v402 - v393) - (v402 >> 13)) ^ v401;
                                            v404 = (HIWORD(v1839) * __ROR4__(WORD1(v1839) ^ v403, 26)
                                                  - __ROR4__(v403, 30)) ^ v402;
                                            v405 = (v387 - (v404 ^ 0xAB69605E)) ^ v403;
                                            v406 = (WORD1(v1839) * (v393 ^ v405)) ^ __ROR4__(v405, 6) ^ v404;
                                            v407 = (__ROR4__(v406, 30) + v1643 * __ROR4__(v387 + v406, 15)) ^ v405;
                                            v408 = (HIWORD(v1839) * __ROR4__(v407 + 1419157410, 14) - __ROR4__(v407, 24)) ^ v406;
                                            v409 = __ROR4__(v408, 10) ^ (v393 * __ROR4__(v408 ^ 0xAB69605E, 12)) ^ v407;
                                            v410 = (v409 >> 10) ^ (WORD1(v1839) * (HIWORD(v1839) ^ v409)) ^ v408;
                                            v411 = (HIWORD(v1839) * (v1643 + __ROR4__(~v410, 5))) ^ v409;
                                            v412 = v410 ^ (v411 - HIWORD(v1839)) ^ 0xAB69605E;
                                            v413 = ((v412 >> 2) + v393 * __ROR4__(HIWORD(v1839) ^ v412, 30)) ^ v411;
                                            v414 = (__ROR4__(v413, 25) + WORD1(v1839) * __ROR4__(v413 - v387, 6)) ^ v412;
                                            v415 = (v1643 * (v393 ^ v414) + __ROR4__(v414, 9)) ^ v413;
                                            v416 = (__ROR4__(v415, 25)
                                                  + HIWORD(v1839) * __ROR4__(WORD1(v1839) ^ v415, 27)) ^ v414;
                                            v417 = v416 ^ v390 ^ v415;
                                            v418 = (v393 * (__ROR4__(v417, 3) - WORD1(v1839))) ^ v416;
                                            v419 = (v1643 * __ROR4__(v418 - v387, 1) - __ROR4__(v418, 6)) ^ v417;
                                            v420 = (__ROR4__(v419, 18) + HIWORD(v1839) * __ROR4__(v419 - 1419157410, 29)) ^ v418;
                                            v421 = (v393 * __ROR4__(v420 - 1419157410, 17) - __ROR4__(v420, 14)) ^ v419;
                                            v422 = (v421 >> 3) ^ (WORD1(v1839) * (v421 ^ v1643)) ^ v420;
                                            v423 = v422 ^ v387;
                                            v424 = __ROR4__(v422, 30);
                                            v388 = v391 ^ v422;
                                            v425 = (WCHAR *)lpModuleNameb;
                                            lpModuleNameb += 4;
                                            v380 = v389 ^ v424 ^ (v1643 * __ROR4__(v423, 28)) ^ v421;
                                            v389 = v395;
                                            *((_BYTE *)v425 - 4) = v380;
                                            *(_BYTE *)v425 = v388;
                                            *((_BYTE *)v425 - 5) = BYTE1(v380);
                                            *((_BYTE *)v425 - 1) = BYTE1(v388);
                                            v394 = (unsigned __int8 *)v1635;
                                            *((_BYTE *)v425 - 6) = (unsigned __int16)(v380 >> 8) >> 8;
                                            *((_BYTE *)v425 - 2) = (unsigned __int16)(v388 >> 8) >> 8;
                                            *((_BYTE *)v425 - 7) = __ROR4__(
                                                                     (((v380 >> 8) | (v380 << 24)) >> 8) | (((v380 >> 8) | (v380 << 24)) << 24),
                                                                     8);
                                            v393 = Sizeb;
                                            *((_BYTE *)v425 - 3) = __ROR4__(
                                                                     (((v388 >> 8) | (v388 << 24)) >> 8) | (((v388 >> 8) | (v388 << 24)) << 24),
                                                                     8);
                                            v391 = v399;
                                            --v392;
                                          }
                                          while ( v392 );
                                          v371 = 0;
                                          v101 = (WCHAR *)v1441;
                                          v104 = (void *)v1407;
                                          v97 = v1558;
                                          v372 = v1640;
                                          v369 = v1602;
                                        }
                                        for ( m = 0LL; m < v1520; ++m )
                                          v371 ^= *((_BYTE *)v369 + m);
                                        v1603 = v1638;
                                        v1635 = (SIZE_T)v1607;
                                        v1442 = (LPCWSTR)v1628;
                                        v1640 = v372;
                                        if ( v371 != *(_QWORD *)&lpMemm[v1520] )
                                        {
                                          MemoryFree(v369);
                                          v269 = 0LL;
LABEL_495:
                                          v1642 = 0LL;
                                          v99 = -805306367;
                                          goto LABEL_356;
                                        }
                                        v1730 = v369;
                                        v1686 = 0;
                                        if ( (unsigned int)v1520 < 4 )
                                        {
                                          v283 = v1635;
                                          v427 = -1073741762;
                                          v1642 = v369;
                                          v1640 = v372;
                                          v1607 = (_BYTE *)v1635;
LABEL_498:
                                          v269 = 0LL;
LABEL_499:
                                          v99 = v427 | 0x10000000;
                                          v1643 = v99;
LABEL_312:
                                          if ( !v283 )
                                            goto LABEL_314;
                                          goto LABEL_313;
                                        }
                                        v1592 = *v369;
                                        v427 = RtlULongLongAdd((unsigned __int64)v369, 4LL, (__int64 *)&v1730);
                                        v283 = v1635;
                                        v1638 = v1603;
                                        v1642 = v428;
                                        v1640 = v429;
                                        v1607 = (_BYTE *)v1635;
                                        if ( v427 < 0 )
                                          goto LABEL_498;
                                        v430 = RtlUIntAdd(0, 4, (int *)&v1686);
                                        v433 = v1635;
                                        v427 = v430;
                                        v434 = v1603;
                                        v1642 = v431;
                                        v283 = v1635;
                                        v1640 = v432;
                                        v1607 = (_BYTE *)v1635;
                                        v1638 = v1603;
                                        if ( v427 < 0 )
                                          goto LABEL_498;
                                        if ( (unsigned int)v1520 - v1686 < 4 )
                                        {
LABEL_503:
                                          v427 = -1073741762;
                                          v1640 = v432;
                                          v283 = v433;
                                          v1642 = v431;
                                          v1607 = (_BYTE *)v433;
                                          v1638 = v434;
                                          goto LABEL_498;
                                        }
                                        v1575 = *(_DWORD *)v1730;
                                        v427 = RtlULongLongAdd((unsigned __int64)v1730, 4LL, (__int64 *)&v1730);
                                        v283 = v1635;
                                        v1607 = (_BYTE *)v1635;
                                        v1642 = v435;
                                        v1640 = v436;
                                        v1638 = v1603;
                                        if ( v427 < 0 )
                                          goto LABEL_498;
                                        v437 = RtlUIntAdd(v1686, 4, (int *)&v1686);
                                        v433 = v1635;
                                        v427 = v437;
                                        v434 = v1603;
                                        v1642 = v431;
                                        v283 = v1635;
                                        v1640 = v432;
                                        v1607 = (_BYTE *)v1635;
                                        v1638 = v1603;
                                        if ( v427 < 0 )
                                          goto LABEL_498;
                                        if ( (unsigned int)v1520 - v1686 < v1575 )
                                        {
                                          v101 = v438;
                                          goto LABEL_503;
                                        }
                                        v427 = RtlUIntAdd(v1686, v1575, (int *)&v1686);
                                        v283 = v1635;
                                        v101 = v441;
                                        v1642 = v439;
                                        v1640 = v440;
                                        v1607 = (_BYTE *)v1635;
                                        v1638 = v1603;
                                        if ( v427 < 0 )
                                          goto LABEL_498;
                                        if ( &v439[(unsigned int)v1520] < (char *)v1730 + v1575
                                          || (unsigned __int64)(unsigned int)v1520 + &v439[-v1575] - (_BYTE *)v1730 >= 8 )
                                        {
                                          v427 = -1073741762;
                                          v283 = v1635;
                                          v1607 = (_BYTE *)v1635;
                                          v1638 = v1603;
                                          v1642 = v439;
                                          v1640 = v440;
                                          goto LABEL_498;
                                        }
                                        v427 = 0;
                                        v1607 = (_BYTE *)v1635;
                                        v1638 = v1603;
                                        v1731 = 0LL;
                                        v1732 = 0LL;
                                        v1733 = 0LL;
                                        v1486 = 0;
                                        v1642 = v439;
                                        v1640 = v440;
                                        if ( v1730 )
                                        {
                                          v1521 = v1730;
                                          v427 = RtlULongLongAdd((unsigned __int64)v1730, v1575, (__int64 *)&v1731);
                                          v283 = v1635;
                                          v1607 = (_BYTE *)v1635;
                                          v1642 = v442;
                                          v1640 = v443;
                                          v1638 = v1603;
                                          if ( v427 < 0 )
                                            goto LABEL_536;
                                          v1638 = v1603;
                                          v444 = (unsigned __int64)v1521;
                                          v1642 = v442;
                                          v1640 = v443;
                                          v1607 = (_BYTE *)v1635;
                                          if ( (unsigned __int64)v1521 < v1731 )
                                          {
                                            v1642 = v442;
                                            v1638 = v1603;
                                            v445 = (unsigned __int64)v1521;
                                            v1640 = v443;
                                            v1607 = (_BYTE *)v1635;
                                            while ( 1 )
                                            {
                                              v1522 = v283;
                                              Sizec = v1642;
                                              v427 = RtlULongLongAdd(v445, 4LL, (__int64 *)&v1732);
                                              if ( v427 < 0 )
                                                goto LABEL_536;
                                              if ( v1732 > v1731 )
                                              {
                                                v427 = -1073741811;
LABEL_524:
                                                v283 = (SIZE_T)v1607;
                                                goto LABEL_498;
                                              }
                                              v447 = *v446;
                                              v1687 = 0;
                                              v427 = RtlUIntAdd(4u, v447, (int *)&v1687);
                                              if ( v427 < 0 )
                                                goto LABEL_524;
                                              v427 = RtlULongLongAdd(v448, v1687, (__int64 *)&v1733);
                                              v1642 = Sizec;
                                              v1640 = v450;
                                              v1628 = (const void **)v1442;
                                              v1607 = (_BYTE *)v1522;
                                              v1638 = v449;
                                              if ( v427 < 0 )
                                                goto LABEL_536;
                                              v445 = v1733;
                                              v283 = v1522;
                                              v451 = v1731;
                                              v1640 = v450;
                                              v1638 = v449;
                                              if ( v1733 > v1731 )
                                              {
                                                v427 = -1073741811;
                                                v1642 = Sizec;
                                                v1628 = (const void **)v1442;
                                                v1607 = (_BYTE *)v1522;
                                                goto LABEL_498;
                                              }
                                              ++v1486;
                                              v1642 = Sizec;
                                              v1628 = (const void **)v1442;
                                              v1607 = (_BYTE *)v1522;
                                              if ( v1733 >= v1731 )
                                              {
                                                v1642 = Sizec;
                                                v283 = v1522;
                                                v1628 = (const void **)v1442;
                                                v444 = v1733;
                                                v1640 = v450;
                                                v1607 = (_BYTE *)v1522;
                                                v1638 = v449;
                                                goto LABEL_526;
                                              }
                                            }
                                          }
                                          v451 = v1731;
LABEL_526:
                                          if ( v444 != v451 )
                                          {
                                            v427 = -1073741811;
                                            goto LABEL_498;
                                          }
                                        }
                                        v452 = v1575;
                                        if ( !v1575 )
                                        {
                                          v454 = 0LL;
                                          goto LABEL_533;
                                        }
                                        v453 = GetProcessHeap();
                                        v454 = HeapAlloc(v453, 8u, v1575);
                                        if ( v454 )
                                        {
                                          v452 = v1575;
                                          v427 = 0;
LABEL_533:
                                          if ( v1730 )
                                            memcpy_0(v454, v1730, v452);
                                          LODWORD(v1778[0]) = v1486;
                                          v1778[1] = v454;
                                          goto LABEL_536;
                                        }
                                        v427 = -1073741801;
LABEL_536:
                                        v269 = 0LL;
                                        if ( v427 < 0 )
                                        {
                                          v283 = (SIZE_T)v1607;
                                        }
                                        else
                                        {
                                          v283 = (SIZE_T)v1607;
                                          if ( v1592 != LODWORD(v1778[0]) )
                                            v427 = -1073741762;
                                        }
                                        goto LABEL_499;
                                      }
                                      v333 = 0;
                                      if ( v1513 )
                                      {
                                        *(_DWORD *)v348 = v1589;
                                        v349 = GetProcessHeap();
                                        v350 = HeapAlloc(v349, 8u, v1589);
                                        if ( !v350 )
                                        {
                                          v351 = v1628;
LABEL_438:
                                          v356 = v1635;
                                          v333 = -1073741801;
                                          v1514 = *(void **)(v1635 + 8);
                                          if ( v1514 )
                                          {
                                            v357 = GetProcessHeap();
                                            HeapFree(v357, 0, v1514);
                                            v356 = v1635;
                                            *(_QWORD *)(v1635 + 8) = 0LL;
                                          }
                                          v1515 = *(void **)(v356 + 24);
                                          if ( v1515 )
                                          {
                                            v358 = GetProcessHeap();
                                            HeapFree(v358, 0, v1515);
                                            v356 = v1635;
                                            *(_QWORD *)(v1635 + 24) = 0LL;
                                          }
                                          v1516 = *(void **)(v356 + 40);
                                          if ( v1516 )
                                          {
                                            v359 = GetProcessHeap();
                                            HeapFree(v359, 0, v1516);
                                            *(_QWORD *)(v1635 + 40) = 0LL;
                                          }
                                          v360 = GetProcessHeap();
                                          HeapFree(v360, 0, (LPVOID)v1635);
                                          goto LABEL_449;
                                        }
                                        *(_QWORD *)(v1635 + 8) = v350;
                                        memcpy_0(v350, v1513, v1589);
                                        v351 = v1628;
                                        v348 = v1635;
                                        v1441 = v101;
                                        v1407 = (size_t)v104;
                                      }
                                      else
                                      {
                                        v351 = v1628;
                                        *(_DWORD *)v348 = 0;
                                        *(_QWORD *)(v348 + 8) = 0LL;
                                      }
                                      v1635 = v348;
                                      if ( v1601 )
                                      {
                                        *(_DWORD *)(v348 + 16) = v1573;
                                        v352 = GetProcessHeap();
                                        v353 = HeapAlloc(v352, 8u, v1573);
                                        if ( !v353 )
                                          goto LABEL_438;
                                        *(_QWORD *)(v1635 + 24) = v353;
                                        v333 = 0;
                                        memcpy_0(v353, v1601, v1573);
                                        v348 = v1635;
                                        v1628 = v351;
                                        v1441 = v101;
                                        v1407 = (size_t)v104;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(v348 + 16) = 0;
                                        *(_QWORD *)(v348 + 24) = 0LL;
                                      }
                                      if ( v1728 )
                                      {
                                        *(_DWORD *)(v348 + 32) = v1482;
                                        v354 = GetProcessHeap();
                                        v355 = HeapAlloc(v354, 8u, v1482);
                                        if ( !v355 )
                                          goto LABEL_438;
                                        *(_QWORD *)(v1635 + 40) = v355;
                                        v333 = 0;
                                        memcpy_0(v355, v1728, v1482);
                                        v348 = v1635;
                                        v1628 = v351;
                                        v1441 = v101;
                                        v1407 = (size_t)v104;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(v348 + 32) = 0;
                                        *(_QWORD *)(v348 + 40) = 0LL;
                                      }
                                      v361 = (unsigned int *)v348;
                                      lpMeml = (unsigned int *)v348;
                                      goto LABEL_450;
                                    }
                                  }
                                }
                                v362 = 0LL;
LABEL_463:
                                v351 = v1628;
                                goto LABEL_464;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v362 = (unsigned int *)v1640;
                  goto LABEL_463;
                }
              }
LABEL_310:
              v269 = 0LL;
LABEL_311:
              v283 = (SIZE_T)v1607;
              goto LABEL_312;
            }
            v1639 = v1586;
            v1607 = lpMema;
          }
        }
        v257 = -1073741801;
        lpMemb = (void *)*((_QWORD *)v249 + 1);
        if ( lpMemb )
        {
          v258 = GetProcessHeap();
          HeapFree(v258, 0, lpMemb);
          *((_QWORD *)v249 + 1) = 0LL;
        }
        lpMemc = (void *)*((_QWORD *)v249 + 3);
        if ( lpMemc )
        {
          v259 = GetProcessHeap();
          HeapFree(v259, 0, lpMemc);
          *((_QWORD *)v249 + 3) = 0LL;
        }
        lpMemd = (void *)*((_QWORD *)v249 + 5);
        if ( lpMemd )
        {
          v260 = GetProcessHeap();
          HeapFree(v260, 0, lpMemd);
          *((_QWORD *)v249 + 5) = 0LL;
        }
        v261 = GetProcessHeap();
        HeapFree(v261, 0, v249);
      }
      else
      {
        v257 = -1073741801;
      }
      v249 = 0LL;
      goto LABEL_287;
    }
  }
  v99 = -805306367;
  v1643 = -805306367;
LABEL_313:
  v284 = GetProcessHeap();
  HeapFree(v284, 0, v1607);
  v269 = 0LL;
LABEL_314:
  if ( v1628 )
  {
    lpMeme = (void *)v1628[1];
    if ( lpMeme )
    {
      v285 = GetProcessHeap();
      HeapFree(v285, 0, lpMeme);
      v1628[1] = 0LL;
    }
    lpMemf = (void *)v1628[3];
    if ( lpMemf )
    {
      v286 = GetProcessHeap();
      HeapFree(v286, 0, lpMemf);
      v1628[3] = 0LL;
    }
    lpMemg = (void *)v1628[5];
    if ( lpMemg )
    {
      v287 = GetProcessHeap();
      HeapFree(v287, 0, lpMemg);
      v1628[5] = 0LL;
    }
    v288 = GetProcessHeap();
    HeapFree(v288, 0, v1628);
    v269 = 0LL;
  }
  v289 = v1638;
  if ( v1638 )
  {
    v290 = GetProcessHeap();
    HeapFree(v290, 0, v289);
    v269 = 0LL;
  }
  if ( v1563 )
  {
    v291 = GetProcessHeap();
    HeapFree(v291, 0, v1563);
    v269 = 0LL;
  }
  v292 = v1640;
  if ( v1640 )
  {
    lpMemh = (void *)*((_QWORD *)v1640 + 1);
    if ( lpMemh )
    {
      v293 = GetProcessHeap();
      HeapFree(v293, 0, lpMemh);
      v292[1] = 0LL;
    }
    lpMemi = (void *)v292[3];
    if ( lpMemi )
    {
      v294 = GetProcessHeap();
      HeapFree(v294, 0, lpMemi);
      v292[3] = 0LL;
    }
    lpMemj = (void *)v292[5];
    if ( lpMemj )
    {
      v295 = GetProcessHeap();
      HeapFree(v295, 0, lpMemj);
      v292[5] = 0LL;
    }
    v296 = GetProcessHeap();
    HeapFree(v296, 0, v292);
    v269 = 0LL;
  }
  v297 = v1642;
  if ( v1642 )
  {
    v298 = GetProcessHeap();
    HeapFree(v298, 0, v297);
    v269 = 0LL;
  }
  v106 = v97;
  if ( v99 >= 0 )
  {
    if ( !LODWORD(v1778[0]) )
    {
      v99 = -1073425151;
      goto LABEL_339;
    }
    if ( v1778[1] == v269 || LODWORD(v1778[0]) <= (unsigned int)v269 )
    {
      v99 = -1073741811;
      goto LABEL_339;
    }
    v1734 = v1778[1];
    v455 = *(_DWORD *)v1778[1];
    v1643 = RtlULongLongAdd((unsigned __int64)v1778[1], 4LL, (__int64 *)&v1734);
    v99 = v1643;
    if ( v1643 < 0 )
      goto LABEL_556;
    v458 = v1734;
    if ( !v455 )
      v458 = v456;
    v1734 = v458;
    if ( v455 != (_DWORD)v457 )
    {
LABEL_602:
      v99 = -1073741789;
LABEL_555:
      v1643 = v99;
LABEL_556:
      v106 = v97;
      goto LABEL_340;
    }
    v99 = *v458;
    v1643 = v99;
    if ( v99 == -805306333 )
    {
      v1593 = -2147024774;
      goto LABEL_553;
    }
    v1593 = v99;
    if ( v99 == -2147024774 || (v1593 = v99, v106 = v97, v99 >= 0) )
    {
LABEL_553:
      if ( LODWORD(v1778[0]) == 6 )
      {
        if ( v1778[1] != v456 )
        {
          v459 = v1778[1];
          v460 = (int)v456;
          v1735 = v1778[1];
          while ( 1 )
          {
            v1643 = RtlULongLongAdd((unsigned __int64)v459, v457, (__int64 *)&v1735);
            v99 = v1643;
            if ( v1643 < 0 )
              goto LABEL_556;
            v1643 = RtlULongLongAdd((unsigned __int64)v1735, v461, (__int64 *)&v1735);
            v99 = v1643;
            if ( v1643 < 0 )
              goto LABEL_556;
            v459 = v1735;
            if ( ++v460 )
            {
              v462 = *v1735;
              v1643 = RtlULongLongAdd((unsigned __int64)v1735, v457, (__int64 *)&v1735);
              v99 = v1643;
              if ( v1643 < 0 )
                goto LABEL_556;
              v465 = v1735;
              if ( !v462 )
                v465 = v463;
              v1735 = v465;
              if ( v462 != 8 )
                goto LABEL_602;
              lpMemn = *(LPVOID *)v465;
              if ( v1778[1] == v463 )
                break;
              v466 = v1778[1];
              v467 = (int)v463;
              v1736 = v1778[1];
              while ( 1 )
              {
                v1643 = RtlULongLongAdd((unsigned __int64)v466, v464, (__int64 *)&v1736);
                v99 = v1643;
                if ( v1643 < 0 )
                  goto LABEL_556;
                v1643 = RtlULongLongAdd((unsigned __int64)v1736, v468, (__int64 *)&v1736);
                v99 = v1643;
                if ( v1643 < 0 )
                  goto LABEL_556;
                v466 = v1736;
                if ( (unsigned int)++v467 >= 2 )
                {
                  v469 = *v1736;
                  v1643 = RtlULongLongAdd((unsigned __int64)v1736, v464, (__int64 *)&v1736);
                  v99 = v1643;
                  if ( v1643 < 0 )
                    goto LABEL_556;
                  v472 = v1736;
                  if ( !v469 )
                    v472 = v470;
                  v1736 = v472;
                  if ( v469 != (_DWORD)v471 )
                    goto LABEL_602;
                  v1576 = *v472;
                  if ( v1778[1] == v470 )
                    goto LABEL_576;
                  v473 = v1778[1];
                  v474 = (int)v470;
                  v1737 = v1778[1];
                  while ( 1 )
                  {
                    v1643 = RtlULongLongAdd((unsigned __int64)v473, v471, (__int64 *)&v1737);
                    v99 = v1643;
                    if ( v1643 < 0 )
                      goto LABEL_556;
                    v1643 = RtlULongLongAdd((unsigned __int64)v1737, v475, (__int64 *)&v1737);
                    v99 = v1643;
                    if ( v1643 < 0 )
                      goto LABEL_556;
                    v473 = v1737;
                    if ( (unsigned int)++v474 >= 3 )
                    {
                      v476 = *v1737;
                      v1487 = *v1737;
                      v1643 = RtlULongLongAdd((unsigned __int64)v1737, v471, (__int64 *)&v1737);
                      v99 = v1643;
                      if ( v1643 < 0 )
                        goto LABEL_556;
                      v478 = v1737;
                      if ( !v476 )
                        v478 = v477;
                      v1737 = v478;
                      if ( v1778[1] != v477 )
                      {
                        v479 = v1778[1];
                        v480 = (int)v477;
                        v1738 = v1778[1];
                        while ( 1 )
                        {
                          v1643 = RtlULongLongAdd((unsigned __int64)v479, 4LL, (__int64 *)&v1738);
                          v99 = v1643;
                          if ( v1643 < 0 )
                            goto LABEL_556;
                          v1643 = RtlULongLongAdd((unsigned __int64)v1738, v481, (__int64 *)&v1738);
                          v99 = v1643;
                          if ( v1643 < 0 )
                            goto LABEL_556;
                          v479 = v1738;
                          if ( (unsigned int)++v480 >= 4 )
                          {
                            v482 = *v1738;
                            v1643 = RtlULongLongAdd((unsigned __int64)v1738, 4LL, (__int64 *)&v1738);
                            v99 = v1643;
                            if ( v1643 < 0 )
                              goto LABEL_556;
                            v484 = v1738;
                            if ( !v482 )
                              v484 = v483;
                            v1738 = v484;
                            if ( v482 != 4 )
                              goto LABEL_602;
                            Sized = *v484;
                            if ( v1778[1] == v483 )
                              goto LABEL_576;
                            v485 = (unsigned int *)v1778[1];
                            v486 = (int)v483;
                            v1739 = (unsigned int *)v1778[1];
                            while ( 1 )
                            {
                              v1559 = *v485;
                              v99 = RtlULongLongAdd((unsigned __int64)v485, 4LL, (__int64 *)&v1739);
                              v1643 = v99;
                              if ( v99 < 0 )
                                goto LABEL_103;
                              v99 = RtlULongLongAdd((unsigned __int64)v1739, v1559, (__int64 *)&v1739);
                              v1643 = v99;
                              if ( v99 < 0 )
                                goto LABEL_103;
                              v485 = v1739;
                              if ( (unsigned int)++v486 >= 5 )
                              {
                                v1560 = *v1739;
                                v131 = RtlULongLongAdd((unsigned __int64)v1739, 4LL, (__int64 *)&v1739);
                                v1643 = v131;
                                v99 = v131;
                                if ( v131 < 0 )
                                  goto LABEL_127;
                                v488 = v1739;
                                if ( !v1560 )
                                  v488 = 0LL;
                                v1739 = v488;
                                if ( v1560 != 4 )
                                  goto LABEL_602;
                                v106 = *v488;
                                if ( (LPVOID)v1525 != lpMemn )
                                  goto LABEL_554;
                                v1649 = v1576;
                                if ( Sized > 4 || v1487 > 4 )
                                {
                                  v99 = -2147024774;
                                  goto LABEL_339;
                                }
                                memcpy_0(v1637, v487, v1487);
                                if ( v1593 )
                                {
                                  v99 = v1593;
                                  v1643 = v1593;
                                }
                                goto LABEL_340;
                              }
                            }
                          }
                        }
                      }
                      goto LABEL_576;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_576:
        v99 = -1073741811;
      }
      else
      {
LABEL_554:
        v99 = -1073425151;
      }
      goto LABEL_555;
    }
  }
LABEL_340:
  Src[0] = 0LL;
  v299 = Src[1];
  if ( Src[1] )
  {
    v300 = GetProcessHeap();
    HeapFree(v300, 0, v299);
    Src[1] = 0LL;
  }
  v1778[0] = 0LL;
  v301 = v1778[1];
  if ( v1778[1] )
  {
    v302 = GetProcessHeap();
    HeapFree(v302, 0, v301);
    v1778[1] = 0LL;
  }
  if ( v104 )
  {
    v303 = GetProcessHeap();
    HeapFree(v303, 0, v104);
  }
  if ( v101 )
  {
    v304 = GetProcessHeap();
    HeapFree(v304, 0, v101);
  }
  if ( v99 >= 0 )
  {
    if ( !v106 )
    {
LABEL_1241:
      v100 = v1649;
      v1634 = 0LL;
      v1714 = v1637;
      goto LABEL_1565;
    }
    dword_1808C9398 = v106;
    v1724 = 0LL;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v306 = 0;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    {
LABEL_1218:
      SH<void *,SH_HANDLE>::Reset(&v1724);
      *(_OWORD *)v1779 = 0LL;
      v1054 = 0LL;
      *(_OWORD *)v1787 = 0LL;
      v1055 = GetProcessHeap();
      v1056 = HeapAlloc(v1055, 8u, 0xA0uLL);
      if ( !v1056 )
      {
        v1056 = 0LL;
        goto LABEL_1233;
      }
      *v1056 = xmmword_1808C7510[0];
      v1056[1] = xmmword_1808C7510[1];
      v1056[2] = xmmword_1808C7510[2];
      v1056[3] = xmmword_1808C7510[3];
      v1056[4] = xmmword_1808C7510[4];
      v1056[5] = xmmword_1808C7510[5];
      v1056[6] = xmmword_1808C7510[6];
      v1056[7] = xmmword_1808C7510[7];
      v1056[8] = xmmword_1808C7510[8];
      v1056[9] = xmmword_1808C7510[9];
      v1057 = GetProcessHeap();
      v1058 = (WCHAR *)HeapAlloc(v1057, 8u, 8uLL);
      v1054 = v1058;
      if ( !v1058 )
      {
        v1054 = 0LL;
        goto LABEL_1233;
      }
      *(_QWORD *)v1058 = qword_1808C7468;
      v1644 = (LPVOID)__rdtsc();
      v1690 = 0LL;
      if ( (int)RtlUIntAdd(4u, 4, (int *)&v1690 + 1) < 0 )
        goto LABEL_1233;
      if ( (int)RtlUIntAdd(0, SHIDWORD(v1690), (int *)&v1690) < 0 )
        goto LABEL_1233;
      v1691 = v1059;
      if ( (int)RtlUIntAdd(v1060, 160, &v1691) < 0 )
        goto LABEL_1233;
      v1061 = RtlUIntAdd(v1690, v1691, (int *)&v1690);
      if ( (v1064 | v1061) < 0 )
        goto LABEL_1233;
      v1692 = v1062;
      if ( (int)RtlUIntAdd(v1063, 8, &v1692) < 0 )
        goto LABEL_1233;
      v1065 = RtlUIntAdd(v1690, v1692, (int *)&v1690);
      if ( (v1068 | v1065) < 0 )
        goto LABEL_1233;
      v1693 = v1066;
      if ( (int)RtlUIntAdd(v1067, 8, &v1693) < 0 )
        goto LABEL_1233;
      v1069 = RtlUIntAdd(v1690, v1693, (int *)&v1690);
      if ( (v1070 | v1069) < 0 )
        goto LABEL_1233;
      HIDWORD(v1779[0]) = v1690;
      v1071 = v1690;
      v1072 = GetProcessHeap();
      v1073 = HeapAlloc(v1072, 8u, v1071);
      if ( !v1073 )
        goto LABEL_1233;
      v1779[1] = (size_t)v1073;
      LODWORD(v1773[0]) = 0;
      v1772[1] = 0LL;
      LODWORD(v1779[0]) = 0;
      v1501 = v1056;
      v1759[3] = v1073;
      v1636 = v1054;
      v1080 = RtlULongLongAdd((unsigned __int64)v1073, 4LL, v1773);
      if ( v1080 < 0 || v1081 + 2 > (unsigned int *)((char *)v1081 + HIDWORD(v1779[0])) )
        goto LABEL_1233;
      v1084 = (unsigned int *)v1773[0];
      *v1081 = v1082;
      *v1084 = v1082;
      v1085 = ++LODWORD(v1779[0]);
      LODWORD(v1774[0]) = 0;
      v1773[1] = 0LL;
      if ( v1779[1] == v1083 )
      {
        v1694 = v1083;
        if ( (int)RtlUIntAdd(v1082, 160, &v1694) < 0 || (int)RtlUIntAdd(HIDWORD(v1779[0]), v1694, (int *)v1779 + 1) < 0 )
          goto LABEL_1233;
      }
      else
      {
        v1088 = (int *)v1779[1];
        v1760 = v1779[1];
        if ( v1085 )
        {
          do
          {
            v1089 = *v1088;
            v1695 = 0;
            if ( (int)RtlUIntAdd(4u, v1089, (int *)&v1695) < 0
              || (int)RtlULongLongAdd(v1090, v1695, (__int64 *)&v1760) < 0 )
            {
              goto LABEL_1233;
            }
            v1088 = (int *)v1760;
            v1636 = v1054;
            v1501 = v1056;
          }
          while ( v1092 + 1 < v1091 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v1088, 4LL, (__int64 *)v1774) < 0
          || (unsigned __int64)(v1093 + 41) > v1779[1] + HIDWORD(v1779[0]) )
        {
          goto LABEL_1233;
        }
        *v1093 = 160;
        memcpy_0(v1774[0], v1056, 0xA0uLL);
        v1087 = 0LL;
        v1086 = 4;
      }
      v1094 = LODWORD(v1779[0]) + 1;
      LODWORD(v1775[0]) = 0;
      ++LODWORD(v1779[0]);
      v1774[1] = 0LL;
      if ( !v1054 )
        goto LABEL_1233;
      if ( v1779[1] == v1087 )
      {
        v1696 = v1087;
        v1095 = 0LL;
        if ( (int)RtlUIntAdd(v1086, 8, &v1696) < 0 || (int)RtlUIntAdd(HIDWORD(v1779[0]), v1696, (int *)v1779 + 1) < 0 )
          goto LABEL_1233;
      }
      else
      {
        v1097 = (int *)v1779[1];
        v1761 = v1779[1];
        if ( v1094 )
        {
          do
          {
            v1098 = *v1097;
            v1697 = v1087;
            if ( (int)RtlUIntAdd(4u, v1098, (int *)&v1697) < 0
              || (int)RtlULongLongAdd(v1099, v1697, (__int64 *)&v1761) < 0 )
            {
              goto LABEL_1233;
            }
            v1097 = (int *)v1761;
            v1636 = v1054;
            v1501 = v1056;
          }
          while ( v1100 + 1 < v1094 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v1097, 4LL, (__int64 *)v1775) < 0
          || (unsigned __int64)(v1101 + 3) > v1779[1] + HIDWORD(v1779[0]) )
        {
          goto LABEL_1233;
        }
        *v1101 = 8;
        v1095 = 0LL;
        memcpy_0(v1775[0], v1054, 8uLL);
        v1096 = 4;
      }
      LODWORD(v1776) = 0;
      v1102 = LODWORD(v1779[0]) + 1;
      v1775[1] = 0LL;
      ++LODWORD(v1779[0]);
      if ( v1779[1] )
      {
        v1105 = (int *)v1779[1];
        v1762 = v1779[1];
        if ( v1102 )
        {
          do
          {
            v1106 = *v1105;
            v1699 = 0;
            if ( (int)RtlUIntAdd(4u, v1106, (int *)&v1699) < 0
              || (int)RtlULongLongAdd(v1107, v1699, (__int64 *)&v1762) < 0 )
            {
              goto LABEL_1233;
            }
            v1105 = (int *)v1762;
            v1636 = v1054;
            v1501 = v1056;
          }
          while ( v1109 + v1108 < v1102 );
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v1105, 4LL, (__int64 *)&v1776) < 0
          || (unsigned __int64)(v1110 + 3) > v1779[1] + HIDWORD(v1779[0]) )
        {
          goto LABEL_1233;
        }
        v1111 = v1776;
        v1112 = v1644;
        *v1110 = 8;
        *v1111 = v1112;
      }
      else
      {
        v1698 = 0;
        if ( (int)RtlUIntAdd(v1096, 8, &v1698) < 0 || (int)RtlUIntAdd(HIDWORD(v1779[0]), v1698, (int *)v1779 + 1) < 0 )
          goto LABEL_1233;
      }
      LODWORD(v1779[0]) += v1104;
      v1700 = 0;
      if ( (int)RtlUIntAdd(v1103, v1103, (int *)&v1700) < 0 )
        goto LABEL_1233;
      v1114 = v1700;
      v1701 = v1700;
      v1702 = 0;
      if ( (int)RtlUIntAdd(v1113, 8, &v1702) < 0 || (int)RtlUIntAdd(v1114, v1702, (int *)&v1701) < 0 )
        goto LABEL_1233;
      lpMemo = 0LL;
      v1524 = 0LL;
      v1605 = 0LL;
      v1635 = 0LL;
      v1416 = v1701;
      v1644 = 0LL;
      v1454 = 0;
      lpModuleNamel = (LPCWSTR)__rdtsc();
      v1703 = 8;
      v1115 = RtlUIntAdd(8u, SHIDWORD(v1779[0]), (int *)&v1703);
      if ( v1115 < 0 )
      {
LABEL_1291:
        v1129 = v1115 | 0x10000000;
        if ( v1129 < 0 )
        {
          v1198 = v1644;
          goto LABEL_1524;
        }
        v1130 = (unsigned __int8 *)v1644;
        lpModuleNamem = v1117;
        if ( v1644 )
        {
          if ( !v1116
            || (v1634 = v1116 + 8LL, v1131 = (char *)MemoryAlloc(v1634),
                                     v1132 = 0,
                                     v1599 = v1131,
                                     (v1133 = v1131) == 0LL) )
          {
            v1198 = v1644;
            v1129 = -805306367;
LABEL_1525:
            v1354 = GetProcessHeap();
            HeapFree(v1354, 0, v1198);
LABEL_1526:
            if ( v1095 )
            {
              v1355 = (void *)*((_QWORD *)v1095 + 1);
              if ( v1355 )
              {
                v1356 = GetProcessHeap();
                HeapFree(v1356, 0, v1355);
                *((_QWORD *)v1095 + 1) = 0LL;
              }
              v1357 = (void *)*((_QWORD *)v1095 + 3);
              if ( v1357 )
              {
                v1358 = GetProcessHeap();
                HeapFree(v1358, 0, v1357);
                *((_QWORD *)v1095 + 3) = 0LL;
              }
              v1359 = (void *)*((_QWORD *)v1095 + 5);
              if ( v1359 )
              {
                v1360 = GetProcessHeap();
                HeapFree(v1360, 0, v1359);
                *((_QWORD *)v1095 + 5) = 0LL;
              }
              v1361 = GetProcessHeap();
              HeapFree(v1361, 0, v1095);
            }
            if ( lpMemo )
            {
              v1362 = GetProcessHeap();
              HeapFree(v1362, 0, lpMemo);
            }
            if ( v1524 )
            {
              v1363 = GetProcessHeap();
              HeapFree(v1363, 0, v1524);
            }
            if ( v1605 )
            {
              v1364 = (void *)v1605[1];
              if ( v1364 )
              {
                v1365 = GetProcessHeap();
                HeapFree(v1365, 0, v1364);
                v1605[1] = 0LL;
              }
              v1366 = (void *)v1605[3];
              if ( v1366 )
              {
                v1367 = GetProcessHeap();
                HeapFree(v1367, 0, v1366);
                v1605[3] = 0LL;
              }
              v1368 = (void *)v1605[5];
              if ( v1368 )
              {
                v1369 = GetProcessHeap();
                HeapFree(v1369, 0, v1368);
                v1605[5] = 0LL;
              }
              v1370 = GetProcessHeap();
              HeapFree(v1370, 0, v1605);
            }
            v1371 = (void *)v1635;
            if ( v1635 )
            {
              v1372 = GetProcessHeap();
              HeapFree(v1372, 0, v1371);
            }
            if ( v1129 >= 0 )
            {
              if ( LODWORD(v1787[0]) )
              {
                v1373 = v1787[1];
                if ( v1787[1] )
                {
                  v1749[0] = v1787[1];
                  if ( (int)RtlULongLongAdd((unsigned __int64)v1787[1], 4LL, (__int64 *)v1749) >= 0 )
                  {
                    v1377 = (int *)v1749[0];
                    if ( !*v1373 )
                      v1377 = 0LL;
                    v1749[0] = v1377;
                    if ( *v1373 == (_DWORD)v1375 && *v1377 >= 0 && v1373 && v1374 > v1376 )
                    {
                      for ( v1764[0] = (__int64)v1373;
                            (int)RtlULongLongAdd((unsigned __int64)v1373, v1375, v1764) >= 0
                         && (int)RtlULongLongAdd(v1764[0], (unsigned int)*v1373, v1764) >= 0;
                            v1373 = (_DWORD *)v1764[0] )
                      {
                        if ( v1379 + v1378 >= v1379 )
                        {
                          RtlULongLongAdd(v1764[0], v1375, v1764);
                          goto LABEL_1233;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_1233;
          }
          v1134 = 0LL;
          v1405 = 0;
          if ( v1454 )
          {
            v1135 = 0;
            do
              v1135 ^= v1130[v1134++];
            while ( v1134 < v1454 );
            v1405 = v1135;
          }
          v1136 = 0;
          v1568 = v1133;
          v1137 = v1133;
          v1838 = 0xC81ECB17B1B54A58uLL;
          v1631 = 0;
          v1138 = -1;
          LODWORD(v1638) = 0;
          v1139 = v1130;
          v1140 = v1454 & 7;
          if ( (v1454 & 7) != 0 )
          {
            v1141 = 0;
            v1142 = 0;
            v1632 = 0;
            v1143 = 56;
            do
            {
              v1144 = *v1139;
              if ( v1141 >= 4 )
                v1136 |= v1144 << v1143;
              else
                v1142 |= v1144 << (v1143 - 32);
              ++v1139;
              v1141 = v1632 + 1;
              v1143 -= 8;
              v1632 = v1141;
            }
            while ( (int)v1141 < v1140 );
            v1145 = v1568;
            v1132 = v1142 ^ 0xB17A307A;
            v1146 = v1136 ^ 0x42F6B18D;
            v1147 = v1142 ^ 0xB17A307A;
            v1148 = 0;
            v1149 = v1136 ^ 0x42F6B18D;
            LODWORD(v1638) = 0;
            do
            {
              v1631 = v1136;
              if ( v1148 >= 4 )
              {
                v1149 = (v1149 << 8) | HIBYTE(v1149);
                v1150 = v1149;
              }
              else
              {
                v1147 = (v1147 << 8) | HIBYTE(v1147);
                v1150 = v1147;
              }
              *v1145 = v1150;
              v1136 = v1631;
              ++v1145;
              v1148 = (_DWORD)v1638 + 1;
              LODWORD(v1638) = v1148;
            }
            while ( v1148 < v1140 );
            v99 = v1643;
            LODWORD(v1638) = v1142;
            v1137 = v1145;
            v1644 = v1130;
            v1095 = 0LL;
            v1501 = v1056;
            v1636 = v1054;
            if ( (unsigned int)v1140 <= 4 )
            {
              v1138 = 0;
              if ( (unsigned int)v1140 < 4 )
                v1132 = v1132 >> (8 * (4 - v1140)) << (8 * (4 - v1140));
            }
            else
            {
              v1138 = v1146 >> (8 * (8 - v1140)) << (8 * (8 - v1140));
            }
          }
          if ( (unsigned __int64)v1454 >> 3 )
          {
            v1151 = HIDWORD(v1838);
            v1152 = v1139 + 2;
            v1153 = (int)v1638;
            v1154 = HIDWORD(v1838) ^ 0xB1B54A58;
            v1155 = v1631;
            v1156 = (unsigned __int64)v1454 >> 3;
            v1569 = WORD1(v1838);
            v1495 = (SIZE_T)(v1137 + 7);
            LODWORD(v1640) = WORD2(v1838);
            do
            {
              v1157 = v1152[1] | ((*v1152 | ((*(v1152 - 1) | (*(v1152 - 2) << 8)) << 8)) << 8);
              v1158 = v1152[5] | ((v1152[4] | ((v1152[3] | (v1152[2] << 8)) << 8)) << 8);
              v1159 = v1158 ^ v1138;
              v1160 = v1157 ^ v1151 ^ (v1159 - 19032) ^ v1132;
              v1161 = (__ROR4__(v1160, 7) + WORD1(v1838) * __ROR4__(v1160 ^ v1151, 15)) ^ v1159;
              v1162 = ((_DWORD)v1640 * __ROR4__(v1161 - 1313519016, 9) - __ROR4__(v1161, 10)) ^ v1160;
              v1163 = (__ROR4__(v1162, 27) + HIWORD(v1838) * __ROR4__(v1162 ^ (unsigned int)v1640, 28)) ^ v1161;
              v1164 = (v1151 - (v1163 ^ 0xB1B54A58)) ^ v1162;
              v1165 = (WORD1(v1838) * (v1164 - 19032) - (v1164 >> 6)) ^ v1163;
              v1166 = (19032 * ((unsigned int)v1640 ^ __ROR4__(v1165, 15))) ^ v1164;
              v1167 = ((_DWORD)v1640 * (HIWORD(v1838) + __ROR4__(~v1166, 3))) ^ v1165;
              v1168 = (v1167 - v1151 - 19032) ^ v1166;
              v1169 = (v1569 * (v1168 ^ HIWORD(v1838))) ^ __ROR4__(v1168, 10) ^ v1167;
              v1170 = __ROR4__(v1169, 3) ^ ((_DWORD)v1640 * __ROR4__(v1169 ^ 0x4A58, 26)) ^ v1168;
              v1171 = (19032 * (__ROR4__(v1170, 15) - HIWORD(v1838))) ^ v1169;
              v1172 = (v1171 >> 15) ^ (19032 * ((8 * (v1171 - (_DWORD)v1640)) | ((v1171 - (unsigned int)v1640) >> 29))) ^ (v1171 >> 1) ^ (19032 * (v1171 ^ HIWORD(v1838))) ^ v1170;
              v1173 = (WORD1(v1838) * (v1172 - (_DWORD)v1640) - (v1172 >> 13)) ^ v1171;
              v1174 = __ROR4__(v1173, 11) ^ ((_DWORD)v1640 * __ROR4__(-1313519016 - v1173, 9)) ^ v1172;
              v1175 = (v1174 - HIWORD(v1838) + 1313519016) ^ v1173;
              v1176 = (19032 * (v1175 ^ WORD1(v1838)) - __ROR4__(v1175, 7)) ^ v1174;
              v1177 = (WORD1(v1838) * __ROR4__(v1176 ^ HIWORD(v1838), 28) - __ROR4__(v1176, 16)) ^ v1175;
              v1178 = (__ROR4__(v1177, 4) + (_DWORD)v1640 * __ROR4__(-1313519016 - v1177, 10)) ^ v1176;
              v1179 = __ROR4__(v1178, 9) ^ (HIWORD(v1838) * __ROR4__(v1178 + 1313519016, 4)) ^ v1177;
              v1180 = (19032 * __ROR4__(v1151 ^ v1179, 24) - __ROR4__(v1179, 30)) ^ v1178;
              v1181 = (WORD1(v1838) * __ROR4__(v1151 - v1180, 11) - __ROR4__(v1180, 12)) ^ v1179;
              v1182 = (v1181 >> 8) ^ ((_DWORD)v1640 * (v1181 ^ WORD1(v1838))) ^ v1180;
              v1183 = v1182 ^ v1154 ^ v1181;
              v1132 = v1153 ^ v1182;
              v1184 = (_BYTE *)v1495;
              v1138 = v1155 ^ v1183;
              v1495 += 8LL;
              *(v1184 - 4) = v1132;
              *v1184 = v1138;
              *(v1184 - 5) = BYTE1(v1132);
              v1155 = v1158;
              *(v1184 - 1) = BYTE1(v1138);
              v1152 += 8;
              *(v1184 - 6) = (unsigned __int16)(v1132 >> 8) >> 8;
              *(v1184 - 2) = (unsigned __int16)(v1138 >> 8) >> 8;
              *(v1184 - 7) = __ROR4__((((v1132 >> 8) | (v1132 << 24)) >> 8) | (((v1132 >> 8) | (v1132 << 24)) << 24), 8);
              v1151 = HIDWORD(v1838);
              *(v1184 - 3) = __ROR4__((((v1138 >> 8) | (v1138 << 24)) >> 8) | (((v1138 >> 8) | (v1138 << 24)) << 24), 8);
              v1153 = v1157;
              --v1156;
            }
            while ( v1156 );
            v99 = v1643;
            v1054 = (WCHAR *)v1636;
            v1056 = v1501;
            v1095 = 0LL;
            v1130 = (unsigned __int8 *)v1644;
          }
          *(_QWORD *)&v1599[v1454] = v1405;
          v1185 = GetProcessHeap();
          v1186 = HeapAlloc(v1185, 8u, 0x30uLL);
          if ( v1186 )
          {
            *(_DWORD *)v1186 = v1634;
            v1187 = GetProcessHeap();
            v1188 = HeapAlloc(v1187, 8u, (unsigned int)v1634);
            if ( !v1188 )
              goto LABEL_1323;
            v1186[1] = v1188;
            memcpy_0(v1188, v1599, (unsigned int)v1634);
            v1644 = v1130;
            v1503 = v1130;
            *((_DWORD *)v1186 + 4) = 160;
            v1189 = GetProcessHeap();
            v1190 = HeapAlloc(v1189, 8u, 0xA0uLL);
            if ( !v1190 )
              goto LABEL_1323;
            v1186[3] = v1190;
            v1644 = v1130;
            *v1190 = xmmword_1808C7470[0];
            v1190[1] = xmmword_1808C7470[1];
            v1190[2] = xmmword_1808C7470[2];
            v1190[3] = xmmword_1808C7470[3];
            v1190[4] = xmmword_1808C7470[4];
            v1190[5] = xmmword_1808C7470[5];
            v1190[6] = xmmword_1808C7470[6];
            v1190[7] = xmmword_1808C7470[7];
            v1190[8] = xmmword_1808C7470[8];
            v1190[9] = xmmword_1808C7470[9];
            *((_DWORD *)v1186 + 8) = 8;
            v1191 = GetProcessHeap();
            v1192 = HeapAlloc(v1191, 8u, 8uLL);
            v1193 = 0;
            if ( !v1192 )
            {
              v1644 = v1503;
LABEL_1323:
              v1193 = -1073741801;
              v1504 = (void *)v1186[1];
              if ( v1504 )
              {
                v1194 = GetProcessHeap();
                HeapFree(v1194, 0, v1504);
                v1186[1] = 0LL;
              }
              v1505 = (void *)v1186[3];
              if ( v1505 )
              {
                v1195 = GetProcessHeap();
                HeapFree(v1195, 0, v1505);
                v1186[3] = 0LL;
              }
              v1506 = (void *)v1186[5];
              if ( v1506 )
              {
                v1196 = GetProcessHeap();
                HeapFree(v1196, 0, v1506);
                v1186[5] = 0LL;
              }
              v1197 = GetProcessHeap();
              HeapFree(v1197, 0, v1186);
              goto LABEL_1332;
            }
            v1186[5] = v1192;
            *v1192 = qword_1808C7460;
            v1095 = (int *)v1186;
            lpModuleNamem = 0LL;
          }
          else
          {
            v1193 = -1073741801;
          }
LABEL_1332:
          v1198 = v1644;
          v1636 = v1054;
          v1199 = GetProcessHeap();
          HeapFree(v1199, 0, v1599);
          v1200 = lpModuleNamem;
          if ( lpModuleNamem )
          {
            v1507 = (void *)*((_QWORD *)lpModuleNamem + 1);
            if ( v1507 )
            {
              v1201 = GetProcessHeap();
              HeapFree(v1201, 0, v1507);
              v1200 = lpModuleNamem;
              *((_QWORD *)lpModuleNamem + 1) = 0LL;
            }
            v1508 = (void *)*((_QWORD *)v1200 + 3);
            if ( v1508 )
            {
              v1202 = GetProcessHeap();
              HeapFree(v1202, 0, v1508);
              v1200 = lpModuleNamem;
              *((_QWORD *)lpModuleNamem + 3) = 0LL;
            }
            v1509 = (void *)*((_QWORD *)v1200 + 5);
            if ( v1509 )
            {
              v1203 = GetProcessHeap();
              HeapFree(v1203, 0, v1509);
              *((_QWORD *)lpModuleNamem + 5) = 0LL;
            }
            v1204 = GetProcessHeap();
            HeapFree(v1204, 0, lpModuleNamem);
            v1636 = v1054;
            v1644 = v1198;
          }
          v1129 = v1193 | 0x10000000;
          if ( v1129 >= 0 )
          {
            v1205 = *v1095;
            v1704 = 0;
            v1705 = 4;
            v1206 = RtlUIntAdd(4u, v1205, (int *)&v1705);
            if ( v1206 >= 0 )
            {
              v1206 = RtlUIntAdd(v1705, v1207, (int *)&v1705);
              if ( v1206 >= 0 )
              {
                v1206 = RtlUIntAdd(v1705, v1095[4], (int *)&v1705);
                if ( v1206 >= 0 )
                {
                  v1206 = RtlUIntAdd(v1705, v1208, (int *)&v1705);
                  if ( v1206 >= 0 )
                  {
                    v1206 = RtlUIntAdd(v1705, v1095[8], (int *)&v1705);
                    if ( v1206 >= 0 )
                    {
                      v1704 = v1705;
                      v1209 = v1705;
                      v1210 = GetProcessHeap();
                      v1211 = HeapAlloc(v1210, 8u, v1209);
                      v1638 = v1211;
                      if ( !v1211 )
                      {
                        v1224 = -1073741801;
LABEL_1363:
                        v1129 = v1224 | 0x10000000;
                        goto LABEL_1524;
                      }
                      *v1211 = *v1095;
                      v1765 = v1211;
                      v1212 = RtlULongLongAdd((unsigned __int64)v1211, 4LL, (__int64 *)&v1765);
                      v1570 = v1213;
                      v1206 = v1212;
                      if ( v1212 < 0 )
                        goto LABEL_1356;
                      memcpy_0(v1765, *((const void **)v1095 + 1), (unsigned int)*v1095);
                      v1206 = RtlULongLongAdd((unsigned __int64)v1765, (unsigned int)*v1095, (__int64 *)&v1765);
                      v1213 = v1638;
                      v1570 = v1638;
                      if ( v1206 < 0 )
                        goto LABEL_1356;
                      v1214 = v1765;
                      *(_DWORD *)v1765 = v1095[4];
                      v1215 = RtlULongLongAdd((unsigned __int64)v1214, 4LL, (__int64 *)&v1765);
                      v1213 = v1216;
                      v1206 = v1215;
                      v1570 = v1216;
                      if ( v1215 < 0 )
                        goto LABEL_1356;
                      memcpy_0(v1765, *((const void **)v1095 + 3), (unsigned int)v1095[4]);
                      v1206 = RtlULongLongAdd((unsigned __int64)v1765, (unsigned int)v1095[4], (__int64 *)&v1765);
                      v1213 = v1638;
                      v1570 = v1638;
                      if ( v1206 < 0 )
                        goto LABEL_1356;
                      v1217 = v1765;
                      *(_DWORD *)v1765 = v1095[8];
                      v1218 = RtlULongLongAdd((unsigned __int64)v1217, 4LL, (__int64 *)&v1765);
                      v1213 = v1219;
                      v1206 = v1218;
                      v1570 = v1219;
                      if ( v1218 < 0
                        || (memcpy_0(v1765, *((const void **)v1095 + 5), (unsigned int)v1095[8]),
                            v1206 = RtlULongLongAdd((unsigned __int64)v1765, (unsigned int)v1095[8], (__int64 *)&v1765),
                            v1570 = v1638,
                            v1213 = v1638,
                            v1206 < 0) )
                      {
LABEL_1356:
                        if ( v1213 )
                        {
                          v1220 = GetProcessHeap();
                          HeapFree(v1220, 0, v1570);
                        }
                      }
                      else
                      {
                        lpMemo = v1638;
                      }
                    }
                  }
                }
              }
            }
            v1129 = v1206 | 0x10000000;
            if ( v1129 >= 0 )
            {
              v1706 = 8;
              v1221 = RtlUIntAdd(8u, v1416, (int *)&v1706);
              v1129 = v1221 | 0x10000000;
              if ( v1221 >= 0 )
              {
                v1707 = 0;
                v1223 = (v1706 + 7) & 0xFFFFFFF8;
                if ( v1223 < v1706 )
                {
                  v1129 = -1073741675;
                  goto LABEL_1524;
                }
                v1707 = (v1706 + 7) & 0xFFFFFFF8;
                lpMemo = v1222;
                v1129 = RtlUIntAdd(v1223, 8, (int *)&v1707);
                if ( v1129 >= 0 )
                {
                  lpMemo = v1225;
                  v1536 = v1226;
                  if ( !v1779[1] )
                    goto LABEL_1367;
                  lpMemo = v1225;
                  if ( LODWORD(v1779[0]) <= 1 )
                    goto LABEL_1367;
                  v1227 = (unsigned int *)v1779[1];
                  v1766 = (unsigned int *)v1779[1];
                  v1557 = (unsigned __int16 *)v1095;
                  v1636 = v1054;
                  v1510 = v1056;
                  v1644 = v1198;
                  do
                  {
                    v1417 = *v1227;
                    v1129 = RtlULongLongAdd((unsigned __int64)v1227, 4LL, (__int64 *)&v1766);
                    if ( v1129 < 0 )
                      goto LABEL_1524;
                    v1129 = RtlULongLongAdd((unsigned __int64)v1766, v1417, (__int64 *)&v1766);
                    if ( v1129 < 0 )
                      goto LABEL_1524;
                    v1227 = v1766;
                  }
                  while ( v1228 == -1 );
                  v1418 = *v1766;
                  v1129 = RtlULongLongAdd((unsigned __int64)v1766, 4LL, (__int64 *)&v1766);
                  if ( v1129 >= 0 )
                  {
                    lpMemo = v1229;
                    if ( !v1779[1] || (lpMemo = v1229, LODWORD(v1779[0]) <= 2) )
                    {
LABEL_1367:
                      v1129 = -1073741811;
                      goto LABEL_1524;
                    }
                    v1230 = (unsigned int *)v1779[1];
                    v1767 = v1779[1];
                    do
                    {
                      v1455 = *v1230;
                      v1129 = RtlULongLongAdd((unsigned __int64)v1230, 4LL, (__int64 *)&v1767);
                      if ( v1129 < 0 )
                        goto LABEL_1524;
                      v1129 = RtlULongLongAdd(v1767, v1455, (__int64 *)&v1767);
                      if ( v1129 < 0 )
                        goto LABEL_1524;
                      v1230 = (unsigned int *)v1767;
                    }
                    while ( (unsigned int)(v1231 + 1) < 2 );
                    v1129 = RtlULongLongAdd(v1767, 4LL, (__int64 *)&v1767);
                    if ( v1129 >= 0 )
                    {
                      lpMemo = v1232;
                      LODWORD(v1712) = 4;
                      v1129 = RtlUIntAdd(4u, v1707, (int *)&v1712);
                      if ( v1129 >= 0 )
                      {
                        v1129 = RtlUIntAdd(v1712, v1233, (int *)&v1712);
                        if ( v1129 >= 0 )
                        {
                          v1129 = RtlUIntAdd(v1712, v1418, (int *)&v1712);
                          if ( v1129 >= 0 )
                          {
                            v1129 = RtlUIntAdd(v1712, 4, (int *)&v1712);
                            if ( v1129 >= 0 )
                            {
                              v1129 = RtlUIntAdd(v1712, v1234, (int *)&v1712);
                              if ( v1129 >= 0 )
                              {
                                lpMemo = v1235;
                                if ( (unsigned int)v1712 > 0x400000 )
                                {
                                  v1129 = -2147418113;
                                  goto LABEL_1524;
                                }
                                v1614 = v1712;
                                v1236 = v1712;
                                v1237 = GetProcessHeap();
                                v1238 = HeapAlloc(v1237, 8u, v1236);
                                v1239 = 0LL;
                                if ( v1238 )
                                  v1239 = v1238;
                                v1524 = v1239;
                                v1129 = v1238 != 0LL ? 0x10000000 : -805306345;
                                if ( v1238 )
                                {
                                  hModule = 0LL;
                                  v1790 = 0LL;
                                  v1791 = 0LL;
                                  if ( !lpMemo || !v1239 )
                                  {
                                    v1129 = -2147024809;
                                    goto LABEL_1524;
                                  }
                                  LODWORD(v1791) = v1536;
                                  *((_QWORD *)&v1790 + 1) = v1239;
                                  *(_QWORD *)((char *)&v1791 + 4) = v1614;
                                  *(_QWORD *)&v1790 = lpMemo;
                                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                    && (v1241 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                                  {
                                    v1242 = ((__int64 (__fastcall *)(__int64, __int128 *))v1241)(134LL, &v1790);
                                    v1129 = v1242 | 0x10000000;
                                    if ( v1242 >= 0 )
                                    {
                                      v1243 = DWORD1(v1791);
                                      goto LABEL_1407;
                                    }
                                  }
                                  else
                                  {
                                    v1240 = GetLastError();
                                    v1129 = v1240;
                                    if ( v1240 > 0 )
                                      v1129 = (unsigned __int16)v1240 | 0x80070000;
                                    if ( v1129 >= 0 )
                                      v1129 = -2147467259;
                                  }
                                  if ( v1129 == -805306333 )
                                  {
                                    v1129 = -2147024774;
                                    goto LABEL_1524;
                                  }
                                  if ( v1129 >= 0 )
                                  {
                                    v1243 = v1614;
LABEL_1407:
                                    v1708 = 0;
                                    v1769 = v1524;
                                    if ( v1243 < 4 )
                                    {
LABEL_1408:
                                      v1129 = -805306306;
                                      goto LABEL_1524;
                                    }
                                    v1419 = *v1524;
                                    v1244 = RtlULongLongAdd((unsigned __int64)v1524, 4LL, (__int64 *)&v1769);
                                    v1245 = 0LL;
                                    v1246 = v1244;
                                    if ( v1244 >= 0 )
                                    {
                                      v1246 = RtlUIntAdd(0, 4, (int *)&v1708);
                                      if ( v1246 < 0 )
                                      {
                                        v1245 = v1247;
                                      }
                                      else
                                      {
                                        if ( v1248 - v1708 < v1249 )
                                          goto LABEL_1408;
                                        v1634 = (SIZE_T)v1769;
                                        v1246 = RtlULongLongAdd((unsigned __int64)v1769, v1249, (__int64 *)&v1769);
                                        if ( v1246 >= 0 )
                                        {
                                          v1246 = RtlUIntAdd(v1708, v1250, (int *)&v1708);
                                          if ( v1246 >= 0 )
                                          {
                                            if ( v1251 - v1708 < 4 )
                                              goto LABEL_1408;
                                            v1456 = *(_DWORD *)v1769;
                                            v1246 = RtlULongLongAdd((unsigned __int64)v1769, 4LL, (__int64 *)&v1769);
                                            if ( v1246 >= 0 )
                                            {
                                              v1246 = RtlUIntAdd(v1708, 4, (int *)&v1708);
                                              if ( v1246 >= 0 )
                                              {
                                                if ( v1252 - v1708 < v1253 )
                                                  goto LABEL_1408;
                                                v1615 = v1769;
                                                v1246 = RtlULongLongAdd(
                                                          (unsigned __int64)v1769,
                                                          v1253,
                                                          (__int64 *)&v1769);
                                                if ( v1246 >= 0 )
                                                {
                                                  v1246 = RtlUIntAdd(v1708, v1254, (int *)&v1708);
                                                  if ( v1246 >= 0 )
                                                  {
                                                    if ( v1255 - v1708 < 4 )
                                                      goto LABEL_1408;
                                                    v1537 = *(_DWORD *)v1769;
                                                    v1246 = RtlULongLongAdd(
                                                              (unsigned __int64)v1769,
                                                              4LL,
                                                              (__int64 *)&v1769);
                                                    if ( v1246 >= 0 )
                                                    {
                                                      v1246 = RtlUIntAdd(v1708, 4, (int *)&v1708);
                                                      if ( v1246 >= 0 )
                                                      {
                                                        if ( v1256 - v1708 < v1537 )
                                                          goto LABEL_1408;
                                                        v1246 = RtlUIntAdd(v1708, v1537, (int *)&v1708);
                                                        if ( v1246 >= 0 )
                                                        {
                                                          if ( v1257 != v1708 || v1537 + v1258 + v1259 + 12LL != v1257 )
                                                            goto LABEL_1408;
                                                          v1260 = GetProcessHeap();
                                                          v1261 = (SIZE_T *)HeapAlloc(v1260, 8u, 0x30uLL);
                                                          v1606 = v1261;
                                                          v1262 = v1261;
                                                          if ( !v1261 )
                                                          {
                                                            v1246 = -1073741801;
LABEL_1449:
                                                            v1245 = 0LL;
                                                            v1605 = 0LL;
                                                            goto LABEL_1452;
                                                          }
                                                          v1246 = 0;
                                                          if ( v1634 )
                                                          {
                                                            *(_DWORD *)v1261 = v1419;
                                                            v1263 = GetProcessHeap();
                                                            v1264 = HeapAlloc(v1263, 8u, v1419);
                                                            if ( !v1264 )
                                                              goto LABEL_1438;
                                                            v1606[1] = (SIZE_T)v1264;
                                                            v1246 = 0;
                                                            memcpy_0(v1264, (const void *)v1634, v1419);
                                                            v1262 = v1606;
                                                            v1557 = (unsigned __int16 *)v1095;
                                                            v1636 = v1054;
                                                            v1510 = v1056;
                                                            v1644 = v1198;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)v1261 = 0;
                                                            v1261[1] = 0LL;
                                                          }
                                                          v1606 = v1262;
                                                          if ( !v1615 )
                                                          {
                                                            *((_DWORD *)v1262 + 4) = 0;
                                                            v1262[3] = 0LL;
LABEL_1436:
                                                            if ( v1769 )
                                                            {
                                                              *((_DWORD *)v1262 + 8) = v1537;
                                                              v1634 = v1537;
                                                              v1267 = GetProcessHeap();
                                                              v1268 = HeapAlloc(v1267, 8u, v1537);
                                                              if ( !v1268 )
                                                                goto LABEL_1438;
                                                              v1606[5] = (SIZE_T)v1268;
                                                              v1246 = 0;
                                                              memcpy_0(v1268, v1769, v1634);
                                                              v1262 = v1606;
                                                              v1557 = (unsigned __int16 *)v1095;
                                                              v1636 = v1054;
                                                              v1510 = v1056;
                                                              v1644 = v1198;
                                                            }
                                                            else
                                                            {
                                                              *((_DWORD *)v1262 + 8) = 0;
                                                              v1262[5] = 0LL;
                                                            }
                                                            v1245 = v1262;
                                                            v1605 = v1262;
                                                            goto LABEL_1452;
                                                          }
                                                          *((_DWORD *)v1262 + 4) = v1456;
                                                          v1634 = v1456;
                                                          v1265 = GetProcessHeap();
                                                          v1266 = HeapAlloc(v1265, 8u, v1456);
                                                          if ( v1266 )
                                                          {
                                                            v1606[3] = (SIZE_T)v1266;
                                                            v1246 = 0;
                                                            memcpy_0(v1266, v1615, v1634);
                                                            v1262 = v1606;
                                                            v1557 = (unsigned __int16 *)v1095;
                                                            v1636 = v1054;
                                                            v1510 = v1056;
                                                            v1644 = v1198;
                                                            goto LABEL_1436;
                                                          }
LABEL_1438:
                                                          v1269 = v1606;
                                                          v1246 = -1073741801;
                                                          v1634 = v1606[1];
                                                          if ( v1634 )
                                                          {
                                                            v1270 = GetProcessHeap();
                                                            HeapFree(v1270, 0, (LPVOID)v1634);
                                                            v1269 = v1606;
                                                            v1606[1] = 0LL;
                                                          }
                                                          v1634 = v1269[3];
                                                          if ( v1634 )
                                                          {
                                                            v1271 = GetProcessHeap();
                                                            HeapFree(v1271, 0, (LPVOID)v1634);
                                                            v1269 = v1606;
                                                            v1606[3] = 0LL;
                                                          }
                                                          v1634 = v1269[5];
                                                          if ( v1634 )
                                                          {
                                                            v1272 = GetProcessHeap();
                                                            HeapFree(v1272, 0, (LPVOID)v1634);
                                                            v1606[5] = 0LL;
                                                          }
                                                          v1273 = GetProcessHeap();
                                                          HeapFree(v1273, 0, v1606);
                                                          goto LABEL_1449;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            v1245 = 0LL;
                                          }
                                        }
                                      }
                                    }
LABEL_1452:
                                    v1129 = v1246 | 0x10000000;
                                    if ( v1129 < 0 )
                                      goto LABEL_1524;
                                    if ( !v1245 || (lpModuleNamen = (LPCWSTR)v1245[1]) == 0LL || !*(_DWORD *)v1245 )
                                    {
                                      v1129 = -805306355;
                                      goto LABEL_1524;
                                    }
                                    v1634 = *(unsigned int *)v1245 - 8LL;
                                    v1274 = v1634;
                                    v1635 = (SIZE_T)MemoryAlloc(v1634);
                                    v1275 = (_DWORD *)v1635;
                                    if ( !v1635 )
                                      goto LABEL_1482;
                                    v1276 = (unsigned __int8 *)lpModuleNamen;
                                    v1277 = 0;
                                    v1278 = v1605;
                                    v1840 = 0x7F1137FAB69605ELL;
                                    v1616 = (_BYTE *)v1635;
                                    v1279 = v1274 & 7;
                                    if ( (v1274 & 7) != 0 )
                                    {
                                      v1646 = 0;
                                      v1280 = 0;
                                      v1420 = 0;
                                      do
                                      {
                                        v1281 = *v1276;
                                        if ( v1280 >= 4 )
                                        {
                                          v1646 |= v1281 << v1647;
                                          v1282 = v1420;
                                        }
                                        else
                                        {
                                          v1282 = (v1281 << (v1647 - 32)) | v1420;
                                          v1420 = v1282;
                                        }
                                        v1647 -= 8;
                                        ++v1276;
                                        ++v1280;
                                      }
                                      while ( (int)v1280 < v1279 );
                                      v1283 = v1282 ^ 0x92F65A5;
                                      v1284 = v1276;
                                      v1285 = v1646 ^ 0x699A899C;
                                      v1286 = v1282 ^ 0x92F65A5;
                                      v1287 = 0;
                                      v1457 = 0;
                                      v1288 = v1646 ^ 0x699A899C;
                                      do
                                      {
                                        v1421 = v1282;
                                        if ( v1287 >= 4 )
                                        {
                                          v1288 = (v1288 << 8) | HIBYTE(v1288);
                                          v1289 = v1288;
                                        }
                                        else
                                        {
                                          v1286 = (v1286 << 8) | HIBYTE(v1286);
                                          v1289 = v1286;
                                        }
                                        *v1616 = v1289;
                                        v1287 = v1457 + 1;
                                        v1633 = ++v1616;
                                        v1457 = v1287;
                                      }
                                      while ( v1287 < v1279 );
                                      v1277 = 0;
                                      v99 = v1643;
                                      v1275 = (_DWORD *)v1635;
                                      v1616 = v1633;
                                      v1276 = v1284;
                                      v1644 = v1198;
                                      v1557 = (unsigned __int16 *)v1095;
                                      v1510 = v1056;
                                      v1636 = v1054;
                                      if ( (unsigned int)v1279 <= 4 )
                                      {
                                        v1290 = 0;
                                        if ( (unsigned int)v1279 < 4 )
                                          v1283 = v1283 >> (8 * (4 - v1279)) << (8 * (4 - v1279));
                                      }
                                      else
                                      {
                                        v1290 = v1285 >> (8 * (8 - v1279)) << (8 * (8 - v1279));
                                      }
                                    }
                                    else
                                    {
                                      v1283 = 0;
                                      v1421 = 0;
                                      v1290 = 0;
                                    }
                                    if ( v1634 >> 3 )
                                    {
                                      v1291 = HIDWORD(v1840);
                                      v1292 = v1276 + 2;
                                      v1293 = v1421;
                                      v1294 = v1616 + 7;
                                      v1295 = v1634 >> 3;
                                      v1296 = WORD1(v1840);
                                      v1297 = WORD2(v1840);
                                      do
                                      {
                                        v1298 = *(v1292 - 1) | (*(v1292 - 2) << 8);
                                        v1299 = v1292[2] << 8;
                                        v1300 = *v1292;
                                        v1292 += 8;
                                        v1301 = *(v1292 - 7) | ((v1300 | (v1298 << 8)) << 8);
                                        v1302 = v1301 ^ v1283;
                                        v1303 = *(v1292 - 3) | ((*(v1292 - 4) | ((*(v1292 - 5) | v1299) << 8)) << 8);
                                        v1304 = v1302 ^ v1291 ^ 0xAB69605E ^ v1303 ^ v1290;
                                        v1305 = (__ROR4__(v1304, 22) + v1297 * __ROR4__(v1304 + 1419157410, 27)) ^ v1302;
                                        v1306 = (v1296 * __ROR4__(v1305 + v1291, 9) - __ROR4__(v1305, 30)) ^ v1304;
                                        v1307 = (24670 * (v1306 - v1297) - (v1306 >> 13)) ^ v1305;
                                        v1308 = (HIWORD(v1840) * __ROR4__(v1307 ^ v1296, 26) - __ROR4__(v1307, 30)) ^ v1306;
                                        v1309 = (v1291 - (v1308 ^ 0xAB69605E)) ^ v1307;
                                        v1310 = (v1296 * (v1309 ^ v1297)) ^ __ROR4__(v1309, 6) ^ v1308;
                                        v1311 = (__ROR4__(v1310, 30) + 24670 * __ROR4__(v1310 + v1291, 15)) ^ v1309;
                                        v1312 = (HIWORD(v1840) * __ROR4__(v1311 + 1419157410, 14) - __ROR4__(v1311, 24)) ^ v1310;
                                        v1313 = __ROR4__(v1312, 10) ^ (v1297 * __ROR4__(v1312 ^ 0xAB69605E, 12)) ^ v1311;
                                        v1314 = (v1313 >> 10) ^ (v1296 * (v1313 ^ HIWORD(v1840))) ^ v1312;
                                        v1315 = (HIWORD(v1840) * (__ROR4__(~v1314, 5) + 24670)) ^ v1313;
                                        v1316 = (v1315 - HIWORD(v1840)) ^ 0xAB69605E ^ v1314;
                                        v1317 = ((v1316 >> 2) + v1297 * __ROR4__(v1316 ^ HIWORD(v1840), 30)) ^ v1315;
                                        v1318 = (__ROR4__(v1317, 25) + v1296 * __ROR4__(v1317 - v1291, 6)) ^ v1316;
                                        v1319 = (24670 * (v1318 ^ v1297) + __ROR4__(v1318, 9)) ^ v1317;
                                        v1320 = (__ROR4__(v1319, 25) + HIWORD(v1840) * __ROR4__(v1319 ^ v1296, 27)) ^ v1318;
                                        v1321 = v1291 ^ v1320 ^ v1319 ^ 0xAB69605E;
                                        v1322 = (v1297 * (__ROR4__(v1321, 3) - v1296)) ^ v1320;
                                        v1323 = (24670 * __ROR4__(v1322 - v1291, 1) - __ROR4__(v1322, 6)) ^ v1321;
                                        v1324 = (__ROR4__(v1323, 18) + HIWORD(v1840) * __ROR4__(v1323 - 1419157410, 29)) ^ v1322;
                                        v1325 = (v1297 * __ROR4__(v1324 - 1419157410, 17) - __ROR4__(v1324, 14)) ^ v1323;
                                        v1326 = (v1325 >> 3) ^ (v1296 * (v1325 ^ 0x605E)) ^ v1324;
                                        v1458 = v1646 ^ v1326;
                                        v1646 = v1303;
                                        v1327 = v1293 ^ v1325 ^ __ROR4__(v1326, 30) ^ (24670
                                                                                     * __ROR4__(v1291 ^ v1326, 28));
                                        *(v1294 - 4) = v1327;
                                        v1293 = v1301;
                                        *v1294 = v1458;
                                        v1422 = v1327;
                                        v1294 += 8;
                                        v1328 = (v1327 >> 8) | (v1327 << 24);
                                        *(v1294 - 13) = v1328;
                                        *(v1294 - 9) = BYTE1(v1458);
                                        v1283 = v1422;
                                        *(v1294 - 14) = BYTE1(v1328);
                                        *(v1294 - 10) = (unsigned __int16)(v1458 >> 8) >> 8;
                                        *(v1294 - 15) = __ROR4__((v1328 >> 8) | (v1328 << 24), 8);
                                        v1290 = v1458;
                                        *(v1294 - 11) = __ROR4__(
                                                          (((v1458 >> 8) | (v1458 << 24)) >> 8) | (((v1458 >> 8) | (v1458 << 24)) << 24),
                                                          8);
                                        --v1295;
                                      }
                                      while ( v1295 );
                                      v1277 = 0;
                                      v99 = v1643;
                                      v1054 = (WCHAR *)v1636;
                                      v1056 = v1510;
                                      v1095 = (int *)v1557;
                                      v1198 = v1644;
                                      v1278 = v1605;
                                      v1275 = (_DWORD *)v1635;
                                    }
                                    for ( n = 0LL; n < v1634; ++n )
                                      v1277 ^= *((_BYTE *)v1275 + n);
                                    v1330 = v1278;
                                    v1636 = (LPCWSTR)v1198;
                                    v1605 = v1278;
                                    if ( v1277 != *(_QWORD *)((char *)lpModuleNamen + v1634) )
                                    {
                                      MemoryFree(v1275);
LABEL_1482:
                                      v1129 = -805306367;
                                      v1635 = 0LL;
                                      goto LABEL_1524;
                                    }
                                    v1770 = v1275;
                                    v1709 = 0;
                                    if ( (unsigned int)v1634 < 4 )
                                      goto LABEL_1484;
                                    v1423 = *v1275;
                                    v1224 = RtlULongLongAdd((unsigned __int64)v1275, 4LL, (__int64 *)&v1770);
                                    v1635 = v1331;
                                    v1605 = v1332;
                                    if ( v1224 < 0 )
                                      goto LABEL_1363;
                                    v1333 = RtlUIntAdd(0, 4, (int *)&v1709);
                                    v1336 = lpMemo;
                                    v1224 = v1333;
                                    v1635 = v1334;
                                    v1605 = v1335;
                                    if ( v1333 < 0 )
                                      goto LABEL_1363;
                                    if ( (unsigned int)v1634 - v1709 < 4 )
                                      goto LABEL_1488;
                                    v1459 = *(_DWORD *)v1770;
                                    v1224 = RtlULongLongAdd((unsigned __int64)v1770, 4LL, (__int64 *)&v1770);
                                    v1635 = v1337;
                                    v1605 = v1338;
                                    if ( v1224 < 0 )
                                      goto LABEL_1363;
                                    v1339 = RtlUIntAdd(v1709, 4, (int *)&v1709);
                                    v1336 = lpMemo;
                                    v1224 = v1339;
                                    v1635 = v1334;
                                    v1605 = v1335;
                                    if ( v1339 < 0 )
                                      goto LABEL_1363;
                                    if ( (unsigned int)v1634 - v1709 < v1459 )
                                    {
LABEL_1488:
                                      v1224 = -1073741762;
                                      v1635 = v1334;
                                      v1605 = v1335;
                                      lpMemo = v1336;
                                      goto LABEL_1363;
                                    }
                                    v1224 = RtlUIntAdd(v1709, v1459, (int *)&v1709);
                                    v1635 = (SIZE_T)v1275;
                                    v1605 = v1330;
                                    if ( v1224 < 0 )
                                      goto LABEL_1363;
                                    v1340 = v1770;
                                    if ( (char *)v1275 + (unsigned int)v1634 < (char *)v1770 + v1459
                                      || (unsigned __int64)v1275 + (unsigned int)v1634 - (_QWORD)v1770 - v1459 >= 8 )
                                    {
                                      v1198 = (void *)v1636;
LABEL_1484:
                                      v1224 = -1073741762;
                                      v1605 = v1330;
                                      v1635 = (SIZE_T)v1275;
                                      goto LABEL_1363;
                                    }
                                    v1635 = (SIZE_T)v1275;
                                    lpModuleNameo = 0LL;
                                    v1341 = 0LL;
                                    v1771[0] = 0LL;
                                    v1224 = 0;
                                    v1729 = 0LL;
                                    v1740[0] = 0LL;
                                    v1538 = 0;
                                    v1644 = (LPVOID)v1636;
                                    v1605 = v1330;
                                    if ( v1770 )
                                    {
                                      v1634 = (SIZE_T)v1770;
                                      v1224 = RtlULongLongAdd((unsigned __int64)v1770, v1459, v1771);
                                      v1635 = v1342;
                                      v1605 = v1343;
                                      v1644 = (LPVOID)v1636;
                                      if ( v1224 < 0 )
                                      {
LABEL_1521:
                                        v1198 = v1644;
                                        goto LABEL_1363;
                                      }
                                      v1344 = v1634;
                                      v1198 = (void *)v1636;
                                      v1635 = v1342;
                                      v1605 = v1343;
                                      v1644 = (LPVOID)v1636;
                                      if ( v1634 < v1771[0] )
                                      {
                                        v1345 = v1342;
                                        v1635 = v1342;
                                        v1605 = v1343;
                                        v1644 = (LPVOID)v1636;
                                        while ( 1 )
                                        {
                                          v1636 = (LPCWSTR)v1198;
                                          v1224 = RtlULongLongAdd(v1344, 4LL, (__int64 *)&v1729);
                                          if ( v1224 < 0 )
                                            goto LABEL_1521;
                                          if ( v1729 > v1771[0] )
                                            goto LABEL_1506;
                                          v1347 = *v1346;
                                          v1710 = 0;
                                          v1224 = RtlUIntAdd(4u, v1347, (int *)&v1710);
                                          if ( v1224 < 0 )
                                            goto LABEL_1363;
                                          v1224 = RtlULongLongAdd(v1348, v1710, (__int64 *)v1740);
                                          v1644 = (LPVOID)v1636;
                                          v1635 = v1345;
                                          v1605 = v1350;
                                          lpMemo = v1349;
                                          if ( v1224 < 0 )
                                            goto LABEL_1521;
                                          v1344 = v1740[0];
                                          v1198 = (void *)v1636;
                                          v1351 = v1771[0];
                                          v1634 = v1740[0];
                                          v1635 = v1345;
                                          v1605 = v1350;
                                          lpMemo = v1349;
                                          if ( v1740[0] > v1771[0] )
                                            goto LABEL_1506;
                                          ++v1538;
                                          v1644 = (LPVOID)v1636;
                                          if ( v1740[0] >= v1771[0] )
                                          {
                                            v1644 = (LPVOID)v1636;
                                            lpMemo = v1349;
                                            v1635 = v1345;
                                            v1605 = v1350;
                                            goto LABEL_1508;
                                          }
                                        }
                                      }
                                      v1351 = v1771[0];
LABEL_1508:
                                      if ( v1344 != v1351 )
                                      {
LABEL_1506:
                                        v1224 = -1073741811;
                                        goto LABEL_1363;
                                      }
                                      v1340 = v1770;
                                      v1341 = 0LL;
                                    }
                                    v1352 = v1459;
                                    if ( v1459 )
                                    {
                                      v1353 = GetProcessHeap();
                                      lpModuleNameo = (LPCWSTR)HeapAlloc(v1353, 8u, v1459);
                                      v1341 = (WCHAR *)lpModuleNameo;
                                      if ( !lpModuleNameo )
                                      {
                                        v1224 = -1073741801;
                                        goto LABEL_1516;
                                      }
                                      v1352 = v1459;
                                      v1224 = 0;
                                    }
                                    if ( v1340 )
                                    {
                                      memcpy_0(v1341, v1340, v1352);
                                      v1341 = (WCHAR *)lpModuleNameo;
                                    }
                                    LODWORD(v1787[0]) = v1538;
                                    v1787[1] = v1341;
LABEL_1516:
                                    if ( v1224 >= 0 )
                                    {
                                      v1198 = v1644;
                                      if ( v1423 != LODWORD(v1787[0]) )
                                        v1224 = -1073741762;
                                      goto LABEL_1363;
                                    }
                                    goto LABEL_1521;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_1524:
          if ( !v1198 )
            goto LABEL_1526;
          goto LABEL_1525;
        }
LABEL_1233:
        v1779[0] = 0LL;
        v1074 = (void *)v1779[1];
        if ( v1779[1] )
        {
          v1075 = GetProcessHeap();
          HeapFree(v1075, 0, v1074);
          v1779[1] = 0LL;
        }
        v1787[0] = 0LL;
        v1076 = v1787[1];
        if ( v1787[1] )
        {
          v1077 = GetProcessHeap();
          HeapFree(v1077, 0, v1076);
          v1787[1] = 0LL;
        }
        if ( v1056 )
        {
          v1078 = GetProcessHeap();
          HeapFree(v1078, 0, v1056);
        }
        if ( v1054 )
        {
          v1079 = GetProcessHeap();
          HeapFree(v1079, 0, v1054);
        }
        goto LABEL_1241;
      }
      v1118 = (v1703 + 7) & 0xFFFFFFF8;
      if ( v1118 < v1703 )
        goto LABEL_1233;
      v1703 = (v1703 + 7) & 0xFFFFFFF8;
      v1119 = v1118;
      v1120 = GetProcessHeap();
      v1121 = HeapAlloc(v1120, 8u, v1119);
      v1117 = 0LL;
      v1502 = v1121;
      if ( v1121 )
      {
        *v1121 = v1779[0];
        v1763 = v1121;
        v1122 = RtlULongLongAdd((unsigned __int64)v1121, 4LL, (__int64 *)&v1763);
        v1636 = v1124;
        v1115 = v1122;
        if ( v1122 >= 0 )
        {
          v1125 = v1763;
          *(_DWORD *)v1763 = HIDWORD(v1779[0]);
          v1126 = RtlULongLongAdd((unsigned __int64)v1125, v1123, (__int64 *)&v1763);
          v1636 = v1127;
          v1115 = v1126;
          if ( v1126 >= 0 )
          {
            *(_QWORD *)((char *)v1127 + v1703 - 8) = lpModuleNamel;
            memcpy_0(v1763, (const void *)v1779[1], HIDWORD(v1779[0]));
            v1117 = 0LL;
            v1116 = v1703;
            v1644 = v1502;
            v1454 = v1703;
LABEL_1290:
            v1636 = v1054;
            v1501 = v1056;
            goto LABEL_1291;
          }
        }
        v1128 = GetProcessHeap();
        HeapFree(v1128, 0, (LPVOID)v1636);
        v1117 = 0LL;
      }
      else
      {
        v1115 = -1073741801;
      }
      v1116 = 0;
      goto LABEL_1290;
    }
    lpMemk = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                0LL,
                                                0LL,
                                                1027LL);
    if ( !lpMemk )
    {
      GetLastError();
      goto LABEL_1218;
    }
    v489 = off_1808C03D8[0]();
    v490 = dword_1808C9398;
    qword_1808CCC38 = v489;
    v1594 = dword_1808C9398;
    memset_0(&v1822, 0, 0x70uLL);
    v1604 = 0LL;
    v1843 = 0LL;
    memset(v1856, 0, 44);
    v1635 = 0LL;
    while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
      ;
    v491 = dword_1808CCC34;
    if ( dword_1808CCC34 )
      goto LABEL_656;
    v1577 = 0;
    Sizee = 0;
    v492 = (char *)MemoryAlloc(0x338uLL);
    lpModuleNamec = (WCHAR *)v492;
    if ( !v492 )
      goto LABEL_619;
    v493 = v492 + 7;
    v494 = -1;
    v495 = (unsigned __int8 *)&unk_18077F812;
    v496 = 0;
    v497 = 0;
    v498 = 103LL;
    do
    {
      v499 = *(v495 - 1) | (*(v495 - 2) << 8);
      v500 = v495[2] << 8;
      v501 = *v495;
      v495 += 8;
      v502 = *(v495 - 7) | ((v501 | (v499 << 8)) << 8);
      v503 = v502 ^ v497;
      v504 = *(v495 - 3) | ((*(v495 - 4) | ((*(v495 - 5) | v500) << 8)) << 8);
      v505 = v503 ^ v504 ^ v306 ^ 0xAC987321;
      v506 = (__ROR4__(v505, 22) + 4991 * __ROR4__(v505 + 1419157410, 27)) ^ v503;
      v507 = (43881 * __ROR4__(v506 + 133239679, 9) - __ROR4__(v506, 30)) ^ v505;
      v508 = (24670 * v507 - (v507 >> 13) - 123127970) ^ v506;
      v509 = (2033 * __ROR4__(v508 ^ 0xAB69, 26) - __ROR4__(v508, 30)) ^ v507;
      v510 = (133239679 - (v509 ^ 0xAB69605E)) ^ v508;
      v511 = (43881 * (v510 ^ 0x137F)) ^ __ROR4__(v510, 6) ^ v509;
      v512 = (__ROR4__(v511, 30) + 24670 * __ROR4__(v511 + 133239679, 15)) ^ v510;
      v513 = (2033 * __ROR4__(v512 + 1419157410, 14) - __ROR4__(v512, 24)) ^ v511;
      v514 = __ROR4__(v513, 10) ^ (4991 * __ROR4__(v513 ^ 0xAB69605E, 12)) ^ v512;
      v515 = (v514 >> 10) ^ (43881 * (v514 ^ 0x7F1)) ^ v513;
      v516 = (2033 * (__ROR4__(~v515, 5) + 24670)) ^ v514;
      v517 = v515 ^ (v516 - 2033) ^ 0xAB69605E;
      v518 = ((v517 >> 2) + 4991 * __ROR4__(v515 ^ (v516 - 2033) ^ 0xAB6967AF, 30)) ^ v516;
      v519 = (__ROR4__(v518, 25) + 43881 * __ROR4__(v518 - 133239679, 6)) ^ v517;
      v520 = (24670 * (v519 ^ 0x137F) + __ROR4__(v519, 9)) ^ v518;
      v521 = (__ROR4__(v520, 25) + 2033 * __ROR4__(v520 ^ 0xAB69, 27)) ^ v519;
      v522 = v520 ^ v521 ^ 0xAC987321;
      v523 = (4991 * __ROR4__(v522, 3) - 219010071) ^ v521;
      v524 = (24670 * __ROR4__(v523 - 133239679, 1) - __ROR4__(v523, 6)) ^ v522;
      v525 = (__ROR4__(v524, 18) + 2033 * __ROR4__(v524 - 1419157410, 29)) ^ v523;
      v526 = (4991 * __ROR4__(v525 - 1419157410, 17) - __ROR4__(v525, 14)) ^ v524;
      v527 = (v526 >> 3) ^ (43881 * (v526 ^ 0x605E)) ^ v525;
      v528 = 24670 * __ROR4__(v527 ^ 0x7F1137F, 28);
      v529 = __ROR4__(v527, 30);
      v306 = v494 ^ v527;
      v494 = v504;
      v497 = v496 ^ v526 ^ v529 ^ v528;
      *(v493 - 4) = v497;
      *v493 = v306;
      v493 += 8;
      v496 = v502;
      *(v493 - 13) = BYTE1(v497);
      *(v493 - 9) = BYTE1(v306);
      *(v493 - 14) = (unsigned __int16)(v497 >> 8) >> 8;
      *(v493 - 10) = (unsigned __int16)(v306 >> 8) >> 8;
      *(v493 - 15) = __ROR4__((((v497 >> 8) | (v497 << 24)) >> 8) | (((v497 >> 8) | (v497 << 24)) << 24), 8);
      *(v493 - 11) = __ROR4__((((v306 >> 8) | (v306 << 24)) >> 8) | (((v306 >> 8) | (v306 << 24)) << 24), 8);
      --v498;
    }
    while ( v498 );
    v490 = v1594;
    v99 = v1643;
    v530 = 0LL;
    v531 = lpModuleNamec;
    v532 = 0;
    do
      v532 ^= *((_BYTE *)lpModuleNamec + v530++);
    while ( v530 < 0x338 );
    if ( v532 != 64LL )
    {
      MemoryFree(lpModuleNamec);
      goto LABEL_619;
    }
    *((_BYTE *)lpModuleNamec + 823) = 0;
    memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
    if ( *(_BYTE *)lpModuleNamec )
    {
      v1741 = lpModuleNamec;
      while ( 1 )
      {
        v551 = v531;
        v552 = -1LL;
        do
          ++v552;
        while ( v531[v552] );
        v553 = &v531[v552];
        v554 = &qword_1808C93A0[3 * Sizee];
        if ( !GetModuleHandleExW(0, v551, v554) )
          break;
        v555 = 0;
        if ( *(_WORD *)*v554 == 23117
          && (v556 = *((int *)*v554 + 15), (unsigned int)v556 < 0x10000000)
          && (v557 = (char *)*v554 + v556, v557 >= (char *)*v554)
          && *(_DWORD *)v557 == 17744 )
        {
          if ( ((*((_WORD *)v557 + 12) - 267) & 0xFEFF) != 0 )
          {
            v555 = -1073741811;
          }
          else
          {
            *(HMODULE *)((char *)v554 + 12) = (HMODULE)*((_QWORD *)v557 + 17);
            *((_DWORD *)v554 + 2) = *((_DWORD *)v557 + 20);
          }
        }
        else
        {
          v555 = -1073741701;
        }
        v558 = *(_DWORD *)(v553 + 1);
        v559 = 0;
        v531 = v553 + 3;
        v1488 = v558;
        if ( v558 )
        {
          v560 = 3LL * Sizee;
          do
          {
            v561 = (const CHAR *)v531;
            v562 = -1LL;
            do
              ++v562;
            while ( *((_BYTE *)v531 + v562) );
            v531 = (WCHAR *)((char *)v531 + v562 + 1);
            if ( v555 >= 0 )
            {
              v563 = GetProcAddress(qword_1808C93A0[v560], v561);
              if ( !v563 )
                goto LABEL_650;
              off_1808C0340[v1577] = v563;
              v560 = 3LL * Sizee;
            }
            ++v1577;
            ++v559;
          }
          while ( v559 < v1488 );
        }
        ++Sizee;
        if ( !*(_BYTE *)v531 )
          goto LABEL_650;
      }
      v555 = -1073741702;
LABEL_650:
      v531 = (WCHAR *)v1741;
      if ( !v1741 )
        goto LABEL_654;
    }
    else
    {
      v555 = 0;
    }
    v564 = GetProcessHeap();
    HeapFree(v564, 0, v531);
LABEL_654:
    if ( v555 < 0 )
    {
LABEL_619:
      v533 = 4LL;
      v534 = qword_1808C93A0;
      do
      {
        if ( *v534 )
          FreeLibrary(*v534);
        v534 += 3;
        --v533;
      }
      while ( v533 );
      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
      v535 = 2LL;
      v536 = off_1808C0340;
      v537 = off_1807174F0;
      do
      {
        v538 = *((_OWORD *)v537 + 1);
        *(_OWORD *)v536 = *(_OWORD *)v537;
        v539 = *((_OWORD *)v537 + 2);
        *((_OWORD *)v536 + 1) = v538;
        v540 = *((_OWORD *)v537 + 3);
        *((_OWORD *)v536 + 2) = v539;
        v541 = *((_OWORD *)v537 + 4);
        *((_OWORD *)v536 + 3) = v540;
        v542 = *((_OWORD *)v537 + 5);
        *((_OWORD *)v536 + 4) = v541;
        v543 = *((_OWORD *)v537 + 6);
        *((_OWORD *)v536 + 5) = v542;
        v544 = *((_OWORD *)v537 + 7);
        v537 += 16;
        *((_OWORD *)v536 + 6) = v543;
        v536 += 16;
        *((_OWORD *)v536 - 1) = v544;
        --v535;
      }
      while ( v535 );
      v545 = *((_OWORD *)v537 + 1);
      *(_OWORD *)v536 = *(_OWORD *)v537;
      v546 = *((_OWORD *)v537 + 2);
      *((_OWORD *)v536 + 1) = v545;
      v547 = *((_OWORD *)v537 + 3);
      *((_OWORD *)v536 + 2) = v546;
      v548 = *((_OWORD *)v537 + 4);
      *((_OWORD *)v536 + 3) = v547;
      v549 = *((_OWORD *)v537 + 5);
      *((_OWORD *)v536 + 4) = v548;
      v550 = *((_OWORD *)v537 + 6);
      *((_OWORD *)v536 + 5) = v549;
      *((_OWORD *)v536 + 6) = v550;
LABEL_657:
      v1578 = 0;
      v1489 = 0;
      _InterlockedExchange(&dword_1808CCC40, 0);
      Sizef = 0;
      v565 = 0;
      v1894 = 0;
      v1639 = 0;
      v1742 = 0LL;
      lpModuleNamed = 0LL;
      v1637 = 0LL;
      v1408 = 0LL;
      v1895 = 0;
      v1788 = 0LL;
      while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
        ;
      v566 = dword_1808CCC34;
      if ( dword_1808CCC34 )
        goto LABEL_705;
      v1540 = 0;
      LODWORD(v1642) = 0;
      v567 = (char *)MemoryAlloc(0x338uLL);
      v1443 = (WCHAR *)v567;
      if ( !v567 )
        goto LABEL_667;
      LODWORD(v1640) = -1;
      v568 = v567 + 7;
      v569 = -1;
      v570 = (unsigned __int8 *)&unk_18077F812;
      v571 = 0;
      v572 = 0;
      v573 = 103LL;
      do
      {
        v574 = *(v570 - 1) | (*(v570 - 2) << 8);
        v575 = v570[2] << 8;
        v576 = *v570;
        v570 += 8;
        v577 = *(v570 - 7) | ((v576 | (v574 << 8)) << 8);
        v578 = v577 ^ v572;
        v579 = *(v570 - 3) | ((*(v570 - 4) | ((*(v570 - 5) | v575) << 8)) << 8);
        v580 = v578 ^ v579 ^ v565 ^ 0xAC987321;
        v581 = (__ROR4__(v580, 22) + 4991 * __ROR4__(v580 + 1419157410, 27)) ^ v578;
        v582 = (43881 * __ROR4__(v581 + 133239679, 9) - __ROR4__(v581, 30)) ^ v580;
        v583 = (24670 * v582 - (v582 >> 13) - 123127970) ^ v581;
        v584 = (2033 * __ROR4__(v583 ^ 0xAB69, 26) - __ROR4__(v583, 30)) ^ v582;
        v585 = (133239679 - (v584 ^ 0xAB69605E)) ^ v583;
        v586 = (43881 * (v585 ^ 0x137F)) ^ __ROR4__(v585, 6) ^ v584;
        v587 = (__ROR4__(v586, 30) + 24670 * __ROR4__(v586 + 133239679, 15)) ^ v585;
        v588 = (2033 * __ROR4__(v587 + 1419157410, 14) - __ROR4__(v587, 24)) ^ v586;
        v589 = __ROR4__(v588, 10) ^ (4991 * __ROR4__(v588 ^ 0xAB69605E, 12)) ^ v587;
        v590 = (v589 >> 10) ^ (43881 * (v589 ^ 0x7F1)) ^ v588;
        v591 = (2033 * (__ROR4__(~v590, 5) + 24670)) ^ v589;
        v592 = v590 ^ (v591 - 2033) ^ 0xAB69605E;
        v593 = ((v592 >> 2) + 4991 * __ROR4__(v590 ^ (v591 - 2033) ^ 0xAB6967AF, 30)) ^ v591;
        v594 = (__ROR4__(v593, 25) + 43881 * __ROR4__(v593 - 133239679, 6)) ^ v592;
        v595 = (24670 * (v594 ^ 0x137F) + __ROR4__(v594, 9)) ^ v593;
        v596 = (__ROR4__(v595, 25) + 2033 * __ROR4__(v595 ^ 0xAB69, 27)) ^ v594;
        v597 = v595 ^ v596 ^ 0xAC987321;
        v598 = (4991 * __ROR4__(v597, 3) - 219010071) ^ v596;
        v599 = (24670 * __ROR4__(v598 - 133239679, 1) - __ROR4__(v598, 6)) ^ v597;
        v600 = (__ROR4__(v599, 18) + 2033 * __ROR4__(v599 - 1419157410, 29)) ^ v598;
        v601 = (4991 * __ROR4__(v600 - 1419157410, 17) - __ROR4__(v600, 14)) ^ v599;
        v602 = (v601 >> 3) ^ (43881 * (v601 ^ 0x605E)) ^ v600;
        v603 = 24670 * __ROR4__(v602 ^ 0x7F1137F, 28);
        v604 = __ROR4__(v602, 30);
        v565 = v569 ^ v602;
        v569 = v579;
        v572 = v571 ^ v601 ^ v604 ^ v603;
        *(v568 - 4) = v572;
        *v568 = v565;
        v568 += 8;
        v571 = v577;
        *(v568 - 13) = BYTE1(v572);
        *(v568 - 9) = BYTE1(v565);
        *(v568 - 14) = (unsigned __int16)(v572 >> 8) >> 8;
        *(v568 - 10) = (unsigned __int16)((unsigned int)v565 >> 8) >> 8;
        *(v568 - 15) = __ROR4__((((v572 >> 8) | (v572 << 24)) >> 8) | (((v572 >> 8) | (v572 << 24)) << 24), 8);
        *(v568 - 11) = __ROR4__(
                         ((((unsigned int)v565 >> 8) | (v565 << 24)) >> 8) | ((((unsigned int)v565 >> 8) | (v565 << 24)) << 24),
                         8);
        --v573;
      }
      while ( v573 );
      v490 = v1594;
      v565 = 0;
      v99 = v1643;
      v605 = 0LL;
      v606 = v1443;
      v607 = 0;
      do
        v607 ^= *((_BYTE *)v1443 + v605++);
      while ( v605 < 0x338 );
      if ( v607 != 64LL )
      {
        MemoryFree(v1443);
        goto LABEL_667;
      }
      *((_BYTE *)v1443 + 823) = 0;
      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
      if ( *(_BYTE *)v1443 )
      {
        v1743 = v1443;
        while ( 1 )
        {
          v626 = v606;
          v627 = -1LL;
          do
            ++v627;
          while ( v606[v627] );
          v628 = &v606[v627];
          v629 = &qword_1808C93A0[3 * (unsigned int)v1642];
          if ( !GetModuleHandleExW(0, v626, v629) )
            break;
          v630 = 0;
          if ( *(_WORD *)*v629 == 23117
            && (v631 = *((int *)*v629 + 15), (unsigned int)v631 < 0x10000000)
            && (v632 = (char *)*v629 + v631, v632 >= (char *)*v629)
            && *(_DWORD *)v632 == 17744 )
          {
            if ( ((*((_WORD *)v632 + 12) - 267) & 0xFEFF) != 0 )
            {
              v630 = -1073741811;
            }
            else
            {
              *(HMODULE *)((char *)v629 + 12) = (HMODULE)*((_QWORD *)v632 + 17);
              *((_DWORD *)v629 + 2) = *((_DWORD *)v632 + 20);
            }
          }
          else
          {
            v630 = -1073741701;
          }
          v633 = *(_DWORD *)(v628 + 1);
          v634 = 0;
          v606 = v628 + 3;
          LODWORD(v1640) = v633;
          if ( v633 )
          {
            v635 = 3LL * (unsigned int)v1642;
            v1444 = (LPCWSTR)v635;
            do
            {
              v636 = (const CHAR *)v606;
              v637 = -1LL;
              do
                ++v637;
              while ( *((_BYTE *)v606 + v637) );
              v606 = (WCHAR *)((char *)v606 + v637 + 1);
              if ( v630 >= 0 )
              {
                v638 = GetProcAddress(qword_1808C93A0[v635], v636);
                if ( !v638 )
                  goto LABEL_698;
                off_1808C0340[v1540] = v638;
                v635 = (__int64)v1444;
              }
              ++v1540;
              ++v634;
            }
            while ( v634 < (unsigned int)v1640 );
          }
          LODWORD(v1642) = (_DWORD)v1642 + 1;
          v565 = 0;
          if ( !*(_BYTE *)v606 )
            goto LABEL_699;
        }
        v630 = -1073741702;
LABEL_698:
        v565 = 0;
LABEL_699:
        v606 = (WCHAR *)v1743;
        if ( !v1743 )
          goto LABEL_703;
      }
      else
      {
        v630 = 0;
      }
      v639 = GetProcessHeap();
      HeapFree(v639, 0, v606);
LABEL_703:
      if ( v630 < 0 )
      {
LABEL_667:
        v608 = 4LL;
        v609 = qword_1808C93A0;
        do
        {
          if ( *v609 )
            FreeLibrary(*v609);
          v609 += 3;
          --v608;
        }
        while ( v608 );
        memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
        v610 = 2LL;
        v611 = off_1808C0340;
        v612 = off_1807174F0;
        do
        {
          v613 = *((_OWORD *)v612 + 1);
          *(_OWORD *)v611 = *(_OWORD *)v612;
          v614 = *((_OWORD *)v612 + 2);
          *((_OWORD *)v611 + 1) = v613;
          v615 = *((_OWORD *)v612 + 3);
          *((_OWORD *)v611 + 2) = v614;
          v616 = *((_OWORD *)v612 + 4);
          *((_OWORD *)v611 + 3) = v615;
          v617 = *((_OWORD *)v612 + 5);
          *((_OWORD *)v611 + 4) = v616;
          v618 = *((_OWORD *)v612 + 6);
          *((_OWORD *)v611 + 5) = v617;
          v619 = *((_OWORD *)v612 + 7);
          v612 += 16;
          *((_OWORD *)v611 + 6) = v618;
          v611 += 16;
          *((_OWORD *)v611 - 1) = v619;
          --v610;
        }
        while ( v610 );
        v620 = *((_OWORD *)v612 + 1);
        *(_OWORD *)v611 = *(_OWORD *)v612;
        v621 = *((_OWORD *)v612 + 2);
        *((_OWORD *)v611 + 1) = v620;
        v622 = *((_OWORD *)v612 + 3);
        *((_OWORD *)v611 + 2) = v621;
        v623 = *((_OWORD *)v612 + 4);
        *((_OWORD *)v611 + 3) = v622;
        v624 = *((_OWORD *)v612 + 5);
        *((_OWORD *)v611 + 4) = v623;
        v625 = *((_OWORD *)v612 + 6);
        *((_OWORD *)v611 + 5) = v624;
        *((_OWORD *)v611 + 6) = v625;
LABEL_706:
        _InterlockedExchange(&dword_1808CCC40, 0);
        memset_0(&v1822, 0, 0x70uLL);
        LODWORD(v1640) = v490 & 0xF;
        LOWORD(v1894) = (v490 >> 4) & 0xF;
        HIWORD(v1894) = (v490 >> 8) & 0xF;
        v1895 = (v490 >> 12) & 0xF;
        v1843 = 0LL;
        v1445 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
        LODWORD(v1642) = 0xFFFFFF;
        if ( !v1445 )
        {
          v640 = GetLastError();
          v565 = v640;
          if ( v640 > 0 )
            v565 = (unsigned __int16)v640 | 0x80070000;
          if ( v565 >= 0 )
            v565 = -2147467259;
LABEL_837:
          v738 = 1;
          while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
            ;
          v739 = dword_1808CCC34;
          if ( dword_1808CCC34 > 0 )
          {
            --dword_1808CCC34;
            if ( v739 == 1 )
            {
              v740 = 4LL;
              v741 = qword_1808C93A0;
              do
              {
                if ( *v741 )
                  FreeLibrary(*v741);
                v741 += 3;
                --v740;
              }
              while ( v740 );
              memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
              v742 = 2LL;
              v743 = off_1808C0340;
              v744 = off_1807174F0;
              do
              {
                v745 = *((_OWORD *)v744 + 1);
                *(_OWORD *)v743 = *(_OWORD *)v744;
                v746 = *((_OWORD *)v744 + 2);
                *((_OWORD *)v743 + 1) = v745;
                v747 = *((_OWORD *)v744 + 3);
                *((_OWORD *)v743 + 2) = v746;
                v748 = *((_OWORD *)v744 + 4);
                *((_OWORD *)v743 + 3) = v747;
                v749 = *((_OWORD *)v744 + 5);
                *((_OWORD *)v743 + 4) = v748;
                v750 = *((_OWORD *)v744 + 6);
                *((_OWORD *)v743 + 5) = v749;
                v751 = *((_OWORD *)v744 + 7);
                v744 += 16;
                *((_OWORD *)v743 + 6) = v750;
                v743 += 16;
                *((_OWORD *)v743 - 1) = v751;
                --v742;
              }
              while ( v742 );
              v738 = 1;
              v752 = *((_OWORD *)v744 + 1);
              *(_OWORD *)v743 = *(_OWORD *)v744;
              v753 = *((_OWORD *)v744 + 2);
              *((_OWORD *)v743 + 1) = v752;
              v754 = *((_OWORD *)v744 + 3);
              *((_OWORD *)v743 + 2) = v753;
              v755 = *((_OWORD *)v744 + 4);
              *((_OWORD *)v743 + 3) = v754;
              v756 = *((_OWORD *)v744 + 5);
              *((_OWORD *)v743 + 4) = v755;
              v757 = *((_OWORD *)v744 + 6);
              *((_OWORD *)v743 + 5) = v756;
              *((_OWORD *)v743 + 6) = v757;
            }
          }
          _InterlockedExchange(&dword_1808CCC40, 0);
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1742);
          if ( v565 < 0 )
          {
LABEL_1132:
            if ( v1824 )
            {
              v935 = -1LL;
              do
                ++v935;
              while ( *((_WORD *)v1824 + v935) );
              memset(v1824, 0, 2 * v935 + 2);
              MemoryFree(v1824);
              v1824 = 0LL;
            }
            if ( v1825 )
            {
              v936 = -1LL;
              do
                ++v936;
              while ( *((_WORD *)v1825 + v936) );
              memset(v1825, 0, 2 * v936 + 2);
              MemoryFree(v1825);
              v1825 = 0LL;
            }
            if ( v1826 )
            {
              v937 = -1LL;
              do
                ++v937;
              while ( *((_WORD *)v1826 + v937) );
              memset(v1826, 0, 2 * v937 + 2);
              MemoryFree(v1826);
              v1826 = 0LL;
            }
            if ( v1827 )
            {
              off_1808C0378();
              v1827 = 0LL;
            }
            if ( v1828 )
            {
              off_1808C0378();
              v1828 = 0LL;
            }
            if ( v1829 )
            {
              off_1808C0378();
              v1829 = 0LL;
            }
            while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
              ;
            v938 = dword_1808CCC34;
            if ( dword_1808CCC34 > 0 )
            {
              --dword_1808CCC34;
              if ( v938 == 1 )
              {
                v939 = 4LL;
                v940 = qword_1808C93A0;
                do
                {
                  if ( *v940 )
                    FreeLibrary(*v940);
                  v940 += 3;
                  --v939;
                }
                while ( v939 );
                memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                v941 = 2LL;
                v942 = off_1808C0340;
                v943 = off_1807174F0;
                do
                {
                  v944 = *((_OWORD *)v943 + 1);
                  *(_OWORD *)v942 = *(_OWORD *)v943;
                  v945 = *((_OWORD *)v943 + 2);
                  *((_OWORD *)v942 + 1) = v944;
                  v946 = *((_OWORD *)v943 + 3);
                  *((_OWORD *)v942 + 2) = v945;
                  v947 = *((_OWORD *)v943 + 4);
                  *((_OWORD *)v942 + 3) = v946;
                  v948 = *((_OWORD *)v943 + 5);
                  *((_OWORD *)v942 + 4) = v947;
                  v949 = *((_OWORD *)v943 + 6);
                  *((_OWORD *)v942 + 5) = v948;
                  v950 = *((_OWORD *)v943 + 7);
                  v943 += 16;
                  *((_OWORD *)v942 + 6) = v949;
                  v942 += 16;
                  *((_OWORD *)v942 - 1) = v950;
                  --v941;
                }
                while ( v941 );
                v951 = *((_OWORD *)v943 + 1);
                *(_OWORD *)v942 = *(_OWORD *)v943;
                v952 = *((_OWORD *)v943 + 2);
                *((_OWORD *)v942 + 1) = v951;
                v953 = *((_OWORD *)v943 + 3);
                *((_OWORD *)v942 + 2) = v952;
                v954 = *((_OWORD *)v943 + 4);
                *((_OWORD *)v942 + 3) = v953;
                v955 = *((_OWORD *)v943 + 5);
                *((_OWORD *)v942 + 4) = v954;
                v956 = *((_OWORD *)v943 + 6);
                *((_OWORD *)v942 + 5) = v955;
                *((_OWORD *)v942 + 6) = v956;
              }
            }
            _InterlockedExchange(&dword_1808CCC40, 0);
            v1415 = dword_1808C9398;
            v957 = off_1808C03D8[0]();
            v1887 = 0;
            v958 = v957 - qword_1808CCC38;
            v1500 = v957 - qword_1808CCC38;
            v1891 = 0LL;
            v1888 = 0LL;
            v1889 = 0LL;
            v1890 = 0LL;
            while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
              ;
            v959 = dword_1808CCC34;
            if ( !dword_1808CCC34 )
            {
              v1453 = 0;
              v1613 = 0;
              v960 = (const WCHAR *)MemoryAlloc(0x338uLL);
              v1636 = v960;
              if ( !v960 )
                goto LABEL_1171;
              v961 = 0;
              v962 = (char *)v960 + 7;
              v963 = -1;
              v964 = (unsigned __int8 *)&unk_18077F812;
              v965 = 0;
              v966 = 103LL;
              v967 = 0;
              do
              {
                v968 = *(v964 - 1) | (*(v964 - 2) << 8);
                v969 = v964[2] << 8;
                v970 = *v964;
                v964 += 8;
                v971 = *(v964 - 7) | ((v970 | (v968 << 8)) << 8);
                v972 = v971 ^ v967;
                v973 = *(v964 - 3) | ((*(v964 - 4) | ((*(v964 - 5) | v969) << 8)) << 8);
                v974 = v973 ^ v965 ^ v972 ^ 0xAC987321;
                v975 = (__ROR4__(v974, 22) + 4991 * __ROR4__(v974 + 1419157410, 27)) ^ v972;
                v976 = (43881 * __ROR4__(v975 + 133239679, 9) - __ROR4__(v975, 30)) ^ v974;
                v977 = (24670 * v976 - (v976 >> 13) - 123127970) ^ v975;
                v978 = (2033 * __ROR4__(v977 ^ 0xAB69, 26) - __ROR4__(v977, 30)) ^ v976;
                v979 = (133239679 - (v978 ^ 0xAB69605E)) ^ v977;
                v980 = (43881 * (v979 ^ 0x137F)) ^ __ROR4__(v979, 6) ^ v978;
                v981 = (__ROR4__(v980, 30) + 24670 * __ROR4__(v980 + 133239679, 15)) ^ v979;
                v982 = (2033 * __ROR4__(v981 + 1419157410, 14) - __ROR4__(v981, 24)) ^ v980;
                v983 = __ROR4__(v982, 10) ^ (4991 * __ROR4__(v982 ^ 0xAB69605E, 12)) ^ v981;
                v984 = v982 ^ (v983 >> 10) ^ (43881 * (v983 ^ 0x7F1));
                v985 = (2033 * (__ROR4__(~v984, 5) + 24670)) ^ v983;
                v986 = v984 ^ (v985 - 2033) ^ 0xAB69605E;
                v987 = ((v986 >> 2) + 4991 * __ROR4__(v984 ^ (v985 - 2033) ^ 0xAB6967AF, 30)) ^ v985;
                v988 = (__ROR4__(v987, 25) + 43881 * __ROR4__(v987 - 133239679, 6)) ^ v986;
                v989 = (24670 * (v988 ^ 0x137F) + __ROR4__(v988, 9)) ^ v987;
                v990 = (__ROR4__(v989, 25) + 2033 * __ROR4__(v989 ^ 0xAB69, 27)) ^ v988;
                v991 = v990 ^ v989 ^ 0xAC987321;
                v992 = (4991 * __ROR4__(v991, 3) - 219010071) ^ v990;
                v993 = (24670 * __ROR4__(v992 - 133239679, 1) - __ROR4__(v992, 6)) ^ v991;
                v994 = (__ROR4__(v993, 18) + 2033 * __ROR4__(v993 - 1419157410, 29)) ^ v992;
                v995 = (4991 * __ROR4__(v994 - 1419157410, 17) - __ROR4__(v994, 14)) ^ v993;
                v996 = (v995 >> 3) ^ (43881 * (v995 ^ 0x605E)) ^ v994;
                v997 = 24670 * __ROR4__(v996 ^ 0x7F1137F, 28);
                v998 = __ROR4__(v996, 30);
                v965 = v963 ^ v996;
                v963 = v973;
                v967 = v961 ^ v995 ^ v998 ^ v997;
                *(v962 - 4) = v967;
                *v962 = v965;
                v962 += 8;
                v961 = v971;
                *(v962 - 13) = BYTE1(v967);
                *(v962 - 9) = BYTE1(v965);
                *(v962 - 14) = (unsigned __int16)(v967 >> 8) >> 8;
                *(v962 - 10) = (unsigned __int16)(v965 >> 8) >> 8;
                *(v962 - 15) = __ROR4__((((v967 >> 8) | (v967 << 24)) >> 8) | (((v967 >> 8) | (v967 << 24)) << 24), 8);
                *(v962 - 11) = __ROR4__((((v965 >> 8) | (v965 << 24)) >> 8) | (((v965 >> 8) | (v965 << 24)) << 24), 8);
                --v966;
              }
              while ( v966 );
              v999 = v1636;
              v1000 = 0;
              v1001 = 0LL;
              v1002 = 0;
              do
                v1002 ^= *((_BYTE *)v1636 + v1001++);
              while ( v1001 < 0x338 );
              if ( v1002 != 64LL )
              {
                MemoryFree((void *)v1636);
LABEL_1170:
                v958 = v1500;
LABEL_1171:
                v1003 = 4LL;
                v1004 = qword_1808C93A0;
                do
                {
                  if ( *v1004 )
                    FreeLibrary(*v1004);
                  v1004 += 3;
                  --v1003;
                }
                while ( v1003 );
                memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                v1005 = 2LL;
                v1006 = off_1808C0340;
                v1007 = off_1807174F0;
                do
                {
                  v1008 = *((_OWORD *)v1007 + 1);
                  *(_OWORD *)v1006 = *(_OWORD *)v1007;
                  v1009 = *((_OWORD *)v1007 + 2);
                  *((_OWORD *)v1006 + 1) = v1008;
                  v1010 = *((_OWORD *)v1007 + 3);
                  *((_OWORD *)v1006 + 2) = v1009;
                  v1011 = *((_OWORD *)v1007 + 4);
                  *((_OWORD *)v1006 + 3) = v1010;
                  v1012 = *((_OWORD *)v1007 + 5);
                  *((_OWORD *)v1006 + 4) = v1011;
                  v1013 = *((_OWORD *)v1007 + 6);
                  *((_OWORD *)v1006 + 5) = v1012;
                  v1014 = *((_OWORD *)v1007 + 7);
                  v1007 += 16;
                  *((_OWORD *)v1006 + 6) = v1013;
                  v1006 += 16;
                  *((_OWORD *)v1006 - 1) = v1014;
                  --v1005;
                }
                while ( v1005 );
                v1015 = *((_OWORD *)v1007 + 1);
                *(_OWORD *)v1006 = *(_OWORD *)v1007;
                v1016 = *((_OWORD *)v1007 + 2);
                *((_OWORD *)v1006 + 1) = v1015;
                v1017 = *((_OWORD *)v1007 + 3);
                *((_OWORD *)v1006 + 2) = v1016;
                v1018 = *((_OWORD *)v1007 + 4);
                *((_OWORD *)v1006 + 3) = v1017;
                v1019 = *((_OWORD *)v1007 + 5);
                *((_OWORD *)v1006 + 4) = v1018;
                v1020 = *((_OWORD *)v1007 + 6);
                *((_OWORD *)v1006 + 5) = v1019;
                *((_OWORD *)v1006 + 6) = v1020;
                goto LABEL_1206;
              }
              *((_BYTE *)v1636 + 823) = 0;
              memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
              v1021 = (WCHAR *)v999;
              if ( !*(_BYTE *)v999 )
                goto LABEL_1202;
              while ( 1 )
              {
                v1022 = v999;
                v1023 = -1LL;
                do
                  ++v1023;
                while ( v999[v1023] );
                v1024 = &v999[v1023];
                v1025 = &qword_1808C93A0[3 * v1613];
                if ( !GetModuleHandleExW(0, v1022, v1025) )
                  break;
                v1000 = 0;
                if ( *(_WORD *)*v1025 == 23117
                  && (v1026 = *((int *)*v1025 + 15), (unsigned int)v1026 < 0x10000000)
                  && (v1027 = (char *)*v1025 + v1026, v1027 >= (char *)*v1025)
                  && *(_DWORD *)v1027 == 17744 )
                {
                  if ( ((*((_WORD *)v1027 + 12) - 267) & 0xFEFF) != 0 )
                  {
                    v1000 = -1073741811;
                  }
                  else
                  {
                    *(HMODULE *)((char *)v1025 + 12) = (HMODULE)*((_QWORD *)v1027 + 17);
                    *((_DWORD *)v1025 + 2) = *((_DWORD *)v1027 + 20);
                  }
                }
                else
                {
                  v1000 = -1073741701;
                }
                v1028 = *(_DWORD *)(v1024 + 1);
                v1029 = 0;
                v999 = v1024 + 3;
                v1535 = v1028;
                if ( v1028 )
                {
                  v1030 = (const WCHAR *)(3LL * v1613);
                  v1636 = v1030;
                  do
                  {
                    v1031 = (const CHAR *)v999;
                    v1032 = -1LL;
                    do
                      ++v1032;
                    while ( *((_BYTE *)v999 + v1032) );
                    v999 = (LPCWSTR)((char *)v999 + v1032 + 1);
                    if ( v1000 >= 0 )
                    {
                      v1033 = GetProcAddress(qword_1808C93A0[(_QWORD)v1030], v1031);
                      if ( !v1033 )
                        goto LABEL_1201;
                      off_1808C0340[v1453] = v1033;
                      v1030 = v1636;
                    }
                    ++v1453;
                    ++v1029;
                  }
                  while ( v1029 < v1535 );
                }
                ++v1613;
                if ( !*(_BYTE *)v999 )
                  goto LABEL_1201;
              }
              v1000 = -1073741702;
LABEL_1201:
              if ( v1021 )
              {
LABEL_1202:
                v1034 = GetProcessHeap();
                HeapFree(v1034, 0, v1021);
              }
              if ( v1000 < 0 )
                goto LABEL_1170;
              v959 = dword_1808CCC34;
              v958 = v1500;
            }
            dword_1808CCC34 = v959 + 1;
LABEL_1206:
            _InterlockedExchange(&dword_1808CCC40, 0);
            v1035 = 4LL;
            LODWORD(v1891) = v1415;
            LODWORD(v1888) = v958;
            v1887 = 1;
            LODWORD(v1889) = -1721306479;
            DWORD2(v1888) = 1;
            LODWORD(v1890) = 1;
            DWORD2(v1889) = 1;
            DWORD2(v1890) = 1;
            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808C0410)(0LL, 8225LL, 4LL, &v1887);
            while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
              ;
            v1036 = dword_1808CCC34;
            if ( dword_1808CCC34 > 0 )
            {
              --dword_1808CCC34;
              if ( v1036 == 1 )
              {
                v1037 = qword_1808C93A0;
                do
                {
                  if ( *v1037 )
                    FreeLibrary(*v1037);
                  v1037 += 3;
                  --v1035;
                }
                while ( v1035 );
                memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                v1038 = 2LL;
                v1039 = off_1808C0340;
                v1040 = off_1807174F0;
                do
                {
                  v1041 = *((_OWORD *)v1040 + 1);
                  *(_OWORD *)v1039 = *(_OWORD *)v1040;
                  v1042 = *((_OWORD *)v1040 + 2);
                  *((_OWORD *)v1039 + 1) = v1041;
                  v1043 = *((_OWORD *)v1040 + 3);
                  *((_OWORD *)v1039 + 2) = v1042;
                  v1044 = *((_OWORD *)v1040 + 4);
                  *((_OWORD *)v1039 + 3) = v1043;
                  v1045 = *((_OWORD *)v1040 + 5);
                  *((_OWORD *)v1039 + 4) = v1044;
                  v1046 = *((_OWORD *)v1040 + 6);
                  *((_OWORD *)v1039 + 5) = v1045;
                  v1047 = *((_OWORD *)v1040 + 7);
                  v1040 += 16;
                  *((_OWORD *)v1039 + 6) = v1046;
                  v1039 += 16;
                  *((_OWORD *)v1039 - 1) = v1047;
                  --v1038;
                }
                while ( v1038 );
                v1048 = *((_OWORD *)v1040 + 1);
                *(_OWORD *)v1039 = *(_OWORD *)v1040;
                v1049 = *((_OWORD *)v1040 + 2);
                *((_OWORD *)v1039 + 1) = v1048;
                v1050 = *((_OWORD *)v1040 + 3);
                *((_OWORD *)v1039 + 2) = v1049;
                v1051 = *((_OWORD *)v1040 + 4);
                *((_OWORD *)v1039 + 3) = v1050;
                v1052 = *((_OWORD *)v1040 + 5);
                *((_OWORD *)v1039 + 4) = v1051;
                v1053 = *((_OWORD *)v1040 + 6);
                *((_OWORD *)v1039 + 5) = v1052;
                *((_OWORD *)v1039 + 6) = v1053;
              }
            }
            _InterlockedExchange(&dword_1808CCC40, 0);
            ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808C04A0[0])(0LL, lpMemk);
            v1637 = (unsigned __int16 *)v1634;
            goto LABEL_1218;
          }
          v758 = v1843;
          v1751 = v1843;
          v759 = v490 & 0xF;
          v1797 = 0;
          v1596 = v759;
          memset_0(v1798, 0, 0x64uLL);
          v760 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(lpMemk, 7LL);
          if ( v760 && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v760, 104LL, &v1797) )
          {
            if ( v1799 != 32 || !v1800 || v1798[0] <= 0 || v1798[1] <= 0 )
              v738 = 0;
            if ( v738 )
            {
LABEL_939:
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(&v1831, v758, HIDWORD(v1751));
              ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(&v1832, v758, HIDWORD(v1751));
              if ( v759 == 1 )
                v1635 = ((__int64 (__fastcall *)(_QWORD))off_1808C0368[0])(v1823 == 0 ? 0xB26720 : 0);
LABEL_941:
              v1567 = off_1808C03C0(lpMemk, (struct CSingleViewShellExperience *)1);
              v798 = 2064;
              if ( v1822 )
                v798 = 133138;
              LODWORD(v1640) = v798;
              if ( v738 )
              {
                v799 = v1824;
                v1579 = v1823;
                v1550 = v1827;
                lpModuleNamee = (LPCWSTR)v1824;
                v1801 = 0;
                memset_0(v1802, 0, 0x64uLL);
                v1804 = 0;
                memset_0(v1805, 0, 0x64uLL);
                v1637 = 0LL;
                v1490 = 0;
                Sizeg = 0;
                v1859 = 0LL;
                v1860 = 0;
                v1857 = 0LL;
                v1858 = 0LL;
                v1844 = 0LL;
                if ( !v799 )
                  goto LABEL_987;
                v800 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(lpMemk, 7LL);
                if ( v800 )
                {
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v800, 104LL, &v1801) )
                  {
                    v1637 = v1803;
                    v1490 = v1802[0];
                    Sizeg = v1802[1];
                  }
                  v801 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
                  v1409 = v801;
                  v802 = (CToastCenterExperienceManager *)v801;
                  if ( v801 )
                  {
                    DWORD1(v1857) = v1831.m128i_i32[2] - v1831.m128i_i32[0];
                    DWORD2(v1857) = v1831.m128i_i32[1] - v1831.m128i_i32[3];
                    v1752 = 0LL;
                    v1858 = 0LL;
                    v1859 = 0LL;
                    v1860 = 0;
                    LODWORD(v1857) = 40;
                    HIDWORD(v1857) = 2097153;
                    v1446 = (LPCWSTR)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                       v801,
                                       &v1857,
                                       0LL,
                                       &v1752,
                                       0LL,
                                       0);
                    if ( v1446 )
                    {
                      v764 = ((unsigned int (__fastcall *)(LPCWSTR, __int64, int *))off_1808C03A8[0])(
                               v1446,
                               104LL,
                               &v1804) == 0;
                      v805 = 0LL;
                      if ( !v764 )
                        v805 = v1806;
                      DWORD2(v1844) = v1831.m128i_i32[2] - v1831.m128i_i32[0];
                      HIDWORD(v1844) = v1831.m128i_i32[3] - v1831.m128i_i32[1];
                      v1527 = v805;
                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(v802, v1446);
                      off_1808C03C0(v802, (struct CSingleViewShellExperience *)1);
                      v806 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                               v802,
                               v1550);
                      v807 = off_1808C0428[0];
                      v1551 = (unsigned __int16 *)v806;
                      v808 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                      ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v807)(
                        v802,
                        &v1844,
                        v808);
                      v803 = 0;
                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808C0418)(
                        v802,
                        lpModuleNamee,
                        0xFFFFFFFFLL,
                        &v1844,
                        (_DWORD)v1640,
                        0LL);
                      if ( v759 == 1 )
                      {
                        if ( v1579 )
                          v1580 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                        else
                          v1580 = 0xFFFFFF;
                      }
                      else
                      {
                        v1580 = -5723992;
                      }
                      v809 = 0;
                      v810 = -v1831.m128i_i32[0];
                      v811 = 0;
                      if ( v1831.m128i_i32[0] >= 0 )
                      {
                        v809 = v1831.m128i_i32[0];
                        v810 = 0;
                      }
                      v812 = -v1831.m128i_i32[1];
                      if ( v1831.m128i_i32[1] >= 0 )
                      {
                        v811 = v1831.m128i_i32[1];
                        v812 = 0;
                      }
                      v813 = DWORD2(v1844) - v810;
                      if ( DWORD2(v1844) - v810 >= v1490 - v809 )
                        v813 = v1490 - v809;
                      v1561 = v813;
                      v814 = HIDWORD(v1844) - v812;
                      if ( HIDWORD(v1844) - v812 >= Sizeg - v811 )
                        v814 = Sizeg - v811;
                      if ( v813 > 0 && v814 > 0 )
                      {
                        v815 = v1490;
                        v816 = (const WCHAR *)(v1527 + 4 * (v810 + (__int64)(DWORD2(v1844) * v812)));
                        v817 = v1490 * v811;
                        v818 = 0;
                        lpModuleNamef = v816;
                        v1491 = 0;
                        v819 = &v1637[2 * v809 + 2 * v817];
                        v1528 = 2LL * SDWORD2(v1844);
                        v1609 = 2 * v815;
                        v1637 = v819;
                        while ( 1 )
                        {
                          Sizeh = 0;
                          v820 = (char *)v819 - (char *)v816;
                          v821 = (unsigned __int8 *)(v816 + 1);
                          do
                          {
                            if ( (unsigned __int8)((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2) != 0xFF )
                            {
                              v822 = (unsigned __int8)~((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2);
                              v821[v820] -= ~((*v821 + *(v821 - 2) + 2 * (unsigned int)*(v821 - 1)) >> 2)
                                          * (v1580 - v821[v820]);
                              v823 = v821[v820 - 1];
                              v824 = (unsigned __int64)(2155905153LL * v822 * (BYTE1(v1580) - v823)) >> 32;
                              v821[v820 - 1] = v823 + (v824 >> 7 < 0) + (v824 >> 7);
                              v825 = v821[v820 - 2];
                              v826 = (unsigned __int64)(2155905153LL * v822 * (BYTE2(v1580) - v825)) >> 32;
                              v821[v820 - 2] = v825 + (v826 >> 7 < 0) + (v826 >> 7);
                              v827 = v821[v820 + 1];
                              v828 = v822 * (255 - v827);
                              v818 = Sizeh;
                              v821[v820 + 1] = v827
                                             + ((((unsigned __int64)(2155905153LL * v828) >> 32) & 0x80000000) != 0LL)
                                             + ((int)((unsigned __int64)(2155905153LL * v828) >> 32) >> 7);
                            }
                            ++v818;
                            v821 += 4;
                            Sizeh = v818;
                            v803 = 0;
                          }
                          while ( v818 < v1561 );
                          v816 = &lpModuleNamef[v1528];
                          v819 = &v1637[v1609];
                          lpModuleNamef = (LPCWSTR)((char *)lpModuleNamef + v1528 * 2);
                          v1637 = (unsigned __int16 *)((char *)v1637 + v1609 * 2);
                          if ( ++v1491 >= v814 )
                            break;
                          v818 = 0;
                        }
                        v99 = v1643;
                        v802 = (CToastCenterExperienceManager *)v1409;
                      }
                      ((void (__fastcall *)(LPCWSTR))off_1808C0378)(v1446);
                      if ( v1551 )
                        ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                          v802,
                          v1551);
                    }
                    else
                    {
                      v803 = GetLastError();
                      v804 = v803 < 0;
                      if ( v803 > 0 )
                      {
                        v803 = (unsigned __int16)v803 | 0x80070000;
                        v804 = v803 < 0;
                      }
                      if ( !v804 )
                        v803 = -2147467259;
                    }
                    ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v802);
                    if ( v803 < 0 )
                      goto LABEL_987;
                    v829 = v1825;
                    v1597 = v1823;
                    v1552 = v1828;
                    lpModuleNameg = (LPCWSTR)v1825;
                    v1807 = 0;
                    memset_0(v1808, 0, 0x64uLL);
                    v1810 = 0;
                    memset_0(v1811, 0, 0x64uLL);
                    v1637 = 0LL;
                    v1581 = 0;
                    v1492 = 0;
                    v1863 = 0LL;
                    v1864 = 0;
                    v1861 = 0LL;
                    v1862 = 0LL;
                    v1845 = 0LL;
                    if ( !v829 )
                      goto LABEL_987;
                    v830 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(
                             lpMemk,
                             7LL);
                    if ( v830 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v830, 104LL, &v1807) )
                      {
                        v1637 = v1809;
                        v1581 = v1808[0];
                        v1492 = v1808[1];
                      }
                      v1410 = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
                      v831 = v1410;
                      if ( v1410 )
                      {
                        DWORD1(v1861) = v1832.m128i_i32[2] - v1832.m128i_i32[0];
                        DWORD2(v1861) = v1832.m128i_i32[1] - v1832.m128i_i32[3];
                        v1753 = 0LL;
                        v1863 = 0LL;
                        v1864 = 0;
                        v1862 = 0LL;
                        LODWORD(v1861) = 40;
                        HIDWORD(v1861) = 2097153;
                        v1447 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                           v1410,
                                           &v1861,
                                           0LL,
                                           &v1753,
                                           0LL,
                                           0);
                        if ( !v1447 )
                        {
                          v832 = GetLastError();
                          v833 = v832;
                          if ( v832 > 0 )
                            v833 = (unsigned __int16)v832 | 0x80070000;
                          if ( v833 >= 0 )
                            v833 = -2147467259;
LABEL_1025:
                          ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v831);
                          if ( v833 < 0 )
                            goto LABEL_987;
                          v860 = 0LL;
                          v861 = lpMemk;
LABEL_1130:
                          off_1808C03C0(v861, (struct CSingleViewShellExperience *)v1567);
                          v871 = v1604;
                          if ( !v1604 )
                          {
LABEL_1049:
                            if ( !v860 )
                              goto LABEL_987;
                            goto LABEL_1050;
                          }
LABEL_1048:
                          ((void (__fastcall *)(void *))off_1808C0378)(v871);
                          goto LABEL_1049;
                        }
                        v764 = ((unsigned int (__fastcall *)(LPCWSTR, __int64, int *))off_1808C03A8[0])(
                                 v1447,
                                 104LL,
                                 &v1810) == 0;
                        v834 = 0LL;
                        if ( !v764 )
                          v834 = v1812;
                        DWORD2(v1845) = v1832.m128i_i32[2] - v1832.m128i_i32[0];
                        HIDWORD(v1845) = v1832.m128i_i32[3] - v1832.m128i_i32[1];
                        v1529 = v834;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(v1410, v1447);
                        off_1808C03C0(v1410, (struct CSingleViewShellExperience *)1);
                        v835 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                                 v1410,
                                 v1552);
                        v836 = off_1808C0428[0];
                        v1553 = (unsigned __int16 *)v835;
                        v837 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                        ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v836)(
                          v1410,
                          &v1845,
                          v837);
                        v833 = 0;
                        ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808C0418)(
                          v1410,
                          lpModuleNameg,
                          0xFFFFFFFFLL,
                          &v1845,
                          (_DWORD)v1640,
                          0LL);
                        if ( v759 == 1 )
                        {
                          if ( !v1597 )
                          {
                            LODWORD(v1640) = 0xFFFFFF;
LABEL_1006:
                            v839 = 0;
                            v840 = -v1832.m128i_i32[0];
                            v841 = 0;
                            if ( v1832.m128i_i32[0] >= 0 )
                            {
                              v839 = v1832.m128i_i32[0];
                              v840 = 0;
                            }
                            v842 = -v1832.m128i_i32[1];
                            if ( v1832.m128i_i32[1] >= 0 )
                            {
                              v842 = 0;
                              v841 = v1832.m128i_i32[1];
                            }
                            v843 = DWORD2(v1845) - v840;
                            if ( DWORD2(v1845) - v840 >= v1581 - v839 )
                              v843 = v1581 - v839;
                            v844 = HIDWORD(v1845) - v842;
                            if ( HIDWORD(v1845) - v842 >= v1492 - v841 )
                              v844 = v1492 - v841;
                            if ( v843 > 0 && v844 > 0 )
                            {
                              v1598 = 0;
                              v845 = (const WCHAR *)(v1529 + 4 * (v840 + (__int64)(DWORD2(v1845) * v842)));
                              lpModuleNameh = v845;
                              v846 = &v1637[2 * v839 + 2 * (__int64)(v1581 * v841)];
                              v1530 = 2LL * SDWORD2(v1845);
                              v1610 = 2LL * v1581;
                              v1637 = v846;
                              do
                              {
                                v847 = (char)v1642;
                                v848 = (unsigned __int8 *)(v845 + 1);
                                v1582 = 0;
                                v849 = (char *)v846 - (char *)v845;
                                v850 = 0;
                                do
                                {
                                  if ( (unsigned __int8)((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2) != 0xFF )
                                  {
                                    v851 = (unsigned __int8)~((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2);
                                    v852 = BYTE1(v1640);
                                    v848[v849] -= ~((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2)
                                                * (v847 - v848[v849]);
                                    v853 = v848[v849 - 1];
                                    v854 = (unsigned __int64)(2155905153LL * v851 * (v852 - v853)) >> 32;
                                    v855 = BYTE2(v1640);
                                    v848[v849 - 1] = v853 + (v854 >> 7 < 0) + (v854 >> 7);
                                    v856 = v848[v849 - 2];
                                    v857 = (unsigned __int64)(2155905153LL * v851 * (v855 - v856)) >> 32;
                                    v848[v849 - 2] = v856 + (v857 >> 7 < 0) + (v857 >> 7);
                                    v858 = v848[v849 + 1];
                                    v859 = v851 * (255 - v858);
                                    v850 = v1582;
                                    v848[v849 + 1] = v858
                                                   + ((((unsigned __int64)(2155905153LL * v859) >> 32) & 0x80000000) != 0LL)
                                                   + ((int)((unsigned __int64)(2155905153LL * v859) >> 32) >> 7);
                                  }
                                  ++v850;
                                  v848 += 4;
                                  v1582 = v850;
                                  v833 = 0;
                                }
                                while ( v850 < v843 );
                                v845 = &lpModuleNameh[v1530];
                                v846 = &v1637[v1610];
                                lpModuleNameh = (LPCWSTR)((char *)lpModuleNameh + v1530 * 2);
                                v1637 = (unsigned __int16 *)((char *)v1637 + v1610 * 2);
                                ++v1598;
                              }
                              while ( v1598 < v844 );
                              v99 = v1643;
                              v831 = v1410;
                            }
                            ((void (__fastcall *)(LPCWSTR))off_1808C0378)(v1447);
                            if ( v1553 )
                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                                v831,
                                v1553);
                            goto LABEL_1025;
                          }
                          v838 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                        }
                        else
                        {
                          v838 = -5723992;
                        }
                        LODWORD(v1640) = v838;
                        LODWORD(v1642) = v838;
                        goto LABEL_1006;
                      }
                    }
                  }
                }
LABEL_986:
                GetLastError();
                goto LABEL_987;
              }
              if ( v1823 || (v862 = -64, v759 == 1) )
                v862 = -1;
              BYTE2(v1583) = v862;
              LOWORD(v1583) = 0;
              HIBYTE(v1583) = 1;
              v1493 = 0;
              Sizei = 0;
              v1562 = 0;
              v1523 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
              if ( !v1523 )
                goto LABEL_986;
              if ( v759 == 1 )
              {
                v863 = v1832.m128i_i32[2] - v1832.m128i_i32[0];
                if ( v1832.m128i_i32[2] - v1832.m128i_i32[0] <= v1831.m128i_i32[2] - v1831.m128i_i32[0] )
                  v863 = v1831.m128i_i32[2] - v1831.m128i_i32[0];
                v864 = v1832.m128i_i32[3] - v1831.m128i_i32[1];
                v1639 = v863;
                v865 = 0;
                v1543 = v1832.m128i_i32[3] - v1831.m128i_i32[1];
                v866 = 0;
                if ( v1822 )
                {
                  v1493 = v1831.m128i_i32[0] + v863 - v1831.m128i_i32[2];
                  v865 = v1493;
                  v1562 = v1832.m128i_i32[0] + v863 - v1832.m128i_i32[2];
                  v866 = v1562;
                }
                LODWORD(v1641) = v1831.m128i_i32[3] - v1831.m128i_i32[1];
                v867 = v865 + v1831.m128i_i32[2] - v1831.m128i_i32[0];
                v868 = v866 + v1832.m128i_i32[2] - v1832.m128i_i32[0];
                v1629 = v1832.m128i_i32[1] - v1831.m128i_i32[1];
                v1611 = v1832.m128i_i32[3] - v1831.m128i_i32[1];
              }
              else
              {
                v863 = DWORD2(v1843);
                v864 = HIDWORD(v1843);
                v1639 = DWORD2(v1843);
                LODWORD(v1641) = _mm_cvtsi128_si32(_mm_srli_si128(v1831, 12));
                Sizei = _mm_cvtsi128_si32(_mm_srli_si128(v1831, 4));
                v1611 = _mm_cvtsi128_si32(_mm_srli_si128(v1832, 12));
                v867 = _mm_cvtsi128_si32(_mm_srli_si128(v1831, 8));
                v1629 = _mm_cvtsi128_si32(_mm_srli_si128(v1832, 4));
                v1543 = HIDWORD(v1843);
                v1493 = _mm_cvtsi128_si32(v1831);
                v868 = _mm_cvtsi128_si32(_mm_srli_si128(v1832, 8));
                v1562 = _mm_cvtsi128_si32(v1832);
              }
              LODWORD(v1638) = v868;
              v1754 = 0LL;
              v1856[2] = -v864;
              memset(&v1856[4], 0, 28);
              v1856[0] = 40;
              v1856[1] = v863;
              v1856[3] = 2097153;
              v869 = ((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                       v1523,
                       v1856,
                       0LL,
                       &v1754,
                       0LL,
                       0);
              v1604 = (void *)v869;
              if ( !v869 )
              {
                GetLastError();
                v860 = v1523;
LABEL_1050:
                ((void (__fastcall *)(size_t))off_1808C0370[0])(v860);
LABEL_987:
                if ( v1635 )
                  ((void (__fastcall *)(SIZE_T))off_1808C0378)(v1635);
                goto LABEL_1132;
              }
              ((void (__fastcall *)(size_t, __int64))off_1808C03B8)(v1523, v869);
              if ( v759 == 1 && v1635 )
              {
                v1846 = 0LL;
                v1848 = v1543;
                v1847 = v863;
                ((void (__fastcall *)(size_t, __int64 *))off_1808C0428[0])(v1523, &v1846);
              }
              v1531 = v1823;
              v1554 = v1827;
              lpModuleNamei = (LPCWSTR)v1824;
              v1813 = 0;
              memset_0(v1814, 0, 0x64uLL);
              v1794 = 0;
              memset_0(v1795, 0, 0x64uLL);
              v1637 = 0LL;
              v1448 = 0;
              v1411 = 0;
              v1865 = 0LL;
              v1867 = 0LL;
              v1866 = 0LL;
              v1868 = 0;
              v1841 = 0LL;
              if ( !lpModuleNamei )
                goto LABEL_1046;
              v870 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(v1523, 7LL);
              if ( v870 )
              {
                if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v870, 104LL, &v1813) )
                {
                  v1637 = v1815;
                  v1448 = v1814[0];
                  v1411 = v1814[1];
                }
                v1644 = (LPVOID)((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1523);
                if ( v1644 )
                {
                  v1756 = 0LL;
                  DWORD1(v1865) = v867 - v1493;
                  DWORD2(v1865) = Sizei - v1641;
                  v1867 = 0LL;
                  v1868 = 0;
                  v1866 = 0LL;
                  LODWORD(v1865) = 40;
                  HIDWORD(v1865) = 2097153;
                  v872 = (const WCHAR *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                          v1644,
                                          &v1865,
                                          0LL,
                                          &v1756,
                                          0LL,
                                          0);
                  v1636 = v872;
                  if ( v872 )
                  {
                    v764 = ((unsigned int (__fastcall *)(const WCHAR *, __int64, int *))off_1808C03A8[0])(
                             v872,
                             104LL,
                             &v1794) == 0;
                    v875 = 0LL;
                    if ( !v764 )
                      v875 = v1796;
                    DWORD2(v1841) = v867 - v1493;
                    v876 = (CToastCenterExperienceManager *)v1644;
                    v1496 = v875;
                    HIDWORD(v1841) = v1641 - Sizei;
                    ((void (__fastcall *)(LPVOID, LPCWSTR))off_1808C03B8)(v1644, v1636);
                    off_1808C03C0(v876, (struct CSingleViewShellExperience *)1);
                    v877 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                             v876,
                             v1554);
                    v878 = off_1808C0428[0];
                    v1555 = (unsigned __int16 *)v877;
                    v879 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))v878)(v1644, &v1841, v879);
                    ((void (__fastcall *)(LPVOID, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808C0418)(
                      v1644,
                      lpModuleNamei,
                      0xFFFFFFFFLL,
                      &v1841,
                      (_DWORD)v1640,
                      0LL);
                    if ( v759 == 1 )
                    {
                      if ( v1531 )
                        v880 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                      else
                        v880 = 0xFFFFFF;
                    }
                    else
                    {
                      v880 = -5723992;
                    }
                    v881 = v1448;
                    v882 = 0;
                    v883 = 0;
                    v1532 = v880;
                    v884 = -v1493;
                    if ( v1493 >= 0 )
                    {
                      v882 = v1493;
                      v884 = 0;
                    }
                    v885 = -Sizei;
                    if ( Sizei >= 0 )
                    {
                      v883 = Sizei;
                      v885 = 0;
                    }
                    v886 = (unsigned int)(DWORD2(v1841) - v884);
                    if ( (int)v886 >= v1448 - v882 )
                      v886 = (unsigned int)(v1448 - v882);
                    v1449 = v886;
                    v887 = HIDWORD(v1841) - v885;
                    if ( HIDWORD(v1841) - v885 >= v1411 - v883 )
                      v887 = v1411 - v883;
                    v873 = 0;
                    v1412 = v887;
                    if ( (int)v886 > 0 )
                    {
                      v886 = 0LL;
                      if ( v887 > 0 )
                      {
                        v888 = v1449;
                        v1494 = 0;
                        Sizej = 0;
                        v886 = (unsigned __int64)&v1496[4 * v884 + 4 * (__int64)(DWORD2(v1841) * v885)];
                        v1497 = (char *)v886;
                        v889 = &v1637[2 * v882 + 2 * (__int64)((int)v881 * v883)];
                        v1637 = (unsigned __int16 *)(4LL * SDWORD2(v1841));
                        v890 = v881;
                        v891 = v1637;
                        v892 = 0;
                        v1641 = 4 * v890;
                        lpModuleNamej = v889;
                        do
                        {
                          v1450 = 0;
                          v893 = (signed __int64)v889 - v886;
                          v894 = (unsigned __int8 *)(v886 + 2);
                          v895 = 0;
                          do
                          {
                            if ( (unsigned __int8)((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2) != 0xFF )
                            {
                              v896 = (unsigned __int8)~((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2);
                              v894[v893] -= ~((*v894 + *(v894 - 2) + 2 * (unsigned int)*(v894 - 1)) >> 2)
                                          * (v1532 - v894[v893]);
                              v897 = v894[v893 - 1];
                              v898 = (unsigned __int64)(2155905153LL * v896 * (BYTE1(v1532) - v897)) >> 32;
                              v894[v893 - 1] = v897 + (v898 >> 7 < 0) + (v898 >> 7);
                              v899 = v894[v893 - 2];
                              v900 = (unsigned __int64)(2155905153LL * v896 * (BYTE2(v1532) - v899)) >> 32;
                              v892 = Sizej;
                              v894[v893 - 2] = v899 + (v900 >> 7 < 0) + (v900 >> 7);
                              v901 = v894[v893 + 1];
                              v902 = v896 * (255 - v901);
                              v895 = v1450;
                              v894[v893 + 1] = v901 + v902 / 255;
                            }
                            ++v895;
                            v894 += 4;
                            v1450 = v895;
                            v873 = v892;
                          }
                          while ( v895 < v888 );
                          v886 = (unsigned __int64)&v1497[(_QWORD)v891];
                          v889 = (unsigned __int16 *)((char *)lpModuleNamej + v1641);
                          v1497 = &v1497[(_QWORD)v891];
                          lpModuleNamej = (LPCWSTR)((char *)lpModuleNamej + v1641);
                          ++v1494;
                          Sizej = v892;
                        }
                        while ( v1494 < v1412 );
                        v759 = v1596;
                        v99 = v1643;
                        v863 = v1639;
                        v868 = (int)v1638;
                      }
                    }
                    ((void (__fastcall *)(LPCWSTR, unsigned __int64))off_1808C0378)(v1636, v886);
                    if ( v1555 )
                      ((void (__fastcall *)(LPVOID, unsigned __int16 *))off_1808C03B8)(v1644, v1555);
                  }
                  else
                  {
                    v873 = GetLastError();
                    v874 = v873 < 0;
                    if ( v873 > 0 )
                    {
                      v873 = (unsigned __int16)v873 | 0x80070000;
                      v874 = v873 < 0;
                    }
                    if ( !v874 )
                      v873 = -2147467259;
                  }
                  ((void (__fastcall *)(LPVOID))off_1808C0370[0])(v1644);
                  if ( v873 < 0 )
                    goto LABEL_1046;
                  v903 = v1825;
                  v1413 = v1823;
                  v1816 = 0;
                  v1498 = v1828;
                  v1636 = (LPCWSTR)v1825;
                  memset_0(v1817, 0, 0x64uLL);
                  v1819 = 0;
                  memset_0(v1820, 0, 0x64uLL);
                  v1644 = 0LL;
                  v764 = v903 == 0LL;
                  v1451 = 0;
                  v860 = v1523;
                  v1533 = 0;
                  v1869 = 0LL;
                  v1871 = 0LL;
                  v1870 = 0LL;
                  v1872 = 0;
                  v1842 = 0LL;
                  if ( v764 )
                    goto LABEL_1047;
                  v904 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(v1523, 7LL);
                  if ( !v904 )
                  {
                    GetLastError();
                    goto LABEL_1047;
                  }
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v904, 104LL, &v1816) )
                  {
                    v1644 = v1818;
                    v1451 = v1817[0];
                    v1533 = v1817[1];
                  }
                  v1556 = (unsigned __int16 *)((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1523);
                  if ( v1556 )
                  {
                    v1759[0] = 0LL;
                    DWORD1(v1869) = v868 - v1562;
                    DWORD2(v1869) = v1629 - v1611;
                    v1871 = 0LL;
                    v1872 = 0;
                    v1870 = 0LL;
                    LODWORD(v1869) = 40;
                    HIDWORD(v1869) = 2097153;
                    v905 = ((__int64 (__fastcall *)(unsigned __int16 *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_1808C0358[0])(
                             v1556,
                             &v1869,
                             0LL,
                             v1759,
                             0LL,
                             0);
                    lpModuleNamek = (LPCWSTR)v905;
                    if ( !v905 )
                    {
                      v906 = GetLastError();
                      v907 = v906 < 0;
                      if ( v906 > 0 )
                      {
                        v906 = (unsigned __int16)v906 | 0x80070000;
                        v907 = v906 < 0;
                      }
                      if ( !v907 )
                        v906 = -2147467259;
                      v908 = v1556;
                      goto LABEL_1126;
                    }
                    v764 = ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(v905, 104LL, &v1819) == 0;
                    v909 = 0LL;
                    if ( !v764 )
                      v909 = v1821;
                    HIDWORD(v1842) = v1611 - v1629;
                    v1637 = v909;
                    DWORD2(v1842) = v868 - v1562;
                    ((void (__fastcall *)(unsigned __int16 *, LPCWSTR))off_1808C03B8)(v1556, lpModuleNamek);
                    off_1808C03C0((CToastCenterExperienceManager *)v1556, (struct CSingleViewShellExperience *)1);
                    v910 = ((__int64 (__fastcall *)(unsigned __int16 *, unsigned __int16 *))off_1808C03B8)(v1556, v1498);
                    v911 = off_1808C0428[0];
                    v1499 = (LPVOID)v910;
                    v912 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                    v908 = v1556;
                    ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v911)(v1556, &v1842, v912);
                    v906 = 0;
                    ((void (__fastcall *)(unsigned __int16 *, LPCWSTR, __int64, __int128 *, _DWORD, _QWORD))off_1808C0418)(
                      v1556,
                      v1636,
                      0xFFFFFFFFLL,
                      &v1842,
                      (_DWORD)v1640,
                      0LL);
                    if ( v759 == 1 )
                    {
                      if ( !v1413 )
                      {
                        v1414 = 0xFFFFFF;
LABEL_1107:
                        v914 = 0;
                        v915 = -v1562;
                        v916 = 0;
                        if ( v1562 >= 0 )
                        {
                          v914 = v1562;
                          v915 = 0;
                        }
                        v917 = -v1629;
                        if ( v1629 >= 0 )
                        {
                          v916 = v1629;
                          v917 = 0;
                        }
                        v918 = DWORD2(v1842) - v915;
                        if ( DWORD2(v1842) - v915 >= v1451 - v914 )
                          v918 = v1451 - v914;
                        v1612 = v918;
                        v919 = HIDWORD(v1842) - v917;
                        if ( HIDWORD(v1842) - v917 >= v1533 - v916 )
                          v919 = v1533 - v916;
                        if ( v918 > 0 && v919 > 0 )
                        {
                          v920 = v1451;
                          v921 = v1451 * v916;
                          v1452 = 0;
                          v922 = &v1637[2 * v915 + 2 * (__int64)(DWORD2(v1842) * v917)];
                          v1636 = v922;
                          v923 = (char *)v1644 + 4 * v914 + 4 * (__int64)v921;
                          v1637 = (unsigned __int16 *)(4LL * SDWORD2(v1842));
                          v1630 = (LPVOID)(4 * v920);
                          v1644 = v923;
                          do
                          {
                            v924 = (char)v1642;
                            v925 = (unsigned __int8 *)(v922 + 1);
                            v1534 = 0;
                            v926 = v923 - (char *)v922;
                            v927 = 0;
                            do
                            {
                              if ( (unsigned __int8)((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2) != 0xFF )
                              {
                                v928 = (unsigned __int8)~((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2);
                                v925[v926] -= ~((*v925 + *(v925 - 2) + 2 * (unsigned int)*(v925 - 1)) >> 2)
                                            * (v924 - v925[v926]);
                                v929 = v925[v926 - 1];
                                v930 = (unsigned __int64)(2155905153LL * v928 * (BYTE1(v1414) - v929)) >> 32;
                                v925[v926 - 1] = v929 + (v930 >> 7 < 0) + (v930 >> 7);
                                v931 = v925[v926 - 2];
                                v932 = (unsigned __int64)(2155905153LL * v928 * (BYTE2(v1414) - v931)) >> 32;
                                v925[v926 - 2] = v931 + (v932 >> 7 < 0) + (v932 >> 7);
                                v933 = v925[v926 + 1];
                                v934 = v928 * (255 - v933);
                                v927 = v1534;
                                v925[v926 + 1] = v933 + v934 / 255;
                              }
                              ++v927;
                              v925 += 4;
                              v1534 = v927;
                              v906 = 0;
                            }
                            while ( v927 < v1612 );
                            v922 = (LPCWSTR)((char *)v1636 + (_QWORD)v1637);
                            v923 = (char *)v1644 + (_QWORD)v1630;
                            v1636 = (LPCWSTR)((char *)v1636 + (_QWORD)v1637);
                            v1644 = (char *)v1644 + (_QWORD)v1630;
                            ++v1452;
                          }
                          while ( v1452 < v919 );
                          v759 = v1596;
                          v99 = v1643;
                          v863 = v1639;
                          v908 = v1556;
                        }
                        ((void (__fastcall *)(LPCWSTR))off_1808C0378)(lpModuleNamek);
                        if ( v1499 )
                          ((void (__fastcall *)(unsigned __int16 *, LPVOID))off_1808C03B8)(v908, v1499);
LABEL_1126:
                        ((void (__fastcall *)(unsigned __int16 *))off_1808C0370[0])(v908);
                        v82 = v906 < 0;
                        v860 = v1523;
                        if ( !v82 )
                        {
                          v861 = lpMemk;
                          if ( v759 == 1 )
                            ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_1808C0340[0])(
                              lpMemk,
                              v1831.m128i_u32[0],
                              v1831.m128i_u32[1],
                              v863,
                              v1543,
                              v1523,
                              0,
                              0,
                              13369376);
                          else
                            ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_1808C0380[0])(
                              lpMemk,
                              (unsigned int)v1843,
                              DWORD1(v1843),
                              v863,
                              v1543,
                              v1523,
                              0,
                              0,
                              v863,
                              v1543,
                              v1583);
                          goto LABEL_1130;
                        }
LABEL_1047:
                        v871 = v1604;
                        goto LABEL_1048;
                      }
                      v913 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                    }
                    else
                    {
                      v913 = -5723992;
                    }
                    v1414 = v913;
                    LODWORD(v1642) = v913;
                    goto LABEL_1107;
                  }
                }
              }
              GetLastError();
LABEL_1046:
              v860 = v1523;
              goto LABEL_1047;
            }
          }
          else
          {
            v738 = 0;
          }
          if ( v759 != 1 )
            goto LABEL_941;
          goto LABEL_939;
        }
        v1541 = 0;
        v1689 = 0;
        v641 = 0LL;
        v1745 = 0LL;
        v1744 = 0LL;
        v1746 = 0LL;
        v1747 = 0LL;
        v642 = 0;
        v1748 = 0LL;
        memset(v1886, 0, sizeof(v1886));
        v1688 = 0;
        v1711 = 0LL;
        if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808C03E0[0])(
                8LL,
                &v1688,
                0LL,
                &v1689) )
        {
          v565 = GetLastError();
          v643 = v565 < 0;
          if ( v565 > 0 )
          {
            v565 = (unsigned __int16)v565 | 0x80070000;
            v643 = v565 < 0;
          }
          if ( !v643 )
            v565 = -2147467259;
          goto LABEL_721;
        }
        v644 = MemoryAlloc(2LL * v1689);
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1748, v644);
        if ( !v1748 )
        {
          v565 = -2147024882;
          goto LABEL_721;
        }
        v645 = MemoryAlloc(4LL * (v1688 + 1));
        SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1711, v645);
        v646 = v1711;
        if ( v1711 )
        {
          if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1808C03E0[0])(
                 8LL,
                 &v1688,
                 v1748,
                 &v1689) )
          {
            v653 = v646;
            if ( v1688 )
            {
              v654 = v1748;
              v655 = v646;
              for ( ii = 0; ii < v1688; ++ii )
              {
                *v655 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808C03F0)(v654, 0LL);
                v657 = -1LL;
                do
                  ++v657;
                while ( *(_WORD *)&v654[2 * v657] );
                ++v655;
                v654 += 2 * v657 + 2;
              }
              LOBYTE(v490) = v1594;
              v1711 = v655;
              v653 = v655;
            }
            v641 = (char *)v646;
            *v653 = 1033;
            v642 = v1688 + 1;
            v1711 = 0LL;
            v1541 = v1688 + 1;
            v1744 = v641;
LABEL_721:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1711);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1748);
            if ( v565 >= 0 )
            {
              LODWORD(v1641) = 0;
              v647 = 0;
              v648 = 0;
              if ( v642 )
              {
                v649 = 0LL;
                while ( 2 )
                {
                  v650 = 0;
                  v651 = dword_1807CF830;
                  do
                  {
                    if ( *(_DWORD *)&v641[v649] == *v651 )
                    {
                      v647 = v650;
                      LODWORD(v1641) = v650;
                      goto LABEL_742;
                    }
                    ++v651;
                    ++v650;
                  }
                  while ( v650 < 0x26 );
                  ++v648;
                  v649 += 4LL;
                  if ( v648 < v1541 )
                    continue;
                  break;
                }
              }
LABEL_742:
              v1542 = 0;
              memset(v1849, 0, sizeof(v1849));
              if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1808C03E8[0])(
                     (unsigned int)dword_1807CF830[v647],
                     v1896,
                     85LL)
                && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808C03D0[0])(v1896, 88LL, v1849, 16LL) > 0 )
              {
                v1542 = (HIDWORD(v1849[0]) >> 27) & 1;
              }
              memset_0(v1893, 0, 0x90uLL);
              v658 = 19LL;
              v659 = L"Segoe UI Light";
              v660 = (const wchar_t **)&v1892;
              do
              {
                *v660 = v659;
                v661 = -1LL;
                do
                  ++v661;
                while ( v659[v661] );
                ++v660;
                v659 += v661 + 1;
                --v658;
              }
              while ( v658 );
              v662 = 3LL * v647;
              lpModuleNamed = *(LPCWSTR *)&v1893[8 * byte_1807CF7A0[v662] - 8];
              v663 = byte_1807CF7A0[v662 + 2];
              v1637 = *(unsigned __int16 **)&v1893[8 * byte_1807CF7A0[v662 + 1] - 8];
              v1608 = v1637;
              v1408 = *(_QWORD *)&v1893[8 * v663 - 8];
              v664 = (char *)MemoryAlloc(0x1C90uLL);
              v1638 = v664;
              if ( v664 )
              {
                v665 = v664 + 7;
                v666 = -1;
                v667 = (unsigned __int8 *)&unk_1807CF8D2;
                v668 = 0;
                v669 = 0;
                v670 = 0;
                v671 = 914LL;
                do
                {
                  v672 = *(v667 - 1) | (*(v667 - 2) << 8);
                  v673 = v667[2] << 8;
                  v674 = *v667;
                  v667 += 8;
                  v675 = *(v667 - 7) | ((v674 | (v672 << 8)) << 8);
                  v676 = v675 ^ v670;
                  v677 = *(v667 - 3) | ((*(v667 - 4) | ((*(v667 - 5) | v673) << 8)) << 8);
                  v678 = v676 ^ v669 ^ v677 ^ 0xAC987321;
                  v679 = (__ROR4__(v678, 22) + 4991 * __ROR4__(v678 + 1419157410, 27)) ^ v676;
                  v680 = (43881 * __ROR4__(v679 + 133239679, 9) - __ROR4__(v679, 30)) ^ v678;
                  v681 = (24670 * v680 - (v680 >> 13) - 123127970) ^ v679;
                  v682 = (2033 * __ROR4__(v681 ^ 0xAB69, 26) - __ROR4__(v681, 30)) ^ v680;
                  v683 = (133239679 - (v682 ^ 0xAB69605E)) ^ v681;
                  v684 = (43881 * (v683 ^ 0x137F)) ^ __ROR4__(v683, 6) ^ v682;
                  v685 = (__ROR4__(v684, 30) + 24670 * __ROR4__(v684 + 133239679, 15)) ^ v683;
                  v686 = (2033 * __ROR4__(v685 + 1419157410, 14) - __ROR4__(v685, 24)) ^ v684;
                  v687 = __ROR4__(v686, 10) ^ (4991 * __ROR4__(v686 ^ 0xAB69605E, 12)) ^ v685;
                  v688 = v686 ^ (v687 >> 10) ^ (43881 * (v687 ^ 0x7F1));
                  v689 = (2033 * (__ROR4__(~v688, 5) + 24670)) ^ v687;
                  v690 = v688 ^ (v689 - 2033) ^ 0xAB69605E;
                  v691 = ((v690 >> 2) + 4991 * __ROR4__(v688 ^ (v689 - 2033) ^ 0xAB6967AF, 30)) ^ v689;
                  v692 = (__ROR4__(v691, 25) + 43881 * __ROR4__(v691 - 133239679, 6)) ^ v690;
                  v693 = (24670 * (v692 ^ 0x137F) + __ROR4__(v692, 9)) ^ v691;
                  v694 = (__ROR4__(v693, 25) + 2033 * __ROR4__(v693 ^ 0xAB69, 27)) ^ v692;
                  v695 = v693 ^ v694 ^ 0xAC987321;
                  v696 = (4991 * __ROR4__(v695, 3) - 219010071) ^ v694;
                  v697 = (24670 * __ROR4__(v696 - 133239679, 1) - __ROR4__(v696, 6)) ^ v695;
                  v698 = (__ROR4__(v697, 18) + 2033 * __ROR4__(v697 - 1419157410, 29)) ^ v696;
                  v699 = (4991 * __ROR4__(v698 - 1419157410, 17) - __ROR4__(v698, 14)) ^ v697;
                  v700 = (v699 >> 3) ^ (43881 * (v699 ^ 0x605E)) ^ v698;
                  v701 = 24670 * __ROR4__(v700 ^ 0x7F1137F, 28);
                  v702 = __ROR4__(v700, 30);
                  v669 = v666 ^ v700;
                  v666 = v677;
                  v670 = v668 ^ v699 ^ v702 ^ v701;
                  *(v665 - 4) = v670;
                  *v665 = v669;
                  v665 += 8;
                  v668 = v675;
                  *(v665 - 13) = BYTE1(v670);
                  *(v665 - 9) = BYTE1(v669);
                  *(v665 - 14) = (unsigned __int16)(v670 >> 8) >> 8;
                  *(v665 - 10) = (unsigned __int16)(v669 >> 8) >> 8;
                  *(v665 - 15) = __ROR4__((((v670 >> 8) | (v670 << 24)) >> 8) | (((v670 >> 8) | (v670 << 24)) << 24), 8);
                  *(v665 - 11) = __ROR4__((((v669 >> 8) | (v669 << 24)) >> 8) | (((v669 >> 8) | (v669 << 24)) << 24), 8);
                  --v671;
                }
                while ( v671 );
                LOBYTE(v490) = v1594;
                v99 = v1643;
                v703 = 0LL;
                v704 = v1638;
                v705 = 0;
                do
                  v705 ^= *((_BYTE *)v1638 + v703++);
                while ( v703 < 0x1C90 );
                if ( v705 == 127LL )
                {
                  v1745 = v1638;
                  v565 = 0;
                  v1746 = 7312LL;
                  if ( v1638 )
                    v1746 = 7312LL;
                  else
                    v704 = 0LL;
                  v706 = v1641;
                  v707 = v1886;
                  v708 = 6LL;
                  do
                  {
                    for ( jj = 0; jj < 0x26; ++jj )
                    {
                      if ( v706 == jj )
                        *v707 = v704;
                      v710 = -1LL;
                      do
                        ++v710;
                      while ( v704[v710] );
                      v704 += v710 + 1;
                    }
                    ++v707;
                    --v708;
                  }
                  while ( v708 );
                  v711 = MemoryAlloc(0x18uLL);
                  SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1747, v711);
                  v712 = v1747;
                  if ( v1747 )
                  {
                    v1564 = 0;
                    v1638 = v1747;
                    *v1747 = 0LL;
                    *((_QWORD *)v712 + 2) = 0LL;
                    v713 = (__int16 *)&v1894;
                    v1746 = 7312LL;
                    v1641 = (__int64)&v1894;
                    v714 = 0;
                    v715 = (char *)v712;
                    while ( 2 )
                    {
                      v716 = *v713;
                      v717 = word_1807CF818;
                      v718 = 0LL;
                      while ( v716 != *v717 )
                      {
                        v718 = (unsigned int)(v718 + 1);
                        ++v717;
                        if ( (unsigned int)v718 >= 6 )
                          goto LABEL_783;
                      }
                      v719 = (unsigned __int16 *)*((_QWORD *)v1886 + v718);
                      v720 = -1LL;
                      v1544 = v719;
                      do
                        ++v720;
                      while ( *((_BYTE *)v719 + v720) );
                      v721 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, _QWORD, _DWORD))off_1808C0400[0])(
                               65001LL,
                               0LL,
                               v719,
                               (unsigned int)(v720 + 1),
                               0LL,
                               0);
                      v1595 = v721;
                      if ( !v721 )
                      {
                        v726 = GetLastError();
                        v565 = v726;
                        if ( v726 > 0 )
                          v565 = (unsigned __int16)v726 | 0x80070000;
                        if ( v565 >= 0 )
                          v565 = -2147467259;
                        goto LABEL_793;
                      }
                      v722 = MemoryAlloc(2LL * v721);
                      *(_QWORD *)v1638 = v722;
                      if ( !v722 )
                        goto LABEL_774;
                      v723 = -1LL;
                      do
                        ++v723;
                      while ( *((_BYTE *)v1544 + v723) );
                      if ( !((unsigned int (__fastcall *)(__int64, _QWORD, unsigned __int16 *, _QWORD, LPVOID, int))off_1808C0400[0])(
                              65001LL,
                              0LL,
                              v1544,
                              (unsigned int)(v723 + 1),
                              v722,
                              v1595) )
                      {
                        v725 = GetLastError();
                        v565 = v725;
                        if ( v725 > 0 )
                          v565 = (unsigned __int16)v725 | 0x80070000;
                        if ( v565 >= 0 )
                          v565 = -2147467259;
                        goto LABEL_793;
                      }
                      v715 = (char *)v1638;
                      v714 = v1564;
LABEL_783:
                      ++v714;
                      v713 = (__int16 *)(v1641 + 2);
                      v1564 = v714;
                      v715 += 8;
                      v1641 += 2LL;
                      v1638 = v715;
                      if ( v714 < 3 )
                        continue;
                      break;
                    }
                    v724 = (void **)v712;
                    v712 = 0LL;
                    v1742 = v724;
                    v1822 = v1542;
                    v1747 = 0LL;
                  }
                  else
                  {
LABEL_774:
                    v565 = -2147024882;
                  }
LABEL_793:
                  if ( v712 )
                  {
                    v727 = 3LL;
                    v1545 = 3LL;
                    v1637 = v1608;
                    v1746 = 7312LL;
                    do
                    {
                      v728 = *(_WORD **)v712;
                      if ( *(_QWORD *)v712 )
                      {
                        v729 = -1LL;
                        do
                          ++v729;
                        while ( v728[v729] );
                        memset(v728, 0, 2 * v729 + 2);
                        MemoryFree(*(void **)v712);
                        v727 = v1545;
                      }
                      v712 = (_OWORD *)((char *)v712 + 8);
                      v1545 = --v727;
                    }
                    while ( v727 );
                  }
                }
                else
                {
                  v565 = -1073425151;
                  MemoryFree(v1638);
                }
              }
              else
              {
                v565 = -2147024882;
              }
            }
            if ( v1745 )
              memset(v1745, 0, v1746);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1747);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1745);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1744);
            if ( v565 < 0 )
              goto LABEL_836;
            if ( v1742 )
              v730 = v1742;
            else
              v730 = 0LL;
            v1824 = *v730;
            if ( v1742 )
              v731 = v1742;
            else
              v731 = 0LL;
            v1825 = v731[1];
            if ( v1742 )
              v732 = v1742;
            else
              v732 = 0LL;
            v1826 = v732[2];
            v1789 = 0LL;
            LODWORD(v1789) = 16;
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808C04A8)(66LL, 0LL, &v1789) )
            {
              v733 = GetLastError();
              v565 = v733;
              if ( v733 > 0 )
                v565 = (unsigned __int16)v733 | 0x80070000;
              v1823 = 0;
              if ( v565 >= 0 )
                v565 = -2147467259;
              goto LABEL_836;
            }
            v734 = (int)v1640;
            v1823 = BYTE4(v1789) & 1;
            if ( (_DWORD)v1640 == 1 )
            {
              v1578 = 42;
            }
            else
            {
              if ( (_DWORD)v1640 != 2 )
              {
                if ( (_DWORD)v1640 == 3 )
                {
                  v1578 = 225;
                  v1489 = 225;
                }
LABEL_825:
                v735 = 96;
                v1565 = 96;
                memset_0(v1882, 0, 0xDCuLL);
                v1883 = 220;
                v565 = 0;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808C0420[0])(0LL, 0xFFFFFFFFLL, v1882) )
                {
                  v735 = v1884;
                  *((_QWORD *)&v1788 + 1) = v1885;
                  *(_QWORD *)&v1788 = 0LL;
                  if ( v1884 < 0x60u )
                    v735 = 96;
                  v1565 = v735;
                }
                v736 = (unsigned __int16 *)v1408;
                if ( v734 == 1 )
                  v736 = (unsigned __int16 *)lpModuleNamed;
                v1546 = v736;
                memset_0(v1873, 0, 0x5CuLL);
                v1526 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
                if ( v1526 )
                {
                  v761 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1578, v735, 72LL);
                  v1873[4] = 400;
                  v1873[0] = -v761;
                  v1874 = 5;
                  StringCchCopyW((char *)v1875, 32LL, (char *)v1546);
                  v762 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1873);
                  if ( v762 )
                  {
                    v1827 = (unsigned __int16 *)v762;
                  }
                  else
                  {
                    v565 = GetLastError();
                    v763 = v565 < 0;
                    if ( v565 > 0 )
                    {
                      v565 = (unsigned __int16)v565 | 0x80070000;
                      v763 = v565 < 0;
                    }
                    if ( !v763 )
                      v565 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1808C04A0[0])(0LL, v1526);
                }
                else
                {
                  v565 = GetLastError();
                  v737 = v565 < 0;
                  if ( v565 > 0 )
                  {
                    v565 = (unsigned __int16)v565 | 0x80070000;
                    v737 = v565 < 0;
                  }
                  if ( !v737 )
                  {
                    v565 = -2147467259;
LABEL_836:
                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808C04A0[0])(0LL, v1445);
                    goto LABEL_837;
                  }
                }
                if ( v565 < 0 )
                  goto LABEL_836;
                v764 = v734 == 1;
                v765 = (char *)v1408;
                if ( v764 )
                  v765 = (char *)lpModuleNamed;
                memset_0(v1876, 0, 0x5CuLL);
                v565 = 0;
                v1547 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                              0LL,
                                              0LL,
                                              1027LL);
                if ( !v1547 )
                {
LABEL_900:
                  v780 = GetLastError();
                  v565 = v780;
                  if ( v780 > 0 )
                    v565 = (unsigned __int16)v780 | 0x80070000;
                  if ( v565 >= 0 )
                    v565 = -2147467259;
                  goto LABEL_836;
                }
                v766 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1489, v735, 72LL);
                v1876[4] = 400;
                v1876[0] = -v766;
                v1877 = 5;
                StringCchCopyW((char *)v1878, 32LL, v765);
                v767 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1876);
                if ( v767 )
                {
                  v1828 = (unsigned __int16 *)v767;
                }
                else
                {
                  v768 = GetLastError();
                  v565 = v768;
                  if ( v768 > 0 )
                    v565 = (unsigned __int16)v768 | 0x80070000;
                  if ( v565 >= 0 )
                    v565 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, unsigned __int16 *))off_1808C04A0[0])(0LL, v1547);
                if ( v565 < 0 )
                  goto LABEL_836;
                v769 = 0;
                v770 = 0;
                if ( (_DWORD)v1640 != 1 )
                {
                  if ( (_DWORD)v1640 == 2 )
                  {
                    v769 = SDWORD2(v1788) / 4;
                    v770 = 0;
LABEL_880:
                    *((_QWORD *)&v1843 + 1) = __PAIR64__(v770, v769);
                    if ( (_DWORD)v1640 == 1 )
                    {
                      v771 = 150;
                      Sizef = 150;
                      v1639 = 32;
                    }
                    else
                    {
                      v771 = 0;
                      if ( (unsigned int)((_DWORD)v1640 - 2) <= 1 )
                      {
                        Sizef = 0;
                        v1639 = 0;
                      }
                    }
                    v772 = v769 - v771;
                    v773 = v1824;
                    v1832.m128i_i32[2] = v772;
                    v1831.m128i_i32[2] = v772;
                    v1548 = (unsigned __int16 *)((__int64 (__fastcall *)(LPCWSTR, unsigned __int16 *, _QWORD))off_1808C03B8)(
                                                  v1445,
                                                  v1827,
                                                  0LL);
                    v774 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                             v1445,
                             v773,
                             0xFFFFFFFFLL,
                             &v1831,
                             3152,
                             0LL);
                    v565 = v774 == 0 ? 0x80004005 : 0;
                    if ( v1548 )
                      ((void (__fastcall *)(LPCWSTR, unsigned __int16 *))off_1808C03B8)(v1445, v1548);
                    if ( !v774 )
                      goto LABEL_836;
                    v775 = v1825;
                    v1549 = (unsigned __int16 *)((__int64 (__fastcall *)(LPCWSTR, unsigned __int16 *))off_1808C03B8)(
                                                  v1445,
                                                  v1828);
                    v776 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                             v1445,
                             v775,
                             0xFFFFFFFFLL,
                             &v1832,
                             3152,
                             0LL);
                    v565 = v776 == 0 ? 0x80004005 : 0;
                    if ( v1549 )
                      ((void (__fastcall *)(LPCWSTR, unsigned __int16 *))off_1808C03B8)(v1445, v1549);
                    if ( !v776 )
                      goto LABEL_836;
                    v777 = (int)v1640;
                    if ( (unsigned int)((_DWORD)v1640 - 2) <= 1 )
                    {
                      v772 = v1832.m128i_i32[2];
                      if ( v1831.m128i_i32[2] > v1832.m128i_i32[2] )
                        v772 = v1831.m128i_i32[2];
                    }
                    if ( v1822 )
                    {
                      off_1808C0490(
                        (CToastCenterExperienceManager *)&v1831,
                        (struct CSingleViewShellExperience *)(unsigned int)(v772 - v1831.m128i_i32[2]));
                      v778 = (unsigned int)(v772 - v1832.m128i_i32[2]);
                    }
                    else
                    {
                      off_1808C0490((CToastCenterExperienceManager *)&v1831, (struct CSingleViewShellExperience *)Sizef);
                      v778 = Sizef;
                    }
                    ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808C0490)(
                      &v1832,
                      v778,
                      v1831.m128i_i32[3] + v1639);
                    if ( (unsigned int)(v777 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1843 + 1) = __PAIR64__(v1832.m128i_u32[3], v772);
                      v1830 = -5723992;
                    }
                    else if ( v777 == 1 )
                    {
                      v1830 = 0xFFFFFF;
                      memset_0(v1879, 0, 0x5CuLL);
                      v565 = 0;
                      v779 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(0LL, 0LL, 1027LL);
                      if ( !v779 )
                        goto LABEL_900;
                      v781 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1808C03F8)(11LL, v1565);
                      v1879[4] = 400;
                      v1879[0] = -v781;
                      v1880 = 5;
                      StringCchCopyW((char *)v1881, 32LL, (char *)v1637);
                      v782 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1879);
                      if ( v782 )
                      {
                        v1829 = v782;
                      }
                      else
                      {
                        v565 = GetLastError();
                        v783 = v565 < 0;
                        if ( v565 > 0 )
                        {
                          v565 = (unsigned __int16)v565 | 0x80070000;
                          v783 = v565 < 0;
                        }
                        if ( !v783 )
                          v565 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_1808C04A0[0])(0LL, v779);
                      if ( v565 < 0 )
                        goto LABEL_836;
                      v784 = v1826;
                      v1835 = v772;
                      v785 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808C03B8)(v1445, v1829);
                      v786 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1808C0418)(
                               v1445,
                               v784,
                               0xFFFFFFFFLL,
                               &v1833,
                               1120,
                               0LL);
                      v565 = v786 == 0 ? 0x80004005 : 0;
                      if ( v785 )
                        ((void (__fastcall *)(LPCWSTR, __int64))off_1808C03B8)(v1445, v785);
                      if ( !v786 )
                        goto LABEL_836;
                      v787 = v1835 + 24;
                      if ( (int)(v1835 + 24) < 90 )
                        v787 = 90;
                      v1835 = v787;
                      v1836 = 32;
                      v1833 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1833, v1565, 96LL);
                      v1834 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1834, v1565, 96LL);
                      v1835 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1835, v1565, 96LL);
                      v1836 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(v1836, v1565, 96LL);
                      if ( v1822 )
                      {
                        v788 = v1831.m128i_u32[0];
                        if ( v1831.m128i_i32[0] >= v1832.m128i_i32[0] )
                          v788 = v1832.m128i_u32[0];
                      }
                      else
                      {
                        v789 = v1831.m128i_i32[2];
                        if ( v1831.m128i_i32[2] <= v1832.m128i_i32[2] )
                          v789 = v1832.m128i_i32[2];
                        v788 = v1833 + v789 - v1835;
                      }
                      off_1808C0490((CToastCenterExperienceManager *)&v1833, (struct CSingleViewShellExperience *)v788);
                      v777 = (int)v1640;
                    }
                    v790 = HIDWORD(v1843);
                    v791 = DWORD2(v1843);
                    v1566 = v1822;
                    v792 = v777 - 1;
                    if ( !v792 )
                    {
                      *(_QWORD *)&v1843 = 0LL;
                      goto LABEL_936;
                    }
                    v793 = v792 - 1;
                    if ( v793 )
                    {
                      if ( v793 != 1 )
                        goto LABEL_936;
                      v1852 = 0LL;
                      v1850 = 0LL;
                      v1851 = 0LL;
                      v794 = (CToastCenterExperienceManager *)off_1808C0488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1850) = 40;
                      if ( !(unsigned int)off_1808C0448(v794, (struct CSingleViewShellExperience *)&v1850) )
                        goto LABEL_936;
                      off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1851 + 4));
                      off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1851 + 12));
                      v795 = 50 * (HIDWORD(v1851) - v791) / 100;
                      v796 = 50 * (v1852 - v790);
                    }
                    else
                    {
                      v1855 = 0LL;
                      v1853 = 0LL;
                      v1854 = 0LL;
                      v797 = (CToastCenterExperienceManager *)off_1808C0488[0](
                                                                0LL,
                                                                (struct CSingleViewShellExperience *)1);
                      LODWORD(v1853) = 40;
                      if ( !(unsigned int)off_1808C0448(v797, (struct CSingleViewShellExperience *)&v1853) )
                      {
LABEL_936:
                        v565 = 0;
                        goto LABEL_836;
                      }
                      off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1854 + 4));
                      off_1808C0480[0](0LL, (struct CSingleViewShellExperience *)((char *)&v1854 + 12));
                      if ( v1566 )
                        v795 = DWORD1(v1854) + 5 * HIDWORD(v1854) / 100;
                      else
                        v795 = 95 * (HIDWORD(v1854) - v791) / 100;
                      v796 = 95 * (v1855 - v790);
                    }
                    LODWORD(v1843) = v795;
                    DWORD1(v1843) = v796 / 100;
                    goto LABEL_936;
                  }
                  if ( (_DWORD)v1640 != 3 )
                    goto LABEL_880;
                }
                v769 = DWORD2(v1788);
                v770 = HIDWORD(v1788);
                goto LABEL_880;
              }
              v1578 = 15;
            }
            v1489 = 11;
            goto LABEL_825;
          }
          v565 = GetLastError();
          v652 = v565 < 0;
          if ( v565 > 0 )
          {
            v565 = (unsigned __int16)v565 | 0x80070000;
            v652 = v565 < 0;
          }
          if ( !v652 )
            v565 = -2147467259;
        }
        else
        {
          v565 = -2147024882;
        }
        v642 = 0;
        goto LABEL_721;
      }
      v566 = dword_1808CCC34;
LABEL_705:
      dword_1808CCC34 = v566 + 1;
      goto LABEL_706;
    }
    v491 = dword_1808CCC34;
LABEL_656:
    dword_1808CCC34 = v491 + 1;
    goto LABEL_657;
  }
  v100 = v1641;
LABEL_1565:
  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
    ;
  v1380 = dword_1808CCC34;
  if ( dword_1808CCC34 > 0 )
  {
    --dword_1808CCC34;
    if ( v1380 == 1 )
    {
      v1381 = 4LL;
      v1382 = qword_1808C93A0;
      do
      {
        if ( *v1382 )
          FreeLibrary(*v1382);
        v1382 += 3;
        --v1381;
      }
      while ( v1381 );
      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
      v1383 = 2LL;
      v1384 = off_1808C0340;
      v1385 = off_1807174F0;
      do
      {
        v1386 = *((_OWORD *)v1385 + 1);
        *(_OWORD *)v1384 = *(_OWORD *)v1385;
        v1387 = *((_OWORD *)v1385 + 2);
        *((_OWORD *)v1384 + 1) = v1386;
        v1388 = *((_OWORD *)v1385 + 3);
        *((_OWORD *)v1384 + 2) = v1387;
        v1389 = *((_OWORD *)v1385 + 4);
        *((_OWORD *)v1384 + 3) = v1388;
        v1390 = *((_OWORD *)v1385 + 5);
        *((_OWORD *)v1384 + 4) = v1389;
        v1391 = *((_OWORD *)v1385 + 6);
        *((_OWORD *)v1384 + 5) = v1390;
        v1392 = *((_OWORD *)v1385 + 7);
        v1385 += 16;
        *((_OWORD *)v1384 + 6) = v1391;
        v1384 += 16;
        *((_OWORD *)v1384 - 1) = v1392;
        --v1383;
      }
      while ( v1383 );
      v1393 = *((_OWORD *)v1385 + 1);
      *(_OWORD *)v1384 = *(_OWORD *)v1385;
      v1394 = *((_OWORD *)v1385 + 2);
      *((_OWORD *)v1384 + 1) = v1393;
      v1395 = *((_OWORD *)v1385 + 3);
      *((_OWORD *)v1384 + 2) = v1394;
      v1396 = *((_OWORD *)v1385 + 4);
      *((_OWORD *)v1384 + 3) = v1395;
      v1397 = *((_OWORD *)v1385 + 5);
      *((_OWORD *)v1384 + 4) = v1396;
      v1398 = *((_OWORD *)v1385 + 6);
      *((_OWORD *)v1384 + 5) = v1397;
      *((_OWORD *)v1384 + 6) = v1398;
    }
  }
  _InterlockedExchange(&dword_1808CCC40, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1634);
  if ( v99 >= 0 )
  {
    if ( v100 == 4 )
    {
      v1399 = *(_DWORD *)v1714;
      goto LABEL_1588;
    }
    goto LABEL_1583;
  }
  if ( v99 != -805306316 )
  {
    if ( v99 == -805306139 || v99 == -1073425151 )
    {
      v1645 = -1073418201;
      goto LABEL_1585;
    }
    if ( v99 == -805306306 )
    {
      v1645 = -1073418200;
      goto LABEL_1585;
    }
    v1645 = v99;
    if ( v99 != -2147024774 )
      goto LABEL_1585;
LABEL_1583:
    v1399 = v1648;
    v1400 = -1073418210;
    goto LABEL_1589;
  }
  v1645 = -1073418222;
LABEL_1585:
  v1399 = v1648;
LABEL_1588:
  v1400 = v1645;
LABEL_1589:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1714);
  v1645 = v1400;
  if ( v1400 >= 0 )
    return v1399 == 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x36,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\AIAssistanceUserEligibilityCheck.h",
    (const char *)(unsigned int)v1400);
  AIAssistanceTelemetry::PolicyCheckError<unsigned short const (&)[28],unsigned short const (&)[50],long &>(
    v1402,
    v1401,
    &v1645);
  return 0;
}
