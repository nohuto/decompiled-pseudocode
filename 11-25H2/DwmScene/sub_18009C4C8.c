/*
 * XREFs of sub_18009C4C8 @ 0x18009C4C8
 * Callers:
 *     sub_180002FE0 @ 0x180002FE0 (sub_180002FE0.c)
 *     sub_180003160 @ 0x180003160 (sub_180003160.c)
 *     sub_1800031D0 @ 0x1800031D0 (sub_1800031D0.c)
 *     sub_180003240 @ 0x180003240 (sub_180003240.c)
 *     sub_1800032B0 @ 0x1800032B0 (sub_1800032B0.c)
 *     sub_180003320 @ 0x180003320 (sub_180003320.c)
 *     sub_180003390 @ 0x180003390 (sub_180003390.c)
 *     sub_180003400 @ 0x180003400 (sub_180003400.c)
 *     sub_180003470 @ 0x180003470 (sub_180003470.c)
 *     sub_1800034E0 @ 0x1800034E0 (sub_1800034E0.c)
 *     sub_180003550 @ 0x180003550 (sub_180003550.c)
 *     sub_1800035C0 @ 0x1800035C0 (sub_1800035C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18000C868 (_Init_thread_footer.c)
 *     sub_18000C8D0 @ 0x18000C8D0 (sub_18000C8D0.c)
 *     sub_180010F20 @ 0x180010F20 (sub_180010F20.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 *     sub_180073668 @ 0x180073668 (sub_180073668.c)
 *     sub_18007370C @ 0x18007370C (sub_18007370C.c)
 *     sub_18009BE44 @ 0x18009BE44 (sub_18009BE44.c)
 *     __alloca_probe @ 0x1800D4DE0 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=384
__int64 sub_18009C4C8()
{
  __int64 v0; // rbx
  _QWORD *ThreadLocalStoragePointer; // rdi
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm7
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm7
  __int128 v13; // xmm6
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm7
  __int128 v19; // xmm6
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm7
  __int128 v25; // xmm6
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int128 v30; // xmm7
  __int128 v31; // xmm6
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int128 v36; // xmm7
  __int128 v37; // xmm6
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int128 v42; // xmm7
  __int128 v43; // xmm6
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int128 v48; // xmm7
  __int128 v49; // xmm6
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int128 v54; // xmm7
  __int128 v55; // xmm6
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int128 v60; // xmm7
  __int128 v61; // xmm6
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int128 v66; // xmm7
  __int128 v67; // xmm6
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int128 v72; // xmm7
  __int128 v73; // xmm6
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int128 v78; // xmm7
  __int128 v79; // xmm6
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int128 v84; // xmm7
  __int128 v85; // xmm6
  _QWORD *v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int128 v90; // xmm7
  __int128 v91; // xmm6
  _QWORD *v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int128 v96; // xmm7
  __int128 v97; // xmm6
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int128 v102; // xmm7
  __int128 v103; // xmm6
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int128 v108; // xmm7
  __int128 v109; // xmm6
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int128 v114; // xmm7
  __int128 v115; // xmm6
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int128 v120; // xmm7
  __int128 v121; // xmm6
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int128 v126; // xmm7
  __int128 v127; // xmm6
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int128 v132; // xmm7
  __int128 v133; // xmm6
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int128 v138; // xmm7
  __int128 v139; // xmm6
  _QWORD *v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int128 v144; // xmm7
  __int128 v145; // xmm6
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int128 v150; // xmm7
  __int128 v151; // xmm6
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int128 v156; // xmm7
  __int128 v157; // xmm6
  _QWORD *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int128 v162; // xmm7
  __int128 v163; // xmm6
  _QWORD *v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int128 v168; // xmm7
  __int128 v169; // xmm6
  _QWORD *v170; // rax
  _QWORD *v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int128 v174; // xmm7
  __int128 v175; // xmm6
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int128 v180; // xmm7
  __int128 v181; // xmm6
  _QWORD *v182; // rax
  _QWORD *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int128 v186; // xmm7
  __int128 v187; // xmm6
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int128 v192; // xmm7
  __int128 v193; // xmm6
  _QWORD *v194; // rax
  _QWORD *v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int128 v198; // xmm7
  __int128 v199; // xmm6
  _QWORD *v200; // rax
  _QWORD *v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int128 v204; // xmm7
  __int128 v205; // xmm6
  _QWORD *v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int128 v210; // xmm7
  __int128 v211; // xmm6
  _QWORD *v212; // rax
  _QWORD *v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int128 v216; // xmm7
  __int128 v217; // xmm6
  _QWORD *v218; // rax
  _QWORD *v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int128 v222; // xmm7
  __int128 v223; // xmm6
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  __int64 v226; // rax
  __int64 v227; // rax
  __int128 v228; // xmm7
  __int128 v229; // xmm6
  _QWORD *v230; // rax
  _QWORD *v231; // rax
  __int64 v232; // rax
  __int64 v233; // rax
  __int128 v234; // xmm7
  __int128 v235; // xmm6
  _QWORD *v236; // rax
  _QWORD *v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  __int128 v240; // xmm7
  __int128 v241; // xmm6
  _QWORD *v242; // rax
  _QWORD *v243; // rax
  __int64 v244; // rax
  __int64 v245; // rax
  __int128 v246; // xmm7
  __int128 v247; // xmm6
  _QWORD *v248; // rax
  _QWORD *v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int128 v252; // xmm7
  __int128 v253; // xmm6
  _QWORD *v254; // rax
  _QWORD *v255; // rax
  __int64 v256; // rax
  __int64 v257; // rax
  __int128 v258; // xmm7
  __int128 v259; // xmm6
  _QWORD *v260; // rax
  _QWORD *v261; // rax
  __int64 v262; // rax
  __int64 v263; // rax
  __int128 v264; // xmm7
  __int128 v265; // xmm6
  _QWORD *v266; // rax
  _QWORD *v267; // rax
  __int64 v268; // rax
  __int64 v269; // rax
  __int128 v270; // xmm7
  __int128 v271; // xmm6
  _QWORD *v272; // rax
  _QWORD *v273; // rax
  __int64 v274; // rax
  __int64 v275; // rax
  __int128 v276; // xmm7
  __int128 v277; // xmm6
  _QWORD *v278; // rax
  _QWORD *v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  __int128 v282; // xmm7
  __int128 v283; // xmm6
  _QWORD *v284; // rax
  _QWORD *v285; // rax
  __int64 v286; // rax
  __int64 v287; // rax
  __int128 v288; // xmm7
  __int128 v289; // xmm6
  _QWORD *v290; // rax
  _QWORD *v291; // rax
  __int64 v292; // rax
  __int64 v293; // rax
  __int128 v294; // xmm7
  __int128 v295; // xmm6
  _QWORD *v296; // rax
  _QWORD *v297; // rax
  __int64 v298; // rax
  __int64 v299; // rax
  __int128 v300; // xmm7
  __int128 v301; // xmm6
  _QWORD *v302; // rax
  _QWORD *v303; // rax
  __int64 v304; // rax
  __int64 v305; // rax
  __int128 v306; // xmm7
  __int128 v307; // xmm6
  _QWORD *v308; // rax
  _QWORD *v309; // rax
  __int64 v310; // rax
  __int64 v311; // rax
  __int128 v312; // xmm7
  __int128 v313; // xmm6
  _QWORD *v314; // rax
  _QWORD *v315; // rax
  __int64 v316; // rax
  __int64 v317; // rax
  __int128 v318; // xmm7
  __int128 v319; // xmm6
  _QWORD *v320; // rax
  _QWORD *v321; // rax
  __int64 v322; // rax
  __int64 v323; // rax
  __int128 v324; // xmm7
  __int128 v325; // xmm6
  _QWORD *v326; // rax
  _QWORD *v327; // rax
  __int64 v328; // rax
  __int64 v329; // rax
  __int128 v330; // xmm7
  __int128 v331; // xmm6
  _QWORD *v332; // rax
  _QWORD *v333; // rax
  __int64 v334; // rax
  __int64 v335; // rax
  __int128 v336; // xmm7
  __int128 v337; // xmm6
  _QWORD *v338; // rax
  _QWORD *v339; // rax
  __int64 v340; // rax
  __int64 v341; // rax
  __int128 v342; // xmm7
  __int128 v343; // xmm6
  _QWORD *v344; // rax
  _QWORD *v345; // rax
  __int64 v346; // rax
  __int64 v347; // rax
  __int128 v348; // xmm7
  __int128 v349; // xmm6
  _QWORD *v350; // rax
  _QWORD *v351; // rax
  __int64 v352; // rax
  __int64 v353; // rax
  __int128 v354; // xmm7
  __int128 v355; // xmm6
  _QWORD *v356; // rax
  _QWORD *v357; // rax
  __int64 v358; // rax
  __int64 v359; // rax
  __int128 v360; // xmm7
  __int128 v361; // xmm6
  _QWORD *v362; // rax
  _QWORD *v363; // rax
  __int64 v364; // rax
  __int64 v365; // rax
  __int128 v366; // xmm7
  __int128 v367; // xmm6
  _QWORD *v368; // rax
  _QWORD *v369; // rax
  __int64 v370; // rax
  __int64 v371; // rax
  __int128 v372; // xmm7
  __int128 v373; // xmm6
  _QWORD *v374; // rax
  _QWORD *v375; // rax
  __int64 v376; // rax
  __int64 v377; // rax
  __int128 v378; // xmm7
  __int128 v379; // xmm6
  _QWORD *v380; // rax
  _QWORD *v381; // rax
  __int64 v382; // rax
  __int64 v383; // rax
  __int128 v384; // xmm7
  __int128 v385; // xmm6
  _QWORD *v386; // rax
  _QWORD *v387; // rax
  __int64 v388; // rax
  __int64 v389; // rax
  __int128 v390; // xmm7
  __int128 v391; // xmm6
  _QWORD *v392; // rax
  _QWORD *v393; // rax
  __int64 v394; // rax
  __int64 v395; // rax
  __int128 v396; // xmm7
  __int128 v397; // xmm6
  _QWORD *v398; // rax
  _QWORD *v399; // rax
  __int64 v400; // rax
  __int64 v401; // rax
  __int128 v402; // xmm7
  __int128 v403; // xmm6
  _QWORD *v404; // rax
  _QWORD *v405; // rax
  __int64 v406; // rax
  __int64 v407; // rax
  __int128 v408; // xmm7
  __int128 v409; // xmm6
  _QWORD *v410; // rax
  _QWORD *v411; // rax
  __int64 v412; // rax
  __int64 v413; // rax
  __int128 v414; // xmm7
  __int128 v415; // xmm6
  _QWORD *v416; // rax
  _QWORD *v417; // rax
  __int64 v418; // rax
  __int64 v419; // rax
  __int128 v420; // xmm7
  __int128 v421; // xmm6
  _QWORD *v422; // rax
  _QWORD *v423; // rax
  __int64 v424; // rax
  __int64 v425; // rax
  __int128 v426; // xmm7
  __int128 v427; // xmm6
  _QWORD *v428; // rax
  _QWORD *v429; // rax
  __int64 v430; // rax
  __int64 v431; // rax
  __int128 v432; // xmm7
  __int128 v433; // xmm6
  _QWORD *v434; // rax
  _QWORD *v435; // rax
  __int64 v436; // rax
  __int64 v437; // rax
  __int128 v438; // xmm7
  __int128 v439; // xmm6
  _QWORD *v440; // rax
  _QWORD *v441; // rax
  __int64 v442; // rax
  __int64 v443; // rax
  __int128 v444; // xmm7
  __int128 v445; // xmm6
  _QWORD *v446; // rax
  _QWORD *v447; // rax
  __int64 v448; // rax
  __int64 v449; // rax
  __int128 v450; // xmm7
  __int128 v451; // xmm6
  _QWORD *v452; // rax
  _QWORD *v453; // rax
  __int64 v454; // rax
  __int64 v455; // rax
  __int128 v456; // xmm7
  __int128 v457; // xmm6
  _QWORD *v458; // rax
  _QWORD *v459; // rax
  __int64 v460; // rax
  __int64 v461; // rax
  __int128 v462; // xmm7
  __int128 v463; // xmm6
  _QWORD *v464; // rax
  _QWORD *v465; // rax
  __int64 v466; // rax
  __int64 v467; // rax
  __int128 v468; // xmm7
  __int128 v469; // xmm6
  _QWORD *v470; // rax
  _QWORD *v471; // rax
  __int64 v472; // rax
  __int64 v473; // rax
  __int128 v474; // xmm7
  __int128 v475; // xmm6
  _QWORD *v476; // rax
  _QWORD *v477; // rax
  __int64 v478; // rax
  __int64 v479; // rax
  __int128 v480; // xmm7
  __int128 v481; // xmm6
  _QWORD *v482; // rax
  _QWORD *v483; // rax
  __int64 v484; // rax
  __int64 v485; // rax
  __int128 v486; // xmm7
  __int128 v487; // xmm6
  _QWORD *v488; // rax
  _QWORD *v489; // rax
  __int64 v490; // rax
  __int64 v491; // rax
  __int128 v492; // xmm7
  __int128 v493; // xmm6
  _QWORD *v494; // rax
  _QWORD *v495; // rax
  __int64 v496; // rax
  __int64 v497; // rax
  __int128 v498; // xmm7
  __int128 v499; // xmm6
  _QWORD *v500; // rax
  _QWORD *v501; // rax
  __int64 v502; // rax
  __int64 v503; // rax
  __int128 v504; // xmm7
  __int128 v505; // xmm6
  _QWORD *v506; // rax
  _QWORD *v507; // rax
  __int64 v508; // rax
  __int64 v509; // rax
  __int128 v510; // xmm7
  __int128 v511; // xmm6
  _QWORD *v512; // rax
  _QWORD *v513; // rax
  __int64 v514; // rax
  __int64 v515; // rax
  __int128 v516; // xmm7
  __int128 v517; // xmm6
  _QWORD *v518; // rax
  _QWORD *v519; // rax
  __int64 v520; // rax
  __int64 v521; // rax
  __int128 v522; // xmm7
  __int128 v523; // xmm6
  _QWORD *v524; // rax
  _QWORD *v525; // rax
  __int64 v526; // rax
  __int64 v527; // rax
  __int128 v528; // xmm7
  __int128 v529; // xmm6
  _QWORD *v530; // rax
  _QWORD *v531; // rax
  __int64 v532; // rax
  __int64 v533; // rax
  __int128 v534; // xmm7
  __int128 v535; // xmm6
  _QWORD *v536; // rax
  _QWORD *v537; // rax
  __int64 v538; // rax
  __int64 v539; // rax
  __int128 v540; // xmm7
  __int128 v541; // xmm6
  _QWORD *v542; // rax
  _QWORD *v543; // rax
  __int64 v544; // rax
  __int64 v545; // rax
  __int128 v546; // xmm7
  __int128 v547; // xmm6
  _QWORD *v548; // rax
  _QWORD *v549; // rax
  __int64 v550; // rax
  __int64 v551; // rax
  __int128 v552; // xmm7
  __int128 v553; // xmm6
  _QWORD *v554; // rax
  _QWORD *v555; // rax
  __int64 v556; // rax
  __int64 v557; // rax
  __int128 v558; // xmm7
  __int128 v559; // xmm6
  _QWORD *v560; // rax
  _QWORD *v561; // rax
  __int64 v562; // rax
  __int64 v563; // rax
  __int128 v564; // xmm7
  __int128 v565; // xmm6
  _QWORD *v566; // rax
  _QWORD *v567; // rax
  __int64 v568; // rax
  __int64 v569; // rax
  __int128 v570; // xmm7
  __int128 v571; // xmm6
  _QWORD *v572; // rax
  _QWORD *v573; // rax
  __int64 v574; // rax
  __int64 v575; // rax
  __int128 v576; // xmm7
  __int128 v577; // xmm6
  _QWORD *v578; // rax
  _QWORD *v579; // rax
  __int64 v580; // rax
  __int64 v581; // rax
  __int128 v582; // xmm7
  __int128 v583; // xmm6
  _QWORD *v584; // rax
  _QWORD *v585; // rax
  __int64 v586; // rax
  __int64 v587; // rax
  __int128 v588; // xmm7
  __int128 v589; // xmm6
  _QWORD *v590; // rax
  _QWORD *v591; // rax
  __int64 v592; // rax
  __int64 v593; // rax
  __int128 v594; // xmm7
  __int128 v595; // xmm6
  _QWORD *v596; // rax
  _QWORD *v597; // rax
  __int64 v598; // rax
  __int64 v599; // rax
  __int128 v600; // xmm7
  __int128 v601; // xmm6
  _QWORD *v602; // rax
  _QWORD *v603; // rax
  __int64 v604; // rax
  __int64 v605; // rax
  __int128 v606; // xmm7
  __int128 v607; // xmm6
  _QWORD *v608; // rax
  _QWORD *v609; // rax
  __int64 v610; // rax
  __int64 v611; // rax
  __int128 v612; // xmm7
  __int128 v613; // xmm6
  _QWORD *v614; // rax
  _QWORD *v615; // rax
  __int64 v616; // rax
  __int64 v617; // rax
  __int128 v618; // xmm7
  __int128 v619; // xmm6
  _QWORD *v620; // rax
  _QWORD *v621; // rax
  __int64 v622; // rax
  __int64 v623; // rax
  __int128 v624; // xmm7
  __int128 v625; // xmm6
  _QWORD *v626; // rax
  _QWORD *v627; // rax
  __int64 v628; // rax
  __int64 v629; // rax
  __int128 v630; // xmm7
  __int128 v631; // xmm6
  _QWORD *v632; // rax
  _QWORD *v633; // rax
  __int64 v634; // rax
  __int64 v635; // rax
  __int128 v636; // xmm7
  __int128 v637; // xmm6
  _QWORD *v638; // rax
  _QWORD *v639; // rax
  __int64 v640; // rax
  __int64 v641; // rax
  __int128 v642; // xmm7
  __int128 v643; // xmm6
  _QWORD *v644; // rax
  _QWORD *v645; // rax
  __int64 v646; // rax
  __int64 v647; // rax
  __int128 v648; // xmm7
  __int128 v649; // xmm6
  _QWORD *v650; // rax
  _QWORD *v651; // rax
  __int64 v652; // rax
  __int64 v653; // rax
  __int128 v654; // xmm7
  __int128 v655; // xmm6
  _QWORD *v656; // rax
  _QWORD *v657; // rax
  __int64 v658; // rax
  __int64 v659; // rax
  __int128 v660; // xmm7
  __int128 v661; // xmm6
  _QWORD *v662; // rax
  _QWORD *v663; // rax
  __int64 v664; // rax
  __int64 v665; // rax
  __int128 v666; // xmm7
  __int128 v667; // xmm6
  _QWORD *v668; // rax
  _QWORD *v669; // rax
  __int64 v670; // rax
  __int64 v671; // rax
  __int128 v672; // xmm7
  __int128 v673; // xmm6
  _QWORD *v674; // rax
  _QWORD *v675; // rax
  __int64 v676; // rax
  __int64 v677; // rax
  __int128 v678; // xmm7
  __int128 v679; // xmm6
  _QWORD *v680; // rax
  _QWORD *v681; // rax
  __int64 v682; // rax
  __int64 v683; // rax
  __int128 v684; // xmm7
  __int128 v685; // xmm6
  _QWORD *v686; // rax
  _QWORD *v687; // rax
  __int64 v688; // rax
  __int64 v689; // rax
  __int128 v690; // xmm7
  __int128 v691; // xmm6
  _QWORD *v692; // rax
  _QWORD *v693; // rax
  __int64 v694; // rax
  __int64 v695; // rax
  __int128 v696; // xmm7
  __int128 v697; // xmm6
  _QWORD *v698; // rax
  _QWORD *v699; // rax
  __int64 v700; // rax
  __int64 v701; // rax
  __int128 v702; // xmm7
  __int128 v703; // xmm6
  _QWORD *v704; // rax
  _QWORD *v705; // rax
  __int64 v706; // rax
  __int64 v707; // rax
  __int128 v708; // xmm7
  __int128 v709; // xmm6
  _QWORD *v710; // rax
  _QWORD *v711; // rax
  __int64 v712; // rax
  __int64 v713; // rax
  __int128 v714; // xmm7
  __int128 v715; // xmm6
  _QWORD *v716; // rax
  _QWORD *v717; // rax
  __int64 v718; // rax
  __int64 v719; // rax
  __int128 v720; // xmm7
  __int128 v721; // xmm6
  _QWORD *v722; // rax
  _QWORD *v723; // rax
  __int64 v724; // rax
  __int64 v725; // rax
  __int128 v726; // xmm7
  __int128 v727; // xmm6
  _QWORD *v728; // rax
  _QWORD *v729; // rax
  __int64 v730; // rax
  __int64 v731; // rax
  __int128 v732; // xmm7
  __int128 v733; // xmm6
  _QWORD *v734; // rax
  _QWORD *v735; // rax
  __int64 v736; // rax
  __int64 v737; // rax
  __int128 v738; // xmm7
  __int128 v739; // xmm6
  _QWORD *v740; // rax
  _QWORD *v741; // rax
  __int64 v742; // rax
  __int64 v743; // rax
  __int128 v744; // xmm7
  __int128 v745; // xmm6
  _QWORD *v746; // rax
  _QWORD *v747; // rax
  __int64 v748; // rax
  __int64 v749; // rax
  __int128 v750; // xmm7
  __int128 v751; // xmm6
  _QWORD *v752; // rax
  _QWORD *v753; // rax
  __int64 v754; // rax
  __int64 v755; // rax
  __int128 v756; // xmm7
  __int128 v757; // xmm6
  _QWORD *v758; // rax
  _QWORD *v759; // rax
  __int64 v760; // rax
  __int64 v761; // rax
  __int128 v762; // xmm7
  __int128 v763; // xmm6
  _QWORD *v764; // rax
  _QWORD *v765; // rax
  __int64 v766; // rax
  __int64 v767; // rax
  __int128 v769; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v770; // [rsp+40h] [rbp-C0h]
  __int128 v771; // [rsp+50h] [rbp-B0h]
  __int128 v772; // [rsp+60h] [rbp-A0h]
  __int128 v773; // [rsp+70h] [rbp-90h]
  __int128 v774; // [rsp+80h] [rbp-80h]
  __int128 v775; // [rsp+90h] [rbp-70h]
  __int128 v776; // [rsp+A0h] [rbp-60h]
  __int128 v777; // [rsp+B0h] [rbp-50h]
  __int128 v778; // [rsp+C0h] [rbp-40h]
  __int128 v779; // [rsp+D0h] [rbp-30h]
  __int128 v780; // [rsp+E0h] [rbp-20h]
  __int128 v781; // [rsp+F0h] [rbp-10h]
  __int128 v782; // [rsp+100h] [rbp+0h]
  __int128 v783; // [rsp+110h] [rbp+10h]
  __int128 v784; // [rsp+120h] [rbp+20h]
  __int128 v785; // [rsp+130h] [rbp+30h]
  __int128 v786; // [rsp+140h] [rbp+40h]
  __int128 v787; // [rsp+150h] [rbp+50h]
  __int128 v788; // [rsp+160h] [rbp+60h]
  __int128 v789; // [rsp+170h] [rbp+70h]
  __int128 v790; // [rsp+180h] [rbp+80h]
  __int128 v791; // [rsp+190h] [rbp+90h]
  __int128 v792; // [rsp+1A0h] [rbp+A0h]
  __int128 v793; // [rsp+1B0h] [rbp+B0h]
  __int128 v794; // [rsp+1C0h] [rbp+C0h]
  __int128 v795; // [rsp+1D0h] [rbp+D0h]
  __int128 v796; // [rsp+1E0h] [rbp+E0h]
  __int128 v797; // [rsp+1F0h] [rbp+F0h]
  __int128 v798; // [rsp+200h] [rbp+100h]
  __int128 v799; // [rsp+210h] [rbp+110h]
  __int128 v800; // [rsp+220h] [rbp+120h]
  __int128 v801; // [rsp+230h] [rbp+130h]
  __int128 v802; // [rsp+240h] [rbp+140h]
  __int128 v803; // [rsp+250h] [rbp+150h]
  __int128 v804; // [rsp+260h] [rbp+160h]
  __int128 v805; // [rsp+270h] [rbp+170h]
  __int128 v806; // [rsp+280h] [rbp+180h]
  __int128 v807; // [rsp+290h] [rbp+190h]
  __int128 v808; // [rsp+2A0h] [rbp+1A0h]
  __int128 v809; // [rsp+2B0h] [rbp+1B0h]
  __int128 v810; // [rsp+2C0h] [rbp+1C0h]
  __int128 v811; // [rsp+2D0h] [rbp+1D0h]
  __int128 v812; // [rsp+2E0h] [rbp+1E0h]
  __int128 v813; // [rsp+2F0h] [rbp+1F0h]
  __int128 v814; // [rsp+300h] [rbp+200h]
  __int128 v815; // [rsp+310h] [rbp+210h]
  __int128 v816; // [rsp+320h] [rbp+220h]
  __int128 v817; // [rsp+330h] [rbp+230h]
  __int128 v818; // [rsp+340h] [rbp+240h]
  __int128 v819; // [rsp+350h] [rbp+250h]
  __int128 v820; // [rsp+360h] [rbp+260h]
  __int128 v821; // [rsp+370h] [rbp+270h]
  __int128 v822; // [rsp+380h] [rbp+280h]
  __int128 v823; // [rsp+390h] [rbp+290h]
  __int128 v824; // [rsp+3A0h] [rbp+2A0h]
  __int128 v825; // [rsp+3B0h] [rbp+2B0h]
  __int128 v826; // [rsp+3C0h] [rbp+2C0h]
  __int128 v827; // [rsp+3D0h] [rbp+2D0h]
  __int128 v828; // [rsp+3E0h] [rbp+2E0h]
  __int128 v829; // [rsp+3F0h] [rbp+2F0h]
  __int128 v830; // [rsp+400h] [rbp+300h]
  __int128 v831; // [rsp+410h] [rbp+310h]
  __int128 v832; // [rsp+420h] [rbp+320h]
  __int128 v833; // [rsp+430h] [rbp+330h]
  __int128 v834; // [rsp+440h] [rbp+340h]
  __int128 v835; // [rsp+450h] [rbp+350h]
  __int128 v836; // [rsp+460h] [rbp+360h]
  __int128 v837; // [rsp+470h] [rbp+370h]
  __int128 v838; // [rsp+480h] [rbp+380h]
  __int128 v839; // [rsp+490h] [rbp+390h]
  __int128 v840; // [rsp+4A0h] [rbp+3A0h]
  __int128 v841; // [rsp+4B0h] [rbp+3B0h]
  __int128 v842; // [rsp+4C0h] [rbp+3C0h]
  __int128 v843; // [rsp+4D0h] [rbp+3D0h]
  __int128 v844; // [rsp+4E0h] [rbp+3E0h]
  __int128 v845; // [rsp+4F0h] [rbp+3F0h]
  __int128 v846; // [rsp+500h] [rbp+400h]
  __int128 v847; // [rsp+510h] [rbp+410h]
  __int128 v848; // [rsp+520h] [rbp+420h]
  __int128 v849; // [rsp+530h] [rbp+430h]
  __int128 v850; // [rsp+540h] [rbp+440h]
  __int128 v851; // [rsp+550h] [rbp+450h]
  __int128 v852; // [rsp+560h] [rbp+460h]
  __int128 v853; // [rsp+570h] [rbp+470h]
  __int128 v854; // [rsp+580h] [rbp+480h]
  __int128 v855; // [rsp+590h] [rbp+490h]
  __int128 v856; // [rsp+5A0h] [rbp+4A0h]
  __int128 v857; // [rsp+5B0h] [rbp+4B0h]
  __int128 v858; // [rsp+5C0h] [rbp+4C0h]
  __int128 v859; // [rsp+5D0h] [rbp+4D0h]
  __int128 v860; // [rsp+5E0h] [rbp+4E0h]
  __int128 v861; // [rsp+5F0h] [rbp+4F0h]
  __int128 v862; // [rsp+600h] [rbp+500h]
  __int128 v863; // [rsp+610h] [rbp+510h]
  __int128 v864; // [rsp+620h] [rbp+520h]
  __int128 v865; // [rsp+630h] [rbp+530h]
  __int128 v866; // [rsp+640h] [rbp+540h]
  __int128 v867; // [rsp+650h] [rbp+550h]
  __int128 v868; // [rsp+660h] [rbp+560h]
  __int128 v869; // [rsp+670h] [rbp+570h]
  __int128 v870; // [rsp+680h] [rbp+580h]
  __int128 v871; // [rsp+690h] [rbp+590h]
  __int128 v872; // [rsp+6A0h] [rbp+5A0h]
  __int128 v873; // [rsp+6B0h] [rbp+5B0h]
  __int128 v874; // [rsp+6C0h] [rbp+5C0h]
  __int128 v875; // [rsp+6D0h] [rbp+5D0h]
  __int128 v876; // [rsp+6E0h] [rbp+5E0h]
  __int128 v877; // [rsp+6F0h] [rbp+5F0h]
  __int128 v878; // [rsp+700h] [rbp+600h]
  __int128 v879; // [rsp+710h] [rbp+610h]
  __int128 v880; // [rsp+720h] [rbp+620h]
  __int128 v881; // [rsp+730h] [rbp+630h]
  __int128 v882; // [rsp+740h] [rbp+640h]
  __int128 v883; // [rsp+750h] [rbp+650h]
  __int128 v884; // [rsp+760h] [rbp+660h]
  __int128 v885; // [rsp+770h] [rbp+670h]
  __int128 v886; // [rsp+780h] [rbp+680h]
  __int128 v887; // [rsp+790h] [rbp+690h]
  __int128 v888; // [rsp+7A0h] [rbp+6A0h]
  __int128 v889; // [rsp+7B0h] [rbp+6B0h]
  __int128 v890; // [rsp+7C0h] [rbp+6C0h]
  __int128 v891; // [rsp+7D0h] [rbp+6D0h]
  __int128 v892; // [rsp+7E0h] [rbp+6E0h]
  __int128 v893; // [rsp+7F0h] [rbp+6F0h]
  __int128 v894; // [rsp+800h] [rbp+700h]
  __int128 v895; // [rsp+810h] [rbp+710h]
  __int128 v896; // [rsp+820h] [rbp+720h]
  __int128 v897; // [rsp+830h] [rbp+730h]
  __int128 v898; // [rsp+840h] [rbp+740h]
  __int128 v899; // [rsp+860h] [rbp+760h]
  __int128 v900; // [rsp+880h] [rbp+780h]
  __int128 v901; // [rsp+8A0h] [rbp+7A0h]
  __int128 v902; // [rsp+8C0h] [rbp+7C0h]
  __int128 v903; // [rsp+8E0h] [rbp+7E0h]
  __int128 v904; // [rsp+900h] [rbp+800h]
  __int128 v905; // [rsp+920h] [rbp+820h]
  __int128 v906; // [rsp+940h] [rbp+840h]
  __int128 v907; // [rsp+960h] [rbp+860h]
  __int128 v908; // [rsp+980h] [rbp+880h]
  __int128 v909; // [rsp+9A0h] [rbp+8A0h]
  __int128 v910; // [rsp+9C0h] [rbp+8C0h]
  __int128 v911; // [rsp+9E0h] [rbp+8E0h]
  __int128 v912; // [rsp+A00h] [rbp+900h]
  __int128 v913; // [rsp+A20h] [rbp+920h]
  __int128 v914; // [rsp+A40h] [rbp+940h]
  __int128 v915; // [rsp+A60h] [rbp+960h]
  __int128 v916; // [rsp+A80h] [rbp+980h]
  __int128 v917; // [rsp+AA0h] [rbp+9A0h]
  __int128 v918; // [rsp+AC0h] [rbp+9C0h]
  __int128 v919; // [rsp+AE0h] [rbp+9E0h]
  __int128 v920; // [rsp+B00h] [rbp+A00h]
  __int128 v921; // [rsp+B20h] [rbp+A20h]
  __int128 v922; // [rsp+B40h] [rbp+A40h]
  __int128 v923; // [rsp+B60h] [rbp+A60h]
  __int128 v924; // [rsp+B80h] [rbp+A80h]
  __int128 v925; // [rsp+BA0h] [rbp+AA0h]
  __int128 v926; // [rsp+BC0h] [rbp+AC0h]
  __int128 v927; // [rsp+BE0h] [rbp+AE0h]
  __int128 v928; // [rsp+C00h] [rbp+B00h]
  __int128 v929; // [rsp+C20h] [rbp+B20h]
  __int128 v930; // [rsp+C40h] [rbp+B40h]
  __int128 v931; // [rsp+C60h] [rbp+B60h]
  __int128 v932; // [rsp+C80h] [rbp+B80h]
  __int128 v933; // [rsp+CA0h] [rbp+BA0h]
  __int128 v934; // [rsp+CC0h] [rbp+BC0h]
  __int128 v935; // [rsp+CE0h] [rbp+BE0h]
  __int128 v936; // [rsp+D00h] [rbp+C00h]
  __int128 v937; // [rsp+D20h] [rbp+C20h]
  __int128 v938; // [rsp+D40h] [rbp+C40h]
  __int128 v939; // [rsp+D60h] [rbp+C60h]
  __int128 v940; // [rsp+D80h] [rbp+C80h]
  __int128 v941; // [rsp+DA0h] [rbp+CA0h]
  __int128 v942; // [rsp+DC0h] [rbp+CC0h]
  __int128 v943; // [rsp+DE0h] [rbp+CE0h]
  __int128 v944; // [rsp+E00h] [rbp+D00h]
  __int128 v945; // [rsp+E20h] [rbp+D20h]
  __int128 v946; // [rsp+E40h] [rbp+D40h]
  __int128 v947; // [rsp+E60h] [rbp+D60h]
  __int128 v948; // [rsp+E80h] [rbp+D80h]
  __int128 v949; // [rsp+EA0h] [rbp+DA0h]
  __int128 v950; // [rsp+EC0h] [rbp+DC0h]
  __int128 v951; // [rsp+EE0h] [rbp+DE0h]
  __int128 v952; // [rsp+F00h] [rbp+E00h]
  __int128 v953; // [rsp+F20h] [rbp+E20h]
  __int128 v954; // [rsp+F40h] [rbp+E40h]
  __int128 v955; // [rsp+F60h] [rbp+E60h]
  __int128 v956; // [rsp+F80h] [rbp+E80h]
  __int128 v957; // [rsp+FA0h] [rbp+EA0h]
  __int128 v958; // [rsp+FC0h] [rbp+EC0h]
  __int128 v959; // [rsp+FE0h] [rbp+EE0h]
  __int128 v960; // [rsp+1000h] [rbp+F00h]
  __int128 v961; // [rsp+1020h] [rbp+F20h]
  __int128 v962; // [rsp+1040h] [rbp+F40h]
  __int128 v963; // [rsp+1060h] [rbp+F60h]
  __int128 v964; // [rsp+1080h] [rbp+F80h]
  __int128 v965; // [rsp+10A0h] [rbp+FA0h]
  __int128 v966; // [rsp+10C0h] [rbp+FC0h]
  __int128 v967; // [rsp+10E0h] [rbp+FE0h]
  __int128 v968; // [rsp+1100h] [rbp+1000h]
  __int128 v969; // [rsp+1120h] [rbp+1020h]
  __int128 v970; // [rsp+1140h] [rbp+1040h]
  __int128 v971; // [rsp+1160h] [rbp+1060h]
  __int128 v972; // [rsp+1180h] [rbp+1080h]
  __int128 v973; // [rsp+11A0h] [rbp+10A0h]
  __int128 v974; // [rsp+11C0h] [rbp+10C0h]
  __int128 v975; // [rsp+11E0h] [rbp+10E0h]
  __int128 v976; // [rsp+1200h] [rbp+1100h]
  __int128 v977; // [rsp+1220h] [rbp+1120h]
  __int128 v978; // [rsp+1240h] [rbp+1140h]
  __int128 v979; // [rsp+1260h] [rbp+1160h]
  __int128 v980; // [rsp+1280h] [rbp+1180h]
  __int128 v981; // [rsp+12A0h] [rbp+11A0h]
  __int128 v982; // [rsp+12C0h] [rbp+11C0h]
  __int128 v983; // [rsp+12E0h] [rbp+11E0h]
  __int128 v984; // [rsp+1300h] [rbp+1200h]
  __int128 v985; // [rsp+1320h] [rbp+1220h]
  __int128 v986; // [rsp+1340h] [rbp+1240h]
  __int128 v987; // [rsp+1360h] [rbp+1260h]
  __int128 v988; // [rsp+1380h] [rbp+1280h]
  __int128 v989; // [rsp+13A0h] [rbp+12A0h]
  __int128 v990; // [rsp+13C0h] [rbp+12C0h]
  __int128 v991; // [rsp+13E0h] [rbp+12E0h]
  __int128 v992; // [rsp+1400h] [rbp+1300h]
  __int128 v993; // [rsp+1420h] [rbp+1320h]
  __int128 v994; // [rsp+1440h] [rbp+1340h]
  __int128 v995; // [rsp+1460h] [rbp+1360h]
  __int128 v996; // [rsp+1480h] [rbp+1380h]
  __int128 v997; // [rsp+14A0h] [rbp+13A0h]
  __int128 v998; // [rsp+14C0h] [rbp+13C0h]
  __int128 v999; // [rsp+14E0h] [rbp+13E0h]
  __int128 v1000; // [rsp+1500h] [rbp+1400h]
  __int128 v1001; // [rsp+1520h] [rbp+1420h]
  __int128 v1002; // [rsp+1540h] [rbp+1440h]
  __int128 v1003; // [rsp+1560h] [rbp+1460h]
  __int128 v1004; // [rsp+1580h] [rbp+1480h]
  __int128 v1005; // [rsp+15A0h] [rbp+14A0h]
  __int128 v1006; // [rsp+15C0h] [rbp+14C0h]
  __int128 v1007; // [rsp+15E0h] [rbp+14E0h]
  __int128 v1008; // [rsp+1600h] [rbp+1500h]
  __int128 v1009; // [rsp+1620h] [rbp+1520h]
  __int128 v1010; // [rsp+1640h] [rbp+1540h]
  __int128 v1011; // [rsp+1660h] [rbp+1560h]
  __int128 v1012; // [rsp+1680h] [rbp+1580h]
  __int128 v1013; // [rsp+16A0h] [rbp+15A0h]
  __int128 v1014; // [rsp+16C0h] [rbp+15C0h]
  __int128 v1015; // [rsp+16E0h] [rbp+15E0h]
  __int128 v1016; // [rsp+1700h] [rbp+1600h]
  __int128 v1017; // [rsp+1720h] [rbp+1620h]
  __int128 v1018; // [rsp+1740h] [rbp+1640h]
  __int128 v1019; // [rsp+1760h] [rbp+1660h]
  __int128 v1020; // [rsp+1780h] [rbp+1680h]
  __int128 v1021; // [rsp+17A0h] [rbp+16A0h]
  __int128 v1022; // [rsp+17C0h] [rbp+16C0h]
  __int128 v1023; // [rsp+17E0h] [rbp+16E0h]
  __int128 v1024; // [rsp+1800h] [rbp+1700h]
  __int128 v1025; // [rsp+1820h] [rbp+1720h]
  __int128 v1026; // [rsp+1840h] [rbp+1740h]
  _BYTE v1027[32]; // [rsp+1850h] [rbp+1750h] BYREF
  _BYTE v1028[32]; // [rsp+1870h] [rbp+1770h] BYREF
  _BYTE v1029[32]; // [rsp+1890h] [rbp+1790h] BYREF
  _BYTE v1030[32]; // [rsp+18B0h] [rbp+17B0h] BYREF
  _BYTE v1031[32]; // [rsp+18D0h] [rbp+17D0h] BYREF
  _BYTE v1032[32]; // [rsp+18F0h] [rbp+17F0h] BYREF
  _BYTE v1033[32]; // [rsp+1910h] [rbp+1810h] BYREF
  _BYTE v1034[32]; // [rsp+1930h] [rbp+1830h] BYREF
  _BYTE v1035[32]; // [rsp+1950h] [rbp+1850h] BYREF
  _BYTE v1036[32]; // [rsp+1970h] [rbp+1870h] BYREF
  _BYTE v1037[32]; // [rsp+1990h] [rbp+1890h] BYREF
  _BYTE v1038[32]; // [rsp+19B0h] [rbp+18B0h] BYREF
  _BYTE v1039[32]; // [rsp+19D0h] [rbp+18D0h] BYREF
  _BYTE v1040[32]; // [rsp+19F0h] [rbp+18F0h] BYREF
  _BYTE v1041[32]; // [rsp+1A10h] [rbp+1910h] BYREF
  _BYTE v1042[32]; // [rsp+1A30h] [rbp+1930h] BYREF
  _BYTE v1043[32]; // [rsp+1A50h] [rbp+1950h] BYREF
  _BYTE v1044[32]; // [rsp+1A70h] [rbp+1970h] BYREF
  _BYTE v1045[32]; // [rsp+1A90h] [rbp+1990h] BYREF
  _BYTE v1046[32]; // [rsp+1AB0h] [rbp+19B0h] BYREF
  _BYTE v1047[32]; // [rsp+1AD0h] [rbp+19D0h] BYREF
  _BYTE v1048[32]; // [rsp+1AF0h] [rbp+19F0h] BYREF
  _BYTE v1049[32]; // [rsp+1B10h] [rbp+1A10h] BYREF
  _BYTE v1050[32]; // [rsp+1B30h] [rbp+1A30h] BYREF
  _BYTE v1051[32]; // [rsp+1B50h] [rbp+1A50h] BYREF
  _BYTE v1052[32]; // [rsp+1B70h] [rbp+1A70h] BYREF
  _BYTE v1053[32]; // [rsp+1B90h] [rbp+1A90h] BYREF
  _BYTE v1054[32]; // [rsp+1BB0h] [rbp+1AB0h] BYREF
  _BYTE v1055[32]; // [rsp+1BD0h] [rbp+1AD0h] BYREF
  _BYTE v1056[32]; // [rsp+1BF0h] [rbp+1AF0h] BYREF
  _BYTE v1057[32]; // [rsp+1C10h] [rbp+1B10h] BYREF
  _BYTE v1058[32]; // [rsp+1C30h] [rbp+1B30h] BYREF
  _BYTE v1059[32]; // [rsp+1C50h] [rbp+1B50h] BYREF
  _BYTE v1060[32]; // [rsp+1C70h] [rbp+1B70h] BYREF
  _BYTE v1061[32]; // [rsp+1C90h] [rbp+1B90h] BYREF
  _BYTE v1062[32]; // [rsp+1CB0h] [rbp+1BB0h] BYREF
  _BYTE v1063[32]; // [rsp+1CD0h] [rbp+1BD0h] BYREF
  _BYTE v1064[32]; // [rsp+1CF0h] [rbp+1BF0h] BYREF
  _BYTE v1065[32]; // [rsp+1D10h] [rbp+1C10h] BYREF
  _BYTE v1066[32]; // [rsp+1D30h] [rbp+1C30h] BYREF
  _BYTE v1067[32]; // [rsp+1D50h] [rbp+1C50h] BYREF
  _BYTE v1068[32]; // [rsp+1D70h] [rbp+1C70h] BYREF
  _BYTE v1069[32]; // [rsp+1D90h] [rbp+1C90h] BYREF
  _BYTE v1070[32]; // [rsp+1DB0h] [rbp+1CB0h] BYREF
  _BYTE v1071[32]; // [rsp+1DD0h] [rbp+1CD0h] BYREF
  _BYTE v1072[32]; // [rsp+1DF0h] [rbp+1CF0h] BYREF
  _BYTE v1073[32]; // [rsp+1E10h] [rbp+1D10h] BYREF
  _BYTE v1074[32]; // [rsp+1E30h] [rbp+1D30h] BYREF
  _BYTE v1075[32]; // [rsp+1E50h] [rbp+1D50h] BYREF
  _BYTE v1076[32]; // [rsp+1E70h] [rbp+1D70h] BYREF
  _BYTE v1077[32]; // [rsp+1E90h] [rbp+1D90h] BYREF
  _BYTE v1078[32]; // [rsp+1EB0h] [rbp+1DB0h] BYREF
  _BYTE v1079[32]; // [rsp+1ED0h] [rbp+1DD0h] BYREF
  _BYTE v1080[32]; // [rsp+1EF0h] [rbp+1DF0h] BYREF
  _BYTE v1081[32]; // [rsp+1F10h] [rbp+1E10h] BYREF
  _BYTE v1082[32]; // [rsp+1F30h] [rbp+1E30h] BYREF
  _BYTE v1083[32]; // [rsp+1F50h] [rbp+1E50h] BYREF
  _BYTE v1084[32]; // [rsp+1F70h] [rbp+1E70h] BYREF
  _BYTE v1085[32]; // [rsp+1F90h] [rbp+1E90h] BYREF
  _BYTE v1086[32]; // [rsp+1FB0h] [rbp+1EB0h] BYREF
  _BYTE v1087[32]; // [rsp+1FD0h] [rbp+1ED0h] BYREF
  _BYTE v1088[32]; // [rsp+1FF0h] [rbp+1EF0h] BYREF
  _BYTE v1089[32]; // [rsp+2010h] [rbp+1F10h] BYREF
  _BYTE v1090[32]; // [rsp+2030h] [rbp+1F30h] BYREF
  _BYTE v1091[32]; // [rsp+2050h] [rbp+1F50h] BYREF
  _BYTE v1092[32]; // [rsp+2070h] [rbp+1F70h] BYREF
  _BYTE v1093[32]; // [rsp+2090h] [rbp+1F90h] BYREF
  _BYTE v1094[32]; // [rsp+20B0h] [rbp+1FB0h] BYREF
  _BYTE v1095[32]; // [rsp+20D0h] [rbp+1FD0h] BYREF
  _BYTE v1096[32]; // [rsp+20F0h] [rbp+1FF0h] BYREF
  _BYTE v1097[32]; // [rsp+2110h] [rbp+2010h] BYREF
  _BYTE v1098[32]; // [rsp+2130h] [rbp+2030h] BYREF
  _BYTE v1099[32]; // [rsp+2150h] [rbp+2050h] BYREF
  _BYTE v1100[32]; // [rsp+2170h] [rbp+2070h] BYREF
  _BYTE v1101[32]; // [rsp+2190h] [rbp+2090h] BYREF
  _BYTE v1102[32]; // [rsp+21B0h] [rbp+20B0h] BYREF
  _BYTE v1103[32]; // [rsp+21D0h] [rbp+20D0h] BYREF
  _BYTE v1104[32]; // [rsp+21F0h] [rbp+20F0h] BYREF
  _BYTE v1105[32]; // [rsp+2210h] [rbp+2110h] BYREF
  _BYTE v1106[32]; // [rsp+2230h] [rbp+2130h] BYREF
  _BYTE v1107[32]; // [rsp+2250h] [rbp+2150h] BYREF
  _BYTE v1108[32]; // [rsp+2270h] [rbp+2170h] BYREF
  _BYTE v1109[32]; // [rsp+2290h] [rbp+2190h] BYREF
  _BYTE v1110[32]; // [rsp+22B0h] [rbp+21B0h] BYREF
  _BYTE v1111[32]; // [rsp+22D0h] [rbp+21D0h] BYREF
  _BYTE v1112[32]; // [rsp+22F0h] [rbp+21F0h] BYREF
  _BYTE v1113[32]; // [rsp+2310h] [rbp+2210h] BYREF
  _BYTE v1114[32]; // [rsp+2330h] [rbp+2230h] BYREF
  _BYTE v1115[32]; // [rsp+2350h] [rbp+2250h] BYREF
  _BYTE v1116[32]; // [rsp+2370h] [rbp+2270h] BYREF
  _BYTE v1117[32]; // [rsp+2390h] [rbp+2290h] BYREF
  _BYTE v1118[32]; // [rsp+23B0h] [rbp+22B0h] BYREF
  _BYTE v1119[32]; // [rsp+23D0h] [rbp+22D0h] BYREF
  _BYTE v1120[32]; // [rsp+23F0h] [rbp+22F0h] BYREF
  _BYTE v1121[32]; // [rsp+2410h] [rbp+2310h] BYREF
  _BYTE v1122[32]; // [rsp+2430h] [rbp+2330h] BYREF
  _BYTE v1123[32]; // [rsp+2450h] [rbp+2350h] BYREF
  _BYTE v1124[32]; // [rsp+2470h] [rbp+2370h] BYREF
  _BYTE v1125[32]; // [rsp+2490h] [rbp+2390h] BYREF
  _BYTE v1126[32]; // [rsp+24B0h] [rbp+23B0h] BYREF
  _BYTE v1127[32]; // [rsp+24D0h] [rbp+23D0h] BYREF
  _BYTE v1128[32]; // [rsp+24F0h] [rbp+23F0h] BYREF
  _BYTE v1129[32]; // [rsp+2510h] [rbp+2410h] BYREF
  _BYTE v1130[32]; // [rsp+2530h] [rbp+2430h] BYREF
  _BYTE v1131[32]; // [rsp+2550h] [rbp+2450h] BYREF
  _BYTE v1132[32]; // [rsp+2570h] [rbp+2470h] BYREF
  _BYTE v1133[32]; // [rsp+2590h] [rbp+2490h] BYREF
  _BYTE v1134[32]; // [rsp+25B0h] [rbp+24B0h] BYREF
  _BYTE v1135[32]; // [rsp+25D0h] [rbp+24D0h] BYREF
  _BYTE v1136[32]; // [rsp+25F0h] [rbp+24F0h] BYREF
  _BYTE v1137[32]; // [rsp+2610h] [rbp+2510h] BYREF
  _BYTE v1138[32]; // [rsp+2630h] [rbp+2530h] BYREF
  _BYTE v1139[32]; // [rsp+2650h] [rbp+2550h] BYREF
  _BYTE v1140[32]; // [rsp+2670h] [rbp+2570h] BYREF
  _BYTE v1141[32]; // [rsp+2690h] [rbp+2590h] BYREF
  _BYTE v1142[32]; // [rsp+26B0h] [rbp+25B0h] BYREF
  _BYTE v1143[32]; // [rsp+26D0h] [rbp+25D0h] BYREF
  _BYTE v1144[32]; // [rsp+26F0h] [rbp+25F0h] BYREF
  _BYTE v1145[32]; // [rsp+2710h] [rbp+2610h] BYREF
  _BYTE v1146[32]; // [rsp+2730h] [rbp+2630h] BYREF
  _BYTE v1147[32]; // [rsp+2750h] [rbp+2650h] BYREF
  _BYTE v1148[32]; // [rsp+2770h] [rbp+2670h] BYREF
  _BYTE v1149[32]; // [rsp+2790h] [rbp+2690h] BYREF
  _BYTE v1150[32]; // [rsp+27B0h] [rbp+26B0h] BYREF
  _BYTE v1151[32]; // [rsp+27D0h] [rbp+26D0h] BYREF
  _BYTE v1152[32]; // [rsp+27F0h] [rbp+26F0h] BYREF
  _BYTE v1153[32]; // [rsp+2810h] [rbp+2710h] BYREF
  _BYTE v1154[32]; // [rsp+2830h] [rbp+2730h] BYREF
  _BYTE v1155[32]; // [rsp+2850h] [rbp+2750h] BYREF
  _QWORD v1156[4]; // [rsp+2870h] [rbp+2770h] BYREF
  _BYTE v1157[32]; // [rsp+2890h] [rbp+2790h] BYREF
  _QWORD v1158[4]; // [rsp+28B0h] [rbp+27B0h] BYREF
  _BYTE v1159[32]; // [rsp+28D0h] [rbp+27D0h] BYREF
  _QWORD v1160[4]; // [rsp+28F0h] [rbp+27F0h] BYREF
  _BYTE v1161[32]; // [rsp+2910h] [rbp+2810h] BYREF
  _QWORD v1162[4]; // [rsp+2930h] [rbp+2830h] BYREF
  _BYTE v1163[32]; // [rsp+2950h] [rbp+2850h] BYREF
  _QWORD v1164[4]; // [rsp+2970h] [rbp+2870h] BYREF
  _BYTE v1165[32]; // [rsp+2990h] [rbp+2890h] BYREF
  _QWORD v1166[4]; // [rsp+29B0h] [rbp+28B0h] BYREF
  _BYTE v1167[32]; // [rsp+29D0h] [rbp+28D0h] BYREF
  _QWORD v1168[4]; // [rsp+29F0h] [rbp+28F0h] BYREF
  _BYTE v1169[32]; // [rsp+2A10h] [rbp+2910h] BYREF
  _QWORD v1170[4]; // [rsp+2A30h] [rbp+2930h] BYREF
  _BYTE v1171[32]; // [rsp+2A50h] [rbp+2950h] BYREF
  _QWORD v1172[4]; // [rsp+2A70h] [rbp+2970h] BYREF
  _BYTE v1173[32]; // [rsp+2A90h] [rbp+2990h] BYREF
  _QWORD v1174[4]; // [rsp+2AB0h] [rbp+29B0h] BYREF
  _BYTE v1175[32]; // [rsp+2AD0h] [rbp+29D0h] BYREF
  _QWORD v1176[4]; // [rsp+2AF0h] [rbp+29F0h] BYREF
  _BYTE v1177[32]; // [rsp+2B10h] [rbp+2A10h] BYREF
  _QWORD v1178[4]; // [rsp+2B30h] [rbp+2A30h] BYREF
  _BYTE v1179[32]; // [rsp+2B50h] [rbp+2A50h] BYREF
  _QWORD v1180[4]; // [rsp+2B70h] [rbp+2A70h] BYREF
  _BYTE v1181[32]; // [rsp+2B90h] [rbp+2A90h] BYREF
  _QWORD v1182[4]; // [rsp+2BB0h] [rbp+2AB0h] BYREF
  _BYTE v1183[32]; // [rsp+2BD0h] [rbp+2AD0h] BYREF
  _QWORD v1184[4]; // [rsp+2BF0h] [rbp+2AF0h] BYREF
  _BYTE v1185[32]; // [rsp+2C10h] [rbp+2B10h] BYREF
  _QWORD v1186[4]; // [rsp+2C30h] [rbp+2B30h] BYREF
  _BYTE v1187[32]; // [rsp+2C50h] [rbp+2B50h] BYREF
  _QWORD v1188[4]; // [rsp+2C70h] [rbp+2B70h] BYREF
  _BYTE v1189[32]; // [rsp+2C90h] [rbp+2B90h] BYREF
  _QWORD v1190[4]; // [rsp+2CB0h] [rbp+2BB0h] BYREF
  _BYTE v1191[32]; // [rsp+2CD0h] [rbp+2BD0h] BYREF
  _QWORD v1192[4]; // [rsp+2CF0h] [rbp+2BF0h] BYREF
  _BYTE v1193[32]; // [rsp+2D10h] [rbp+2C10h] BYREF
  _QWORD v1194[4]; // [rsp+2D30h] [rbp+2C30h] BYREF
  _BYTE v1195[32]; // [rsp+2D50h] [rbp+2C50h] BYREF
  _QWORD v1196[4]; // [rsp+2D70h] [rbp+2C70h] BYREF
  _QWORD v1197[4]; // [rsp+2D90h] [rbp+2C90h] BYREF
  _BYTE v1198[32]; // [rsp+2DB0h] [rbp+2CB0h] BYREF
  _BYTE v1199[32]; // [rsp+2DD0h] [rbp+2CD0h] BYREF
  _QWORD v1200[4]; // [rsp+2DF0h] [rbp+2CF0h] BYREF
  _BYTE v1201[32]; // [rsp+2E10h] [rbp+2D10h] BYREF
  _BYTE v1202[32]; // [rsp+2E30h] [rbp+2D30h] BYREF
  _QWORD v1203[4]; // [rsp+2E50h] [rbp+2D50h] BYREF
  _QWORD v1204[4]; // [rsp+2E70h] [rbp+2D70h] BYREF
  _BYTE v1205[32]; // [rsp+2E90h] [rbp+2D90h] BYREF
  _QWORD v1206[4]; // [rsp+2EB0h] [rbp+2DB0h] BYREF
  _BYTE v1207[32]; // [rsp+2ED0h] [rbp+2DD0h] BYREF
  _BYTE v1208[32]; // [rsp+2EF0h] [rbp+2DF0h] BYREF
  _QWORD v1209[4]; // [rsp+2F10h] [rbp+2E10h] BYREF
  _BYTE v1210[32]; // [rsp+2F30h] [rbp+2E30h] BYREF
  _BYTE v1211[32]; // [rsp+2F50h] [rbp+2E50h] BYREF
  _QWORD v1212[4]; // [rsp+2F70h] [rbp+2E70h] BYREF
  _QWORD v1213[4]; // [rsp+2F90h] [rbp+2E90h] BYREF
  _BYTE v1214[32]; // [rsp+2FB0h] [rbp+2EB0h] BYREF
  _QWORD v1215[4]; // [rsp+2FD0h] [rbp+2ED0h] BYREF
  _QWORD v1216[4]; // [rsp+2FF0h] [rbp+2EF0h] BYREF
  _BYTE v1217[32]; // [rsp+3010h] [rbp+2F10h] BYREF
  _QWORD v1218[4]; // [rsp+3030h] [rbp+2F30h] BYREF
  _BYTE v1219[32]; // [rsp+3050h] [rbp+2F50h] BYREF
  _BYTE v1220[32]; // [rsp+3070h] [rbp+2F70h] BYREF
  _QWORD v1221[4]; // [rsp+3090h] [rbp+2F90h] BYREF
  _QWORD v1222[4]; // [rsp+30B0h] [rbp+2FB0h] BYREF
  _BYTE v1223[32]; // [rsp+30D0h] [rbp+2FD0h] BYREF
  _QWORD v1224[4]; // [rsp+30F0h] [rbp+2FF0h] BYREF
  _QWORD v1225[4]; // [rsp+3110h] [rbp+3010h] BYREF
  _BYTE v1226[32]; // [rsp+3130h] [rbp+3030h] BYREF
  _QWORD v1227[4]; // [rsp+3150h] [rbp+3050h] BYREF
  _BYTE v1228[32]; // [rsp+3170h] [rbp+3070h] BYREF
  _BYTE v1229[32]; // [rsp+3190h] [rbp+3090h] BYREF
  _QWORD v1230[4]; // [rsp+31B0h] [rbp+30B0h] BYREF
  _QWORD v1231[4]; // [rsp+31D0h] [rbp+30D0h] BYREF
  _BYTE v1232[32]; // [rsp+31F0h] [rbp+30F0h] BYREF
  _QWORD v1233[4]; // [rsp+3210h] [rbp+3110h] BYREF
  _BYTE v1234[32]; // [rsp+3230h] [rbp+3130h] BYREF
  _BYTE v1235[32]; // [rsp+3250h] [rbp+3150h] BYREF
  _QWORD v1236[4]; // [rsp+3270h] [rbp+3170h] BYREF
  _BYTE v1237[32]; // [rsp+3290h] [rbp+3190h] BYREF
  _BYTE v1238[32]; // [rsp+32B0h] [rbp+31B0h] BYREF
  _QWORD v1239[4]; // [rsp+32D0h] [rbp+31D0h] BYREF
  _QWORD v1240[4]; // [rsp+32F0h] [rbp+31F0h] BYREF
  _BYTE v1241[32]; // [rsp+3310h] [rbp+3210h] BYREF
  _QWORD v1242[4]; // [rsp+3330h] [rbp+3230h] BYREF
  _QWORD v1243[4]; // [rsp+3350h] [rbp+3250h] BYREF
  _BYTE v1244[32]; // [rsp+3370h] [rbp+3270h] BYREF
  _QWORD v1245[4]; // [rsp+3390h] [rbp+3290h] BYREF
  _BYTE v1246[32]; // [rsp+33B0h] [rbp+32B0h] BYREF
  _BYTE v1247[32]; // [rsp+33D0h] [rbp+32D0h] BYREF
  _QWORD v1248[4]; // [rsp+33F0h] [rbp+32F0h] BYREF
  _QWORD v1249[4]; // [rsp+3410h] [rbp+3310h] BYREF
  _QWORD v1250[4]; // [rsp+3430h] [rbp+3330h] BYREF
  _QWORD v1251[4]; // [rsp+3450h] [rbp+3350h] BYREF
  _BYTE v1252[32]; // [rsp+3470h] [rbp+3370h] BYREF
  _BYTE v1253[32]; // [rsp+3490h] [rbp+3390h] BYREF
  _QWORD v1254[4]; // [rsp+34B0h] [rbp+33B0h] BYREF
  _QWORD v1255[4]; // [rsp+34D0h] [rbp+33D0h] BYREF
  _BYTE v1256[32]; // [rsp+34F0h] [rbp+33F0h] BYREF
  _QWORD v1257[4]; // [rsp+3510h] [rbp+3410h] BYREF
  _BYTE v1258[32]; // [rsp+3530h] [rbp+3430h] BYREF
  _BYTE v1259[32]; // [rsp+3550h] [rbp+3450h] BYREF
  _QWORD v1260[4]; // [rsp+3570h] [rbp+3470h] BYREF
  _BYTE v1261[32]; // [rsp+3590h] [rbp+3490h] BYREF
  _BYTE v1262[32]; // [rsp+35B0h] [rbp+34B0h] BYREF
  _QWORD v1263[4]; // [rsp+35D0h] [rbp+34D0h] BYREF
  _QWORD v1264[4]; // [rsp+35F0h] [rbp+34F0h] BYREF
  _BYTE v1265[32]; // [rsp+3610h] [rbp+3510h] BYREF
  _QWORD v1266[4]; // [rsp+3630h] [rbp+3530h] BYREF
  _QWORD v1267[4]; // [rsp+3650h] [rbp+3550h] BYREF
  _BYTE v1268[32]; // [rsp+3670h] [rbp+3570h] BYREF
  _QWORD v1269[4]; // [rsp+3690h] [rbp+3590h] BYREF
  _BYTE v1270[32]; // [rsp+36B0h] [rbp+35B0h] BYREF
  _BYTE v1271[32]; // [rsp+36D0h] [rbp+35D0h] BYREF
  _QWORD v1272[4]; // [rsp+36F0h] [rbp+35F0h] BYREF
  _QWORD v1273[4]; // [rsp+3710h] [rbp+3610h] BYREF
  _BYTE v1274[32]; // [rsp+3730h] [rbp+3630h] BYREF
  _QWORD v1275[4]; // [rsp+3750h] [rbp+3650h] BYREF
  _BYTE v1276[32]; // [rsp+3770h] [rbp+3670h] BYREF
  _BYTE v1277[32]; // [rsp+3790h] [rbp+3690h] BYREF
  _QWORD v1278[4]; // [rsp+37B0h] [rbp+36B0h] BYREF
  _BYTE v1279[32]; // [rsp+37D0h] [rbp+36D0h] BYREF
  _BYTE v1280[32]; // [rsp+37F0h] [rbp+36F0h] BYREF
  _QWORD v1281[4]; // [rsp+3810h] [rbp+3710h] BYREF
  _QWORD v1282[4]; // [rsp+3830h] [rbp+3730h] BYREF
  _BYTE v1283[32]; // [rsp+3850h] [rbp+3750h] BYREF
  _QWORD v1284[4]; // [rsp+3870h] [rbp+3770h] BYREF
  _BYTE v1285[32]; // [rsp+3890h] [rbp+3790h] BYREF
  _BYTE v1286[32]; // [rsp+38B0h] [rbp+37B0h] BYREF
  _QWORD v1287[4]; // [rsp+38D0h] [rbp+37D0h] BYREF
  _BYTE v1288[32]; // [rsp+38F0h] [rbp+37F0h] BYREF
  _BYTE v1289[32]; // [rsp+3910h] [rbp+3810h] BYREF
  _QWORD v1290[4]; // [rsp+3930h] [rbp+3830h] BYREF
  _QWORD v1291[4]; // [rsp+3950h] [rbp+3850h] BYREF
  _BYTE v1292[32]; // [rsp+3970h] [rbp+3870h] BYREF
  _QWORD v1293[4]; // [rsp+3990h] [rbp+3890h] BYREF
  _QWORD v1294[4]; // [rsp+39B0h] [rbp+38B0h] BYREF
  _BYTE v1295[32]; // [rsp+39D0h] [rbp+38D0h] BYREF
  _QWORD v1296[4]; // [rsp+39F0h] [rbp+38F0h] BYREF
  _BYTE v1297[32]; // [rsp+3A10h] [rbp+3910h] BYREF
  _BYTE v1298[32]; // [rsp+3A30h] [rbp+3930h] BYREF
  _QWORD v1299[4]; // [rsp+3A50h] [rbp+3950h] BYREF
  _QWORD v1300[4]; // [rsp+3A70h] [rbp+3970h] BYREF
  _BYTE v1301[32]; // [rsp+3A90h] [rbp+3990h] BYREF
  _QWORD v1302[4]; // [rsp+3AB0h] [rbp+39B0h] BYREF
  _QWORD v1303[4]; // [rsp+3AD0h] [rbp+39D0h] BYREF
  _BYTE v1304[32]; // [rsp+3AF0h] [rbp+39F0h] BYREF
  _QWORD v1305[4]; // [rsp+3B10h] [rbp+3A10h] BYREF
  _BYTE v1306[32]; // [rsp+3B30h] [rbp+3A30h] BYREF
  _BYTE v1307[32]; // [rsp+3B50h] [rbp+3A50h] BYREF
  _QWORD v1308[4]; // [rsp+3B70h] [rbp+3A70h] BYREF
  _QWORD v1309[4]; // [rsp+3B90h] [rbp+3A90h] BYREF
  _BYTE v1310[32]; // [rsp+3BB0h] [rbp+3AB0h] BYREF
  _QWORD v1311[4]; // [rsp+3BD0h] [rbp+3AD0h] BYREF
  _BYTE v1312[32]; // [rsp+3BF0h] [rbp+3AF0h] BYREF
  _BYTE v1313[32]; // [rsp+3C10h] [rbp+3B10h] BYREF
  _QWORD v1314[4]; // [rsp+3C30h] [rbp+3B30h] BYREF
  _BYTE v1315[32]; // [rsp+3C50h] [rbp+3B50h] BYREF
  _BYTE v1316[32]; // [rsp+3C70h] [rbp+3B70h] BYREF
  _QWORD v1317[4]; // [rsp+3C90h] [rbp+3B90h] BYREF
  _QWORD v1318[4]; // [rsp+3CB0h] [rbp+3BB0h] BYREF
  _BYTE v1319[32]; // [rsp+3CD0h] [rbp+3BD0h] BYREF
  _QWORD v1320[4]; // [rsp+3CF0h] [rbp+3BF0h] BYREF
  _QWORD v1321[4]; // [rsp+3D10h] [rbp+3C10h] BYREF
  _BYTE v1322[32]; // [rsp+3D30h] [rbp+3C30h] BYREF
  _QWORD v1323[4]; // [rsp+3D50h] [rbp+3C50h] BYREF
  _BYTE v1324[32]; // [rsp+3D70h] [rbp+3C70h] BYREF
  _BYTE v1325[32]; // [rsp+3D90h] [rbp+3C90h] BYREF
  _QWORD v1326[4]; // [rsp+3DB0h] [rbp+3CB0h] BYREF
  _QWORD v1327[4]; // [rsp+3DD0h] [rbp+3CD0h] BYREF
  _BYTE v1328[32]; // [rsp+3DF0h] [rbp+3CF0h] BYREF
  _QWORD v1329[4]; // [rsp+3E10h] [rbp+3D10h] BYREF
  _BYTE v1330[32]; // [rsp+3E30h] [rbp+3D30h] BYREF
  _BYTE v1331[32]; // [rsp+3E50h] [rbp+3D50h] BYREF
  _QWORD v1332[4]; // [rsp+3E70h] [rbp+3D70h] BYREF
  _BYTE v1333[32]; // [rsp+3E90h] [rbp+3D90h] BYREF
  _BYTE v1334[32]; // [rsp+3EB0h] [rbp+3DB0h] BYREF
  _QWORD v1335[4]; // [rsp+3ED0h] [rbp+3DD0h] BYREF
  _BYTE v1336[32]; // [rsp+3EF0h] [rbp+3DF0h] BYREF
  _BYTE v1337[32]; // [rsp+3F10h] [rbp+3E10h] BYREF
  _QWORD v1338[4]; // [rsp+3F30h] [rbp+3E30h] BYREF
  _QWORD v1339[4]; // [rsp+3F50h] [rbp+3E50h] BYREF
  _BYTE v1340[32]; // [rsp+3F70h] [rbp+3E70h] BYREF
  _QWORD v1341[4]; // [rsp+3F90h] [rbp+3E90h] BYREF
  _BYTE v1342[32]; // [rsp+3FB0h] [rbp+3EB0h] BYREF
  _BYTE v1343[32]; // [rsp+3FD0h] [rbp+3ED0h] BYREF
  _QWORD v1344[4]; // [rsp+3FF0h] [rbp+3EF0h] BYREF
  _BYTE v1345[32]; // [rsp+4010h] [rbp+3F10h] BYREF
  _BYTE v1346[32]; // [rsp+4030h] [rbp+3F30h] BYREF
  _QWORD v1347[4]; // [rsp+4050h] [rbp+3F50h] BYREF
  _QWORD v1348[4]; // [rsp+4070h] [rbp+3F70h] BYREF
  _BYTE v1349[32]; // [rsp+4090h] [rbp+3F90h] BYREF
  _QWORD v1350[4]; // [rsp+40B0h] [rbp+3FB0h] BYREF
  _QWORD v1351[4]; // [rsp+40D0h] [rbp+3FD0h] BYREF
  _BYTE v1352[32]; // [rsp+40F0h] [rbp+3FF0h] BYREF
  _QWORD v1353[4]; // [rsp+4110h] [rbp+4010h] BYREF
  _BYTE v1354[32]; // [rsp+4130h] [rbp+4030h] BYREF
  _BYTE v1355[32]; // [rsp+4150h] [rbp+4050h] BYREF
  _QWORD v1356[4]; // [rsp+4170h] [rbp+4070h] BYREF
  _QWORD v1357[4]; // [rsp+4190h] [rbp+4090h] BYREF
  _BYTE v1358[32]; // [rsp+41B0h] [rbp+40B0h] BYREF
  _QWORD v1359[4]; // [rsp+41D0h] [rbp+40D0h] BYREF
  _BYTE v1360[32]; // [rsp+41F0h] [rbp+40F0h] BYREF
  _BYTE v1361[32]; // [rsp+4210h] [rbp+4110h] BYREF
  _QWORD v1362[4]; // [rsp+4230h] [rbp+4130h] BYREF
  _BYTE v1363[32]; // [rsp+4250h] [rbp+4150h] BYREF
  _BYTE v1364[32]; // [rsp+4270h] [rbp+4170h] BYREF
  _QWORD v1365[4]; // [rsp+4290h] [rbp+4190h] BYREF
  _QWORD v1366[4]; // [rsp+42B0h] [rbp+41B0h] BYREF
  _BYTE v1367[32]; // [rsp+42D0h] [rbp+41D0h] BYREF
  _QWORD v1368[4]; // [rsp+42F0h] [rbp+41F0h] BYREF
  _BYTE v1369[32]; // [rsp+4310h] [rbp+4210h] BYREF
  _BYTE v1370[32]; // [rsp+4330h] [rbp+4230h] BYREF
  _QWORD v1371[4]; // [rsp+4350h] [rbp+4250h] BYREF
  _BYTE v1372[32]; // [rsp+4370h] [rbp+4270h] BYREF
  _BYTE v1373[32]; // [rsp+4390h] [rbp+4290h] BYREF
  _QWORD v1374[4]; // [rsp+43B0h] [rbp+42B0h] BYREF
  _QWORD v1375[4]; // [rsp+43D0h] [rbp+42D0h] BYREF
  _BYTE v1376[32]; // [rsp+43F0h] [rbp+42F0h] BYREF
  _QWORD v1377[4]; // [rsp+4410h] [rbp+4310h] BYREF
  _QWORD v1378[4]; // [rsp+4430h] [rbp+4330h] BYREF
  _BYTE v1379[32]; // [rsp+4450h] [rbp+4350h] BYREF
  _QWORD v1380[4]; // [rsp+4470h] [rbp+4370h] BYREF
  _BYTE v1381[32]; // [rsp+4490h] [rbp+4390h] BYREF
  _BYTE v1382[32]; // [rsp+44B0h] [rbp+43B0h] BYREF
  _QWORD v1383[4]; // [rsp+44D0h] [rbp+43D0h] BYREF
  _QWORD v1384[4]; // [rsp+44F0h] [rbp+43F0h] BYREF
  _BYTE v1385[32]; // [rsp+4510h] [rbp+4410h] BYREF
  _QWORD v1386[4]; // [rsp+4530h] [rbp+4430h] BYREF
  _QWORD v1387[4]; // [rsp+4550h] [rbp+4450h] BYREF
  _BYTE v1388[32]; // [rsp+4570h] [rbp+4470h] BYREF
  _QWORD v1389[4]; // [rsp+4590h] [rbp+4490h] BYREF
  _BYTE v1390[32]; // [rsp+45B0h] [rbp+44B0h] BYREF
  _BYTE v1391[32]; // [rsp+45D0h] [rbp+44D0h] BYREF
  _QWORD v1392[4]; // [rsp+45F0h] [rbp+44F0h] BYREF
  _QWORD v1393[4]; // [rsp+4610h] [rbp+4510h] BYREF
  _BYTE v1394[32]; // [rsp+4630h] [rbp+4530h] BYREF
  _QWORD v1395[4]; // [rsp+4650h] [rbp+4550h] BYREF
  _BYTE v1396[32]; // [rsp+4670h] [rbp+4570h] BYREF
  _BYTE v1397[32]; // [rsp+4690h] [rbp+4590h] BYREF
  _QWORD v1398[4]; // [rsp+46B0h] [rbp+45B0h] BYREF
  _BYTE v1399[32]; // [rsp+46D0h] [rbp+45D0h] BYREF
  _BYTE v1400[32]; // [rsp+46F0h] [rbp+45F0h] BYREF
  _QWORD v1401[4]; // [rsp+4710h] [rbp+4610h] BYREF
  _QWORD v1402[4]; // [rsp+4730h] [rbp+4630h] BYREF
  _BYTE v1403[32]; // [rsp+4750h] [rbp+4650h] BYREF
  _QWORD v1404[4]; // [rsp+4770h] [rbp+4670h] BYREF
  _QWORD v1405[4]; // [rsp+4790h] [rbp+4690h] BYREF
  _BYTE v1406[32]; // [rsp+47B0h] [rbp+46B0h] BYREF
  _QWORD v1407[4]; // [rsp+47D0h] [rbp+46D0h] BYREF
  _BYTE v1408[32]; // [rsp+47F0h] [rbp+46F0h] BYREF
  _BYTE v1409[32]; // [rsp+4810h] [rbp+4710h] BYREF
  _QWORD v1410[4]; // [rsp+4830h] [rbp+4730h] BYREF

  v0 = (unsigned int)TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_1801C8D70 > *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D70);
    if ( dword_1801C8D70 == -1 )
    {
      *(_QWORD *)&v866 = &unk_1801339B0;
      *((_QWORD *)&v866 + 1) = &unk_180134820;
      *(_QWORD *)&v962 = 0x100000005LL;
      v2 = sub_18009BE44();
      v3 = sub_180073668(v1156, 0LL, (__int64)v2, 6);
      v4 = sub_18001B518((__int64)v1155, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v3);
      v5 = sub_18001B448((__int64)v1027, v4, (__int64)"/Pixel");
      v769 = v866;
      v770 = v962;
      sub_18007370C(v5, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D70);
    }
  }
  if ( dword_1801C8D74 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D74);
    if ( dword_1801C8D74 == -1 )
    {
      *(_QWORD *)&v771 = &unk_180131910;
      *((_QWORD *)&v771 + 1) = &unk_1801329B8;
      v6 = v771;
      *(_QWORD *)&v899 = 0x100000005LL;
      v7 = v899;
      v8 = sub_18009BE44();
      v9 = sub_180073668(v1158, 1LL, (__int64)v8, 6);
      v10 = sub_18001B518((__int64)v1157, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v9);
      v11 = sub_18001B448((__int64)v1030, v10, (__int64)"/Pixel");
      v769 = v6;
      v770 = v7;
      sub_18007370C(v11, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D74);
    }
  }
  if ( dword_1801C8D78 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D78);
    if ( dword_1801C8D78 == -1 )
    {
      *(_QWORD *)&v772 = &unk_1801329C0;
      *((_QWORD *)&v772 + 1) = &unk_1801339A4;
      v12 = v772;
      *(_QWORD *)&v900 = 0x100000005LL;
      v13 = v900;
      v14 = sub_18009BE44();
      v15 = sub_180073668(v1160, 2LL, (__int64)v14, 6);
      v16 = sub_18001B518((__int64)v1159, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v15);
      v17 = sub_18001B448((__int64)v1033, v16, (__int64)"/Pixel");
      v769 = v12;
      v770 = v13;
      sub_18007370C(v17, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D78);
    }
  }
  if ( dword_1801C8D7C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D7C);
    if ( dword_1801C8D7C == -1 )
    {
      *(_QWORD *)&v773 = &unk_1801356E0;
      *((_QWORD *)&v773 + 1) = &unk_1801368F0;
      v18 = v773;
      *(_QWORD *)&v901 = 0x100000005LL;
      v19 = v901;
      v20 = sub_18009BE44();
      v21 = sub_180073668(v1162, 3LL, (__int64)v20, 6);
      v22 = sub_18001B518((__int64)v1161, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v21);
      v23 = sub_18001B448((__int64)v1036, v22, (__int64)"/Pixel");
      v769 = v18;
      v770 = v19;
      sub_18007370C(v23, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D7C);
    }
  }
  if ( dword_1801C8D80 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D80);
    if ( dword_1801C8D80 == -1 )
    {
      *(_QWORD *)&v774 = &unk_1801339B0;
      *((_QWORD *)&v774 + 1) = &unk_180134820;
      v24 = v774;
      *(_QWORD *)&v902 = 0x100000005LL;
      v25 = v902;
      v26 = sub_18009BE44();
      v27 = sub_180073668(v1164, 4LL, (__int64)v26, 6);
      v28 = sub_18001B518((__int64)v1163, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v27);
      v29 = sub_18001B448((__int64)v1039, v28, (__int64)"/Pixel");
      v769 = v24;
      v770 = v25;
      sub_18007370C(v29, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D80);
    }
  }
  if ( dword_1801C8D84 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D84);
    if ( dword_1801C8D84 == -1 )
    {
      *(_QWORD *)&v775 = &unk_180131910;
      *((_QWORD *)&v775 + 1) = &unk_1801329B8;
      v30 = v775;
      *(_QWORD *)&v903 = 0x100000005LL;
      v31 = v903;
      v32 = sub_18009BE44();
      v33 = sub_180073668(v1166, 5LL, (__int64)v32, 6);
      v34 = sub_18001B518((__int64)v1165, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v33);
      v35 = sub_18001B448((__int64)v1042, v34, (__int64)"/Pixel");
      v769 = v30;
      v770 = v31;
      sub_18007370C(v35, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D84);
    }
  }
  if ( dword_1801C8D88 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D88);
    if ( dword_1801C8D88 == -1 )
    {
      *(_QWORD *)&v776 = &unk_1801329C0;
      *((_QWORD *)&v776 + 1) = &unk_1801339A4;
      v36 = v776;
      *(_QWORD *)&v904 = 0x100000005LL;
      v37 = v904;
      v38 = sub_18009BE44();
      v39 = sub_180073668(v1168, 6LL, (__int64)v38, 6);
      v40 = sub_18001B518((__int64)v1167, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v39);
      v41 = sub_18001B448((__int64)v1045, v40, (__int64)"/Pixel");
      v769 = v36;
      v770 = v37;
      sub_18007370C(v41, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D88);
    }
  }
  if ( dword_1801C8D8C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D8C);
    if ( dword_1801C8D8C == -1 )
    {
      *(_QWORD *)&v777 = &unk_1801356E0;
      *((_QWORD *)&v777 + 1) = &unk_1801368F0;
      v42 = v777;
      *(_QWORD *)&v905 = 0x100000005LL;
      v43 = v905;
      v44 = sub_18009BE44();
      v45 = sub_180073668(v1170, 7LL, (__int64)v44, 6);
      v46 = sub_18001B518((__int64)v1169, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v45);
      v47 = sub_18001B448((__int64)v1048, v46, (__int64)"/Pixel");
      v769 = v42;
      v770 = v43;
      sub_18007370C(v47, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D8C);
    }
  }
  if ( dword_1801C8D90 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D90);
    if ( dword_1801C8D90 == -1 )
    {
      *(_QWORD *)&v778 = &unk_180134820;
      *((_QWORD *)&v778 + 1) = &unk_1801356D4;
      v48 = v778;
      *(_QWORD *)&v906 = 0x100000005LL;
      v49 = v906;
      v50 = sub_18009BE44();
      v51 = sub_180073668(v1172, 8LL, (__int64)v50, 6);
      v52 = sub_18001B518((__int64)v1171, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v51);
      v53 = sub_18001B448((__int64)v1051, v52, (__int64)"/Pixel");
      v769 = v48;
      v770 = v49;
      sub_18007370C(v53, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D90);
    }
  }
  if ( dword_1801C8D94 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D94);
    if ( dword_1801C8D94 == -1 )
    {
      *(_QWORD *)&v779 = &unk_18012C660;
      *((_QWORD *)&v779 + 1) = &unk_18012D790;
      v54 = v779;
      *(_QWORD *)&v907 = 0x100000005LL;
      v55 = v907;
      v56 = sub_18009BE44();
      v57 = sub_180073668(v1174, 9LL, (__int64)v56, 6);
      v58 = sub_18001B518((__int64)v1173, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v57);
      v59 = sub_18001B448((__int64)v1054, v58, (__int64)"/Pixel");
      v769 = v54;
      v770 = v55;
      sub_18007370C(v59, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D94);
    }
  }
  if ( dword_1801C8D98 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D98);
    if ( dword_1801C8D98 == -1 )
    {
      *(_QWORD *)&v780 = &unk_18012D790;
      *((_QWORD *)&v780 + 1) = &unk_18012E7E0;
      v60 = v780;
      *(_QWORD *)&v908 = 0x100000005LL;
      v61 = v908;
      v62 = sub_18009BE44();
      v63 = sub_180073668(v1176, 10LL, (__int64)v62, 6);
      v64 = sub_18001B518((__int64)v1175, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v63);
      v65 = sub_18001B448((__int64)v1057, v64, (__int64)"/Pixel");
      v769 = v60;
      v770 = v61;
      sub_18007370C(v65, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D98);
    }
  }
  if ( dword_1801C8D9C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8D9C);
    if ( dword_1801C8D9C == -1 )
    {
      *(_QWORD *)&v781 = &unk_18012B3E0;
      *((_QWORD *)&v781 + 1) = &unk_18012C65C;
      v66 = v781;
      *(_QWORD *)&v909 = 0x100000005LL;
      v67 = v909;
      v68 = sub_18009BE44();
      v69 = sub_180073668(v1178, 11LL, (__int64)v68, 6);
      v70 = sub_18001B518((__int64)v1177, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v69);
      v71 = sub_18001B448((__int64)v1060, v70, (__int64)"/Pixel");
      v769 = v66;
      v770 = v67;
      sub_18007370C(v71, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8D9C);
    }
  }
  if ( dword_1801C8DA0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DA0);
    if ( dword_1801C8DA0 == -1 )
    {
      *(_QWORD *)&v782 = &unk_180134820;
      *((_QWORD *)&v782 + 1) = &unk_1801356D4;
      v72 = v782;
      *(_QWORD *)&v910 = 0x100000005LL;
      v73 = v910;
      v74 = sub_18009BE44();
      v75 = sub_180073668(v1180, 12LL, (__int64)v74, 6);
      v76 = sub_18001B518((__int64)v1179, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v75);
      v77 = sub_18001B448((__int64)v1063, v76, (__int64)"/Pixel");
      v769 = v72;
      v770 = v73;
      sub_18007370C(v77, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DA0);
    }
  }
  if ( dword_1801C8DA4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DA4);
    if ( dword_1801C8DA4 == -1 )
    {
      *(_QWORD *)&v783 = &unk_18012C660;
      *((_QWORD *)&v783 + 1) = &unk_18012D790;
      v78 = v783;
      *(_QWORD *)&v911 = 0x100000005LL;
      v79 = v911;
      v80 = sub_18009BE44();
      v81 = sub_180073668(v1182, 13LL, (__int64)v80, 6);
      v82 = sub_18001B518((__int64)v1181, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v81);
      v83 = sub_18001B448((__int64)v1066, v82, (__int64)"/Pixel");
      v769 = v78;
      v770 = v79;
      sub_18007370C(v83, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DA4);
    }
  }
  if ( dword_1801C8DA8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DA8);
    if ( dword_1801C8DA8 == -1 )
    {
      *(_QWORD *)&v784 = &unk_18012D790;
      *((_QWORD *)&v784 + 1) = &unk_18012E7E0;
      v84 = v784;
      *(_QWORD *)&v912 = 0x100000005LL;
      v85 = v912;
      v86 = sub_18009BE44();
      v87 = sub_180073668(v1184, 14LL, (__int64)v86, 6);
      v88 = sub_18001B518((__int64)v1183, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v87);
      v89 = sub_18001B448((__int64)v1069, v88, (__int64)"/Pixel");
      v769 = v84;
      v770 = v85;
      sub_18007370C(v89, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DA8);
    }
  }
  if ( dword_1801C8DAC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DAC);
    if ( dword_1801C8DAC == -1 )
    {
      *(_QWORD *)&v785 = &unk_18012B3E0;
      *((_QWORD *)&v785 + 1) = &unk_18012C65C;
      v90 = v785;
      *(_QWORD *)&v913 = 0x100000005LL;
      v91 = v913;
      v92 = sub_18009BE44();
      v93 = sub_180073668(v1186, 15LL, (__int64)v92, 6);
      v94 = sub_18001B518((__int64)v1185, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v93);
      v95 = sub_18001B448((__int64)v1072, v94, (__int64)"/Pixel");
      v769 = v90;
      v770 = v91;
      sub_18007370C(v95, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DAC);
    }
  }
  if ( dword_1801C8DB0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DB0);
    if ( dword_1801C8DB0 == -1 )
    {
      *(_QWORD *)&v786 = &unk_1801309E0;
      *((_QWORD *)&v786 + 1) = &unk_18013190C;
      v96 = v786;
      *(_QWORD *)&v914 = 0x100000005LL;
      v97 = v914;
      v98 = sub_18009BE44();
      v99 = sub_180073668(v1188, 16LL, (__int64)v98, 6);
      v100 = sub_18001B518((__int64)v1187, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v99);
      v101 = sub_18001B448((__int64)v1075, v100, (__int64)"/Pixel");
      v769 = v96;
      v770 = v97;
      sub_18007370C(v101, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DB0);
    }
  }
  if ( dword_1801C8DB4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DB4);
    if ( dword_1801C8DB4 == -1 )
    {
      *(_QWORD *)&v787 = &unk_18012E7E0;
      *((_QWORD *)&v787 + 1) = &unk_18012F938;
      v102 = v787;
      *(_QWORD *)&v915 = 0x100000005LL;
      v103 = v915;
      v104 = sub_18009BE44();
      v105 = sub_180073668(v1190, 17LL, (__int64)v104, 6);
      v106 = sub_18001B518((__int64)v1189, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v105);
      v107 = sub_18001B448((__int64)v1078, v106, (__int64)"/Pixel");
      v769 = v102;
      v770 = v103;
      sub_18007370C(v107, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DB4);
    }
  }
  if ( dword_1801C8DB8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DB8);
    if ( dword_1801C8DB8 == -1 )
    {
      *(_QWORD *)&v788 = &unk_18012F940;
      *((_QWORD *)&v788 + 1) = &unk_1801309D4;
      v108 = v788;
      *(_QWORD *)&v916 = 0x100000005LL;
      v109 = v916;
      v110 = sub_18009BE44();
      v111 = sub_180073668(v1192, 18LL, (__int64)v110, 6);
      v112 = sub_18001B518((__int64)v1191, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v111);
      v113 = sub_18001B448((__int64)v1081, v112, (__int64)"/Pixel");
      v769 = v108;
      v770 = v109;
      sub_18007370C(v113, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DB8);
    }
  }
  if ( dword_1801C8DBC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DBC);
    if ( dword_1801C8DBC == -1 )
    {
      *(_QWORD *)&v789 = &unk_180126AE0;
      *((_QWORD *)&v789 + 1) = &unk_180127DA0;
      v114 = v789;
      *(_QWORD *)&v917 = 0x100000005LL;
      v115 = v917;
      v116 = sub_18009BE44();
      v117 = sub_180073668(v1194, 19LL, (__int64)v116, 6);
      v118 = sub_18001B518((__int64)v1193, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v117);
      v119 = sub_18001B448((__int64)v1084, v118, (__int64)"/Pixel");
      v769 = v114;
      v770 = v115;
      sub_18007370C(v119, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DBC);
    }
  }
  if ( dword_1801C8DC0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DC0);
    if ( dword_1801C8DC0 == -1 )
    {
      *(_QWORD *)&v790 = &unk_1801309E0;
      *((_QWORD *)&v790 + 1) = &unk_18013190C;
      v120 = v790;
      *(_QWORD *)&v918 = 0x100000005LL;
      v121 = v918;
      v122 = sub_18009BE44();
      v123 = sub_180073668(v1196, 20LL, (__int64)v122, 6);
      v124 = sub_18001B518((__int64)v1195, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v123);
      v125 = sub_18001B448((__int64)v1087, v124, (__int64)"/Pixel");
      v769 = v120;
      v770 = v121;
      sub_18007370C(v125, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DC0);
    }
  }
  if ( dword_1801C8DC4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DC4);
    if ( dword_1801C8DC4 == -1 )
    {
      *(_QWORD *)&v791 = &unk_18012E7E0;
      *((_QWORD *)&v791 + 1) = &unk_18012F938;
      v126 = v791;
      *(_QWORD *)&v919 = 0x100000005LL;
      v127 = v919;
      v128 = sub_18009BE44();
      v129 = sub_180073668(v1250, 21LL, (__int64)v128, 6);
      v130 = sub_18001B518((__int64)v1333, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v129);
      v131 = sub_18001B448((__int64)v1090, v130, (__int64)"/Pixel");
      v769 = v126;
      v770 = v127;
      sub_18007370C(v131, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DC4);
    }
  }
  if ( dword_1801C8DC8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DC8);
    if ( dword_1801C8DC8 == -1 )
    {
      *(_QWORD *)&v792 = &unk_18012F940;
      *((_QWORD *)&v792 + 1) = &unk_1801309D4;
      v132 = v792;
      *(_QWORD *)&v920 = 0x100000005LL;
      v133 = v920;
      v134 = sub_18009BE44();
      v135 = sub_180073668(v1225, 22LL, (__int64)v134, 6);
      v136 = sub_18001B518((__int64)v1198, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v135);
      v137 = sub_18001B448((__int64)v1091, v136, (__int64)"/Pixel");
      v769 = v132;
      v770 = v133;
      sub_18007370C(v137, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DC8);
    }
  }
  if ( dword_1801C8DCC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DCC);
    if ( dword_1801C8DCC == -1 )
    {
      *(_QWORD *)&v793 = &unk_180126AE0;
      *((_QWORD *)&v793 + 1) = &unk_180127DA0;
      v138 = v793;
      *(_QWORD *)&v921 = 0x100000005LL;
      v139 = v921;
      v140 = sub_18009BE44();
      v141 = sub_180073668(v1303, 23LL, (__int64)v140, 6);
      v142 = sub_18001B518((__int64)v1276, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v141);
      v143 = sub_18001B448((__int64)v1092, v142, (__int64)"/Pixel");
      v769 = v138;
      v770 = v139;
      sub_18007370C(v143, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DCC);
    }
  }
  if ( dword_1801C8DD0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DD0);
    if ( dword_1801C8DD0 == -1 )
    {
      *(_QWORD *)&v794 = &unk_180125B70;
      *((_QWORD *)&v794 + 1) = &unk_180126AE0;
      v144 = v794;
      *(_QWORD *)&v922 = 0x100000005LL;
      v145 = v922;
      v146 = sub_18009BE44();
      v147 = sub_180073668(v1387, 24LL, (__int64)v146, 6);
      v148 = sub_18001B518((__int64)v1360, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v147);
      v149 = sub_18001B448((__int64)v1093, v148, (__int64)"/Pixel");
      v769 = v144;
      v770 = v145;
      sub_18007370C(v149, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DD0);
    }
  }
  if ( dword_1801C8DD4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DD4);
    if ( dword_1801C8DD4 == -1 )
    {
      *(_QWORD *)&v795 = &unk_1801290E0;
      *((_QWORD *)&v795 + 1) = &unk_18012A2CC;
      v150 = v795;
      *(_QWORD *)&v923 = 0x100000005LL;
      v151 = v923;
      v152 = sub_18009BE44();
      v153 = sub_180073668(v1216, 25LL, (__int64)v152, 6);
      v154 = sub_18001B518((__int64)v1207, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v153);
      v155 = sub_18001B448((__int64)v1094, v154, (__int64)"/Pixel");
      v769 = v150;
      v770 = v151;
      sub_18007370C(v155, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DD4);
    }
  }
  if ( dword_1801C8DD8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DD8);
    if ( dword_1801C8DD8 == -1 )
    {
      *(_QWORD *)&v796 = &unk_18012A2D0;
      *((_QWORD *)&v796 + 1) = &unk_18012B3DC;
      v156 = v796;
      *(_QWORD *)&v924 = 0x100000005LL;
      v157 = v924;
      v158 = sub_18009BE44();
      v159 = sub_180073668(v1243, 26LL, (__int64)v158, 6);
      v160 = sub_18001B518((__int64)v1234, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v159);
      v161 = sub_18001B448((__int64)v1095, v160, (__int64)"/Pixel");
      v769 = v156;
      v770 = v157;
      sub_18007370C(v161, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DD8);
    }
  }
  if ( dword_1801C8DDC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DDC);
    if ( dword_1801C8DDC == -1 )
    {
      *(_QWORD *)&v797 = &unk_180127DA0;
      *((_QWORD *)&v797 + 1) = &unk_1801290D8;
      v162 = v797;
      *(_QWORD *)&v925 = 0x100000005LL;
      v163 = v925;
      v164 = sub_18009BE44();
      v165 = sub_180073668(v1267, 27LL, (__int64)v164, 6);
      v166 = sub_18001B518((__int64)v1258, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v165);
      v167 = sub_18001B448((__int64)v1096, v166, (__int64)"/Pixel");
      v769 = v162;
      v770 = v163;
      sub_18007370C(v167, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DDC);
    }
  }
  if ( dword_1801C8DE0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DE0);
    if ( dword_1801C8DE0 == -1 )
    {
      *(_QWORD *)&v798 = &unk_180125B70;
      *((_QWORD *)&v798 + 1) = &unk_180126AE0;
      v168 = v798;
      *(_QWORD *)&v926 = 0x100000005LL;
      v169 = v926;
      v170 = sub_18009BE44();
      v171 = sub_180073668(v1294, 28LL, (__int64)v170, 6);
      v172 = sub_18001B518((__int64)v1285, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v171);
      v173 = sub_18001B448((__int64)v1097, v172, (__int64)"/Pixel");
      v769 = v168;
      v770 = v169;
      sub_18007370C(v173, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DE0);
    }
  }
  if ( dword_1801C8DE4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DE4);
    if ( dword_1801C8DE4 == -1 )
    {
      *(_QWORD *)&v799 = &unk_1801290E0;
      *((_QWORD *)&v799 + 1) = &unk_18012A2CC;
      v174 = v799;
      *(_QWORD *)&v927 = 0x100000005LL;
      v175 = v927;
      v176 = sub_18009BE44();
      v177 = sub_180073668(v1321, 29LL, (__int64)v176, 6);
      v178 = sub_18001B518((__int64)v1312, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v177);
      v179 = sub_18001B448((__int64)v1098, v178, (__int64)"/Pixel");
      v769 = v174;
      v770 = v175;
      sub_18007370C(v179, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DE4);
    }
  }
  if ( dword_1801C8DE8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DE8);
    if ( dword_1801C8DE8 == -1 )
    {
      *(_QWORD *)&v800 = &unk_18012A2D0;
      *((_QWORD *)&v800 + 1) = &unk_18012B3DC;
      v180 = v800;
      *(_QWORD *)&v928 = 0x100000005LL;
      v181 = v928;
      v182 = sub_18009BE44();
      v183 = sub_180073668(v1351, 30LL, (__int64)v182, 6);
      v184 = sub_18001B518((__int64)v1342, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v183);
      v185 = sub_18001B448((__int64)v1099, v184, (__int64)"/Pixel");
      v769 = v180;
      v770 = v181;
      sub_18007370C(v185, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DE8);
    }
  }
  if ( dword_1801C8DEC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DEC);
    if ( dword_1801C8DEC == -1 )
    {
      *(_QWORD *)&v801 = &unk_180127DA0;
      *((_QWORD *)&v801 + 1) = &unk_1801290D8;
      v186 = v801;
      *(_QWORD *)&v929 = 0x100000005LL;
      v187 = v929;
      v188 = sub_18009BE44();
      v189 = sub_180073668(v1378, 31LL, (__int64)v188, 6);
      v190 = sub_18001B518((__int64)v1369, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v189);
      v191 = sub_18001B448((__int64)v1100, v190, (__int64)"/Pixel");
      v769 = v186;
      v770 = v187;
      sub_18007370C(v191, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DEC);
    }
  }
  if ( dword_1801C8DF0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DF0);
    if ( dword_1801C8DF0 == -1 )
    {
      *(_QWORD *)&v802 = &unk_1801225F0;
      *((_QWORD *)&v802 + 1) = &unk_18012367C;
      v192 = v802;
      *(_QWORD *)&v930 = 0x100000005LL;
      v193 = v930;
      v194 = sub_18009BE44();
      v195 = sub_180073668(v1405, 32LL, (__int64)v194, 6);
      v196 = sub_18001B518((__int64)v1396, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v195);
      v197 = sub_18001B448((__int64)v1101, v196, (__int64)"/Pixel");
      v769 = v192;
      v770 = v193;
      sub_18007370C(v197, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DF0);
    }
  }
  if ( dword_1801C8DF4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DF4);
    if ( dword_1801C8DF4 == -1 )
    {
      *(_QWORD *)&v803 = &unk_180120130;
      *((_QWORD *)&v803 + 1) = &unk_1801213E8;
      v198 = v803;
      *(_QWORD *)&v931 = 0x100000005LL;
      v199 = v931;
      v200 = sub_18009BE44();
      v201 = sub_180073668(v1204, 33LL, (__int64)v200, 6);
      v202 = sub_18001B518((__int64)v1201, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v201);
      v203 = sub_18001B448((__int64)v1102, v202, (__int64)"/Pixel");
      v769 = v198;
      v770 = v199;
      sub_18007370C(v203, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DF4);
    }
  }
  if ( dword_1801C8DF8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DF8);
    if ( dword_1801C8DF8 == -1 )
    {
      *(_QWORD *)&v804 = &unk_1801213F0;
      *((_QWORD *)&v804 + 1) = &unk_1801225E4;
      v204 = v804;
      *(_QWORD *)&v932 = 0x100000005LL;
      v205 = v932;
      v206 = sub_18009BE44();
      v207 = sub_180073668(v1213, 34LL, (__int64)v206, 6);
      v208 = sub_18001B518((__int64)v1210, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v207);
      v209 = sub_18001B448((__int64)v1103, v208, (__int64)"/Pixel");
      v769 = v204;
      v770 = v205;
      sub_18007370C(v209, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DF8);
    }
  }
  if ( dword_1801C8DFC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8DFC);
    if ( dword_1801C8DFC == -1 )
    {
      *(_QWORD *)&v805 = &unk_180124750;
      *((_QWORD *)&v805 + 1) = &unk_180125B70;
      v210 = v805;
      *(_QWORD *)&v933 = 0x100000005LL;
      v211 = v933;
      v212 = sub_18009BE44();
      v213 = sub_180073668(v1222, 35LL, (__int64)v212, 6);
      v214 = sub_18001B518((__int64)v1219, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v213);
      v215 = sub_18001B448((__int64)v1104, v214, (__int64)"/Pixel");
      v769 = v210;
      v770 = v211;
      sub_18007370C(v215, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8DFC);
    }
  }
  if ( dword_1801C8E00 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E00);
    if ( dword_1801C8E00 == -1 )
    {
      *(_QWORD *)&v806 = &unk_1801225F0;
      *((_QWORD *)&v806 + 1) = &unk_18012367C;
      v216 = v806;
      *(_QWORD *)&v934 = 0x100000005LL;
      v217 = v934;
      v218 = sub_18009BE44();
      v219 = sub_180073668(v1231, 36LL, (__int64)v218, 6);
      v220 = sub_18001B518((__int64)v1228, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v219);
      v221 = sub_18001B448((__int64)v1105, v220, (__int64)"/Pixel");
      v769 = v216;
      v770 = v217;
      sub_18007370C(v221, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E00);
    }
  }
  if ( dword_1801C8E04 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E04);
    if ( dword_1801C8E04 == -1 )
    {
      *(_QWORD *)&v807 = &unk_180120130;
      *((_QWORD *)&v807 + 1) = &unk_1801213E8;
      v222 = v807;
      *(_QWORD *)&v935 = 0x100000005LL;
      v223 = v935;
      v224 = sub_18009BE44();
      v225 = sub_180073668(v1240, 37LL, (__int64)v224, 6);
      v226 = sub_18001B518((__int64)v1237, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v225);
      v227 = sub_18001B448((__int64)v1106, v226, (__int64)"/Pixel");
      v769 = v222;
      v770 = v223;
      sub_18007370C(v227, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E04);
    }
  }
  if ( dword_1801C8E08 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E08);
    if ( dword_1801C8E08 == -1 )
    {
      *(_QWORD *)&v808 = &unk_1801213F0;
      *((_QWORD *)&v808 + 1) = &unk_1801225E4;
      v228 = v808;
      *(_QWORD *)&v936 = 0x100000005LL;
      v229 = v936;
      v230 = sub_18009BE44();
      v231 = sub_180073668(v1249, 38LL, (__int64)v230, 6);
      v232 = sub_18001B518((__int64)v1246, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v231);
      v233 = sub_18001B448((__int64)v1107, v232, (__int64)"/Pixel");
      v769 = v228;
      v770 = v229;
      sub_18007370C(v233, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E08);
    }
  }
  if ( dword_1801C8E0C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E0C);
    if ( dword_1801C8E0C == -1 )
    {
      *(_QWORD *)&v809 = &unk_180124750;
      *((_QWORD *)&v809 + 1) = &unk_180125B70;
      v234 = v809;
      *(_QWORD *)&v937 = 0x100000005LL;
      v235 = v937;
      v236 = sub_18009BE44();
      v237 = sub_180073668(v1255, 39LL, (__int64)v236, 6);
      v238 = sub_18001B518((__int64)v1252, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v237);
      v239 = sub_18001B448((__int64)v1108, v238, (__int64)"/Pixel");
      v769 = v234;
      v770 = v235;
      sub_18007370C(v239, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E0C);
    }
  }
  if ( dword_1801C8E10 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E10);
    if ( dword_1801C8E10 == -1 )
    {
      *(_QWORD *)&v810 = &unk_180123680;
      *((_QWORD *)&v810 + 1) = &unk_180124750;
      v240 = v810;
      *(_QWORD *)&v938 = 0x100000005LL;
      v241 = v938;
      v242 = sub_18009BE44();
      v243 = sub_180073668(v1264, 40LL, (__int64)v242, 6);
      v244 = sub_18001B518((__int64)v1261, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v243);
      v245 = sub_18001B448((__int64)v1109, v244, (__int64)"/Pixel");
      v769 = v240;
      v770 = v241;
      sub_18007370C(v245, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E10);
    }
  }
  if ( dword_1801C8E14 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E14);
    if ( dword_1801C8E14 == -1 )
    {
      *(_QWORD *)&v811 = &unk_18011A410;
      *((_QWORD *)&v811 + 1) = &unk_18011B75C;
      v246 = v811;
      *(_QWORD *)&v939 = 0x100000005LL;
      v247 = v939;
      v248 = sub_18009BE44();
      v249 = sub_180073668(v1273, 41LL, (__int64)v248, 6);
      v250 = sub_18001B518((__int64)v1270, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v249);
      v251 = sub_18001B448((__int64)v1110, v250, (__int64)"/Pixel");
      v769 = v246;
      v770 = v247;
      sub_18007370C(v251, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E14);
    }
  }
  if ( dword_1801C8E18 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E18);
    if ( dword_1801C8E18 == -1 )
    {
      *(_QWORD *)&v812 = &unk_18011B760;
      *((_QWORD *)&v812 + 1) = &unk_18011C9CC;
      v252 = v812;
      *(_QWORD *)&v940 = 0x100000005LL;
      v253 = v940;
      v254 = sub_18009BE44();
      v255 = sub_180073668(v1282, 42LL, (__int64)v254, 6);
      v256 = sub_18001B518((__int64)v1279, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v255);
      v257 = sub_18001B448((__int64)v1111, v256, (__int64)"/Pixel");
      v769 = v252;
      v770 = v253;
      sub_18007370C(v257, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E18);
    }
  }
  if ( dword_1801C8E1C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E1C);
    if ( dword_1801C8E1C == -1 )
    {
      *(_QWORD *)&v813 = &unk_180118F70;
      *((_QWORD *)&v813 + 1) = &unk_18011A408;
      v258 = v813;
      *(_QWORD *)&v941 = 0x100000005LL;
      v259 = v941;
      v260 = sub_18009BE44();
      v261 = sub_180073668(v1291, 43LL, (__int64)v260, 6);
      v262 = sub_18001B518((__int64)v1288, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v261);
      v263 = sub_18001B448((__int64)v1112, v262, (__int64)"/Pixel");
      v769 = v258;
      v770 = v259;
      sub_18007370C(v263, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E1C);
    }
  }
  if ( dword_1801C8E20 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E20);
    if ( dword_1801C8E20 == -1 )
    {
      *(_QWORD *)&v814 = &unk_180123680;
      *((_QWORD *)&v814 + 1) = &unk_180124750;
      v264 = v814;
      *(_QWORD *)&v942 = 0x100000005LL;
      v265 = v942;
      v266 = sub_18009BE44();
      v267 = sub_180073668(v1300, 44LL, (__int64)v266, 6);
      v268 = sub_18001B518((__int64)v1297, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v267);
      v269 = sub_18001B448((__int64)v1113, v268, (__int64)"/Pixel");
      v769 = v264;
      v770 = v265;
      sub_18007370C(v269, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E20);
    }
  }
  if ( dword_1801C8E24 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E24);
    if ( dword_1801C8E24 == -1 )
    {
      *(_QWORD *)&v815 = &unk_18011A410;
      *((_QWORD *)&v815 + 1) = &unk_18011B75C;
      v270 = v815;
      *(_QWORD *)&v943 = 0x100000005LL;
      v271 = v943;
      v272 = sub_18009BE44();
      v273 = sub_180073668(v1309, 45LL, (__int64)v272, 6);
      v274 = sub_18001B518((__int64)v1306, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v273);
      v275 = sub_18001B448((__int64)v1114, v274, (__int64)"/Pixel");
      v769 = v270;
      v770 = v271;
      sub_18007370C(v275, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E24);
    }
  }
  if ( dword_1801C8E28 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E28);
    if ( dword_1801C8E28 == -1 )
    {
      *(_QWORD *)&v816 = &unk_18011B760;
      *((_QWORD *)&v816 + 1) = &unk_18011C9CC;
      v276 = v816;
      *(_QWORD *)&v944 = 0x100000005LL;
      v277 = v944;
      v278 = sub_18009BE44();
      v279 = sub_180073668(v1318, 46LL, (__int64)v278, 6);
      v280 = sub_18001B518((__int64)v1315, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v279);
      v281 = sub_18001B448((__int64)v1115, v280, (__int64)"/Pixel");
      v769 = v276;
      v770 = v277;
      sub_18007370C(v281, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E28);
    }
  }
  if ( dword_1801C8E2C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E2C);
    if ( dword_1801C8E2C == -1 )
    {
      *(_QWORD *)&v817 = &unk_180118F70;
      *((_QWORD *)&v817 + 1) = &unk_18011A408;
      v282 = v817;
      *(_QWORD *)&v945 = 0x100000005LL;
      v283 = v945;
      v284 = sub_18009BE44();
      v285 = sub_180073668(v1327, 47LL, (__int64)v284, 6);
      v286 = sub_18001B518((__int64)v1324, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v285);
      v287 = sub_18001B448((__int64)v1116, v286, (__int64)"/Pixel");
      v769 = v282;
      v770 = v283;
      sub_18007370C(v287, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E2C);
    }
  }
  if ( dword_1801C8E30 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E30);
    if ( dword_1801C8E30 == -1 )
    {
      *(_QWORD *)&v818 = &unk_18011EFF0;
      *((_QWORD *)&v818 + 1) = &unk_18012012C;
      v288 = v818;
      *(_QWORD *)&v946 = 0x100000005LL;
      v289 = v946;
      v290 = sub_18009BE44();
      v291 = sub_180073668(v1339, 48LL, (__int64)v290, 6);
      v292 = sub_18001B518((__int64)v1336, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v291);
      v293 = sub_18001B448((__int64)v1117, v292, (__int64)"/Pixel");
      v769 = v288;
      v770 = v289;
      sub_18007370C(v293, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E30);
    }
  }
  if ( dword_1801C8E34 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E34);
    if ( dword_1801C8E34 == -1 )
    {
      *(_QWORD *)&v819 = &unk_18011C9D0;
      *((_QWORD *)&v819 + 1) = &unk_18011DD38;
      v294 = v819;
      *(_QWORD *)&v947 = 0x100000005LL;
      v295 = v947;
      v296 = sub_18009BE44();
      v297 = sub_180073668(v1348, 49LL, (__int64)v296, 6);
      v298 = sub_18001B518((__int64)v1345, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v297);
      v299 = sub_18001B448((__int64)v1118, v298, (__int64)"/Pixel");
      v769 = v294;
      v770 = v295;
      sub_18007370C(v299, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E34);
    }
  }
  if ( dword_1801C8E38 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E38);
    if ( dword_1801C8E38 == -1 )
    {
      *(_QWORD *)&v820 = &unk_18011DD40;
      *((_QWORD *)&v820 + 1) = &unk_18011EFE4;
      v300 = v820;
      *(_QWORD *)&v948 = 0x100000005LL;
      v301 = v948;
      v302 = sub_18009BE44();
      v303 = sub_180073668(v1357, 50LL, (__int64)v302, 6);
      v304 = sub_18001B518((__int64)v1354, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v303);
      v305 = sub_18001B448((__int64)v1119, v304, (__int64)"/Pixel");
      v769 = v300;
      v770 = v301;
      sub_18007370C(v305, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E38);
    }
  }
  if ( dword_1801C8E3C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E3C);
    if ( dword_1801C8E3C == -1 )
    {
      *(_QWORD *)&v821 = &unk_180113E30;
      *((_QWORD *)&v821 + 1) = &unk_180115300;
      v306 = v821;
      *(_QWORD *)&v949 = 0x100000005LL;
      v307 = v949;
      v308 = sub_18009BE44();
      v309 = sub_180073668(v1366, 51LL, (__int64)v308, 6);
      v310 = sub_18001B518((__int64)v1363, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v309);
      v311 = sub_18001B448((__int64)v1120, v310, (__int64)"/Pixel");
      v769 = v306;
      v770 = v307;
      sub_18007370C(v311, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E3C);
    }
  }
  if ( dword_1801C8E40 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E40);
    if ( dword_1801C8E40 == -1 )
    {
      *(_QWORD *)&v822 = &unk_18011EFF0;
      *((_QWORD *)&v822 + 1) = &unk_18012012C;
      v312 = v822;
      *(_QWORD *)&v950 = 0x100000005LL;
      v313 = v950;
      v314 = sub_18009BE44();
      v315 = sub_180073668(v1375, 52LL, (__int64)v314, 6);
      v316 = sub_18001B518((__int64)v1372, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v315);
      v317 = sub_18001B448((__int64)v1121, v316, (__int64)"/Pixel");
      v769 = v312;
      v770 = v313;
      sub_18007370C(v317, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E40);
    }
  }
  if ( dword_1801C8E44 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E44);
    if ( dword_1801C8E44 == -1 )
    {
      *(_QWORD *)&v823 = &unk_18011C9D0;
      *((_QWORD *)&v823 + 1) = &unk_18011DD38;
      v318 = v823;
      *(_QWORD *)&v951 = 0x100000005LL;
      v319 = v951;
      v320 = sub_18009BE44();
      v321 = sub_180073668(v1384, 53LL, (__int64)v320, 6);
      v322 = sub_18001B518((__int64)v1381, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v321);
      v323 = sub_18001B448((__int64)v1122, v322, (__int64)"/Pixel");
      v769 = v318;
      v770 = v319;
      sub_18007370C(v323, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E44);
    }
  }
  if ( dword_1801C8E48 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E48);
    if ( dword_1801C8E48 == -1 )
    {
      *(_QWORD *)&v824 = &unk_18011DD40;
      *((_QWORD *)&v824 + 1) = &unk_18011EFE4;
      v324 = v824;
      *(_QWORD *)&v952 = 0x100000005LL;
      v325 = v952;
      v326 = sub_18009BE44();
      v327 = sub_180073668(v1393, 54LL, (__int64)v326, 6);
      v328 = sub_18001B518((__int64)v1390, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v327);
      v329 = sub_18001B448((__int64)v1123, v328, (__int64)"/Pixel");
      v769 = v324;
      v770 = v325;
      sub_18007370C(v329, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E48);
    }
  }
  if ( dword_1801C8E4C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E4C);
    if ( dword_1801C8E4C == -1 )
    {
      *(_QWORD *)&v825 = &unk_180113E30;
      *((_QWORD *)&v825 + 1) = &unk_180115300;
      v330 = v825;
      *(_QWORD *)&v953 = 0x100000005LL;
      v331 = v953;
      v332 = sub_18009BE44();
      v333 = sub_180073668(v1402, 55LL, (__int64)v332, 6);
      v334 = sub_18001B518((__int64)v1399, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v333);
      v335 = sub_18001B448((__int64)v1124, v334, (__int64)"/Pixel");
      v769 = v330;
      v770 = v331;
      sub_18007370C(v335, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E4C);
    }
  }
  if ( dword_1801C8E50 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E50);
    if ( dword_1801C8E50 == -1 )
    {
      *(_QWORD *)&v826 = &unk_180112CB0;
      *((_QWORD *)&v826 + 1) = &unk_180113E30;
      v336 = v826;
      *(_QWORD *)&v954 = 0x100000005LL;
      v337 = v954;
      v338 = sub_18009BE44();
      v339 = sub_180073668(v1197, 56LL, (__int64)v338, 6);
      v340 = sub_18001B518((__int64)v1408, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v339);
      v341 = sub_18001B448((__int64)v1125, v340, (__int64)"/Pixel");
      v769 = v336;
      v770 = v337;
      sub_18007370C(v341, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E50);
    }
  }
  if ( dword_1801C8E54 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E54);
    if ( dword_1801C8E54 == -1 )
    {
      *(_QWORD *)&v827 = &unk_180116850;
      *((_QWORD *)&v827 + 1) = &unk_180117C4C;
      v342 = v827;
      *(_QWORD *)&v955 = 0x100000005LL;
      v343 = v955;
      v344 = sub_18009BE44();
      v345 = sub_180073668(v1200, 57LL, (__int64)v344, 6);
      v346 = sub_18001B518((__int64)v1199, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v345);
      v347 = sub_18001B448((__int64)v1126, v346, (__int64)"/Pixel");
      v769 = v342;
      v770 = v343;
      sub_18007370C(v347, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E54);
    }
  }
  if ( dword_1801C8E58 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E58);
    if ( dword_1801C8E58 == -1 )
    {
      *(_QWORD *)&v828 = &unk_180117C50;
      *((_QWORD *)&v828 + 1) = &unk_180118F6C;
      v348 = v828;
      *(_QWORD *)&v956 = 0x100000005LL;
      v349 = v956;
      v350 = sub_18009BE44();
      v351 = sub_180073668(v1203, 58LL, (__int64)v350, 6);
      v352 = sub_18001B518((__int64)v1202, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v351);
      v353 = sub_18001B448((__int64)v1127, v352, (__int64)"/Pixel");
      v769 = v348;
      v770 = v349;
      sub_18007370C(v353, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E58);
    }
  }
  if ( dword_1801C8E5C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E5C);
    if ( dword_1801C8E5C == -1 )
    {
      *(_QWORD *)&v829 = &unk_180115300;
      *((_QWORD *)&v829 + 1) = &unk_180116848;
      v354 = v829;
      *(_QWORD *)&v957 = 0x100000005LL;
      v355 = v957;
      v356 = sub_18009BE44();
      v357 = sub_180073668(v1206, 59LL, (__int64)v356, 6);
      v358 = sub_18001B518((__int64)v1205, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v357);
      v359 = sub_18001B448((__int64)v1128, v358, (__int64)"/Pixel");
      v769 = v354;
      v770 = v355;
      sub_18007370C(v359, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E5C);
    }
  }
  if ( dword_1801C8E60 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E60);
    if ( dword_1801C8E60 == -1 )
    {
      *(_QWORD *)&v830 = &unk_180112CB0;
      *((_QWORD *)&v830 + 1) = &unk_180113E30;
      v360 = v830;
      *(_QWORD *)&v958 = 0x100000005LL;
      v361 = v958;
      v362 = sub_18009BE44();
      v363 = sub_180073668(v1209, 60LL, (__int64)v362, 6);
      v364 = sub_18001B518((__int64)v1208, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v363);
      v365 = sub_18001B448((__int64)v1129, v364, (__int64)"/Pixel");
      v769 = v360;
      v770 = v361;
      sub_18007370C(v365, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E60);
    }
  }
  if ( dword_1801C8E64 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E64);
    if ( dword_1801C8E64 == -1 )
    {
      *(_QWORD *)&v831 = &unk_180116850;
      *((_QWORD *)&v831 + 1) = &unk_180117C4C;
      v366 = v831;
      *(_QWORD *)&v959 = 0x100000005LL;
      v367 = v959;
      v368 = sub_18009BE44();
      v369 = sub_180073668(v1212, 61LL, (__int64)v368, 6);
      v370 = sub_18001B518((__int64)v1211, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v369);
      v371 = sub_18001B448((__int64)v1130, v370, (__int64)"/Pixel");
      v769 = v366;
      v770 = v367;
      sub_18007370C(v371, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E64);
    }
  }
  if ( dword_1801C8E68 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E68);
    if ( dword_1801C8E68 == -1 )
    {
      *(_QWORD *)&v832 = &unk_180117C50;
      *((_QWORD *)&v832 + 1) = &unk_180118F6C;
      v372 = v832;
      *(_QWORD *)&v960 = 0x100000005LL;
      v373 = v960;
      v374 = sub_18009BE44();
      v375 = sub_180073668(v1215, 62LL, (__int64)v374, 6);
      v376 = sub_18001B518((__int64)v1214, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v375);
      v377 = sub_18001B448((__int64)v1131, v376, (__int64)"/Pixel");
      v769 = v372;
      v770 = v373;
      sub_18007370C(v377, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E68);
    }
  }
  if ( dword_1801C8E6C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E6C);
    if ( dword_1801C8E6C == -1 )
    {
      *(_QWORD *)&v833 = &unk_180115300;
      *((_QWORD *)&v833 + 1) = &unk_180116848;
      v378 = v833;
      *(_QWORD *)&v961 = 0x100000005LL;
      v379 = v961;
      v380 = sub_18009BE44();
      v381 = sub_180073668(v1218, 63LL, (__int64)v380, 6);
      v382 = sub_18001B518((__int64)v1217, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v381);
      v383 = sub_18001B448((__int64)v1132, v382, (__int64)"/Pixel");
      v769 = v378;
      v770 = v379;
      sub_18007370C(v383, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E6C);
    }
  }
  if ( dword_1801C8E70 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E70);
    if ( dword_1801C8E70 == -1 )
    {
      *(_QWORD *)&v834 = &unk_180112A60;
      *((_QWORD *)&v834 + 1) = &unk_180112CAC;
      v384 = v834;
      *(_QWORD *)&v994 = 0x100000001LL;
      v385 = v994;
      v386 = sub_18009BE44();
      v387 = sub_180073668(v1221, 0LL, (__int64)v386, 6);
      v388 = sub_18001B518((__int64)v1220, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v387);
      v389 = sub_18001B448((__int64)v1133, v388, (__int64)"/Vertex");
      v769 = v384;
      v770 = v385;
      sub_18007370C(v389, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E70);
    }
  }
  if ( dword_1801C8E74 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E74);
    if ( dword_1801C8E74 == -1 )
    {
      *(_QWORD *)&v835 = &unk_180112A60;
      *((_QWORD *)&v835 + 1) = &unk_180112CAC;
      v390 = v835;
      *(_QWORD *)&v963 = 0x100000001LL;
      v391 = v963;
      v392 = sub_18009BE44();
      v393 = sub_180073668(v1224, 1LL, (__int64)v392, 6);
      v394 = sub_18001B518((__int64)v1223, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v393);
      v395 = sub_18001B448((__int64)v1134, v394, (__int64)"/Vertex");
      v769 = v390;
      v770 = v391;
      sub_18007370C(v395, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E74);
    }
  }
  if ( dword_1801C8E78 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E78);
    if ( dword_1801C8E78 == -1 )
    {
      *(_QWORD *)&v836 = &unk_180112A60;
      *((_QWORD *)&v836 + 1) = &unk_180112CAC;
      v396 = v836;
      *(_QWORD *)&v964 = 0x100000001LL;
      v397 = v964;
      v398 = sub_18009BE44();
      v399 = sub_180073668(v1227, 2LL, (__int64)v398, 6);
      v400 = sub_18001B518((__int64)v1226, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v399);
      v401 = sub_18001B448((__int64)v1135, v400, (__int64)"/Vertex");
      v769 = v396;
      v770 = v397;
      sub_18007370C(v401, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E78);
    }
  }
  if ( dword_1801C8E7C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E7C);
    if ( dword_1801C8E7C == -1 )
    {
      *(_QWORD *)&v837 = &unk_180112A60;
      *((_QWORD *)&v837 + 1) = &unk_180112CAC;
      v402 = v837;
      *(_QWORD *)&v965 = 0x100000001LL;
      v403 = v965;
      v404 = sub_18009BE44();
      v405 = sub_180073668(v1230, 3LL, (__int64)v404, 6);
      v406 = sub_18001B518((__int64)v1229, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v405);
      v407 = sub_18001B448((__int64)v1136, v406, (__int64)"/Vertex");
      v769 = v402;
      v770 = v403;
      sub_18007370C(v407, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E7C);
    }
  }
  if ( dword_1801C8E80 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E80);
    if ( dword_1801C8E80 == -1 )
    {
      *(_QWORD *)&v838 = &unk_180112A60;
      *((_QWORD *)&v838 + 1) = &unk_180112CAC;
      v408 = v838;
      *(_QWORD *)&v966 = 0x100000001LL;
      v409 = v966;
      v410 = sub_18009BE44();
      v411 = sub_180073668(v1233, 4LL, (__int64)v410, 6);
      v412 = sub_18001B518((__int64)v1232, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v411);
      v413 = sub_18001B448((__int64)v1137, v412, (__int64)"/Vertex");
      v769 = v408;
      v770 = v409;
      sub_18007370C(v413, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E80);
    }
  }
  if ( dword_1801C8E84 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E84);
    if ( dword_1801C8E84 == -1 )
    {
      *(_QWORD *)&v839 = &unk_180112A60;
      *((_QWORD *)&v839 + 1) = &unk_180112CAC;
      v414 = v839;
      *(_QWORD *)&v967 = 0x100000001LL;
      v415 = v967;
      v416 = sub_18009BE44();
      v417 = sub_180073668(v1236, 5LL, (__int64)v416, 6);
      v418 = sub_18001B518((__int64)v1235, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v417);
      v419 = sub_18001B448((__int64)v1138, v418, (__int64)"/Vertex");
      v769 = v414;
      v770 = v415;
      sub_18007370C(v419, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E84);
    }
  }
  if ( dword_1801C8E88 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E88);
    if ( dword_1801C8E88 == -1 )
    {
      *(_QWORD *)&v840 = &unk_180112A60;
      *((_QWORD *)&v840 + 1) = &unk_180112CAC;
      v420 = v840;
      *(_QWORD *)&v968 = 0x100000001LL;
      v421 = v968;
      v422 = sub_18009BE44();
      v423 = sub_180073668(v1239, 6LL, (__int64)v422, 6);
      v424 = sub_18001B518((__int64)v1238, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v423);
      v425 = sub_18001B448((__int64)v1139, v424, (__int64)"/Vertex");
      v769 = v420;
      v770 = v421;
      sub_18007370C(v425, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E88);
    }
  }
  if ( dword_1801C8E8C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E8C);
    if ( dword_1801C8E8C == -1 )
    {
      *(_QWORD *)&v841 = &unk_180112A60;
      *((_QWORD *)&v841 + 1) = &unk_180112CAC;
      v426 = v841;
      *(_QWORD *)&v969 = 0x100000001LL;
      v427 = v969;
      v428 = sub_18009BE44();
      v429 = sub_180073668(v1242, 7LL, (__int64)v428, 6);
      v430 = sub_18001B518((__int64)v1241, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v429);
      v431 = sub_18001B448((__int64)v1140, v430, (__int64)"/Vertex");
      v769 = v426;
      v770 = v427;
      sub_18007370C(v431, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E8C);
    }
  }
  if ( dword_1801C8E90 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E90);
    if ( dword_1801C8E90 == -1 )
    {
      *(_QWORD *)&v842 = &unk_180112A60;
      *((_QWORD *)&v842 + 1) = &unk_180112CAC;
      v432 = v842;
      *(_QWORD *)&v970 = 0x100000001LL;
      v433 = v970;
      v434 = sub_18009BE44();
      v435 = sub_180073668(v1245, 8LL, (__int64)v434, 6);
      v436 = sub_18001B518((__int64)v1244, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v435);
      v437 = sub_18001B448((__int64)v1141, v436, (__int64)"/Vertex");
      v769 = v432;
      v770 = v433;
      sub_18007370C(v437, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E90);
    }
  }
  if ( dword_1801C8E94 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E94);
    if ( dword_1801C8E94 == -1 )
    {
      *(_QWORD *)&v843 = &unk_180112A60;
      *((_QWORD *)&v843 + 1) = &unk_180112CAC;
      v438 = v843;
      *(_QWORD *)&v971 = 0x100000001LL;
      v439 = v971;
      v440 = sub_18009BE44();
      v441 = sub_180073668(v1248, 9LL, (__int64)v440, 6);
      v442 = sub_18001B518((__int64)v1247, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v441);
      v443 = sub_18001B448((__int64)v1142, v442, (__int64)"/Vertex");
      v769 = v438;
      v770 = v439;
      sub_18007370C(v443, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E94);
    }
  }
  if ( dword_1801C8E98 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E98);
    if ( dword_1801C8E98 == -1 )
    {
      *(_QWORD *)&v844 = &unk_180112A60;
      *((_QWORD *)&v844 + 1) = &unk_180112CAC;
      v444 = v844;
      *(_QWORD *)&v972 = 0x100000001LL;
      v445 = v972;
      v446 = sub_18009BE44();
      v447 = sub_180073668(v1251, 10LL, (__int64)v446, 6);
      v448 = sub_18001B518((__int64)v1330, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v447);
      v449 = sub_18001B448((__int64)v1143, v448, (__int64)"/Vertex");
      v769 = v444;
      v770 = v445;
      sub_18007370C(v449, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E98);
    }
  }
  if ( dword_1801C8E9C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8E9C);
    if ( dword_1801C8E9C == -1 )
    {
      *(_QWORD *)&v845 = &unk_180112A60;
      *((_QWORD *)&v845 + 1) = &unk_180112CAC;
      v450 = v845;
      *(_QWORD *)&v973 = 0x100000001LL;
      v451 = v973;
      v452 = sub_18009BE44();
      v453 = sub_180073668(v1254, 11LL, (__int64)v452, 6);
      v454 = sub_18001B518((__int64)v1253, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v453);
      v455 = sub_18001B448((__int64)v1145, v454, (__int64)"/Vertex");
      v769 = v450;
      v770 = v451;
      sub_18007370C(v455, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8E9C);
    }
  }
  if ( dword_1801C8EA0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EA0);
    if ( dword_1801C8EA0 == -1 )
    {
      *(_QWORD *)&v846 = &unk_180112A60;
      *((_QWORD *)&v846 + 1) = &unk_180112CAC;
      v456 = v846;
      *(_QWORD *)&v974 = 0x100000001LL;
      v457 = v974;
      v458 = sub_18009BE44();
      v459 = sub_180073668(v1257, 12LL, (__int64)v458, 6);
      v460 = sub_18001B518((__int64)v1256, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v459);
      v461 = sub_18001B448((__int64)v1146, v460, (__int64)"/Vertex");
      v769 = v456;
      v770 = v457;
      sub_18007370C(v461, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EA0);
    }
  }
  if ( dword_1801C8EA4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EA4);
    if ( dword_1801C8EA4 == -1 )
    {
      *(_QWORD *)&v847 = &unk_180112A60;
      *((_QWORD *)&v847 + 1) = &unk_180112CAC;
      v462 = v847;
      *(_QWORD *)&v975 = 0x100000001LL;
      v463 = v975;
      v464 = sub_18009BE44();
      v465 = sub_180073668(v1260, 13LL, (__int64)v464, 6);
      v466 = sub_18001B518((__int64)v1259, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v465);
      v467 = sub_18001B448((__int64)v1147, v466, (__int64)"/Vertex");
      v769 = v462;
      v770 = v463;
      sub_18007370C(v467, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EA4);
    }
  }
  if ( dword_1801C8EA8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EA8);
    if ( dword_1801C8EA8 == -1 )
    {
      *(_QWORD *)&v848 = &unk_180112A60;
      *((_QWORD *)&v848 + 1) = &unk_180112CAC;
      v468 = v848;
      *(_QWORD *)&v976 = 0x100000001LL;
      v469 = v976;
      v470 = sub_18009BE44();
      v471 = sub_180073668(v1263, 14LL, (__int64)v470, 6);
      v472 = sub_18001B518((__int64)v1262, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v471);
      v473 = sub_18001B448((__int64)v1148, v472, (__int64)"/Vertex");
      v769 = v468;
      v770 = v469;
      sub_18007370C(v473, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EA8);
    }
  }
  if ( dword_1801C8EAC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EAC);
    if ( dword_1801C8EAC == -1 )
    {
      *(_QWORD *)&v849 = &unk_180112A60;
      *((_QWORD *)&v849 + 1) = &unk_180112CAC;
      v474 = v849;
      *(_QWORD *)&v977 = 0x100000001LL;
      v475 = v977;
      v476 = sub_18009BE44();
      v477 = sub_180073668(v1266, 15LL, (__int64)v476, 6);
      v478 = sub_18001B518((__int64)v1265, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v477);
      v479 = sub_18001B448((__int64)v1149, v478, (__int64)"/Vertex");
      v769 = v474;
      v770 = v475;
      sub_18007370C(v479, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EAC);
    }
  }
  if ( dword_1801C8EB0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EB0);
    if ( dword_1801C8EB0 == -1 )
    {
      *(_QWORD *)&v850 = &unk_180112A60;
      *((_QWORD *)&v850 + 1) = &unk_180112CAC;
      v480 = v850;
      *(_QWORD *)&v978 = 0x100000001LL;
      v481 = v978;
      v482 = sub_18009BE44();
      v483 = sub_180073668(v1269, 16LL, (__int64)v482, 6);
      v484 = sub_18001B518((__int64)v1268, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v483);
      v485 = sub_18001B448((__int64)v1150, v484, (__int64)"/Vertex");
      v769 = v480;
      v770 = v481;
      sub_18007370C(v485, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EB0);
    }
  }
  if ( dword_1801C8EB4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EB4);
    if ( dword_1801C8EB4 == -1 )
    {
      *(_QWORD *)&v851 = &unk_180112A60;
      *((_QWORD *)&v851 + 1) = &unk_180112CAC;
      v486 = v851;
      *(_QWORD *)&v979 = 0x100000001LL;
      v487 = v979;
      v488 = sub_18009BE44();
      v489 = sub_180073668(v1272, 17LL, (__int64)v488, 6);
      v490 = sub_18001B518((__int64)v1271, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v489);
      v491 = sub_18001B448((__int64)v1151, v490, (__int64)"/Vertex");
      v769 = v486;
      v770 = v487;
      sub_18007370C(v491, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EB4);
    }
  }
  if ( dword_1801C8EB8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EB8);
    if ( dword_1801C8EB8 == -1 )
    {
      *(_QWORD *)&v852 = &unk_180112A60;
      *((_QWORD *)&v852 + 1) = &unk_180112CAC;
      v492 = v852;
      *(_QWORD *)&v980 = 0x100000001LL;
      v493 = v980;
      v494 = sub_18009BE44();
      v495 = sub_180073668(v1275, 18LL, (__int64)v494, 6);
      v496 = sub_18001B518((__int64)v1274, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v495);
      v497 = sub_18001B448((__int64)v1152, v496, (__int64)"/Vertex");
      v769 = v492;
      v770 = v493;
      sub_18007370C(v497, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EB8);
    }
  }
  if ( dword_1801C8EBC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EBC);
    if ( dword_1801C8EBC == -1 )
    {
      *(_QWORD *)&v853 = &unk_180112A60;
      *((_QWORD *)&v853 + 1) = &unk_180112CAC;
      v498 = v853;
      *(_QWORD *)&v981 = 0x100000001LL;
      v499 = v981;
      v500 = sub_18009BE44();
      v501 = sub_180073668(v1278, 19LL, (__int64)v500, 6);
      v502 = sub_18001B518((__int64)v1277, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v501);
      v503 = sub_18001B448((__int64)v1153, v502, (__int64)"/Vertex");
      v769 = v498;
      v770 = v499;
      sub_18007370C(v503, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EBC);
    }
  }
  if ( dword_1801C8EC0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EC0);
    if ( dword_1801C8EC0 == -1 )
    {
      *(_QWORD *)&v854 = &unk_180112A60;
      *((_QWORD *)&v854 + 1) = &unk_180112CAC;
      v504 = v854;
      *(_QWORD *)&v982 = 0x100000001LL;
      v505 = v982;
      v506 = sub_18009BE44();
      v507 = sub_180073668(v1281, 20LL, (__int64)v506, 6);
      v508 = sub_18001B518((__int64)v1280, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v507);
      v509 = sub_18001B448((__int64)v1154, v508, (__int64)"/Vertex");
      v769 = v504;
      v770 = v505;
      sub_18007370C(v509, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EC0);
    }
  }
  if ( dword_1801C8EC4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EC4);
    if ( dword_1801C8EC4 == -1 )
    {
      *(_QWORD *)&v855 = &unk_180112A60;
      *((_QWORD *)&v855 + 1) = &unk_180112CAC;
      v510 = v855;
      *(_QWORD *)&v983 = 0x100000001LL;
      v511 = v983;
      v512 = sub_18009BE44();
      v513 = sub_180073668(v1284, 21LL, (__int64)v512, 6);
      v514 = sub_18001B518((__int64)v1283, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v513);
      v515 = sub_18001B448((__int64)v1028, v514, (__int64)"/Vertex");
      v769 = v510;
      v770 = v511;
      sub_18007370C(v515, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EC4);
    }
  }
  if ( dword_1801C8EC8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EC8);
    if ( dword_1801C8EC8 == -1 )
    {
      *(_QWORD *)&v856 = &unk_180112A60;
      *((_QWORD *)&v856 + 1) = &unk_180112CAC;
      v516 = v856;
      *(_QWORD *)&v984 = 0x100000001LL;
      v517 = v984;
      v518 = sub_18009BE44();
      v519 = sub_180073668(v1287, 22LL, (__int64)v518, 6);
      v520 = sub_18001B518((__int64)v1286, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v519);
      v521 = sub_18001B448((__int64)v1029, v520, (__int64)"/Vertex");
      v769 = v516;
      v770 = v517;
      sub_18007370C(v521, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EC8);
    }
  }
  if ( dword_1801C8ECC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8ECC);
    if ( dword_1801C8ECC == -1 )
    {
      *(_QWORD *)&v857 = &unk_180112A60;
      *((_QWORD *)&v857 + 1) = &unk_180112CAC;
      v522 = v857;
      *(_QWORD *)&v985 = 0x100000001LL;
      v523 = v985;
      v524 = sub_18009BE44();
      v525 = sub_180073668(v1290, 23LL, (__int64)v524, 6);
      v526 = sub_18001B518((__int64)v1289, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v525);
      v527 = sub_18001B448((__int64)v1031, v526, (__int64)"/Vertex");
      v769 = v522;
      v770 = v523;
      sub_18007370C(v527, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8ECC);
    }
  }
  if ( dword_1801C8ED0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8ED0);
    if ( dword_1801C8ED0 == -1 )
    {
      *(_QWORD *)&v858 = &unk_180112A60;
      *((_QWORD *)&v858 + 1) = &unk_180112CAC;
      v528 = v858;
      *(_QWORD *)&v986 = 0x100000001LL;
      v529 = v986;
      v530 = sub_18009BE44();
      v531 = sub_180073668(v1293, 24LL, (__int64)v530, 6);
      v532 = sub_18001B518((__int64)v1292, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v531);
      v533 = sub_18001B448((__int64)v1032, v532, (__int64)"/Vertex");
      v769 = v528;
      v770 = v529;
      sub_18007370C(v533, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8ED0);
    }
  }
  if ( dword_1801C8ED4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8ED4);
    if ( dword_1801C8ED4 == -1 )
    {
      *(_QWORD *)&v859 = &unk_180112A60;
      *((_QWORD *)&v859 + 1) = &unk_180112CAC;
      v534 = v859;
      *(_QWORD *)&v987 = 0x100000001LL;
      v535 = v987;
      v536 = sub_18009BE44();
      v537 = sub_180073668(v1296, 25LL, (__int64)v536, 6);
      v538 = sub_18001B518((__int64)v1295, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v537);
      v539 = sub_18001B448((__int64)v1034, v538, (__int64)"/Vertex");
      v769 = v534;
      v770 = v535;
      sub_18007370C(v539, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8ED4);
    }
  }
  if ( dword_1801C8ED8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8ED8);
    if ( dword_1801C8ED8 == -1 )
    {
      *(_QWORD *)&v860 = &unk_180112A60;
      *((_QWORD *)&v860 + 1) = &unk_180112CAC;
      v540 = v860;
      *(_QWORD *)&v988 = 0x100000001LL;
      v541 = v988;
      v542 = sub_18009BE44();
      v543 = sub_180073668(v1299, 26LL, (__int64)v542, 6);
      v544 = sub_18001B518((__int64)v1298, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v543);
      v545 = sub_18001B448((__int64)v1035, v544, (__int64)"/Vertex");
      v769 = v540;
      v770 = v541;
      sub_18007370C(v545, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8ED8);
    }
  }
  if ( dword_1801C8EDC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EDC);
    if ( dword_1801C8EDC == -1 )
    {
      *(_QWORD *)&v861 = &unk_180112A60;
      *((_QWORD *)&v861 + 1) = &unk_180112CAC;
      v546 = v861;
      *(_QWORD *)&v989 = 0x100000001LL;
      v547 = v989;
      v548 = sub_18009BE44();
      v549 = sub_180073668(v1302, 27LL, (__int64)v548, 6);
      v550 = sub_18001B518((__int64)v1301, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v549);
      v551 = sub_18001B448((__int64)v1037, v550, (__int64)"/Vertex");
      v769 = v546;
      v770 = v547;
      sub_18007370C(v551, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EDC);
    }
  }
  if ( dword_1801C8EE0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EE0);
    if ( dword_1801C8EE0 == -1 )
    {
      *(_QWORD *)&v862 = &unk_180112A60;
      *((_QWORD *)&v862 + 1) = &unk_180112CAC;
      v552 = v862;
      *(_QWORD *)&v990 = 0x100000001LL;
      v553 = v990;
      v554 = sub_18009BE44();
      v555 = sub_180073668(v1305, 28LL, (__int64)v554, 6);
      v556 = sub_18001B518((__int64)v1304, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v555);
      v557 = sub_18001B448((__int64)v1038, v556, (__int64)"/Vertex");
      v769 = v552;
      v770 = v553;
      sub_18007370C(v557, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EE0);
    }
  }
  if ( dword_1801C8EE4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EE4);
    if ( dword_1801C8EE4 == -1 )
    {
      *(_QWORD *)&v863 = &unk_180112A60;
      *((_QWORD *)&v863 + 1) = &unk_180112CAC;
      v558 = v863;
      *(_QWORD *)&v991 = 0x100000001LL;
      v559 = v991;
      v560 = sub_18009BE44();
      v561 = sub_180073668(v1308, 29LL, (__int64)v560, 6);
      v562 = sub_18001B518((__int64)v1307, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v561);
      v563 = sub_18001B448((__int64)v1040, v562, (__int64)"/Vertex");
      v769 = v558;
      v770 = v559;
      sub_18007370C(v563, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EE4);
    }
  }
  if ( dword_1801C8EE8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EE8);
    if ( dword_1801C8EE8 == -1 )
    {
      *(_QWORD *)&v864 = &unk_180112A60;
      *((_QWORD *)&v864 + 1) = &unk_180112CAC;
      v564 = v864;
      *(_QWORD *)&v992 = 0x100000001LL;
      v565 = v992;
      v566 = sub_18009BE44();
      v567 = sub_180073668(v1311, 30LL, (__int64)v566, 6);
      v568 = sub_18001B518((__int64)v1310, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v567);
      v569 = sub_18001B448((__int64)v1041, v568, (__int64)"/Vertex");
      v769 = v564;
      v770 = v565;
      sub_18007370C(v569, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EE8);
    }
  }
  if ( dword_1801C8EEC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EEC);
    if ( dword_1801C8EEC == -1 )
    {
      *(_QWORD *)&v865 = &unk_180112A60;
      *((_QWORD *)&v865 + 1) = &unk_180112CAC;
      v570 = v865;
      *(_QWORD *)&v993 = 0x100000001LL;
      v571 = v993;
      v572 = sub_18009BE44();
      v573 = sub_180073668(v1314, 31LL, (__int64)v572, 6);
      v574 = sub_18001B518((__int64)v1313, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v573);
      v575 = sub_18001B448((__int64)v1043, v574, (__int64)"/Vertex");
      v769 = v570;
      v770 = v571;
      sub_18007370C(v575, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EEC);
    }
  }
  if ( dword_1801C8EF0 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EF0);
    if ( dword_1801C8EF0 == -1 )
    {
      *(_QWORD *)&v882 = &unk_180112A60;
      *((_QWORD *)&v882 + 1) = &unk_180112CAC;
      v576 = v882;
      *(_QWORD *)&v1026 = 0x100000001LL;
      v577 = v1026;
      v578 = sub_18009BE44();
      v579 = sub_180073668(v1317, 32LL, (__int64)v578, 6);
      v580 = sub_18001B518((__int64)v1316, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v579);
      v581 = sub_18001B448((__int64)v1044, v580, (__int64)"/Vertex");
      v769 = v576;
      v770 = v577;
      sub_18007370C(v581, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EF0);
    }
  }
  if ( dword_1801C8EF4 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EF4);
    if ( dword_1801C8EF4 == -1 )
    {
      *(_QWORD *)&v867 = &unk_180112A60;
      *((_QWORD *)&v867 + 1) = &unk_180112CAC;
      v582 = v867;
      *(_QWORD *)&v995 = 0x100000001LL;
      v583 = v995;
      v584 = sub_18009BE44();
      v585 = sub_180073668(v1320, 33LL, (__int64)v584, 6);
      v586 = sub_18001B518((__int64)v1319, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v585);
      v587 = sub_18001B448((__int64)v1046, v586, (__int64)"/Vertex");
      v769 = v582;
      v770 = v583;
      sub_18007370C(v587, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EF4);
    }
  }
  if ( dword_1801C8EF8 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EF8);
    if ( dword_1801C8EF8 == -1 )
    {
      *(_QWORD *)&v868 = &unk_180112A60;
      *((_QWORD *)&v868 + 1) = &unk_180112CAC;
      v588 = v868;
      *(_QWORD *)&v996 = 0x100000001LL;
      v589 = v996;
      v590 = sub_18009BE44();
      v591 = sub_180073668(v1323, 34LL, (__int64)v590, 6);
      v592 = sub_18001B518((__int64)v1322, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v591);
      v593 = sub_18001B448((__int64)v1047, v592, (__int64)"/Vertex");
      v769 = v588;
      v770 = v589;
      sub_18007370C(v593, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EF8);
    }
  }
  if ( dword_1801C8EFC > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8EFC);
    if ( dword_1801C8EFC == -1 )
    {
      *(_QWORD *)&v869 = &unk_180112A60;
      *((_QWORD *)&v869 + 1) = &unk_180112CAC;
      v594 = v869;
      *(_QWORD *)&v997 = 0x100000001LL;
      v595 = v997;
      v596 = sub_18009BE44();
      v597 = sub_180073668(v1326, 35LL, (__int64)v596, 6);
      v598 = sub_18001B518((__int64)v1325, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v597);
      v599 = sub_18001B448((__int64)v1049, v598, (__int64)"/Vertex");
      v769 = v594;
      v770 = v595;
      sub_18007370C(v599, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8EFC);
    }
  }
  if ( dword_1801C8F00 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F00);
    if ( dword_1801C8F00 == -1 )
    {
      *(_QWORD *)&v870 = &unk_180112A60;
      *((_QWORD *)&v870 + 1) = &unk_180112CAC;
      v600 = v870;
      *(_QWORD *)&v998 = 0x100000001LL;
      v601 = v998;
      v602 = sub_18009BE44();
      v603 = sub_180073668(v1329, 36LL, (__int64)v602, 6);
      v604 = sub_18001B518((__int64)v1328, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v603);
      v605 = sub_18001B448((__int64)v1050, v604, (__int64)"/Vertex");
      v769 = v600;
      v770 = v601;
      sub_18007370C(v605, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F00);
    }
  }
  if ( dword_1801C8F04 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F04);
    if ( dword_1801C8F04 == -1 )
    {
      *(_QWORD *)&v871 = &unk_180112A60;
      *((_QWORD *)&v871 + 1) = &unk_180112CAC;
      v606 = v871;
      *(_QWORD *)&v999 = 0x100000001LL;
      v607 = v999;
      v608 = sub_18009BE44();
      v609 = sub_180073668(v1332, 37LL, (__int64)v608, 6);
      v610 = sub_18001B518((__int64)v1331, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v609);
      v611 = sub_18001B448((__int64)v1144, v610, (__int64)"/Vertex");
      v769 = v606;
      v770 = v607;
      sub_18007370C(v611, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F04);
    }
  }
  if ( dword_1801C8F08 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F08);
    if ( dword_1801C8F08 == -1 )
    {
      *(_QWORD *)&v872 = &unk_180112A60;
      *((_QWORD *)&v872 + 1) = &unk_180112CAC;
      v612 = v872;
      *(_QWORD *)&v1000 = 0x100000001LL;
      v613 = v1000;
      v614 = sub_18009BE44();
      v615 = sub_180073668(v1335, 38LL, (__int64)v614, 6);
      v616 = sub_18001B518((__int64)v1334, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v615);
      v617 = sub_18001B448((__int64)v1052, v616, (__int64)"/Vertex");
      v769 = v612;
      v770 = v613;
      sub_18007370C(v617, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F08);
    }
  }
  if ( dword_1801C8F0C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F0C);
    if ( dword_1801C8F0C == -1 )
    {
      *(_QWORD *)&v873 = &unk_180112A60;
      *((_QWORD *)&v873 + 1) = &unk_180112CAC;
      v618 = v873;
      *(_QWORD *)&v1001 = 0x100000001LL;
      v619 = v1001;
      v620 = sub_18009BE44();
      v621 = sub_180073668(v1338, 39LL, (__int64)v620, 6);
      v622 = sub_18001B518((__int64)v1337, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v621);
      v623 = sub_18001B448((__int64)v1053, v622, (__int64)"/Vertex");
      v769 = v618;
      v770 = v619;
      sub_18007370C(v623, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F0C);
    }
  }
  if ( dword_1801C8F10 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F10);
    if ( dword_1801C8F10 == -1 )
    {
      *(_QWORD *)&v874 = &unk_180112A60;
      *((_QWORD *)&v874 + 1) = &unk_180112CAC;
      v624 = v874;
      *(_QWORD *)&v1002 = 0x100000001LL;
      v625 = v1002;
      v626 = sub_18009BE44();
      v627 = sub_180073668(v1341, 40LL, (__int64)v626, 6);
      v628 = sub_18001B518((__int64)v1340, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v627);
      v629 = sub_18001B448((__int64)v1055, v628, (__int64)"/Vertex");
      v769 = v624;
      v770 = v625;
      sub_18007370C(v629, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F10);
    }
  }
  if ( dword_1801C8F14 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F14);
    if ( dword_1801C8F14 == -1 )
    {
      *(_QWORD *)&v875 = &unk_180112A60;
      *((_QWORD *)&v875 + 1) = &unk_180112CAC;
      v630 = v875;
      *(_QWORD *)&v1003 = 0x100000001LL;
      v631 = v1003;
      v632 = sub_18009BE44();
      v633 = sub_180073668(v1344, 41LL, (__int64)v632, 6);
      v634 = sub_18001B518((__int64)v1343, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v633);
      v635 = sub_18001B448((__int64)v1056, v634, (__int64)"/Vertex");
      v769 = v630;
      v770 = v631;
      sub_18007370C(v635, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F14);
    }
  }
  if ( dword_1801C8F18 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F18);
    if ( dword_1801C8F18 == -1 )
    {
      *(_QWORD *)&v876 = &unk_180112A60;
      *((_QWORD *)&v876 + 1) = &unk_180112CAC;
      v636 = v876;
      *(_QWORD *)&v1004 = 0x100000001LL;
      v637 = v1004;
      v638 = sub_18009BE44();
      v639 = sub_180073668(v1347, 42LL, (__int64)v638, 6);
      v640 = sub_18001B518((__int64)v1346, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v639);
      v641 = sub_18001B448((__int64)v1058, v640, (__int64)"/Vertex");
      v769 = v636;
      v770 = v637;
      sub_18007370C(v641, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F18);
    }
  }
  if ( dword_1801C8F1C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F1C);
    if ( dword_1801C8F1C == -1 )
    {
      *(_QWORD *)&v877 = &unk_180112A60;
      *((_QWORD *)&v877 + 1) = &unk_180112CAC;
      v642 = v877;
      *(_QWORD *)&v1005 = 0x100000001LL;
      v643 = v1005;
      v644 = sub_18009BE44();
      v645 = sub_180073668(v1350, 43LL, (__int64)v644, 6);
      v646 = sub_18001B518((__int64)v1349, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v645);
      v647 = sub_18001B448((__int64)v1059, v646, (__int64)"/Vertex");
      v769 = v642;
      v770 = v643;
      sub_18007370C(v647, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F1C);
    }
  }
  if ( dword_1801C8F20 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F20);
    if ( dword_1801C8F20 == -1 )
    {
      *(_QWORD *)&v878 = &unk_180112A60;
      *((_QWORD *)&v878 + 1) = &unk_180112CAC;
      v648 = v878;
      *(_QWORD *)&v1006 = 0x100000001LL;
      v649 = v1006;
      v650 = sub_18009BE44();
      v651 = sub_180073668(v1353, 44LL, (__int64)v650, 6);
      v652 = sub_18001B518((__int64)v1352, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v651);
      v653 = sub_18001B448((__int64)v1061, v652, (__int64)"/Vertex");
      v769 = v648;
      v770 = v649;
      sub_18007370C(v653, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F20);
    }
  }
  if ( dword_1801C8F24 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F24);
    if ( dword_1801C8F24 == -1 )
    {
      *(_QWORD *)&v879 = &unk_180112A60;
      *((_QWORD *)&v879 + 1) = &unk_180112CAC;
      v654 = v879;
      *(_QWORD *)&v1007 = 0x100000001LL;
      v655 = v1007;
      v656 = sub_18009BE44();
      v657 = sub_180073668(v1356, 45LL, (__int64)v656, 6);
      v658 = sub_18001B518((__int64)v1355, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v657);
      v659 = sub_18001B448((__int64)v1062, v658, (__int64)"/Vertex");
      v769 = v654;
      v770 = v655;
      sub_18007370C(v659, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F24);
    }
  }
  if ( dword_1801C8F28 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F28);
    if ( dword_1801C8F28 == -1 )
    {
      *(_QWORD *)&v880 = &unk_180112A60;
      *((_QWORD *)&v880 + 1) = &unk_180112CAC;
      v660 = v880;
      *(_QWORD *)&v1008 = 0x100000001LL;
      v661 = v1008;
      v662 = sub_18009BE44();
      v663 = sub_180073668(v1359, 46LL, (__int64)v662, 6);
      v664 = sub_18001B518((__int64)v1358, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v663);
      v665 = sub_18001B448((__int64)v1064, v664, (__int64)"/Vertex");
      v769 = v660;
      v770 = v661;
      sub_18007370C(v665, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F28);
    }
  }
  if ( dword_1801C8F2C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F2C);
    if ( dword_1801C8F2C == -1 )
    {
      *(_QWORD *)&v881 = &unk_180112A60;
      *((_QWORD *)&v881 + 1) = &unk_180112CAC;
      v666 = v881;
      *(_QWORD *)&v1009 = 0x100000001LL;
      v667 = v1009;
      v668 = sub_18009BE44();
      v669 = sub_180073668(v1362, 47LL, (__int64)v668, 6);
      v670 = sub_18001B518((__int64)v1361, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v669);
      v671 = sub_18001B448((__int64)v1065, v670, (__int64)"/Vertex");
      v769 = v666;
      v770 = v667;
      sub_18007370C(v671, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F2C);
    }
  }
  if ( dword_1801C8F30 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F30);
    if ( dword_1801C8F30 == -1 )
    {
      *(_QWORD *)&v898 = &unk_180112A60;
      *((_QWORD *)&v898 + 1) = &unk_180112CAC;
      v672 = v898;
      *(_QWORD *)&v1010 = 0x100000001LL;
      v673 = v1010;
      v674 = sub_18009BE44();
      v675 = sub_180073668(v1365, 48LL, (__int64)v674, 6);
      v676 = sub_18001B518((__int64)v1364, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v675);
      v677 = sub_18001B448((__int64)v1067, v676, (__int64)"/Vertex");
      v769 = v672;
      v770 = v673;
      sub_18007370C(v677, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F30);
    }
  }
  if ( dword_1801C8F34 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F34);
    if ( dword_1801C8F34 == -1 )
    {
      *(_QWORD *)&v883 = &unk_180112A60;
      *((_QWORD *)&v883 + 1) = &unk_180112CAC;
      v678 = v883;
      *(_QWORD *)&v1011 = 0x100000001LL;
      v679 = v1011;
      v680 = sub_18009BE44();
      v681 = sub_180073668(v1368, 49LL, (__int64)v680, 6);
      v682 = sub_18001B518((__int64)v1367, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v681);
      v683 = sub_18001B448((__int64)v1068, v682, (__int64)"/Vertex");
      v769 = v678;
      v770 = v679;
      sub_18007370C(v683, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F34);
    }
  }
  if ( dword_1801C8F38 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F38);
    if ( dword_1801C8F38 == -1 )
    {
      *(_QWORD *)&v884 = &unk_180112A60;
      *((_QWORD *)&v884 + 1) = &unk_180112CAC;
      v684 = v884;
      *(_QWORD *)&v1012 = 0x100000001LL;
      v685 = v1012;
      v686 = sub_18009BE44();
      v687 = sub_180073668(v1371, 50LL, (__int64)v686, 6);
      v688 = sub_18001B518((__int64)v1370, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v687);
      v689 = sub_18001B448((__int64)v1070, v688, (__int64)"/Vertex");
      v769 = v684;
      v770 = v685;
      sub_18007370C(v689, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F38);
    }
  }
  if ( dword_1801C8F3C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F3C);
    if ( dword_1801C8F3C == -1 )
    {
      *(_QWORD *)&v885 = &unk_180112A60;
      *((_QWORD *)&v885 + 1) = &unk_180112CAC;
      v690 = v885;
      *(_QWORD *)&v1013 = 0x100000001LL;
      v691 = v1013;
      v692 = sub_18009BE44();
      v693 = sub_180073668(v1374, 51LL, (__int64)v692, 6);
      v694 = sub_18001B518((__int64)v1373, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v693);
      v695 = sub_18001B448((__int64)v1071, v694, (__int64)"/Vertex");
      v769 = v690;
      v770 = v691;
      sub_18007370C(v695, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F3C);
    }
  }
  if ( dword_1801C8F40 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F40);
    if ( dword_1801C8F40 == -1 )
    {
      *(_QWORD *)&v886 = &unk_180112A60;
      *((_QWORD *)&v886 + 1) = &unk_180112CAC;
      v696 = v886;
      *(_QWORD *)&v1014 = 0x100000001LL;
      v697 = v1014;
      v698 = sub_18009BE44();
      v699 = sub_180073668(v1377, 52LL, (__int64)v698, 6);
      v700 = sub_18001B518((__int64)v1376, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v699);
      v701 = sub_18001B448((__int64)v1073, v700, (__int64)"/Vertex");
      v769 = v696;
      v770 = v697;
      sub_18007370C(v701, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F40);
    }
  }
  if ( dword_1801C8F44 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F44);
    if ( dword_1801C8F44 == -1 )
    {
      *(_QWORD *)&v887 = &unk_180112A60;
      *((_QWORD *)&v887 + 1) = &unk_180112CAC;
      v702 = v887;
      *(_QWORD *)&v1015 = 0x100000001LL;
      v703 = v1015;
      v704 = sub_18009BE44();
      v705 = sub_180073668(v1380, 53LL, (__int64)v704, 6);
      v706 = sub_18001B518((__int64)v1379, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v705);
      v707 = sub_18001B448((__int64)v1074, v706, (__int64)"/Vertex");
      v769 = v702;
      v770 = v703;
      sub_18007370C(v707, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F44);
    }
  }
  if ( dword_1801C8F48 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F48);
    if ( dword_1801C8F48 == -1 )
    {
      *(_QWORD *)&v888 = &unk_180112A60;
      *((_QWORD *)&v888 + 1) = &unk_180112CAC;
      v708 = v888;
      *(_QWORD *)&v1016 = 0x100000001LL;
      v709 = v1016;
      v710 = sub_18009BE44();
      v711 = sub_180073668(v1383, 54LL, (__int64)v710, 6);
      v712 = sub_18001B518((__int64)v1382, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v711);
      v713 = sub_18001B448((__int64)v1076, v712, (__int64)"/Vertex");
      v769 = v708;
      v770 = v709;
      sub_18007370C(v713, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F48);
    }
  }
  if ( dword_1801C8F4C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F4C);
    if ( dword_1801C8F4C == -1 )
    {
      *(_QWORD *)&v889 = &unk_180112A60;
      *((_QWORD *)&v889 + 1) = &unk_180112CAC;
      v714 = v889;
      *(_QWORD *)&v1017 = 0x100000001LL;
      v715 = v1017;
      v716 = sub_18009BE44();
      v717 = sub_180073668(v1386, 55LL, (__int64)v716, 6);
      v718 = sub_18001B518((__int64)v1385, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v717);
      v719 = sub_18001B448((__int64)v1077, v718, (__int64)"/Vertex");
      v769 = v714;
      v770 = v715;
      sub_18007370C(v719, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F4C);
    }
  }
  if ( dword_1801C8F50 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F50);
    if ( dword_1801C8F50 == -1 )
    {
      *(_QWORD *)&v890 = &unk_180112A60;
      *((_QWORD *)&v890 + 1) = &unk_180112CAC;
      v720 = v890;
      *(_QWORD *)&v1018 = 0x100000001LL;
      v721 = v1018;
      v722 = sub_18009BE44();
      v723 = sub_180073668(v1389, 56LL, (__int64)v722, 6);
      v724 = sub_18001B518((__int64)v1388, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v723);
      v725 = sub_18001B448((__int64)v1079, v724, (__int64)"/Vertex");
      v769 = v720;
      v770 = v721;
      sub_18007370C(v725, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F50);
    }
  }
  if ( dword_1801C8F54 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F54);
    if ( dword_1801C8F54 == -1 )
    {
      *(_QWORD *)&v891 = &unk_180112A60;
      *((_QWORD *)&v891 + 1) = &unk_180112CAC;
      v726 = v891;
      *(_QWORD *)&v1019 = 0x100000001LL;
      v727 = v1019;
      v728 = sub_18009BE44();
      v729 = sub_180073668(v1392, 57LL, (__int64)v728, 6);
      v730 = sub_18001B518((__int64)v1391, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v729);
      v731 = sub_18001B448((__int64)v1080, v730, (__int64)"/Vertex");
      v769 = v726;
      v770 = v727;
      sub_18007370C(v731, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F54);
    }
  }
  if ( dword_1801C8F58 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F58);
    if ( dword_1801C8F58 == -1 )
    {
      *(_QWORD *)&v892 = &unk_180112A60;
      *((_QWORD *)&v892 + 1) = &unk_180112CAC;
      v732 = v892;
      *(_QWORD *)&v1020 = 0x100000001LL;
      v733 = v1020;
      v734 = sub_18009BE44();
      v735 = sub_180073668(v1395, 58LL, (__int64)v734, 6);
      v736 = sub_18001B518((__int64)v1394, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v735);
      v737 = sub_18001B448((__int64)v1082, v736, (__int64)"/Vertex");
      v769 = v732;
      v770 = v733;
      sub_18007370C(v737, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F58);
    }
  }
  if ( dword_1801C8F5C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F5C);
    if ( dword_1801C8F5C == -1 )
    {
      *(_QWORD *)&v893 = &unk_180112A60;
      *((_QWORD *)&v893 + 1) = &unk_180112CAC;
      v738 = v893;
      *(_QWORD *)&v1021 = 0x100000001LL;
      v739 = v1021;
      v740 = sub_18009BE44();
      v741 = sub_180073668(v1398, 59LL, (__int64)v740, 6);
      v742 = sub_18001B518((__int64)v1397, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v741);
      v743 = sub_18001B448((__int64)v1083, v742, (__int64)"/Vertex");
      v769 = v738;
      v770 = v739;
      sub_18007370C(v743, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F5C);
    }
  }
  if ( dword_1801C8F60 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F60);
    if ( dword_1801C8F60 == -1 )
    {
      *(_QWORD *)&v894 = &unk_180112A60;
      *((_QWORD *)&v894 + 1) = &unk_180112CAC;
      v744 = v894;
      *(_QWORD *)&v1022 = 0x100000001LL;
      v745 = v1022;
      v746 = sub_18009BE44();
      v747 = sub_180073668(v1401, 60LL, (__int64)v746, 6);
      v748 = sub_18001B518((__int64)v1400, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v747);
      v749 = sub_18001B448((__int64)v1085, v748, (__int64)"/Vertex");
      v769 = v744;
      v770 = v745;
      sub_18007370C(v749, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F60);
    }
  }
  if ( dword_1801C8F64 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F64);
    if ( dword_1801C8F64 == -1 )
    {
      *(_QWORD *)&v895 = &unk_180112A60;
      *((_QWORD *)&v895 + 1) = &unk_180112CAC;
      v750 = v895;
      *(_QWORD *)&v1023 = 0x100000001LL;
      v751 = v1023;
      v752 = sub_18009BE44();
      v753 = sub_180073668(v1404, 61LL, (__int64)v752, 6);
      v754 = sub_18001B518((__int64)v1403, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v753);
      v755 = sub_18001B448((__int64)v1086, v754, (__int64)"/Vertex");
      v769 = v750;
      v770 = v751;
      sub_18007370C(v755, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F64);
    }
  }
  if ( dword_1801C8F68 > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F68);
    if ( dword_1801C8F68 == -1 )
    {
      *(_QWORD *)&v896 = &unk_180112A60;
      *((_QWORD *)&v896 + 1) = &unk_180112CAC;
      v756 = v896;
      *(_QWORD *)&v1024 = 0x100000001LL;
      v757 = v1024;
      v758 = sub_18009BE44();
      v759 = sub_180073668(v1407, 62LL, (__int64)v758, 6);
      v760 = sub_18001B518((__int64)v1406, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v759);
      v761 = sub_18001B448((__int64)v1088, v760, (__int64)"/Vertex");
      v769 = v756;
      v770 = v757;
      sub_18007370C(v761, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F68);
    }
  }
  if ( dword_1801C8F6C > *(_DWORD *)(ThreadLocalStoragePointer[v0] + 16LL) )
  {
    sub_18000C8D0(&dword_1801C8F6C);
    if ( dword_1801C8F6C == -1 )
    {
      *(_QWORD *)&v897 = &unk_180112A60;
      *((_QWORD *)&v897 + 1) = &unk_180112CAC;
      v762 = v897;
      *(_QWORD *)&v1025 = 0x100000001LL;
      v763 = v1025;
      v764 = sub_18009BE44();
      v765 = sub_180073668(v1410, 63LL, (__int64)v764, 6);
      v766 = sub_18001B518((__int64)v1409, (__int64)"ImageProcessingCameraEffects/ShaderModel40/", v765);
      v767 = sub_18001B448((__int64)v1089, v766, (__int64)"/Vertex");
      v769 = v762;
      v770 = v763;
      sub_18007370C(v767, (__int64)&v769);
      sub_180010F20();
      sub_180010F20();
      Init_thread_footer(&dword_1801C8F6C);
    }
  }
  return 0LL;
}
