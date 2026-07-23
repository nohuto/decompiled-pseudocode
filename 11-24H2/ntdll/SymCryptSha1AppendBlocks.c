/*
 * XREFs of SymCryptSha1AppendBlocks @ 0x1801572C0
 * Callers:
 *     SymCryptSha1Result @ 0x1801584C0 (SymCryptSha1Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1AppendBlocks(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r13d
  int v5; // r11d
  int v6; // ebx
  int v7; // r10d
  int v8; // r14d
  unsigned int *v9; // rbp
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // r8d
  int v14; // r11d
  unsigned __int32 v15; // edi
  int v16; // edx
  int v17; // eax
  int v18; // r9d
  int v19; // edx
  int v20; // r8d
  unsigned __int32 v21; // r14d
  int v22; // r9d
  int v23; // eax
  int v24; // r10d
  int v25; // r8d
  int v26; // ecx
  int v27; // r9d
  unsigned __int32 v28; // r15d
  int v29; // r10d
  unsigned __int32 v30; // r12d
  int v31; // r11d
  unsigned __int32 v32; // r13d
  int v33; // edx
  int v34; // r10d
  int v35; // ecx
  int v36; // r11d
  int v37; // r8d
  int v38; // ecx
  int v39; // edx
  int v40; // r9d
  int v41; // ecx
  int v42; // r8d
  int v43; // r10d
  int v44; // ecx
  int v45; // r9d
  int v46; // r11d
  int v47; // ecx
  int v48; // r10d
  int v49; // edx
  int v50; // r8d
  int v51; // r11d
  int v52; // ecx
  int v53; // edx
  int v54; // r9d
  int v55; // ecx
  int v56; // r8d
  int v57; // r10d
  int v58; // ecx
  int v59; // r9d
  int v60; // ebx
  int v61; // ecx
  int v62; // r10d
  int v63; // ebp
  int v64; // ecx
  int v65; // ebx
  int v66; // esi
  int v67; // edx
  unsigned __int32 v68; // r15d
  int v69; // ecx
  int v70; // ebp
  int v71; // edi
  int v72; // r9d
  unsigned __int32 v73; // r14d
  int v74; // r11d
  unsigned __int32 v75; // r10d
  int v76; // r8d
  unsigned __int32 v77; // r12d
  int v78; // ecx
  int v79; // esi
  int v80; // r11d
  int v81; // ecx
  int v82; // edi
  int v83; // edx
  int v84; // ecx
  int v85; // r11d
  int v86; // r8d
  int v87; // ecx
  int v88; // edx
  int v89; // r9d
  int v90; // r13d
  unsigned __int32 v91; // ebx
  int v92; // r10d
  unsigned __int32 v93; // ebp
  unsigned __int32 v94; // edi
  int v95; // r10d
  int v96; // r8d
  int v97; // ecx
  int v98; // r9d
  int v99; // r11d
  int v100; // ecx
  int v101; // r10d
  int v102; // r13d
  int v103; // edx
  int v104; // r8d
  int v105; // r11d
  int v106; // esi
  int v107; // r9d
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // r10d
  int v112; // ecx
  int v113; // r9d
  int v114; // r11d
  int v115; // ecx
  int v116; // r10d
  int v117; // edx
  int v118; // ecx
  int v119; // r11d
  int v120; // r8d
  int v121; // r9d
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  int v125; // r10d
  int v126; // ecx
  int v127; // r14d
  int v128; // r9d
  int v129; // r14d
  int v130; // r11d
  int v131; // edi
  int v132; // r15d
  int v133; // ecx
  int v134; // r10d
  int v135; // edx
  int v136; // ecx
  int v137; // r11d
  int v138; // r8d
  int v139; // ecx
  int v140; // edx
  int v141; // r9d
  int v142; // r13d
  int v143; // ecx
  int v144; // r8d
  int v145; // r13d
  int v146; // r10d
  int v147; // ecx
  int v148; // r9d
  int v149; // r11d
  int v150; // ecx
  int v151; // r10d
  int v152; // ebx
  int v153; // ecx
  int v154; // eax
  int v155; // r11d
  int v156; // r8d
  int v157; // r9d
  int v158; // ebx
  int v159; // ecx
  int v160; // eax
  int v161; // r8d
  int v162; // r10d
  int v163; // ecx
  int v164; // r9d
  int v165; // r11d
  int v166; // ecx
  int v167; // eax
  int v168; // r10d
  int v169; // ebx
  int v170; // r8d
  int v171; // r11d
  int v172; // ecx
  int v173; // ebx
  int v174; // r9d
  int v175; // eax
  int v176; // ecx
  int v177; // r8d
  int v178; // r10d
  int v179; // ecx
  int v180; // eax
  int v181; // r9d
  int v182; // ecx
  int v183; // eax
  int v184; // r11d
  int v185; // ecx
  int v186; // r10d
  int v187; // ebx
  int v188; // ecx
  int v189; // r11d
  int v190; // r8d
  int v191; // ecx
  int v192; // ebx
  int v193; // r9d
  int v194; // eax
  int v195; // ecx
  int v196; // r8d
  int v197; // r10d
  int v198; // ecx
  int v199; // r9d
  int v200; // r11d
  int v201; // ecx
  int v202; // r10d
  int v203; // edi
  int v204; // eax
  int v205; // ecx
  int v206; // r11d
  int v207; // ebx
  int v208; // r8d
  int v209; // esi
  int v210; // ebx
  int v211; // ecx
  int v212; // edi
  int v213; // r9d
  int v214; // ecx
  int v215; // eax
  int v216; // ebx
  int v217; // r10d
  int v218; // r11d
  int v219; // r9d
  int v220; // edx
  int v221; // ecx
  int v222; // r10d
  int v223; // eax
  int v224; // r11d
  int v225; // r8d
  int v226; // ebp
  int v227; // edx
  int v228; // eax
  int v229; // r8d
  int v230; // r9d
  int v231; // eax
  int v232; // edx
  int v233; // r10d
  int v234; // r11d
  int v235; // r9d
  int v236; // eax
  int v237; // r10d
  int v238; // r15d
  int v239; // r13d
  int v240; // r8d
  int v241; // eax
  int v242; // r11d
  int v243; // r12d
  int v244; // edx
  int v245; // eax
  int v246; // r8d
  int v247; // r9d
  int v248; // eax
  int v249; // edx
  int v250; // r10d
  int v251; // eax
  int v252; // r9d
  int v253; // ebx
  int v254; // r14d
  int v255; // eax
  int v256; // r10d
  int v257; // ebp
  int v258; // esi
  int v259; // r8d
  int v260; // edi
  int v261; // ebx
  int v262; // edx
  int v263; // r11d
  int v264; // r8d
  int v265; // eax
  int v266; // edi
  int v267; // r10d
  int v268; // eax
  int v269; // r11d
  int v270; // r9d
  int v271; // eax
  int v272; // r10d
  int v273; // r8d
  int v274; // eax
  int v275; // r9d
  int v276; // r12d
  int v277; // eax
  int v278; // r8d
  int v279; // r13d
  int v280; // r15d
  int v281; // r14d
  int v282; // r10d
  int v283; // ecx
  int v284; // r13d
  int v285; // ebx
  int v286; // ecx
  bool v287; // zf
  unsigned __int32 v289; // [rsp+0h] [rbp-108h]
  int v290; // [rsp+0h] [rbp-108h]
  int v291; // [rsp+0h] [rbp-108h]
  int v292; // [rsp+0h] [rbp-108h]
  int v293; // [rsp+0h] [rbp-108h]
  int v294; // [rsp+0h] [rbp-108h]
  unsigned __int32 v295; // [rsp+4h] [rbp-104h]
  int v296; // [rsp+4h] [rbp-104h]
  int v297; // [rsp+4h] [rbp-104h]
  int v298; // [rsp+4h] [rbp-104h]
  int v299; // [rsp+4h] [rbp-104h]
  unsigned __int32 v300; // [rsp+8h] [rbp-100h]
  int v301; // [rsp+8h] [rbp-100h]
  int v302; // [rsp+8h] [rbp-100h]
  int v303; // [rsp+8h] [rbp-100h]
  int v304; // [rsp+8h] [rbp-100h]
  int v305; // [rsp+Ch] [rbp-FCh]
  int v306; // [rsp+Ch] [rbp-FCh]
  int v307; // [rsp+Ch] [rbp-FCh]
  unsigned __int32 v308; // [rsp+10h] [rbp-F8h]
  int v309; // [rsp+10h] [rbp-F8h]
  int v310; // [rsp+10h] [rbp-F8h]
  int v311; // [rsp+10h] [rbp-F8h]
  int v312; // [rsp+14h] [rbp-F4h]
  int v313; // [rsp+14h] [rbp-F4h]
  int v314; // [rsp+14h] [rbp-F4h]
  int v315; // [rsp+14h] [rbp-F4h]
  unsigned __int32 v316; // [rsp+18h] [rbp-F0h]
  int v317; // [rsp+18h] [rbp-F0h]
  int v318; // [rsp+18h] [rbp-F0h]
  unsigned __int32 v319; // [rsp+1Ch] [rbp-ECh]
  int v320; // [rsp+1Ch] [rbp-ECh]
  int v321; // [rsp+1Ch] [rbp-ECh]
  int v322; // [rsp+1Ch] [rbp-ECh]
  unsigned __int32 v323; // [rsp+20h] [rbp-E8h]
  int v324; // [rsp+20h] [rbp-E8h]
  int v325; // [rsp+20h] [rbp-E8h]
  int v326; // [rsp+20h] [rbp-E8h]
  int v327; // [rsp+24h] [rbp-E4h]
  int v328; // [rsp+24h] [rbp-E4h]
  int v329; // [rsp+24h] [rbp-E4h]
  unsigned __int32 v330; // [rsp+28h] [rbp-E0h]
  int v331; // [rsp+28h] [rbp-E0h]
  int v332; // [rsp+28h] [rbp-E0h]
  int v333; // [rsp+28h] [rbp-E0h]
  unsigned __int32 v334; // [rsp+2Ch] [rbp-DCh]
  int v335; // [rsp+2Ch] [rbp-DCh]
  int v336; // [rsp+2Ch] [rbp-DCh]
  int v337; // [rsp+2Ch] [rbp-DCh]
  unsigned __int32 v338; // [rsp+30h] [rbp-D8h]
  int v339; // [rsp+30h] [rbp-D8h]
  int v340; // [rsp+30h] [rbp-D8h]
  int v341; // [rsp+34h] [rbp-D4h]
  unsigned __int32 v342; // [rsp+34h] [rbp-D4h]
  int v343; // [rsp+34h] [rbp-D4h]
  int v344; // [rsp+34h] [rbp-D4h]
  int v345; // [rsp+38h] [rbp-D0h]
  int v346; // [rsp+38h] [rbp-D0h]
  int v347; // [rsp+3Ch] [rbp-CCh]
  int v348; // [rsp+40h] [rbp-C8h]
  int v349; // [rsp+44h] [rbp-C4h]
  int v350; // [rsp+48h] [rbp-C0h]
  int v351; // [rsp+4Ch] [rbp-BCh]
  int v352; // [rsp+50h] [rbp-B8h]
  int v353; // [rsp+58h] [rbp-B0h]
  __int64 v354; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v355; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v357; // [rsp+78h] [rbp-90h]

  v4 = a1[3];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[4];
  v341 = v4;
  if ( a3 >= 0x40 )
  {
    v347 = *a1;
    v9 = (unsigned int *)(a2 + 8);
    v355 = a3 >> 6;
    v348 = a1[1];
    v349 = a1[2];
    v357 = -64LL * (a3 >> 6) + a3;
    v350 = a1[3];
    v351 = a1[4];
    v354 = a2 + 8;
    do
    {
      v10 = v4 ^ v6 & (v7 ^ v4);
      v11 = __ROR4__(v6, 2);
      v12 = __ROL4__(v5, 5);
      v13 = v7 ^ v5 & (v11 ^ v7);
      v14 = __ROR4__(v5, 2);
      v289 = _byteswap_ulong(*(v9 - 1));
      v15 = _byteswap_ulong(*(v9 - 2));
      v16 = v8 + 1518500249 + v15 + v12 + v10;
      v17 = __ROL4__(v16, 5);
      v18 = v11 ^ v16 & (v14 ^ v11);
      v19 = __ROR4__(v16, 2);
      v20 = v341 + 1518500249 + v289 + v17 + v13;
      v21 = _byteswap_ulong(*v9);
      v22 = v7 + 1518500249 + v21 + __ROL4__(v20, 5) + v18;
      v23 = __ROL4__(v22, 5);
      v24 = v20 & (v14 ^ v19);
      v25 = __ROR4__(v20, 2);
      v26 = v22 & (v25 ^ v19);
      v27 = __ROR4__(v22, 2);
      v28 = _byteswap_ulong(v9[1]);
      v29 = v11 + v28 + v23 + 1518500249 + (v14 ^ v24);
      v30 = _byteswap_ulong(v9[2]);
      v31 = v30 + __ROL4__(v29, 5) + 1518500249 + (v19 ^ v26) + v14;
      v32 = _byteswap_ulong(v9[3]);
      v33 = v32 + __ROL4__(v31, 5) + 1518500249 + (v25 ^ v29 & (v27 ^ v25)) + v19;
      v34 = __ROR4__(v29, 2);
      v35 = v31 & (v34 ^ v27);
      v36 = __ROR4__(v31, 2);
      v334 = _byteswap_ulong(v9[4]);
      v37 = v334 + __ROL4__(v33, 5) + 1518500249 + (v27 ^ v35) + v25;
      v38 = v34 ^ v33 & (v36 ^ v34);
      v39 = __ROR4__(v33, 2);
      v323 = _byteswap_ulong(v9[5]);
      v40 = v323 + __ROL4__(v37, 5) + 1518500249 + v38 + v27;
      v41 = v36 ^ v37 & (v36 ^ v39);
      v42 = __ROR4__(v37, 2);
      v300 = _byteswap_ulong(v9[7]);
      v319 = _byteswap_ulong(v9[6]);
      v43 = v319 + __ROL4__(v40, 5) + 1518500249 + v41 + v34;
      v44 = v40 & (v42 ^ v39);
      v45 = __ROR4__(v40, 2);
      v46 = v300 + 1518500249 + __ROL4__(v43, 5) + (v39 ^ v44) + v36;
      v47 = v42 ^ v43 & (v45 ^ v42);
      v48 = __ROR4__(v43, 2);
      v342 = _byteswap_ulong(v9[8]);
      v49 = v342 + 1518500249 + __ROL4__(v46, 5) + v47 + v39;
      v316 = _byteswap_ulong(v9[9]);
      v50 = v316 + __ROL4__(v49, 5) + 1518500249 + (v45 ^ v46 & (v48 ^ v45)) + v42;
      v295 = _byteswap_ulong(v9[10]);
      v51 = __ROR4__(v46, 2);
      v52 = v48 ^ v49 & (v51 ^ v48);
      v53 = __ROR4__(v49, 2);
      v54 = v295 + __ROL4__(v50, 5) + 1518500249 + v52 + v45;
      v55 = v51 ^ v50 & (v51 ^ v53);
      v56 = __ROR4__(v50, 2);
      v338 = _byteswap_ulong(v9[11]);
      v57 = v338 + __ROL4__(v54, 5) + 1518500249 + v55 + v48;
      v58 = v53 ^ v54 & (v56 ^ v53);
      v59 = __ROR4__(v54, 2);
      v330 = _byteswap_ulong(v9[12]);
      v60 = v51 + 1518500249 + v58 + __ROL4__(v57, 5) + v330;
      v61 = v56 ^ v57 & (v59 ^ v56);
      v62 = __ROR4__(v57, 2);
      v308 = _byteswap_ulong(v9[13]);
      v305 = __ROL4__(v15 ^ v319 ^ v338 ^ v21, 1);
      v63 = v308 + __ROL4__(v60, 5) + v61 + v53 + 1518500249;
      v64 = v59 ^ v60 & (v62 ^ v59);
      v65 = __ROR4__(v60, 2);
      v66 = v305 + __ROL4__(v63, 5) + v64 + v56 + 1518500249;
      v290 = __ROL4__(v28 ^ v330 ^ v300 ^ v289, 1);
      v67 = v28 ^ v32 ^ v305 ^ v316;
      v68 = v295;
      v69 = v62 ^ v63 & (v65 ^ v62);
      v70 = __ROR4__(v63, 2);
      v312 = __ROL4__(v67, 1);
      v71 = v290 + __ROL4__(v66, 5) + v69 + v59 + 1518500249;
      v72 = v21 ^ v30;
      v73 = v342;
      v74 = v62 + 1518500249;
      v75 = v334;
      v343 = __ROL4__(v342 ^ v308 ^ v72, 1);
      v76 = v30 ^ v295 ^ v334 ^ v290;
      v77 = v338;
      v339 = __ROL4__(v338 ^ v32 ^ v323 ^ v343, 1);
      v78 = v65 ^ v66 & (v65 ^ v70);
      v79 = __ROR4__(v66, 2);
      v335 = __ROL4__(v76, 1);
      v80 = v343 + __ROL4__(v71, 5) + v78 + v74;
      v81 = v70 ^ v71 & (v79 ^ v70);
      v82 = __ROR4__(v71, 2);
      v83 = v65 + v81 + 1518500249 + __ROL4__(v80, 5) + v312;
      v84 = v80 ^ v82 ^ v79;
      v85 = __ROR4__(v80, 2);
      v86 = v335 + __ROL4__(v83, 5) + v84 + v70 + 1859775393;
      v87 = v83 ^ v85 ^ v82;
      v88 = __ROR4__(v83, 2);
      v89 = v79 + v87 + 1859775393 + __ROL4__(v86, 5) + v339;
      v90 = v75 ^ v312;
      v91 = v300;
      v92 = v82 + 1859775393;
      v93 = v330;
      v94 = v308;
      v331 = __ROL4__(v319 ^ v330 ^ v90, 1);
      v95 = v331 + __ROL4__(v89, 5) + (v88 ^ v85 ^ v86) + v92;
      v96 = __ROR4__(v86, 2);
      v97 = v88 ^ v89 ^ v96;
      v301 = __ROL4__(v308 ^ v300 ^ v323 ^ v335, 1);
      v98 = __ROR4__(v89, 2);
      v99 = v301 + 1859775393 + __ROL4__(v95, 5) + v97 + v85;
      v100 = v95 ^ v98 ^ v96;
      v296 = __ROL4__(v73 ^ v319 ^ v339 ^ v305, 1);
      v101 = __ROR4__(v95, 2);
      v102 = v290;
      v103 = v296 + 1859775393 + __ROL4__(v99, 5) + v100 + v88;
      v291 = __ROL4__(v331 ^ v91 ^ v290 ^ v316, 1);
      v104 = v291 + 1859775393 + __ROL4__(v103, 5) + (v99 ^ v101 ^ v98) + v96;
      v105 = __ROR4__(v99, 2);
      v106 = __ROL4__(v73 ^ v301 ^ v68 ^ v343, 1);
      v107 = v106 + __ROL4__(v104, 5) + 1859775393 + (v103 ^ v105 ^ v101) + v98;
      v108 = __ROR4__(v103, 2);
      v109 = v105 ^ v104;
      v110 = __ROR4__(v104, 2);
      v317 = __ROL4__(v77 ^ v296 ^ v312 ^ v316, 1);
      v111 = v317 + 1859775393 + __ROL4__(v107, 5) + (v108 ^ v109) + v101;
      v112 = v108 ^ v107 ^ v110;
      v327 = __ROL4__(v291 ^ v93 ^ v68 ^ v335, 1);
      v113 = __ROR4__(v107, 2);
      v114 = v327 + 1859775393 + __ROL4__(v111, 5) + v112 + v105;
      v309 = __ROL4__(v308 ^ v106 ^ v77 ^ v339, 1);
      v115 = v309 + 1859775393 + __ROL4__(v114, 5) + (v111 ^ v113 ^ v110);
      v116 = __ROR4__(v111, 2);
      v117 = v115 + v108;
      v320 = __ROL4__(v317 ^ v93 ^ v331 ^ v305, 1);
      v118 = v114 ^ v116 ^ v113;
      v119 = __ROR4__(v114, 2);
      v120 = v320 + 1859775393 + __ROL4__(v117, 5) + v118 + v110;
      v324 = __ROL4__(v94 ^ v327 ^ v301 ^ v102, 1);
      v121 = v324 + __ROL4__(v120, 5) + 1859775393 + (v117 ^ v119 ^ v116) + v113;
      v306 = __ROL4__(v309 ^ v296 ^ v343 ^ v305, 1);
      v122 = __ROR4__(v117, 2);
      v123 = v122 ^ v119 ^ v120;
      v124 = __ROR4__(v120, 2);
      v125 = v306 + 1859775393 + __ROL4__(v121, 5) + v123 + v116;
      v126 = v122 ^ v121 ^ v124;
      v127 = v306 ^ v317 ^ v339 ^ v312;
      v313 = __ROL4__(v320 ^ v291 ^ v102 ^ v312, 1);
      v128 = __ROR4__(v121, 2);
      v129 = __ROL4__(v127, 1);
      v130 = v313 + 1859775393 + __ROL4__(v125, 5) + v126 + v119;
      v131 = __ROL4__(v106 ^ v324 ^ v343 ^ v335, 1);
      v132 = __ROL4__(v313 ^ v327 ^ v331 ^ v335, 1);
      v133 = v125 ^ v128 ^ v124;
      v134 = __ROR4__(v125, 2);
      v135 = v131 + __ROL4__(v130, 5) + 1859775393 + v133 + v122;
      v136 = v130 ^ v134 ^ v128;
      v137 = __ROR4__(v130, 2);
      v138 = v129 + __ROL4__(v135, 5) + 1859775393 + v136 + v124;
      v139 = v135 ^ v137 ^ v134;
      v140 = __ROR4__(v135, 2);
      v141 = v132 + __ROL4__(v138, 5) + 1859775393 + v139 + v128;
      v142 = v309 ^ v301 ^ v339;
      v143 = v140 ^ v137 ^ v138;
      v302 = __ROL4__(v132 ^ v324 ^ v291 ^ v301, 1);
      v144 = __ROR4__(v138, 2);
      v145 = __ROL4__(v131 ^ v142, 1);
      v332 = __ROL4__(v129 ^ v320 ^ v296 ^ v331, 1);
      v146 = v145 + __ROL4__(v141, 5) + 1859775393 + v143 + v134;
      v147 = v140 ^ v141 ^ v144;
      v148 = __ROR4__(v141, 2);
      v149 = v332 + __ROL4__(v146, 5) + 1859775393 + v147 + v137;
      v150 = v146 ^ v148 ^ v144;
      v151 = __ROR4__(v146, 2);
      v152 = v302 + __ROL4__(v149, 5) + v150 + v140 + 1859775393;
      v297 = __ROL4__(v106 ^ v145 ^ v306 ^ v296, 1);
      v153 = v148 & (v149 | v151);
      v154 = v149 & v151;
      v155 = __ROR4__(v149, 2);
      v156 = v297 - 1894007588 + (v154 | v153) + __ROL4__(v152, 5) + v144;
      v292 = __ROL4__(v332 ^ v313 ^ v317 ^ v291, 1);
      v157 = v292 - 1894007588 + (v152 & v155 | v151 & (v152 | v155)) + __ROL4__(v156, 5) + v148;
      v158 = __ROR4__(v152, 2);
      v159 = v158 | v156;
      v160 = v158 & v156;
      v161 = __ROR4__(v156, 2);
      v318 = __ROL4__(v297 ^ v129 ^ v309 ^ v317, 1);
      v336 = __ROL4__(v106 ^ v302 ^ v131 ^ v327, 1);
      v162 = v336 + (v160 | v155 & v159) - 1894007588 + __ROL4__(v157, 5) + v151;
      v163 = v157 & v161 | v158 & (v157 | v161);
      v164 = __ROR4__(v157, 2);
      v165 = v318 + v163 - 1894007588 + __ROL4__(v162, 5) + v155;
      v328 = __ROL4__(v292 ^ v132 ^ v320 ^ v327, 1);
      v166 = v161 & (v162 | v164);
      v167 = v162 & v164;
      v168 = __ROR4__(v162, 2);
      v169 = v328 + (v167 | v166) - 1894007588 + __ROL4__(v165, 5) + v158;
      v310 = __ROL4__(v145 ^ v336 ^ v324 ^ v309, 1);
      v170 = v310 + (v165 & v168 | v164 & (v165 | v168)) - 1894007588 + __ROL4__(v169, 5) + v161;
      v171 = __ROR4__(v165, 2);
      v321 = __ROL4__(v318 ^ v332 ^ v306 ^ v320, 1);
      v172 = v321 + (v169 & v171 | v168 & (v169 | v171)) - 1894007588;
      v325 = __ROL4__(v328 ^ v302 ^ v313 ^ v324, 1);
      v173 = __ROR4__(v169, 2);
      v174 = v172 + __ROL4__(v170, 5) + v164;
      v314 = __ROL4__(v321 ^ v292 ^ v129 ^ v313, 1);
      v175 = v173 & v170;
      v176 = v171 & (v173 | v170);
      v177 = __ROR4__(v170, 2);
      v178 = v325 + (v175 | v176) - 1894007588 + __ROL4__(v174, 5) + v168;
      v179 = v173 & (v174 | v177);
      v307 = __ROL4__(v310 ^ v297 ^ v131 ^ v306, 1);
      v180 = v174 & v177;
      v181 = __ROR4__(v174, 2);
      v182 = v180 | v179;
      v183 = v178 & v181;
      v184 = v307 + v182 - 1894007588 + __ROL4__(v178, 5) + v171;
      v185 = v177 & (v178 | v181);
      v186 = __ROR4__(v178, 2);
      v187 = v314 - 1894007588 + (v183 | v185) + __ROL4__(v184, 5) + v173;
      v340 = __ROL4__(v325 ^ v132 ^ v131 ^ v336, 1);
      v188 = v184 & v186 | v181 & (v184 | v186);
      v189 = __ROR4__(v184, 2);
      v344 = __ROL4__(v318 ^ v145 ^ v129 ^ v307, 1);
      v352 = __ROL4__(v328 ^ v332 ^ v132 ^ v314, 1);
      v190 = v340 + v188 - 1894007588 + __ROL4__(v187, 5) + v177;
      v191 = v187 & v189 | v186 & (v187 | v189);
      v192 = __ROR4__(v187, 2);
      v193 = v344 + v191 - 1894007588 + __ROL4__(v190, 5) + v181;
      v194 = v192 & v190;
      v195 = v189 & (v192 | v190);
      v196 = __ROR4__(v190, 2);
      v197 = v352 + (v194 | v195) - 1894007588 + __ROL4__(v193, 5) + v186;
      v353 = __ROL4__(v310 ^ v302 ^ v145 ^ v340, 1);
      v198 = v193 & v196 | v192 & (v193 | v196);
      v199 = __ROR4__(v193, 2);
      v200 = v353 + v198 - 1894007588 + __ROL4__(v197, 5) + v189;
      v345 = __ROL4__(v321 ^ v297 ^ v332 ^ v344, 1);
      v201 = v345 + (v197 & v199 | v196 & (v197 | v199)) - 1894007588;
      v202 = __ROR4__(v197, 2);
      v203 = v201 + v192 + __ROL4__(v200, 5);
      v204 = v200 & v202;
      v205 = v199 & (v200 | v202);
      v206 = __ROR4__(v200, 2);
      v207 = v196 + __ROL4__(v203, 5);
      v208 = v336;
      v209 = __ROL4__(v325 ^ v292 ^ v302 ^ v352, 1);
      v210 = v209 + (v204 | v205) - 1894007588 + v207;
      v337 = __ROL4__(v297 ^ v336 ^ v307 ^ v353, 1);
      v211 = v203 & v206 | v202 & (v203 | v206);
      v212 = __ROR4__(v203, 2);
      v213 = v337 + v211 - 1894007588 + __ROL4__(v210, 5) + v199;
      v214 = v206 & (v212 | v210);
      v298 = __ROL4__(v318 ^ v292 ^ v314 ^ v345, 1);
      v215 = v212 & v210;
      v216 = __ROR4__(v210, 2);
      v217 = v298 + (v215 | v214) - 1894007588 + __ROL4__(v213, 5) + v202;
      v293 = __ROL4__(v328 ^ v208 ^ v340 ^ v209, 1);
      v218 = v293 + (v213 & v216 | v212 & (v213 | v216)) - 1894007588 + __ROL4__(v217, 5) + v206;
      v219 = __ROR4__(v213, 2);
      v220 = __ROL4__(v218, 5);
      v221 = v217 & v219 | v216 & (v217 | v219);
      v222 = __ROR4__(v217, 2);
      v223 = v216 - 899497514 + (v218 ^ v222 ^ v219);
      v224 = __ROR4__(v218, 2);
      v303 = __ROL4__(v310 ^ v318 ^ v344 ^ v337, 1);
      v225 = v303 + v221 - 1894007588 + v212 + v220;
      v226 = __ROL4__(v321 ^ v328 ^ v352 ^ v298, 1);
      v227 = v223 + v226 + __ROL4__(v225, 5);
      v329 = v226;
      v333 = __ROL4__(v325 ^ v310 ^ v353 ^ v293, 1);
      v228 = v219 + (v225 ^ v224 ^ v222);
      v229 = __ROR4__(v225, 2);
      v322 = __ROL4__(v321 ^ v307 ^ v303 ^ v345, 1);
      v326 = __ROL4__(v325 ^ v226 ^ v314 ^ v209, 1);
      v230 = v228 - 899497514 + v333 + __ROL4__(v227, 5);
      v231 = v224 ^ v227;
      v232 = __ROR4__(v227, 2);
      v233 = v222 + (v229 ^ v231) - 899497514 + v322 + __ROL4__(v230, 5);
      v234 = v224 + (v229 ^ v230 ^ v232) - 899497514 + v326 + __ROL4__(v233, 5);
      v235 = __ROR4__(v230, 2);
      v315 = __ROL4__(v322 ^ v314 ^ v344 ^ v298, 1);
      v236 = v229 + (v233 ^ v235 ^ v232);
      v237 = __ROR4__(v233, 2);
      v238 = __ROL4__(v326 ^ v340 ^ v352 ^ v293, 1);
      v239 = __ROL4__(v315 ^ v226 ^ v352 ^ v345, 1);
      v311 = __ROL4__(v333 ^ v307 ^ v340 ^ v337, 1);
      v240 = v236 - 899497514 + v311 + __ROL4__(v234, 5);
      v241 = v232 + (v234 ^ v237 ^ v235);
      v242 = __ROR4__(v234, 2);
      v243 = __ROL4__(v311 ^ v303 ^ v344 ^ v353, 1);
      v244 = v241 - 899497514 + v315 + __ROL4__(v240, 5);
      v245 = v235 + (v240 ^ v242 ^ v237);
      v246 = __ROR4__(v240, 2);
      v247 = v245 - 899497514 + v238 + __ROL4__(v244, 5);
      v248 = v242 ^ v244;
      v249 = __ROR4__(v244, 2);
      v250 = v237 + (v246 ^ v248) - 899497514 + v243 + __ROL4__(v247, 5);
      v251 = (v246 ^ v247 ^ v249) - 899497514;
      v252 = __ROR4__(v247, 2);
      v253 = v242 + v251 + v239 + __ROL4__(v250, 5);
      v254 = __ROL4__(v238 ^ v333 ^ v353 ^ v209, 1);
      v255 = v246 + (v250 ^ v252 ^ v249) - 899497514;
      v256 = __ROR4__(v250, 2);
      v257 = __ROL4__(v243 ^ v322 ^ v345 ^ v337, 1);
      v258 = __ROL4__(v239 ^ v326 ^ v209 ^ v298, 1);
      v259 = v255 + v254 + __ROL4__(v253, 5);
      v260 = v249 - 899497514 + (v253 ^ v256 ^ v252) + v257 + __ROL4__(v259, 5);
      v261 = __ROR4__(v253, 2);
      v262 = __ROL4__(v311 ^ v254 ^ v337 ^ v293, 1);
      v263 = v252 - 899497514 + (v259 ^ v261 ^ v256) + v258 + __ROL4__(v260, 5);
      v264 = __ROR4__(v259, 2);
      v265 = v264 ^ v261 ^ v260;
      v266 = __ROR4__(v260, 2);
      v299 = __ROL4__(v257 ^ v315 ^ v303 ^ v298, 1);
      v267 = v256 + v265 - 899497514 + v262 + __ROL4__(v263, 5);
      v268 = (v264 ^ v263 ^ v266) - 899497514;
      v269 = __ROR4__(v263, 2);
      v270 = v261 + v268 + __ROL4__(v267, 5) + v299;
      v294 = __ROL4__(v238 ^ v258 ^ v329 ^ v293, 1);
      v271 = v264 + (v267 ^ v269 ^ v266);
      v272 = __ROR4__(v267, 2);
      v273 = v271 + v294 + __ROL4__(v270, 5) - 899497514;
      v304 = __ROL4__(v243 ^ v333 ^ v262 ^ v303, 1);
      v274 = (v270 ^ v272 ^ v269) - 899497514;
      v275 = __ROR4__(v270, 2);
      v276 = __ROL4__(v239 ^ v322 ^ v329 ^ v299, 1);
      v346 = v266 + v274 + v304 + __ROL4__(v273, 5);
      v277 = v269 + (v273 ^ v275 ^ v272);
      v278 = __ROR4__(v273, 2);
      v279 = v277 + v276 + __ROL4__(v346, 5) - 899497514;
      v280 = __ROL4__(v294 ^ v254 ^ v326 ^ v333, 1);
      v281 = __ROR4__(v346, 2);
      v282 = (v278 ^ v275 ^ v346) - 899497514 + __ROL4__(v279, 5) + v280 + v272;
      v283 = (v278 ^ v279 ^ v281) - 899497514;
      v284 = __ROR4__(v279, 2);
      v285 = v283 + __ROL4__(v282, 5) + v275 + __ROL4__(v257 ^ v311 ^ v304 ^ v322, 1);
      v286 = v347 + (v282 ^ v284 ^ v281);
      v4 = v350 + v284;
      v5 = v286 + __ROL4__(v285, 5) + v278 + __ROL4__(v276 ^ v315 ^ v258 ^ v326, 1) - 899497514;
      v6 = v348 + v285;
      v8 = v351 + v281;
      v9 = (unsigned int *)(v354 + 64);
      v7 = v349 + __ROR4__(v282, 2);
      v287 = v355-- == 1;
      *a1 = v5;
      a1[1] = v6;
      a1[2] = v7;
      a1[3] = v4;
      a1[4] = v8;
      v341 = v4;
      v354 += 64LL;
      v347 = v5;
      v348 = v6;
      v349 = v7;
      v350 = v4;
      v351 = v8;
    }
    while ( !v287 );
    a3 = v357;
  }
  *a4 = a3;
  return 0LL;
}
