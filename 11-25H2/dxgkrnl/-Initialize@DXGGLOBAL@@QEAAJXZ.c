/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401CDFDC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x14006E3EC (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1400724CC (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x14007A170 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1401B6CF4 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1401CE0C8 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1401D088C (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401D16B0 (-SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401D835C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     CreateDxgkSharedObjectTypes @ 0x1401DCCC0 (CreateDxgkSharedObjectTypes.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1401F2D20 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x14038F380 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  __int64 v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  NTSTATUS v6; // eax
  __int64 v7; // r14
  const wchar_t *v8; // r9
  NTSTATUS v10; // eax
  __int64 v11; // r9
  struct _ERESOURCE *v12; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // ebx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  unsigned __int8 v17; // r9
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  int v29; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v31; // r9
  int v32; // ecx
  int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rax
  DXGSESSIONMGR *v41; // rax
  __int64 v42; // r9
  DXGSESSIONMGR *v43; // rax
  int v44; // ecx
  __int64 v45; // rbx
  unsigned __int64 v46; // rax
  ULONG *v47; // rax
  __int64 v48; // r9
  __int64 v49; // rax
  _BYTE *v50; // rbx
  NTSTATUS v51; // eax
  __int64 v52; // rbx
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  __int64 v55; // rdi
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v58; // [rsp+60h] [rbp-A8h] BYREF
  int v59; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v60; // [rsp+68h] [rbp-A0h] BYREF
  int v61; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v62; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v64; // [rsp+78h] [rbp-90h] BYREF
  int v65; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v66; // [rsp+80h] [rbp-88h] BYREF
  int v67; // [rsp+84h] [rbp-84h] BYREF
  int v68; // [rsp+88h] [rbp-80h] BYREF
  int v69; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v70; // [rsp+90h] [rbp-78h] BYREF
  int v71; // [rsp+94h] [rbp-74h] BYREF
  int v72; // [rsp+98h] [rbp-70h] BYREF
  int v73; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v74; // [rsp+A0h] [rbp-68h] BYREF
  int v75; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-60h] BYREF
  int v77; // [rsp+ACh] [rbp-5Ch] BYREF
  int v78; // [rsp+B0h] [rbp-58h] BYREF
  int v79; // [rsp+B4h] [rbp-54h] BYREF
  int v80; // [rsp+B8h] [rbp-50h] BYREF
  int v81; // [rsp+BCh] [rbp-4Ch] BYREF
  int v82; // [rsp+C0h] [rbp-48h] BYREF
  int v83; // [rsp+C4h] [rbp-44h] BYREF
  int v84; // [rsp+C8h] [rbp-40h] BYREF
  int v85; // [rsp+CCh] [rbp-3Ch] BYREF
  int v86; // [rsp+D0h] [rbp-38h] BYREF
  int v87; // [rsp+D4h] [rbp-34h] BYREF
  int v88; // [rsp+D8h] [rbp-30h] BYREF
  int v89; // [rsp+DCh] [rbp-2Ch] BYREF
  int v90; // [rsp+E0h] [rbp-28h] BYREF
  int v91; // [rsp+E4h] [rbp-24h] BYREF
  int v92; // [rsp+E8h] [rbp-20h] BYREF
  struct _UNICODE_STRING v93; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v94; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v95[13]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v96; // [rsp+178h] [rbp+70h] BYREF
  int v97; // [rsp+180h] [rbp+78h]
  const wchar_t *v98; // [rsp+188h] [rbp+80h]
  unsigned int *v99; // [rsp+190h] [rbp+88h]
  int v100; // [rsp+198h] [rbp+90h]
  _QWORD *v101; // [rsp+1A0h] [rbp+98h]
  int v102; // [rsp+1A8h] [rbp+A0h]
  __int64 v103; // [rsp+1B0h] [rbp+A8h]
  int v104; // [rsp+1B8h] [rbp+B0h]
  const wchar_t *v105; // [rsp+1C0h] [rbp+B8h]
  int *v106; // [rsp+1C8h] [rbp+C0h]
  int v107; // [rsp+1D0h] [rbp+C8h]
  int *v108; // [rsp+1D8h] [rbp+D0h]
  int v109; // [rsp+1E0h] [rbp+D8h]
  __int64 v110; // [rsp+1E8h] [rbp+E0h]
  int v111; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v112; // [rsp+1F8h] [rbp+F0h]
  unsigned int *v113; // [rsp+200h] [rbp+F8h]
  int v114; // [rsp+208h] [rbp+100h]
  int *v115; // [rsp+210h] [rbp+108h]
  int v116; // [rsp+218h] [rbp+110h]
  __int64 v117; // [rsp+220h] [rbp+118h]
  int v118; // [rsp+228h] [rbp+120h]
  const wchar_t *v119; // [rsp+230h] [rbp+128h]
  unsigned int *v120; // [rsp+238h] [rbp+130h]
  int v121; // [rsp+240h] [rbp+138h]
  int *v122; // [rsp+248h] [rbp+140h]
  int v123; // [rsp+250h] [rbp+148h]
  __int64 v124; // [rsp+258h] [rbp+150h]
  int v125; // [rsp+260h] [rbp+158h]
  const wchar_t *v126; // [rsp+268h] [rbp+160h]
  int *v127; // [rsp+270h] [rbp+168h]
  int v128; // [rsp+278h] [rbp+170h]
  int *v129; // [rsp+280h] [rbp+178h]
  int v130; // [rsp+288h] [rbp+180h]
  __int64 v131; // [rsp+290h] [rbp+188h]
  int v132; // [rsp+298h] [rbp+190h]
  const wchar_t *v133; // [rsp+2A0h] [rbp+198h]
  int *v134; // [rsp+2A8h] [rbp+1A0h]
  int v135; // [rsp+2B0h] [rbp+1A8h]
  int *v136; // [rsp+2B8h] [rbp+1B0h]
  int v137; // [rsp+2C0h] [rbp+1B8h]
  __int64 v138; // [rsp+2C8h] [rbp+1C0h]
  int v139; // [rsp+2D0h] [rbp+1C8h]
  const wchar_t *v140; // [rsp+2D8h] [rbp+1D0h]
  int *v141; // [rsp+2E0h] [rbp+1D8h]
  int v142; // [rsp+2E8h] [rbp+1E0h]
  int *v143; // [rsp+2F0h] [rbp+1E8h]
  int v144; // [rsp+2F8h] [rbp+1F0h]
  __int64 v145; // [rsp+300h] [rbp+1F8h]
  int v146; // [rsp+308h] [rbp+200h]
  const wchar_t *v147; // [rsp+310h] [rbp+208h]
  int *v148; // [rsp+318h] [rbp+210h]
  int v149; // [rsp+320h] [rbp+218h]
  int *v150; // [rsp+328h] [rbp+220h]
  int v151; // [rsp+330h] [rbp+228h]
  __int64 v152; // [rsp+338h] [rbp+230h]
  int v153; // [rsp+340h] [rbp+238h]
  const wchar_t *v154; // [rsp+348h] [rbp+240h]
  int *v155; // [rsp+350h] [rbp+248h]
  int v156; // [rsp+358h] [rbp+250h]
  int *v157; // [rsp+360h] [rbp+258h]
  int v158; // [rsp+368h] [rbp+260h]
  __int64 v159; // [rsp+370h] [rbp+268h]
  int v160; // [rsp+378h] [rbp+270h]
  const wchar_t *v161; // [rsp+380h] [rbp+278h]
  int *v162; // [rsp+388h] [rbp+280h]
  int v163; // [rsp+390h] [rbp+288h]
  int *v164; // [rsp+398h] [rbp+290h]
  int v165; // [rsp+3A0h] [rbp+298h]
  __int64 v166; // [rsp+3A8h] [rbp+2A0h]
  int v167; // [rsp+3B0h] [rbp+2A8h]
  const wchar_t *v168; // [rsp+3B8h] [rbp+2B0h]
  unsigned int *v169; // [rsp+3C0h] [rbp+2B8h]
  int v170; // [rsp+3C8h] [rbp+2C0h]
  int *v171; // [rsp+3D0h] [rbp+2C8h]
  int v172; // [rsp+3D8h] [rbp+2D0h]
  __int64 v173; // [rsp+3E0h] [rbp+2D8h]
  int v174; // [rsp+3E8h] [rbp+2E0h]
  const wchar_t *v175; // [rsp+3F0h] [rbp+2E8h]
  int *v176; // [rsp+3F8h] [rbp+2F0h]
  int v177; // [rsp+400h] [rbp+2F8h]
  int *v178; // [rsp+408h] [rbp+300h]
  int v179; // [rsp+410h] [rbp+308h]
  __int64 v180; // [rsp+418h] [rbp+310h]
  int v181; // [rsp+420h] [rbp+318h]
  const wchar_t *v182; // [rsp+428h] [rbp+320h]
  unsigned int *v183; // [rsp+430h] [rbp+328h]
  int v184; // [rsp+438h] [rbp+330h]
  int *v185; // [rsp+440h] [rbp+338h]
  int v186; // [rsp+448h] [rbp+340h]
  __int64 v187; // [rsp+450h] [rbp+348h]
  int v188; // [rsp+458h] [rbp+350h]
  const wchar_t *v189; // [rsp+460h] [rbp+358h]
  int *v190; // [rsp+468h] [rbp+360h]
  int v191; // [rsp+470h] [rbp+368h]
  int *v192; // [rsp+478h] [rbp+370h]
  int v193; // [rsp+480h] [rbp+378h]
  __int64 v194; // [rsp+488h] [rbp+380h]
  int v195; // [rsp+490h] [rbp+388h]
  const wchar_t *v196; // [rsp+498h] [rbp+390h]
  unsigned int *v197; // [rsp+4A0h] [rbp+398h]
  int v198; // [rsp+4A8h] [rbp+3A0h]
  int *v199; // [rsp+4B0h] [rbp+3A8h]
  int v200; // [rsp+4B8h] [rbp+3B0h]
  __int64 v201; // [rsp+4C0h] [rbp+3B8h]
  int v202; // [rsp+4C8h] [rbp+3C0h]
  const wchar_t *v203; // [rsp+4D0h] [rbp+3C8h]
  int *v204; // [rsp+4D8h] [rbp+3D0h]
  int v205; // [rsp+4E0h] [rbp+3D8h]
  int *v206; // [rsp+4E8h] [rbp+3E0h]
  int v207; // [rsp+4F0h] [rbp+3E8h]
  __int64 v208; // [rsp+4F8h] [rbp+3F0h]
  int v209; // [rsp+500h] [rbp+3F8h]
  const wchar_t *v210; // [rsp+508h] [rbp+400h]
  int *v211; // [rsp+510h] [rbp+408h]
  int v212; // [rsp+518h] [rbp+410h]
  int *v213; // [rsp+520h] [rbp+418h]
  int v214; // [rsp+528h] [rbp+420h]
  __int64 v215; // [rsp+530h] [rbp+428h]
  int v216; // [rsp+538h] [rbp+430h]
  const wchar_t *v217; // [rsp+540h] [rbp+438h]
  unsigned int *v218; // [rsp+548h] [rbp+440h]
  int v219; // [rsp+550h] [rbp+448h]
  __int64 v220; // [rsp+558h] [rbp+450h]
  int v221; // [rsp+560h] [rbp+458h]
  __int64 v222; // [rsp+568h] [rbp+460h]
  int v223; // [rsp+570h] [rbp+468h]
  const wchar_t *v224; // [rsp+578h] [rbp+470h]
  unsigned int *v225; // [rsp+580h] [rbp+478h]
  int v226; // [rsp+588h] [rbp+480h]
  __int64 v227; // [rsp+590h] [rbp+488h]
  int v228; // [rsp+598h] [rbp+490h]
  __int64 v229; // [rsp+5A0h] [rbp+498h]
  int v230; // [rsp+5A8h] [rbp+4A0h]
  const wchar_t *v231; // [rsp+5B0h] [rbp+4A8h]
  unsigned int *v232; // [rsp+5B8h] [rbp+4B0h]
  int v233; // [rsp+5C0h] [rbp+4B8h]
  __int64 v234; // [rsp+5C8h] [rbp+4C0h]
  int v235; // [rsp+5D0h] [rbp+4C8h]
  __int64 v236; // [rsp+5D8h] [rbp+4D0h]
  int v237; // [rsp+5E0h] [rbp+4D8h]
  const wchar_t *v238; // [rsp+5E8h] [rbp+4E0h]
  unsigned int *v239; // [rsp+5F0h] [rbp+4E8h]
  int v240; // [rsp+5F8h] [rbp+4F0h]
  __int64 v241; // [rsp+600h] [rbp+4F8h]
  int v242; // [rsp+608h] [rbp+500h]
  __int64 v243; // [rsp+610h] [rbp+508h]
  int v244; // [rsp+618h] [rbp+510h]
  const wchar_t *v245; // [rsp+620h] [rbp+518h]
  unsigned int *v246; // [rsp+628h] [rbp+520h]
  int v247; // [rsp+630h] [rbp+528h]
  __int64 v248; // [rsp+638h] [rbp+530h]
  int v249; // [rsp+640h] [rbp+538h]
  __int64 v250; // [rsp+648h] [rbp+540h]
  int v251; // [rsp+650h] [rbp+548h]
  const wchar_t *v252; // [rsp+658h] [rbp+550h]
  unsigned int *v253; // [rsp+660h] [rbp+558h]
  int v254; // [rsp+668h] [rbp+560h]
  __int64 v255; // [rsp+670h] [rbp+568h]
  int v256; // [rsp+678h] [rbp+570h]
  __int64 v257; // [rsp+680h] [rbp+578h]
  int v258; // [rsp+688h] [rbp+580h]
  const wchar_t *v259; // [rsp+690h] [rbp+588h]
  int *v260; // [rsp+698h] [rbp+590h]
  int v261; // [rsp+6A0h] [rbp+598h]
  __int64 v262; // [rsp+6A8h] [rbp+5A0h]
  int v263; // [rsp+6B0h] [rbp+5A8h]
  __int64 v264; // [rsp+6B8h] [rbp+5B0h]
  int v265; // [rsp+6C0h] [rbp+5B8h]
  const wchar_t *v266; // [rsp+6C8h] [rbp+5C0h]
  int *v267; // [rsp+6D0h] [rbp+5C8h]
  int v268; // [rsp+6D8h] [rbp+5D0h]
  __int64 v269; // [rsp+6E0h] [rbp+5D8h]
  int v270; // [rsp+6E8h] [rbp+5E0h]
  __int64 v271; // [rsp+6F0h] [rbp+5E8h]
  int v272; // [rsp+6F8h] [rbp+5F0h]
  __int64 v273; // [rsp+700h] [rbp+5F8h]
  __int128 v274; // [rsp+708h] [rbp+600h]
  __int128 v275; // [rsp+718h] [rbp+610h]
  _OWORD v276[2]; // [rsp+728h] [rbp+620h] BYREF
  wchar_t v277; // [rsp+748h] [rbp+640h]
  _OWORD v278[9]; // [rsp+758h] [rbp+650h] BYREF
  int v279; // [rsp+7E8h] [rbp+6E0h]
  wchar_t v280; // [rsp+7ECh] [rbp+6E4h]

  v1 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
  memset(&v95[1], 0, 0x58uLL);
  v2 = *(_OWORD *)&v95[3];
  *(_OWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 64LL) = *(_OWORD *)&v95[1];
  v3 = *(_OWORD *)&v95[5];
  *(_OWORD *)(v1 + 80) = v2;
  v4 = *(_OWORD *)&v95[7];
  *(_OWORD *)(v1 + 96) = v3;
  v5 = *(_OWORD *)&v95[9];
  *(_OWORD *)(v1 + 112) = v4;
  *(_QWORD *)&v4 = v95[11];
  *(_OWORD *)(v1 + 128) = v5;
  *(_QWORD *)(v1 + 144) = v4;
  g_WindowsSubsystem = ZwAllocateVirtualMemory;
  qword_14015DA88 = ZwAllocateVirtualMemoryEx;
  qword_14015DA90 = (__int64)ZwFreeVirtualMemory;
  qword_14015DA98 = MmMapViewOfSection;
  qword_14015DAA0 = MmUnmapViewOfSection;
  qword_14015DAA8 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_14015DAB0 = (__int64)MmUnmapLockedPages;
  g_WslSubsystem = ZwAllocateVirtualMemory;
  qword_14015DAC0 = ZwAllocateVirtualMemoryEx;
  qword_14015DAC8 = (__int64)ZwFreeVirtualMemory;
  qword_14015DAD0 = MmMapViewOfSection;
  qword_14015DAD8 = MmUnmapViewOfSection;
  qword_14015DAE0 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_14015DAE8 = (__int64)MmUnmapLockedPages;
  v6 = ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v1 + 305360),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         0x10uLL,
         0x4B677844u,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v6);
    v8 = L"DXGGlobal 0x%I64x: Unable to initialize the lookaside list for lock order tracker, returning 0x%I64x";
    WdLogGlobalForLineNumber = 1800;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v8, v1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  *(_BYTE *)(v1 + 305344) = 1;
  v10 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v1 + 160),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          0xA0uLL,
          0x576B7844u,
          0);
  v7 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v10);
    v8 = L"DXGGlobal 0x%I64x: Unable to initialize m_VmBusPacketWorkItemList, returning 0x%I64x";
    WdLogGlobalForLineNumber = 1812;
    goto LABEL_3;
  }
  *(_BYTE *)(v1 + 1315) = 1;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 336)) )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1824;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed the initial shared resource handle table expansion, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v12 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL, v11);
  *(_QWORD *)(v1 + 600) = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741801LL);
    WdLogGlobalForLineNumber = 1837;
    return 3221225495LL;
  }
  v13 = ExInitializeResourceLite(v12);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v13);
    WdLogGlobalForLineNumber = 1847;
    return v14;
  }
  v15 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1104), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v14 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry3(3LL, v1, v15, 0LL);
    WdLogGlobalForLineNumber = 1856;
    return v14;
  }
  *(_BYTE *)(v1 + 1313) = 1;
  v16 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1200), 0LL, 0LL, PagedPool, 0, 0x5E0uLL, 0x4B677844u, 0);
  v14 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry3(3LL, v1, v16, 0LL);
    WdLogGlobalForLineNumber = 1866;
    return v14;
  }
  v17 = g_bSkuSupportMultipleUsers;
  *(_BYTE *)(v1 + 1314) = 1;
  v81 = 32;
  v95[0] = 0x4000000LL;
  v64 = 0;
  v79 = 0;
  v65 = 0;
  v80 = 1;
  v63 = 0;
  v62 = 0;
  v67 = 0;
  v82 = 0;
  v83 = 0;
  v68 = 0;
  v69 = 0;
  v84 = 0;
  v85 = 0;
  v70 = 0;
  v86 = 0;
  v71 = 0;
  v87 = 0;
  v66 = 0;
  v74 = 0;
  if ( v17 )
    v18 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  else
    v18 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v88 = v18;
  if ( v17 )
    v19 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v19 = 2;
  v77 = v19;
  if ( v17 )
    v20 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v20 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v89 = v20;
  v58 = v20;
  v90 = 300;
  v60 = 300;
  v57 = v18;
  v78 = 1;
  v59 = v19;
  v61 = 1;
  v91 = 5000;
  v72 = 0;
  v92 = 15000;
  v73 = 0;
  v75 = *(_DWORD *)(v1 + 305848);
  v98 = L"TerminationListSizeLimit";
  v99 = &v64;
  v101 = v95;
  v105 = L"ValidateWDDMCaps";
  v106 = &v65;
  v108 = &v79;
  v112 = L"WDDM2LockManagement";
  v113 = &v63;
  v115 = &v80;
  v119 = L"MaximumAdapterCount";
  v120 = &v62;
  v122 = &v81;
  v126 = L"InvestigationDebugParameter";
  v127 = &v67;
  v129 = &v82;
  v133 = L"EnableIgnoreWin32ProcessStatus";
  v134 = &v68;
  v136 = &v83;
  v140 = L"EnableHMDTestMode";
  v96 = 0LL;
  v97 = 288;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v104 = 288;
  v107 = 67108868;
  v109 = 4;
  v110 = 0LL;
  v111 = 288;
  v114 = 67108868;
  v116 = 4;
  v117 = 0LL;
  v118 = 288;
  v121 = 67108868;
  v123 = 4;
  v124 = 0LL;
  v125 = 288;
  v128 = 67108868;
  v130 = 4;
  v131 = 0LL;
  v132 = 288;
  v135 = 67108868;
  v137 = 4;
  v138 = 0LL;
  v139 = 288;
  v142 = 67108868;
  v141 = &v69;
  v143 = &v84;
  v147 = L"PreserveFirmwareMode";
  v148 = &v70;
  v150 = &v85;
  v154 = L"PreventFullscreenWireFormatChange";
  v155 = &v71;
  v157 = &v86;
  v161 = L"EnableFuzzing";
  v162 = &v66;
  v164 = &v87;
  v168 = L"InternalDiagnosticsBufferSize";
  v169 = &v57;
  v171 = &v88;
  v175 = L"InternalDiagnosticsBufferMultiplier";
  v176 = &v59;
  v178 = &v77;
  v182 = L"ExternalDiagnosticsBufferSize";
  v183 = &v58;
  v185 = &v89;
  v189 = L"ExternalDiagnosticsBufferMultiplier";
  v190 = &v61;
  v192 = &v78;
  v196 = L"DiagnosticsBufferExpansionTime";
  v144 = 4;
  v145 = 0LL;
  v146 = 288;
  v149 = 67108868;
  v151 = 4;
  v152 = 0LL;
  v153 = 288;
  v156 = 67108868;
  v158 = 4;
  v159 = 0LL;
  v160 = 288;
  v163 = 67108868;
  v165 = 4;
  v166 = 0LL;
  v167 = 288;
  v170 = 67108868;
  v172 = 4;
  v173 = 0LL;
  v174 = 288;
  v177 = 67108868;
  v179 = 4;
  v180 = 0LL;
  v181 = 288;
  v184 = 67108868;
  v186 = 4;
  v187 = 0LL;
  v188 = 288;
  v191 = 67108868;
  v193 = 4;
  v194 = 0LL;
  v195 = 288;
  v197 = &v60;
  v199 = &v90;
  v203 = L"RapidHpdTimeoutInMilliseconds";
  v204 = &v72;
  v206 = &v91;
  v210 = L"RapidHpdMaxChainInMilliseconds";
  v211 = &v73;
  v213 = &v92;
  v217 = L"ForceUsb4MonitorSupport";
  v218 = &g_bDbgForceUsb4MonitorSupport;
  v224 = L"Usb4MonitorTargetId";
  v225 = &g_DbgUsb4MonitorTargetId;
  v231 = L"Usb4MonitorDpcdUSB4_Driver_ID";
  v232 = &g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
  v238 = L"Usb4MonitorDpcdDP_IN_Adapter_Number";
  v239 = &g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
  v245 = L"Usb4MonitorPowerOnDelayInSeconds";
  v246 = &g_DbgUsb4MonitorPowerOnDelayInSeconds;
  v252 = L"TreatUsb4MonitorAsNormal";
  v253 = &g_bDbgTreatUsb4MonitorAsNormal;
  v198 = 67108868;
  v200 = 4;
  v201 = 0LL;
  v202 = 288;
  v205 = 67108868;
  v207 = 4;
  v208 = 0LL;
  v209 = 288;
  v212 = 67108868;
  v214 = 4;
  v215 = 0LL;
  v216 = 288;
  v219 = 67108868;
  v220 = 0LL;
  v221 = 0;
  v222 = 0LL;
  v223 = 288;
  v226 = 67108868;
  v227 = 0LL;
  v228 = 0;
  v229 = 0LL;
  v230 = 288;
  v233 = 67108868;
  v234 = 0LL;
  v235 = 0;
  v236 = 0LL;
  v237 = 288;
  v240 = 67108868;
  v241 = 0LL;
  v242 = 0;
  v243 = 0LL;
  v244 = 288;
  v247 = 67108868;
  v248 = 0LL;
  v249 = 0;
  v250 = 0LL;
  v251 = 288;
  v254 = 67108868;
  v255 = 0LL;
  v256 = 0;
  v257 = 0LL;
  v258 = 288;
  v261 = 67108868;
  v265 = 288;
  v259 = L"AllowAdvancedEtwLogging";
  v268 = 67108868;
  v260 = &v74;
  v262 = 0LL;
  v263 = 0;
  v266 = L"NodeUsageTelemetryTimerInterval";
  v267 = &v75;
  v264 = 0LL;
  v269 = 0LL;
  v270 = 0;
  v271 = 0LL;
  v272 = 0;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v96, 0LL, 0LL) < 0 )
  {
    *(_QWORD *)(v1 + 880) = 0x4000000LL;
    *(_DWORD *)(v1 + 1332) = 32;
    *(_BYTE *)(v1 + 888) = 0;
    *(_DWORD *)(v1 + 1328) = 1;
    *(_DWORD *)(v1 + 1616) = 0;
    *(_DWORD *)(v1 + 1632) = 0;
  }
  else
  {
    *(_QWORD *)(v1 + 880) = v64;
    *(_BYTE *)(v1 + 888) = v65 != 0;
    *(_BYTE *)(v1 + 304802) = v66 != 0;
    v21 = 1;
    if ( v63 < 2 )
      v21 = v63;
    *(_DWORD *)(v1 + 1328) = v21;
    v22 = v62;
    if ( v62 >= 4 )
    {
      if ( v62 > 0x400 )
      {
        v22 = 1024;
        v62 = 1024;
      }
    }
    else
    {
      v22 = 4;
      v62 = 4;
    }
    *(_DWORD *)(v1 + 1332) = v22;
    *(_DWORD *)(v1 + 1616) = v67;
    *(_DWORD *)(v1 + 1632) = v68;
    *(_BYTE *)(v1 + 304801) = v69 == 1;
    *(_BYTE *)(v1 + 304856) = v70 != 0;
    *(_BYTE *)(v1 + 304857) = v71 != 0;
    if ( v72 )
      *(_DWORD *)(v1 + 305568) = v72;
    if ( v73 )
      *(_DWORD *)(v1 + 305572) = v73;
    if ( !g_IsInternalRelease && !g_OSTestSigningEnabled )
    {
      g_bDbgForceUsb4MonitorSupport = 0;
      g_bDbgTreatUsb4MonitorAsNormal = 0;
      g_DbgUsb4MonitorPowerOnDelayInSeconds = 0;
    }
    *(_BYTE *)(v1 + 305640) = v74 != 0;
    *(_DWORD *)(v1 + 305848) = v75;
    DXGGLOBAL::SetNodeUsageTelemetryTimer((DXGGLOBAL *)v1);
  }
  *(_DWORD *)(v1 + 872) = 0;
  v23 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v76 = 0;
  v278[0] = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v94.Length = 9830548LL;
  v24 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v93.Length = 2228256LL;
  v278[1] = v23;
  v25 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v278[2] = v24;
  v26 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  v278[3] = v25;
  v27 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  v278[4] = v26;
  v28 = *(_OWORD *)L"erminal Server\\WinStations";
  v278[5] = v27;
  v278[6] = v28;
  v278[7] = *(_OWORD *)L"Server\\WinStations";
  v29 = *(_DWORD *)L"ns";
  v278[8] = *(_OWORD *)L"inStations";
  v279 = v29;
  v280 = aRegistryMachin_13[74];
  v94.Buffer = (wchar_t *)v278;
  v277 = aDwmframeinterv[16];
  v93.Buffer = (wchar_t *)v276;
  v276[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v276[1] = *(_OWORD *)L"INTERVAL";
  if ( ReadRegistryDwordKeyValue(&v94, &v93, &v76) >= 0 && v76 )
    *(_DWORD *)(v1 + 305120) = v76;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v14 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    WdLogSingleEntry1(3LL, DxgkSharedObjectTypes);
    WdLogGlobalForLineNumber = 2143;
    return v14;
  }
  v32 = v59;
  if ( !v59 || ((v59 - 1) & v59) != 0 )
  {
    v32 = v77;
    v59 = v77;
  }
  v33 = v61;
  if ( !v61 || ((v61 - 1) & v61) != 0 )
  {
    v33 = v78;
    v61 = v78;
  }
  if ( !g_OSTestSigningEnabled )
  {
    if ( v57 < 0x1000 || v57 * v32 > 0x1000000 )
    {
      v57 = 0x1000000;
      v59 = 1;
    }
    if ( v58 < 0x1000 || v58 * v33 > 0x1000000 )
    {
      v58 = 0x1000000;
      v61 = 1;
    }
  }
  if ( v60 > 0xE10 )
    v60 = 3600;
  v34 = (-(__int64)(g_IsInternalReleaseOrDbg != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v35 = operator new(0x70uLL, 0x4B677844u, v34, v31);
  if ( v35 )
    v37 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v35, v57, v59, v34, v60);
  else
    v37 = 0LL;
  *(_QWORD *)(v1 + 928) = v37;
  v38 = operator new(0x70uLL, 0x4B677844u, v34, v36);
  if ( v38 )
    v40 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v38, v58, v61, v34, v60);
  else
    v40 = 0LL;
  *(_QWORD *)(v1 + 936) = v40;
  if ( !*(_QWORD *)(v1 + 928) )
  {
    WdLogSingleEntry1(6LL, v57);
    WdLogGlobalForLineNumber = 2197;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for internal diagnostics buffers (SmallInternalDiagnosticsSize = 0x%I64x).",
      v57,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( !v40 )
  {
    WdLogSingleEntry1(6LL, v58);
    WdLogGlobalForLineNumber = 2203;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for external diagnostics buffers (SmallExternalDiagnosticsSize = 0x%I64x).",
      v58,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v41 = (DXGSESSIONMGR *)operator new(0x1C0uLL, 0x4B677844u, 64LL, v39);
  if ( v41 )
    v43 = DXGSESSIONMGR::DXGSESSIONMGR(v41);
  else
    v43 = 0LL;
  *(_QWORD *)(v1 + 944) = v43;
  if ( !v43 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2210;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for dxgkrnl session manager.",
      2210LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v44 = *(_DWORD *)(v1 + 1332);
  v45 = (unsigned int)(v44 + 31) >> 5;
  v46 = 4LL * ((unsigned int)v45 + ((unsigned int)(1055 - v44) >> 5));
  if ( !is_mul_ok((unsigned int)v45 + ((unsigned int)(1055 - v44) >> 5), 4uLL) )
    v46 = -1LL;
  v47 = (ULONG *)operator new[](v46, 0x4B677844u, 256LL, v42);
  *(_QWORD *)(v1 + 864) = v47;
  if ( !v47 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2219;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for dxgkrnl adapter ordinal bits.",
      2219LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 832), v47, *(_DWORD *)(v1 + 1332));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 848), (PULONG)(*(_QWORD *)(v1 + 864) + 4 * v45), 1024 - *(_DWORD *)(v1 + 1332));
  if ( DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)(v1 + 1336), 0LL, 0LL, 0, 0LL) < 0 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2233;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for system process.",
      2233LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( PsInitialSystemProcess != *(PEPROCESS *)(*(_QWORD *)(v1 + 1336) + 56LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2236;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"PsInitialSystemProcess == m_pSystemDxgProcess->GetEProcess()",
      2236LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v49 = operator new(0x280uLL, 0x4B677844u, 256LL, v48);
  v50 = (_BYTE *)v49;
  if ( v49 )
  {
    *(_BYTE *)v49 = 1;
    *(_QWORD *)(v49 + 16) = 0LL;
    *(_QWORD *)(v49 + 24) = 0LL;
    *(_QWORD *)(v49 + 32) = 0LL;
    *(_DWORD *)(v49 + 40) = 0;
    *(_DWORD *)(v49 + 44) = 69;
    *(_DWORD *)(v49 + 48) = 1;
    *(_DWORD *)(v49 + 632) = 0;
    memset((void *)(v49 + 56), 0, 0x240uLL);
    *v50 = 0;
  }
  else
  {
    v50 = 0LL;
  }
  *(_QWORD *)(v1 + 1432) = v50;
  if ( !v50 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2241;
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, L"Failed to Qdc cache.", 2241LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  KeInitializeSpinLock(&qword_14015D9D0);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1620));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1872));
  KeInitializeDpc((PRKDPC)(v1 + 1936), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, (PVOID)v1);
  LOBYTE(OutputBuffer) = 0;
  v51 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  if ( v51 >= 0 )
  {
    if ( (_BYTE)OutputBuffer )
      DXGGLOBAL::SubscribeWNFForCSAccounting((PVOID *)v1);
  }
  else
  {
    v52 = v51;
    WdLogSingleEntry1(2LL, v51);
    WdLogGlobalForLineNumber = 2278;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get the platformInformation. Status : 0x%I64x",
      v52,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v1 + 2024) = v1;
  *(_QWORD *)(v1 + 2016) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *(_QWORD *)(v1 + 2000) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *(_DWORD *)(v1 + 304788) &= ~1u;
  *(_DWORD *)(v1 + 304776) = 10;
  *(_DWORD *)(v1 + 304780) = 50;
  *(_DWORD *)(v1 + 304784) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 1720));
  DisplayDiagnostics::Initialize((PVOID *)(v1 + 304928));
  v53 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          (PVOID)v1,
          0LL);
  v7 = v53;
  if ( v53 < 0 )
  {
    WdLogSingleEntry1(2LL, v53);
    WdLogGlobalForLineNumber = 2315;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PoRegisterPowerSettingCallback for GUID_HDR_DISPLAY_QUALITY_BIAS failed with status:0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
  v54 = PoRegisterPowerSettingCallback(0LL, &GUID_ACDC_POWER_SOURCE, DXGGLOBAL::AcDcPowerSourceCallback, (PVOID)v1, 0LL);
  v55 = v54;
  if ( v54 < 0 )
  {
    WdLogSingleEntry1(2LL, v54);
    WdLogGlobalForLineNumber = 2325;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PoRegisterPowerSettingCallback for GUID_ACDC_POWER_SOURCE failed with status:0x%I64x",
      v55,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v55;
}
