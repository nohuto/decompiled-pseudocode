/*
 * XREFs of ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400ADA74
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400AD6BC (rimPopulateContactFrameData.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401EE1CC (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664@Z @ 0x1400064B4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapper.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666@Z @ 0x1400AC55C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U_ea_1400AC55C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666666666@Z @ 0x1400AC954 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U_ea_1400AC954.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF764 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z @ 0x1400AF7E4 (-ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400AF81C (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400AF8C8 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall InputTraceLogging::RIM::PopulateContact(
        _QWORD *a1,
        unsigned int a2,
        __int16 a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int a6)
{
  int v10; // r10d
  char result; // al
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  _BYTE *v25; // rdi
  void *v26; // rdx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  _BYTE *v32; // rbx
  _BYTE *v33; // r8
  ULONGLONG v34; // r9
  __int64 v35; // r10
  _BYTE *v36; // r11
  const char *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // edx
  __int64 v41; // rdx
  int v42; // edx
  __int64 v43; // rdx
  int v44; // edx
  int v45; // eax
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  unsigned int v49; // ecx
  __int64 v50; // rdx
  int *v51; // r9
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  void *v55; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  unsigned int v58; // ecx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  _WORD v63[2]; // [rsp+168h] [rbp-80h] BYREF
  int v64; // [rsp+16Ch] [rbp-7Ch] BYREF
  unsigned int v65; // [rsp+170h] [rbp-78h] BYREF
  unsigned int v66; // [rsp+174h] [rbp-74h] BYREF
  unsigned int v67; // [rsp+178h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+17Ch] [rbp-6Ch] BYREF
  unsigned int v69; // [rsp+180h] [rbp-68h] BYREF
  unsigned int v70; // [rsp+184h] [rbp-64h] BYREF
  unsigned int v71; // [rsp+188h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+18Ch] [rbp-5Ch] BYREF
  unsigned int v73; // [rsp+190h] [rbp-58h] BYREF
  unsigned int v74; // [rsp+194h] [rbp-54h] BYREF
  unsigned int v75; // [rsp+198h] [rbp-50h] BYREF
  unsigned int v76; // [rsp+19Ch] [rbp-4Ch] BYREF
  int v77; // [rsp+1A0h] [rbp-48h] BYREF
  int v78; // [rsp+1A4h] [rbp-44h] BYREF
  int v79; // [rsp+1A8h] [rbp-40h] BYREF
  unsigned int v80; // [rsp+1ACh] [rbp-3Ch] BYREF
  unsigned int v81; // [rsp+1B0h] [rbp-38h] BYREF
  unsigned int v82; // [rsp+1B4h] [rbp-34h] BYREF
  unsigned int v83; // [rsp+1B8h] [rbp-30h] BYREF
  unsigned int v84; // [rsp+1BCh] [rbp-2Ch] BYREF
  unsigned int v85; // [rsp+1C0h] [rbp-28h] BYREF
  unsigned int v86; // [rsp+1C4h] [rbp-24h] BYREF
  unsigned int v87; // [rsp+1C8h] [rbp-20h] BYREF
  unsigned int v88; // [rsp+1CCh] [rbp-1Ch] BYREF
  unsigned int v89; // [rsp+1D0h] [rbp-18h] BYREF
  unsigned int v90; // [rsp+1D4h] [rbp-14h] BYREF
  unsigned int v91; // [rsp+1D8h] [rbp-10h] BYREF
  _QWORD *v92; // [rsp+1E0h] [rbp-8h] BYREF
  void *v93; // [rsp+1E8h] [rbp+0h] BYREF
  const char *v94; // [rsp+1F0h] [rbp+8h] BYREF
  const char *v95; // [rsp+1F8h] [rbp+10h] BYREF
  __int64 v96; // [rsp+200h] [rbp+18h] BYREF
  __int64 v97; // [rsp+208h] [rbp+20h] BYREF
  void *v98; // [rsp+210h] [rbp+28h] BYREF
  __int64 v99; // [rsp+218h] [rbp+30h] BYREF
  __int64 v100; // [rsp+220h] [rbp+38h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+228h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+238h] [rbp+50h] BYREF
  void *v103; // [rsp+248h] [rbp+60h]
  int v104; // [rsp+250h] [rbp+68h]
  int v105; // [rsp+254h] [rbp+6Ch]
  const char **v106; // [rsp+258h] [rbp+70h]
  __int64 v107; // [rsp+260h] [rbp+78h]
  const char **v108; // [rsp+268h] [rbp+80h]
  __int64 v109; // [rsp+270h] [rbp+88h]
  _BYTE *v110; // [rsp+278h] [rbp+90h]
  int v111; // [rsp+280h] [rbp+98h]
  int v112; // [rsp+284h] [rbp+9Ch]
  _WORD *v113; // [rsp+288h] [rbp+A0h]
  __int64 v114; // [rsp+290h] [rbp+A8h]
  _BYTE *v115; // [rsp+298h] [rbp+B0h]
  int v116; // [rsp+2A0h] [rbp+B8h]
  int v117; // [rsp+2A4h] [rbp+BCh]
  unsigned int *v118; // [rsp+2A8h] [rbp+C0h]
  __int64 v119; // [rsp+2B0h] [rbp+C8h]
  unsigned int *v120; // [rsp+2B8h] [rbp+D0h]
  __int64 v121; // [rsp+2C0h] [rbp+D8h]
  unsigned int *v122; // [rsp+2C8h] [rbp+E0h]
  __int64 v123; // [rsp+2D0h] [rbp+E8h]
  unsigned int *v124; // [rsp+2D8h] [rbp+F0h]
  __int64 v125; // [rsp+2E0h] [rbp+F8h]
  _BYTE *v126; // [rsp+2E8h] [rbp+100h]
  int v127; // [rsp+2F0h] [rbp+108h]
  int v128; // [rsp+2F4h] [rbp+10Ch]
  unsigned int *v129; // [rsp+2F8h] [rbp+110h]
  __int64 v130; // [rsp+300h] [rbp+118h]
  unsigned int *v131; // [rsp+308h] [rbp+120h]
  __int64 v132; // [rsp+310h] [rbp+128h]
  unsigned int *v133; // [rsp+318h] [rbp+130h]
  __int64 v134; // [rsp+320h] [rbp+138h]
  unsigned int *v135; // [rsp+328h] [rbp+140h]
  __int64 v136; // [rsp+330h] [rbp+148h]
  unsigned int *v137; // [rsp+338h] [rbp+150h]
  __int64 v138; // [rsp+340h] [rbp+158h]
  unsigned int *v139; // [rsp+348h] [rbp+160h]
  __int64 v140; // [rsp+350h] [rbp+168h]
  unsigned int *v141; // [rsp+358h] [rbp+170h]
  __int64 v142; // [rsp+360h] [rbp+178h]
  unsigned int *v143; // [rsp+368h] [rbp+180h]
  __int64 v144; // [rsp+370h] [rbp+188h]
  _QWORD *v145; // [rsp+378h] [rbp+190h]
  __int64 v146; // [rsp+380h] [rbp+198h]
  int *v147; // [rsp+388h] [rbp+1A0h]
  __int64 v148; // [rsp+390h] [rbp+1A8h]
  __int64 *v149; // [rsp+398h] [rbp+1B0h]
  __int64 v150; // [rsp+3A0h] [rbp+1B8h]
  __int64 *v151; // [rsp+3A8h] [rbp+1C0h]
  __int64 v152; // [rsp+3B0h] [rbp+1C8h]
  int *v153; // [rsp+3B8h] [rbp+1D0h]
  __int64 v154; // [rsp+3C0h] [rbp+1D8h]
  void **v155; // [rsp+3C8h] [rbp+1E0h]
  __int64 v156; // [rsp+3D0h] [rbp+1E8h]
  int *v157; // [rsp+3D8h] [rbp+1F0h]
  __int64 v158; // [rsp+3E0h] [rbp+1F8h]
  int *v159; // [rsp+3E8h] [rbp+200h]
  __int64 v160; // [rsp+3F0h] [rbp+208h]
  _BYTE *v161; // [rsp+3F8h] [rbp+210h]
  int v162; // [rsp+400h] [rbp+218h]
  int v163; // [rsp+404h] [rbp+21Ch]
  unsigned int *v164; // [rsp+408h] [rbp+220h]
  __int64 v165; // [rsp+410h] [rbp+228h]
  unsigned int *v166; // [rsp+418h] [rbp+230h]
  __int64 v167; // [rsp+420h] [rbp+238h]
  unsigned int *v168; // [rsp+428h] [rbp+240h]
  __int64 v169; // [rsp+430h] [rbp+248h]
  unsigned int *v170; // [rsp+438h] [rbp+250h]
  __int64 v171; // [rsp+440h] [rbp+258h]
  unsigned int *v172; // [rsp+448h] [rbp+260h]
  __int64 v173; // [rsp+450h] [rbp+268h]
  unsigned int *v174; // [rsp+458h] [rbp+270h]
  __int64 v175; // [rsp+460h] [rbp+278h]
  unsigned int *v176; // [rsp+468h] [rbp+280h]
  __int64 v177; // [rsp+470h] [rbp+288h]
  unsigned int *v178; // [rsp+478h] [rbp+290h]
  __int64 v179; // [rsp+480h] [rbp+298h]
  unsigned int *v180; // [rsp+488h] [rbp+2A0h]
  __int64 v181; // [rsp+490h] [rbp+2A8h]
  unsigned int *v182; // [rsp+498h] [rbp+2B0h]
  __int64 v183; // [rsp+4A0h] [rbp+2B8h]
  unsigned int *v184; // [rsp+4A8h] [rbp+2C0h]
  __int64 v185; // [rsp+4B0h] [rbp+2C8h]
  unsigned int *v186; // [rsp+4B8h] [rbp+2D0h]
  __int64 v187; // [rsp+4C0h] [rbp+2D8h]

  v10 = *(_DWORD *)(a1[57] + 24LL);
  result = v10 - 1;
  if ( (unsigned int)(v10 - 1) > 3 )
  {
    result = v10 - 5;
    if ( (unsigned int)(v10 - 5) <= 1 )
    {
      if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x100) != 0 )
      {
        result = 0;
        if ( (qword_14029AE48 & 0x100) == qword_14029AE48 )
        {
          v54 = a5[24];
          v76 = a5[31];
          v75 = a5[30];
          v74 = a5[29];
          v73 = a5[28];
          v72 = a5[27];
          v71 = a5[26];
          v55 = (void *)InputTraceLogging::ButtonChangeTypeToString(v54);
          v57 = *(_QWORD *)(v56 + 88);
          v58 = *(_DWORD *)(v56 + 8);
          v98 = v55;
          v70 = *(_DWORD *)(v56 + 84);
          v69 = *(_DWORD *)(v56 + 76);
          v68 = *(_DWORD *)(v56 + 72);
          v96 = *(_QWORD *)(v56 + 32);
          v95 = *(const char **)(v56 + 24);
          v67 = *(_DWORD *)(v56 + 80);
          v66 = *(_DWORD *)(v56 + 68);
          v65 = *(_DWORD *)(v56 + 64);
          v64 = *(_DWORD *)(v56 + 52);
          v79 = *(_DWORD *)(v56 + 48);
          v78 = *(_DWORD *)(v56 + 60);
          v77 = *(_DWORD *)(v56 + 56);
          LODWORD(v92) = *(_DWORD *)(v56 + 44);
          v85 = *(_DWORD *)(v56 + 40);
          v84 = *(_DWORD *)(v56 + 20);
          v97 = v57;
          v94 = InputTraceLogging::PointerTypeToString(v58);
          v83 = *(_DWORD *)(v59 + 16);
          v82 = *(_DWORD *)(v59 + 12);
          v81 = a4[1];
          v80 = *a4;
          *(_QWORD *)&EventDescriptor.Id = InputTraceLogging::PointerDeviceTypeToString(a2);
          v63[0] = a3;
          v100 = InputTraceLogging::ContactPopulationSourceToString(a6);
          v99 = v60;
          v93 = a1;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                   (__int64)&dword_14029AE30,
                   (__int64)&unk_140279CE9,
                   v61,
                   v62,
                   (__int64)&v93,
                   (__int64)&v99,
                   (void **)&v100,
                   (__int64)v63,
                   (void **)&EventDescriptor,
                   (__int64)&v80,
                   (__int64)&v81,
                   (__int64)&v82,
                   (__int64)&v83,
                   (void **)&v94,
                   (__int64)&v84,
                   (__int64)&v85,
                   (__int64)&v92,
                   (__int64)&v77,
                   (__int64)&v78,
                   (__int64)&v79,
                   (__int64)&v64,
                   (__int64)&v65,
                   (__int64)&v66,
                   (__int64)&v67,
                   (__int64)&v95,
                   (__int64)&v96,
                   (__int64)&v68,
                   (__int64)&v97,
                   (__int64)&v69,
                   (__int64)&v70,
                   &v98,
                   (__int64)&v71,
                   (__int64)&v72,
                   (__int64)&v73,
                   (__int64)&v74,
                   (__int64)&v75,
                   (__int64)&v76);
        }
      }
    }
    else if ( v10 == 7 )
    {
      if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x100) != 0 )
      {
        result = 0;
        if ( (qword_14029AE48 & 0x100) == qword_14029AE48 )
        {
          v21 = a5[24];
          v76 = a5[37];
          v75 = a5[36];
          v74 = a5[35];
          v73 = a5[34];
          v72 = a5[33];
          v71 = a5[32];
          v70 = a5[31];
          v69 = a5[30];
          v68 = a5[29];
          v67 = a5[28];
          v66 = a5[27];
          v65 = a5[26];
          v22 = InputTraceLogging::ButtonChangeTypeToString(v21);
          v24 = *(_DWORD *)(v23 + 84);
          v25 = (_BYTE *)v22;
          v26 = *(void **)(v23 + 88);
          LODWORD(v92) = *(_DWORD *)(v23 + 68);
          v85 = *(_DWORD *)(v23 + 64);
          LODWORD(v22) = *(_DWORD *)(v23 + 52);
          v64 = v24;
          v27 = *(_DWORD *)(v23 + 76);
          v84 = v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 48);
          v79 = v27;
          v28 = *(_DWORD *)(v23 + 72);
          v83 = v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 60);
          v78 = v28;
          v29 = *(_QWORD *)(v23 + 32);
          v82 = v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 56);
          v97 = v29;
          v30 = *(_QWORD *)(v23 + 24);
          v81 = v22;
          v80 = *(_DWORD *)(v23 + 44);
          LODWORD(v22) = *(_DWORD *)(v23 + 40);
          v96 = v30;
          LODWORD(v30) = *(_DWORD *)(v23 + 80);
          v91 = v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 20);
          v77 = v30;
          LODWORD(v30) = *(_DWORD *)(v23 + 8);
          v90 = v22;
          v98 = v26;
          InputTraceLogging::PointerTypeToString(v30);
          v89 = *(_DWORD *)(v31 + 16);
          v88 = *(_DWORD *)(v31 + 12);
          v87 = a4[1];
          v86 = *a4;
          InputTraceLogging::PointerDeviceTypeToString(a2);
          v63[0] = a3;
          v32 = (_BYTE *)InputTraceLogging::ContactPopulationSourceToString(a6);
          v95 = v37;
          v94 = (const char *)a1;
          v186 = &v76;
          v187 = v35;
          v184 = &v75;
          v185 = v35;
          v182 = &v74;
          v180 = &v73;
          v178 = &v72;
          v176 = &v71;
          v174 = &v70;
          v172 = &v69;
          v170 = &v68;
          v168 = &v67;
          v166 = &v66;
          v164 = &v65;
          v38 = -1LL;
          v183 = v35;
          v181 = v35;
          v179 = v35;
          v177 = v35;
          v175 = v35;
          v173 = v35;
          v171 = v35;
          v169 = v35;
          v167 = v35;
          v165 = v35;
          if ( v25 )
          {
            v39 = -1LL;
            do
              ++v39;
            while ( v25[v39] );
            v40 = v39 + 1;
          }
          else
          {
            v25 = &unk_14025D828;
            v40 = 1;
          }
          v162 = v40;
          v159 = &v64;
          v157 = &v79;
          v155 = &v98;
          v153 = &v78;
          v151 = &v97;
          v149 = &v96;
          v147 = &v77;
          v145 = &v92;
          v143 = &v85;
          v141 = &v84;
          v139 = &v83;
          v137 = &v82;
          v135 = &v81;
          v133 = &v80;
          v131 = &v91;
          v129 = &v90;
          v161 = v25;
          v163 = 0;
          v160 = v35;
          v158 = v35;
          v156 = 8LL;
          v154 = v35;
          v152 = 8LL;
          v150 = 8LL;
          v148 = v35;
          v146 = v35;
          v144 = v35;
          v142 = v35;
          v140 = v35;
          v138 = v35;
          v136 = v35;
          v134 = v35;
          v132 = v35;
          v130 = v35;
          if ( v36 )
          {
            v41 = -1LL;
            do
              ++v41;
            while ( v36[v41] );
            v42 = v41 + 1;
          }
          else
          {
            v36 = &unk_14025D828;
            v42 = 1;
          }
          v127 = v42;
          v124 = &v89;
          v122 = &v88;
          v120 = &v87;
          v118 = &v86;
          v126 = v36;
          v128 = 0;
          v125 = v35;
          v123 = v35;
          v121 = v35;
          v119 = v35;
          if ( v33 )
          {
            v43 = -1LL;
            do
              ++v43;
            while ( v33[v43] );
            v44 = v43 + 1;
          }
          else
          {
            v33 = &unk_14025D828;
            v44 = 1;
          }
          v116 = v44;
          v113 = v63;
          v114 = 2LL;
          v115 = v33;
          v117 = 0;
          if ( v32 )
          {
            do
              ++v38;
            while ( v32[v38] );
            v45 = v38 + 1;
          }
          else
          {
            v32 = &unk_14025D828;
            v45 = 1;
          }
          v111 = v45;
          v112 = 0;
          v108 = &v95;
          v106 = &v94;
          UserData.Ptr = (ULONGLONG)off_14029AE38;
          *(_DWORD *)&EventDescriptor.Level = 4;
          EventDescriptor.Keyword = v34;
          v110 = v32;
          v109 = 8LL;
          v107 = 8LL;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          UserData.Size = *(unsigned __int16 *)off_14029AE38;
          v103 = &unk_14027A1F1;
          UserData.Reserved = 2;
          v104 = 480;
          v105 = 1;
          LODWORD(v93) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          return EtwWriteTransfer(qword_14029AE50, &EventDescriptor, 0LL, 0LL, 0x29u, &UserData);
        }
      }
    }
    else if ( (unsigned int)dword_14029AE30 > 4 )
    {
      result = tlgKeywordOn((__int64)&dword_14029AE30, 256LL);
      if ( result )
      {
        v46 = (void *)InputTraceLogging::ButtonChangeTypeToString(a5[24]);
        v48 = *(_QWORD *)(v47 + 88);
        v49 = *(_DWORD *)(v47 + 8);
        v98 = v46;
        LODWORD(v93) = *(_DWORD *)(v47 + 84);
        v76 = *(_DWORD *)(v47 + 76);
        v75 = *(_DWORD *)(v47 + 72);
        v96 = *(_QWORD *)(v47 + 32);
        v95 = *(const char **)(v47 + 24);
        v74 = *(_DWORD *)(v47 + 80);
        v73 = *(_DWORD *)(v47 + 68);
        v72 = *(_DWORD *)(v47 + 64);
        v71 = *(_DWORD *)(v47 + 52);
        v70 = *(_DWORD *)(v47 + 48);
        v69 = *(_DWORD *)(v47 + 60);
        v68 = *(_DWORD *)(v47 + 56);
        v67 = *(_DWORD *)(v47 + 44);
        v66 = *(_DWORD *)(v47 + 40);
        v65 = *(_DWORD *)(v47 + 20);
        v97 = v48;
        v94 = InputTraceLogging::PointerTypeToString(v49);
        v64 = *(_DWORD *)(v50 + 16);
        v79 = *(_DWORD *)(v50 + 12);
        v78 = v51[1];
        v77 = *v51;
        *(_QWORD *)&EventDescriptor.Id = InputTraceLogging::PointerDeviceTypeToString(a2);
        v63[0] = a3;
        v100 = InputTraceLogging::ContactPopulationSourceToString(a6);
        v99 = v52;
        v92 = a1;
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                 (__int64)&dword_14029AE30,
                 (__int64)&unk_14027A07B,
                 v52,
                 v53,
                 (__int64)&v92,
                 (__int64)&v99,
                 (void **)&v100,
                 (__int64)v63,
                 (void **)&EventDescriptor,
                 (__int64)&v77,
                 (__int64)&v78,
                 (__int64)&v79,
                 (__int64)&v64,
                 (void **)&v94,
                 (__int64)&v65,
                 (__int64)&v66,
                 (__int64)&v67,
                 (__int64)&v68,
                 (__int64)&v69,
                 (__int64)&v70,
                 (__int64)&v71,
                 (__int64)&v72,
                 (__int64)&v73,
                 (__int64)&v74,
                 (__int64)&v95,
                 (__int64)&v96,
                 (__int64)&v75,
                 (__int64)&v97,
                 (__int64)&v76,
                 (__int64)&v93,
                 &v98);
      }
    }
  }
  else if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x100) != 0 )
  {
    result = 0;
    if ( (qword_14029AE48 & 0x100) == qword_14029AE48 )
    {
      v12 = a5[24];
      v86 = a5[37];
      v87 = a5[36];
      v88 = a5[35];
      v89 = a5[34];
      v90 = a5[33];
      v91 = a5[32];
      v80 = a5[31];
      v81 = a5[30];
      v82 = a5[29];
      v83 = a5[28];
      v84 = a5[27];
      v85 = a5[26];
      v13 = (void *)InputTraceLogging::ButtonChangeTypeToString(v12);
      v15 = *(_QWORD *)(v14 + 88);
      v16 = *(_DWORD *)(v14 + 8);
      v93 = v13;
      LODWORD(v92) = *(_DWORD *)(v14 + 84);
      v77 = *(_DWORD *)(v14 + 76);
      v78 = *(_DWORD *)(v14 + 72);
      v100 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)&EventDescriptor.Id = *(_QWORD *)(v14 + 24);
      v79 = *(_DWORD *)(v14 + 80);
      v64 = *(_DWORD *)(v14 + 68);
      v65 = *(_DWORD *)(v14 + 64);
      v66 = *(_DWORD *)(v14 + 52);
      v67 = *(_DWORD *)(v14 + 48);
      v68 = *(_DWORD *)(v14 + 60);
      v69 = *(_DWORD *)(v14 + 56);
      v70 = *(_DWORD *)(v14 + 44);
      v71 = *(_DWORD *)(v14 + 40);
      v72 = *(_DWORD *)(v14 + 20);
      v99 = v15;
      v94 = InputTraceLogging::PointerTypeToString(v16);
      v73 = *(_DWORD *)(v17 + 16);
      v74 = *(_DWORD *)(v17 + 12);
      v75 = a4[1];
      v76 = *a4;
      v95 = InputTraceLogging::PointerDeviceTypeToString(a2);
      v63[0] = a3;
      v96 = InputTraceLogging::ContactPopulationSourceToString(a6);
      v97 = v18;
      v98 = a1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               (__int64)&dword_14029AE30,
               byte_140279E8D,
               v19,
               v20,
               (__int64)&v98,
               (__int64)&v97,
               (void **)&v96,
               (__int64)v63,
               (void **)&v95,
               (__int64)&v76,
               (__int64)&v75,
               (__int64)&v74,
               (__int64)&v73,
               (void **)&v94,
               (__int64)&v72,
               (__int64)&v71,
               (__int64)&v70,
               (__int64)&v69,
               (__int64)&v68,
               (__int64)&v67,
               (__int64)&v66,
               (__int64)&v65,
               (__int64)&v64,
               (__int64)&v79,
               (__int64)&EventDescriptor,
               (__int64)&v100,
               (__int64)&v78,
               (__int64)&v99,
               (__int64)&v77,
               (__int64)&v92,
               &v93,
               (__int64)&v85,
               (__int64)&v84,
               (__int64)&v83,
               (__int64)&v82,
               (__int64)&v81,
               (__int64)&v80,
               (__int64)&v91,
               (__int64)&v90,
               (__int64)&v89,
               (__int64)&v88,
               (__int64)&v87,
               (__int64)&v86);
    }
  }
  return result;
}
