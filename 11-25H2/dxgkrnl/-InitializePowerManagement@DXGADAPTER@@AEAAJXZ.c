/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14003130C (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140033390 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1400666F8 (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14018C7DC (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1401971D0 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x14019CD30 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x14022F2DC (DpiEnablePowerManagement.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x140384590 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r13d
  bool v7; // cc
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int NumDifferentPhysicalAdapters; // r12d
  unsigned int v16; // edx
  __int64 v17; // rax
  DXGADAPTER *v18; // rcx
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  const wchar_t *v26; // r9
  __int64 v27; // rax
  char *v28; // r14
  unsigned int v29; // esi
  unsigned int v30; // ebx
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rsi
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // r12
  const wchar_t *v42; // r9
  int v43; // eax
  void *v44; // rcx
  char *v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int v48; // r8d
  unsigned int v49; // r9d
  unsigned int v50; // ecx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int j; // r8d
  __int64 v58; // r10
  __int64 v59; // r9
  unsigned int v60; // edx
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rsi
  unsigned int v70; // eax
  __int64 v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rax
  void *v75; // rcx
  unsigned int v76; // eax
  unsigned int v77; // edx
  __int64 v78; // r8
  __int64 v79; // r10
  __int64 v80; // rax
  unsigned int v81; // ebx
  __int64 v82; // r9
  unsigned int k; // ecx
  __int64 v84; // r10
  __int64 v85; // rsi
  unsigned int v86; // r11d
  __int64 v87; // r12
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  ADAPTER_RENDER *v91; // rcx
  int v92; // eax
  __int64 v93; // r15
  const wchar_t *v94; // r9
  ADAPTER_DISPLAY *v95; // rcx
  int v96; // eax
  int v97; // eax
  ULONG TimeIncrement; // eax
  __int64 v99; // rcx
  unsigned __int64 v100; // r9
  __int64 v101; // rax
  unsigned __int64 v102; // rtt
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  unsigned __int64 v113; // rtt
  __int64 v114; // rax
  unsigned __int64 v115; // rtt
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned __int64 v119; // rtt
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
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r12
  __int64 v139; // rsi
  __int64 v140; // rbx
  DXGADAPTER *v141; // rdx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  DXGADAPTER *v148; // rcx
  unsigned int v149; // edx
  __int64 v150; // r8
  DXGADAPTER **v151; // rcx
  __int64 v152; // rax
  DXGADAPTER **v153; // rcx
  unsigned __int64 v154; // rcx
  unsigned int v155; // eax
  unsigned __int64 *v156; // rdx
  __int64 v157; // r8
  unsigned __int64 v158; // rax
  unsigned int i; // edx
  unsigned int v160; // edx
  __int64 v161; // r8
  __int64 v162; // rcx
  __int64 v163; // rax
  struct _SLIST_ENTRY *v164; // rbx
  __int64 v165; // rsi
  NTSTATUS v166; // eax
  int v167; // eax
  __int64 v168; // rcx
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  char v170; // [rsp+58h] [rbp-B0h]
  unsigned int v171; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v172; // [rsp+60h] [rbp-A8h]
  BOOL v173; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v174; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v175; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v176; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v177; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v178; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v179; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v180; // [rsp+80h] [rbp-88h]
  int v181; // [rsp+84h] [rbp-84h]
  unsigned int v182; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v183; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v184; // [rsp+90h] [rbp-78h] BYREF
  int v185; // [rsp+94h] [rbp-74h] BYREF
  int v186; // [rsp+98h] [rbp-70h] BYREF
  int v187; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v188; // [rsp+A0h] [rbp-68h] BYREF
  int v189; // [rsp+A4h] [rbp-64h] BYREF
  int v190; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v191; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v192; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v193; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v194; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v195; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v196; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v197; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v198; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v199; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v200; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v201; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v202; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v203; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v204; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v205; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v206; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v207; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v208; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v209; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v210; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v211; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v212; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v213; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v214; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v215; // [rsp+10Ch] [rbp+4h] BYREF
  unsigned int v216; // [rsp+110h] [rbp+8h] BYREF
  int v217; // [rsp+114h] [rbp+Ch] BYREF
  int v218; // [rsp+118h] [rbp+10h] BYREF
  int v219; // [rsp+11Ch] [rbp+14h] BYREF
  int v220; // [rsp+120h] [rbp+18h] BYREF
  int v221; // [rsp+124h] [rbp+1Ch] BYREF
  int v222; // [rsp+128h] [rbp+20h] BYREF
  int v223; // [rsp+12Ch] [rbp+24h] BYREF
  int v224; // [rsp+130h] [rbp+28h] BYREF
  int v225; // [rsp+134h] [rbp+2Ch] BYREF
  int v226; // [rsp+138h] [rbp+30h] BYREF
  int v227; // [rsp+13Ch] [rbp+34h] BYREF
  int v228; // [rsp+140h] [rbp+38h] BYREF
  int v229; // [rsp+144h] [rbp+3Ch] BYREF
  int v230; // [rsp+148h] [rbp+40h] BYREF
  int v231; // [rsp+14Ch] [rbp+44h] BYREF
  int v232; // [rsp+150h] [rbp+48h] BYREF
  int v233; // [rsp+154h] [rbp+4Ch] BYREF
  int v234; // [rsp+158h] [rbp+50h] BYREF
  int v235; // [rsp+15Ch] [rbp+54h] BYREF
  int v236; // [rsp+160h] [rbp+58h] BYREF
  int v237; // [rsp+164h] [rbp+5Ch] BYREF
  int v238; // [rsp+168h] [rbp+60h] BYREF
  int v239; // [rsp+16Ch] [rbp+64h] BYREF
  int v240; // [rsp+170h] [rbp+68h] BYREF
  int v241; // [rsp+174h] [rbp+6Ch] BYREF
  int v242; // [rsp+178h] [rbp+70h] BYREF
  int v243; // [rsp+17Ch] [rbp+74h] BYREF
  int v244; // [rsp+180h] [rbp+78h] BYREF
  int v245; // [rsp+184h] [rbp+7Ch] BYREF
  int v246; // [rsp+188h] [rbp+80h] BYREF
  int v247; // [rsp+18Ch] [rbp+84h] BYREF
  int v248; // [rsp+190h] [rbp+88h] BYREF
  int v249; // [rsp+194h] [rbp+8Ch] BYREF
  int v250; // [rsp+198h] [rbp+90h] BYREF
  int v251; // [rsp+19Ch] [rbp+94h] BYREF
  int v252; // [rsp+1A0h] [rbp+98h] BYREF
  int v253; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v254; // [rsp+1A8h] [rbp+A0h] BYREF
  int v255; // [rsp+1ACh] [rbp+A4h] BYREF
  int v256; // [rsp+1B0h] [rbp+A8h] BYREF
  unsigned int v257; // [rsp+1B4h] [rbp+ACh] BYREF
  __int64 v258; // [rsp+1B8h] [rbp+B0h]
  void *v259; // [rsp+1C0h] [rbp+B8h]
  __int64 v260; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v261; // [rsp+1D0h] [rbp+C8h]
  struct _DXGKARG_QUERYADAPTERINFO v262; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v263; // [rsp+208h] [rbp+100h]
  __int64 v264; // [rsp+210h] [rbp+108h]
  struct _DXGKARG_QUERYADAPTERINFO v265; // [rsp+218h] [rbp+110h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+248h] [rbp+140h] BYREF
  __int64 v267; // [rsp+278h] [rbp+170h] BYREF
  int v268; // [rsp+280h] [rbp+178h]
  const wchar_t *v269; // [rsp+288h] [rbp+180h]
  BOOL *v270; // [rsp+290h] [rbp+188h]
  int v271; // [rsp+298h] [rbp+190h]
  int *v272; // [rsp+2A0h] [rbp+198h]
  int v273; // [rsp+2A8h] [rbp+1A0h]
  __int64 v274; // [rsp+2B0h] [rbp+1A8h]
  int v275; // [rsp+2B8h] [rbp+1B0h]
  __int64 v276; // [rsp+2C0h] [rbp+1B8h]
  __int128 v277; // [rsp+2C8h] [rbp+1C0h]
  __int128 v278; // [rsp+2D8h] [rbp+1D0h]
  __int64 v279; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v280; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v281; // [rsp+2F8h] [rbp+1F0h]
  BOOL *v282; // [rsp+300h] [rbp+1F8h]
  int v283; // [rsp+308h] [rbp+200h]
  int *v284; // [rsp+310h] [rbp+208h]
  int v285; // [rsp+318h] [rbp+210h]
  __int64 v286; // [rsp+320h] [rbp+218h]
  int v287; // [rsp+328h] [rbp+220h]
  __int64 v288; // [rsp+330h] [rbp+228h]
  __int128 v289; // [rsp+338h] [rbp+230h]
  __int128 v290; // [rsp+348h] [rbp+240h]
  __int64 v291; // [rsp+358h] [rbp+250h] BYREF
  int v292; // [rsp+360h] [rbp+258h]
  const wchar_t *v293; // [rsp+368h] [rbp+260h]
  int *v294; // [rsp+370h] [rbp+268h]
  int v295; // [rsp+378h] [rbp+270h]
  int *v296; // [rsp+380h] [rbp+278h]
  int v297; // [rsp+388h] [rbp+280h]
  __int64 v298; // [rsp+390h] [rbp+288h]
  int v299; // [rsp+398h] [rbp+290h]
  const wchar_t *v300; // [rsp+3A0h] [rbp+298h]
  int *v301; // [rsp+3A8h] [rbp+2A0h]
  int v302; // [rsp+3B0h] [rbp+2A8h]
  int *v303; // [rsp+3B8h] [rbp+2B0h]
  int v304; // [rsp+3C0h] [rbp+2B8h]
  __int64 v305; // [rsp+3C8h] [rbp+2C0h]
  int v306; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v307; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v308; // [rsp+3E0h] [rbp+2D8h]
  int v309; // [rsp+3E8h] [rbp+2E0h]
  int *v310; // [rsp+3F0h] [rbp+2E8h]
  int v311; // [rsp+3F8h] [rbp+2F0h]
  __int64 v312; // [rsp+400h] [rbp+2F8h]
  int v313; // [rsp+408h] [rbp+300h]
  const wchar_t *v314; // [rsp+410h] [rbp+308h]
  unsigned int *v315; // [rsp+418h] [rbp+310h]
  int v316; // [rsp+420h] [rbp+318h]
  int *v317; // [rsp+428h] [rbp+320h]
  int v318; // [rsp+430h] [rbp+328h]
  __int64 v319; // [rsp+438h] [rbp+330h]
  int v320; // [rsp+440h] [rbp+338h]
  const wchar_t *v321; // [rsp+448h] [rbp+340h]
  unsigned int *v322; // [rsp+450h] [rbp+348h]
  int v323; // [rsp+458h] [rbp+350h]
  int *v324; // [rsp+460h] [rbp+358h]
  int v325; // [rsp+468h] [rbp+360h]
  __int64 v326; // [rsp+470h] [rbp+368h]
  int v327; // [rsp+478h] [rbp+370h]
  const wchar_t *v328; // [rsp+480h] [rbp+378h]
  unsigned int *v329; // [rsp+488h] [rbp+380h]
  int v330; // [rsp+490h] [rbp+388h]
  int *v331; // [rsp+498h] [rbp+390h]
  int v332; // [rsp+4A0h] [rbp+398h]
  __int64 v333; // [rsp+4A8h] [rbp+3A0h]
  int v334; // [rsp+4B0h] [rbp+3A8h]
  const wchar_t *v335; // [rsp+4B8h] [rbp+3B0h]
  unsigned int *v336; // [rsp+4C0h] [rbp+3B8h]
  int v337; // [rsp+4C8h] [rbp+3C0h]
  int *v338; // [rsp+4D0h] [rbp+3C8h]
  int v339; // [rsp+4D8h] [rbp+3D0h]
  __int64 v340; // [rsp+4E0h] [rbp+3D8h]
  int v341; // [rsp+4E8h] [rbp+3E0h]
  const wchar_t *v342; // [rsp+4F0h] [rbp+3E8h]
  unsigned int *v343; // [rsp+4F8h] [rbp+3F0h]
  int v344; // [rsp+500h] [rbp+3F8h]
  int *v345; // [rsp+508h] [rbp+400h]
  int v346; // [rsp+510h] [rbp+408h]
  __int64 v347; // [rsp+518h] [rbp+410h]
  int v348; // [rsp+520h] [rbp+418h]
  const wchar_t *v349; // [rsp+528h] [rbp+420h]
  unsigned int *v350; // [rsp+530h] [rbp+428h]
  int v351; // [rsp+538h] [rbp+430h]
  int *v352; // [rsp+540h] [rbp+438h]
  int v353; // [rsp+548h] [rbp+440h]
  __int64 v354; // [rsp+550h] [rbp+448h]
  int v355; // [rsp+558h] [rbp+450h]
  const wchar_t *v356; // [rsp+560h] [rbp+458h]
  unsigned int *v357; // [rsp+568h] [rbp+460h]
  int v358; // [rsp+570h] [rbp+468h]
  int *v359; // [rsp+578h] [rbp+470h]
  int v360; // [rsp+580h] [rbp+478h]
  __int64 v361; // [rsp+588h] [rbp+480h]
  int v362; // [rsp+590h] [rbp+488h]
  const wchar_t *v363; // [rsp+598h] [rbp+490h]
  int *v364; // [rsp+5A0h] [rbp+498h]
  int v365; // [rsp+5A8h] [rbp+4A0h]
  int *v366; // [rsp+5B0h] [rbp+4A8h]
  int v367; // [rsp+5B8h] [rbp+4B0h]
  __int64 v368; // [rsp+5C0h] [rbp+4B8h]
  int v369; // [rsp+5C8h] [rbp+4C0h]
  const wchar_t *v370; // [rsp+5D0h] [rbp+4C8h]
  unsigned int *v371; // [rsp+5D8h] [rbp+4D0h]
  int v372; // [rsp+5E0h] [rbp+4D8h]
  int *v373; // [rsp+5E8h] [rbp+4E0h]
  int v374; // [rsp+5F0h] [rbp+4E8h]
  __int64 v375; // [rsp+5F8h] [rbp+4F0h]
  int v376; // [rsp+600h] [rbp+4F8h]
  const wchar_t *v377; // [rsp+608h] [rbp+500h]
  int *v378; // [rsp+610h] [rbp+508h]
  int v379; // [rsp+618h] [rbp+510h]
  int *v380; // [rsp+620h] [rbp+518h]
  int v381; // [rsp+628h] [rbp+520h]
  __int64 v382; // [rsp+630h] [rbp+528h]
  int v383; // [rsp+638h] [rbp+530h]
  const wchar_t *v384; // [rsp+640h] [rbp+538h]
  unsigned int *v385; // [rsp+648h] [rbp+540h]
  int v386; // [rsp+650h] [rbp+548h]
  int *v387; // [rsp+658h] [rbp+550h]
  int v388; // [rsp+660h] [rbp+558h]
  __int64 v389; // [rsp+668h] [rbp+560h]
  int v390; // [rsp+670h] [rbp+568h]
  const wchar_t *v391; // [rsp+678h] [rbp+570h]
  unsigned int *v392; // [rsp+680h] [rbp+578h]
  int v393; // [rsp+688h] [rbp+580h]
  int *v394; // [rsp+690h] [rbp+588h]
  int v395; // [rsp+698h] [rbp+590h]
  __int64 v396; // [rsp+6A0h] [rbp+598h]
  int v397; // [rsp+6A8h] [rbp+5A0h]
  const wchar_t *v398; // [rsp+6B0h] [rbp+5A8h]
  unsigned int *v399; // [rsp+6B8h] [rbp+5B0h]
  int v400; // [rsp+6C0h] [rbp+5B8h]
  int *v401; // [rsp+6C8h] [rbp+5C0h]
  int v402; // [rsp+6D0h] [rbp+5C8h]
  __int64 v403; // [rsp+6D8h] [rbp+5D0h]
  int v404; // [rsp+6E0h] [rbp+5D8h]
  const wchar_t *v405; // [rsp+6E8h] [rbp+5E0h]
  unsigned int *v406; // [rsp+6F0h] [rbp+5E8h]
  int v407; // [rsp+6F8h] [rbp+5F0h]
  int *v408; // [rsp+700h] [rbp+5F8h]
  int v409; // [rsp+708h] [rbp+600h]
  __int64 v410; // [rsp+710h] [rbp+608h]
  int v411; // [rsp+718h] [rbp+610h]
  const wchar_t *v412; // [rsp+720h] [rbp+618h]
  unsigned int *v413; // [rsp+728h] [rbp+620h]
  int v414; // [rsp+730h] [rbp+628h]
  int *v415; // [rsp+738h] [rbp+630h]
  int v416; // [rsp+740h] [rbp+638h]
  __int64 v417; // [rsp+748h] [rbp+640h]
  int v418; // [rsp+750h] [rbp+648h]
  const wchar_t *v419; // [rsp+758h] [rbp+650h]
  unsigned int *v420; // [rsp+760h] [rbp+658h]
  int v421; // [rsp+768h] [rbp+660h]
  int *v422; // [rsp+770h] [rbp+668h]
  int v423; // [rsp+778h] [rbp+670h]
  __int64 v424; // [rsp+780h] [rbp+678h]
  int v425; // [rsp+788h] [rbp+680h]
  const wchar_t *v426; // [rsp+790h] [rbp+688h]
  unsigned int *v427; // [rsp+798h] [rbp+690h]
  int v428; // [rsp+7A0h] [rbp+698h]
  int *v429; // [rsp+7A8h] [rbp+6A0h]
  int v430; // [rsp+7B0h] [rbp+6A8h]
  __int64 v431; // [rsp+7B8h] [rbp+6B0h]
  int v432; // [rsp+7C0h] [rbp+6B8h]
  const wchar_t *v433; // [rsp+7C8h] [rbp+6C0h]
  unsigned int *v434; // [rsp+7D0h] [rbp+6C8h]
  int v435; // [rsp+7D8h] [rbp+6D0h]
  int *v436; // [rsp+7E0h] [rbp+6D8h]
  int v437; // [rsp+7E8h] [rbp+6E0h]
  __int64 v438; // [rsp+7F0h] [rbp+6E8h]
  int v439; // [rsp+7F8h] [rbp+6F0h]
  const wchar_t *v440; // [rsp+800h] [rbp+6F8h]
  int *v441; // [rsp+808h] [rbp+700h]
  int v442; // [rsp+810h] [rbp+708h]
  int *v443; // [rsp+818h] [rbp+710h]
  int v444; // [rsp+820h] [rbp+718h]
  __int64 v445; // [rsp+828h] [rbp+720h]
  int v446; // [rsp+830h] [rbp+728h]
  const wchar_t *v447; // [rsp+838h] [rbp+730h]
  int *v448; // [rsp+840h] [rbp+738h]
  int v449; // [rsp+848h] [rbp+740h]
  int *v450; // [rsp+850h] [rbp+748h]
  int v451; // [rsp+858h] [rbp+750h]
  __int64 v452; // [rsp+860h] [rbp+758h]
  int v453; // [rsp+868h] [rbp+760h]
  const wchar_t *v454; // [rsp+870h] [rbp+768h]
  int *v455; // [rsp+878h] [rbp+770h]
  int v456; // [rsp+880h] [rbp+778h]
  int *v457; // [rsp+888h] [rbp+780h]
  int v458; // [rsp+890h] [rbp+788h]
  __int64 v459; // [rsp+898h] [rbp+790h]
  int v460; // [rsp+8A0h] [rbp+798h]
  const wchar_t *v461; // [rsp+8A8h] [rbp+7A0h]
  unsigned int *v462; // [rsp+8B0h] [rbp+7A8h]
  int v463; // [rsp+8B8h] [rbp+7B0h]
  int *v464; // [rsp+8C0h] [rbp+7B8h]
  int v465; // [rsp+8C8h] [rbp+7C0h]
  __int64 v466; // [rsp+8D0h] [rbp+7C8h]
  int v467; // [rsp+8D8h] [rbp+7D0h]
  const wchar_t *v468; // [rsp+8E0h] [rbp+7D8h]
  unsigned int *v469; // [rsp+8E8h] [rbp+7E0h]
  int v470; // [rsp+8F0h] [rbp+7E8h]
  int *v471; // [rsp+8F8h] [rbp+7F0h]
  int v472; // [rsp+900h] [rbp+7F8h]
  __int64 v473; // [rsp+908h] [rbp+800h]
  int v474; // [rsp+910h] [rbp+808h]
  const wchar_t *v475; // [rsp+918h] [rbp+810h]
  unsigned int *v476; // [rsp+920h] [rbp+818h]
  int v477; // [rsp+928h] [rbp+820h]
  int *v478; // [rsp+930h] [rbp+828h]
  int v479; // [rsp+938h] [rbp+830h]
  __int64 v480; // [rsp+940h] [rbp+838h]
  int v481; // [rsp+948h] [rbp+840h]
  const wchar_t *v482; // [rsp+950h] [rbp+848h]
  unsigned int *v483; // [rsp+958h] [rbp+850h]
  int v484; // [rsp+960h] [rbp+858h]
  int *v485; // [rsp+968h] [rbp+860h]
  int v486; // [rsp+970h] [rbp+868h]
  __int64 v487; // [rsp+978h] [rbp+870h]
  int v488; // [rsp+980h] [rbp+878h]
  const wchar_t *v489; // [rsp+988h] [rbp+880h]
  unsigned int *v490; // [rsp+990h] [rbp+888h]
  int v491; // [rsp+998h] [rbp+890h]
  int *v492; // [rsp+9A0h] [rbp+898h]
  int v493; // [rsp+9A8h] [rbp+8A0h]
  __int64 v494; // [rsp+9B0h] [rbp+8A8h]
  int v495; // [rsp+9B8h] [rbp+8B0h]
  const wchar_t *v496; // [rsp+9C0h] [rbp+8B8h]
  unsigned int *v497; // [rsp+9C8h] [rbp+8C0h]
  int v498; // [rsp+9D0h] [rbp+8C8h]
  int *v499; // [rsp+9D8h] [rbp+8D0h]
  int v500; // [rsp+9E0h] [rbp+8D8h]
  __int64 v501; // [rsp+9E8h] [rbp+8E0h]
  int v502; // [rsp+9F0h] [rbp+8E8h]
  const wchar_t *v503; // [rsp+9F8h] [rbp+8F0h]
  unsigned int *v504; // [rsp+A00h] [rbp+8F8h]
  int v505; // [rsp+A08h] [rbp+900h]
  int *v506; // [rsp+A10h] [rbp+908h]
  int v507; // [rsp+A18h] [rbp+910h]
  __int64 v508; // [rsp+A20h] [rbp+918h]
  int v509; // [rsp+A28h] [rbp+920h]
  const wchar_t *v510; // [rsp+A30h] [rbp+928h]
  unsigned int *v511; // [rsp+A38h] [rbp+930h]
  int v512; // [rsp+A40h] [rbp+938h]
  int *v513; // [rsp+A48h] [rbp+940h]
  int v514; // [rsp+A50h] [rbp+948h]
  __int64 v515; // [rsp+A58h] [rbp+950h]
  int v516; // [rsp+A60h] [rbp+958h]
  const wchar_t *v517; // [rsp+A68h] [rbp+960h]
  unsigned int *v518; // [rsp+A70h] [rbp+968h]
  int v519; // [rsp+A78h] [rbp+970h]
  int *v520; // [rsp+A80h] [rbp+978h]
  int v521; // [rsp+A88h] [rbp+980h]
  __int64 v522; // [rsp+A90h] [rbp+988h]
  int v523; // [rsp+A98h] [rbp+990h]
  const wchar_t *v524; // [rsp+AA0h] [rbp+998h]
  unsigned int *v525; // [rsp+AA8h] [rbp+9A0h]
  int v526; // [rsp+AB0h] [rbp+9A8h]
  int *v527; // [rsp+AB8h] [rbp+9B0h]
  int v528; // [rsp+AC0h] [rbp+9B8h]
  __int64 v529; // [rsp+AC8h] [rbp+9C0h]
  int v530; // [rsp+AD0h] [rbp+9C8h]
  const wchar_t *v531; // [rsp+AD8h] [rbp+9D0h]
  unsigned int *v532; // [rsp+AE0h] [rbp+9D8h]
  int v533; // [rsp+AE8h] [rbp+9E0h]
  int *v534; // [rsp+AF0h] [rbp+9E8h]
  int v535; // [rsp+AF8h] [rbp+9F0h]
  __int64 v536; // [rsp+B00h] [rbp+9F8h]
  int v537; // [rsp+B08h] [rbp+A00h]
  const wchar_t *v538; // [rsp+B10h] [rbp+A08h]
  unsigned int *v539; // [rsp+B18h] [rbp+A10h]
  int v540; // [rsp+B20h] [rbp+A18h]
  int *v541; // [rsp+B28h] [rbp+A20h]
  int v542; // [rsp+B30h] [rbp+A28h]
  __int64 v543; // [rsp+B38h] [rbp+A30h]
  int v544; // [rsp+B40h] [rbp+A38h]
  const wchar_t *v545; // [rsp+B48h] [rbp+A40h]
  unsigned int *v546; // [rsp+B50h] [rbp+A48h]
  int v547; // [rsp+B58h] [rbp+A50h]
  int *v548; // [rsp+B60h] [rbp+A58h]
  int v549; // [rsp+B68h] [rbp+A60h]
  __int64 v550; // [rsp+B70h] [rbp+A68h]
  int v551; // [rsp+B78h] [rbp+A70h]
  const wchar_t *v552; // [rsp+B80h] [rbp+A78h]
  unsigned int *v553; // [rsp+B88h] [rbp+A80h]
  int v554; // [rsp+B90h] [rbp+A88h]
  int *v555; // [rsp+B98h] [rbp+A90h]
  int v556; // [rsp+BA0h] [rbp+A98h]
  __int64 v557; // [rsp+BA8h] [rbp+AA0h]
  int v558; // [rsp+BB0h] [rbp+AA8h]
  const wchar_t *v559; // [rsp+BB8h] [rbp+AB0h]
  unsigned int *v560; // [rsp+BC0h] [rbp+AB8h]
  int v561; // [rsp+BC8h] [rbp+AC0h]
  int *v562; // [rsp+BD0h] [rbp+AC8h]
  int v563; // [rsp+BD8h] [rbp+AD0h]
  __int64 v564; // [rsp+BE0h] [rbp+AD8h]
  int v565; // [rsp+BE8h] [rbp+AE0h]
  __int64 v566; // [rsp+BF0h] [rbp+AE8h]
  __int128 v567; // [rsp+BF8h] [rbp+AF0h]
  __int128 v568; // [rsp+C08h] [rbp+B00h]
  _DWORD v569[64]; // [rsp+C18h] [rbp+B10h] BYREF
  unsigned __int16 v570[264]; // [rsp+D18h] [rbp+C10h] BYREF

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
    WdLogGlobalForLineNumber = 4742;
    return 0LL;
  }
  v240 = 0;
  v219 = -1;
  v182 = -1;
  v220 = 2000;
  v223 = 35000;
  v193 = 35000;
  v183 = 2000;
  v225 = 50000;
  LODWORD(v5) = 0;
  v196 = 50000;
  v6 = 0;
  v224 = 2000;
  v226 = 100000;
  v197 = 100000;
  v231 = 300000;
  v215 = 300000;
  v232 = 17000;
  v214 = 17000;
  v227 = 200;
  v190 = 200;
  v228 = 200;
  v194 = 200;
  v230 = 100;
  v229 = 100;
  v233 = 25000;
  v216 = 25000;
  v235 = 300;
  v177 = 300;
  v236 = 700;
  v176 = 700;
  v237 = 900;
  v175 = 900;
  v238 = 500;
  v174 = 500;
  v244 = 140000;
  v203 = 140000;
  v245 = 200000;
  v205 = 200000;
  v246 = 250000;
  v206 = 250000;
  v247 = 250000;
  v207 = 250000;
  v195 = 2000;
  v234 = 2000;
  v198 = 2000;
  v248 = 10000;
  v221 = 80;
  v191 = 80;
  v222 = 15000;
  v192 = 15000;
  v239 = 3;
  v189 = 3;
  v187 = 0;
  v241 = 0;
  v188 = 0;
  v242 = 80;
  v199 = 80;
  v243 = 80000;
  v201 = 80000;
  v7 = *((_DWORD *)this + 751) < 2400;
  v200 = 10000;
  v249 = 60000;
  v202 = 60000;
  v250 = 60000;
  v204 = 60000;
  v252 = 30000;
  v209 = 30000;
  v255 = 30000;
  v212 = 30000;
  v184 = 1;
  v173 = 1;
  v217 = 1;
  v185 = 1;
  v251 = 15000;
  v208 = 15000;
  v254 = 15000;
  v211 = 15000;
  v256 = 80000;
  v213 = 80000;
  v253 = 80;
  v210 = 80;
  v218 = 0;
  v186 = 0;
  if ( v7 )
  {
    v269 = L"UseSelfRefreshVRAMInS3";
    v268 = 288;
    v271 = 67108868;
    v270 = &v173;
    v267 = 0LL;
    v272 = &v184;
    v273 = 4;
    v274 = 0LL;
    v275 = 0;
    v276 = 0LL;
    v277 = 0LL;
    v278 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v267, 0LL, 0LL);
  }
  else
  {
    v173 = (*((_DWORD *)this + 617) & 0x1000) == 0;
  }
  v291 = 0LL;
  v293 = L"EnableRuntimePowerManagement";
  v294 = &v185;
  v296 = &v217;
  v300 = L"DisableDevicePowerRequired";
  v301 = &v186;
  v303 = &v218;
  v307 = L"DefaultLatencyToleranceOther";
  v308 = &v182;
  v310 = &v219;
  v314 = L"DefaultExpectedResidency";
  v315 = &v183;
  v317 = &v220;
  v321 = L"DefaultLatencyToleranceIdle0";
  v322 = &v191;
  v324 = &v221;
  v328 = L"DefaultLatencyToleranceIdle1";
  v329 = &v192;
  v331 = &v222;
  v335 = L"DefaultLatencyToleranceNoContext";
  v336 = &v193;
  v338 = &v223;
  v342 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v343 = &v195;
  v345 = &v224;
  v292 = 288;
  v295 = 67108868;
  v297 = 4;
  v298 = 0LL;
  v299 = 288;
  v302 = 67108868;
  v304 = 4;
  v305 = 0LL;
  v306 = 288;
  v309 = 67108868;
  v311 = 4;
  v312 = 0LL;
  v313 = 288;
  v316 = 67108868;
  v318 = 4;
  v319 = 0LL;
  v320 = 288;
  v323 = 67108868;
  v325 = 4;
  v326 = 0LL;
  v327 = 288;
  v330 = 67108868;
  v332 = 4;
  v333 = 0LL;
  v334 = 288;
  v337 = 67108868;
  v339 = 4;
  v340 = 0LL;
  v341 = 288;
  v344 = 67108868;
  v346 = 4;
  v347 = 0LL;
  v348 = 288;
  v349 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v350 = &v196;
  v352 = &v225;
  v356 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v357 = &v197;
  v359 = &v226;
  v363 = L"DefaultLatencyToleranceTimerPeriod";
  v364 = &v190;
  v366 = &v227;
  v370 = L"DefaultIdleThresholdIdle0";
  v371 = &v194;
  v373 = &v228;
  v377 = L"DefaultIdleThresholdIdle0MonitorOff";
  v378 = &v229;
  v380 = &v230;
  v384 = L"MonitorLatencyTolerance";
  v385 = &v215;
  v387 = &v231;
  v391 = L"MonitorRefreshLatencyTolerance";
  v392 = &v214;
  v394 = &v232;
  v398 = L"DefaultPowerNotRequiredTimeout";
  v399 = &v216;
  v401 = &v233;
  v351 = 67108868;
  v353 = 4;
  v354 = 0LL;
  v355 = 288;
  v358 = 67108868;
  v360 = 4;
  v361 = 0LL;
  v362 = 288;
  v365 = 67108868;
  v367 = 4;
  v368 = 0LL;
  v369 = 288;
  v372 = 67108868;
  v374 = 4;
  v375 = 0LL;
  v376 = 288;
  v379 = 67108868;
  v381 = 4;
  v382 = 0LL;
  v383 = 288;
  v386 = 67108868;
  v388 = 4;
  v389 = 0LL;
  v390 = 288;
  v393 = 67108868;
  v395 = 4;
  v396 = 0LL;
  v397 = 288;
  v400 = 67108868;
  v402 = 4;
  v403 = 0LL;
  v404 = 288;
  v407 = 67108868;
  v405 = L"DefaultActiveIdleThreshold";
  v406 = &v198;
  v408 = &v234;
  v412 = L"ulow";
  v413 = &v177;
  v415 = &v235;
  v419 = L"uhigh";
  v420 = &v176;
  v422 = &v236;
  v426 = L"uglitch";
  v427 = &v175;
  v429 = &v237;
  v433 = L"uideal";
  v434 = &v174;
  v436 = &v238;
  v440 = L"lowdebounce";
  v441 = &v189;
  v443 = &v239;
  v447 = L"EnablePODebounce";
  v448 = &v187;
  v450 = &v240;
  v454 = L"DisablePStateManagement";
  v455 = &v188;
  v457 = &v241;
  v409 = 4;
  v410 = 0LL;
  v411 = 288;
  v414 = 67108868;
  v416 = 4;
  v417 = 0LL;
  v418 = 288;
  v421 = 67108868;
  v423 = 4;
  v424 = 0LL;
  v425 = 288;
  v428 = 67108868;
  v430 = 4;
  v431 = 0LL;
  v432 = 288;
  v435 = 67108868;
  v437 = 4;
  v438 = 0LL;
  v439 = 288;
  v442 = 67108868;
  v444 = 4;
  v445 = 0LL;
  v446 = 288;
  v449 = 67108868;
  v451 = 4;
  v452 = 0LL;
  v453 = 288;
  v456 = 67108868;
  v458 = 4;
  v459 = 0LL;
  v460 = 288;
  v461 = L"DefaultD3TransitionLatencyActivelyUsed";
  v462 = &v199;
  v464 = &v242;
  v468 = L"DefaultD3TransitionLatencyIdleShortTime";
  v469 = &v201;
  v471 = &v243;
  v475 = L"DefaultD3TransitionLatencyIdleLongTime";
  v476 = &v203;
  v478 = &v244;
  v482 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v483 = &v205;
  v485 = &v245;
  v489 = L"DefaultD3TransitionLatencyIdleNoContext";
  v490 = &v206;
  v492 = &v246;
  v496 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v497 = &v207;
  v499 = &v247;
  v503 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v504 = &v200;
  v506 = &v248;
  v510 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v511 = &v202;
  v513 = &v249;
  v517 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v463 = 67108868;
  v465 = 4;
  v466 = 0LL;
  v467 = 288;
  v470 = 67108868;
  v472 = 4;
  v473 = 0LL;
  v474 = 288;
  v477 = 67108868;
  v479 = 4;
  v480 = 0LL;
  v481 = 288;
  v484 = 67108868;
  v486 = 4;
  v487 = 0LL;
  v488 = 288;
  v491 = 67108868;
  v493 = 4;
  v494 = 0LL;
  v495 = 288;
  v498 = 67108868;
  v500 = 4;
  v501 = 0LL;
  v502 = 288;
  v505 = 67108868;
  v507 = 4;
  v508 = 0LL;
  v509 = 288;
  v512 = 67108868;
  v514 = 4;
  v515 = 0LL;
  v516 = 288;
  v519 = 67108868;
  v518 = &v204;
  v523 = 288;
  v520 = &v250;
  v526 = 67108868;
  v524 = L"DefaultLatencyToleranceMemory";
  v530 = 288;
  v525 = &v208;
  v527 = &v251;
  v531 = L"DefaultLatencyToleranceMemoryNoContext";
  v532 = &v209;
  v534 = &v252;
  v538 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v539 = &v210;
  v541 = &v253;
  v545 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v546 = &v211;
  v548 = &v254;
  v552 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v553 = &v212;
  v555 = &v255;
  v559 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v560 = &v213;
  v533 = 67108868;
  v537 = 288;
  v540 = 67108868;
  v544 = 288;
  v547 = 67108868;
  v551 = 288;
  v554 = 67108868;
  v558 = 288;
  v561 = 67108868;
  v562 = &v256;
  v521 = 4;
  v522 = 0LL;
  v528 = 4;
  v529 = 0LL;
  v535 = 4;
  v536 = 0LL;
  v542 = 4;
  v543 = 0LL;
  v549 = 4;
  v550 = 0LL;
  v556 = 4;
  v557 = 0LL;
  v563 = 4;
  v564 = 0LL;
  v565 = 0;
  v566 = 0LL;
  v567 = 0LL;
  v568 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v291, 0LL, 0LL);
  if ( *((int *)this + 751) < 2400 )
  {
    v10 = *((_QWORD *)this + 27);
    v260 = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v10, 2LL, &v260) >= 0
      && (int)RtlStringCbCopyW((char *)v570, 0x208uLL, *(char **)(v260 + 8)) >= 0
      && (int)RtlStringCbCatW(v570, v11, (char *)L"\\DxgkSettings") >= 0 )
    {
      v279 = 0LL;
      v280 = 288;
      v281 = L"UseSelfRefreshVRAMInS3";
      v283 = 67108868;
      v282 = &v173;
      v285 = 4;
      v284 = &v184;
      v286 = 0LL;
      v287 = 0;
      v288 = 0LL;
      v289 = 0LL;
      v290 = 0LL;
      RtlQueryRegistryValuesEx(0LL, v570, &v279, 0LL, 0LL);
    }
  }
  if ( !v185 )
    return 0LL;
  v12 = !v173;
  *((_BYTE *)this + 204) = v186 != 0;
  *((_BYTE *)this + 207) = !v12;
  v13 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v14 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 28LL);
  if ( v14 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v171 = NumDifferentPhysicalAdapters;
  v16 = 0;
  v178 = 0;
  v17 = 0LL;
  while ( v16 < NumDifferentPhysicalAdapters )
  {
    v265.pOutputData = &v569[v17];
    memset(&v265, 0, 24);
    v265.Type = DXGKQAITYPE_NUMPOWERCOMPONENTS;
    *(_OWORD *)&v265.OutputDataSize = 0LL;
    v265.OutputDataSize = 4;
    if ( DXGADAPTER::IsDxgmms2(this) && v14 >= 0x5019 )
    {
      v265.InputDataSize = 4;
      v265.pInputData = &v178;
    }
    v19 = DXGADAPTER::DdiQueryAdapterInfo(v18, &v265);
    v5 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v19);
      WdLogGlobalForLineNumber = 4939;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DdiQueryAdapterInfo failed. Adapter: 0x%p Status: 0x%I64x",
        (__int64)this,
        v5,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v5;
    }
    v6 += v569[v178];
    v16 = v178 + 1;
    v178 = v16;
    v17 = v16;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    LODWORD(ClientId) = v5;
    McTemplateK0pqq_EtwWriteTransfer(v13, (__int64)&Dxgk_PowerManagementComponents, v8, this, ClientId, v6);
  }
  if ( !v6 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4954;
    return 0LL;
  }
  if ( v6 > 0xFFFF )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 4960;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
  v23 = 520LL * v6;
  if ( !is_mul_ok(v6, 0x208uLL) )
    v23 = -1LL;
  v24 = operator new[](v23, 0x4B677844u, 64LL, v9);
  *((_QWORD *)this + 403) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(6LL, this);
    v26 = L"Adapter 0x%I64x: Out of memory allocating m_pPowerComponents";
    WdLogGlobalForLineNumber = 4970;
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v26, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
    goto LABEL_212;
  }
  v27 = operator new[](312 * v6 + 160, 0x4B677844u, 256LL, v25);
  v28 = (char *)v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(6LL, this);
    v26 = L"Adapter 0x%I64x: Out of memory allocating pRegistrationInfo";
    WdLogGlobalForLineNumber = 4987;
    goto LABEL_36;
  }
  *(_DWORD *)v27 = 3;
  *(_QWORD *)(v27 + 8) = 2LL;
  v29 = 0;
  *(_DWORD *)(v27 + 96) = v6;
  *(_QWORD *)(v27 + 64) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  *(_QWORD *)(v27 + 88) = this;
  v261 = v27 + 56LL * v6 + 104;
  *(_QWORD *)(v27 + 72) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  v30 = 0;
  v179 = 0;
  *(_QWORD *)(v27 + 32) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_QWORD *)(v27 + 16) = DxgkPowerRuntimeComponentActiveCallback;
  *(_QWORD *)(v27 + 24) = DxgkPowerRuntimeComponentIdleCallback;
  *(_QWORD *)(v27 + 40) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *(_QWORD *)(v27 + 48) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *(_QWORD *)(v27 + 56) = DxgkPowerRuntimeControlCallback;
  v259 = (void *)(v27 + 56LL * v6 + 104 + 192LL * v6);
  v31 = 0LL;
  memset(&v262, 0, sizeof(v262));
  v32 = 0;
  v262.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v262.InputDataSize = 4;
  v262.OutputDataSize = 336;
  while ( 1 )
  {
    v172 = v32;
    v181 = v31;
    if ( (unsigned int)v31 >= NumDifferentPhysicalAdapters )
      break;
    v264 = v31;
    v33 = 0;
    *((_WORD *)this + v31 + 1620) = v30;
    while ( 1 )
    {
      v180 = v33;
      if ( v33 >= v569[v31] )
        break;
      v258 = 56LL * v30;
      v257 = v33 + v32;
      v262.pInputData = &v257;
      v34 = *((_QWORD *)this + 403);
      v263 = 520LL * v30;
      v262.pOutputData = (void *)(v34 + 8 + v263);
      v35 = DXGADAPTER::DdiQueryAdapterInfo(this, &v262);
      v5 = v35;
      if ( v35 < 0 )
      {
        WdLogSingleEntry2(2LL, v30, v35);
        WdLogGlobalForLineNumber = 5054;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Miniport failed QueryAdapterInfo(DXGKQAITYPE_POWERCOMPONENTINFO). Component: 0x%I64x, Status: 0x%I64x",
          v30,
          v5,
          0LL,
          0LL,
          0LL);
        goto LABEL_211;
      }
      v36 = v263;
      v37 = v180;
      *(_DWORD *)(v263 + *((_QWORD *)this + 403)) = v30;
      *(_WORD *)(*((_QWORD *)this + 403) + v36 + 4) = v37;
      *(_WORD *)(*((_QWORD *)this + 403) + v36 + 6) = v181;
      v38 = v36 + *((_QWORD *)this + 403);
      v39 = v258;
      *(_DWORD *)&v28[v258 + 132] = *(_DWORD *)(v38 + 8);
      if ( (unsigned int)(*(_DWORD *)(v38 + 8) - 1) > 7 )
      {
        WdLogSingleEntry3(2LL, v30, *(unsigned int *)(v38 + 8), 0LL);
        v53 = *(unsigned int *)(v38 + 8);
        WdLogGlobalForLineNumber = 5068;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Miniport returned invalid number of F states for component:0x%I64x 0x%I64x",
          v30,
          v53,
          0LL,
          0LL,
          0LL);
        goto LABEL_103;
      }
      *(_OWORD *)&v28[v39 + 104] = *(_OWORD *)(v38 + 220);
      *(_BYTE *)(v38 + 275) = 0;
      v40 = *(_DWORD *)(v38 + 216);
      if ( v40 >= 0x20 )
      {
        WdLogSingleEntry2(2LL, v30, 2LL);
        WdLogGlobalForLineNumber = 5082;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Reserved flags are not zero. Component:0x%I64x",
          v30,
          2LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_103;
      }
      v41 = v39;
      if ( (v40 & 4) != 0 )
        *(_QWORD *)&v28[v39 + 120] |= 1uLL;
      if ( !v187 )
        *(_QWORD *)&v28[v39 + 120] |= 2uLL;
      if ( (*(_DWORD *)(v38 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v38 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          WdLogSingleEntry1(2LL, v30);
          v42 = L"Power component ActiveInD3 flag can only be used with DXGK_POWER_COMPONENT_MEMORY and DXGK_POWER_COMPONE"
                 "NT_SHARED. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5101;
          goto LABEL_56;
        }
        if ( *(_DWORD *)(v38 + 8) != 2 )
        {
          WdLogSingleEntry1(2LL, v30);
          v42 = L"F state count must be 2 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5107;
          goto LABEL_56;
        }
        if ( *(_QWORD *)(v38 + 40) )
        {
          WdLogSingleEntry1(2LL, v30);
          v42 = L"TransitionLatency for the F1 state must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5113;
          goto LABEL_56;
        }
        if ( *(_DWORD *)(v38 + 276) )
        {
          WdLogSingleEntry1(2LL, v30);
          v42 = L"Provider count must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5119;
LABEL_56:
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v42, v30, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_57;
        }
      }
      else if ( *(_DWORD *)(v38 + 276) > 0x10u )
      {
        WdLogSingleEntry2(2LL, v30, 3LL);
        WdLogGlobalForLineNumber = 5127;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid component ProviderCount. Component:0x%I64x",
          v30,
          3LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v43 = *(_DWORD *)(v38 + 208);
      if ( v43 == 4 )
      {
        if ( *((_DWORD *)this + 844) != -1 )
        {
          WdLogSingleEntry1(2LL, v30);
          v42 = L"DXGK_POWER_COMPONENT_MEMORY_REFRESH component is defined second time. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5167;
          goto LABEL_56;
        }
        *((_DWORD *)this + 844) = v30;
      }
      else if ( v43 == 6 )
      {
        if ( *((_DWORD *)this + 843) == -1 )
        {
          *((_DWORD *)this + 843) = v30;
          *((_QWORD *)this + 448) = *((_QWORD *)this + 403) + 520LL * v30;
          if ( *(_DWORD *)(v38 + 8) == 2 )
          {
            *((_BYTE *)this + 3664) = 1;
          }
          else if ( *(_DWORD *)(v38 + 8) > 2u )
          {
            WdLogSingleEntry1(2LL, v30);
            v42 = L"F state count for the DXGK_POWER_COMPONENT_D3_TRANSITION component must be 1 or 2. Component:0x%I64x";
            WdLogGlobalForLineNumber = 5157;
            goto LABEL_56;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, v30);
          WdLogGlobalForLineNumber = 5141;
        }
      }
      v44 = v259;
      *(_DWORD *)&v28[v41 + 144] = *(_DWORD *)(v38 + 276);
      memmove(v44, (const void *)(v38 + 280), 4LL * *(unsigned int *)(v38 + 276));
      v45 = (char *)v259;
      v46 = v261;
      *(_QWORD *)&v28[v41 + 152] = v259;
      v47 = *(unsigned int *)(v38 + 276);
      *(_QWORD *)&v28[v41 + 136] = v46;
      v48 = 0;
      v259 = &v45[4 * v47];
      while ( v48 < *(_DWORD *)(v38 + 8) )
      {
        *(_QWORD *)v46 = *(_QWORD *)(v38 + 24LL * v48 + 16);
        *(_QWORD *)(v46 + 8) = *(_QWORD *)(v38 + 24LL * v48 + 24);
        *(_DWORD *)(v46 + 16) = *(_DWORD *)(v38 + 24LL * v48 + 32);
        if ( *(_QWORD *)(v38 + 24LL * v48 + 16) == -1LL )
          *(_QWORD *)v46 = -1LL;
        if ( *(_QWORD *)(v38 + 24LL * v48 + 24) == -1LL )
          *(_QWORD *)(v46 + 8) = -1LL;
        if ( *(_DWORD *)(v38 + 24LL * v48 + 32) == -1 )
          *(_DWORD *)(v46 + 16) = -1;
        if ( v48 )
        {
          v49 = *(_DWORD *)(v38 + 24LL * v48 + 32);
          if ( v49 != -1 )
          {
            v50 = *(_DWORD *)(v38 + 24 * (v48 - 1 + 1LL) + 8);
            if ( v50 != -1 && v49 > v50 )
            {
              WdLogSingleEntry2(2LL, v30, 5LL);
              WdLogGlobalForLineNumber = 5231;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"NominalPower must be decreasing for higher F states. Component:0x%I64x",
                v30,
                5LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_57;
            }
          }
          v51 = *(_QWORD *)(v38 + 24LL * v48 + 16);
          if ( v51 != -1LL )
          {
            v52 = *(_QWORD *)(v38 + 24LL * (v48 - 1) + 16);
            if ( v52 != -1LL && v51 < v52 )
            {
              WdLogSingleEntry2(2LL, v30, 6LL);
              WdLogGlobalForLineNumber = 5239;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"TransitionLatency must be increasing for higher F states. Component:0x%I64x",
                v30,
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
          if ( ((*(_QWORD *)(v38 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v38 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            WdLogSingleEntry2(2LL, v30, 3LL);
            WdLogGlobalForLineNumber = 5214;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"TransitionLatency and ResidencyRequirement must be zero for the F0 state. Component:0x%I64x",
              v30,
              3LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_57;
          }
          if ( !*(_DWORD *)(v38 + 32) )
          {
            WdLogSingleEntry2(2LL, v30, 4LL);
            WdLogGlobalForLineNumber = 5220;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"NominalPower must not be zero for the F0 state. Component:0x%I64x",
              v30,
              4LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_57;
          }
        }
        v46 += 24LL;
        v261 = v46;
        ++v48;
      }
      v12 = *(_DWORD *)(v38 + 208) == 0;
      v29 = v179;
      if ( v12 )
        v29 = ++v179;
      v32 = v172;
      v33 = v180 + 1;
      v31 = v264;
      ++v30;
    }
    NumDifferentPhysicalAdapters = v171;
    v31 = (unsigned int)(v181 + 1);
    v32 += 0x10000;
  }
  if ( *((_DWORD *)this + 844) == -1 && !*((_BYTE *)this + 3664) )
    *((_QWORD *)this + 448) = 0LL;
  if ( *((int *)this + 751) < 1300 || !v29 || v188 )
  {
LABEL_151:
    v91 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
    *((_DWORD *)this + 914) = v190;
    if ( v91 )
    {
      v92 = ADAPTER_RENDER::InitializePowerManagement(v91);
      v5 = v92;
      if ( v92 < 0 )
      {
        v93 = 7LL;
        WdLogSingleEntry2(2LL, v92, 7LL);
        v94 = L"InitializePowerManagement failed for render adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5448;
LABEL_210:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v94, v5, v93, 0LL, 0LL, 0LL);
        goto LABEL_211;
      }
    }
    v95 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
    if ( v95 )
    {
      v96 = ADAPTER_DISPLAY::InitializePowerManagement(v95);
      v5 = v96;
      if ( v96 < 0 )
      {
        v93 = 8LL;
        WdLogSingleEntry2(2LL, v96, 8LL);
        v94 = L"InitializePowerManagement failed for display adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5458;
        goto LABEL_210;
      }
    }
    v97 = PoFxRegisterDevice(*((_QWORD *)this + 27), v28, (char *)this + 3232);
    v5 = v97;
    if ( v97 < 0 )
    {
      WdLogSingleEntry1(2LL, v97);
      WdLogGlobalForLineNumber = 5466;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
    v99 = v191;
    v100 = TimeIncrement;
    *((_QWORD *)this + 430) = 0LL;
    *((_QWORD *)this + 432) = 0LL;
    *((_QWORD *)this + 436) = 0LL;
    *((_QWORD *)this + 438) = 0LL;
    *((_QWORD *)this + 427) = 10 * v99;
    v101 = v193;
    *((_QWORD *)this + 429) = 10LL * v192;
    v102 = 10000LL * v194;
    *((_QWORD *)this + 431) = 10 * v101;
    v103 = (unsigned int)(v102 / v100);
    v104 = v195;
    *((_QWORD *)this + 428) = v103;
    *((_QWORD *)this + 434) = v103;
    v105 = 5 * v104;
    v106 = v196;
    *((_QWORD *)this + 433) = 2 * v105;
    v107 = 5 * v106;
    v108 = v197;
    *((_QWORD *)this + 435) = 2 * v107;
    v109 = 5 * v108;
    v110 = v198;
    *((_QWORD *)this + 437) = 2 * v109;
    *((_QWORD *)this + 439) = (char *)this + 3416;
    v111 = 5 * v110;
    v112 = v199;
    *((_QWORD *)this + 471) = 2 * v111;
    v113 = 10000LL * v200;
    *((_QWORD *)this + 440) = 10 * v112;
    v114 = v201;
    *((_QWORD *)this + 441) = (unsigned int)(v113 / v100);
    v115 = 10000LL * v202;
    *((_QWORD *)this + 442) = 10 * v114;
    v116 = v203;
    *((_QWORD *)this + 443) = (unsigned int)(v115 / v100);
    v117 = 5 * v116;
    v118 = 10000LL * v204;
    *((_QWORD *)this + 444) = 2 * v117;
    v119 = v118;
    v120 = v205;
    *((_QWORD *)this + 445) = (unsigned int)(v119 / v100);
    *((_QWORD *)this + 447) = 0LL;
    v170 = 0;
    v121 = 5 * v120;
    v122 = v206;
    *((_QWORD *)this + 446) = 2 * v121;
    v123 = 5 * v122;
    v124 = v207;
    *((_QWORD *)this + 449) = 2 * v123;
    v125 = 5 * v124;
    v126 = v208;
    *((_QWORD *)this + 450) = 2 * v125;
    v127 = 5 * v126;
    v128 = v209;
    *((_QWORD *)this + 451) = 2 * v127;
    v129 = 5 * v128;
    v130 = v210;
    *((_QWORD *)this + 452) = 2 * v129;
    v131 = 5 * v130;
    v132 = v211;
    *((_QWORD *)this + 453) = 2 * v131;
    v133 = 5 * v132;
    v134 = v212;
    *((_QWORD *)this + 454) = 2 * v133;
    v135 = 5 * v134;
    v136 = v213;
    *((_QWORD *)this + 455) = 2 * v135;
    *((_QWORD *)this + 456) = 10 * v136;
    *((_QWORD *)this + 465) = (char *)this + 3712;
    *((_QWORD *)this + 464) = (char *)this + 3712;
    KeInitializeSpinLock((PKSPIN_LOCK)this + 470);
    v137 = 0LL;
    v172 = 0;
    while ( 1 )
    {
      v138 = *((_QWORD *)this + 403);
      v139 = 520 * v137;
      v140 = 520 * v137 + v138;
      *(_BYTE *)(v140 + 356) = 1;
      v141 = (DXGADAPTER *)(v140 + 424);
      *(_OWORD *)(v140 + 424) = 0LL;
      v142 = *(_DWORD *)(v140 + 208);
      if ( !v142 )
      {
        *(_BYTE *)(v140 + 357) = 1;
        v153 = (DXGADAPTER **)*((_QWORD *)this + 469);
        if ( *v153 != (DXGADAPTER *)((char *)this + 3744) )
LABEL_207:
          __fastfail(3u);
        *(_QWORD *)(v140 + 432) = v153;
        *(_QWORD *)v141 = (char *)this + 3744;
        *v153 = v141;
        v154 = 0LL;
        *((_QWORD *)this + 469) = v141;
        v155 = *(_DWORD *)(v140 + 8);
        if ( v155 > 1 )
        {
          v156 = (unsigned __int64 *)(v140 + 40);
          v157 = v155 - 1;
          do
          {
            v158 = *v156;
            v156 += 3;
            if ( v154 >= v158 )
              v158 = v154;
            v154 = v158;
            --v157;
          }
          while ( v157 );
        }
        *(_DWORD *)(v140 + 388) = 1;
        for ( i = 0; ; ++i )
        {
          if ( i >= 2 )
            goto LABEL_190;
          if ( *((_QWORD *)this + 2 * i + 427) >= v154 )
            break;
        }
        *(_DWORD *)(v140 + 388) = i;
LABEL_190:
        v160 = *(_DWORD *)(v140 + 4);
        *(_DWORD *)(v140 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v160, *(_QWORD *)(*((_QWORD *)this + 439) + 32LL));
        ++*((_DWORD *)this + 846);
        goto LABEL_191;
      }
      v143 = v142 - 1;
      if ( !v143 )
        break;
      v144 = v143 - 1;
      if ( !v144 )
      {
        v152 = v214;
LABEL_178:
        v149 = *(_DWORD *)(v140 + 4);
        v150 = 10 * v152;
        v148 = this;
LABEL_169:
        DXGADAPTER::SetPowerComponentLatencyCB(v148, v149, v150);
        goto LABEL_191;
      }
      v145 = v144 - 1;
      if ( !v145 )
      {
        v151 = (DXGADAPTER **)*((_QWORD *)this + 467);
        if ( *v151 != (DXGADAPTER *)((char *)this + 3728) )
          goto LABEL_207;
        *(_QWORD *)v141 = (char *)this + 3728;
        *(_QWORD *)(v140 + 432) = v151;
        *v151 = v141;
        *((_QWORD *)this + 467) = v141;
        if ( (*(_DWORD *)(v140 + 216) & 0x10) != 0 )
          *(_BYTE *)(v140 + 360) = 1;
        goto LABEL_191;
      }
      v146 = v145 - 1;
      if ( v146 )
      {
        v147 = v146 - 2;
        if ( v147 )
        {
          if ( v147 == 1 )
          {
            v170 = 1;
            if ( (*(_DWORD *)(v140 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v140 + 360) = 1;
              *(_BYTE *)(v140 + 356) = 0;
              *(_DWORD *)(v140 + 344) = 1;
            }
            goto LABEL_191;
          }
          v148 = this;
          v149 = *(_DWORD *)(v140 + 4);
          if ( v182 == -1 )
            v150 = -1LL;
          else
            v150 = 10LL * v182;
          goto LABEL_169;
        }
      }
LABEL_191:
      if ( v183 == -1 )
        v161 = -1LL;
      else
        v161 = 10000LL * v183;
      DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v140 + 4), v161);
      KeInitializeSpinLock((PKSPIN_LOCK)(v140 + 504));
      if ( *(_DWORD *)(v140 + 8) <= 1u || (v162 = *(_QWORD *)(v140 + 48), v162 == -1) )
      {
        v163 = *((_QWORD *)this + 471);
      }
      else
      {
        v163 = *((_QWORD *)this + 471);
        if ( v162 > v163 )
          v163 = *(_QWORD *)(v140 + 48);
      }
      *(_QWORD *)(v139 + v138 + 496) = v163;
      v137 = v172 + 1;
      v172 = v137;
      if ( (unsigned int)v137 >= v6 )
      {
        DXGADAPTER::UpdateLatencyTolerances(this);
        PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 404), 10LL * v216);
        if ( *((_DWORD *)this + 105) == 1297040209 && *((_DWORD *)this + 684) == 4608 )
        {
          KeInitializeEvent((PRKEVENT)this + 163, SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)this + 164, SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)this + 165, SynchronizationEvent, 0);
          KeInitializeSpinLock((PKSPIN_LOCK)this + 498);
          *((_QWORD *)this + 501) = (char *)this + 4000;
          *((_QWORD *)this + 500) = (char *)this + 4000;
          InitializeSListHead((PSLIST_HEADER)this + 251);
          v93 = 8LL;
          v164 = (struct _SLIST_ENTRY *)((char *)this + 4048);
          v165 = 8LL;
          do
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 251, v164);
            v164 += 2;
            --v165;
          }
          while ( v165 );
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v166 = PsCreateSystemThread(
                   (PHANDLE)this + 504,
                   0x1FFFFFu,
                   &ObjectAttributes,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                   this);
          v5 = v166;
          if ( v166 < 0 )
          {
            WdLogSingleEntry2(2LL, v166, 8LL);
            v94 = L"InitializePowerManagement failed to create worker thread for display adapter:0x%I64x";
            WdLogGlobalForLineNumber = 5718;
            goto LABEL_210;
          }
        }
        v167 = DpiEnablePowerManagement(*((_QWORD *)this + 27), *((_QWORD *)this + 404), v170);
        v5 = v167;
        if ( v167 < 0 )
        {
          DXGADAPTER::DestroySerializeFStateTransitWorker(this);
          v93 = 9LL;
          WdLogSingleEntry2(2LL, v5, 9LL);
          v94 = L"Port power management enable failed:0x%I64x";
          WdLogGlobalForLineNumber = 5733;
          goto LABEL_210;
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
        return 0LL;
      }
    }
    v152 = v215;
    goto LABEL_178;
  }
  if ( v177 > 0x3E8 || v176 > 0x3E8 || v175 > 0x3E8 || v174 > 0x3E8 || v177 >= v174 || v174 >= v176 || v176 >= v175 )
  {
    WdLogSingleEntry4(2LL, v177, v176, v175, v174);
    WdLogGlobalForLineNumber = 5288;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"P-State engine regkey validation error - low: 0x%I64x high: 0x%I64x glitch: 0x%I64x ideal: 0x%I64x",
      v177,
      v176,
      v175,
      v174,
      0LL);
    goto LABEL_57;
  }
  v54 = 248LL * v29;
  v262.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v262.OutputDataSize = 136;
  if ( !is_mul_ok(v29, 0xF8uLL) )
    v54 = -1LL;
  v55 = operator new[](v54, 0x4B677844u, 64LL, v175);
  *((_QWORD *)this + 553) = v55;
  *((_DWORD *)this + 1108) = v29;
  if ( !v55 )
  {
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5304;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
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
  v56 = 0;
  for ( j = 0; v56 < *((_DWORD *)this + 842); ++v56 )
  {
    v58 = *((_QWORD *)this + 403);
    v59 = 520LL * v56;
    if ( !*(_DWORD *)(v59 + v58 + 208) )
      *(_QWORD *)(v59 + v58 + 512) = *((_QWORD *)this + 553) + 248LL * j++;
  }
  v60 = 0;
  *((_DWORD *)this + 1160) = v175;
  v61 = 0;
  *((_DWORD *)this + 1161) = v176;
  *((_DWORD *)this + 1162) = v177;
  *((_DWORD *)this + 1163) = v174;
  *((_DWORD *)this + 1164) = v189;
  v62 = 0;
  while ( 1 )
  {
    v171 = v60;
    if ( v62 >= v6 )
      break;
    v63 = *(_QWORD *)(520LL * v61 + *((_QWORD *)this + 403) + 512);
    if ( v63 )
    {
      v262.pOutputData = *(void **)(520LL * v61 + *((_QWORD *)this + 403) + 512);
      v262.pInputData = &v171;
      v64 = DXGADAPTER::DdiQueryAdapterInfo(this, &v262);
      v69 = v64;
      if ( v64 < 0 )
      {
        v71 = WdLogNewEntry5_WdTrace(v66, v65, v67, v68);
        *(_QWORD *)(v71 + 24) = v171;
        v72 = 0;
        *(_QWORD *)(v71 + 32) = v69;
        for ( WdLogGlobalForLineNumber = 5354; v72 < *((_DWORD *)this + 842); ++v72 )
        {
          v73 = 520LL * v72;
          v74 = *((_QWORD *)this + 403);
          if ( !*(_DWORD *)(v73 + v74 + 208) )
            *(_QWORD *)(v73 + v74 + 512) = 0LL;
        }
        v75 = (void *)*((_QWORD *)this + 553);
        *((_DWORD *)this + 1108) = 0;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v75);
        *((_QWORD *)this + 553) = 0LL;
        break;
      }
      v70 = v171;
      *(_QWORD *)(v63 + 136) = this;
      *(_DWORD *)(v63 + 144) = v70;
      *(_QWORD *)(v63 + 152) = v63;
      KeInitializeSpinLock((PKSPIN_LOCK)(v63 + 160));
      *(_DWORD *)(v63 + 244) = -1;
      *(_BYTE *)(v63 + 240) = 0;
      v60 = v171;
    }
    v62 = ++v60;
    v61 = v60;
  }
  v76 = *((_DWORD *)this + 1108);
  v77 = 0;
  v172 = v76;
LABEL_138:
  if ( v77 >= v76 )
    goto LABEL_151;
  v78 = *((_QWORD *)this + 553);
  v79 = v77;
  v80 = 248LL * v77;
  v81 = *(_DWORD *)(v80 + v78);
  v82 = *(unsigned int *)(v80 + v78 + 144);
  if ( v81 > 0x20 )
  {
    v90 = *(unsigned int *)(v80 + v78 + 144);
    WdLogSingleEntry1(2LL, v90);
    WdLogGlobalForLineNumber = 5409;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"P-State StateCount cannot be larger than DXGK_MAX_P_STATES. Component:0x%I64x",
      v90,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_57;
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= v81 )
    {
      v76 = v172;
      ++v77;
      goto LABEL_138;
    }
    v84 = 62 * v79;
    v85 = k;
    v86 = *(_DWORD *)(v78 + 4 * (k + v84) + 4);
    if ( !v86 )
    {
      v89 = *(unsigned int *)(v80 + v78 + 144);
      WdLogSingleEntry2(2LL, v82, k);
      WdLogGlobalForLineNumber = 5422;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"P-State cannot specify 0 operating frequency. Component:0x%I64x, P-State:0x%I64x",
        v89,
        v85,
        0LL,
        0LL,
        0LL);
LABEL_57:
      LODWORD(v5) = -1073741811;
      goto LABEL_211;
    }
    if ( k )
    {
      v87 = k - 1;
      if ( v86 > *(_DWORD *)(v78 + 4 * (v84 + v87) + 4) )
        break;
    }
    v79 = v77;
  }
  v88 = *(unsigned int *)(v80 + v78 + 144);
  WdLogSingleEntry3(2LL, v82, k, k - 1);
  WdLogGlobalForLineNumber = 5432;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"P-States must have monotonically decreasing operating frequency. Component:0x%I64x, P-State1:0x%I64x, P-State2:0x%I64x",
    v88,
    v85,
    v87,
    0LL,
    0LL);
LABEL_103:
  LODWORD(v5) = -1073741811;
LABEL_211:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
LABEL_212:
  v168 = *((_QWORD *)this + 404);
  if ( v168 )
  {
    PoFxUnregisterDevice(v168, v21, v22);
    *((_QWORD *)this + 404) = 0LL;
  }
  return (unsigned int)v5;
}
