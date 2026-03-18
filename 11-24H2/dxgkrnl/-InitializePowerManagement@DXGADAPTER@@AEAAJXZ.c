/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14035B368
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1400332C4 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140066264 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14018EA10 (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14019965C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x14019F180 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x140235B3C (DpiEnablePowerManagement.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x14036B980 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r13d
  bool v7; // cc
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int NumDifferentPhysicalAdapters; // r12d
  unsigned int v15; // edx
  __int64 v16; // rax
  DXGADAPTER *v17; // rcx
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  const wchar_t *v24; // r9
  __int64 v25; // rax
  char *v26; // r14
  unsigned int v27; // esi
  unsigned int v28; // ebx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int16 v35; // dx
  __int64 v36; // rsi
  __int64 v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // r12
  const wchar_t *v40; // r9
  int v41; // eax
  void *v42; // rcx
  char *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // r8d
  unsigned int v47; // r9d
  unsigned int v48; // ecx
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // edx
  unsigned int j; // r8d
  __int64 v56; // r10
  __int64 v57; // r9
  unsigned int v58; // edx
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // rbx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rsi
  unsigned int v68; // eax
  __int64 v69; // rax
  unsigned int v70; // ecx
  __int64 v71; // rdx
  __int64 v72; // rax
  void *v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // edx
  __int64 v76; // r8
  __int64 v77; // r10
  __int64 v78; // rax
  unsigned int v79; // ebx
  __int64 v80; // r9
  unsigned int k; // ecx
  __int64 v82; // r10
  __int64 v83; // rsi
  unsigned int v84; // r11d
  __int64 v85; // r12
  __int64 v86; // rbx
  __int64 v87; // rbx
  __int64 v88; // rbx
  ADAPTER_RENDER *v89; // rcx
  int v90; // eax
  __int64 v91; // r15
  const wchar_t *v92; // r9
  ADAPTER_DISPLAY *v93; // rcx
  int v94; // eax
  int v95; // eax
  ULONG TimeIncrement; // eax
  __int64 v97; // rcx
  unsigned __int64 v98; // r9
  __int64 v99; // rax
  unsigned __int64 v100; // rtt
  __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  unsigned __int64 v111; // rtt
  __int64 v112; // rax
  unsigned __int64 v113; // rtt
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  unsigned __int64 v117; // rtt
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // r12
  __int64 v137; // rsi
  __int64 v138; // rbx
  DXGADAPTER *v139; // rdx
  int v140; // ecx
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  DXGADAPTER *v146; // rcx
  unsigned int v147; // edx
  __int64 v148; // r8
  DXGADAPTER **v149; // rcx
  __int64 v150; // rax
  DXGADAPTER **v151; // rcx
  unsigned __int64 v152; // rcx
  unsigned int v153; // eax
  unsigned __int64 *v154; // rdx
  __int64 v155; // r8
  unsigned __int64 v156; // rax
  unsigned int i; // edx
  unsigned int v158; // edx
  __int64 v159; // r8
  __int64 v160; // rcx
  __int64 v161; // rax
  struct _SLIST_ENTRY *v162; // rbx
  __int64 v163; // rsi
  NTSTATUS v164; // eax
  int v165; // eax
  __int64 v166; // rcx
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  char v168; // [rsp+58h] [rbp-B0h]
  unsigned int v169; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v170; // [rsp+60h] [rbp-A8h]
  BOOL v171; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v172; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v173; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v174; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v175; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v176; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v177; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v178; // [rsp+80h] [rbp-88h]
  int v179; // [rsp+84h] [rbp-84h]
  unsigned int v180; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v181; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v182; // [rsp+90h] [rbp-78h] BYREF
  int v183; // [rsp+94h] [rbp-74h] BYREF
  int v184; // [rsp+98h] [rbp-70h] BYREF
  int v185; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v186; // [rsp+A0h] [rbp-68h] BYREF
  int v187; // [rsp+A4h] [rbp-64h] BYREF
  int v188; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v189; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v190; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v191; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v192; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v193; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v194; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v195; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v196; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v197; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v198; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v199; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v200; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v201; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v202; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v203; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v204; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v205; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v206; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v207; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v208; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v209; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v210; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v211; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v212; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v213; // [rsp+10Ch] [rbp+4h] BYREF
  unsigned int v214; // [rsp+110h] [rbp+8h] BYREF
  int v215; // [rsp+114h] [rbp+Ch] BYREF
  int v216; // [rsp+118h] [rbp+10h] BYREF
  int v217; // [rsp+11Ch] [rbp+14h] BYREF
  int v218; // [rsp+120h] [rbp+18h] BYREF
  int v219; // [rsp+124h] [rbp+1Ch] BYREF
  int v220; // [rsp+128h] [rbp+20h] BYREF
  int v221; // [rsp+12Ch] [rbp+24h] BYREF
  int v222; // [rsp+130h] [rbp+28h] BYREF
  int v223; // [rsp+134h] [rbp+2Ch] BYREF
  int v224; // [rsp+138h] [rbp+30h] BYREF
  int v225; // [rsp+13Ch] [rbp+34h] BYREF
  int v226; // [rsp+140h] [rbp+38h] BYREF
  int v227; // [rsp+144h] [rbp+3Ch] BYREF
  int v228; // [rsp+148h] [rbp+40h] BYREF
  int v229; // [rsp+14Ch] [rbp+44h] BYREF
  int v230; // [rsp+150h] [rbp+48h] BYREF
  int v231; // [rsp+154h] [rbp+4Ch] BYREF
  int v232; // [rsp+158h] [rbp+50h] BYREF
  int v233; // [rsp+15Ch] [rbp+54h] BYREF
  int v234; // [rsp+160h] [rbp+58h] BYREF
  int v235; // [rsp+164h] [rbp+5Ch] BYREF
  int v236; // [rsp+168h] [rbp+60h] BYREF
  int v237; // [rsp+16Ch] [rbp+64h] BYREF
  int v238; // [rsp+170h] [rbp+68h] BYREF
  int v239; // [rsp+174h] [rbp+6Ch] BYREF
  int v240; // [rsp+178h] [rbp+70h] BYREF
  int v241; // [rsp+17Ch] [rbp+74h] BYREF
  int v242; // [rsp+180h] [rbp+78h] BYREF
  int v243; // [rsp+184h] [rbp+7Ch] BYREF
  int v244; // [rsp+188h] [rbp+80h] BYREF
  int v245; // [rsp+18Ch] [rbp+84h] BYREF
  int v246; // [rsp+190h] [rbp+88h] BYREF
  int v247; // [rsp+194h] [rbp+8Ch] BYREF
  int v248; // [rsp+198h] [rbp+90h] BYREF
  int v249; // [rsp+19Ch] [rbp+94h] BYREF
  int v250; // [rsp+1A0h] [rbp+98h] BYREF
  int v251; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v252; // [rsp+1A8h] [rbp+A0h] BYREF
  int v253; // [rsp+1ACh] [rbp+A4h] BYREF
  int v254; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v255; // [rsp+1B4h] [rbp+ACh] BYREF
  __int64 v256; // [rsp+1B8h] [rbp+B0h]
  void *v257; // [rsp+1C0h] [rbp+B8h]
  __int64 v258; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v259; // [rsp+1D0h] [rbp+C8h]
  struct _DXGKARG_QUERYADAPTERINFO v260; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v261; // [rsp+208h] [rbp+100h]
  __int64 v262; // [rsp+210h] [rbp+108h]
  struct _DXGKARG_QUERYADAPTERINFO v263; // [rsp+218h] [rbp+110h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+248h] [rbp+140h] BYREF
  __int64 v265; // [rsp+278h] [rbp+170h] BYREF
  int v266; // [rsp+280h] [rbp+178h]
  const wchar_t *v267; // [rsp+288h] [rbp+180h]
  BOOL *v268; // [rsp+290h] [rbp+188h]
  int v269; // [rsp+298h] [rbp+190h]
  int *v270; // [rsp+2A0h] [rbp+198h]
  int v271; // [rsp+2A8h] [rbp+1A0h]
  __int64 v272; // [rsp+2B0h] [rbp+1A8h]
  int v273; // [rsp+2B8h] [rbp+1B0h]
  __int64 v274; // [rsp+2C0h] [rbp+1B8h]
  __int128 v275; // [rsp+2C8h] [rbp+1C0h]
  __int128 v276; // [rsp+2D8h] [rbp+1D0h]
  __int64 v277; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v278; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v279; // [rsp+2F8h] [rbp+1F0h]
  BOOL *v280; // [rsp+300h] [rbp+1F8h]
  int v281; // [rsp+308h] [rbp+200h]
  int *v282; // [rsp+310h] [rbp+208h]
  int v283; // [rsp+318h] [rbp+210h]
  __int64 v284; // [rsp+320h] [rbp+218h]
  int v285; // [rsp+328h] [rbp+220h]
  __int64 v286; // [rsp+330h] [rbp+228h]
  __int128 v287; // [rsp+338h] [rbp+230h]
  __int128 v288; // [rsp+348h] [rbp+240h]
  __int64 v289; // [rsp+358h] [rbp+250h] BYREF
  int v290; // [rsp+360h] [rbp+258h]
  const wchar_t *v291; // [rsp+368h] [rbp+260h]
  int *v292; // [rsp+370h] [rbp+268h]
  int v293; // [rsp+378h] [rbp+270h]
  int *v294; // [rsp+380h] [rbp+278h]
  int v295; // [rsp+388h] [rbp+280h]
  __int64 v296; // [rsp+390h] [rbp+288h]
  int v297; // [rsp+398h] [rbp+290h]
  const wchar_t *v298; // [rsp+3A0h] [rbp+298h]
  int *v299; // [rsp+3A8h] [rbp+2A0h]
  int v300; // [rsp+3B0h] [rbp+2A8h]
  int *v301; // [rsp+3B8h] [rbp+2B0h]
  int v302; // [rsp+3C0h] [rbp+2B8h]
  __int64 v303; // [rsp+3C8h] [rbp+2C0h]
  int v304; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v305; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v306; // [rsp+3E0h] [rbp+2D8h]
  int v307; // [rsp+3E8h] [rbp+2E0h]
  int *v308; // [rsp+3F0h] [rbp+2E8h]
  int v309; // [rsp+3F8h] [rbp+2F0h]
  __int64 v310; // [rsp+400h] [rbp+2F8h]
  int v311; // [rsp+408h] [rbp+300h]
  const wchar_t *v312; // [rsp+410h] [rbp+308h]
  unsigned int *v313; // [rsp+418h] [rbp+310h]
  int v314; // [rsp+420h] [rbp+318h]
  int *v315; // [rsp+428h] [rbp+320h]
  int v316; // [rsp+430h] [rbp+328h]
  __int64 v317; // [rsp+438h] [rbp+330h]
  int v318; // [rsp+440h] [rbp+338h]
  const wchar_t *v319; // [rsp+448h] [rbp+340h]
  unsigned int *v320; // [rsp+450h] [rbp+348h]
  int v321; // [rsp+458h] [rbp+350h]
  int *v322; // [rsp+460h] [rbp+358h]
  int v323; // [rsp+468h] [rbp+360h]
  __int64 v324; // [rsp+470h] [rbp+368h]
  int v325; // [rsp+478h] [rbp+370h]
  const wchar_t *v326; // [rsp+480h] [rbp+378h]
  unsigned int *v327; // [rsp+488h] [rbp+380h]
  int v328; // [rsp+490h] [rbp+388h]
  int *v329; // [rsp+498h] [rbp+390h]
  int v330; // [rsp+4A0h] [rbp+398h]
  __int64 v331; // [rsp+4A8h] [rbp+3A0h]
  int v332; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v333; // [rsp+4B8h] [rbp+3B0h]
  unsigned int *v334; // [rsp+4C0h] [rbp+3B8h]
  int v335; // [rsp+4C8h] [rbp+3C0h]
  int *v336; // [rsp+4D0h] [rbp+3C8h]
  int v337; // [rsp+4D8h] [rbp+3D0h]
  __int64 v338; // [rsp+4E0h] [rbp+3D8h]
  int v339; // [rsp+4E8h] [rbp+3E0h]
  const wchar_t *v340; // [rsp+4F0h] [rbp+3E8h]
  unsigned int *v341; // [rsp+4F8h] [rbp+3F0h]
  int v342; // [rsp+500h] [rbp+3F8h]
  int *v343; // [rsp+508h] [rbp+400h]
  int v344; // [rsp+510h] [rbp+408h]
  __int64 v345; // [rsp+518h] [rbp+410h]
  int v346; // [rsp+520h] [rbp+418h]
  const wchar_t *v347; // [rsp+528h] [rbp+420h]
  unsigned int *v348; // [rsp+530h] [rbp+428h]
  int v349; // [rsp+538h] [rbp+430h]
  int *v350; // [rsp+540h] [rbp+438h]
  int v351; // [rsp+548h] [rbp+440h]
  __int64 v352; // [rsp+550h] [rbp+448h]
  int v353; // [rsp+558h] [rbp+450h]
  const wchar_t *v354; // [rsp+560h] [rbp+458h]
  unsigned int *v355; // [rsp+568h] [rbp+460h]
  int v356; // [rsp+570h] [rbp+468h]
  int *v357; // [rsp+578h] [rbp+470h]
  int v358; // [rsp+580h] [rbp+478h]
  __int64 v359; // [rsp+588h] [rbp+480h]
  int v360; // [rsp+590h] [rbp+488h]
  const wchar_t *v361; // [rsp+598h] [rbp+490h]
  int *v362; // [rsp+5A0h] [rbp+498h]
  int v363; // [rsp+5A8h] [rbp+4A0h]
  int *v364; // [rsp+5B0h] [rbp+4A8h]
  int v365; // [rsp+5B8h] [rbp+4B0h]
  __int64 v366; // [rsp+5C0h] [rbp+4B8h]
  int v367; // [rsp+5C8h] [rbp+4C0h]
  const wchar_t *v368; // [rsp+5D0h] [rbp+4C8h]
  unsigned int *v369; // [rsp+5D8h] [rbp+4D0h]
  int v370; // [rsp+5E0h] [rbp+4D8h]
  int *v371; // [rsp+5E8h] [rbp+4E0h]
  int v372; // [rsp+5F0h] [rbp+4E8h]
  __int64 v373; // [rsp+5F8h] [rbp+4F0h]
  int v374; // [rsp+600h] [rbp+4F8h]
  const wchar_t *v375; // [rsp+608h] [rbp+500h]
  int *v376; // [rsp+610h] [rbp+508h]
  int v377; // [rsp+618h] [rbp+510h]
  int *v378; // [rsp+620h] [rbp+518h]
  int v379; // [rsp+628h] [rbp+520h]
  __int64 v380; // [rsp+630h] [rbp+528h]
  int v381; // [rsp+638h] [rbp+530h]
  const wchar_t *v382; // [rsp+640h] [rbp+538h]
  unsigned int *v383; // [rsp+648h] [rbp+540h]
  int v384; // [rsp+650h] [rbp+548h]
  int *v385; // [rsp+658h] [rbp+550h]
  int v386; // [rsp+660h] [rbp+558h]
  __int64 v387; // [rsp+668h] [rbp+560h]
  int v388; // [rsp+670h] [rbp+568h]
  const wchar_t *v389; // [rsp+678h] [rbp+570h]
  unsigned int *v390; // [rsp+680h] [rbp+578h]
  int v391; // [rsp+688h] [rbp+580h]
  int *v392; // [rsp+690h] [rbp+588h]
  int v393; // [rsp+698h] [rbp+590h]
  __int64 v394; // [rsp+6A0h] [rbp+598h]
  int v395; // [rsp+6A8h] [rbp+5A0h]
  const wchar_t *v396; // [rsp+6B0h] [rbp+5A8h]
  unsigned int *v397; // [rsp+6B8h] [rbp+5B0h]
  int v398; // [rsp+6C0h] [rbp+5B8h]
  int *v399; // [rsp+6C8h] [rbp+5C0h]
  int v400; // [rsp+6D0h] [rbp+5C8h]
  __int64 v401; // [rsp+6D8h] [rbp+5D0h]
  int v402; // [rsp+6E0h] [rbp+5D8h]
  const wchar_t *v403; // [rsp+6E8h] [rbp+5E0h]
  unsigned int *v404; // [rsp+6F0h] [rbp+5E8h]
  int v405; // [rsp+6F8h] [rbp+5F0h]
  int *v406; // [rsp+700h] [rbp+5F8h]
  int v407; // [rsp+708h] [rbp+600h]
  __int64 v408; // [rsp+710h] [rbp+608h]
  int v409; // [rsp+718h] [rbp+610h]
  const wchar_t *v410; // [rsp+720h] [rbp+618h]
  unsigned int *v411; // [rsp+728h] [rbp+620h]
  int v412; // [rsp+730h] [rbp+628h]
  int *v413; // [rsp+738h] [rbp+630h]
  int v414; // [rsp+740h] [rbp+638h]
  __int64 v415; // [rsp+748h] [rbp+640h]
  int v416; // [rsp+750h] [rbp+648h]
  const wchar_t *v417; // [rsp+758h] [rbp+650h]
  unsigned int *v418; // [rsp+760h] [rbp+658h]
  int v419; // [rsp+768h] [rbp+660h]
  int *v420; // [rsp+770h] [rbp+668h]
  int v421; // [rsp+778h] [rbp+670h]
  __int64 v422; // [rsp+780h] [rbp+678h]
  int v423; // [rsp+788h] [rbp+680h]
  const wchar_t *v424; // [rsp+790h] [rbp+688h]
  unsigned int *v425; // [rsp+798h] [rbp+690h]
  int v426; // [rsp+7A0h] [rbp+698h]
  int *v427; // [rsp+7A8h] [rbp+6A0h]
  int v428; // [rsp+7B0h] [rbp+6A8h]
  __int64 v429; // [rsp+7B8h] [rbp+6B0h]
  int v430; // [rsp+7C0h] [rbp+6B8h]
  const wchar_t *v431; // [rsp+7C8h] [rbp+6C0h]
  unsigned int *v432; // [rsp+7D0h] [rbp+6C8h]
  int v433; // [rsp+7D8h] [rbp+6D0h]
  int *v434; // [rsp+7E0h] [rbp+6D8h]
  int v435; // [rsp+7E8h] [rbp+6E0h]
  __int64 v436; // [rsp+7F0h] [rbp+6E8h]
  int v437; // [rsp+7F8h] [rbp+6F0h]
  const wchar_t *v438; // [rsp+800h] [rbp+6F8h]
  int *v439; // [rsp+808h] [rbp+700h]
  int v440; // [rsp+810h] [rbp+708h]
  int *v441; // [rsp+818h] [rbp+710h]
  int v442; // [rsp+820h] [rbp+718h]
  __int64 v443; // [rsp+828h] [rbp+720h]
  int v444; // [rsp+830h] [rbp+728h]
  const wchar_t *v445; // [rsp+838h] [rbp+730h]
  int *v446; // [rsp+840h] [rbp+738h]
  int v447; // [rsp+848h] [rbp+740h]
  int *v448; // [rsp+850h] [rbp+748h]
  int v449; // [rsp+858h] [rbp+750h]
  __int64 v450; // [rsp+860h] [rbp+758h]
  int v451; // [rsp+868h] [rbp+760h]
  const wchar_t *v452; // [rsp+870h] [rbp+768h]
  int *v453; // [rsp+878h] [rbp+770h]
  int v454; // [rsp+880h] [rbp+778h]
  int *v455; // [rsp+888h] [rbp+780h]
  int v456; // [rsp+890h] [rbp+788h]
  __int64 v457; // [rsp+898h] [rbp+790h]
  int v458; // [rsp+8A0h] [rbp+798h]
  const wchar_t *v459; // [rsp+8A8h] [rbp+7A0h]
  unsigned int *v460; // [rsp+8B0h] [rbp+7A8h]
  int v461; // [rsp+8B8h] [rbp+7B0h]
  int *v462; // [rsp+8C0h] [rbp+7B8h]
  int v463; // [rsp+8C8h] [rbp+7C0h]
  __int64 v464; // [rsp+8D0h] [rbp+7C8h]
  int v465; // [rsp+8D8h] [rbp+7D0h]
  const wchar_t *v466; // [rsp+8E0h] [rbp+7D8h]
  unsigned int *v467; // [rsp+8E8h] [rbp+7E0h]
  int v468; // [rsp+8F0h] [rbp+7E8h]
  int *v469; // [rsp+8F8h] [rbp+7F0h]
  int v470; // [rsp+900h] [rbp+7F8h]
  __int64 v471; // [rsp+908h] [rbp+800h]
  int v472; // [rsp+910h] [rbp+808h]
  const wchar_t *v473; // [rsp+918h] [rbp+810h]
  unsigned int *v474; // [rsp+920h] [rbp+818h]
  int v475; // [rsp+928h] [rbp+820h]
  int *v476; // [rsp+930h] [rbp+828h]
  int v477; // [rsp+938h] [rbp+830h]
  __int64 v478; // [rsp+940h] [rbp+838h]
  int v479; // [rsp+948h] [rbp+840h]
  const wchar_t *v480; // [rsp+950h] [rbp+848h]
  unsigned int *v481; // [rsp+958h] [rbp+850h]
  int v482; // [rsp+960h] [rbp+858h]
  int *v483; // [rsp+968h] [rbp+860h]
  int v484; // [rsp+970h] [rbp+868h]
  __int64 v485; // [rsp+978h] [rbp+870h]
  int v486; // [rsp+980h] [rbp+878h]
  const wchar_t *v487; // [rsp+988h] [rbp+880h]
  unsigned int *v488; // [rsp+990h] [rbp+888h]
  int v489; // [rsp+998h] [rbp+890h]
  int *v490; // [rsp+9A0h] [rbp+898h]
  int v491; // [rsp+9A8h] [rbp+8A0h]
  __int64 v492; // [rsp+9B0h] [rbp+8A8h]
  int v493; // [rsp+9B8h] [rbp+8B0h]
  const wchar_t *v494; // [rsp+9C0h] [rbp+8B8h]
  unsigned int *v495; // [rsp+9C8h] [rbp+8C0h]
  int v496; // [rsp+9D0h] [rbp+8C8h]
  int *v497; // [rsp+9D8h] [rbp+8D0h]
  int v498; // [rsp+9E0h] [rbp+8D8h]
  __int64 v499; // [rsp+9E8h] [rbp+8E0h]
  int v500; // [rsp+9F0h] [rbp+8E8h]
  const wchar_t *v501; // [rsp+9F8h] [rbp+8F0h]
  unsigned int *v502; // [rsp+A00h] [rbp+8F8h]
  int v503; // [rsp+A08h] [rbp+900h]
  int *v504; // [rsp+A10h] [rbp+908h]
  int v505; // [rsp+A18h] [rbp+910h]
  __int64 v506; // [rsp+A20h] [rbp+918h]
  int v507; // [rsp+A28h] [rbp+920h]
  const wchar_t *v508; // [rsp+A30h] [rbp+928h]
  unsigned int *v509; // [rsp+A38h] [rbp+930h]
  int v510; // [rsp+A40h] [rbp+938h]
  int *v511; // [rsp+A48h] [rbp+940h]
  int v512; // [rsp+A50h] [rbp+948h]
  __int64 v513; // [rsp+A58h] [rbp+950h]
  int v514; // [rsp+A60h] [rbp+958h]
  const wchar_t *v515; // [rsp+A68h] [rbp+960h]
  unsigned int *v516; // [rsp+A70h] [rbp+968h]
  int v517; // [rsp+A78h] [rbp+970h]
  int *v518; // [rsp+A80h] [rbp+978h]
  int v519; // [rsp+A88h] [rbp+980h]
  __int64 v520; // [rsp+A90h] [rbp+988h]
  int v521; // [rsp+A98h] [rbp+990h]
  const wchar_t *v522; // [rsp+AA0h] [rbp+998h]
  unsigned int *v523; // [rsp+AA8h] [rbp+9A0h]
  int v524; // [rsp+AB0h] [rbp+9A8h]
  int *v525; // [rsp+AB8h] [rbp+9B0h]
  int v526; // [rsp+AC0h] [rbp+9B8h]
  __int64 v527; // [rsp+AC8h] [rbp+9C0h]
  int v528; // [rsp+AD0h] [rbp+9C8h]
  const wchar_t *v529; // [rsp+AD8h] [rbp+9D0h]
  unsigned int *v530; // [rsp+AE0h] [rbp+9D8h]
  int v531; // [rsp+AE8h] [rbp+9E0h]
  int *v532; // [rsp+AF0h] [rbp+9E8h]
  int v533; // [rsp+AF8h] [rbp+9F0h]
  __int64 v534; // [rsp+B00h] [rbp+9F8h]
  int v535; // [rsp+B08h] [rbp+A00h]
  const wchar_t *v536; // [rsp+B10h] [rbp+A08h]
  unsigned int *v537; // [rsp+B18h] [rbp+A10h]
  int v538; // [rsp+B20h] [rbp+A18h]
  int *v539; // [rsp+B28h] [rbp+A20h]
  int v540; // [rsp+B30h] [rbp+A28h]
  __int64 v541; // [rsp+B38h] [rbp+A30h]
  int v542; // [rsp+B40h] [rbp+A38h]
  const wchar_t *v543; // [rsp+B48h] [rbp+A40h]
  unsigned int *v544; // [rsp+B50h] [rbp+A48h]
  int v545; // [rsp+B58h] [rbp+A50h]
  int *v546; // [rsp+B60h] [rbp+A58h]
  int v547; // [rsp+B68h] [rbp+A60h]
  __int64 v548; // [rsp+B70h] [rbp+A68h]
  int v549; // [rsp+B78h] [rbp+A70h]
  const wchar_t *v550; // [rsp+B80h] [rbp+A78h]
  unsigned int *v551; // [rsp+B88h] [rbp+A80h]
  int v552; // [rsp+B90h] [rbp+A88h]
  int *v553; // [rsp+B98h] [rbp+A90h]
  int v554; // [rsp+BA0h] [rbp+A98h]
  __int64 v555; // [rsp+BA8h] [rbp+AA0h]
  int v556; // [rsp+BB0h] [rbp+AA8h]
  const wchar_t *v557; // [rsp+BB8h] [rbp+AB0h]
  unsigned int *v558; // [rsp+BC0h] [rbp+AB8h]
  int v559; // [rsp+BC8h] [rbp+AC0h]
  int *v560; // [rsp+BD0h] [rbp+AC8h]
  int v561; // [rsp+BD8h] [rbp+AD0h]
  __int64 v562; // [rsp+BE0h] [rbp+AD8h]
  int v563; // [rsp+BE8h] [rbp+AE0h]
  __int64 v564; // [rsp+BF0h] [rbp+AE8h]
  __int128 v565; // [rsp+BF8h] [rbp+AF0h]
  __int128 v566; // [rsp+C08h] [rbp+B00h]
  _DWORD v567[64]; // [rsp+C18h] [rbp+B10h] BYREF
  unsigned __int16 v568[264]; // [rsp+D18h] [rbp+C10h] BYREF

  v3 = (unsigned __int8 *)this + 2941;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_PowerManagementSupport,
      a3,
      this,
      *v3);
  if ( !*v3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4799;
    return 0LL;
  }
  v238 = 0;
  v217 = -1;
  v180 = -1;
  v218 = 2000;
  v221 = 35000;
  v191 = 35000;
  v181 = 2000;
  v223 = 50000;
  LODWORD(v5) = 0;
  v194 = 50000;
  v6 = 0;
  v222 = 2000;
  v224 = 100000;
  v195 = 100000;
  v229 = 300000;
  v213 = 300000;
  v230 = 17000;
  v212 = 17000;
  v225 = 200;
  v188 = 200;
  v226 = 200;
  v192 = 200;
  v228 = 100;
  v227 = 100;
  v231 = 25000;
  v214 = 25000;
  v233 = 300;
  v175 = 300;
  v234 = 700;
  v174 = 700;
  v235 = 900;
  v173 = 900;
  v236 = 500;
  v172 = 500;
  v242 = 140000;
  v201 = 140000;
  v243 = 200000;
  v203 = 200000;
  v244 = 250000;
  v204 = 250000;
  v245 = 250000;
  v205 = 250000;
  v193 = 2000;
  v232 = 2000;
  v196 = 2000;
  v246 = 10000;
  v219 = 80;
  v189 = 80;
  v220 = 15000;
  v190 = 15000;
  v237 = 3;
  v187 = 3;
  v185 = 0;
  v239 = 0;
  v186 = 0;
  v240 = 80;
  v197 = 80;
  v241 = 80000;
  v199 = 80000;
  v7 = *((_DWORD *)this + 751) < 2400;
  v198 = 10000;
  v247 = 60000;
  v200 = 60000;
  v248 = 60000;
  v202 = 60000;
  v250 = 30000;
  v207 = 30000;
  v253 = 30000;
  v210 = 30000;
  v182 = 1;
  v171 = 1;
  v215 = 1;
  v183 = 1;
  v249 = 15000;
  v206 = 15000;
  v252 = 15000;
  v209 = 15000;
  v254 = 80000;
  v211 = 80000;
  v251 = 80;
  v208 = 80;
  v216 = 0;
  v184 = 0;
  if ( v7 )
  {
    v267 = L"UseSelfRefreshVRAMInS3";
    v266 = 288;
    v269 = 67108868;
    v268 = &v171;
    v265 = 0LL;
    v270 = &v182;
    v271 = 4;
    v272 = 0LL;
    v273 = 0;
    v274 = 0LL;
    v275 = 0LL;
    v276 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v265, 0LL, 0LL);
  }
  else
  {
    v171 = (*((_DWORD *)this + 617) & 0x1000) == 0;
  }
  v289 = 0LL;
  v291 = L"EnableRuntimePowerManagement";
  v292 = &v183;
  v294 = &v215;
  v298 = L"DisableDevicePowerRequired";
  v299 = &v184;
  v301 = &v216;
  v305 = L"DefaultLatencyToleranceOther";
  v306 = &v180;
  v308 = &v217;
  v312 = L"DefaultExpectedResidency";
  v313 = &v181;
  v315 = &v218;
  v319 = L"DefaultLatencyToleranceIdle0";
  v320 = &v189;
  v322 = &v219;
  v326 = L"DefaultLatencyToleranceIdle1";
  v327 = &v190;
  v329 = &v220;
  v333 = L"DefaultLatencyToleranceNoContext";
  v334 = &v191;
  v336 = &v221;
  v340 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v341 = &v193;
  v343 = &v222;
  v290 = 288;
  v293 = 67108868;
  v295 = 4;
  v296 = 0LL;
  v297 = 288;
  v300 = 67108868;
  v302 = 4;
  v303 = 0LL;
  v304 = 288;
  v307 = 67108868;
  v309 = 4;
  v310 = 0LL;
  v311 = 288;
  v314 = 67108868;
  v316 = 4;
  v317 = 0LL;
  v318 = 288;
  v321 = 67108868;
  v323 = 4;
  v324 = 0LL;
  v325 = 288;
  v328 = 67108868;
  v330 = 4;
  v331 = 0LL;
  v332 = 288;
  v335 = 67108868;
  v337 = 4;
  v338 = 0LL;
  v339 = 288;
  v342 = 67108868;
  v344 = 4;
  v345 = 0LL;
  v346 = 288;
  v347 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v348 = &v194;
  v350 = &v223;
  v354 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v355 = &v195;
  v357 = &v224;
  v361 = L"DefaultLatencyToleranceTimerPeriod";
  v362 = &v188;
  v364 = &v225;
  v368 = L"DefaultIdleThresholdIdle0";
  v369 = &v192;
  v371 = &v226;
  v375 = L"DefaultIdleThresholdIdle0MonitorOff";
  v376 = &v227;
  v378 = &v228;
  v382 = L"MonitorLatencyTolerance";
  v383 = &v213;
  v385 = &v229;
  v389 = L"MonitorRefreshLatencyTolerance";
  v390 = &v212;
  v392 = &v230;
  v396 = L"DefaultPowerNotRequiredTimeout";
  v397 = &v214;
  v399 = &v231;
  v349 = 67108868;
  v351 = 4;
  v352 = 0LL;
  v353 = 288;
  v356 = 67108868;
  v358 = 4;
  v359 = 0LL;
  v360 = 288;
  v363 = 67108868;
  v365 = 4;
  v366 = 0LL;
  v367 = 288;
  v370 = 67108868;
  v372 = 4;
  v373 = 0LL;
  v374 = 288;
  v377 = 67108868;
  v379 = 4;
  v380 = 0LL;
  v381 = 288;
  v384 = 67108868;
  v386 = 4;
  v387 = 0LL;
  v388 = 288;
  v391 = 67108868;
  v393 = 4;
  v394 = 0LL;
  v395 = 288;
  v398 = 67108868;
  v400 = 4;
  v401 = 0LL;
  v402 = 288;
  v405 = 67108868;
  v403 = L"DefaultActiveIdleThreshold";
  v404 = &v196;
  v406 = &v232;
  v410 = L"ulow";
  v411 = &v175;
  v413 = &v233;
  v417 = L"uhigh";
  v418 = &v174;
  v420 = &v234;
  v424 = L"uglitch";
  v425 = &v173;
  v427 = &v235;
  v431 = L"uideal";
  v432 = &v172;
  v434 = &v236;
  v438 = L"lowdebounce";
  v439 = &v187;
  v441 = &v237;
  v445 = L"EnablePODebounce";
  v446 = &v185;
  v448 = &v238;
  v452 = L"DisablePStateManagement";
  v453 = &v186;
  v455 = &v239;
  v407 = 4;
  v408 = 0LL;
  v409 = 288;
  v412 = 67108868;
  v414 = 4;
  v415 = 0LL;
  v416 = 288;
  v419 = 67108868;
  v421 = 4;
  v422 = 0LL;
  v423 = 288;
  v426 = 67108868;
  v428 = 4;
  v429 = 0LL;
  v430 = 288;
  v433 = 67108868;
  v435 = 4;
  v436 = 0LL;
  v437 = 288;
  v440 = 67108868;
  v442 = 4;
  v443 = 0LL;
  v444 = 288;
  v447 = 67108868;
  v449 = 4;
  v450 = 0LL;
  v451 = 288;
  v454 = 67108868;
  v456 = 4;
  v457 = 0LL;
  v458 = 288;
  v459 = L"DefaultD3TransitionLatencyActivelyUsed";
  v460 = &v197;
  v462 = &v240;
  v466 = L"DefaultD3TransitionLatencyIdleShortTime";
  v467 = &v199;
  v469 = &v241;
  v473 = L"DefaultD3TransitionLatencyIdleLongTime";
  v474 = &v201;
  v476 = &v242;
  v480 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v481 = &v203;
  v483 = &v243;
  v487 = L"DefaultD3TransitionLatencyIdleNoContext";
  v488 = &v204;
  v490 = &v244;
  v494 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v495 = &v205;
  v497 = &v245;
  v501 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v502 = &v198;
  v504 = &v246;
  v508 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v509 = &v200;
  v511 = &v247;
  v515 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v461 = 67108868;
  v463 = 4;
  v464 = 0LL;
  v465 = 288;
  v468 = 67108868;
  v470 = 4;
  v471 = 0LL;
  v472 = 288;
  v475 = 67108868;
  v477 = 4;
  v478 = 0LL;
  v479 = 288;
  v482 = 67108868;
  v484 = 4;
  v485 = 0LL;
  v486 = 288;
  v489 = 67108868;
  v491 = 4;
  v492 = 0LL;
  v493 = 288;
  v496 = 67108868;
  v498 = 4;
  v499 = 0LL;
  v500 = 288;
  v503 = 67108868;
  v505 = 4;
  v506 = 0LL;
  v507 = 288;
  v510 = 67108868;
  v512 = 4;
  v513 = 0LL;
  v514 = 288;
  v517 = 67108868;
  v516 = &v202;
  v521 = 288;
  v518 = &v248;
  v524 = 67108868;
  v522 = L"DefaultLatencyToleranceMemory";
  v528 = 288;
  v523 = &v206;
  v525 = &v249;
  v529 = L"DefaultLatencyToleranceMemoryNoContext";
  v530 = &v207;
  v532 = &v250;
  v536 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v537 = &v208;
  v539 = &v251;
  v543 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v544 = &v209;
  v546 = &v252;
  v550 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v551 = &v210;
  v553 = &v253;
  v557 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v558 = &v211;
  v531 = 67108868;
  v535 = 288;
  v538 = 67108868;
  v542 = 288;
  v545 = 67108868;
  v549 = 288;
  v552 = 67108868;
  v556 = 288;
  v559 = 67108868;
  v560 = &v254;
  v519 = 4;
  v520 = 0LL;
  v526 = 4;
  v527 = 0LL;
  v533 = 4;
  v534 = 0LL;
  v540 = 4;
  v541 = 0LL;
  v547 = 4;
  v548 = 0LL;
  v554 = 4;
  v555 = 0LL;
  v561 = 4;
  v562 = 0LL;
  v563 = 0;
  v564 = 0LL;
  v565 = 0LL;
  v566 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v289, 0LL, 0LL);
  if ( *((int *)this + 751) < 2400 )
  {
    v9 = *((_QWORD *)this + 27);
    v258 = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v9, 2LL, &v258) >= 0
      && (int)RtlStringCbCopyW((char *)v568, 0x208uLL, *(char **)(v258 + 8)) >= 0
      && (int)RtlStringCbCatW(v568, v10, (char *)L"\\DxgkSettings") >= 0 )
    {
      v277 = 0LL;
      v278 = 288;
      v279 = L"UseSelfRefreshVRAMInS3";
      v281 = 67108868;
      v280 = &v171;
      v283 = 4;
      v282 = &v182;
      v284 = 0LL;
      v285 = 0;
      v286 = 0LL;
      v287 = 0LL;
      v288 = 0LL;
      RtlQueryRegistryValuesEx(0LL, v568, &v277, 0LL, 0LL);
    }
  }
  if ( !v183 )
    return 0LL;
  v11 = !v171;
  *((_BYTE *)this + 204) = v184 != 0;
  *((_BYTE *)this + 207) = !v11;
  v12 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL);
  if ( v13 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v169 = NumDifferentPhysicalAdapters;
  v15 = 0;
  v176 = 0;
  v16 = 0LL;
  while ( v15 < NumDifferentPhysicalAdapters )
  {
    v263.pOutputData = &v567[v16];
    memset(&v263, 0, 24);
    v263.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS;
    *(_OWORD *)&v263.OutputDataSize = 0LL;
    v263.OutputDataSize = 4;
    if ( DXGADAPTER::IsDxgmms2(this) && v13 >= 0x5019 )
    {
      v263.InputDataSize = 4;
      v263.pInputData = &v176;
    }
    v18 = DXGADAPTER::DdiQueryAdapterInfo(v17, &v263);
    v5 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v18);
      WdLogGlobalForLineNumber = 4996;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DdiQueryAdapterInfo failed. Adapter: 0x%p Status: 0x%I64x",
        (__int64)this,
        v5,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v5;
    }
    v6 += v567[v176];
    v15 = v176 + 1;
    v176 = v15;
    v16 = v15;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    LODWORD(ClientId) = v5;
    McTemplateK0pqq_EtwWriteTransfer(v12, (__int64)&Dxgk_PowerManagementComponents, v8, this, ClientId, v6);
  }
  if ( !v6 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 5011;
    return 0LL;
  }
  if ( v6 > 0xFFFF )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 5017;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Miniport returned invalid number of power components:0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741811;
    goto LABEL_212;
  }
  *((_DWORD *)this + 842) = v6;
  v22 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v22 = -1LL;
  v23 = operator new[](v22, 0x4B677844u, 64LL);
  *((_QWORD *)this + 403) = v23;
  if ( !v23 )
  {
    WdLogSingleEntry1(6LL, this);
    v24 = L"Adapter 0x%I64x: Out of memory allocating m_pPowerComponents";
    WdLogGlobalForLineNumber = 5027;
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v24, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_212;
  }
  v25 = operator new[](312 * v6 + 160, 0x4B677844u, 256LL);
  v26 = (char *)v25;
  if ( !v25 )
  {
    WdLogSingleEntry1(6LL, this);
    v24 = L"Adapter 0x%I64x: Out of memory allocating pRegistrationInfo";
    WdLogGlobalForLineNumber = 5044;
    goto LABEL_36;
  }
  *(_DWORD *)v25 = 3;
  *(_QWORD *)(v25 + 8) = 2LL;
  v27 = 0;
  *(_DWORD *)(v25 + 96) = v6;
  *(_QWORD *)(v25 + 64) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  *(_QWORD *)(v25 + 88) = this;
  v259 = v25 + 56LL * v6 + 104;
  *(_QWORD *)(v25 + 72) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  v28 = 0;
  v177 = 0;
  *(_QWORD *)(v25 + 32) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_QWORD *)(v25 + 16) = DxgkPowerRuntimeComponentActiveCallback;
  *(_QWORD *)(v25 + 24) = DxgkPowerRuntimeComponentIdleCallback;
  *(_QWORD *)(v25 + 40) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *(_QWORD *)(v25 + 48) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *(_QWORD *)(v25 + 56) = DxgkPowerRuntimeControlCallback;
  v257 = (void *)(v25 + 56LL * v6 + 104 + 192LL * v6);
  v29 = 0LL;
  memset(&v260, 0, sizeof(v260));
  v30 = 0;
  v260.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v260.InputDataSize = 4;
  v260.OutputDataSize = 336;
  while ( 1 )
  {
    v170 = v30;
    v179 = v29;
    if ( (unsigned int)v29 >= NumDifferentPhysicalAdapters )
      break;
    v262 = v29;
    v31 = 0;
    *((_WORD *)this + v29 + 1620) = v28;
    while ( 1 )
    {
      v178 = v31;
      if ( v31 >= v567[v29] )
        break;
      v256 = 56LL * v28;
      v255 = v31 + v30;
      v260.pInputData = &v255;
      v32 = *((_QWORD *)this + 403);
      v261 = 520LL * v28;
      v260.pOutputData = (void *)(v32 + 8 + v261);
      v33 = DXGADAPTER::DdiQueryAdapterInfo(this, &v260);
      v5 = v33;
      if ( v33 < 0 )
      {
        WdLogSingleEntry2(2LL, v28, v33);
        WdLogGlobalForLineNumber = 5111;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Miniport failed QueryAdapterInfo(DXGKQAITYPE_POWERCOMPONENTINFO). Component: 0x%I64x, Status: 0x%I64x",
          v28,
          v5,
          0LL,
          0LL,
          0LL);
        goto LABEL_211;
      }
      v34 = v261;
      v35 = v178;
      *(_DWORD *)(v261 + *((_QWORD *)this + 403)) = v28;
      *(_WORD *)(*((_QWORD *)this + 403) + v34 + 4) = v35;
      *(_WORD *)(*((_QWORD *)this + 403) + v34 + 6) = v179;
      v36 = v34 + *((_QWORD *)this + 403);
      v37 = v256;
      *(_DWORD *)&v26[v256 + 132] = *(_DWORD *)(v36 + 8);
      if ( (unsigned int)(*(_DWORD *)(v36 + 8) - 1) > 7 )
      {
        WdLogSingleEntry3(2LL, v28, *(unsigned int *)(v36 + 8), 0LL);
        v51 = *(unsigned int *)(v36 + 8);
        WdLogGlobalForLineNumber = 5125;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Miniport returned invalid number of F states for component:0x%I64x 0x%I64x",
          v28,
          v51,
          0LL,
          0LL,
          0LL);
        goto LABEL_103;
      }
      *(_OWORD *)&v26[v37 + 104] = *(_OWORD *)(v36 + 220);
      *(_BYTE *)(v36 + 275) = 0;
      v38 = *(_DWORD *)(v36 + 216);
      if ( v38 >= 0x20 )
      {
        WdLogSingleEntry2(2LL, v28, 2LL);
        WdLogGlobalForLineNumber = 5139;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Reserved flags are not zero. Component:0x%I64x",
          v28,
          2LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_103;
      }
      v39 = v37;
      if ( (v38 & 4) != 0 )
        *(_QWORD *)&v26[v37 + 120] |= 1uLL;
      if ( !v185 )
        *(_QWORD *)&v26[v37 + 120] |= 2uLL;
      if ( (*(_DWORD *)(v36 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v36 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          WdLogSingleEntry1(2LL, v28);
          v40 = L"Power component ActiveInD3 flag can only be used with DXGK_POWER_COMPONENT_MEMORY and DXGK_POWER_COMPONE"
                 "NT_SHARED. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5158;
          goto LABEL_56;
        }
        if ( *(_DWORD *)(v36 + 8) != 2 )
        {
          WdLogSingleEntry1(2LL, v28);
          v40 = L"F state count must be 2 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5164;
          goto LABEL_56;
        }
        if ( *(_QWORD *)(v36 + 40) )
        {
          WdLogSingleEntry1(2LL, v28);
          v40 = L"TransitionLatency for the F1 state must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5170;
          goto LABEL_56;
        }
        if ( *(_DWORD *)(v36 + 276) )
        {
          WdLogSingleEntry1(2LL, v28);
          v40 = L"Provider count must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5176;
LABEL_56:
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v40, v28, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_57;
        }
      }
      else if ( *(_DWORD *)(v36 + 276) > 0x10u )
      {
        WdLogSingleEntry2(2LL, v28, 3LL);
        WdLogGlobalForLineNumber = 5184;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid component ProviderCount. Component:0x%I64x",
          v28,
          3LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v41 = *(_DWORD *)(v36 + 208);
      if ( v41 == 4 )
      {
        if ( *((_DWORD *)this + 844) != -1 )
        {
          WdLogSingleEntry1(2LL, v28);
          v40 = L"DXGK_POWER_COMPONENT_MEMORY_REFRESH component is defined second time. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5224;
          goto LABEL_56;
        }
        *((_DWORD *)this + 844) = v28;
      }
      else if ( v41 == 6 )
      {
        if ( *((_DWORD *)this + 843) == -1 )
        {
          *((_DWORD *)this + 843) = v28;
          *((_QWORD *)this + 448) = *((_QWORD *)this + 403) + 520LL * v28;
          if ( *(_DWORD *)(v36 + 8) == 2 )
          {
            *((_BYTE *)this + 3664) = 1;
          }
          else if ( *(_DWORD *)(v36 + 8) > 2u )
          {
            WdLogSingleEntry1(2LL, v28);
            v40 = L"F state count for the DXGK_POWER_COMPONENT_D3_TRANSITION component must be 1 or 2. Component:0x%I64x";
            WdLogGlobalForLineNumber = 5214;
            goto LABEL_56;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, v28);
          WdLogGlobalForLineNumber = 5198;
        }
      }
      v42 = v257;
      *(_DWORD *)&v26[v39 + 144] = *(_DWORD *)(v36 + 276);
      memmove(v42, (const void *)(v36 + 280), 4LL * *(unsigned int *)(v36 + 276));
      v43 = (char *)v257;
      v44 = v259;
      *(_QWORD *)&v26[v39 + 152] = v257;
      v45 = *(unsigned int *)(v36 + 276);
      *(_QWORD *)&v26[v39 + 136] = v44;
      v46 = 0;
      v257 = &v43[4 * v45];
      while ( v46 < *(_DWORD *)(v36 + 8) )
      {
        *(_QWORD *)v44 = *(_QWORD *)(v36 + 24LL * v46 + 16);
        *(_QWORD *)(v44 + 8) = *(_QWORD *)(v36 + 24LL * v46 + 24);
        *(_DWORD *)(v44 + 16) = *(_DWORD *)(v36 + 24LL * v46 + 32);
        if ( *(_QWORD *)(v36 + 24LL * v46 + 16) == -1LL )
          *(_QWORD *)v44 = -1LL;
        if ( *(_QWORD *)(v36 + 24LL * v46 + 24) == -1LL )
          *(_QWORD *)(v44 + 8) = -1LL;
        if ( *(_DWORD *)(v36 + 24LL * v46 + 32) == -1 )
          *(_DWORD *)(v44 + 16) = -1;
        if ( v46 )
        {
          v47 = *(_DWORD *)(v36 + 24LL * v46 + 32);
          if ( v47 != -1 )
          {
            v48 = *(_DWORD *)(v36 + 24 * (v46 - 1 + 1LL) + 8);
            if ( v48 != -1 && v47 > v48 )
            {
              WdLogSingleEntry2(2LL, v28, 5LL);
              WdLogGlobalForLineNumber = 5288;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"NominalPower must be decreasing for higher F states. Component:0x%I64x",
                v28,
                5LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_57;
            }
          }
          v49 = *(_QWORD *)(v36 + 24LL * v46 + 16);
          if ( v49 != -1LL )
          {
            v50 = *(_QWORD *)(v36 + 24LL * (v46 - 1) + 16);
            if ( v50 != -1LL && v49 < v50 )
            {
              WdLogSingleEntry2(2LL, v28, 6LL);
              WdLogGlobalForLineNumber = 5296;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"TransitionLatency must be increasing for higher F states. Component:0x%I64x",
                v28,
                6LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_57;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v36 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v36 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            WdLogSingleEntry2(2LL, v28, 3LL);
            WdLogGlobalForLineNumber = 5271;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"TransitionLatency and ResidencyRequirement must be zero for the F0 state. Component:0x%I64x",
              v28,
              3LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_57;
          }
          if ( !*(_DWORD *)(v36 + 32) )
          {
            WdLogSingleEntry2(2LL, v28, 4LL);
            WdLogGlobalForLineNumber = 5277;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"NominalPower must not be zero for the F0 state. Component:0x%I64x",
              v28,
              4LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_57;
          }
        }
        v44 += 24LL;
        v259 = v44;
        ++v46;
      }
      v11 = *(_DWORD *)(v36 + 208) == 0;
      v27 = v177;
      if ( v11 )
        v27 = ++v177;
      v30 = v170;
      v31 = v178 + 1;
      v29 = v262;
      ++v28;
    }
    NumDifferentPhysicalAdapters = v169;
    v29 = (unsigned int)(v179 + 1);
    v30 += 0x10000;
  }
  if ( *((_DWORD *)this + 844) == -1 && !*((_BYTE *)this + 3664) )
    *((_QWORD *)this + 448) = 0LL;
  if ( *((int *)this + 751) < 1300 || !v27 || v186 )
  {
LABEL_151:
    v89 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
    *((_DWORD *)this + 914) = v188;
    if ( v89 )
    {
      v90 = ADAPTER_RENDER::InitializePowerManagement(v89);
      v5 = v90;
      if ( v90 < 0 )
      {
        v91 = 7LL;
        WdLogSingleEntry2(2LL, v90, 7LL);
        v92 = L"InitializePowerManagement failed for render adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5505;
LABEL_210:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v92, v5, v91, 0LL, 0LL, 0LL);
        goto LABEL_211;
      }
    }
    v93 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
    if ( v93 )
    {
      v94 = ADAPTER_DISPLAY::InitializePowerManagement(v93);
      v5 = v94;
      if ( v94 < 0 )
      {
        v91 = 8LL;
        WdLogSingleEntry2(2LL, v94, 8LL);
        v92 = L"InitializePowerManagement failed for display adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5515;
        goto LABEL_210;
      }
    }
    v95 = PoFxRegisterDevice(*((_QWORD *)this + 27), v26, (char *)this + 3232);
    v5 = v95;
    if ( v95 < 0 )
    {
      WdLogSingleEntry1(2LL, v95);
      WdLogGlobalForLineNumber = 5523;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"PoFxRegisterDevice failed with status:0x%I64x",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_211;
    }
    KeInitializeEvent((PRKEVENT)((char *)this + 3392), SynchronizationEvent, 0);
    *((_QWORD *)this + 460) = (char *)this + 3672;
    *((_QWORD *)this + 459) = (char *)this + 3672;
    *((_BYTE *)this + 3660) = 0;
    TimeIncrement = KeQueryTimeIncrement();
    v97 = v189;
    v98 = TimeIncrement;
    *((_QWORD *)this + 430) = 0LL;
    *((_QWORD *)this + 432) = 0LL;
    *((_QWORD *)this + 436) = 0LL;
    *((_QWORD *)this + 438) = 0LL;
    *((_QWORD *)this + 427) = 10 * v97;
    v99 = v191;
    *((_QWORD *)this + 429) = 10LL * v190;
    v100 = 10000LL * v192;
    *((_QWORD *)this + 431) = 10 * v99;
    v101 = (unsigned int)(v100 / v98);
    v102 = v193;
    *((_QWORD *)this + 428) = v101;
    *((_QWORD *)this + 434) = v101;
    v103 = 5 * v102;
    v104 = v194;
    *((_QWORD *)this + 433) = 2 * v103;
    v105 = 5 * v104;
    v106 = v195;
    *((_QWORD *)this + 435) = 2 * v105;
    v107 = 5 * v106;
    v108 = v196;
    *((_QWORD *)this + 437) = 2 * v107;
    *((_QWORD *)this + 439) = (char *)this + 3416;
    v109 = 5 * v108;
    v110 = v197;
    *((_QWORD *)this + 471) = 2 * v109;
    v111 = 10000LL * v198;
    *((_QWORD *)this + 440) = 10 * v110;
    v112 = v199;
    *((_QWORD *)this + 441) = (unsigned int)(v111 / v98);
    v113 = 10000LL * v200;
    *((_QWORD *)this + 442) = 10 * v112;
    v114 = v201;
    *((_QWORD *)this + 443) = (unsigned int)(v113 / v98);
    v115 = 5 * v114;
    v116 = 10000LL * v202;
    *((_QWORD *)this + 444) = 2 * v115;
    v117 = v116;
    v118 = v203;
    *((_QWORD *)this + 445) = (unsigned int)(v117 / v98);
    *((_QWORD *)this + 447) = 0LL;
    v168 = 0;
    v119 = 5 * v118;
    v120 = v204;
    *((_QWORD *)this + 446) = 2 * v119;
    v121 = 5 * v120;
    v122 = v205;
    *((_QWORD *)this + 449) = 2 * v121;
    v123 = 5 * v122;
    v124 = v206;
    *((_QWORD *)this + 450) = 2 * v123;
    v125 = 5 * v124;
    v126 = v207;
    *((_QWORD *)this + 451) = 2 * v125;
    v127 = 5 * v126;
    v128 = v208;
    *((_QWORD *)this + 452) = 2 * v127;
    v129 = 5 * v128;
    v130 = v209;
    *((_QWORD *)this + 453) = 2 * v129;
    v131 = 5 * v130;
    v132 = v210;
    *((_QWORD *)this + 454) = 2 * v131;
    v133 = 5 * v132;
    v134 = v211;
    *((_QWORD *)this + 455) = 2 * v133;
    *((_QWORD *)this + 456) = 10 * v134;
    *((_QWORD *)this + 465) = (char *)this + 3712;
    *((_QWORD *)this + 464) = (char *)this + 3712;
    KeInitializeSpinLock((PKSPIN_LOCK)this + 470);
    v135 = 0LL;
    v170 = 0;
    while ( 1 )
    {
      v136 = *((_QWORD *)this + 403);
      v137 = 520 * v135;
      v138 = 520 * v135 + v136;
      *(_BYTE *)(v138 + 356) = 1;
      v139 = (DXGADAPTER *)(v138 + 424);
      *(_OWORD *)(v138 + 424) = 0LL;
      v140 = *(_DWORD *)(v138 + 208);
      if ( !v140 )
      {
        *(_BYTE *)(v138 + 357) = 1;
        v151 = (DXGADAPTER **)*((_QWORD *)this + 469);
        if ( *v151 != (DXGADAPTER *)((char *)this + 3744) )
LABEL_207:
          __fastfail(3u);
        *(_QWORD *)(v138 + 432) = v151;
        *(_QWORD *)v139 = (char *)this + 3744;
        *v151 = v139;
        v152 = 0LL;
        *((_QWORD *)this + 469) = v139;
        v153 = *(_DWORD *)(v138 + 8);
        if ( v153 > 1 )
        {
          v154 = (unsigned __int64 *)(v138 + 40);
          v155 = v153 - 1;
          do
          {
            v156 = *v154;
            v154 += 3;
            if ( v152 >= v156 )
              v156 = v152;
            v152 = v156;
            --v155;
          }
          while ( v155 );
        }
        *(_DWORD *)(v138 + 388) = 1;
        for ( i = 0; ; ++i )
        {
          if ( i >= 2 )
            goto LABEL_190;
          if ( *((_QWORD *)this + 2 * i + 427) >= v152 )
            break;
        }
        *(_DWORD *)(v138 + 388) = i;
LABEL_190:
        v158 = *(_DWORD *)(v138 + 4);
        *(_DWORD *)(v138 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v158, *(_QWORD *)(*((_QWORD *)this + 439) + 32LL));
        ++*((_DWORD *)this + 846);
        goto LABEL_191;
      }
      v141 = v140 - 1;
      if ( !v141 )
        break;
      v142 = v141 - 1;
      if ( !v142 )
      {
        v150 = v212;
LABEL_178:
        v147 = *(_DWORD *)(v138 + 4);
        v148 = 10 * v150;
        v146 = this;
LABEL_169:
        DXGADAPTER::SetPowerComponentLatencyCB(v146, v147, v148);
        goto LABEL_191;
      }
      v143 = v142 - 1;
      if ( !v143 )
      {
        v149 = (DXGADAPTER **)*((_QWORD *)this + 467);
        if ( *v149 != (DXGADAPTER *)((char *)this + 3728) )
          goto LABEL_207;
        *(_QWORD *)v139 = (char *)this + 3728;
        *(_QWORD *)(v138 + 432) = v149;
        *v149 = v139;
        *((_QWORD *)this + 467) = v139;
        if ( (*(_DWORD *)(v138 + 216) & 0x10) != 0 )
          *(_BYTE *)(v138 + 360) = 1;
        goto LABEL_191;
      }
      v144 = v143 - 1;
      if ( v144 )
      {
        v145 = v144 - 2;
        if ( v145 )
        {
          if ( v145 == 1 )
          {
            v168 = 1;
            if ( (*(_DWORD *)(v138 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v138 + 360) = 1;
              *(_BYTE *)(v138 + 356) = 0;
              *(_DWORD *)(v138 + 344) = 1;
            }
            goto LABEL_191;
          }
          v146 = this;
          v147 = *(_DWORD *)(v138 + 4);
          if ( v180 == -1 )
            v148 = -1LL;
          else
            v148 = 10LL * v180;
          goto LABEL_169;
        }
      }
LABEL_191:
      if ( v181 == -1 )
        v159 = -1LL;
      else
        v159 = 10000LL * v181;
      DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v138 + 4), v159);
      KeInitializeSpinLock((PKSPIN_LOCK)(v138 + 504));
      if ( *(_DWORD *)(v138 + 8) <= 1u || (v160 = *(_QWORD *)(v138 + 48), v160 == -1) )
      {
        v161 = *((_QWORD *)this + 471);
      }
      else
      {
        v161 = *((_QWORD *)this + 471);
        if ( v160 > v161 )
          v161 = *(_QWORD *)(v138 + 48);
      }
      *(_QWORD *)(v137 + v136 + 496) = v161;
      v135 = v170 + 1;
      v170 = v135;
      if ( (unsigned int)v135 >= v6 )
      {
        DXGADAPTER::UpdateLatencyTolerances(this);
        PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 404), 10LL * v214);
        if ( *((_DWORD *)this + 105) == 1297040209 && *((_DWORD *)this + 684) == 4608 )
        {
          KeInitializeEvent((PRKEVENT)this + 163, SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)this + 164, SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)this + 165, SynchronizationEvent, 0);
          KeInitializeSpinLock((PKSPIN_LOCK)this + 498);
          *((_QWORD *)this + 501) = (char *)this + 4000;
          *((_QWORD *)this + 500) = (char *)this + 4000;
          InitializeSListHead((PSLIST_HEADER)this + 251);
          v91 = 8LL;
          v162 = (struct _SLIST_ENTRY *)((char *)this + 4048);
          v163 = 8LL;
          do
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 251, v162);
            v162 += 2;
            --v163;
          }
          while ( v163 );
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v164 = PsCreateSystemThread(
                   (PHANDLE)this + 504,
                   0x1FFFFFu,
                   &ObjectAttributes,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                   this);
          v5 = v164;
          if ( v164 < 0 )
          {
            WdLogSingleEntry2(2LL, v164, 8LL);
            v92 = L"InitializePowerManagement failed to create worker thread for display adapter:0x%I64x";
            WdLogGlobalForLineNumber = 5775;
            goto LABEL_210;
          }
        }
        v165 = DpiEnablePowerManagement(*((_QWORD *)this + 27), *((_QWORD *)this + 404), v168);
        v5 = v165;
        if ( v165 < 0 )
        {
          DXGADAPTER::DestroySerializeFStateTransitWorker(this);
          v91 = 9LL;
          WdLogSingleEntry2(2LL, v5, 9LL);
          v92 = L"Port power management enable failed:0x%I64x";
          WdLogGlobalForLineNumber = 5790;
          goto LABEL_210;
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
        return 0LL;
      }
    }
    v150 = v213;
    goto LABEL_178;
  }
  if ( v175 > 0x3E8 || v174 > 0x3E8 || v173 > 0x3E8 || v172 > 0x3E8 || v175 >= v172 || v172 >= v174 || v174 >= v173 )
  {
    WdLogSingleEntry4(2LL, v175, v174, v173, v172);
    WdLogGlobalForLineNumber = 5345;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"P-State engine regkey validation error - low: 0x%I64x high: 0x%I64x glitch: 0x%I64x ideal: 0x%I64x",
      v175,
      v174,
      v173,
      v172,
      0LL);
    goto LABEL_57;
  }
  v52 = 248LL * v27;
  v260.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v260.OutputDataSize = 136;
  if ( !is_mul_ok(v27, 0xF8uLL) )
    v52 = -1LL;
  v53 = operator new[](v52, 0x4B677844u, 64LL);
  *((_QWORD *)this + 553) = v53;
  *((_DWORD *)this + 1108) = v27;
  if ( !v53 )
  {
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5361;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x: Out of memory allocating m_NodePStateData",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_211;
  }
  v54 = 0;
  for ( j = 0; v54 < *((_DWORD *)this + 842); ++v54 )
  {
    v56 = *((_QWORD *)this + 403);
    v57 = 520LL * v54;
    if ( !*(_DWORD *)(v57 + v56 + 208) )
      *(_QWORD *)(v57 + v56 + 512) = *((_QWORD *)this + 553) + 248LL * j++;
  }
  v58 = 0;
  *((_DWORD *)this + 1160) = v173;
  v59 = 0;
  *((_DWORD *)this + 1161) = v174;
  *((_DWORD *)this + 1162) = v175;
  *((_DWORD *)this + 1163) = v172;
  *((_DWORD *)this + 1164) = v187;
  v60 = 0;
  while ( 1 )
  {
    v169 = v58;
    if ( v60 >= v6 )
      break;
    v61 = *(_QWORD *)(520LL * v59 + *((_QWORD *)this + 403) + 512);
    if ( v61 )
    {
      v260.pOutputData = *(void **)(520LL * v59 + *((_QWORD *)this + 403) + 512);
      v260.pInputData = &v169;
      v62 = DXGADAPTER::DdiQueryAdapterInfo(this, &v260);
      v67 = v62;
      if ( v62 < 0 )
      {
        v69 = WdLogNewEntry5_WdTrace(v64, v63, v65, v66);
        *(_QWORD *)(v69 + 24) = v169;
        v70 = 0;
        *(_QWORD *)(v69 + 32) = v67;
        for ( WdLogGlobalForLineNumber = 5411; v70 < *((_DWORD *)this + 842); ++v70 )
        {
          v71 = 520LL * v70;
          v72 = *((_QWORD *)this + 403);
          if ( !*(_DWORD *)(v71 + v72 + 208) )
            *(_QWORD *)(v71 + v72 + 512) = 0LL;
        }
        v73 = (void *)*((_QWORD *)this + 553);
        *((_DWORD *)this + 1108) = 0;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v73);
        *((_QWORD *)this + 553) = 0LL;
        break;
      }
      v68 = v169;
      *(_QWORD *)(v61 + 136) = this;
      *(_DWORD *)(v61 + 144) = v68;
      *(_QWORD *)(v61 + 152) = v61;
      KeInitializeSpinLock((PKSPIN_LOCK)(v61 + 160));
      *(_DWORD *)(v61 + 244) = -1;
      *(_BYTE *)(v61 + 240) = 0;
      v58 = v169;
    }
    v60 = ++v58;
    v59 = v58;
  }
  v74 = *((_DWORD *)this + 1108);
  v75 = 0;
  v170 = v74;
LABEL_138:
  if ( v75 >= v74 )
    goto LABEL_151;
  v76 = *((_QWORD *)this + 553);
  v77 = v75;
  v78 = 248LL * v75;
  v79 = *(_DWORD *)(v78 + v76);
  v80 = *(unsigned int *)(v78 + v76 + 144);
  if ( v79 > 0x20 )
  {
    v88 = *(unsigned int *)(v78 + v76 + 144);
    WdLogSingleEntry1(2LL, v88);
    WdLogGlobalForLineNumber = 5466;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"P-State StateCount cannot be larger than DXGK_MAX_P_STATES. Component:0x%I64x",
      v88,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_57;
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= v79 )
    {
      v74 = v170;
      ++v75;
      goto LABEL_138;
    }
    v82 = 62 * v77;
    v83 = k;
    v84 = *(_DWORD *)(v76 + 4 * (k + v82) + 4);
    if ( !v84 )
    {
      v87 = *(unsigned int *)(v78 + v76 + 144);
      WdLogSingleEntry2(2LL, v80, k);
      WdLogGlobalForLineNumber = 5479;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"P-State cannot specify 0 operating frequency. Component:0x%I64x, P-State:0x%I64x",
        v87,
        v83,
        0LL,
        0LL,
        0LL);
LABEL_57:
      LODWORD(v5) = -1073741811;
      goto LABEL_211;
    }
    if ( k )
    {
      v85 = k - 1;
      if ( v84 > *(_DWORD *)(v76 + 4 * (v82 + v85) + 4) )
        break;
    }
    v77 = v75;
  }
  v86 = *(unsigned int *)(v78 + v76 + 144);
  WdLogSingleEntry3(2LL, v80, k, k - 1);
  WdLogGlobalForLineNumber = 5489;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"P-States must have monotonically decreasing operating frequency. Component:0x%I64x, P-State1:0x%I64x, P-State2:0x%I64x",
    v86,
    v83,
    v85,
    0LL,
    0LL);
LABEL_103:
  LODWORD(v5) = -1073741811;
LABEL_211:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
LABEL_212:
  v166 = *((_QWORD *)this + 404);
  if ( v166 )
  {
    PoFxUnregisterDevice(v166, v20, v21);
    *((_QWORD *)this + 404) = 0LL;
  }
  return (unsigned int)v5;
}
