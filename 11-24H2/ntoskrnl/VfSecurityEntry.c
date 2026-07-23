/*
 * XREFs of VfSecurityEntry @ 0x140610D90
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 VfSecurityEntry()
{
  const char *v1; // [rsp+20h] [rbp-E0h] BYREF
  int v2; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v3)(); // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  const char *v5; // [rsp+40h] [rbp-C0h]
  int v6; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v7)(); // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  const char *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  const char *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  const char *v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v19)(); // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  const char *v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  const char *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v27)(); // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  const char *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v31)(); // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  const char *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v35)(); // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  const char *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v39)(); // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  const char *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v43)(); // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  const char *v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v47)(); // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  const char *v49; // [rsp+1A0h] [rbp+A0h]
  int v50; // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v51)(); // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  const char *v53; // [rsp+1C0h] [rbp+C0h]
  int v54; // [rsp+1C8h] [rbp+C8h]
  __int64 (__fastcall *v55)(); // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  const char *v57; // [rsp+1E0h] [rbp+E0h]
  int v58; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v59)(); // [rsp+1F0h] [rbp+F0h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  const char *v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+208h] [rbp+108h]
  __int64 (__fastcall *v63)(); // [rsp+210h] [rbp+110h]
  __int64 v64; // [rsp+218h] [rbp+118h]
  const char *v65; // [rsp+220h] [rbp+120h]
  int v66; // [rsp+228h] [rbp+128h]
  __int64 (__fastcall *v67)(); // [rsp+230h] [rbp+130h]
  __int64 v68; // [rsp+238h] [rbp+138h]
  const char *v69; // [rsp+240h] [rbp+140h]
  int v70; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v71)(); // [rsp+250h] [rbp+150h]
  __int64 v72; // [rsp+258h] [rbp+158h]
  const char *v73; // [rsp+260h] [rbp+160h]
  int v74; // [rsp+268h] [rbp+168h]
  __int64 (__fastcall *v75)(); // [rsp+270h] [rbp+170h]
  __int64 v76; // [rsp+278h] [rbp+178h]
  const char *v77; // [rsp+280h] [rbp+180h]
  int v78; // [rsp+288h] [rbp+188h]
  __int64 (__fastcall *v79)(); // [rsp+290h] [rbp+190h]
  __int64 v80; // [rsp+298h] [rbp+198h]
  const char *v81; // [rsp+2A0h] [rbp+1A0h]
  int v82; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v83)(); // [rsp+2B0h] [rbp+1B0h]
  __int64 v84; // [rsp+2B8h] [rbp+1B8h]
  const char *v85; // [rsp+2C0h] [rbp+1C0h]
  int v86; // [rsp+2C8h] [rbp+1C8h]
  __int64 (__fastcall *v87)(); // [rsp+2D0h] [rbp+1D0h]
  __int64 v88; // [rsp+2D8h] [rbp+1D8h]
  const char *v89; // [rsp+2E0h] [rbp+1E0h]
  int v90; // [rsp+2E8h] [rbp+1E8h]
  __int64 (__fastcall *v91)(); // [rsp+2F0h] [rbp+1F0h]
  __int64 v92; // [rsp+2F8h] [rbp+1F8h]
  const char *v93; // [rsp+300h] [rbp+200h]
  int v94; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v95)(); // [rsp+310h] [rbp+210h]
  __int64 v96; // [rsp+318h] [rbp+218h]
  const char *v97; // [rsp+320h] [rbp+220h]
  int v98; // [rsp+328h] [rbp+228h]
  __int64 (__fastcall *v99)(); // [rsp+330h] [rbp+230h]
  __int64 v100; // [rsp+338h] [rbp+238h]
  const char *v101; // [rsp+340h] [rbp+240h]
  int v102; // [rsp+348h] [rbp+248h]
  __int64 (__fastcall *v103)(); // [rsp+350h] [rbp+250h]
  __int64 v104; // [rsp+358h] [rbp+258h]
  const char *v105; // [rsp+360h] [rbp+260h]
  int v106; // [rsp+368h] [rbp+268h]
  __int64 (__fastcall *v107)(); // [rsp+370h] [rbp+270h]
  __int64 v108; // [rsp+378h] [rbp+278h]
  const char *v109; // [rsp+380h] [rbp+280h]
  int v110; // [rsp+388h] [rbp+288h]
  __int64 (__fastcall *v111)(); // [rsp+390h] [rbp+290h]
  __int64 v112; // [rsp+398h] [rbp+298h]
  const char *v113; // [rsp+3A0h] [rbp+2A0h]
  int v114; // [rsp+3A8h] [rbp+2A8h]
  __int64 (__fastcall *v115)(); // [rsp+3B0h] [rbp+2B0h]
  __int64 v116; // [rsp+3B8h] [rbp+2B8h]
  const char *v117; // [rsp+3C0h] [rbp+2C0h]
  int v118; // [rsp+3C8h] [rbp+2C8h]
  __int64 (__fastcall *v119)(); // [rsp+3D0h] [rbp+2D0h]
  __int64 v120; // [rsp+3D8h] [rbp+2D8h]
  const char *v121; // [rsp+3E0h] [rbp+2E0h]
  int v122; // [rsp+3E8h] [rbp+2E8h]
  __int64 (__fastcall *v123)(); // [rsp+3F0h] [rbp+2F0h]
  __int64 v124; // [rsp+3F8h] [rbp+2F8h]
  const char *v125; // [rsp+400h] [rbp+300h]
  int v126; // [rsp+408h] [rbp+308h]
  __int64 (__fastcall *v127)(); // [rsp+410h] [rbp+310h]
  __int64 v128; // [rsp+418h] [rbp+318h]
  const char *v129; // [rsp+420h] [rbp+320h]
  int v130; // [rsp+428h] [rbp+328h]
  __int64 (__fastcall *v131)(); // [rsp+430h] [rbp+330h]
  __int64 v132; // [rsp+438h] [rbp+338h]
  const char *v133; // [rsp+440h] [rbp+340h]
  int v134; // [rsp+448h] [rbp+348h]
  __int64 (__fastcall *v135)(); // [rsp+450h] [rbp+350h]
  __int64 v136; // [rsp+458h] [rbp+358h]
  const char *v137; // [rsp+460h] [rbp+360h]
  int v138; // [rsp+468h] [rbp+368h]
  __int64 (__fastcall *v139)(); // [rsp+470h] [rbp+370h]
  __int64 v140; // [rsp+478h] [rbp+378h]
  const char *v141; // [rsp+480h] [rbp+380h]
  int v142; // [rsp+488h] [rbp+388h]
  __int64 (__fastcall *v143)(); // [rsp+490h] [rbp+390h]
  __int64 v144; // [rsp+498h] [rbp+398h]
  const char *v145; // [rsp+4A0h] [rbp+3A0h]
  int v146; // [rsp+4A8h] [rbp+3A8h]
  __int64 (__fastcall *v147)(); // [rsp+4B0h] [rbp+3B0h]
  __int64 v148; // [rsp+4B8h] [rbp+3B8h]
  const char *v149; // [rsp+4C0h] [rbp+3C0h]
  int v150; // [rsp+4C8h] [rbp+3C8h]
  __int64 (__fastcall *v151)(); // [rsp+4D0h] [rbp+3D0h]
  __int64 v152; // [rsp+4D8h] [rbp+3D8h]
  const char *v153; // [rsp+4E0h] [rbp+3E0h]
  int v154; // [rsp+4E8h] [rbp+3E8h]
  __int64 (__fastcall *v155)(); // [rsp+4F0h] [rbp+3F0h]
  __int64 v156; // [rsp+4F8h] [rbp+3F8h]
  const char *v157; // [rsp+500h] [rbp+400h]
  int v158; // [rsp+508h] [rbp+408h]
  __int64 (__fastcall *v159)(); // [rsp+510h] [rbp+410h]
  __int64 v160; // [rsp+518h] [rbp+418h]
  const char *v161; // [rsp+520h] [rbp+420h]
  int v162; // [rsp+528h] [rbp+428h]
  __int64 (__fastcall *v163)(); // [rsp+530h] [rbp+430h]
  __int64 v164; // [rsp+538h] [rbp+438h]
  const char *v165; // [rsp+540h] [rbp+440h]
  int v166; // [rsp+548h] [rbp+448h]
  __int64 (__fastcall *v167)(); // [rsp+550h] [rbp+450h]
  __int64 v168; // [rsp+558h] [rbp+458h]
  const char *v169; // [rsp+560h] [rbp+460h]
  int v170; // [rsp+568h] [rbp+468h]
  __int64 (__fastcall *v171)(); // [rsp+570h] [rbp+470h]
  __int64 v172; // [rsp+578h] [rbp+478h]
  const char *v173; // [rsp+580h] [rbp+480h]
  int v174; // [rsp+588h] [rbp+488h]
  __int64 (__fastcall *v175)(); // [rsp+590h] [rbp+490h]
  __int64 v176; // [rsp+598h] [rbp+498h]
  const char *v177; // [rsp+5A0h] [rbp+4A0h]
  int v178; // [rsp+5A8h] [rbp+4A8h]
  __int64 (__fastcall *v179)(); // [rsp+5B0h] [rbp+4B0h]
  __int64 v180; // [rsp+5B8h] [rbp+4B8h]
  const char *v181; // [rsp+5C0h] [rbp+4C0h]
  int v182; // [rsp+5C8h] [rbp+4C8h]
  __int64 (__fastcall *v183)(); // [rsp+5D0h] [rbp+4D0h]
  __int64 v184; // [rsp+5D8h] [rbp+4D8h]
  const char *v185; // [rsp+5E0h] [rbp+4E0h]
  int v186; // [rsp+5E8h] [rbp+4E8h]
  __int64 (__fastcall *v187)(); // [rsp+5F0h] [rbp+4F0h]
  __int64 v188; // [rsp+5F8h] [rbp+4F8h]
  const char *v189; // [rsp+600h] [rbp+500h]
  int v190; // [rsp+608h] [rbp+508h]
  __int64 (__fastcall *v191)(); // [rsp+610h] [rbp+510h]
  __int64 v192; // [rsp+618h] [rbp+518h]
  const char *v193; // [rsp+620h] [rbp+520h]
  int v194; // [rsp+628h] [rbp+528h]
  __int64 (__fastcall *v195)(); // [rsp+630h] [rbp+530h]
  __int64 v196; // [rsp+638h] [rbp+538h]
  const char *v197; // [rsp+640h] [rbp+540h]
  int v198; // [rsp+648h] [rbp+548h]
  __int64 (__fastcall *v199)(); // [rsp+650h] [rbp+550h]
  __int64 v200; // [rsp+658h] [rbp+558h]
  const char *v201; // [rsp+660h] [rbp+560h]
  int v202; // [rsp+668h] [rbp+568h]
  __int64 (__fastcall *v203)(); // [rsp+670h] [rbp+570h]
  __int64 v204; // [rsp+678h] [rbp+578h]
  const char *v205; // [rsp+680h] [rbp+580h]
  int v206; // [rsp+688h] [rbp+588h]
  __int64 (__fastcall *v207)(); // [rsp+690h] [rbp+590h]
  __int64 v208; // [rsp+698h] [rbp+598h]
  const char *v209; // [rsp+6A0h] [rbp+5A0h]
  int v210; // [rsp+6A8h] [rbp+5A8h]
  __int64 (__fastcall *v211)(); // [rsp+6B0h] [rbp+5B0h]
  __int64 v212; // [rsp+6B8h] [rbp+5B8h]
  const char *v213; // [rsp+6C0h] [rbp+5C0h]
  int v214; // [rsp+6C8h] [rbp+5C8h]
  __int64 (__fastcall *v215)(); // [rsp+6D0h] [rbp+5D0h]
  __int64 v216; // [rsp+6D8h] [rbp+5D8h]
  const char *v217; // [rsp+6E0h] [rbp+5E0h]
  int v218; // [rsp+6E8h] [rbp+5E8h]
  __int64 (__fastcall *v219)(); // [rsp+6F0h] [rbp+5F0h]
  __int64 v220; // [rsp+6F8h] [rbp+5F8h]
  const char *v221; // [rsp+700h] [rbp+600h]
  int v222; // [rsp+708h] [rbp+608h]
  __int64 (__fastcall *v223)(); // [rsp+710h] [rbp+610h]
  __int64 v224; // [rsp+718h] [rbp+618h]
  const char *v225; // [rsp+720h] [rbp+620h]
  int v226; // [rsp+728h] [rbp+628h]
  __int64 (__fastcall *v227)(); // [rsp+730h] [rbp+630h]
  __int64 v228; // [rsp+738h] [rbp+638h]
  const char *v229; // [rsp+740h] [rbp+640h]
  int v230; // [rsp+748h] [rbp+648h]
  __int64 (__fastcall *v231)(); // [rsp+750h] [rbp+650h]
  __int64 v232; // [rsp+758h] [rbp+658h]
  const char *v233; // [rsp+760h] [rbp+660h]
  int v234; // [rsp+768h] [rbp+668h]
  __int64 (__fastcall *v235)(); // [rsp+770h] [rbp+670h]
  __int64 v236; // [rsp+778h] [rbp+678h]
  const char *v237; // [rsp+780h] [rbp+680h]
  int v238; // [rsp+788h] [rbp+688h]
  __int64 (__fastcall *v239)(); // [rsp+790h] [rbp+690h]
  __int64 v240; // [rsp+798h] [rbp+698h]
  const char *v241; // [rsp+7A0h] [rbp+6A0h]
  int v242; // [rsp+7A8h] [rbp+6A8h]
  __int64 (__fastcall *v243)(); // [rsp+7B0h] [rbp+6B0h]
  __int64 v244; // [rsp+7B8h] [rbp+6B8h]
  const char *v245; // [rsp+7C0h] [rbp+6C0h]
  int v246; // [rsp+7C8h] [rbp+6C8h]
  __int64 (__fastcall *v247)(); // [rsp+7D0h] [rbp+6D0h]
  __int64 v248; // [rsp+7D8h] [rbp+6D8h]
  const char *v249; // [rsp+7E0h] [rbp+6E0h]
  int v250; // [rsp+7E8h] [rbp+6E8h]
  __int64 (__fastcall *v251)(); // [rsp+7F0h] [rbp+6F0h]
  __int64 v252; // [rsp+7F8h] [rbp+6F8h]
  const char *v253; // [rsp+800h] [rbp+700h]
  int v254; // [rsp+808h] [rbp+708h]
  __int64 (__fastcall *v255)(); // [rsp+810h] [rbp+710h]
  __int64 v256; // [rsp+818h] [rbp+718h]
  const char *v257; // [rsp+820h] [rbp+720h]
  int v258; // [rsp+828h] [rbp+728h]
  __int64 (__fastcall *v259)(); // [rsp+830h] [rbp+730h]
  __int64 v260; // [rsp+838h] [rbp+738h]
  const char *v261; // [rsp+840h] [rbp+740h]
  int v262; // [rsp+848h] [rbp+748h]
  __int64 (__fastcall *v263)(); // [rsp+850h] [rbp+750h]
  __int64 v264; // [rsp+858h] [rbp+758h]
  const char *v265; // [rsp+860h] [rbp+760h]
  int v266; // [rsp+868h] [rbp+768h]
  __int64 (__fastcall *v267)(); // [rsp+870h] [rbp+770h]
  __int64 v268; // [rsp+878h] [rbp+778h]
  const char *v269; // [rsp+880h] [rbp+780h]
  int v270; // [rsp+888h] [rbp+788h]
  __int64 (__fastcall *v271)(); // [rsp+890h] [rbp+790h]
  __int64 v272; // [rsp+898h] [rbp+798h]
  const char *v273; // [rsp+8A0h] [rbp+7A0h]
  int v274; // [rsp+8A8h] [rbp+7A8h]
  __int64 (__fastcall *v275)(); // [rsp+8B0h] [rbp+7B0h]
  __int64 v276; // [rsp+8B8h] [rbp+7B8h]
  const char *v277; // [rsp+8C0h] [rbp+7C0h]
  int v278; // [rsp+8C8h] [rbp+7C8h]
  __int64 (__fastcall *v279)(); // [rsp+8D0h] [rbp+7D0h]
  __int64 v280; // [rsp+8D8h] [rbp+7D8h]
  const char *v281; // [rsp+8E0h] [rbp+7E0h]
  int v282; // [rsp+8E8h] [rbp+7E8h]
  __int64 (__fastcall *v283)(); // [rsp+8F0h] [rbp+7F0h]
  __int64 v284; // [rsp+8F8h] [rbp+7F8h]
  const char *v285; // [rsp+900h] [rbp+800h]
  int v286; // [rsp+908h] [rbp+808h]
  __int64 (__fastcall *v287)(); // [rsp+910h] [rbp+810h]
  __int64 v288; // [rsp+918h] [rbp+818h]
  const char *v289; // [rsp+920h] [rbp+820h]
  int v290; // [rsp+928h] [rbp+828h]
  __int64 (__fastcall *v291)(); // [rsp+930h] [rbp+830h]
  __int64 v292; // [rsp+938h] [rbp+838h]
  const char *v293; // [rsp+940h] [rbp+840h]
  int v294; // [rsp+948h] [rbp+848h]
  __int64 (__fastcall *v295)(); // [rsp+950h] [rbp+850h]
  __int64 v296; // [rsp+958h] [rbp+858h]
  const char *v297; // [rsp+960h] [rbp+860h]
  int v298; // [rsp+968h] [rbp+868h]
  __int64 (__fastcall *v299)(); // [rsp+970h] [rbp+870h]
  __int64 v300; // [rsp+978h] [rbp+878h]
  const char *v301; // [rsp+980h] [rbp+880h]
  int v302; // [rsp+988h] [rbp+888h]
  __int64 (__fastcall *v303)(); // [rsp+990h] [rbp+890h]
  __int64 v304; // [rsp+998h] [rbp+898h]
  const char *v305; // [rsp+9A0h] [rbp+8A0h]
  int v306; // [rsp+9A8h] [rbp+8A8h]
  __int64 (__fastcall *v307)(); // [rsp+9B0h] [rbp+8B0h]
  __int64 v308; // [rsp+9B8h] [rbp+8B8h]
  const char *v309; // [rsp+9C0h] [rbp+8C0h]
  int v310; // [rsp+9C8h] [rbp+8C8h]
  __int64 (__fastcall *v311)(); // [rsp+9D0h] [rbp+8D0h]
  __int64 v312; // [rsp+9D8h] [rbp+8D8h]
  const char *v313; // [rsp+9E0h] [rbp+8E0h]
  int v314; // [rsp+9E8h] [rbp+8E8h]
  __int64 (__fastcall *v315)(); // [rsp+9F0h] [rbp+8F0h]
  __int64 v316; // [rsp+9F8h] [rbp+8F8h]
  const char *v317; // [rsp+A00h] [rbp+900h]
  int v318; // [rsp+A08h] [rbp+908h]
  __int64 (__fastcall *v319)(); // [rsp+A10h] [rbp+910h]
  __int64 v320; // [rsp+A18h] [rbp+918h]
  const char *v321; // [rsp+A20h] [rbp+920h]
  int v322; // [rsp+A28h] [rbp+928h]
  __int64 (__fastcall *v323)(); // [rsp+A30h] [rbp+930h]
  __int64 v324; // [rsp+A38h] [rbp+938h]
  const char *v325; // [rsp+A40h] [rbp+940h]
  int v326; // [rsp+A48h] [rbp+948h]
  __int64 (__fastcall *v327)(); // [rsp+A50h] [rbp+950h]
  __int64 v328; // [rsp+A58h] [rbp+958h]
  const char *v329; // [rsp+A60h] [rbp+960h]
  int v330; // [rsp+A68h] [rbp+968h]
  __int64 (__fastcall *v331)(); // [rsp+A70h] [rbp+970h]
  __int64 v332; // [rsp+A78h] [rbp+978h]
  const char *v333; // [rsp+A80h] [rbp+980h]
  int v334; // [rsp+A88h] [rbp+988h]
  __int64 (__fastcall *v335)(); // [rsp+A90h] [rbp+990h]
  __int64 v336; // [rsp+A98h] [rbp+998h]
  const char *v337; // [rsp+AA0h] [rbp+9A0h]
  int v338; // [rsp+AA8h] [rbp+9A8h]
  __int64 (__fastcall *v339)(); // [rsp+AB0h] [rbp+9B0h]
  __int64 v340; // [rsp+AB8h] [rbp+9B8h]
  const char *v341; // [rsp+AC0h] [rbp+9C0h]
  int v342; // [rsp+AC8h] [rbp+9C8h]
  __int64 (__fastcall *v343)(); // [rsp+AD0h] [rbp+9D0h]
  __int64 v344; // [rsp+AD8h] [rbp+9D8h]
  const char *v345; // [rsp+AE0h] [rbp+9E0h]
  int v346; // [rsp+AE8h] [rbp+9E8h]
  __int64 (__fastcall *v347)(); // [rsp+AF0h] [rbp+9F0h]
  __int64 v348; // [rsp+AF8h] [rbp+9F8h]
  const char *v349; // [rsp+B00h] [rbp+A00h]
  int v350; // [rsp+B08h] [rbp+A08h]
  __int64 (__fastcall *v351)(); // [rsp+B10h] [rbp+A10h]
  __int64 v352; // [rsp+B18h] [rbp+A18h]
  const char *v353; // [rsp+B20h] [rbp+A20h]
  int v354; // [rsp+B28h] [rbp+A28h]
  __int64 (__fastcall *v355)(); // [rsp+B30h] [rbp+A30h]
  __int64 v356; // [rsp+B38h] [rbp+A38h]
  const char *v357; // [rsp+B40h] [rbp+A40h]
  int v358; // [rsp+B48h] [rbp+A48h]
  __int64 (__fastcall *v359)(); // [rsp+B50h] [rbp+A50h]
  __int64 v360; // [rsp+B58h] [rbp+A58h]
  const char *v361; // [rsp+B60h] [rbp+A60h]
  int v362; // [rsp+B68h] [rbp+A68h]
  __int64 (__fastcall *v363)(); // [rsp+B70h] [rbp+A70h]
  __int64 v364; // [rsp+B78h] [rbp+A78h]
  const char *v365; // [rsp+B80h] [rbp+A80h]
  int v366; // [rsp+B88h] [rbp+A88h]
  __int64 (__fastcall *v367)(); // [rsp+B90h] [rbp+A90h]
  __int64 v368; // [rsp+B98h] [rbp+A98h]
  const char *v369; // [rsp+BA0h] [rbp+AA0h]
  int v370; // [rsp+BA8h] [rbp+AA8h]
  __int64 (__fastcall *v371)(); // [rsp+BB0h] [rbp+AB0h]
  __int64 v372; // [rsp+BB8h] [rbp+AB8h]
  const char *v373; // [rsp+BC0h] [rbp+AC0h]
  int v374; // [rsp+BC8h] [rbp+AC8h]
  __int64 (__fastcall *v375)(); // [rsp+BD0h] [rbp+AD0h]
  __int64 v376; // [rsp+BD8h] [rbp+AD8h]
  const char *v377; // [rsp+BE0h] [rbp+AE0h]
  int v378; // [rsp+BE8h] [rbp+AE8h]
  __int64 (__fastcall *v379)(); // [rsp+BF0h] [rbp+AF0h]
  __int64 v380; // [rsp+BF8h] [rbp+AF8h]
  const char *v381; // [rsp+C00h] [rbp+B00h]
  int v382; // [rsp+C08h] [rbp+B08h]
  __int64 (__fastcall *v383)(); // [rsp+C10h] [rbp+B10h]
  __int64 v384; // [rsp+C18h] [rbp+B18h]
  const char *v385; // [rsp+C20h] [rbp+B20h]
  int v386; // [rsp+C28h] [rbp+B28h]
  __int64 (__fastcall *v387)(); // [rsp+C30h] [rbp+B30h]
  __int64 v388; // [rsp+C38h] [rbp+B38h]
  const char *v389; // [rsp+C40h] [rbp+B40h]
  int v390; // [rsp+C48h] [rbp+B48h]
  __int64 (__fastcall *v391)(); // [rsp+C50h] [rbp+B50h]
  __int64 v392; // [rsp+C58h] [rbp+B58h]
  const char *v393; // [rsp+C60h] [rbp+B60h]
  int v394; // [rsp+C68h] [rbp+B68h]
  __int64 (__fastcall *v395)(); // [rsp+C70h] [rbp+B70h]
  __int64 v396; // [rsp+C78h] [rbp+B78h]
  const char *v397; // [rsp+C80h] [rbp+B80h]
  int v398; // [rsp+C88h] [rbp+B88h]
  __int64 (__fastcall *v399)(); // [rsp+C90h] [rbp+B90h]
  __int64 v400; // [rsp+C98h] [rbp+B98h]
  const char *v401; // [rsp+CA0h] [rbp+BA0h]
  int v402; // [rsp+CA8h] [rbp+BA8h]
  __int64 (__fastcall *v403)(); // [rsp+CB0h] [rbp+BB0h]
  __int64 v404; // [rsp+CB8h] [rbp+BB8h]
  const char *v405; // [rsp+CC0h] [rbp+BC0h]
  int v406; // [rsp+CC8h] [rbp+BC8h]
  __int64 (__fastcall *v407)(); // [rsp+CD0h] [rbp+BD0h]
  __int64 v408; // [rsp+CD8h] [rbp+BD8h]
  const char *v409; // [rsp+CE0h] [rbp+BE0h]
  int v410; // [rsp+CE8h] [rbp+BE8h]
  __int64 (__fastcall *v411)(); // [rsp+CF0h] [rbp+BF0h]
  __int64 v412; // [rsp+CF8h] [rbp+BF8h]
  const char *v413; // [rsp+D00h] [rbp+C00h]
  int v414; // [rsp+D08h] [rbp+C08h]
  __int64 (__fastcall *v415)(); // [rsp+D10h] [rbp+C10h]
  __int64 v416; // [rsp+D18h] [rbp+C18h]
  const char *v417; // [rsp+D20h] [rbp+C20h]
  int v418; // [rsp+D28h] [rbp+C28h]
  __int64 (__fastcall *v419)(); // [rsp+D30h] [rbp+C30h]
  __int64 v420; // [rsp+D38h] [rbp+C38h]
  const char *v421; // [rsp+D40h] [rbp+C40h]
  int v422; // [rsp+D48h] [rbp+C48h]
  __int64 (__fastcall *v423)(); // [rsp+D50h] [rbp+C50h]
  __int64 v424; // [rsp+D58h] [rbp+C58h]
  const char *v425; // [rsp+D60h] [rbp+C60h]
  int v426; // [rsp+D68h] [rbp+C68h]
  __int64 (__fastcall *v427)(); // [rsp+D70h] [rbp+C70h]
  __int64 v428; // [rsp+D78h] [rbp+C78h]
  const char *v429; // [rsp+D80h] [rbp+C80h]
  int v430; // [rsp+D88h] [rbp+C88h]
  __int64 (__fastcall *v431)(); // [rsp+D90h] [rbp+C90h]
  __int64 v432; // [rsp+D98h] [rbp+C98h]
  const char *v433; // [rsp+DA0h] [rbp+CA0h]
  int v434; // [rsp+DA8h] [rbp+CA8h]
  __int64 (__fastcall *v435)(); // [rsp+DB0h] [rbp+CB0h]
  __int64 v436; // [rsp+DB8h] [rbp+CB8h]
  const char *v437; // [rsp+DC0h] [rbp+CC0h]
  int v438; // [rsp+DC8h] [rbp+CC8h]
  __int64 (__fastcall *v439)(); // [rsp+DD0h] [rbp+CD0h]
  __int64 v440; // [rsp+DD8h] [rbp+CD8h]
  const char *v441; // [rsp+DE0h] [rbp+CE0h]
  int v442; // [rsp+DE8h] [rbp+CE8h]
  __int64 (__fastcall *v443)(); // [rsp+DF0h] [rbp+CF0h]
  __int64 v444; // [rsp+DF8h] [rbp+CF8h]
  const char *v445; // [rsp+E00h] [rbp+D00h]
  int v446; // [rsp+E08h] [rbp+D08h]
  __int64 (__fastcall *v447)(); // [rsp+E10h] [rbp+D10h]
  __int64 v448; // [rsp+E18h] [rbp+D18h]
  const char *v449; // [rsp+E20h] [rbp+D20h]
  int v450; // [rsp+E28h] [rbp+D28h]
  __int64 (__fastcall *v451)(); // [rsp+E30h] [rbp+D30h]
  __int64 v452; // [rsp+E38h] [rbp+D38h]
  const char *v453; // [rsp+E40h] [rbp+D40h]
  int v454; // [rsp+E48h] [rbp+D48h]
  __int64 (__fastcall *v455)(); // [rsp+E50h] [rbp+D50h]
  __int64 v456; // [rsp+E58h] [rbp+D58h]
  const char *v457; // [rsp+E60h] [rbp+D60h]
  int v458; // [rsp+E68h] [rbp+D68h]
  __int64 (__fastcall *v459)(); // [rsp+E70h] [rbp+D70h]
  __int64 v460; // [rsp+E78h] [rbp+D78h]
  const char *v461; // [rsp+E80h] [rbp+D80h]
  int v462; // [rsp+E88h] [rbp+D88h]
  __int64 (__fastcall *v463)(); // [rsp+E90h] [rbp+D90h]
  __int64 v464; // [rsp+E98h] [rbp+D98h]
  const char *v465; // [rsp+EA0h] [rbp+DA0h]
  int v466; // [rsp+EA8h] [rbp+DA8h]
  __int64 (__fastcall *v467)(); // [rsp+EB0h] [rbp+DB0h]
  __int64 v468; // [rsp+EB8h] [rbp+DB8h]
  const char *v469; // [rsp+EC0h] [rbp+DC0h]
  int v470; // [rsp+EC8h] [rbp+DC8h]
  __int64 (__fastcall *v471)(); // [rsp+ED0h] [rbp+DD0h]
  __int64 v472; // [rsp+ED8h] [rbp+DD8h]
  const char *v473; // [rsp+EE0h] [rbp+DE0h]
  int v474; // [rsp+EE8h] [rbp+DE8h]
  __int64 (__fastcall *v475)(); // [rsp+EF0h] [rbp+DF0h]
  __int64 v476; // [rsp+EF8h] [rbp+DF8h]
  const char *v477; // [rsp+F00h] [rbp+E00h]
  int v478; // [rsp+F08h] [rbp+E08h]
  __int64 (__fastcall *v479)(); // [rsp+F10h] [rbp+E10h]
  __int64 v480; // [rsp+F18h] [rbp+E18h]
  const char *v481; // [rsp+F20h] [rbp+E20h]
  int v482; // [rsp+F28h] [rbp+E28h]
  __int64 (__fastcall *v483)(); // [rsp+F30h] [rbp+E30h]
  __int64 v484; // [rsp+F38h] [rbp+E38h]
  const char *v485; // [rsp+F40h] [rbp+E40h]
  int v486; // [rsp+F48h] [rbp+E48h]
  __int64 (__fastcall *v487)(); // [rsp+F50h] [rbp+E50h]
  __int64 v488; // [rsp+F58h] [rbp+E58h]
  const char *v489; // [rsp+F60h] [rbp+E60h]
  int v490; // [rsp+F68h] [rbp+E68h]
  __int64 (__fastcall *v491)(); // [rsp+F70h] [rbp+E70h]
  __int64 v492; // [rsp+F78h] [rbp+E78h]
  const char *v493; // [rsp+F80h] [rbp+E80h]
  int v494; // [rsp+F88h] [rbp+E88h]
  __int64 (__fastcall *v495)(); // [rsp+F90h] [rbp+E90h]
  __int64 v496; // [rsp+F98h] [rbp+E98h]
  const char *v497; // [rsp+FA0h] [rbp+EA0h]
  int v498; // [rsp+FA8h] [rbp+EA8h]
  __int64 (__fastcall *v499)(); // [rsp+FB0h] [rbp+EB0h]
  __int64 v500; // [rsp+FB8h] [rbp+EB8h]
  const char *v501; // [rsp+FC0h] [rbp+EC0h]
  int v502; // [rsp+FC8h] [rbp+EC8h]
  __int64 (__fastcall *v503)(); // [rsp+FD0h] [rbp+ED0h]
  __int64 v504; // [rsp+FD8h] [rbp+ED8h]
  const char *v505; // [rsp+FE0h] [rbp+EE0h]
  int v506; // [rsp+FE8h] [rbp+EE8h]
  __int64 (__fastcall *v507)(); // [rsp+FF0h] [rbp+EF0h]
  __int64 v508; // [rsp+FF8h] [rbp+EF8h]
  const char *v509; // [rsp+1000h] [rbp+F00h]
  int v510; // [rsp+1008h] [rbp+F08h]
  __int64 (__fastcall *v511)(); // [rsp+1010h] [rbp+F10h]
  __int64 v512; // [rsp+1018h] [rbp+F18h]
  const char *v513; // [rsp+1020h] [rbp+F20h]
  int v514; // [rsp+1028h] [rbp+F28h]
  __int64 (__fastcall *v515)(); // [rsp+1030h] [rbp+F30h]
  __int64 v516; // [rsp+1038h] [rbp+F38h]
  const char *v517; // [rsp+1040h] [rbp+F40h]
  int v518; // [rsp+1048h] [rbp+F48h]
  __int64 (__fastcall *v519)(); // [rsp+1050h] [rbp+F50h]
  __int64 v520; // [rsp+1058h] [rbp+F58h]
  const char *v521; // [rsp+1060h] [rbp+F60h]
  int v522; // [rsp+1068h] [rbp+F68h]
  __int64 (__fastcall *v523)(); // [rsp+1070h] [rbp+F70h]
  __int64 v524; // [rsp+1078h] [rbp+F78h]
  const char *v525; // [rsp+1080h] [rbp+F80h]
  int v526; // [rsp+1088h] [rbp+F88h]
  __int64 (__fastcall *v527)(); // [rsp+1090h] [rbp+F90h]
  __int64 v528; // [rsp+1098h] [rbp+F98h]
  const char *v529; // [rsp+10A0h] [rbp+FA0h]
  int v530; // [rsp+10A8h] [rbp+FA8h]
  __int64 (__fastcall *v531)(); // [rsp+10B0h] [rbp+FB0h]
  __int64 v532; // [rsp+10B8h] [rbp+FB8h]

  v2 = 148;
  v4 = 0LL;
  v1 = "ZwAccessCheckAndAuditAlarm";
  v6 = 147;
  v3 = VfZwAccessCheckAndAuditAlarm_Entry;
  v5 = "ZwAddBootEntry";
  v7 = VfZwQueryDriverEntryOrder_Entry;
  v9 = "ZwAddDriverEntry";
  v11 = VfZwQueryDriverEntryOrder_Entry;
  v13 = "ZwAdjustPrivilegesToken";
  v15 = VfZwTranslateFilePath_Entry;
  v17 = "ZwAllocateVirtualMemory";
  v19 = VfZwPowerInformation_Entry;
  v21 = "ZwCancelIoFile";
  v23 = VfZwAlpcCreateSecurityContext_Entry;
  v25 = "ZwCancelTimer";
  v27 = VfZwAlpcCreateSecurityContext_Entry;
  v29 = "ZwCloseObjectAuditAlarm";
  v31 = VfZwCloseObjectAuditAlarm_Entry;
  v33 = "ZwConnectPort";
  v35 = VfZwConnectPort_Entry;
  v37 = "ZwCreateDirectoryObject";
  v39 = VfZwOpenKey_Entry;
  v41 = "ZwCreateEvent";
  v43 = VfZwCreateTimer_Entry;
  v45 = "ZwCreateFile";
  v47 = VfZwCreateFile_Entry;
  v49 = "ZwCreateJobObject";
  v51 = VfZwOpenKey_Entry;
  v8 = 0LL;
  v10 = 146;
  v12 = 0LL;
  v14 = 145;
  v16 = 0LL;
  v18 = 144;
  v20 = 0LL;
  v22 = 133;
  v24 = 0LL;
  v26 = 132;
  v28 = 0LL;
  v30 = 130;
  v32 = 0LL;
  v34 = 128;
  v36 = 0LL;
  v38 = 127;
  v40 = 0LL;
  v42 = 125;
  v44 = 0LL;
  v46 = 124;
  v48 = 0LL;
  v50 = 123;
  v52 = 0LL;
  v53 = "ZwCreateKey";
  v55 = VfZwCreateKey_Entry;
  v57 = "ZwCreateSection";
  v59 = VfZwCreateSection_Entry;
  v61 = "ZwCreateSymbolicLinkObject";
  v63 = VfZwCreateSymbolicLinkObject_Entry;
  v65 = "ZwCreateTimer";
  v67 = VfZwCreateTimer_Entry;
  v69 = "ZwDeleteBootEntry";
  v71 = VfZwDeleteBootEntry_Entry;
  v73 = "ZwDeleteFile";
  v75 = VfZwDeleteFile_Entry;
  v77 = "ZwDeleteValueKey";
  v79 = VfZwDeleteValueKey_Entry;
  v81 = "ZwDeviceIoControlFile";
  v83 = VfZwDeviceIoControlFile_Entry;
  v85 = "ZwDisplayString";
  v87 = VfZwDeleteValueKey_Entry;
  v89 = "ZwDuplicateObject";
  v91 = VfZwDuplicateObject_Entry;
  v93 = "ZwDuplicateToken";
  v95 = VfZwDuplicateToken_Entry;
  v97 = "ZwEnumerateBootEntries";
  v99 = VfZwQueryDriverEntryOrder_Entry;
  v101 = "ZwEnumerateDriverEntries";
  v103 = VfZwQueryDriverEntryOrder_Entry;
  v105 = "ZwEnumerateKey";
  v54 = 122;
  v56 = 0LL;
  v58 = 119;
  v60 = 0LL;
  v62 = 118;
  v64 = 0LL;
  v66 = 117;
  v68 = 0LL;
  v70 = 114;
  v72 = 0LL;
  v74 = 113;
  v76 = 0LL;
  v78 = 111;
  v80 = 0LL;
  v82 = 110;
  v84 = 0LL;
  v86 = 109;
  v88 = 0LL;
  v90 = 108;
  v92 = 0LL;
  v94 = 107;
  v96 = 0LL;
  v98 = 106;
  v100 = 0LL;
  v102 = 105;
  v104 = 0LL;
  v106 = 104;
  v107 = VfZwQueryObject_Entry;
  v109 = "ZwEnumerateValueKey";
  v111 = VfZwQueryObject_Entry;
  v113 = "ZwFlushInstructionCache";
  v115 = VfZwSetDriverEntryOrder_Entry;
  v117 = "ZwFlushVirtualMemory";
  v119 = VfZwFlushVirtualMemory_Entry;
  v121 = "ZwFreeVirtualMemory";
  v123 = VfZwFreeVirtualMemory_Entry;
  v125 = "ZwFsControlFile";
  v127 = VfZwDeviceIoControlFile_Entry;
  v129 = "ZwLoadDriver";
  v131 = VfZwDeleteValueKey_Entry;
  v133 = "ZwLoadKey";
  v135 = VfZwLoadKey_Entry;
  v137 = "ZwMapViewOfSection";
  v139 = VfZwMapViewOfSection_Entry;
  v141 = "ZwModifyBootEntry";
  v143 = VfZwAlpcCreateSecurityContext_Entry;
  v145 = "ZwModifyDriverEntry";
  v147 = VfZwAlpcCreateSecurityContext_Entry;
  v149 = "ZwNotifyChangeKey";
  v151 = VfZwNotifyChangeKey_Entry;
  v153 = "ZwOpenDirectoryObject";
  v155 = VfZwOpenKey_Entry;
  v157 = "ZwOpenEvent";
  v159 = VfZwOpenKey_Entry;
  v108 = 0LL;
  v110 = 103;
  v112 = 0LL;
  v114 = 100;
  v116 = 0LL;
  v118 = 98;
  v120 = 0LL;
  v122 = 97;
  v124 = 0LL;
  v126 = 96;
  v128 = 0LL;
  v130 = 94;
  v132 = 0LL;
  v134 = 93;
  v136 = 0LL;
  v138 = 92;
  v140 = 0LL;
  v142 = 91;
  v144 = 0LL;
  v146 = 90;
  v148 = 0LL;
  v150 = 89;
  v152 = 0LL;
  v154 = 88;
  v156 = 0LL;
  v158 = 86;
  v160 = 0LL;
  v161 = "ZwOpenFile";
  v163 = VfZwOpenFile_Entry;
  v165 = "ZwOpenJobObject";
  v167 = VfZwOpenKey_Entry;
  v169 = "ZwOpenKey";
  v171 = VfZwOpenKey_Entry;
  v173 = "ZwOpenProcess";
  v175 = VfZwOpenThread_Entry;
  v177 = "ZwOpenProcessToken";
  v179 = VfZwAlpcCreateSecurityContext_Entry;
  v181 = "ZwOpenProcessTokenEx";
  v183 = VfZwAlpcCreateSecurityContext_Entry;
  v185 = "ZwOpenSection";
  v187 = VfZwOpenKey_Entry;
  v189 = "ZwOpenSymbolicLinkObject";
  v191 = VfZwOpenKey_Entry;
  v193 = "ZwOpenThread";
  v195 = VfZwOpenThread_Entry;
  v197 = "ZwOpenThreadToken";
  v199 = VfZwAlpcCreateSecurityContext_Entry;
  v201 = "ZwOpenThreadTokenEx";
  v203 = VfZwAlpcCreateSecurityContext_Entry;
  v205 = "ZwOpenTimer";
  v207 = VfZwOpenKey_Entry;
  v209 = "ZwPowerInformation";
  v211 = VfZwPowerInformation_Entry;
  v213 = "ZwProtectVirtualMemory";
  v162 = 85;
  v164 = 0LL;
  v166 = 84;
  v168 = 0LL;
  v170 = 83;
  v172 = 0LL;
  v174 = 79;
  v176 = 0LL;
  v178 = 78;
  v180 = 0LL;
  v182 = 77;
  v184 = 0LL;
  v186 = 75;
  v188 = 0LL;
  v190 = 74;
  v192 = 0LL;
  v194 = 73;
  v196 = 0LL;
  v198 = 72;
  v200 = 0LL;
  v202 = 71;
  v204 = 0LL;
  v206 = 70;
  v208 = 0LL;
  v210 = 67;
  v212 = 0LL;
  v214 = 63;
  v215 = VfZwProtectVirtualMemory_Entry;
  v217 = "ZwPulseEvent";
  v219 = VfZwAlpcCreateSecurityContext_Entry;
  v221 = "ZwQueryBootEntryOrder";
  v223 = VfZwQueryDriverEntryOrder_Entry;
  v225 = "ZwQueryBootOptions";
  v227 = VfZwQueryDriverEntryOrder_Entry;
  v229 = "ZwQueryDefaultLocale";
  v231 = VfZwAlpcCreateSecurityContext_Entry;
  v233 = "ZwQueryDefaultUILanguage";
  v235 = VfZwAlpcCreateSecurityContext_Entry;
  v237 = "ZwQueryDriverEntryOrder";
  v239 = VfZwQueryDriverEntryOrder_Entry;
  v241 = "ZwQueryInstallUILanguage";
  v243 = VfZwAlpcCreateSecurityContext_Entry;
  v245 = "ZwQueryDirectoryFile";
  v247 = VfZwQueryDirectoryFile_Entry;
  v249 = "ZwQueryDirectoryFileEx";
  v251 = VfZwQueryDirectoryFileEx_Entry;
  v253 = "ZwQueryDirectoryObject";
  v255 = VfZwTranslateFilePath_Entry;
  v257 = "ZwQueryEaFile";
  v259 = VfZwQueryEaFile_Entry;
  v261 = "ZwQueryFullAttributesFile";
  v263 = VfZwQueryFullAttributesFile_Entry;
  v265 = "ZwQueryInformationFile";
  v267 = VfZwFreeVirtualMemory_Entry;
  v216 = 0LL;
  v218 = 62;
  v220 = 0LL;
  v222 = 61;
  v224 = 0LL;
  v226 = 60;
  v228 = 0LL;
  v230 = 59;
  v232 = 0LL;
  v234 = 58;
  v236 = 0LL;
  v238 = 54;
  v240 = 0LL;
  v242 = 42;
  v244 = 0LL;
  v246 = 57;
  v248 = 0LL;
  v250 = 56;
  v252 = 0LL;
  v254 = 55;
  v256 = 0LL;
  v258 = 53;
  v260 = 0LL;
  v262 = 52;
  v264 = 0LL;
  v266 = 50;
  v268 = 0LL;
  v269 = "ZwQueryInformationJobObject";
  v271 = VfZwQueryObject_Entry;
  v273 = "ZwQueryInformationProcess";
  v275 = VfZwQueryObject_Entry;
  v277 = "ZwQueryInformationThread";
  v279 = VfZwQueryObject_Entry;
  v281 = "ZwQueryInformationToken";
  v283 = VfZwQueryObject_Entry;
  v285 = "ZwQueryKey";
  v287 = VfZwQueryObject_Entry;
  v289 = "ZwQueryObject";
  v291 = VfZwQueryObject_Entry;
  v293 = "ZwQuerySection";
  v295 = VfZwQueryObject_Entry;
  v297 = "ZwQuerySecurityObject";
  v299 = VfZwQueryObject_Entry;
  v301 = "ZwQuerySymbolicLinkObject";
  v303 = VfZwQuerySymbolicLinkObject_Entry;
  v305 = "ZwQuerySystemInformation";
  v307 = VfZwQueryObject_Entry;
  v309 = "ZwQueryValueKey";
  v311 = VfZwQueryValueKey_Entry;
  v313 = "ZwQueryVolumeInformationFile";
  v315 = VfZwFreeVirtualMemory_Entry;
  v317 = "ZwReadFile";
  v319 = VfZwWriteFile_Entry;
  v321 = "ZwReplaceKey";
  v270 = 49;
  v272 = 0LL;
  v274 = 48;
  v276 = 0LL;
  v278 = 46;
  v280 = 0LL;
  v282 = 45;
  v284 = 0LL;
  v286 = 41;
  v288 = 0LL;
  v290 = 39;
  v292 = 0LL;
  v294 = 38;
  v296 = 0LL;
  v298 = 37;
  v300 = 0LL;
  v302 = 36;
  v304 = 0LL;
  v306 = 35;
  v308 = 0LL;
  v310 = 34;
  v312 = 0LL;
  v314 = 33;
  v316 = 0LL;
  v318 = 32;
  v320 = 0LL;
  v322 = 29;
  v323 = VfZwReplaceKey_Entry;
  v325 = "ZwRequestWaitReplyPort";
  v327 = VfZwQueryDriverEntryOrder_Entry;
  v329 = "ZwResetEvent";
  v331 = VfZwAlpcCreateSecurityContext_Entry;
  v333 = "ZwSetBootEntryOrder";
  v335 = VfZwSetDriverEntryOrder_Entry;
  v337 = "ZwSetBootOptions";
  v339 = VfZwSetDriverEntryOrder_Entry;
  v341 = "ZwSetDriverEntryOrder";
  v343 = VfZwSetDriverEntryOrder_Entry;
  v345 = "ZwSetEaFile";
  v347 = VfZwFreeVirtualMemory_Entry;
  v349 = "ZwSetEvent";
  v351 = VfZwAlpcCreateSecurityContext_Entry;
  v353 = "ZwSetInformationFile";
  v355 = VfZwFreeVirtualMemory_Entry;
  v357 = "ZwSetInformationJobObject";
  v359 = VfZwSetDriverEntryOrder_Entry;
  v361 = "ZwSetInformationObject";
  v363 = VfZwSetDriverEntryOrder_Entry;
  v365 = "ZwSetInformationProcess";
  v367 = VfZwSetDriverEntryOrder_Entry;
  v369 = "ZwSetInformationThread";
  v371 = VfZwSetDriverEntryOrder_Entry;
  v373 = "ZwSetSecurityObject";
  v375 = VfZwAlpcCreateSecurityContext_Entry;
  v324 = 0LL;
  v326 = 28;
  v328 = 0LL;
  v330 = 27;
  v332 = 0LL;
  v334 = 24;
  v336 = 0LL;
  v338 = 23;
  v340 = 0LL;
  v342 = 22;
  v344 = 0LL;
  v346 = 21;
  v348 = 0LL;
  v350 = 20;
  v352 = 0LL;
  v354 = 18;
  v356 = 0LL;
  v358 = 17;
  v360 = 0LL;
  v362 = 15;
  v364 = 0LL;
  v366 = 14;
  v368 = 0LL;
  v370 = 13;
  v372 = 0LL;
  v374 = 11;
  v376 = 0LL;
  v377 = "ZwSetSystemInformation";
  v378 = 10;
  v379 = VfZwSetDriverEntryOrder_Entry;
  v381 = "ZwSetSystemTime";
  v383 = VfZwQueryDriverEntryOrder_Entry;
  v385 = "ZwSetTimer";
  v387 = VfZwSetTimer_Entry;
  v389 = "ZwSetValueKey";
  v391 = VfZwSetValueKey_Entry;
  v393 = "ZwSetVolumeInformationFile";
  v395 = VfZwFreeVirtualMemory_Entry;
  v397 = "ZwTranslateFilePath";
  v399 = VfZwTranslateFilePath_Entry;
  v401 = "ZwUnloadDriver";
  v403 = VfZwDeleteValueKey_Entry;
  v405 = "ZwUnloadKey";
  v407 = VfZwDeleteFile_Entry;
  v409 = "ZwWaitForMultipleObjects";
  v411 = VfZwQueryObject_Entry;
  v413 = "ZwWaitForSingleObject";
  v415 = VfZwAlpcCreateSecurityContext_Entry;
  v417 = "ZwWriteFile";
  v419 = VfZwWriteFile_Entry;
  v421 = "ZwAlpcCreatePort";
  v423 = VfZwAlpcCreatePort_Entry;
  v425 = "ZwAlpcConnectPort";
  v427 = VfZwAlpcConnectPort_Entry;
  v429 = "ZwAlpcAcceptConnectPort";
  v380 = 0LL;
  v382 = 9;
  v384 = 0LL;
  v386 = 8;
  v388 = 0LL;
  v390 = 7;
  v392 = 0LL;
  v394 = 6;
  v396 = 0LL;
  v398 = 5;
  v400 = 0LL;
  v402 = 4;
  v404 = 0LL;
  v406 = 3;
  v408 = 0LL;
  v410 = 2;
  v412 = 0LL;
  v414 = 1;
  v416 = 0LL;
  v418 = 0;
  v420 = 0LL;
  v422 = 141;
  v424 = 0LL;
  v426 = 142;
  v428 = 0LL;
  v430 = 143;
  v432 = 0LL;
  v431 = VfZwAlpcAcceptConnectPort_Entry;
  v433 = "ZwAlpcSendWaitReceivePort";
  v435 = VfZwAlpcSendWaitReceivePort_Entry;
  v437 = "ZwAlpcCreateSecurityContext";
  v439 = VfZwAlpcCreateSecurityContext_Entry;
  v441 = "ZwAlpcCreatePortSection";
  v443 = VfZwQueryDriverEntryOrder_Entry;
  v445 = "ZwAlpcCreateSectionView";
  v447 = VfZwAlpcCreateSecurityContext_Entry;
  v449 = "ZwAlpcCreateResourceReserve";
  v451 = VfZwAlpcCreateSecurityContext_Entry;
  v453 = "ZwAlpcSetInformation";
  v455 = VfZwSetDriverEntryOrder_Entry;
  v457 = "ZwAlpcQueryInformation";
  v459 = VfZwQueryObject_Entry;
  v461 = "ZwRemoveIoCompletionEx";
  v463 = VfZwRemoveIoCompletionEx_Entry;
  v465 = "ZwCreateTransactionManager";
  v467 = VfZwCreateTransactionManager_Entry;
  v469 = "ZwOpenTransactionManager";
  v471 = VfZwOpenTransactionManager_Entry;
  v473 = "ZwQueryInformationTransactionManager";
  v475 = VfZwQueryObject_Entry;
  v477 = "ZwCreateTransaction";
  v479 = VfZwCreateTransaction_Entry;
  v481 = "ZwOpenTransaction";
  v483 = VfZwOpenTransaction_Entry;
  v434 = 135;
  v436 = 0LL;
  v438 = 137;
  v440 = 0LL;
  v442 = 140;
  v444 = 0LL;
  v446 = 138;
  v448 = 0LL;
  v450 = 139;
  v452 = 0LL;
  v454 = 134;
  v456 = 0LL;
  v458 = 136;
  v460 = 0LL;
  v462 = 31;
  v464 = 0LL;
  v466 = 115;
  v468 = 0LL;
  v470 = 68;
  v472 = 0LL;
  v474 = 43;
  v476 = 0LL;
  v478 = 116;
  v480 = 0LL;
  v482 = 69;
  v484 = 0LL;
  v486 = 44;
  v485 = "ZwQueryInformationTransaction";
  v487 = VfZwQueryObject_Entry;
  v489 = "ZwSetInformationTransaction";
  v491 = VfZwSetDriverEntryOrder_Entry;
  v493 = "ZwPrePrepareEnlistment";
  v495 = VfZwAlpcCreateSecurityContext_Entry;
  v497 = "ZwPrepareEnlistment";
  v499 = VfZwAlpcCreateSecurityContext_Entry;
  v501 = "ZwCommitEnlistment";
  v503 = VfZwAlpcCreateSecurityContext_Entry;
  v505 = "ZwRollbackEnlistment";
  v507 = VfZwAlpcCreateSecurityContext_Entry;
  v509 = "ZwPrepareComplete";
  v511 = VfZwAlpcCreateSecurityContext_Entry;
  v513 = "ZwCreateEnlistment";
  v515 = VfZwCreateEnlistment_Entry;
  v517 = "ZwOpenEnlistment";
  v519 = VfZwOpenEnlistment_Entry;
  v521 = "ZwQueryInformationEnlistment";
  v523 = VfZwQueryObject_Entry;
  v525 = "ZwSetInformationEnlistment";
  v527 = VfZwSetDriverEntryOrder_Entry;
  v529 = "ZwQueryLicenseValue";
  v531 = VfZwQueryLicenseValue_Entry;
  v488 = 0LL;
  v490 = 12;
  v492 = 0LL;
  v494 = 66;
  v496 = 0LL;
  v498 = 64;
  v500 = 0LL;
  v502 = 129;
  v504 = 0LL;
  v506 = 25;
  v508 = 0LL;
  v510 = 65;
  v512 = 0LL;
  v514 = 126;
  v516 = 0LL;
  v518 = 87;
  v520 = 0LL;
  v522 = 51;
  v524 = 0LL;
  v526 = 19;
  v528 = 0LL;
  v530 = 40;
  v532 = 0LL;
  return DifRegisterPlugin(&v1, 133LL, 8LL, 0LL);
}
