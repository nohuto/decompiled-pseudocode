/*
 * XREFs of sub_140507CD0 @ 0x140507CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     KeAreAllApcsDisabled @ 0x1403B2000 (KeAreAllApcsDisabled.c)
 *     KeCheckProcessorGroupAffinity @ 0x14044D720 (KeCheckProcessorGroupAffinity.c)
 *     KeAreApcsDisabled @ 0x14044F4E0 (KeAreApcsDisabled.c)
 *     KeVerifyGroupAffinity @ 0x140469BC0 (KeVerifyGroupAffinity.c)
 *     KiGetNtDdiVersion @ 0x140480F14 (KiGetNtDdiVersion.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     sub_140516B3C @ 0x140516B3C (sub_140516B3C.c)
 *     sub_140516C24 @ 0x140516C24 (sub_140516C24.c)
 *     sub_140517D28 @ 0x140517D28 (sub_140517D28.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     sub_140BD80B0 @ 0x140BD80B0 (sub_140BD80B0.c)
 *     sub_140BD9AF8 @ 0x140BD9AF8 (sub_140BD9AF8.c)
 *     sub_140BDA384 @ 0x140BDA384 (sub_140BDA384.c)
 *     sub_140BDA680 @ 0x140BDA680 (sub_140BDA680.c)
 *     sub_140BDAD30 @ 0x140BDAD30 (sub_140BDAD30.c)
 *     KiGetGdtIdt @ 0x140BDC690 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140BDC6A0 (KiGetLdtr.c)
 *     KiGetSs @ 0x140BDC6B0 (KiGetSs.c)
 *     KiGetTr @ 0x140BDC6C0 (KiGetTr.c)
 *     KiErrata361Present @ 0x140BDC6D0 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140BDC6F0 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140BDC700 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140BDC7B0 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140BDCA60 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140BDCBD4 (RtlInitMinimalBarrier.c)
 *     sub_140BE196C @ 0x140BE196C (sub_140BE196C.c)
 */

__int64 __fastcall sub_140507CD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // r14
  char *Pool2; // rax
  _QWORD *v18; // r13
  char *v19; // r15
  unsigned __int64 v20; // r10
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int128 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int128 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  unsigned __int64 v34; // rdx
  int v35; // ecx
  unsigned int *v36; // rax
  int v37; // r14d
  unsigned int v38; // ecx
  int i9; // r12d
  int v40; // r15d
  int v41; // eax
  unsigned __int64 v42; // r8
  unsigned int v43; // r9d
  char *v44; // r13
  __int64 v45; // r10
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int128 v48; // rax
  unsigned __int64 v49; // rbx
  int v50; // eax
  unsigned int v51; // r9d
  unsigned int v52; // ecx
  int v53; // r8d
  __int64 *v54; // r10
  bool v55; // zf
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  __int64 v62; // rcx
  unsigned __int64 v63; // r11
  unsigned __int64 v64; // r10
  unsigned int *v65; // rcx
  int v66; // r10d
  _QWORD *v67; // rsi
  __int64 v68; // r8
  _QWORD *v69; // r9
  const char *v70; // rax
  int v71; // r10d
  __int64 v72; // r14
  unsigned __int64 v73; // rbx
  unsigned int v74; // r11d
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned __int128 v77; // rax
  char v78; // r10
  unsigned int v79; // r8d
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 mm; // rax
  unsigned int v83; // ebx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned __int8 v86; // r15
  unsigned __int64 v87; // rsi
  __int64 v88; // r13
  unsigned __int64 v89; // r12
  unsigned __int64 v90; // r14
  int v91; // eax
  __int64 v92; // rcx
  int v93; // ecx
  __int64 v94; // rcx
  __int64 v95; // r10
  __int64 v96; // r8
  unsigned __int64 v97; // r9
  int v98; // ecx
  __int64 v99; // rax
  __int64 v100; // r8
  char *v101; // r8
  char *v102; // r9
  __int64 v103; // rcx
  __int64 v104; // rax
  char v105; // cl
  char v106; // al
  __int64 v107; // r8
  unsigned __int8 v108; // si
  unsigned __int64 v109; // rbx
  __int64 v110; // r15
  unsigned __int64 v111; // r14
  int v112; // eax
  __int64 v113; // rcx
  int v114; // ecx
  __int64 v115; // rcx
  __int64 v116; // r10
  __int64 v117; // r8
  unsigned __int64 v118; // r9
  int v119; // ecx
  __int64 v120; // rax
  unsigned int v121; // ecx
  unsigned int *v122; // r14
  unsigned __int64 v123; // r15
  unsigned __int64 v124; // r12
  __int64 v125; // rsi
  _QWORD *v126; // r8
  const char *v127; // rax
  __int64 v128; // r9
  unsigned __int64 v129; // r11
  unsigned __int64 v130; // rbx
  unsigned int v131; // r10d
  __int64 v132; // rax
  __int64 v133; // rbx
  unsigned __int128 v134; // rax
  unsigned __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int64 nn; // rax
  unsigned int v138; // ebx
  __int64 v139; // rcx
  unsigned __int8 v140; // r15
  unsigned __int64 v141; // rsi
  __int64 v142; // r13
  unsigned __int64 v143; // r12
  int v144; // eax
  bool v145; // zf
  __int64 v146; // r14
  __int64 v147; // rax
  int v148; // ecx
  __int64 v149; // rcx
  __int64 v150; // r10
  __int64 v151; // r8
  unsigned __int64 v152; // r9
  int v153; // ecx
  __int64 v154; // rax
  __int64 v155; // rbx
  int v156; // ecx
  __int64 v157; // rcx
  __int64 v158; // r10
  __int64 v159; // r8
  _QWORD *v160; // rdx
  unsigned __int64 v161; // r9
  int v162; // ecx
  __int64 v163; // rax
  int v164; // ecx
  __int64 v165; // rcx
  __int64 v166; // r10
  __int64 v167; // r8
  _QWORD *v168; // rdx
  unsigned __int64 v169; // r9
  int v170; // ecx
  __int64 v171; // rax
  _QWORD *v172; // rsi
  __int64 v173; // r8
  _QWORD *v174; // r9
  const char *v175; // rax
  int v176; // r10d
  __int64 v177; // r14
  unsigned __int64 v178; // rbx
  unsigned int v179; // r11d
  __int64 v180; // rax
  __int64 v181; // rbx
  unsigned __int128 v182; // rax
  unsigned int v183; // r8d
  unsigned __int64 v184; // rax
  __int64 v185; // rax
  unsigned __int64 i1; // rax
  unsigned int v187; // ebx
  BOOL v188; // r15d
  __int64 v189; // rdx
  __int64 v190; // r8
  unsigned __int8 v191; // r14
  unsigned __int64 v192; // rsi
  __int64 v193; // r13
  unsigned __int64 v194; // r12
  int v195; // eax
  __int16 v196; // ax
  __int64 v197; // rcx
  int (__fastcall *v198)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  __int64 v199; // rcx
  int v200; // ecx
  __int64 v201; // rcx
  __int64 v202; // r10
  __int64 v203; // r8
  _QWORD *v204; // rdx
  unsigned __int64 v205; // r9
  __int64 v206; // rcx
  int v207; // ecx
  __int64 v208; // rcx
  __int64 v209; // r10
  __int64 v210; // r8
  _QWORD *v211; // rdx
  unsigned __int64 v212; // r9
  int v213; // ecx
  __int64 v214; // rax
  int v215; // ecx
  __int64 v216; // rax
  void (*v217)(void); // rax
  unsigned int kk; // ebx
  __int64 v219; // rcx
  unsigned __int64 v220; // rdx
  __int64 v221; // r8
  __int64 v222; // r9
  unsigned __int64 v223; // rdx
  unsigned __int64 v224; // r8
  int v225; // ecx
  __int64 v226; // rcx
  __int64 v227; // r10
  __int64 v228; // r8
  _QWORD *v229; // rdx
  unsigned __int64 v230; // r9
  int v231; // ecx
  __int64 v232; // rax
  int v233; // eax
  int v234; // ecx
  __int64 v235; // rcx
  unsigned __int64 v236; // rax
  unsigned __int128 v237; // rax
  void (__fastcall *v238)(_QWORD, _QWORD); // rax
  unsigned int v239; // r14d
  __int64 v240; // rbx
  unsigned int v241; // ecx
  unsigned __int8 v242; // si
  volatile signed __int8 **v243; // r8
  volatile signed __int8 *v244; // rdx
  unsigned __int64 v245; // r14
  __int64 v246; // r12
  unsigned __int64 v247; // r13
  __int64 v248; // r15
  _BYTE *v249; // rax
  _BYTE *v250; // rbx
  char v251; // cl
  int *v252; // rcx
  int v253; // ecx
  __int64 v254; // rcx
  __int64 v255; // r10
  __int64 v256; // r8
  _QWORD *v257; // rdx
  unsigned __int64 v258; // r9
  int v259; // ecx
  __int64 v260; // rax
  __int64 v261; // rcx
  __int64 v262; // rax
  int *v263; // rcx
  int v264; // ecx
  __int64 v265; // rcx
  __int64 v266; // r10
  __int64 v267; // r8
  _QWORD *v268; // rdx
  unsigned __int64 v269; // r9
  int *v270; // rcx
  int v271; // ecx
  __int64 v272; // rcx
  __int64 v273; // r10
  _QWORD *v274; // rdx
  unsigned __int64 v275; // r9
  int v276; // ecx
  __int64 v277; // rax
  void (__fastcall *v278)(_QWORD, _QWORD); // rax
  unsigned int v279; // r13d
  __int64 v280; // rbx
  unsigned int v281; // ecx
  void (__fastcall *v282)(_QWORD, _QWORD); // rax
  _QWORD **v283; // r14
  _QWORD *v284; // rsi
  unsigned __int64 v285; // rbx
  int *v286; // rcx
  int v287; // ecx
  __int64 v288; // rcx
  __int64 v289; // r10
  __int64 v290; // r8
  _QWORD *v291; // rdx
  unsigned __int64 v292; // r9
  int v293; // ecx
  __int64 v294; // rax
  __int64 v295; // rcx
  _QWORD **v296; // r12
  _QWORD *v297; // rsi
  char v298; // r14
  int v299; // r13d
  int *v300; // r15
  unsigned __int8 v301; // r14
  char *v302; // rbx
  int v303; // ecx
  __int64 v304; // rcx
  __int64 v305; // r10
  __int64 v306; // r8
  _QWORD *v307; // rdx
  unsigned __int64 v308; // r9
  int v309; // ecx
  __int64 v310; // rax
  _QWORD *v311; // rsi
  __int64 v312; // r8
  _QWORD *v313; // r9
  const char *v314; // rax
  int v315; // r11d
  __int64 v316; // r14
  unsigned __int64 v317; // rbx
  unsigned int v318; // r10d
  __int64 v319; // rax
  __int64 v320; // rbx
  unsigned __int128 v321; // rax
  char v322; // r11
  unsigned int v323; // r8d
  unsigned __int64 v324; // rax
  __int64 v325; // rax
  unsigned __int64 jj; // rax
  unsigned int v327; // ebx
  BOOL v328; // r15d
  __int64 v329; // r8
  unsigned __int8 v330; // r14
  unsigned __int64 v331; // rsi
  __int64 v332; // r13
  unsigned __int64 v333; // r12
  int v334; // eax
  __int64 v335; // rcx
  int v336; // ecx
  __int64 v337; // rcx
  __int64 v338; // r10
  __int64 v339; // r8
  unsigned __int64 v340; // r9
  int v341; // ecx
  __int64 v342; // rax
  __int64 v343; // r14
  __int64 v344; // rsi
  unsigned __int64 v345; // rax
  __int64 v346; // rcx
  unsigned __int64 v347; // rbx
  int v348; // ecx
  __int64 v349; // rcx
  __int64 v350; // r10
  __int64 v351; // r8
  _QWORD *v352; // rdx
  unsigned __int64 v353; // r9
  int v354; // ecx
  __int64 v355; // rax
  unsigned __int64 v356; // rcx
  int v357; // ecx
  __int64 v358; // rcx
  __int64 v359; // r10
  __int64 v360; // r8
  _QWORD *v361; // rdx
  unsigned __int64 v362; // r9
  int v363; // ecx
  __int64 v364; // rax
  _QWORD *v365; // rsi
  __int64 v366; // r8
  _QWORD *v367; // r9
  const char *v368; // rax
  int v369; // r10d
  __int64 v370; // r14
  unsigned __int64 v371; // rbx
  unsigned int v372; // r11d
  __int64 v373; // rax
  __int64 v374; // rbx
  unsigned __int128 v375; // rax
  char v376; // r10
  __int64 v377; // r8
  unsigned __int64 v378; // rax
  __int64 v379; // rax
  unsigned __int64 i3; // rax
  unsigned int v381; // ebx
  BOOL v382; // r15d
  unsigned __int8 v383; // r14
  unsigned __int64 v384; // rsi
  __int64 v385; // r13
  unsigned __int64 v386; // r12
  int v387; // eax
  __int64 **v388; // r15
  unsigned int v389; // eax
  __int64 v390; // r12
  char *v391; // rbx
  __int64 v392; // r14
  __int64 v393; // rsi
  _QWORD *v394; // rcx
  int v395; // edx
  __int64 v396; // r8
  char v397; // al
  __int64 v398; // rax
  __int64 v399; // rax
  int v400; // ecx
  __int64 v401; // rcx
  __int64 v402; // r10
  __int64 v403; // r8
  _QWORD *v404; // rdx
  unsigned __int64 v405; // r9
  __int64 v406; // rcx
  int v407; // ecx
  __int64 v408; // rcx
  __int64 v409; // r10
  int v410; // ecx
  __int64 v411; // rax
  int v412; // ecx
  __int64 v413; // rax
  __int16 v414; // ax
  __int64 v415; // rcx
  int (__fastcall *v416)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD); // rax
  __int64 (*v417)(void); // rax
  unsigned __int64 v418; // r15
  __int64 v419; // rax
  unsigned int v420; // esi
  __int64 (*v421)(void); // rax
  unsigned __int64 v422; // r12
  __int64 v423; // rax
  unsigned int v424; // r9d
  unsigned __int64 v425; // r8
  unsigned __int64 v426; // r9
  _QWORD *v427; // rsi
  __int64 v428; // r9
  _QWORD *v429; // r10
  const char *v430; // rax
  int v431; // r11d
  __int64 v432; // r14
  unsigned __int64 v433; // r8
  unsigned int v434; // ebx
  __int64 v435; // rax
  __int64 v436; // r8
  unsigned __int128 v437; // rax
  char v438; // r11
  unsigned int v439; // r9d
  unsigned __int64 v440; // rax
  __int64 v441; // rax
  unsigned __int64 i7; // rax
  unsigned int v443; // r10d
  const char *v444; // rsi
  unsigned int v445; // r8d
  unsigned __int64 v446; // rcx
  const char *v447; // r9
  int v448; // r11d
  const char *v449; // rax
  __int64 v450; // r14
  const char *v451; // rcx
  unsigned int v452; // ebx
  unsigned __int64 v453; // r8
  __int64 v454; // rax
  __int64 v455; // r8
  unsigned __int128 v456; // rax
  char v457; // r11
  __int64 v458; // rax
  int v459; // ecx
  __int64 v460; // rcx
  __int64 v461; // r10
  unsigned __int64 v462; // r9
  int v463; // ecx
  __int64 v464; // rax
  unsigned int v465; // r10d
  unsigned __int64 v466; // rax
  __int64 v467; // rax
  unsigned __int64 i8; // rax
  _QWORD *v469; // rcx
  __int64 v470; // r9
  char v471; // al
  __int64 v472; // rax
  __int64 v473; // rcx
  int v474; // ecx
  __int64 v475; // rcx
  __int64 v476; // r10
  unsigned __int64 v477; // r9
  int v478; // ecx
  __int64 v479; // rax
  _QWORD *v480; // rsi
  __int64 v481; // r8
  _QWORD *v482; // r9
  const char *v483; // rax
  int v484; // r10d
  __int64 v485; // r14
  unsigned __int64 v486; // rbx
  unsigned int v487; // r11d
  __int64 v488; // rax
  __int64 v489; // rbx
  unsigned __int128 v490; // rax
  unsigned int v491; // r8d
  unsigned __int64 v492; // rax
  __int64 v493; // rax
  unsigned __int64 i10; // rax
  unsigned int v495; // ebx
  BOOL v496; // r15d
  __int64 v497; // rdx
  __int64 v498; // r8
  unsigned __int8 v499; // r14
  unsigned __int64 v500; // rsi
  __int64 v501; // r13
  unsigned __int64 v502; // r12
  int v503; // eax
  unsigned int v504; // r9d
  const char *v505; // rsi
  const char *v506; // r10
  int v507; // r11d
  const char *v508; // rax
  __int64 v509; // r14
  const char *v510; // rcx
  unsigned __int64 v511; // r8
  unsigned int v512; // ebx
  __int64 v513; // rax
  __int64 v514; // r8
  unsigned __int128 v515; // rax
  char v516; // r11
  __int64 v517; // rcx
  int v518; // ecx
  __int64 v519; // rcx
  __int64 v520; // r10
  __int64 v521; // r8
  _QWORD *v522; // rdx
  unsigned __int64 v523; // r9
  int v524; // ecx
  __int64 v525; // rax
  unsigned int v526; // r9d
  unsigned __int64 v527; // rax
  __int64 v528; // rax
  unsigned __int64 i11; // rax
  unsigned int v530; // eax
  unsigned int v531; // r8d
  int v532; // ecx
  __int64 v533; // rcx
  __int64 v534; // r10
  unsigned __int64 v535; // r9
  unsigned __int64 v536; // rsi
  void (__fastcall *v537)(_QWORD, _QWORD); // rax
  __int64 v538; // rbx
  _QWORD *v539; // r12
  unsigned int v540; // ecx
  void (__fastcall *v541)(_QWORD, _QWORD); // rax
  _QWORD **v542; // r9
  __int64 v543; // r13
  _QWORD *v544; // r8
  __int64 v545; // rdx
  __int64 v546; // rax
  _QWORD **v547; // r15
  _QWORD *v548; // rsi
  unsigned int v549; // r13d
  int v550; // edx
  unsigned __int8 v551; // r12
  __int64 v552; // r14
  char *v553; // rbx
  __int64 v554; // rcx
  int *v555; // rcx
  int v556; // ecx
  __int64 v557; // rcx
  __int64 v558; // r10
  __int64 v559; // r8
  _QWORD *v560; // rdx
  unsigned __int64 v561; // r9
  int v562; // ecx
  __int64 v563; // rax
  _QWORD **v564; // r10
  _QWORD *i2; // r9
  __int64 v566; // r13
  __int64 v567; // rbx
  void (__fastcall *v568)(_QWORD, _QWORD); // rax
  unsigned int v569; // ecx
  unsigned __int8 v570; // r14
  volatile signed __int8 **v571; // r8
  volatile signed __int8 *v572; // rdx
  _QWORD **v573; // r15
  _QWORD *v574; // rsi
  __int64 v575; // rax
  int *v576; // r13
  char *v577; // rcx
  __int64 v578; // rbx
  int v579; // ecx
  __int64 v580; // rcx
  __int64 v581; // r10
  __int64 v582; // r8
  _QWORD *v583; // rdx
  unsigned __int64 v584; // r9
  int v585; // ecx
  __int64 v586; // rax
  _QWORD **v587; // r15
  __int64 (__fastcall *v588)(_QWORD, _QWORD); // rax
  __int64 v589; // rcx
  __int64 v590; // rdx
  unsigned int *v591; // rcx
  __int64 v592; // r12
  unsigned int v593; // r13d
  _QWORD *v594; // rax
  __int64 v595; // r8
  unsigned __int64 v596; // rax
  __int64 v597; // rcx
  int v598; // ebx
  unsigned __int64 v599; // rax
  unsigned __int128 v600; // rax
  unsigned __int64 v601; // rsi
  __int64 v602; // rax
  __int64 v603; // r11
  int v604; // r10d
  _QWORD *v605; // r9
  unsigned __int64 v606; // r8
  unsigned __int64 v607; // rax
  unsigned __int128 v608; // rax
  unsigned __int64 v609; // rax
  unsigned __int128 v610; // rax
  unsigned __int64 v611; // rdx
  unsigned int v612; // ebx
  _QWORD *v613; // r8
  unsigned __int64 v614; // rax
  unsigned __int128 v615; // rax
  unsigned __int64 v616; // rax
  unsigned __int128 v617; // rax
  unsigned __int64 v618; // rdx
  __int64 v619; // rbx
  _QWORD *v620; // rdx
  unsigned int v621; // eax
  __int64 v622; // rcx
  unsigned __int64 v623; // rsi
  int v624; // r13d
  unsigned __int64 v625; // r14
  unsigned __int64 v626; // r10
  int v627; // r8d
  int v628; // edx
  int v629; // ecx
  int *v630; // rcx
  int v631; // ecx
  __int64 v632; // rcx
  __int64 v633; // r11
  __int64 v634; // r8
  _QWORD *v635; // r9
  unsigned __int64 v636; // r10
  int v637; // ecx
  __int64 v638; // rax
  unsigned __int64 v639; // rax
  unsigned __int128 v640; // rax
  int v641; // ecx
  int v642; // ecx
  unsigned int v643; // r15d
  int v644; // ecx
  int v645; // ecx
  int v646; // ecx
  int v647; // ecx
  char *v648; // rbx
  int v649; // r13d
  unsigned int v650; // esi
  __int64 v651; // r14
  _QWORD *v652; // rcx
  int v653; // edx
  __int64 v654; // r8
  char v655; // al
  __int64 v656; // rax
  __int64 v657; // rcx
  int v658; // ecx
  __int64 v659; // rcx
  __int64 v660; // r10
  __int64 v661; // r8
  _QWORD *v662; // rdx
  unsigned __int64 v663; // r9
  int v664; // ecx
  __int64 v665; // rax
  __int64 (__fastcall *v666)(_QWORD, _QWORD); // rax
  __int64 i13; // rax
  char *v668; // rbx
  int v669; // r15d
  __int64 v670; // rsi
  _QWORD *v671; // rcx
  int v672; // edx
  __int64 v673; // r8
  char v674; // al
  __int64 v675; // rax
  __int64 v676; // rax
  int v677; // ecx
  __int64 v678; // rcx
  __int64 v679; // r10
  __int64 v680; // r8
  _QWORD *v681; // rdx
  unsigned __int64 v682; // r9
  int v683; // ecx
  __int64 v684; // rax
  __int64 (__fastcall *v685)(_QWORD); // rax
  __int64 v686; // r14
  ULONG_PTR *v687; // rax
  ULONG_PTR v688; // rbx
  int *v689; // rcx
  __int64 v690; // rax
  __int64 v691; // rax
  __int64 v692; // rax
  int v693; // ecx
  __int64 v694; // rcx
  __int64 v695; // r10
  __int64 v696; // r8
  unsigned __int64 v697; // r9
  int v698; // ecx
  __int64 v699; // rax
  __int64 (__fastcall *v700)(_QWORD, _QWORD); // rax
  __int64 v701; // rax
  ULONG_PTR v702; // r14
  __int64 v703; // r15
  unsigned int v704; // esi
  int v705; // ecx
  unsigned int *v706; // rax
  int v707; // ecx
  __int64 v708; // rdx
  unsigned int v709; // ebx
  unsigned int v710; // ecx
  int v711; // r9d
  unsigned __int64 v712; // r11
  unsigned int v713; // r10d
  int *v714; // r8
  __int64 v715; // r9
  __int64 v716; // rax
  int v717; // eax
  int v718; // eax
  char **v719; // rbx
  __int64 v720; // rcx
  __int64 v721; // rdx
  char *v722; // rdx
  __int64 v723; // r9
  ULONG_PTR v724; // rax
  __int64 v725; // rdx
  __int64 (__fastcall *v726)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v727; // rax
  __int64 v728; // rdx
  unsigned int v729; // ecx
  __int64 (__fastcall *v730)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v731; // rdx
  unsigned int v732; // eax
  __int64 v733; // rax
  unsigned int v734; // ecx
  __int64 (__fastcall *v735)(_QWORD); // rax
  __int64 v736; // rbx
  int v737; // ecx
  __int64 v738; // rcx
  __int64 v739; // r10
  __int64 v740; // r8
  _QWORD *v741; // rdx
  unsigned __int64 v742; // r9
  int v743; // ecx
  __int64 v744; // rax
  __int64 v745; // rcx
  __int64 v746; // rax
  __int64 v747; // r8
  __int64 v748; // r14
  unsigned int v749; // eax
  __int64 v750; // rsi
  int v751; // ecx
  unsigned int v752; // eax
  __int64 v753; // r9
  _QWORD *v754; // rcx
  int v755; // r8d
  unsigned __int64 v756; // rdx
  int v757; // ebx
  __int64 v758; // r15
  _QWORD *v759; // r13
  int *v760; // rdi
  __int64 v761; // r12
  __int64 v762; // rdx
  _QWORD *v763; // r14
  int v764; // ecx
  _QWORD *v765; // rax
  _QWORD *v766; // r9
  const char *v767; // rax
  int v768; // r11d
  __int64 v769; // rbx
  unsigned __int64 v770; // r8
  unsigned int v771; // r10d
  __int64 v772; // rax
  __int64 v773; // r8
  unsigned __int128 v774; // rax
  unsigned int v775; // edx
  unsigned __int64 v776; // rax
  __int64 v777; // rax
  unsigned __int64 i14; // rax
  _DWORD *v779; // rbx
  ULONG_PTR v780; // r14
  _BYTE *v781; // rbx
  unsigned int v782; // r9d
  _QWORD *v783; // rsi
  _DWORD *v784; // r12
  int v785; // ecx
  _QWORD *v786; // rax
  __int64 v787; // rdx
  __int64 i15; // rdx
  _QWORD *v789; // r10
  const char *v790; // rax
  int v791; // r14d
  __int64 v792; // r15
  unsigned __int64 v793; // rcx
  ULONG_PTR v794; // r8
  unsigned int v795; // r11d
  __int64 v796; // rax
  __int64 v797; // r8
  unsigned __int128 v798; // rax
  char v799; // r14
  unsigned __int64 v800; // r9
  unsigned __int64 v801; // rax
  __int64 v802; // rax
  ULONG_PTR i16; // rax
  __int64 v804; // rsi
  unsigned int v805; // eax
  __int64 v806; // r13
  int v807; // ecx
  unsigned int v808; // eax
  __int64 v809; // r8
  int v810; // edx
  unsigned __int64 v811; // rcx
  int v812; // ebx
  int v813; // ecx
  __int64 v814; // rsi
  _QWORD *v815; // rax
  __int64 v816; // rdx
  const char *v817; // r15
  __int64 v818; // r14
  int v819; // r11d
  __int64 v820; // rbx
  const char *v821; // rax
  unsigned int v822; // r10d
  __int64 v823; // rax
  __int64 v824; // r8
  unsigned __int128 v825; // rax
  unsigned __int64 v826; // rax
  __int64 v827; // rax
  ULONG_PTR i17; // rax
  _DWORD *v829; // rbx
  ULONG_PTR v830; // r14
  __int64 v831; // rsi
  __int64 v832; // rax
  int v833; // ecx
  _QWORD *v834; // rax
  _QWORD *v835; // rax
  ULONG_PTR v836; // rsi
  __int64 v837; // rax
  unsigned __int16 v838; // r10
  int v839; // ecx
  __int64 v840; // rcx
  __int64 v841; // r10
  _QWORD *v842; // rdx
  unsigned __int64 v843; // r9
  __int64 v844; // rax
  int v845; // ecx
  _BYTE *v846; // rbx
  unsigned int *v847; // r12
  _DWORD *v848; // r15
  unsigned int v849; // ecx
  _DWORD *v850; // r8
  unsigned int *v851; // r11
  unsigned int v852; // edx
  unsigned int v853; // r9d
  unsigned int v854; // edx
  unsigned int v855; // eax
  __int64 v856; // rax
  unsigned int v857; // esi
  unsigned int v858; // r15d
  unsigned int v859; // esi
  unsigned int *v860; // rax
  unsigned int *v861; // r14
  ULONG_PTR v862; // r8
  unsigned int v863; // eax
  int v864; // ecx
  __int64 v865; // rcx
  __int64 v866; // r10
  __int64 v867; // r8
  _QWORD *v868; // rdx
  unsigned __int64 v869; // r9
  int v870; // ecx
  __int64 v871; // rax
  unsigned int *v872; // rax
  unsigned int v873; // eax
  int v874; // ecx
  __int64 v875; // rcx
  __int64 v876; // r10
  __int64 v877; // r8
  _QWORD *v878; // rdx
  unsigned __int64 v879; // r9
  int v880; // ecx
  __int64 v881; // rax
  int v882; // r9d
  __int64 v883; // r14
  int v884; // ecx
  __int64 v885; // rcx
  __int64 v886; // r10
  _QWORD *v887; // rdx
  unsigned __int64 v888; // r9
  int v889; // ecx
  __int64 v890; // rcx
  __int64 v891; // r10
  _QWORD *v892; // rdx
  unsigned __int64 v893; // r9
  int v894; // ecx
  __int64 v895; // rax
  __int64 v896; // rcx
  __int64 v897; // rax
  int v898; // ecx
  __int64 v899; // rcx
  __int64 v900; // r10
  _QWORD *v901; // rdx
  unsigned __int64 v902; // r9
  int v903; // ecx
  __int64 v904; // rax
  int v905; // edx
  __int64 v906; // rsi
  unsigned int v907; // ecx
  int v908; // ecx
  unsigned int v909; // eax
  __int64 v910; // r8
  int v911; // edx
  unsigned __int64 v912; // rcx
  int v913; // ebx
  __int64 v914; // rdx
  int v915; // ecx
  _QWORD *v916; // rax
  __int64 v917; // r8
  unsigned int *v918; // rbx
  unsigned __int64 v919; // rcx
  unsigned __int64 i18; // rax
  ULONG_PTR v921; // rax
  _DWORD *v922; // r11
  __int64 v923; // rax
  _DWORD *v924; // r8
  unsigned int *v925; // rax
  __int64 v926; // rdx
  _DWORD *v927; // rax
  __int64 v928; // rcx
  int v929; // r14d
  int v930; // ecx
  __int16 *v931; // rax
  __int16 v932; // cx
  char *v933; // r9
  int v934; // r10d
  char *v935; // r11
  char *v936; // rdx
  char *v937; // rbx
  char *v938; // r8
  char v939; // cl
  char v940; // al
  unsigned int v941; // edx
  char *v942; // r8
  __int64 v943; // rcx
  __int64 v944; // rax
  char v945; // cl
  char v946; // al
  int v947; // r8d
  char *v948; // rdx
  char v949; // cl
  char v950; // al
  int v951; // r8d
  char *v952; // rdx
  char v953; // cl
  char v954; // al
  int v955; // ecx
  ULONG_PTR v956; // r9
  unsigned int v957; // esi
  __int64 v958; // rdx
  unsigned int *v959; // r8
  unsigned int v960; // esi
  unsigned int v961; // eax
  unsigned int v962; // r12d
  unsigned int v963; // ecx
  unsigned int v964; // r15d
  bool v965; // cf
  unsigned int v966; // r10d
  unsigned __int64 v967; // rbx
  unsigned int *v968; // rdx
  unsigned int v969; // r9d
  _QWORD *v970; // r8
  _QWORD *v971; // r10
  int v972; // r14d
  const char *v973; // rax
  __int64 v974; // rsi
  unsigned __int64 v975; // rcx
  unsigned __int64 v976; // r8
  unsigned int v977; // r11d
  __int64 v978; // rax
  __int64 v979; // r8
  unsigned __int128 v980; // rax
  unsigned int v981; // r9d
  unsigned __int64 v982; // rax
  __int64 v983; // rax
  unsigned __int64 v984; // rax
  unsigned int *v985; // rax
  unsigned int v986; // r15d
  char v987; // r8
  __int64 v988; // rsi
  int v989; // ecx
  ULONG_PTR v990; // rdx
  __int64 v991; // rcx
  __int64 v992; // r10
  __int64 v993; // r8
  _QWORD *v994; // rdx
  unsigned __int64 v995; // r9
  __int64 v996; // rax
  int v997; // ecx
  unsigned int *v998; // rdx
  unsigned int v999; // r9d
  _QWORD *v1000; // r8
  unsigned __int64 v1001; // rbx
  _QWORD *v1002; // r11
  int v1003; // r14d
  const char *v1004; // rax
  __int64 v1005; // rsi
  unsigned __int64 v1006; // rcx
  unsigned __int64 v1007; // r8
  unsigned int v1008; // r10d
  __int64 v1009; // rax
  __int64 v1010; // r8
  unsigned __int128 v1011; // rax
  unsigned int v1012; // r9d
  unsigned __int64 v1013; // rax
  __int64 v1014; // rax
  unsigned __int64 i19; // rax
  unsigned __int64 v1016; // rax
  unsigned int *v1017; // rdx
  _QWORD *v1018; // r8
  unsigned int v1019; // eax
  unsigned int v1020; // r9d
  unsigned __int64 v1021; // rbx
  unsigned int v1022; // r10d
  _QWORD *v1023; // r10
  int v1024; // r14d
  const char *v1025; // rax
  __int64 v1026; // rsi
  unsigned __int64 v1027; // rcx
  unsigned __int64 v1028; // r8
  unsigned int v1029; // r11d
  __int64 v1030; // rax
  __int64 v1031; // r8
  unsigned __int128 v1032; // rax
  unsigned int v1033; // r9d
  unsigned __int64 v1034; // rax
  __int64 v1035; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1037; // r11
  unsigned __int64 v1038; // r8
  char *v1039; // rax
  char *v1040; // rax
  char *v1041; // rsi
  __int64 v1042; // r12
  __int64 v1043; // rbx
  __int64 v1044; // r14
  _QWORD *v1045; // rcx
  __int64 v1046; // r8
  char v1047; // al
  __int64 v1048; // rax
  __int64 v1049; // rax
  int v1050; // ecx
  __int64 v1051; // rcx
  __int64 v1052; // r10
  __int64 v1053; // r8
  unsigned __int64 v1054; // r9
  int v1055; // ecx
  __int64 v1056; // rax
  char *v1057; // rbx
  unsigned __int64 v1058; // r14
  __int64 v1059; // rsi
  _QWORD *v1060; // rcx
  int v1061; // edx
  __int64 v1062; // r8
  char v1063; // al
  __int64 v1064; // rax
  __int64 v1065; // rax
  int v1066; // ecx
  __int64 v1067; // rcx
  __int64 v1068; // r10
  __int64 v1069; // r8
  _QWORD *v1070; // rdx
  unsigned __int64 v1071; // r9
  int v1072; // ecx
  __int64 v1073; // rax
  char *v1074; // rbx
  __int64 i12; // rsi
  _QWORD *v1076; // rcx
  int v1077; // edx
  __int64 v1078; // r8
  char v1079; // al
  __int64 v1080; // rax
  __int64 v1081; // rax
  int v1082; // ecx
  __int64 v1083; // rcx
  __int64 v1084; // r10
  __int64 v1085; // r8
  _QWORD *v1086; // rdx
  unsigned __int64 v1087; // r9
  int v1088; // ecx
  __int64 v1089; // rax
  int v1090; // eax
  int v1091; // ebx
  unsigned __int64 v1092; // rbx
  unsigned __int64 v1093; // r8
  __int64 v1094; // rcx
  int v1095; // ecx
  __int64 v1096; // rcx
  __int64 v1097; // r10
  unsigned __int64 v1098; // r9
  __int64 v1099; // r8
  unsigned __int64 v1100; // rcx
  __int64 v1101; // r11
  _DWORD *v1102; // rbx
  unsigned __int64 v1103; // r10
  char *v1104; // r14
  unsigned int v1105; // r9d
  __int64 v1106; // rax
  __int64 v1107; // r13
  int *v1108; // r15
  unsigned int v1109; // esi
  unsigned __int64 v1110; // r13
  unsigned __int64 v1111; // rcx
  int v1112; // r11d
  _QWORD *v1113; // r9
  __int64 v1114; // rbx
  const char *v1115; // rax
  unsigned __int64 v1116; // r8
  unsigned int v1117; // r10d
  __int64 v1118; // rax
  __int64 v1119; // r8
  unsigned __int64 v1120; // rcx
  unsigned int v1121; // edx
  unsigned __int64 v1122; // rax
  __int64 v1123; // rax
  unsigned __int64 i21; // rax
  unsigned int v1125; // r12d
  __int64 v1126; // rcx
  unsigned __int8 v1127; // si
  unsigned __int64 v1128; // rbx
  __int64 v1129; // r15
  unsigned __int64 v1130; // r14
  int v1131; // eax
  int v1132; // r11d
  __int64 v1133; // rcx
  __int64 v1134; // rax
  int v1135; // ecx
  __int64 v1136; // rcx
  __int64 v1137; // r10
  __int64 v1138; // r8
  _QWORD *v1139; // rdx
  unsigned __int64 v1140; // r9
  int v1141; // ecx
  __int64 v1142; // rax
  __int64 v1143; // rcx
  int *v1144; // r14
  __int64 v1145; // r15
  __int64 v1146; // r13
  int *v1147; // r12
  unsigned int v1148; // esi
  unsigned __int64 v1149; // r13
  unsigned __int64 v1150; // rcx
  int v1151; // r10d
  _QWORD *v1152; // r8
  __int64 v1153; // r11
  const char *v1154; // rax
  unsigned __int64 v1155; // rbx
  unsigned int v1156; // r9d
  __int64 v1157; // rax
  __int64 v1158; // rbx
  unsigned __int64 v1159; // rcx
  unsigned __int64 v1160; // rax
  __int64 v1161; // r9
  __int64 v1162; // rax
  unsigned __int64 i22; // rax
  unsigned int v1164; // ebx
  __int64 v1165; // rcx
  unsigned __int8 v1166; // r14
  unsigned __int64 v1167; // rsi
  __int64 v1168; // r12
  unsigned __int64 v1169; // r15
  int v1170; // eax
  __int64 v1171; // rcx
  __int64 v1172; // rax
  int v1173; // ecx
  __int64 v1174; // rcx
  __int64 v1175; // r10
  __int64 v1176; // r8
  unsigned __int64 v1177; // r9
  int v1178; // ecx
  __int64 v1179; // rax
  __int64 v1180; // r9
  _QWORD *v1181; // rbx
  int v1182; // r11d
  _QWORD *v1183; // r10
  __int64 v1184; // r14
  const char *v1185; // rax
  __int64 v1186; // r8
  unsigned int v1187; // esi
  __int64 v1188; // rax
  __int64 v1189; // r8
  unsigned __int128 v1190; // rax
  char v1191; // r11
  __int64 v1192; // rax
  __int64 v1193; // rdx
  __int64 v1194; // rbx
  __int64 v1195; // r8
  __int64 v1196; // rcx
  int v1197; // ecx
  __int64 v1198; // rcx
  __int64 v1199; // r10
  unsigned __int64 v1200; // r9
  int v1201; // ecx
  __int64 v1202; // rcx
  __int64 v1203; // r10
  unsigned __int64 v1204; // r9
  _QWORD *v1205; // rsi
  __int64 v1206; // r8
  _QWORD *v1207; // r9
  const char *v1208; // rax
  int v1209; // r11d
  __int64 v1210; // r14
  unsigned __int64 v1211; // rbx
  unsigned int v1212; // r10d
  __int64 v1213; // rax
  __int64 v1214; // rbx
  unsigned __int128 v1215; // rax
  char v1216; // r11
  __int64 v1217; // rdx
  __int64 v1218; // r8
  unsigned __int64 v1219; // rax
  __int64 v1220; // rax
  unsigned __int64 i; // rax
  unsigned int v1222; // ebx
  BOOL v1223; // r15d
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v1225; // rsi
  __int64 v1226; // r13
  unsigned __int64 v1227; // r12
  int v1228; // eax
  __int64 v1229; // rcx
  int v1230; // ecx
  __int64 v1231; // rcx
  __int64 v1232; // r10
  int v1233; // ecx
  __int64 v1234; // rax
  __int64 v1235; // rcx
  unsigned __int8 v1236; // si
  unsigned int *v1237; // rcx
  unsigned int *v1238; // rbx
  char v1239; // r14
  unsigned __int64 v1240; // r15
  __int64 v1241; // rdx
  char *v1242; // r8
  unsigned int *v1243; // r9
  __int64 v1244; // rcx
  __int64 v1245; // rax
  char v1246; // cl
  char v1247; // al
  int v1248; // ecx
  int v1249; // eax
  __int64 v1250; // rcx
  __int64 v1251; // r10
  __int64 v1252; // r8
  _QWORD *v1253; // rdx
  unsigned __int64 v1254; // r9
  int v1255; // ecx
  __int64 v1256; // rax
  int v1257; // ecx
  __int64 v1258; // rcx
  __int64 v1259; // r10
  __int64 v1260; // r8
  _QWORD *v1261; // rdx
  unsigned __int64 v1262; // r9
  int v1263; // ecx
  __int64 v1264; // rax
  __int64 v1265; // rcx
  unsigned __int8 v1266; // r14
  unsigned __int64 v1267; // rdx
  unsigned int *v1268; // rcx
  unsigned int *v1269; // rbx
  unsigned __int64 v1270; // rsi
  unsigned __int64 v1271; // rcx
  unsigned __int64 v1272; // rax
  int v1273; // ecx
  __int64 v1274; // rcx
  __int64 v1275; // r10
  unsigned __int64 v1276; // r9
  _QWORD *v1277; // rsi
  __int64 v1278; // r8
  _QWORD *v1279; // r9
  const char *v1280; // rax
  int v1281; // r11d
  __int64 v1282; // r14
  unsigned __int64 v1283; // rbx
  unsigned int v1284; // r10d
  __int64 v1285; // rax
  __int64 v1286; // rbx
  unsigned __int64 v1287; // rcx
  unsigned int v1288; // r8d
  unsigned __int64 v1289; // rax
  __int64 v1290; // rax
  unsigned __int64 j; // rax
  unsigned int v1292; // ebx
  BOOL v1293; // r15d
  __int64 v1294; // r8
  unsigned __int8 v1295; // r14
  unsigned __int64 v1296; // rsi
  __int64 v1297; // r13
  unsigned __int64 v1298; // r12
  int v1299; // eax
  int v1300; // eax
  __int64 v1301; // rbx
  __int64 v1302; // rcx
  __int64 v1303; // rax
  __int64 v1304; // rcx
  int v1305; // ecx
  __int64 v1306; // rcx
  __int64 v1307; // r10
  __int64 v1308; // r8
  unsigned __int64 v1309; // r9
  __int64 v1310; // rcx
  int v1311; // ecx
  __int64 v1312; // rcx
  __int64 v1313; // r10
  __int64 v1314; // r8
  unsigned __int64 v1315; // r9
  int v1316; // ecx
  __int64 v1317; // rax
  int v1318; // ecx
  __int64 v1319; // rax
  __int64 v1320; // rcx
  __int64 v1321; // rax
  __int64 v1322; // rcx
  int v1323; // ecx
  __int64 v1324; // rcx
  __int64 v1325; // r10
  unsigned __int64 v1326; // r9
  unsigned __int64 v1327; // rbx
  __int64 v1328; // rcx
  __int64 v1329; // rbx
  int v1330; // esi
  __int64 v1331; // rbx
  unsigned int v1332; // r14d
  __int64 v1333; // rcx
  char *v1334; // r12
  unsigned __int64 v1335; // rbx
  unsigned int v1336; // r13d
  int *v1337; // rdx
  int v1338; // ecx
  __int64 v1339; // rcx
  __int64 v1340; // r10
  __int64 v1341; // r8
  _QWORD *v1342; // rdx
  unsigned __int64 v1343; // r9
  __int64 v1344; // rax
  int v1345; // ecx
  char v1346; // si
  char v1347; // r15
  __int64 v1348; // r8
  int v1349; // ecx
  __int64 v1350; // rcx
  __int64 v1351; // r10
  __int64 v1352; // r8
  _QWORD *v1353; // rdx
  unsigned __int64 v1354; // r9
  int v1355; // ecx
  __int64 v1356; // rax
  __int64 v1357; // r14
  unsigned __int64 v1358; // r9
  int *v1359; // rdx
  unsigned __int64 v1360; // rbx
  __int64 v1361; // rsi
  int v1362; // ecx
  __int64 v1363; // rcx
  __int64 v1364; // r10
  _QWORD *v1365; // rdx
  unsigned __int64 v1366; // r9
  int v1367; // ecx
  __int64 v1368; // rax
  __int64 v1369; // rax
  __int64 v1370; // rdx
  int v1371; // ecx
  __int64 v1372; // rcx
  __int64 v1373; // r10
  _QWORD *v1374; // rdx
  int v1375; // ecx
  __int64 v1376; // rax
  unsigned __int64 *v1377; // rax
  unsigned __int64 *v1378; // rbx
  unsigned __int64 v1379; // rcx
  _QWORD *v1380; // r14
  __int64 v1381; // r15
  _DWORD *v1382; // r14
  __int64 v1383; // rdx
  unsigned __int64 v1384; // rsi
  unsigned __int64 v1385; // rcx
  _QWORD *v1386; // rcx
  int v1387; // edx
  __int64 v1388; // r8
  char v1389; // al
  int v1390; // ecx
  __int64 v1391; // rcx
  __int64 v1392; // r10
  __int64 v1393; // r8
  _QWORD *v1394; // rdx
  unsigned __int64 v1395; // r9
  int v1396; // ecx
  __int64 v1397; // rax
  char *v1398; // r12
  unsigned __int64 v1399; // rbx
  unsigned int v1400; // r13d
  int *v1401; // rdx
  int v1402; // ecx
  __int64 v1403; // rcx
  __int64 v1404; // r10
  __int64 v1405; // r8
  _QWORD *v1406; // rdx
  unsigned __int64 v1407; // r9
  int v1408; // ecx
  __int64 v1409; // rax
  char v1410; // si
  char v1411; // r15
  int v1412; // ecx
  __int64 v1413; // rcx
  __int64 v1414; // r10
  __int64 v1415; // r8
  _QWORD *v1416; // rdx
  unsigned __int64 v1417; // r9
  int v1418; // ecx
  __int64 v1419; // rax
  __int64 v1420; // r14
  int *v1421; // rdx
  unsigned __int64 v1422; // rbx
  int v1423; // ecx
  __int64 v1424; // rcx
  __int64 v1425; // r10
  _QWORD *v1426; // rdx
  unsigned __int64 v1427; // r9
  int v1428; // ecx
  __int64 v1429; // rax
  __int64 v1430; // rax
  int v1431; // ecx
  __int64 v1432; // rcx
  __int64 v1433; // r10
  _QWORD *v1434; // rdx
  int v1435; // ecx
  __int64 v1436; // rax
  unsigned __int64 *v1437; // rax
  unsigned __int64 *v1438; // rbx
  unsigned __int64 v1439; // rcx
  __int64 v1440; // r15
  _DWORD *v1441; // r14
  __int64 v1442; // rdx
  unsigned __int64 v1443; // rsi
  unsigned __int64 v1444; // rcx
  _QWORD *v1445; // rcx
  int v1446; // edx
  __int64 v1447; // r8
  char v1448; // al
  int v1449; // ecx
  __int64 v1450; // rcx
  __int64 v1451; // r10
  __int64 v1452; // r8
  _QWORD *v1453; // rdx
  unsigned __int64 v1454; // r9
  int v1455; // ecx
  __int64 v1456; // rax
  __int64 v1457; // rax
  __int64 v1458; // r12
  unsigned __int64 v1459; // rbx
  unsigned int v1460; // r13d
  int *v1461; // rdx
  int v1462; // ecx
  __int64 v1463; // rcx
  __int64 v1464; // r10
  __int64 v1465; // r8
  _QWORD *v1466; // rdx
  unsigned __int64 v1467; // r9
  int v1468; // ecx
  __int64 v1469; // rax
  char v1470; // si
  char v1471; // r15
  __int64 v1472; // r8
  int v1473; // ecx
  __int64 v1474; // rcx
  __int64 v1475; // r10
  __int64 v1476; // r8
  _QWORD *v1477; // rdx
  unsigned __int64 v1478; // r9
  int v1479; // ecx
  __int64 v1480; // rax
  __int64 v1481; // r14
  unsigned __int64 v1482; // r9
  int *v1483; // rdx
  unsigned __int64 v1484; // rbx
  int v1485; // ecx
  __int64 v1486; // rcx
  __int64 v1487; // r10
  _QWORD *v1488; // rdx
  unsigned __int64 v1489; // r9
  int v1490; // ecx
  __int64 v1491; // rax
  int v1492; // ecx
  __int64 v1493; // rcx
  __int64 v1494; // r10
  int v1495; // ecx
  __int64 v1496; // rax
  unsigned __int64 *v1497; // rax
  unsigned __int64 *v1498; // rbx
  unsigned __int64 v1499; // rcx
  _QWORD *v1500; // r14
  __int64 v1501; // r15
  char *v1502; // r14
  __int64 v1503; // rdx
  unsigned __int64 v1504; // rsi
  unsigned __int64 v1505; // rcx
  _QWORD *v1506; // rcx
  int v1507; // edx
  __int64 v1508; // r8
  char v1509; // al
  int v1510; // ecx
  __int64 v1511; // rcx
  __int64 v1512; // r10
  __int64 v1513; // r8
  _QWORD *v1514; // rdx
  unsigned __int64 v1515; // r9
  int v1516; // ecx
  __int64 v1517; // rax
  int v1518; // r10d
  int v1519; // r10d
  int v1520; // ecx
  __int64 v1521; // rcx
  __int64 v1522; // r10
  unsigned __int64 v1523; // r9
  __int64 v1524; // rax
  unsigned int v1525; // ebx
  unsigned __int64 v1526; // rax
  __int64 v1527; // rcx
  unsigned int v1528; // esi
  unsigned __int64 v1529; // rax
  __int64 v1530; // rdx
  int v1531; // ecx
  _QWORD *v1532; // rax
  __int64 v1533; // r8
  struct _KPRCB *v1534; // rdx
  __int64 v1535; // r8
  int v1536; // ecx
  __int64 v1537; // rcx
  __int64 v1538; // r10
  __int64 v1539; // r8
  unsigned __int64 v1540; // r9
  int v1541; // ecx
  __int64 v1542; // rax
  unsigned __int64 v1543; // r8
  int v1544; // ecx
  __int64 v1545; // rcx
  __int64 v1546; // r10
  __int64 v1547; // r8
  unsigned __int64 v1548; // r9
  int v1549; // ecx
  __int64 v1550; // rax
  _QWORD *v1551; // r14
  __int64 v1552; // rsi
  __int64 v1553; // rdx
  int v1554; // ecx
  _QWORD *v1555; // rax
  __int64 v1556; // r8
  __int64 Ldtr; // r15
  unsigned __int16 Tr; // ax
  int v1559; // r10d
  unsigned __int16 v1560; // r12
  unsigned __int64 v1561; // r11
  _QWORD *v1562; // r8
  const char *v1563; // rcx
  unsigned __int64 v1564; // rbx
  unsigned int v1565; // r9d
  __int64 v1566; // rax
  __int64 v1567; // rbx
  unsigned __int64 v1568; // rcx
  unsigned int v1569; // esi
  unsigned __int64 v1570; // rax
  __int64 v1571; // rax
  unsigned __int64 i4; // rax
  unsigned int v1573; // ebx
  _QWORD *v1574; // rcx
  __int64 v1575; // r8
  char v1576; // al
  __int64 v1577; // rcx
  int v1578; // ecx
  __int64 v1579; // rcx
  __int64 v1580; // r10
  __int64 v1581; // r8
  unsigned __int64 v1582; // r9
  int v1583; // ecx
  __int64 v1584; // rax
  __int64 v1585; // rdx
  void (__fastcall *v1586)(_QWORD, _QWORD); // rax
  unsigned int v1587; // r10d
  __int64 v1588; // rcx
  __int64 v1589; // r8
  __int64 v1590; // rsi
  unsigned __int64 v1591; // r13
  __int64 v1592; // r15
  __int64 v1593; // r12
  unsigned __int8 v1594; // r14
  __int16 v1595; // r9
  int v1596; // eax
  __int64 v1597; // rcx
  unsigned __int64 v1598; // rbx
  __int64 v1599; // rdx
  __int64 v1600; // r15
  __int64 v1601; // rax
  __int64 v1602; // rax
  __int64 v1603; // r12
  __int64 v1604; // rax
  unsigned int *v1605; // rax
  __int64 v1606; // rcx
  unsigned __int64 v1607; // rbx
  unsigned __int64 v1608; // rdx
  struct _KPRCB *v1609; // r8
  _QWORD *v1610; // rsi
  _QWORD *v1611; // r8
  int v1612; // r9d
  const char *v1613; // rax
  __int64 v1614; // r11
  int v1615; // r10d
  unsigned __int64 v1616; // rbx
  __int64 v1617; // rax
  __int64 v1618; // rbx
  _QWORD *v1619; // r8
  __int64 v1620; // rbx
  unsigned __int128 v1621; // rax
  int v1622; // edx
  int v1623; // r14d
  __int64 v1624; // rax
  __int64 v1625; // rax
  unsigned __int64 i5; // rax
  unsigned int *v1627; // rax
  __int64 v1628; // rax
  _QWORD *v1629; // rdx
  int v1630; // r9d
  unsigned __int64 v1631; // rcx
  unsigned __int64 v1632; // rsi
  unsigned int v1633; // ebx
  const char *v1634; // rax
  __int64 v1635; // rax
  int v1636; // r8d
  __int64 v1637; // rax
  unsigned __int64 i6; // rax
  unsigned int v1639; // esi
  __int64 v1640; // rcx
  __int64 v1641; // rax
  __int64 v1642; // rcx
  int v1643; // ecx
  __int64 v1644; // rcx
  __int64 v1645; // r10
  __int64 v1646; // r8
  unsigned __int64 v1647; // r9
  int v1648; // ecx
  __int64 v1649; // rax
  volatile signed __int32 *v1650; // rcx
  _QWORD *v1651; // rsi
  __int64 v1652; // r8
  _QWORD *v1653; // r9
  const char *v1654; // rax
  int v1655; // r11d
  __int64 v1656; // r14
  unsigned __int64 v1657; // rbx
  unsigned int v1658; // r10d
  __int64 v1659; // rax
  __int64 v1660; // rbx
  unsigned __int128 v1661; // rax
  char v1662; // r11
  unsigned int v1663; // r8d
  unsigned __int64 v1664; // rax
  __int64 v1665; // rax
  unsigned __int64 n; // rax
  unsigned int v1667; // ebx
  BOOL v1668; // r15d
  __int64 v1669; // r8
  unsigned __int8 v1670; // r14
  unsigned __int64 v1671; // rsi
  __int64 v1672; // r13
  unsigned __int64 v1673; // r12
  int v1674; // eax
  __int64 v1675; // rcx
  int v1676; // ecx
  __int64 v1677; // rcx
  __int64 v1678; // r10
  __int64 v1679; // r8
  unsigned __int64 v1680; // r9
  int v1681; // ecx
  __int64 v1682; // rax
  __int64 v1683; // rsi
  __int64 v1684; // rcx
  __int64 v1685; // rax
  unsigned int v1686; // ebx
  _QWORD *v1687; // rcx
  __int64 v1688; // r8
  char v1689; // al
  __int64 v1690; // rcx
  int v1691; // ecx
  __int64 v1692; // rcx
  __int64 v1693; // r10
  unsigned __int64 v1694; // r9
  int v1695; // esi
  __int64 v1696; // r14
  unsigned int v1697; // ecx
  char v1698; // bl
  volatile signed __int8 **v1699; // r8
  volatile signed __int8 *v1700; // rdx
  unsigned __int8 v1701; // bl
  _QWORD *v1702; // rsi
  __int64 v1703; // r14
  __int64 v1704; // r8
  _QWORD *v1705; // r9
  const char *v1706; // rax
  int v1707; // r10d
  unsigned __int64 v1708; // r15
  unsigned __int64 v1709; // rbx
  unsigned int v1710; // r11d
  __int64 v1711; // rax
  __int64 v1712; // rbx
  unsigned __int128 v1713; // rax
  char v1714; // r10
  __int64 v1715; // r8
  unsigned __int64 v1716; // rax
  __int64 v1717; // rax
  unsigned __int64 ii; // rax
  unsigned int v1719; // ebx
  __int64 v1720; // rcx
  unsigned __int8 v1721; // r15
  unsigned __int64 v1722; // rsi
  unsigned __int64 v1723; // r13
  int v1724; // eax
  __int64 v1725; // rbx
  __int64 (__fastcall *v1726)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v1727; // rax
  __int64 v1728; // rsi
  unsigned int v1729; // r12d
  int v1730; // edi
  unsigned int v1731; // ecx
  unsigned int v1732; // r10d
  unsigned int v1733; // r13d
  int v1734; // eax
  char *v1735; // rdx
  __int64 v1736; // rcx
  int v1737; // ecx
  __int64 v1738; // rcx
  __int64 v1739; // r10
  int v1740; // ecx
  __int64 v1741; // rax
  __int16 v1742; // ax
  int v1743; // r9d
  char *v1744; // r8
  char v1745; // cl
  char v1746; // al
  char *v1747; // r8
  unsigned int v1748; // edx
  char *v1749; // r9
  __int64 v1750; // rcx
  __int64 v1751; // rax
  char v1752; // cl
  char v1753; // al
  char *v1754; // rdx
  int v1755; // r9d
  char *v1756; // r8
  char v1757; // cl
  char v1758; // al
  char *v1759; // rdx
  unsigned __int64 v1760; // r9
  __int64 v1761; // r8
  char v1762; // cl
  char v1763; // al
  int v1764; // eax
  __int64 v1765; // rbx
  int v1766; // eax
  int *v1767; // rcx
  int v1768; // ecx
  __int64 v1769; // rcx
  __int64 v1770; // r10
  _QWORD *v1771; // rdx
  __int64 v1772; // rax
  int v1773; // ecx
  int v1774; // eax
  unsigned __int8 v1775; // bl
  _QWORD *v1776; // rsi
  __int64 v1777; // r8
  _QWORD *v1778; // r9
  const char *v1779; // rax
  int v1780; // r10d
  __int64 v1781; // r14
  unsigned __int64 v1782; // rbx
  unsigned int v1783; // r11d
  __int64 v1784; // rax
  __int64 v1785; // rbx
  unsigned __int128 v1786; // rax
  unsigned int v1787; // r8d
  unsigned __int64 v1788; // rax
  __int64 v1789; // rax
  unsigned __int64 k; // rax
  unsigned int v1791; // ebx
  BOOL v1792; // r15d
  __int64 v1793; // rdx
  __int64 v1794; // r8
  unsigned __int8 v1795; // r14
  unsigned __int64 v1796; // rsi
  __int64 v1797; // r13
  unsigned __int64 v1798; // r12
  int v1799; // eax
  __int64 v1800; // rcx
  int v1801; // ecx
  __int64 v1802; // rcx
  __int64 v1803; // r10
  __int64 v1804; // r8
  _QWORD *v1805; // rdx
  unsigned __int64 v1806; // r9
  int v1807; // ecx
  __int64 v1808; // rax
  __int64 v1809; // r8
  unsigned __int64 v1810; // rcx
  unsigned int *v1811; // rsi
  int *v1812; // r14
  unsigned int *v1813; // r15
  unsigned int v1814; // ebx
  unsigned __int64 v1815; // r13
  __int64 v1816; // r8
  int v1817; // r10d
  const char *v1818; // rax
  __int64 v1819; // r11
  unsigned __int64 v1820; // rcx
  unsigned __int64 v1821; // r12
  unsigned int v1822; // r9d
  __int64 v1823; // rax
  __int64 v1824; // r12
  unsigned __int128 v1825; // rax
  unsigned __int64 v1826; // r9
  unsigned int v1827; // edx
  unsigned __int64 v1828; // rax
  __int64 v1829; // rax
  unsigned __int64 m; // rax
  unsigned int v1831; // r12d
  char v1832; // cl
  volatile signed __int32 *v1833; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1835; // r8
  int v1836; // ecx
  struct _KPRCB *v1837; // rax
  unsigned __int64 v1838; // rcx
  int *v1839; // rcx
  int v1840; // ecx
  __int64 v1841; // rcx
  __int64 v1842; // r10
  _QWORD *v1843; // rdx
  int v1844; // ecx
  __int64 v1845; // rax
  __int64 v1846; // rcx
  unsigned __int8 v1847; // si
  unsigned __int64 v1848; // rbx
  __int64 v1849; // r15
  unsigned __int64 v1850; // r14
  int v1851; // eax
  bool v1852; // zf
  __int64 v1853; // rax
  int *v1854; // rcx
  int v1855; // ecx
  __int64 v1856; // rcx
  __int64 v1857; // r10
  __int64 v1858; // r8
  _QWORD *v1859; // rdx
  unsigned __int64 v1860; // r9
  int v1861; // ecx
  __int64 v1862; // rax
  __int64 v1863; // rcx
  unsigned __int8 v1864; // bl
  unsigned int *v1865; // rcx
  unsigned int *v1866; // r14
  char v1867; // si
  unsigned __int64 v1868; // r15
  __int64 v1869; // rdx
  char *v1870; // r8
  unsigned int *v1871; // r9
  __int64 v1872; // rcx
  __int64 v1873; // rax
  char v1874; // cl
  char v1875; // al
  char *v1876; // rcx
  __int64 v1877; // rax
  int v1878; // ecx
  __int64 v1879; // rcx
  __int64 v1880; // r10
  __int64 v1881; // r8
  _QWORD *v1882; // rdx
  unsigned __int64 v1883; // r9
  int v1884; // ecx
  __int64 v1885; // rax
  char *v1886; // rcx
  __int64 v1887; // rax
  int v1888; // ecx
  __int64 v1889; // rcx
  __int64 v1890; // r10
  __int64 v1891; // r8
  _QWORD *v1892; // rdx
  unsigned __int64 v1893; // r9
  int v1894; // ecx
  __int64 v1895; // rax
  unsigned int v1896; // r9d
  unsigned __int64 v1897; // rax
  __int64 v1898; // rax
  __int64 v1899; // rcx
  unsigned __int64 v1900; // rcx
  int v1901; // ecx
  __int64 v1902; // rcx
  __int64 v1903; // r10
  unsigned __int64 v1904; // r9
  __int64 v1905; // rbx
  __int64 v1906; // rbx
  unsigned __int64 v1907; // rdi
  char *v1908; // rsi
  unsigned __int64 v1909; // r14
  struct _KPRCB *v1910; // r8
  char *v1911; // r13
  __int64 v1912; // rax
  unsigned __int64 v1913; // rdx
  unsigned __int64 v1914; // r9
  unsigned __int64 v1915; // rcx
  unsigned __int64 v1916; // rbx
  unsigned __int64 v1917; // rdi
  _QWORD *v1918; // r9
  unsigned __int64 v1919; // rcx
  unsigned __int64 v1920; // rax
  __int64 v1921; // rsi
  unsigned __int64 v1922; // r8
  _QWORD *v1923; // rcx
  signed __int64 v1924; // r8
  unsigned int v1925; // r12d
  char *v1926; // rdi
  __int64 v1927; // r11
  unsigned __int64 *v1928; // rcx
  __int64 v1929; // rdx
  __int64 v1930; // r10
  unsigned __int64 v1931; // rax
  _QWORD *v1932; // r15
  __int64 v1933; // rax
  unsigned __int64 v1934; // rdx
  unsigned __int64 v1935; // rcx
  unsigned int v1936; // r10d
  _QWORD *v1937; // r11
  unsigned int v1938; // r14d
  unsigned __int64 v1939; // r15
  char *v1940; // r11
  unsigned __int64 v1941; // rcx
  unsigned __int64 v1942; // rax
  char *v1943; // r8
  unsigned __int64 v1944; // r9
  __int64 v1945; // r11
  __int64 v1946; // rdx
  __int64 v1947; // r10
  unsigned __int64 v1948; // rax
  unsigned __int64 *v1949; // rcx
  __int64 *v1950; // r11
  __int64 v1951; // rax
  unsigned __int64 v1952; // rdx
  unsigned __int64 v1953; // rcx
  unsigned __int64 v1954; // r9
  unsigned int v1955; // ebx
  unsigned int v1956; // ebx
  __int64 v1957; // rdx
  __int64 v1958; // rcx
  unsigned __int8 v1959; // al
  unsigned int v1960; // ebx
  __int64 v1961; // rdx
  __int64 v1962; // rcx
  unsigned __int8 v1963; // al
  unsigned int v1964; // ebx
  __int64 v1965; // rdx
  __int64 v1966; // rcx
  unsigned __int8 v1967; // al
  unsigned __int64 v1968; // rcx
  unsigned __int64 v1969; // rax
  int v1970; // ecx
  int v1971; // ecx
  int v1972; // ecx
  int v1973; // ecx
  int v1974; // ecx
  volatile signed __int32 *v1975; // rax
  unsigned int v1976; // ebx
  __int64 v1977; // rdx
  __int64 v1978; // rcx
  unsigned __int8 EffectiveIrql; // al
  signed __int32 v1980[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1981; // [rsp+28h] [rbp-D8h]
  __int64 *v1982; // [rsp+38h] [rbp-C8h]
  __int16 v1983; // [rsp+50h] [rbp-B0h]
  char *v1984; // [rsp+58h] [rbp-A8h]
  unsigned int v1985; // [rsp+60h] [rbp-A0h]
  __int64 v1986; // [rsp+68h] [rbp-98h]
  __int64 v1987; // [rsp+70h] [rbp-90h]
  int v1988; // [rsp+78h] [rbp-88h]
  char *v1989; // [rsp+80h] [rbp-80h]
  __int64 v1990; // [rsp+88h] [rbp-78h]
  unsigned __int64 v1991; // [rsp+90h] [rbp-70h]
  unsigned int v1992; // [rsp+98h] [rbp-68h]
  unsigned int v1993; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v1994; // [rsp+A0h] [rbp-60h]
  _DWORD *v1995; // [rsp+A8h] [rbp-58h]
  unsigned __int8 v1996; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int8 v1997; // [rsp+B1h] [rbp-4Fh] BYREF
  unsigned __int8 v1998; // [rsp+B2h] [rbp-4Eh] BYREF
  unsigned __int64 v1999; // [rsp+B8h] [rbp-48h]
  unsigned int v2000; // [rsp+C0h] [rbp-40h] BYREF
  char *v2001; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v2002; // [rsp+D0h] [rbp-30h]
  unsigned int *v2003; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v2004; // [rsp+E0h] [rbp-20h]
  __int64 v2005; // [rsp+E8h] [rbp-18h] BYREF
  int v2006; // [rsp+F0h] [rbp-10h]
  unsigned int v2007; // [rsp+F4h] [rbp-Ch]
  _BYTE *v2008; // [rsp+F8h] [rbp-8h] BYREF
  char *v2009; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v2010; // [rsp+108h] [rbp+8h]
  char *v2011; // [rsp+110h] [rbp+10h]
  unsigned __int64 v2012; // [rsp+118h] [rbp+18h]
  unsigned int v2013; // [rsp+120h] [rbp+20h]
  unsigned int v2014; // [rsp+124h] [rbp+24h]
  __int64 v2015; // [rsp+128h] [rbp+28h] BYREF
  char *v2016; // [rsp+130h] [rbp+30h]
  unsigned int v2017; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v2018; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v2019; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v2020; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v2021; // [rsp+150h] [rbp+50h]
  char *v2022; // [rsp+158h] [rbp+58h]
  __int64 v2023; // [rsp+160h] [rbp+60h]
  unsigned int v2024; // [rsp+168h] [rbp+68h] BYREF
  __int64 v2025; // [rsp+170h] [rbp+70h]
  unsigned int v2026; // [rsp+178h] [rbp+78h] BYREF
  __int64 v2027; // [rsp+180h] [rbp+80h] BYREF
  _DWORD *v2028; // [rsp+188h] [rbp+88h]
  __int64 v2029; // [rsp+190h] [rbp+90h]
  __int64 v2030; // [rsp+198h] [rbp+98h]
  char v2031; // [rsp+1A0h] [rbp+A0h] BYREF
  int v2032; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD v2033[9]; // [rsp+1ACh] [rbp+ACh] BYREF
  __int64 v2034; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v2035; // [rsp+1D8h] [rbp+D8h]
  int v2036; // [rsp+1E0h] [rbp+E0h]
  __int64 v2037; // [rsp+1E8h] [rbp+E8h] BYREF
  int v2038; // [rsp+1F0h] [rbp+F0h]
  _DWORD v2039[6]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int16 v2040; // [rsp+210h] [rbp+110h] BYREF
  _QWORD *v2041; // [rsp+212h] [rbp+112h]
  __int64 v2042; // [rsp+220h] [rbp+120h] BYREF
  __int64 v2043; // [rsp+228h] [rbp+128h] BYREF
  __int64 v2044; // [rsp+230h] [rbp+130h] BYREF
  __int64 v2045; // [rsp+238h] [rbp+138h] BYREF
  __int64 v2046; // [rsp+240h] [rbp+140h]
  __int64 v2047; // [rsp+248h] [rbp+148h]
  __int64 v2048; // [rsp+250h] [rbp+150h]
  __int64 v2049; // [rsp+258h] [rbp+158h] BYREF
  __int16 v2050; // [rsp+260h] [rbp+160h] BYREF
  struct _KPRCB *v2051; // [rsp+262h] [rbp+162h]
  __int16 v2052; // [rsp+270h] [rbp+170h] BYREF
  unsigned __int64 v2053; // [rsp+272h] [rbp+172h]
  __int16 v2054; // [rsp+280h] [rbp+180h] BYREF
  __int64 v2055; // [rsp+282h] [rbp+182h]
  __int16 v2056; // [rsp+290h] [rbp+190h] BYREF
  __int64 v2057; // [rsp+292h] [rbp+192h]
  __int128 v2058; // [rsp+2A0h] [rbp+1A0h]
  __int128 v2059; // [rsp+2B0h] [rbp+1B0h]
  unsigned __int64 v2060; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v2061; // [rsp+2C8h] [rbp+1C8h] BYREF
  _DWORD *v2062; // [rsp+2D0h] [rbp+1D0h]
  int v2063; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v2064; // [rsp+2E0h] [rbp+1E0h]
  _WORD v2065[4]; // [rsp+2E8h] [rbp+1E8h] BYREF
  _BYTE *v2066; // [rsp+2F0h] [rbp+1F0h]
  _WORD v2067[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  _BYTE *v2068; // [rsp+300h] [rbp+200h]
  _QWORD v2069[6]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v2070[16]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE v2071[16]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v2072[16]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v2073; // [rsp+370h] [rbp+270h] BYREF
  __int16 v2074; // [rsp+378h] [rbp+278h]
  __int16 v2075; // [rsp+37Ah] [rbp+27Ah]
  unsigned __int64 v2076; // [rsp+390h] [rbp+290h]
  int v2077; // [rsp+398h] [rbp+298h]
  unsigned int v2078; // [rsp+39Ch] [rbp+29Ch]
  unsigned __int64 v2079; // [rsp+3A0h] [rbp+2A0h]
  _BYTE v2080[16]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v2081; // [rsp+3B8h] [rbp+2B8h]
  __int64 v2082; // [rsp+3C0h] [rbp+2C0h]
  __int64 v2083; // [rsp+3C8h] [rbp+2C8h]
  __int64 v2084; // [rsp+3D0h] [rbp+2D0h]
  char v2085; // [rsp+3D8h] [rbp+2D8h] BYREF
  char v2086; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v2087; // [rsp+3E8h] [rbp+2E8h]
  __int64 v2088; // [rsp+3F0h] [rbp+2F0h]
  __int64 v2089; // [rsp+3F8h] [rbp+2F8h]
  unsigned int *v2090; // [rsp+400h] [rbp+300h]
  __int64 v2091; // [rsp+408h] [rbp+308h]
  __int64 v2092; // [rsp+410h] [rbp+310h]
  __int64 v2093; // [rsp+418h] [rbp+318h]
  char v2094; // [rsp+420h] [rbp+320h] BYREF
  char v2095; // [rsp+428h] [rbp+328h] BYREF
  char v2096; // [rsp+430h] [rbp+330h] BYREF
  __int64 v2097; // [rsp+438h] [rbp+338h]
  __int64 v2098; // [rsp+440h] [rbp+340h]
  __int64 v2099; // [rsp+448h] [rbp+348h]
  __int64 v2100; // [rsp+450h] [rbp+350h]
  unsigned __int64 v2101; // [rsp+458h] [rbp+358h]
  unsigned __int64 v2102; // [rsp+460h] [rbp+360h]
  __int64 v2103; // [rsp+468h] [rbp+368h]
  __int64 v2104; // [rsp+470h] [rbp+370h]
  __int64 v2105; // [rsp+478h] [rbp+378h]
  __int64 v2106; // [rsp+480h] [rbp+380h]
  __int64 v2107; // [rsp+490h] [rbp+390h]
  unsigned __int64 v2108; // [rsp+498h] [rbp+398h]
  __int64 v2109; // [rsp+4A0h] [rbp+3A0h]
  char v2110; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int64 v2111; // [rsp+4B0h] [rbp+3B0h]
  __int64 v2112; // [rsp+4B8h] [rbp+3B8h]
  __int64 v2113; // [rsp+4C0h] [rbp+3C0h]
  __int64 v2114; // [rsp+4C8h] [rbp+3C8h]
  __int64 v2115; // [rsp+4D0h] [rbp+3D0h]
  __int64 v2116; // [rsp+4D8h] [rbp+3D8h]
  __int64 v2117; // [rsp+4E0h] [rbp+3E0h]
  __int64 v2118; // [rsp+4E8h] [rbp+3E8h]
  __int64 v2119; // [rsp+4F0h] [rbp+3F0h]
  __int64 v2120; // [rsp+4F8h] [rbp+3F8h]
  __int64 v2121; // [rsp+500h] [rbp+400h]
  __int64 v2122; // [rsp+508h] [rbp+408h]
  __int64 v2123; // [rsp+510h] [rbp+410h]
  _BYTE v2124[16]; // [rsp+518h] [rbp+418h] BYREF
  _BYTE v2125[16]; // [rsp+528h] [rbp+428h] BYREF
  _BYTE v2126[16]; // [rsp+538h] [rbp+438h] BYREF
  _BYTE v2127[16]; // [rsp+548h] [rbp+448h] BYREF
  _BYTE v2128[16]; // [rsp+558h] [rbp+458h] BYREF
  _BYTE v2129[16]; // [rsp+568h] [rbp+468h] BYREF
  __int64 v2130; // [rsp+578h] [rbp+478h]
  _BYTE v2131[16]; // [rsp+580h] [rbp+480h] BYREF
  _BYTE v2132[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v2133[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v2134[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v2135[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  _BYTE v2136[16]; // [rsp+5D0h] [rbp+4D0h] BYREF
  _BYTE v2137[16]; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v2138; // [rsp+5F0h] [rbp+4F0h]
  _BYTE v2139[24]; // [rsp+5F8h] [rbp+4F8h] BYREF
  char v2140; // [rsp+610h] [rbp+510h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+618h] [rbp+518h]
  unsigned int v2142; // [rsp+624h] [rbp+524h]
  _BYTE v2143[16]; // [rsp+628h] [rbp+528h] BYREF
  __int64 v2144; // [rsp+638h] [rbp+538h]
  __int64 v2145; // [rsp+640h] [rbp+540h]
  char v2146; // [rsp+648h] [rbp+548h] BYREF
  char v2147; // [rsp+658h] [rbp+558h] BYREF
  _QWORD v2148[4]; // [rsp+668h] [rbp+568h] BYREF
  _QWORD v2149[4]; // [rsp+688h] [rbp+588h] BYREF
  char v2150; // [rsp+6A8h] [rbp+5A8h] BYREF
  unsigned __int64 v2151; // [rsp+6B0h] [rbp+5B0h]
  char v2152; // [rsp+6C0h] [rbp+5C0h] BYREF
  unsigned __int64 v2153; // [rsp+6C8h] [rbp+5C8h]
  _BYTE v2154[24]; // [rsp+6D8h] [rbp+5D8h] BYREF
  _BYTE v2155[48]; // [rsp+6F0h] [rbp+5F0h] BYREF
  _BYTE v2156[96]; // [rsp+720h] [rbp+620h] BYREF
  char v2158; // [rsp+7A0h] [rbp+6A0h] BYREF
  char v2159; // [rsp+7A8h] [rbp+6A8h] BYREF

  v2 = a2;
  if ( !__2c )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1980, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_DWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || *(_DWORD *)(a1 + 12)
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2092) )
  {
    return 3221225485LL;
  }
  v6 = *(unsigned int *)(a1 + 48);
  v7 = *(unsigned int *)(a1 + 52);
  v8 = *(_DWORD *)(a1 + 20) & 1;
  if ( !(_DWORD)v6 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      if ( v15 )
      {
        if ( v15 <= 0xFFFFFFFF )
        {
          if ( KeGetEffectiveIrql(v6, v7) || KeAreApcsDisabled() )
          {
            v1976 = KeAreAllApcsDisabled();
            EffectiveIrql = KeGetEffectiveIrql(v1978, v1977);
            KeBugCheckEx(0xC8u, ((unsigned __int64)EffectiveIrql << 16) | 0xFF, v1976, 0LL, 0LL);
          }
          goto LABEL_38;
        }
      }
    }
    return 3221225485LL;
  }
  v9 = v6 - 1;
  if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (v12 = (unsigned int)(v11 - 1), !(_DWORD)v12) )
  {
    if ( (_DWORD)v7 == 16 && KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0) )
    {
      if ( *(int *)(a1 + 20) >= 0 )
      {
        if ( KeGetEffectiveIrql(v14, v13) || KeAreApcsDisabled() )
        {
          v1964 = KeAreAllApcsDisabled();
          v1967 = KeGetEffectiveIrql(v1966, v1965);
          KeBugCheckEx(0xC8u, ((unsigned __int64)v1967 << 16) | 0xFF, v1964, 0LL, 0LL);
        }
      }
      else if ( KeGetEffectiveIrql(v14, v13) > 1u )
      {
        v1960 = KeAreAllApcsDisabled();
        v1963 = KeGetEffectiveIrql(v1962, v1961);
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1963 << 16) | 0xFF, v1960, 0LL, 0LL);
      }
      goto LABEL_38;
    }
    return 3221225485LL;
  }
  if ( (_DWORD)v12 != 1 || (_DWORD)v7 )
    return 3221225485LL;
  if ( KeGetEffectiveIrql(v12, v7) || KeAreApcsDisabled() )
  {
    v1956 = KeAreAllApcsDisabled();
    v1959 = KeGetEffectiveIrql(v1958, v1957);
    KeBugCheckEx(0xC8u, ((unsigned __int64)v1959 << 16) | 0xFF, v1956, 0LL, 0LL);
  }
LABEL_38:
  v2030 = 2872LL;
  if ( !v8 || (v16 = *(_QWORD *)(v4 + 2776) + 2879LL, v2030 = v16, v16 == 2872) )
    Pool2 = (char *)ExAllocateFromNPagedLookasideList(&stru_140E0F340);
  else
    Pool2 = (char *)ExAllocatePool2(0x40uLL, v16, 0x746E494Bu);
  v2011 = Pool2;
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v19 = Pool2 + 32;
  v2016 = Pool2 + 32;
  memmove(Pool2 + 32, (const void *)v4, 0xAE8uLL);
  v18[348] = v4;
  v18[349] = v18 + 353;
  v20 = 0LL;
  *((_DWORD *)v18 + 536) = *(_DWORD *)v2;
  *(_QWORD *)((char *)v18 + 2148) = *(unsigned int *)(v2 + 4);
  *((_DWORD *)v18 + 540) = 0;
  *((_DWORD *)v18 + 639) |= 0x1000u;
  if ( v8 )
    v18[350] = ((unsigned __int64)v18 + 2879) & 0xFFFFFFFFFFFFFFF8uLL;
  v21 = *(_DWORD *)(a1 + 16);
  if ( v21 > 0x80000 )
    v21 = 0x80000;
  *((_DWORD *)v18 + 539) = v21;
  if ( !v21 )
    *((_DWORD *)v18 + 539) = 1;
  v2047 = a1;
  v22 = (unsigned __int64)(v18 + 4);
  v2048 = v2;
  v23 = *((_DWORD *)v18 + 639);
  v1989 = (char *)(v18 + 4);
  if ( (v23 & 8) == 0
    || (v23 & 0x1000) != 0
    || (v24 = __rdtsc(),
        v25 = (__ROR8__(v24, 3) ^ v24) * (unsigned __int128)0x7010008004002001uLL,
        v2119 = *((_QWORD *)&v25 + 1),
        (((unsigned __int8)v25 ^ BYTE8(v25)) & 3) != 0)
    || (v26 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v18[36])(64LL, v18[243], *((unsigned int *)v18 + 532)),
        v20 = 0LL,
        (v27 = v26) == 0) )
  {
LABEL_61:
    v34 = 1LL;
    v2006 = 0;
  }
  else
  {
    ((void (__fastcall *)(__int64, _QWORD))v18[59])(v26, *((unsigned __int16 *)v18 + 976));
    v28 = *(unsigned int *)(v18[227] + v18[166]);
    if ( (_DWORD)v28 )
    {
      v29 = __rdtsc();
      v30 = (__ROR8__(v29, 3) ^ v29) * (unsigned __int128)0x7010008004002001uLL;
      v2118 = *((_QWORD *)&v30 + 1);
      v28 = (*((_QWORD *)&v30 + 1) ^ (unsigned __int64)v30) % v28;
    }
    v31 = 0LL;
    while ( 1 )
    {
      v32 = ((__int64 (__fastcall *)(__int64))v18[122])(v31);
      v33 = v32;
      if ( !v32 )
        goto LABEL_60;
      v31 = v32;
      if ( !(_DWORD)v28 )
        break;
      LODWORD(v28) = v28 - 1;
    }
    if ( ((int (__fastcall *)(__int64))v18[120])(v32) < 0 )
    {
      ((void (__fastcall *)(__int64))v18[123])(v33);
LABEL_60:
      ((void (__fastcall *)(__int64))v18[37])(v27);
      v20 = 0LL;
      goto LABEL_61;
    }
    ((void (__fastcall *)(__int64, _BYTE *))v18[139])(v33, v2156);
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))v18[63])(v33, v27, 0LL, 0LL, 0LL);
    v47 = __rdtsc();
    v48 = (__ROR8__(v47, 3) ^ v47) * (unsigned __int128)0x7010008004002001uLL;
    v2117 = *((_QWORD *)&v48 + 1);
    v49 = ((unsigned __int64)v48 ^ *((_QWORD *)&v48 + 1)) % ((unsigned int (__fastcall *)(__int64))v18[62])(v27);
    _disable();
    _enable();
    ((void (__fastcall *)(_BYTE *, _QWORD))v18[58])(v2080, 0LL);
    ((void (__fastcall *)(_BYTE *, __int64))v18[60])(v2139, v27);
    while ( ((int (__fastcall *)(unsigned int *, _BYTE *))v18[61])(&v2017, v2139) >= 0 )
    {
      if ( !(_DWORD)v49 )
      {
        ((void (__fastcall *)(_BYTE *, _QWORD))v18[58])(v2080, v2017);
        break;
      }
      LODWORD(v49) = v49 - 1;
    }
    ((void (__fastcall *)(_BYTE *, _BYTE *))v18[64])(v2080, v2137);
    ((void (__fastcall *)(__int64))v18[37])(v27);
    v34 = 1LL;
    v20 = 0LL;
    v2006 = 1;
  }
  v2023 = 0LL;
  v35 = 4;
  v36 = &v2024;
  v37 = -1;
  do
  {
    *(_BYTE *)v36 = 0;
    v36 = (unsigned int *)((char *)v36 + 1);
    --v35;
  }
  while ( v35 );
  v38 = *((_DWORD *)v18 + 536);
  if ( *((_DWORD *)v18 + 538) >= *((_DWORD *)v18 + 539) )
    goto LABEL_2898;
  i9 = 0;
  v40 = 1;
  while ( 1 )
  {
    v41 = *(_DWORD *)(v22 + 2520) & 0x88000;
    v2014 = v38;
    if ( v41 != 557056 )
      __writedr(7u, 0LL);
    if ( v38 == *(_DWORD *)(v22 + 2092) )
      break;
    v42 = v22;
    v43 = 0;
    if ( *(_QWORD *)(v22 + 2752) )
      v42 = *(_QWORD *)(v22 + 2752);
    v44 = (char *)(v42 + *(unsigned int *)(v42 + 2088));
    v1984 = v44;
    if ( (_DWORD)v2023 && HIDWORD(v2023) <= v38 )
    {
      v43 = HIDWORD(v2023);
      v44 = (char *)(v42 + v2024);
      v1984 = v44;
    }
    if ( v43 != v38 )
    {
      v45 = v38 - v43;
      v43 = v38;
      while ( 1 )
      {
        if ( *(_DWORD *)v44 == 1 )
        {
LABEL_101:
          v34 = *((unsigned int *)v44 + 4) / 0xCuLL;
          v46 = (unsigned int)(4 * v34 + 48);
          goto LABEL_102;
        }
        if ( *(_DWORD *)v44 == 7 )
        {
          v46 = (unsigned int)(24 * (*((_DWORD *)v44 + 6) + 2));
          goto LABEL_102;
        }
        if ( *(_DWORD *)v44 == 8 )
          break;
        switch ( *(_DWORD *)v44 )
        {
          case 0xA:
            v46 = (unsigned int)(16 * (*((_DWORD *)v44 + 7) + 3));
            break;
          case 0x1C:
            v50 = *((unsigned __int16 *)v44 + 20);
LABEL_99:
            v46 = (v50 + 55) & 0xFFFFFFF8;
            break;
          case 0x1E:
            v34 = ((*((_DWORD *)v44 + 9) != 0 ? *((_DWORD *)v44 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8;
            v46 = (unsigned int)v34 + 24 * (*((unsigned __int16 *)v44 + 20) + 2);
            break;
          case 0x21:
            v34 = ((*((_DWORD *)v44 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v44 + 10) + 4095) >> 12;
            v46 = (unsigned int)(20 * v34 + 48);
            break;
          case 0x2B:
            goto LABEL_101;
          default:
            v46 = 48LL;
            break;
        }
LABEL_102:
        v44 += v46;
        if ( !--v45 )
        {
          v1984 = v44;
          v37 = -1;
          goto LABEL_104;
        }
      }
      v50 = *((unsigned __int16 *)v44 + 16);
      goto LABEL_99;
    }
LABEL_104:
    LODWORD(v2023) = 1;
    HIDWORD(v2023) = v43;
    v2024 = (_DWORD)v44 - v42;
    if ( !*(_DWORD *)(v22 + 2116) )
    {
      v51 = 0;
      v52 = *(_DWORD *)v44;
      v53 = *(_DWORD *)(v2047 + 48);
      v54 = *(__int64 **)(v2047 + 56);
      if ( *(int *)v44 > 21 )
      {
        v56 = v52 - 24;
        if ( !v56 )
          goto LABEL_144;
        v57 = v56 - 4;
        if ( !v57 )
          goto LABEL_144;
        v58 = v57 - 1;
        if ( !v58 )
          goto LABEL_144;
        v59 = v58 - 1;
        if ( v59 )
        {
          v60 = v59 - 2;
          if ( v60 )
          {
            v61 = v60 - 3;
            if ( v61 )
            {
              if ( (unsigned int)(v61 - 8) > 1 )
                goto LABEL_238;
            }
          }
        }
LABEL_136:
        if ( v53 )
          goto LABEL_238;
      }
      else
      {
        if ( v52 == 21 )
        {
          v51 = *((_DWORD *)v44 + 11);
          if ( v53 != 4 )
            goto LABEL_238;
          goto LABEL_127;
        }
        v34 = v52;
        if ( !v52 )
          goto LABEL_136;
        v34 = v52 - 1;
        if ( v52 == 1 )
          goto LABEL_136;
        v34 = v52 - 2;
        if ( v52 != 2 )
        {
          v34 = v52 - 3;
          if ( v52 != 3 )
          {
            v34 = v52 - 7;
            if ( v52 != 7 )
            {
              v34 = v52 - 8;
              if ( v52 != 8 )
              {
                v34 = v52 - 9;
                if ( v52 != 9 && v52 != 13 )
                  goto LABEL_238;
                goto LABEL_136;
              }
LABEL_144:
              if ( v53 != 5 )
                goto LABEL_238;
LABEL_145:
              ++*(_QWORD *)(v2048 + 8);
              goto LABEL_146;
            }
LABEL_117:
            if ( v52 == 7 )
            {
              v51 = *((_DWORD *)v44 + 7);
              v55 = v53 == 1;
LABEL_119:
              if ( !v55 )
                goto LABEL_238;
            }
            else if ( v52 - 2 <= 1 )
            {
              v51 = *((_DWORD *)v44 + 10);
              if ( v52 == 3 && v53 != 2 )
                goto LABEL_238;
              if ( v52 == 2 )
              {
                v55 = v53 == 3;
                goto LABEL_119;
              }
            }
LABEL_127:
            if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v2047 + 56), v51) )
              goto LABEL_238;
            goto LABEL_145;
          }
        }
        if ( v53 )
          goto LABEL_117;
      }
      v62 = *((unsigned int *)v44 + 4);
      if ( !(_DWORD)v62 )
        goto LABEL_238;
      v34 = (unsigned __int64)&v2061;
      v63 = *((_QWORD *)v44 + 1);
      v2061 = *v54;
      v2032 = *((_DWORD *)v54 + 2);
      v64 = v63 + v62;
      v65 = (unsigned int *)&v2032;
      while ( v63 >= *(_QWORD *)v34 + (unsigned __int64)*v65 || v64 <= *(_QWORD *)v34 )
      {
        ++v51;
        v34 += 8LL;
        ++v65;
        if ( v51 )
          goto LABEL_238;
      }
      goto LABEL_145;
    }
LABEL_146:
    v66 = *(_DWORD *)v44;
    v1992 = v66;
    if ( v66 > 30 )
    {
      if ( v66 <= 40 )
      {
        if ( v66 == 40 )
          goto LABEL_1760;
        if ( v66 != 31 )
        {
          if ( v66 == 32 )
          {
            sub_140517D28(v22, v44);
            goto LABEL_238;
          }
          if ( v66 == 33 )
          {
            sub_140516C24(v22, v44);
            goto LABEL_238;
          }
          if ( v66 != 35 )
          {
            switch ( v66 )
            {
              case '$':
                v1205 = (_QWORD *)*((_QWORD *)v44 + 1);
                v1206 = *((unsigned int *)v44 + 4);
                v1207 = v1205;
                *(_DWORD *)(v22 + 2120) += v1206;
                v1208 = (const char *)v1205;
                v1209 = *(_DWORD *)(v22 + 2100);
                v1210 = *(_QWORD *)(v22 + 2104);
                if ( v1205 < (_QWORD *)((char *)v1205 + v1206) )
                {
                  do
                  {
                    _mm_prefetch(v1208, 0);
                    v1208 += 64;
                  }
                  while ( v1208 < (const char *)v1205 + v1206 );
                }
                v1211 = *(_QWORD *)(v22 + 2104);
                v1212 = (unsigned int)v1206 >> 7;
                if ( (unsigned int)v1206 >> 7 )
                {
                  do
                  {
                    v1213 = 8LL;
                    do
                    {
                      v1214 = v1207[1] ^ __ROL8__(*v1207 ^ v1211, v1209);
                      v1207 += 2;
                      v1211 = __ROL8__(v1214, v1209);
                      --v1213;
                    }
                    while ( v1213 );
                    v1215 = (__ROL8__(v1210 ^ ((char *)v1207 - (char *)v1205), 17) ^ v1210 ^ (unsigned __int64)((char *)v1207 - (char *)v1205))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2099 = *((_QWORD *)&v1215 + 1);
                    v1216 = v1215 ^ BYTE8(v1215) ^ v1209;
                    v1217 = 0xFFFFFFFFLL;
                    v1209 = v1216 & 0x3F;
                    if ( !v1209 )
                      LOBYTE(v1209) = 1;
                    --v1212;
                  }
                  while ( v1212 );
                  v22 = (unsigned __int64)v1989;
                }
                else
                {
                  v1217 = 0xFFFFFFFFLL;
                }
                v1218 = v1206 & 0x7F;
                if ( (unsigned int)v1218 >= 8 )
                {
                  v1219 = (unsigned __int64)(unsigned int)v1218 >> 3;
                  do
                  {
                    v1211 = __ROL8__(*v1207++ ^ v1211, v1209);
                    v1218 = (unsigned int)(v1218 - 8);
                    --v1219;
                  }
                  while ( v1219 );
                }
                for ( ; (_DWORD)v1218; v1218 = (unsigned int)(v1218 - 1) )
                {
                  v1220 = *(unsigned __int8 *)v1207;
                  v1207 = (_QWORD *)((char *)v1207 + 1);
                  v1211 = __ROL8__(v1220 ^ v1211, v1209);
                }
                for ( i = v1211; ; LODWORD(v1211) = i ^ v1211 )
                {
                  i >>= 31;
                  if ( !i )
                    break;
                }
                v1222 = v1211 & 0x7FFFFFFF;
                v1223 = 0;
                if ( v1222 == *((_DWORD *)v44 + 5) )
                  goto LABEL_1835;
                if ( !*(_DWORD *)v44 )
                  v1223 = *((_DWORD *)v44 + 6) != 0;
                v1217 = *((_QWORD *)v44 + 1);
                if ( !*((_DWORD *)v44 + 4) )
                  goto LABEL_1822;
                v1218 = 64LL;
                if ( (*(_DWORD *)(v22 + 2524) & 0x40) == 0 )
                  goto LABEL_1822;
                CurrentIrql = KeGetCurrentIrql();
                v1225 = v1217 & 0xFFFFFFFFFFFFF000uLL;
                v1226 = (v1217 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                v1227 = (v1217 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1813:
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1228 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                            v1225,
                            0LL,
                            v1218,
                            v1207);
                  if ( v1228 == -1073741267 )
                  {
                    if ( v1223 )
                      goto LABEL_1821;
                    if ( CurrentIrql <= 1u )
                    {
                      __writecr8(CurrentIrql);
                      goto LABEL_1813;
                    }
                  }
                  else if ( v1228 < 0 )
                  {
LABEL_1821:
                    __writecr8(CurrentIrql);
                    v44 = v1984;
                    i9 = 0;
LABEL_1822:
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1222 ^ (unsigned __int64)*((unsigned int *)v44 + 5);
                    v1229 = *((_QWORD *)v44 + 1);
                    if ( !*(_DWORD *)(v22 + 2328) )
                    {
                      v1217 = 1LL;
                      *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2352) = *(int *)v44;
                      *(_QWORD *)(v22 + 2360) = v1229;
                      *(_DWORD *)(v22 + 2328) = 1;
                      v1230 = *(_DWORD *)(v22 + 2520);
                      if ( (v1230 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1230 & 1) != 0 )
                      {
                        v1231 = *(unsigned int *)(v22 + 2676);
                        v1232 = *(_QWORD *)(v22 + 2104);
                        v1218 = *(_QWORD *)(v22 + 2680);
                        v1217 = v1231 + v22;
                        v1207 = (_QWORD *)(v1231
                                         + v22
                                         + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1231) >> 3));
                        while ( (_QWORD *)v1217 != v1207 )
                        {
                          *(_QWORD *)v1217 ^= v1218;
                          v1218 = ((v1232 ^ *(_QWORD *)v1217) + __ROR8__(v1218, v1218 & 0x3F)) ^ 0xEFA;
                          v1217 += 8LL;
                        }
                        *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                        if ( v1218 != *(_QWORD *)(v22 + 2688) )
                        {
                          v1233 = *(_DWORD *)(v22 + 2052);
                          v1234 = *(_QWORD *)(v22 + 1416);
                          *(_QWORD *)v1234 = v22;
                          *(_DWORD *)(v1234 + 16) = v1233;
                          if ( !*(_DWORD *)(v22 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1218 ^ *(_QWORD *)(v22 + 2688);
                          sub_140BDA384(v22, 0LL, v1218, 256LL);
                        }
                      }
                    }
                    goto LABEL_1835;
                  }
                  v1225 += 4096LL;
                  v1227 += 4096LL;
                  if ( v1227 == v1226 )
                  {
                    __writecr8(CurrentIrql);
                    v44 = v1984;
                    i9 = 0;
LABEL_1835:
                    v1235 = *(_QWORD *)(v22 + 1336);
                    v1236 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v22 + 352))(
                      v1235,
                      v1217,
                      v1218,
                      v1207);
                    v1237 = **(unsigned int ***)(v22 + 1568);
                    v1238 = v1237 + 4;
                    v1239 = *((_BYTE *)v1237 + 12);
                    v1240 = (unsigned __int64)&v1237[6 * *v1237 + 4];
                    do
                    {
                      v1241 = 24LL;
                      v1242 = v44 + 24;
                      v1243 = v1238;
                      do
                      {
                        v1244 = *(_QWORD *)v1243;
                        v1243 += 2;
                        v1245 = *(_QWORD *)v1242;
                        v1242 += 8;
                        if ( v1244 != v1245 )
                          goto LABEL_1843;
                        v1241 = (unsigned int)(v1241 - 8);
                      }
                      while ( (unsigned int)v1241 >= 8 );
                      if ( !(_DWORD)v1241 )
                        break;
                      while ( 1 )
                      {
                        v1246 = *(_BYTE *)v1243;
                        v1243 = (unsigned int *)((char *)v1243 + 1);
                        v1247 = *v1242++;
                        if ( v1246 != v1247 )
                          break;
                        v55 = (_DWORD)v1241 == 1;
                        v1241 = (unsigned int)(v1241 - 1);
                        if ( v55 )
                          goto LABEL_1844;
                      }
LABEL_1843:
                      v1238 += 6;
                    }
                    while ( (unsigned __int64)v1238 < v1240 );
LABEL_1844:
                    (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v22 + 416))(
                      *(_QWORD *)(v22 + 1336),
                      v1241,
                      v1242,
                      v1243);
                    __writecr8(v1236);
                    if ( !v1239 )
                      goto LABEL_1858;
                    v1248 = *(_DWORD *)(v22 + 2524);
                    if ( (v1248 & 0x10) != 0 && !*(_DWORD *)(v22 + 2328) )
                    {
                      *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2352) = *(int *)v44;
                      *(_QWORD *)(v22 + 2360) = 1LL;
                      *(_DWORD *)(v22 + 2328) = 1;
                      v1249 = *(_DWORD *)(v22 + 2520);
                      if ( (v1249 & 0x20000000) == 0 && (v1248 & 0x200000) != 0 && (v1249 & 1) != 0 )
                      {
                        v1250 = *(unsigned int *)(v22 + 2676);
                        v1251 = *(_QWORD *)(v22 + 2104);
                        v1252 = *(_QWORD *)(v22 + 2680);
                        v1253 = (_QWORD *)(v1250 + v22);
                        v1254 = v1250
                              + v22
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1250) >> 3);
                        while ( v1253 != (_QWORD *)v1254 )
                        {
                          *v1253 ^= v1252;
                          v1252 = ((v1251 ^ *v1253++) + __ROR8__(v1252, v1252 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                        if ( v1252 != *(_QWORD *)(v22 + 2688) )
                        {
                          v1255 = *(_DWORD *)(v22 + 2052);
                          v1256 = *(_QWORD *)(v22 + 1416);
                          *(_QWORD *)v1256 = v22;
                          *(_DWORD *)(v1256 + 16) = v1255;
                          if ( !*(_DWORD *)(v22 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1252 ^ *(_QWORD *)(v22 + 2688);
                          sub_140BDA384(v22, 0LL, v1252, 256LL);
                        }
                      }
                    }
                    if ( *((_QWORD *)v44 + 3) == 1LL )
                    {
                      v40 = 1;
                    }
                    else
                    {
LABEL_1858:
                      v55 = v1238 == (unsigned int *)v1240;
                      v40 = 1;
                      if ( v55 && !*(_DWORD *)(v22 + 2328) )
                      {
                        *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v22 + 2352) = *(int *)v44;
                        *(_QWORD *)(v22 + 2360) = v1238;
                        *(_DWORD *)(v22 + 2328) = 1;
                        v1257 = *(_DWORD *)(v22 + 2520);
                        if ( (v1257 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1257 & 1) != 0 )
                        {
                          v1258 = *(unsigned int *)(v22 + 2676);
                          v1259 = *(_QWORD *)(v22 + 2104);
                          v1260 = *(_QWORD *)(v22 + 2680);
                          v1261 = (_QWORD *)(v1258 + v22);
                          v1262 = v1258
                                + v22
                                + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1258) >> 3);
                          while ( v1261 != (_QWORD *)v1262 )
                          {
                            *v1261 ^= v1260;
                            v1260 = ((v1259 ^ *v1261++) + __ROR8__(v1260, v1260 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                          if ( v1260 != *(_QWORD *)(v22 + 2688) )
                          {
                            v1263 = *(_DWORD *)(v22 + 2052);
                            v1264 = *(_QWORD *)(v22 + 1416);
                            *(_QWORD *)v1264 = v22;
                            *(_DWORD *)(v1264 + 16) = v1263;
                            if ( !*(_DWORD *)(v22 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1260 ^ *(_QWORD *)(v22 + 2688);
                            sub_140BDA384(v22, 0LL, v1260, 256LL);
                          }
                        }
                      }
                    }
                    v1265 = *(_QWORD *)(v22 + 1336);
                    v1266 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    (*(void (__fastcall **)(__int64))(v22 + 352))(v1265);
                    v1267 = 0LL;
                    v1268 = **(unsigned int ***)(v22 + 1568);
                    v1269 = v1268 + 4;
                    v1270 = (unsigned __int64)&v1268[6 * *v1268 + 4];
                    while ( 1 )
                    {
                      v1269 += 6;
                      if ( (unsigned __int64)v1269 >= v1270 )
                        break;
                      v1271 = *((_QWORD *)v1269 + 1);
                      if ( v1271 < v1267 )
                        break;
                      if ( (v1271 & 0xFFFFFFFFFFFFF000uLL) != v1271 )
                        break;
                      v1272 = v1271 + v1269[4];
                      if ( v1272 <= v1271 || v1272 == v1267 )
                        break;
                      v1267 = v1271 + v1269[4];
                    }
                    (*(void (__fastcall **)(_QWORD))(v22 + 416))(*(_QWORD *)(v22 + 1336));
                    __writecr8(v1266);
                    if ( v1269 == (unsigned int *)v1270 )
                      goto LABEL_238;
                    if ( *(_DWORD *)(v22 + 2328) )
                      goto LABEL_238;
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v44;
                    *(_QWORD *)(v22 + 2360) = v1269;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1273 = *(_DWORD *)(v22 + 2520);
                    if ( (v1273 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1273 & 1) == 0 )
                      goto LABEL_238;
                    v1274 = *(unsigned int *)(v22 + 2676);
                    v1275 = *(_QWORD *)(v22 + 2104);
                    v339 = *(_QWORD *)(v22 + 2680);
                    v34 = v1274 + v22;
                    v1276 = v1274 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1274) >> 3);
                    while ( v34 != v1276 )
                    {
                      *(_QWORD *)v34 ^= v339;
                      v339 = ((v1275 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
                      v34 += 8LL;
                    }
LABEL_550:
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v339 == *(_QWORD *)(v22 + 2688) )
                      goto LABEL_238;
                    v341 = *(_DWORD *)(v22 + 2052);
                    v342 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v342 = v22;
                    *(_DWORD *)(v342 + 16) = v341;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v339 ^ *(_QWORD *)(v22 + 2688);
                    goto LABEL_766;
                  }
                }
              case '%':
                if ( (*(_DWORD *)(v22 + 2524) & 4) != 0 )
                  goto LABEL_238;
                if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64))(v22 + 1064))(
                        (unsigned int)(v66 - 37),
                        v34) )
                  goto LABEL_238;
                if ( *(_DWORD *)(v22 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                *(_QWORD *)(v22 + 2360) = 0LL;
                *(_DWORD *)(v22 + 2328) = 1;
                v1201 = *(_DWORD *)(v22 + 2520);
                if ( (v1201 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1201 & 1) == 0 )
                  goto LABEL_238;
                v1202 = *(unsigned int *)(v22 + 2676);
                v1203 = *(_QWORD *)(v22 + 2104);
                v339 = *(_QWORD *)(v22 + 2680);
                v34 = v1202 + v22;
                v1204 = v1202 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1202) >> 3);
                while ( v34 != v1204 )
                {
                  *(_QWORD *)v34 ^= v339;
                  v339 = ((v1203 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
                  v34 += 8LL;
                }
                goto LABEL_763;
              case '&':
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 432))(v2129, *((unsigned int *)v44 + 11));
                v1192 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2129, v2143);
                __asm { xgetbv }
                v1194 = v1192 | (v1193 << 32);
                (*(void (__fastcall **)(_BYTE *))(v22 + 424))(v2143);
                v34 = *((_QWORD *)v44 + 4);
                v1195 = v1194 & *((_QWORD *)v44 + 3);
                if ( v1195 == v34 )
                  goto LABEL_238;
                v1196 = *((_QWORD *)v44 + 5);
                if ( *(_DWORD *)(v22 + 2328) )
                  goto LABEL_238;
                v34 ^= v1195;
                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v34;
                if ( *(_DWORD *)(v22 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                *(_QWORD *)(v22 + 2360) = v1196;
                *(_DWORD *)(v22 + 2328) = 1;
                v1197 = *(_DWORD *)(v22 + 2520);
                if ( (v1197 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1197 & 1) == 0 )
                  goto LABEL_238;
                v1198 = *(unsigned int *)(v22 + 2676);
                v1199 = *(_QWORD *)(v22 + 2104);
                v339 = *(_QWORD *)(v22 + 2680);
                v34 = v1198 + v22;
                v1200 = v1198 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1198) >> 3);
                while ( v34 != v1200 )
                {
                  *(_QWORD *)v34 ^= v339;
                  v339 = ((v1199 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
                  v34 += 8LL;
                }
                goto LABEL_550;
            }
            if ( v66 != 39 )
              goto LABEL_2253;
LABEL_1760:
            *(_DWORD *)(v22 + 2120) += *((_DWORD *)v44 + 9);
            v1180 = *((unsigned int *)v44 + 9);
            v1181 = (_QWORD *)(v22 + *((unsigned int *)v44 + 8));
            v1182 = *(_DWORD *)(v22 + 2100);
            v1183 = v1181;
            v1184 = *(_QWORD *)(v22 + 2104);
            v1185 = (const char *)v1181;
            if ( v1181 < (_QWORD *)((char *)v1181 + v1180) )
            {
              do
              {
                _mm_prefetch(v1185, 0);
                v1185 += 64;
              }
              while ( v1185 < (const char *)v1181 + v1180 );
            }
            v1186 = *(_QWORD *)(v22 + 2104);
            v1187 = (unsigned int)v1180 >> 7;
            if ( (unsigned int)v1180 >> 7 )
            {
              do
              {
                v1188 = 8LL;
                do
                {
                  v1189 = v1183[1] ^ __ROL8__(*v1183 ^ v1186, v1182);
                  v1183 += 2;
                  v1186 = __ROL8__(v1189, v1182);
                  --v1188;
                }
                while ( v1188 );
                v1190 = (__ROL8__(v1184 ^ ((char *)v1183 - (char *)v1181), 17) ^ v1184 ^ (unsigned __int64)((char *)v1183 - (char *)v1181))
                      * (unsigned __int128)0x7010008004002001uLL;
                v2109 = *((_QWORD *)&v1190 + 1);
                v1191 = v1190 ^ BYTE8(v1190) ^ v1182;
                v34 = 0xFFFFFFFFLL;
                v1182 = v1191 & 0x3F;
                if ( !v1182 )
                  LOBYTE(v1182) = 1;
                --v1187;
              }
              while ( v1187 );
              v22 = (unsigned __int64)v1989;
            }
            else
            {
              v34 = 0xFFFFFFFFLL;
            }
            v1896 = v1180 & 0x7F;
            if ( v1896 >= 8 )
            {
              v1897 = (unsigned __int64)v1896 >> 3;
              do
              {
                v1186 = __ROL8__(*v1183++ ^ v1186, v1182);
                v1896 -= 8;
                --v1897;
              }
              while ( v1897 );
            }
            for ( ; v1896; --v1896 )
            {
              v1898 = *(unsigned __int8 *)v1183;
              v1183 = (_QWORD *)((char *)v1183 + 1);
              v1186 = __ROL8__(v1898 ^ v1186, v1182);
            }
            v1899 = *((_QWORD *)v44 + 3);
            if ( v1186 == v1899 )
              goto LABEL_238;
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1186 ^ v1899;
            v1900 = v22 + *((unsigned int *)v44 + 8);
            if ( *(_DWORD *)(v22 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *(int *)v44;
            *(_QWORD *)(v22 + 2360) = v1900;
            *(_DWORD *)(v22 + 2328) = 1;
            v1901 = *(_DWORD *)(v22 + 2520);
            if ( (v1901 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1901 & 1) == 0 )
              goto LABEL_238;
            v1902 = *(unsigned int *)(v22 + 2676);
            v1903 = *(_QWORD *)(v22 + 2104);
            v339 = *(_QWORD *)(v22 + 2680);
            v34 = v1902 + v22;
            v1904 = v1902 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1902) >> 3);
            while ( v34 != v1904 )
            {
              *(_QWORD *)v34 ^= v339;
              v339 = ((v1903 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
              v34 += 8LL;
            }
            goto LABEL_550;
          }
          v1277 = (_QWORD *)*((_QWORD *)v44 + 1);
          v1278 = *((unsigned int *)v44 + 4);
          v1279 = v1277;
          *(_DWORD *)(v22 + 2120) += v1278;
          v1280 = (const char *)v1277;
          v1281 = *(_DWORD *)(v22 + 2100);
          v1282 = *(_QWORD *)(v22 + 2104);
          if ( v1277 < (_QWORD *)((char *)v1277 + v1278) )
          {
            do
            {
              _mm_prefetch(v1280, 0);
              v1280 += 64;
            }
            while ( v1280 < (const char *)v1277 + v1278 );
          }
          v1283 = *(_QWORD *)(v22 + 2104);
          v1284 = (unsigned int)v1278 >> 7;
          if ( (unsigned int)v1278 >> 7 )
          {
            do
            {
              v1285 = 8LL;
              do
              {
                v1286 = v1279[1] ^ __ROL8__(*v1279 ^ v1283, v1281);
                v1279 += 2;
                v1283 = __ROL8__(v1286, v1281);
                --v1285;
              }
              while ( v1285 );
              v1287 = __ROL8__(v1282 ^ ((char *)v1279 - (char *)v1277), 17) ^ v1282 ^ ((char *)v1279 - (char *)v1277);
              v2100 = (v1287 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v34 = 0xFFFFFFFFLL;
              v1281 = ((unsigned __int8)(v2100 ^ v1287) ^ (unsigned __int8)v1281) & 0x3F;
              if ( !v1281 )
                LOBYTE(v1281) = 1;
              --v1284;
            }
            while ( v1284 );
            v22 = (unsigned __int64)v1989;
          }
          else
          {
            v34 = 0xFFFFFFFFLL;
          }
          v1288 = v1278 & 0x7F;
          if ( v1288 >= 8 )
          {
            v1289 = (unsigned __int64)v1288 >> 3;
            do
            {
              v1283 = __ROL8__(*v1279++ ^ v1283, v1281);
              v1288 -= 8;
              --v1289;
            }
            while ( v1289 );
          }
          for ( ; v1288; --v1288 )
          {
            v1290 = *(unsigned __int8 *)v1279;
            v1279 = (_QWORD *)((char *)v1279 + 1);
            v1283 = __ROL8__(v1290 ^ v1283, v1281);
          }
          for ( j = v1283; ; LODWORD(v1283) = j ^ v1283 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          v1292 = v1283 & 0x7FFFFFFF;
          v1293 = 0;
          if ( v1292 == *((_DWORD *)v44 + 5) )
          {
LABEL_1919:
            v40 = 1;
          }
          else
          {
            if ( !*(_DWORD *)v44 )
              v1293 = *((_DWORD *)v44 + 6) != 0;
            v34 = *((_QWORD *)v44 + 1);
            if ( *((_DWORD *)v44 + 4) )
            {
              v1294 = 64LL;
              if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
              {
                v1295 = KeGetCurrentIrql();
                v1296 = v34 & 0xFFFFFFFFFFFFF000uLL;
                v1297 = (v34 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                v1298 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1299 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                              v1296,
                              0LL,
                              v1294,
                              v1279);
                    if ( v1299 == -1073741267 )
                      break;
                    if ( v1299 < 0 )
                    {
LABEL_1930:
                      __writecr8(v1295);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_1931;
                    }
LABEL_1917:
                    v1296 += 4096LL;
                    v1298 += 4096LL;
                    if ( v1298 == v1297 )
                    {
                      __writecr8(v1295);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_1919;
                    }
                  }
                  if ( v1293 )
                    goto LABEL_1930;
                  if ( v1295 > 1u )
                    goto LABEL_1917;
                  __writecr8(v1295);
                }
              }
            }
LABEL_1931:
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v1292;
            v1310 = *((_QWORD *)v44 + 1);
            v40 = 1;
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v1310;
              *(_DWORD *)(v22 + 2328) = 1;
              v1311 = *(_DWORD *)(v22 + 2520);
              if ( (v1311 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1311 & 1) != 0 )
              {
                v1312 = *(unsigned int *)(v22 + 2676);
                v1313 = *(_QWORD *)(v22 + 2104);
                v1314 = *(_QWORD *)(v22 + 2680);
                v34 = v1312 + v22;
                v1315 = v1312 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1312) >> 3);
                while ( v34 != v1315 )
                {
                  *(_QWORD *)v34 ^= v1314;
                  v1314 = ((v1313 ^ *(_QWORD *)v34) + __ROR8__(v1314, v1314 & 0x3F)) ^ 0xEFA;
                  v34 += 8LL;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1314 != *(_QWORD *)(v22 + 2688) )
                {
                  v1316 = *(_DWORD *)(v22 + 2052);
                  v1317 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v1317 = v22;
                  *(_DWORD *)(v1317 + 16) = v1316;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1314 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v1314, 256LL);
                }
              }
            }
          }
          v1300 = *((_DWORD *)v44 + 10);
          if ( (v1300 & 2) == 0 )
            goto LABEL_238;
          v1301 = *((_QWORD *)v44 + 1);
          if ( (v1300 & 4) != 0 )
          {
            v34 = *((_QWORD *)v44 + 3);
            v1302 = **(_QWORD **)(v1301 + 112);
            if ( v1302 != v34 )
            {
              v1303 = *(_QWORD *)(v22 + 1416);
              *(_QWORD *)v1303 = v1302;
              *(_DWORD *)(v1303 + 16) = 256;
              if ( !*(_DWORD *)(v22 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v34 ^ v1302;
              v1304 = *(_QWORD *)(v1301 + 112);
              if ( !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                *(_QWORD *)(v22 + 2360) = v1304;
                *(_DWORD *)(v22 + 2328) = 1;
                v1305 = *(_DWORD *)(v22 + 2520);
                if ( (v1305 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1305 & 1) != 0 )
                {
                  v1306 = *(unsigned int *)(v22 + 2676);
                  v1307 = *(_QWORD *)(v22 + 2104);
                  v1308 = *(_QWORD *)(v22 + 2680);
                  v34 = v1306 + v22;
                  v1309 = v1306 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1306) >> 3);
                  while ( v34 != v1309 )
                  {
                    *(_QWORD *)v34 ^= v1308;
                    v1308 = ((v1307 ^ *(_QWORD *)v34) + __ROR8__(v1308, v1308 & 0x3F)) ^ 0xEFA;
                    v34 += 8LL;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1308 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1318 = *(_DWORD *)(v22 + 2052);
                    v1319 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1319 = v22;
                    *(_DWORD *)(v1319 + 16) = v1318;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1308 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1308, 256LL);
                  }
                }
              }
            }
          }
          if ( (*((_DWORD *)v44 + 10) & 8) == 0 )
            goto LABEL_238;
          v34 = *((_QWORD *)v44 + 4);
          v1320 = **(_QWORD **)(v1301 + 120);
          if ( v1320 == v34 )
            goto LABEL_238;
          v1321 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)v1321 = v1320;
          *(_DWORD *)(v1321 + 16) = 256;
          if ( !*(_DWORD *)(v22 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v34 ^ v1320;
          v1322 = *(_QWORD *)(v1301 + 120);
          if ( *(_DWORD *)(v22 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2352) = *(int *)v44;
          *(_QWORD *)(v22 + 2360) = v1322;
          *(_DWORD *)(v22 + 2328) = 1;
          v1323 = *(_DWORD *)(v22 + 2520);
          if ( (v1323 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1323 & 1) == 0 )
            goto LABEL_238;
          v1324 = *(unsigned int *)(v22 + 2676);
          v1325 = *(_QWORD *)(v22 + 2104);
          v339 = *(_QWORD *)(v22 + 2680);
          v34 = v1324 + v22;
          v1326 = v1324 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1324) >> 3);
          while ( v34 != v1326 )
          {
            *(_QWORD *)v34 ^= v339;
            v339 = ((v1325 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
            v34 += 8LL;
          }
          goto LABEL_550;
        }
        if ( (*(_DWORD *)(v22 + 2128) & 1) == 0 )
          goto LABEL_238;
        if ( !*(_QWORD *)(*(_QWORD *)(v22 + 1384) + 32LL) )
          goto LABEL_1966;
        v1328 = *(unsigned int *)(v22 + 2492);
        if ( (_DWORD)v1328 == -1 )
        {
          *(_DWORD *)(v22 + 2492) = 0;
          v1328 = 0LL;
        }
        v1329 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 648))(v1328, v34);
        if ( v1329 || (v1329 = (*(__int64 (__fastcall **)(_QWORD))(v22 + 656))(0LL)) != 0 )
        {
          while ( (*(int (__fastcall **)(__int64, unsigned __int64))(v22 + 672))(v1329, v22 + 2440) < 0 )
          {
            v1329 = (*(__int64 (__fastcall **)(__int64))(v22 + 656))(v1329);
            if ( !v1329 )
            {
              *(_DWORD *)(v22 + 2492) = -1;
              goto LABEL_1966;
            }
          }
          v1330 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v22 + 976))(26LL, &v2060, 0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(v22 + 680))(v1329, v22 + 2440);
          v1331 = (*(__int64 (__fastcall **)(__int64))(v22 + 656))(v1329);
          if ( v1331 )
          {
            *(_DWORD *)(v22 + 2492) = (*(__int64 (__fastcall **)(__int64))(v22 + 688))(v1331);
            (*(void (__fastcall **)(__int64))(v22 + 664))(v1331);
          }
          else
          {
            *(_DWORD *)(v22 + 2492) = -1;
          }
          v1327 = v2060;
          if ( v1330 < 0 )
            v1327 = 0LL;
        }
        else
        {
LABEL_1966:
          v1327 = 0LL;
        }
        v1991 = v1327;
        v1332 = 0;
        v1985 = 0;
        v1333 = 0LL;
        while ( 2 )
        {
          v1457 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 944))(v1333, v34);
          v1995 = (_DWORD *)v1457;
          v1361 = v1457;
          if ( !v1457 )
          {
            v1458 = *(_QWORD *)(v22 + 1240);
            if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v1458) >= 0 )
            {
              v1459 = (*(unsigned __int8 (__fastcall **)(__int64))(v22 + 992))(v1458);
              v1460 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v22 + 1000))(v1458, &v1998);
              v1986 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v1458);
              if ( (_BYTE)v1459 == 114 )
                goto LABEL_2171;
              if ( *(_DWORD *)(v22 + 2328) )
                goto LABEL_2171;
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = (unsigned int)v1459 ^ 0x72LL;
              if ( *(_DWORD *)(v22 + 2328) )
                goto LABEL_2171;
              v1461 = (int *)v1984;
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = (char *)v1461 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *v1461;
              *(_QWORD *)(v22 + 2360) = v1458;
              *(_DWORD *)(v22 + 2328) = 1;
              v1462 = *(_DWORD *)(v22 + 2520);
              if ( (v1462 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1462 & 1) != 0 )
              {
                v1463 = *(unsigned int *)(v22 + 2676);
                v1464 = *(_QWORD *)(v22 + 2104);
                v1465 = *(_QWORD *)(v22 + 2680);
                v1466 = (_QWORD *)(v1463 + v22);
                v1467 = v1463 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1463) >> 3);
                while ( v1466 != (_QWORD *)v1467 )
                {
                  *v1466 ^= v1465;
                  v1465 = ((v1464 ^ *v1466++) + __ROR8__(v1465, v1465 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1465 != *(_QWORD *)(v22 + 2688) )
                {
                  v1468 = *(_DWORD *)(v22 + 2052);
                  v1469 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v1469 = v22;
                  *(_DWORD *)(v1469 + 16) = v1468;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1465 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v1465, 256LL);
                }
LABEL_2171:
                v1461 = (int *)v1984;
              }
              v1470 = 0;
              v1471 = 0;
              if ( (v1459 & 7) == 1 )
              {
                v1470 = 48;
                goto LABEL_2188;
              }
              if ( (v1459 & 7) == 2 )
              {
                v1470 = 16;
                v1471 = 16;
                goto LABEL_2188;
              }
              if ( (v1459 & 7) == 0 || *(_DWORD *)(v22 + 2328) )
              {
LABEL_2188:
                v1472 = 1LL;
              }
              else
              {
                v1472 = 1LL;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1461 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *v1461;
                *(_QWORD *)(v22 + 2360) = v1458;
                *(_DWORD *)(v22 + 2328) = 1;
                v1473 = *(_DWORD *)(v22 + 2520);
                if ( (v1473 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1473 & 1) != 0 )
                {
                  v1474 = *(unsigned int *)(v22 + 2676);
                  v1475 = *(_QWORD *)(v22 + 2104);
                  v1476 = *(_QWORD *)(v22 + 2680);
                  v1477 = (_QWORD *)(v1474 + v22);
                  v1478 = v1474 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1474) >> 3);
                  while ( v1477 != (_QWORD *)v1478 )
                  {
                    *v1477 ^= v1476;
                    v1476 = ((v1475 ^ *v1477++) + __ROR8__(v1476, v1476 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1476 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1479 = *(_DWORD *)(v22 + 2052);
                    v1480 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1480 = v22;
                    *(_DWORD *)(v1480 + 16) = v1479;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1476 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1476, 256LL);
                  }
                  goto LABEL_2188;
                }
              }
              v1481 = *(_QWORD *)(v22 + 1472);
              v1482 = 0xA3A03F5891C8B4E8uLL;
              v1483 = (int *)v1984;
              v1484 = v1459 >> 4;
              if ( (*(_BYTE *)(v1481 + 2 * v1484) | (unsigned __int8)v1470) != (_BYTE)v1460 && !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1483 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *v1483;
                *(_QWORD *)(v22 + 2360) = v1458;
                *(_DWORD *)(v22 + 2328) = 1;
                v1485 = *(_DWORD *)(v22 + 2520);
                if ( (v1485 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1485 & 1) != 0 )
                {
                  v1486 = *(unsigned int *)(v22 + 2676);
                  v1487 = *(_QWORD *)(v22 + 2104);
                  v1472 = *(_QWORD *)(v22 + 2680);
                  v1488 = (_QWORD *)(v1486 + v22);
                  v1489 = v1486 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1486) >> 3);
                  while ( v1488 != (_QWORD *)v1489 )
                  {
                    *v1488 ^= v1472;
                    v1472 = ((v1487 ^ *v1488++) + __ROR8__(v1472, v1472 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1472 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1490 = *(_DWORD *)(v22 + 2052);
                    v1491 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1491 = v22;
                    *(_DWORD *)(v1491 + 16) = v1490;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1472 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1472, 256LL);
                  }
                  v1483 = (int *)v1984;
                  v1482 = 0xA3A03F5891C8B4E8uLL;
                }
              }
              v55 = (*(_BYTE *)(v1481 + 2 * v1484 + 1) | (unsigned __int8)v1471) == v1998;
              v40 = 1;
              if ( !v55 && !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1483 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *v1483;
                *(_QWORD *)(v22 + 2360) = v1458;
                *(_DWORD *)(v22 + 2328) = 1;
                v1492 = *(_DWORD *)(v22 + 2520);
                if ( (v1492 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1492 & 1) != 0 )
                {
                  v1493 = *(unsigned int *)(v22 + 2676);
                  v1494 = *(_QWORD *)(v22 + 2104);
                  v1472 = *(_QWORD *)(v22 + 2680);
                  v1483 = (int *)(v1493 + v22);
                  v1482 = v1493 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1493) >> 3);
                  while ( v1483 != (int *)v1482 )
                  {
                    *(_QWORD *)v1483 ^= v1472;
                    v1472 = ((v1494 ^ *(_QWORD *)v1483) + __ROR8__(v1472, v1472 & 0x3F)) ^ 0xEFA;
                    v1483 += 2;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1472 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1495 = *(_DWORD *)(v22 + 2052);
                    v1496 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1496 = v22;
                    *(_DWORD *)(v1496 + 16) = v1495;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1472 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1472, 256LL);
                  }
                }
              }
              if ( v1458 != *(_QWORD *)(v22 + 1240) )
              {
                v1497 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v22 + 984))(
                                              v1458,
                                              1LL,
                                              v1472,
                                              v1482);
                v1498 = v1497;
                if ( v1497 )
                {
                  v1499 = *v1497;
                  v1500 = v1497;
                  if ( *v1497 )
                  {
                    v1501 = v1986;
                    v1502 = v1984;
                    v1994 = (unsigned __int64)v1497;
                    do
                    {
                      *v1498 = v1499 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v22 + 496))();
                      v1503 = v1998;
                      v1504 = v1498[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1504 == v1501 )
                        v1503 = v1460;
                      v1505 = v1498[1] >> 6;
                      LOBYTE(v1505) = v1505 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v1505, v1503) )
                      {
                        if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                        {
                          v1506 = *(_QWORD **)(v22 + 2760);
                          v1507 = 48;
                          v1508 = 6LL;
                          do
                          {
                            v1507 -= 8;
                            *v1506 = *(_QWORD *)v1502;
                            v1502 += 8;
                            ++v1506;
                            --v1508;
                          }
                          while ( v1508 );
                          if ( v1507 )
                          {
                            do
                            {
                              v1509 = *v1502++;
                              *(_BYTE *)v1506 = v1509;
                              v1506 = (_QWORD *)((char *)v1506 + 1);
                              --v1507;
                            }
                            while ( v1507 );
                            v1501 = v1986;
                          }
                          v1502 = *(char **)(v22 + 2760);
                        }
                        *((_QWORD *)v1502 + 3) = v1504;
                        *((_QWORD *)v1502 + 4) = *v1498;
                        v1502[40] = ((unsigned __int64)*((unsigned int *)v1498 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v22 + 2328) )
                        {
                          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2344) = v1502 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2352) = *(int *)v1502;
                          *(_QWORD *)(v22 + 2360) = v1458;
                          *(_DWORD *)(v22 + 2328) = 1;
                          v1510 = *(_DWORD *)(v22 + 2520);
                          if ( (v1510 & 0x20000000) == 0
                            && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0
                            && (v1510 & 1) != 0 )
                          {
                            v1511 = *(unsigned int *)(v22 + 2676);
                            v1512 = *(_QWORD *)(v22 + 2104);
                            v1513 = *(_QWORD *)(v22 + 2680);
                            v1514 = (_QWORD *)(v1511 + v22);
                            v1515 = v1511
                                  + v22
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1511) >> 3);
                            while ( v1514 != (_QWORD *)v1515 )
                            {
                              *v1514 ^= v1513;
                              v1513 = ((v1512 ^ *v1514++) + __ROR8__(v1513, v1513 & 0x3F)) ^ 0xEFA;
                            }
                            *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                            if ( v1513 != *(_QWORD *)(v22 + 2688) )
                            {
                              v1516 = *(_DWORD *)(v22 + 2052);
                              v1517 = *(_QWORD *)(v22 + 1416);
                              *(_QWORD *)v1517 = v22;
                              *(_DWORD *)(v1517 + 16) = v1516;
                              if ( !*(_DWORD *)(v22 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1513 ^ *(_QWORD *)(v22 + 2688);
                              sub_140BDA384(v22, 0LL, v1513, 256LL);
                            }
                          }
                        }
                      }
                      v1498 += 6;
                      v1499 = *v1498;
                    }
                    while ( *v1498 );
                    v1500 = (_QWORD *)v1994;
                    v40 = 1;
                  }
                  (*(void (__fastcall **)(_QWORD *))(v22 + 264))(v1500);
                }
              }
              (*(void (__fastcall **)(__int64, int *, __int64, unsigned __int64))(v22 + 936))(
                v1458,
                v1483,
                v1472,
                v1482);
              v1332 = v1985;
              *(_DWORD *)(v22 + 2120) += 0x8000;
            }
            i9 = 0;
            if ( v1991 )
              (*(void (**)(void))(v22 + 496))();
            *(_DWORD *)(v22 + 2120) += v1332 << 8;
            goto LABEL_238;
          }
          if ( v1327 == v1457 )
          {
            v1334 = v44;
            if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v1457) >= 0 )
            {
              v1335 = (*(unsigned __int8 (__fastcall **)(__int64))(v22 + 992))(v1361);
              v1336 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v22 + 1000))(v1361, &v1996);
              v1986 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v1361);
              if ( (_BYTE)v1335 == 97 )
                goto LABEL_1996;
              if ( *(_DWORD *)(v22 + 2328) )
                goto LABEL_1996;
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = (unsigned int)v1335 ^ 0x61LL;
              if ( *(_DWORD *)(v22 + 2328) )
                goto LABEL_1996;
              v1337 = (int *)v1984;
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = (char *)v1337 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *v1337;
              *(_QWORD *)(v22 + 2360) = v1361;
              *(_DWORD *)(v22 + 2328) = 1;
              v1338 = *(_DWORD *)(v22 + 2520);
              if ( (v1338 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1338 & 1) != 0 )
              {
                v1339 = *(unsigned int *)(v22 + 2676);
                v1340 = *(_QWORD *)(v22 + 2104);
                v1341 = *(_QWORD *)(v22 + 2680);
                v1342 = (_QWORD *)(v1339 + v22);
                v1343 = v1339 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1339) >> 3);
                while ( v1342 != (_QWORD *)v1343 )
                {
                  *v1342 ^= v1341;
                  v1341 = ((v1340 ^ *v1342++) + __ROR8__(v1341, v1341 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1341 != *(_QWORD *)(v22 + 2688) )
                {
                  v1344 = *(_QWORD *)(v22 + 1416);
                  v1345 = *(_DWORD *)(v22 + 2052);
                  *(_QWORD *)v1344 = v22;
                  *(_DWORD *)(v1344 + 16) = v1345;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *(_QWORD *)(v22 + 2688) ^ v1341;
                  sub_140BDA384(v22, 0LL, v1341, 256LL);
                }
LABEL_1996:
                v1337 = (int *)v1984;
              }
              v1346 = 0;
              v1347 = 0;
              if ( (v1335 & 7) == 1 )
              {
                v1346 = 48;
                goto LABEL_2013;
              }
              if ( (v1335 & 7) == 2 )
              {
                v1346 = 16;
                v1347 = 16;
                goto LABEL_2013;
              }
              if ( (v1335 & 7) == 0 || *(_DWORD *)(v22 + 2328) )
              {
LABEL_2013:
                v1348 = 1LL;
              }
              else
              {
                v1348 = 1LL;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1337 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *v1337;
                *(_QWORD *)(v22 + 2360) = v1995;
                *(_DWORD *)(v22 + 2328) = 1;
                v1349 = *(_DWORD *)(v22 + 2520);
                if ( (v1349 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1349 & 1) != 0 )
                {
                  v1350 = *(unsigned int *)(v22 + 2676);
                  v1351 = *(_QWORD *)(v22 + 2104);
                  v1352 = *(_QWORD *)(v22 + 2680);
                  v1353 = (_QWORD *)(v1350 + v22);
                  v1354 = v1350 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1350) >> 3);
                  while ( v1353 != (_QWORD *)v1354 )
                  {
                    *v1353 ^= v1352;
                    v1352 = ((v1351 ^ *v1353++) + __ROR8__(v1352, v1352 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1352 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1355 = *(_DWORD *)(v22 + 2052);
                    v1356 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1356 = v22;
                    *(_DWORD *)(v1356 + 16) = v1355;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1352 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1352, 256LL);
                  }
                  goto LABEL_2013;
                }
              }
              v1357 = *(_QWORD *)(v22 + 1472);
              v1358 = 0xA3A03F5891C8B4E8uLL;
              v1359 = (int *)v1984;
              v1360 = v1335 >> 4;
              v55 = (*(_BYTE *)(v1357 + 2 * v1360) | (unsigned __int8)v1346) == (_BYTE)v1336;
              v1361 = (__int64)v1995;
              if ( !v55 && !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1359 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *v1359;
                *(_QWORD *)(v22 + 2360) = v1361;
                *(_DWORD *)(v22 + 2328) = 1;
                v1362 = *(_DWORD *)(v22 + 2520);
                if ( (v1362 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1362 & 1) != 0 )
                {
                  v1363 = *(unsigned int *)(v22 + 2676);
                  v1364 = *(_QWORD *)(v22 + 2104);
                  v1348 = *(_QWORD *)(v22 + 2680);
                  v1365 = (_QWORD *)(v1363 + v22);
                  v1366 = v1363 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1363) >> 3);
                  while ( v1365 != (_QWORD *)v1366 )
                  {
                    *v1365 ^= v1348;
                    v1348 = ((v1364 ^ *v1365++) + __ROR8__(v1348, v1348 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1348 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1367 = *(_DWORD *)(v22 + 2052);
                    v1368 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1368 = v22;
                    *(_DWORD *)(v1368 + 16) = v1367;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1348 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1348, 256LL);
                  }
                  v1359 = (int *)v1984;
                  v1358 = 0xA3A03F5891C8B4E8uLL;
                }
              }
              if ( (*(_BYTE *)(v1357 + 2 * v1360 + 1) | (unsigned __int8)v1347) == v1996 || *(_DWORD *)(v22 + 2328) )
              {
LABEL_2039:
                v1370 = 1LL;
              }
              else
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = (char *)v1359 - 0x4C48B4211BBACBEBLL;
                v1369 = *v1359;
                v1370 = 1LL;
                *(_QWORD *)(v22 + 2352) = v1369;
                *(_QWORD *)(v22 + 2360) = v1361;
                *(_DWORD *)(v22 + 2328) = 1;
                v1371 = *(_DWORD *)(v22 + 2520);
                if ( (v1371 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1371 & 1) != 0 )
                {
                  v1372 = *(unsigned int *)(v22 + 2676);
                  v1373 = *(_QWORD *)(v22 + 2104);
                  v1348 = *(_QWORD *)(v22 + 2680);
                  v1374 = (_QWORD *)(v1372 + v22);
                  v1358 = v1372 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1372) >> 3);
                  while ( v1374 != (_QWORD *)v1358 )
                  {
                    *v1374 ^= v1348;
                    v1348 = ((v1373 ^ *v1374++) + __ROR8__(v1348, v1348 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1348 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1375 = *(_DWORD *)(v22 + 2052);
                    v1376 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1376 = v22;
                    *(_DWORD *)(v1376 + 16) = v1375;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1348 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1348, 256LL);
                  }
                  goto LABEL_2039;
                }
              }
              if ( v1361 != *(_QWORD *)(v22 + 1240) )
              {
                v1377 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v22 + 984))(
                                              v1361,
                                              1LL,
                                              v1348,
                                              v1358);
                v1378 = v1377;
                if ( v1377 )
                {
                  v1379 = *v1377;
                  v1380 = v1377;
                  if ( *v1377 )
                  {
                    v1381 = v1986;
                    v1382 = v1995;
                    v1994 = (unsigned __int64)v1377;
                    do
                    {
                      *v1378 = v1379 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v22 + 496))();
                      v1383 = v1996;
                      v1384 = v1378[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1384 == v1381 )
                        v1383 = v1336;
                      v1385 = v1378[1] >> 6;
                      LOBYTE(v1385) = v1385 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v1385, v1383) )
                      {
                        if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                        {
                          v1386 = *(_QWORD **)(v22 + 2760);
                          v1387 = 48;
                          v1388 = 6LL;
                          do
                          {
                            v1387 -= 8;
                            *v1386 = *(_QWORD *)v1334;
                            v1334 += 8;
                            ++v1386;
                            --v1388;
                          }
                          while ( v1388 );
                          if ( v1387 )
                          {
                            do
                            {
                              v1389 = *v1334++;
                              *(_BYTE *)v1386 = v1389;
                              v1386 = (_QWORD *)((char *)v1386 + 1);
                              --v1387;
                            }
                            while ( v1387 );
                            v1381 = v1986;
                          }
                          v1334 = *(char **)(v22 + 2760);
                        }
                        *((_QWORD *)v1334 + 3) = v1384;
                        *((_QWORD *)v1334 + 4) = *v1378;
                        v1334[40] = ((unsigned __int64)*((unsigned int *)v1378 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v22 + 2328) )
                        {
                          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2344) = v1334 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2352) = *(int *)v1334;
                          *(_QWORD *)(v22 + 2360) = v1382;
                          *(_DWORD *)(v22 + 2328) = 1;
                          v1390 = *(_DWORD *)(v22 + 2520);
                          if ( (v1390 & 0x20000000) == 0
                            && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0
                            && (v1390 & 1) != 0 )
                          {
                            v1391 = *(unsigned int *)(v22 + 2676);
                            v1392 = *(_QWORD *)(v22 + 2104);
                            v1393 = *(_QWORD *)(v22 + 2680);
                            v1394 = (_QWORD *)(v1391 + v22);
                            v1395 = v1391
                                  + v22
                                  + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1391) >> 3);
                            while ( v1394 != (_QWORD *)v1395 )
                            {
                              *v1394 ^= v1393;
                              v1393 = ((v1392 ^ *v1394++) + __ROR8__(v1393, v1393 & 0x3F)) ^ 0xEFA;
                            }
                            *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                            if ( v1393 != *(_QWORD *)(v22 + 2688) )
                            {
                              v1396 = *(_DWORD *)(v22 + 2052);
                              v1397 = *(_QWORD *)(v22 + 1416);
                              *(_QWORD *)v1397 = v22;
                              *(_DWORD *)(v1397 + 16) = v1396;
                              if ( !*(_DWORD *)(v22 + 2328) )
                                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1393 ^ *(_QWORD *)(v22 + 2688);
                              sub_140BDA384(v22, 0LL, v1393, 256LL);
                            }
                          }
                        }
                      }
                      v1378 += 6;
                      v1379 = *v1378;
                    }
                    while ( *v1378 );
                    goto LABEL_2152;
                  }
                  goto LABEL_2153;
                }
              }
              goto LABEL_2154;
            }
            goto LABEL_2155;
          }
          if ( !(*(unsigned int (__fastcall **)(__int64))(v22 + 968))(v1457) )
            goto LABEL_2155;
          v1398 = v44;
          if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v1361) < 0 )
            goto LABEL_2155;
          v1399 = (*(unsigned __int8 (__fastcall **)(__int64))(v22 + 992))(v1361);
          v1400 = (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *))(v22 + 1000))(v1361, &v1997);
          v1986 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v1361);
          if ( (_BYTE)v1399 == 97
            || *(_DWORD *)(v22 + 2328)
            || (*(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = (unsigned int)v1399 ^ 0x61LL, *(_DWORD *)(v22 + 2328)) )
          {
LABEL_2082:
            v1401 = (int *)v1984;
          }
          else
          {
            v1401 = (int *)v1984;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v1401 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *v1401;
            *(_QWORD *)(v22 + 2360) = v1361;
            *(_DWORD *)(v22 + 2328) = 1;
            v1402 = *(_DWORD *)(v22 + 2520);
            if ( (v1402 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1402 & 1) != 0 )
            {
              v1403 = *(unsigned int *)(v22 + 2676);
              v1404 = *(_QWORD *)(v22 + 2104);
              v1405 = *(_QWORD *)(v22 + 2680);
              v1406 = (_QWORD *)(v1403 + v22);
              v1407 = v1403 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1403) >> 3);
              while ( v1406 != (_QWORD *)v1407 )
              {
                *v1406 ^= v1405;
                v1405 = ((v1404 ^ *v1406++) + __ROR8__(v1405, v1405 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1405 != *(_QWORD *)(v22 + 2688) )
              {
                v1408 = *(_DWORD *)(v22 + 2052);
                v1409 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1409 = v22;
                *(_DWORD *)(v1409 + 16) = v1408;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1405 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1405, 256LL);
              }
              goto LABEL_2082;
            }
          }
          v1410 = 0;
          v1411 = 0;
          if ( (v1399 & 7) == 1 )
          {
            v1410 = 48;
            goto LABEL_2099;
          }
          if ( (v1399 & 7) == 2 )
          {
            v1410 = 16;
            v1411 = 16;
            goto LABEL_2099;
          }
          if ( (v1399 & 7) == 0 || *(_DWORD *)(v22 + 2328) )
          {
LABEL_2099:
            v1348 = 1LL;
          }
          else
          {
            v1348 = 1LL;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v1401 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *v1401;
            *(_QWORD *)(v22 + 2360) = v1995;
            *(_DWORD *)(v22 + 2328) = 1;
            v1412 = *(_DWORD *)(v22 + 2520);
            if ( (v1412 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1412 & 1) != 0 )
            {
              v1413 = *(unsigned int *)(v22 + 2676);
              v1414 = *(_QWORD *)(v22 + 2104);
              v1415 = *(_QWORD *)(v22 + 2680);
              v1416 = (_QWORD *)(v1413 + v22);
              v1417 = v1413 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1413) >> 3);
              while ( v1416 != (_QWORD *)v1417 )
              {
                *v1416 ^= v1415;
                v1415 = ((v1414 ^ *v1416++) + __ROR8__(v1415, v1415 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1415 != *(_QWORD *)(v22 + 2688) )
              {
                v1418 = *(_DWORD *)(v22 + 2052);
                v1419 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1419 = v22;
                *(_DWORD *)(v1419 + 16) = v1418;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1415 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1415, 256LL);
              }
              goto LABEL_2099;
            }
          }
          v1420 = *(_QWORD *)(v22 + 1472);
          v1358 = 0xA3A03F5891C8B4E8uLL;
          v1421 = (int *)v1984;
          v1422 = v1399 >> 4;
          v55 = (*(_BYTE *)(v1420 + 2 * v1422) | (unsigned __int8)v1410) == (_BYTE)v1400;
          v1361 = (__int64)v1995;
          if ( !v55 && !*(_DWORD *)(v22 + 2328) )
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v1421 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *v1421;
            *(_QWORD *)(v22 + 2360) = v1361;
            *(_DWORD *)(v22 + 2328) = 1;
            v1423 = *(_DWORD *)(v22 + 2520);
            if ( (v1423 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1423 & 1) != 0 )
            {
              v1424 = *(unsigned int *)(v22 + 2676);
              v1425 = *(_QWORD *)(v22 + 2104);
              v1348 = *(_QWORD *)(v22 + 2680);
              v1426 = (_QWORD *)(v1424 + v22);
              v1427 = v1424 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1424) >> 3);
              while ( v1426 != (_QWORD *)v1427 )
              {
                *v1426 ^= v1348;
                v1348 = ((v1425 ^ *v1426++) + __ROR8__(v1348, v1348 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1348 != *(_QWORD *)(v22 + 2688) )
              {
                v1428 = *(_DWORD *)(v22 + 2052);
                v1429 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1429 = v22;
                *(_DWORD *)(v1429 + 16) = v1428;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1348 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1348, 256LL);
              }
              v1421 = (int *)v1984;
              v1358 = 0xA3A03F5891C8B4E8uLL;
            }
          }
          if ( (*(_BYTE *)(v1420 + 2 * v1422 + 1) | (unsigned __int8)v1411) == v1997 || *(_DWORD *)(v22 + 2328) )
          {
LABEL_2125:
            v1370 = 1LL;
          }
          else
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v1421 - 0x4C48B4211BBACBEBLL;
            v1430 = *v1421;
            v1370 = 1LL;
            *(_QWORD *)(v22 + 2352) = v1430;
            *(_QWORD *)(v22 + 2360) = v1361;
            *(_DWORD *)(v22 + 2328) = 1;
            v1431 = *(_DWORD *)(v22 + 2520);
            if ( (v1431 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1431 & 1) != 0 )
            {
              v1432 = *(unsigned int *)(v22 + 2676);
              v1433 = *(_QWORD *)(v22 + 2104);
              v1348 = *(_QWORD *)(v22 + 2680);
              v1434 = (_QWORD *)(v1432 + v22);
              v1358 = v1432 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1432) >> 3);
              while ( v1434 != (_QWORD *)v1358 )
              {
                *v1434 ^= v1348;
                v1348 = ((v1433 ^ *v1434++) + __ROR8__(v1348, v1348 & 0x3F)) ^ 0xEFA;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1348 != *(_QWORD *)(v22 + 2688) )
              {
                v1435 = *(_DWORD *)(v22 + 2052);
                v1436 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1436 = v22;
                *(_DWORD *)(v1436 + 16) = v1435;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1348 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1348, 256LL);
              }
              goto LABEL_2125;
            }
          }
          if ( v1361 != *(_QWORD *)(v22 + 1240) )
          {
            v1437 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v22 + 984))(
                                          v1361,
                                          1LL,
                                          v1348,
                                          v1358);
            v1438 = v1437;
            if ( v1437 )
            {
              v1439 = *v1437;
              v1380 = v1437;
              if ( *v1437 )
              {
                v1440 = v1986;
                v1441 = v1995;
                v1994 = (unsigned __int64)v1437;
                do
                {
                  *v1438 = v1439 & 0xFFFFFFFFFFFFFFFCuLL;
                  (*(void (**)(void))(v22 + 496))();
                  v1442 = v1997;
                  v1443 = v1438[1] & 0xFFFFFFFFFFFF0000uLL;
                  if ( v1443 == v1440 )
                    v1442 = v1400;
                  v1444 = v1438[1] >> 6;
                  LOBYTE(v1444) = v1444 & 0xF;
                  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v1444, v1442) )
                  {
                    if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                    {
                      v1445 = *(_QWORD **)(v22 + 2760);
                      v1446 = 48;
                      v1447 = 6LL;
                      do
                      {
                        v1446 -= 8;
                        *v1445 = *(_QWORD *)v1398;
                        v1398 += 8;
                        ++v1445;
                        --v1447;
                      }
                      while ( v1447 );
                      if ( v1446 )
                      {
                        do
                        {
                          v1448 = *v1398++;
                          *(_BYTE *)v1445 = v1448;
                          v1445 = (_QWORD *)((char *)v1445 + 1);
                          --v1446;
                        }
                        while ( v1446 );
                        v1440 = v1986;
                      }
                      v1398 = *(char **)(v22 + 2760);
                    }
                    *((_QWORD *)v1398 + 3) = v1443;
                    *((_QWORD *)v1398 + 4) = *v1438;
                    v1398[40] = ((unsigned __int64)*((unsigned int *)v1438 + 2) >> 6) & 0xF;
                    if ( !*(_DWORD *)(v22 + 2328) )
                    {
                      *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2344) = v1398 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2352) = *(int *)v1398;
                      *(_QWORD *)(v22 + 2360) = v1441;
                      *(_DWORD *)(v22 + 2328) = 1;
                      v1449 = *(_DWORD *)(v22 + 2520);
                      if ( (v1449 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1449 & 1) != 0 )
                      {
                        v1450 = *(unsigned int *)(v22 + 2676);
                        v1451 = *(_QWORD *)(v22 + 2104);
                        v1452 = *(_QWORD *)(v22 + 2680);
                        v1453 = (_QWORD *)(v1450 + v22);
                        v1454 = v1450
                              + v22
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1450) >> 3);
                        while ( v1453 != (_QWORD *)v1454 )
                        {
                          *v1453 ^= v1452;
                          v1452 = ((v1451 ^ *v1453++) + __ROR8__(v1452, v1452 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                        if ( v1452 != *(_QWORD *)(v22 + 2688) )
                        {
                          v1455 = *(_DWORD *)(v22 + 2052);
                          v1456 = *(_QWORD *)(v22 + 1416);
                          *(_QWORD *)v1456 = v22;
                          *(_DWORD *)(v1456 + 16) = v1455;
                          if ( !*(_DWORD *)(v22 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1452 ^ *(_QWORD *)(v22 + 2688);
                          sub_140BDA384(v22, 0LL, v1452, 256LL);
                        }
                      }
                    }
                  }
                  v1438 += 6;
                  v1439 = *v1438;
                }
                while ( *v1438 );
LABEL_2152:
                v1380 = (_QWORD *)v1994;
                v1361 = (__int64)v1995;
              }
LABEL_2153:
              (*(void (__fastcall **)(_QWORD *))(v22 + 264))(v1380);
            }
          }
LABEL_2154:
          (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(v22 + 936))(v1361, v1370, v1348, v1358);
          v44 = v1984;
          *(_DWORD *)(v22 + 2120) += 0x8000;
          v40 = 1;
          v1332 = v1985;
          v1327 = v1991;
LABEL_2155:
          ++v1332;
          v1333 = v1361;
          v1985 = v1332;
          continue;
        }
      }
      if ( v66 == 41 || v66 == 42 )
        goto LABEL_1760;
      if ( v66 == 43 )
      {
LABEL_2692:
        if ( !*(_DWORD *)(v22 + 2116) )
        {
          v1776 = (_QWORD *)*((_QWORD *)v44 + 1);
          v1777 = *((unsigned int *)v44 + 4);
          v1778 = v1776;
          *(_DWORD *)(v22 + 2120) += v1777;
          v1779 = (const char *)v1776;
          v1780 = *(_DWORD *)(v22 + 2100);
          v1781 = *(_QWORD *)(v22 + 2104);
          if ( v1776 < (_QWORD *)((char *)v1776 + v1777) )
          {
            do
            {
              _mm_prefetch(v1779, 0);
              v1779 += 64;
            }
            while ( v1779 < (const char *)v1776 + v1777 );
          }
          v1782 = *(_QWORD *)(v22 + 2104);
          v1783 = (unsigned int)v1777 >> 7;
          if ( (unsigned int)v1777 >> 7 )
          {
            do
            {
              v1784 = 8LL;
              do
              {
                v1785 = v1778[1] ^ __ROL8__(*v1778 ^ v1782, v1780);
                v1778 += 2;
                v1782 = __ROL8__(v1785, v1780);
                --v1784;
              }
              while ( v1784 );
              v1786 = (__ROL8__(v1781 ^ ((char *)v1778 - (char *)v1776), 17) ^ v1781 ^ (unsigned __int64)((char *)v1778 - (char *)v1776))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2107 = *((_QWORD *)&v1786 + 1);
              v1780 = ((unsigned __int8)v1786 ^ (unsigned __int8)(BYTE8(v1786) ^ v1780)) & 0x3F;
              if ( !v1780 )
                LOBYTE(v1780) = 1;
              --v1783;
            }
            while ( v1783 );
            v22 = (unsigned __int64)v1989;
          }
          v1787 = v1777 & 0x7F;
          if ( v1787 >= 8 )
          {
            v1788 = (unsigned __int64)v1787 >> 3;
            do
            {
              v1782 = __ROL8__(*v1778++ ^ v1782, v1780);
              v1787 -= 8;
              --v1788;
            }
            while ( v1788 );
          }
          for ( ; v1787; --v1787 )
          {
            v1789 = *(unsigned __int8 *)v1778;
            v1778 = (_QWORD *)((char *)v1778 + 1);
            v1782 = __ROL8__(v1789 ^ v1782, v1780);
          }
          for ( k = v1782; ; LODWORD(v1782) = k ^ v1782 )
          {
            k >>= 31;
            if ( !k )
              break;
          }
          v1791 = v1782 & 0x7FFFFFFF;
          v1792 = 0;
          if ( v1791 != *((_DWORD *)v44 + 5) )
          {
            if ( !*(_DWORD *)v44 )
              v1792 = *((_DWORD *)v44 + 6) != 0;
            v1793 = *((_QWORD *)v44 + 1);
            if ( *((_DWORD *)v44 + 4) )
            {
              v1794 = 64LL;
              if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
              {
                v1795 = KeGetCurrentIrql();
                v1796 = v1793 & 0xFFFFFFFFFFFFF000uLL;
                v1797 = (v1793 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                v1798 = (v1793 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v1799 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                              v1796,
                              0LL,
                              v1794,
                              v1778);
                    if ( v1799 == -1073741267 )
                      break;
                    if ( v1799 < 0 )
                    {
LABEL_2724:
                      __writecr8(v1795);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_2725;
                    }
LABEL_2722:
                    v1796 += 4096LL;
                    v1798 += 4096LL;
                    if ( v1798 == v1797 )
                    {
                      __writecr8(v1795);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_2738;
                    }
                  }
                  if ( v1792 )
                    goto LABEL_2724;
                  if ( v1795 > 1u )
                    goto LABEL_2722;
                  __writecr8(v1795);
                }
              }
            }
LABEL_2725:
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1791 ^ (unsigned __int64)*((unsigned int *)v44 + 5);
            v1800 = *((_QWORD *)v44 + 1);
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v1800;
              *(_DWORD *)(v22 + 2328) = 1;
              v1801 = *(_DWORD *)(v22 + 2520);
              if ( (v1801 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1801 & 1) != 0 )
              {
                v1802 = *(unsigned int *)(v22 + 2676);
                v1803 = *(_QWORD *)(v22 + 2104);
                v1804 = *(_QWORD *)(v22 + 2680);
                v1805 = (_QWORD *)(v1802 + v22);
                v1806 = v1802 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1802) >> 3);
                while ( v1805 != (_QWORD *)v1806 )
                {
                  *v1805 ^= v1804;
                  v1804 = ((v1803 ^ *v1805++) + __ROR8__(v1804, v1804 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1804 != *(_QWORD *)(v22 + 2688) )
                {
                  v1807 = *(_DWORD *)(v22 + 2052);
                  v1808 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v1808 = v22;
                  *(_DWORD *)(v1808 + 16) = v1807;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1804 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v1804, 256LL);
                }
              }
            }
          }
LABEL_2738:
          v66 = v1992;
        }
        v1809 = *(unsigned int *)(v22 + 2116);
        v1810 = *((unsigned int *)v44 + 4);
        v1994 = *((_QWORD *)v44 + 1);
        v1811 = (unsigned int *)(v1994 + 12 * v1809);
        v1991 = (unsigned __int64)v1811;
        v1812 = (int *)&v44[4 * v1809 + 48];
        v1987 = (__int64)v1812;
        v1813 = (unsigned int *)(v1994 + 12 * (v1810 / 0xC));
        v1986 = (__int64)v1813;
        if ( v1811 == v1813 )
          goto LABEL_2831;
LABEL_2740:
        if ( *v1812 < 0 )
          goto LABEL_2811;
        v1814 = v1811[1] - *v1811;
        v1815 = *((_QWORD *)v1984 + 4) + *v1811;
        if ( v66 != 43 )
        {
          *(_DWORD *)(v22 + 2120) += v1814;
          v1816 = v1815;
          v1817 = *(_DWORD *)(v22 + 2100);
          v1818 = (const char *)v1815;
          v1819 = *(_QWORD *)(v22 + 2104);
          v1820 = v1815 + v1814;
          if ( v1815 < v1820 )
          {
            do
            {
              _mm_prefetch(v1818, 0);
              v1818 += 64;
            }
            while ( (unsigned __int64)v1818 < v1820 );
          }
          v1821 = *(_QWORD *)(v22 + 2104);
          v1822 = v1814 >> 7;
          if ( v1814 >> 7 )
          {
            do
            {
              v1823 = 8LL;
              do
              {
                v1824 = *(_QWORD *)(v1816 + 8) ^ __ROL8__(*(_QWORD *)v1816 ^ v1821, v1817);
                v1816 += 16LL;
                v1821 = __ROL8__(v1824, v1817);
                --v1823;
              }
              while ( v1823 );
              v1825 = (__ROL8__(v1819 ^ (v1816 - v1815), 17) ^ v1819 ^ (v1816 - v1815))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2116 = *((_QWORD *)&v1825 + 1);
              v1817 = ((unsigned __int8)(v1825 ^ BYTE8(v1825)) ^ (unsigned __int8)v1817) & 0x3F;
              if ( !v1817 )
                LOBYTE(v1817) = 1;
              --v1822;
            }
            while ( v1822 );
            v22 = (unsigned __int64)v1989;
            v1812 = (int *)v1987;
            v1813 = (unsigned int *)v1986;
          }
          v1826 = 1LL;
          v1827 = v1814 & 0x7F;
          if ( v1827 >= 8 )
          {
            v1828 = (unsigned __int64)(v1814 & 0x7F) >> 3;
            do
            {
              v1821 = __ROL8__(*(_QWORD *)v1816 ^ v1821, v1817);
              v1816 += 8LL;
              v1827 -= 8;
              --v1828;
            }
            while ( v1828 );
          }
          if ( v1827 )
          {
            do
            {
              v1829 = *(unsigned __int8 *)v1816++;
              v1821 = __ROL8__(v1829 ^ v1821, v1817);
              --v1827;
            }
            while ( v1827 );
            v1812 = (int *)v1987;
          }
          for ( m = v1821; ; LODWORD(v1821) = m ^ v1821 )
          {
            m >>= 31;
            if ( !m )
              break;
          }
          v1831 = v1821 & 0x7FFFFFFF;
          goto LABEL_2799;
        }
        v1831 = sub_140BDA680(v22, *((_QWORD *)v1984 + 4) + *v1811, v1814);
        *(_DWORD *)(v22 + 2120) += 8 * v1814;
        if ( (*(_DWORD *)(v22 + 2524) & 0x800) == 0 )
          goto LABEL_2799;
        v1832 = *(_BYTE *)(v1815 - 1);
        if ( *(_BYTE *)(v1815 - 6) == 76
          && *(_BYTE *)(v1815 - 5) == 0x87
          && !*(_BYTE *)(v1815 - 4)
          && *(_BYTE *)(v1815 - 3) == 0x98
          && *(_BYTE *)(v1815 - 2) == 0xC3
          && (v1832 == -112 || v1832 == -15) )
        {
          v1833 = *(volatile signed __int32 **)(v22 + 1240);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1833, (*(_DWORD *)(v22 + 2520) >> 9) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
          CurrentPrcb = *(struct _KPRCB **)(v22 + 2304);
          v1835 = 38LL;
          v1836 = 304;
          v1837 = CurrentPrcb;
          v1826 = 1LL;
          do
          {
            *(_QWORD *)&v1837->MxCsr = 0LL;
            v1836 -= 8;
            v1837 = (struct _KPRCB *)((char *)v1837 + 8);
            --v1835;
          }
          while ( v1835 );
          if ( v1836 )
          {
            v1835 = 0xFFFFFFFFLL;
            do
            {
              LOBYTE(v1837->MxCsr) = 0;
              v1837 = (struct _KPRCB *)((char *)v1837 + 1);
              --v1836;
            }
            while ( v1836 );
          }
          *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(v22 + 2152);
          *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(v22 + 2168);
          *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v22 + 2184);
          v2050 = 303;
          v2051 = CurrentPrcb;
          LOWORD(CurrentPrcb->NextThread) = v22 + 2220;
          v1838 = (v22 + 2220) >> 16;
          v2108 = v22 + 2220;
          HIWORD(CurrentPrcb->NextThread) = v1838;
          LODWORD(CurrentPrcb->IdleThread) = (v22 + 2220) >> 32;
          __sidt(v2070);
          __lidt(&v2050);
          *(_BYTE *)(v1815 - 1) = -15;
          if ( *(_BYTE *)(v1815 - 1) != 0xF1 )
            goto LABEL_2783;
          if ( (*(_DWORD *)(v22 + 2524) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v1838 = v22 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(v22 + 1208) = v22 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(v22 + 1216) = CurrentPrcb;
            **(_QWORD **)(v22 + 1224) = v1815;
            **(_QWORD **)(v22 + 1232) = 275LL;
          }
          ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1815 - 1))(
            v1838,
            CurrentPrcb,
            v1835,
            1LL);
          if ( (*(_DWORD *)(v22 + 2524) & 0x20000) == 0 )
          {
            **(_QWORD **)(v22 + 1208) = 0xA3A03F5891C8B4E8uLL;
            **(_QWORD **)(v22 + 1216) = 0LL;
            **(_QWORD **)(v22 + 1224) = 0LL;
            **(_QWORD **)(v22 + 1232) = 0LL;
          }
          v1826 = 1LL;
          if ( *(_BYTE *)(v1815 - 1) == 0xF1 )
          {
            *(_BYTE *)(v1815 - 1) = -112;
            v1816 = *(_BYTE *)(v1815 - 1) == 0x90;
          }
          else
          {
LABEL_2783:
            v1816 = 0LL;
          }
          __lidt(v2070);
          _InterlockedAnd(*(volatile signed __int32 **)(v22 + 1240), ~(1 << ((*(_DWORD *)(v22 + 2520) >> 9) & 0x1F)));
          _enable();
          if ( (_DWORD)v1816 )
          {
LABEL_2799:
            if ( v1831 == (*v1812 & 0x7FFFFFFF) )
              goto LABEL_2810;
            v1846 = v1814;
            if ( !v1814 || (*(_DWORD *)(v22 + 2524) & 0x40) == 0 )
              goto LABEL_2817;
            v1847 = KeGetCurrentIrql();
            v1848 = v1815 & 0xFFFFFFFFFFFFF000uLL;
            v1849 = (v1846 + v1815 - 1) | 0xFFF;
            v1850 = (v1815 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_2803:
            __writecr8(2uLL);
            while ( 1 )
            {
              v1851 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(v22 + 1128))(
                        v1848,
                        0LL,
                        v1816,
                        v1826);
              if ( v1851 == -1073741267 )
              {
                if ( v1847 <= 1u )
                {
                  __writecr8(v1847);
                  goto LABEL_2803;
                }
              }
              else if ( v1851 < 0 )
              {
                __writecr8(v1847);
                v1811 = (unsigned int *)v1991;
                v1812 = (int *)v1987;
                v1813 = (unsigned int *)v1986;
LABEL_2817:
                v1853 = (unsigned int)*v1812;
                LODWORD(v1853) = v1853 & 0x7FFFFFFF;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1853 ^ v1831;
                i9 = 0;
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  v1854 = (int *)v1984;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = (char *)v1854 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *v1854;
                  *(_QWORD *)(v22 + 2360) = v1815;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v1855 = *(_DWORD *)(v22 + 2520);
                  if ( (v1855 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1855 & 1) != 0 )
                  {
                    v1856 = *(unsigned int *)(v22 + 2676);
                    v1857 = *(_QWORD *)(v22 + 2104);
                    v1858 = *(_QWORD *)(v22 + 2680);
                    v1859 = (_QWORD *)(v1856 + v22);
                    v1860 = v1856 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1856) >> 3);
                    while ( v1859 != (_QWORD *)v1860 )
                    {
                      *v1859 ^= v1858;
                      v1858 = ((v1857 ^ *v1859++) + __ROR8__(v1858, v1858 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v1858 != *(_QWORD *)(v22 + 2688) )
                    {
                      v1861 = *(_DWORD *)(v22 + 2052);
                      v1862 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v1862 = v22;
                      *(_DWORD *)(v1862 + 16) = v1861;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1858 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v1858, 256LL);
                    }
                  }
                }
                goto LABEL_2811;
              }
              v1848 += 4096LL;
              v1850 += 4096LL;
              if ( v1850 == v1849 )
              {
                __writecr8(v1847);
                v1811 = (unsigned int *)v1991;
                v1812 = (int *)v1987;
                v1813 = (unsigned int *)v1986;
LABEL_2810:
                i9 = 0;
LABEL_2811:
                ++v1812;
                v1811 += 3;
                v1987 = (__int64)v1812;
                v1991 = (unsigned __int64)v1811;
                v1852 = v1811 == v1813;
                if ( v1811 >= v1813 )
                {
LABEL_2814:
                  if ( !v1852 )
                  {
                    v34 = (__int64)((__int64)v1811 - v1994) / 12;
                    goto LABEL_2877;
                  }
                  v44 = v1984;
LABEL_2831:
                  v1863 = *(_QWORD *)(v22 + 1336);
                  v1864 = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v22 + 352))(v1863);
                  v1865 = **(unsigned int ***)(v22 + 1568);
                  v1866 = v1865 + 4;
                  v1867 = *((_BYTE *)v1865 + 12);
                  v1868 = (unsigned __int64)&v1865[6 * *v1865 + 4];
                  do
                  {
                    v1869 = 24LL;
                    v1870 = v44 + 24;
                    v1871 = v1866;
                    do
                    {
                      v1872 = *(_QWORD *)v1871;
                      v1871 += 2;
                      v1873 = *(_QWORD *)v1870;
                      v1870 += 8;
                      if ( v1872 != v1873 )
                        goto LABEL_2839;
                      v1869 = (unsigned int)(v1869 - 8);
                    }
                    while ( (unsigned int)v1869 >= 8 );
                    if ( !(_DWORD)v1869 )
                      break;
                    while ( 1 )
                    {
                      v1874 = *(_BYTE *)v1871;
                      v1871 = (unsigned int *)((char *)v1871 + 1);
                      v1875 = *v1870++;
                      if ( v1874 != v1875 )
                        break;
                      v55 = (_DWORD)v1869 == 1;
                      v1869 = (unsigned int)(v1869 - 1);
                      if ( v55 )
                        goto LABEL_2840;
                    }
LABEL_2839:
                    v1866 += 6;
                  }
                  while ( (unsigned __int64)v1866 < v1868 );
LABEL_2840:
                  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v22 + 416))(
                    *(_QWORD *)(v22 + 1336),
                    v1869,
                    v1870,
                    v1871);
                  __writecr8(v1864);
                  if ( !v1867 )
                    goto LABEL_3013;
                  if ( (*(_DWORD *)(v22 + 2524) & 0x10) != 0 && !*(_DWORD *)(v22 + 2328) )
                  {
                    v1876 = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    if ( !v44 )
                      v1876 = 0LL;
                    *(_QWORD *)(v22 + 2344) = v1876;
                    if ( v44 )
                      v1877 = *(int *)v44;
                    else
                      v1877 = 0LL;
                    *(_QWORD *)(v22 + 2352) = v1877;
                    *(_QWORD *)(v22 + 2360) = 1LL;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1878 = *(_DWORD *)(v22 + 2520);
                    if ( (v1878 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1878 & 1) != 0 )
                    {
                      v1879 = *(unsigned int *)(v22 + 2676);
                      v1880 = *(_QWORD *)(v22 + 2104);
                      v1881 = *(_QWORD *)(v22 + 2680);
                      v1882 = (_QWORD *)(v1879 + v22);
                      v1883 = v1879 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1879) >> 3);
                      while ( v1882 != (_QWORD *)v1883 )
                      {
                        *v1882 ^= v1881;
                        v1881 = ((v1880 ^ *v1882++) + __ROR8__(v1881, v1881 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v1881 != *(_QWORD *)(v22 + 2688) )
                      {
                        v1884 = *(_DWORD *)(v22 + 2052);
                        v1885 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v1885 = v22;
                        *(_DWORD *)(v1885 + 16) = v1884;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1881 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v1881, 256LL);
                      }
                    }
                  }
                  if ( *((_QWORD *)v44 + 3) != 1LL )
                  {
LABEL_3013:
                    if ( v1866 == (unsigned int *)v1868 && !*(_DWORD *)(v22 + 2328) )
                    {
                      v1886 = v44 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                      if ( !v44 )
                        v1886 = 0LL;
                      *(_QWORD *)(v22 + 2344) = v1886;
                      if ( v44 )
                        v1887 = *(int *)v44;
                      else
                        v1887 = 0LL;
                      *(_QWORD *)(v22 + 2352) = v1887;
                      *(_QWORD *)(v22 + 2360) = v1866;
                      *(_DWORD *)(v22 + 2328) = 1;
                      v1888 = *(_DWORD *)(v22 + 2520);
                      if ( (v1888 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1888 & 1) != 0 )
                      {
                        v1889 = *(unsigned int *)(v22 + 2676);
                        v1890 = *(_QWORD *)(v22 + 2104);
                        v1891 = *(_QWORD *)(v22 + 2680);
                        v1892 = (_QWORD *)(v1889 + v22);
                        v1893 = v1889
                              + v22
                              + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1889) >> 3);
                        while ( v1892 != (_QWORD *)v1893 )
                        {
                          *v1892 ^= v1891;
                          v1891 = ((v1890 ^ *v1892++) + __ROR8__(v1891, v1891 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                        if ( v1891 != *(_QWORD *)(v22 + 2688) )
                        {
                          v1894 = *(_DWORD *)(v22 + 2052);
                          v1895 = *(_QWORD *)(v22 + 1416);
                          *(_QWORD *)v1895 = v22;
                          *(_DWORD *)(v1895 + 16) = v1894;
                          if ( !*(_DWORD *)(v22 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1891 ^ *(_QWORD *)(v22 + 2688);
                          sub_140BDA384(v22, 0LL, v1891, 256LL);
                        }
                      }
                    }
                  }
                  v34 = 0LL;
LABEL_2877:
                  *(_DWORD *)(v22 + 2116) = v34;
                  goto LABEL_237;
                }
                v66 = v1992;
                if ( *(_DWORD *)(v22 + 2120) >= *(_DWORD *)(v22 + 2124) )
                {
                  v1852 = v1811 == v1813;
                  goto LABEL_2814;
                }
                goto LABEL_2740;
              }
            }
          }
        }
        else
        {
          v1826 = 1LL;
        }
        if ( !*(_DWORD *)(v22 + 2328) )
        {
          v1839 = (int *)v1984;
          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2344) = (char *)v1839 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2352) = *v1839;
          *(_QWORD *)(v22 + 2360) = v1815 - 6;
          *(_DWORD *)(v22 + 2328) = 1;
          v1840 = *(_DWORD *)(v22 + 2520);
          if ( (v1840 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1840 & 1) != 0 )
          {
            v1841 = *(unsigned int *)(v22 + 2676);
            v1842 = *(_QWORD *)(v22 + 2104);
            v1816 = *(_QWORD *)(v22 + 2680);
            v1843 = (_QWORD *)(v1841 + v22);
            v1826 = v1841 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1841) >> 3);
            while ( v1843 != (_QWORD *)v1826 )
            {
              *v1843 ^= v1816;
              v1816 = ((v1842 ^ *v1843++) + __ROR8__(v1816, v1816 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v22 + 2524) &= ~0x200000u;
            if ( v1816 != *(_QWORD *)(v22 + 2688) )
            {
              v1844 = *(_DWORD *)(v22 + 2052);
              v1845 = *(_QWORD *)(v22 + 1416);
              *(_QWORD *)v1845 = v22;
              *(_DWORD *)(v1845 + 16) = v1844;
              if ( !*(_DWORD *)(v22 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1816 ^ *(_QWORD *)(v22 + 2688);
              sub_140BDA384(v22, 0LL, v1816, 256LL);
            }
          }
        }
        goto LABEL_2799;
      }
      if ( v66 != 44 )
      {
        if ( v66 == 46 )
        {
          if ( (*(_DWORD *)(v22 + 2128) & 1) == 0 )
          {
            v1695 = 0;
            v1696 = *(_QWORD *)(v22 + 1344);
            (*(void (__fastcall **)(_QWORD, unsigned __int64))(v22 + 392))((unsigned int)(v66 - 46), v34);
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 || (v1697 = *(_DWORD *)(v22 + 2424), v1697 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312))(*(_QWORD *)(v22 + 2632), 0LL);
              v1698 = 0x80;
            }
            else
            {
              v1698 = 1 << v1697;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 328))(v1696, 0LL);
            if ( v1698 == (char)0x80 )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 2632), 0LL);
            }
            else
            {
              v1699 = *(volatile signed __int8 ***)(v22 + 1304);
              v1700 = *v1699;
              if ( *v1699 != (volatile signed __int8 *)v1699 )
              {
                v1701 = ~v1698;
                do
                {
                  _InterlockedAnd8(&v1700[*(_QWORD *)(v22 + 1736) - *(_QWORD *)(v22 + 1760)], v1701);
                  v1700 = *(volatile signed __int8 **)v1700;
                  ++v1695;
                }
                while ( v1700 != (volatile signed __int8 *)v1699 );
              }
            }
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 336))(*(_QWORD *)(v22 + 1344), 0LL);
            (*(void (**)(void))(v22 + 400))();
            *(_DWORD *)(v22 + 2120) += v1695 << 7;
          }
          goto LABEL_238;
        }
        if ( v66 == 47 )
        {
          v2005 = *(_QWORD *)(*(_QWORD *)(v22 + 1720)
                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1624))
                            + *(_QWORD *)(v22 + 1688));
          v1683 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 1168))(v2005, v34);
          if ( v1683 == 0xFFFFFFFFLL )
          {
            v2005 = 0LL;
            v1684 = *(_QWORD *)(v22 + 2512);
            if ( !v1684
              || ((*(int (__fastcall **)(__int64, __int64 *))(v22 + 1152))(v1684, &v2005) >= 0
                ? (v1685 = v2005)
                : (v1685 = 0LL, v2005 = 0LL),
                  !v1685) )
            {
              v2005 = (*(__int64 (__fastcall **)(_QWORD))(v22 + 960))(0LL);
            }
            *(_QWORD *)(v22 + 2512) = 0LL;
            v1686 = 0;
            if ( !v2005 )
              goto LABEL_2532;
            while ( 1 )
            {
              ++v1686;
              if ( (*(int (**)(void))(v22 + 928))() >= 0 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(v22 + 1080))(v2005, v2155);
                v1683 = (*(__int64 (**)(void))(v22 + 1168))();
                (*(void (__fastcall **)(_BYTE *))(v22 + 1088))(v2155);
                (*(void (__fastcall **)(__int64))(v22 + 936))(v2005);
                if ( v1683 != 0xFFFFFFFFLL || v1686 > 0x100 )
                  break;
              }
              v2005 = (*(__int64 (__fastcall **)(__int64))(v22 + 960))(v2005);
              if ( !v2005 )
                goto LABEL_2532;
            }
            *(_QWORD *)(v22 + 2512) = (*(__int64 (__fastcall **)(__int64))(v22 + 1160))(v2005);
            (*(void (__fastcall **)(__int64))(v22 + 496))(v2005);
            if ( v1683 == 0xFFFFFFFFLL )
            {
LABEL_2532:
              *(_DWORD *)(v22 + 2120) += v1686 << 12;
              goto LABEL_238;
            }
          }
          if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
          {
            v1687 = *(_QWORD **)(v22 + 2760);
            LODWORD(v34) = 48;
            v1688 = 6LL;
            do
            {
              v34 = (unsigned int)(v34 - 8);
              *v1687 = *(_QWORD *)v44;
              v44 += 8;
              ++v1687;
              --v1688;
            }
            while ( v1688 );
            for ( ; (_DWORD)v34; v34 = (unsigned int)(v34 - 1) )
            {
              v1689 = *v44++;
              *(_BYTE *)v1687 = v1689;
              v1687 = (_QWORD *)((char *)v1687 + 1);
            }
            v44 = *(char **)(v22 + 2760);
          }
          *((_QWORD *)v44 + 3) = v1683;
          v1690 = v2005;
          if ( *(_DWORD *)(v22 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2352) = *(int *)v44;
          *(_QWORD *)(v22 + 2360) = v1690;
          *(_DWORD *)(v22 + 2328) = 1;
          v1691 = *(_DWORD *)(v22 + 2520);
          if ( (v1691 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1691 & 1) == 0 )
            goto LABEL_238;
          v1692 = *(unsigned int *)(v22 + 2676);
          v1693 = *(_QWORD *)(v22 + 2104);
          v339 = *(_QWORD *)(v22 + 2680);
          v34 = v1692 + v22;
          v1694 = v1692 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1692) >> 3);
          while ( v34 != v1694 )
          {
            *(_QWORD *)v34 ^= v339;
            v339 = ((v1693 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
            v34 += 8LL;
          }
LABEL_763:
          *(_DWORD *)(v22 + 2524) &= ~0x200000u;
          if ( v339 == *(_QWORD *)(v22 + 2688) )
            goto LABEL_238;
          v478 = *(_DWORD *)(v22 + 2052);
          v479 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)v479 = v22;
          *(_DWORD *)(v479 + 16) = v478;
          if ( !*(_DWORD *)(v22 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v339 ^ *(_QWORD *)(v22 + 2688);
          goto LABEL_766;
        }
        if ( v66 != 48 )
          goto LABEL_2253;
        if ( !*((_DWORD *)v44 + 4) )
          goto LABEL_238;
        if ( (*(_DWORD *)(v22 + 2524) & 0x4000) != 0 )
        {
          v1650 = *(volatile signed __int32 **)(v22 + 1240);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1650, (*(_DWORD *)(v22 + 2520) >> 9) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
        }
        v1651 = (_QWORD *)*((_QWORD *)v44 + 1);
        v1652 = *((unsigned int *)v44 + 4);
        v1653 = v1651;
        *(_DWORD *)(v22 + 2120) += v1652;
        v1654 = (const char *)v1651;
        v1655 = *(_DWORD *)(v22 + 2100);
        v1656 = *(_QWORD *)(v22 + 2104);
        if ( v1651 < (_QWORD *)((char *)v1651 + v1652) )
        {
          do
          {
            _mm_prefetch(v1654, 0);
            v1654 += 64;
          }
          while ( v1654 < (const char *)v1651 + v1652 );
        }
        v1657 = *(_QWORD *)(v22 + 2104);
        v1658 = (unsigned int)v1652 >> 7;
        if ( (unsigned int)v1652 >> 7 )
        {
          do
          {
            v1659 = 8LL;
            do
            {
              v1660 = v1653[1] ^ __ROL8__(*v1653 ^ v1657, v1655);
              v1653 += 2;
              v1657 = __ROL8__(v1660, v1655);
              --v1659;
            }
            while ( v1659 );
            v1661 = (__ROL8__(v1656 ^ ((char *)v1653 - (char *)v1651), 17) ^ v1656 ^ (unsigned __int64)((char *)v1653 - (char *)v1651))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2105 = *((_QWORD *)&v1661 + 1);
            v1662 = v1661 ^ BYTE8(v1661) ^ v1655;
            v34 = 0xFFFFFFFFLL;
            v1655 = v1662 & 0x3F;
            if ( !v1655 )
              LOBYTE(v1655) = 1;
            --v1658;
          }
          while ( v1658 );
          v22 = (unsigned __int64)v1989;
        }
        else
        {
          v34 = 0xFFFFFFFFLL;
        }
        v1663 = v1652 & 0x7F;
        if ( v1663 >= 8 )
        {
          v1664 = (unsigned __int64)v1663 >> 3;
          do
          {
            v1657 = __ROL8__(*v1653++ ^ v1657, v1655);
            v1663 -= 8;
            --v1664;
          }
          while ( v1664 );
        }
        for ( ; v1663; --v1663 )
        {
          v1665 = *(unsigned __int8 *)v1653;
          v1653 = (_QWORD *)((char *)v1653 + 1);
          v1657 = __ROL8__(v1665 ^ v1657, v1655);
        }
        for ( n = v1657; ; LODWORD(v1657) = n ^ v1657 )
        {
          n >>= 31;
          if ( !n )
            break;
        }
        v1667 = v1657 & 0x7FFFFFFF;
        v1668 = 0;
        if ( v1667 == *((_DWORD *)v44 + 5) )
        {
LABEL_2501:
          v40 = 1;
        }
        else
        {
          if ( !*(_DWORD *)v44 )
            v1668 = *((_DWORD *)v44 + 6) != 0;
          v34 = *((_QWORD *)v44 + 1);
          if ( *((_DWORD *)v44 + 4) )
          {
            v1669 = 64LL;
            if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
            {
              v1670 = KeGetCurrentIrql();
              v1671 = v34 & 0xFFFFFFFFFFFFF000uLL;
              v1672 = (v34 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
              v1673 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                __writecr8(2uLL);
                while ( 1 )
                {
                  v1674 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                            v1671,
                            0LL,
                            v1669,
                            v1653);
                  if ( v1674 == -1073741267 )
                    break;
                  if ( v1674 < 0 )
                  {
LABEL_2504:
                    __writecr8(v1670);
                    v44 = v1984;
                    i9 = 0;
                    goto LABEL_2505;
                  }
LABEL_2499:
                  v1671 += 4096LL;
                  v1673 += 4096LL;
                  if ( v1673 == v1672 )
                  {
                    __writecr8(v1670);
                    i9 = 0;
                    goto LABEL_2501;
                  }
                }
                if ( v1668 )
                  goto LABEL_2504;
                if ( v1670 > 1u )
                  goto LABEL_2499;
                __writecr8(v1670);
              }
            }
          }
LABEL_2505:
          if ( !*(_DWORD *)(v22 + 2328) )
            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v1667;
          v1675 = *((_QWORD *)v44 + 1);
          v40 = 1;
          if ( !*(_DWORD *)(v22 + 2328) )
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *(int *)v44;
            *(_QWORD *)(v22 + 2360) = v1675;
            *(_DWORD *)(v22 + 2328) = 1;
            v1676 = *(_DWORD *)(v22 + 2520);
            if ( (v1676 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1676 & 1) != 0 )
            {
              v1677 = *(unsigned int *)(v22 + 2676);
              v1678 = *(_QWORD *)(v22 + 2104);
              v1679 = *(_QWORD *)(v22 + 2680);
              v34 = v1677 + v22;
              v1680 = v1677 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1677) >> 3);
              while ( v34 != v1680 )
              {
                *(_QWORD *)v34 ^= v1679;
                v1679 = ((v1678 ^ *(_QWORD *)v34) + __ROR8__(v1679, v1679 & 0x3F)) ^ 0xEFA;
                v34 += 8LL;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1679 != *(_QWORD *)(v22 + 2688) )
              {
                v1681 = *(_DWORD *)(v22 + 2052);
                v1682 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1682 = v22;
                *(_DWORD *)(v1682 + 16) = v1681;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1679 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1679, 256LL);
              }
            }
          }
        }
        if ( (*(_DWORD *)(v22 + 2524) & 0x4000) != 0 )
        {
          v34 = *(_QWORD *)(v22 + 1240);
          _InterlockedAnd((volatile signed __int32 *)v34, ~(1 << ((*(_DWORD *)(v22 + 2520) >> 9) & 0x1F)));
          _enable();
        }
        goto LABEL_238;
      }
      v1702 = (_QWORD *)*((_QWORD *)v44 + 1);
      v1703 = v22;
      v1704 = *((unsigned int *)v44 + 4);
      v1705 = v1702;
      *(_DWORD *)(v22 + 2120) += v1704;
      v1706 = (const char *)v1702;
      v1707 = *(_DWORD *)(v22 + 2100);
      v1708 = *(_QWORD *)(v22 + 2104);
      v1994 = v22;
      if ( v1702 < (_QWORD *)((char *)v1702 + v1704) )
      {
        do
        {
          _mm_prefetch(v1706, 0);
          v1706 += 64;
        }
        while ( v1706 < (const char *)v1702 + v1704 );
      }
      v1709 = v1708;
      v1710 = (unsigned int)v1704 >> 7;
      v34 = 1LL;
      if ( (unsigned int)v1704 >> 7 )
      {
        do
        {
          v1711 = 8LL;
          do
          {
            v1712 = v1705[1] ^ __ROL8__(*v1705 ^ v1709, v1707);
            v1705 += 2;
            v1709 = __ROL8__(v1712, v1707);
            --v1711;
          }
          while ( v1711 );
          v1713 = (__ROL8__(v1708 ^ ((char *)v1705 - (char *)v1702), 17) ^ v1708 ^ ((char *)v1705 - (char *)v1702))
                * (unsigned __int128)0x7010008004002001uLL;
          v2106 = *((_QWORD *)&v1713 + 1);
          v1714 = v1713 ^ BYTE8(v1713) ^ v1707;
          v34 = 1LL;
          v1707 = v1714 & 0x3F;
          if ( !v1707 )
            LOBYTE(v1707) = 1;
          --v1710;
        }
        while ( v1710 );
        v22 = (unsigned __int64)v1989;
        v1703 = v1994;
      }
      v1715 = v1704 & 0x7F;
      if ( (unsigned int)v1715 >= 8 )
      {
        v1716 = (unsigned __int64)(unsigned int)v1715 >> 3;
        do
        {
          v1709 = __ROL8__(*v1705++ ^ v1709, v1707);
          v1715 = (unsigned int)(v1715 - 8);
          --v1716;
        }
        while ( v1716 );
      }
      if ( (_DWORD)v1715 )
      {
        do
        {
          v1717 = *(unsigned __int8 *)v1705;
          v1705 = (_QWORD *)((char *)v1705 + 1);
          v1709 = __ROL8__(v1717 ^ v1709, v1707);
          v1715 = (unsigned int)(v1715 - 1);
        }
        while ( (_DWORD)v1715 );
        v22 = (unsigned __int64)v1989;
      }
      for ( ii = v1709; ; LODWORD(v1709) = ii ^ v1709 )
      {
        ii >>= 31;
        if ( !ii )
          break;
      }
      v1719 = v1709 & 0x7FFFFFFF;
      if ( v1719 == *((_DWORD *)v44 + 5) )
      {
LABEL_2591:
        i9 = 0;
      }
      else
      {
        if ( !*(_DWORD *)v44 && *((_DWORD *)v44 + 6) )
          i9 = 1;
        v1720 = *((unsigned int *)v44 + 4);
        v34 = *((_QWORD *)v44 + 1);
        if ( *((_DWORD *)v44 + 4) )
        {
          v1715 = 64LL;
          if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
          {
            v1721 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1722 = v34 & 0xFFFFFFFFFFFFF000uLL;
            v1994 = (v34 + v1720 - 1) | 0xFFF;
            v1723 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v1724 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                          v1722,
                          0LL,
                          v1715,
                          v1705);
                if ( v1724 == -1073741267 )
                  break;
                if ( v1724 < 0 )
                {
LABEL_2611:
                  __writecr8(v1721);
                  v44 = v1984;
                  goto LABEL_2612;
                }
LABEL_2589:
                v1722 += 4096LL;
                v1723 += 4096LL;
                if ( v1723 == v1994 )
                {
                  __writecr8(v1721);
                  v44 = v1984;
                  goto LABEL_2591;
                }
              }
              if ( i9 )
                goto LABEL_2611;
              if ( v1721 > 1u )
                goto LABEL_2589;
              __writecr8(v1721);
              __writecr8(2uLL);
            }
          }
        }
LABEL_2612:
        i9 = 0;
        if ( !*(_DWORD *)(v22 + 2328) )
          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1719 ^ (unsigned __int64)*((unsigned int *)v44 + 5);
        v1736 = *((_QWORD *)v44 + 1);
        if ( !*(_DWORD *)(v22 + 2328) )
        {
          v40 = 1;
          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2352) = *(int *)v44;
          *(_QWORD *)(v22 + 2360) = v1736;
          *(_DWORD *)(v22 + 2328) = 1;
          v1737 = *(_DWORD *)(v22 + 2520);
          if ( (v1737 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1737 & 1) != 0 )
          {
            v1738 = *(unsigned int *)(v22 + 2676);
            v1739 = *(_QWORD *)(v22 + 2104);
            v1715 = *(_QWORD *)(v22 + 2680);
            v34 = v1738 + v22;
            v1705 = (_QWORD *)(v1738 + v22 + 8
                                           * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1738) >> 3));
            while ( (_QWORD *)v34 != v1705 )
            {
              *(_QWORD *)v34 ^= v1715;
              v1715 = ((v1739 ^ *(_QWORD *)v34) + __ROR8__(v1715, v1715 & 0x3F)) ^ 0xEFA;
              v34 += 8LL;
            }
            *(_DWORD *)(v22 + 2524) &= ~0x200000u;
            if ( v1715 != *(_QWORD *)(v22 + 2688) )
            {
              v1740 = *(_DWORD *)(v22 + 2052);
              v1741 = *(_QWORD *)(v22 + 1416);
              *(_QWORD *)v1741 = v22;
              *(_DWORD *)(v1741 + 16) = v1740;
              if ( !*(_DWORD *)(v22 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1715 ^ *(_QWORD *)(v22 + 2688);
              sub_140BDA384(v22, 0LL, v1715, 256LL);
            }
          }
          goto LABEL_2593;
        }
      }
      v40 = 1;
LABEL_2593:
      if ( (*((_DWORD *)v44 + 8) & 1) == 0 )
        goto LABEL_238;
      v1725 = *((_QWORD *)v44 + 3);
      v1726 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 520);
      v1986 = v1725;
      v1727 = v1726(v1725, v34, v1715, v1705);
      v1728 = v1727 + *(unsigned __int16 *)(v1727 + 20) + 24LL;
      v1987 = v1728 + 40LL * *(unsigned __int16 *)(v1727 + 6);
      if ( v1728 == v1987 )
        goto LABEL_238;
      v1729 = *(_DWORD *)(v22 + 2116);
      v34 = 0LL;
      if ( !v1729 )
      {
        *(_DWORD *)(v22 + 2116) = 4096;
        v1729 = 4096;
      }
      if ( v1725 == *(_QWORD *)(v22 + 1504) || (LODWORD(v1990) = 0, v1725 == *(_QWORD *)(v22 + 1512)) )
        LODWORD(v1990) = 1;
      v1730 = v1990;
      while ( 1 )
      {
        v1731 = *(_DWORD *)(v1728 + 16);
        v1732 = *(_DWORD *)(v1728 + 12);
        if ( v1731 <= *(_DWORD *)(v1728 + 8) )
          v1731 = *(_DWORD *)(v1728 + 8);
        v1733 = (v1731 + v1732 + 4095) & 0xFFFFF000;
        if ( v1729 < v1733 )
          break;
LABEL_2636:
        v1728 += 40LL;
        if ( v1728 == v1987 )
          goto LABEL_2637;
      }
      if ( (*(_DWORD *)(v1728 + 36) & 0x2000000) != 0 )
        goto LABEL_2635;
      v1734 = *(_DWORD *)v1728;
      if ( *(_DWORD *)v1728 == 1414090313 )
      {
        if ( *(_DWORD *)(v1728 + 4) != 1195525195 )
        {
LABEL_2607:
          if ( v1734 != 1095914053 || *(_WORD *)(v1728 + 4) != 16724 )
            goto LABEL_2609;
        }
        goto LABEL_2635;
      }
      if ( v1734 != 1162297680 )
        goto LABEL_2607;
      v1742 = *(_WORD *)(v1728 + 4);
      if ( v1742 == 30839 || v1742 == 29303 || v1742 == 30583 )
        goto LABEL_2635;
LABEL_2609:
      if ( v1703 )
      {
        v1735 = *(char **)(v1703 + 2384);
        *((_QWORD *)&v2058 + 1) = *(_QWORD *)(v1703 + 2392);
        v2059 = *(_OWORD *)(v1703 + 2400);
        *(_QWORD *)&v2058 = v1735;
      }
      else
      {
        v2058 = *(_OWORD *)VfExcludeSections;
        v2059 = *(_OWORD *)off_140E0A0D8;
        v1735 = VfExcludeSections[0];
      }
      v1743 = 7;
      v1744 = (char *)v1728;
      while ( 1 )
      {
        v1745 = *v1744++;
        v1746 = *v1735++;
        if ( v1745 != v1746 )
          break;
        if ( !--v1743 )
          goto LABEL_2634;
      }
      v1747 = (char *)*((_QWORD *)&v2058 + 1);
      v1748 = 8;
      v1749 = (char *)v1728;
      do
      {
        v1750 = *(_QWORD *)v1749;
        v1749 += 8;
        v1751 = *(_QWORD *)v1747;
        v1747 += 8;
        if ( v1750 != v1751 )
          goto LABEL_2647;
        v1748 -= 8;
      }
      while ( v1748 >= 8 );
      if ( !v1748 )
      {
LABEL_2634:
        v34 = 0LL;
        goto LABEL_2635;
      }
      while ( 1 )
      {
        v1752 = *v1749++;
        v1753 = *v1747++;
        if ( v1752 != v1753 )
          break;
        if ( !--v1748 )
          goto LABEL_2634;
      }
LABEL_2647:
      v1754 = (char *)v2059;
      v1755 = 4;
      v1756 = (char *)v1728;
      while ( 1 )
      {
        v1757 = *v1756++;
        v1758 = *v1754++;
        if ( v1757 != v1758 )
          break;
        if ( !--v1755 )
          goto LABEL_2634;
      }
      v1759 = (char *)*((_QWORD *)&v2059 + 1);
      v1760 = 6LL;
      v1761 = v1728;
      while ( 1 )
      {
        v1762 = *(_BYTE *)v1761++;
        v1763 = *v1759++;
        if ( v1762 != v1763 )
          break;
        v55 = (_DWORD)v1760 == 1;
        v1760 = (unsigned int)(v1760 - 1);
        if ( v55 )
          goto LABEL_2634;
      }
      v1764 = *(_DWORD *)(v1728 + 36);
      v34 = 0LL;
      if ( v1764 < 0 || (v1764 & 0x20000000) == 0 )
      {
LABEL_2635:
        v1729 = v1733;
        goto LABEL_2636;
      }
      if ( v1730 && *(_DWORD *)v1728 != 778396769 && *(_DWORD *)v1728 != 1162297680 )
        v40 = 0;
      if ( v1729 < v1732 )
        v1729 = v1732;
      while ( 2 )
      {
        v1765 = v1729 + v1725;
        if ( (*(_BYTE *)(v1703 + 2203) & 4) != 0 )
        {
          __asm { xbegin  $+6 }
          __asm { xend }
          v1761 = 1LL;
          ++*(_DWORD *)(v1703 + 2140);
          *(_DWORD *)(v1703 + 2120) += 256;
LABEL_2682:
          v1774 = *(_DWORD *)(v1703 + 2124);
          v1729 += 4096;
          if ( v1729 >= v1733 )
          {
            if ( *(_DWORD *)(v1703 + 2120) < v1774 )
            {
              v1725 = v1986;
              v40 = 1;
              goto LABEL_2636;
            }
LABEL_2637:
            v22 = (unsigned __int64)v1989;
            if ( v1728 == v1987 && v1729 >= v1733 )
            {
              i9 = 0;
              *(_DWORD *)(v1703 + 2116) = 0;
              goto LABEL_237;
            }
            *(_DWORD *)(v1703 + 2116) = v1729;
LABEL_466:
            i9 = 0;
            goto LABEL_237;
          }
          if ( *(_DWORD *)(v1703 + 2120) >= v1774 )
            goto LABEL_2637;
          v1725 = v1986;
          continue;
        }
        break;
      }
      if ( v40 )
      {
        v1766 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, unsigned __int64))(v1703 + 1104))(
                  &v2073,
                  v1765,
                  v1761,
                  v1760);
        v34 = 0LL;
        if ( v1766 < 0 )
        {
          if ( v1766 == -1073741819 )
          {
            v1767 = (int *)v1984;
            if ( ((*((_DWORD *)v1984 + 8) & 4) == 0 || *(int *)(v1728 + 36) < 0) && !*(_DWORD *)(v1703 + 2328) )
            {
              v1761 = 1LL;
              *(_QWORD *)(v1703 + 2336) = v1703 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v1703 + 2344) = (char *)v1767 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v1703 + 2352) = *v1767;
              *(_QWORD *)(v1703 + 2360) = v1765;
              *(_DWORD *)(v1703 + 2328) = 1;
              v1768 = *(_DWORD *)(v1703 + 2520);
              if ( (v1768 & 0x20000000) == 0 && (*(_DWORD *)(v1703 + 2524) & 0x200000) != 0 && (v1768 & 1) != 0 )
              {
                v1769 = *(unsigned int *)(v1703 + 2676);
                v1770 = *(_QWORD *)(v1703 + 2104);
                v1761 = *(_QWORD *)(v1703 + 2680);
                v1771 = (_QWORD *)(v1769 + v1703);
                v1760 = v1769 + v1703 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v1703 + 2052) - v1769) >> 3);
                while ( v1771 != (_QWORD *)v1760 )
                {
                  *v1771 ^= v1761;
                  v1761 = ((v1770 ^ *v1771++) + __ROR8__(v1761, v1761 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v1703 + 2524) &= ~0x200000u;
                if ( v1761 != *(_QWORD *)(v1703 + 2688) )
                {
                  v1772 = *(_QWORD *)(v1703 + 1416);
                  v1773 = *(_DWORD *)(v1703 + 2052);
                  *(_QWORD *)v1772 = v1703;
                  *(_DWORD *)(v1772 + 16) = v1773;
                  if ( !*(_DWORD *)(v1703 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v1703 + 1416) + 24LL) = v1761 ^ *(_QWORD *)(v1703 + 2688);
                  sub_140BDA384(v1703, 0LL, v1761, 256LL);
                }
                v34 = 0LL;
              }
            }
          }
          goto LABEL_2682;
        }
      }
      else
      {
        v2073 = 0LL;
        v2075 = 0;
        v2077 = 4096;
        v2074 = 8 * ((((unsigned __int64)(v1765 & 0xFFF) + 0x1FFF) >> 12) + 6);
        v2076 = v1765 & 0xFFFFFFFFFFFFF000uLL;
        v2078 = v1765 & 0xFFF;
        v2079 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(v1703 + 1112))(
                                    v1765,
                                    0LL,
                                    4095LL,
                                    v1760) >> 12;
      }
      ++*(_DWORD *)(v1703 + 2144);
      *(_QWORD *)(v1703 + 2736) = v2076 + v2078;
      *(_QWORD *)(v1703 + 2728) = v1984;
      v1775 = KeGetCurrentIrql();
      __writecr8(2uLL);
      RtlInitMinimalBarrier(v1703 + 2696, **(unsigned int **)(v1703 + 1520), 0LL);
      v1703 = (*(__int64 (__fastcall **)(__int64, __int64))(v1703 + 1096))(
                v1703 + *(unsigned int *)(v1703 + 2068),
                v1703);
      __writecr8(v1775);
      v34 = 0LL;
      if ( v40 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD))(v1703 + 1120))(&v2073, 0LL);
        v34 = 0LL;
      }
      *(_DWORD *)(v1703 + 2120) += 81920;
      goto LABEL_2682;
    }
    if ( v66 != 30 )
    {
      if ( v66 <= 15 )
      {
        if ( v66 == 15 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v22 + 1384) + 32LL) )
          {
            *(_DWORD *)(v22 + 2120) += 256;
            v343 = *(_QWORD *)(v22 + 1408);
            v344 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 728))(v343, v34);
            if ( v344 )
            {
              v345 = (*(__int64 (__fastcall **)(__int64))(v22 + 736))(v344);
              v346 = *((_QWORD *)v44 + 3);
              v347 = v345;
              if ( v346 )
              {
                if ( v346 != v345 && !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *(int *)v44;
                  *(_QWORD *)(v22 + 2360) = v345;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v348 = *(_DWORD *)(v22 + 2520);
                  if ( (v348 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v348 & 1) != 0 )
                  {
                    v349 = *(unsigned int *)(v22 + 2676);
                    v350 = *(_QWORD *)(v22 + 2104);
                    v351 = *(_QWORD *)(v22 + 2680);
                    v352 = (_QWORD *)(v349 + v22);
                    v353 = v349 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v349) >> 3);
                    while ( v352 != (_QWORD *)v353 )
                    {
                      *v352 ^= v351;
                      v351 = ((v350 ^ *v352++) + __ROR8__(v351, v351 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v351 != *(_QWORD *)(v22 + 2688) )
                    {
                      v354 = *(_DWORD *)(v22 + 2052);
                      v355 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v355 = v22;
                      *(_DWORD *)(v355 + 16) = v354;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v351 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v351, 256LL);
                    }
                  }
                }
              }
              else
              {
                v356 = *(_QWORD *)(v22 + 2504);
                if ( (!*(_DWORD *)(v22 + 2496) || v345 < v356 || v345 > v356 + *(unsigned int *)(v22 + 2496) - 1LL)
                  && !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *(int *)v44;
                  *(_QWORD *)(v22 + 2360) = v345;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v357 = *(_DWORD *)(v22 + 2520);
                  if ( (v357 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v357 & 1) != 0 )
                  {
                    v358 = *(unsigned int *)(v22 + 2676);
                    v359 = *(_QWORD *)(v22 + 2104);
                    v360 = *(_QWORD *)(v22 + 2680);
                    v361 = (_QWORD *)(v358 + v22);
                    v362 = v358 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v358) >> 3);
                    while ( v361 != (_QWORD *)v362 )
                    {
                      *v361 ^= v360;
                      v360 = ((v359 ^ *v361++) + __ROR8__(v360, v360 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v360 != *(_QWORD *)(v22 + 2688) )
                    {
                      v363 = *(_DWORD *)(v22 + 2052);
                      v364 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v364 = v22;
                      *(_DWORD *)(v364 + 16) = v363;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v360 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v360, 256LL);
                    }
                  }
                }
                *((_QWORD *)v44 + 3) = v347;
              }
              (*(void (__fastcall **)(__int64, __int64))(v22 + 744))(v343, v344);
            }
          }
          goto LABEL_238;
        }
        if ( !v66 )
        {
          v311 = (_QWORD *)*((_QWORD *)v44 + 1);
          v312 = *((unsigned int *)v44 + 4);
          v313 = v311;
          *(_DWORD *)(v22 + 2120) += v312;
          v314 = (const char *)v311;
          v315 = *(_DWORD *)(v22 + 2100);
          v316 = *(_QWORD *)(v22 + 2104);
          if ( v311 < (_QWORD *)((char *)v311 + v312) )
          {
            do
            {
              _mm_prefetch(v314, 0);
              v314 += 64;
            }
            while ( v314 < (const char *)v311 + v312 );
          }
          v317 = *(_QWORD *)(v22 + 2104);
          v318 = (unsigned int)v312 >> 7;
          if ( (unsigned int)v312 >> 7 )
          {
            do
            {
              v319 = 8LL;
              do
              {
                v320 = v313[1] ^ __ROL8__(*v313 ^ v317, v315);
                v313 += 2;
                v317 = __ROL8__(v320, v315);
                --v319;
              }
              while ( v319 );
              v321 = (__ROL8__(v316 ^ ((char *)v313 - (char *)v311), 17) ^ v316 ^ (unsigned __int64)((char *)v313 - (char *)v311))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2112 = *((_QWORD *)&v321 + 1);
              v322 = v321 ^ BYTE8(v321) ^ v315;
              v34 = 0xFFFFFFFFLL;
              v315 = v322 & 0x3F;
              if ( !v315 )
                LOBYTE(v315) = 1;
              --v318;
            }
            while ( v318 );
            v22 = (unsigned __int64)v1989;
          }
          else
          {
            v34 = 0xFFFFFFFFLL;
          }
          v323 = v312 & 0x7F;
          if ( v323 >= 8 )
          {
            v324 = (unsigned __int64)v323 >> 3;
            do
            {
              v317 = __ROL8__(*v313++ ^ v317, v315);
              v323 -= 8;
              --v324;
            }
            while ( v324 );
          }
          for ( ; v323; --v323 )
          {
            v325 = *(unsigned __int8 *)v313;
            v313 = (_QWORD *)((char *)v313 + 1);
            v317 = __ROL8__(v325 ^ v317, v315);
          }
          for ( jj = v317; ; LODWORD(v317) = jj ^ v317 )
          {
            jj >>= 31;
            if ( !jj )
              break;
          }
          v327 = v317 & 0x7FFFFFFF;
          v328 = 0;
          if ( v327 == *((_DWORD *)v44 + 5) )
            goto LABEL_237;
          if ( !*(_DWORD *)v44 )
            v328 = *((_DWORD *)v44 + 6) != 0;
          v34 = *((_QWORD *)v44 + 1);
          if ( !*((_DWORD *)v44 + 4) || (v329 = 64LL, (*(_DWORD *)(v22 + 2524) & 0x40) == 0) )
          {
LABEL_541:
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v327;
            v335 = *((_QWORD *)v44 + 1);
            v40 = 1;
            if ( *(_DWORD *)(v22 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *(int *)v44;
            *(_QWORD *)(v22 + 2360) = v335;
            *(_DWORD *)(v22 + 2328) = 1;
            v336 = *(_DWORD *)(v22 + 2520);
            if ( (v336 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v336 & 1) == 0 )
              goto LABEL_238;
            v337 = *(unsigned int *)(v22 + 2676);
            v338 = *(_QWORD *)(v22 + 2104);
            v339 = *(_QWORD *)(v22 + 2680);
            v34 = v337 + v22;
            v340 = v337 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v337) >> 3);
            while ( v34 != v340 )
            {
              *(_QWORD *)v34 ^= v339;
              v339 = ((v338 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
              v34 += 8LL;
            }
            goto LABEL_550;
          }
          v330 = KeGetCurrentIrql();
          v331 = v34 & 0xFFFFFFFFFFFFF000uLL;
          v332 = (v34 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
          v333 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_532:
          __writecr8(2uLL);
          while ( 1 )
          {
            v334 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                     v331,
                     0LL,
                     v329,
                     v313);
            if ( v334 == -1073741267 )
            {
              if ( v328 )
                goto LABEL_540;
              if ( v330 <= 1u )
              {
                __writecr8(v330);
                goto LABEL_532;
              }
            }
            else if ( v334 < 0 )
            {
LABEL_540:
              __writecr8(v330);
              v44 = v1984;
              i9 = 0;
              goto LABEL_541;
            }
            v34 = 4096LL;
            v331 += 4096LL;
            v333 += 4096LL;
            if ( v333 == v332 )
            {
              __writecr8(v330);
              goto LABEL_466;
            }
          }
        }
        if ( v66 != 1 )
        {
          if ( v66 == 4 )
          {
            if ( (*(_DWORD *)(v22 + 2128) & 1) != 0 )
              goto LABEL_238;
            v278 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 392);
            v279 = 0;
            v280 = *(_QWORD *)(v22 + 1344);
            v1985 = 0;
            v278((unsigned int)(v66 - 4), v34);
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 || (v281 = *(_DWORD *)(v22 + 2424), v281 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312))(*(_QWORD *)(v22 + 2632), 0LL);
              LOBYTE(v40) = 0x80;
            }
            else
            {
              LOBYTE(v40) = 1 << v281;
            }
            v282 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 328);
            LODWORD(v1990) = v40;
            v282(v280, 0LL);
            v283 = *(_QWORD ***)(v22 + 1304);
            v284 = *v283;
            if ( *v283 != v283 )
            {
              do
              {
                v285 = (unsigned __int64)v284 - *(_QWORD *)(v22 + 1760);
                if ( (_BYTE)v40 != 0x80
                  && ((unsigned __int8)v40 & *(_BYTE *)(v285 + *(_QWORD *)(v22 + 1736))) != 0
                  && (*(_DWORD *)(v285 + *(_QWORD *)(v22 + 1744)) & *(_DWORD *)(v22 + 1768)) != 0
                  && !*(_DWORD *)(v22 + 2328) )
                {
                  v286 = (int *)v1984;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = (char *)v286 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *v286;
                  *(_QWORD *)(v22 + 2360) = v285 | 1;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v287 = *(_DWORD *)(v22 + 2520);
                  if ( (v287 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v287 & 1) != 0 )
                  {
                    v288 = *(unsigned int *)(v22 + 2676);
                    v289 = *(_QWORD *)(v22 + 2104);
                    v290 = *(_QWORD *)(v22 + 2680);
                    v291 = (_QWORD *)(v288 + v22);
                    v292 = v288 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v288) >> 3);
                    while ( v291 != (_QWORD *)v292 )
                    {
                      *v291 ^= v290;
                      v290 = ((v289 ^ *v291++) + __ROR8__(v290, v290 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v290 != *(_QWORD *)(v22 + 2688) )
                    {
                      v293 = *(_DWORD *)(v22 + 2052);
                      v294 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v294 = v22;
                      *(_DWORD *)(v294 + 16) = v293;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v290 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v290, 256LL);
                    }
                  }
                }
                _InterlockedOr8((volatile signed __int8 *)(v285 + *(_QWORD *)(v22 + 1736)), v40);
                v284 = (_QWORD *)*v284;
                ++v279;
              }
              while ( v284 != v283 );
              v1985 = v279;
            }
            v295 = *(_QWORD *)(v22 + 1272);
            v1986 = KeGetCurrentIrql();
            __writecr8(0xCuLL);
            (*(void (__fastcall **)(__int64, _BYTE *))(v22 + 344))(v295, v2154);
            v296 = *(_QWORD ***)(v22 + 1264);
            v297 = *v296;
            if ( *v296 != v296 )
            {
              v298 = v40;
              v299 = (unsigned __int8)v40;
              v300 = (int *)v1984;
              v301 = ~v298;
              do
              {
                v302 = (char *)v297 - *(_QWORD *)(v22 + 1728);
                if ( (v302[*(_QWORD *)(v22 + 1736)] & v299) == 0 && !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = (char *)v300 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *v300;
                  *(_QWORD *)(v22 + 2360) = v302;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v303 = *(_DWORD *)(v22 + 2520);
                  if ( (v303 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v303 & 1) != 0 )
                  {
                    v304 = *(unsigned int *)(v22 + 2676);
                    v305 = *(_QWORD *)(v22 + 2104);
                    v306 = *(_QWORD *)(v22 + 2680);
                    v307 = (_QWORD *)(v304 + v22);
                    v308 = v304 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v304) >> 3);
                    while ( v307 != (_QWORD *)v308 )
                    {
                      *v307 ^= v306;
                      v306 = ((v305 ^ *v307++) + __ROR8__(v306, v306 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v306 != *(_QWORD *)(v22 + 2688) )
                    {
                      v309 = *(_DWORD *)(v22 + 2052);
                      v310 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v310 = v22;
                      *(_DWORD *)(v310 + 16) = v309;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v306 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v306, 256LL);
                    }
                  }
                }
                _InterlockedAnd8(&v302[*(_QWORD *)(v22 + 1736)], v301);
                v297 = (_QWORD *)*v297;
              }
              while ( v297 != v296 );
              LOBYTE(v40) = v1990;
              v279 = v1985;
            }
            (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v2154);
            __writecr8((unsigned __int8)v1986);
            if ( (_BYTE)v40 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 336))(*(_QWORD *)(v22 + 1344), 0LL);
            (*(void (**)(void))(v22 + 400))();
            *(_DWORD *)(v22 + 2120) += v279 << 8;
            goto LABEL_466;
          }
          if ( v66 != 5 )
          {
            if ( v66 == 7 )
            {
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 432))(v2125, *((unsigned int *)v44 + 7));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2125, v2126);
              for ( kk = 0; kk < *((_DWORD *)v44 + 6); ++kk )
              {
                v219 = *(unsigned int *)&v44[24 * kk + 64];
                if ( (*(_BYTE *)(v22 + 2203) & 2) != 0
                  && (_DWORD)v219 == -1073741694
                  && KeGetPcr()->Prcb.Number == *(_DWORD *)(v22 + 2320) )
                {
                  v220 = *(_QWORD *)(v22 + 2312);
                }
                else
                {
                  v220 = __readmsr(v219);
                }
                v221 = *(_QWORD *)&v44[24 * kk + 48];
                v222 = *(_QWORD *)&v44[24 * kk + 56];
                v223 = v221 & v220;
                if ( v223 == v222 )
                {
                  if ( (*(_DWORD *)(v22 + 2524) & 0x200) != 0 && v221 == -1 )
                    __writemsr(v219, v223);
                }
                else
                {
                  v224 = v219 | ((unsigned __int64)*((unsigned int *)v44 + 7) << 32);
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v223 ^ v222;
                    if ( !*(_DWORD *)(v22 + 2328) )
                    {
                      *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2352) = *(int *)v44;
                      *(_QWORD *)(v22 + 2360) = v224;
                      *(_DWORD *)(v22 + 2328) = 1;
                      v225 = *(_DWORD *)(v22 + 2520);
                      if ( (v225 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v225 & 1) != 0 )
                      {
                        v226 = *(unsigned int *)(v22 + 2676);
                        v227 = *(_QWORD *)(v22 + 2104);
                        v228 = *(_QWORD *)(v22 + 2680);
                        v229 = (_QWORD *)(v226 + v22);
                        v230 = v226 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v226) >> 3);
                        while ( v229 != (_QWORD *)v230 )
                        {
                          *v229 ^= v228;
                          v228 = ((v227 ^ *v229++) + __ROR8__(v228, v228 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                        if ( v228 != *(_QWORD *)(v22 + 2688) )
                        {
                          v231 = *(_DWORD *)(v22 + 2052);
                          v232 = *(_QWORD *)(v22 + 1416);
                          *(_QWORD *)v232 = v22;
                          *(_DWORD *)(v232 + 16) = v231;
                          if ( !*(_DWORD *)(v22 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v228 ^ *(_QWORD *)(v22 + 2688);
                          sub_140BDA384(v22, 0LL, v228, 256LL);
                        }
                      }
                    }
                  }
                }
              }
              (*(void (__fastcall **)(_BYTE *))(v22 + 424))(v2126);
              v233 = *((_DWORD *)v44 + 6) << 15;
              goto LABEL_405;
            }
            if ( v66 != 8 )
            {
              if ( v66 != 10 )
              {
                if ( v66 == 13 )
                {
                  v67 = (_QWORD *)*((_QWORD *)v44 + 1);
                  v68 = *((unsigned int *)v44 + 4);
                  v69 = v67;
                  *(_DWORD *)(v22 + 2120) += v68;
                  v70 = (const char *)v67;
                  v71 = *(_DWORD *)(v22 + 2100);
                  v72 = *(_QWORD *)(v22 + 2104);
                  if ( v67 < (_QWORD *)((char *)v67 + v68) )
                  {
                    do
                    {
                      _mm_prefetch(v70, 0);
                      v70 += 64;
                    }
                    while ( v70 < (const char *)v67 + v68 );
                  }
                  v73 = *(_QWORD *)(v22 + 2104);
                  v74 = (unsigned int)v68 >> 7;
                  if ( (unsigned int)v68 >> 7 )
                  {
                    do
                    {
                      v75 = 8LL;
                      do
                      {
                        v76 = v69[1] ^ __ROL8__(*v69 ^ v73, v71);
                        v69 += 2;
                        v73 = __ROL8__(v76, v71);
                        --v75;
                      }
                      while ( v75 );
                      v77 = (__ROL8__(v72 ^ ((char *)v69 - (char *)v67), 17) ^ v72 ^ (unsigned __int64)((char *)v69 - (char *)v67))
                          * (unsigned __int128)0x7010008004002001uLL;
                      v2123 = *((_QWORD *)&v77 + 1);
                      v78 = v77 ^ BYTE8(v77) ^ v71;
                      v34 = 0xFFFFFFFFLL;
                      v71 = v78 & 0x3F;
                      if ( !v71 )
                        LOBYTE(v71) = 1;
                      --v74;
                    }
                    while ( v74 );
                    v22 = (unsigned __int64)v1989;
                  }
                  else
                  {
                    v34 = 0xFFFFFFFFLL;
                  }
                  v79 = v68 & 0x7F;
                  if ( v79 >= 8 )
                  {
                    v80 = (unsigned __int64)v79 >> 3;
                    do
                    {
                      v73 = __ROL8__(*v69++ ^ v73, v71);
                      v79 -= 8;
                      --v80;
                    }
                    while ( v80 );
                  }
                  for ( ; v79; --v79 )
                  {
                    v81 = *(unsigned __int8 *)v69;
                    v69 = (_QWORD *)((char *)v69 + 1);
                    v73 = __ROL8__(v81 ^ v73, v71);
                  }
                  for ( mm = v73; ; LODWORD(v73) = mm ^ v73 )
                  {
                    mm >>= 31;
                    if ( !mm )
                      break;
                  }
                  v83 = v73 & 0x7FFFFFFF;
                  if ( v83 == *((_DWORD *)v44 + 5) )
                    goto LABEL_203;
                  _InterlockedOr(v1980, 0);
                  if ( (*((_DWORD *)v44 + 6) & 1) != 0 )
                  {
                    if ( **(_BYTE **)(v22 + 1400) )
                      goto LABEL_203;
                  }
                  v84 = *((unsigned int *)v44 + 4);
                  v34 = *((_QWORD *)v44 + 1);
                  if ( *((_DWORD *)v44 + 4) )
                  {
                    v85 = 64LL;
                    if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
                    {
                      v86 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v87 = v34 & 0xFFFFFFFFFFFFF000uLL;
                      v88 = (v34 + v84 - 1) | 0xFFF;
                      v89 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v90 = v86;
                        while ( 1 )
                        {
                          v91 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                                  v87,
                                  0LL,
                                  v85,
                                  v69);
                          if ( v91 != -1073741267 )
                            break;
                          if ( v86 > 1u )
                            goto LABEL_187;
                          v90 = v86;
                          __writecr8(v86);
                          __writecr8(2uLL);
                        }
                        if ( v91 < 0 )
                          break;
LABEL_187:
                        v87 += 4096LL;
                        v89 += 4096LL;
                        if ( v89 == v88 )
                        {
                          __writecr8(v90);
                          v44 = v1984;
                          i9 = 0;
LABEL_203:
                          if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) == 0 )
                            goto LABEL_237;
                          v100 = *((unsigned int *)v44 + 4);
                          if ( !(_DWORD)v100 )
                            goto LABEL_237;
                          sub_140516B3C(v22, *((_QWORD *)v44 + 1), v100, v2124);
                          v34 = 16LL;
                          v101 = v44 + 28;
                          v102 = v2124;
                          do
                          {
                            v103 = *(_QWORD *)v102;
                            v102 += 8;
                            v104 = *(_QWORD *)v101;
                            v101 += 8;
                            if ( v103 != v104 )
                              goto LABEL_212;
                            v34 = (unsigned int)(v34 - 8);
                          }
                          while ( (unsigned int)v34 >= 8 );
                          if ( !(_DWORD)v34 )
                            goto LABEL_236;
                          while ( 1 )
                          {
                            v105 = *v102++;
                            v106 = *v101++;
                            if ( v105 != v106 )
                              break;
                            v55 = (_DWORD)v34 == 1;
                            v34 = (unsigned int)(v34 - 1);
                            if ( v55 )
                              goto LABEL_236;
                          }
LABEL_212:
                          _InterlockedOr(v1980, 0);
                          if ( (*((_DWORD *)v44 + 6) & 1) != 0 && **(_BYTE **)(v22 + 1400) )
                            goto LABEL_236;
                          v34 = *((_QWORD *)v44 + 1);
                          if ( !*((_DWORD *)v44 + 4) )
                            goto LABEL_225;
                          v107 = 64LL;
                          if ( (*(_DWORD *)(v22 + 2524) & 0x40) == 0 )
                            goto LABEL_225;
                          v108 = KeGetCurrentIrql();
                          v109 = v34 & 0xFFFFFFFFFFFFF000uLL;
                          v110 = (v34 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                          v111 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_217:
                          __writecr8(2uLL);
                          while ( 1 )
                          {
                            v112 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, char *))(v22 + 1128))(
                                     v109,
                                     0LL,
                                     v107,
                                     v102);
                            if ( v112 == -1073741267 )
                            {
                              if ( v108 <= 1u )
                              {
                                __writecr8(v108);
                                goto LABEL_217;
                              }
                            }
                            else if ( v112 < 0 )
                            {
                              __writecr8(v108);
LABEL_225:
                              v113 = *((_QWORD *)v44 + 1);
                              if ( !*(_DWORD *)(v22 + 2328) )
                              {
                                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                                *(_QWORD *)(v22 + 2360) = v113;
                                *(_DWORD *)(v22 + 2328) = 1;
                                v114 = *(_DWORD *)(v22 + 2520);
                                if ( (v114 & 0x20000000) == 0
                                  && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0
                                  && (v114 & 1) != 0 )
                                {
                                  v115 = *(unsigned int *)(v22 + 2676);
                                  v116 = *(_QWORD *)(v22 + 2104);
                                  v117 = *(_QWORD *)(v22 + 2680);
                                  v34 = v115 + v22;
                                  v118 = v115
                                       + v22
                                       + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v115) >> 3);
                                  while ( v34 != v118 )
                                  {
                                    *(_QWORD *)v34 ^= v117;
                                    v117 = ((v116 ^ *(_QWORD *)v34) + __ROR8__(v117, v117 & 0x3F)) ^ 0xEFA;
                                    v34 += 8LL;
                                  }
                                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                                  if ( v117 != *(_QWORD *)(v22 + 2688) )
                                  {
                                    v119 = *(_DWORD *)(v22 + 2052);
                                    v120 = *(_QWORD *)(v22 + 1416);
                                    *(_QWORD *)v120 = v22;
                                    *(_DWORD *)(v120 + 16) = v119;
                                    if ( !*(_DWORD *)(v22 + 2328) )
                                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v117 ^ *(_QWORD *)(v22 + 2688);
                                    sub_140BDA384(v22, 0LL, v117, 256LL);
                                  }
                                }
                              }
LABEL_236:
                              *(_DWORD *)(v22 + 2120) += 16 * *((_DWORD *)v44 + 4);
LABEL_237:
                              v40 = 1;
                              goto LABEL_238;
                            }
                            v109 += 4096LL;
                            v111 += 4096LL;
                            if ( v111 == v110 )
                            {
                              __writecr8(v108);
                              goto LABEL_236;
                            }
                          }
                        }
                      }
                      __writecr8(v90);
                      v44 = v1984;
                      i9 = 0;
                    }
                  }
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v83;
                  v92 = *((_QWORD *)v44 + 1);
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v44;
                    *(_QWORD *)(v22 + 2360) = v92;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v93 = *(_DWORD *)(v22 + 2520);
                    if ( (v93 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v93 & 1) != 0 )
                    {
                      v94 = *(unsigned int *)(v22 + 2676);
                      v95 = *(_QWORD *)(v22 + 2104);
                      v96 = *(_QWORD *)(v22 + 2680);
                      v34 = v94 + v22;
                      v97 = v94 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v94) >> 3);
                      while ( v34 != v97 )
                      {
                        *(_QWORD *)v34 ^= v96;
                        v96 = ((v95 ^ *(_QWORD *)v34) + __ROR8__(v96, v96 & 0x3F)) ^ 0xEFA;
                        v34 += 8LL;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v96 != *(_QWORD *)(v22 + 2688) )
                      {
                        v98 = *(_DWORD *)(v22 + 2052);
                        v99 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v99 = v22;
                        *(_DWORD *)(v99 + 16) = v98;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v96 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v96, 256LL);
                      }
                    }
                  }
                  goto LABEL_203;
                }
                goto LABEL_2253;
              }
              v122 = (unsigned int *)&v44[16 * *(unsigned int *)(v22 + 2116) + 48];
              v123 = (unsigned __int64)&v44[16 * *((unsigned int *)v44 + 7) + 48];
              v1987 = v123;
              while ( 1 )
              {
                if ( (*v122 & 0x80000000) == 0 )
                {
                  v124 = *((_QWORD *)v122 + 1);
                  v125 = v122[1];
                  v126 = (_QWORD *)v124;
                  *(_DWORD *)(v22 + 2120) += v125;
                  v127 = (const char *)v124;
                  v128 = *(unsigned int *)(v22 + 2100);
                  v129 = *(_QWORD *)(v22 + 2104);
                  v1986 = v124;
                  LODWORD(v1990) = v125;
                  if ( v124 < v124 + v125 )
                  {
                    do
                    {
                      _mm_prefetch(v127, 0);
                      v127 += 64;
                    }
                    while ( (unsigned __int64)v127 < v124 + v125 );
                  }
                  v130 = v129;
                  v131 = (unsigned int)v125 >> 7;
                  if ( (unsigned int)v125 >> 7 )
                  {
                    do
                    {
                      v132 = 8LL;
                      do
                      {
                        v133 = v126[1] ^ __ROL8__(*v126 ^ v130, v128);
                        v126 += 2;
                        v130 = __ROL8__(v133, v128);
                        --v132;
                      }
                      while ( v132 );
                      v134 = (__ROL8__(v129 ^ ((unsigned __int64)v126 - v124), 17) ^ v129 ^ ((unsigned __int64)v126
                                                                                           - v124))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2115 = *((_QWORD *)&v134 + 1);
                      v128 = ((unsigned __int8)v134 ^ (unsigned __int8)(BYTE8(v134) ^ v128)) & 0x3F;
                      if ( !(_DWORD)v128 )
                        v128 = 1LL;
                      --v131;
                    }
                    while ( v131 );
                    v22 = (unsigned __int64)v1989;
                    LODWORD(v125) = v1990;
                    v123 = v1987;
                  }
                  v34 = v125 & 0x7F;
                  if ( (unsigned int)v34 >= 8 )
                  {
                    v135 = (unsigned __int64)(v125 & 0x7F) >> 3;
                    do
                    {
                      v130 = __ROL8__(*v126++ ^ v130, v128);
                      v34 = (unsigned int)(v34 - 8);
                      --v135;
                    }
                    while ( v135 );
                  }
                  if ( (_DWORD)v34 )
                  {
                    do
                    {
                      v136 = *(unsigned __int8 *)v126;
                      v126 = (_QWORD *)((char *)v126 + 1);
                      v130 = __ROL8__(v136 ^ v130, v128);
                      v34 = (unsigned int)(v34 - 1);
                    }
                    while ( (_DWORD)v34 );
                    v22 = (unsigned __int64)v1989;
                  }
                  for ( nn = v130; ; LODWORD(v130) = nn ^ v130 )
                  {
                    nn >>= 31;
                    if ( !nn )
                      break;
                  }
                  v138 = v130 & 0x7FFFFFFF;
                  if ( v138 == (*v122 & 0x7FFFFFFF) )
                    goto LABEL_274;
                  v139 = (unsigned int)v125;
                  if ( (_DWORD)v125 )
                  {
                    v34 = 64LL;
                    if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
                    {
                      v140 = KeGetCurrentIrql();
                      v141 = v124 & 0xFFFFFFFFFFFFF000uLL;
                      v142 = (v139 + v124 - 1) | 0xFFF;
                      v143 = (v124 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        __writecr8(2uLL);
                        while ( 1 )
                        {
                          v144 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v22 + 1128))(
                                   v141,
                                   0LL,
                                   v126,
                                   v128);
                          if ( v144 == -1073741267 )
                            break;
                          if ( v144 < 0 )
                          {
                            __writecr8(v140);
                            v124 = v1986;
                            v123 = v1987;
                            v44 = v1984;
                            goto LABEL_281;
                          }
LABEL_272:
                          v141 += 4096LL;
                          v143 += 4096LL;
                          if ( v143 == v142 )
                          {
                            __writecr8(v140);
                            v123 = v1987;
                            goto LABEL_274;
                          }
                        }
                        if ( v140 > 1u )
                          goto LABEL_272;
                        __writecr8(v140);
                      }
                    }
                  }
LABEL_281:
                  v147 = *v122;
                  LODWORD(v147) = v147 & 0x7FFFFFFF;
                  if ( *(_DWORD *)(v22 + 2328) )
                    goto LABEL_274;
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v147 ^ v138;
                  if ( *(_DWORD *)(v22 + 2328) )
                    goto LABEL_274;
                  v34 = 1LL;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *(int *)v44;
                  *(_QWORD *)(v22 + 2360) = v124;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v148 = *(_DWORD *)(v22 + 2520);
                  if ( (v148 & 0x20000000) != 0 )
                    goto LABEL_274;
                  if ( (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 )
                    goto LABEL_274;
                  if ( (v148 & 1) == 0 )
                    goto LABEL_274;
                  v149 = *(unsigned int *)(v22 + 2676);
                  v150 = *(_QWORD *)(v22 + 2104);
                  v151 = *(_QWORD *)(v22 + 2680);
                  v34 = v149 + v22;
                  v152 = v149 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v149) >> 3);
                  while ( v34 != v152 )
                  {
                    *(_QWORD *)v34 ^= v151;
                    v151 = ((v150 ^ *(_QWORD *)v34) + __ROR8__(v151, v151 & 0x3F)) ^ 0xEFA;
                    v34 += 8LL;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v151 == *(_QWORD *)(v22 + 2688) )
                  {
LABEL_274:
                    i9 = 0;
                  }
                  else
                  {
                    v153 = *(_DWORD *)(v22 + 2052);
                    i9 = 0;
                    v154 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v154 = v22;
                    *(_DWORD *)(v154 + 16) = v153;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v151 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v151, 256LL);
                  }
                }
                v122 += 4;
                v145 = v122 == (unsigned int *)v123;
                if ( (unsigned __int64)v122 >= v123 )
                  goto LABEL_278;
                v44 = v1984;
                if ( *(_DWORD *)(v22 + 2120) >= *(_DWORD *)(v22 + 2124) )
                {
                  v145 = v122 == (unsigned int *)v123;
LABEL_278:
                  if ( v145 )
                    LODWORD(v146) = 0;
                  else
                    v146 = ((char *)v122 - (v1984 + 48)) >> 4;
                  *(_DWORD *)(v22 + 2116) = v146;
LABEL_295:
                  v40 = 1;
                  goto LABEL_238;
                }
              }
            }
            v155 = *((_QWORD *)v44 + 3);
            if ( *(_WORD *)(v155 + *(_QWORD *)(v22 + 1792) + *(_QWORD *)(v22 + 1840)) != *((_WORD *)v44 + 17)
              && !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v155;
              *(_DWORD *)(v22 + 2328) = 1;
              v156 = *(_DWORD *)(v22 + 2520);
              if ( (v156 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v156 & 1) != 0 )
              {
                v157 = *(unsigned int *)(v22 + 2676);
                v158 = *(_QWORD *)(v22 + 2104);
                v159 = *(_QWORD *)(v22 + 2680);
                v160 = (_QWORD *)(v157 + v22);
                v161 = v157 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v157) >> 3);
                while ( v160 != (_QWORD *)v161 )
                {
                  *v160 ^= v159;
                  v159 = ((v158 ^ *v160++) + __ROR8__(v159, v159 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v159 != *(_QWORD *)(v22 + 2688) )
                {
                  v162 = *(_DWORD *)(v22 + 2052);
                  v163 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v163 = v22;
                  *(_DWORD *)(v163 + 16) = v162;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v159 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v159, 256LL);
                }
              }
            }
            if ( (*(_WORD *)(v22 + 1848) & *((_WORD *)v44 + 17)) == 0
              && *(_QWORD *)(v155 + *(_QWORD *)(v22 + 1800)) != v155 + *(_QWORD *)(v22 + 1800)
              && !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v155;
              *(_DWORD *)(v22 + 2328) = 1;
              v164 = *(_DWORD *)(v22 + 2520);
              if ( (v164 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v164 & 1) != 0 )
              {
                v165 = *(unsigned int *)(v22 + 2676);
                v166 = *(_QWORD *)(v22 + 2104);
                v167 = *(_QWORD *)(v22 + 2680);
                v168 = (_QWORD *)(v165 + v22);
                v169 = v165 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v165) >> 3);
                while ( v168 != (_QWORD *)v169 )
                {
                  *v168 ^= v167;
                  v167 = ((v166 ^ *v168++) + __ROR8__(v167, v167 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v167 != *(_QWORD *)(v22 + 2688) )
                {
                  v170 = *(_DWORD *)(v22 + 2052);
                  v171 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v171 = v22;
                  *(_DWORD *)(v171 + 16) = v170;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v167 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v167, 256LL);
                }
              }
            }
            v172 = (_QWORD *)*((_QWORD *)v44 + 1);
            v173 = *((unsigned int *)v44 + 4);
            v174 = v172;
            *(_DWORD *)(v22 + 2120) += v173;
            v175 = (const char *)v172;
            v176 = *(_DWORD *)(v22 + 2100);
            v177 = *(_QWORD *)(v22 + 2104);
            if ( v172 < (_QWORD *)((char *)v172 + v173) )
            {
              do
              {
                _mm_prefetch(v175, 0);
                v175 += 64;
              }
              while ( v175 < (const char *)v172 + v173 );
            }
            v178 = *(_QWORD *)(v22 + 2104);
            v179 = (unsigned int)v173 >> 7;
            if ( (unsigned int)v173 >> 7 )
            {
              do
              {
                v180 = 8LL;
                do
                {
                  v181 = v174[1] ^ __ROL8__(*v174 ^ v178, v176);
                  v174 += 2;
                  v178 = __ROL8__(v181, v176);
                  --v180;
                }
                while ( v180 );
                v182 = (__ROL8__(v177 ^ ((char *)v174 - (char *)v172), 17) ^ v177 ^ (unsigned __int64)((char *)v174 - (char *)v172))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2114 = *((_QWORD *)&v182 + 1);
                v176 = ((unsigned __int8)v182 ^ (unsigned __int8)(BYTE8(v182) ^ v176)) & 0x3F;
                if ( !v176 )
                  LOBYTE(v176) = 1;
                --v179;
              }
              while ( v179 );
              v22 = (unsigned __int64)v1989;
            }
            v183 = v173 & 0x7F;
            if ( v183 >= 8 )
            {
              v184 = (unsigned __int64)v183 >> 3;
              do
              {
                v178 = __ROL8__(*v174++ ^ v178, v176);
                v183 -= 8;
                --v184;
              }
              while ( v184 );
            }
            for ( ; v183; --v183 )
            {
              v185 = *(unsigned __int8 *)v174;
              v174 = (_QWORD *)((char *)v174 + 1);
              v178 = __ROL8__(v185 ^ v178, v176);
            }
            for ( i1 = v178; ; LODWORD(v178) = i1 ^ v178 )
            {
              i1 >>= 31;
              if ( !i1 )
                break;
            }
            v187 = v178 & 0x7FFFFFFF;
            v188 = 0;
            if ( v187 != *((_DWORD *)v44 + 5) )
            {
              if ( !*(_DWORD *)v44 )
                v188 = *((_DWORD *)v44 + 6) != 0;
              v189 = *((_QWORD *)v44 + 1);
              if ( *((_DWORD *)v44 + 4) )
              {
                v190 = 64LL;
                if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
                {
                  v191 = KeGetCurrentIrql();
                  v192 = v189 & 0xFFFFFFFFFFFFF000uLL;
                  v193 = (v189 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                  v194 = (v189 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    __writecr8(2uLL);
                    while ( 1 )
                    {
                      v195 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                               v192,
                               0LL,
                               v190,
                               v174);
                      if ( v195 == -1073741267 )
                        break;
                      if ( v195 < 0 )
                      {
LABEL_359:
                        __writecr8(v191);
                        v44 = v1984;
                        i9 = 0;
                        goto LABEL_360;
                      }
LABEL_350:
                      v192 += 4096LL;
                      v194 += 4096LL;
                      if ( v194 == v193 )
                      {
                        __writecr8(v191);
                        v44 = v1984;
                        i9 = 0;
                        goto LABEL_352;
                      }
                    }
                    if ( v188 )
                      goto LABEL_359;
                    if ( v191 > 1u )
                      goto LABEL_350;
                    __writecr8(v191);
                  }
                }
              }
LABEL_360:
              if ( !*(_DWORD *)(v22 + 2328) )
                *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v187;
              v206 = *((_QWORD *)v44 + 1);
              if ( !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                *(_QWORD *)(v22 + 2360) = v206;
                *(_DWORD *)(v22 + 2328) = 1;
                v207 = *(_DWORD *)(v22 + 2520);
                if ( (v207 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v207 & 1) != 0 )
                {
                  v208 = *(unsigned int *)(v22 + 2676);
                  v209 = *(_QWORD *)(v22 + 2104);
                  v210 = *(_QWORD *)(v22 + 2680);
                  v211 = (_QWORD *)(v208 + v22);
                  v212 = v208 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v208) >> 3);
                  while ( v211 != (_QWORD *)v212 )
                  {
                    *v211 ^= v210;
                    v210 = ((v209 ^ *v211++) + __ROR8__(v210, v210 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v210 != *(_QWORD *)(v22 + 2688) )
                  {
                    v213 = *(_DWORD *)(v22 + 2052);
                    v214 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v214 = v22;
                    *(_DWORD *)(v214 + 16) = v213;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v210 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v210, 256LL);
                  }
                }
              }
            }
LABEL_352:
            v2066 = v44 + 48;
            v196 = *((_WORD *)v44 + 16);
            v1982 = &v2034;
            v2065[0] = v196;
            v2065[1] = v196;
            v197 = *(_QWORD *)(v22 + 1280);
            v198 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v22 + 504);
            LOBYTE(v1981) = 0;
            if ( v198(v2065, 0LL, 0LL, 0LL, v197, v1981, 0LL, &v2034) < 0 )
              goto LABEL_237;
            v199 = v2034;
            if ( v2034 != *((_QWORD *)v44 + 3) && !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v199;
              *(_DWORD *)(v22 + 2328) = 1;
              v200 = *(_DWORD *)(v22 + 2520);
              if ( (v200 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v200 & 1) != 0 )
              {
                v201 = *(unsigned int *)(v22 + 2676);
                v202 = *(_QWORD *)(v22 + 2104);
                v203 = *(_QWORD *)(v22 + 2680);
                v204 = (_QWORD *)(v201 + v22);
                v205 = v201 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v201) >> 3);
                while ( v204 != (_QWORD *)v205 )
                {
                  *v204 ^= v203;
                  v203 = ((v202 ^ *v204++) + __ROR8__(v203, v203 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v203 != *(_QWORD *)(v22 + 2688) )
                {
                  v215 = *(_DWORD *)(v22 + 2052);
                  v216 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v216 = v22;
                  *(_DWORD *)(v216 + 16) = v215;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v203 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v203, 256LL);
                }
              }
            }
            v217 = *(void (**)(void))(v22 + 496);
            goto LABEL_380;
          }
          v234 = *(_DWORD *)(v22 + 2128);
          if ( (v234 & 1) == 0 )
            goto LABEL_238;
          if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
          {
            v236 = __rdtsc();
            v237 = (__ROR8__(v236, 3) ^ v236) * (unsigned __int128)0x7010008004002001uLL;
            v2113 = *((_QWORD *)&v237 + 1);
            v235 = v237 ^ *((_QWORD *)&v237 + 1);
            v34 = ((unsigned __int64)v237 ^ *((_QWORD *)&v237 + 1)) / 3;
            LODWORD(v1990) = v235 == 3 * v34;
          }
          else
          {
            v235 = v234 & 3;
            LODWORD(v1990) = (_BYTE)v235 == 3;
          }
          v238 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 392);
          v239 = 0;
          v240 = *(_QWORD *)(v22 + 1344);
          v1985 = 0;
          v238(v235, v34);
          if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 || (v241 = *(_DWORD *)(v22 + 2424), v241 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312))(*(_QWORD *)(v22 + 2632), 0LL);
            v242 = 0x80;
          }
          else
          {
            v242 = 1 << v241;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(v22 + 328))(v240, 0LL);
          v243 = *(volatile signed __int8 ***)(v22 + 1304);
          v244 = *v243;
          if ( *v243 != (volatile signed __int8 *)v243 )
          {
            do
            {
              _InterlockedOr8(&v244[*(_QWORD *)(v22 + 1736) - *(_QWORD *)(v22 + 1760)], v242);
              v244 = *(volatile signed __int8 **)v244;
              ++v239;
            }
            while ( v244 != (volatile signed __int8 *)v243 );
            v1985 = v239;
          }
          v245 = 4LL;
          v246 = **(_QWORD **)(v22 + 1352);
          v247 = *(unsigned int *)(*(_QWORD *)(v22 + 1856) + v246);
          while ( 1 )
          {
            v248 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 272))(v246, v245);
            if ( v248 )
              break;
LABEL_462:
            v245 += 4LL;
            if ( v245 >= v247 )
            {
              if ( v242 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 336))(*(_QWORD *)(v22 + 1344), 0LL);
              (*(void (**)(void))(v22 + 400))();
              *(_DWORD *)(v22 + 2120) += ((unsigned int)(v247 >> 2) + v1985) << 8;
              goto LABEL_466;
            }
          }
          v249 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(v22 + 280))(v248);
          v250 = v249;
          v251 = *v249 & 0x7F;
          if ( v251 == 3 )
          {
            if ( (v242 & v249[*(_QWORD *)(v22 + 1736)]) == 0
              && (*(_DWORD *)&v249[*(_QWORD *)(v22 + 1744)] & *(_DWORD *)(v22 + 1768)) != 0
              && !*(_DWORD *)(v22 + 2328) )
            {
              v252 = (int *)v1984;
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = (char *)v252 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *v252;
              *(_QWORD *)(v22 + 2360) = v249;
              *(_DWORD *)(v22 + 2328) = 1;
              v253 = *(_DWORD *)(v22 + 2520);
              if ( (v253 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v253 & 1) != 0 )
              {
                v254 = *(unsigned int *)(v22 + 2676);
                v255 = *(_QWORD *)(v22 + 2104);
                v256 = *(_QWORD *)(v22 + 2680);
                v257 = (_QWORD *)(v254 + v22);
                v258 = v254 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v254) >> 3);
                while ( v257 != (_QWORD *)v258 )
                {
                  *v257 ^= v256;
                  v256 = ((v255 ^ *v257++) + __ROR8__(v256, v256 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v256 != *(_QWORD *)(v22 + 2688) )
                {
                  v259 = *(_DWORD *)(v22 + 2052);
                  v260 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v260 = v22;
                  *(_DWORD *)(v260 + 16) = v259;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v256 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v256, 256LL);
                }
              }
            }
            _InterlockedAnd8(&v250[*(_QWORD *)(v22 + 1736)], ~v242);
            goto LABEL_461;
          }
          if ( v251 == 6 )
          {
            if ( (_DWORD)v1990 )
            {
              if ( (v261 = *(_QWORD *)(v22 + 1680), v262 = *(_QWORD *)&v249[v261 + 32], v262 != *(_QWORD *)(v22 + 800))
                && v262 != *(_QWORD *)(v22 + 808)
                || *(_QWORD *)&v250[v261 + 48] != *(_QWORD *)(v22 + 816)
                || *(_QWORD *)&v250[v261 + 40] != *(_QWORD *)(v22 + 824) )
              {
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  v263 = (int *)v1984;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = (char *)v263 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *v263;
                  *(_QWORD *)(v22 + 2360) = v250;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v264 = *(_DWORD *)(v22 + 2520);
                  if ( (v264 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v264 & 1) != 0 )
                  {
                    v265 = *(unsigned int *)(v22 + 2676);
                    v266 = *(_QWORD *)(v22 + 2104);
                    v267 = *(_QWORD *)(v22 + 2680);
                    v268 = (_QWORD *)(v265 + v22);
                    v269 = v265 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v265) >> 3);
                    while ( v268 != (_QWORD *)v269 )
                    {
                      *v268 ^= v267;
                      v267 = ((v266 ^ *v268++) + __ROR8__(v267, v267 & 0x3F)) ^ 0xEFA;
                    }
                    goto LABEL_457;
                  }
                }
              }
            }
          }
          else if ( v251 )
          {
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              v270 = (int *)v1984;
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = (char *)v270 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *v270;
              *(_QWORD *)(v22 + 2360) = v249;
              *(_DWORD *)(v22 + 2328) = 1;
              v271 = *(_DWORD *)(v22 + 2520);
              if ( (v271 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v271 & 1) != 0 )
              {
                v272 = *(unsigned int *)(v22 + 2676);
                v273 = *(_QWORD *)(v22 + 2104);
                v267 = *(_QWORD *)(v22 + 2680);
                v274 = (_QWORD *)(v272 + v22);
                v275 = v272 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v272) >> 3);
                while ( v274 != (_QWORD *)v275 )
                {
                  *v274 ^= v267;
                  v267 = ((v273 ^ *v274++) + __ROR8__(v267, v267 & 0x3F)) ^ 0xEFA;
                }
LABEL_457:
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v267 != *(_QWORD *)(v22 + 2688) )
                {
                  v276 = *(_DWORD *)(v22 + 2052);
                  v277 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v277 = v22;
                  *(_DWORD *)(v277 + 16) = v276;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v267 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v267, 256LL);
                }
              }
            }
          }
LABEL_461:
          (*(void (__fastcall **)(__int64, __int64))(v22 + 304))(v246, v248);
          goto LABEL_462;
        }
        goto LABEL_2692;
      }
      if ( v66 == 21 )
      {
        v1091 = *((_DWORD *)v44 + 10);
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 432))(v2127, *((unsigned int *)v44 + 11));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2127, v2128);
        v55 = v1091 == 0;
        v1092 = __readcr4();
        if ( v55 )
          v1092 = __readcr0();
        (*(void (__fastcall **)(_BYTE *))(v22 + 424))(v2128);
        v34 = *((_QWORD *)v44 + 4);
        v1093 = v1092 & *((_QWORD *)v44 + 3);
        if ( v1093 == v34 )
          goto LABEL_238;
        v1094 = *((_QWORD *)v44 + 5);
        if ( *(_DWORD *)(v22 + 2328) )
          goto LABEL_238;
        v34 ^= v1093;
        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v34;
        if ( *(_DWORD *)(v22 + 2328) )
          goto LABEL_238;
        *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v22 + 2352) = *(int *)v44;
        *(_QWORD *)(v22 + 2360) = v1094;
        *(_DWORD *)(v22 + 2328) = 1;
        v1095 = *(_DWORD *)(v22 + 2520);
        if ( (v1095 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1095 & 1) == 0 )
          goto LABEL_238;
        v1096 = *(unsigned int *)(v22 + 2676);
        v1097 = *(_QWORD *)(v22 + 2104);
        v339 = *(_QWORD *)(v22 + 2680);
        v34 = v1096 + v22;
        v1098 = v1096 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1096) >> 3);
        while ( v34 != v1098 )
        {
          *(_QWORD *)v34 ^= v339;
          v339 = ((v1097 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
          v34 += 8LL;
        }
        goto LABEL_550;
      }
      if ( v66 != 24 )
      {
        if ( v66 != 25 )
        {
          if ( v66 == 26 )
          {
            if ( (*(_DWORD *)(v22 + 2128) & 1) != 0 )
              goto LABEL_238;
            v566 = *(_QWORD *)(v22 + 1440);
            v567 = *(_QWORD *)(v22 + 1344);
            v1986 = *(_QWORD *)(v22 + 1448);
            v568 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 392);
            LODWORD(v1990) = 0;
            v1987 = v566;
            v568((unsigned int)(v66 - 26), v34);
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 || (v569 = *(_DWORD *)(v22 + 2424), v569 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312))(*(_QWORD *)(v22 + 2632), 0LL);
              v570 = 0x80;
            }
            else
            {
              v570 = 1 << v569;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 328))(v567, 0LL);
            v571 = *(volatile signed __int8 ***)(v22 + 1304);
            v572 = *v571;
            if ( *v571 != (volatile signed __int8 *)v571 )
            {
              do
              {
                _InterlockedOr8(&v572[*(_QWORD *)(v22 + 1736) - *(_QWORD *)(v22 + 1760)], v570);
                v572 = *(volatile signed __int8 **)v572;
                ++i9;
              }
              while ( v572 != (volatile signed __int8 *)v571 );
              LODWORD(v1990) = i9;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 328))(v566, 0LL);
            v573 = *(_QWORD ***)(v22 + 1432);
            v574 = *v573;
            if ( *v573 != v573 )
            {
              v575 = v1986;
              v576 = (int *)v1984;
              do
              {
                v577 = (char *)v574 - *(_QWORD *)(v22 + 1872);
                if ( v577 != (char *)v575 )
                {
                  v578 = *(_QWORD *)&v577[*(_QWORD *)(v22 + 1864)];
                  if ( (v570 & *(_BYTE *)(v578 + *(_QWORD *)(v22 + 1736))) == 0
                    && (*(_DWORD *)(v578 + *(_QWORD *)(v22 + 1744)) & *(_DWORD *)(v22 + 1768)) != 0
                    && !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = (char *)v576 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *v576;
                    *(_QWORD *)(v22 + 2360) = v578;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v579 = *(_DWORD *)(v22 + 2520);
                    if ( (v579 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v579 & 1) != 0 )
                    {
                      v580 = *(unsigned int *)(v22 + 2676);
                      v581 = *(_QWORD *)(v22 + 2104);
                      v582 = *(_QWORD *)(v22 + 2680);
                      v583 = (_QWORD *)(v580 + v22);
                      v584 = v580 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v580) >> 3);
                      while ( v583 != (_QWORD *)v584 )
                      {
                        *v583 ^= v582;
                        v582 = ((v581 ^ *v583++) + __ROR8__(v582, v582 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v582 != *(_QWORD *)(v22 + 2688) )
                      {
                        v585 = *(_DWORD *)(v22 + 2052);
                        v586 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v586 = v22;
                        *(_DWORD *)(v586 + 16) = v585;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v582 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v582, 256LL);
                      }
                    }
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v578 + *(_QWORD *)(v22 + 1736)), ~v570);
                  v575 = v1986;
                }
                v574 = (_QWORD *)*v574;
              }
              while ( v574 != v573 );
              i9 = v1990;
              v566 = v1987;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 336))(v566, 0LL);
            if ( v570 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 2632), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 336))(*(_QWORD *)(v22 + 1344), 0LL);
            (*(void (**)(void))(v22 + 400))();
            *(_DWORD *)(v22 + 2120) += i9 << 8;
            goto LABEL_466;
          }
          if ( v66 == 27 )
          {
            if ( (*(_DWORD *)(v22 + 2128) & 1) != 0 )
            {
              v536 = *(_QWORD *)(v22 + 1440);
              v537 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 392);
              v538 = *(_QWORD *)(v22 + 1344);
              v1985 = 0;
              v539 = *(_QWORD **)(v22 + 1448);
              v1987 = (__int64)v539;
              v1991 = v536;
              v537((unsigned int)(v66 - 27), v34);
              if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 || (v540 = *(_DWORD *)(v22 + 2424), v540 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312))(*(_QWORD *)(v22 + 2632), 0LL);
                LOBYTE(v37) = 0x80;
              }
              else
              {
                v37 = 1;
                LOBYTE(v37) = 1 << v540;
              }
              v541 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 328);
              v1993 = v37;
              v541(v538, 0LL);
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v22 + 328))(v536, 0LL);
              v542 = *(_QWORD ***)(v22 + 1432);
              v543 = 0LL;
              v1986 = 0LL;
              v544 = *v542;
              if ( *v542 != v542 )
              {
                do
                {
                  if ( v544 - 3 != v539 )
                  {
                    v545 = *(_QWORD *)((char *)v544 + *(_QWORD *)(v22 + 1864) - 24);
                    if ( (*(_DWORD *)(v545 + *(_QWORD *)(v22 + 1744)) & *(_DWORD *)(v22 + 1768)) == 0 )
                    {
                      v546 = *(_QWORD *)((char *)v544 + *(_QWORD *)(v22 + 1864) - 24);
                      if ( v543 )
                        v546 = 1LL;
                      v543 = v546;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v545 + *(_QWORD *)(v22 + 1736)), v37);
                  }
                  v544 = (_QWORD *)*v544;
                }
                while ( v544 != v542 );
                v1986 = v543;
              }
              v547 = *(_QWORD ***)(v22 + 1304);
              v548 = *v547;
              if ( *v547 != v547 )
              {
                v549 = v1985;
                v550 = (unsigned __int8)v37;
                v551 = ~(_BYTE)v37;
                v552 = v1987;
                LODWORD(v1990) = v550;
                do
                {
                  v553 = (char *)v548 - *(_QWORD *)(v22 + 1760);
                  if ( (v553[*(_QWORD *)(v22 + 1736)] & v550) == 0 )
                  {
                    v554 = *(_QWORD *)&v553[*(_QWORD *)(v22 + 1752)];
                    if ( v554 )
                    {
                      if ( v554 != v552 && !*(_DWORD *)(v22 + 2328) )
                      {
                        v555 = (int *)v1984;
                        *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v22 + 2344) = (char *)v555 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v22 + 2352) = *v555;
                        *(_QWORD *)(v22 + 2360) = v553;
                        *(_DWORD *)(v22 + 2328) = 1;
                        v556 = *(_DWORD *)(v22 + 2520);
                        if ( (v556 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v556 & 1) != 0 )
                        {
                          v557 = *(unsigned int *)(v22 + 2676);
                          v558 = *(_QWORD *)(v22 + 2104);
                          v559 = *(_QWORD *)(v22 + 2680);
                          v560 = (_QWORD *)(v557 + v22);
                          v561 = v557
                               + v22
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v557) >> 3);
                          while ( v560 != (_QWORD *)v561 )
                          {
                            *v560 ^= v559;
                            v559 = ((v558 ^ *v560++) + __ROR8__(v559, v559 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                          if ( v559 != *(_QWORD *)(v22 + 2688) )
                          {
                            v562 = *(_DWORD *)(v22 + 2052);
                            v563 = *(_QWORD *)(v22 + 1416);
                            *(_QWORD *)v563 = v22;
                            *(_DWORD *)(v563 + 16) = v562;
                            if ( !*(_DWORD *)(v22 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v559 ^ *(_QWORD *)(v22 + 2688);
                            sub_140BDA384(v22, 0LL, v559, 256LL);
                          }
                          v550 = v1990;
                        }
                      }
                    }
                  }
                  _InterlockedAnd8(&v553[*(_QWORD *)(v22 + 1736)], v551);
                  v548 = (_QWORD *)*v548;
                  ++v549;
                }
                while ( v548 != v547 );
                LOBYTE(v37) = v1993;
                v539 = (_QWORD *)v1987;
                v1985 = v549;
                v543 = v1986;
              }
              v40 = 1;
              if ( v543 )
              {
                if ( v543 == 1 )
                {
                  v564 = *(_QWORD ***)(v22 + 1432);
                  for ( i2 = *v564; i2 != v564; i2 = (_QWORD *)*i2 )
                  {
                    if ( i2 - 3 != v539 )
                      _InterlockedAnd8(
                        (volatile signed __int8 *)(*(_QWORD *)((char *)i2 + *(_QWORD *)(v22 + 1864) - 24)
                                                 + *(_QWORD *)(v22 + 1736)),
                        ~(_BYTE)v37);
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v22 + 1736) + v543), ~(_BYTE)v37);
                }
              }
              (*(void (__fastcall **)(unsigned __int64, _QWORD))(v22 + 336))(v1991, 0LL);
              if ( (_BYTE)v37 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 2632), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 336))(*(_QWORD *)(v22 + 1344), 0LL);
              (*(void (**)(void))(v22 + 400))();
              *(_DWORD *)(v22 + 2120) += v1985 << 8;
              i9 = 0;
            }
            goto LABEL_238;
          }
          if ( v66 != 28 )
          {
            if ( v66 == 29 )
            {
              v365 = (_QWORD *)*((_QWORD *)v44 + 1);
              v366 = *((unsigned int *)v44 + 4);
              v367 = v365;
              *(_DWORD *)(v22 + 2120) += v366;
              v368 = (const char *)v365;
              v369 = *(_DWORD *)(v22 + 2100);
              v370 = *(_QWORD *)(v22 + 2104);
              if ( v365 < (_QWORD *)((char *)v365 + v366) )
              {
                do
                {
                  _mm_prefetch(v368, 0);
                  v368 += 64;
                }
                while ( v368 < (const char *)v365 + v366 );
              }
              v371 = *(_QWORD *)(v22 + 2104);
              v372 = (unsigned int)v366 >> 7;
              if ( (unsigned int)v366 >> 7 )
              {
                do
                {
                  v373 = 8LL;
                  do
                  {
                    v374 = v367[1] ^ __ROL8__(*v367 ^ v371, v369);
                    v367 += 2;
                    v371 = __ROL8__(v374, v369);
                    --v373;
                  }
                  while ( v373 );
                  v375 = (__ROL8__(v370 ^ ((char *)v367 - (char *)v365), 17) ^ v370 ^ (unsigned __int64)((char *)v367 - (char *)v365))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2111 = *((_QWORD *)&v375 + 1);
                  v376 = v375 ^ BYTE8(v375) ^ v369;
                  v34 = 0xFFFFFFFFLL;
                  v369 = v376 & 0x3F;
                  if ( !v369 )
                    LOBYTE(v369) = 1;
                  --v372;
                }
                while ( v372 );
                v22 = (unsigned __int64)v1989;
              }
              else
              {
                v34 = 0xFFFFFFFFLL;
              }
              v377 = v366 & 0x7F;
              if ( (unsigned int)v377 >= 8 )
              {
                v378 = (unsigned __int64)(unsigned int)v377 >> 3;
                do
                {
                  v371 = __ROL8__(*v367++ ^ v371, v369);
                  v377 = (unsigned int)(v377 - 8);
                  --v378;
                }
                while ( v378 );
              }
              for ( ; (_DWORD)v377; v377 = (unsigned int)(v377 - 1) )
              {
                v379 = *(unsigned __int8 *)v367;
                v367 = (_QWORD *)((char *)v367 + 1);
                v371 = __ROL8__(v379 ^ v371, v369);
              }
              for ( i3 = v371; ; LODWORD(v371) = i3 ^ v371 )
              {
                i3 >>= 31;
                if ( !i3 )
                  break;
              }
              v381 = v371 & 0x7FFFFFFF;
              v382 = 0;
              if ( v381 != *((_DWORD *)v44 + 5) )
              {
                if ( !*(_DWORD *)v44 )
                  v382 = *((_DWORD *)v44 + 6) != 0;
                v34 = *((_QWORD *)v44 + 1);
                if ( *((_DWORD *)v44 + 4) )
                {
                  v377 = 64LL;
                  if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
                  {
                    v383 = KeGetCurrentIrql();
                    v384 = v34 & 0xFFFFFFFFFFFFF000uLL;
                    v385 = (v34 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                    v386 = (v34 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      __writecr8(2uLL);
                      while ( 1 )
                      {
                        v387 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                                 v384,
                                 0LL,
                                 v377,
                                 v367);
                        if ( v387 == -1073741267 )
                          break;
                        if ( v387 < 0 )
                        {
LABEL_641:
                          __writecr8(v383);
                          v44 = v1984;
                          i9 = 0;
                          goto LABEL_642;
                        }
LABEL_623:
                        v384 += 4096LL;
                        v386 += 4096LL;
                        if ( v386 == v385 )
                        {
                          __writecr8(v383);
                          v44 = v1984;
                          i9 = 0;
                          goto LABEL_625;
                        }
                      }
                      if ( v382 )
                        goto LABEL_641;
                      if ( v383 > 1u )
                        goto LABEL_623;
                      __writecr8(v383);
                    }
                  }
                }
LABEL_642:
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v381;
                v406 = *((_QWORD *)v44 + 1);
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  v34 = 1LL;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *(int *)v44;
                  *(_QWORD *)(v22 + 2360) = v406;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v407 = *(_DWORD *)(v22 + 2520);
                  if ( (v407 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v407 & 1) != 0 )
                  {
                    v408 = *(unsigned int *)(v22 + 2676);
                    v409 = *(_QWORD *)(v22 + 2104);
                    v377 = *(_QWORD *)(v22 + 2680);
                    v34 = v408 + v22;
                    v367 = (_QWORD *)(v408
                                    + v22
                                    + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v408) >> 3));
                    while ( (_QWORD *)v34 != v367 )
                    {
                      *(_QWORD *)v34 ^= v377;
                      v377 = ((v409 ^ *(_QWORD *)v34) + __ROR8__(v377, v377 & 0x3F)) ^ 0xEFA;
                      v34 += 8LL;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v377 != *(_QWORD *)(v22 + 2688) )
                    {
                      v410 = *(_DWORD *)(v22 + 2052);
                      v411 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v411 = v22;
                      *(_DWORD *)(v411 + 16) = v410;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v377 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v377, 256LL);
                    }
                  }
                }
              }
LABEL_625:
              v388 = (__int64 **)*((_QWORD *)v44 + 1);
              v389 = *((_DWORD *)v44 + 4) >> 4;
              v1986 = (__int64)v388;
              if ( !v389 )
                goto LABEL_295;
              v390 = v389;
              v1987 = v389;
              do
              {
                v391 = v44;
                v392 = **v388;
                v2043 = 0LL;
                v393 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD *))(v22 + 784))(
                         v392,
                         &v2043,
                         v377,
                         v367);
                if ( v393 )
                {
                  do
                  {
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(v393, &v2110) )
                    {
                      if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                      {
                        v394 = *(_QWORD **)(v22 + 2760);
                        v395 = 48;
                        v396 = 6LL;
                        do
                        {
                          v395 -= 8;
                          *v394 = *(_QWORD *)v391;
                          v391 += 8;
                          ++v394;
                          --v396;
                        }
                        while ( v396 );
                        if ( v395 )
                        {
                          do
                          {
                            v397 = *v391++;
                            *(_BYTE *)v394 = v397;
                            v394 = (_QWORD *)((char *)v394 + 1);
                            --v395;
                          }
                          while ( v395 );
                          v22 = (unsigned __int64)v1989;
                        }
                        v391 = *(char **)(v22 + 2760);
                      }
                      *((_QWORD *)v391 + 3) = v393;
                      *((_QWORD *)v391 + 4) = v392;
                      v398 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v398 = v391;
                      *(_DWORD *)(v398 + 16) = 48;
                      v399 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)(v399 + 8) = v393;
                      *(_DWORD *)(v399 + 20) = 4096;
                      if ( !*(_DWORD *)(v22 + 2328) )
                      {
                        *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v22 + 2344) = v391 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v22 + 2352) = *(int *)v391;
                        *(_QWORD *)(v22 + 2360) = 6LL;
                        *(_DWORD *)(v22 + 2328) = 1;
                        v400 = *(_DWORD *)(v22 + 2520);
                        if ( (v400 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v400 & 1) != 0 )
                        {
                          v401 = *(unsigned int *)(v22 + 2676);
                          v402 = *(_QWORD *)(v22 + 2104);
                          v403 = *(_QWORD *)(v22 + 2680);
                          v404 = (_QWORD *)(v401 + v22);
                          v405 = v401
                               + v22
                               + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v401) >> 3);
                          while ( v404 != (_QWORD *)v405 )
                          {
                            *v404 ^= v403;
                            v403 = ((v402 ^ *v404++) + __ROR8__(v403, v403 & 0x3F)) ^ 0xEFA;
                          }
                          *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                          if ( v403 != *(_QWORD *)(v22 + 2688) )
                          {
                            v412 = *(_DWORD *)(v22 + 2052);
                            v413 = *(_QWORD *)(v22 + 1416);
                            *(_QWORD *)v413 = v22;
                            *(_DWORD *)(v413 + 16) = v412;
                            if ( !*(_DWORD *)(v22 + 2328) )
                              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v403 ^ *(_QWORD *)(v22 + 2688);
                            sub_140BDA384(v22, 0LL, v403, 256LL);
                          }
                        }
                      }
                    }
                    v393 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v22 + 784))(v392, &v2043);
                  }
                  while ( v393 );
                  v388 = (__int64 **)v1986;
                  v390 = v1987;
                  v44 = v1984;
                }
                v388 += 2;
                --v390;
                v1986 = (__int64)v388;
                v1987 = v390;
              }
              while ( v390 );
              goto LABEL_466;
            }
LABEL_2253:
            v1518 = v66 - 2;
            if ( v1518 )
            {
              v1519 = v1518 - 1;
              if ( !v1519 )
              {
                (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 432))(v2133, *((unsigned int *)v44 + 10));
                (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2133, v2134);
                KiGetGdtIdt(&v2040, &v2146);
                v1551 = v2041;
                v1552 = *((unsigned int *)v44 + 4);
                if ( (*(_BYTE *)(v22 + 2203) & 2) != 0 )
                {
                  v1553 = *(_QWORD *)(v22 + 2304);
                  v1554 = 304;
                  v1555 = (_QWORD *)v1553;
                  v1556 = 38LL;
                  do
                  {
                    *v1555 = 0LL;
                    v1554 -= 8;
                    ++v1555;
                    --v1556;
                  }
                  while ( v1556 );
                  for ( ; v1554; --v1554 )
                  {
                    *(_BYTE *)v1555 = 0;
                    v1555 = (_QWORD *)((char *)v1555 + 1);
                  }
                  *(_OWORD *)(v1553 + 16) = *(_OWORD *)(v22 + 2152);
                  *(_OWORD *)(v1553 + 32) = *(_OWORD *)(v22 + 2168);
                  *(_OWORD *)(v1553 + 288) = *(_OWORD *)(v22 + 2184);
                  v2054 = 303;
                  v2055 = v1553;
                  *(_WORD *)(v1553 + 16) = v22 + 2200;
                  v2102 = v22 + 2200;
                  *(_WORD *)(v1553 + 22) = (unsigned int)(v22 + 2200) >> 16;
                  *(_DWORD *)(v1553 + 24) = (v22 + 2200) >> 32;
                  _disable();
                  __sidt(v2072);
                  __lidt(&v2054);
                  __writedr(7u, 0LL);
                  *(_WORD *)(v1553 + 16) = v22 + 2206;
                  *(_WORD *)(v1553 + 22) = (unsigned int)(v22 + 2206) >> 16;
                  *(_DWORD *)(v1553 + 24) = (v22 + 2206) >> 32;
                  if ( (*(_BYTE *)(v22 + 2203) & 0x20) != 0 )
                  {
                    *(_WORD *)(v22 + 2250) = KiGetSs();
                    __writedr(0, v22 + 2250);
                    __writedr(7u, 0x70001uLL);
                    *(_QWORD *)(v22 + 2312) = KiErrataSkx55Present(v22 + 2250);
                    __writedr(7u, 0LL);
                    __writedr(0, 0LL);
                  }
                  else
                  {
                    *(_QWORD *)(v22 + 2312) = KiErrata704Present();
                  }
                  *(_DWORD *)(v22 + 2320) = KeGetPcr()->Prcb.Number;
                  __lidt(v2072);
                  _enable();
                }
                Ldtr = (unsigned __int16)KiGetLdtr();
                Tr = KiGetTr();
                *(_DWORD *)(v22 + 2120) += v1552;
                v1559 = *(_DWORD *)(v22 + 2100);
                v1560 = Tr;
                v1561 = *(_QWORD *)(v22 + 2104);
                v1562 = v1551;
                v1983 = Tr;
                v1563 = (const char *)v1551;
                if ( v1551 < (_QWORD *)((char *)v1551 + v1552) )
                {
                  do
                  {
                    _mm_prefetch(v1563, 0);
                    v1563 += 64;
                  }
                  while ( v1563 < (const char *)v1551 + v1552 );
                }
                v1564 = v1561;
                v1565 = (unsigned int)v1552 >> 7;
                if ( (unsigned int)v1552 >> 7 )
                {
                  do
                  {
                    v1566 = 8LL;
                    do
                    {
                      v1567 = v1562[1] ^ __ROL8__(*v1562 ^ v1564, v1559);
                      v1562 += 2;
                      v1564 = __ROL8__(v1567, v1559);
                      --v1566;
                    }
                    while ( v1566 );
                    v1568 = __ROL8__(v1561 ^ ((char *)v1562 - (char *)v1551), 17) ^ v1561 ^ ((char *)v1562
                                                                                           - (char *)v1551);
                    v2103 = (v1568 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1559 = ((unsigned __int8)(v2103 ^ v1568) ^ (unsigned __int8)v1559) & 0x3F;
                    if ( !v1559 )
                      LOBYTE(v1559) = 1;
                    --v1565;
                  }
                  while ( v1565 );
                  v22 = (unsigned __int64)v1989;
                  v1560 = v1983;
                }
                v1569 = v1552 & 0x7F;
                if ( v1569 >= 8 )
                {
                  v1570 = (unsigned __int64)v1569 >> 3;
                  do
                  {
                    v1564 = __ROL8__(*v1562++ ^ v1564, v1559);
                    v1569 -= 8;
                    --v1570;
                  }
                  while ( v1570 );
                }
                if ( v1569 )
                {
                  do
                  {
                    v1571 = *(unsigned __int8 *)v1562;
                    v1562 = (_QWORD *)((char *)v1562 + 1);
                    v1564 = __ROL8__(v1571 ^ v1564, v1559);
                    --v1569;
                  }
                  while ( v1569 );
                  v22 = (unsigned __int64)v1989;
                }
                for ( i4 = v1564; ; LODWORD(v1564) = i4 ^ v1564 )
                {
                  i4 >>= 31;
                  if ( !i4 )
                    break;
                }
                v1573 = v1564 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *))(v22 + 424))(v2134, 1LL, v1562);
                if ( v1573 == *((_DWORD *)v44 + 5) && v2040 == *((_WORD *)v44 + 22) && !(_WORD)Ldtr && v1560 == 64 )
                {
                  i9 = 0;
                  v40 = 1;
                }
                else
                {
                  if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                  {
                    v1574 = *(_QWORD **)(v22 + 2760);
                    LODWORD(v34) = 48;
                    v1575 = 6LL;
                    do
                    {
                      v34 = (unsigned int)(v34 - 8);
                      *v1574 = *(_QWORD *)v44;
                      v44 += 8;
                      ++v1574;
                      --v1575;
                    }
                    while ( v1575 );
                    if ( (_DWORD)v34 )
                    {
                      do
                      {
                        v1576 = *v44++;
                        *(_BYTE *)v1574 = v1576;
                        v1574 = (_QWORD *)((char *)v1574 + 1);
                        v34 = (unsigned int)(v34 - 1);
                      }
                      while ( (_DWORD)v34 );
                      v22 = (unsigned __int64)v1989;
                    }
                    v44 = *(char **)(v22 + 2760);
                  }
                  *((_QWORD *)v44 + 3) = v2041;
                  *((_QWORD *)v44 + 4) = v1573;
                  if ( (_WORD)Ldtr )
                  {
                    *((_QWORD *)v44 + 3) = Ldtr;
                  }
                  else if ( v1560 != 64 )
                  {
                    *((_QWORD *)v44 + 3) = v1560;
                  }
                  i9 = 0;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *((unsigned int *)v44 + 5) ^ (unsigned __int64)v1573;
                  v1577 = *((_QWORD *)v44 + 1);
                  v40 = 1;
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v44;
                    *(_QWORD *)(v22 + 2360) = v1577;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1578 = *(_DWORD *)(v22 + 2520);
                    if ( (v1578 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1578 & 1) != 0 )
                    {
                      v1579 = *(unsigned int *)(v22 + 2676);
                      v1580 = *(_QWORD *)(v22 + 2104);
                      v1581 = *(_QWORD *)(v22 + 2680);
                      v34 = v1579 + v22;
                      v1582 = v1579 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1579) >> 3);
                      while ( v34 != v1582 )
                      {
                        *(_QWORD *)v34 ^= v1581;
                        v1581 = ((v1580 ^ *(_QWORD *)v34) + __ROR8__(v1581, v1581 & 0x3F)) ^ 0xEFA;
                        v34 += 8LL;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v1581 != *(_QWORD *)(v22 + 2688) )
                      {
                        v1583 = *(_DWORD *)(v22 + 2052);
                        v1584 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v1584 = v22;
                        *(_DWORD *)(v1584 + 16) = v1583;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1581 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v1581, 256LL);
                      }
                    }
                  }
                }
                *(_DWORD *)(v22 + 2120) += 0x8000;
                goto LABEL_238;
              }
              if ( v1519 != 20 )
              {
                if ( *(_DWORD *)(v22 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = 257LL;
                *(_QWORD *)(v22 + 2360) = 0LL;
                *(_DWORD *)(v22 + 2328) = 1;
                v1520 = *(_DWORD *)(v22 + 2520);
                if ( (v1520 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v1520 & 1) == 0 )
                  goto LABEL_238;
                v1521 = *(unsigned int *)(v22 + 2676);
                v1522 = *(_QWORD *)(v22 + 2104);
                v339 = *(_QWORD *)(v22 + 2680);
                v34 = v1521 + v22;
                v1523 = v1521 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1521) >> 3);
                while ( v34 != v1523 )
                {
                  *(_QWORD *)v34 ^= v339;
                  v339 = ((v1522 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
                  v34 += 8LL;
                }
                goto LABEL_763;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 432))(v2131, *((unsigned int *)v44 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2131, v2132);
              v1524 = *(_QWORD *)(v22 + 2648);
              if ( v1524 )
              {
                v1525 = *(_DWORD *)(v1524 + 800);
              }
              else
              {
                v1526 = __readmsr(0x832u);
                v1525 = v1526;
              }
              v1527 = *(_QWORD *)(v22 + 2648);
              if ( v1527 )
              {
                v1528 = *(_DWORD *)(v1527 + 832);
              }
              else
              {
                v1529 = __readmsr(0x834u);
                v1528 = v1529;
              }
              (*(void (__fastcall **)(_BYTE *))(v22 + 424))(v2132);
              if ( (*(_BYTE *)(v22 + 2203) & 0x10) != 0 )
              {
                _disable();
                v1530 = *(_QWORD *)(v22 + 2304);
                v1531 = 304;
                v1532 = (_QWORD *)v1530;
                v1533 = 38LL;
                do
                {
                  *v1532 = 0LL;
                  v1531 -= 8;
                  ++v1532;
                  --v1533;
                }
                while ( v1533 );
                for ( ; v1531; --v1531 )
                {
                  *(_BYTE *)v1532 = 0;
                  v1532 = (_QWORD *)((char *)v1532 + 1);
                }
                *(_OWORD *)(v1530 + 16) = *(_OWORD *)(v22 + 2152);
                *(_OWORD *)(v1530 + 32) = *(_OWORD *)(v22 + 2168);
                *(_OWORD *)(v1530 + 288) = *(_OWORD *)(v22 + 2184);
                v2056 = 303;
                v2057 = v1530;
                *(_WORD *)(v1530 + 16) = v22 + 2200;
                v2101 = v22 + 2200;
                *(_WORD *)(v1530 + 22) = (unsigned int)(v22 + 2200) >> 16;
                *(_DWORD *)(v1530 + 24) = (v22 + 2200) >> 32;
                __sidt(v2071);
                __lidt(&v2056);
                if ( (*(_DWORD *)(v22 + 2524) & 0x20000) == 0 )
                {
                  v1534 = KeGetCurrentPrcb();
                  **(_QWORD **)(v22 + 1208) = v22 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(v22 + 1216) = v1534;
                  **(_QWORD **)(v22 + 1224) = 0LL;
                  **(_QWORD **)(v22 + 1232) = 277LL;
                }
                KiErrata361Present();
                if ( (*(_DWORD *)(v22 + 2524) & 0x20000) == 0 )
                {
                  **(_QWORD **)(v22 + 1208) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(v22 + 1216) = 0LL;
                  **(_QWORD **)(v22 + 1224) = 0LL;
                  **(_QWORD **)(v22 + 1232) = 0LL;
                }
                __lidt(v2071);
                _enable();
              }
              v1535 = *((unsigned int *)v44 + 6);
              if ( (v1525 & *((_DWORD *)v44 + 7)) != (_DWORD)v1535
                || (v1525 & 0x10000) == 0
                && (unsigned __int8)v1525 != 209
                && (unsigned int)(unsigned __int8)v1525 - 253 >= 2 )
              {
                v34 = v1535 | ((unsigned __int64)*((unsigned int *)v44 + 10) << 48) | 0x32000000000LL;
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1535 ^ v1525;
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v44;
                    *(_QWORD *)(v22 + 2360) = v34;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1536 = *(_DWORD *)(v22 + 2520);
                    if ( (v1536 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1536 & 1) != 0 )
                    {
                      v1537 = *(unsigned int *)(v22 + 2676);
                      v1538 = *(_QWORD *)(v22 + 2104);
                      v1539 = *(_QWORD *)(v22 + 2680);
                      v34 = v1537 + v22;
                      v1540 = v1537 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1537) >> 3);
                      while ( v34 != v1540 )
                      {
                        *(_QWORD *)v34 ^= v1539;
                        v1539 = ((v1538 ^ *(_QWORD *)v34) + __ROR8__(v1539, v1539 & 0x3F)) ^ 0xEFA;
                        v34 += 8LL;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v1539 != *(_QWORD *)(v22 + 2688) )
                      {
                        v1541 = *(_DWORD *)(v22 + 2052);
                        v1542 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v1542 = v22;
                        *(_DWORD *)(v1542 + 16) = v1541;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1539 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v1539, 256LL);
                      }
                    }
                  }
                }
              }
              v1543 = *((unsigned int *)v44 + 8);
              if ( (v1528 & *((_DWORD *)v44 + 9)) != (_DWORD)v1543
                || (v1528 & 0x10000) == 0
                && (unsigned __int8)v1528 != 209
                && (unsigned int)(unsigned __int8)v1528 - 253 >= 2 )
              {
                v34 = v1543 | ((unsigned __int64)*((unsigned int *)v44 + 10) << 48) | 0x34000000000LL;
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1528 ^ v1543;
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v44;
                    *(_QWORD *)(v22 + 2360) = v34;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1544 = *(_DWORD *)(v22 + 2520);
                    if ( (v1544 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1544 & 1) != 0 )
                    {
                      v1545 = *(unsigned int *)(v22 + 2676);
                      v1546 = *(_QWORD *)(v22 + 2104);
                      v1547 = *(_QWORD *)(v22 + 2680);
                      v34 = v1545 + v22;
                      v1548 = v1545 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1545) >> 3);
                      while ( v34 != v1548 )
                      {
                        *(_QWORD *)v34 ^= v1547;
                        v1547 = ((v1546 ^ *(_QWORD *)v34) + __ROR8__(v1547, v1547 & 0x3F)) ^ 0xEFA;
                        v34 += 8LL;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v1547 != *(_QWORD *)(v22 + 2688) )
                      {
                        v1549 = *(_DWORD *)(v22 + 2052);
                        v1550 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v1550 = v22;
                        *(_DWORD *)(v1550 + 16) = v1549;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1547 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v1547, 256LL);
                      }
                    }
                  }
                }
              }
              v233 = 0x8000;
LABEL_405:
              *(_DWORD *)(v22 + 2120) += v233;
              goto LABEL_238;
            }
            v1585 = *((unsigned int *)v44 + 10);
            v1586 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 432);
            v1988 = 0;
            v1586(v2135, v1585);
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 480))(v2135, v2136);
            KiGetGdtIdt(&v2147, &v2052);
            v1587 = 0;
            v1994 = v2053;
            v1588 = v2053 + 4;
            v1986 = v2053 + 4;
            v1985 = 0;
            while ( 1 )
            {
              v1589 = 0LL;
              v2020 = *(_QWORD *)(v22 + 2280);
              v1590 = 0LL;
              v1591 = *(_QWORD *)(v22 + 2288);
              v1592 = *(unsigned int *)(v22 + 2252);
              v1990 = 0LL;
              v1593 = *(unsigned int *)(v22 + 2256);
              v1987 = 0LL;
              v1594 = KeGetCurrentIrql();
              __writecr8(0xFuLL);
              v1595 = *(_WORD *)v1588;
              LOWORD(v2012) = *(_WORD *)(v1588 - 4);
              WORD1(v2012) = *(_WORD *)(v1588 + 2);
              v1596 = *(_DWORD *)(v1588 + 4);
              v1597 = *(_QWORD *)(v22 + 1576);
              HIDWORD(v2012) = v1596;
              v1598 = v2012;
              v1983 = v1595;
              v1599 = v1597 + 8LL * v1587;
              if ( v2012 != v1599 )
                break;
              if ( (v1595 & 0x6000) != 0 )
              {
                __writecr8(v1594);
                goto LABEL_2378;
              }
              v1590 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v22 + 1136))(v1587, v1599, 0LL);
              if ( !v1590 )
              {
                v1590 = -1LL;
                v1603 = 0LL;
LABEL_2384:
                v1600 = v1990;
                goto LABEL_2385;
              }
              v1600 = *(_QWORD *)(v1592 + v1590);
              v1990 = v1600;
              if ( v1985 < 0x30 )
              {
                __writecr8(v1594);
LABEL_2377:
                v1589 = v1990;
LABEL_2378:
                v1601 = *(_QWORD *)(v22 + 1416);
                i9 = 0;
                *(_QWORD *)v1601 = v1598;
                *(_DWORD *)(v1601 + 16) = 128;
                if ( v1589 )
                {
                  v1602 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)(v1602 + 8) = v1589;
                  *(_DWORD *)(v1602 + 20) = 128;
                }
                v40 = 1;
                v1988 = 1;
                goto LABEL_2398;
              }
              v1603 = *(_QWORD *)(v1593 + v1590);
LABEL_2385:
              __writecr8(v1594);
              if ( !v1590 )
              {
                if ( v1598 < v2020 )
                  goto LABEL_2377;
                if ( v1598 > v1591 )
                  goto LABEL_2377;
                v1604 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v22 + 544))(
                          *(_QWORD *)(v22 + 2296),
                          v2020,
                          (unsigned int)(v2012 - v2020));
                if ( !v1604 || (*(_DWORD *)(v1604 + 36) & 0x2000000) != 0 )
                  goto LABEL_2377;
              }
              if ( *(_WORD *)(v1986 - 2) != 16 || (*(_WORD *)v1986 & 0x1F00) != 0xE00 || *(__int16 *)v1986 >= 0 )
                goto LABEL_2377;
              v1605 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64 *, _QWORD))(v22 + 624))(
                                        v1598,
                                        &v2020,
                                        0LL);
              if ( v1605 && v2020 + *v1605 == v1598 && v2020 == *(_QWORD *)(v22 + 2280) )
              {
                if ( !v1590 )
                  goto LABEL_2397;
              }
              else if ( !v1590 )
              {
                goto LABEL_2377;
              }
              if ( (v1983 & 0x6000) != 0 )
                goto LABEL_2377;
              if ( v1590 != -1 )
              {
                v1627 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v22 + 624))(
                                          v1600,
                                          &v2020,
                                          0LL);
                if ( !v1627 )
                  goto LABEL_2377;
                if ( v2020 + *v1627 != v1600 )
                  goto LABEL_2377;
                if ( v2020 != *(_QWORD *)(v22 + 2280) )
                  goto LABEL_2377;
                v1628 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v22 + 544))(
                          *(_QWORD *)(v22 + 2296),
                          v2020,
                          (unsigned int)(v1600 - v2020));
                if ( !v1628
                  || (*(_DWORD *)(v1628 + 36) & 0x2000000) != 0
                  || v1985 == 254 && v1603 != *(_QWORD *)(v22 + 2264) )
                {
                  goto LABEL_2377;
                }
              }
LABEL_2397:
              v40 = 1;
              i9 = 0;
LABEL_2398:
              v1587 = v1985 + 1;
              v1588 = v1986 + 16;
              v1985 = v1587;
              v1986 += 16LL;
              if ( v1587 > 0xFF )
              {
                if ( (*(_BYTE *)(v22 + 2203) & 1) != 0 )
                {
                  _disable();
                  v1606 = 3221225602LL;
                  v1607 = __readmsr(0xC0000082);
                  v1608 = (v22 + 2202) >> 32;
                  __writemsr(0xC0000082, v22 + 2202);
                  if ( !_bittest((const signed __int32 *)(v22 + 2524), 0x11u) )
                  {
                    v1609 = KeGetCurrentPrcb();
                    v1608 = v22 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v22 + 1208) = v22 - 0x5C5FC0A76E374B18LL;
                    **(_QWORD **)(v22 + 1216) = v1609;
                    **(_QWORD **)(v22 + 1224) = 3221225602LL;
                    v1606 = *(_QWORD *)(v22 + 1232);
                    *(_QWORD *)v1606 = 274LL;
                  }
                  ((void (__fastcall *)(__int64, unsigned __int64))(v22 + 2204))(v1606, v1608);
                  if ( !_bittest((const signed __int32 *)(v22 + 2524), 0x11u) )
                  {
                    **(_QWORD **)(v22 + 1208) = 0xA3A03F5891C8B4E8uLL;
                    **(_QWORD **)(v22 + 1216) = 0LL;
                    **(_QWORD **)(v22 + 1224) = 0LL;
                    **(_QWORD **)(v22 + 1232) = 0LL;
                  }
                  __writemsr(0xC0000082, v1607);
                  _enable();
                }
                v1610 = (_QWORD *)v1994;
                *(_DWORD *)(v22 + 2120) += 848;
                v1611 = v1610;
                v1612 = *(_DWORD *)(v22 + 2100);
                v1613 = (const char *)v1610;
                v1614 = *(_QWORD *)(v22 + 2104);
                if ( v1610 < v1610 + 106 )
                {
                  do
                  {
                    _mm_prefetch(v1613, 0);
                    v1613 += 64;
                  }
                  while ( v1613 < (const char *)v1610 + 848 );
                }
                v1615 = 6;
                v1616 = *(_QWORD *)(v22 + 2104);
                do
                {
                  v1617 = 8LL;
                  do
                  {
                    v1618 = *v1611 ^ v1616;
                    v1619 = v1611 + 1;
                    v1620 = *v1619 ^ __ROL8__(v1618, v1612);
                    v1611 = v1619 + 1;
                    v1616 = __ROL8__(v1620, v1612);
                    --v1617;
                  }
                  while ( v1617 );
                  v1621 = (__ROL8__(v1614 ^ ((char *)v1611 - (char *)v1610), 17) ^ v1614 ^ (unsigned __int64)((char *)v1611 - (char *)v1610))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2104 = *((_QWORD *)&v1621 + 1);
                  v1612 = ((unsigned __int8)(v1621 ^ BYTE8(v1621)) ^ (unsigned __int8)v1612) & 0x3F;
                  if ( !v1612 )
                    LOBYTE(v1612) = 1;
                  --v1615;
                }
                while ( v1615 );
                v22 = (unsigned __int64)v1989;
                v1622 = 80;
                v1623 = v1988;
                v1624 = 10LL;
                do
                {
                  v1616 = __ROL8__(*v1611++ ^ v1616, v1612);
                  v1622 -= 8;
                  --v1624;
                }
                while ( v1624 );
                for ( ; v1622; --v1622 )
                {
                  v1625 = *(unsigned __int8 *)v1611;
                  v1611 = (_QWORD *)((char *)v1611 + 1);
                  v1616 = __ROL8__(v1625 ^ v1616, v1612);
                }
                for ( i5 = v1616; ; LODWORD(v1616) = i5 ^ v1616 )
                {
                  i5 >>= 31;
                  if ( !i5 )
                    break;
                }
                *((_DWORD *)v1989 + 530) += 16;
                v1629 = v1610 + 450;
                v1630 = *(_DWORD *)(v22 + 2100);
                v1631 = (unsigned __int64)(v1610 + 452);
                v1632 = *(_QWORD *)(v22 + 2104);
                v1633 = v1616 & 0x7FFFFFFF;
                v1634 = (const char *)v1629;
                if ( (unsigned __int64)v1629 < v1631 )
                {
                  do
                  {
                    _mm_prefetch(v1634, 0);
                    v1634 += 64;
                  }
                  while ( (unsigned __int64)v1634 < v1631 );
                }
                v1635 = 2LL;
                v1636 = 16;
                do
                {
                  v1632 = __ROL8__(*v1629++ ^ v1632, v1630);
                  v1636 -= 8;
                  --v1635;
                }
                while ( v1635 );
                for ( ; v1636; --v1636 )
                {
                  v1637 = *(unsigned __int8 *)v1629;
                  v1629 = (_QWORD *)((char *)v1629 + 1);
                  v1632 = __ROL8__(v1637 ^ v1632, v1630);
                }
                for ( i6 = v1632; ; LODWORD(v1632) = i6 ^ v1632 )
                {
                  i6 >>= 31;
                  if ( !i6 )
                    break;
                }
                v1639 = v1632 & 0x7FFFFFFF;
                (*(void (__fastcall **)(_BYTE *, _QWORD *))(v22 + 424))(v2136, v1629);
                v34 = (unsigned __int64)v1984;
                v1640 = *((unsigned int *)v1984 + 5);
                if ( v1633 != (_DWORD)v1640
                  || v1639 != *((_QWORD *)v1984 + 3)
                  || v2052 != *((_WORD *)v1984 + 22)
                  || v1623 )
                {
                  if ( !v1623 )
                  {
                    if ( v1639 == *((_QWORD *)v1984 + 3) )
                    {
                      if ( !*(_DWORD *)(v22 + 2328) )
                      {
                        v1641 = v1633;
                        goto LABEL_2450;
                      }
                    }
                    else
                    {
                      v1641 = *((unsigned int *)v1984 + 6);
                      if ( !*(_DWORD *)(v22 + 2328) )
                      {
                        v1640 = v1639;
LABEL_2450:
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1641 ^ v1640;
                      }
                    }
                  }
                  v1642 = *(_QWORD *)(v34 + 8);
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v34 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v34;
                    *(_QWORD *)(v22 + 2360) = v1642;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v1643 = *(_DWORD *)(v22 + 2520);
                    if ( (v1643 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1643 & 1) != 0 )
                    {
                      v1644 = *(unsigned int *)(v22 + 2676);
                      v1645 = *(_QWORD *)(v22 + 2104);
                      v1646 = *(_QWORD *)(v22 + 2680);
                      v34 = v1644 + v22;
                      v1647 = v1644 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1644) >> 3);
                      while ( v34 != v1647 )
                      {
                        *(_QWORD *)v34 ^= v1646;
                        v1646 = ((v1645 ^ *(_QWORD *)v34) + __ROR8__(v1646, v1646 & 0x3F)) ^ 0xEFA;
                        v34 += 8LL;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v1646 != *(_QWORD *)(v22 + 2688) )
                      {
                        v1648 = *(_DWORD *)(v22 + 2052);
                        v1649 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v1649 = v22;
                        *(_DWORD *)(v1649 + 16) = v1648;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1646 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v1646, 256LL);
                      }
                    }
                  }
                }
                *(_DWORD *)(v22 + 2120) += 0x10000;
                goto LABEL_238;
              }
            }
            v1603 = v1987;
            goto LABEL_2384;
          }
          if ( !*((_DWORD *)v44 + 4) )
          {
            v2068 = v44 + 48;
            v414 = *((_WORD *)v44 + 20);
            v1982 = &v2015;
            v2067[0] = v414;
            v2067[1] = v414;
            v415 = *(_QWORD *)(v22 + 1288);
            v416 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v22 + 504);
            LOBYTE(v1981) = 0;
            if ( v416(v2067, 0LL, 0LL, 0LL, v415, v1981, 0LL, &v2015) < 0 )
              goto LABEL_238;
            if ( (*(_DWORD *)(v2015 + 16) & 0x10) == 0 )
            {
              (*(void (__fastcall **)(__int64))(v22 + 496))(v2015);
              goto LABEL_238;
            }
            (*(void (__fastcall **)(_QWORD, char *))(v22 + 528))(*(_QWORD *)(v22 + 504), &v2150);
            if ( v2151 )
            {
              v417 = *(__int64 (**)(void))(v22 + 520);
              v418 = v2151;
              v2022 = (char *)v2151;
              v419 = v417();
              if ( v419 )
              {
                v420 = *(_DWORD *)(v419 + 80);
                v2013 = v420;
                goto LABEL_674;
              }
            }
            else
            {
              v418 = (unsigned __int64)v2022;
            }
            v420 = v2013;
LABEL_674:
            (*(void (__fastcall **)(_QWORD, char *))(v22 + 528))(*((_QWORD *)v44 + 3), &v2152);
            if ( v2153 )
            {
              v421 = *(__int64 (**)(void))(v22 + 520);
              v422 = v2153;
              v2021 = v2153;
              v423 = v421();
              if ( v423 )
              {
                v424 = *(_DWORD *)(v423 + 80);
                v2007 = v424;
                goto LABEL_679;
              }
            }
            else
            {
              v422 = v2021;
            }
            v424 = v2007;
LABEL_679:
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) == 0 )
            {
              *((_QWORD *)v44 + 1) = v2015 + 112;
              *((_DWORD *)v44 + 4) = 224;
            }
            LOBYTE(v34) = 0;
            while ( 1 )
            {
              v425 = *(_QWORD *)(v2015 + 8LL * (unsigned __int8)v34 + 112);
              if ( !v420 || v425 < v418 || v425 > v420 + v418 - 1 )
              {
                if ( !v424 )
                  break;
                v426 = v424 + v422 - 1;
                if ( v425 < v422 || v425 > v426 )
                  break;
              }
              v424 = v2007;
              LOBYTE(v34) = v34 + 1;
              if ( (unsigned __int8)v34 >= 0x1Cu )
              {
                if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                {
                  (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v22 + 496))(
                    v2015,
                    v34,
                    v425,
                    v2007);
                  goto LABEL_466;
                }
                v427 = (_QWORD *)*((_QWORD *)v44 + 1);
                v428 = *((unsigned int *)v44 + 4);
                v429 = v427;
                *(_DWORD *)(v22 + 2120) += v428;
                v430 = (const char *)v427;
                v431 = *(_DWORD *)(v22 + 2100);
                v432 = *(_QWORD *)(v22 + 2104);
                if ( v427 < (_QWORD *)((char *)v427 + v428) )
                {
                  do
                  {
                    _mm_prefetch(v430, 0);
                    v430 += 64;
                  }
                  while ( v430 < (const char *)v427 + v428 );
                }
                v433 = *(_QWORD *)(v22 + 2104);
                v434 = (unsigned int)v428 >> 7;
                v34 = 1LL;
                if ( (unsigned int)v428 >> 7 )
                {
                  do
                  {
                    v435 = 8LL;
                    do
                    {
                      v436 = v429[1] ^ __ROL8__(*v429 ^ v433, v431);
                      v429 += 2;
                      v433 = __ROL8__(v436, v431);
                      --v435;
                    }
                    while ( v435 );
                    v437 = (__ROL8__(v432 ^ ((char *)v429 - (char *)v427), 17) ^ v432 ^ (unsigned __int64)((char *)v429 - (char *)v427))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2130 = *((_QWORD *)&v437 + 1);
                    v438 = v437 ^ BYTE8(v437) ^ v431;
                    v34 = 1LL;
                    v431 = v438 & 0x3F;
                    if ( !v431 )
                      LOBYTE(v431) = 1;
                    --v434;
                  }
                  while ( v434 );
                  v418 = (unsigned __int64)v2022;
                  v422 = v2021;
                }
                v439 = v428 & 0x7F;
                if ( v439 >= 8 )
                {
                  v440 = (unsigned __int64)v439 >> 3;
                  do
                  {
                    v433 = __ROL8__(*v429++ ^ v433, v431);
                    v439 -= 8;
                    --v440;
                  }
                  while ( v440 );
                }
                if ( v439 )
                {
                  do
                  {
                    v441 = *(unsigned __int8 *)v429;
                    v429 = (_QWORD *)((char *)v429 + 1);
                    v433 = __ROL8__(v441 ^ v433, v431);
                    --v439;
                  }
                  while ( v439 );
                  v22 = (unsigned __int64)v1989;
                }
                for ( i7 = v433; ; LODWORD(v433) = i7 ^ v433 )
                {
                  i7 >>= 31;
                  if ( !i7 )
                    break;
                }
                v443 = 0;
                *((_DWORD *)v44 + 5) = v433 & 0x7FFFFFFF;
                v444 = *(const char **)(v2015 + 80);
                if ( !v444
                  || (v443 = *(_DWORD *)v444, LOBYTE(v34) = 0, (v445 = (unsigned int)(*(_DWORD *)v444 - 8) >> 3) == 0) )
                {
LABEL_719:
                  *(_DWORD *)(v22 + 2120) += v443;
                  v447 = v444;
                  v448 = *(_DWORD *)(v22 + 2100);
                  v449 = v444;
                  v450 = *(_QWORD *)(v22 + 2104);
                  v451 = &v444[v443];
                  if ( v444 < v451 )
                  {
                    do
                    {
                      _mm_prefetch(v449, 0);
                      v449 += 64;
                    }
                    while ( v449 < v451 );
                  }
                  i9 = 0;
                  v452 = v443 >> 7;
                  v453 = *(_QWORD *)(v22 + 2104);
                  v40 = 1;
                  if ( v443 >> 7 )
                  {
                    do
                    {
                      v454 = 8LL;
                      do
                      {
                        v455 = *((_QWORD *)v447 + 1) ^ __ROL8__(*(_QWORD *)v447 ^ v453, v448);
                        v447 += 16;
                        v453 = __ROL8__(v455, v448);
                        --v454;
                      }
                      while ( v454 );
                      v456 = (__ROL8__(v450 ^ (v447 - v444), 17) ^ v450 ^ (unsigned __int64)(v447 - v444))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v2120 = *((_QWORD *)&v456 + 1);
                      v457 = v456 ^ BYTE8(v456) ^ v448;
                      v34 = 0xFFFFFFFFLL;
                      v448 = v457 & 0x3F;
                      if ( !v448 )
                        LOBYTE(v448) = 1;
                      --v452;
                    }
                    while ( v452 );
                    v22 = (unsigned __int64)v1989;
                  }
                  else
                  {
                    v34 = 0xFFFFFFFFLL;
                  }
                  v465 = v443 & 0x7F;
                  if ( v465 >= 8 )
                  {
                    v466 = (unsigned __int64)v465 >> 3;
                    do
                    {
                      v453 = __ROL8__(*(_QWORD *)v447 ^ v453, v448);
                      v447 += 8;
                      v465 -= 8;
                      --v466;
                    }
                    while ( v466 );
                  }
                  for ( ; v465; --v465 )
                  {
                    v467 = *(unsigned __int8 *)v447++;
                    v453 = __ROL8__(v467 ^ v453, v448);
                  }
                  for ( i8 = v453; ; LODWORD(v453) = i8 ^ v453 )
                  {
                    i8 >>= 31;
                    if ( !i8 )
                      break;
                  }
                  *((_DWORD *)v44 + 11) = v453 & 0x7FFFFFFF;
                  goto LABEL_238;
                }
                while ( 1 )
                {
                  v446 = *(_QWORD *)&v444[8 * (unsigned __int8)v34 + 8];
                  if ( v446
                    && (!v2013 || v446 < v418 || v446 > v418 + v2013 - 1LL)
                    && (!v2007 || v446 < v422 || v446 > v422 + v2007 - 1LL) )
                  {
                    break;
                  }
                  LOBYTE(v34) = v34 + 1;
                  if ( (unsigned __int8)v34 >= v445 )
                    goto LABEL_719;
                }
                *((_QWORD *)v44 + 4) = v446;
                i9 = 0;
                v458 = *(_QWORD *)(v22 + 1416);
                v40 = 1;
                *(_QWORD *)v458 = v44;
                *(_DWORD *)(v458 + 16) = 48;
                if ( *(_DWORD *)(v22 + 2328) )
                  goto LABEL_238;
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v44;
                *(_QWORD *)(v22 + 2360) = v444;
                *(_DWORD *)(v22 + 2328) = 1;
                v459 = *(_DWORD *)(v22 + 2520);
                if ( (v459 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v459 & 1) == 0 )
                  goto LABEL_238;
                v460 = *(unsigned int *)(v22 + 2676);
                v461 = *(_QWORD *)(v22 + 2104);
                v339 = *(_QWORD *)(v22 + 2680);
                v34 = v460 + v22;
                v462 = v460 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v460) >> 3);
                while ( v34 != v462 )
                {
                  *(_QWORD *)v34 ^= v339;
                  v339 = ((v461 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
                  v34 += 8LL;
                }
LABEL_735:
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v339 == *(_QWORD *)(v22 + 2688) )
                  goto LABEL_238;
                v463 = *(_DWORD *)(v22 + 2052);
                v464 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v464 = v22;
                *(_DWORD *)(v464 + 16) = v463;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v339 ^ *(_QWORD *)(v22 + 2688);
LABEL_766:
                sub_140BDA384(v22, 0LL, v339, 256LL);
                goto LABEL_238;
              }
            }
            v40 = 1;
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
            {
              v469 = *(_QWORD **)(v22 + 2760);
              LODWORD(v34) = 48;
              v470 = 6LL;
              do
              {
                v34 = (unsigned int)(v34 - 8);
                *v469 = *(_QWORD *)v44;
                v44 += 8;
                ++v469;
                --v470;
              }
              while ( v470 );
              for ( i9 = 0; (_DWORD)v34; v34 = (unsigned int)(v34 - 1) )
              {
                v471 = *v44++;
                *(_BYTE *)v469 = v471;
                v469 = (_QWORD *)((char *)v469 + 1);
              }
              v44 = *(char **)(v22 + 2760);
            }
            else
            {
              i9 = 0;
            }
            *((_QWORD *)v44 + 4) = v425;
            v472 = *(_QWORD *)(v22 + 1416);
            *(_QWORD *)v472 = v44;
            *(_DWORD *)(v472 + 16) = 48;
            v473 = *((_QWORD *)v44 + 1);
            if ( *(_DWORD *)(v22 + 2328) )
              goto LABEL_238;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *(int *)v44;
            *(_QWORD *)(v22 + 2360) = v473;
            *(_DWORD *)(v22 + 2328) = 1;
            v474 = *(_DWORD *)(v22 + 2520);
            if ( (v474 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v474 & 1) == 0 )
              goto LABEL_238;
            v475 = *(unsigned int *)(v22 + 2676);
            v476 = *(_QWORD *)(v22 + 2104);
            v339 = *(_QWORD *)(v22 + 2680);
            v34 = v475 + v22;
            v477 = v475 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v475) >> 3);
            while ( v34 != v477 )
            {
              *(_QWORD *)v34 ^= v339;
              v339 = ((v476 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
              v34 += 8LL;
            }
            goto LABEL_763;
          }
          v480 = (_QWORD *)*((_QWORD *)v44 + 1);
          v481 = *((unsigned int *)v44 + 4);
          v482 = v480;
          *(_DWORD *)(v22 + 2120) += v481;
          v483 = (const char *)v480;
          v484 = *(_DWORD *)(v22 + 2100);
          v485 = *(_QWORD *)(v22 + 2104);
          if ( v480 < (_QWORD *)((char *)v480 + v481) )
          {
            do
            {
              _mm_prefetch(v483, 0);
              v483 += 64;
            }
            while ( v483 < (const char *)v480 + v481 );
          }
          v486 = *(_QWORD *)(v22 + 2104);
          v487 = (unsigned int)v481 >> 7;
          if ( (unsigned int)v481 >> 7 )
          {
            do
            {
              v488 = 8LL;
              do
              {
                v489 = v482[1] ^ __ROL8__(*v482 ^ v486, v484);
                v482 += 2;
                v486 = __ROL8__(v489, v484);
                --v488;
              }
              while ( v488 );
              v490 = (__ROL8__(v485 ^ ((char *)v482 - (char *)v480), 17) ^ v485 ^ (unsigned __int64)((char *)v482 - (char *)v480))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2121 = *((_QWORD *)&v490 + 1);
              v484 = ((unsigned __int8)v490 ^ (unsigned __int8)(BYTE8(v490) ^ v484)) & 0x3F;
              if ( !v484 )
                LOBYTE(v484) = 1;
              --v487;
            }
            while ( v487 );
            v22 = (unsigned __int64)v1989;
          }
          v491 = v481 & 0x7F;
          if ( v491 >= 8 )
          {
            v492 = (unsigned __int64)v491 >> 3;
            do
            {
              v486 = __ROL8__(*v482++ ^ v486, v484);
              v491 -= 8;
              --v492;
            }
            while ( v492 );
          }
          for ( ; v491; --v491 )
          {
            v493 = *(unsigned __int8 *)v482;
            v482 = (_QWORD *)((char *)v482 + 1);
            v486 = __ROL8__(v493 ^ v486, v484);
          }
          for ( i10 = v486; ; LODWORD(v486) = i10 ^ v486 )
          {
            i10 >>= 31;
            if ( !i10 )
              break;
          }
          v495 = v486 & 0x7FFFFFFF;
          v496 = 0;
          if ( v495 == *((_DWORD *)v44 + 5) )
          {
LABEL_798:
            v40 = 1;
          }
          else
          {
            if ( !*(_DWORD *)v44 )
              v496 = *((_DWORD *)v44 + 6) != 0;
            v497 = *((_QWORD *)v44 + 1);
            if ( *((_DWORD *)v44 + 4) )
            {
              v498 = 64LL;
              if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
              {
                v499 = KeGetCurrentIrql();
                v500 = v497 & 0xFFFFFFFFFFFFF000uLL;
                v501 = (v497 + *((unsigned int *)v44 + 4) - 1LL) | 0xFFF;
                v502 = (v497 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  __writecr8(2uLL);
                  while ( 1 )
                  {
                    v503 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                             v500,
                             0LL,
                             v498,
                             v482);
                    if ( v503 == -1073741267 )
                      break;
                    if ( v503 < 0 )
                    {
LABEL_810:
                      __writecr8(v499);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_811;
                    }
LABEL_796:
                    v500 += 4096LL;
                    v502 += 4096LL;
                    if ( v502 == v501 )
                    {
                      __writecr8(v499);
                      v44 = v1984;
                      i9 = 0;
                      goto LABEL_798;
                    }
                  }
                  if ( v496 )
                    goto LABEL_810;
                  if ( v499 > 1u )
                    goto LABEL_796;
                  __writecr8(v499);
                }
              }
            }
LABEL_811:
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v495 ^ (unsigned __int64)*((unsigned int *)v44 + 5);
            v40 = 1;
            v517 = *((_QWORD *)v44 + 1);
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v44;
              *(_QWORD *)(v22 + 2360) = v517;
              *(_DWORD *)(v22 + 2328) = 1;
              v518 = *(_DWORD *)(v22 + 2520);
              if ( (v518 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v518 & 1) != 0 )
              {
                v519 = *(unsigned int *)(v22 + 2676);
                v520 = *(_QWORD *)(v22 + 2104);
                v521 = *(_QWORD *)(v22 + 2680);
                v522 = (_QWORD *)(v519 + v22);
                v523 = v519 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v519) >> 3);
                while ( v522 != (_QWORD *)v523 )
                {
                  *v522 ^= v521;
                  v521 = ((v520 ^ *v522++) + __ROR8__(v521, v521 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v521 != *(_QWORD *)(v22 + 2688) )
                {
                  v524 = *(_DWORD *)(v22 + 2052);
                  v525 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v525 = v22;
                  *(_DWORD *)(v525 + 16) = v524;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v521 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v521, 256LL);
                }
              }
            }
          }
          v504 = 0;
          v2015 = *((_QWORD *)v44 + 1) - 112LL;
          v505 = *(const char **)(v2015 + 80);
          if ( v505 )
            v504 = *(_DWORD *)v505;
          *(_DWORD *)(v22 + 2120) += v504;
          v506 = v505;
          v507 = *(_DWORD *)(v22 + 2100);
          v508 = v505;
          v509 = *(_QWORD *)(v22 + 2104);
          v510 = &v505[v504];
          if ( v505 < v510 )
          {
            do
            {
              _mm_prefetch(v508, 0);
              v508 += 64;
            }
            while ( v508 < v510 );
          }
          v511 = *(_QWORD *)(v22 + 2104);
          v512 = v504 >> 7;
          if ( v504 >> 7 )
          {
            do
            {
              v513 = 8LL;
              do
              {
                v514 = *((_QWORD *)v506 + 1) ^ __ROL8__(*(_QWORD *)v506 ^ v511, v507);
                v506 += 16;
                v511 = __ROL8__(v514, v507);
                --v513;
              }
              while ( v513 );
              v515 = (__ROL8__(v509 ^ (v506 - v505), 17) ^ v509 ^ (unsigned __int64)(v506 - v505))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2122 = *((_QWORD *)&v515 + 1);
              v516 = v515 ^ BYTE8(v515) ^ v507;
              v34 = 0xFFFFFFFFLL;
              v507 = v516 & 0x3F;
              if ( !v507 )
                LOBYTE(v507) = 1;
              --v512;
            }
            while ( v512 );
            v22 = (unsigned __int64)v1989;
          }
          else
          {
            v34 = 0xFFFFFFFFLL;
          }
          v526 = v504 & 0x7F;
          if ( v526 >= 8 )
          {
            v527 = (unsigned __int64)v526 >> 3;
            do
            {
              v511 = __ROL8__(*(_QWORD *)v506 ^ v511, v507);
              v506 += 8;
              v526 -= 8;
              --v527;
            }
            while ( v527 );
          }
          for ( ; v526; --v526 )
          {
            v528 = *(unsigned __int8 *)v506++;
            v511 = __ROL8__(v528 ^ v511, v507);
          }
          for ( i11 = v511; ; LODWORD(v511) = i11 ^ v511 )
          {
            i11 >>= 31;
            if ( !i11 )
              break;
          }
          v530 = *((_DWORD *)v44 + 11);
          v531 = v511 & 0x7FFFFFFF;
          if ( v531 == v530 )
            goto LABEL_238;
          if ( *(_DWORD *)(v22 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v531 ^ (unsigned __int64)v530;
          if ( *(_DWORD *)(v22 + 2328) )
            goto LABEL_238;
          *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2344) = v44 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2352) = *(int *)v44;
          *(_QWORD *)(v22 + 2360) = v505;
          *(_DWORD *)(v22 + 2328) = 1;
          v532 = *(_DWORD *)(v22 + 2520);
          if ( (v532 & 0x20000000) != 0 || (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 || (v532 & 1) == 0 )
            goto LABEL_238;
          v533 = *(unsigned int *)(v22 + 2676);
          v534 = *(_QWORD *)(v22 + 2104);
          v339 = *(_QWORD *)(v22 + 2680);
          v34 = v533 + v22;
          v535 = v533 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v533) >> 3);
          while ( v34 != v535 )
          {
            *(_QWORD *)v34 ^= v339;
            v339 = ((v534 ^ *(_QWORD *)v34) + __ROR8__(v339, v339 & 0x3F)) ^ 0xEFA;
            v34 += 8LL;
          }
          goto LABEL_735;
        }
        v587 = *(_QWORD ***)(v22 + 1320);
        v588 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v22 + 888);
        v1986 = (__int64)v587;
        v1985 = 0;
        v2001 = (char *)v588((unsigned int)(v66 - 25), v34);
        _disable();
        v589 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1624));
        _enable();
        (*(void (__fastcall **)(__int64))(v22 + 376))(v589);
        LOBYTE(v590) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(v22 + 248))(*(_QWORD *)(v22 + 1328), v590);
        v591 = **(unsigned int ***)(v22 + 1568);
        v592 = *v591;
        v1987 = (__int64)(v591 + 4);
        v1991 = (unsigned __int64)&v591[6 * v592 + 4];
        v593 = 0;
        if ( *((_BYTE *)v591 + 12) )
        {
          LODWORD(v592) = 0;
          v594 = *v587;
          while ( v594 != v587 )
          {
            v594 = (_QWORD *)*v594;
            LODWORD(v592) = v592 + 1;
          }
        }
        v595 = *(unsigned int *)(v22 + 2096);
        v596 = __rdtsc();
        v597 = __ROR8__(v596, 3);
        v2138 = ((v597 ^ v596) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v598 = ((unsigned __int16)v2138 ^ (unsigned __int16)(8193 * (v597 ^ v596))) & 0x7FF;
        v599 = __rdtsc();
        v600 = (__ROR8__(v599, 3) ^ v599) * (unsigned __int128)0x7010008004002001uLL;
        v2144 = *((_QWORD *)&v600 + 1);
        v601 = (*((_QWORD *)&v600 + 1) ^ (unsigned __int64)v600) % (unsigned int)(v598 + 1);
        v602 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v22 + 256))(
                 66LL,
                 (unsigned int)(v598 + 8 * v592),
                 v595);
        v603 = v602;
        if ( !v602 )
        {
          ++*(_DWORD *)(v22 + 2656);
LABEL_937:
          i9 = 0;
          v2035 = 0LL;
          goto LABEL_965;
        }
        v604 = v601;
        v605 = (_QWORD *)v602;
        if ( (unsigned int)v601 >= 8 )
        {
          v606 = (unsigned __int64)(unsigned int)v601 >> 3;
          do
          {
            v607 = __rdtsc();
            v604 -= 8;
            v608 = (__ROR8__(v607, 3) ^ v607) * (unsigned __int128)0x7010008004002001uLL;
            v2145 = *((_QWORD *)&v608 + 1);
            *v605++ = v608 ^ *((_QWORD *)&v608 + 1);
            --v606;
          }
          while ( v606 );
          v22 = (unsigned __int64)v1989;
          v587 = (_QWORD **)v1986;
        }
        if ( v604 )
        {
          v609 = __rdtsc();
          v610 = (__ROR8__(v609, 3) ^ v609) * (unsigned __int128)0x7010008004002001uLL;
          v2081 = *((_QWORD *)&v610 + 1);
          v611 = v610 ^ *((_QWORD *)&v610 + 1);
          do
          {
            *(_BYTE *)v605 = v611;
            v605 = (_QWORD *)((char *)v605 + 1);
            v611 >>= 8;
            --v604;
          }
          while ( v604 );
        }
        v612 = v598 - v601;
        v613 = (_QWORD *)(v603 + (unsigned int)v601 + (unsigned int)(8 * v592));
        if ( v612 >= 8 )
        {
          v605 = (_QWORD *)((unsigned __int64)v612 >> 3);
          do
          {
            v614 = __rdtsc();
            v612 -= 8;
            v615 = (__ROR8__(v614, 3) ^ v614) * (unsigned __int128)0x7010008004002001uLL;
            v2082 = *((_QWORD *)&v615 + 1);
            *v613++ = v615 ^ *((_QWORD *)&v615 + 1);
            v605 = (_QWORD *)((char *)v605 - 1);
          }
          while ( v605 );
        }
        if ( v612 )
        {
          v616 = __rdtsc();
          v617 = (__ROR8__(v616, 3) ^ v616) * (unsigned __int128)0x7010008004002001uLL;
          v2083 = *((_QWORD *)&v617 + 1);
          v618 = v617 ^ *((_QWORD *)&v617 + 1);
          do
          {
            *(_BYTE *)v613 = v618;
            v613 = (_QWORD *)((char *)v613 + 1);
            v618 >>= 8;
            --v612;
          }
          while ( v612 );
        }
        v2035 = v603;
        v619 = v603 + (unsigned int)v601;
        if ( !v619 )
          goto LABEL_937;
        v620 = *v587;
        if ( *v587 != v587 )
        {
          v621 = v1985;
          do
          {
            v613 = (_QWORD *)((char *)v620 - *(_QWORD *)(v22 + 1880));
            if ( v593 < (unsigned int)v592 )
            {
              v622 = v593++;
              *(_QWORD *)(v619 + 8 * v622) = *(_QWORD *)((char *)v613 + *(_QWORD *)(v22 + 1888));
              v621 = v1985;
            }
            v620 = (_QWORD *)*v620;
            v1985 = ++v621;
          }
          while ( v620 != v587 );
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD *))(v22 + 920))(
          v603 + (unsigned int)v601,
          v593,
          v613,
          v605);
        v623 = v1987;
        v624 = v593 - 1;
        v625 = v1991;
        i9 = 0;
LABEL_944:
        v626 = *(_QWORD *)(v623 + 8);
        v627 = 0;
        v628 = v624;
        if ( v624 < 0 )
          goto LABEL_953;
        while ( 1 )
        {
          v629 = (v628 + v627) >> 1;
          if ( v626 >= *(_QWORD *)(v619 + 8LL * v629) )
          {
            if ( v626 <= *(_QWORD *)(v619 + 8LL * v629) )
            {
              if ( v628 < v627 )
              {
LABEL_953:
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  v630 = (int *)v1984;
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = (char *)v630 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *v630;
                  *(_QWORD *)(v22 + 2360) = v626;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v631 = *(_DWORD *)(v22 + 2520);
                  if ( (v631 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v631 & 1) != 0 )
                  {
                    v632 = *(unsigned int *)(v22 + 2676);
                    v633 = *(_QWORD *)(v22 + 2104);
                    v634 = *(_QWORD *)(v22 + 2680);
                    v635 = (_QWORD *)(v632 + v22);
                    v636 = v632 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v632) >> 3);
                    while ( v635 != (_QWORD *)v636 )
                    {
                      *v635 ^= v634;
                      v634 = ((*v635++ ^ v633) + __ROR8__(v634, v634 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v634 != *(_QWORD *)(v22 + 2688) )
                    {
                      v637 = *(_DWORD *)(v22 + 2052);
                      v638 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v638 = v22;
                      *(_DWORD *)(v638 + 16) = v637;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v634 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v634, 256LL);
                    }
                  }
                }
              }
              v623 += 24LL;
              if ( v623 >= v625 )
              {
LABEL_965:
                (*(void (__fastcall **)(_QWORD))(v22 + 296))(*(_QWORD *)(v22 + 1328));
                (*(void (**)(void))(v22 + 384))();
                (*(void (__fastcall **)(char *))(v22 + 896))(v2001);
                if ( !v2035 )
                  goto LABEL_237;
                *(_DWORD *)(v22 + 2120) += v1985 << 9;
                v217 = *(void (**)(void))(v22 + 264);
LABEL_380:
                v217();
                goto LABEL_237;
              }
              goto LABEL_944;
            }
            v627 = v629 + 1;
          }
          else
          {
            if ( !v629 )
              goto LABEL_953;
            v628 = v629 - 1;
          }
          if ( v628 < v627 )
            goto LABEL_953;
        }
      }
      if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 && (*(_DWORD *)(v22 + 2524) & 0x1000) == 0 )
      {
        v639 = __rdtsc();
        v640 = (__ROR8__(v639, 3) ^ v639) * (unsigned __int128)0x7010008004002001uLL;
        v2084 = *((_QWORD *)&v640 + 1);
        v641 = v640 ^ DWORD2(v640);
        v34 = ((unsigned __int64)v640 ^ *((_QWORD *)&v640 + 1)) / 5;
        *(_DWORD *)(v22 + 2116) = v641 - 5 * v34;
      }
LABEL_970:
      v642 = *(_DWORD *)(v22 + 2116);
      v643 = 0;
      if ( !v642 )
      {
        v2042 = 0LL;
        v1074 = v44;
        v649 = 0;
        for ( i12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v22 + 768))(&v2042, v34);
              i12;
              i12 = (*(__int64 (__fastcall **)(__int64 *))(v22 + 768))(&v2042) )
        {
          ++v649;
          if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(i12, &v2096) )
          {
            if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
            {
              v1076 = *(_QWORD **)(v22 + 2760);
              v1077 = 48;
              v1078 = 6LL;
              do
              {
                v1077 -= 8;
                *v1076 = *(_QWORD *)v1074;
                v1074 += 8;
                ++v1076;
                --v1078;
              }
              while ( v1078 );
              if ( v1077 )
              {
                do
                {
                  v1079 = *v1074++;
                  *(_BYTE *)v1076 = v1079;
                  v1076 = (_QWORD *)((char *)v1076 + 1);
                  --v1077;
                }
                while ( v1077 );
                v22 = (unsigned __int64)v1989;
              }
              v1074 = *(char **)(v22 + 2760);
            }
            *((_QWORD *)v1074 + 3) = i12;
            v1080 = *(_QWORD *)(v22 + 1416);
            *(_QWORD *)v1080 = v1074;
            *(_DWORD *)(v1080 + 16) = 48;
            v1081 = *(_QWORD *)(v22 + 1416);
            *(_QWORD *)(v1081 + 8) = i12;
            *(_DWORD *)(v1081 + 20) = 4096;
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = v1074 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2352) = *(int *)v1074;
              *(_QWORD *)(v22 + 2360) = 3LL;
              *(_DWORD *)(v22 + 2328) = 1;
              v1082 = *(_DWORD *)(v22 + 2520);
              if ( (v1082 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1082 & 1) != 0 )
              {
                v1083 = *(unsigned int *)(v22 + 2676);
                v1084 = *(_QWORD *)(v22 + 2104);
                v1085 = *(_QWORD *)(v22 + 2680);
                v1086 = (_QWORD *)(v1083 + v22);
                v1087 = v1083 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1083) >> 3);
                while ( v1086 != (_QWORD *)v1087 )
                {
                  *v1086 ^= v1085;
                  v1085 = ((v1084 ^ *v1086++) + __ROR8__(v1085, v1085 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1085 != *(_QWORD *)(v22 + 2688) )
                {
                  v1088 = *(_DWORD *)(v22 + 2052);
                  v1089 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v1089 = v22;
                  *(_DWORD *)(v1089 + 16) = v1088;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1085 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v1085, 256LL);
                }
              }
            }
          }
        }
        goto LABEL_1620;
      }
      v644 = v642 - 1;
      if ( !v644 )
      {
        v1057 = v44;
        v2049 = 0LL;
        v649 = 0;
        v1058 = KeGetCurrentIrql();
        v1994 = v1058;
        __writecr8(0xCuLL);
        v1059 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v22 + 776))(&v2049, v34);
        if ( v1059 )
        {
          do
          {
            ++v649;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(v1059, &v2095) )
            {
              if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
              {
                v1060 = *(_QWORD **)(v22 + 2760);
                v1061 = 48;
                v1062 = 6LL;
                do
                {
                  v1061 -= 8;
                  *v1060 = *(_QWORD *)v1057;
                  v1057 += 8;
                  ++v1060;
                  --v1062;
                }
                while ( v1062 );
                if ( v1061 )
                {
                  do
                  {
                    v1063 = *v1057++;
                    *(_BYTE *)v1060 = v1063;
                    v1060 = (_QWORD *)((char *)v1060 + 1);
                    --v1061;
                  }
                  while ( v1061 );
                  v22 = (unsigned __int64)v1989;
                }
                v1057 = *(char **)(v22 + 2760);
              }
              *((_QWORD *)v1057 + 3) = v1059;
              v1064 = *(_QWORD *)(v22 + 1416);
              *(_QWORD *)v1064 = v1057;
              *(_DWORD *)(v1064 + 16) = 48;
              v1065 = *(_QWORD *)(v22 + 1416);
              *(_QWORD *)(v1065 + 8) = v1059;
              *(_DWORD *)(v1065 + 20) = 4096;
              if ( !*(_DWORD *)(v22 + 2328) )
              {
                *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2344) = v1057 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2352) = *(int *)v1057;
                *(_QWORD *)(v22 + 2360) = 4LL;
                *(_DWORD *)(v22 + 2328) = 1;
                v1066 = *(_DWORD *)(v22 + 2520);
                if ( (v1066 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1066 & 1) != 0 )
                {
                  v1067 = *(unsigned int *)(v22 + 2676);
                  v1068 = *(_QWORD *)(v22 + 2104);
                  v1069 = *(_QWORD *)(v22 + 2680);
                  v1070 = (_QWORD *)(v1067 + v22);
                  v1071 = v1067 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1067) >> 3);
                  while ( v1070 != (_QWORD *)v1071 )
                  {
                    *v1070 ^= v1069;
                    v1069 = ((v1068 ^ *v1070++) + __ROR8__(v1069, v1069 & 0x3F)) ^ 0xEFA;
                  }
                  *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                  if ( v1069 != *(_QWORD *)(v22 + 2688) )
                  {
                    v1072 = *(_DWORD *)(v22 + 2052);
                    v1073 = *(_QWORD *)(v22 + 1416);
                    *(_QWORD *)v1073 = v22;
                    *(_DWORD *)(v1073 + 16) = v1072;
                    if ( !*(_DWORD *)(v22 + 2328) )
                      *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1069 ^ *(_QWORD *)(v22 + 2688);
                    sub_140BDA384(v22, 0LL, v1069, 256LL);
                  }
                }
              }
            }
            v1059 = (*(__int64 (__fastcall **)(__int64 *))(v22 + 776))(&v2049);
          }
          while ( v1059 );
          LOBYTE(v1058) = v1994;
        }
        __writecr8((unsigned __int8)v1058);
        goto LABEL_1620;
      }
      v645 = v644 - 1;
      if ( !v645 )
      {
        v1041 = v44;
        v1042 = 0LL;
        v649 = 0;
        do
        {
          v2019 = 0;
          while ( 1 )
          {
            do
            {
              if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v22 + 760))(v643, &v2019, &v2037) )
                goto LABEL_1574;
              v1043 = (*(__int64 (__fastcall **)(__int64))(v22 + 728))(v2037);
            }
            while ( !v1043 );
            ++v649;
            v1044 = (*(__int64 (__fastcall **)(__int64))(v22 + 736))(v1043);
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(v1044, &v2094) )
              break;
            (*(void (__fastcall **)(__int64, __int64))(v22 + 744))(v2037, v1043);
          }
          if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
          {
            v1045 = *(_QWORD **)(v22 + 2760);
            LODWORD(v34) = 48;
            v1046 = 6LL;
            do
            {
              v34 = (unsigned int)(v34 - 8);
              *v1045 = *(_QWORD *)v1041;
              v1041 += 8;
              ++v1045;
              --v1046;
            }
            while ( v1046 );
            if ( (_DWORD)v34 )
            {
              do
              {
                v1047 = *v1041++;
                *(_BYTE *)v1045 = v1047;
                v1045 = (_QWORD *)((char *)v1045 + 1);
                v34 = (unsigned int)(v34 - 1);
              }
              while ( (_DWORD)v34 );
              v22 = (unsigned __int64)v1989;
            }
            v1041 = *(char **)(v22 + 2760);
          }
          *((_QWORD *)v1041 + 3) = v1044;
          v1048 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)v1048 = v1041;
          *(_DWORD *)(v1048 + 16) = 48;
          v1049 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)(v1049 + 8) = v1044;
          *(_DWORD *)(v1049 + 20) = 4096;
          if ( !*(_DWORD *)(v22 + 2328) )
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = v1041 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *(int *)v1041;
            *(_QWORD *)(v22 + 2360) = v1042;
            *(_DWORD *)(v22 + 2328) = 1;
            v1050 = *(_DWORD *)(v22 + 2520);
            if ( (v1050 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1050 & 1) != 0 )
            {
              v1051 = *(unsigned int *)(v22 + 2676);
              v1052 = *(_QWORD *)(v22 + 2104);
              v1053 = *(_QWORD *)(v22 + 2680);
              v34 = v1051 + v22;
              v1054 = v1051 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1051) >> 3);
              while ( v34 != v1054 )
              {
                *(_QWORD *)v34 ^= v1053;
                v1053 = ((v1052 ^ *(_QWORD *)v34) + __ROR8__(v1053, v1053 & 0x3F)) ^ 0xEFA;
                v34 += 8LL;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v1053 != *(_QWORD *)(v22 + 2688) )
              {
                v1055 = *(_DWORD *)(v22 + 2052);
                v1056 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1056 = v22;
                *(_DWORD *)(v1056 + 16) = v1055;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1053 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1053, 256LL);
              }
            }
          }
LABEL_1574:
          ++v643;
          ++v1042;
        }
        while ( v643 < 3 );
LABEL_1620:
        i9 = 0;
        goto LABEL_1621;
      }
      v646 = v645 - 1;
      if ( v646 )
      {
        v647 = v646 - 1;
        if ( v647 )
        {
          if ( v647 != 1 )
          {
            i9 = 0;
            *(_DWORD *)(v22 + 2116) = 0;
            v40 = 1;
            goto LABEL_1624;
          }
          v648 = v44;
          v2158 = -1;
          v649 = 0;
          v650 = 0;
          v651 = 0LL;
          do
          {
            v2044 = 0LL;
            while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v22 + 1072))(
                      v650,
                      &v2044,
                      &v2158,
                      &v2027) )
            {
              ++v649;
              if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(v2027, &v2085) )
              {
                if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                {
                  v652 = *(_QWORD **)(v22 + 2760);
                  v653 = 48;
                  v654 = 6LL;
                  do
                  {
                    v653 -= 8;
                    *v652 = *(_QWORD *)v648;
                    v648 += 8;
                    ++v652;
                    --v654;
                  }
                  while ( v654 );
                  if ( v653 )
                  {
                    do
                    {
                      v655 = *v648++;
                      *(_BYTE *)v652 = v655;
                      v652 = (_QWORD *)((char *)v652 + 1);
                      --v653;
                    }
                    while ( v653 );
                    v22 = (unsigned __int64)v1989;
                  }
                  v648 = *(char **)(v22 + 2760);
                }
                *((_QWORD *)v648 + 3) = v2027;
                v656 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v656 = v648;
                *(_DWORD *)(v656 + 16) = 48;
                v657 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)(v657 + 8) = v2027;
                *(_DWORD *)(v657 + 20) = 4096;
                if ( !*(_DWORD *)(v22 + 2328) )
                {
                  *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2344) = v648 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2352) = *(int *)v648;
                  *(_QWORD *)(v22 + 2360) = v651;
                  *(_DWORD *)(v22 + 2328) = 1;
                  v658 = *(_DWORD *)(v22 + 2520);
                  if ( (v658 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v658 & 1) != 0 )
                  {
                    v659 = *(unsigned int *)(v22 + 2676);
                    v660 = *(_QWORD *)(v22 + 2104);
                    v661 = *(_QWORD *)(v22 + 2680);
                    v662 = (_QWORD *)(v659 + v22);
                    v663 = v659 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v659) >> 3);
                    while ( v662 != (_QWORD *)v663 )
                    {
                      *v662 ^= v661;
                      v661 = ((v660 ^ *v662++) + __ROR8__(v661, v661 & 0x3F)) ^ 0xEFA;
                    }
                    *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                    if ( v661 != *(_QWORD *)(v22 + 2688) )
                    {
                      v664 = *(_DWORD *)(v22 + 2052);
                      v665 = *(_QWORD *)(v22 + 1416);
                      *(_QWORD *)v665 = v22;
                      *(_DWORD *)(v665 + 16) = v664;
                      if ( !*(_DWORD *)(v22 + 2328) )
                        *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v661 ^ *(_QWORD *)(v22 + 2688);
                      sub_140BDA384(v22, 0LL, v661, 256LL);
                    }
                  }
                }
              }
            }
            ++v650;
            ++v651;
          }
          while ( v650 < 3 );
        }
        else
        {
          v666 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v22 + 792);
          v649 = 0;
          v1985 = 0;
          for ( i13 = v666(0LL, v34); ; i13 = v685(v686) )
          {
            v686 = i13;
            if ( !i13 )
              break;
            v668 = v1984;
            v2045 = 0LL;
            v669 = 1;
            v670 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v22 + 784))(i13, &v2045);
            if ( v670 )
            {
              do
              {
                ++v669;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 536))(v670, &v2086) )
                {
                  if ( (*(_DWORD *)(v22 + 2520) & 0x20000000) != 0 )
                  {
                    v671 = *(_QWORD **)(v22 + 2760);
                    v672 = 48;
                    v673 = 6LL;
                    do
                    {
                      v672 -= 8;
                      *v671 = *(_QWORD *)v668;
                      v668 += 8;
                      ++v671;
                      --v673;
                    }
                    while ( v673 );
                    if ( v672 )
                    {
                      do
                      {
                        v674 = *v668++;
                        *(_BYTE *)v671 = v674;
                        v671 = (_QWORD *)((char *)v671 + 1);
                        --v672;
                      }
                      while ( v672 );
                      v22 = (unsigned __int64)v1989;
                    }
                    v668 = *(char **)(v22 + 2760);
                  }
                  *((_QWORD *)v668 + 3) = v670;
                  *((_QWORD *)v668 + 4) = v686;
                  v675 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v675 = v668;
                  *(_DWORD *)(v675 + 16) = 48;
                  v676 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)(v676 + 8) = v670;
                  *(_DWORD *)(v676 + 20) = 4096;
                  if ( !*(_DWORD *)(v22 + 2328) )
                  {
                    *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2344) = v668 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2352) = *(int *)v668;
                    *(_QWORD *)(v22 + 2360) = 6LL;
                    *(_DWORD *)(v22 + 2328) = 1;
                    v677 = *(_DWORD *)(v22 + 2520);
                    if ( (v677 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v677 & 1) != 0 )
                    {
                      v678 = *(unsigned int *)(v22 + 2676);
                      v679 = *(_QWORD *)(v22 + 2104);
                      v680 = *(_QWORD *)(v22 + 2680);
                      v681 = (_QWORD *)(v678 + v22);
                      v682 = v678 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v678) >> 3);
                      while ( v681 != (_QWORD *)v682 )
                      {
                        *v681 ^= v680;
                        v680 = ((v679 ^ *v681++) + __ROR8__(v680, v680 & 0x3F)) ^ 0xEFA;
                      }
                      *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                      if ( v680 != *(_QWORD *)(v22 + 2688) )
                      {
                        v683 = *(_DWORD *)(v22 + 2052);
                        v684 = *(_QWORD *)(v22 + 1416);
                        *(_QWORD *)v684 = v22;
                        *(_DWORD *)(v684 + 16) = v683;
                        if ( !*(_DWORD *)(v22 + 2328) )
                          *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v680 ^ *(_QWORD *)(v22 + 2688);
                        sub_140BDA384(v22, 0LL, v680, 256LL);
                      }
                    }
                  }
                }
                v670 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v22 + 784))(v686, &v2045);
              }
              while ( v670 );
              v649 = v1985;
            }
            v685 = *(__int64 (__fastcall **)(_QWORD))(v22 + 792);
            v649 += v669;
            v1985 = v649;
          }
        }
        goto LABEL_1620;
      }
      v55 = (*(_DWORD *)(v22 + 2520) & 0x20000000) == 0;
      v649 = 0;
      v687 = *(ULONG_PTR **)(v22 + 1256);
      v2009 = (char *)v22;
      v688 = *v687;
      v2004 = *v687;
      if ( !v55 )
        goto LABEL_1620;
      v689 = (int *)v1984;
      v690 = *((_QWORD *)v1984 + 5);
      if ( v690 )
      {
        v34 = 1LL;
        v649 = 1;
        if ( v688 != v690 )
        {
          *((_QWORD *)v1984 + 3) = v688;
          v691 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)v691 = v689;
          *(_DWORD *)(v691 + 16) = 48;
          v692 = *(_QWORD *)(v22 + 1416);
          *(_QWORD *)(v692 + 8) = v688;
          *(_DWORD *)(v692 + 20) = 4096;
          i9 = 0;
          if ( !*(_DWORD *)(v22 + 2328) )
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v689 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *v689;
            *(_QWORD *)(v22 + 2360) = 5LL;
            *(_DWORD *)(v22 + 2328) = 1;
            v693 = *(_DWORD *)(v22 + 2520);
            if ( (v693 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v693 & 1) != 0 )
            {
              v694 = *(unsigned int *)(v22 + 2676);
              v695 = *(_QWORD *)(v22 + 2104);
              v696 = *(_QWORD *)(v22 + 2680);
              v34 = v694 + v22;
              v697 = v694 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v694) >> 3);
              while ( v34 != v697 )
              {
                *(_QWORD *)v34 ^= v696;
                v696 = ((v695 ^ *(_QWORD *)v34) + __ROR8__(v696, v696 & 0x3F)) ^ 0xEFA;
                v34 += 8LL;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              if ( v696 != *(_QWORD *)(v22 + 2688) )
              {
                v698 = *(_DWORD *)(v22 + 2052);
                v699 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v699 = v22;
                *(_DWORD *)(v699 + 16) = v698;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v696 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v696, 256LL);
              }
            }
          }
          goto LABEL_1621;
        }
        goto LABEL_1620;
      }
      i9 = 0;
      if ( !v688 )
        goto LABEL_1621;
      v700 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v22 + 528);
      v1985 = 1;
      v2008 = (_BYTE *)v22;
      v701 = v700(v688, &v2140);
      v702 = BugCheckParameter2;
      v703 = v701;
      v704 = v2142;
      v1995 = (_DWORD *)v701;
      v2000 = v2142;
      v2002 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
      {
        if ( (*(_DWORD *)(v22 + 2520) & 0x100000) == 0 )
        {
          v2033[1] = -402653175;
          KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v688, 5uLL, 0LL);
        }
        v705 = -1073741701;
        goto LABEL_1545;
      }
      v2025 = 0LL;
      v706 = &v2026;
      v707 = 4;
      v708 = 0xFFFFFFFFLL;
      do
      {
        *(_BYTE *)v706 = 0;
        v706 = (unsigned int *)((char *)v706 + 1);
        --v707;
      }
      while ( v707 );
      v709 = 0;
      if ( !*(_DWORD *)(v22 + 2092) )
      {
LABEL_1082:
        v2010 = 0LL;
        goto LABEL_1083;
      }
      v710 = v2026;
      LODWORD(v708) = HIDWORD(v2025);
      v711 = v2025;
      while ( 1 )
      {
        v712 = v22;
        v713 = 0;
        if ( *(_QWORD *)(v22 + 2752) )
          v712 = *(_QWORD *)(v22 + 2752);
        v714 = (int *)(v712 + *(unsigned int *)(v712 + 2088));
        if ( v711 && (unsigned int)v708 <= v709 )
        {
          v713 = v708;
          v714 = (int *)(v712 + v710);
        }
        if ( v713 != v709 )
          break;
LABEL_1074:
        LODWORD(v2025) = 1;
        v710 = (_DWORD)v714 - v712;
        v708 = v713;
        v2026 = (_DWORD)v714 - v712;
        v711 = 1;
        HIDWORD(v2025) = v713;
        v718 = *v714;
        if ( (*v714 == 1 || v718 == 12 || v718 == 43) && *((_QWORD *)v714 + 1) == v703 && v714[4] == v704
          || (unsigned int)(v718 - 33) <= 1 && *((_QWORD *)v714 + 4) == v702 )
        {
          v2010 = v714;
          if ( v714 )
          {
            v705 = -1073741554;
            goto LABEL_1544;
          }
LABEL_1083:
          v719 = *(char ***)(v22 + 1320);
          LODWORD(v1990) = v2000;
          _disable();
          v720 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1624));
          _enable();
          (*(void (__fastcall **)(__int64, __int64))(v22 + 376))(v720, v708);
          LOBYTE(v721) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(v22 + 248))(*(_QWORD *)(v22 + 1328), v721);
          v722 = *v719;
          if ( *v719 != (char *)v719 )
          {
            v723 = *(_QWORD *)(v22 + 1880);
            while ( 1 )
            {
              v724 = *(_QWORD *)&v722[*(_QWORD *)(v22 + 1888) - v723];
              if ( v702 >= v724 && v702 < v724 + *(unsigned int *)&v722[*(_QWORD *)(v22 + 1896) - v723] )
                break;
              v722 = *(char **)v722;
              if ( v722 == (char *)v719 )
                goto LABEL_1092;
            }
            (*(void (__fastcall **)(char *, __int64))(v22 + 232))(&v722[-v723], 1LL);
          }
LABEL_1092:
          (*(void (__fastcall **)(_QWORD))(v22 + 296))(*(_QWORD *)(v22 + 1328));
          (*(void (**)(void))(v22 + 384))();
          if ( _bittest((const signed __int32 *)(v22 + 2520), 0x1Du) )
          {
            v705 = sub_140BE196C(&v2009, v702, 9LL);
            goto LABEL_1544;
          }
          v726 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 512);
          v2069[4] = 0LL;
          LOBYTE(v725) = 1;
          v2039[4] = 0;
          v727 = v726(v702, v725, 0LL, &v2000);
          if ( v727 )
          {
            v729 = v2000;
          }
          else
          {
            v729 = 0;
            v2000 = 0;
          }
          v2069[1] = v727;
          v730 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 512);
          v2039[1] = v729;
          LOBYTE(v728) = 1;
          v2001 = (char *)v730(v702, v728, 12LL, &v2000);
          if ( v2001 )
          {
            v732 = v2000;
          }
          else
          {
            v732 = 0;
            v2000 = 0;
          }
          v1993 = v732;
          v2069[2] = v2001;
          v2039[2] = v732;
          LOBYTE(v731) = 1;
          v733 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v22 + 512))(
                   v702,
                   v731,
                   10LL,
                   &v2000);
          if ( v733 )
          {
            v734 = v2000;
          }
          else
          {
            v734 = 0;
            v2000 = 0;
          }
          v2069[3] = v733;
          v735 = *(__int64 (__fastcall **)(_QWORD))(v22 + 520);
          v2039[3] = v734;
          v736 = v735(v702);
          if ( !v736 )
          {
            v737 = *(_DWORD *)(v22 + 2520);
            if ( (v737 & 0x100000) == 0 )
            {
              v2033[5] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v702, 7uLL, 0LL);
            }
            if ( *(_DWORD *)(v22 + 2328) )
              goto LABEL_1117;
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = 0LL;
            *(_QWORD *)(v22 + 2352) = 271LL;
            *(_QWORD *)(v22 + 2360) = v702;
            *(_DWORD *)(v22 + 2328) = 1;
            if ( (v737 & 0x20000000) != 0 )
              goto LABEL_1117;
            if ( (*(_DWORD *)(v22 + 2524) & 0x200000) == 0 )
              goto LABEL_1117;
            if ( (v737 & 1) == 0 )
              goto LABEL_1117;
            v738 = *(unsigned int *)(v22 + 2676);
            v739 = *(_QWORD *)(v22 + 2104);
            v740 = *(_QWORD *)(v22 + 2680);
            v741 = (_QWORD *)(v738 + v22);
            v742 = v738 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v738) >> 3);
            while ( v741 != (_QWORD *)v742 )
            {
              *v741 ^= v740;
              v740 = ((v739 ^ *v741++) + __ROR8__(v740, v740 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v22 + 2524) &= ~0x200000u;
            if ( v740 == *(_QWORD *)(v22 + 2688) )
              goto LABEL_1117;
            v743 = *(_DWORD *)(v22 + 2052);
            v744 = *(_QWORD *)(v22 + 1416);
            *(_QWORD *)v744 = v22;
            *(_DWORD *)(v744 + 16) = v743;
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v740 ^ *(_QWORD *)(v22 + 2688);
            v745 = v22;
            goto LABEL_1116;
          }
          v746 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v22 + 1176))(v702, &v2063);
          v747 = *(unsigned int *)(v22 + 2372);
          v2069[5] = v746;
          v2039[5] = v2063;
          LODWORD(v746) = *(_DWORD *)(v736 + 84);
          v2069[0] = v702;
          v748 = *(unsigned int *)(v22 + 2052);
          v2039[0] = v746;
          v749 = v748 + 288;
          if ( (unsigned int)(v748 + 288) <= *(_DWORD *)(v22 + 2660) )
          {
            v750 = v22;
            v1987 = v22;
            *(_DWORD *)(v22 + 2052) = v749;
          }
          else
          {
            v1987 = sub_140BD9AF8(v22, v749, v747);
            v750 = v1987;
            if ( !v1987 )
            {
LABEL_1120:
              v2008 = 0LL;
              goto LABEL_1162;
            }
            v751 = *(_DWORD *)(v22 + 2520);
            if ( (v751 & 2) == 0 )
            {
              v752 = *(_DWORD *)(v22 + 2052);
              v753 = *(_QWORD *)(v22 + 2024);
              v965 = (v751 & 0x10000000) != 0;
              v754 = (_QWORD *)v22;
              v755 = v965 ? *(_DWORD *)(v22 + 2372) : 0;
              if ( v752 >= 8 )
              {
                v756 = (unsigned __int64)v752 >> 3;
                do
                {
                  *v754 = 0LL;
                  v752 -= 8;
                  ++v754;
                  --v756;
                }
                while ( v756 );
              }
              for ( ; v752; --v752 )
              {
                *(_BYTE *)v754 = 0;
                v754 = (_QWORD *)((char *)v754 + 1);
              }
              v757 = *(_DWORD *)(v750 + 2372);
              *(_DWORD *)(v750 + 2372) = v755;
              if ( v755 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v750 + 872))(v753);
              }
              else if ( (*(_DWORD *)(v750 + 2520) & 0x8000000) != 0 || !v755 )
              {
                (*(void (__fastcall **)(__int64))(v750 + 264))(v753);
              }
              else
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v750 + 568))(v753 - 8, *(_QWORD *)(v753 - 8));
              }
              *(_DWORD *)(v750 + 2372) = v757;
            }
            *(_DWORD *)(v750 + 2520) &= ~2u;
          }
          v758 = v750 + v748;
          *(_DWORD *)(v750 + 2092) += 6;
          v759 = v2069;
          v2046 = v750 + v748;
          v760 = v2039;
          v2010 = (_DWORD *)(v750 + v748);
          v1986 = (__int64)v2069;
          v1991 = 6LL;
          do
          {
            v761 = (unsigned int)*v760;
            v762 = 6LL;
            v763 = (_QWORD *)*v759;
            v764 = 48;
            v1988 = *v760;
            v765 = (_QWORD *)v758;
            do
            {
              *v765 = 0LL;
              v764 -= 8;
              ++v765;
              --v762;
            }
            while ( v762 );
            for ( ; v764; --v764 )
            {
              *(_BYTE *)v765 = 0;
              v765 = (_QWORD *)((char *)v765 + 1);
            }
            *(_DWORD *)v758 = 0;
            *(_QWORD *)(v758 + 8) = v763;
            v766 = v763;
            *(_DWORD *)(v758 + 16) = v761;
            v767 = (const char *)v763;
            *(_DWORD *)(v750 + 2120) += v761;
            v768 = *(_DWORD *)(v750 + 2100);
            v769 = *(_QWORD *)(v750 + 2104);
            if ( v763 < (_QWORD *)((char *)v763 + v761) )
            {
              do
              {
                _mm_prefetch(v767, 0);
                v767 += 64;
              }
              while ( v767 < (const char *)v763 + v761 );
            }
            v770 = *(_QWORD *)(v750 + 2104);
            v771 = (unsigned int)v761 >> 7;
            if ( (unsigned int)v761 >> 7 )
            {
              do
              {
                v772 = 8LL;
                do
                {
                  v773 = v766[1] ^ __ROL8__(*v766 ^ v770, v768);
                  v766 += 2;
                  v770 = __ROL8__(v773, v768);
                  --v772;
                }
                while ( v772 );
                v774 = (__ROL8__(v769 ^ ((char *)v766 - (char *)v763), 17) ^ v769 ^ (unsigned __int64)((char *)v766 - (char *)v763))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2087 = *((_QWORD *)&v774 + 1);
                v768 = (BYTE8(v774) ^ (unsigned __int8)(v774 ^ v768)) & 0x3F;
                if ( !v768 )
                  LOBYTE(v768) = 1;
                --v771;
              }
              while ( v771 );
              v750 = v1987;
              LODWORD(v761) = v1988;
              v759 = (_QWORD *)v1986;
            }
            v775 = v761 & 0x7F;
            if ( v775 >= 8 )
            {
              v776 = (unsigned __int64)(v761 & 0x7F) >> 3;
              do
              {
                v770 = __ROL8__(*v766++ ^ v770, v768);
                v775 -= 8;
                --v776;
              }
              while ( v776 );
            }
            if ( v775 )
            {
              do
              {
                v777 = *(unsigned __int8 *)v766;
                v766 = (_QWORD *)((char *)v766 + 1);
                v770 = __ROL8__(v777 ^ v770, v768);
                --v775;
              }
              while ( v775 );
              v750 = v1987;
            }
            for ( i14 = v770; ; v770 = (unsigned int)i14 ^ (unsigned int)v770 )
            {
              i14 >>= 31;
              if ( !i14 )
                break;
            }
            LODWORD(v770) = v770 & 0x7FFFFFFF;
            ++v759;
            *(_DWORD *)(v758 + 20) = v770;
            *(_DWORD *)(v750 + 2120) += v761;
            v758 = v2046 + 48;
            v1986 = (__int64)v759;
            ++v760;
            v2046 += 48LL;
            --v1991;
          }
          while ( v1991 );
          v22 = (unsigned __int64)v1989;
          v2008 = (_BYTE *)v750;
          if ( !v750 )
          {
            i9 = 0;
            goto LABEL_1162;
          }
          v779 = v2010;
          v780 = v2002;
          *v2010 = 44;
          *((_QWORD *)v779 + 3) = v780;
          if ( (*(_DWORD *)(v750 + 2520) & 0x8100000) == 0 )
          {
            if ( _bittest((const signed __int32 *)(v750 + 2524), 0xFu) )
            {
              v779[8] |= 1u;
              if ( (unsigned int)sub_140BDAD30(v750, v780, v770, v766) )
                v779[8] |= 4u;
            }
          }
          v2009 = (char *)v750;
          i9 = 0;
          v705 = sub_140BD80B0((unsigned int)&v2008, (_DWORD)v1995, v1990, v780, 9, (__int64)&v2018, (__int64)v2033);
          if ( v705 < 0 )
            goto LABEL_1544;
          v781 = v2008;
          v782 = v2033[0] - v2018;
          v2010 = &v2008[(_QWORD)v2010 - v750];
          v783 = (_QWORD *)(v780 + v2018);
          v784 = v2010 + 48;
          v785 = 48;
          v1986 = (__int64)(v2010 + 48);
          v786 = v2010 + 48;
          v787 = 6LL;
          do
          {
            *v786 = 0LL;
            v785 -= 8;
            ++v786;
            --v787;
          }
          while ( v787 );
          for ( i15 = 0xFFFFFFFFLL; v785; --v785 )
          {
            *(_BYTE *)v786 = 0;
            v786 = (_QWORD *)((char *)v786 + 1);
          }
          *v784 = 0;
          v789 = v783;
          *((_QWORD *)v784 + 1) = v783;
          v790 = (const char *)v783;
          v784[4] = v782;
          *((_DWORD *)v781 + 530) += v782;
          v791 = *((_DWORD *)v781 + 525);
          v792 = *((_QWORD *)v781 + 263);
          v793 = (unsigned __int64)v783 + v782;
          if ( (unsigned __int64)v783 < v793 )
          {
            do
            {
              _mm_prefetch(v790, 0);
              v790 += 64;
            }
            while ( (unsigned __int64)v790 < v793 );
          }
          v794 = *((_QWORD *)v781 + 263);
          v795 = v782 >> 7;
          if ( v782 >> 7 )
          {
            do
            {
              v796 = 8LL;
              do
              {
                v797 = v789[1] ^ __ROL8__(*v789 ^ v794, v791);
                v789 += 2;
                v794 = __ROL8__(v797, v791);
                --v796;
              }
              while ( v796 );
              v798 = (__ROL8__(v792 ^ ((char *)v789 - (char *)v783), 17) ^ v792 ^ (unsigned __int64)((char *)v789 - (char *)v783))
                   * (unsigned __int128)0x7010008004002001uLL;
              v2088 = *((_QWORD *)&v798 + 1);
              v799 = v798 ^ BYTE8(v798) ^ v791;
              i15 = 0xFFFFFFFFLL;
              v791 = v799 & 0x3F;
              if ( !v791 )
                LOBYTE(v791) = 1;
              --v795;
            }
            while ( v795 );
            v22 = (unsigned __int64)v1989;
            v784 = (_DWORD *)v1986;
          }
          v800 = v782 & 0x7F;
          if ( (unsigned int)v800 >= 8 )
          {
            v801 = (unsigned __int64)(unsigned int)v800 >> 3;
            do
            {
              v794 = __ROL8__(*v789++ ^ v794, v791);
              v800 = (unsigned int)(v800 - 8);
              --v801;
            }
            while ( v801 );
          }
          for ( ; (_DWORD)v800; v800 = (unsigned int)(v800 - 1) )
          {
            v802 = *(unsigned __int8 *)v789;
            v789 = (_QWORD *)((char *)v789 + 1);
            v794 = __ROL8__(v802 ^ v794, v791);
          }
          for ( i16 = v794; ; v794 = (unsigned int)i16 ^ (unsigned int)v794 )
          {
            i16 >>= 31;
            if ( !i16 )
              break;
          }
          LODWORD(v794) = v794 & 0x7FFFFFFF;
          v2009 = v781;
          v784[5] = v794;
          i9 = 0;
          v2010[60] = 48;
          v2028 = v2010 + 24;
          if ( v2010 == (_DWORD *)-96LL )
          {
            v804 = *((unsigned int *)v781 + 513);
            v805 = v804 + 48;
            if ( (unsigned int)(v804 + 48) <= *((_DWORD *)v781 + 665) )
            {
              v806 = (__int64)v781;
              *((_DWORD *)v781 + 513) = v805;
            }
            else
            {
              v806 = sub_140BD9AF8(v781, v805, *((unsigned int *)v781 + 593));
              if ( !v806 )
                goto LABEL_1120;
              v807 = *((_DWORD *)v781 + 630);
              if ( (v807 & 2) == 0 )
              {
                v808 = *((_DWORD *)v781 + 513);
                v809 = *((_QWORD *)v781 + 253);
                v810 = (v807 & 0x10000000) != 0 ? *((_DWORD *)v781 + 593) : 0;
                if ( v808 >= 8 )
                {
                  v811 = (unsigned __int64)v808 >> 3;
                  do
                  {
                    *(_QWORD *)v781 = 0LL;
                    v808 -= 8;
                    v781 += 8;
                    --v811;
                  }
                  while ( v811 );
                }
                for ( ; v808; --v808 )
                  *v781++ = 0;
                v812 = *(_DWORD *)(v806 + 2372);
                *(_DWORD *)(v806 + 2372) = v810;
                if ( v810 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v806 + 872))(v809);
                }
                else if ( (*(_DWORD *)(v806 + 2520) & 0x8000000) != 0 || !v810 )
                {
                  (*(void (__fastcall **)(__int64))(v806 + 264))(v809);
                }
                else
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v806 + 568))(v809 - 8, *(_QWORD *)(v809 - 8));
                }
                *(_DWORD *)(v806 + 2372) = v812;
              }
              *(_DWORD *)(v806 + 2520) &= ~2u;
            }
            ++*(_DWORD *)(v806 + 2092);
            v813 = 48;
            v814 = v806 + v804;
            v1986 = v814;
            v815 = (_QWORD *)v814;
            v2062 = (_DWORD *)v814;
            v816 = 6LL;
            do
            {
              *v815 = 0LL;
              v813 -= 8;
              ++v815;
              --v816;
            }
            while ( v816 );
            for ( ; v813; --v813 )
            {
              *(_BYTE *)v815 = 0;
              v815 = (_QWORD *)((char *)v815 + 1);
            }
            v817 = v2001;
            v818 = v1993;
            v800 = (unsigned __int64)v2001;
            *(_DWORD *)v814 = 13;
            *(_QWORD *)(v814 + 8) = v800;
            *(_DWORD *)(v814 + 16) = v818;
            *(_DWORD *)(v806 + 2120) += v818;
            v819 = *(_DWORD *)(v806 + 2100);
            v820 = *(_QWORD *)(v806 + 2104);
            if ( v800 < v800 + v818 )
            {
              v821 = v817;
              do
              {
                _mm_prefetch(v821, 0);
                v821 += 64;
              }
              while ( (unsigned __int64)v821 < v800 + v818 );
            }
            v794 = *(_QWORD *)(v806 + 2104);
            v822 = (unsigned int)v818 >> 7;
            if ( (unsigned int)v818 >> 7 )
            {
              do
              {
                v823 = 8LL;
                do
                {
                  v824 = *(_QWORD *)(v800 + 8) ^ __ROL8__(*(_QWORD *)v800 ^ v794, v819);
                  v800 += 16LL;
                  v794 = __ROL8__(v824, v819);
                  --v823;
                }
                while ( v823 );
                v825 = (__ROL8__(v820 ^ (v800 - (_QWORD)v817), 17) ^ v820 ^ (v800 - (unsigned __int64)v817))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2089 = *((_QWORD *)&v825 + 1);
                v819 = ((unsigned __int8)v825 ^ (unsigned __int8)(BYTE8(v825) ^ v819)) & 0x3F;
                if ( !v819 )
                  LOBYTE(v819) = 1;
                --v822;
              }
              while ( v822 );
              v22 = (unsigned __int64)v1989;
              v814 = v1986;
              LODWORD(v818) = v1993;
            }
            i15 = v818 & 0x7F;
            if ( (unsigned int)i15 >= 8 )
            {
              v826 = (unsigned __int64)(v818 & 0x7F) >> 3;
              do
              {
                v794 = __ROL8__(*(_QWORD *)v800 ^ v794, v819);
                v800 += 8LL;
                i15 = (unsigned int)(i15 - 8);
                --v826;
              }
              while ( v826 );
            }
            if ( (_DWORD)i15 )
            {
              do
              {
                v827 = *(unsigned __int8 *)v800++;
                v794 = __ROL8__(v827 ^ v794, v819);
                i15 = (unsigned int)(i15 - 1);
              }
              while ( (_DWORD)i15 );
              v22 = (unsigned __int64)v1989;
            }
            for ( i17 = v794; ; v794 = (unsigned int)i17 ^ (unsigned int)v794 )
            {
              i17 >>= 31;
              if ( !i17 )
                break;
            }
            LODWORD(v794) = v794 & 0x7FFFFFFF;
            *(_DWORD *)(v814 + 20) = v794;
            v2028 = v2062;
            *(_DWORD *)(v806 + 2120) += v818;
          }
          else
          {
            LODWORD(v818) = v1993;
            v806 = (__int64)v781;
            v817 = v2001;
            v2010[24] = 13;
          }
          if ( (*(_DWORD *)(v806 + 2520) & 0x20000000) != 0 && (_DWORD)v818 )
            sub_140516B3C(v806, v817, (unsigned int)v818, v2028 + 7);
          v2008 = (_BYTE *)v806;
          v2028[6] = 0;
          v2028[6] |= 1u;
          if ( !v806 )
            goto LABEL_1162;
          v829 = v2010;
          v2009 = (char *)v806;
          v2010[36] = 35;
          if ( v829[40] < 0x94u )
          {
            v836 = v2002;
          }
          else
          {
            v830 = v2002;
            v831 = *((_QWORD *)v829 + 19);
            v832 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))(v806 + 520))(
                     v2002,
                     i15,
                     v794,
                     v800);
            if ( !v832 )
              goto LABEL_1120;
            v794 = v830 + *(unsigned int *)(v832 + 80);
            i15 = v829[46] | 2u;
            v829[46] = i15;
            v833 = i15;
            v834 = *(_QWORD **)(v831 + 112);
            if ( (unsigned __int64)v834 >= v830 && (unsigned __int64)v834 < v794 )
            {
              v833 = i15 | 4;
              *((_QWORD *)v829 + 21) = *v834;
              v829[46] = i15 | 4;
            }
            v835 = *(_QWORD **)(v831 + 120);
            v836 = v2002;
            if ( (unsigned __int64)v835 >= v2002 && (unsigned __int64)v835 < v794 )
            {
              *((_QWORD *)v829 + 22) = *v835;
              v829[46] = v833 | 8;
            }
          }
          v965 = _bittest((const signed __int32 *)(v806 + 2520), 0x15u);
          v2009 = (char *)v806;
          if ( !v965 )
            goto LABEL_1543;
          v837 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR))(v806 + 520))(v836, i15, v794);
          v1986 = v837;
          if ( !v837 )
            goto LABEL_1117;
          v838 = *(_WORD *)(v837 + 6);
          v1983 = v838;
          v1991 = (unsigned int)v1990 / 0xCuLL;
          if ( !v838 )
          {
            v839 = *(_DWORD *)(v806 + 2520);
            if ( (v839 & 0x100000) == 0 )
            {
              v2033[6] = -402653175;
              KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v836, 0LL, 0LL);
            }
            if ( *(_DWORD *)(v806 + 2328) )
              goto LABEL_1117;
            *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v806 + 2344) = 0LL;
            *(_QWORD *)(v806 + 2352) = 271LL;
            *(_QWORD *)(v806 + 2360) = v836;
            *(_DWORD *)(v806 + 2328) = 1;
            if ( (v839 & 0x20000000) != 0 )
              goto LABEL_1117;
            if ( !_bittest((const signed __int32 *)(v806 + 2524), 0x15u) )
              goto LABEL_1117;
            if ( (v839 & 1) == 0 )
              goto LABEL_1117;
            v840 = *(unsigned int *)(v806 + 2676);
            v841 = *(_QWORD *)(v806 + 2104);
            v740 = *(_QWORD *)(v806 + 2680);
            v842 = (_QWORD *)(v840 + v806);
            v843 = v840 + v806 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v840) >> 3);
            while ( v842 != (_QWORD *)v843 )
            {
              *v842 ^= v740;
              v740 = ((v841 ^ *v842++) + __ROR8__(v740, v740 & 0x3F)) ^ 0xEFA;
            }
            *(_DWORD *)(v806 + 2524) &= ~0x200000u;
            if ( v740 == *(_QWORD *)(v806 + 2688) )
              goto LABEL_1117;
            v844 = *(_QWORD *)(v806 + 1416);
            v845 = *(_DWORD *)(v806 + 2052);
            *(_QWORD *)v844 = v806;
            *(_DWORD *)(v844 + 16) = v845;
            if ( !*(_DWORD *)(v806 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v806 + 1416) + 24LL) = v740 ^ *(_QWORD *)(v806 + 2688);
            v745 = v806;
            goto LABEL_1116;
          }
          v846 = (_BYTE *)v806;
          v847 = v1995;
          v1987 = v837 + *(unsigned __int16 *)(v837 + 20) + 24LL;
          v848 = (_DWORD *)v1987;
          v2003 = &v1995[3 * ((unsigned int)v1990 / 0xC)];
          v849 = 0;
          v1993 = 0;
          v850 = (_DWORD *)v1987;
          v1999 = v1987;
          v851 = v2003;
          while ( 1 )
          {
            v852 = v850[4];
            v853 = v850[3];
            if ( v852 <= v850[2] )
              v852 = v850[2];
            v1988 = v850[3];
            v854 = v853 + v852;
            v1992 = v854;
            if ( v849 )
            {
              if ( v854 < v848[10 * v849 - 7] )
              {
                v889 = *(_DWORD *)(v806 + 2520);
                if ( (v889 & 0x100000) == 0 )
                {
                  v2033[2] = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v836, 1uLL, 0LL);
                }
                i9 = 0;
                if ( *(_DWORD *)(v806 + 2328) )
                  goto LABEL_1117;
                *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v806 + 2344) = 0LL;
                *(_QWORD *)(v806 + 2352) = 271LL;
                *(_QWORD *)(v806 + 2360) = v836;
                *(_DWORD *)(v806 + 2328) = 1;
                if ( (v889 & 0x20000000) != 0 || (*(_DWORD *)(v806 + 2524) & 0x200000) == 0 || (v889 & 1) == 0 )
                  goto LABEL_1117;
                v890 = *(unsigned int *)(v806 + 2676);
                v891 = *(_QWORD *)(v806 + 2104);
                v740 = *(_QWORD *)(v806 + 2680);
                v892 = (_QWORD *)(v890 + v806);
                v893 = v890 + v806 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v890) >> 3);
                while ( v892 != (_QWORD *)v893 )
                {
                  *v892 ^= v740;
                  v740 = ((v891 ^ *v892++) + __ROR8__(v740, v740 & 0x3F)) ^ 0xEFA;
                }
LABEL_1323:
                *(_DWORD *)(v806 + 2524) &= ~0x200000u;
                if ( v740 == *(_QWORD *)(v806 + 2688) )
                {
LABEL_1117:
                  v705 = -1073741701;
                  goto LABEL_1544;
                }
                v894 = *(_DWORD *)(v806 + 2052);
                v895 = *(_QWORD *)(v806 + 1416);
                *(_QWORD *)v895 = v806;
                *(_DWORD *)(v895 + 16) = v894;
                v896 = *(_QWORD *)(v806 + 2688);
                if ( !*(_DWORD *)(v806 + 2328) )
                {
                  v897 = *(_QWORD *)(v806 + 1416);
                  goto LABEL_1326;
                }
LABEL_1327:
                v745 = v806;
LABEL_1116:
                sub_140BDA384(v745, 0LL, v740, 256LL);
                goto LABEL_1117;
              }
              v849 = v1993;
            }
            if ( v847 != v851 )
            {
              do
              {
                v855 = v847[1];
                if ( *v847 >= v854 || v855 <= v853 )
                  break;
                if ( *v847 < v853 || v855 > v854 )
                {
                  v898 = *(_DWORD *)(v806 + 2520);
                  if ( (v898 & 0x100000) == 0 )
                  {
                    v2038 = -402653175;
                    KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v836, 2uLL, 0LL);
                  }
                  i9 = 0;
                  if ( !*(_DWORD *)(v806 + 2328) )
                  {
                    *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v806 + 2344) = 0LL;
                    *(_QWORD *)(v806 + 2352) = 271LL;
                    *(_QWORD *)(v806 + 2360) = v836;
                    *(_DWORD *)(v806 + 2328) = 1;
                    if ( (v898 & 0x20000000) == 0 && (*(_DWORD *)(v806 + 2524) & 0x200000) != 0 && (v898 & 1) != 0 )
                    {
                      v899 = *(unsigned int *)(v806 + 2676);
                      v900 = *(_QWORD *)(v806 + 2104);
                      v740 = *(_QWORD *)(v806 + 2680);
                      v901 = (_QWORD *)(v899 + v806);
                      v902 = v899 + v806 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v899) >> 3);
                      while ( v901 != (_QWORD *)v902 )
                      {
                        *v901 ^= v740;
                        v740 = ((v900 ^ *v901++) + __ROR8__(v740, v740 & 0x3F)) ^ 0xEFA;
                      }
                      goto LABEL_1323;
                    }
                  }
                  goto LABEL_1117;
                }
                v856 = v847[2];
                v2090 = v847;
                if ( (v856 & 1) != 0 || (*(_BYTE *)(v856 + v836) & 0x20) != 0 )
                {
                  v857 = v850[4];
                  v858 = v850[3];
                  if ( v857 <= v850[2] )
                    v857 = v850[2];
                  v859 = v858 + v857;
                  v860 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR))(v806 + 1048))(
                                           v847,
                                           v2002);
                  v861 = v860;
                  if ( *v860 < v858 || v860[1] > v859 )
                  {
                    v862 = v2002;
                    v863 = ((_DWORD)v860 - v2002) | 0x80000000;
                    v864 = *(_DWORD *)(v806 + 2520);
                    if ( (v864 & 0x100000) == 0 )
                    {
                      v2033[4] = -402653175;
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2002, v863, 0LL);
                    }
                    if ( !*(_DWORD *)(v806 + 2328) )
                    {
                      *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v806 + 2344) = 0LL;
                      *(_QWORD *)(v806 + 2352) = 271LL;
                      *(_QWORD *)(v806 + 2360) = v862;
                      *(_DWORD *)(v806 + 2328) = 1;
                      if ( (v864 & 0x20000000) == 0 && (*(_DWORD *)(v806 + 2524) & 0x200000) != 0 && (v864 & 1) != 0 )
                      {
                        v865 = *(unsigned int *)(v806 + 2676);
                        v866 = *(_QWORD *)(v806 + 2104);
                        v867 = *(_QWORD *)(v806 + 2680);
                        v868 = (_QWORD *)(v865 + v806);
                        v869 = v865
                             + v806
                             + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v865) >> 3);
                        while ( v868 != (_QWORD *)v869 )
                        {
                          *v868 ^= v867;
                          v867 = ((v866 ^ *v868++) + __ROR8__(v867, v867 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v806 + 2524) &= ~0x200000u;
                        if ( v867 != *(_QWORD *)(v806 + 2688) )
                        {
                          v870 = *(_DWORD *)(v806 + 2052);
                          v871 = *(_QWORD *)(v806 + 1416);
                          *(_QWORD *)v871 = v806;
                          *(_DWORD *)(v871 + 16) = v870;
                          if ( !*(_DWORD *)(v806 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v806 + 1416) + 24LL) = v867 ^ *(_QWORD *)(v806 + 2688);
                          sub_140BDA384(v806, 0LL, v867, 256LL);
                        }
                      }
                    }
                  }
                  v872 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v806 + 1056))(
                                           v861,
                                           v2002,
                                           v2002 + *v861);
                  if ( *v872 >= v858 && v872[1] <= v859 )
                  {
                    v836 = v2002;
                  }
                  else
                  {
                    v836 = v2002;
                    v873 = ((_DWORD)v872 - v2002) | 0x80000000;
                    v874 = *(_DWORD *)(v806 + 2520);
                    if ( (v874 & 0x100000) == 0 )
                    {
                      v2033[3] = -402653175;
                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2002, v873, 0LL);
                    }
                    if ( !*(_DWORD *)(v806 + 2328) )
                    {
                      *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v806 + 2344) = 0LL;
                      *(_QWORD *)(v806 + 2352) = 271LL;
                      *(_QWORD *)(v806 + 2360) = v836;
                      *(_DWORD *)(v806 + 2328) = 1;
                      if ( (v874 & 0x20000000) == 0 && (*(_DWORD *)(v806 + 2524) & 0x200000) != 0 && (v874 & 1) != 0 )
                      {
                        v875 = *(unsigned int *)(v806 + 2676);
                        v876 = *(_QWORD *)(v806 + 2104);
                        v877 = *(_QWORD *)(v806 + 2680);
                        v878 = (_QWORD *)(v875 + v806);
                        v879 = v875
                             + v806
                             + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v875) >> 3);
                        while ( v878 != (_QWORD *)v879 )
                        {
                          *v878 ^= v877;
                          v877 = ((v876 ^ *v878++) + __ROR8__(v877, v877 & 0x3F)) ^ 0xEFA;
                        }
                        *(_DWORD *)(v806 + 2524) &= ~0x200000u;
                        if ( v877 != *(_QWORD *)(v806 + 2688) )
                        {
                          v880 = *(_DWORD *)(v806 + 2052);
                          v881 = *(_QWORD *)(v806 + 1416);
                          *(_QWORD *)v881 = v806;
                          *(_DWORD *)(v881 + 16) = v880;
                          if ( !*(_DWORD *)(v806 + 2328) )
                            *(_QWORD *)(*(_QWORD *)(v806 + 1416) + 24LL) = v877 ^ *(_QWORD *)(v806 + 2688);
                          sub_140BDA384(v806, 0LL, v877, 256LL);
                        }
                      }
                    }
                  }
                  v854 = v1992;
                  v850 = (_DWORD *)v1999;
                  v853 = v1988;
                }
                v847 += 3;
              }
              while ( v847 != v2003 );
              v849 = v1993;
              v838 = v1983;
              v848 = (_DWORD *)v1987;
              v851 = v2003;
            }
            ++v849;
            v850 += 10;
            v1993 = v849;
            v1999 = (unsigned __int64)v850;
            if ( v849 >= v838 )
            {
              v882 = v1991;
              v883 = v1986;
              if ( v847 != v2003 )
              {
                v884 = *(_DWORD *)(v806 + 2520);
                if ( (v884 & 0x100000) == 0 )
                {
                  v2036 = -402653175;
                  KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v836, 3uLL, 0LL);
                }
                i9 = 0;
                if ( *(_DWORD *)(v806 + 2328) )
                  goto LABEL_1117;
                *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v806 + 2344) = 0LL;
                *(_QWORD *)(v806 + 2352) = 271LL;
                *(_QWORD *)(v806 + 2360) = v836;
                *(_DWORD *)(v806 + 2328) = 1;
                if ( (v884 & 0x20000000) != 0 )
                  goto LABEL_1117;
                if ( (*(_DWORD *)(v806 + 2524) & 0x200000) == 0 )
                  goto LABEL_1117;
                if ( (v884 & 1) == 0 )
                  goto LABEL_1117;
                v885 = *(unsigned int *)(v806 + 2676);
                v886 = *(_QWORD *)(v806 + 2104);
                v740 = *(_QWORD *)(v806 + 2680);
                v887 = (_QWORD *)(v885 + v806);
                v888 = v885 + v806 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v885) >> 3);
                while ( v887 != (_QWORD *)v888 )
                {
                  *v887 ^= v740;
                  v740 = ((v886 ^ *v887++) + __ROR8__(v740, v740 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v806 + 2524) &= ~0x200000u;
                if ( v740 == *(_QWORD *)(v806 + 2688) )
                  goto LABEL_1117;
                v903 = *(_DWORD *)(v806 + 2052);
                v904 = *(_QWORD *)(v806 + 1416);
                *(_QWORD *)v904 = v806;
                *(_DWORD *)(v904 + 16) = v903;
                v896 = *(_QWORD *)(v806 + 2688);
                if ( !*(_DWORD *)(v806 + 2328) )
                {
                  v897 = *(_QWORD *)(v806 + 1416);
LABEL_1326:
                  *(_QWORD *)(v897 + 24) = v740 ^ v896;
                }
                goto LABEL_1327;
              }
              i9 = 0;
              if ( (_DWORD)v1991 )
                v905 = (v1991 + 6) & 0xFFFFFFF8;
              else
                v905 = 0;
              v906 = *(unsigned int *)(v806 + 2052);
              v907 = v906 + v905 + 24 * (v838 + 2);
              if ( v907 <= *(_DWORD *)(v806 + 2660) )
              {
                v1986 = v806;
                *(_DWORD *)(v806 + 2052) = v907;
                goto LABEL_1362;
              }
              v1986 = sub_140BD9AF8(v806, v907, *(unsigned int *)(v806 + 2372));
              v806 = v1986;
              if ( v1986 )
              {
                v908 = *((_DWORD *)v846 + 630);
                if ( (v908 & 2) == 0 )
                {
                  v909 = *((_DWORD *)v846 + 513);
                  v910 = *((_QWORD *)v846 + 253);
                  v911 = (v908 & 0x10000000) != 0 ? *((_DWORD *)v846 + 593) : 0;
                  if ( v909 >= 8 )
                  {
                    v912 = (unsigned __int64)v909 >> 3;
                    do
                    {
                      *(_QWORD *)v846 = 0LL;
                      v909 -= 8;
                      v846 += 8;
                      --v912;
                    }
                    while ( v912 );
                  }
                  for ( ; v909; --v909 )
                    *v846++ = 0;
                  v913 = *(_DWORD *)(v806 + 2372);
                  *(_DWORD *)(v806 + 2372) = v911;
                  if ( v911 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v806 + 872))(v910);
                  }
                  else if ( (*(_DWORD *)(v806 + 2520) & 0x8000000) != 0 || !v911 )
                  {
                    (*(void (__fastcall **)(__int64))(v806 + 264))(v910);
                  }
                  else
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(v806 + 568))(v910 - 8, *(_QWORD *)(v910 - 8));
                  }
                  *(_DWORD *)(v806 + 2372) = v913;
                }
                *(_DWORD *)(v806 + 2520) &= ~2u;
                v882 = v1991;
                v838 = v1983;
LABEL_1362:
                v914 = v906 + v806;
                ++*(_DWORD *)(v806 + 2092);
                v2064 = v906 + v806;
                v915 = 48;
                v916 = (_QWORD *)(v906 + v806);
                v917 = 6LL;
                do
                {
                  *v916 = 0LL;
                  v915 -= 8;
                  ++v916;
                  --v917;
                }
                while ( v917 );
                for ( ; v915; --v915 )
                {
                  *(_BYTE *)v916 = 0;
                  v916 = (_QWORD *)((char *)v916 + 1);
                }
                v918 = v1995;
                *(_DWORD *)v914 = 30;
                *(_QWORD *)(v914 + 8) = v918;
                *(_DWORD *)(v914 + 16) = 0;
                v919 = *(_QWORD *)(v806 + 2104);
                for ( i18 = v919; ; LODWORD(v919) = i18 ^ v919 )
                {
                  i18 >>= 31;
                  if ( !i18 )
                    break;
                }
                v921 = v2002;
                *(_DWORD *)(v914 + 20) = v919 & 0x7FFFFFFF;
                v2029 = v2064;
                v2008 = (_BYTE *)v806;
                *(_QWORD *)(v2064 + 24) = v921;
                *(_DWORD *)(v2029 + 32) = *(_DWORD *)(v883 + 80);
                *(_DWORD *)(v2029 + 36) = v1990;
                *(_WORD *)(v2029 + 40) = v838;
                v2001 = (char *)(v2029 + 48);
                if ( v882 )
                  v922 = (_DWORD *)(v2029 + 48 + (((unsigned int)(v882 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
                else
                  v922 = (_DWORD *)(v2029 + 48);
                v923 = *(unsigned __int16 *)(v2029 + 40);
                v1999 = (unsigned __int64)v922;
                v924 = &v922[6 * v923];
                v1994 = (unsigned __int64)v924;
                v925 = v918 + 3;
                if ( !v882 )
                  v925 = v2003;
                v1991 = (unsigned __int64)v925;
                if ( v838 )
                {
                  v926 = v838;
                  v927 = v922 + 2;
                  do
                  {
                    v928 = 2LL;
                    do
                    {
                      *(v927 - 2) = 0;
                      *(v927 - 1) = 0;
                      *v927 = 0x80000000;
                      v927 += 3;
                      --v928;
                    }
                    while ( v928 );
                    --v926;
                  }
                  while ( v926 );
                  v22 = (unsigned __int64)v1989;
                }
                if ( v922 != v924 )
                {
                  while ( 2 )
                  {
                    v55 = (v848[9] & 0x2000000) == 0;
                    v929 = 0;
                    v1988 = 0;
                    if ( v55 )
                    {
                      v930 = *v848;
                      v931 = (__int16 *)(v848 + 1);
                      if ( *v848 != 1414090313 || *(_DWORD *)v931 != 1195525195 )
                      {
                        if ( v930 == 1162297680 )
                        {
                          v932 = *v931;
                          if ( *v931 == 30839 || v932 == 29303 || v932 == 30583 )
                            break;
LABEL_1391:
                          v933 = *(char **)(v806 + 2392);
                          v934 = 7;
                          v935 = *(char **)(v806 + 2400);
                          v936 = (char *)v848;
                          v937 = *(char **)(v806 + 2408);
                          v938 = *(char **)(v806 + 2384);
                          while ( 1 )
                          {
                            v939 = *v936++;
                            v940 = *v938++;
                            if ( v939 != v940 )
                              break;
                            if ( !--v934 )
                              goto LABEL_1409;
                          }
                          v941 = 8;
                          v942 = (char *)v848;
                          do
                          {
                            v943 = *(_QWORD *)v942;
                            v942 += 8;
                            v944 = *(_QWORD *)v933;
                            v933 += 8;
                            if ( v943 != v944 )
                              goto LABEL_1402;
                            v941 -= 8;
                          }
                          while ( v941 >= 8 );
                          if ( v941 )
                          {
                            while ( 1 )
                            {
                              v945 = *v942++;
                              v946 = *v933++;
                              if ( v945 != v946 )
                                break;
                              if ( !--v941 )
                                goto LABEL_1409;
                            }
LABEL_1402:
                            v947 = 4;
                            v948 = (char *)v848;
                            while ( 1 )
                            {
                              v949 = *v948++;
                              v950 = *v935++;
                              if ( v949 != v950 )
                                break;
                              if ( !--v947 )
                                goto LABEL_1409;
                            }
                            v951 = 6;
                            v952 = (char *)v848;
                            while ( 1 )
                            {
                              v953 = *v952++;
                              v954 = *v937++;
                              if ( v953 != v954 )
                                break;
                              if ( !--v951 )
                                goto LABEL_1409;
                            }
                          }
                          else
                          {
LABEL_1409:
                            v929 = 1;
                            v1988 = 1;
                          }
                          v918 = v1995;
                          v922 = (_DWORD *)v1999;
LABEL_1411:
                          v955 = v848[9];
                          if ( v955 < 0 )
                          {
                            v929 = 1;
                            v1988 = 1;
                            goto LABEL_1414;
                          }
                          if ( v929 )
                          {
LABEL_1414:
                            if ( *v848 == 1414090313 && v848[1] == 1195525195 )
                            {
                              if ( (*(_DWORD *)(v806 + 2524) & 0x2000) != 0 )
                                v929 = 0;
                              v1988 = v929;
                            }
                          }
                          v956 = v2002;
                          if ( (*(_DWORD *)(v806 + 2524) & 0x4000) != 0
                            && (v955 & 0x20000000) != 0
                            && (v2002 == *(_QWORD *)(v806 + 1504) || v2002 == *(_QWORD *)(v806 + 1512)) )
                          {
                            v929 = 1;
                            v1988 = 1;
                          }
                          v957 = v848[4];
                          v958 = (unsigned int)v848[3];
                          v959 = v2003;
                          if ( v957 <= v848[2] )
                            v957 = v848[2];
                          v960 = v958 + v957;
                          v1992 = v848[3];
                          v1993 = v960;
                          if ( v918 == v2003 )
                          {
                            v964 = 0;
                            v965 = (_DWORD)v958 != 0;
                            v962 = v958;
LABEL_1454:
                            if ( v965 )
                              goto LABEL_1508;
LABEL_1457:
                            v966 = 0;
                            goto LABEL_1458;
                          }
                          v961 = *v918;
                          v962 = v958;
                          v963 = v918[1];
                          v964 = v963;
                          v965 = *v918 < (unsigned int)v958;
                          if ( *v918 <= (unsigned int)v958 )
                            goto LABEL_1454;
                          v966 = 0;
                          if ( v963 > v960 )
                            goto LABEL_1458;
                          if ( v929 )
                          {
LABEL_1460:
                            v985 = (unsigned int *)v1991;
                            if ( (unsigned int *)v1991 != v959 )
                            {
                              v986 = *(_DWORD *)(v1991 + 4);
                              while ( v986 <= v960 )
                              {
                                if ( v985 == v959 )
                                  break;
                                if ( v929 )
                                {
                                  v987 = 0x80;
                                }
                                else
                                {
                                  v988 = v918[1];
                                  v962 = *v985;
                                  if ( *v985 < (unsigned int)v988 )
                                  {
                                    v989 = *(_DWORD *)(v806 + 2520);
                                    if ( (v989 & 0x100000) == 0 )
                                    {
                                      v2033[7] = -402653175;
                                      KeBugCheckEx(__ROL4__(-402653175, 101), 0xAuLL, v2002, 6uLL, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v806 + 2328) )
                                    {
                                      v990 = v2002;
                                      *(_QWORD *)(v806 + 2336) = v806 - 0x5C5FC0A76E374B18LL;
                                      *(_QWORD *)(v806 + 2344) = 0LL;
                                      *(_QWORD *)(v806 + 2352) = 271LL;
                                      *(_QWORD *)(v806 + 2360) = v990;
                                      *(_DWORD *)(v806 + 2328) = 1;
                                      if ( (v989 & 0x20000000) == 0
                                        && (*(_DWORD *)(v806 + 2524) & 0x200000) != 0
                                        && (v989 & 1) != 0 )
                                      {
                                        v991 = *(unsigned int *)(v806 + 2676);
                                        v992 = *(_QWORD *)(v806 + 2104);
                                        v993 = *(_QWORD *)(v806 + 2680);
                                        v994 = (_QWORD *)(v991 + v806);
                                        v995 = v991
                                             + v806
                                             + 8
                                             * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v806 + 2052) - v991) >> 3);
                                        while ( v994 != (_QWORD *)v995 )
                                        {
                                          *v994 ^= v993;
                                          v993 = ((v992 ^ *v994++) + __ROR8__(v993, v993 & 0x3F)) ^ 0xEFA;
                                        }
                                        *(_DWORD *)(v806 + 2524) &= ~0x200000u;
                                        if ( v993 != *(_QWORD *)(v806 + 2688) )
                                        {
                                          v996 = *(_QWORD *)(v806 + 1416);
                                          v997 = *(_DWORD *)(v806 + 2052);
                                          *(_QWORD *)v996 = v806;
                                          *(_DWORD *)(v996 + 16) = v997;
                                          if ( !*(_DWORD *)(v806 + 2328) )
                                            *(_QWORD *)(*(_QWORD *)(v806 + 1416) + 24LL) = v993 ^ *(_QWORD *)(v806 + 2688);
                                          sub_140BDA384(v806, 0LL, v993, 256LL);
                                        }
                                        v966 = 0;
                                      }
                                    }
                                  }
                                  v998 = v2039;
                                  v999 = v962 - v988;
                                  v1000 = v2069;
                                  v1001 = v2002 + v988;
                                  do
                                  {
                                    if ( v1001 < *v1000 + (unsigned __int64)*v998
                                      && v2002 + v988 + v962 - (unsigned int)v988 > *v1000 )
                                    {
                                      goto LABEL_1503;
                                    }
                                    ++v966;
                                    ++v998;
                                    ++v1000;
                                  }
                                  while ( v966 < 6 );
                                  if ( v999 < 4 )
                                  {
LABEL_1503:
                                    v966 = 0;
                                    v987 = 0x80;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(v806 + 2120) += v999;
                                    v1002 = (_QWORD *)v1001;
                                    v1003 = *(_DWORD *)(v806 + 2100);
                                    v1004 = (const char *)v1001;
                                    v1005 = *(_QWORD *)(v806 + 2104);
                                    v1006 = v1001 + v999;
                                    if ( v1001 < v1006 )
                                    {
                                      do
                                      {
                                        _mm_prefetch(v1004, 0);
                                        v1004 += 64;
                                      }
                                      while ( (unsigned __int64)v1004 < v1006 );
                                    }
                                    v1007 = *(_QWORD *)(v806 + 2104);
                                    v1008 = v999 >> 7;
                                    if ( v999 >> 7 )
                                    {
                                      do
                                      {
                                        v1009 = 8LL;
                                        do
                                        {
                                          v1010 = v1002[1] ^ __ROL8__(*v1002 ^ v1007, v1003);
                                          v1002 += 2;
                                          v1007 = __ROL8__(v1010, v1003);
                                          --v1009;
                                        }
                                        while ( v1009 );
                                        v1011 = (__ROL8__(v1005 ^ ((unsigned __int64)v1002 - v1001), 17) ^ v1005 ^ ((unsigned __int64)v1002 - v1001))
                                              * (unsigned __int128)0x7010008004002001uLL;
                                        v2092 = *((_QWORD *)&v1011 + 1);
                                        v1003 = ((unsigned __int8)(v1011 ^ BYTE8(v1011)) ^ (unsigned __int8)v1003) & 0x3F;
                                        if ( !v1003 )
                                          LOBYTE(v1003) = 1;
                                        --v1008;
                                      }
                                      while ( v1008 );
                                      v22 = (unsigned __int64)v1989;
                                      v806 = v1986;
                                    }
                                    v1012 = v999 & 0x7F;
                                    if ( v1012 >= 8 )
                                    {
                                      v1013 = (unsigned __int64)v1012 >> 3;
                                      do
                                      {
                                        v1007 = __ROL8__(*v1002++ ^ v1007, v1003);
                                        v1012 -= 8;
                                        --v1013;
                                      }
                                      while ( v1013 );
                                    }
                                    v966 = 0;
                                    if ( v1012 )
                                    {
                                      do
                                      {
                                        v1014 = *(unsigned __int8 *)v1002;
                                        v1002 = (_QWORD *)((char *)v1002 + 1);
                                        v1007 = __ROL8__(v1014 ^ v1007, v1003);
                                        --v1012;
                                      }
                                      while ( v1012 );
                                      v22 = (unsigned __int64)v1989;
                                    }
                                    for ( i19 = v1007; ; LOBYTE(v1007) = i19 ^ v1007 )
                                    {
                                      i19 >>= 7;
                                      if ( !i19 )
                                        break;
                                    }
                                    v929 = v1988;
                                    v987 = v1007 & 0x7F;
                                  }
                                  v918 = v1995;
                                  v960 = v1993;
                                }
                                v918 += 3;
                                v1995 = v918;
                                *v2001++ = v987;
                                v985 = (unsigned int *)(v1991 + 12);
                                v959 = v2003;
                                v1991 = (unsigned __int64)v985;
                                if ( v985 != v2003 )
                                  v986 = v985[1];
                              }
                            }
                            goto LABEL_1508;
                          }
                          *v922 = v958;
                          v967 = v956 + v958;
                          v922[1] = v961;
                          v968 = v2039;
                          LODWORD(v1990) = v963;
                          v969 = v961 - *v922;
                          v970 = v2069;
                          v962 = v961;
                          do
                          {
                            if ( v967 < *v970 + (unsigned __int64)*v968 && v967 + v969 > *v970 )
                            {
                              v959 = v2003;
                              v918 = v1995;
                              goto LABEL_1457;
                            }
                            ++v966;
                            ++v970;
                            ++v968;
                          }
                          while ( v966 < 6 );
                          *(_DWORD *)(v806 + 2120) += v969;
                          v971 = (_QWORD *)v967;
                          v972 = *(_DWORD *)(v806 + 2100);
                          v973 = (const char *)v967;
                          v974 = *(_QWORD *)(v806 + 2104);
                          v975 = v967 + v969;
                          if ( v967 < v975 )
                          {
                            do
                            {
                              _mm_prefetch(v973, 0);
                              v973 += 64;
                            }
                            while ( (unsigned __int64)v973 < v975 );
                          }
                          v976 = *(_QWORD *)(v806 + 2104);
                          v977 = v969 >> 7;
                          if ( v969 >> 7 )
                          {
                            do
                            {
                              v978 = 8LL;
                              do
                              {
                                v979 = v971[1] ^ __ROL8__(*v971 ^ v976, v972);
                                v971 += 2;
                                v976 = __ROL8__(v979, v972);
                                --v978;
                              }
                              while ( v978 );
                              v980 = (__ROL8__(v974 ^ ((unsigned __int64)v971 - v967), 17) ^ v974 ^ ((unsigned __int64)v971 - v967))
                                   * (unsigned __int128)0x7010008004002001uLL;
                              v2091 = *((_QWORD *)&v980 + 1);
                              v972 = ((unsigned __int8)v980 ^ (unsigned __int8)(BYTE8(v980) ^ v972)) & 0x3F;
                              if ( !v972 )
                                LOBYTE(v972) = 1;
                              --v977;
                            }
                            while ( v977 );
                            v22 = (unsigned __int64)v1989;
                            v806 = v1986;
                            v964 = v1990;
                          }
                          v981 = v969 & 0x7F;
                          if ( v981 >= 8 )
                          {
                            v982 = (unsigned __int64)v981 >> 3;
                            do
                            {
                              v976 = __ROL8__(*v971++ ^ v976, v972);
                              v981 -= 8;
                              --v982;
                            }
                            while ( v982 );
                          }
                          if ( v981 )
                          {
                            do
                            {
                              v983 = *(unsigned __int8 *)v971;
                              v971 = (_QWORD *)((char *)v971 + 1);
                              v976 = __ROL8__(v983 ^ v976, v972);
                              --v981;
                            }
                            while ( v981 );
                            v22 = (unsigned __int64)v1989;
                          }
                          v984 = v976 >> 31;
                          v966 = 0;
                          while ( v984 )
                          {
                            LODWORD(v976) = v984 ^ v976;
                            v984 >>= 31;
                          }
                          v960 = v1993;
                          v929 = v1988;
                          v918 = v1995;
                          *(_DWORD *)(v1999 + 8) = v976 & 0x7FFFFFFF;
                          v959 = v2003;
LABEL_1458:
                          if ( v964 <= v960 && v918 != v959 )
                            goto LABEL_1460;
LABEL_1508:
                          if ( v929 || v962 == v960 )
                          {
                            i9 = 0;
                            goto LABEL_1534;
                          }
                          v1016 = v1999;
                          v1017 = v2039;
                          v1018 = v2069;
                          *(_DWORD *)(v1999 + 12) = v962;
                          *(_DWORD *)(v1016 + 16) = v960;
                          v1019 = *(_DWORD *)(v1016 + 12);
                          v1020 = v960 - v1019;
                          v1021 = v2002 + v1019;
                          i9 = 0;
                          v1022 = 0;
                          while ( 2 )
                          {
                            if ( v1021 < *v1018 + (unsigned __int64)*v1017 && v1021 + v960 - v1019 > *v1018 )
                            {
                              v918 = v1995;
LABEL_1534:
                              v1037 = v1999;
                              goto LABEL_1535;
                            }
                            ++v1022;
                            ++v1018;
                            ++v1017;
                            if ( v1022 < 6 )
                              continue;
                            break;
                          }
                          *(_DWORD *)(v806 + 2120) += v1020;
                          v1023 = (_QWORD *)v1021;
                          v1024 = *(_DWORD *)(v806 + 2100);
                          v1025 = (const char *)v1021;
                          v1026 = *(_QWORD *)(v806 + 2104);
                          v1027 = v1021 + v1020;
                          if ( v1021 < v1027 )
                          {
                            do
                            {
                              _mm_prefetch(v1025, 0);
                              v1025 += 64;
                            }
                            while ( (unsigned __int64)v1025 < v1027 );
                          }
                          v1028 = *(_QWORD *)(v806 + 2104);
                          v1029 = v1020 >> 7;
                          if ( v1020 >> 7 )
                          {
                            do
                            {
                              v1030 = 8LL;
                              do
                              {
                                v1031 = v1023[1] ^ __ROL8__(*v1023 ^ v1028, v1024);
                                v1023 += 2;
                                v1028 = __ROL8__(v1031, v1024);
                                --v1030;
                              }
                              while ( v1030 );
                              v1032 = (__ROL8__(v1026 ^ ((unsigned __int64)v1023 - v1021), 17) ^ v1026 ^ ((unsigned __int64)v1023 - v1021))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v2093 = *((_QWORD *)&v1032 + 1);
                              v1024 = ((unsigned __int8)(v1032 ^ BYTE8(v1032)) ^ (unsigned __int8)v1024) & 0x3F;
                              if ( !v1024 )
                                LOBYTE(v1024) = 1;
                              --v1029;
                            }
                            while ( v1029 );
                            v22 = (unsigned __int64)v1989;
                          }
                          v1033 = v1020 & 0x7F;
                          if ( v1033 >= 8 )
                          {
                            v1034 = (unsigned __int64)v1033 >> 3;
                            do
                            {
                              v1028 = __ROL8__(*v1023++ ^ v1028, v1024);
                              v1033 -= 8;
                              --v1034;
                            }
                            while ( v1034 );
                          }
                          for ( ; v1033; --v1033 )
                          {
                            v1035 = *(unsigned __int8 *)v1023;
                            v1023 = (_QWORD *)((char *)v1023 + 1);
                            v1028 = __ROL8__(v1035 ^ v1028, v1024);
                          }
                          for ( i20 = v1028; ; LODWORD(v1028) = i20 ^ v1028 )
                          {
                            i20 >>= 31;
                            if ( !i20 )
                              break;
                          }
                          v1037 = v1999;
                          v960 = v1993;
                          v918 = v1995;
                          *(_DWORD *)(v1999 + 20) = v1028 & 0x7FFFFFFF;
LABEL_1535:
                          if ( v918 != v2003 && *v918 >= v1992 && v918[1] <= v960 )
                          {
                            v1038 = v1991;
                            if ( (unsigned int *)v1991 != v2003 )
                            {
                              v1039 = v2001;
                              *v2001 = 0x80;
                              v2001 = v1039 + 1;
                              v1991 = v1038 + 12;
                            }
                            v918 += 3;
                            v1995 = v918;
                          }
                          v922 = (_DWORD *)(v1037 + 24);
                          v848 = (_DWORD *)(v1987 + 40);
                          v1999 = (unsigned __int64)v922;
                          v1987 += 40LL;
                          if ( v922 == (_DWORD *)v1994 )
                          {
                            v806 = (__int64)v2008;
                            goto LABEL_1543;
                          }
                          continue;
                        }
                        if ( v930 != 1095914053 || *v931 != 16724 )
                          goto LABEL_1391;
                      }
                    }
                    break;
                  }
                  v929 = 1;
                  v1988 = 1;
                  goto LABEL_1411;
                }
LABEL_1543:
                v2009 = (char *)v806;
                v705 = 0;
LABEL_1544:
                v688 = v2004;
LABEL_1545:
                v1040 = &v2009[-v22];
                v22 = (unsigned __int64)v2009;
                v34 = (unsigned __int64)&v1984[(_QWORD)v1040];
                v1989 = v2009;
                v1984 = &v1984[(_QWORD)v1040];
                if ( (int)(v705 + 0x80000000) < 0 || v705 == -1073741554 )
                  *(_QWORD *)(v34 + 40) = v688;
                v649 = v1985;
LABEL_1621:
                v40 = 1;
                *(_DWORD *)(v22 + 2120) += v649 << 12;
                v1090 = *(_DWORD *)(v22 + 2120);
                ++*(_DWORD *)(v22 + 2116);
                if ( v1090 < *(_DWORD *)(v22 + 2124) )
                {
                  v44 = v1984;
                  goto LABEL_970;
                }
LABEL_1624:
                v1989 = (char *)v22;
                goto LABEL_238;
              }
LABEL_1162:
              v705 = -1073741670;
              goto LABEL_1544;
            }
          }
        }
        if ( ++v709 >= *(_DWORD *)(v22 + 2092) )
          goto LABEL_1082;
      }
      v715 = v709 - v713;
      v713 = v709;
      while ( 1 )
      {
        if ( *v714 == 1 )
        {
LABEL_1071:
          v716 = 4 * (v714[4] / 0xCu) + 48;
          goto LABEL_1072;
        }
        if ( *v714 == 7 )
        {
          v716 = (unsigned int)(24 * (v714[6] + 2));
          goto LABEL_1072;
        }
        if ( *v714 == 8 )
          break;
        switch ( *v714 )
        {
          case 10:
            v716 = (unsigned int)(16 * (v714[7] + 3));
            break;
          case 28:
            v717 = *((unsigned __int16 *)v714 + 20);
LABEL_1069:
            v716 = (v717 + 55) & 0xFFFFFFF8;
            break;
          case 30:
            v716 = (((v714[9] != 0 ? v714[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                 + 24 * (*((unsigned __int16 *)v714 + 20) + 2);
            break;
          case 33:
            v716 = 20 * (unsigned int)(((v714[8] & 0xFFF) + (unsigned __int64)(unsigned int)v714[10] + 4095) >> 12) + 48;
            break;
          case 43:
            goto LABEL_1071;
          default:
            v716 = 48LL;
            break;
        }
LABEL_1072:
        v714 = (int *)((char *)v714 + v716);
        if ( !--v715 )
        {
          v22 = (unsigned __int64)v1989;
          v702 = v2002;
          v703 = (__int64)v1995;
          goto LABEL_1074;
        }
      }
      v717 = *((unsigned __int16 *)v714 + 16);
      goto LABEL_1069;
    }
    v1099 = *(unsigned int *)(v22 + 2116);
    v1100 = *((unsigned int *)v44 + 9);
    v2004 = *((_QWORD *)v44 + 1);
    v1101 = v2004 + 12 * v1099;
    v1102 = (_DWORD *)(v1101 + 12);
    v1986 = v1101;
    v1991 = v1101 + 12;
    v1103 = v1100 / 0xC;
    v1999 = v1100 / 0xC;
    v1994 = v2004 + 12LL * (unsigned int)(v1100 / 0xC);
    v1104 = &v44[v1099 + 48];
    v1987 = (__int64)v1104;
    v1105 = v1100 / 0xC - 1;
    if ( (unsigned int)(v1100 / 0xC) )
      v34 = (unsigned __int64)&v44[((v1105 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
    else
      v34 = (unsigned __int64)(v44 + 48);
    v1106 = *((unsigned __int16 *)v44 + 20);
    v2001 = (char *)v34;
    v2003 = (unsigned int *)(v34 + 24 * v1106);
    if ( (_DWORD)v1103 )
    {
      if ( (unsigned int)v1099 < v1105 )
      {
        while ( 1 )
        {
          if ( *v1104 < 0 )
            goto LABEL_1675;
          v1107 = *(unsigned int *)(v1101 + 4);
          v1108 = (int *)v1984;
          LODWORD(v1990) = *v1102 - v1107;
          v1109 = v1990;
          v1110 = *((_QWORD *)v1984 + 3) + v1107;
          *(_DWORD *)(v22 + 2120) += v1990;
          v1111 = v1110 + v1109;
          v1112 = *(_DWORD *)(v22 + 2100);
          v1113 = (_QWORD *)v1110;
          v1114 = *(_QWORD *)(v22 + 2104);
          v1115 = (const char *)v1110;
          if ( v1110 < v1111 )
          {
            do
            {
              _mm_prefetch(v1115, 0);
              v1115 += 64;
            }
            while ( (unsigned __int64)v1115 < v1111 );
          }
          v1116 = *(_QWORD *)(v22 + 2104);
          v1117 = v1109 >> 7;
          if ( v1109 >> 7 )
          {
            do
            {
              v1118 = 8LL;
              do
              {
                v1119 = v1113[1] ^ __ROL8__(*v1113 ^ v1116, v1112);
                v1113 += 2;
                v1116 = __ROL8__(v1119, v1112);
                --v1118;
              }
              while ( v1118 );
              v1120 = __ROL8__(v1114 ^ ((unsigned __int64)v1113 - v1110), 17) ^ v1114 ^ ((unsigned __int64)v1113 - v1110);
              v2097 = (v1120 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1112 = ((unsigned __int8)(v2097 ^ v1120) ^ (unsigned __int8)v1112) & 0x3F;
              if ( !v1112 )
                LOBYTE(v1112) = 1;
              --v1117;
            }
            while ( v1117 );
            v22 = (unsigned __int64)v1989;
            v1109 = v1990;
            v1104 = (char *)v1987;
          }
          v1121 = v1109 & 0x7F;
          if ( v1121 >= 8 )
          {
            v1122 = (unsigned __int64)(v1109 & 0x7F) >> 3;
            do
            {
              v1116 = __ROL8__(*v1113++ ^ v1116, v1112);
              v1121 -= 8;
              --v1122;
            }
            while ( v1122 );
          }
          if ( v1121 )
          {
            do
            {
              v1123 = *(unsigned __int8 *)v1113;
              v1113 = (_QWORD *)((char *)v1113 + 1);
              v1116 = __ROL8__(v1123 ^ v1116, v1112);
              --v1121;
            }
            while ( v1121 );
            v22 = (unsigned __int64)v1989;
          }
          for ( i21 = v1116; ; LOBYTE(v1116) = i21 ^ v1116 )
          {
            i21 >>= 7;
            if ( !i21 )
              break;
          }
          v1125 = v1116 & 0x7F;
          if ( v1125 == (*v1104 & 0x7F) )
          {
LABEL_1672:
            i9 = 0;
          }
          else
          {
            v1126 = v1109;
            if ( v1109 && (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
            {
              v1127 = KeGetCurrentIrql();
              v1128 = v1110 & 0xFFFFFFFFFFFFF000uLL;
              v1129 = (v1126 + v1110 - 1) | 0xFFF;
              v1130 = (v1110 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1665:
              __writecr8(2uLL);
              while ( 1 )
              {
                v1131 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, _QWORD *))(v22 + 1128))(
                          v1128,
                          0LL,
                          v1116,
                          v1113);
                if ( v1131 == -1073741267 )
                {
                  if ( v1127 <= 1u )
                  {
                    __writecr8(v1127);
                    goto LABEL_1665;
                  }
                }
                else if ( v1131 < 0 )
                {
                  __writecr8(v1127);
                  v1104 = (char *)v1987;
                  v1108 = (int *)v1984;
                  break;
                }
                v1128 += 4096LL;
                v1130 += 4096LL;
                if ( v1130 == v1129 )
                {
                  __writecr8(v1127);
                  v1104 = (char *)v1987;
                  goto LABEL_1672;
                }
              }
            }
            if ( !*(_DWORD *)(v22 + 2328) )
              *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = *v1104 & 0x7F ^ (unsigned __int64)v1125;
            i9 = 0;
            if ( !*(_DWORD *)(v22 + 2328) )
            {
              *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2344) = (char *)v1108 - 0x4C48B4211BBACBEBLL;
              v1134 = *v1108;
              v40 = 1;
              *(_QWORD *)(v22 + 2352) = v1134;
              *(_QWORD *)(v22 + 2360) = v1110;
              *(_DWORD *)(v22 + 2328) = 1;
              v1135 = *(_DWORD *)(v22 + 2520);
              if ( (v1135 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1135 & 1) != 0 )
              {
                v1136 = *(unsigned int *)(v22 + 2676);
                v1137 = *(_QWORD *)(v22 + 2104);
                v1138 = *(_QWORD *)(v22 + 2680);
                v1139 = (_QWORD *)(v1136 + v22);
                v1140 = v1136 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1136) >> 3);
                while ( v1139 != (_QWORD *)v1140 )
                {
                  *v1139 ^= v1138;
                  v1138 = ((v1137 ^ *v1139++) + __ROR8__(v1138, v1138 & 0x3F)) ^ 0xEFA;
                }
                *(_DWORD *)(v22 + 2524) &= ~0x200000u;
                if ( v1138 != *(_QWORD *)(v22 + 2688) )
                {
                  v1141 = *(_DWORD *)(v22 + 2052);
                  v1142 = *(_QWORD *)(v22 + 1416);
                  *(_QWORD *)v1142 = v22;
                  *(_DWORD *)(v1142 + 16) = v1141;
                  if ( !*(_DWORD *)(v22 + 2328) )
                    *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1138 ^ *(_QWORD *)(v22 + 2688);
                  sub_140BDA384(v22, 0LL, v1138, 256LL);
                }
              }
              goto LABEL_1674;
            }
          }
          v40 = 1;
LABEL_1674:
          v1101 = v1986;
          *(_DWORD *)(v22 + 2120) += 64;
          v1102 = (_DWORD *)v1991;
LABEL_1675:
          ++v1104;
          v1101 += 12LL;
          v1987 = (__int64)v1104;
          v1102 += 3;
          v1986 = v1101;
          v1991 = (unsigned __int64)v1102;
          if ( (unsigned __int64)v1102 >= v1994 || *(_DWORD *)(v22 + 2120) >= *(_DWORD *)(v22 + 2124) )
          {
            v1132 = v1101 - v2004;
            LODWORD(v1103) = v1999;
            *(_DWORD *)(v22 + 2116) = v1132 / 12;
            LODWORD(v1099) = v1132 / 12;
            v34 = (unsigned __int64)v2001;
            break;
          }
        }
      }
      if ( (unsigned int)v1099 < (int)v1103 - 1 )
        goto LABEL_238;
    }
    if ( *(_DWORD *)(v22 + 2120) >= *(_DWORD *)(v22 + 2124) )
      goto LABEL_238;
    if ( (_DWORD)v1103 )
      v1133 = 3LL * (unsigned int)(v1099 - v1103 + 1);
    else
      v1133 = 3LL * (unsigned int)v1099;
    v1143 = v34 + 8 * v1133;
    v1986 = v1143;
    do
    {
      v1144 = (int *)(v1143 + 8);
      v1145 = 2LL;
      v1991 = 2LL;
      v1987 = v1143 + 8;
      do
      {
        if ( *v1144 >= 0 )
        {
          v1146 = (unsigned int)*(v1144 - 2);
          v1147 = (int *)v1984;
          v1148 = *(v1144 - 1) - v1146;
          v1149 = *((_QWORD *)v1984 + 3) + v1146;
          *(_DWORD *)(v22 + 2120) += v1148;
          v1150 = v1149 + v1148;
          v1151 = *(_DWORD *)(v22 + 2100);
          v1152 = (_QWORD *)v1149;
          v1153 = *(_QWORD *)(v22 + 2104);
          v1154 = (const char *)v1149;
          if ( v1149 < v1150 )
          {
            do
            {
              _mm_prefetch(v1154, 0);
              v1154 += 64;
            }
            while ( (unsigned __int64)v1154 < v1150 );
          }
          v1155 = *(_QWORD *)(v22 + 2104);
          v1156 = v1148 >> 7;
          if ( v1148 >> 7 )
          {
            do
            {
              v1157 = 8LL;
              do
              {
                v1158 = v1152[1] ^ __ROL8__(*v1152 ^ v1155, v1151);
                v1152 += 2;
                v1155 = __ROL8__(v1158, v1151);
                --v1157;
              }
              while ( v1157 );
              v1159 = __ROL8__(v1153 ^ ((unsigned __int64)v1152 - v1149), 17) ^ v1153 ^ ((unsigned __int64)v1152 - v1149);
              v2098 = (v1159 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1151 = ((unsigned __int8)(v2098 ^ v1159) ^ (unsigned __int8)v1151) & 0x3F;
              if ( !v1151 )
                LOBYTE(v1151) = 1;
              --v1156;
            }
            while ( v1156 );
            v22 = (unsigned __int64)v1989;
            v1144 = (int *)v1987;
            v1145 = v1991;
          }
          v34 = v1148 & 0x7F;
          if ( (unsigned int)v34 >= 8 )
          {
            v1160 = (unsigned __int64)(v1148 & 0x7F) >> 3;
            do
            {
              v1155 = __ROL8__(*v1152++ ^ v1155, v1151);
              v34 = (unsigned int)(v34 - 8);
              --v1160;
            }
            while ( v1160 );
          }
          v1161 = 0LL;
          if ( (_DWORD)v34 )
          {
            do
            {
              v1162 = *(unsigned __int8 *)v1152;
              v1152 = (_QWORD *)((char *)v1152 + 1);
              v1155 = __ROL8__(v1162 ^ v1155, v1151);
              v34 = (unsigned int)(v34 - 1);
            }
            while ( (_DWORD)v34 );
            v1144 = (int *)v1987;
          }
          for ( i22 = v1155; ; LODWORD(v1155) = i22 ^ v1155 )
          {
            i22 >>= 31;
            if ( !i22 )
              break;
          }
          v1164 = v1155 & 0x7FFFFFFF;
          if ( v1164 == (*v1144 & 0x7FFFFFFF) )
            goto LABEL_1729;
          v1165 = v1148;
          if ( v1148 )
          {
            v34 = 64LL;
            if ( (*(_DWORD *)(v22 + 2524) & 0x40) != 0 )
            {
              v1166 = KeGetCurrentIrql();
              v1167 = v1149 & 0xFFFFFFFFFFFFF000uLL;
              v1168 = (v1165 + v1149 - 1) | 0xFFF;
              v1169 = (v1149 & 0xFFFFFFFFFFFFF000uLL) - 1;
LABEL_1722:
              __writecr8(2uLL);
              while ( 1 )
              {
                v1170 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v22 + 1128))(
                          v1167,
                          0LL,
                          v1152,
                          v1161);
                if ( v1170 == -1073741267 )
                {
                  if ( v1166 <= 1u )
                  {
                    __writecr8(v1166);
                    goto LABEL_1722;
                  }
                }
                else
                {
                  v1161 = 0LL;
                  if ( v1170 < 0 )
                  {
                    __writecr8(v1166);
                    v1144 = (int *)v1987;
                    v1145 = v1991;
                    v1147 = (int *)v1984;
                    break;
                  }
                }
                v1167 += 4096LL;
                v1169 += 4096LL;
                if ( v1169 == v1168 )
                {
                  __writecr8(v1166);
                  v1144 = (int *)v1987;
                  v1145 = v1991;
                  goto LABEL_1729;
                }
              }
            }
          }
          v1172 = (unsigned int)*v1144;
          LODWORD(v1172) = v1172 & 0x7FFFFFFF;
          if ( *(_DWORD *)(v22 + 2328)
            || (*(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1172 ^ v1164, *(_DWORD *)(v22 + 2328)) )
          {
LABEL_1729:
            i9 = 0;
          }
          else
          {
            *(_QWORD *)(v22 + 2336) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2344) = (char *)v1147 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2352) = *v1147;
            *(_QWORD *)(v22 + 2360) = v1149;
            *(_DWORD *)(v22 + 2328) = 1;
            v1173 = *(_DWORD *)(v22 + 2520);
            if ( (v1173 & 0x20000000) == 0 && (*(_DWORD *)(v22 + 2524) & 0x200000) != 0 && (v1173 & 1) != 0 )
            {
              v1174 = *(unsigned int *)(v22 + 2676);
              v1175 = *(_QWORD *)(v22 + 2104);
              v1176 = *(_QWORD *)(v22 + 2680);
              v34 = v1174 + v22;
              v1177 = v1174 + v22 + 8 * ((unsigned __int64)(unsigned int)(*(_DWORD *)(v22 + 2052) - v1174) >> 3);
              while ( v34 != v1177 )
              {
                *(_QWORD *)v34 ^= v1176;
                v1176 = ((v1175 ^ *(_QWORD *)v34) + __ROR8__(v1176, v1176 & 0x3F)) ^ 0xEFA;
                v34 += 8LL;
              }
              *(_DWORD *)(v22 + 2524) &= ~0x200000u;
              i9 = 0;
              if ( v1176 != *(_QWORD *)(v22 + 2688) )
              {
                v1178 = *(_DWORD *)(v22 + 2052);
                v1179 = *(_QWORD *)(v22 + 1416);
                *(_QWORD *)v1179 = v22;
                *(_DWORD *)(v1179 + 16) = v1178;
                if ( !*(_DWORD *)(v22 + 2328) )
                  *(_QWORD *)(*(_QWORD *)(v22 + 1416) + 24LL) = v1176 ^ *(_QWORD *)(v22 + 2688);
                sub_140BDA384(v22, 0LL, v1176, 256LL);
              }
            }
            else
            {
              i9 = 0;
            }
          }
        }
        v1144 += 3;
        --v1145;
        v1987 = (__int64)v1144;
        v1991 = v1145;
      }
      while ( v1145 );
      v1171 = v1986;
      v40 = 1;
      ++*(_DWORD *)(v22 + 2116);
      v1143 = v1171 + 24;
      v1986 = v1143;
      if ( (unsigned int *)v1143 == v2003 )
      {
        *(_DWORD *)(v22 + 2116) = 0;
        break;
      }
    }
    while ( *(_DWORD *)(v22 + 2120) < *(_DWORD *)(v22 + 2124) );
LABEL_238:
    v121 = v2014;
    if ( *(_DWORD *)(v22 + 2116) )
      v121 = v2014 - 1;
    v38 = v121 + 1;
    if ( *(_DWORD *)(v22 + 2328) || *(_DWORD *)(v22 + 2120) >= *(_DWORD *)(v22 + 2124) )
      goto LABEL_2897;
    v37 = -1;
  }
  ++*(_DWORD *)(v22 + 2128);
  v38 = 0;
LABEL_2897:
  v19 = v2016;
  v20 = 0LL;
  v2 = a2;
  v18 = v2011;
LABEL_2898:
  *(_DWORD *)(v22 + 2112) = v38;
  if ( v2006 )
  {
    v1905 = *(_QWORD *)(*(_QWORD *)(v22 + 1720)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1624))
                      + *(_QWORD *)(v22 + 1688));
    (*(void (__fastcall **)(_BYTE *))(v22 + 424))(v2137);
    (*(void (__fastcall **)(_BYTE *))(v22 + 1088))(v2156);
    (*(void (__fastcall **)(__int64))(v22 + 936))(v1905);
    (*(void (__fastcall **)(__int64))(v22 + 952))(v1905);
    v20 = 0LL;
  }
  if ( *((_DWORD *)v19 + 582) )
  {
    v1906 = *((_QWORD *)v19 + 294);
    v1907 = *((_QWORD *)v19 + 295);
    v1908 = (char *)*((_QWORD *)v19 + 293);
    v1909 = *((_QWORD *)v19 + 292);
    v1987 = v1906;
    v1991 = v1907;
    v2001 = v1908;
    v1999 = v1909;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1910 = KeGetCurrentPrcb();
    v1911 = *(char **)((char *)&v1910->MxCsr + *((_QWORD *)v19 + 200));
    v1912 = *((_QWORD *)v19 + 201);
    v2011 = v1911;
    v1913 = *((_QWORD *)v19 + 241) + *(_QWORD *)((char *)&v1910->MxCsr + v1912);
    v1914 = *(_QWORD *)((char *)&v1910->MxCsr + *((_QWORD *)v19 + 203));
    v2012 = v1914;
    if ( &v2031 > v1911 || &v2031 < &v1911[-*((unsigned int *)v19 + 383)] )
    {
      if ( *((_BYTE *)&v1910->MxCsr + *((_QWORD *)v19 + 202))
        && (unsigned __int64)&v2031 <= v1913
        && (unsigned __int64)&v2031 >= v1913 - *((unsigned int *)v19 + 382) )
      {
        v1911 = (char *)v1913;
        v2011 = (char *)v1913;
      }
      else
      {
        v1911 = *(char **)(v1914 + *((_QWORD *)v19 + 209));
        v2011 = v1911;
      }
    }
    if ( (*((_DWORD *)v19 + 630) & 0x4000000) == 0 )
    {
      v2004 = 0LL;
      if ( (*((_DWORD *)v19 + 631) & 0x400000) == 0 )
      {
        v1915 = __readcr0();
        v2004 = v1915;
        __writecr0(v1915 & 0xFFFFFFFFFFFEFFFFuLL);
      }
      v1916 = (unsigned __int64)(v19 + 2800);
      v1913 = 0LL;
      v1917 = (unsigned __int64)&v19[16 * *((unsigned int *)v19 + 698) + 2800];
      v2022 = v19 + 2800;
      v1918 = (_QWORD *)v1917;
      v2030 = v1917;
      if ( *((_DWORD *)v19 + 699) )
      {
        do
        {
          *(_QWORD *)*v1918 = v1918[1];
          v1919 = __readcr4();
          if ( (v1919 & 0x20080) != 0 )
          {
            __writecr4(v1919 ^ 0x80);
            __writecr4(v1919);
          }
          else
          {
            v1920 = __readcr3();
            __writecr3(v1920);
          }
          v1918 += 2;
          v1913 = (unsigned int)(v1913 + 1);
        }
        while ( (unsigned int)v1913 < *((_DWORD *)v19 + 699) );
        LODWORD(v1908) = (_DWORD)v2001;
      }
      if ( v1916 < v1917 )
      {
        do
        {
          v1921 = *(unsigned int *)(v1916 + 8);
          v1922 = *(_QWORD *)v1916;
          v2014 = *(_DWORD *)(v1916 + 8);
          if ( (*((_DWORD *)v19 + 631) & 0x400000) != 0 )
          {
            v1986 = (__int64)v1918;
            v1925 = v1921;
            v1913 = ((v1922 & 0xFFF) + v1921 + 4095) >> 12;
            if ( (_DWORD)v1913 )
            {
              v1926 = v2016;
              v2021 = (unsigned int)v1913;
              do
              {
                v1927 = *((_QWORD *)v1926 + 187);
                v1928 = v2148;
                v1929 = 4LL;
                LODWORD(v1930) = 4;
                v1931 = v1927 + ((v1922 >> 9) & 0x7FFFFFFFF8LL);
                do
                {
                  *v1928++ = v1931;
                  v1931 = v1927 + ((v1931 >> 9) & 0x7FFFFFFFF8LL);
                  --v1929;
                }
                while ( v1929 );
                do
                {
                  v55 = (_DWORD)v1930 == 1;
                  v1930 = (unsigned int)(v1930 - 1);
                }
                while ( !v55 && (*(_DWORD *)v2148[v1930] & 0x80) == 0 );
                v1932 = (_QWORD *)v2148[v1930];
                v1994 = (unsigned __int64)v1932;
                v1933 = *v1932 | 0x62LL;
                *v1932 = v1933;
                v1934 = __readcr4();
                if ( (v1934 & 0x20080) != 0 )
                {
                  __writecr4(v1934 ^ 0x80);
                  __writecr4(v1934);
                }
                else
                {
                  v1935 = __readcr3();
                  __writecr3(v1935);
                }
                v1936 = v1925;
                v1937 = (_QWORD *)v1922;
                if ( 4096 - (v1922 & 0xFFF) < v1925 )
                  v1936 = 4096 - (v1922 & 0xFFF);
                v1913 = v1986;
                v1938 = v1936;
                if ( v1936 >= 8 )
                {
                  v1939 = (unsigned __int64)v1936 >> 3;
                  do
                  {
                    v1938 -= 8;
                    *v1937 = *(_QWORD *)v1913;
                    v1913 += 8LL;
                    ++v1937;
                    --v1939;
                  }
                  while ( v1939 );
                  v1932 = (_QWORD *)v1994;
                }
                if ( v1938 )
                {
                  v1940 = (char *)v1937 - v1913;
                  do
                  {
                    v1940[v1913] = *(_BYTE *)v1913;
                    ++v1913;
                    --v1938;
                  }
                  while ( v1938 );
                  v1926 = v2016;
                }
                v1986 += v1936;
                v1922 += v1936;
                v1925 -= v1936;
                *v1932 = v1933;
                v1941 = __readcr4();
                if ( (v1941 & 0x20080) != 0 )
                {
                  __writecr4(v1941 ^ 0x80);
                  __writecr4(v1941);
                }
                else
                {
                  v1942 = __readcr3();
                  __writecr3(v1942);
                }
                --v2021;
              }
              while ( v2021 );
              v1916 = (unsigned __int64)v2022;
              v20 = 0LL;
              v1917 = v2030;
              LODWORD(v1921) = v2014;
              v19 = v2016;
            }
          }
          else
          {
            v1913 = (unsigned int)v1921;
            v1923 = v1918;
            if ( (unsigned int)v1921 >= 8 )
            {
              v20 = (unsigned __int64)(unsigned int)v1921 >> 3;
              do
              {
                v1913 = (unsigned int)(v1913 - 8);
                *(_QWORD *)v1922 = *v1923++;
                v1922 += 8LL;
                --v20;
              }
              while ( v20 );
            }
            if ( (_DWORD)v1913 )
            {
              v1924 = v1922 - (_QWORD)v1923;
              do
              {
                *((_BYTE *)v1923 + v1924) = *(_BYTE *)v1923;
                v1923 = (_QWORD *)((char *)v1923 + 1);
                v1913 = (unsigned int)(v1913 - 1);
              }
              while ( (_DWORD)v1913 );
            }
          }
          v1916 += 16LL;
          v1918 = (_QWORD *)((char *)v1918 + (unsigned int)v1921);
          v2022 = (char *)v1916;
        }
        while ( v1916 < v1917 );
        v1911 = v2011;
        LODWORD(v1908) = (_DWORD)v2001;
        LODWORD(v1909) = v1999;
      }
      if ( (*((_DWORD *)v19 + 631) & 0x400000) != 0 )
      {
        v2159 = -61;
        v1943 = &v2159;
        v1944 = *((_QWORD *)v19 + 69);
        v1945 = 4LL;
        v1946 = *((_QWORD *)v19 + 187);
        LODWORD(v1947) = 4;
        v1948 = v1946 + ((v1944 >> 9) & 0x7FFFFFFFF8LL);
        v1949 = v2149;
        do
        {
          *v1949++ = v1948;
          v1948 = v1946 + ((v1948 >> 9) & 0x7FFFFFFFF8LL);
          --v1945;
        }
        while ( v1945 );
        do
          v1947 = (unsigned int)(v1947 - 1);
        while ( (_DWORD)v1947 && (*(_DWORD *)v2149[v1947] & 0x80) == 0 );
        v1950 = (__int64 *)v2149[v1947];
        v1951 = *v1950 | 0x62;
        *v1950 = v1951;
        v1952 = __readcr4();
        if ( (v1952 & 0x20080) != 0 )
        {
          __writecr4(v1952 ^ 0x80);
          __writecr4(v1952);
        }
        else
        {
          v1953 = __readcr3();
          __writecr3(v1953);
        }
        v1913 = (v1944 & 0xFFF) != 4096;
        v20 = 0LL;
        if ( (v1944 & 0xFFF) != 0x1000 )
        {
          v1954 = v1944 - (_QWORD)&v2159;
          do
          {
            v1943[v1954] = *v1943;
            ++v1943;
            v1913 = (unsigned int)(v1913 - 1);
          }
          while ( (_DWORD)v1913 );
        }
        *v1950 = v1951;
        v1968 = __readcr4();
        if ( (v1968 & 0x20080) != 0 )
        {
          __writecr4(v1968 ^ 0x80);
          __writecr4(v1968);
        }
        else
        {
          v1969 = __readcr3();
          __writecr3(v1969);
        }
      }
      else
      {
        **((_BYTE **)v19 + 69) = -61;
        __writecr0(v2004);
      }
      v1914 = v2012;
      v1906 = v1987;
      LODWORD(v1907) = v1991;
    }
    if ( *((_DWORD *)v19 + 594) != (_DWORD)v20 && KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1970 = *((_DWORD *)v19 + 594);
    if ( v1970 )
    {
      v1971 = v1970 - 1;
      if ( v1971 )
      {
        v1972 = v1971 - 1;
        if ( v1972 )
        {
          v1973 = v1972 - 1;
          if ( v1973 )
          {
            v1974 = v1973 - 1;
            if ( v1974 )
            {
              if ( v1974 == 1 )
              {
                v1913 = (*((_DWORD *)v19 + 630) >> 9) & 0x1F;
                _interlockedbittestandset(
                  *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v19 + 203)),
                  v1913);
              }
              else
              {
                _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v19 + 182) + 832LL), 1uLL);
              }
            }
            else
            {
              v1913 = *(_QWORD *)(*((_QWORD *)v19 + 215)
                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v19 + 203))
                                + *((_QWORD *)v19 + 211));
              _interlockedbittestandset((volatile signed __int32 *)v1913, (*((_DWORD *)v19 + 630) >> 9) & 0x1F);
            }
            goto LABEL_3009;
          }
          v1975 = (volatile signed __int32 *)*((_QWORD *)v19 + 171);
        }
        else
        {
          v1975 = (volatile signed __int32 *)*((_QWORD *)v19 + 170);
        }
      }
      else
      {
        v1975 = (volatile signed __int32 *)*((_QWORD *)v19 + 168);
      }
      _interlockedbittestandset64(v1975, 0LL);
    }
LABEL_3009:
    *(_QWORD *)(v1914 + *((_QWORD *)v19 + 212)) = v20;
    *(_QWORD *)(v1914 + *((_QWORD *)v19 + 214)) = v20;
    KeGuardCheckICall(*((_QWORD *)v19 + 45), v1913);
    SdbpCheckDll(265, v1909, (_DWORD)v1908, v1907, v1906, *((_QWORD *)v19 + 45), (__int64)(v1911 - 8));
    __debugbreak();
  }
  if ( *((_DWORD *)v19 + 529) || *((_DWORD *)v19 + 528) )
  {
    v1955 = -1073741802;
    *(_DWORD *)v2 = *((_DWORD *)v19 + 528);
    *(_DWORD *)(v2 + 4) = *((_DWORD *)v19 + 529);
  }
  else
  {
    v1955 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v2030 == 2872 )
    ExFreeToNPagedLookasideList(&stru_140E0F340, v18);
  else
    ExFreePool(v18);
  return v1955;
}
