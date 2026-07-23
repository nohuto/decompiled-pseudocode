/*
 * XREFs of KcsaniSendReport @ 0x1405AB8F0
 * Callers:
 *     KcsanReportTelemetry @ 0x1405AB2D0 (KcsanReportTelemetry.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     KasaniBuildPc @ 0x1405A6EB0 (KasaniBuildPc.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KcsaniSendReport(__int64 a1)
{
  char result; // al
  __int64 *v3; // rsi
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r9
  const GUID *ActivityId; // r10
  unsigned __int64 v10; // r11
  char v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12; // [rsp+41h] [rbp-BFh] BYREF
  char v13; // [rsp+42h] [rbp-BEh] BYREF
  char v14; // [rsp+43h] [rbp-BDh] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  int v21; // [rsp+5Ch] [rbp-A4h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+74h] [rbp-8Ch] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+7Ch] [rbp-84h] BYREF
  int v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+84h] [rbp-7Ch] BYREF
  int v32; // [rsp+88h] [rbp-78h] BYREF
  int v33; // [rsp+8Ch] [rbp-74h] BYREF
  int v34; // [rsp+90h] [rbp-70h] BYREF
  int v35; // [rsp+94h] [rbp-6Ch] BYREF
  int v36; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+9Ch] [rbp-64h] BYREF
  int v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A4h] [rbp-5Ch] BYREF
  int v40; // [rsp+A8h] [rbp-58h] BYREF
  int v41; // [rsp+ACh] [rbp-54h] BYREF
  int v42; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+B4h] [rbp-4Ch] BYREF
  int v44; // [rsp+B8h] [rbp-48h] BYREF
  int v45; // [rsp+BCh] [rbp-44h] BYREF
  int v46; // [rsp+C0h] [rbp-40h] BYREF
  int v47; // [rsp+C4h] [rbp-3Ch] BYREF
  int v48; // [rsp+C8h] [rbp-38h] BYREF
  int v49; // [rsp+CCh] [rbp-34h] BYREF
  int v50; // [rsp+D0h] [rbp-30h] BYREF
  int v51; // [rsp+D4h] [rbp-2Ch] BYREF
  int v52; // [rsp+D8h] [rbp-28h] BYREF
  int v53; // [rsp+DCh] [rbp-24h] BYREF
  int v54; // [rsp+E0h] [rbp-20h] BYREF
  int v55; // [rsp+E4h] [rbp-1Ch] BYREF
  int v56; // [rsp+E8h] [rbp-18h] BYREF
  int v57; // [rsp+ECh] [rbp-14h] BYREF
  int v58; // [rsp+F0h] [rbp-10h] BYREF
  int v59; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h] BYREF
  int v61; // [rsp+100h] [rbp+0h] BYREF
  int v62; // [rsp+104h] [rbp+4h] BYREF
  int v63; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v64[3]; // [rsp+10Ch] [rbp+Ch] BYREF
  __int64 v65; // [rsp+118h] [rbp+18h] BYREF
  __int64 v66; // [rsp+120h] [rbp+20h] BYREF
  __int64 v67; // [rsp+128h] [rbp+28h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+130h] [rbp+30h] BYREF
  char v69[128]; // [rsp+140h] [rbp+40h] BYREF
  int v70; // [rsp+1C0h] [rbp+C0h]
  int v71; // [rsp+1C4h] [rbp+C4h]
  int v72; // [rsp+1C8h] [rbp+C8h]
  char v73[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v74; // [rsp+250h] [rbp+150h]
  int v75; // [rsp+254h] [rbp+154h]
  int v76; // [rsp+258h] [rbp+158h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+260h] [rbp+160h] BYREF
  char *v78; // [rsp+270h] [rbp+170h]
  int v79; // [rsp+278h] [rbp+178h]
  int v80; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v81; // [rsp+280h] [rbp+180h]
  __int64 v82; // [rsp+288h] [rbp+188h]
  char *v83; // [rsp+290h] [rbp+190h]
  int v84; // [rsp+298h] [rbp+198h]
  int v85; // [rsp+29Ch] [rbp+19Ch]
  int *v86; // [rsp+2A0h] [rbp+1A0h]
  __int64 v87; // [rsp+2A8h] [rbp+1A8h]
  int *v88; // [rsp+2B0h] [rbp+1B0h]
  __int64 v89; // [rsp+2B8h] [rbp+1B8h]
  int *v90; // [rsp+2C0h] [rbp+1C0h]
  __int64 v91; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v92[16]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v93; // [rsp+2E0h] [rbp+1E0h]
  __int64 v94; // [rsp+2E8h] [rbp+1E8h]
  int *v95; // [rsp+2F0h] [rbp+1F0h]
  __int64 v96; // [rsp+2F8h] [rbp+1F8h]
  int *v97; // [rsp+300h] [rbp+200h]
  __int64 v98; // [rsp+308h] [rbp+208h]
  _BYTE v99[16]; // [rsp+310h] [rbp+210h] BYREF
  int *v100; // [rsp+320h] [rbp+220h]
  __int64 v101; // [rsp+328h] [rbp+228h]
  int *v102; // [rsp+330h] [rbp+230h]
  __int64 v103; // [rsp+338h] [rbp+238h]
  int *v104; // [rsp+340h] [rbp+240h]
  __int64 v105; // [rsp+348h] [rbp+248h]
  _BYTE v106[16]; // [rsp+350h] [rbp+250h] BYREF
  int *v107; // [rsp+360h] [rbp+260h]
  __int64 v108; // [rsp+368h] [rbp+268h]
  int *v109; // [rsp+370h] [rbp+270h]
  __int64 v110; // [rsp+378h] [rbp+278h]
  int *v111; // [rsp+380h] [rbp+280h]
  __int64 v112; // [rsp+388h] [rbp+288h]
  _BYTE v113[16]; // [rsp+390h] [rbp+290h] BYREF
  int *v114; // [rsp+3A0h] [rbp+2A0h]
  __int64 v115; // [rsp+3A8h] [rbp+2A8h]
  int *v116; // [rsp+3B0h] [rbp+2B0h]
  __int64 v117; // [rsp+3B8h] [rbp+2B8h]
  int *v118; // [rsp+3C0h] [rbp+2C0h]
  __int64 v119; // [rsp+3C8h] [rbp+2C8h]
  _BYTE v120[16]; // [rsp+3D0h] [rbp+2D0h] BYREF
  int *v121; // [rsp+3E0h] [rbp+2E0h]
  __int64 v122; // [rsp+3E8h] [rbp+2E8h]
  int *v123; // [rsp+3F0h] [rbp+2F0h]
  __int64 v124; // [rsp+3F8h] [rbp+2F8h]
  int *v125; // [rsp+400h] [rbp+300h]
  __int64 v126; // [rsp+408h] [rbp+308h]
  _BYTE v127[16]; // [rsp+410h] [rbp+310h] BYREF
  int *v128; // [rsp+420h] [rbp+320h]
  __int64 v129; // [rsp+428h] [rbp+328h]
  int *v130; // [rsp+430h] [rbp+330h]
  __int64 v131; // [rsp+438h] [rbp+338h]
  int *v132; // [rsp+440h] [rbp+340h]
  __int64 v133; // [rsp+448h] [rbp+348h]
  _BYTE v134[16]; // [rsp+450h] [rbp+350h] BYREF
  int *v135; // [rsp+460h] [rbp+360h]
  __int64 v136; // [rsp+468h] [rbp+368h]
  int *v137; // [rsp+470h] [rbp+370h]
  __int64 v138; // [rsp+478h] [rbp+378h]
  int *v139; // [rsp+480h] [rbp+380h]
  __int64 v140; // [rsp+488h] [rbp+388h]
  _BYTE v141[16]; // [rsp+490h] [rbp+390h] BYREF
  int *v142; // [rsp+4A0h] [rbp+3A0h]
  __int64 v143; // [rsp+4A8h] [rbp+3A8h]
  int *v144; // [rsp+4B0h] [rbp+3B0h]
  __int64 v145; // [rsp+4B8h] [rbp+3B8h]
  int *v146; // [rsp+4C0h] [rbp+3C0h]
  __int64 v147; // [rsp+4C8h] [rbp+3C8h]
  _BYTE v148[16]; // [rsp+4D0h] [rbp+3D0h] BYREF
  int *v149; // [rsp+4E0h] [rbp+3E0h]
  __int64 v150; // [rsp+4E8h] [rbp+3E8h]
  int *v151; // [rsp+4F0h] [rbp+3F0h]
  __int64 v152; // [rsp+4F8h] [rbp+3F8h]
  int *v153; // [rsp+500h] [rbp+400h]
  __int64 v154; // [rsp+508h] [rbp+408h]
  _BYTE v155[16]; // [rsp+510h] [rbp+410h] BYREF
  int *v156; // [rsp+520h] [rbp+420h]
  __int64 v157; // [rsp+528h] [rbp+428h]
  int *v158; // [rsp+530h] [rbp+430h]
  __int64 v159; // [rsp+538h] [rbp+438h]
  int *v160; // [rsp+540h] [rbp+440h]
  __int64 v161; // [rsp+548h] [rbp+448h]
  _BYTE v162[16]; // [rsp+550h] [rbp+450h] BYREF
  int *v163; // [rsp+560h] [rbp+460h]
  __int64 v164; // [rsp+568h] [rbp+468h]
  int *v165; // [rsp+570h] [rbp+470h]
  __int64 v166; // [rsp+578h] [rbp+478h]
  int *v167; // [rsp+580h] [rbp+480h]
  __int64 v168; // [rsp+588h] [rbp+488h]
  _BYTE v169[16]; // [rsp+590h] [rbp+490h] BYREF
  int *v170; // [rsp+5A0h] [rbp+4A0h]
  __int64 v171; // [rsp+5A8h] [rbp+4A8h]
  int *v172; // [rsp+5B0h] [rbp+4B0h]
  __int64 v173; // [rsp+5B8h] [rbp+4B8h]
  int *v174; // [rsp+5C0h] [rbp+4C0h]
  __int64 v175; // [rsp+5C8h] [rbp+4C8h]
  _BYTE v176[16]; // [rsp+5D0h] [rbp+4D0h] BYREF
  int *v177; // [rsp+5E0h] [rbp+4E0h]
  __int64 v178; // [rsp+5E8h] [rbp+4E8h]
  int *v179; // [rsp+5F0h] [rbp+4F0h]
  __int64 v180; // [rsp+5F8h] [rbp+4F8h]
  int *v181; // [rsp+600h] [rbp+500h]
  __int64 v182; // [rsp+608h] [rbp+508h]
  _BYTE v183[16]; // [rsp+610h] [rbp+510h] BYREF
  int *v184; // [rsp+620h] [rbp+520h]
  __int64 v185; // [rsp+628h] [rbp+528h]
  int *v186; // [rsp+630h] [rbp+530h]
  __int64 v187; // [rsp+638h] [rbp+538h]
  int *v188; // [rsp+640h] [rbp+540h]
  __int64 v189; // [rsp+648h] [rbp+548h]
  _BYTE v190[16]; // [rsp+650h] [rbp+550h] BYREF
  __int64 *v191; // [rsp+660h] [rbp+560h]
  __int64 v192; // [rsp+668h] [rbp+568h]
  char *v193; // [rsp+670h] [rbp+570h]
  __int64 v194; // [rsp+678h] [rbp+578h]
  int *v195; // [rsp+680h] [rbp+580h]
  __int64 v196; // [rsp+688h] [rbp+588h]
  __int64 *v197; // [rsp+690h] [rbp+590h]
  __int64 v198; // [rsp+698h] [rbp+598h]
  char *v199; // [rsp+6A0h] [rbp+5A0h]
  __int64 v200; // [rsp+6A8h] [rbp+5A8h]
  char *v201; // [rsp+6B0h] [rbp+5B0h]
  __int64 v202; // [rsp+6B8h] [rbp+5B8h]
  char *v203; // [rsp+6C0h] [rbp+5C0h]
  int v204; // [rsp+6C8h] [rbp+5C8h]
  int v205; // [rsp+6CCh] [rbp+5CCh]
  int *v206; // [rsp+6D0h] [rbp+5D0h]
  __int64 v207; // [rsp+6D8h] [rbp+5D8h]
  int *v208; // [rsp+6E0h] [rbp+5E0h]
  __int64 v209; // [rsp+6E8h] [rbp+5E8h]
  _DWORD *v210; // [rsp+6F0h] [rbp+5F0h]
  __int64 v211; // [rsp+6F8h] [rbp+5F8h]
  __int64 *v212; // [rsp+700h] [rbp+600h]
  __int64 v213; // [rsp+708h] [rbp+608h]
  char *v214; // [rsp+710h] [rbp+610h]
  __int64 v215; // [rsp+718h] [rbp+618h]
  char *v216; // [rsp+720h] [rbp+620h]
  __int64 v217; // [rsp+728h] [rbp+628h]
  wchar_t v218[64]; // [rsp+730h] [rbp+630h] BYREF
  int v219; // [rsp+7B0h] [rbp+6B0h]
  int v220; // [rsp+7B4h] [rbp+6B4h]
  int v221; // [rsp+7B8h] [rbp+6B8h]
  wchar_t v222[64]; // [rsp+7BCh] [rbp+6BCh] BYREF
  int v223; // [rsp+83Ch] [rbp+73Ch]
  int v224; // [rsp+840h] [rbp+740h]
  int v225; // [rsp+844h] [rbp+744h]
  wchar_t v226[64]; // [rsp+848h] [rbp+748h] BYREF
  int v227; // [rsp+8C8h] [rbp+7C8h]
  int v228; // [rsp+8CCh] [rbp+7CCh]
  int v229; // [rsp+8D0h] [rbp+7D0h]
  wchar_t v230[64]; // [rsp+8D4h] [rbp+7D4h] BYREF
  int v231; // [rsp+954h] [rbp+854h]
  int v232; // [rsp+958h] [rbp+858h]
  int v233; // [rsp+95Ch] [rbp+85Ch]
  wchar_t v234[64]; // [rsp+960h] [rbp+860h] BYREF
  int v235; // [rsp+9E0h] [rbp+8E0h]
  int v236; // [rsp+9E4h] [rbp+8E4h]
  int v237; // [rsp+9E8h] [rbp+8E8h]
  wchar_t v238[64]; // [rsp+9ECh] [rbp+8ECh] BYREF
  int v239; // [rsp+A6Ch] [rbp+96Ch]
  int v240; // [rsp+A70h] [rbp+970h]
  int v241; // [rsp+A74h] [rbp+974h]
  wchar_t v242[64]; // [rsp+A78h] [rbp+978h] BYREF
  int v243; // [rsp+AF8h] [rbp+9F8h]
  int v244; // [rsp+AFCh] [rbp+9FCh]
  int v245; // [rsp+B00h] [rbp+A00h]
  wchar_t v246[64]; // [rsp+B04h] [rbp+A04h] BYREF
  int v247; // [rsp+B84h] [rbp+A84h]
  int v248; // [rsp+B88h] [rbp+A88h]
  int v249; // [rsp+B8Ch] [rbp+A8Ch]
  wchar_t v250[64]; // [rsp+B90h] [rbp+A90h] BYREF
  int v251; // [rsp+C10h] [rbp+B10h]
  int v252; // [rsp+C14h] [rbp+B14h]
  int v253; // [rsp+C18h] [rbp+B18h]
  wchar_t v254[64]; // [rsp+C1Ch] [rbp+B1Ch] BYREF
  int v255; // [rsp+C9Ch] [rbp+B9Ch]
  int v256; // [rsp+CA0h] [rbp+BA0h]
  int v257; // [rsp+CA4h] [rbp+BA4h]
  wchar_t v258[64]; // [rsp+CA8h] [rbp+BA8h] BYREF
  int v259; // [rsp+D28h] [rbp+C28h]
  int v260; // [rsp+D2Ch] [rbp+C2Ch]
  int v261; // [rsp+D30h] [rbp+C30h]
  wchar_t v262[64]; // [rsp+D34h] [rbp+C34h] BYREF
  int v263; // [rsp+DB4h] [rbp+CB4h]
  int v264; // [rsp+DB8h] [rbp+CB8h]
  int v265; // [rsp+DBCh] [rbp+CBCh]
  wchar_t v266[64]; // [rsp+DC0h] [rbp+CC0h] BYREF
  int v267; // [rsp+E40h] [rbp+D40h]
  int v268; // [rsp+E44h] [rbp+D44h]
  int v269; // [rsp+E48h] [rbp+D48h]
  wchar_t v270[64]; // [rsp+E4Ch] [rbp+D4Ch] BYREF
  int v271; // [rsp+ECCh] [rbp+DCCh]
  int v272; // [rsp+ED0h] [rbp+DD0h]
  int v273; // [rsp+ED4h] [rbp+DD4h]
  wchar_t v274[64]; // [rsp+ED8h] [rbp+DD8h] BYREF
  __int64 v275; // [rsp+F58h] [rbp+E58h]
  int v276; // [rsp+F60h] [rbp+E60h]

  memset_0(v69, 0, 0x8CuLL);
  memset_0(v73, 0, 0x8CuLL);
  result = KasaniBuildPc(*(_QWORD *)(a1 + 24), v69);
  if ( result )
  {
    v3 = (__int64 *)(a1 + 64);
    v4 = (char *)v218;
    v5 = 15LL;
    do
    {
      KasaniBuildPc(*v3, v4);
      v4 += 140;
      ++v3;
      --v5;
    }
    while ( v5 );
    result = KasaniBuildPc(*(_QWORD *)(a1 + 56), v73);
    if ( result )
    {
      if ( (unsigned int)dword_140E07038 > 5 )
      {
        result = (qword_140E07048 & 0x400000000000LL) != 0 && (qword_140E07050 & 0x400000000000LL) == qword_140E07050;
        if ( result )
        {
          v65 = 0x2000000LL;
          v81 = &v65;
          v6 = -1LL;
          v82 = 8LL;
          do
            v7 = *(_WORD *)&v69[2 * v6++ + 2] == 0;
          while ( !v7 );
          v85 = 0;
          v84 = 2 * v6 + 2;
          v15 = v70;
          v86 = &v15;
          v16 = v71;
          v88 = &v16;
          v17 = v72;
          v83 = v69;
          v90 = &v17;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v92, v218);
          v93 = &v18;
          v19 = v220;
          v95 = &v19;
          v20 = v221;
          v18 = v219;
          v97 = &v20;
          v94 = 4LL;
          v96 = 4LL;
          v98 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v99, v222);
          v100 = &v21;
          v22 = v224;
          v102 = &v22;
          v23 = v225;
          v21 = v223;
          v104 = &v23;
          v101 = 4LL;
          v103 = 4LL;
          v105 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v106, v226);
          v107 = &v24;
          v25 = v228;
          v109 = &v25;
          v26 = v229;
          v24 = v227;
          v111 = &v26;
          v108 = 4LL;
          v110 = 4LL;
          v112 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v113, v230);
          v114 = &v27;
          v27 = v231;
          v28 = v232;
          v115 = 4LL;
          v116 = &v28;
          v29 = v233;
          v118 = &v29;
          v117 = 4LL;
          v119 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v120, v234);
          v121 = &v30;
          v31 = v236;
          v123 = &v31;
          v32 = v237;
          v30 = v235;
          v125 = &v32;
          v122 = 4LL;
          v124 = 4LL;
          v126 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v127, v238);
          v128 = &v33;
          v34 = v240;
          v130 = &v34;
          v35 = v241;
          v33 = v239;
          v132 = &v35;
          v129 = 4LL;
          v131 = 4LL;
          v133 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v134, v242);
          v135 = &v36;
          v37 = v244;
          v137 = &v37;
          v38 = v245;
          v36 = v243;
          v139 = &v38;
          v136 = 4LL;
          v138 = 4LL;
          v140 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v141, v246);
          v142 = &v39;
          v40 = v248;
          v144 = &v40;
          v41 = v249;
          v39 = v247;
          v143 = 4LL;
          v145 = 4LL;
          v146 = &v41;
          v147 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v148, v250);
          v149 = &v42;
          v43 = v252;
          v151 = &v43;
          v44 = v253;
          v42 = v251;
          v153 = &v44;
          v150 = 4LL;
          v152 = 4LL;
          v154 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v155, v254);
          v156 = &v45;
          v46 = v256;
          v158 = &v46;
          v47 = v257;
          v45 = v255;
          v160 = &v47;
          v157 = 4LL;
          v159 = 4LL;
          v161 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v162, v258);
          v163 = &v48;
          v49 = v260;
          v165 = &v49;
          v50 = v261;
          v48 = v259;
          v167 = &v50;
          v164 = 4LL;
          v166 = 4LL;
          v168 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v169, v262);
          v170 = &v51;
          v52 = v264;
          v172 = &v52;
          v53 = v265;
          v51 = v263;
          v174 = &v53;
          v171 = 4LL;
          v173 = 4LL;
          v175 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v176, v266);
          v177 = &v54;
          v54 = v267;
          v55 = v268;
          v178 = 4LL;
          v179 = &v55;
          v56 = v269;
          v181 = &v56;
          v180 = 4LL;
          v182 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v183, v270);
          v184 = &v57;
          v58 = v272;
          v186 = &v58;
          v59 = v273;
          v57 = v271;
          v188 = &v59;
          v185 = 4LL;
          v187 = 4LL;
          v189 = 4LL;
          tlgCreate1Sz_wchar_t((__int64)v190, v274);
          v191 = &v60;
          v193 = (char *)&v60 + 4;
          v61 = v276;
          v195 = &v61;
          v66 = *(_QWORD *)(a1 + 8);
          v197 = &v66;
          v11 = *(_BYTE *)(a1 + 16);
          v199 = &v11;
          v12 = *(_BYTE *)(a1 + 17);
          v201 = &v12;
          v60 = v275;
          v192 = 4LL;
          v194 = 4LL;
          v196 = 4LL;
          v198 = 8LL;
          v200 = 1LL;
          v202 = 1LL;
          do
            v7 = *(_WORD *)&v73[2 * v8++ + 2] == (unsigned __int16)ActivityId;
          while ( !v7 );
          v205 = (int)ActivityId;
          v204 = 2 * v8 + 2;
          v62 = v74;
          v203 = v73;
          v206 = &v62;
          v63 = v75;
          v208 = &v63;
          v64[0] = v76;
          v210 = v64;
          v67 = *(_QWORD *)(a1 + 40);
          v212 = &v67;
          v13 = *(_BYTE *)(a1 + 48);
          v214 = &v13;
          v14 = *(_BYTE *)(a1 + 49);
          v216 = &v14;
          *(_DWORD *)&EventDescriptor.Level = 5;
          UserData.Ptr = (ULONGLONG)off_140E07040;
          v207 = 4LL;
          v209 = 4LL;
          v211 = 4LL;
          v213 = 8LL;
          v215 = 1LL;
          v217 = 1LL;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = v10;
          UserData.Size = *(unsigned __int16 *)off_140E07040;
          v78 = byte_14004755D;
          UserData.Reserved = 2;
          v79 = 849;
          v80 = 1;
          v64[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          return EtwWriteEx(qword_140E07058, &EventDescriptor, 0LL, 0, ActivityId, ActivityId, 0x4Du, &UserData);
        }
      }
    }
  }
  return result;
}
