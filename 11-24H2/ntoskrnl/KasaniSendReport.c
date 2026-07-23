/*
 * XREFs of KasaniSendReport @ 0x1405A7250
 * Callers:
 *     KasaniReportTelemetry @ 0x1405A7140 (KasaniReportTelemetry.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     KasaniBuildPc @ 0x1405A6EB0 (KasaniBuildPc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KasaniSendReport(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 *v4; // rsi
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  unsigned __int64 v9; // r10
  LPCGUID ActivityId; // r9
  char v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+41h] [rbp-BFh] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+64h] [rbp-9Ch] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+6Ch] [rbp-94h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+7Ch] [rbp-84h] BYREF
  int v28; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+84h] [rbp-7Ch] BYREF
  int v30; // [rsp+88h] [rbp-78h] BYREF
  int v31; // [rsp+8Ch] [rbp-74h] BYREF
  int v32; // [rsp+90h] [rbp-70h] BYREF
  int v33; // [rsp+94h] [rbp-6Ch] BYREF
  int v34; // [rsp+98h] [rbp-68h] BYREF
  int v35; // [rsp+9Ch] [rbp-64h] BYREF
  int v36; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+A4h] [rbp-5Ch] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+ACh] [rbp-54h] BYREF
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B4h] [rbp-4Ch] BYREF
  int v42; // [rsp+B8h] [rbp-48h] BYREF
  int v43; // [rsp+BCh] [rbp-44h] BYREF
  int v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C4h] [rbp-3Ch] BYREF
  int v46; // [rsp+C8h] [rbp-38h] BYREF
  int v47; // [rsp+CCh] [rbp-34h] BYREF
  int v48; // [rsp+D0h] [rbp-30h] BYREF
  int v49; // [rsp+D4h] [rbp-2Ch] BYREF
  int v50; // [rsp+D8h] [rbp-28h] BYREF
  int v51; // [rsp+DCh] [rbp-24h] BYREF
  int v52; // [rsp+E0h] [rbp-20h] BYREF
  int v53; // [rsp+E4h] [rbp-1Ch] BYREF
  int v54; // [rsp+E8h] [rbp-18h] BYREF
  int v55; // [rsp+ECh] [rbp-14h] BYREF
  int v56; // [rsp+F0h] [rbp-10h] BYREF
  int v57; // [rsp+F4h] [rbp-Ch] BYREF
  int v58; // [rsp+F8h] [rbp-8h] BYREF
  int v59; // [rsp+FCh] [rbp-4h] BYREF
  int v60; // [rsp+100h] [rbp+0h] BYREF
  int v61; // [rsp+104h] [rbp+4h] BYREF
  int v62; // [rsp+108h] [rbp+8h] BYREF
  int v63; // [rsp+10Ch] [rbp+Ch] BYREF
  int v64; // [rsp+110h] [rbp+10h] BYREF
  int v65; // [rsp+114h] [rbp+14h] BYREF
  _DWORD v66[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v67; // [rsp+120h] [rbp+20h] BYREF
  __int64 v68; // [rsp+128h] [rbp+28h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+130h] [rbp+30h] BYREF
  char v70[128]; // [rsp+140h] [rbp+40h] BYREF
  int v71; // [rsp+1C0h] [rbp+C0h]
  int v72; // [rsp+1C4h] [rbp+C4h]
  int v73; // [rsp+1C8h] [rbp+C8h]
  _WORD v74[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v75; // [rsp+250h] [rbp+150h]
  int v76; // [rsp+254h] [rbp+154h]
  int v77; // [rsp+258h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+260h] [rbp+160h] BYREF
  int *v79; // [rsp+270h] [rbp+170h]
  int v80; // [rsp+278h] [rbp+178h]
  int v81; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v82; // [rsp+280h] [rbp+180h]
  __int64 v83; // [rsp+288h] [rbp+188h]
  char *v84; // [rsp+290h] [rbp+190h]
  int v85; // [rsp+298h] [rbp+198h]
  int v86; // [rsp+29Ch] [rbp+19Ch]
  int *v87; // [rsp+2A0h] [rbp+1A0h]
  __int64 v88; // [rsp+2A8h] [rbp+1A8h]
  int *v89; // [rsp+2B0h] [rbp+1B0h]
  __int64 v90; // [rsp+2B8h] [rbp+1B8h]
  int *v91; // [rsp+2C0h] [rbp+1C0h]
  __int64 v92; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v93; // [rsp+2D0h] [rbp+1D0h]
  __int64 v94; // [rsp+2D8h] [rbp+1D8h]
  char *v95; // [rsp+2E0h] [rbp+1E0h]
  __int64 v96; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v97; // [rsp+2F0h] [rbp+1F0h]
  int v98; // [rsp+2F8h] [rbp+1F8h]
  int v99; // [rsp+2FCh] [rbp+1FCh]
  int *v100; // [rsp+300h] [rbp+200h]
  __int64 v101; // [rsp+308h] [rbp+208h]
  int *v102; // [rsp+310h] [rbp+210h]
  __int64 v103; // [rsp+318h] [rbp+218h]
  int *v104; // [rsp+320h] [rbp+220h]
  __int64 v105; // [rsp+328h] [rbp+228h]
  char *v106; // [rsp+330h] [rbp+230h]
  __int64 v107; // [rsp+338h] [rbp+238h]
  _BYTE v108[16]; // [rsp+340h] [rbp+240h] BYREF
  int *v109; // [rsp+350h] [rbp+250h]
  __int64 v110; // [rsp+358h] [rbp+258h]
  int *v111; // [rsp+360h] [rbp+260h]
  __int64 v112; // [rsp+368h] [rbp+268h]
  int *v113; // [rsp+370h] [rbp+270h]
  __int64 v114; // [rsp+378h] [rbp+278h]
  _BYTE v115[16]; // [rsp+380h] [rbp+280h] BYREF
  int *v116; // [rsp+390h] [rbp+290h]
  __int64 v117; // [rsp+398h] [rbp+298h]
  int *v118; // [rsp+3A0h] [rbp+2A0h]
  __int64 v119; // [rsp+3A8h] [rbp+2A8h]
  int *v120; // [rsp+3B0h] [rbp+2B0h]
  __int64 v121; // [rsp+3B8h] [rbp+2B8h]
  _BYTE v122[16]; // [rsp+3C0h] [rbp+2C0h] BYREF
  int *v123; // [rsp+3D0h] [rbp+2D0h]
  __int64 v124; // [rsp+3D8h] [rbp+2D8h]
  int *v125; // [rsp+3E0h] [rbp+2E0h]
  __int64 v126; // [rsp+3E8h] [rbp+2E8h]
  int *v127; // [rsp+3F0h] [rbp+2F0h]
  __int64 v128; // [rsp+3F8h] [rbp+2F8h]
  _BYTE v129[16]; // [rsp+400h] [rbp+300h] BYREF
  int *v130; // [rsp+410h] [rbp+310h]
  __int64 v131; // [rsp+418h] [rbp+318h]
  int *v132; // [rsp+420h] [rbp+320h]
  __int64 v133; // [rsp+428h] [rbp+328h]
  int *v134; // [rsp+430h] [rbp+330h]
  __int64 v135; // [rsp+438h] [rbp+338h]
  _BYTE v136[16]; // [rsp+440h] [rbp+340h] BYREF
  int *v137; // [rsp+450h] [rbp+350h]
  __int64 v138; // [rsp+458h] [rbp+358h]
  int *v139; // [rsp+460h] [rbp+360h]
  __int64 v140; // [rsp+468h] [rbp+368h]
  int *v141; // [rsp+470h] [rbp+370h]
  __int64 v142; // [rsp+478h] [rbp+378h]
  _BYTE v143[16]; // [rsp+480h] [rbp+380h] BYREF
  int *v144; // [rsp+490h] [rbp+390h]
  __int64 v145; // [rsp+498h] [rbp+398h]
  int *v146; // [rsp+4A0h] [rbp+3A0h]
  __int64 v147; // [rsp+4A8h] [rbp+3A8h]
  int *v148; // [rsp+4B0h] [rbp+3B0h]
  __int64 v149; // [rsp+4B8h] [rbp+3B8h]
  _BYTE v150[16]; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v151; // [rsp+4D0h] [rbp+3D0h]
  __int64 v152; // [rsp+4D8h] [rbp+3D8h]
  int *v153; // [rsp+4E0h] [rbp+3E0h]
  __int64 v154; // [rsp+4E8h] [rbp+3E8h]
  int *v155; // [rsp+4F0h] [rbp+3F0h]
  __int64 v156; // [rsp+4F8h] [rbp+3F8h]
  _BYTE v157[16]; // [rsp+500h] [rbp+400h] BYREF
  int *v158; // [rsp+510h] [rbp+410h]
  __int64 v159; // [rsp+518h] [rbp+418h]
  int *v160; // [rsp+520h] [rbp+420h]
  __int64 v161; // [rsp+528h] [rbp+428h]
  int *v162; // [rsp+530h] [rbp+430h]
  __int64 v163; // [rsp+538h] [rbp+438h]
  _BYTE v164[16]; // [rsp+540h] [rbp+440h] BYREF
  int *v165; // [rsp+550h] [rbp+450h]
  __int64 v166; // [rsp+558h] [rbp+458h]
  int *v167; // [rsp+560h] [rbp+460h]
  __int64 v168; // [rsp+568h] [rbp+468h]
  int *v169; // [rsp+570h] [rbp+470h]
  __int64 v170; // [rsp+578h] [rbp+478h]
  _BYTE v171[16]; // [rsp+580h] [rbp+480h] BYREF
  int *v172; // [rsp+590h] [rbp+490h]
  __int64 v173; // [rsp+598h] [rbp+498h]
  int *v174; // [rsp+5A0h] [rbp+4A0h]
  __int64 v175; // [rsp+5A8h] [rbp+4A8h]
  int *v176; // [rsp+5B0h] [rbp+4B0h]
  __int64 v177; // [rsp+5B8h] [rbp+4B8h]
  _BYTE v178[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  int *v179; // [rsp+5D0h] [rbp+4D0h]
  __int64 v180; // [rsp+5D8h] [rbp+4D8h]
  int *v181; // [rsp+5E0h] [rbp+4E0h]
  __int64 v182; // [rsp+5E8h] [rbp+4E8h]
  int *v183; // [rsp+5F0h] [rbp+4F0h]
  __int64 v184; // [rsp+5F8h] [rbp+4F8h]
  _BYTE v185[16]; // [rsp+600h] [rbp+500h] BYREF
  int *v186; // [rsp+610h] [rbp+510h]
  __int64 v187; // [rsp+618h] [rbp+518h]
  int *v188; // [rsp+620h] [rbp+520h]
  __int64 v189; // [rsp+628h] [rbp+528h]
  int *v190; // [rsp+630h] [rbp+530h]
  __int64 v191; // [rsp+638h] [rbp+538h]
  _BYTE v192[16]; // [rsp+640h] [rbp+540h] BYREF
  int *v193; // [rsp+650h] [rbp+550h]
  __int64 v194; // [rsp+658h] [rbp+558h]
  int *v195; // [rsp+660h] [rbp+560h]
  __int64 v196; // [rsp+668h] [rbp+568h]
  int *v197; // [rsp+670h] [rbp+570h]
  __int64 v198; // [rsp+678h] [rbp+578h]
  _BYTE v199[16]; // [rsp+680h] [rbp+580h] BYREF
  int *v200; // [rsp+690h] [rbp+590h]
  __int64 v201; // [rsp+698h] [rbp+598h]
  int *v202; // [rsp+6A0h] [rbp+5A0h]
  __int64 v203; // [rsp+6A8h] [rbp+5A8h]
  int *v204; // [rsp+6B0h] [rbp+5B0h]
  __int64 v205; // [rsp+6B8h] [rbp+5B8h]
  _BYTE v206[16]; // [rsp+6C0h] [rbp+5C0h] BYREF
  int *v207; // [rsp+6D0h] [rbp+5D0h]
  __int64 v208; // [rsp+6D8h] [rbp+5D8h]
  int *v209; // [rsp+6E0h] [rbp+5E0h]
  __int64 v210; // [rsp+6E8h] [rbp+5E8h]
  int *v211; // [rsp+6F0h] [rbp+5F0h]
  __int64 v212; // [rsp+6F8h] [rbp+5F8h]
  _BYTE v213[16]; // [rsp+700h] [rbp+600h] BYREF
  int *v214; // [rsp+710h] [rbp+610h]
  __int64 v215; // [rsp+718h] [rbp+618h]
  int *v216; // [rsp+720h] [rbp+620h]
  __int64 v217; // [rsp+728h] [rbp+628h]
  _DWORD *v218; // [rsp+730h] [rbp+630h]
  __int64 v219; // [rsp+738h] [rbp+638h]
  wchar_t v220[64]; // [rsp+740h] [rbp+640h] BYREF
  int v221; // [rsp+7C0h] [rbp+6C0h]
  int v222; // [rsp+7C4h] [rbp+6C4h]
  int v223; // [rsp+7C8h] [rbp+6C8h]
  wchar_t v224[64]; // [rsp+7CCh] [rbp+6CCh] BYREF
  int v225; // [rsp+84Ch] [rbp+74Ch]
  int v226; // [rsp+850h] [rbp+750h]
  int v227; // [rsp+854h] [rbp+754h]
  wchar_t v228[64]; // [rsp+858h] [rbp+758h] BYREF
  int v229; // [rsp+8D8h] [rbp+7D8h]
  int v230; // [rsp+8DCh] [rbp+7DCh]
  int v231; // [rsp+8E0h] [rbp+7E0h]
  wchar_t v232[64]; // [rsp+8E4h] [rbp+7E4h] BYREF
  int v233; // [rsp+964h] [rbp+864h]
  int v234; // [rsp+968h] [rbp+868h]
  int v235; // [rsp+96Ch] [rbp+86Ch]
  wchar_t v236[64]; // [rsp+970h] [rbp+870h] BYREF
  int v237; // [rsp+9F0h] [rbp+8F0h]
  int v238; // [rsp+9F4h] [rbp+8F4h]
  int v239; // [rsp+9F8h] [rbp+8F8h]
  wchar_t v240[64]; // [rsp+9FCh] [rbp+8FCh] BYREF
  int v241; // [rsp+A7Ch] [rbp+97Ch]
  int v242; // [rsp+A80h] [rbp+980h]
  int v243; // [rsp+A84h] [rbp+984h]
  wchar_t v244[64]; // [rsp+A88h] [rbp+988h] BYREF
  int v245; // [rsp+B08h] [rbp+A08h]
  int v246; // [rsp+B0Ch] [rbp+A0Ch]
  int v247; // [rsp+B10h] [rbp+A10h]
  wchar_t v248[64]; // [rsp+B14h] [rbp+A14h] BYREF
  int v249; // [rsp+B94h] [rbp+A94h]
  int v250; // [rsp+B98h] [rbp+A98h]
  int v251; // [rsp+B9Ch] [rbp+A9Ch]
  wchar_t v252[64]; // [rsp+BA0h] [rbp+AA0h] BYREF
  int v253; // [rsp+C20h] [rbp+B20h]
  int v254; // [rsp+C24h] [rbp+B24h]
  int v255; // [rsp+C28h] [rbp+B28h]
  wchar_t v256[64]; // [rsp+C2Ch] [rbp+B2Ch] BYREF
  int v257; // [rsp+CACh] [rbp+BACh]
  int v258; // [rsp+CB0h] [rbp+BB0h]
  int v259; // [rsp+CB4h] [rbp+BB4h]
  wchar_t v260[64]; // [rsp+CB8h] [rbp+BB8h] BYREF
  int v261; // [rsp+D38h] [rbp+C38h]
  int v262; // [rsp+D3Ch] [rbp+C3Ch]
  int v263; // [rsp+D40h] [rbp+C40h]
  wchar_t v264[64]; // [rsp+D44h] [rbp+C44h] BYREF
  int v265; // [rsp+DC4h] [rbp+CC4h]
  int v266; // [rsp+DC8h] [rbp+CC8h]
  int v267; // [rsp+DCCh] [rbp+CCCh]
  wchar_t v268[64]; // [rsp+DD0h] [rbp+CD0h] BYREF
  int v269; // [rsp+E50h] [rbp+D50h]
  int v270; // [rsp+E54h] [rbp+D54h]
  int v271; // [rsp+E58h] [rbp+D58h]
  wchar_t v272[64]; // [rsp+E5Ch] [rbp+D5Ch] BYREF
  int v273; // [rsp+EDCh] [rbp+DDCh]
  int v274; // [rsp+EE0h] [rbp+DE0h]
  int v275; // [rsp+EE4h] [rbp+DE4h]
  wchar_t v276[64]; // [rsp+EE8h] [rbp+DE8h] BYREF
  int v277; // [rsp+F68h] [rbp+E68h]
  int v278; // [rsp+F6Ch] [rbp+E6Ch]
  int v279; // [rsp+F70h] [rbp+E70h]
  wchar_t v280[64]; // [rsp+F74h] [rbp+E74h] BYREF
  int v281; // [rsp+FF4h] [rbp+EF4h]
  int v282; // [rsp+FF8h] [rbp+EF8h]
  int v283; // [rsp+FFCh] [rbp+EFCh]

  memset_0(v70, 0, 0x8CuLL);
  memset_0(v74, 0, 0x8CuLL);
  KasaniBuildPc(*(_QWORD *)a1, v70);
  v2 = (char *)v220;
  v3 = 16LL;
  v4 = (__int64 *)(a1 + 40);
  do
  {
    result = KasaniBuildPc(*v4, v2);
    v2 += 140;
    ++v4;
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)dword_140E07000 > 5 )
  {
    result = (qword_140E07010 & 0x400000000000LL) != 0 && (qword_140E07018 & 0x400000000000LL) == qword_140E07018;
    if ( result )
    {
      v67 = 0x2000000LL;
      v6 = -1LL;
      v82 = &v67;
      v7 = -1LL;
      v83 = 8LL;
      do
        v8 = *(_WORD *)&v70[2 * v7++ + 2] == 0;
      while ( !v8 );
      v86 = 0;
      v85 = 2 * v7 + 2;
      v13 = v71;
      v87 = &v13;
      v14 = v72;
      v89 = &v14;
      v15 = v73;
      v91 = &v15;
      v68 = *(_QWORD *)(a1 + 8);
      v93 = &v68;
      v11 = *(_BYTE *)(a1 + 16);
      v95 = &v11;
      v84 = v70;
      v88 = 4LL;
      v90 = 4LL;
      v92 = 4LL;
      v94 = 8LL;
      v96 = 1LL;
      do
        v8 = v74[++v6] == 0;
      while ( !v8 );
      v99 = 0;
      v98 = 2 * v6 + 2;
      v16 = v75;
      v100 = &v16;
      v17 = v76;
      v102 = &v17;
      v18 = v77;
      v104 = &v18;
      v12 = *(_BYTE *)(a1 + 32);
      v97 = v74;
      v106 = &v12;
      v101 = 4LL;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v108, v220);
      v109 = &v19;
      v20 = v222;
      v111 = &v20;
      v21 = v223;
      v19 = v221;
      v113 = &v21;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v115, v224);
      v116 = &v22;
      v23 = v226;
      v118 = &v23;
      v24 = v227;
      v22 = v225;
      v120 = &v24;
      v117 = 4LL;
      v119 = 4LL;
      v121 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v122, v228);
      v123 = &v25;
      v26 = v230;
      v125 = &v26;
      v27 = v231;
      v25 = v229;
      v127 = &v27;
      v124 = 4LL;
      v126 = 4LL;
      v128 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v129, v232);
      v130 = &v28;
      v29 = v234;
      v132 = &v29;
      v30 = v235;
      v28 = v233;
      v134 = &v30;
      v131 = 4LL;
      v133 = 4LL;
      v135 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v136, v236);
      v137 = &v31;
      v32 = v238;
      v139 = &v32;
      v33 = v239;
      v31 = v237;
      v141 = &v33;
      v138 = 4LL;
      v140 = 4LL;
      v142 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v143, v240);
      v144 = &v34;
      v35 = v242;
      v146 = &v35;
      v36 = v243;
      v34 = v241;
      v148 = &v36;
      v145 = 4LL;
      v147 = 4LL;
      v149 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v150, v244);
      v151 = &v37;
      v38 = v246;
      v153 = &v38;
      v39 = v247;
      v37 = v245;
      v155 = &v39;
      v152 = 4LL;
      v154 = 4LL;
      v156 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v157, v248);
      v158 = &v40;
      v41 = v250;
      v40 = v249;
      v159 = 4LL;
      v160 = &v41;
      v42 = v251;
      v162 = &v42;
      v161 = 4LL;
      v163 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v164, v252);
      v165 = &v43;
      v44 = v254;
      v167 = &v44;
      v45 = v255;
      v43 = v253;
      v169 = &v45;
      v166 = 4LL;
      v168 = 4LL;
      v170 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v171, v256);
      v172 = &v46;
      v47 = v258;
      v174 = &v47;
      v48 = v259;
      v46 = v257;
      v176 = &v48;
      v173 = 4LL;
      v175 = 4LL;
      v177 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v178, v260);
      v179 = &v49;
      v50 = v262;
      v181 = &v50;
      v51 = v263;
      v49 = v261;
      v183 = &v51;
      v180 = 4LL;
      v182 = 4LL;
      v184 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v185, v264);
      v186 = &v52;
      v53 = v266;
      v188 = &v53;
      v54 = v267;
      v52 = v265;
      v190 = &v54;
      v187 = 4LL;
      v189 = 4LL;
      v191 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v192, v268);
      v193 = &v55;
      v56 = v270;
      v195 = &v56;
      v57 = v271;
      v55 = v269;
      v197 = &v57;
      v194 = 4LL;
      v196 = 4LL;
      v198 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v199, v272);
      v200 = &v58;
      v59 = v274;
      v202 = &v59;
      v60 = v275;
      v58 = v273;
      v204 = &v60;
      v201 = 4LL;
      v203 = 4LL;
      v205 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v206, v276);
      v207 = &v61;
      v62 = v278;
      v209 = &v62;
      v63 = v279;
      v61 = v277;
      v211 = &v63;
      v208 = 4LL;
      v210 = 4LL;
      v212 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v213, v280);
      v214 = &v64;
      v65 = v282;
      v216 = &v65;
      v66[0] = v283;
      v218 = v66;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E07008;
      v64 = v281;
      v215 = 4LL;
      v217 = 4LL;
      v219 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = v9;
      UserData.Size = *(unsigned __int16 *)off_140E07008;
      v79 = &dword_14004719C;
      UserData.Reserved = 2;
      v80 = 844;
      v81 = 1;
      v66[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      return EtwWriteEx(
               qword_140E07020,
               &EventDescriptor,
               0LL,
               (ULONG)ActivityId,
               ActivityId,
               ActivityId,
               0x4Eu,
               &UserData);
    }
  }
  return result;
}
