/*
 * XREFs of NvmeNamespaceScsiIrp @ 0x14010D8B8
 * Callers:
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceClaimDeviceSrb @ 0x1400FC288 (NvmeNamespaceClaimDeviceSrb.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceReleaseDeviceSrb @ 0x14010BCFC (NvmeNamespaceReleaseDeviceSrb.c)
 *     NvmeNamespaceUnknownSrb @ 0x140114F30 (NvmeNamespaceUnknownSrb.c)
 *     NvmeNamespaceWmiSrb @ 0x1401155DC (NvmeNamespaceWmiSrb.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceScsiIrp(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  bool v8; // zf
  unsigned int v9; // esi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *v12; // rax
  const GUID *v13; // r8
  const GUID *v14; // r8
  unsigned __int64 v15; // rdx
  char v16; // r11
  _BYTE *v17; // r8
  unsigned __int8 v18; // r10
  char v19; // si
  char v20; // r13
  char v21; // r14
  char *v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  int v26; // ecx
  char v27; // cl
  char v28; // r9
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  const GUID *v32; // r8
  unsigned int v33; // esi
  char v34; // al
  int v35; // ecx
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int *v38; // rax
  unsigned int *v39; // rax
  _BYTE *v40; // r8
  unsigned __int8 v41; // r10
  char v42; // r13
  char v43; // r14
  char *v44; // r14
  __int64 v45; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // r9
  int v48; // ecx
  char v49; // cl
  _BYTE *v50; // rax
  unsigned int v51; // eax
  const EVENT_DESCRIPTOR *v52; // rdx
  const EVENT_DESCRIPTOR *v53; // rdx
  unsigned __int64 v54; // rdx
  char v55; // r11
  _BYTE *v56; // r8
  unsigned __int8 v57; // r10
  char v58; // si
  char v59; // r13
  char v60; // r14
  char *v61; // r14
  __int64 v62; // rax
  unsigned __int64 v63; // r15
  __int64 v64; // r9
  int v65; // ecx
  char v66; // cl
  char v67; // r9
  _BYTE *v68; // rax
  unsigned int v69; // eax
  char v70; // al
  __int64 result; // rax
  __int64 v72; // rdx
  int v73; // r13d
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned int *v76; // rax
  const EVENT_DESCRIPTOR *v77; // rdx
  unsigned __int64 v78; // rdx
  char v79; // r11
  _BYTE *v80; // r8
  unsigned __int8 v81; // r10
  char v82; // si
  char v83; // r14
  char v84; // r13
  char *v85; // r14
  unsigned int v86; // r13d
  unsigned __int64 v87; // r15
  __int64 v88; // r9
  int v89; // ecx
  char v90; // cl
  char v91; // r9
  _BYTE *v92; // rax
  unsigned int v93; // eax
  char v94; // al
  __int64 v95; // rcx
  __int64 v96; // rdx
  unsigned int *v97; // rax
  __int64 v98; // rcx
  const GUID *v99; // r8
  const GUID *v100; // r8
  const EVENT_DESCRIPTOR *v101; // rdx
  unsigned __int64 v102; // rdx
  char v103; // r11
  _BYTE *v104; // r8
  unsigned __int8 v105; // r10
  char v106; // si
  char v107; // r13
  unsigned __int8 v108; // r14
  char *v109; // r14
  __int64 v110; // rax
  __int64 v111; // rcx
  unsigned __int64 v112; // r15
  __int64 v113; // r9
  int v114; // ecx
  int v115; // ecx
  char v116; // cl
  char v117; // r9
  _BYTE *v118; // rcx
  _BYTE *v119; // rax
  unsigned int v120; // eax
  char v121; // al
  __int64 v122; // rcx
  const GUID *v123; // r8
  int v124; // eax
  unsigned int v125; // r12d
  char v126; // al
  unsigned __int64 v127; // rcx
  __int64 v128; // rdx
  unsigned int *v129; // rax
  const EVENT_DESCRIPTOR *v130; // rdx
  unsigned __int64 v131; // rdx
  char v132; // r11
  _BYTE *v133; // r8
  unsigned __int8 v134; // r10
  char v135; // si
  char v136; // r14
  char v137; // r13
  char *v138; // r14
  unsigned int v139; // r13d
  unsigned __int64 v140; // r15
  __int64 v141; // r9
  int v142; // ecx
  char v143; // cl
  char v144; // r9
  _BYTE *v145; // rax
  unsigned int v146; // eax
  char v147; // al
  unsigned __int64 v148; // rcx
  __int64 v149; // rdx
  unsigned int *v150; // rax
  const EVENT_DESCRIPTOR *v151; // rdx
  unsigned __int64 v152; // rdx
  char v153; // r11
  _BYTE *v154; // r8
  unsigned __int8 v155; // r10
  char v156; // si
  char v157; // r14
  char v158; // r13
  char *v159; // r14
  unsigned int v160; // r13d
  unsigned __int64 v161; // r15
  __int64 v162; // r9
  int v163; // ecx
  char v164; // cl
  char v165; // r9
  _BYTE *v166; // rax
  unsigned int v167; // eax
  char v168; // al
  char v169; // cl
  char v170; // cl
  char v171; // al
  unsigned int *v172; // rax
  _BYTE *v173; // r8
  unsigned __int8 v174; // r10
  char v175; // r13
  char v176; // r14
  char *v177; // r14
  __int64 v178; // rax
  unsigned __int64 v179; // r15
  __int64 v180; // r9
  int v181; // ecx
  char v182; // cl
  _BYTE *v183; // rax
  unsigned int v184; // eax
  char v185; // al
  unsigned int *v186; // rax
  unsigned __int64 v187; // rdx
  char v188; // r11
  _BYTE *v189; // r8
  unsigned __int8 v190; // r10
  char v191; // si
  char v192; // r13
  char v193; // r14
  char *v194; // r14
  __int64 v195; // rax
  unsigned __int64 v196; // r15
  __int64 v197; // r9
  int v198; // ecx
  char v199; // cl
  char v200; // r9
  _BYTE *v201; // rax
  unsigned int v202; // eax
  char v203; // al
  char v204; // cl
  char v205; // cl
  char v206; // al
  unsigned int *v207; // rax
  _BYTE *v208; // r8
  unsigned __int8 v209; // r10
  char v210; // r13
  unsigned __int8 v211; // r14
  char *v212; // r14
  __int64 v213; // rax
  __int64 v214; // rcx
  unsigned __int64 v215; // r15
  __int64 v216; // r9
  int v217; // ecx
  int v218; // ecx
  char v219; // cl
  _BYTE *v220; // rcx
  _BYTE *v221; // rax
  unsigned int v222; // eax
  unsigned int v223; // esi
  __int64 v224; // rcx
  __int64 v225; // rdx
  unsigned int *v226; // rax
  __int64 v227; // rcx
  const GUID *v228; // r8
  const EVENT_DESCRIPTOR *v229; // rdx
  const GUID *v230; // r8
  unsigned __int64 v231; // rdx
  char v232; // r11
  _BYTE *v233; // r8
  unsigned __int8 v234; // r10
  char v235; // si
  char v236; // r14
  unsigned __int8 v237; // r13
  char *v238; // r14
  unsigned int v239; // r13d
  __int64 v240; // rcx
  unsigned __int64 v241; // r15
  __int64 v242; // r9
  int v243; // ecx
  int v244; // ecx
  char v245; // cl
  char v246; // r9
  _BYTE *v247; // rcx
  _BYTE *v248; // rax
  unsigned int v249; // eax
  char v250; // al
  __int64 v251; // rcx
  const GUID *v252; // r8
  unsigned int v253; // eax
  unsigned int v254; // esi
  unsigned int v255; // esi
  unsigned int *v256; // rax
  _BYTE *v257; // r8
  unsigned __int8 v258; // r10
  char v259; // r14
  unsigned __int8 v260; // r13
  char *v261; // r14
  unsigned int v262; // r13d
  __int64 v263; // rcx
  unsigned __int64 v264; // r15
  __int64 v265; // r9
  int v266; // ecx
  int v267; // ecx
  char v268; // cl
  _BYTE *v269; // rcx
  _BYTE *v270; // rax
  unsigned int v271; // eax
  unsigned int *v272; // rax
  _BYTE *v273; // r8
  unsigned __int8 v274; // r10
  char v275; // r14
  unsigned __int8 v276; // r13
  char *v277; // r14
  unsigned int v278; // r13d
  __int64 v279; // rcx
  unsigned __int64 v280; // r15
  __int64 v281; // r9
  int v282; // ecx
  int v283; // ecx
  char v284; // cl
  _BYTE *v285; // rcx
  _BYTE *v286; // rax
  unsigned int v287; // eax
  __int64 v288; // rcx
  __int64 v289; // rdx
  unsigned int *v290; // rax
  __int64 v291; // rcx
  const EVENT_DESCRIPTOR *v292; // rdx
  unsigned __int64 v293; // rdx
  char v294; // r11
  _BYTE *v295; // r8
  unsigned __int8 v296; // r10
  char v297; // si
  char v298; // r13
  unsigned __int8 v299; // r14
  char *v300; // r14
  __int64 v301; // rax
  __int64 v302; // rcx
  unsigned __int64 v303; // r15
  __int64 v304; // r9
  int v305; // ecx
  int v306; // ecx
  char v307; // cl
  char v308; // r9
  _BYTE *v309; // rcx
  _BYTE *v310; // rax
  unsigned int v311; // eax
  char v312; // al
  __int64 v313; // rcx
  unsigned int v314; // esi
  unsigned int v315; // esi
  unsigned int *v316; // rax
  _BYTE *v317; // r8
  unsigned __int8 v318; // r10
  char v319; // r14
  unsigned __int8 v320; // r13
  char *v321; // r14
  unsigned int v322; // r13d
  __int64 v323; // rcx
  unsigned __int64 v324; // r15
  __int64 v325; // r9
  int v326; // ecx
  int v327; // ecx
  char v328; // cl
  _BYTE *v329; // rcx
  _BYTE *v330; // rax
  unsigned int v331; // eax
  unsigned int *v332; // rax
  _BYTE *v333; // r8
  unsigned __int8 v334; // r10
  char v335; // r14
  unsigned __int8 v336; // r13
  char *v337; // r14
  unsigned int v338; // r13d
  __int64 v339; // rcx
  unsigned __int64 v340; // r15
  __int64 v341; // r9
  int v342; // ecx
  int v343; // ecx
  char v344; // cl
  _BYTE *v345; // rcx
  _BYTE *v346; // rax
  unsigned int v347; // eax
  unsigned int *v348; // rax
  _BYTE *v349; // r8
  unsigned __int8 v350; // r10
  char v351; // r14
  unsigned __int8 v352; // r13
  char *v353; // r14
  unsigned int v354; // r13d
  __int64 v355; // rcx
  unsigned __int64 v356; // r15
  __int64 v357; // r9
  int v358; // ecx
  int v359; // ecx
  char v360; // cl
  _BYTE *v361; // rcx
  _BYTE *v362; // rax
  unsigned int v363; // eax
  unsigned int v364; // esi
  unsigned int v365; // esi
  unsigned int v366; // esi
  unsigned int *v367; // rax
  _BYTE *v368; // r8
  unsigned __int8 v369; // r10
  char v370; // r14
  unsigned __int8 v371; // r13
  char *v372; // r14
  unsigned int v373; // r13d
  __int64 v374; // rcx
  unsigned __int64 v375; // r15
  __int64 v376; // r9
  int v377; // ecx
  int v378; // ecx
  char v379; // cl
  _BYTE *v380; // rcx
  _BYTE *v381; // rax
  unsigned int v382; // eax
  unsigned int *v383; // rax
  _BYTE *v384; // r8
  unsigned __int8 v385; // r10
  char v386; // r14
  unsigned __int8 v387; // r13
  char *v388; // r14
  unsigned int v389; // r13d
  __int64 v390; // rcx
  unsigned __int64 v391; // r15
  __int64 v392; // r9
  int v393; // ecx
  int v394; // ecx
  char v395; // cl
  _BYTE *v396; // rcx
  _BYTE *v397; // rax
  unsigned int v398; // eax
  unsigned int *v399; // rax
  _BYTE *v400; // r8
  unsigned __int8 v401; // r10
  char v402; // r14
  unsigned __int8 v403; // r13
  char *v404; // r14
  unsigned int v405; // r13d
  __int64 v406; // rcx
  unsigned __int64 v407; // r15
  __int64 v408; // r9
  int v409; // ecx
  int v410; // ecx
  char v411; // cl
  _BYTE *v412; // rcx
  _BYTE *v413; // rax
  unsigned int v414; // eax
  unsigned int *v415; // rax
  _BYTE *v416; // r8
  unsigned __int8 v417; // r10
  char v418; // r14
  unsigned __int8 v419; // r13
  char *v420; // r14
  unsigned int v421; // r13d
  __int64 v422; // rcx
  unsigned __int64 v423; // r15
  __int64 v424; // r9
  int v425; // ecx
  int v426; // ecx
  char v427; // cl
  _BYTE *v428; // rcx
  _BYTE *v429; // rax
  unsigned int v430; // eax
  char v431; // [rsp+60h] [rbp-A0h]
  char v432; // [rsp+60h] [rbp-A0h]
  char v433; // [rsp+60h] [rbp-A0h]
  char v434; // [rsp+60h] [rbp-A0h]
  char v435; // [rsp+60h] [rbp-A0h]
  char v436; // [rsp+60h] [rbp-A0h]
  char v437; // [rsp+60h] [rbp-A0h]
  char v438; // [rsp+60h] [rbp-A0h]
  char v439; // [rsp+60h] [rbp-A0h]
  char v440; // [rsp+60h] [rbp-A0h]
  char v441; // [rsp+60h] [rbp-A0h]
  char v442; // [rsp+60h] [rbp-A0h]
  char v443; // [rsp+60h] [rbp-A0h]
  char v444; // [rsp+60h] [rbp-A0h]
  char v445; // [rsp+60h] [rbp-A0h]
  char v446; // [rsp+60h] [rbp-A0h]
  char v447; // [rsp+61h] [rbp-9Fh]
  char v448; // [rsp+61h] [rbp-9Fh]
  char v449; // [rsp+61h] [rbp-9Fh]
  char v450; // [rsp+61h] [rbp-9Fh]
  char v451; // [rsp+61h] [rbp-9Fh]
  char v452; // [rsp+61h] [rbp-9Fh]
  char v453; // [rsp+61h] [rbp-9Fh]
  char v454; // [rsp+61h] [rbp-9Fh]
  char v455; // [rsp+61h] [rbp-9Fh]
  char v456; // [rsp+61h] [rbp-9Fh]
  char v457; // [rsp+61h] [rbp-9Fh]
  char v458; // [rsp+61h] [rbp-9Fh]
  char v459; // [rsp+61h] [rbp-9Fh]
  char v460; // [rsp+61h] [rbp-9Fh]
  char v461; // [rsp+61h] [rbp-9Fh]
  char v462; // [rsp+61h] [rbp-9Fh]
  char v463; // [rsp+61h] [rbp-9Fh]
  char v464; // [rsp+61h] [rbp-9Fh]
  int v466; // [rsp+68h] [rbp-98h]
  int v467; // [rsp+68h] [rbp-98h]
  int v468; // [rsp+68h] [rbp-98h]
  int v469; // [rsp+68h] [rbp-98h]
  unsigned int v470; // [rsp+68h] [rbp-98h]
  int v471; // [rsp+68h] [rbp-98h]
  unsigned int v472; // [rsp+68h] [rbp-98h]
  unsigned int v473; // [rsp+70h] [rbp-90h]
  unsigned int v474; // [rsp+70h] [rbp-90h]
  unsigned int v475; // [rsp+70h] [rbp-90h]
  unsigned int v476; // [rsp+70h] [rbp-90h]
  unsigned int v477; // [rsp+70h] [rbp-90h]
  unsigned int v478; // [rsp+70h] [rbp-90h]
  unsigned int v479; // [rsp+70h] [rbp-90h]
  unsigned int v480; // [rsp+70h] [rbp-90h]
  unsigned int v481; // [rsp+70h] [rbp-90h]
  unsigned int v482; // [rsp+70h] [rbp-90h]
  unsigned int v483; // [rsp+70h] [rbp-90h]
  unsigned int v484; // [rsp+70h] [rbp-90h]
  unsigned int v485; // [rsp+70h] [rbp-90h]
  unsigned int v486; // [rsp+70h] [rbp-90h]
  unsigned int v487; // [rsp+70h] [rbp-90h]
  unsigned int v488; // [rsp+70h] [rbp-90h]
  unsigned int v489; // [rsp+70h] [rbp-90h]
  unsigned int v490; // [rsp+70h] [rbp-90h]
  unsigned int v491; // [rsp+70h] [rbp-90h]
  char v492; // [rsp+74h] [rbp-8Ch]
  char v493; // [rsp+75h] [rbp-8Bh]
  char v494; // [rsp+76h] [rbp-8Ah]
  char v495; // [rsp+77h] [rbp-89h]
  unsigned __int8 v496; // [rsp+78h] [rbp-88h]
  char v497; // [rsp+79h] [rbp-87h]
  char v498; // [rsp+7Ah] [rbp-86h]
  char v499; // [rsp+7Bh] [rbp-85h]
  char v500; // [rsp+7Ch] [rbp-84h]
  unsigned __int8 v501; // [rsp+7Dh] [rbp-83h]
  unsigned __int8 v502; // [rsp+7Eh] [rbp-82h]
  unsigned __int8 v503; // [rsp+7Fh] [rbp-81h]
  unsigned __int8 v504; // [rsp+80h] [rbp-80h]
  unsigned __int8 v505; // [rsp+81h] [rbp-7Fh]
  unsigned __int8 v506; // [rsp+82h] [rbp-7Eh]
  unsigned __int8 v507; // [rsp+83h] [rbp-7Dh]
  unsigned __int8 v508; // [rsp+84h] [rbp-7Ch]
  unsigned __int8 v509; // [rsp+85h] [rbp-7Bh]
  unsigned __int8 v510; // [rsp+86h] [rbp-7Ah]
  unsigned __int8 v511; // [rsp+87h] [rbp-79h]
  unsigned __int8 v512; // [rsp+88h] [rbp-78h]
  unsigned int v513; // [rsp+8Ch] [rbp-74h]
  unsigned int v514; // [rsp+8Ch] [rbp-74h]
  unsigned int v515; // [rsp+8Ch] [rbp-74h]
  unsigned int v516; // [rsp+8Ch] [rbp-74h]
  int v517; // [rsp+8Ch] [rbp-74h]
  int v518; // [rsp+8Ch] [rbp-74h]
  int v519; // [rsp+8Ch] [rbp-74h]
  __int128 v520; // [rsp+190h] [rbp+90h] BYREF
  __int128 v521; // [rsp+1A0h] [rbp+A0h] BYREF
  GUID v522; // [rsp+1B0h] [rbp+B0h] BYREF
  GUID v523; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v524; // [rsp+1D0h] [rbp+D0h] BYREF
  GUID v525; // [rsp+1E0h] [rbp+E0h] BYREF
  GUID v526; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v527; // [rsp+200h] [rbp+100h] BYREF
  GUID v528; // [rsp+210h] [rbp+110h] BYREF
  __int128 v529; // [rsp+220h] [rbp+120h] BYREF
  __int128 v530; // [rsp+230h] [rbp+130h] BYREF
  __int128 v531; // [rsp+240h] [rbp+140h] BYREF
  __int128 v532; // [rsp+250h] [rbp+150h] BYREF
  GUID v533; // [rsp+260h] [rbp+160h] BYREF
  __int128 v534; // [rsp+270h] [rbp+170h] BYREF
  __int128 v535; // [rsp+280h] [rbp+180h] BYREF
  __int128 v536; // [rsp+290h] [rbp+190h] BYREF
  __int128 v537; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v538; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v539; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int128 v540; // [rsp+2D0h] [rbp+1D0h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = a1;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 8);
  if ( !v7 )
  {
    v8 = StorEtwLoggingEnabled == 0;
    v9 = -1073741811;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741811;
    if ( v8 )
      goto LABEL_691;
    v520 = 0LL;
    IoGetActivityIdIrp(a2, &v520);
    v11 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v11 != 14 )
    {
      if ( *(_BYTE *)v11 == 15 )
      {
        if ( byte_140171461 < 0 )
        {
          v15 = *(_QWORD *)(v11 + 8);
          v16 = 0;
          v492 = 0;
          v17 = 0LL;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          if ( *(_BYTE *)(v15 + 2) == 40 )
          {
            v22 = 0LL;
            v431 = 0;
            if ( *(_DWORD *)(v15 + 20) )
              goto LABEL_547;
            v10 = *(unsigned int *)(v15 + 56);
            v23 = 0LL;
            v466 = 0;
            v513 = v10;
            if ( !(_DWORD)v10 )
              goto LABEL_40;
            while ( 1 )
            {
              v10 = *(unsigned int *)(v15 + 4 * v23 + 120);
              if ( (unsigned int)v10 >= 0x80 )
              {
                v24 = *(unsigned int *)(v15 + 16);
                if ( (unsigned int)v10 < (unsigned int)v24 )
                {
                  v25 = (unsigned int)v10;
                  v26 = *(_DWORD *)(v10 + v15) - 64;
                  if ( v26 )
                  {
                    v10 = (unsigned int)(v26 - 1);
                    if ( (_DWORD)v10 )
                    {
                      if ( (_DWORD)v10 == 1 )
                      {
                        v10 = v25 + 40;
                        if ( v25 + 40 <= v24 )
                        {
                          if ( *(_DWORD *)(v25 + v15 + 12) )
                            v22 = (char *)(v25 + v15 + 32);
                          v17 = *(_BYTE **)(v25 + v15 + 24);
                          goto LABEL_39;
                        }
                      }
                    }
                    else
                    {
                      v10 = v25 + 56;
                      if ( v25 + 56 <= v24 )
                      {
                        v431 = 1;
                        if ( *(_BYTE *)(v25 + v15 + 10) )
                          v22 = (char *)(v25 + v15 + 24);
                        v16 = *(_BYTE *)(v25 + v15 + 8);
                        v17 = *(_BYTE **)(v25 + v15 + 16);
                        v18 = *(_BYTE *)(v25 + v15 + 9);
                      }
                    }
                  }
                  else
                  {
                    v10 = v25 + 40;
                    if ( v25 + 40 <= v24 )
                    {
                      if ( *(_BYTE *)(v25 + v15 + 10) )
                        v22 = (char *)(v25 + v15 + 24);
                      v17 = *(_BYTE **)(v25 + v15 + 16);
LABEL_39:
                      v18 = *(_BYTE *)(v25 + v15 + 9);
                      v16 = *(_BYTE *)(v25 + v15 + 8);
LABEL_40:
                      if ( v22 )
                      {
                        v27 = *v22;
                        v21 = 0;
                        goto LABEL_43;
                      }
                      goto LABEL_547;
                    }
                  }
                  if ( v431 )
                    goto LABEL_40;
                }
              }
              v23 = (unsigned int)(v466 + 1);
              v466 = v23;
              if ( (unsigned int)v23 >= v513 )
                goto LABEL_40;
            }
          }
          v27 = *(_BYTE *)(v15 + 72);
          v17 = *(_BYTE **)(v15 + 32);
          v18 = *(_BYTE *)(v15 + 11);
          v16 = *(_BYTE *)(v15 + 4);
          if ( *(_BYTE *)(v15 + 2) )
            goto LABEL_547;
LABEL_43:
          LOBYTE(v10) = v27 - 8;
          if ( (v10 & 0x5D) == 0 )
          {
            v28 = *(_BYTE *)(v15 + 3);
            if ( v28 == 1 || !v17 || !v18 )
              goto LABEL_62;
            LOBYTE(v15) = 0;
            v10 = (unsigned __int64)&v17[v18];
            v29 = v17 + 8;
            if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
            {
              if ( (unsigned __int64)v29 <= v10 )
              {
                LOBYTE(v15) = 1;
                v20 = v17[2];
                v19 = v17[1] & 0xF;
                v21 = v17[3];
              }
            }
            else
            {
              if ( (unsigned __int64)v29 <= v10 )
              {
                v19 = v17[2] & 0xF;
                v30 = v18;
                if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
                  v30 = (unsigned __int8)v17[7] + 8;
                v10 = (unsigned __int64)(v17 + 13);
                v15 = (unsigned __int64)&v17[v30];
                if ( (unsigned __int64)(v17 + 13) <= v15 )
                  v20 = v17[12];
                if ( (unsigned __int64)(v17 + 14) > v15 )
                  v492 = 0;
                else
                  v492 = *(_BYTE *)v10;
                LOBYTE(v15) = 1;
              }
              v21 = v492;
            }
            if ( (_BYTE)v15 )
            {
              LOBYTE(v3) = v20;
              v31 = v21;
            }
            else
            {
LABEL_62:
              v19 = 0;
              v31 = 0;
            }
            v32 = (const GUID *)&v520;
            goto LABEL_546;
          }
LABEL_547:
          v9 = -1073741811;
        }
        goto LABEL_691;
      }
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_691;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_691;
        v12 = *(unsigned int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        v13 = (const GUID *)&v520;
LABEL_12:
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, v13, a2, v3, *(_DWORD *)(a2 + 48));
        goto LABEL_691;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_691;
      v14 = (const GUID *)&v520;
      goto LABEL_495;
    }
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_691;
    v14 = (const GUID *)&v520;
LABEL_145:
    v52 = &EventNonReadWriteRequestComplete;
LABEL_496:
    McTemplateK0pd_EtwWriteTransfer(v10, v52, v14, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_691;
  }
  *(_BYTE *)(v7 + 3) = 0;
  *(_QWORD *)(v2 + 32) = 0LL;
  v33 = *(unsigned __int8 *)(v7 + 2);
  if ( v33 == 40 )
  {
    v6 = v7;
    if ( *(_DWORD *)(v7 + 8) != 1397899864 || *(_DWORD *)(v7 + 48) || *(_QWORD *)(v7 + 72) )
    {
      v8 = StorEtwLoggingEnabled == 0;
      v9 = -1073741811;
      *(_BYTE *)(v7 + 3) = 6;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_691;
      v521 = 0LL;
      IoGetActivityIdIrp(a2, &v521);
      v11 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v11 == 14 )
      {
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_691;
        v14 = (const GUID *)&v521;
        goto LABEL_145;
      }
      if ( *(_BYTE *)v11 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_691;
        v15 = *(_QWORD *)(v11 + 8);
        v16 = 0;
        v40 = 0LL;
        v493 = 0;
        v41 = 0;
        v19 = 0;
        v42 = 0;
        v43 = 0;
        if ( *(_BYTE *)(v15 + 2) == 40 )
        {
          v44 = 0LL;
          v432 = 0;
          if ( *(_DWORD *)(v15 + 20) )
            goto LABEL_547;
          v10 = *(unsigned int *)(v15 + 56);
          v45 = 0LL;
          v467 = 0;
          v514 = v10;
          if ( !(_DWORD)v10 )
            goto LABEL_119;
          while ( 1 )
          {
            v10 = *(unsigned int *)(v15 + 4 * v45 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v46 = *(unsigned int *)(v15 + 16);
              if ( (unsigned int)v10 < (unsigned int)v46 )
              {
                v47 = (unsigned int)v10;
                v48 = *(_DWORD *)(v10 + v15) - 64;
                if ( v48 )
                {
                  v10 = (unsigned int)(v48 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v47 + 40;
                      if ( v47 + 40 <= v46 )
                      {
                        if ( *(_DWORD *)(v47 + v15 + 12) )
                          v44 = (char *)(v47 + v15 + 32);
                        v40 = *(_BYTE **)(v47 + v15 + 24);
                        goto LABEL_118;
                      }
                    }
                  }
                  else
                  {
                    v10 = v47 + 56;
                    if ( v47 + 56 <= v46 )
                    {
                      v432 = 1;
                      if ( *(_BYTE *)(v47 + v15 + 10) )
                        v44 = (char *)(v47 + v15 + 24);
                      v16 = *(_BYTE *)(v47 + v15 + 8);
                      v40 = *(_BYTE **)(v47 + v15 + 16);
                      v41 = *(_BYTE *)(v47 + v15 + 9);
                    }
                  }
                }
                else
                {
                  v10 = v47 + 40;
                  if ( v47 + 40 <= v46 )
                  {
                    if ( *(_BYTE *)(v47 + v15 + 10) )
                      v44 = (char *)(v47 + v15 + 24);
                    v40 = *(_BYTE **)(v47 + v15 + 16);
LABEL_118:
                    v41 = *(_BYTE *)(v47 + v15 + 9);
                    v16 = *(_BYTE *)(v47 + v15 + 8);
LABEL_119:
                    if ( !v44 )
                      goto LABEL_547;
                    v49 = *v44;
                    v43 = 0;
LABEL_122:
                    LOBYTE(v10) = v49 - 8;
                    if ( (v10 & 0x5D) != 0 )
                      goto LABEL_547;
                    v28 = *(_BYTE *)(v15 + 3);
                    if ( v28 == 1 || !v40 || !v41 )
                      goto LABEL_141;
                    LOBYTE(v15) = 0;
                    v10 = (unsigned __int64)&v40[v41];
                    v50 = v40 + 8;
                    if ( (unsigned __int8)((*v40 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v50 <= v10 )
                      {
                        LOBYTE(v15) = 1;
                        v42 = v40[2];
                        v19 = v40[1] & 0xF;
                        v43 = v40[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v50 <= v10 )
                      {
                        v19 = v40[2] & 0xF;
                        v51 = v41;
                        if ( (unsigned int)(unsigned __int8)v40[7] + 8 <= v41 )
                          v51 = (unsigned __int8)v40[7] + 8;
                        v10 = (unsigned __int64)(v40 + 13);
                        v15 = (unsigned __int64)&v40[v51];
                        if ( (unsigned __int64)(v40 + 13) <= v15 )
                          v42 = v40[12];
                        if ( (unsigned __int64)(v40 + 14) > v15 )
                          v493 = 0;
                        else
                          v493 = *(_BYTE *)v10;
                        LOBYTE(v15) = 1;
                      }
                      v43 = v493;
                    }
                    if ( (_BYTE)v15 )
                    {
                      LOBYTE(v3) = v42;
                      v31 = v43;
                    }
                    else
                    {
LABEL_141:
                      v19 = 0;
                      v31 = 0;
                    }
                    v32 = (const GUID *)&v521;
                    goto LABEL_546;
                  }
                }
                if ( v432 )
                  goto LABEL_119;
              }
            }
            v45 = (unsigned int)(v467 + 1);
            v467 = v45;
            if ( (unsigned int)v45 >= v514 )
              goto LABEL_119;
          }
        }
        v49 = *(_BYTE *)(v15 + 72);
        v40 = *(_BYTE **)(v15 + 32);
        v41 = *(_BYTE *)(v15 + 11);
        v16 = *(_BYTE *)(v15 + 4);
        if ( *(_BYTE *)(v15 + 2) )
          goto LABEL_547;
        goto LABEL_122;
      }
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_691;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_691;
        v39 = *(unsigned int **)(a2 + 56);
        if ( v39 )
          v3 = *v39;
        v13 = (const GUID *)&v521;
        goto LABEL_12;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_691;
      v14 = (const GUID *)&v521;
      goto LABEL_495;
    }
    v33 = *(_DWORD *)(v7 + 20);
  }
  v473 = NvmeNamespaceAcquireRemoveLock(a1, a2);
  if ( (v473 & 0x80000000) == 0 )
  {
    if ( !v33 )
    {
      v72 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 128LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v72 + 400) + 184LL) & 0x40000000) != 0 || (*(_BYTE *)(v72 + 416) & 0x40) != 0 )
      {
        v124 = NvmeNamespaceExecuteScsiSrbEx(v5, v7, a2);
        v470 = v124;
        v125 = v124;
        if ( v124 < 0 )
        {
          v126 = RaidNtStatusToSrbStatus(v124);
          if ( *(char *)(v7 + 3) < 0 )
            v126 |= 0x80u;
          *(_BYTE *)(v7 + 3) = v126;
          *(_QWORD *)(a2 + 56) = 0LL;
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = v470;
          if ( v8 )
            goto LABEL_406;
          v525 = 0LL;
          IoGetActivityIdIrp(a2, &v525);
          v128 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v128 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_406;
              v130 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( (byte_140171461 & 0x80) == 0 )
                goto LABEL_406;
              v131 = *(_QWORD *)(v128 + 8);
              v132 = 0;
              v133 = 0LL;
              v435 = 0;
              v134 = 0;
              v497 = 0;
              v135 = 0;
              v136 = 0;
              v137 = 0;
              if ( *(_BYTE *)(v131 + 2) != 40 )
              {
                v143 = *(_BYTE *)(v131 + 72);
                v133 = *(_BYTE **)(v131 + 32);
                v134 = *(_BYTE *)(v131 + 11);
                v132 = *(_BYTE *)(v131 + 4);
                if ( !*(_BYTE *)(v131 + 2) )
                  goto LABEL_381;
                goto LABEL_406;
              }
              v138 = 0LL;
              v449 = 0;
              if ( *(_DWORD *)(v131 + 20) )
                goto LABEL_406;
              v139 = 0;
              v476 = *(_DWORD *)(v131 + 56);
              if ( !v476 )
                goto LABEL_378;
              while ( 1 )
              {
                v127 = *(unsigned int *)(v131 + 4LL * v139 + 120);
                if ( (unsigned int)v127 >= 0x80 )
                {
                  v140 = *(unsigned int *)(v131 + 16);
                  if ( (unsigned int)v127 < (unsigned int)v140 )
                  {
                    v141 = (unsigned int)v127;
                    v142 = *(_DWORD *)(v131 + v127) - 64;
                    if ( v142 )
                    {
                      v127 = (unsigned int)(v142 - 1);
                      if ( (_DWORD)v127 )
                      {
                        if ( (_DWORD)v127 == 1 )
                        {
                          v127 = v141 + 40;
                          if ( v141 + 40 <= v140 )
                          {
                            if ( *(_DWORD *)(v131 + v141 + 12) )
                              v138 = (char *)(v141 + v131 + 32);
                            v133 = *(_BYTE **)(v131 + v141 + 24);
                            goto LABEL_377;
                          }
                        }
                      }
                      else
                      {
                        v127 = v141 + 56;
                        if ( v141 + 56 <= v140 )
                        {
                          v449 = 1;
                          if ( *(_BYTE *)(v131 + v141 + 10) )
                            v138 = (char *)(v141 + v131 + 24);
                          v132 = *(_BYTE *)(v131 + v141 + 8);
                          v133 = *(_BYTE **)(v131 + v141 + 16);
                          v134 = *(_BYTE *)(v131 + v141 + 9);
                        }
                      }
                    }
                    else
                    {
                      v127 = v141 + 40;
                      if ( v141 + 40 <= v140 )
                      {
                        if ( *(_BYTE *)(v131 + v141 + 10) )
                          v138 = (char *)(v141 + v131 + 24);
                        v133 = *(_BYTE **)(v131 + v141 + 16);
LABEL_377:
                        v134 = *(_BYTE *)(v131 + v141 + 9);
                        v132 = *(_BYTE *)(v131 + v141 + 8);
LABEL_378:
                        if ( v138 )
                        {
                          v143 = *v138;
                          v137 = 0;
                          v136 = 0;
LABEL_381:
                          LOBYTE(v127) = v143 - 8;
                          if ( (v127 & 0x5D) == 0 )
                          {
                            v144 = *(_BYTE *)(v131 + 3);
                            if ( v144 == 1 || !v133 || !v134 )
                              goto LABEL_401;
                            LOBYTE(v131) = 0;
                            v127 = (unsigned __int64)&v133[v134];
                            v145 = v133 + 8;
                            if ( (unsigned __int8)((*v133 & 0x7F) - 114) <= 1u )
                            {
                              if ( (unsigned __int64)v145 <= v127 )
                              {
                                LOBYTE(v131) = 1;
                                v136 = v133[2];
                                v135 = v133[1] & 0xF;
                                v137 = v133[3];
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)v145 <= v127 )
                              {
                                v135 = v133[2] & 0xF;
                                v146 = v134;
                                if ( (unsigned int)(unsigned __int8)v133[7] + 8 <= v134 )
                                  v146 = (unsigned __int8)v133[7] + 8;
                                v127 = (unsigned __int64)(v133 + 13);
                                v131 = (unsigned __int64)&v133[v146];
                                if ( (unsigned __int64)(v133 + 13) > v131 )
                                  v435 = 0;
                                else
                                  v435 = v133[12];
                                if ( (unsigned __int64)(v133 + 14) > v131 )
                                  v497 = 0;
                                else
                                  v497 = *(_BYTE *)v127;
                                LOBYTE(v131) = 1;
                              }
                              v136 = v435;
                              v137 = v497;
                            }
                            if ( (_BYTE)v131 )
                            {
                              LOBYTE(v3) = v136;
                              v147 = v137;
                            }
                            else
                            {
LABEL_401:
                              v135 = 0;
                              v147 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              v127,
                              v131,
                              &v525,
                              a2,
                              *(_DWORD *)(a2 + 48),
                              v144,
                              v132,
                              v135,
                              v3,
                              v147,
                              a2);
                          }
                        }
                        goto LABEL_406;
                      }
                    }
                    if ( v449 )
                      goto LABEL_378;
                  }
                }
                if ( ++v139 >= v476 )
                  goto LABEL_378;
              }
            case 0x1B:
              if ( *(_BYTE *)(v128 + 1) == 7 && !*(_DWORD *)(v128 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v129 = *(unsigned int **)(a2 + 56);
                  if ( v129 )
                    v3 = *v129;
                  McTemplateK0pqd_EtwWriteTransfer(v127, v128, &v525, a2, v3, *(_DWORD *)(a2 + 48));
                }
                goto LABEL_406;
              }
              if ( (byte_140171462 & 0x20) == 0 )
              {
LABEL_406:
                IofCompleteRequest((PIRP)a2, 0);
                return v470;
              }
              v130 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_406;
          }
          McTemplateK0pd_EtwWriteTransfer(v127, v130, &v525, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_406;
        }
        if ( v124 )
          return v125;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v8 )
          goto LABEL_472;
        v526 = 0LL;
        IoGetActivityIdIrp(a2, &v526);
        v149 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v149 )
        {
          case 0xE:
            if ( (byte_140171462 & 8) == 0 )
              goto LABEL_472;
            v151 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140171461 >= 0 )
              goto LABEL_471;
            v152 = *(_QWORD *)(v149 + 8);
            v153 = 0;
            v154 = 0LL;
            v436 = 0;
            v155 = 0;
            v498 = 0;
            v156 = 0;
            v157 = 0;
            v158 = 0;
            if ( *(_BYTE *)(v152 + 2) != 40 )
            {
              v164 = *(_BYTE *)(v152 + 72);
              v154 = *(_BYTE **)(v152 + 32);
              v155 = *(_BYTE *)(v152 + 11);
              v153 = *(_BYTE *)(v152 + 4);
              if ( !*(_BYTE *)(v152 + 2) )
                goto LABEL_449;
              goto LABEL_471;
            }
            v159 = 0LL;
            v450 = 0;
            if ( *(_DWORD *)(v152 + 20) )
              goto LABEL_471;
            v160 = 0;
            v477 = *(_DWORD *)(v152 + 56);
            if ( !v477 )
              goto LABEL_446;
            while ( 1 )
            {
              v148 = *(unsigned int *)(v152 + 4LL * v160 + 120);
              if ( (unsigned int)v148 >= 0x80 )
              {
                v161 = *(unsigned int *)(v152 + 16);
                if ( (unsigned int)v148 < (unsigned int)v161 )
                {
                  v162 = (unsigned int)v148;
                  v163 = *(_DWORD *)(v148 + v152) - 64;
                  if ( v163 )
                  {
                    v148 = (unsigned int)(v163 - 1);
                    if ( (_DWORD)v148 )
                    {
                      if ( (_DWORD)v148 == 1 )
                      {
                        v148 = v162 + 40;
                        if ( v162 + 40 <= v161 )
                        {
                          if ( *(_DWORD *)(v162 + v152 + 12) )
                            v159 = (char *)(v162 + v152 + 32);
                          v154 = *(_BYTE **)(v162 + v152 + 24);
                          goto LABEL_445;
                        }
                      }
                    }
                    else
                    {
                      v148 = v162 + 56;
                      if ( v162 + 56 <= v161 )
                      {
                        v450 = 1;
                        if ( *(_BYTE *)(v162 + v152 + 10) )
                          v159 = (char *)(v162 + v152 + 24);
                        v153 = *(_BYTE *)(v162 + v152 + 8);
                        v154 = *(_BYTE **)(v162 + v152 + 16);
                        v155 = *(_BYTE *)(v162 + v152 + 9);
                      }
                    }
                  }
                  else
                  {
                    v148 = v162 + 40;
                    if ( v162 + 40 <= v161 )
                    {
                      if ( *(_BYTE *)(v162 + v152 + 10) )
                        v159 = (char *)(v162 + v152 + 24);
                      v154 = *(_BYTE **)(v162 + v152 + 16);
LABEL_445:
                      v155 = *(_BYTE *)(v162 + v152 + 9);
                      v153 = *(_BYTE *)(v162 + v152 + 8);
LABEL_446:
                      if ( v159 )
                      {
                        v164 = *v159;
                        v158 = 0;
                        v157 = 0;
LABEL_449:
                        LOBYTE(v148) = v164 - 8;
                        if ( (v148 & 0x5D) == 0 )
                        {
                          v165 = *(_BYTE *)(v152 + 3);
                          if ( v165 == 1 || !v154 || !v155 )
                            goto LABEL_469;
                          LOBYTE(v152) = 0;
                          v148 = (unsigned __int64)&v154[v155];
                          v166 = v154 + 8;
                          if ( (unsigned __int8)((*v154 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v166 <= v148 )
                            {
                              LOBYTE(v152) = 1;
                              v157 = v154[2];
                              v156 = v154[1] & 0xF;
                              v158 = v154[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v166 <= v148 )
                            {
                              v156 = v154[2] & 0xF;
                              v167 = v155;
                              if ( (unsigned int)(unsigned __int8)v154[7] + 8 <= v155 )
                                v167 = (unsigned __int8)v154[7] + 8;
                              v148 = (unsigned __int64)(v154 + 13);
                              v152 = (unsigned __int64)&v154[v167];
                              if ( (unsigned __int64)(v154 + 13) > v152 )
                                v436 = 0;
                              else
                                v436 = v154[12];
                              if ( (unsigned __int64)(v154 + 14) > v152 )
                                v498 = 0;
                              else
                                v498 = *(_BYTE *)v148;
                              LOBYTE(v152) = 1;
                            }
                            v157 = v436;
                            v158 = v498;
                          }
                          if ( (_BYTE)v152 )
                          {
                            LOBYTE(v3) = v157;
                            v168 = v158;
                          }
                          else
                          {
LABEL_469:
                            v156 = 0;
                            v168 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v148,
                            v152,
                            &v526,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v165,
                            v153,
                            v156,
                            v3,
                            v168,
                            a2);
                        }
                      }
LABEL_471:
                      v125 = v470;
LABEL_472:
                      IofCompleteRequest((PIRP)a2, 0);
                      return v125;
                    }
                  }
                  if ( v450 )
                    goto LABEL_446;
                }
              }
              if ( ++v160 >= v477 )
                goto LABEL_446;
            }
          case 0x1B:
            if ( *(_BYTE *)(v149 + 1) == 7 && !*(_DWORD *)(v149 + 8) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v150 = *(unsigned int **)(a2 + 56);
                if ( v150 )
                  v3 = *v150;
                McTemplateK0pqd_EtwWriteTransfer(v148, v149, &v526, a2, v3, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_472;
            }
            if ( (byte_140171462 & 0x20) == 0 )
              goto LABEL_472;
            v151 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_472;
        }
        McTemplateK0pd_EtwWriteTransfer(v148, v151, &v526, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_472;
      }
      result = NvmeNamespaceExecuteScsiSrb(v5, v7, a2);
      v516 = result;
      v73 = result;
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v7 + 3) = RaidNtStatusToSrbStatus(result);
        *(_QWORD *)(a2 + 56) = 0LL;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = v73;
        if ( v8 )
          goto LABEL_270;
        v523 = 0LL;
        IoGetActivityIdIrp(a2, &v523);
        v75 = *(_QWORD *)(a2 + 184);
        switch ( *(_BYTE *)v75 )
        {
          case 0xE:
            if ( (byte_140171462 & 8) == 0 )
              goto LABEL_270;
            v77 = &EventNonReadWriteRequestComplete;
            break;
          case 0xF:
            if ( byte_140171461 >= 0 )
              goto LABEL_270;
            v78 = *(_QWORD *)(v75 + 8);
            v79 = 0;
            v80 = 0LL;
            v434 = 0;
            v81 = 0;
            v495 = 0;
            v82 = 0;
            v83 = 0;
            v84 = 0;
            if ( *(_BYTE *)(v78 + 2) != 40 )
            {
              v90 = *(_BYTE *)(v78 + 72);
              v80 = *(_BYTE **)(v78 + 32);
              v81 = *(_BYTE *)(v78 + 11);
              v79 = *(_BYTE *)(v78 + 4);
              if ( !*(_BYTE *)(v78 + 2) )
                goto LABEL_245;
              goto LABEL_270;
            }
            v85 = 0LL;
            v447 = 0;
            if ( *(_DWORD *)(v78 + 20) )
              goto LABEL_270;
            v86 = 0;
            v474 = *(_DWORD *)(v78 + 56);
            if ( !v474 )
              goto LABEL_242;
            while ( 1 )
            {
              v74 = *(unsigned int *)(v78 + 4LL * v86 + 120);
              if ( (unsigned int)v74 >= 0x80 )
              {
                v87 = *(unsigned int *)(v78 + 16);
                if ( (unsigned int)v74 < (unsigned int)v87 )
                {
                  v88 = (unsigned int)v74;
                  v89 = *(_DWORD *)(v78 + v74) - 64;
                  if ( v89 )
                  {
                    v74 = (unsigned int)(v89 - 1);
                    if ( (_DWORD)v74 )
                    {
                      if ( (_DWORD)v74 == 1 )
                      {
                        v74 = v88 + 40;
                        if ( v88 + 40 <= v87 )
                        {
                          if ( *(_DWORD *)(v78 + v88 + 12) )
                            v85 = (char *)(v88 + v78 + 32);
                          v80 = *(_BYTE **)(v78 + v88 + 24);
                          goto LABEL_241;
                        }
                      }
                    }
                    else
                    {
                      v74 = v88 + 56;
                      if ( v88 + 56 <= v87 )
                      {
                        v447 = 1;
                        if ( *(_BYTE *)(v78 + v88 + 10) )
                          v85 = (char *)(v88 + v78 + 24);
                        v79 = *(_BYTE *)(v78 + v88 + 8);
                        v80 = *(_BYTE **)(v78 + v88 + 16);
                        v81 = *(_BYTE *)(v78 + v88 + 9);
                      }
                    }
                  }
                  else
                  {
                    v74 = v88 + 40;
                    if ( v88 + 40 <= v87 )
                    {
                      if ( *(_BYTE *)(v78 + v88 + 10) )
                        v85 = (char *)(v88 + v78 + 24);
                      v80 = *(_BYTE **)(v78 + v88 + 16);
LABEL_241:
                      v81 = *(_BYTE *)(v78 + v88 + 9);
                      v79 = *(_BYTE *)(v78 + v88 + 8);
LABEL_242:
                      if ( v85 )
                      {
                        v90 = *v85;
                        v84 = 0;
                        v83 = 0;
LABEL_245:
                        LOBYTE(v74) = v90 - 8;
                        if ( (v74 & 0x5D) == 0 )
                        {
                          v91 = *(_BYTE *)(v78 + 3);
                          if ( v91 == 1 || !v80 || !v81 )
                            goto LABEL_265;
                          LOBYTE(v78) = 0;
                          v74 = (unsigned __int64)&v80[v81];
                          v92 = v80 + 8;
                          if ( (unsigned __int8)((*v80 & 0x7F) - 114) <= 1u )
                          {
                            if ( (unsigned __int64)v92 <= v74 )
                            {
                              LOBYTE(v78) = 1;
                              v83 = v80[2];
                              v82 = v80[1] & 0xF;
                              v84 = v80[3];
                            }
                          }
                          else
                          {
                            if ( (unsigned __int64)v92 <= v74 )
                            {
                              v82 = v80[2] & 0xF;
                              v93 = v81;
                              if ( (unsigned int)(unsigned __int8)v80[7] + 8 <= v81 )
                                v93 = (unsigned __int8)v80[7] + 8;
                              v74 = (unsigned __int64)(v80 + 13);
                              v78 = (unsigned __int64)&v80[v93];
                              if ( (unsigned __int64)(v80 + 13) > v78 )
                                v434 = 0;
                              else
                                v434 = v80[12];
                              if ( (unsigned __int64)(v80 + 14) > v78 )
                                v495 = 0;
                              else
                                v495 = *(_BYTE *)v74;
                              LOBYTE(v78) = 1;
                            }
                            v83 = v434;
                            v84 = v495;
                          }
                          if ( (_BYTE)v78 )
                          {
                            LOBYTE(v3) = v83;
                            v94 = v84;
                          }
                          else
                          {
LABEL_265:
                            v82 = 0;
                            v94 = 0;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v74,
                            v78,
                            &v523,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v91,
                            v79,
                            v82,
                            v3,
                            v94,
                            a2);
                        }
                      }
                      goto LABEL_270;
                    }
                  }
                  if ( v447 )
                    goto LABEL_242;
                }
              }
              if ( ++v86 >= v474 )
                goto LABEL_242;
            }
          case 0x1B:
            if ( *(_BYTE *)(v75 + 1) == 7 && !*(_DWORD *)(v75 + 8) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v76 = *(unsigned int **)(a2 + 56);
                if ( v76 )
                  v3 = *v76;
                McTemplateK0pqd_EtwWriteTransfer(v74, v75, &v523, a2, v3, *(_DWORD *)(a2 + 48));
              }
              goto LABEL_270;
            }
            if ( (byte_140171462 & 0x20) == 0 )
            {
LABEL_270:
              IofCompleteRequest((PIRP)a2, 0);
              return v516;
            }
            v77 = &EventPnpRequestComplete;
            break;
          default:
            goto LABEL_270;
        }
        McTemplateK0pd_EtwWriteTransfer(v74, v77, &v523, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_270;
      }
      if ( (_DWORD)result )
        return result;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v8 )
        goto LABEL_690;
      v524 = 0LL;
      IoGetActivityIdIrp(a2, &v524);
      v96 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v96 != 14 )
      {
        if ( *(_BYTE *)v96 == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_690;
          v102 = *(_QWORD *)(v96 + 8);
          v103 = 0;
          v104 = 0LL;
          v496 = 0;
          v105 = 0;
          v106 = 0;
          v107 = 0;
          v108 = 0;
          if ( *(_BYTE *)(v102 + 2) == 40 )
          {
            v109 = 0LL;
            v448 = 0;
            if ( *(_DWORD *)(v102 + 20) )
              goto LABEL_690;
            v110 = 0LL;
            v469 = 0;
            v475 = *(_DWORD *)(v102 + 56);
            if ( !v475 )
              goto LABEL_312;
            while ( 1 )
            {
              v111 = *(unsigned int *)(v102 + 4 * v110 + 120);
              if ( (unsigned int)v111 >= 0x80 )
              {
                v112 = *(unsigned int *)(v102 + 16);
                if ( (unsigned int)v111 < (unsigned int)v112 )
                {
                  v113 = (unsigned int)v111;
                  v114 = *(_DWORD *)(v102 + v111) - 64;
                  if ( v114 )
                  {
                    v115 = v114 - 1;
                    if ( v115 )
                    {
                      if ( v115 == 1 && v113 + 40 <= v112 )
                      {
                        if ( *(_DWORD *)(v102 + v113 + 12) )
                          v109 = (char *)(v113 + v102 + 32);
                        v104 = *(_BYTE **)(v102 + v113 + 24);
                        goto LABEL_311;
                      }
                    }
                    else if ( v113 + 56 <= v112 )
                    {
                      v448 = 1;
                      if ( *(_BYTE *)(v102 + v113 + 10) )
                        v109 = (char *)(v113 + v102 + 24);
                      v103 = *(_BYTE *)(v102 + v113 + 8);
                      v104 = *(_BYTE **)(v102 + v113 + 16);
                      v105 = *(_BYTE *)(v102 + v113 + 9);
                    }
                  }
                  else if ( v113 + 40 <= v112 )
                  {
                    if ( *(_BYTE *)(v102 + v113 + 10) )
                      v109 = (char *)(v113 + v102 + 24);
                    v104 = *(_BYTE **)(v102 + v113 + 16);
LABEL_311:
                    v105 = *(_BYTE *)(v102 + v113 + 9);
                    v103 = *(_BYTE *)(v102 + v113 + 8);
LABEL_312:
                    if ( v109 )
                    {
                      v116 = *v109;
                      v108 = 0;
                      goto LABEL_315;
                    }
                    goto LABEL_690;
                  }
                  if ( v448 )
                    goto LABEL_312;
                }
              }
              v110 = (unsigned int)(v469 + 1);
              v469 = v110;
              if ( (unsigned int)v110 >= v475 )
                goto LABEL_312;
            }
          }
          v116 = *(_BYTE *)(v102 + 72);
          v104 = *(_BYTE **)(v102 + 32);
          v105 = *(_BYTE *)(v102 + 11);
          v103 = *(_BYTE *)(v102 + 4);
          if ( *(_BYTE *)(v102 + 2) )
            goto LABEL_690;
LABEL_315:
          if ( ((v116 - 8) & 0x5D) != 0 )
          {
LABEL_690:
            v9 = 0;
            goto LABEL_691;
          }
          v117 = *(_BYTE *)(v102 + 3);
          if ( v117 == 1 || !v104 || !v105 )
            goto LABEL_334;
          LOBYTE(v102) = 0;
          v118 = &v104[v105];
          v119 = v104 + 8;
          if ( (unsigned __int8)((*v104 & 0x7F) - 114) <= 1u )
          {
            if ( v119 <= v118 )
            {
              LOBYTE(v102) = 1;
              v107 = v104[2];
              v106 = v104[1] & 0xF;
              v108 = v104[3];
            }
          }
          else
          {
            if ( v119 <= v118 )
            {
              v106 = v104[2] & 0xF;
              v120 = v105;
              if ( (unsigned int)(unsigned __int8)v104[7] + 8 <= v105 )
                v120 = (unsigned __int8)v104[7] + 8;
              v102 = (unsigned __int64)&v104[v120];
              if ( (unsigned __int64)(v104 + 13) <= v102 )
                v107 = v104[12];
              if ( (unsigned __int64)(v104 + 14) > v102 )
                v496 = 0;
              else
                v496 = v104[13];
              LOBYTE(v102) = 1;
            }
            v108 = v496;
          }
          if ( (_BYTE)v102 )
          {
            v121 = v107;
            v122 = v108;
          }
          else
          {
LABEL_334:
            v106 = 0;
            v121 = 0;
            v122 = 0LL;
          }
          v123 = (const GUID *)&v524;
          goto LABEL_685;
        }
        if ( *(_BYTE *)v96 != 27 )
          goto LABEL_690;
        if ( *(_BYTE *)(v96 + 1) == 7 && !*(_DWORD *)(v96 + 8) )
        {
          if ( (byte_140171462 & 0x40) == 0 )
            goto LABEL_690;
          v97 = *(unsigned int **)(a2 + 56);
          if ( v97 )
            v98 = *v97;
          else
            v98 = 0LL;
          v99 = (const GUID *)&v524;
          goto LABEL_283;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_690;
        v100 = (const GUID *)&v524;
LABEL_286:
        v101 = &EventPnpRequestComplete;
LABEL_689:
        McTemplateK0pd_EtwWriteTransfer(v95, v101, v100, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_690;
      }
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_690;
      v100 = (const GUID *)&v524;
      goto LABEL_688;
    }
    if ( v33 == 10 )
    {
      if ( v6 )
      {
        result = NvmeNamepspaceExecuteNvmeSrb(v5, a2);
        v472 = result;
        v9 = result;
        if ( (int)result < 0 )
        {
          v185 = RaidNtStatusToSrbStatus(result);
          if ( *(char *)(v7 + 3) < 0 )
            v185 |= 0x80u;
          *(_BYTE *)(v7 + 3) = v185;
          *(_QWORD *)(a2 + 56) = 0LL;
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = v9;
          if ( v8 )
            goto LABEL_691;
          v528 = 0LL;
          IoGetActivityIdIrp(a2, &v528);
          v11 = *(_QWORD *)(a2 + 184);
          if ( *(_BYTE *)v11 != 14 )
          {
            if ( *(_BYTE *)v11 == 15 )
            {
              if ( (byte_140171461 & 0x80) == 0 )
                goto LABEL_691;
              v187 = *(_QWORD *)(v11 + 8);
              v188 = 0;
              v189 = 0LL;
              v500 = 0;
              v190 = 0;
              v191 = 0;
              v192 = 0;
              v193 = 0;
              if ( *(_BYTE *)(v187 + 2) != 40 )
              {
                v199 = *(_BYTE *)(v187 + 72);
                v189 = *(_BYTE **)(v187 + 32);
                v190 = *(_BYTE *)(v187 + 11);
                v188 = *(_BYTE *)(v187 + 4);
                if ( !*(_BYTE *)(v187 + 2) )
                  goto LABEL_593;
                goto LABEL_614;
              }
              v194 = 0LL;
              v452 = 0;
              if ( *(_DWORD *)(v187 + 20) )
                goto LABEL_614;
              v10 = *(unsigned int *)(v187 + 56);
              v195 = 0LL;
              v517 = 0;
              v479 = v10;
              if ( !(_DWORD)v10 )
                goto LABEL_590;
              while ( 1 )
              {
                v10 = *(unsigned int *)(v187 + 4 * v195 + 120);
                if ( (unsigned int)v10 >= 0x80 )
                {
                  v196 = *(unsigned int *)(v187 + 16);
                  if ( (unsigned int)v10 < (unsigned int)v196 )
                  {
                    v197 = (unsigned int)v10;
                    v198 = *(_DWORD *)(v187 + v10) - 64;
                    if ( v198 )
                    {
                      v10 = (unsigned int)(v198 - 1);
                      if ( (_DWORD)v10 )
                      {
                        if ( (_DWORD)v10 == 1 )
                        {
                          v10 = v197 + 40;
                          if ( v197 + 40 <= v196 )
                          {
                            if ( *(_DWORD *)(v187 + v197 + 12) )
                              v194 = (char *)(v197 + v187 + 32);
                            v189 = *(_BYTE **)(v187 + v197 + 24);
                            goto LABEL_589;
                          }
                        }
                      }
                      else
                      {
                        v10 = v197 + 56;
                        if ( v197 + 56 <= v196 )
                        {
                          v452 = 1;
                          if ( *(_BYTE *)(v187 + v197 + 10) )
                            v194 = (char *)(v197 + v187 + 24);
                          v188 = *(_BYTE *)(v187 + v197 + 8);
                          v189 = *(_BYTE **)(v187 + v197 + 16);
                          v190 = *(_BYTE *)(v187 + v197 + 9);
                        }
                      }
                    }
                    else
                    {
                      v10 = v197 + 40;
                      if ( v197 + 40 <= v196 )
                      {
                        if ( *(_BYTE *)(v187 + v197 + 10) )
                          v194 = (char *)(v197 + v187 + 24);
                        v189 = *(_BYTE **)(v187 + v197 + 16);
LABEL_589:
                        v190 = *(_BYTE *)(v187 + v197 + 9);
                        v188 = *(_BYTE *)(v187 + v197 + 8);
LABEL_590:
                        if ( v194 )
                        {
                          v199 = *v194;
                          v193 = 0;
LABEL_593:
                          LOBYTE(v10) = v199 - 8;
                          if ( (v10 & 0x5D) == 0 )
                          {
                            v200 = *(_BYTE *)(v187 + 3);
                            if ( v200 == 1 || !v189 || !v190 )
                              goto LABEL_612;
                            LOBYTE(v187) = 0;
                            v10 = (unsigned __int64)&v189[v190];
                            v201 = v189 + 8;
                            if ( (unsigned __int8)((*v189 & 0x7F) - 114) <= 1u )
                            {
                              if ( (unsigned __int64)v201 <= v10 )
                              {
                                LOBYTE(v187) = 1;
                                v192 = v189[2];
                                v191 = v189[1] & 0xF;
                                v193 = v189[3];
                              }
                            }
                            else
                            {
                              if ( (unsigned __int64)v201 <= v10 )
                              {
                                v191 = v189[2] & 0xF;
                                v202 = v190;
                                if ( (unsigned int)(unsigned __int8)v189[7] + 8 <= v190 )
                                  v202 = (unsigned __int8)v189[7] + 8;
                                v10 = (unsigned __int64)(v189 + 13);
                                v187 = (unsigned __int64)&v189[v202];
                                if ( (unsigned __int64)(v189 + 13) <= v187 )
                                  v192 = v189[12];
                                if ( (unsigned __int64)(v189 + 14) > v187 )
                                  v500 = 0;
                                else
                                  v500 = *(_BYTE *)v10;
                                LOBYTE(v187) = 1;
                              }
                              v193 = v500;
                            }
                            if ( (_BYTE)v187 )
                            {
                              LOBYTE(v3) = v192;
                              v203 = v193;
                            }
                            else
                            {
LABEL_612:
                              v191 = 0;
                              v203 = 0;
                            }
                            McTemplateK0pduuuuup_EtwWriteTransfer(
                              v10,
                              v187,
                              &v528,
                              a2,
                              *(_DWORD *)(a2 + 48),
                              v200,
                              v188,
                              v191,
                              v3,
                              v203,
                              a2);
                          }
                        }
LABEL_614:
                        v9 = v472;
LABEL_691:
                        IofCompleteRequest((PIRP)a2, 0);
                        return v9;
                      }
                    }
                    if ( v452 )
                      goto LABEL_590;
                  }
                }
                v195 = (unsigned int)(v517 + 1);
                v517 = v195;
                if ( (unsigned int)v195 >= v479 )
                  goto LABEL_590;
              }
            }
            if ( *(_BYTE *)v11 != 27 )
              goto LABEL_691;
            if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
            {
              if ( (byte_140171462 & 0x40) == 0 )
                goto LABEL_691;
              v186 = *(unsigned int **)(a2 + 56);
              if ( v186 )
                v3 = *v186;
              v13 = &v528;
              goto LABEL_12;
            }
            if ( (byte_140171462 & 0x20) == 0 )
              goto LABEL_691;
            v14 = &v528;
            goto LABEL_495;
          }
          if ( (byte_140171462 & 8) == 0 )
            goto LABEL_691;
          v14 = &v528;
          goto LABEL_145;
        }
        if ( (_DWORD)result )
          return result;
        v204 = *(_BYTE *)(v7 + 3);
        if ( *(_BYTE *)(v7 + 2) == 40 )
        {
          v205 = ((v204 >> 7) & 0x80) + 1;
        }
        else
        {
          v206 = 1;
          if ( v204 < 0 )
            v206 = -127;
          v205 = v206;
        }
        *(_BYTE *)(v7 + 3) = v205;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
        v8 = StorEtwLoggingEnabled == 0;
        *(_BYTE *)(a2 + 141) = -84;
        *(_DWORD *)(a2 + 48) = 0;
        if ( v8 )
          goto LABEL_690;
        v529 = 0LL;
        IoGetActivityIdIrp(a2, &v529);
        v96 = *(_QWORD *)(a2 + 184);
        if ( *(_BYTE *)v96 != 14 )
        {
          if ( *(_BYTE *)v96 == 15 )
          {
            if ( (byte_140171461 & 0x80) == 0 )
              goto LABEL_690;
            v102 = *(_QWORD *)(v96 + 8);
            v103 = 0;
            v208 = 0LL;
            v501 = 0;
            v209 = 0;
            v106 = 0;
            v210 = 0;
            v211 = 0;
            if ( *(_BYTE *)(v102 + 2) != 40 )
            {
              v219 = *(_BYTE *)(v102 + 72);
              v208 = *(_BYTE **)(v102 + 32);
              v209 = *(_BYTE *)(v102 + 11);
              v103 = *(_BYTE *)(v102 + 4);
              if ( *(_BYTE *)(v102 + 2) )
                goto LABEL_690;
              goto LABEL_664;
            }
            v212 = 0LL;
            v453 = 0;
            if ( *(_DWORD *)(v102 + 20) )
              goto LABEL_690;
            v213 = 0LL;
            v518 = 0;
            v480 = *(_DWORD *)(v102 + 56);
            if ( !v480 )
              goto LABEL_661;
            while ( 1 )
            {
              v214 = *(unsigned int *)(v102 + 4 * v213 + 120);
              if ( (unsigned int)v214 >= 0x80 )
              {
                v215 = *(unsigned int *)(v102 + 16);
                if ( (unsigned int)v214 < (unsigned int)v215 )
                {
                  v216 = (unsigned int)v214;
                  v217 = *(_DWORD *)(v214 + v102) - 64;
                  if ( v217 )
                  {
                    v218 = v217 - 1;
                    if ( v218 )
                    {
                      if ( v218 == 1 && v216 + 40 <= v215 )
                      {
                        if ( *(_DWORD *)(v216 + v102 + 12) )
                          v212 = (char *)(v216 + v102 + 32);
                        v208 = *(_BYTE **)(v216 + v102 + 24);
                        goto LABEL_660;
                      }
                    }
                    else if ( v216 + 56 <= v215 )
                    {
                      v453 = 1;
                      if ( *(_BYTE *)(v216 + v102 + 10) )
                        v212 = (char *)(v216 + v102 + 24);
                      v103 = *(_BYTE *)(v216 + v102 + 8);
                      v208 = *(_BYTE **)(v216 + v102 + 16);
                      v209 = *(_BYTE *)(v216 + v102 + 9);
                    }
                  }
                  else if ( v216 + 40 <= v215 )
                  {
                    if ( *(_BYTE *)(v216 + v102 + 10) )
                      v212 = (char *)(v216 + v102 + 24);
                    v208 = *(_BYTE **)(v216 + v102 + 16);
LABEL_660:
                    v209 = *(_BYTE *)(v216 + v102 + 9);
                    v103 = *(_BYTE *)(v216 + v102 + 8);
LABEL_661:
                    if ( !v212 )
                      goto LABEL_690;
                    v219 = *v212;
                    v211 = 0;
LABEL_664:
                    if ( ((v219 - 8) & 0x5D) != 0 )
                      goto LABEL_690;
                    v117 = *(_BYTE *)(v102 + 3);
                    if ( v117 == 1 || !v208 || !v209 )
                      goto LABEL_683;
                    LOBYTE(v102) = 0;
                    v220 = &v208[v209];
                    v221 = v208 + 8;
                    if ( (unsigned __int8)((*v208 & 0x7F) - 114) <= 1u )
                    {
                      if ( v221 <= v220 )
                      {
                        LOBYTE(v102) = 1;
                        v210 = v208[2];
                        v106 = v208[1] & 0xF;
                        v211 = v208[3];
                      }
                    }
                    else
                    {
                      if ( v221 <= v220 )
                      {
                        v106 = v208[2] & 0xF;
                        v222 = v209;
                        if ( (unsigned int)(unsigned __int8)v208[7] + 8 <= v209 )
                          v222 = (unsigned __int8)v208[7] + 8;
                        v102 = (unsigned __int64)&v208[v222];
                        if ( (unsigned __int64)(v208 + 13) <= v102 )
                          v210 = v208[12];
                        if ( (unsigned __int64)(v208 + 14) > v102 )
                          v501 = 0;
                        else
                          v501 = v208[13];
                        LOBYTE(v102) = 1;
                      }
                      v211 = v501;
                    }
                    if ( (_BYTE)v102 )
                    {
                      v121 = v210;
                      v122 = v211;
                    }
                    else
                    {
LABEL_683:
                      v106 = 0;
                      v121 = 0;
                      v122 = 0LL;
                    }
                    v123 = (const GUID *)&v529;
LABEL_685:
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v122,
                      v102,
                      v123,
                      a2,
                      *(_DWORD *)(a2 + 48),
                      v117,
                      v103,
                      v106,
                      v121,
                      v122,
                      a2);
                    goto LABEL_690;
                  }
                  if ( v453 )
                    goto LABEL_661;
                }
              }
              v213 = (unsigned int)(v518 + 1);
              v518 = v213;
              if ( (unsigned int)v213 >= v480 )
                goto LABEL_661;
            }
          }
          if ( *(_BYTE *)v96 != 27 )
            goto LABEL_690;
          if ( *(_BYTE *)(v96 + 1) == 7 && !*(_DWORD *)(v96 + 8) )
          {
            if ( (byte_140171462 & 0x40) == 0 )
              goto LABEL_690;
            v207 = *(unsigned int **)(a2 + 56);
            if ( v207 )
              v98 = *v207;
            else
              v98 = 0LL;
            v99 = (const GUID *)&v529;
LABEL_283:
            McTemplateK0pqd_EtwWriteTransfer(v98, v96, v99, a2, v98, *(_DWORD *)(a2 + 48));
            goto LABEL_690;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_690;
          v100 = (const GUID *)&v529;
          goto LABEL_286;
        }
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_690;
        v100 = (const GUID *)&v529;
LABEL_688:
        v101 = &EventNonReadWriteRequestComplete;
        goto LABEL_689;
      }
      v169 = *(_BYTE *)(v7 + 3);
      if ( *(_BYTE *)(v7 + 2) == 40 )
      {
        v170 = ((v169 >> 7) & 0x80) + 6;
      }
      else
      {
        v171 = 6;
        if ( v169 < 0 )
          v171 = -122;
        v170 = v171;
      }
      *(_BYTE *)(v7 + 3) = v170;
      *(_QWORD *)(a2 + 56) = 0LL;
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
      v8 = StorEtwLoggingEnabled == 0;
      v9 = -1073741811;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = -1073741811;
      if ( v8 )
        goto LABEL_691;
      v527 = 0LL;
      IoGetActivityIdIrp(a2, &v527);
      v11 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v11 == 14 )
      {
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_691;
        v14 = (const GUID *)&v527;
        goto LABEL_145;
      }
      if ( *(_BYTE *)v11 == 15 )
      {
        if ( byte_140171461 < 0 )
        {
          v15 = *(_QWORD *)(v11 + 8);
          v16 = 0;
          v173 = 0LL;
          v499 = 0;
          v174 = 0;
          v19 = 0;
          v175 = 0;
          v176 = 0;
          if ( *(_BYTE *)(v15 + 2) != 40 )
          {
            v182 = *(_BYTE *)(v15 + 72);
            v173 = *(_BYTE **)(v15 + 32);
            v174 = *(_BYTE *)(v15 + 11);
            v16 = *(_BYTE *)(v15 + 4);
            if ( *(_BYTE *)(v15 + 2) )
              goto LABEL_547;
            goto LABEL_525;
          }
          v177 = 0LL;
          v451 = 0;
          if ( *(_DWORD *)(v15 + 20) )
            goto LABEL_547;
          v10 = *(unsigned int *)(v15 + 56);
          v178 = 0LL;
          v471 = 0;
          v478 = v10;
          if ( !(_DWORD)v10 )
            goto LABEL_522;
          while ( 1 )
          {
            v10 = *(unsigned int *)(v15 + 4 * v178 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v179 = *(unsigned int *)(v15 + 16);
              if ( (unsigned int)v10 < (unsigned int)v179 )
              {
                v180 = (unsigned int)v10;
                v181 = *(_DWORD *)(v10 + v15) - 64;
                if ( v181 )
                {
                  v10 = (unsigned int)(v181 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v180 + 40;
                      if ( v180 + 40 <= v179 )
                      {
                        if ( *(_DWORD *)(v180 + v15 + 12) )
                          v177 = (char *)(v180 + v15 + 32);
                        v173 = *(_BYTE **)(v180 + v15 + 24);
                        goto LABEL_521;
                      }
                    }
                  }
                  else
                  {
                    v10 = v180 + 56;
                    if ( v180 + 56 <= v179 )
                    {
                      v451 = 1;
                      if ( *(_BYTE *)(v180 + v15 + 10) )
                        v177 = (char *)(v180 + v15 + 24);
                      v16 = *(_BYTE *)(v180 + v15 + 8);
                      v173 = *(_BYTE **)(v180 + v15 + 16);
                      v174 = *(_BYTE *)(v180 + v15 + 9);
                    }
                  }
                }
                else
                {
                  v10 = v180 + 40;
                  if ( v180 + 40 <= v179 )
                  {
                    if ( *(_BYTE *)(v180 + v15 + 10) )
                      v177 = (char *)(v180 + v15 + 24);
                    v173 = *(_BYTE **)(v180 + v15 + 16);
LABEL_521:
                    v174 = *(_BYTE *)(v180 + v15 + 9);
                    v16 = *(_BYTE *)(v180 + v15 + 8);
LABEL_522:
                    if ( !v177 )
                      goto LABEL_547;
                    v182 = *v177;
                    v176 = 0;
LABEL_525:
                    LOBYTE(v10) = v182 - 8;
                    if ( (v10 & 0x5D) != 0 )
                      goto LABEL_547;
                    v28 = *(_BYTE *)(v15 + 3);
                    if ( v28 == 1 || !v173 || !v174 )
                      goto LABEL_544;
                    LOBYTE(v15) = 0;
                    v10 = (unsigned __int64)&v173[v174];
                    v183 = v173 + 8;
                    if ( (unsigned __int8)((*v173 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v183 <= v10 )
                      {
                        LOBYTE(v15) = 1;
                        v175 = v173[2];
                        v19 = v173[1] & 0xF;
                        v176 = v173[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v183 <= v10 )
                      {
                        v19 = v173[2] & 0xF;
                        v184 = v174;
                        if ( (unsigned int)(unsigned __int8)v173[7] + 8 <= v174 )
                          v184 = (unsigned __int8)v173[7] + 8;
                        v10 = (unsigned __int64)(v173 + 13);
                        v15 = (unsigned __int64)&v173[v184];
                        if ( (unsigned __int64)(v173 + 13) <= v15 )
                          v175 = v173[12];
                        if ( (unsigned __int64)(v173 + 14) > v15 )
                          v499 = 0;
                        else
                          v499 = *(_BYTE *)v10;
                        LOBYTE(v15) = 1;
                      }
                      v176 = v499;
                    }
                    if ( (_BYTE)v15 )
                    {
                      LOBYTE(v3) = v175;
                      v31 = v176;
                    }
                    else
                    {
LABEL_544:
                      v19 = 0;
                      v31 = 0;
                    }
                    v32 = (const GUID *)&v527;
LABEL_546:
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v10,
                      v15,
                      v32,
                      a2,
                      *(_DWORD *)(a2 + 48),
                      v28,
                      v16,
                      v19,
                      v3,
                      v31,
                      a2);
                    goto LABEL_547;
                  }
                }
                if ( v451 )
                  goto LABEL_522;
              }
            }
            v178 = (unsigned int)(v471 + 1);
            v471 = v178;
            if ( (unsigned int)v178 >= v478 )
              goto LABEL_522;
          }
        }
        goto LABEL_691;
      }
      if ( *(_BYTE *)v11 != 27 )
        goto LABEL_691;
      if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
      {
        if ( (byte_140171462 & 0x40) == 0 )
          goto LABEL_691;
        v172 = *(unsigned int **)(a2 + 56);
        if ( v172 )
          v3 = *v172;
        v13 = (const GUID *)&v527;
        goto LABEL_12;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_691;
      v14 = (const GUID *)&v527;
LABEL_495:
      v52 = &EventPnpRequestComplete;
      goto LABEL_496;
    }
    if ( v33 > 0x11 )
    {
      if ( v33 > 0x17 )
      {
        v364 = v33 - 24;
        if ( !v364 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v540 = 0LL;
          IoGetActivityIdIrp(a2, &v540);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v416 = 0LL;
                v446 = 0;
                v417 = 0;
                v512 = 0;
                v235 = 0;
                v418 = 0;
                v419 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v420 = 0LL;
                  v464 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v421 = 0;
                  v491 = *(_DWORD *)(v231 + 56);
                  if ( !v491 )
                    goto LABEL_1421;
                  while ( 1 )
                  {
                    v422 = *(unsigned int *)(v231 + 4LL * v421 + 120);
                    if ( (unsigned int)v422 >= 0x80 )
                    {
                      v423 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v422 < (unsigned int)v423 )
                      {
                        v424 = (unsigned int)v422;
                        v425 = *(_DWORD *)(v231 + v422) - 64;
                        if ( v425 )
                        {
                          v426 = v425 - 1;
                          if ( v426 )
                          {
                            if ( v426 == 1 && v424 + 40 <= v423 )
                            {
                              if ( *(_DWORD *)(v231 + v424 + 12) )
                                v420 = (char *)(v424 + v231 + 32);
                              v416 = *(_BYTE **)(v231 + v424 + 24);
                              goto LABEL_1420;
                            }
                          }
                          else if ( v424 + 56 <= v423 )
                          {
                            v464 = 1;
                            if ( *(_BYTE *)(v231 + v424 + 10) )
                              v420 = (char *)(v424 + v231 + 24);
                            v232 = *(_BYTE *)(v231 + v424 + 8);
                            v416 = *(_BYTE **)(v231 + v424 + 16);
                            v417 = *(_BYTE *)(v231 + v424 + 9);
                          }
                        }
                        else if ( v424 + 40 <= v423 )
                        {
                          if ( *(_BYTE *)(v231 + v424 + 10) )
                            v420 = (char *)(v424 + v231 + 24);
                          v416 = *(_BYTE **)(v231 + v424 + 16);
LABEL_1420:
                          v417 = *(_BYTE *)(v231 + v424 + 9);
                          v232 = *(_BYTE *)(v231 + v424 + 8);
LABEL_1421:
                          if ( !v420 )
                            goto LABEL_763;
                          v427 = *v420;
                          v419 = 0;
                          v418 = 0;
LABEL_1424:
                          if ( ((v427 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v416 || !v417 )
                            goto LABEL_1444;
                          LOBYTE(v231) = 0;
                          v428 = &v416[v417];
                          v429 = v416 + 8;
                          if ( (unsigned __int8)((*v416 & 0x7F) - 114) <= 1u )
                          {
                            if ( v429 <= v428 )
                            {
                              LOBYTE(v231) = 1;
                              v418 = v416[2];
                              v235 = v416[1] & 0xF;
                              v419 = v416[3];
                            }
                          }
                          else
                          {
                            if ( v429 <= v428 )
                            {
                              v235 = v416[2] & 0xF;
                              v430 = v417;
                              if ( (unsigned int)(unsigned __int8)v416[7] + 8 <= v417 )
                                v430 = (unsigned __int8)v416[7] + 8;
                              v231 = (unsigned __int64)&v416[v430];
                              if ( (unsigned __int64)(v416 + 13) > v231 )
                                v446 = 0;
                              else
                                v446 = v416[12];
                              if ( (unsigned __int64)(v416 + 14) > v231 )
                                v512 = 0;
                              else
                                v512 = v416[13];
                              LOBYTE(v231) = 1;
                            }
                            v418 = v446;
                            v419 = v512;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v418;
                            v251 = v419;
                          }
                          else
                          {
LABEL_1444:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v540;
                          goto LABEL_762;
                        }
                        if ( v464 )
                          goto LABEL_1421;
                      }
                    }
                    if ( ++v421 >= v491 )
                      goto LABEL_1421;
                  }
                }
                v427 = *(_BYTE *)(v231 + 72);
                v416 = *(_BYTE **)(v231 + 32);
                v417 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1424;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v415 = *(unsigned int **)(a2 + 56);
                  if ( v415 )
                    v227 = *v415;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v540;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v540;
          goto LABEL_1395;
        }
        v365 = v364 - 1;
        if ( !v365 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v539 = 0LL;
          IoGetActivityIdIrp(a2, &v539);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v400 = 0LL;
                v445 = 0;
                v401 = 0;
                v511 = 0;
                v235 = 0;
                v402 = 0;
                v403 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v404 = 0LL;
                  v463 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v405 = 0;
                  v490 = *(_DWORD *)(v231 + 56);
                  if ( !v490 )
                    goto LABEL_1353;
                  while ( 1 )
                  {
                    v406 = *(unsigned int *)(v231 + 4LL * v405 + 120);
                    if ( (unsigned int)v406 >= 0x80 )
                    {
                      v407 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v406 < (unsigned int)v407 )
                      {
                        v408 = (unsigned int)v406;
                        v409 = *(_DWORD *)(v406 + v231) - 64;
                        if ( v409 )
                        {
                          v410 = v409 - 1;
                          if ( v410 )
                          {
                            if ( v410 == 1 && v408 + 40 <= v407 )
                            {
                              if ( *(_DWORD *)(v408 + v231 + 12) )
                                v404 = (char *)(v408 + v231 + 32);
                              v400 = *(_BYTE **)(v408 + v231 + 24);
                              goto LABEL_1352;
                            }
                          }
                          else if ( v408 + 56 <= v407 )
                          {
                            v463 = 1;
                            if ( *(_BYTE *)(v408 + v231 + 10) )
                              v404 = (char *)(v408 + v231 + 24);
                            v232 = *(_BYTE *)(v408 + v231 + 8);
                            v400 = *(_BYTE **)(v408 + v231 + 16);
                            v401 = *(_BYTE *)(v408 + v231 + 9);
                          }
                        }
                        else if ( v408 + 40 <= v407 )
                        {
                          if ( *(_BYTE *)(v408 + v231 + 10) )
                            v404 = (char *)(v408 + v231 + 24);
                          v400 = *(_BYTE **)(v408 + v231 + 16);
LABEL_1352:
                          v401 = *(_BYTE *)(v408 + v231 + 9);
                          v232 = *(_BYTE *)(v408 + v231 + 8);
LABEL_1353:
                          if ( !v404 )
                            goto LABEL_763;
                          v411 = *v404;
                          v403 = 0;
                          v402 = 0;
LABEL_1356:
                          if ( ((v411 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v400 || !v401 )
                            goto LABEL_1376;
                          LOBYTE(v231) = 0;
                          v412 = &v400[v401];
                          v413 = v400 + 8;
                          if ( (unsigned __int8)((*v400 & 0x7F) - 114) <= 1u )
                          {
                            if ( v413 <= v412 )
                            {
                              LOBYTE(v231) = 1;
                              v402 = v400[2];
                              v235 = v400[1] & 0xF;
                              v403 = v400[3];
                            }
                          }
                          else
                          {
                            if ( v413 <= v412 )
                            {
                              v235 = v400[2] & 0xF;
                              v414 = v401;
                              if ( (unsigned int)(unsigned __int8)v400[7] + 8 <= v401 )
                                v414 = (unsigned __int8)v400[7] + 8;
                              v231 = (unsigned __int64)&v400[v414];
                              if ( (unsigned __int64)(v400 + 13) > v231 )
                                v445 = 0;
                              else
                                v445 = v400[12];
                              if ( (unsigned __int64)(v400 + 14) > v231 )
                                v511 = 0;
                              else
                                v511 = v400[13];
                              LOBYTE(v231) = 1;
                            }
                            v402 = v445;
                            v403 = v511;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v402;
                            v251 = v403;
                          }
                          else
                          {
LABEL_1376:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v539;
                          goto LABEL_762;
                        }
                        if ( v463 )
                          goto LABEL_1353;
                      }
                    }
                    if ( ++v405 >= v490 )
                      goto LABEL_1353;
                  }
                }
                v411 = *(_BYTE *)(v231 + 72);
                v400 = *(_BYTE **)(v231 + 32);
                v401 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1356;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v399 = *(unsigned int **)(a2 + 56);
                  if ( v399 )
                    v227 = *v399;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v539;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v539;
          goto LABEL_1395;
        }
        v366 = v365 - 1;
        if ( !v366 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v538 = 0LL;
          IoGetActivityIdIrp(a2, &v538);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v384 = 0LL;
                v444 = 0;
                v385 = 0;
                v510 = 0;
                v235 = 0;
                v386 = 0;
                v387 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v388 = 0LL;
                  v462 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v389 = 0;
                  v489 = *(_DWORD *)(v231 + 56);
                  if ( !v489 )
                    goto LABEL_1287;
                  while ( 1 )
                  {
                    v390 = *(unsigned int *)(v231 + 4LL * v389 + 120);
                    if ( (unsigned int)v390 >= 0x80 )
                    {
                      v391 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v390 < (unsigned int)v391 )
                      {
                        v392 = (unsigned int)v390;
                        v393 = *(_DWORD *)(v231 + v390) - 64;
                        if ( v393 )
                        {
                          v394 = v393 - 1;
                          if ( v394 )
                          {
                            if ( v394 == 1 && v392 + 40 <= v391 )
                            {
                              if ( *(_DWORD *)(v231 + v392 + 12) )
                                v388 = (char *)(v392 + v231 + 32);
                              v384 = *(_BYTE **)(v231 + v392 + 24);
                              goto LABEL_1286;
                            }
                          }
                          else if ( v392 + 56 <= v391 )
                          {
                            v462 = 1;
                            if ( *(_BYTE *)(v231 + v392 + 10) )
                              v388 = (char *)(v392 + v231 + 24);
                            v232 = *(_BYTE *)(v231 + v392 + 8);
                            v384 = *(_BYTE **)(v231 + v392 + 16);
                            v385 = *(_BYTE *)(v231 + v392 + 9);
                          }
                        }
                        else if ( v392 + 40 <= v391 )
                        {
                          if ( *(_BYTE *)(v231 + v392 + 10) )
                            v388 = (char *)(v392 + v231 + 24);
                          v384 = *(_BYTE **)(v231 + v392 + 16);
LABEL_1286:
                          v385 = *(_BYTE *)(v231 + v392 + 9);
                          v232 = *(_BYTE *)(v231 + v392 + 8);
LABEL_1287:
                          if ( !v388 )
                            goto LABEL_763;
                          v395 = *v388;
                          v387 = 0;
                          v386 = 0;
LABEL_1290:
                          if ( ((v395 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v384 || !v385 )
                            goto LABEL_1310;
                          LOBYTE(v231) = 0;
                          v396 = &v384[v385];
                          v397 = v384 + 8;
                          if ( (unsigned __int8)((*v384 & 0x7F) - 114) <= 1u )
                          {
                            if ( v397 <= v396 )
                            {
                              LOBYTE(v231) = 1;
                              v386 = v384[2];
                              v235 = v384[1] & 0xF;
                              v387 = v384[3];
                            }
                          }
                          else
                          {
                            if ( v397 <= v396 )
                            {
                              v235 = v384[2] & 0xF;
                              v398 = v385;
                              if ( (unsigned int)(unsigned __int8)v384[7] + 8 <= v385 )
                                v398 = (unsigned __int8)v384[7] + 8;
                              v231 = (unsigned __int64)&v384[v398];
                              if ( (unsigned __int64)(v384 + 13) > v231 )
                                v444 = 0;
                              else
                                v444 = v384[12];
                              if ( (unsigned __int64)(v384 + 14) > v231 )
                                v510 = 0;
                              else
                                v510 = v384[13];
                              LOBYTE(v231) = 1;
                            }
                            v386 = v444;
                            v387 = v510;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v386;
                            v251 = v387;
                          }
                          else
                          {
LABEL_1310:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v538;
                          goto LABEL_762;
                        }
                        if ( v462 )
                          goto LABEL_1287;
                      }
                    }
                    if ( ++v389 >= v489 )
                      goto LABEL_1287;
                  }
                }
                v395 = *(_BYTE *)(v231 + 72);
                v384 = *(_BYTE **)(v231 + 32);
                v385 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1290;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v383 = *(unsigned int **)(a2 + 56);
                  if ( v383 )
                    v227 = *v383;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v538;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v538;
          goto LABEL_1395;
        }
        if ( v366 == 6 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v537 = 0LL;
          IoGetActivityIdIrp(a2, &v537);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v368 = 0LL;
                v443 = 0;
                v369 = 0;
                v509 = 0;
                v235 = 0;
                v370 = 0;
                v371 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v372 = 0LL;
                  v461 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v373 = 0;
                  v488 = *(_DWORD *)(v231 + 56);
                  if ( !v488 )
                    goto LABEL_1221;
                  while ( 1 )
                  {
                    v374 = *(unsigned int *)(v231 + 4LL * v373 + 120);
                    if ( (unsigned int)v374 >= 0x80 )
                    {
                      v375 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v374 < (unsigned int)v375 )
                      {
                        v376 = (unsigned int)v374;
                        v377 = *(_DWORD *)(v231 + v374) - 64;
                        if ( v377 )
                        {
                          v378 = v377 - 1;
                          if ( v378 )
                          {
                            if ( v378 == 1 && v376 + 40 <= v375 )
                            {
                              if ( *(_DWORD *)(v231 + v376 + 12) )
                                v372 = (char *)(v376 + v231 + 32);
                              v368 = *(_BYTE **)(v231 + v376 + 24);
                              goto LABEL_1220;
                            }
                          }
                          else if ( v376 + 56 <= v375 )
                          {
                            v461 = 1;
                            if ( *(_BYTE *)(v231 + v376 + 10) )
                              v372 = (char *)(v376 + v231 + 24);
                            v232 = *(_BYTE *)(v231 + v376 + 8);
                            v368 = *(_BYTE **)(v231 + v376 + 16);
                            v369 = *(_BYTE *)(v231 + v376 + 9);
                          }
                        }
                        else if ( v376 + 40 <= v375 )
                        {
                          if ( *(_BYTE *)(v231 + v376 + 10) )
                            v372 = (char *)(v376 + v231 + 24);
                          v368 = *(_BYTE **)(v231 + v376 + 16);
LABEL_1220:
                          v369 = *(_BYTE *)(v231 + v376 + 9);
                          v232 = *(_BYTE *)(v231 + v376 + 8);
LABEL_1221:
                          if ( !v372 )
                            goto LABEL_763;
                          v379 = *v372;
                          v371 = 0;
                          v370 = 0;
LABEL_1224:
                          if ( ((v379 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v368 || !v369 )
                            goto LABEL_1244;
                          LOBYTE(v231) = 0;
                          v380 = &v368[v369];
                          v381 = v368 + 8;
                          if ( (unsigned __int8)((*v368 & 0x7F) - 114) <= 1u )
                          {
                            if ( v381 <= v380 )
                            {
                              LOBYTE(v231) = 1;
                              v370 = v368[2];
                              v235 = v368[1] & 0xF;
                              v371 = v368[3];
                            }
                          }
                          else
                          {
                            if ( v381 <= v380 )
                            {
                              v235 = v368[2] & 0xF;
                              v382 = v369;
                              if ( (unsigned int)(unsigned __int8)v368[7] + 8 <= v369 )
                                v382 = (unsigned __int8)v368[7] + 8;
                              v231 = (unsigned __int64)&v368[v382];
                              if ( (unsigned __int64)(v368 + 13) > v231 )
                                v443 = 0;
                              else
                                v443 = v368[12];
                              if ( (unsigned __int64)(v368 + 14) > v231 )
                                v509 = 0;
                              else
                                v509 = v368[13];
                              LOBYTE(v231) = 1;
                            }
                            v370 = v443;
                            v371 = v509;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v370;
                            v251 = v371;
                          }
                          else
                          {
LABEL_1244:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v537;
                          goto LABEL_762;
                        }
                        if ( v461 )
                          goto LABEL_1221;
                      }
                    }
                    if ( ++v373 >= v488 )
                      goto LABEL_1221;
                  }
                }
                v379 = *(_BYTE *)(v231 + 72);
                v368 = *(_BYTE **)(v231 + 32);
                v369 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1224;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v367 = *(unsigned int **)(a2 + 56);
                  if ( v367 )
                    v227 = *v367;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v537;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v537;
          goto LABEL_1395;
        }
      }
      else
      {
        if ( v33 == 23 )
        {
          v253 = NvmeNamespaceWmiSrb(v473, v7, a2);
          goto LABEL_770;
        }
        v314 = v33 - 18;
        if ( !v314 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v536 = 0LL;
          IoGetActivityIdIrp(a2, &v536);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v349 = 0LL;
                v442 = 0;
                v350 = 0;
                v508 = 0;
                v235 = 0;
                v351 = 0;
                v352 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v353 = 0LL;
                  v460 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v354 = 0;
                  v487 = *(_DWORD *)(v231 + 56);
                  if ( !v487 )
                    goto LABEL_1150;
                  while ( 1 )
                  {
                    v355 = *(unsigned int *)(v231 + 4LL * v354 + 120);
                    if ( (unsigned int)v355 >= 0x80 )
                    {
                      v356 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v355 < (unsigned int)v356 )
                      {
                        v357 = (unsigned int)v355;
                        v358 = *(_DWORD *)(v355 + v231) - 64;
                        if ( v358 )
                        {
                          v359 = v358 - 1;
                          if ( v359 )
                          {
                            if ( v359 == 1 && v357 + 40 <= v356 )
                            {
                              if ( *(_DWORD *)(v357 + v231 + 12) )
                                v353 = (char *)(v357 + v231 + 32);
                              v349 = *(_BYTE **)(v357 + v231 + 24);
                              goto LABEL_1149;
                            }
                          }
                          else if ( v357 + 56 <= v356 )
                          {
                            v460 = 1;
                            if ( *(_BYTE *)(v357 + v231 + 10) )
                              v353 = (char *)(v357 + v231 + 24);
                            v232 = *(_BYTE *)(v357 + v231 + 8);
                            v349 = *(_BYTE **)(v357 + v231 + 16);
                            v350 = *(_BYTE *)(v357 + v231 + 9);
                          }
                        }
                        else if ( v357 + 40 <= v356 )
                        {
                          if ( *(_BYTE *)(v357 + v231 + 10) )
                            v353 = (char *)(v357 + v231 + 24);
                          v349 = *(_BYTE **)(v357 + v231 + 16);
LABEL_1149:
                          v350 = *(_BYTE *)(v357 + v231 + 9);
                          v232 = *(_BYTE *)(v357 + v231 + 8);
LABEL_1150:
                          if ( !v353 )
                            goto LABEL_763;
                          v360 = *v353;
                          v352 = 0;
                          v351 = 0;
LABEL_1153:
                          if ( ((v360 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v349 || !v350 )
                            goto LABEL_1173;
                          LOBYTE(v231) = 0;
                          v361 = &v349[v350];
                          v362 = v349 + 8;
                          if ( (unsigned __int8)((*v349 & 0x7F) - 114) <= 1u )
                          {
                            if ( v362 <= v361 )
                            {
                              LOBYTE(v231) = 1;
                              v351 = v349[2];
                              v235 = v349[1] & 0xF;
                              v352 = v349[3];
                            }
                          }
                          else
                          {
                            if ( v362 <= v361 )
                            {
                              v235 = v349[2] & 0xF;
                              v363 = v350;
                              if ( (unsigned int)(unsigned __int8)v349[7] + 8 <= v350 )
                                v363 = (unsigned __int8)v349[7] + 8;
                              v231 = (unsigned __int64)&v349[v363];
                              if ( (unsigned __int64)(v349 + 13) > v231 )
                                v442 = 0;
                              else
                                v442 = v349[12];
                              if ( (unsigned __int64)(v349 + 14) > v231 )
                                v508 = 0;
                              else
                                v508 = v349[13];
                              LOBYTE(v231) = 1;
                            }
                            v351 = v442;
                            v352 = v508;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v351;
                            v251 = v352;
                          }
                          else
                          {
LABEL_1173:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v536;
                          goto LABEL_762;
                        }
                        if ( v460 )
                          goto LABEL_1150;
                      }
                    }
                    if ( ++v354 >= v487 )
                      goto LABEL_1150;
                  }
                }
                v360 = *(_BYTE *)(v231 + 72);
                v349 = *(_BYTE **)(v231 + 32);
                v350 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1153;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v348 = *(unsigned int **)(a2 + 56);
                  if ( v348 )
                    v227 = *v348;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v536;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v536;
          goto LABEL_1395;
        }
        v315 = v314 - 1;
        if ( !v315 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v535 = 0LL;
          IoGetActivityIdIrp(a2, &v535);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v333 = 0LL;
                v441 = 0;
                v334 = 0;
                v507 = 0;
                v235 = 0;
                v335 = 0;
                v336 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v337 = 0LL;
                  v459 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v338 = 0;
                  v486 = *(_DWORD *)(v231 + 56);
                  if ( !v486 )
                    goto LABEL_1084;
                  while ( 1 )
                  {
                    v339 = *(unsigned int *)(v231 + 4LL * v338 + 120);
                    if ( (unsigned int)v339 >= 0x80 )
                    {
                      v340 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v339 < (unsigned int)v340 )
                      {
                        v341 = (unsigned int)v339;
                        v342 = *(_DWORD *)(v339 + v231) - 64;
                        if ( v342 )
                        {
                          v343 = v342 - 1;
                          if ( v343 )
                          {
                            if ( v343 == 1 && v341 + 40 <= v340 )
                            {
                              if ( *(_DWORD *)(v341 + v231 + 12) )
                                v337 = (char *)(v341 + v231 + 32);
                              v333 = *(_BYTE **)(v341 + v231 + 24);
                              goto LABEL_1083;
                            }
                          }
                          else if ( v341 + 56 <= v340 )
                          {
                            v459 = 1;
                            if ( *(_BYTE *)(v341 + v231 + 10) )
                              v337 = (char *)(v341 + v231 + 24);
                            v232 = *(_BYTE *)(v341 + v231 + 8);
                            v333 = *(_BYTE **)(v341 + v231 + 16);
                            v334 = *(_BYTE *)(v341 + v231 + 9);
                          }
                        }
                        else if ( v341 + 40 <= v340 )
                        {
                          if ( *(_BYTE *)(v341 + v231 + 10) )
                            v337 = (char *)(v341 + v231 + 24);
                          v333 = *(_BYTE **)(v341 + v231 + 16);
LABEL_1083:
                          v334 = *(_BYTE *)(v341 + v231 + 9);
                          v232 = *(_BYTE *)(v341 + v231 + 8);
LABEL_1084:
                          if ( !v337 )
                            goto LABEL_763;
                          v344 = *v337;
                          v336 = 0;
                          v335 = 0;
LABEL_1087:
                          if ( ((v344 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v333 || !v334 )
                            goto LABEL_1107;
                          LOBYTE(v231) = 0;
                          v345 = &v333[v334];
                          v346 = v333 + 8;
                          if ( (unsigned __int8)((*v333 & 0x7F) - 114) <= 1u )
                          {
                            if ( v346 <= v345 )
                            {
                              LOBYTE(v231) = 1;
                              v335 = v333[2];
                              v235 = v333[1] & 0xF;
                              v336 = v333[3];
                            }
                          }
                          else
                          {
                            if ( v346 <= v345 )
                            {
                              v235 = v333[2] & 0xF;
                              v347 = v334;
                              if ( (unsigned int)(unsigned __int8)v333[7] + 8 <= v334 )
                                v347 = (unsigned __int8)v333[7] + 8;
                              v231 = (unsigned __int64)&v333[v347];
                              if ( (unsigned __int64)(v333 + 13) > v231 )
                                v441 = 0;
                              else
                                v441 = v333[12];
                              if ( (unsigned __int64)(v333 + 14) > v231 )
                                v507 = 0;
                              else
                                v507 = v333[13];
                              LOBYTE(v231) = 1;
                            }
                            v335 = v441;
                            v336 = v507;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v335;
                            v251 = v336;
                          }
                          else
                          {
LABEL_1107:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v535;
                          goto LABEL_762;
                        }
                        if ( v459 )
                          goto LABEL_1084;
                      }
                    }
                    if ( ++v338 >= v486 )
                      goto LABEL_1084;
                  }
                }
                v344 = *(_BYTE *)(v231 + 72);
                v333 = *(_BYTE **)(v231 + 32);
                v334 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1087;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v332 = *(unsigned int **)(a2 + 56);
                  if ( v332 )
                    v227 = *v332;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v535;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v535;
          goto LABEL_1395;
        }
        if ( v315 == 2 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v534 = 0LL;
          IoGetActivityIdIrp(a2, &v534);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v317 = 0LL;
                v440 = 0;
                v318 = 0;
                v506 = 0;
                v235 = 0;
                v319 = 0;
                v320 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v321 = 0LL;
                  v458 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v322 = 0;
                  v485 = *(_DWORD *)(v231 + 56);
                  if ( !v485 )
                    goto LABEL_1018;
                  while ( 1 )
                  {
                    v323 = *(unsigned int *)(v231 + 4LL * v322 + 120);
                    if ( (unsigned int)v323 >= 0x80 )
                    {
                      v324 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v323 < (unsigned int)v324 )
                      {
                        v325 = (unsigned int)v323;
                        v326 = *(_DWORD *)(v323 + v231) - 64;
                        if ( v326 )
                        {
                          v327 = v326 - 1;
                          if ( v327 )
                          {
                            if ( v327 == 1 && v325 + 40 <= v324 )
                            {
                              if ( *(_DWORD *)(v325 + v231 + 12) )
                                v321 = (char *)(v325 + v231 + 32);
                              v317 = *(_BYTE **)(v325 + v231 + 24);
                              goto LABEL_1017;
                            }
                          }
                          else if ( v325 + 56 <= v324 )
                          {
                            v458 = 1;
                            if ( *(_BYTE *)(v325 + v231 + 10) )
                              v321 = (char *)(v325 + v231 + 24);
                            v232 = *(_BYTE *)(v325 + v231 + 8);
                            v317 = *(_BYTE **)(v325 + v231 + 16);
                            v318 = *(_BYTE *)(v325 + v231 + 9);
                          }
                        }
                        else if ( v325 + 40 <= v324 )
                        {
                          if ( *(_BYTE *)(v325 + v231 + 10) )
                            v321 = (char *)(v325 + v231 + 24);
                          v317 = *(_BYTE **)(v325 + v231 + 16);
LABEL_1017:
                          v318 = *(_BYTE *)(v325 + v231 + 9);
                          v232 = *(_BYTE *)(v325 + v231 + 8);
LABEL_1018:
                          if ( !v321 )
                            goto LABEL_763;
                          v328 = *v321;
                          v320 = 0;
                          v319 = 0;
LABEL_1021:
                          if ( ((v328 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v317 || !v318 )
                            goto LABEL_1041;
                          LOBYTE(v231) = 0;
                          v329 = &v317[v318];
                          v330 = v317 + 8;
                          if ( (unsigned __int8)((*v317 & 0x7F) - 114) <= 1u )
                          {
                            if ( v330 <= v329 )
                            {
                              LOBYTE(v231) = 1;
                              v319 = v317[2];
                              v235 = v317[1] & 0xF;
                              v320 = v317[3];
                            }
                          }
                          else
                          {
                            if ( v330 <= v329 )
                            {
                              v235 = v317[2] & 0xF;
                              v331 = v318;
                              if ( (unsigned int)(unsigned __int8)v317[7] + 8 <= v318 )
                                v331 = (unsigned __int8)v317[7] + 8;
                              v231 = (unsigned __int64)&v317[v331];
                              if ( (unsigned __int64)(v317 + 13) > v231 )
                                v440 = 0;
                              else
                                v440 = v317[12];
                              if ( (unsigned __int64)(v317 + 14) > v231 )
                                v506 = 0;
                              else
                                v506 = v317[13];
                              LOBYTE(v231) = 1;
                            }
                            v319 = v440;
                            v320 = v506;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v319;
                            v251 = v320;
                          }
                          else
                          {
LABEL_1041:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v534;
                          goto LABEL_762;
                        }
                        if ( v458 )
                          goto LABEL_1018;
                      }
                    }
                    if ( ++v322 >= v485 )
                      goto LABEL_1018;
                  }
                }
                v328 = *(_BYTE *)(v231 + 72);
                v317 = *(_BYTE **)(v231 + 32);
                v318 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_1021;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v316 = *(unsigned int **)(a2 + 56);
                  if ( v316 )
                    v227 = *v316;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v534;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v534;
          goto LABEL_1395;
        }
      }
      goto LABEL_841;
    }
    if ( v33 != 17 )
    {
      if ( v33 > 6 )
      {
        v254 = v33 - 7;
        if ( !v254 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_973;
          v533 = 0LL;
          IoGetActivityIdIrp(a2, &v533);
          v289 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v289 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_973;
              v292 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 >= 0 )
                goto LABEL_973;
              v293 = *(_QWORD *)(v289 + 8);
              v294 = 0;
              v295 = 0LL;
              v505 = 0;
              v296 = 0;
              v297 = 0;
              v298 = 0;
              v299 = 0;
              if ( *(_BYTE *)(v293 + 2) != 40 )
              {
                v307 = *(_BYTE *)(v293 + 72);
                v295 = *(_BYTE **)(v293 + 32);
                v296 = *(_BYTE *)(v293 + 11);
                v294 = *(_BYTE *)(v293 + 4);
                if ( !*(_BYTE *)(v293 + 2) )
                  goto LABEL_949;
                goto LABEL_973;
              }
              v300 = 0LL;
              v457 = 0;
              if ( *(_DWORD *)(v293 + 20) )
                goto LABEL_973;
              v301 = 0LL;
              v519 = 0;
              v484 = *(_DWORD *)(v293 + 56);
              if ( !v484 )
                goto LABEL_946;
              while ( 1 )
              {
                v302 = *(unsigned int *)(v293 + 4 * v301 + 120);
                if ( (unsigned int)v302 >= 0x80 )
                {
                  v303 = *(unsigned int *)(v293 + 16);
                  if ( (unsigned int)v302 < (unsigned int)v303 )
                  {
                    v304 = (unsigned int)v302;
                    v305 = *(_DWORD *)(v293 + v302) - 64;
                    if ( v305 )
                    {
                      v306 = v305 - 1;
                      if ( v306 )
                      {
                        if ( v306 == 1 && v304 + 40 <= v303 )
                        {
                          if ( *(_DWORD *)(v293 + v304 + 12) )
                            v300 = (char *)(v304 + v293 + 32);
                          v295 = *(_BYTE **)(v293 + v304 + 24);
                          goto LABEL_945;
                        }
                      }
                      else if ( v304 + 56 <= v303 )
                      {
                        v457 = 1;
                        if ( *(_BYTE *)(v293 + v304 + 10) )
                          v300 = (char *)(v304 + v293 + 24);
                        v294 = *(_BYTE *)(v293 + v304 + 8);
                        v295 = *(_BYTE **)(v293 + v304 + 16);
                        v296 = *(_BYTE *)(v293 + v304 + 9);
                      }
                    }
                    else if ( v304 + 40 <= v303 )
                    {
                      if ( *(_BYTE *)(v293 + v304 + 10) )
                        v300 = (char *)(v304 + v293 + 24);
                      v295 = *(_BYTE **)(v293 + v304 + 16);
LABEL_945:
                      v296 = *(_BYTE *)(v293 + v304 + 9);
                      v294 = *(_BYTE *)(v293 + v304 + 8);
LABEL_946:
                      if ( v300 )
                      {
                        v307 = *v300;
                        v299 = 0;
LABEL_949:
                        if ( ((v307 - 8) & 0x5D) == 0 )
                        {
                          v308 = *(_BYTE *)(v293 + 3);
                          if ( v308 == 1 || !v295 || !v296 )
                            goto LABEL_968;
                          LOBYTE(v293) = 0;
                          v309 = &v295[v296];
                          v310 = v295 + 8;
                          if ( (unsigned __int8)((*v295 & 0x7F) - 114) <= 1u )
                          {
                            if ( v310 <= v309 )
                            {
                              LOBYTE(v293) = 1;
                              v298 = v295[2];
                              v297 = v295[1] & 0xF;
                              v299 = v295[3];
                            }
                          }
                          else
                          {
                            if ( v310 <= v309 )
                            {
                              v297 = v295[2] & 0xF;
                              v311 = v296;
                              if ( (unsigned int)(unsigned __int8)v295[7] + 8 <= v296 )
                                v311 = (unsigned __int8)v295[7] + 8;
                              v293 = (unsigned __int64)&v295[v311];
                              if ( (unsigned __int64)(v295 + 13) <= v293 )
                                v298 = v295[12];
                              if ( (unsigned __int64)(v295 + 14) > v293 )
                                v505 = 0;
                              else
                                v505 = v295[13];
                              LOBYTE(v293) = 1;
                            }
                            v299 = v505;
                          }
                          if ( (_BYTE)v293 )
                          {
                            v312 = v298;
                            v313 = v299;
                          }
                          else
                          {
LABEL_968:
                            v297 = 0;
                            v312 = 0;
                            v313 = 0LL;
                          }
                          McTemplateK0pduuuuup_EtwWriteTransfer(
                            v313,
                            v293,
                            &v533,
                            a2,
                            *(_DWORD *)(a2 + 48),
                            v308,
                            v294,
                            v297,
                            v312,
                            v313,
                            a2);
                        }
                      }
LABEL_973:
                      IofCompleteRequest((PIRP)a2, 0);
                      return v3;
                    }
                    if ( v457 )
                      goto LABEL_946;
                  }
                }
                v301 = (unsigned int)(v519 + 1);
                v519 = v301;
                if ( (unsigned int)v301 >= v484 )
                  goto LABEL_946;
              }
            case 0x1B:
              if ( *(_BYTE *)(v289 + 1) == 7 && !*(_DWORD *)(v289 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v290 = *(unsigned int **)(a2 + 56);
                  if ( v290 )
                    v291 = *v290;
                  else
                    v291 = 0LL;
                  McTemplateK0pqd_EtwWriteTransfer(v291, v289, &v533, a2, v291, *(_DWORD *)(a2 + 48));
                }
                goto LABEL_973;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_973;
              v292 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_973;
          }
          McTemplateK0pd_EtwWriteTransfer(v288, v292, &v533, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_973;
        }
        v255 = v254 - 1;
        if ( !v255 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_QWORD *)(a2 + 56) = 0LL;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v532 = 0LL;
          IoGetActivityIdIrp(a2, &v532);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v273 = 0LL;
                v439 = 0;
                v274 = 0;
                v504 = 0;
                v235 = 0;
                v275 = 0;
                v276 = 0;
                if ( *(_BYTE *)(v231 + 2) == 40 )
                {
                  v277 = 0LL;
                  v456 = 0;
                  if ( *(_DWORD *)(v231 + 20) )
                    goto LABEL_763;
                  v278 = 0;
                  v483 = *(_DWORD *)(v231 + 56);
                  if ( !v483 )
                    goto LABEL_881;
                  while ( 1 )
                  {
                    v279 = *(unsigned int *)(v231 + 4LL * v278 + 120);
                    if ( (unsigned int)v279 >= 0x80 )
                    {
                      v280 = *(unsigned int *)(v231 + 16);
                      if ( (unsigned int)v279 < (unsigned int)v280 )
                      {
                        v281 = (unsigned int)v279;
                        v282 = *(_DWORD *)(v231 + v279) - 64;
                        if ( v282 )
                        {
                          v283 = v282 - 1;
                          if ( v283 )
                          {
                            if ( v283 == 1 && v281 + 40 <= v280 )
                            {
                              if ( *(_DWORD *)(v231 + v281 + 12) )
                                v277 = (char *)(v281 + v231 + 32);
                              v273 = *(_BYTE **)(v231 + v281 + 24);
                              goto LABEL_880;
                            }
                          }
                          else if ( v281 + 56 <= v280 )
                          {
                            v456 = 1;
                            if ( *(_BYTE *)(v231 + v281 + 10) )
                              v277 = (char *)(v281 + v231 + 24);
                            v232 = *(_BYTE *)(v231 + v281 + 8);
                            v273 = *(_BYTE **)(v231 + v281 + 16);
                            v274 = *(_BYTE *)(v231 + v281 + 9);
                          }
                        }
                        else if ( v281 + 40 <= v280 )
                        {
                          if ( *(_BYTE *)(v231 + v281 + 10) )
                            v277 = (char *)(v281 + v231 + 24);
                          v273 = *(_BYTE **)(v231 + v281 + 16);
LABEL_880:
                          v274 = *(_BYTE *)(v231 + v281 + 9);
                          v232 = *(_BYTE *)(v231 + v281 + 8);
LABEL_881:
                          if ( !v277 )
                            goto LABEL_763;
                          v284 = *v277;
                          v276 = 0;
                          v275 = 0;
LABEL_884:
                          if ( ((v284 - 8) & 0x5D) != 0 )
                            goto LABEL_763;
                          v246 = *(_BYTE *)(v231 + 3);
                          if ( v246 == 1 || !v273 || !v274 )
                            goto LABEL_904;
                          LOBYTE(v231) = 0;
                          v285 = &v273[v274];
                          v286 = v273 + 8;
                          if ( (unsigned __int8)((*v273 & 0x7F) - 114) <= 1u )
                          {
                            if ( v286 <= v285 )
                            {
                              LOBYTE(v231) = 1;
                              v275 = v273[2];
                              v235 = v273[1] & 0xF;
                              v276 = v273[3];
                            }
                          }
                          else
                          {
                            if ( v286 <= v285 )
                            {
                              v235 = v273[2] & 0xF;
                              v287 = v274;
                              if ( (unsigned int)(unsigned __int8)v273[7] + 8 <= v274 )
                                v287 = (unsigned __int8)v273[7] + 8;
                              v231 = (unsigned __int64)&v273[v287];
                              if ( (unsigned __int64)(v273 + 13) > v231 )
                                v439 = 0;
                              else
                                v439 = v273[12];
                              if ( (unsigned __int64)(v273 + 14) > v231 )
                                v504 = 0;
                              else
                                v504 = v273[13];
                              LOBYTE(v231) = 1;
                            }
                            v275 = v439;
                            v276 = v504;
                          }
                          if ( (_BYTE)v231 )
                          {
                            v250 = v275;
                            v251 = v276;
                          }
                          else
                          {
LABEL_904:
                            v235 = 0;
                            v250 = 0;
                            v251 = 0LL;
                          }
                          v252 = (const GUID *)&v532;
                          goto LABEL_762;
                        }
                        if ( v456 )
                          goto LABEL_881;
                      }
                    }
                    if ( ++v278 >= v483 )
                      goto LABEL_881;
                  }
                }
                v284 = *(_BYTE *)(v231 + 72);
                v273 = *(_BYTE **)(v231 + 32);
                v274 = *(_BYTE *)(v231 + 11);
                v232 = *(_BYTE *)(v231 + 4);
                if ( *(_BYTE *)(v231 + 2) )
                  goto LABEL_763;
                goto LABEL_884;
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v272 = *(unsigned int **)(a2 + 56);
                  if ( v272 )
                    v227 = *v272;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v532;
                  goto LABEL_1391;
                }
                goto LABEL_764;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v532;
          goto LABEL_1395;
        }
        if ( v255 == 8 )
        {
          v8 = StorEtwLoggingEnabled == 0;
          *(_BYTE *)(v7 + 3) = 1;
          *(_BYTE *)(a2 + 141) = -84;
          *(_DWORD *)(a2 + 48) = 0;
          if ( v8 )
            goto LABEL_764;
          v531 = 0LL;
          IoGetActivityIdIrp(a2, &v531);
          v225 = *(_QWORD *)(a2 + 184);
          switch ( *(_BYTE *)v225 )
          {
            case 0xE:
              if ( (byte_140171462 & 8) == 0 )
                goto LABEL_764;
              v229 = &EventNonReadWriteRequestComplete;
              break;
            case 0xF:
              if ( byte_140171461 < 0 )
              {
                v231 = *(_QWORD *)(v225 + 8);
                v232 = 0;
                v257 = 0LL;
                v438 = 0;
                v258 = 0;
                v503 = 0;
                v235 = 0;
                v259 = 0;
                v260 = 0;
                if ( *(_BYTE *)(v231 + 2) != 40 )
                {
                  v268 = *(_BYTE *)(v231 + 72);
                  v257 = *(_BYTE **)(v231 + 32);
                  v258 = *(_BYTE *)(v231 + 11);
                  v232 = *(_BYTE *)(v231 + 4);
                  if ( *(_BYTE *)(v231 + 2) )
                    goto LABEL_763;
                  goto LABEL_817;
                }
                v261 = 0LL;
                v455 = 0;
                if ( *(_DWORD *)(v231 + 20) )
                  goto LABEL_763;
                v262 = 0;
                v482 = *(_DWORD *)(v231 + 56);
                if ( !v482 )
                  goto LABEL_814;
                while ( 1 )
                {
                  v263 = *(unsigned int *)(v231 + 4LL * v262 + 120);
                  if ( (unsigned int)v263 >= 0x80 )
                  {
                    v264 = *(unsigned int *)(v231 + 16);
                    if ( (unsigned int)v263 < (unsigned int)v264 )
                    {
                      v265 = (unsigned int)v263;
                      v266 = *(_DWORD *)(v263 + v231) - 64;
                      if ( v266 )
                      {
                        v267 = v266 - 1;
                        if ( v267 )
                        {
                          if ( v267 == 1 && v265 + 40 <= v264 )
                          {
                            if ( *(_DWORD *)(v265 + v231 + 12) )
                              v261 = (char *)(v265 + v231 + 32);
                            v257 = *(_BYTE **)(v265 + v231 + 24);
                            goto LABEL_813;
                          }
                        }
                        else if ( v265 + 56 <= v264 )
                        {
                          v455 = 1;
                          if ( *(_BYTE *)(v265 + v231 + 10) )
                            v261 = (char *)(v265 + v231 + 24);
                          v232 = *(_BYTE *)(v265 + v231 + 8);
                          v257 = *(_BYTE **)(v265 + v231 + 16);
                          v258 = *(_BYTE *)(v265 + v231 + 9);
                        }
                      }
                      else if ( v265 + 40 <= v264 )
                      {
                        if ( *(_BYTE *)(v265 + v231 + 10) )
                          v261 = (char *)(v265 + v231 + 24);
                        v257 = *(_BYTE **)(v265 + v231 + 16);
LABEL_813:
                        v258 = *(_BYTE *)(v265 + v231 + 9);
                        v232 = *(_BYTE *)(v265 + v231 + 8);
LABEL_814:
                        if ( !v261 )
                          goto LABEL_763;
                        v268 = *v261;
                        v260 = 0;
                        v259 = 0;
LABEL_817:
                        if ( ((v268 - 8) & 0x5D) != 0 )
                          goto LABEL_763;
                        v246 = *(_BYTE *)(v231 + 3);
                        if ( v246 == 1 || !v257 || !v258 )
                          goto LABEL_837;
                        LOBYTE(v231) = 0;
                        v269 = &v257[v258];
                        v270 = v257 + 8;
                        if ( (unsigned __int8)((*v257 & 0x7F) - 114) <= 1u )
                        {
                          if ( v270 <= v269 )
                          {
                            LOBYTE(v231) = 1;
                            v259 = v257[2];
                            v235 = v257[1] & 0xF;
                            v260 = v257[3];
                          }
                        }
                        else
                        {
                          if ( v270 <= v269 )
                          {
                            v235 = v257[2] & 0xF;
                            v271 = v258;
                            if ( (unsigned int)(unsigned __int8)v257[7] + 8 <= v258 )
                              v271 = (unsigned __int8)v257[7] + 8;
                            v231 = (unsigned __int64)&v257[v271];
                            if ( (unsigned __int64)(v257 + 13) > v231 )
                              v438 = 0;
                            else
                              v438 = v257[12];
                            if ( (unsigned __int64)(v257 + 14) > v231 )
                              v503 = 0;
                            else
                              v503 = v257[13];
                            LOBYTE(v231) = 1;
                          }
                          v259 = v438;
                          v260 = v503;
                        }
                        if ( (_BYTE)v231 )
                        {
                          v250 = v259;
                          v251 = v260;
                        }
                        else
                        {
LABEL_837:
                          v235 = 0;
                          v250 = 0;
                          v251 = 0LL;
                        }
                        v252 = (const GUID *)&v531;
LABEL_762:
                        McTemplateK0pduuuuup_EtwWriteTransfer(
                          v251,
                          v231,
                          v252,
                          a2,
                          *(_DWORD *)(a2 + 48),
                          v246,
                          v232,
                          v235,
                          v250,
                          v251,
                          a2);
                        goto LABEL_763;
                      }
                      if ( v455 )
                        goto LABEL_814;
                    }
                  }
                  if ( ++v262 >= v482 )
                    goto LABEL_814;
                }
              }
              goto LABEL_764;
            case 0x1B:
              if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
              {
                if ( (byte_140171462 & 0x40) != 0 )
                {
                  v256 = *(unsigned int **)(a2 + 56);
                  if ( v256 )
                    v227 = *v256;
                  else
                    v227 = 0LL;
                  v228 = (const GUID *)&v531;
                  goto LABEL_1391;
                }
LABEL_764:
                IofCompleteRequest((PIRP)a2, 0);
LABEL_765:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v5 + 120));
                return v3;
              }
              if ( (byte_140171462 & 0x20) == 0 )
                goto LABEL_764;
              v229 = &EventPnpRequestComplete;
              break;
            default:
              goto LABEL_764;
          }
          v230 = (const GUID *)&v531;
LABEL_1395:
          McTemplateK0pd_EtwWriteTransfer(v224, v229, v230, a2, *(_DWORD *)(a2 + 48));
          goto LABEL_764;
        }
        goto LABEL_841;
      }
      if ( v33 == 6 )
      {
        v253 = NvmeNamespaceReleaseDeviceSrb(v5, v7, a2);
      }
      else
      {
        v223 = v33 - 1;
        if ( v223 )
        {
          if ( v223 == 3 )
          {
            v8 = StorEtwLoggingEnabled == 0;
            *(_BYTE *)(v7 + 3) = 1;
            *(_QWORD *)(a2 + 56) = 0LL;
            *(_BYTE *)(a2 + 141) = -84;
            *(_DWORD *)(a2 + 48) = 0;
            if ( v8 )
              goto LABEL_764;
            v530 = 0LL;
            IoGetActivityIdIrp(a2, &v530);
            v225 = *(_QWORD *)(a2 + 184);
            switch ( *(_BYTE *)v225 )
            {
              case 0xE:
                if ( (byte_140171462 & 8) == 0 )
                  goto LABEL_764;
                v229 = &EventNonReadWriteRequestComplete;
                break;
              case 0xF:
                if ( byte_140171461 < 0 )
                {
                  v231 = *(_QWORD *)(v225 + 8);
                  v232 = 0;
                  v233 = 0LL;
                  v437 = 0;
                  v234 = 0;
                  v502 = 0;
                  v235 = 0;
                  v236 = 0;
                  v237 = 0;
                  if ( *(_BYTE *)(v231 + 2) == 40 )
                  {
                    v238 = 0LL;
                    v454 = 0;
                    if ( *(_DWORD *)(v231 + 20) )
                      goto LABEL_763;
                    v239 = 0;
                    v481 = *(_DWORD *)(v231 + 56);
                    if ( !v481 )
                      goto LABEL_737;
                    while ( 1 )
                    {
                      v240 = *(unsigned int *)(v231 + 4LL * v239 + 120);
                      if ( (unsigned int)v240 >= 0x80 )
                      {
                        v241 = *(unsigned int *)(v231 + 16);
                        if ( (unsigned int)v240 < (unsigned int)v241 )
                        {
                          v242 = (unsigned int)v240;
                          v243 = *(_DWORD *)(v231 + v240) - 64;
                          if ( v243 )
                          {
                            v244 = v243 - 1;
                            if ( v244 )
                            {
                              if ( v244 == 1 && v242 + 40 <= v241 )
                              {
                                if ( *(_DWORD *)(v231 + v242 + 12) )
                                  v238 = (char *)(v242 + v231 + 32);
                                v233 = *(_BYTE **)(v231 + v242 + 24);
                                goto LABEL_736;
                              }
                            }
                            else if ( v242 + 56 <= v241 )
                            {
                              v454 = 1;
                              if ( *(_BYTE *)(v231 + v242 + 10) )
                                v238 = (char *)(v242 + v231 + 24);
                              v232 = *(_BYTE *)(v231 + v242 + 8);
                              v233 = *(_BYTE **)(v231 + v242 + 16);
                              v234 = *(_BYTE *)(v231 + v242 + 9);
                            }
                          }
                          else if ( v242 + 40 <= v241 )
                          {
                            if ( *(_BYTE *)(v231 + v242 + 10) )
                              v238 = (char *)(v242 + v231 + 24);
                            v233 = *(_BYTE **)(v231 + v242 + 16);
LABEL_736:
                            v234 = *(_BYTE *)(v231 + v242 + 9);
                            v232 = *(_BYTE *)(v231 + v242 + 8);
LABEL_737:
                            if ( v238 )
                            {
                              v245 = *v238;
                              v237 = 0;
                              v236 = 0;
                              goto LABEL_740;
                            }
                            goto LABEL_763;
                          }
                          if ( v454 )
                            goto LABEL_737;
                        }
                      }
                      if ( ++v239 >= v481 )
                        goto LABEL_737;
                    }
                  }
                  v245 = *(_BYTE *)(v231 + 72);
                  v233 = *(_BYTE **)(v231 + 32);
                  v234 = *(_BYTE *)(v231 + 11);
                  v232 = *(_BYTE *)(v231 + 4);
                  if ( *(_BYTE *)(v231 + 2) )
                    goto LABEL_763;
LABEL_740:
                  if ( ((v245 - 8) & 0x5D) == 0 )
                  {
                    v246 = *(_BYTE *)(v231 + 3);
                    if ( v246 == 1 || !v233 || !v234 )
                      goto LABEL_760;
                    LOBYTE(v231) = 0;
                    v247 = &v233[v234];
                    v248 = v233 + 8;
                    if ( (unsigned __int8)((*v233 & 0x7F) - 114) <= 1u )
                    {
                      if ( v248 <= v247 )
                      {
                        LOBYTE(v231) = 1;
                        v236 = v233[2];
                        v235 = v233[1] & 0xF;
                        v237 = v233[3];
                      }
                    }
                    else
                    {
                      if ( v248 <= v247 )
                      {
                        v235 = v233[2] & 0xF;
                        v249 = v234;
                        if ( (unsigned int)(unsigned __int8)v233[7] + 8 <= v234 )
                          v249 = (unsigned __int8)v233[7] + 8;
                        v231 = (unsigned __int64)&v233[v249];
                        if ( (unsigned __int64)(v233 + 13) > v231 )
                          v437 = 0;
                        else
                          v437 = v233[12];
                        if ( (unsigned __int64)(v233 + 14) > v231 )
                          v502 = 0;
                        else
                          v502 = v233[13];
                        LOBYTE(v231) = 1;
                      }
                      v236 = v437;
                      v237 = v502;
                    }
                    if ( (_BYTE)v231 )
                    {
                      v250 = v236;
                      v251 = v237;
                    }
                    else
                    {
LABEL_760:
                      v235 = 0;
                      v250 = 0;
                      v251 = 0LL;
                    }
                    v252 = (const GUID *)&v530;
                    goto LABEL_762;
                  }
LABEL_763:
                  v5 = a1;
                }
                goto LABEL_764;
              case 0x1B:
                if ( *(_BYTE *)(v225 + 1) == 7 && !*(_DWORD *)(v225 + 8) )
                {
                  if ( (byte_140171462 & 0x40) != 0 )
                  {
                    v226 = *(unsigned int **)(a2 + 56);
                    if ( v226 )
                      v227 = *v226;
                    else
                      v227 = 0LL;
                    v228 = (const GUID *)&v530;
LABEL_1391:
                    McTemplateK0pqd_EtwWriteTransfer(v227, v225, v228, a2, v227, *(_DWORD *)(a2 + 48));
                    goto LABEL_764;
                  }
                  goto LABEL_764;
                }
                if ( (byte_140171462 & 0x20) == 0 )
                  goto LABEL_764;
                v229 = &EventPnpRequestComplete;
                break;
              default:
                goto LABEL_764;
            }
            v230 = (const GUID *)&v530;
            goto LABEL_1395;
          }
          goto LABEL_841;
        }
        v253 = NvmeNamespaceClaimDeviceSrb((_QWORD *)v5, v7, a2);
      }
LABEL_770:
      v3 = v253;
      goto LABEL_765;
    }
LABEL_841:
    v253 = NvmeNamespaceUnknownSrb(v473, v7, a2);
    goto LABEL_770;
  }
  v34 = RaidNtStatusToSrbStatus(v473);
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(v7 + 3) = v34;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v35;
  if ( v8 )
    goto LABEL_200;
  v522 = 0LL;
  IoGetActivityIdIrp(a2, &v522);
  v37 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v37 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_200;
    v53 = &EventNonReadWriteRequestComplete;
    goto LABEL_199;
  }
  if ( *(_BYTE *)v37 != 15 )
  {
    if ( *(_BYTE *)v37 != 27 )
      goto LABEL_200;
    if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v38 = *(unsigned int **)(a2 + 56);
        if ( v38 )
          v3 = *v38;
        McTemplateK0pqd_EtwWriteTransfer(v36, v37, &v522, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_200;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_200;
    v53 = &EventPnpRequestComplete;
LABEL_199:
    McTemplateK0pd_EtwWriteTransfer(v36, v53, &v522, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_200;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_200;
  v54 = *(_QWORD *)(v37 + 8);
  v55 = 0;
  v56 = 0LL;
  v494 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  if ( *(_BYTE *)(v54 + 2) != 40 )
  {
    v66 = *(_BYTE *)(v54 + 72);
    v56 = *(_BYTE **)(v54 + 32);
    v57 = *(_BYTE *)(v54 + 11);
    v55 = *(_BYTE *)(v54 + 4);
    if ( !*(_BYTE *)(v54 + 2) )
      goto LABEL_176;
    goto LABEL_200;
  }
  v61 = 0LL;
  v433 = 0;
  if ( *(_DWORD *)(v54 + 20) )
    goto LABEL_200;
  v36 = *(unsigned int *)(v54 + 56);
  v62 = 0LL;
  v468 = 0;
  v515 = v36;
  if ( !(_DWORD)v36 )
    goto LABEL_173;
  while ( 1 )
  {
    v36 = *(unsigned int *)(v54 + 4 * v62 + 120);
    if ( (unsigned int)v36 >= 0x80 )
    {
      v63 = *(unsigned int *)(v54 + 16);
      if ( (unsigned int)v36 < (unsigned int)v63 )
        break;
    }
LABEL_167:
    v62 = (unsigned int)(v468 + 1);
    v468 = v62;
    if ( (unsigned int)v62 >= v515 )
      goto LABEL_173;
  }
  v64 = (unsigned int)v36;
  v65 = *(_DWORD *)(v36 + v54) - 64;
  if ( v65 )
  {
    v36 = (unsigned int)(v65 - 1);
    if ( (_DWORD)v36 )
    {
      if ( (_DWORD)v36 == 1 )
      {
        v36 = v64 + 40;
        if ( v64 + 40 <= v63 )
        {
          if ( *(_DWORD *)(v64 + v54 + 12) )
            v61 = (char *)(v64 + v54 + 32);
          v56 = *(_BYTE **)(v64 + v54 + 24);
          goto LABEL_172;
        }
      }
    }
    else
    {
      v36 = v64 + 56;
      if ( v64 + 56 <= v63 )
      {
        v433 = 1;
        if ( *(_BYTE *)(v64 + v54 + 10) )
          v61 = (char *)(v64 + v54 + 24);
        v55 = *(_BYTE *)(v64 + v54 + 8);
        v56 = *(_BYTE **)(v64 + v54 + 16);
        v57 = *(_BYTE *)(v64 + v54 + 9);
      }
    }
    goto LABEL_166;
  }
  v36 = v64 + 40;
  if ( v64 + 40 > v63 )
  {
LABEL_166:
    if ( v433 )
      goto LABEL_173;
    goto LABEL_167;
  }
  if ( *(_BYTE *)(v64 + v54 + 10) )
    v61 = (char *)(v64 + v54 + 24);
  v56 = *(_BYTE **)(v64 + v54 + 16);
LABEL_172:
  v57 = *(_BYTE *)(v64 + v54 + 9);
  v55 = *(_BYTE *)(v64 + v54 + 8);
LABEL_173:
  if ( v61 )
  {
    v66 = *v61;
    v60 = 0;
LABEL_176:
    LOBYTE(v36) = v66 - 8;
    if ( (v36 & 0x5D) == 0 )
    {
      v67 = *(_BYTE *)(v54 + 3);
      if ( v67 == 1 || !v56 || !v57 )
        goto LABEL_195;
      LOBYTE(v54) = 0;
      v36 = (unsigned __int64)&v56[v57];
      v68 = v56 + 8;
      if ( (unsigned __int8)((*v56 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v68 <= v36 )
        {
          LOBYTE(v54) = 1;
          v59 = v56[2];
          v58 = v56[1] & 0xF;
          v60 = v56[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v68 <= v36 )
        {
          v58 = v56[2] & 0xF;
          v69 = v57;
          if ( (unsigned int)(unsigned __int8)v56[7] + 8 <= v57 )
            v69 = (unsigned __int8)v56[7] + 8;
          v36 = (unsigned __int64)(v56 + 13);
          v54 = (unsigned __int64)&v56[v69];
          if ( (unsigned __int64)(v56 + 13) <= v54 )
            v59 = v56[12];
          if ( (unsigned __int64)(v56 + 14) > v54 )
            v494 = 0;
          else
            v494 = *(_BYTE *)v36;
          LOBYTE(v54) = 1;
        }
        v60 = v494;
      }
      if ( (_BYTE)v54 )
      {
        LOBYTE(v3) = v59;
        v70 = v60;
      }
      else
      {
LABEL_195:
        v58 = 0;
        v70 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v36, v54, &v522, a2, *(_DWORD *)(a2 + 48), v67, v55, v58, v3, v70, a2);
    }
  }
LABEL_200:
  IofCompleteRequest((PIRP)a2, 0);
  return v473;
}
