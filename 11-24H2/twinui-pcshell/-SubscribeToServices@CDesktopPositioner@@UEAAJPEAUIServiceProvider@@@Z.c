/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180065FB4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094FB8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?CopyTo@?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7688 (-CopyTo@-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D4C64 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1800FF470 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1800FF498 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x180104990 (-IsUserOOBE@@YA_NXZ.c)
 *     RtlULongLongAdd @ 0x18018E718 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x18018F6A0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1801A4CC8 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1801DFCD4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x180208108 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x18023DC68 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x1802C96A4 (--4-$SP@EV-$SP_HLOCAL@E@@@@QEAAAEAV0@V-$CTypeWrapper@PEAE@@@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1802CBACC (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??4?$SP@KV?$SP_MEM@K@@@@QEAAAEAV0@V?$CTypeWrapper@PEAK@@@Z @ 0x1806830FC (--4-$SP@KV-$SP_MEM@K@@@@QEAAAEAV0@V-$CTypeWrapper@PEAK@@@Z.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1806CA2C4 (wcscmp_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  __int128 v2; // xmm1
  struct IServiceProvider *v3; // rsi
  CDesktopPositioner *v4; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v6; // rdi
  int v7; // edi
  __int64 v8; // rdx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 *v13; // rax
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v18; // rcx
  __int64 v19; // r9
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v21; // r15d
  int v22; // r12d
  int v23; // eax
  _BYTE *v24; // rbx
  int v25; // ecx
  unsigned int v26; // esi
  unsigned int v27; // r11d
  _BYTE *v28; // r12
  unsigned __int8 *v29; // r13
  __int64 v30; // r14
  int v31; // r10d
  int v32; // r9d
  int v33; // r11d
  unsigned int v34; // r8d
  int v35; // r11d
  unsigned int v36; // r8d
  int v37; // r11d
  int v38; // r8d
  unsigned int v39; // r11d
  int v40; // r8d
  int v41; // r11d
  int v42; // r8d
  unsigned int v43; // r11d
  int v44; // r8d
  int v45; // r11d
  unsigned int v46; // esi
  int v47; // r11d
  int v48; // esi
  int v49; // r11d
  int v50; // esi
  unsigned int v51; // r11d
  int v52; // esi
  int v53; // r11d
  int v54; // esi
  unsigned int v55; // r11d
  int v56; // esi
  unsigned __int64 v57; // rax
  char v58; // cl
  int v59; // r14d
  unsigned int v60; // r15d
  HMODULE *v61; // rdi
  __int64 v62; // rbx
  __int64 (__fastcall **v63)(); // rax
  __int64 (__fastcall **v64)(); // rcx
  __int64 v65; // rdx
  const WCHAR *v66; // rdx
  __int64 v67; // rax
  _BYTE *v68; // rbx
  HMODULE *v69; // rdi
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  unsigned int v72; // r12d
  unsigned int nn; // edi
  const CHAR *v74; // rdx
  __int64 v75; // rax
  __int64 (__fastcall *v76)(); // rdx
  int v77; // eax
  HANDLE v78; // rax
  int v79; // esi
  signed int LastError; // edi
  __int64 v81; // r14
  wchar_t *v82; // rax
  bool v83; // sf
  wchar_t *v84; // rbx
  __int64 j; // r9
  wchar_t *v86; // r8
  signed int v87; // eax
  __int64 (__fastcall *v88)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v90; // r14
  wchar_t *v91; // rax
  bool v92; // sf
  wchar_t *v93; // rbx
  __int64 k; // r9
  wchar_t *v95; // r8
  signed int v96; // eax
  HANDLE CurrentProcess; // rax
  unsigned int v98; // r13d
  HLOCAL v99; // rax
  int v100; // r12d
  int v101; // esi
  _QWORD *v102; // rbx
  HANDLE ProcessHeap; // rax
  WCHAR *v104; // rsi
  HANDLE v105; // rax
  int v106; // edi
  int v107; // eax
  int v108; // eax
  unsigned int v109; // r11d
  int v110; // eax
  int v111; // r9d
  unsigned int v112; // r11d
  int v113; // r10d
  int v114; // eax
  unsigned int v115; // r11d
  int v116; // r10d
  int v117; // eax
  size_t v118; // rdx
  int v119; // r10d
  int v120; // eax
  int v121; // eax
  unsigned int v122; // r11d
  int v123; // r10d
  int v124; // eax
  int v125; // r10d
  unsigned int v126; // edi
  HANDLE v127; // rax
  void *v128; // rax
  int v129; // r11d
  int v130; // eax
  _DWORD *v131; // r10
  int v132; // r10d
  int v133; // r11d
  int v134; // r11d
  int *v135; // r10
  unsigned __int64 v136; // r10
  unsigned int v137; // r11d
  size_t v138; // r9
  _DWORD *v139; // r10
  int v140; // r10d
  int v141; // r11d
  int v142; // r11d
  int *v143; // r9
  unsigned __int64 v144; // r9
  unsigned int v145; // r11d
  _DWORD *v146; // r9
  size_t v147; // rdx
  int v148; // r10d
  int *v149; // rdi
  unsigned int v150; // r11d
  unsigned int v151; // r11d
  int v152; // r10d
  int *v153; // rdi
  int v154; // r10d
  __int64 v155; // r9
  int v156; // r10d
  int v157; // r11d
  int v158; // r11d
  int *v159; // rdi
  unsigned int v160; // r11d
  int v161; // r10d
  unsigned int v162; // r11d
  int *v163; // rdi
  unsigned int v164; // r11d
  unsigned int v165; // ecx
  unsigned int v166; // edi
  unsigned int v167; // r11d
  unsigned int v168; // r11d
  unsigned int v169; // r11d
  unsigned int v170; // r11d
  unsigned int v171; // r9d
  int v172; // r12d
  unsigned int v173; // ecx
  unsigned int v174; // edi
  HANDLE v175; // rax
  char *v176; // rax
  char *v177; // rdi
  unsigned int v178; // r9d
  void *v179; // rcx
  HANDLE v180; // rax
  unsigned __int8 *v181; // r12
  unsigned __int64 v182; // rdi
  char *v183; // r8
  unsigned __int8 v184; // al
  unsigned __int64 v185; // rcx
  unsigned __int8 *v186; // rdx
  unsigned int v187; // r10d
  unsigned int v188; // r11d
  unsigned int v189; // edi
  int v190; // r9d
  unsigned int v191; // r11d
  char v192; // r10
  int v193; // eax
  int v194; // r8d
  int v195; // ecx
  unsigned int v196; // r11d
  unsigned int v197; // r8d
  unsigned int v198; // r15d
  int v199; // r14d
  char *v200; // r13
  char v201; // al
  int v202; // edi
  unsigned __int8 *v203; // rcx
  int v204; // r15d
  int v205; // r13d
  unsigned __int64 v206; // r12
  unsigned int v207; // esi
  int v208; // r9d
  int v209; // r8d
  int v210; // r11d
  int v211; // r10d
  int v212; // r11d
  int v213; // r10d
  int v214; // r11d
  unsigned int v215; // r10d
  int v216; // r11d
  int v217; // r10d
  int v218; // r11d
  int v219; // r10d
  int v220; // r11d
  int v221; // r10d
  unsigned int v222; // r11d
  unsigned int v223; // r10d
  int v224; // r11d
  int v225; // r10d
  int v226; // r11d
  int v227; // r10d
  int v228; // r11d
  int v229; // r10d
  int v230; // r11d
  int v231; // r10d
  unsigned int v232; // r11d
  int v233; // r10d
  int v234; // r11d
  HANDLE v235; // rax
  LPVOID v236; // rdi
  HANDLE v237; // rax
  void *v238; // rax
  HANDLE v239; // rax
  LPVOID v240; // rax
  _OWORD *v241; // rcx
  HANDLE v242; // rax
  LPVOID v243; // rax
  int v244; // r12d
  HANDLE v245; // rax
  HANDLE v246; // rax
  HANDLE v247; // rax
  HANDLE v248; // rax
  HANDLE v249; // rax
  int v250; // r11d
  int v251; // r12d
  int v252; // r11d
  unsigned int v253; // edi
  HANDLE v254; // rax
  WCHAR *v255; // rax
  const void **v256; // rdi
  WCHAR *v257; // rcx
  void *v258; // rcx
  WCHAR *v259; // r9
  void *v260; // rcx
  WCHAR *v261; // r9
  HANDLE v262; // rax
  int v263; // eax
  void *v264; // r9
  void *v265; // r10
  unsigned int v266; // ecx
  LPVOID v267; // r10
  SIZE_T v268; // rax
  HANDLE v269; // rax
  _QWORD *v270; // rdi
  HANDLE v271; // rax
  HANDLE v272; // rax
  HANDLE v273; // rax
  HANDLE v274; // rax
  void *v275; // rdi
  HANDLE v276; // rax
  HANDLE v277; // rax
  unsigned __int16 *v278; // rdi
  HANDLE v279; // rax
  HANDLE v280; // rax
  HANDLE v281; // rax
  HANDLE v282; // rax
  HANDLE v283; // rax
  void *v284; // r13
  HANDLE v285; // rax
  void *v286; // r13
  HANDLE v287; // rax
  HANDLE v288; // rax
  HANDLE v289; // rax
  DWORD ModuleFileNameW; // eax
  void *v291; // rdi
  void *v292; // r9
  void *v293; // r10
  void *v294; // r12
  unsigned int *v295; // rcx
  unsigned int v296; // edi
  int v297; // r10d
  void *v298; // r9
  _DWORD *v299; // rcx
  unsigned int kk; // edi
  unsigned int v301; // r10d
  int v302; // edi
  void *v303; // r9
  int v304; // ecx
  void *v305; // r9
  unsigned int v306; // edi
  HANDLE v307; // rax
  WCHAR *v308; // rax
  WCHAR *v309; // rdi
  signed int v310; // eax
  FARPROC v311; // rax
  int v312; // eax
  unsigned int v313; // r11d
  int v314; // r12d
  unsigned __int16 *v315; // rcx
  unsigned int v316; // r9d
  int v317; // r11d
  int v318; // r9d
  int v319; // r11d
  unsigned int v320; // edi
  int v321; // r11d
  int v322; // r11d
  unsigned int v323; // r10d
  int v324; // r11d
  int v325; // r9d
  int v326; // r10d
  int v327; // r11d
  HANDLE v328; // rax
  SIZE_T v329; // rcx
  HANDLE v330; // rax
  void *v331; // rcx
  void *v332; // rdi
  HANDLE v333; // rax
  void *v334; // rcx
  HANDLE v335; // rax
  void *v336; // rcx
  SIZE_T v337; // rax
  HANDLE v338; // rax
  HANDLE v339; // rax
  HANDLE v340; // rax
  HANDLE v341; // rax
  unsigned __int16 *v342; // rax
  unsigned __int16 *v343; // r10
  HANDLE v344; // rax
  HANDLE v345; // rax
  HANDLE v346; // rax
  HANDLE v347; // rax
  int v348; // r12d
  char *v349; // rax
  _DWORD *v350; // r9
  unsigned __int8 v351; // dl
  unsigned __int8 *v352; // r8
  int v353; // r10d
  unsigned __int16 *v354; // r11
  char v355; // cl
  void *v356; // rax
  int v357; // r13d
  int v358; // r12d
  int v359; // ecx
  unsigned int v360; // r12d
  int v361; // r9d
  unsigned int v362; // r8d
  unsigned int v363; // edx
  SIZE_T v364; // r14
  int v365; // ecx
  char *v366; // rcx
  int v367; // edi
  int v368; // r8d
  int v369; // edx
  _BYTE *v370; // r11
  unsigned __int8 *v371; // rsi
  int v372; // r14d
  size_t v373; // r13
  int v374; // ebx
  int v375; // r10d
  int v376; // r9d
  int v377; // r12d
  unsigned int v378; // r8d
  int v379; // r12d
  unsigned int v380; // r8d
  int v381; // r12d
  int v382; // r8d
  unsigned int v383; // r12d
  int v384; // r8d
  int v385; // r12d
  int v386; // r8d
  unsigned int v387; // r12d
  int v388; // r8d
  int v389; // r12d
  unsigned int v390; // r8d
  int v391; // r12d
  int v392; // r8d
  int v393; // r12d
  int v394; // r8d
  unsigned int v395; // r12d
  int v396; // r8d
  int v397; // r12d
  int v398; // r8d
  unsigned int v399; // r12d
  int v400; // r8d
  size_t mm; // rax
  void *v402; // rdi
  int v403; // r12d
  unsigned __int16 *v404; // r9
  unsigned __int16 *v405; // r10
  unsigned __int16 *v406; // r9
  unsigned __int16 *v407; // r10
  void *v408; // rdx
  void *v409; // r8
  unsigned __int16 *v410; // r9
  unsigned __int16 *v411; // r10
  _QWORD *v412; // r11
  unsigned __int16 *v413; // r9
  unsigned __int16 *v414; // r10
  _QWORD *v415; // r11
  unsigned __int16 *v416; // r9
  unsigned __int16 *v417; // r10
  unsigned __int64 v418; // rdi
  unsigned __int64 v419; // r11
  int *v420; // r11
  unsigned __int64 v421; // r11
  void *v422; // r9
  unsigned __int16 *v423; // r10
  unsigned __int64 v424; // rcx
  unsigned int v425; // ecx
  HANDLE v426; // rax
  void *v427; // rdi
  int v428; // edi
  _DWORD *v429; // r10
  __int64 v430; // r11
  _DWORD *v431; // r12
  _DWORD *v432; // rcx
  int v433; // edi
  unsigned int v434; // r9d
  int v435; // edi
  _DWORD *v436; // r10
  __int64 v437; // r11
  _DWORD *v438; // rax
  _DWORD *v439; // rcx
  unsigned int v440; // edi
  unsigned int v441; // r9d
  int v442; // edi
  _DWORD *v443; // r10
  __int64 v444; // r11
  _DWORD *v445; // rax
  _DWORD *v446; // rcx
  unsigned int v447; // edi
  unsigned int v448; // r9d
  int v449; // edi
  _DWORD *v450; // r10
  _DWORD *v451; // r11
  _DWORD *v452; // rcx
  unsigned int v453; // edi
  unsigned int v454; // r9d
  int v455; // edi
  _DWORD *v456; // r10
  _DWORD *v457; // rax
  unsigned int *v458; // rcx
  unsigned int v459; // edi
  const void *v460; // r11
  unsigned int *v461; // rdi
  unsigned int v462; // esi
  int v463; // eax
  char *v464; // rax
  int v465; // ecx
  unsigned int v466; // r15d
  unsigned int v467; // r11d
  _BYTE *v468; // r14
  unsigned __int8 *v469; // rsi
  __int64 v470; // r13
  int v471; // ebx
  int v472; // r10d
  int v473; // r9d
  int v474; // r11d
  unsigned int v475; // r8d
  int v476; // r11d
  unsigned int v477; // r8d
  int v478; // r11d
  int v479; // r8d
  unsigned int v480; // r11d
  int v481; // r8d
  int v482; // r11d
  int v483; // r8d
  unsigned int v484; // r11d
  int v485; // edx
  int v486; // r11d
  unsigned int v487; // r15d
  int v488; // r11d
  int v489; // r15d
  int v490; // edx
  int v491; // r15d
  unsigned int v492; // r11d
  int v493; // r15d
  int v494; // r11d
  int v495; // r15d
  unsigned int v496; // r11d
  int v497; // r15d
  unsigned __int64 v498; // rax
  char v499; // cl
  WCHAR *v500; // rbx
  int v501; // r13d
  HMODULE *v502; // rdi
  __int64 v503; // rbx
  __int64 (__fastcall **v504)(); // rax
  __int64 (__fastcall **v505)(); // rcx
  __int64 v506; // rdx
  const WCHAR *v507; // rdx
  __int64 v508; // rax
  WCHAR *v509; // rbx
  HMODULE *v510; // rdi
  __int64 v511; // rcx
  unsigned __int64 v512; // rcx
  unsigned int v513; // edi
  __int64 v514; // rcx
  const CHAR *v515; // rdx
  __int64 v516; // rax
  __int64 (__fastcall *v517)(); // rax
  void *v518; // rdi
  HANDLE v519; // rax
  int v520; // eax
  char *v521; // rax
  int v522; // ecx
  unsigned int v523; // r14d
  unsigned int v524; // r11d
  _BYTE *v525; // r15
  unsigned __int8 *v526; // rsi
  __int64 v527; // r13
  int v528; // ebx
  int v529; // r10d
  int v530; // r9d
  int v531; // r11d
  unsigned int v532; // r8d
  int v533; // r11d
  unsigned int v534; // r8d
  int v535; // r11d
  int v536; // r8d
  unsigned int v537; // r11d
  int v538; // r8d
  int v539; // r11d
  int v540; // r8d
  unsigned int v541; // r11d
  int v542; // r8d
  int v543; // r11d
  unsigned int v544; // r14d
  int v545; // r11d
  int v546; // r14d
  int v547; // edx
  int v548; // r14d
  unsigned int v549; // r11d
  int v550; // r14d
  int v551; // r11d
  int v552; // r14d
  unsigned int v553; // r11d
  int v554; // r14d
  unsigned __int64 v555; // rax
  char v556; // cl
  WCHAR *v557; // rbx
  int v558; // r13d
  HMODULE *v559; // rdi
  __int64 v560; // rbx
  __int64 (__fastcall **v561)(); // rax
  __int64 (__fastcall **v562)(); // rcx
  __int64 v563; // rdx
  const WCHAR *v564; // rdx
  __int64 v565; // rax
  WCHAR *v566; // rbx
  HMODULE *v567; // rdi
  __int64 v568; // rcx
  unsigned __int64 v569; // rcx
  unsigned int v570; // edi
  __int64 v571; // rcx
  const CHAR *v572; // rdx
  __int64 v573; // rax
  __int64 (__fastcall *v574)(); // rax
  void *v575; // rdi
  HANDLE v576; // rax
  unsigned int v577; // ebx
  signed int v578; // eax
  signed int v579; // r13d
  _DWORD *v580; // rdi
  bool v581; // sf
  LPVOID v582; // rax
  LPVOID v583; // rax
  _DWORD *v584; // rbx
  unsigned int v585; // r13d
  unsigned int v586; // r9d
  __int64 v587; // r8
  unsigned int v588; // ecx
  int *v589; // rdx
  bool v590; // sf
  _DWORD *v591; // rax
  char *v592; // rdi
  _DWORD *v593; // r15
  unsigned int ii; // r14d
  __int64 v595; // rax
  const wchar_t *v596; // rcx
  const wchar_t **v597; // rdx
  __int64 v598; // rdi
  __int64 v599; // rax
  __int64 v600; // rcx
  unsigned __int16 *v601; // rbx
  char *v602; // r11
  unsigned __int16 *v603; // r8
  int v604; // eax
  unsigned int v605; // r14d
  unsigned int v606; // r13d
  _BYTE *v607; // r15
  unsigned __int8 *v608; // rsi
  __int64 v609; // rbx
  int v610; // r11d
  int v611; // r10d
  int v612; // r9d
  int v613; // r13d
  unsigned int v614; // r8d
  int v615; // r13d
  unsigned int v616; // r8d
  int v617; // r13d
  int v618; // r8d
  unsigned int v619; // r13d
  int v620; // r8d
  int v621; // r13d
  int v622; // r8d
  unsigned int v623; // r13d
  int v624; // r8d
  int v625; // r13d
  unsigned int v626; // r14d
  int v627; // r13d
  int v628; // r14d
  int v629; // r13d
  int v630; // r14d
  unsigned int v631; // r13d
  int v632; // r14d
  int v633; // r13d
  int v634; // r14d
  unsigned int v635; // r13d
  int v636; // r14d
  unsigned __int64 v637; // rcx
  char v638; // al
  _BYTE *v639; // r11
  unsigned __int64 v640; // rcx
  _QWORD *v641; // rdx
  __int64 v642; // r8
  unsigned int jj; // ecx
  __int64 v644; // rax
  LPVOID v645; // rax
  _QWORD *v646; // rbx
  unsigned int v647; // r8d
  _QWORD *v648; // rdx
  __int16 *v649; // rcx
  __int64 v650; // rax
  __int16 v651; // r9
  __int16 *v652; // rcx
  void *v653; // rax
  __int64 v654; // r9
  int v655; // eax
  LPVOID v656; // rax
  __int64 v657; // r9
  void **v658; // rax
  signed int v659; // eax
  signed int v660; // eax
  unsigned __int16 *v661; // rax
  __int64 v662; // rcx
  _WORD *v663; // rdi
  __int64 v664; // rcx
  void **v665; // rax
  void **v666; // rax
  void **v667; // rax
  signed int v668; // eax
  unsigned int v669; // ebx
  unsigned __int16 *v670; // rax
  bool v671; // sf
  int v672; // eax
  HMODULE *v673; // rdi
  __int64 v674; // rbx
  __int64 (__fastcall **v675)(); // rax
  __int64 (__fastcall **v676)(); // rcx
  __int64 v677; // rdx
  int v678; // esi
  unsigned int v679; // edi
  int v680; // ebx
  __int64 v681; // rax
  __int64 v682; // rax
  bool v683; // sf
  unsigned __int16 *v684; // rax
  signed int v685; // eax
  __int64 v686; // rax
  int v687; // ebx
  signed int v688; // eax
  unsigned int v689; // edx
  int v690; // eax
  __int32 v691; // ebx
  void *v692; // rdi
  int v693; // edi
  void *v694; // rdi
  int v695; // edi
  int v696; // edi
  __int64 v697; // rdx
  __int64 v698; // rdi
  bool v699; // sf
  __int64 v700; // rax
  bool v701; // sf
  void *v702; // rdi
  __int64 v703; // rbx
  int v704; // edi
  int v705; // eax
  unsigned __int64 v706; // rdx
  __int32 v707; // edx
  int v708; // r13d
  int v709; // ebx
  int v710; // edi
  int v711; // edi
  CToastCenterExperienceManager *v712; // rax
  int v713; // edx
  int v714; // ecx
  CToastCenterExperienceManager *v715; // rax
  int v716; // eax
  void *v717; // rdi
  __int64 v718; // rax
  __int64 v719; // rax
  CToastCenterExperienceManager *v720; // r13
  unsigned __int16 *v721; // rax
  unsigned __int16 *v722; // rdi
  signed int v723; // edi
  bool v724; // sf
  int v725; // eax
  const WCHAR *v726; // rcx
  __int64 (__fastcall *v727)(); // rdi
  __int64 v728; // rax
  __int32 v729; // r9d
  __int32 v730; // r10d
  __int32 v731; // edx
  __int32 v732; // r8d
  int v733; // ecx
  int v734; // r11d
  WCHAR *v735; // rdx
  __int64 v736; // rdi
  unsigned __int16 *v737; // rax
  int v738; // r8d
  unsigned __int8 *v739; // r9
  signed __int64 v740; // r10
  int v741; // r8d
  void *v742; // rdi
  __int64 v743; // rax
  __int64 v744; // rcx
  __int64 v745; // rcx
  __int64 v746; // rcx
  int v747; // eax
  HMODULE *v748; // rdi
  __int64 v749; // rbx
  __int64 (__fastcall **v750)(); // rax
  __int64 (__fastcall **v751)(); // rcx
  __int64 v752; // rdx
  int v753; // r13d
  int v754; // eax
  char *v755; // rbx
  int v756; // r15d
  int v757; // esi
  unsigned int v758; // r13d
  unsigned int v759; // r11d
  _BYTE *v760; // r14
  unsigned __int8 *v761; // rcx
  __int64 v762; // rbx
  int v763; // r10d
  int v764; // r9d
  int v765; // r11d
  unsigned int v766; // r8d
  int v767; // r11d
  unsigned int v768; // r8d
  int v769; // r11d
  int v770; // r8d
  unsigned int v771; // r11d
  int v772; // r8d
  int v773; // r11d
  int v774; // r8d
  unsigned int v775; // r11d
  int v776; // r8d
  int v777; // r11d
  unsigned int v778; // r13d
  int v779; // r11d
  int v780; // r13d
  int v781; // r11d
  int v782; // r13d
  unsigned int v783; // r11d
  int v784; // r13d
  int v785; // r11d
  int v786; // r13d
  unsigned int v787; // r11d
  int v788; // r13d
  unsigned __int64 v789; // rax
  char v790; // cl
  const WCHAR *v791; // rbx
  int v792; // esi
  HMODULE *v793; // rdi
  __int64 v794; // rbx
  __int64 (__fastcall **v795)(); // rax
  __int64 (__fastcall **v796)(); // rcx
  __int64 v797; // rdx
  __int64 v798; // rax
  CToastCenterExperienceManager *v799; // r13
  unsigned __int16 *v800; // rax
  unsigned __int16 *v801; // rdi
  signed int v802; // eax
  signed int v803; // edi
  int v804; // eax
  const WCHAR *v805; // rcx
  __int64 (__fastcall *v806)(); // rdi
  __int64 v807; // rax
  int v808; // eax
  __int32 v809; // r8d
  __int32 v810; // r10d
  __int32 v811; // r9d
  __int32 v812; // edx
  int v813; // esi
  int v814; // r11d
  WCHAR *v815; // r8
  __int64 v816; // rdi
  unsigned __int16 *v817; // rax
  int v818; // r14d
  unsigned __int8 *v819; // r9
  signed __int64 v820; // r10
  char v821; // r15
  int v822; // r8d
  size_t v823; // rdi
  CToastCenterExperienceManager *v824; // r13
  char v825; // al
  unsigned __int32 v826; // ebx
  __int32 v827; // ecx
  int v828; // r11d
  int v829; // edi
  int v830; // r13d
  void *v831; // rax
  __int64 v832; // rax
  void *v833; // rcx
  __int64 v834; // rax
  unsigned __int16 *v835; // rax
  signed int v836; // edi
  bool v837; // sf
  int v838; // eax
  char *v839; // rcx
  __int64 (__fastcall *v840)(); // rdi
  __int64 v841; // rax
  int v842; // eax
  int v843; // r8d
  int v844; // r9d
  int v845; // ecx
  int v846; // r10d
  unsigned __int64 v847; // rdx
  __int64 v848; // r11
  int v849; // eax
  unsigned __int16 *v850; // rax
  signed int v851; // r11d
  int v852; // r15d
  unsigned __int16 *v853; // rsi
  int v854; // r8d
  unsigned __int8 *v855; // r9
  signed __int64 v856; // r10
  int v857; // r8d
  void *v858; // rdi
  bool v859; // zf
  __int64 v860; // rax
  unsigned __int16 *v861; // rax
  CToastCenterExperienceManager *v862; // rdi
  __int64 v863; // rax
  signed int v864; // edi
  bool v865; // sf
  unsigned __int16 *v866; // r13
  int v867; // eax
  unsigned __int16 *v868; // rcx
  __int64 (__fastcall *v869)(); // rdi
  __int64 v870; // rax
  int v871; // eax
  int v872; // r9d
  int v873; // r10d
  int v874; // ecx
  int v875; // r8d
  unsigned __int64 v876; // rdx
  __int64 v877; // r11
  int v878; // eax
  unsigned __int16 *v879; // rax
  signed int v880; // r11d
  int v881; // r14d
  unsigned __int16 *v882; // r15
  char v883; // si
  int v884; // r8d
  unsigned __int8 *v885; // r9
  char *v886; // r10
  int v887; // r8d
  WCHAR *v888; // r13
  const WCHAR *v889; // rdx
  __int64 v890; // rax
  const WCHAR *v891; // rbx
  HMODULE *v892; // rdi
  __int64 v893; // rcx
  unsigned __int64 v894; // rcx
  unsigned int v895; // edi
  __int64 v896; // rcx
  const CHAR *v897; // rdx
  __int64 v898; // rax
  __int64 (__fastcall *v899)(); // rax
  HANDLE v900; // rax
  __int64 v901; // rbx
  int v902; // eax
  HMODULE *v903; // rdi
  __int64 (__fastcall **v904)(); // rax
  __int64 (__fastcall **v905)(); // rcx
  __int64 v906; // rdx
  void *v907; // rbx
  HANDLE v908; // rax
  _OWORD *v909; // rsi
  HANDLE v910; // rax
  _QWORD *v911; // rax
  unsigned int v912; // r10d
  int v913; // r11d
  int v914; // eax
  unsigned int v915; // r10d
  int v916; // r11d
  int v917; // r9d
  int v918; // eax
  unsigned int v919; // r10d
  int v920; // r11d
  int v921; // r9d
  int v922; // eax
  int v923; // r9d
  unsigned int v924; // edi
  HANDLE v925; // rax
  LPVOID v926; // rax
  int v927; // eax
  unsigned int *v928; // r9
  unsigned int v929; // r10d
  __int64 v930; // r11
  int v931; // r9d
  unsigned int v932; // r10d
  __int64 v933; // r11
  int *v934; // r10
  unsigned __int64 v935; // r10
  unsigned int v936; // r9d
  int v937; // r11d
  _DWORD *v938; // r10
  unsigned int v939; // edi
  unsigned int v940; // r10d
  __int64 v941; // r11
  int *v942; // r9
  unsigned __int64 v943; // r9
  int v944; // r10d
  _DWORD *v945; // r9
  unsigned int v946; // edi
  unsigned int v947; // r10d
  int v948; // r11d
  int *v949; // r9
  unsigned __int64 v950; // r9
  int v951; // r10d
  _DWORD *v952; // r9
  unsigned int v953; // ecx
  int v954; // r11d
  unsigned int v955; // edi
  _DWORD *v956; // r11
  _DWORD *v957; // r13
  int v958; // edi
  unsigned int v959; // r9d
  WCHAR *v960; // r11
  unsigned int v961; // ecx
  unsigned int v962; // edi
  HANDLE v963; // rax
  _DWORD *v964; // rax
  unsigned int v965; // r10d
  void *v966; // rcx
  void *v967; // rcx
  char *v968; // r9
  HANDLE v969; // rax
  int v970; // edi
  void *v971; // rdi
  char *v972; // rcx
  unsigned int v973; // r11d
  unsigned __int8 v974; // al
  unsigned __int64 v975; // rdx
  unsigned __int8 v976; // r8
  unsigned __int8 *v977; // r9
  char *v978; // rdx
  int v979; // r8d
  int v980; // r10d
  int v981; // edx
  char v982; // r11
  unsigned int v983; // eax
  int v984; // r8d
  unsigned int v985; // ecx
  unsigned int v986; // r8d
  unsigned int v987; // r15d
  unsigned int v988; // r14d
  int v989; // r12d
  char *v990; // r13
  char v991; // cl
  int v992; // edi
  int v993; // ebx
  unsigned __int8 *v994; // rdx
  int v995; // r15d
  int v996; // r13d
  unsigned __int64 v997; // rax
  unsigned int v998; // r12d
  int v999; // r10d
  int v1000; // r9d
  int v1001; // r8d
  int v1002; // r11d
  int v1003; // r8d
  int v1004; // r11d
  int v1005; // r8d
  unsigned int v1006; // r11d
  int v1007; // r8d
  int v1008; // r11d
  int v1009; // r8d
  int v1010; // r11d
  int v1011; // r8d
  int v1012; // r11d
  unsigned int v1013; // r8d
  unsigned int v1014; // r11d
  int v1015; // r8d
  int v1016; // r11d
  int v1017; // r8d
  int v1018; // r11d
  int v1019; // r8d
  int v1020; // r11d
  int v1021; // r8d
  int v1022; // r11d
  unsigned int v1023; // r8d
  int v1024; // r11d
  int v1025; // r8d
  unsigned int v1026; // r8d
  HANDLE v1027; // rax
  _QWORD *v1028; // r14
  HANDLE v1029; // rax
  void *v1030; // rax
  HANDLE v1031; // rax
  _OWORD *v1032; // rax
  HANDLE v1033; // rax
  _QWORD *v1034; // rax
  int v1035; // edi
  HANDLE v1036; // rax
  HANDLE v1037; // rax
  HANDLE v1038; // rax
  HANDLE v1039; // rax
  void *v1040; // r14
  HANDLE v1041; // rax
  WCHAR *v1042; // rax
  HANDLE v1043; // rax
  HANDLE v1044; // rax
  HANDLE v1045; // rax
  HANDLE v1046; // rax
  int v1047; // edi
  int v1048; // r11d
  int v1049; // r11d
  unsigned int v1050; // edi
  HANDLE v1051; // rax
  _DWORD *v1052; // rax
  LPVOID v1053; // rcx
  void *v1054; // rcx
  void *v1055; // r9
  void *v1056; // rcx
  void *v1057; // r9
  HANDLE v1058; // rax
  int v1059; // eax
  SIZE_T v1060; // r9
  unsigned int v1061; // ecx
  HANDLE v1062; // rax
  void *v1063; // r14
  HANDLE v1064; // rax
  void *v1065; // r14
  HANDLE v1066; // rax
  void *v1067; // r14
  HANDLE v1068; // rax
  HANDLE v1069; // rax
  void *v1070; // r14
  HANDLE v1071; // rax
  HANDLE v1072; // rax
  void *v1073; // r15
  HANDLE v1074; // rax
  void *v1075; // r15
  HANDLE v1076; // rax
  void *v1077; // r15
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  unsigned __int16 *v1080; // r14
  HANDLE v1081; // rax
  _DWORD *v1082; // rdi
  unsigned int v1083; // r9d
  __int64 v1084; // r10
  _DWORD *v1085; // r11
  _DWORD *v1086; // rax
  int v1087; // r9d
  SIZE_T v1088; // r9
  int v1089; // r10d
  unsigned int *v1090; // rcx
  int v1091; // r10d
  SIZE_T v1092; // r9
  unsigned int *v1093; // rcx
  int v1094; // r10d
  SIZE_T v1095; // r9
  int v1096; // ecx
  int v1097; // r10d
  SIZE_T v1098; // r9
  unsigned int v1099; // edi
  HANDLE v1100; // rax
  WCHAR *v1101; // rax
  WCHAR *v1102; // rdx
  signed int v1103; // eax
  FARPROC ProcAddress; // rax
  int v1105; // eax
  unsigned int v1106; // r9d
  int v1107; // edi
  int v1108; // r9d
  __int64 v1109; // r11
  int v1110; // r11d
  int v1111; // r9d
  int v1112; // r9d
  unsigned int v1113; // r10d
  int v1114; // r10d
  int v1115; // r9d
  int v1116; // r9d
  int v1117; // r9d
  int v1118; // r10d
  int v1119; // r11d
  HANDLE v1120; // rax
  SIZE_T *v1121; // rax
  SIZE_T *v1122; // rcx
  HANDLE v1123; // rax
  void *v1124; // rcx
  HANDLE v1125; // rax
  void *v1126; // rcx
  HANDLE v1127; // rax
  void *v1128; // rcx
  SIZE_T *v1129; // rax
  HANDLE v1130; // rax
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  HANDLE v1133; // rax
  unsigned __int16 *v1134; // r10
  SIZE_T v1135; // rdi
  unsigned __int16 *v1136; // r9
  unsigned __int8 v1137; // dl
  unsigned __int8 *v1138; // rax
  unsigned int v1139; // r10d
  unsigned int v1140; // r8d
  unsigned __int16 *v1141; // r11
  int v1142; // edi
  int v1143; // ecx
  unsigned int v1144; // edi
  unsigned int v1145; // edx
  unsigned int v1146; // r9d
  int v1147; // r12d
  unsigned __int8 *v1148; // r15
  char v1149; // al
  char *v1150; // rcx
  unsigned int v1151; // edi
  int v1152; // r13d
  _BYTE *v1153; // r14
  unsigned __int8 *v1154; // r12
  int v1155; // edx
  char *v1156; // r11
  int v1157; // esi
  int v1158; // ebx
  int v1159; // r10d
  int v1160; // r9d
  int v1161; // r8d
  unsigned int v1162; // edi
  int v1163; // r8d
  unsigned int v1164; // edi
  int v1165; // r8d
  int v1166; // edi
  unsigned int v1167; // r8d
  int v1168; // r8d
  int v1169; // edi
  unsigned int v1170; // r8d
  int v1171; // edi
  int v1172; // r8d
  int v1173; // r8d
  int v1174; // r8d
  int v1175; // edi
  unsigned int v1176; // r8d
  int v1177; // r8d
  unsigned int v1178; // r8d
  SIZE_T n; // rax
  int v1180; // edi
  unsigned __int16 *v1181; // r9
  unsigned __int16 *v1182; // r10
  unsigned __int16 *v1183; // r9
  unsigned __int16 *v1184; // r10
  SIZE_T v1185; // r8
  unsigned __int16 *v1186; // r9
  unsigned __int16 *v1187; // r10
  void *v1188; // r14
  void *v1189; // rcx
  unsigned __int16 *v1190; // r9
  unsigned __int16 *v1191; // r10
  SIZE_T v1192; // r11
  unsigned __int16 *v1193; // r15
  int *v1194; // r11
  unsigned __int64 v1195; // r11
  SIZE_T v1196; // r9
  unsigned __int16 *v1197; // r10
  SIZE_T v1198; // rax
  unsigned int v1199; // eax
  HANDLE v1200; // rax
  void *v1201; // rdi
  HANDLE v1202; // rax
  void *v1203; // rdi
  HANDLE v1204; // rax
  HANDLE v1205; // rax
  HANDLE v1206; // rax
  int v1207; // eax
  HMODULE *v1208; // rdi
  __int64 v1209; // rbx
  __int64 v1210; // rax
  __int64 (__fastcall **v1211)(); // rcx
  __int64 (__fastcall **v1212)(); // rdx
  int v1213; // edi
  Windows::Internal::DeviceCapabilitiesW *v1214; // rcx
  bool IsScreenSizeRequirementMet; // al
  HRESULT (__stdcall *v1216)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  char *v1217; // rdx
  char *v1218; // rdx
  HRESULT (__stdcall *v1219)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v1220; // rbx
  __int64 (__fastcall *v1221)(__int64, __int64, __int64 **); // rdi
  int v1222; // eax
  __int64 v1223; // rdx
  unsigned int i; // esi
  __int64 v1225; // rbx
  int (__fastcall *v1226)(__int64, _QWORD, __int64 *); // rdi
  int v1227; // eax
  __int64 v1228; // rax
  int v1229; // eax
  int v1230; // eax
  __int64 v1231; // rdx
  char *v1232; // rdx
  unsigned __int8 v1234; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1235; // [rsp+60h] [rbp-A0h]
  WCHAR *lpModuleName; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamea; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameb; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamec; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamed; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNamee; // [rsp+68h] [rbp-98h]
  int lpModuleNamef; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameg; // [rsp+68h] [rbp-98h]
  LPCWSTR lpModuleNameh; // [rsp+68h] [rbp-98h]
  int lpModuleNamei; // [rsp+68h] [rbp-98h]
  int lpModuleNamej; // [rsp+68h] [rbp-98h]
  int lpModuleNamek; // [rsp+68h] [rbp-98h]
  int lpModuleNamel; // [rsp+68h] [rbp-98h]
  int lpModuleNamem; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamen; // [rsp+68h] [rbp-98h]
  int lpModuleNameo; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamep; // [rsp+68h] [rbp-98h]
  int lpModuleNameq; // [rsp+68h] [rbp-98h]
  int lpModuleNames; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamet; // [rsp+68h] [rbp-98h]
  int lpModuleNameu; // [rsp+68h] [rbp-98h]
  int lpModuleNamev; // [rsp+68h] [rbp-98h]
  int lpModuleNamew; // [rsp+68h] [rbp-98h]
  int lpModuleNamex; // [rsp+68h] [rbp-98h]
  unsigned int lpModuleNamey; // [rsp+68h] [rbp-98h]
  int lpModuleNamer; // [rsp+68h] [rbp-98h]
  SIZE_T v1262; // [rsp+70h] [rbp-90h]
  SIZE_T v1263; // [rsp+70h] [rbp-90h]
  WCHAR *v1264; // [rsp+70h] [rbp-90h]
  int v1265; // [rsp+70h] [rbp-90h]
  unsigned int v1266; // [rsp+70h] [rbp-90h]
  unsigned int v1267; // [rsp+70h] [rbp-90h]
  int v1268; // [rsp+70h] [rbp-90h]
  int v1269; // [rsp+70h] [rbp-90h]
  int v1270; // [rsp+70h] [rbp-90h]
  int v1271; // [rsp+70h] [rbp-90h]
  unsigned int v1272; // [rsp+70h] [rbp-90h]
  unsigned int v1273; // [rsp+70h] [rbp-90h]
  int v1274; // [rsp+70h] [rbp-90h]
  int v1275; // [rsp+70h] [rbp-90h]
  int v1276; // [rsp+70h] [rbp-90h]
  int v1277; // [rsp+70h] [rbp-90h]
  SIZE_T v1278; // [rsp+70h] [rbp-90h]
  int v1279; // [rsp+70h] [rbp-90h]
  void *v1280; // [rsp+70h] [rbp-90h]
  _BYTE *lpMem; // [rsp+78h] [rbp-88h]
  unsigned __int8 *lpMema; // [rsp+78h] [rbp-88h]
  void *lpMemb; // [rsp+78h] [rbp-88h]
  void *lpMemc; // [rsp+78h] [rbp-88h]
  void *lpMemd; // [rsp+78h] [rbp-88h]
  void *lpMeme; // [rsp+78h] [rbp-88h]
  void *lpMemf; // [rsp+78h] [rbp-88h]
  void *lpMemg; // [rsp+78h] [rbp-88h]
  void *lpMemh; // [rsp+78h] [rbp-88h]
  void *lpMemi; // [rsp+78h] [rbp-88h]
  void *lpMemj; // [rsp+78h] [rbp-88h]
  CToastCenterExperienceManager *lpMemk; // [rsp+78h] [rbp-88h]
  unsigned __int16 *lpMeml; // [rsp+78h] [rbp-88h]
  unsigned __int8 *lpMemm; // [rsp+78h] [rbp-88h]
  LPVOID lpMemn; // [rsp+78h] [rbp-88h]
  LPVOID lpMemo; // [rsp+78h] [rbp-88h]
  void *lpMemp; // [rsp+78h] [rbp-88h]
  LPVOID lpMemq; // [rsp+78h] [rbp-88h]
  LPVOID lpMemr; // [rsp+78h] [rbp-88h]
  int v1300; // [rsp+80h] [rbp-80h]
  unsigned int v1301; // [rsp+80h] [rbp-80h]
  unsigned int v1302; // [rsp+80h] [rbp-80h]
  int v1303; // [rsp+80h] [rbp-80h]
  int v1304; // [rsp+80h] [rbp-80h]
  int v1305; // [rsp+80h] [rbp-80h]
  unsigned int v1306; // [rsp+80h] [rbp-80h]
  unsigned int v1307; // [rsp+80h] [rbp-80h]
  unsigned int v1308; // [rsp+80h] [rbp-80h]
  int v1309; // [rsp+80h] [rbp-80h]
  void *v1310; // [rsp+88h] [rbp-78h]
  void *v1311; // [rsp+88h] [rbp-78h]
  void *v1312; // [rsp+88h] [rbp-78h]
  void *v1313; // [rsp+88h] [rbp-78h]
  void *v1314; // [rsp+88h] [rbp-78h]
  void *v1315; // [rsp+88h] [rbp-78h]
  void *v1316; // [rsp+88h] [rbp-78h]
  size_t v1317; // [rsp+88h] [rbp-78h]
  void *v1318; // [rsp+88h] [rbp-78h]
  void *v1319; // [rsp+88h] [rbp-78h]
  WCHAR *v1320; // [rsp+88h] [rbp-78h]
  size_t v1321; // [rsp+88h] [rbp-78h]
  size_t v1322; // [rsp+88h] [rbp-78h]
  size_t v1323; // [rsp+88h] [rbp-78h]
  size_t v1324; // [rsp+88h] [rbp-78h]
  size_t v1325; // [rsp+88h] [rbp-78h]
  SIZE_T v1326; // [rsp+90h] [rbp-70h]
  SIZE_T v1327; // [rsp+90h] [rbp-70h]
  void *v1328; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v1329; // [rsp+90h] [rbp-70h]
  SIZE_T v1330; // [rsp+90h] [rbp-70h]
  int v1331; // [rsp+90h] [rbp-70h]
  SIZE_T v1332; // [rsp+90h] [rbp-70h]
  int v1333; // [rsp+90h] [rbp-70h]
  int v1334; // [rsp+90h] [rbp-70h]
  int v1335; // [rsp+90h] [rbp-70h]
  int v1336; // [rsp+90h] [rbp-70h]
  int v1337; // [rsp+90h] [rbp-70h]
  int v1338; // [rsp+90h] [rbp-70h]
  unsigned int v1339; // [rsp+90h] [rbp-70h]
  unsigned int v1340; // [rsp+90h] [rbp-70h]
  unsigned int v1341; // [rsp+90h] [rbp-70h]
  int v1342; // [rsp+90h] [rbp-70h]
  unsigned int v1343; // [rsp+90h] [rbp-70h]
  unsigned int v1344; // [rsp+90h] [rbp-70h]
  int v1345; // [rsp+98h] [rbp-68h]
  unsigned int v1346; // [rsp+98h] [rbp-68h]
  int v1347; // [rsp+98h] [rbp-68h]
  unsigned int v1348; // [rsp+98h] [rbp-68h]
  int v1349; // [rsp+98h] [rbp-68h]
  int v1350; // [rsp+98h] [rbp-68h]
  unsigned int v1351; // [rsp+98h] [rbp-68h]
  unsigned int v1352; // [rsp+98h] [rbp-68h]
  int v1353; // [rsp+98h] [rbp-68h]
  WCHAR *v1354; // [rsp+A0h] [rbp-60h]
  WCHAR *v1355; // [rsp+A0h] [rbp-60h]
  WCHAR *v1356; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v1357; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1358; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1359; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1360; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1361; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1362; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1363; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1364; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1365; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1366; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1367; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1368; // [rsp+A0h] [rbp-60h]
  WCHAR *v1369; // [rsp+A0h] [rbp-60h]
  int v1370; // [rsp+A8h] [rbp-58h]
  char *v1371; // [rsp+A8h] [rbp-58h]
  char *v1372; // [rsp+A8h] [rbp-58h]
  const WCHAR *v1373; // [rsp+A8h] [rbp-58h]
  LPVOID v1374; // [rsp+A8h] [rbp-58h]
  _OWORD *v1375; // [rsp+A8h] [rbp-58h]
  LPVOID v1376; // [rsp+A8h] [rbp-58h]
  LPVOID v1377; // [rsp+A8h] [rbp-58h]
  void *v1378; // [rsp+A8h] [rbp-58h]
  void *v1379; // [rsp+A8h] [rbp-58h]
  void *v1380; // [rsp+A8h] [rbp-58h]
  void *v1381; // [rsp+A8h] [rbp-58h]
  void *v1382; // [rsp+A8h] [rbp-58h]
  void *v1383; // [rsp+A8h] [rbp-58h]
  _OWORD *v1384; // [rsp+A8h] [rbp-58h]
  LPVOID v1385; // [rsp+A8h] [rbp-58h]
  int v1386; // [rsp+B0h] [rbp-50h]
  unsigned int v1387; // [rsp+B0h] [rbp-50h]
  unsigned int v1388; // [rsp+B0h] [rbp-50h]
  int v1389; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v1390; // [rsp+B0h] [rbp-50h]
  SIZE_T v1391; // [rsp+B8h] [rbp-48h]
  _BYTE *v1392; // [rsp+B8h] [rbp-48h]
  _QWORD *v1393; // [rsp+B8h] [rbp-48h]
  int v1394; // [rsp+B8h] [rbp-48h]
  int v1395; // [rsp+B8h] [rbp-48h]
  int v1396; // [rsp+B8h] [rbp-48h]
  int v1397; // [rsp+B8h] [rbp-48h]
  unsigned int v1398; // [rsp+B8h] [rbp-48h]
  int v1399; // [rsp+B8h] [rbp-48h]
  unsigned int v1400; // [rsp+B8h] [rbp-48h]
  int v1401; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v1402; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1403; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1404; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1405; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1406; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1407; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1408; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1409; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1410; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1411; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1412; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v1413; // [rsp+C0h] [rbp-40h]
  SIZE_T *v1414; // [rsp+C0h] [rbp-40h]
  unsigned int Size; // [rsp+C8h] [rbp-38h]
  int Sizea; // [rsp+C8h] [rbp-38h]
  int Sizeb; // [rsp+C8h] [rbp-38h]
  int Sizec; // [rsp+C8h] [rbp-38h]
  WCHAR *v1419; // [rsp+D0h] [rbp-30h]
  WCHAR *v1420; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1421; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1422; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1423; // [rsp+D0h] [rbp-30h]
  CToastCenterExperienceManager *v1424; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1425; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1426; // [rsp+D0h] [rbp-30h]
  WCHAR *v1427; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1428; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1429; // [rsp+D0h] [rbp-30h]
  unsigned int v1430; // [rsp+D8h] [rbp-28h]
  unsigned int v1431; // [rsp+D8h] [rbp-28h]
  unsigned int v1432; // [rsp+D8h] [rbp-28h]
  unsigned int v1433; // [rsp+D8h] [rbp-28h]
  unsigned int v1434; // [rsp+D8h] [rbp-28h]
  unsigned int v1435; // [rsp+D8h] [rbp-28h]
  int v1436; // [rsp+D8h] [rbp-28h]
  int v1437; // [rsp+D8h] [rbp-28h]
  int v1438; // [rsp+D8h] [rbp-28h]
  int v1439; // [rsp+D8h] [rbp-28h]
  __int64 v1440; // [rsp+D8h] [rbp-28h]
  _BYTE *v1441; // [rsp+D8h] [rbp-28h]
  int v1442; // [rsp+E0h] [rbp-20h]
  int v1443; // [rsp+E0h] [rbp-20h]
  unsigned int v1444; // [rsp+E0h] [rbp-20h]
  unsigned int v1445; // [rsp+E0h] [rbp-20h]
  int v1446; // [rsp+E0h] [rbp-20h]
  int v1447; // [rsp+E0h] [rbp-20h]
  int v1448; // [rsp+E0h] [rbp-20h]
  int v1449; // [rsp+E0h] [rbp-20h]
  signed int v1450; // [rsp+E0h] [rbp-20h]
  int v1451; // [rsp+E8h] [rbp-18h]
  char v1452; // [rsp+E8h] [rbp-18h]
  unsigned int v1453; // [rsp+E8h] [rbp-18h]
  unsigned int v1454; // [rsp+E8h] [rbp-18h]
  unsigned int v1455; // [rsp+E8h] [rbp-18h]
  int v1456; // [rsp+E8h] [rbp-18h]
  int v1457; // [rsp+E8h] [rbp-18h]
  int v1458; // [rsp+E8h] [rbp-18h]
  int v1459; // [rsp+E8h] [rbp-18h]
  int v1460; // [rsp+E8h] [rbp-18h]
  char *v1461; // [rsp+E8h] [rbp-18h]
  unsigned int v1462; // [rsp+F0h] [rbp-10h]
  int v1463; // [rsp+F0h] [rbp-10h]
  __int32 v1464; // [rsp+F0h] [rbp-10h]
  SIZE_T v1465; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID v1466; // [rsp+100h] [rbp+0h]
  void *v1467; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v1468; // [rsp+110h] [rbp+10h]
  unsigned int v1469; // [rsp+118h] [rbp+18h]
  LPVOID v1470; // [rsp+120h] [rbp+20h]
  LPVOID v1471; // [rsp+128h] [rbp+28h]
  SIZE_T v1472; // [rsp+130h] [rbp+30h]
  unsigned __int16 *v1473; // [rsp+138h] [rbp+38h]
  int v1474; // [rsp+140h] [rbp+40h]
  int v1475; // [rsp+144h] [rbp+44h]
  int v1476; // [rsp+148h] [rbp+48h]
  int v1477; // [rsp+14Ch] [rbp+4Ch]
  int v1478; // [rsp+150h] [rbp+50h]
  int v1479; // [rsp+154h] [rbp+54h]
  int v1480; // [rsp+158h] [rbp+58h]
  unsigned int v1481; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1482; // [rsp+160h] [rbp+60h] BYREF
  int v1483; // [rsp+164h] [rbp+64h] BYREF
  SIZE_T dwBytes; // [rsp+168h] [rbp+68h] BYREF
  int v1485; // [rsp+170h] [rbp+70h] BYREF
  int v1486; // [rsp+174h] [rbp+74h] BYREF
  int v1487; // [rsp+178h] [rbp+78h] BYREF
  int v1488; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1489; // [rsp+180h] [rbp+80h] BYREF
  int v1490; // [rsp+184h] [rbp+84h] BYREF
  int v1491; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1492; // [rsp+194h] [rbp+94h] BYREF
  int v1493; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1494; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v1495; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1496; // [rsp+1A4h] [rbp+A4h] BYREF
  int v1497; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1498; // [rsp+1ACh] [rbp+ACh] BYREF
  int v1499; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1500; // [rsp+1B4h] [rbp+B4h] BYREF
  int v1501; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1502; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1503; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1504; // [rsp+1C4h] [rbp+C4h] BYREF
  int v1505; // [rsp+1C8h] [rbp+C8h] BYREF
  int v1506; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1507; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1508; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1509; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1510; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1511; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1512; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1513; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1514; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1515; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1516; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1517; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1518; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1519; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1520; // [rsp+204h] [rbp+104h] BYREF
  SIZE_T v1521; // [rsp+208h] [rbp+108h] BYREF
  int v1522; // [rsp+210h] [rbp+110h] BYREF
  int v1523; // [rsp+214h] [rbp+114h] BYREF
  int v1524; // [rsp+218h] [rbp+118h] BYREF
  int v1525; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1526; // [rsp+228h] [rbp+128h] BYREF
  int v1527; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1528; // [rsp+230h] [rbp+130h] BYREF
  int v1529; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1530; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1531; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1532; // [rsp+240h] [rbp+140h] BYREF
  int v1533; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1534; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1535; // [rsp+24Ch] [rbp+14Ch]
  unsigned int v1536; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1537; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1538; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1539; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1540; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1541; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1542; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1543; // [rsp+26Ch] [rbp+16Ch] BYREF
  _DWORD *v1544; // [rsp+270h] [rbp+170h] BYREF
  size_t v1545; // [rsp+278h] [rbp+178h] BYREF
  struct IServiceProvider *v1546; // [rsp+280h] [rbp+180h]
  __int128 v1547; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int16 *v1548; // [rsp+2A8h] [rbp+1A8h] BYREF
  wchar_t *String1; // [rsp+2C0h] [rbp+1C0h] BYREF
  wchar_t *v1550; // [rsp+2C8h] [rbp+1C8h] BYREF
  wchar_t *v1551; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1552[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  size_t pcchLength[2]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1554; // [rsp+2F8h] [rbp+1F8h] BYREF
  int *v1555; // [rsp+300h] [rbp+200h] BYREF
  int *v1556; // [rsp+308h] [rbp+208h] BYREF
  _DWORD *v1557; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int64 m; // [rsp+318h] [rbp+218h] BYREF
  int *v1559; // [rsp+320h] [rbp+220h] BYREF
  int *v1560; // [rsp+328h] [rbp+228h] BYREF
  void *v1561; // [rsp+338h] [rbp+238h] BYREF
  unsigned int *v1562; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1563; // [rsp+348h] [rbp+248h] BYREF
  HMODULE phModule; // [rsp+350h] [rbp+250h] BYREF
  void *v1565; // [rsp+358h] [rbp+258h] BYREF
  __int64 *v1566; // [rsp+360h] [rbp+260h] BYREF
  void *v1567; // [rsp+368h] [rbp+268h] BYREF
  unsigned __int64 v1568; // [rsp+370h] [rbp+270h] BYREF
  unsigned __int64 v1569; // [rsp+378h] [rbp+278h] BYREF
  unsigned __int64 v1570; // [rsp+380h] [rbp+280h] BYREF
  _DWORD *v1571; // [rsp+388h] [rbp+288h] BYREF
  _DWORD *v1572; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1573; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v1574; // [rsp+3A0h] [rbp+2A0h] BYREF
  _DWORD *v1575; // [rsp+3A8h] [rbp+2A8h] BYREF
  unsigned int *v1576; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1577; // [rsp+3B8h] [rbp+2B8h] BYREF
  LPVOID v1578; // [rsp+3C8h] [rbp+2C8h]
  void **v1579; // [rsp+3D0h] [rbp+2D0h] BYREF
  LPVOID v1580; // [rsp+3E0h] [rbp+2E0h]
  void *v1581; // [rsp+3E8h] [rbp+2E8h] BYREF
  void *v1582; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1583; // [rsp+3F8h] [rbp+2F8h]
  _OWORD *v1584; // [rsp+400h] [rbp+300h] BYREF
  char *v1585; // [rsp+408h] [rbp+308h] BYREF
  void *v1586[4]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v1587; // [rsp+430h] [rbp+330h]
  __int64 v1588; // [rsp+438h] [rbp+338h] BYREF
  __int64 v1589; // [rsp+440h] [rbp+340h] BYREF
  __int64 v1590; // [rsp+448h] [rbp+348h] BYREF
  __int64 v1591; // [rsp+450h] [rbp+350h] BYREF
  int *v1592; // [rsp+458h] [rbp+358h] BYREF
  _QWORD v1593[4]; // [rsp+460h] [rbp+360h] BYREF
  size_t v1594; // [rsp+480h] [rbp+380h] BYREF
  size_t v1595; // [rsp+488h] [rbp+388h] BYREF
  size_t v1596; // [rsp+490h] [rbp+390h] BYREF
  void *v1597; // [rsp+498h] [rbp+398h] BYREF
  __int64 v1598[2]; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v1599; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned int *v1600; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned __int64 v1601; // [rsp+4C0h] [rbp+3C0h] BYREF
  HMODULE hModule; // [rsp+4C8h] [rbp+3C8h] BYREF
  void *v1603; // [rsp+4D0h] [rbp+3D0h] BYREF
  void *v1604; // [rsp+4D8h] [rbp+3D8h] BYREF
  SIZE_T v1605; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v1606; // [rsp+4E8h] [rbp+3E8h] BYREF
  SIZE_T v1607; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v1608[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int64 v1609[2]; // [rsp+508h] [rbp+408h] BYREF
  void *v1610[2]; // [rsp+518h] [rbp+418h] BYREF
  size_t *v1611; // [rsp+528h] [rbp+428h] BYREF
  void *Src[2]; // [rsp+530h] [rbp+430h] BYREF
  LPVOID v1613[2]; // [rsp+540h] [rbp+440h]
  __int64 v1614; // [rsp+550h] [rbp+450h]
  void *v1615[2]; // [rsp+558h] [rbp+458h] BYREF
  void *v1616[2]; // [rsp+568h] [rbp+468h] BYREF
  __int64 v1617[2]; // [rsp+578h] [rbp+478h] BYREF
  void *v1618[2]; // [rsp+588h] [rbp+488h] BYREF
  __int64 v1619[2]; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1620; // [rsp+5A8h] [rbp+4A8h] BYREF
  __int128 v1621; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1622; // [rsp+5C0h] [rbp+4C0h] BYREF
  size_t v1623[2]; // [rsp+5D0h] [rbp+4D0h] BYREF
  LPVOID v1624[2]; // [rsp+5E0h] [rbp+4E0h]
  __int64 v1625; // [rsp+5F0h] [rbp+4F0h]
  __int64 v1626[2]; // [rsp+5F8h] [rbp+4F8h] BYREF
  void *v1627; // [rsp+608h] [rbp+508h] BYREF
  __int128 v1628; // [rsp+610h] [rbp+510h] BYREF
  __int128 v1629; // [rsp+620h] [rbp+520h]
  __int128 v1630; // [rsp+630h] [rbp+530h] BYREF
  __int128 v1631; // [rsp+640h] [rbp+540h]
  int v1632; // [rsp+650h] [rbp+550h] BYREF
  _DWORD v1633[5]; // [rsp+654h] [rbp+554h] BYREF
  unsigned __int16 *v1634; // [rsp+668h] [rbp+568h]
  int v1635; // [rsp+6C0h] [rbp+5C0h] BYREF
  char v1636[20]; // [rsp+6C4h] [rbp+5C4h] BYREF
  const WCHAR *v1637; // [rsp+6D8h] [rbp+5D8h]
  int v1638; // [rsp+730h] [rbp+630h] BYREF
  _DWORD v1639[5]; // [rsp+734h] [rbp+634h] BYREF
  unsigned __int16 *v1640; // [rsp+748h] [rbp+648h]
  int v1641; // [rsp+7A0h] [rbp+6A0h] BYREF
  char v1642[20]; // [rsp+7A4h] [rbp+6A4h] BYREF
  const WCHAR *v1643; // [rsp+7B8h] [rbp+6B8h]
  int v1644; // [rsp+810h] [rbp+710h] BYREF
  _DWORD v1645[5]; // [rsp+814h] [rbp+714h] BYREF
  unsigned __int16 *v1646; // [rsp+828h] [rbp+728h]
  int v1647; // [rsp+880h] [rbp+780h] BYREF
  _DWORD v1648[3]; // [rsp+884h] [rbp+784h] BYREF
  __int16 v1649; // [rsp+892h] [rbp+792h]
  __int64 v1650; // [rsp+898h] [rbp+798h]
  int v1651; // [rsp+8F0h] [rbp+7F0h] BYREF
  char v1652[20]; // [rsp+8F4h] [rbp+7F4h] BYREF
  char *v1653; // [rsp+908h] [rbp+808h]
  int v1654; // [rsp+960h] [rbp+860h] BYREF
  _DWORD v1655[5]; // [rsp+964h] [rbp+864h] BYREF
  unsigned __int16 *v1656; // [rsp+978h] [rbp+878h]
  int v1657; // [rsp+9D0h] [rbp+8D0h] BYREF
  char v1658[20]; // [rsp+9D4h] [rbp+8D4h] BYREF
  unsigned __int16 *v1659; // [rsp+9E8h] [rbp+8E8h]
  int v1660; // [rsp+A40h] [rbp+940h] BYREF
  int v1661; // [rsp+A44h] [rbp+944h]
  void *v1662; // [rsp+A48h] [rbp+948h]
  void *v1663; // [rsp+A50h] [rbp+950h]
  void *v1664; // [rsp+A58h] [rbp+958h]
  const WCHAR *v1665; // [rsp+A60h] [rbp+960h]
  const WCHAR *v1666; // [rsp+A68h] [rbp+968h]
  __int64 v1667; // [rsp+A70h] [rbp+970h]
  int v1668; // [rsp+A78h] [rbp+978h]
  __m128i v1669; // [rsp+A7Ch] [rbp+97Ch] BYREF
  __m128i v1670; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1671; // [rsp+A9Ch] [rbp+99Ch] BYREF
  unsigned int v1672; // [rsp+AA0h] [rbp+9A0h]
  unsigned __int32 v1673; // [rsp+AA4h] [rbp+9A4h]
  unsigned int v1674; // [rsp+AA8h] [rbp+9A8h]
  unsigned __int64 v1675; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1676; // [rsp+AB8h] [rbp+9B8h]
  unsigned __int64 v1677; // [rsp+AC0h] [rbp+9C0h]
  __int64 v1678; // [rsp+AC8h] [rbp+9C8h]
  __int128 v1679; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1680; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int64 v1681; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned __int32 v1682; // [rsp+AF8h] [rbp+9F8h]
  __int32 v1683; // [rsp+AFCh] [rbp+9FCh]
  __int128 v1684; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1685; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1686; // [rsp+B20h] [rbp+A20h]
  __int128 v1687; // [rsp+B30h] [rbp+A30h] BYREF
  _OWORD v1688[2]; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1689; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1690; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1691; // [rsp+B80h] [rbp+A80h]
  __int128 v1692; // [rsp+B88h] [rbp+A88h] BYREF
  __int128 v1693; // [rsp+B98h] [rbp+A98h] BYREF
  __int64 v1694; // [rsp+BA8h] [rbp+AA8h]
  _DWORD v1695[12]; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1696; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int128 v1697; // [rsp+BF0h] [rbp+AF0h]
  __int64 v1698; // [rsp+C00h] [rbp+B00h]
  int v1699; // [rsp+C08h] [rbp+B08h]
  __int128 v1700; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v1701; // [rsp+C20h] [rbp+B20h]
  __int64 v1702; // [rsp+C30h] [rbp+B30h]
  int v1703; // [rsp+C38h] [rbp+B38h]
  __int128 v1704; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v1705; // [rsp+C50h] [rbp+B50h]
  __int64 v1706; // [rsp+C60h] [rbp+B60h]
  int v1707; // [rsp+C68h] [rbp+B68h]
  __int128 v1708; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1709; // [rsp+C80h] [rbp+B80h]
  __int64 v1710; // [rsp+C90h] [rbp+B90h]
  int v1711; // [rsp+C98h] [rbp+B98h]
  _DWORD v1712[6]; // [rsp+CA0h] [rbp+BA0h] BYREF
  char v1713; // [rsp+CBAh] [rbp+BBAh]
  unsigned __int16 v1714[34]; // [rsp+CBCh] [rbp+BBCh] BYREF
  _DWORD v1715[6]; // [rsp+D00h] [rbp+C00h] BYREF
  char v1716; // [rsp+D1Ah] [rbp+C1Ah]
  unsigned __int16 v1717[34]; // [rsp+D1Ch] [rbp+C1Ch] BYREF
  _DWORD v1718[6]; // [rsp+D60h] [rbp+C60h] BYREF
  char v1719; // [rsp+D7Ah] [rbp+C7Ah]
  unsigned __int16 v1720[34]; // [rsp+D7Ch] [rbp+C7Ch] BYREF
  _BYTE v1721[68]; // [rsp+DC0h] [rbp+CC0h] BYREF
  __int16 v1722; // [rsp+E04h] [rbp+D04h]
  unsigned __int16 v1723; // [rsp+E66h] [rbp+D66h]
  __int64 v1724; // [rsp+E6Ch] [rbp+D6Ch]
  _OWORD v1725[3]; // [rsp+EA0h] [rbp+DA0h] BYREF
  int v1726; // [rsp+ED0h] [rbp+DD0h] BYREF
  __int128 v1727; // [rsp+ED8h] [rbp+DD8h]
  __int128 v1728; // [rsp+EE8h] [rbp+DE8h]
  __int128 v1729; // [rsp+EF8h] [rbp+DF8h]
  __int64 v1730; // [rsp+F08h] [rbp+E08h]
  __int64 v1731; // [rsp+F10h] [rbp+E10h] BYREF
  char v1732[152]; // [rsp+F18h] [rbp+E18h] BYREF
  int v1733; // [rsp+FB0h] [rbp+EB0h] BYREF
  __int16 v1734; // [rsp+FB4h] [rbp+EB4h]
  _BYTE v1735[176]; // [rsp+FC0h] [rbp+EC0h] BYREF
  WCHAR Filename[264]; // [rsp+1070h] [rbp+F70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+12C8h] [rbp+11C8h]

  v3 = a2;
  v1546 = a2;
  v4 = this;
  *(_QWORD *)&v1547 = this;
  QueryService = a2->lpVtbl->QueryService;
  v6 = (char *)this + 216;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         v3,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v6);
  if ( v7 >= 0 )
  {
    v9 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 28);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
           v3,
           &IID_IApplicationPositionPersistence,
           &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
           (char *)v4 + 224);
    if ( v7 < 0 )
    {
      v8 = 165LL;
      goto LABEL_3;
    }
    v10 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 29);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
           v3,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           (char *)v4 + 232);
    if ( v7 < 0 )
    {
      v8 = 166LL;
      goto LABEL_3;
    }
    v11 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 30);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
           v3,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)v4 + 240);
    if ( v7 < 0 )
    {
      v8 = 167LL;
      goto LABEL_3;
    }
    v12 = v3->lpVtbl->QueryService;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)v4 + 31);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v12)(
           v3,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           v13);
    if ( v7 < 0 )
    {
      v8 = 168LL;
      goto LABEL_3;
    }
    v14 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 32);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
           v3,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (char *)v4 + 256);
    if ( v7 < 0 )
    {
      v8 = 169LL;
      goto LABEL_3;
    }
    v15 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 33);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
           v3,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           (char *)v4 + 264);
    if ( v7 < 0 )
    {
      v8 = 170LL;
      goto LABEL_3;
    }
    v16 = v3->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 35);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
           v3,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           (char *)v4 + 280);
    if ( v7 < 0 )
    {
      v8 = 171LL;
      goto LABEL_3;
    }
    v17 = v3->lpVtbl->QueryService;
    v18 = *((_QWORD *)v4 + 38);
    *((_QWORD *)v4 + 38) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
           v3,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_1da3501e_cf8d_5263_a3c5_7f0e104a514a,
           (char *)v4 + 304);
    if ( v7 < 0 )
    {
      v8 = 173LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
      (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      1u,
      3u,
      v19);
    v20 = v3->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v4 + 37);
    ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v20)(
      v3,
      &SID_VirtualDesktopManager,
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (char *)v4 + 296);
    v21 = 0;
    if ( IsUserOOBE() )
    {
LABEL_1640:
      v1217 = (char *)v4 + 120;
      if ( v4 == (CDesktopPositioner *)48 )
        v1217 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 31) + 96LL))(
             *((_QWORD *)v4 + 31),
             v1217,
             (__int64)v4 + 352);
      if ( v7 < 0 )
      {
        v8 = 200LL;
        goto LABEL_3;
      }
      v1218 = (char *)v4 + 128;
      if ( v4 == (CDesktopPositioner *)48 )
        v1218 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)v4 + 32) + 72LL))(
             *((_QWORD *)v4 + 32),
             v1218,
             (__int64)v4 + 356);
      if ( v7 < 0 )
      {
        v8 = 201LL;
        goto LABEL_3;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 32) + 24LL))(*((_QWORD *)v4 + 32), (__int64)v4 + 208);
      v1219 = v3->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v4 + 36);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1219)(
             v3,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             (char *)v4 + 288);
      if ( v7 < 0 )
      {
        v8 = 205LL;
        goto LABEL_3;
      }
      v1566 = 0LL;
      v1220 = *((_QWORD *)v4 + 36);
      v1221 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v1220 + 24LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v1566);
      v1222 = v1221(v1220, 1LL, &v1566);
      v7 = v1222;
      if ( v1222 >= 0 )
      {
        v1542 = 0;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v4 + 27) + 32LL))(
               *((_QWORD *)v4 + 27),
               &v1542) >= 0 )
        {
          for ( i = 0; i < v1542; ++i )
          {
            v1573 = 0LL;
            v1225 = *((_QWORD *)v4 + 27);
            v1226 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v1225 + 40LL);
            wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v1573);
            if ( v1226(v1225, i, &v1573) >= 0 )
            {
              v1687 = 0LL;
              v1227 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v1573 + 88LL))(v1573, &v1687);
              if ( v1227 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDC,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1227);
              v1228 = *v1566;
              v1547 = v1687;
              v1229 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v1228 + 56))(
                        v1566,
                        v1573,
                        &v1547,
                        1LL);
              if ( v1229 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xDD,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1229);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1573);
          }
        }
        v1222 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v1566 + 40))(v1566, *((_DWORD *)v4 + 52) == 0 ? 3 : 0);
        v7 = v1222;
        if ( v1222 >= 0 )
        {
          v1598[0] = 0LL;
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v1598);
          v1230 = Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::CopyTo((_QWORD *)v4 + 27);
          v7 = v1230;
          if ( v1230 >= 0 )
          {
            v1232 = (char *)v4 + 112;
            if ( v4 == (CDesktopPositioner *)48 )
              v1232 = 0LL;
            v1230 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v1598[0] + 24LL))(
                      v1598[0],
                      v1232,
                      (__int64)v4 + 364);
            v7 = v1230;
            if ( v1230 >= 0 )
            {
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1598);
              v7 = 0;
              goto LABEL_1671;
            }
            v1231 = 236LL;
          }
          else
          {
            v1231 = 235LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v1231,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v1230);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1598);
LABEL_1671:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v1566);
          return (unsigned int)v7;
        }
        v1223 = 231LL;
      }
      else
      {
        v1223 = 208LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v1223,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1222);
      goto LABEL_1671;
    }
    v1478 = 0;
    if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    {
      *((_DWORD *)v4 + 125) = 1;
      goto LABEL_1638;
    }
    v1474 = 0;
    v1548 = 0LL;
    v1479 = 0;
    v1480 = 0;
    v1465 = 0LL;
    v22 = 0;
    while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
      ;
    v1475 = -1;
    v23 = dword_1808CCC34;
    if ( !dword_1808CCC34 )
    {
      v1476 = 0;
      v24 = MemoryAlloc(0x338uLL);
      lpModuleName = (WCHAR *)v24;
      if ( !v24 )
        goto LABEL_35;
      v25 = -1;
      v26 = 0;
      v27 = 0;
      v28 = v24 + 7;
      v29 = (unsigned __int8 *)&unk_18077F812;
      v30 = 103LL;
      do
      {
        v31 = v29[1] | ((*v29 | ((*(v29 - 1) | (*(v29 - 2) << 8)) << 8)) << 8);
        v32 = v29[5] | ((v29[4] | ((v29[3] | (v29[2] << 8)) << 8)) << 8);
        v33 = v31 ^ v27;
        v29 += 8;
        v34 = v33 ^ v26 ^ v32 ^ 0xAC987321;
        v35 = (4991 * __ROR4__(v34 + 1419157410, 27) + __ROR4__(v34, 22)) ^ v33;
        v36 = (43881 * __ROR4__(v35 + 133239679, 9) - __ROR4__(v35, 30)) ^ v34;
        v37 = (24670 * v36 - (v36 >> 13) - 123127970) ^ v35;
        v38 = (2033 * __ROR4__(v37 ^ 0xAB69, 26) - __ROR4__(v37, 30)) ^ v36;
        v39 = (133239679 - (v38 ^ 0xAB69605E)) ^ v37;
        v40 = (43881 * (v39 ^ 0x137F)) ^ __ROR4__(v39, 6) ^ v38;
        v41 = (24670 * __ROR4__(v40 + 133239679, 15) + __ROR4__(v40, 30)) ^ v39;
        v42 = (2033 * __ROR4__(v41 + 1419157410, 14) - __ROR4__(v41, 24)) ^ v40;
        v43 = (4991 * __ROR4__(v42 ^ 0xAB69605E, 12)) ^ __ROR4__(v42, 10) ^ v41;
        v44 = (v43 >> 10) ^ (43881 * (v43 ^ 0x7F1)) ^ v42;
        v45 = (2033 * (__ROR4__(~v44, 5) + 24670)) ^ v43;
        v46 = v44 ^ (v45 - 2033) ^ 0xAB69605E;
        v47 = (4991 * __ROR4__(v44 ^ (v45 - 2033) ^ 0xAB6967AF, 30) + (v46 >> 2)) ^ v45;
        v48 = (43881 * __ROR4__(v47 - 133239679, 6) + __ROR4__(v47, 25)) ^ v46;
        v49 = (24670 * (v48 ^ 0x137F) + __ROR4__(v48, 9)) ^ v47;
        v50 = (2033 * __ROR4__(v49 ^ 0xAB69, 27) + __ROR4__(v49, 25)) ^ v48;
        v51 = v50 ^ v49 ^ 0xAC987321;
        v52 = (4991 * __ROR4__(v51, 3) - 219010071) ^ v50;
        v53 = (24670 * __ROR4__(v52 - 133239679, 1) - __ROR4__(v52, 6)) ^ v51;
        v54 = (2033 * __ROR4__(v53 - 1419157410, 29) + __ROR4__(v53, 18)) ^ v52;
        v55 = (4991 * __ROR4__(v54 - 1419157410, 17) - __ROR4__(v54, 14)) ^ v53;
        v56 = (v55 >> 3) ^ (43881 * (v55 ^ 0x605E)) ^ v54;
        v27 = (24670 * __ROR4__(v56 ^ 0x7F1137F, 28)) ^ __ROR4__(v56, 30) ^ v21 ^ v55;
        v26 = v25 ^ v56;
        *(v28 - 4) = v27;
        *v28 = v26;
        *(v28 - 5) = BYTE1(v27);
        *(v28 - 1) = BYTE1(v26);
        *(v28 - 6) = (unsigned __int16)(v27 >> 8) >> 8;
        *(v28 - 2) = (unsigned __int16)(v26 >> 8) >> 8;
        *(v28 - 7) = __ROR4__((((v27 >> 8) | (v27 << 24)) >> 8) | (((v27 >> 8) | (v27 << 24)) << 24), 8);
        *(v28 - 3) = __ROR4__((((v26 >> 8) | (v26 << 24)) >> 8) | (((v26 >> 8) | (v26 << 24)) << 24), 8);
        v21 = v31;
        v25 = v32;
        v28 += 8;
        --v30;
      }
      while ( v30 );
      v57 = 0LL;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      do
        v58 ^= v24[v57++];
      while ( v57 < 0x338 );
      if ( v58 != 64LL )
      {
        MemoryFree(v24);
        v22 = 0;
LABEL_35:
        v61 = qword_1808C93A0;
        v62 = 4LL;
        do
        {
          if ( *v61 )
            FreeLibrary(*v61);
          v61 += 3;
          --v62;
        }
        while ( v62 );
        memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
        v63 = off_1808C0340;
        v64 = off_1807174F0;
        v65 = 2LL;
        do
        {
          *(_OWORD *)v63 = *(_OWORD *)v64;
          *((_OWORD *)v63 + 1) = *((_OWORD *)v64 + 1);
          *((_OWORD *)v63 + 2) = *((_OWORD *)v64 + 2);
          *((_OWORD *)v63 + 3) = *((_OWORD *)v64 + 3);
          *((_OWORD *)v63 + 4) = *((_OWORD *)v64 + 4);
          *((_OWORD *)v63 + 5) = *((_OWORD *)v64 + 5);
          *((_OWORD *)v63 + 6) = *((_OWORD *)v64 + 6);
          v63 += 16;
          *((_OWORD *)v63 - 1) = *((_OWORD *)v64 + 7);
          v64 += 16;
          --v65;
        }
        while ( v65 );
        *(_OWORD *)v63 = *(_OWORD *)v64;
        *((_OWORD *)v63 + 1) = *((_OWORD *)v64 + 1);
        *((_OWORD *)v63 + 2) = *((_OWORD *)v64 + 2);
        *((_OWORD *)v63 + 3) = *((_OWORD *)v64 + 3);
        *((_OWORD *)v63 + 4) = *((_OWORD *)v64 + 4);
        v2 = *((_OWORD *)v64 + 5);
        *((_OWORD *)v63 + 5) = v2;
        *((_OWORD *)v63 + 6) = *((_OWORD *)v64 + 6);
LABEL_70:
        _InterlockedExchange(&dword_1808CCC40, 0);
        String1 = 0LL;
        v1550 = 0LL;
        v79 = 0;
        LastError = 0;
        if ( NtCurrentPeb()->SessionId )
        {
          v81 = off_1808C0450[0]();
          v82 = 0LL;
          if ( !v81 )
          {
LABEL_72:
            LastError = GetLastError();
            v83 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v83 = LastError < 0;
            }
            if ( !v83 )
              LastError = -2147467259;
            goto LABEL_125;
          }
          v1481 = 0;
          v84 = 0LL;
          v1551 = 0LL;
          for ( j = 0LL; ; j = v1481 )
          {
            v86 = v84;
            if ( !v82 )
              v86 = 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808C0470[0])(
                   v81,
                   2LL,
                   v86,
                   j,
                   &v1481) )
            {
              v1551 = 0LL;
              String1 = v84;
              goto LABEL_93;
            }
            v87 = GetLastError();
            if ( v87 != 122 )
              break;
            if ( v84 )
              goto LABEL_87;
            v84 = (wchar_t *)MemoryAlloc(v1481);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1551);
            if ( !v84 )
              v84 = 0LL;
            v82 = v84;
            v1551 = v84;
            if ( !v84 )
            {
              LastError = -2147024882;
              goto LABEL_93;
            }
          }
          if ( !v87 )
          {
LABEL_87:
            LastError = -2147467259;
            goto LABEL_93;
          }
          if ( v87 > 0 )
            LastError = (unsigned __int16)v87 | 0x80070000;
          else
            LastError = v87;
LABEL_93:
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1551);
          if ( LastError < 0 )
            goto LABEL_125;
          v88 = off_1808C0468[0];
          CurrentThreadId = GetCurrentThreadId();
          v90 = ((__int64 (__fastcall *)(_QWORD))v88)(CurrentThreadId);
          v91 = 0LL;
          if ( !v90 )
          {
            LastError = GetLastError();
            v92 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v92 = LastError < 0;
            }
            if ( !v92 )
              LastError = -2147467259;
            goto LABEL_125;
          }
          v1482 = 0;
          v93 = 0LL;
          v1552[0] = 0LL;
          LastError = 0;
          for ( k = 0LL; ; k = v1482 )
          {
            v95 = v93;
            if ( !v91 )
              v95 = 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1808C0470[0])(
                   v90,
                   2LL,
                   v95,
                   k,
                   &v1482) )
            {
              v1552[0] = 0LL;
              v1550 = v93;
              goto LABEL_116;
            }
            v96 = GetLastError();
            if ( v96 != 122 )
              break;
            if ( v93 )
              goto LABEL_110;
            v93 = (wchar_t *)MemoryAlloc(v1482);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1552);
            if ( !v93 )
              v93 = 0LL;
            v91 = v93;
            v1552[0] = v93;
            if ( !v93 )
            {
              LastError = -2147024882;
              goto LABEL_116;
            }
          }
          if ( !v96 )
          {
LABEL_110:
            LastError = -2147467259;
            goto LABEL_116;
          }
          LastError = v96 > 0 ? (unsigned __int16)v96 | 0x80070000 : v96;
LABEL_116:
          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1552);
          if ( LastError < 0 )
          {
LABEL_125:
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1550);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&String1);
            v98 = 0;
            if ( LastError >= 0 )
              v98 = v22;
            v1469 = v98;
            v99 = LocalAlloc(0x40u, 4uLL);
            SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(&v1465, v99);
            v1473 = (unsigned __int16 *)v1465;
            if ( !v1465 )
            {
              v100 = -2147024882;
              v101 = 0;
              goto LABEL_1609;
            }
            v102 = 0LL;
            *(_OWORD *)Src = 0LL;
            LODWORD(v2) = 0;
            *(_OWORD *)v1613 = 0LL;
            ProcessHeap = GetProcessHeap();
            v104 = (WCHAR *)HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
            lpModuleNamea = v104;
            v1476 = 56;
            if ( !v104 )
            {
              v100 = -1073741801;
              v1477 = -1073741801;
              v104 = 0LL;
              goto LABEL_133;
            }
            *(_OWORD *)v104 = xmmword_1808C7510[0];
            *((_OWORD *)v104 + 1) = *((_OWORD *)&_ImageBase + 575314);
            *((_OWORD *)v104 + 2) = *((_OWORD *)&_ImageBase + 575315);
            *((_OWORD *)v104 + 3) = *((_OWORD *)&_ImageBase + 575316);
            *((_OWORD *)v104 + 4) = *((_OWORD *)&_ImageBase + 575317);
            *((_OWORD *)v104 + 5) = *((_OWORD *)&_ImageBase + 575318);
            *((_OWORD *)v104 + 6) = *((_OWORD *)&_ImageBase + 575319);
            *((_OWORD *)v104 + 7) = xmmword_1808C7510[7];
            *((_OWORD *)v104 + 8) = xmmword_1808C7510[8];
            v2 = xmmword_1808C7510[9];
            *((_OWORD *)v104 + 9) = v2;
            v105 = GetProcessHeap();
            v102 = HeapAlloc(v105, 8u, 8uLL);
            v1326 = (SIZE_T)v102;
            if ( !v102 )
            {
              v100 = -1073741801;
              v1477 = -1073741801;
              v102 = 0LL;
              v106 = v98;
              goto LABEL_364;
            }
            *v102 = qword_1808C7468;
            v1391 = __rdtsc();
            dwBytes = 0LL;
            v107 = RtlUIntAdd(4u, 4, (int *)&dwBytes + 1);
            v100 = v107;
            v1477 = v107;
            if ( v107 < 0 )
            {
LABEL_133:
              v106 = v98;
              goto LABEL_364;
            }
            v108 = RtlUIntAdd(0, SHIDWORD(dwBytes), (int *)&dwBytes);
            v100 = v108 | 0x10000000;
            v1477 = v108 | 0x10000000;
            v106 = v98;
            if ( v108 < 0 )
              goto LABEL_364;
            v1485 = 0;
            v100 = RtlUIntAdd(v109, 160, &v1485);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v110 = RtlUIntAdd(dwBytes, v1485, (int *)&dwBytes);
            v100 = v113 | v110;
            v1477 = v113 | v110;
            if ( (v113 | v110) < 0 )
              goto LABEL_364;
            v1486 = 0;
            v100 = RtlUIntAdd(v112, v111, &v1486);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v114 = RtlUIntAdd(dwBytes, v1486, (int *)&dwBytes);
            v100 = v116 | v114;
            v1477 = v116 | v114;
            if ( (v116 | v114) < 0 )
              goto LABEL_364;
            v1487 = 0;
            v100 = RtlUIntAdd(v115, 8, &v1487);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v117 = RtlUIntAdd(dwBytes, v1487, (int *)&dwBytes);
            v100 = v119 | v117;
            v1477 = v119 | v117;
            if ( (v119 | v117) < 0 )
              goto LABEL_364;
            pcchLength[0] = 0LL;
            if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v118, pcchLength) < 0 )
            {
              v100 = -1073741762;
LABEL_363:
              v1477 = v100;
              goto LABEL_364;
            }
            ++pcchLength[0];
            v1488 = 0;
            v100 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), &v1488);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v120 = RtlUIntAdd(dwBytes, v1488, (int *)&dwBytes);
            v100 = v120 | 0x10000000;
            v1477 = v120 | 0x10000000;
            if ( v120 < 0 )
              goto LABEL_364;
            v1489 = 0;
            v100 = RtlUIntAdd(4u, 4, &v1489);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v121 = RtlUIntAdd(dwBytes, v1489, (int *)&dwBytes);
            v100 = v123 | v121;
            v1477 = v123 | v121;
            if ( (v123 | v121) < 0 )
              goto LABEL_364;
            v1490 = 0;
            v100 = RtlUIntAdd(v122, v122, &v1490);
            v1477 = v100;
            if ( v100 < 0 )
              goto LABEL_364;
            v124 = RtlUIntAdd(dwBytes, v1490, (int *)&dwBytes);
            v100 = v125 | v124;
            v1477 = v125 | v124;
            if ( (v125 | v124) < 0 )
              goto LABEL_364;
            HIDWORD(Src[0]) = dwBytes;
            v126 = dwBytes;
            v127 = GetProcessHeap();
            v128 = HeapAlloc(v127, 8u, v126);
            if ( !v128 )
            {
              v130 = -1073741801;
              v100 = -1073741801;
LABEL_154:
              v1477 = v130;
              goto LABEL_579;
            }
            Src[1] = v128;
            LODWORD(Src[0]) = 0;
            LODWORD(v1609[0]) = 0;
            v1608[1] = 0LL;
            pcchLength[1] = (size_t)Src[1];
            v100 = RtlULongLongAdd((unsigned __int64)Src[1], 4LL, v1609);
            v1477 = v100;
            if ( v100 < 0 )
            {
              v106 = v98;
              goto LABEL_364;
            }
            if ( v131 + 2 > (_DWORD *)((char *)v131 + HIDWORD(Src[0])) )
              goto LABEL_157;
            *v131 = 4;
            *(_DWORD *)v1609[0] = 0;
            v129 = ++LODWORD(Src[0]);
            LODWORD(v1615[0]) = 0;
            v1614 = 0LL;
            if ( Src[1] )
            {
              v135 = (int *)Src[1];
              v1554 = (int *)Src[1];
              v1430 = 0;
              if ( v129 )
              {
                do
                {
                  v1492 = 0;
                  v100 = RtlUIntAdd(4u, *v135, (int *)&v1492);
                  v1477 = v100;
                  if ( v100 < 0 )
                    goto LABEL_133;
                  v100 = RtlULongLongAdd(v136, v1492, (__int64 *)&v1554);
                  v1477 = v100;
                  if ( v100 < 0 )
                    goto LABEL_133;
                  ++v1430;
                  v135 = v1554;
                }
                while ( v1430 < v137 );
                v1326 = (SIZE_T)v102;
                lpModuleNamea = v104;
              }
              v100 = RtlULongLongAdd((unsigned __int64)v135, 4LL, (__int64 *)v1615);
              v1477 = v100;
              if ( v100 >= 0 )
              {
                if ( (char *)v139 + v138 + 4 > (char *)Src[1] + HIDWORD(Src[0]) )
                  goto LABEL_157;
                *v139 = v138;
                memcpy_0(v1615[0], v104, v138);
                v133 = (int)Src[0];
                v132 = 1;
LABEL_164:
                v134 = v132 + v133;
                LODWORD(Src[0]) = v134;
                LODWORD(v1616[0]) = 0;
                v1615[1] = 0LL;
                if ( Src[1] )
                {
                  v143 = (int *)Src[1];
                  v1555 = (int *)Src[1];
                  v1431 = 0;
                  if ( v134 )
                  {
                    do
                    {
                      v1494 = 0;
                      v100 = RtlUIntAdd(4u, *v143, (int *)&v1494);
                      v1477 = v100;
                      if ( v100 < 0 )
                        goto LABEL_133;
                      v100 = RtlULongLongAdd(v144, v1494, (__int64 *)&v1555);
                      v1477 = v100;
                      if ( v100 < 0 )
                        goto LABEL_133;
                      ++v1431;
                      v143 = v1555;
                    }
                    while ( v1431 < v145 );
                    v1326 = (SIZE_T)v102;
                    lpModuleNamea = v104;
                  }
                  v100 = RtlULongLongAdd((unsigned __int64)v143, 4LL, (__int64 *)v1616);
                  v1477 = v100;
                  if ( v100 >= 0 )
                  {
                    if ( v146 + 3 > (_DWORD *)((char *)Src[1] + HIDWORD(Src[0])) )
                      goto LABEL_157;
                    *v146 = 8;
                    memcpy_0(v1616[0], v102, 8uLL);
                    v141 = (int)Src[0];
                    v140 = 1;
LABEL_177:
                    v142 = v140 + v141;
                    LODWORD(Src[0]) = v142;
                    LODWORD(v1617[0]) = 0;
                    v1616[1] = 0LL;
                    if ( Src[1] )
                    {
                      v149 = (int *)Src[1];
                      v1556 = (int *)Src[1];
                      v1432 = 0;
                      if ( v142 )
                      {
                        do
                        {
                          v1496 = 0;
                          v100 = RtlUIntAdd(4u, *v149, (int *)&v1496);
                          v1477 = v100;
                          if ( v100 < 0 )
                            goto LABEL_133;
                          v100 = RtlULongLongAdd((unsigned __int64)v149, v1496, (__int64 *)&v1556);
                          v1477 = v100;
                          if ( v100 < 0 )
                            goto LABEL_133;
                          ++v1432;
                          v149 = v1556;
                        }
                        while ( v1432 < v150 );
                        v1326 = (SIZE_T)v102;
                        lpModuleNamea = v104;
                      }
                      v100 = RtlULongLongAdd((unsigned __int64)v149, 4LL, v1617);
                      v1477 = v100;
                      if ( v100 >= 0 )
                      {
                        if ( v149 + 3 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                          goto LABEL_157;
                        *v149 = 8;
                        *(_QWORD *)v1617[0] = v1391;
                        ++LODWORD(Src[0]);
LABEL_200:
                        v1545 = 0LL;
                        if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v147, &v1545) < 0 )
                        {
                          v100 = -1073741762;
                          goto LABEL_158;
                        }
                        v100 = RtlULongLongAdd(v1545, 1LL, (__int64 *)&v1545);
                        v1477 = v100;
                        if ( v100 >= 0 )
                        {
                          LODWORD(v1618[0]) = 0;
                          v1617[1] = 0LL;
                          if ( 2 * (_DWORD)v1545 )
                          {
                            if ( !Src[1] )
                            {
                              v1497 = 0;
                              v100 = RtlUIntAdd(4u, 2 * (int)v1545, &v1497);
                              v1477 = v100;
                              if ( v100 >= 0 )
                              {
                                v100 = RtlUIntAdd(HIDWORD(Src[0]), v1497, (int *)Src + 1);
                                v1477 = v100;
                                v151 = (unsigned int)Src[0];
                                if ( v100 >= 0 )
                                {
                                  v151 = v152 + LODWORD(Src[0]);
                                  LODWORD(Src[0]) += v152;
                                  v100 = 0;
                                  v1477 = 0;
                                }
                              }
                              goto LABEL_219;
                            }
                            v153 = (int *)Src[1];
                            v1592 = (int *)Src[1];
                            if ( v151 )
                            {
                              do
                              {
                                v1498 = 0;
                                v100 = RtlUIntAdd(4u, *v153, (int *)&v1498);
                                v1477 = v100;
                                if ( v100 < 0 )
                                  goto LABEL_219;
                                v100 = RtlULongLongAdd((unsigned __int64)v153, v1498, (__int64 *)&v1592);
                                v1477 = v100;
                                if ( v100 < 0 )
                                  goto LABEL_219;
                                v153 = v1592;
                              }
                              while ( v154 + 1 < v151 );
                            }
                            v100 = RtlULongLongAdd((unsigned __int64)v153, 4LL, (__int64 *)v1618);
                            v1477 = v100;
                            if ( v100 < 0 )
                              goto LABEL_219;
                            if ( (char *)v153 + v155 + 4 <= (char *)Src[1] + HIDWORD(Src[0]) )
                            {
                              *v153 = v155;
                              memcpy_0(v1618[0], L"Shell-Windowing-ShowMaximized", (unsigned int)v155);
                              v151 = ++LODWORD(Src[0]);
                              goto LABEL_219;
                            }
                            v100 = -1073741789;
                          }
                          else
                          {
                            v100 = -1073741811;
                          }
                          v1477 = v100;
                        }
LABEL_219:
                        v106 = v98;
                        if ( v100 < 0 )
                          goto LABEL_364;
                        LODWORD(v1619[0]) = 0;
                        v1618[1] = 0LL;
                        if ( Src[1] )
                        {
                          v159 = (int *)Src[1];
                          v1560 = (int *)Src[1];
                          v1433 = 0;
                          if ( v151 )
                          {
                            do
                            {
                              v1500 = 0;
                              v100 = RtlUIntAdd(4u, *v159, (int *)&v1500);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_133;
                              v100 = RtlULongLongAdd((unsigned __int64)v159, v1500, (__int64 *)&v1560);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_133;
                              ++v1433;
                              v159 = v1560;
                            }
                            while ( v1433 < v160 );
                            v1326 = (SIZE_T)v102;
                            lpModuleNamea = v104;
                          }
                          v100 = RtlULongLongAdd((unsigned __int64)v159, 4LL, v1619);
                          v1477 = v100;
                          if ( v100 >= 0 )
                          {
                            if ( v159 + 2 > (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                              goto LABEL_157;
                            *v159 = 4;
                            *(_DWORD *)v1619[0] = v98;
                            v157 = (int)Src[0];
                            v156 = 1;
                            goto LABEL_223;
                          }
                        }
                        else
                        {
                          v1499 = 0;
                          v100 = RtlUIntAdd(4u, 4, &v1499);
                          v1477 = v100;
                          if ( v100 < 0 )
                            goto LABEL_364;
                          v100 = RtlUIntAdd(HIDWORD(Src[0]), v1499, (int *)Src + 1);
                          v1477 = v100;
                          v157 = (int)Src[0];
                          if ( v100 >= 0 )
                          {
LABEL_223:
                            v158 = v156 + v157;
                            LODWORD(Src[0]) = v158;
                            LODWORD(v1620) = 0;
                            v1619[1] = 0LL;
                            if ( !Src[1] )
                            {
                              v1501 = 0;
                              v100 = RtlUIntAdd(4u, 4, &v1501);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_133;
                              v100 = RtlUIntAdd(HIDWORD(Src[0]), v1501, (int *)Src + 1);
                              v1477 = v100;
                              if ( v100 >= 0 )
                              {
                                LODWORD(Src[0]) += v161;
                                goto LABEL_246;
                              }
LABEL_245:
                              v106 = v98;
                              goto LABEL_364;
                            }
                            v163 = (int *)Src[1];
                            v1559 = (int *)Src[1];
                            v1434 = 0;
                            if ( v158 )
                            {
                              do
                              {
                                v1502 = 0;
                                v100 = RtlUIntAdd(4u, *v163, (int *)&v1502);
                                v1477 = v100;
                                if ( v100 < 0 )
                                  goto LABEL_133;
                                v100 = RtlULongLongAdd((unsigned __int64)v163, v1502, (__int64 *)&v1559);
                                v1477 = v100;
                                if ( v100 < 0 )
                                  goto LABEL_133;
                                ++v1434;
                                v163 = v1559;
                              }
                              while ( v1434 < v164 );
                              v1326 = (SIZE_T)v102;
                              lpModuleNamea = v104;
                            }
                            v100 = RtlULongLongAdd((unsigned __int64)v163, 4LL, (__int64 *)&v1620);
                            v1477 = v100;
                            if ( v100 < 0 )
                              goto LABEL_245;
                            if ( v163 + 2 <= (int *)((char *)Src[1] + HIDWORD(Src[0])) )
                            {
                              *v163 = v162;
                              *v1620 = v162;
                              LODWORD(Src[0]) += v162 - 3;
LABEL_246:
                              v1503 = 0;
                              v100 = RtlUIntAdd(v162, v162, (int *)&v1503);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_133;
                              v166 = v1503;
                              v1504 = v1503;
                              v1505 = 0;
                              v100 = RtlUIntAdd(v165, 8, &v1505);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_133;
                              v100 = RtlUIntAdd(v166, v1505, (int *)&v1504);
                              v1477 = v100;
                              if ( v100 < 0 )
                                goto LABEL_258;
                              v1506 = 0;
                              v100 = RtlUIntAdd(v167, v167, &v1506);
                              v1477 = v100;
                              if ( v100 >= 0 )
                              {
                                v100 = RtlUIntAdd(v1504, v1506, (int *)&v1504);
                                v1477 = v100;
                                if ( v100 < 0 )
                                  goto LABEL_258;
                                v1507 = 0;
                                v100 = RtlUIntAdd(v168, v168, &v1507);
                                v1477 = v100;
                                if ( v100 >= 0 )
                                {
                                  v100 = RtlUIntAdd(v1504, v1507, (int *)&v1504);
                                  v1477 = v100;
                                  if ( v100 < 0 )
                                    goto LABEL_258;
                                  v1508 = 0;
                                  v100 = RtlUIntAdd(v169, v169, &v1508);
                                  v1477 = v100;
                                  if ( v100 >= 0 )
                                  {
                                    v100 = RtlUIntAdd(v1504, v1508, (int *)&v1504);
                                    v1477 = v100;
                                    if ( v100 < 0 )
                                      goto LABEL_258;
                                    v1509 = 0;
                                    v100 = RtlUIntAdd(v170, v170, &v1509);
                                    v1477 = v100;
                                    if ( v100 >= 0 )
                                    {
                                      v100 = RtlUIntAdd(v1504, v1509, (int *)&v1504);
                                      v1477 = v100;
                                      if ( v100 >= 0 )
                                      {
                                        v1386 = v1504;
                                        v1466 = 0LL;
                                        v1435 = 0;
                                        v1471 = 0LL;
                                        v1470 = 0LL;
                                        Size = 0;
                                        v1419 = 0LL;
                                        v1468 = 0LL;
                                        v1402 = 0LL;
                                        v1262 = __rdtsc();
                                        v1510 = 8;
                                        v172 = RtlUIntAdd(8u, SHIDWORD(Src[0]), (int *)&v1510);
                                        if ( v172 < 0 )
                                        {
LABEL_270:
                                          v100 = v172 | 0x10000000;
                                          v1477 = v100;
                                          if ( v100 < 0 )
                                            goto LABEL_334;
                                          v181 = (unsigned __int8 *)v1466;
                                          if ( !v1466 )
                                          {
                                            v100 = -805306355;
                                            goto LABEL_158;
                                          }
                                          v182 = v171;
                                          if ( !v171
                                            || (v1472 = v171 + 8LL,
                                                v183 = (char *)MemoryAlloc(v1472),
                                                v1467 = v183,
                                                v184 = 0,
                                                !v183) )
                                          {
                                            v100 = -805306367;
                                            v1477 = -805306367;
LABEL_337:
                                            v269 = GetProcessHeap();
                                            HeapFree(v269, 0, v1466);
                                            v267 = 0LL;
LABEL_338:
                                            v270 = v1471;
                                            if ( v1471 )
                                            {
                                              lpMeme = (void *)*((_QWORD *)v1471 + 1);
                                              if ( lpMeme )
                                              {
                                                v271 = GetProcessHeap();
                                                HeapFree(v271, 0, lpMeme);
                                                v270[1] = 0LL;
                                              }
                                              lpMemf = (void *)v270[3];
                                              if ( lpMemf )
                                              {
                                                v272 = GetProcessHeap();
                                                HeapFree(v272, 0, lpMemf);
                                                v270[3] = 0LL;
                                              }
                                              lpMemg = (void *)v270[5];
                                              if ( lpMemg )
                                              {
                                                v273 = GetProcessHeap();
                                                HeapFree(v273, 0, lpMemg);
                                                v270[5] = 0LL;
                                              }
                                              v274 = GetProcessHeap();
                                              HeapFree(v274, 0, v270);
                                              v267 = 0LL;
                                            }
                                            v275 = v1470;
                                            if ( v1470 )
                                            {
                                              v276 = GetProcessHeap();
                                              HeapFree(v276, 0, v275);
                                              v267 = 0LL;
                                            }
                                            if ( v1419 )
                                            {
                                              v277 = GetProcessHeap();
                                              HeapFree(v277, 0, v1419);
                                              v267 = 0LL;
                                            }
                                            v278 = v1468;
                                            if ( v1468 )
                                            {
                                              lpMemh = (void *)*((_QWORD *)v1468 + 1);
                                              if ( lpMemh )
                                              {
                                                v279 = GetProcessHeap();
                                                HeapFree(v279, 0, lpMemh);
                                                *((_QWORD *)v278 + 1) = 0LL;
                                              }
                                              lpMemi = (void *)*((_QWORD *)v278 + 3);
                                              if ( lpMemi )
                                              {
                                                v280 = GetProcessHeap();
                                                HeapFree(v280, 0, lpMemi);
                                                *((_QWORD *)v278 + 3) = 0LL;
                                              }
                                              lpMemj = (void *)*((_QWORD *)v278 + 5);
                                              if ( lpMemj )
                                              {
                                                v281 = GetProcessHeap();
                                                HeapFree(v281, 0, lpMemj);
                                                *((_QWORD *)v278 + 5) = 0LL;
                                              }
                                              v282 = GetProcessHeap();
                                              HeapFree(v282, 0, v278);
                                              v267 = 0LL;
                                            }
                                            if ( v1402 )
                                            {
                                              v283 = GetProcessHeap();
                                              HeapFree(v283, 0, v1402);
                                              v267 = 0LL;
                                            }
                                            v106 = v98;
                                            if ( v100 >= 0 )
                                            {
                                              if ( !LODWORD(v1613[0]) )
                                              {
                                                v100 = -1073425151;
                                                goto LABEL_363;
                                              }
                                              if ( v1613[1] == v267 || LODWORD(v1613[0]) <= (unsigned int)v267 )
                                              {
                                                v100 = -1073741811;
                                                goto LABEL_363;
                                              }
                                              v1571 = v1613[1];
                                              v428 = *(_DWORD *)v1613[1];
                                              v100 = RtlULongLongAdd((unsigned __int64)v1613[1], 4LL, (__int64 *)&v1571);
                                              v1477 = v100;
                                              if ( v100 < 0 )
                                                goto LABEL_579;
                                              v431 = v1571;
                                              if ( !v428 )
                                                v431 = v429;
                                              v1571 = v431;
                                              if ( v428 != (_DWORD)v430 )
                                              {
LABEL_625:
                                                v100 = -1073741789;
LABEL_578:
                                                v1477 = v100;
LABEL_579:
                                                v106 = v98;
                                                goto LABEL_364;
                                              }
                                              v100 = *v431;
                                              v1477 = v100;
                                              if ( v100 == -805306333 )
                                              {
                                                v1270 = -2147024774;
                                                goto LABEL_576;
                                              }
                                              v1270 = v100;
                                              if ( v100 == -2147024774 || (v106 = v98, v1270 = v100, v100 >= 0) )
                                              {
LABEL_576:
                                                if ( LODWORD(v1613[0]) == 6 )
                                                {
                                                  if ( v1613[1] != v429 )
                                                  {
                                                    v432 = v1613[1];
                                                    v1572 = v1613[1];
                                                    v433 = (int)v429;
                                                    while ( 1 )
                                                    {
                                                      v100 = RtlULongLongAdd(
                                                               (unsigned __int64)v432,
                                                               v430,
                                                               (__int64 *)&v1572);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_579;
                                                      v100 = RtlULongLongAdd(
                                                               (unsigned __int64)v1572,
                                                               v434,
                                                               (__int64 *)&v1572);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_579;
                                                      ++v433;
                                                      v432 = v1572;
                                                      if ( v433 )
                                                      {
                                                        v435 = *v1572;
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1572,
                                                                 v430,
                                                                 (__int64 *)&v1572);
                                                        v1477 = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_579;
                                                        v438 = v1572;
                                                        if ( !v435 )
                                                          v438 = v436;
                                                        v1572 = v438;
                                                        if ( v435 != 8 )
                                                          goto LABEL_625;
                                                        lpMemn = *(LPVOID *)v438;
                                                        if ( v1613[1] == v436 )
                                                          break;
                                                        v439 = v1613[1];
                                                        v1557 = v1613[1];
                                                        v440 = (unsigned int)v436;
                                                        while ( 1 )
                                                        {
                                                          v100 = RtlULongLongAdd(
                                                                   (unsigned __int64)v439,
                                                                   v437,
                                                                   (__int64 *)&v1557);
                                                          v1477 = v100;
                                                          if ( v100 < 0 )
                                                            goto LABEL_579;
                                                          v100 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1557,
                                                                   v441,
                                                                   (__int64 *)&v1557);
                                                          v1477 = v100;
                                                          if ( v100 < 0 )
                                                            goto LABEL_579;
                                                          ++v440;
                                                          v439 = v1557;
                                                          if ( v440 >= 2 )
                                                          {
                                                            v442 = *v1557;
                                                            v100 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1557,
                                                                     v437,
                                                                     (__int64 *)&v1557);
                                                            v1477 = v100;
                                                            if ( v100 < 0 )
                                                              goto LABEL_579;
                                                            v445 = v1557;
                                                            if ( !v442 )
                                                              v445 = v443;
                                                            v1557 = v445;
                                                            if ( v442 != (_DWORD)v444 )
                                                              goto LABEL_625;
                                                            v1349 = *v445;
                                                            if ( v1613[1] == v443 )
                                                              goto LABEL_599;
                                                            v446 = v1613[1];
                                                            v1574 = v1613[1];
                                                            v447 = (unsigned int)v443;
                                                            while ( 1 )
                                                            {
                                                              v100 = RtlULongLongAdd(
                                                                       (unsigned __int64)v446,
                                                                       v444,
                                                                       (__int64 *)&v1574);
                                                              v1477 = v100;
                                                              if ( v100 < 0 )
                                                                goto LABEL_579;
                                                              v100 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1574,
                                                                       v448,
                                                                       (__int64 *)&v1574);
                                                              v1477 = v100;
                                                              if ( v100 < 0 )
                                                                goto LABEL_579;
                                                              ++v447;
                                                              v446 = v1574;
                                                              if ( v447 >= 3 )
                                                              {
                                                                v449 = *v1574;
                                                                v1306 = *v1574;
                                                                v100 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1574,
                                                                         v444,
                                                                         (__int64 *)&v1574);
                                                                v1477 = v100;
                                                                if ( v100 < 0 )
                                                                  goto LABEL_579;
                                                                v451 = v1574;
                                                                if ( !v449 )
                                                                  v451 = v450;
                                                                v1574 = v451;
                                                                if ( v1613[1] != v450 )
                                                                {
                                                                  v452 = v1613[1];
                                                                  v1575 = v1613[1];
                                                                  v453 = (unsigned int)v450;
                                                                  while ( 1 )
                                                                  {
                                                                    v100 = RtlULongLongAdd(
                                                                             (unsigned __int64)v452,
                                                                             4LL,
                                                                             (__int64 *)&v1575);
                                                                    v1477 = v100;
                                                                    if ( v100 < 0 )
                                                                      goto LABEL_579;
                                                                    v100 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1575,
                                                                             v454,
                                                                             (__int64 *)&v1575);
                                                                    v1477 = v100;
                                                                    if ( v100 < 0 )
                                                                      goto LABEL_579;
                                                                    ++v453;
                                                                    v452 = v1575;
                                                                    if ( v453 >= 4 )
                                                                    {
                                                                      v455 = *v1575;
                                                                      v100 = RtlULongLongAdd(
                                                                               (unsigned __int64)v1575,
                                                                               4LL,
                                                                               (__int64 *)&v1575);
                                                                      v1477 = v100;
                                                                      if ( v100 < 0 )
                                                                        goto LABEL_579;
                                                                      v457 = v1575;
                                                                      if ( !v455 )
                                                                        v457 = v456;
                                                                      v1575 = v457;
                                                                      if ( v455 != 4 )
                                                                        goto LABEL_625;
                                                                      v1453 = *v457;
                                                                      if ( v1613[1] == v456 )
                                                                        goto LABEL_599;
                                                                      v458 = (unsigned int *)v1613[1];
                                                                      v1576 = (unsigned int *)v1613[1];
                                                                      v459 = (unsigned int)v456;
                                                                      while ( 1 )
                                                                      {
                                                                        v1444 = *v458;
                                                                        v100 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v458,
                                                                                 4LL,
                                                                                 (__int64 *)&v1576);
                                                                        v1477 = v100;
                                                                        if ( v100 < 0 )
                                                                          goto LABEL_133;
                                                                        v100 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v1576,
                                                                                 v1444,
                                                                                 (__int64 *)&v1576);
                                                                        v1477 = v100;
                                                                        if ( v100 < 0 )
                                                                          goto LABEL_133;
                                                                        ++v459;
                                                                        v458 = v1576;
                                                                        if ( v459 >= 5 )
                                                                        {
                                                                          v1445 = *v1576;
                                                                          v130 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1576,
                                                                                   4LL,
                                                                                   (__int64 *)&v1576);
                                                                          v100 = v130;
                                                                          v1477 = v130;
                                                                          if ( v130 < 0 )
                                                                            goto LABEL_154;
                                                                          v461 = v1576;
                                                                          if ( !v1445 )
                                                                            v461 = 0LL;
                                                                          v1576 = v461;
                                                                          if ( v1445 != 4 )
                                                                            goto LABEL_625;
                                                                          v106 = *v461;
                                                                          if ( (LPVOID)v1391 != lpMemn )
                                                                            goto LABEL_577;
                                                                          v1480 = v1349;
                                                                          if ( v1453 > 4 || v1306 > 4 )
                                                                          {
                                                                            v100 = -2147024774;
                                                                            goto LABEL_363;
                                                                          }
                                                                          memcpy_0(v1473, v460, v1306);
                                                                          if ( v1270 )
                                                                          {
                                                                            v100 = v1270;
                                                                            v1477 = v1270;
                                                                          }
                                                                          goto LABEL_364;
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                                goto LABEL_599;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
LABEL_599:
                                                  v100 = -1073741811;
                                                }
                                                else
                                                {
LABEL_577:
                                                  v100 = -1073425151;
                                                }
                                                goto LABEL_578;
                                              }
                                            }
LABEL_364:
                                            Src[0] = 0LL;
                                            v284 = Src[1];
                                            if ( Src[1] )
                                            {
                                              v285 = GetProcessHeap();
                                              HeapFree(v285, 0, v284);
                                              Src[1] = 0LL;
                                            }
                                            v1613[0] = 0LL;
                                            v286 = v1613[1];
                                            if ( v1613[1] )
                                            {
                                              v287 = GetProcessHeap();
                                              HeapFree(v287, 0, v286);
                                              v1613[1] = 0LL;
                                            }
                                            if ( v104 )
                                            {
                                              v288 = GetProcessHeap();
                                              HeapFree(v288, 0, v104);
                                            }
                                            if ( v102 )
                                            {
                                              v289 = GetProcessHeap();
                                              HeapFree(v289, 0, v102);
                                            }
                                            if ( v100 < 0 )
                                            {
                                              v101 = v1474;
LABEL_1609:
                                              while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                ;
                                              v1207 = dword_1808CCC34;
                                              if ( dword_1808CCC34 > 0 )
                                              {
                                                --dword_1808CCC34;
                                                if ( v1207 == 1 )
                                                {
                                                  v1208 = qword_1808C93A0;
                                                  v1209 = 4LL;
                                                  do
                                                  {
                                                    if ( *v1208 )
                                                      FreeLibrary(*v1208);
                                                    v1208 += 3;
                                                    --v1209;
                                                  }
                                                  while ( v1209 );
                                                  memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                  v1210 = 2LL;
                                                  v1211 = off_1808C0340;
                                                  v1212 = off_1807174F0;
                                                  do
                                                  {
                                                    *(_OWORD *)v1211 = *(_OWORD *)v1212;
                                                    *((_OWORD *)v1211 + 1) = *((_OWORD *)v1212 + 1);
                                                    *((_OWORD *)v1211 + 2) = *((_OWORD *)v1212 + 2);
                                                    *((_OWORD *)v1211 + 3) = *((_OWORD *)v1212 + 3);
                                                    *((_OWORD *)v1211 + 4) = *((_OWORD *)v1212 + 4);
                                                    *((_OWORD *)v1211 + 5) = *((_OWORD *)v1212 + 5);
                                                    *((_OWORD *)v1211 + 6) = *((_OWORD *)v1212 + 6);
                                                    v1211 += 16;
                                                    *((_OWORD *)v1211 - 1) = *((_OWORD *)v1212 + 7);
                                                    v1212 += 16;
                                                    --v1210;
                                                  }
                                                  while ( v1210 );
                                                  *(_OWORD *)v1211 = *(_OWORD *)v1212;
                                                  *((_OWORD *)v1211 + 1) = *((_OWORD *)v1212 + 1);
                                                  *((_OWORD *)v1211 + 2) = *((_OWORD *)v1212 + 2);
                                                  *((_OWORD *)v1211 + 3) = *((_OWORD *)v1212 + 3);
                                                  *((_OWORD *)v1211 + 4) = *((_OWORD *)v1212 + 4);
                                                  v2 = *((_OWORD *)v1212 + 5);
                                                  *((_OWORD *)v1211 + 5) = v2;
                                                  *((_OWORD *)v1211 + 6) = *((_OWORD *)v1212 + 6);
                                                }
                                              }
                                              _InterlockedExchange(&dword_1808CCC40, 0);
                                              SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1465);
                                              if ( v100 >= 0 )
                                              {
                                                if ( v101 == 4 )
                                                {
                                                  v1213 = *(_DWORD *)v1548;
LABEL_1632:
                                                  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1548);
                                                  if ( v1479 >= 0 && v1213 )
                                                  {
                                                    v4 = (CDesktopPositioner *)v1547;
                                                    *(_DWORD *)(v1547 + 500) = 2;
                                                  }
                                                  else
                                                  {
                                                    IsScreenSizeRequirementMet = Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet(
                                                                                   v1214,
                                                                                   *(float *)&v2);
                                                    v4 = (CDesktopPositioner *)v1547;
                                                    if ( IsScreenSizeRequirementMet )
                                                      *(_DWORD *)(v1547 + 500) = 3;
                                                  }
                                                  v3 = v1546;
LABEL_1638:
                                                  v1216 = v3->lpVtbl->QueryService;
                                                  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v4 + 39);
                                                  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1216)(
                                                         v3,
                                                         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                                         &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                                                         (char *)v4 + 312);
                                                  if ( v7 < 0 )
                                                  {
                                                    v8 = 197LL;
                                                    goto LABEL_3;
                                                  }
                                                  goto LABEL_1640;
                                                }
                                              }
                                              else
                                              {
                                                switch ( v100 )
                                                {
                                                  case -805306316:
                                                    v1479 = -1073418222;
LABEL_1628:
                                                    v1213 = v1478;
                                                    goto LABEL_1632;
                                                  case -805306139:
                                                  case -1073425151:
                                                    v1479 = -1073418201;
                                                    goto LABEL_1628;
                                                  case -805306306:
                                                    v1479 = -1073418200;
                                                    goto LABEL_1628;
                                                }
                                                v1479 = v100;
                                                if ( v100 != -2147024774 )
                                                  goto LABEL_1628;
                                              }
                                              v1479 = -1073418210;
                                              goto LABEL_1628;
                                            }
                                            if ( !v106 )
                                            {
LABEL_1607:
                                              v101 = v1480;
                                              v1465 = 0LL;
                                              v1548 = v1473;
                                              goto LABEL_1609;
                                            }
                                            v1577 = 0LL;
                                            dword_1808C9398 = v106;
                                            ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
                                            if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                                            {
LABEL_1264:
                                              SH<void *,SH_HANDLE>::Reset(&v1577);
                                              v907 = 0LL;
                                              *(_OWORD *)v1623 = 0LL;
                                              LODWORD(v2) = 0;
                                              *(_OWORD *)v1624 = 0LL;
                                              v908 = GetProcessHeap();
                                              v909 = HeapAlloc(v908, 8u, 0xA0uLL);
                                              if ( !v909 )
                                              {
                                                v909 = 0LL;
                                                goto LABEL_1599;
                                              }
                                              *v909 = xmmword_1808C7510[0];
                                              v909[1] = xmmword_1808C7510[1];
                                              v909[2] = xmmword_1808C7510[2];
                                              v909[3] = xmmword_1808C7510[3];
                                              v909[4] = xmmword_1808C7510[4];
                                              v909[5] = xmmword_1808C7510[5];
                                              v909[6] = xmmword_1808C7510[6];
                                              v909[7] = xmmword_1808C7510[7];
                                              v909[8] = xmmword_1808C7510[8];
                                              v2 = xmmword_1808C7510[9];
                                              v909[9] = v2;
                                              v910 = GetProcessHeap();
                                              v911 = HeapAlloc(v910, 8u, 8uLL);
                                              v907 = v911;
                                              if ( !v911 )
                                              {
                                                v907 = 0LL;
                                                goto LABEL_1599;
                                              }
                                              *v911 = qword_1808C7468;
                                              v1323 = __rdtsc();
                                              v1521 = 0LL;
                                              if ( (int)RtlUIntAdd(4u, 4, (int *)&v1521 + 1) < 0 )
                                                goto LABEL_1599;
                                              if ( (int)RtlUIntAdd(0, SHIDWORD(v1521), (int *)&v1521) < 0 )
                                                goto LABEL_1599;
                                              v1522 = v913;
                                              if ( (int)RtlUIntAdd(v912, 160, &v1522) < 0 )
                                                goto LABEL_1599;
                                              v914 = RtlUIntAdd(v1521, v1522, (int *)&v1521);
                                              if ( (v917 | v914) < 0 )
                                                goto LABEL_1599;
                                              v1523 = v916;
                                              if ( (int)RtlUIntAdd(v915, 8, &v1523) < 0 )
                                                goto LABEL_1599;
                                              v918 = RtlUIntAdd(v1521, v1523, (int *)&v1521);
                                              if ( (v921 | v918) < 0 )
                                                goto LABEL_1599;
                                              v1524 = v920;
                                              if ( (int)RtlUIntAdd(v919, 8, &v1524) < 0 )
                                                goto LABEL_1599;
                                              v922 = RtlUIntAdd(v1521, v1524, (int *)&v1521);
                                              if ( (v923 | v922) < 0 )
                                                goto LABEL_1599;
                                              HIDWORD(v1623[0]) = v1521;
                                              v924 = v1521;
                                              v925 = GetProcessHeap();
                                              v926 = HeapAlloc(v925, 8u, v924);
                                              if ( !v926 )
                                                goto LABEL_1599;
                                              v1623[1] = (size_t)v926;
                                              LODWORD(v1623[0]) = 0;
                                              LODWORD(v1626[0]) = 0;
                                              v1625 = 0LL;
                                              v1593[3] = v926;
                                              lpMemo = v907;
                                              v1375 = v909;
                                              v927 = RtlULongLongAdd((unsigned __int64)v926, 4LL, v1626);
                                              if ( v927 < 0
                                                || v928 + 2 > (unsigned int *)((char *)v928 + HIDWORD(v1623[0])) )
                                              {
                                                goto LABEL_1599;
                                              }
                                              *v928 = v929;
                                              *(_DWORD *)v1626[0] = v929;
                                              v931 = ++LODWORD(v1623[0]);
                                              LODWORD(v1627) = 0;
                                              v1626[1] = 0LL;
                                              if ( v1623[1] == v930 )
                                              {
                                                v1525 = v930;
                                                if ( (int)RtlUIntAdd(v929, 160, &v1525) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1525, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v934 = (int *)v1623[1];
                                                v1594 = v1623[1];
                                                if ( v931 )
                                                {
                                                  do
                                                  {
                                                    v1526 = 0;
                                                    if ( (int)RtlUIntAdd(4u, *v934, (int *)&v1526) < 0
                                                      || (int)RtlULongLongAdd(v935, v1526, (__int64 *)&v1594) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v907;
                                                    v1375 = v909;
                                                    v934 = (int *)v1594;
                                                  }
                                                  while ( v937 + 1 < v936 );
                                                }
                                                if ( (int)RtlULongLongAdd(
                                                            (unsigned __int64)v934,
                                                            4LL,
                                                            (__int64 *)&v1627) < 0
                                                  || (unsigned __int64)(v938 + 41) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v938 = 160;
                                                memcpy_0(v1627, v909, 0xA0uLL);
                                                v933 = 0LL;
                                                v932 = 4;
                                              }
                                              v939 = ++LODWORD(v1623[0]);
                                              LODWORD(v1610[0]) = 0;
                                              v1609[1] = 0LL;
                                              if ( !v907 )
                                                goto LABEL_1599;
                                              if ( v1623[1] == v933 )
                                              {
                                                v1527 = v933;
                                                if ( (int)RtlUIntAdd(v932, 8, &v1527) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1527, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v942 = (int *)v1623[1];
                                                v1595 = v1623[1];
                                                if ( v939 )
                                                {
                                                  do
                                                  {
                                                    v1528 = v933;
                                                    if ( (int)RtlUIntAdd(4u, *v942, (int *)&v1528) < 0
                                                      || (int)RtlULongLongAdd(v943, v1528, (__int64 *)&v1595) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v907;
                                                    v1375 = v909;
                                                    v942 = (int *)v1595;
                                                  }
                                                  while ( v944 + 1 < v939 );
                                                }
                                                if ( (int)RtlULongLongAdd((unsigned __int64)v942, 4LL, (__int64 *)v1610) < 0
                                                  || (unsigned __int64)(v945 + 3) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v945 = 8;
                                                memcpy_0(v1610[0], v907, 8uLL);
                                                v941 = 0LL;
                                                v940 = 4;
                                              }
                                              v946 = ++LODWORD(v1623[0]);
                                              LODWORD(v1611) = 0;
                                              v1610[1] = 0LL;
                                              if ( v1623[1] == v941 )
                                              {
                                                v1529 = v941;
                                                if ( (int)RtlUIntAdd(v940, 8, &v1529) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1623[0]), v1529, (int *)v1623 + 1) < 0 )
                                                {
                                                  goto LABEL_1599;
                                                }
                                              }
                                              else
                                              {
                                                v949 = (int *)v1623[1];
                                                v1596 = v1623[1];
                                                if ( v946 )
                                                {
                                                  do
                                                  {
                                                    v1530 = v941;
                                                    if ( (int)RtlUIntAdd(4u, *v949, (int *)&v1530) < 0
                                                      || (int)RtlULongLongAdd(v950, v1530, (__int64 *)&v1596) < 0 )
                                                    {
                                                      goto LABEL_1599;
                                                    }
                                                    lpMemo = v907;
                                                    v1375 = v909;
                                                    v949 = (int *)v1596;
                                                  }
                                                  while ( v951 + 1 < v946 );
                                                }
                                                if ( (int)RtlULongLongAdd(
                                                            (unsigned __int64)v949,
                                                            4LL,
                                                            (__int64 *)&v1611) < 0
                                                  || (unsigned __int64)(v952 + 3) > v1623[1] + HIDWORD(v1623[0]) )
                                                {
                                                  goto LABEL_1599;
                                                }
                                                *v952 = 8;
                                                *v1611 = v1323;
                                              }
                                              ++LODWORD(v1623[0]);
                                              v1531 = v948;
                                              if ( (int)RtlUIntAdd(v947, v947, (int *)&v1531) < 0 )
                                                goto LABEL_1599;
                                              v955 = v1531;
                                              v1532 = v1531;
                                              v1533 = v954;
                                              if ( (int)RtlUIntAdd(v953, 8, &v1533) < 0
                                                || (int)RtlUIntAdd(v955, v1533, (int *)&v1532) < 0 )
                                              {
                                                goto LABEL_1599;
                                              }
                                              lpModuleNamem = v1532;
                                              v1324 = (size_t)v956;
                                              v1339 = (unsigned int)v956;
                                              v957 = v956;
                                              v1467 = v956;
                                              v1472 = (SIZE_T)v956;
                                              v1369 = (WCHAR *)v956;
                                              LODWORD(v1466) = (_DWORD)v956;
                                              v1413 = (unsigned __int16 *)v956;
                                              v1468 = 0LL;
                                              v1426 = (LPCWSTR)__rdtsc();
                                              v1534 = 8;
                                              v958 = RtlUIntAdd(8u, SHIDWORD(v1623[0]), (int *)&v1534);
                                              if ( v958 < 0 )
                                              {
LABEL_1327:
                                                v970 = v958 | 0x10000000;
                                                if ( v970 < 0 )
                                                {
                                                  v1040 = (void *)v1324;
                                                  goto LABEL_1398;
                                                }
                                                v1427 = v960;
                                                v971 = (void *)v1324;
                                                if ( v1324 )
                                                {
                                                  if ( !v959
                                                    || (v1465 = v959 + 8LL,
                                                        v972 = (char *)MemoryAlloc(v1465),
                                                        v1461 = v972,
                                                        v973 = 0,
                                                        !v972) )
                                                  {
                                                    v970 = -805306367;
                                                    v1040 = (void *)v1324;
LABEL_1399:
                                                    v1062 = GetProcessHeap();
                                                    HeapFree(v1062, 0, v1040);
LABEL_1400:
                                                    if ( v957 )
                                                    {
                                                      v1063 = (void *)*((_QWORD *)v957 + 1);
                                                      if ( v1063 )
                                                      {
                                                        v1064 = GetProcessHeap();
                                                        HeapFree(v1064, 0, v1063);
                                                        *((_QWORD *)v957 + 1) = 0LL;
                                                      }
                                                      v1065 = (void *)*((_QWORD *)v957 + 3);
                                                      if ( v1065 )
                                                      {
                                                        v1066 = GetProcessHeap();
                                                        HeapFree(v1066, 0, v1065);
                                                        *((_QWORD *)v957 + 3) = 0LL;
                                                      }
                                                      v1067 = (void *)*((_QWORD *)v957 + 5);
                                                      if ( v1067 )
                                                      {
                                                        v1068 = GetProcessHeap();
                                                        HeapFree(v1068, 0, v1067);
                                                        *((_QWORD *)v957 + 5) = 0LL;
                                                      }
                                                      v1069 = GetProcessHeap();
                                                      HeapFree(v1069, 0, v957);
                                                    }
                                                    v1070 = (void *)v1472;
                                                    if ( v1472 )
                                                    {
                                                      v1071 = GetProcessHeap();
                                                      HeapFree(v1071, 0, v1070);
                                                    }
                                                    if ( v1369 )
                                                    {
                                                      v1072 = GetProcessHeap();
                                                      HeapFree(v1072, 0, v1369);
                                                    }
                                                    if ( v1413 )
                                                    {
                                                      v1073 = (void *)*((_QWORD *)v1413 + 1);
                                                      if ( v1073 )
                                                      {
                                                        v1074 = GetProcessHeap();
                                                        HeapFree(v1074, 0, v1073);
                                                        *((_QWORD *)v1413 + 1) = 0LL;
                                                      }
                                                      v1075 = (void *)*((_QWORD *)v1413 + 3);
                                                      if ( v1075 )
                                                      {
                                                        v1076 = GetProcessHeap();
                                                        HeapFree(v1076, 0, v1075);
                                                        *((_QWORD *)v1413 + 3) = 0LL;
                                                      }
                                                      v1077 = (void *)*((_QWORD *)v1413 + 5);
                                                      if ( v1077 )
                                                      {
                                                        v1078 = GetProcessHeap();
                                                        HeapFree(v1078, 0, v1077);
                                                        *((_QWORD *)v1413 + 5) = 0LL;
                                                      }
                                                      v1079 = GetProcessHeap();
                                                      HeapFree(v1079, 0, v1413);
                                                    }
                                                    v1080 = v1468;
                                                    if ( v1468 )
                                                    {
                                                      v1081 = GetProcessHeap();
                                                      HeapFree(v1081, 0, v1080);
                                                    }
                                                    if ( v970 >= 0 )
                                                    {
                                                      if ( LODWORD(v1624[0]) )
                                                      {
                                                        v1082 = v1624[1];
                                                        if ( v1624[1] )
                                                        {
                                                          v1608[0] = (__int64)v1624[1];
                                                          if ( (int)RtlULongLongAdd(
                                                                      (unsigned __int64)v1624[1],
                                                                      4LL,
                                                                      v1608) >= 0 )
                                                          {
                                                            v1086 = (_DWORD *)v1608[0];
                                                            if ( *v1082 == (_DWORD)v1085 )
                                                              v1086 = v1085;
                                                            v1608[0] = (__int64)v1086;
                                                            if ( *v1082 == (_DWORD)v1084
                                                              && *v1086 >= (int)v1085
                                                              && v1082
                                                              && v1083 > 1 )
                                                            {
                                                              for ( m = (unsigned __int64)v1082;
                                                                    (int)RtlULongLongAdd(
                                                                           (unsigned __int64)v1082,
                                                                           v1084,
                                                                           (__int64 *)&m) >= 0
                                                                 && (int)RtlULongLongAdd(
                                                                           m,
                                                                           (unsigned int)*v1082,
                                                                           (__int64 *)&m) >= 0;
                                                                    v1082 = (_DWORD *)m )
                                                              {
                                                                if ( v1087 != -1 )
                                                                {
                                                                  RtlULongLongAdd(m, v1084, (__int64 *)&m);
                                                                  goto LABEL_1599;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    goto LABEL_1599;
                                                  }
                                                  v974 = 0;
                                                  v1235 = 0;
                                                  v975 = 0LL;
                                                  if ( v1339 )
                                                  {
                                                    v976 = 0;
                                                    do
                                                    {
                                                      v974 = v976 ^ *(_BYTE *)(v975 + v1324);
                                                      v1235 = v974;
                                                      ++v975;
                                                      v976 = v974;
                                                    }
                                                    while ( v975 < v1339 );
                                                  }
                                                  v1677 = 0xC81ECB17B1B54A58uLL;
                                                  v977 = (unsigned __int8 *)v1324;
                                                  v978 = v972;
                                                  v1278 = (SIZE_T)v972;
                                                  v979 = -1;
                                                  LODWORD(v1471) = 0;
                                                  LODWORD(v1470) = 0;
                                                  v980 = v1339 & 7;
                                                  if ( (v1339 & 7) != 0 )
                                                  {
                                                    LODWORD(v1471) = 0;
                                                    v981 = 0;
                                                    v982 = 56;
                                                    v983 = 0;
                                                    do
                                                    {
                                                      v984 = *v977;
                                                      if ( v983 >= 4 )
                                                      {
                                                        v985 = (v984 << v982) | (unsigned int)v1471;
                                                        LODWORD(v1471) = v985;
                                                      }
                                                      else
                                                      {
                                                        v981 |= v984 << (v982 - 32);
                                                        v985 = (unsigned int)v1471;
                                                      }
                                                      ++v977;
                                                      ++v983;
                                                      v982 -= 8;
                                                    }
                                                    while ( (int)v983 < v980 );
                                                    v973 = v981 ^ 0xB17A307A;
                                                    v986 = v985 ^ 0x42F6B18D;
                                                    v987 = v981 ^ 0xB17A307A;
                                                    v988 = v985 ^ 0x42F6B18D;
                                                    v989 = 0;
                                                    v974 = v1235;
                                                    v990 = (char *)v1278;
                                                    do
                                                    {
                                                      LODWORD(v1471) = v985;
                                                      LODWORD(v1470) = v981;
                                                      if ( v989 >= 4 )
                                                      {
                                                        v988 = (v988 << 8) | HIBYTE(v988);
                                                        v991 = v988;
                                                      }
                                                      else
                                                      {
                                                        v987 = (v987 << 8) | HIBYTE(v987);
                                                        v991 = v987;
                                                      }
                                                      *v990 = v991;
                                                      ++v989;
                                                      ++v990;
                                                      v981 = (int)v1470;
                                                      v985 = (unsigned int)v1471;
                                                    }
                                                    while ( v989 < v980 );
                                                    v1375 = v909;
                                                    lpMemo = v907;
                                                    v978 = v990;
                                                    v100 = v1477;
                                                    v957 = v1467;
                                                    if ( (unsigned int)v980 <= 4 )
                                                    {
                                                      v979 = 0;
                                                      if ( (unsigned int)v980 < 4 )
                                                        v973 = v973 >> (8 * (4 - v980)) << (8 * (4 - v980));
                                                    }
                                                    else
                                                    {
                                                      v979 = v986 >> (8 * (8 - v980)) << (8 * (8 - v980));
                                                    }
                                                  }
                                                  if ( (unsigned __int64)v1339 >> 3 )
                                                  {
                                                    v992 = HIDWORD(v1677);
                                                    v1279 = WORD1(v1677);
                                                    v993 = WORD2(v1677);
                                                    v1353 = HIWORD(v1677);
                                                    v1441 = v978 + 7;
                                                    v994 = v977 + 2;
                                                    v995 = (int)v1470;
                                                    v996 = (int)v1471;
                                                    v997 = (unsigned __int64)v1339 >> 3;
                                                    v998 = HIDWORD(v1677) ^ 0xB1B54A58;
                                                    do
                                                    {
                                                      v999 = v994[1] | ((*v994 | ((*(v994 - 1) | (*(v994 - 2) << 8)) << 8)) << 8);
                                                      v1000 = v994[5] | ((v994[4] | ((v994[3] | (v994[2] << 8)) << 8)) << 8);
                                                      v1001 = v1000 ^ v979;
                                                      v1470 = v994 + 8;
                                                      v1002 = v992 ^ (v1001 - 19032) ^ v999 ^ v973;
                                                      v1003 = (v1279 * __ROR4__(v992 ^ v1002, 15) + __ROR4__(v1002, 7)) ^ v1001;
                                                      v1004 = (v993 * __ROR4__(v1003 - 1313519016, 9)
                                                             - __ROR4__(v1003, 10)) ^ v1002;
                                                      v1005 = (v1353 * __ROR4__(v993 ^ v1004, 28) + __ROR4__(v1004, 27)) ^ v1003;
                                                      v1006 = (v992 - (v1005 ^ 0xB1B54A58)) ^ v1004;
                                                      v1007 = (WORD1(v1677) * (v1006 - 19032) - (v1006 >> 6)) ^ v1005;
                                                      v1008 = (19032 * (v993 ^ __ROR4__(v1007, 15))) ^ v1006;
                                                      v1009 = (v993 * (HIWORD(v1677) + __ROR4__(~v1008, 3))) ^ v1007;
                                                      v1010 = (v1009 - v992 - 19032) ^ v1008;
                                                      v1011 = (WORD1(v1677) * (HIWORD(v1677) ^ v1010)) ^ __ROR4__(v1010, 10) ^ v1009;
                                                      v1012 = (v993 * __ROR4__(v1011 ^ 0x4A58, 26)) ^ __ROR4__(v1011, 3) ^ v1010;
                                                      v1013 = (19032 * (__ROR4__(v1012, 15) - HIWORD(v1677))) ^ v1011;
                                                      v1014 = (v1013 >> 15) ^ (19032
                                                                             * ((8 * (v1013 - v993)) | ((v1013 - v993) >> 29))) ^ (v1013 >> 1) ^ (19032 * (HIWORD(v1677) ^ v1013)) ^ v1012;
                                                      v1015 = (WORD1(v1677) * (v1014 - v993) - (v1014 >> 13)) ^ v1013;
                                                      v1016 = (v993 * __ROR4__(-1313519016 - v1015, 9)) ^ __ROR4__(v1015, 11) ^ v1014;
                                                      v1017 = (v1016 + 1313519016 - HIWORD(v1677)) ^ v1015;
                                                      v1018 = (19032 * (WORD1(v1677) ^ v1017) - __ROR4__(v1017, 7)) ^ v1016;
                                                      v1019 = (__ROR4__(HIWORD(v1677) ^ v1018, 28) * WORD1(v1677)
                                                             - __ROR4__(v1018, 16)) ^ v1017;
                                                      v1020 = (__ROR4__(-1313519016 - v1019, 10) * v993
                                                             + __ROR4__(v1019, 4)) ^ v1018;
                                                      v1021 = (__ROR4__(v1020 + 1313519016, 4) * HIWORD(v1677)) ^ __ROR4__(v1020, 9) ^ v1019;
                                                      v1022 = (19032 * __ROR4__(v1021 ^ HIDWORD(v1677), 24)
                                                             - __ROR4__(v1021, 30)) ^ v1020;
                                                      v1023 = (__ROR4__(HIDWORD(v1677) - v1022, 11) * WORD1(v1677)
                                                             - __ROR4__(v1022, 12)) ^ v1021;
                                                      v1024 = (v1023 >> 8) ^ (v993 * (v1023 ^ WORD1(v1677))) ^ v1022;
                                                      v1025 = v1024 ^ v998 ^ v1023;
                                                      v973 = v995 ^ v1024;
                                                      v1026 = v996 ^ v1025;
                                                      LODWORD(v1471) = v1026;
                                                      *(v1441 - 4) = v973;
                                                      *v1441 = v1026;
                                                      *(v1441 - 5) = BYTE1(v973);
                                                      *(v1441 - 1) = BYTE1(v1026);
                                                      *(v1441 - 6) = (unsigned __int16)(v973 >> 8) >> 8;
                                                      *(v1441 - 2) = (unsigned __int16)(v1026 >> 8) >> 8;
                                                      *(v1441 - 7) = __ROR4__(
                                                                       (((v973 >> 8) | (v973 << 24)) >> 8) | (((v973 >> 8) | (v973 << 24)) << 24),
                                                                       8);
                                                      *(v1441 - 3) = __ROR4__(
                                                                       (((v1026 >> 8) | (v1026 << 24)) >> 8) | (((v1026 >> 8) | (v1026 << 24)) << 24),
                                                                       8);
                                                      v979 = (int)v1471;
                                                      v995 = v999;
                                                      v996 = v1000;
                                                      v1441 += 8;
                                                      --v997;
                                                      v992 = HIDWORD(v1677);
                                                      v994 = (unsigned __int8 *)v1470;
                                                    }
                                                    while ( v997 );
                                                    v974 = v1235;
                                                    v100 = v1477;
                                                    v907 = lpMemo;
                                                    v909 = v1375;
                                                    v957 = v1467;
                                                    v971 = (void *)v1324;
                                                  }
                                                  *(_QWORD *)&v1461[v1339] = v974;
                                                  v1027 = GetProcessHeap();
                                                  v1028 = HeapAlloc(v1027, 8u, 0x30uLL);
                                                  if ( v1028 )
                                                  {
                                                    *(_DWORD *)v1028 = v1465;
                                                    v1029 = GetProcessHeap();
                                                    v1030 = HeapAlloc(v1029, 8u, (unsigned int)v1465);
                                                    if ( !v1030 )
                                                      goto LABEL_1358;
                                                    v1028[1] = v1030;
                                                    memcpy_0(v1030, v1461, (unsigned int)v1465);
                                                    v1324 = (size_t)v971;
                                                    v1377 = v971;
                                                    *((_DWORD *)v1028 + 4) = 160;
                                                    v1031 = GetProcessHeap();
                                                    v1032 = HeapAlloc(v1031, 8u, 0xA0uLL);
                                                    if ( !v1032 )
                                                      goto LABEL_1358;
                                                    v1028[3] = v1032;
                                                    v1324 = (size_t)v971;
                                                    *v1032 = xmmword_1808C7470[0];
                                                    v1032[1] = xmmword_1808C7470[1];
                                                    v1032[2] = xmmword_1808C7470[2];
                                                    v1032[3] = xmmword_1808C7470[3];
                                                    v1032[4] = xmmword_1808C7470[4];
                                                    v1032[5] = xmmword_1808C7470[5];
                                                    v1032[6] = xmmword_1808C7470[6];
                                                    v1032[7] = xmmword_1808C7470[7];
                                                    v1032[8] = xmmword_1808C7470[8];
                                                    v2 = xmmword_1808C7470[9];
                                                    v1032[9] = v2;
                                                    *((_DWORD *)v1028 + 8) = 8;
                                                    v1033 = GetProcessHeap();
                                                    v1034 = HeapAlloc(v1033, 8u, 8uLL);
                                                    v1035 = 0;
                                                    if ( !v1034 )
                                                    {
                                                      v1324 = (size_t)v1377;
LABEL_1358:
                                                      v1035 = -1073741801;
                                                      v1378 = (void *)v1028[1];
                                                      if ( v1378 )
                                                      {
                                                        v1036 = GetProcessHeap();
                                                        HeapFree(v1036, 0, v1378);
                                                        v1028[1] = 0LL;
                                                      }
                                                      v1379 = (void *)v1028[3];
                                                      if ( v1379 )
                                                      {
                                                        v1037 = GetProcessHeap();
                                                        HeapFree(v1037, 0, v1379);
                                                        v1028[3] = 0LL;
                                                      }
                                                      v1380 = (void *)v1028[5];
                                                      if ( v1380 )
                                                      {
                                                        v1038 = GetProcessHeap();
                                                        HeapFree(v1038, 0, v1380);
                                                        v1028[5] = 0LL;
                                                      }
                                                      v1039 = GetProcessHeap();
                                                      HeapFree(v1039, 0, v1028);
                                                      goto LABEL_1367;
                                                    }
                                                    v1028[5] = v1034;
                                                    *v1034 = qword_1808C7460;
                                                    v957 = v1028;
                                                    v1427 = 0LL;
                                                  }
                                                  else
                                                  {
                                                    v1035 = -1073741801;
                                                  }
LABEL_1367:
                                                  v1040 = (void *)v1324;
                                                  v1467 = v957;
                                                  v1041 = GetProcessHeap();
                                                  HeapFree(v1041, 0, v1461);
                                                  v1042 = v1427;
                                                  if ( v1427 )
                                                  {
                                                    v1381 = (void *)*((_QWORD *)v1427 + 1);
                                                    if ( v1381 )
                                                    {
                                                      v1043 = GetProcessHeap();
                                                      HeapFree(v1043, 0, v1381);
                                                      v1042 = v1427;
                                                      *((_QWORD *)v1427 + 1) = 0LL;
                                                    }
                                                    v1382 = (void *)*((_QWORD *)v1042 + 3);
                                                    if ( v1382 )
                                                    {
                                                      v1044 = GetProcessHeap();
                                                      HeapFree(v1044, 0, v1382);
                                                      v1042 = v1427;
                                                      *((_QWORD *)v1427 + 3) = 0LL;
                                                    }
                                                    v1383 = (void *)*((_QWORD *)v1042 + 5);
                                                    if ( v1383 )
                                                    {
                                                      v1045 = GetProcessHeap();
                                                      HeapFree(v1045, 0, v1383);
                                                      *((_QWORD *)v1427 + 5) = 0LL;
                                                    }
                                                    v1046 = GetProcessHeap();
                                                    HeapFree(v1046, 0, v1427);
                                                    v1467 = v957;
                                                  }
                                                  v970 = v1035 | 0x10000000;
                                                  if ( v970 >= 0 )
                                                  {
                                                    v1535 = 0;
                                                    v1536 = 4;
                                                    v1047 = RtlUIntAdd(4u, *v957, (int *)&v1536);
                                                    if ( v1047 >= 0 )
                                                    {
                                                      v1047 = RtlUIntAdd(v1536, v1048, (int *)&v1536);
                                                      if ( v1047 >= 0 )
                                                      {
                                                        v1047 = RtlUIntAdd(v1536, v957[4], (int *)&v1536);
                                                        if ( v1047 >= 0 )
                                                        {
                                                          v1047 = RtlUIntAdd(v1536, v1049, (int *)&v1536);
                                                          if ( v1047 >= 0 )
                                                          {
                                                            v1047 = RtlUIntAdd(v1536, v957[8], (int *)&v1536);
                                                            if ( v1047 >= 0 )
                                                            {
                                                              v1535 = v1536;
                                                              v1050 = v1536;
                                                              v1051 = GetProcessHeap();
                                                              v1052 = HeapAlloc(v1051, 8u, v1050);
                                                              v1470 = v1052;
                                                              if ( !v1052 )
                                                              {
                                                                v970 = -805306345;
                                                                goto LABEL_1398;
                                                              }
                                                              v1599 = v1052;
                                                              *v1052 = *v957;
                                                              v1047 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1052,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1280 = v1053;
                                                              if ( v1047 < 0 )
                                                                goto LABEL_1391;
                                                              memcpy_0(
                                                                v1599,
                                                                *((const void **)v957 + 1),
                                                                (unsigned int)*v957);
                                                              v1047 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1599,
                                                                        (unsigned int)*v957,
                                                                        (__int64 *)&v1599);
                                                              v1053 = v1470;
                                                              v1280 = v1470;
                                                              if ( v1047 < 0 )
                                                                goto LABEL_1391;
                                                              v1054 = v1599;
                                                              *(_DWORD *)v1599 = v957[4];
                                                              v1047 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1054,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1053 = v1055;
                                                              v1280 = v1055;
                                                              if ( v1047 < 0 )
                                                                goto LABEL_1391;
                                                              memcpy_0(
                                                                v1599,
                                                                *((const void **)v957 + 3),
                                                                (unsigned int)v957[4]);
                                                              v1047 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1599,
                                                                        (unsigned int)v957[4],
                                                                        (__int64 *)&v1599);
                                                              v1053 = v1470;
                                                              v1280 = v1470;
                                                              if ( v1047 < 0 )
                                                                goto LABEL_1391;
                                                              v1056 = v1599;
                                                              *(_DWORD *)v1599 = v957[8];
                                                              v1047 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1056,
                                                                        4LL,
                                                                        (__int64 *)&v1599);
                                                              v1053 = v1057;
                                                              v1280 = v1057;
                                                              if ( v1047 < 0
                                                                || (memcpy_0(
                                                                      v1599,
                                                                      *((const void **)v957 + 5),
                                                                      (unsigned int)v957[8]),
                                                                    v1047 = RtlULongLongAdd(
                                                                              (unsigned __int64)v1599,
                                                                              (unsigned int)v957[8],
                                                                              (__int64 *)&v1599),
                                                                    v1053 = v1470,
                                                                    v1280 = v1470,
                                                                    v1047 < 0) )
                                                              {
LABEL_1391:
                                                                if ( v1053 )
                                                                {
                                                                  v1058 = GetProcessHeap();
                                                                  HeapFree(v1058, 0, v1280);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1472 = (SIZE_T)v1470;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    v970 = v1047 | 0x10000000;
                                                    if ( v970 >= 0 )
                                                    {
                                                      v1537 = 8;
                                                      v1059 = RtlUIntAdd(8u, lpModuleNamem, (int *)&v1537);
                                                      v970 = v1059 | 0x10000000;
                                                      if ( v1059 >= 0 )
                                                      {
                                                        v1538 = 0;
                                                        v1061 = (v1537 + 7) & 0xFFFFFFF8;
                                                        if ( v1061 < v1537 )
                                                        {
                                                          v970 = -1073741675;
                                                          goto LABEL_1398;
                                                        }
                                                        v1538 = (v1537 + 7) & 0xFFFFFFF8;
                                                        v1472 = v1060;
                                                        v970 = RtlUIntAdd(v1061, 8, (int *)&v1538);
                                                        if ( v970 >= 0 )
                                                        {
                                                          v1472 = v1088;
                                                          v1399 = v1089;
                                                          if ( !v1623[1] )
                                                            goto LABEL_1440;
                                                          v1472 = v1088;
                                                          if ( LODWORD(v1623[0]) <= 1 )
                                                            goto LABEL_1440;
                                                          v1090 = (unsigned int *)v1623[1];
                                                          v1600 = (unsigned int *)v1623[1];
                                                          v1467 = v957;
                                                          lpMemq = v907;
                                                          v1384 = v909;
                                                          do
                                                          {
                                                            lpModuleNamen = *v1090;
                                                            v970 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1090,
                                                                     4LL,
                                                                     (__int64 *)&v1600);
                                                            if ( v970 < 0 )
                                                              goto LABEL_1398;
                                                            v970 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1600,
                                                                     lpModuleNamen,
                                                                     (__int64 *)&v1600);
                                                            if ( v970 < 0 )
                                                              goto LABEL_1398;
                                                            v1090 = v1600;
                                                          }
                                                          while ( v1091 == -1 );
                                                          lpModuleNameo = *v1600;
                                                          v970 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1600,
                                                                   4LL,
                                                                   (__int64 *)&v1600);
                                                          if ( v970 >= 0 )
                                                          {
                                                            v1472 = v1092;
                                                            if ( !v1623[1] || (v1472 = v1092, LODWORD(v1623[0]) <= 2) )
                                                            {
LABEL_1440:
                                                              v970 = -1073741811;
                                                              goto LABEL_1398;
                                                            }
                                                            v1093 = (unsigned int *)v1623[1];
                                                            v1601 = v1623[1];
                                                            do
                                                            {
                                                              v1340 = *v1093;
                                                              v970 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1093,
                                                                       4LL,
                                                                       (__int64 *)&v1601);
                                                              if ( v970 < 0 )
                                                                goto LABEL_1398;
                                                              v970 = RtlULongLongAdd(v1601, v1340, (__int64 *)&v1601);
                                                              if ( v970 < 0 )
                                                                goto LABEL_1398;
                                                              v1093 = (unsigned int *)v1601;
                                                            }
                                                            while ( (unsigned int)(v1094 + 1) < 2 );
                                                            v970 = RtlULongLongAdd(v1601, 4LL, (__int64 *)&v1601);
                                                            if ( v970 >= 0 )
                                                            {
                                                              v1472 = v1095;
                                                              v1539 = 4;
                                                              v970 = RtlUIntAdd(4u, v1538, (int *)&v1539);
                                                              if ( v970 >= 0 )
                                                              {
                                                                v970 = RtlUIntAdd(v1539, v1096, (int *)&v1539);
                                                                if ( v970 >= 0 )
                                                                {
                                                                  v970 = RtlUIntAdd(v1539, lpModuleNameo, (int *)&v1539);
                                                                  if ( v970 >= 0 )
                                                                  {
                                                                    v970 = RtlUIntAdd(v1539, 4, (int *)&v1539);
                                                                    if ( v970 >= 0 )
                                                                    {
                                                                      v970 = RtlUIntAdd(v1539, v1097, (int *)&v1539);
                                                                      if ( v970 >= 0 )
                                                                      {
                                                                        v1472 = v1098;
                                                                        if ( v1539 > 0x400000 )
                                                                        {
                                                                          v970 = -2147418113;
                                                                          goto LABEL_1398;
                                                                        }
                                                                        LODWORD(v1466) = v1539;
                                                                        v1099 = v1539;
                                                                        v1100 = GetProcessHeap();
                                                                        v1101 = (WCHAR *)HeapAlloc(v1100, 8u, v1099);
                                                                        v1102 = v1369;
                                                                        if ( v1101 )
                                                                          v1102 = v1101;
                                                                        v1369 = v1102;
                                                                        v970 = v1101 != 0LL ? 0x10000000 : -805306345;
                                                                        if ( v1101 )
                                                                        {
                                                                          v1628 = 0LL;
                                                                          v1629 = 0LL;
                                                                          hModule = 0LL;
                                                                          if ( !v1472 || !v1102 )
                                                                          {
                                                                            v970 = -2147024809;
                                                                            goto LABEL_1398;
                                                                          }
                                                                          *(_QWORD *)&v1628 = v1472;
                                                                          LODWORD(v1629) = v1399;
                                                                          *((_QWORD *)&v1628 + 1) = v1102;
                                                                          *(_QWORD *)((char *)&v1629 + 4) = (unsigned int)v1466;
                                                                          if ( GetModuleHandleExW(
                                                                                 1u,
                                                                                 L"ntdll.dll",
                                                                                 &hModule)
                                                                            && (ProcAddress = GetProcAddress(
                                                                                                hModule,
                                                                                                "NtQuerySystemInformation")) != 0LL )
                                                                          {
                                                                            v1105 = ((__int64 (__fastcall *)(__int64, __int128 *))ProcAddress)(
                                                                                      134LL,
                                                                                      &v1628);
                                                                            v970 = v1105 | 0x10000000;
                                                                            if ( v1105 >= 0 )
                                                                            {
                                                                              v1106 = DWORD1(v1629);
LABEL_1480:
                                                                              v1540 = 0;
                                                                              v1603 = v1369;
                                                                              if ( v1106 < 4 )
                                                                              {
                                                                                v970 = -805306306;
                                                                                goto LABEL_1398;
                                                                              }
                                                                              lpModuleNamep = *(_DWORD *)v1369;
                                                                              v1107 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1369,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1107 = RtlUIntAdd(0, 4, (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1108 - v1540 < (unsigned int)v1109 )
                                                                              {
LABEL_1485:
                                                                                v970 = -805306306;
                                                                                goto LABEL_1398;
                                                                              }
                                                                              v1465 = (SIZE_T)v1603;
                                                                              v1107 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        v1109,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1107 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1110,
                                                                                        (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1111 - v1540 < 4 )
                                                                                goto LABEL_1485;
                                                                              v1341 = *(_DWORD *)v1603;
                                                                              v1107 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1107 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        4,
                                                                                        (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1112 - v1540 < v1113 )
                                                                                goto LABEL_1485;
                                                                              v1466 = v1603;
                                                                              v1107 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        v1113,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1107 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1114,
                                                                                        (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1115 - v1540 < 4 )
                                                                                goto LABEL_1485;
                                                                              v1400 = *(_DWORD *)v1603;
                                                                              v1107 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1603,
                                                                                        4LL,
                                                                                        (__int64 *)&v1603);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              v1107 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        4,
                                                                                        (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                                goto LABEL_1524;
                                                                              if ( v1116 - v1540 < v1400 )
                                                                                goto LABEL_1485;
                                                                              v1107 = RtlUIntAdd(
                                                                                        v1540,
                                                                                        v1400,
                                                                                        (int *)&v1540);
                                                                              if ( v1107 < 0 )
                                                                              {
LABEL_1524:
                                                                                v1134 = v1413;
LABEL_1525:
                                                                                v970 = v1107 | 0x10000000;
                                                                                if ( v970 < 0 )
                                                                                  goto LABEL_1398;
                                                                                if ( !v1134
                                                                                  || (v1428 = (LPCWSTR)*((_QWORD *)v1134 + 1)) == 0LL
                                                                                  || !*(_DWORD *)v1134 )
                                                                                {
                                                                                  v970 = -805306355;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                v1135 = *(unsigned int *)v1134 - 8LL;
                                                                                v1465 = v1135;
                                                                                v1136 = (unsigned __int16 *)MemoryAlloc(v1135);
                                                                                v1468 = v1136;
                                                                                if ( !v1136 )
                                                                                  goto LABEL_1555;
                                                                                v1137 = 0;
                                                                                v1678 = 0x7F1137FAB69605ELL;
                                                                                v1138 = (unsigned __int8 *)v1428;
                                                                                v1471 = v1136;
                                                                                v1139 = v1135 & 7;
                                                                                lpModuleNameq = 0;
                                                                                v1140 = 0;
                                                                                if ( (v1135 & 7) != 0 )
                                                                                {
                                                                                  v1475 = 0;
                                                                                  v1141 = v1413;
                                                                                  do
                                                                                  {
                                                                                    v1142 = *v1138;
                                                                                    if ( v1140 >= 4 )
                                                                                    {
                                                                                      v1475 |= v1142 << v1476;
                                                                                      v1143 = lpModuleNameq;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v1143 = (v1142 << (v1476 - 32)) | lpModuleNameq;
                                                                                      lpModuleNameq = v1143;
                                                                                    }
                                                                                    ++v1138;
                                                                                    ++v1140;
                                                                                    v1476 -= 8;
                                                                                  }
                                                                                  while ( (int)v1140 < (int)v1139 );
                                                                                  v1140 = v1143 ^ 0x92F65A5;
                                                                                  v1144 = v1475 ^ 0x699A899C;
                                                                                  v1145 = v1143 ^ 0x92F65A5;
                                                                                  v1146 = v1475 ^ 0x699A899C;
                                                                                  v1147 = 0;
                                                                                  v1342 = 0;
                                                                                  v1148 = v1138;
                                                                                  do
                                                                                  {
                                                                                    lpModuleNameq = v1143;
                                                                                    if ( v1147 >= 4 )
                                                                                    {
                                                                                      v1146 = (v1146 << 8) | HIBYTE(v1146);
                                                                                      v1149 = v1146;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v1145 = (v1145 << 8) | HIBYTE(v1145);
                                                                                      v1149 = v1145;
                                                                                    }
                                                                                    v1150 = (char *)v1471 + 1;
                                                                                    v1466 = (char *)v1471 + 1;
                                                                                    *(_BYTE *)v1471 = v1149;
                                                                                    v1147 = v1342 + 1;
                                                                                    v1342 = v1147;
                                                                                    v1471 = v1150;
                                                                                    v1143 = lpModuleNameq;
                                                                                  }
                                                                                  while ( v1147 < (int)v1139 );
                                                                                  v1467 = v957;
                                                                                  v1384 = v909;
                                                                                  lpMemq = v907;
                                                                                  v1471 = v1466;
                                                                                  v1137 = 0;
                                                                                  v100 = v1477;
                                                                                  v1136 = v1468;
                                                                                  v1138 = v1148;
                                                                                  if ( v1139 <= 4 )
                                                                                  {
                                                                                    v1151 = 0;
                                                                                    if ( v1139 < 4 )
                                                                                      v1140 = v1140 >> (8 * (4 - v1139)) << (8 * (4 - v1139));
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1151 = v1144 >> (8 * (8 - v1139)) << (8 * (8 - v1139));
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  v1151 = 0;
                                                                                  v1141 = v1413;
                                                                                }
                                                                                v1470 = (LPVOID)(v1465 >> 3);
                                                                                if ( v1465 >> 3 )
                                                                                {
                                                                                  v1152 = HIDWORD(v1678);
                                                                                  LODWORD(v1466) = HIWORD(v1678);
                                                                                  v1153 = (char *)v1471 + 7;
                                                                                  v1154 = v1138 + 2;
                                                                                  v1155 = lpModuleNameq;
                                                                                  v1156 = (char *)v1470;
                                                                                  v1157 = WORD2(v1678);
                                                                                  v1158 = WORD1(v1678);
                                                                                  do
                                                                                  {
                                                                                    v1159 = v1154[1] | ((*v1154 | ((*(v1154 - 1) | (*(v1154 - 2) << 8)) << 8)) << 8);
                                                                                    v1160 = v1154[5] | ((v1154[4] | ((v1154[3] | (v1154[2] << 8)) << 8)) << 8);
                                                                                    v1161 = v1159 ^ v1140;
                                                                                    v1154 += 8;
                                                                                    v1162 = v1152 ^ v1161 ^ 0xAB69605E ^ v1160 ^ v1151;
                                                                                    v1163 = (v1157
                                                                                           * __ROR4__(
                                                                                               v1162 + 1419157410,
                                                                                               27)
                                                                                           + __ROR4__(v1162, 22)) ^ v1161;
                                                                                    v1164 = (v1158
                                                                                           * __ROR4__(v1163 + v1152, 9)
                                                                                           - __ROR4__(v1163, 30)) ^ v1162;
                                                                                    v1165 = (24670 * (v1164 - v1157)
                                                                                           - (v1164 >> 13)) ^ v1163;
                                                                                    v1166 = ((_DWORD)v1466
                                                                                           * __ROR4__(v1158 ^ v1165, 26)
                                                                                           - __ROR4__(v1165, 30)) ^ v1164;
                                                                                    v1167 = (v1152 - (v1166 ^ 0xAB69605E)) ^ v1165;
                                                                                    lpModuleNames = (v1158 * (v1157 ^ v1167)) ^ __ROR4__(v1167, 6) ^ v1166;
                                                                                    v1168 = (24670
                                                                                           * __ROR4__(
                                                                                               lpModuleNames + v1152,
                                                                                               15)
                                                                                           + __ROR4__(lpModuleNames, 30)) ^ v1167;
                                                                                    v1169 = (HIWORD(v1678)
                                                                                           * __ROR4__(
                                                                                               v1168 + 1419157410,
                                                                                               14)
                                                                                           - __ROR4__(v1168, 24)) ^ lpModuleNames;
                                                                                    v1170 = (v1157
                                                                                           * __ROR4__(
                                                                                               v1169 ^ 0xAB69605E,
                                                                                               12)) ^ __ROR4__(v1169, 10) ^ v1168;
                                                                                    v1171 = (v1170 >> 10) ^ (v1158 * (HIWORD(v1678) ^ v1170)) ^ v1169;
                                                                                    v1172 = (HIWORD(v1678)
                                                                                           * (__ROR4__(~v1171, 5) + 24670)) ^ v1170;
                                                                                    lpModuleNamet = (v1172 - HIWORD(v1678)) ^ 0xAB69605E ^ v1171;
                                                                                    v1173 = ((lpModuleNamet >> 2)
                                                                                           + __ROR4__(
                                                                                               HIWORD(v1678) ^ lpModuleNamet,
                                                                                               30)
                                                                                           * v1157) ^ v1172;
                                                                                    lpModuleNameu = (__ROR4__(v1173 - v1152, 6) * v1158 + __ROR4__(v1173, 25)) ^ lpModuleNamet;
                                                                                    v1174 = (24670
                                                                                           * (v1157 ^ lpModuleNameu)
                                                                                           + __ROR4__(lpModuleNameu, 9)) ^ v1173;
                                                                                    v1175 = (__ROR4__(v1158 ^ v1174, 27)
                                                                                           * HIWORD(v1678)
                                                                                           + __ROR4__(v1174, 25)) ^ lpModuleNameu;
                                                                                    v1176 = v1152 ^ v1175 ^ 0xAB69605E ^ v1174;
                                                                                    lpModuleNamev = (v1157 * (__ROR4__(v1176, 3) - v1158)) ^ v1175;
                                                                                    v1177 = (24670
                                                                                           * __ROR4__(
                                                                                               lpModuleNamev - v1152,
                                                                                               1)
                                                                                           - __ROR4__(lpModuleNamev, 6)) ^ v1176;
                                                                                    lpModuleNamew = (__ROR4__(v1177 - 1419157410, 29) * HIWORD(v1678) + __ROR4__(v1177, 18)) ^ lpModuleNamev;
                                                                                    v1178 = (__ROR4__(
                                                                                               lpModuleNamew
                                                                                             - 1419157410,
                                                                                               17)
                                                                                           * v1157
                                                                                           - __ROR4__(lpModuleNamew, 14)) ^ v1177;
                                                                                    lpModuleNamex = (v1178 >> 3) ^ (v1158 * (v1178 ^ 0x605E)) ^ lpModuleNamew;
                                                                                    v1343 = (24670
                                                                                           * __ROR4__(
                                                                                               v1152 ^ lpModuleNamex,
                                                                                               28)) ^ __ROR4__(lpModuleNamex, 30) ^ v1155 ^ v1178;
                                                                                    lpModuleNamey = v1475 ^ lpModuleNamex;
                                                                                    *(v1153 - 4) = v1343;
                                                                                    *v1153 = lpModuleNamey;
                                                                                    *(v1153 - 5) = BYTE1(v1343);
                                                                                    *(v1153 - 1) = BYTE1(lpModuleNamey);
                                                                                    *(v1153 - 6) = (unsigned __int16)(v1343 >> 8) >> 8;
                                                                                    *(v1153 - 2) = (unsigned __int16)(lpModuleNamey >> 8) >> 8;
                                                                                    *(v1153 - 7) = __ROR4__(
                                                                                                     (((v1343 >> 8) | (v1343 << 24)) >> 8) | (((v1343 >> 8) | (v1343 << 24)) << 24),
                                                                                                     8);
                                                                                    *(v1153 - 3) = __ROR4__(
                                                                                                     (((lpModuleNamey >> 8) | (lpModuleNamey << 24)) >> 8) | (((lpModuleNamey >> 8) | (lpModuleNamey << 24)) << 24),
                                                                                                     8);
                                                                                    v1151 = lpModuleNamey;
                                                                                    v1155 = v1159;
                                                                                    v1475 = v1160;
                                                                                    v1153 += 8;
                                                                                    --v1156;
                                                                                    v1140 = v1343;
                                                                                  }
                                                                                  while ( v1156 );
                                                                                  v1137 = 0;
                                                                                  v100 = v1477;
                                                                                  v907 = lpMemq;
                                                                                  v909 = v1384;
                                                                                  v957 = v1467;
                                                                                  v1040 = (void *)v1324;
                                                                                  v1141 = v1413;
                                                                                  v1136 = v1468;
                                                                                }
                                                                                for ( n = 0LL; n < v1465; ++n )
                                                                                  v1137 ^= *((_BYTE *)v1136 + n);
                                                                                v1385 = (LPVOID)v1472;
                                                                                lpMemr = v1040;
                                                                                v1413 = v1141;
                                                                                if ( v1137 != *(_QWORD *)((char *)v1428 + v1465) )
                                                                                {
                                                                                  MemoryFree(v1136);
LABEL_1555:
                                                                                  v970 = -805306367;
                                                                                  v1468 = 0LL;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                v1541 = 0;
                                                                                v1604 = v1136;
                                                                                if ( (unsigned int)v1465 < 4 )
                                                                                {
                                                                                  v1180 = -1073741762;
                                                                                  v1468 = v1136;
                                                                                  v1413 = v1141;
LABEL_1595:
                                                                                  v970 = v1180 | 0x10000000;
                                                                                  goto LABEL_1398;
                                                                                }
                                                                                lpModuleNamer = *(_DWORD *)v1136;
                                                                                v1180 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1136,
                                                                                          4LL,
                                                                                          (__int64 *)&v1604);
                                                                                v1468 = v1181;
                                                                                v1413 = v1182;
                                                                                v1472 = (SIZE_T)v1385;
                                                                                if ( v1180 < 0 )
                                                                                  goto LABEL_1595;
                                                                                v1180 = RtlUIntAdd(0, 4, (int *)&v1541);
                                                                                v1468 = v1183;
                                                                                v1413 = v1184;
                                                                                v1185 = (SIZE_T)v1385;
                                                                                v1472 = (SIZE_T)v1385;
                                                                                if ( v1180 < 0 )
                                                                                  goto LABEL_1595;
                                                                                if ( (unsigned int)v1465 - v1541 < 4 )
                                                                                  goto LABEL_1561;
                                                                                v1344 = *(_DWORD *)v1604;
                                                                                v1180 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1604,
                                                                                          4LL,
                                                                                          (__int64 *)&v1604);
                                                                                v1468 = v1186;
                                                                                v1413 = v1187;
                                                                                v1472 = (SIZE_T)v1385;
                                                                                if ( v1180 < 0 )
                                                                                  goto LABEL_1595;
                                                                                v1180 = RtlUIntAdd(
                                                                                          v1541,
                                                                                          4,
                                                                                          (int *)&v1541);
                                                                                v1468 = v1183;
                                                                                v1413 = v1184;
                                                                                v1185 = (SIZE_T)v1385;
                                                                                v1472 = (SIZE_T)v1385;
                                                                                if ( v1180 < 0 )
                                                                                  goto LABEL_1595;
                                                                                if ( (unsigned int)v1465 - v1541 < v1344 )
                                                                                {
LABEL_1561:
                                                                                  v1472 = v1185;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v1180 = RtlUIntAdd(
                                                                                            v1541,
                                                                                            v1344,
                                                                                            (int *)&v1541);
                                                                                  v1468 = v1183;
                                                                                  v1413 = v1184;
                                                                                  v1472 = (SIZE_T)v1385;
                                                                                  if ( v1180 < 0 )
                                                                                    goto LABEL_1595;
                                                                                  v1188 = v1604;
                                                                                  if ( (char *)v1183
                                                                                     + (unsigned int)v1465 >= (char *)v1604 + v1344
                                                                                    && (unsigned __int64)v1183
                                                                                     + (unsigned int)v1465
                                                                                     - (_QWORD)v1604
                                                                                     - v1344 < 8 )
                                                                                  {
                                                                                    v1189 = 0LL;
                                                                                    v1429 = 0LL;
                                                                                    v1605 = 0LL;
                                                                                    v1606 = 0LL;
                                                                                    v1607 = 0LL;
                                                                                    v1180 = 0;
                                                                                    v1401 = 0;
                                                                                    v1468 = v1183;
                                                                                    v1413 = v1184;
                                                                                    v1325 = (size_t)lpMemr;
                                                                                    v1472 = (SIZE_T)v1385;
                                                                                    if ( v1604 )
                                                                                    {
                                                                                      v1465 = (SIZE_T)v1604;
                                                                                      v1180 = RtlULongLongAdd(
                                                                                                (unsigned __int64)v1604,
                                                                                                v1344,
                                                                                                (__int64 *)&v1605);
                                                                                      v1468 = v1190;
                                                                                      v1413 = v1191;
                                                                                      v1325 = (size_t)lpMemr;
                                                                                      v1472 = (SIZE_T)v1385;
                                                                                      if ( v1180 < 0 )
                                                                                        goto LABEL_1589;
                                                                                      v1468 = v1190;
                                                                                      v1413 = v1191;
                                                                                      v1040 = lpMemr;
                                                                                      v1325 = (size_t)lpMemr;
                                                                                      v1472 = (SIZE_T)v1385;
                                                                                      v1192 = v1465;
                                                                                      if ( v1465 < v1605 )
                                                                                      {
                                                                                        v1193 = v1190;
                                                                                        v1468 = v1190;
                                                                                        v1413 = v1191;
                                                                                        v1325 = (size_t)lpMemr;
                                                                                        v1472 = (SIZE_T)v1385;
                                                                                        while ( 1 )
                                                                                        {
                                                                                          v1180 = RtlULongLongAdd(
                                                                                                    v1192,
                                                                                                    4LL,
                                                                                                    (__int64 *)&v1606);
                                                                                          if ( v1180 < 0 )
                                                                                            goto LABEL_1589;
                                                                                          if ( v1606 > v1605 )
                                                                                            goto LABEL_1579;
                                                                                          v1543 = 0;
                                                                                          v1180 = RtlUIntAdd(
                                                                                                    4u,
                                                                                                    *v1194,
                                                                                                    (int *)&v1543);
                                                                                          if ( v1180 < 0 )
                                                                                            goto LABEL_1595;
                                                                                          v1180 = RtlULongLongAdd(
                                                                                                    v1195,
                                                                                                    v1543,
                                                                                                    (__int64 *)&v1607);
                                                                                          v1468 = v1193;
                                                                                          v1413 = v1197;
                                                                                          v1325 = (size_t)lpMemr;
                                                                                          v1472 = v1196;
                                                                                          if ( v1180 < 0 )
                                                                                            goto LABEL_1589;
                                                                                          v1192 = v1607;
                                                                                          v1465 = v1607;
                                                                                          v1198 = v1605;
                                                                                          v1468 = v1193;
                                                                                          v1413 = v1197;
                                                                                          v1472 = v1196;
                                                                                          if ( v1607 > v1605 )
                                                                                            goto LABEL_1579;
                                                                                          ++v1401;
                                                                                          v1325 = (size_t)lpMemr;
                                                                                          if ( v1607 >= v1605 )
                                                                                          {
                                                                                            v1468 = v1193;
                                                                                            v1413 = v1197;
                                                                                            v1325 = (size_t)lpMemr;
                                                                                            v1472 = v1196;
                                                                                            goto LABEL_1581;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      v1198 = v1605;
LABEL_1581:
                                                                                      if ( v1192 != v1198 )
                                                                                      {
LABEL_1579:
                                                                                        v1180 = -1073741811;
                                                                                        goto LABEL_1595;
                                                                                      }
                                                                                      v1188 = v1604;
                                                                                      v1189 = 0LL;
                                                                                    }
                                                                                    v1199 = v1344;
                                                                                    if ( !v1344 )
                                                                                    {
LABEL_1586:
                                                                                      if ( v1188 )
                                                                                      {
                                                                                        memcpy_0(v1189, v1188, v1199);
                                                                                        v1189 = (void *)v1429;
                                                                                      }
                                                                                      v1624[1] = v1189;
                                                                                      LODWORD(v1624[0]) = v1401;
                                                                                      goto LABEL_1589;
                                                                                    }
                                                                                    v1200 = GetProcessHeap();
                                                                                    v1189 = HeapAlloc(v1200, 8u, v1344);
                                                                                    v1429 = (LPCWSTR)v1189;
                                                                                    if ( v1189 )
                                                                                    {
                                                                                      v1180 = 0;
                                                                                      v1199 = v1344;
                                                                                      goto LABEL_1586;
                                                                                    }
                                                                                    v1180 = -1073741801;
LABEL_1589:
                                                                                    v1040 = (void *)v1325;
                                                                                    if ( v1180 >= 0
                                                                                      && lpModuleNamer != LODWORD(v1624[0]) )
                                                                                    {
                                                                                      v1180 = -1073741762;
                                                                                    }
                                                                                    goto LABEL_1595;
                                                                                  }
                                                                                  v1040 = lpMemr;
                                                                                  v1472 = (SIZE_T)v1385;
                                                                                }
                                                                                v1413 = v1184;
                                                                                v1468 = v1183;
                                                                                v1180 = -1073741762;
                                                                                goto LABEL_1595;
                                                                              }
                                                                              if ( v1117 != v1540
                                                                                || v1119 + v1118 + v1400 + 12LL != v1117 )
                                                                              {
                                                                                goto LABEL_1485;
                                                                              }
                                                                              v1120 = GetProcessHeap();
                                                                              v1121 = (SIZE_T *)HeapAlloc(
                                                                                                  v1120,
                                                                                                  8u,
                                                                                                  0x30uLL);
                                                                              v1122 = v1121;
                                                                              v1414 = v1121;
                                                                              if ( !v1121 )
                                                                              {
                                                                                v1107 = -1073741801;
LABEL_1523:
                                                                                v1134 = 0LL;
                                                                                v1413 = 0LL;
                                                                                goto LABEL_1525;
                                                                              }
                                                                              v1107 = 0;
                                                                              if ( v1465 )
                                                                              {
                                                                                *(_DWORD *)v1121 = lpModuleNamep;
                                                                                v1123 = GetProcessHeap();
                                                                                v1124 = HeapAlloc(
                                                                                          v1123,
                                                                                          8u,
                                                                                          lpModuleNamep);
                                                                                if ( !v1124 )
                                                                                  goto LABEL_1512;
                                                                                v1414[1] = (SIZE_T)v1124;
                                                                                v1107 = 0;
                                                                                memcpy_0(
                                                                                  v1124,
                                                                                  (const void *)v1465,
                                                                                  lpModuleNamep);
                                                                                v1122 = v1414;
                                                                                v1467 = v957;
                                                                                lpMemq = v907;
                                                                                v1384 = v909;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)v1121 = 0;
                                                                                v1121[1] = 0LL;
                                                                              }
                                                                              v1414 = v1122;
                                                                              if ( !v1466 )
                                                                              {
                                                                                *((_DWORD *)v1122 + 4) = 0;
                                                                                v1122[3] = 0LL;
LABEL_1510:
                                                                                if ( v1603 )
                                                                                {
                                                                                  *((_DWORD *)v1122 + 8) = v1400;
                                                                                  v1465 = v1400;
                                                                                  v1127 = GetProcessHeap();
                                                                                  v1128 = HeapAlloc(v1127, 8u, v1400);
                                                                                  if ( !v1128 )
                                                                                    goto LABEL_1512;
                                                                                  v1414[5] = (SIZE_T)v1128;
                                                                                  v1107 = 0;
                                                                                  memcpy_0(v1128, v1603, v1465);
                                                                                  v1122 = v1414;
                                                                                  v1467 = v957;
                                                                                  lpMemq = v907;
                                                                                  v1384 = v909;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *((_DWORD *)v1122 + 8) = 0;
                                                                                  v1122[5] = 0LL;
                                                                                }
                                                                                v1134 = (unsigned __int16 *)v1122;
                                                                                v1413 = (unsigned __int16 *)v1122;
                                                                                goto LABEL_1525;
                                                                              }
                                                                              *((_DWORD *)v1122 + 4) = v1341;
                                                                              v1465 = v1341;
                                                                              v1125 = GetProcessHeap();
                                                                              v1126 = HeapAlloc(v1125, 8u, v1341);
                                                                              if ( v1126 )
                                                                              {
                                                                                v1414[3] = (SIZE_T)v1126;
                                                                                v1107 = 0;
                                                                                memcpy_0(v1126, v1466, v1465);
                                                                                v1122 = v1414;
                                                                                v1467 = v957;
                                                                                lpMemq = v907;
                                                                                v1384 = v909;
                                                                                goto LABEL_1510;
                                                                              }
LABEL_1512:
                                                                              v1107 = -1073741801;
                                                                              v1129 = v1414;
                                                                              v1465 = v1414[1];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1130 = GetProcessHeap();
                                                                                HeapFree(v1130, 0, (LPVOID)v1465);
                                                                                v1129 = v1414;
                                                                                v1414[1] = 0LL;
                                                                              }
                                                                              v1465 = v1129[3];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1131 = GetProcessHeap();
                                                                                HeapFree(v1131, 0, (LPVOID)v1465);
                                                                                v1129 = v1414;
                                                                                v1414[3] = 0LL;
                                                                              }
                                                                              v1465 = v1129[5];
                                                                              if ( v1465 )
                                                                              {
                                                                                v1132 = GetProcessHeap();
                                                                                HeapFree(v1132, 0, (LPVOID)v1465);
                                                                                v1414[5] = 0LL;
                                                                              }
                                                                              v1133 = GetProcessHeap();
                                                                              HeapFree(v1133, 0, v1414);
                                                                              goto LABEL_1523;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v1103 = GetLastError();
                                                                            v970 = v1103;
                                                                            if ( v1103 > 0 )
                                                                              v970 = (unsigned __int16)v1103 | 0x80070000;
                                                                            if ( v970 >= 0 )
                                                                              v970 = -2147467259;
                                                                          }
                                                                          if ( v970 == -805306333 )
                                                                          {
                                                                            v970 = -2147024774;
                                                                            goto LABEL_1398;
                                                                          }
                                                                          if ( v970 >= 0 )
                                                                          {
                                                                            v1106 = (unsigned int)v1466;
                                                                            goto LABEL_1480;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
LABEL_1398:
                                                  if ( !v1040 )
                                                    goto LABEL_1400;
                                                  goto LABEL_1399;
                                                }
LABEL_1599:
                                                v1623[0] = 0LL;
                                                v1201 = (void *)v1623[1];
                                                if ( v1623[1] )
                                                {
                                                  v1202 = GetProcessHeap();
                                                  HeapFree(v1202, 0, v1201);
                                                  v1623[1] = 0LL;
                                                }
                                                v1624[0] = 0LL;
                                                v1203 = v1624[1];
                                                if ( v1624[1] )
                                                {
                                                  v1204 = GetProcessHeap();
                                                  HeapFree(v1204, 0, v1203);
                                                  v1624[1] = 0LL;
                                                }
                                                if ( v909 )
                                                {
                                                  v1205 = GetProcessHeap();
                                                  HeapFree(v1205, 0, v909);
                                                }
                                                if ( v907 )
                                                {
                                                  v1206 = GetProcessHeap();
                                                  HeapFree(v1206, 0, v907);
                                                }
                                                goto LABEL_1607;
                                              }
                                              v961 = (v1534 + 7) & 0xFFFFFFF8;
                                              if ( v961 < v1534 )
                                                goto LABEL_1599;
                                              v1534 = (v1534 + 7) & 0xFFFFFFF8;
                                              v962 = v961;
                                              v963 = GetProcessHeap();
                                              v964 = HeapAlloc(v963, 8u, v962);
                                              v1376 = v964;
                                              v960 = 0LL;
                                              if ( v964 )
                                              {
                                                v1597 = v964;
                                                *v964 = v1623[0];
                                                v958 = RtlULongLongAdd((unsigned __int64)v964, 4LL, (__int64 *)&v1597);
                                                lpMemp = v966;
                                                if ( v958 >= 0 )
                                                {
                                                  v967 = v1597;
                                                  *(_DWORD *)v1597 = HIDWORD(v1623[0]);
                                                  v958 = RtlULongLongAdd(
                                                           (unsigned __int64)v967,
                                                           v965,
                                                           (__int64 *)&v1597);
                                                  lpMemp = v968;
                                                  if ( v958 >= 0 )
                                                  {
                                                    *(_QWORD *)&v968[v1534 - 8] = v1426;
                                                    memcpy_0(v1597, (const void *)v1623[1], HIDWORD(v1623[0]));
                                                    v1324 = (size_t)v1376;
                                                    v959 = v1534;
                                                    v1339 = v1534;
                                                    v960 = 0LL;
LABEL_1326:
                                                    lpMemo = v907;
                                                    v1375 = v909;
                                                    goto LABEL_1327;
                                                  }
                                                }
                                                v969 = GetProcessHeap();
                                                HeapFree(v969, 0, lpMemp);
                                                v960 = 0LL;
                                              }
                                              else
                                              {
                                                v958 = -1073741801;
                                              }
                                              v959 = (unsigned int)v957;
                                              goto LABEL_1326;
                                            }
                                            lpMemk = (CToastCenterExperienceManager *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                                                        0LL,
                                                                                        0LL,
                                                                                        1027LL);
                                            if ( !lpMemk )
                                            {
                                              GetLastError();
                                              goto LABEL_1264;
                                            }
                                            qword_1808CCC38 = off_1808C03D8[0]();
                                            v462 = dword_1808C9398;
                                            v1271 = dword_1808C9398;
                                            memset_0(&v1660, 0, 0x70uLL);
                                            v1686 = 0LL;
                                            v1467 = 0LL;
                                            memset(v1695, 0, 44);
                                            v1472 = 0LL;
                                            while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                              ;
                                            v463 = dword_1808CCC34;
                                            if ( dword_1808CCC34 )
                                              goto LABEL_679;
                                            v1350 = 0;
                                            v1454 = 0;
                                            v464 = (char *)MemoryAlloc(0x338uLL);
                                            v1356 = (WCHAR *)v464;
                                            if ( !v464 )
                                              goto LABEL_642;
                                            v465 = 0;
                                            v466 = 0;
                                            v467 = 0;
                                            v468 = v464 + 7;
                                            v469 = (unsigned __int8 *)&unk_18077F812;
                                            v470 = 103LL;
                                            v471 = -1;
                                            do
                                            {
                                              v472 = v469[1] | ((*v469 | ((*(v469 - 1) | (*(v469 - 2) << 8)) << 8)) << 8);
                                              v473 = v469[5] | ((v469[4] | ((v469[3] | (v469[2] << 8)) << 8)) << 8);
                                              v474 = v472 ^ v467;
                                              v469 += 8;
                                              v475 = v474 ^ v466 ^ v473 ^ 0xAC987321;
                                              v476 = (4991 * __ROR4__(v475 + 1419157410, 27) + __ROR4__(v475, 22)) ^ v474;
                                              v477 = (43881 * __ROR4__(v476 + 133239679, 9) - __ROR4__(v476, 30)) ^ v475;
                                              v478 = (24670 * v477 - (v477 >> 13) - 123127970) ^ v476;
                                              v479 = (2033 * __ROR4__(v478 ^ 0xAB69, 26) - __ROR4__(v478, 30)) ^ v477;
                                              v480 = (133239679 - (v479 ^ 0xAB69605E)) ^ v478;
                                              v481 = (43881 * (v480 ^ 0x137F)) ^ __ROR4__(v480, 6) ^ v479;
                                              v482 = (24670 * __ROR4__(v481 + 133239679, 15) + __ROR4__(v481, 30)) ^ v480;
                                              v483 = (2033 * __ROR4__(v482 + 1419157410, 14) - __ROR4__(v482, 24)) ^ v481;
                                              v484 = (4991 * __ROR4__(v483 ^ 0xAB69605E, 12)) ^ __ROR4__(v483, 10) ^ v482;
                                              v485 = v483 ^ (v484 >> 10) ^ (43881 * (v484 ^ 0x7F1));
                                              v486 = (2033 * (__ROR4__(~v485, 5) + 24670)) ^ v484;
                                              v487 = v485 ^ (v486 - 2033) ^ 0xAB69605E;
                                              v488 = (4991 * __ROR4__(v485 ^ (v486 - 2033) ^ 0xAB6967AF, 30)
                                                    + (v487 >> 2)) ^ v486;
                                              v489 = (43881 * __ROR4__(v488 - 133239679, 6) + __ROR4__(v488, 25)) ^ v487;
                                              v490 = (24670 * (v489 ^ 0x137F) + __ROR4__(v489, 9)) ^ v488;
                                              v491 = (2033 * __ROR4__(v490 ^ 0xAB69, 27) + __ROR4__(v490, 25)) ^ v489;
                                              v492 = v490 ^ v491 ^ 0xAC987321;
                                              v493 = (4991 * __ROR4__(v492, 3) - 219010071) ^ v491;
                                              v494 = (24670 * __ROR4__(v493 - 133239679, 1) - __ROR4__(v493, 6)) ^ v492;
                                              v495 = (2033 * __ROR4__(v494 - 1419157410, 29) + __ROR4__(v494, 18)) ^ v493;
                                              v496 = (4991 * __ROR4__(v495 - 1419157410, 17) - __ROR4__(v495, 14)) ^ v494;
                                              v497 = (v496 >> 3) ^ (43881 * (v496 ^ 0x605E)) ^ v495;
                                              v467 = v465 ^ (24670 * __ROR4__(v497 ^ 0x7F1137F, 28)) ^ __ROR4__(v497, 30) ^ v496;
                                              v466 = v471 ^ v497;
                                              *(v468 - 4) = v467;
                                              *v468 = v466;
                                              *(v468 - 5) = BYTE1(v467);
                                              *(v468 - 1) = BYTE1(v466);
                                              *(v468 - 6) = (unsigned __int16)(v467 >> 8) >> 8;
                                              *(v468 - 2) = (unsigned __int16)(v466 >> 8) >> 8;
                                              *(v468 - 7) = __ROR4__(
                                                              (((v467 >> 8) | (v467 << 24)) >> 8) | (((v467 >> 8) | (v467 << 24)) << 24),
                                                              8);
                                              *(v468 - 3) = __ROR4__(
                                                              (((v466 >> 8) | (v466 << 24)) >> 8) | (((v466 >> 8) | (v466 << 24)) << 24),
                                                              8);
                                              v465 = v472;
                                              v471 = v473;
                                              v468 += 8;
                                              --v470;
                                            }
                                            while ( v470 );
                                            v498 = 0LL;
                                            v499 = 0;
                                            v462 = v1271;
                                            v100 = v1477;
                                            v500 = v1356;
                                            v501 = 0;
                                            do
                                              v499 ^= *((_BYTE *)v1356 + v498++);
                                            while ( v498 < 0x338 );
                                            if ( v499 != 64LL )
                                            {
                                              MemoryFree(v1356);
                                              goto LABEL_642;
                                            }
                                            *((_BYTE *)v1356 + 823) = 0;
                                            memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                            if ( *(_BYTE *)v1356 )
                                            {
                                              v1578 = v1356;
                                              while ( 1 )
                                              {
                                                v507 = v500;
                                                v508 = -1LL;
                                                do
                                                  ++v508;
                                                while ( v500[v508] );
                                                v509 = &v500[v508];
                                                v510 = &qword_1808C93A0[3 * v1454];
                                                if ( !GetModuleHandleExW(0, v507, v510) )
                                                  break;
                                                v501 = 0;
                                                if ( *(_WORD *)*v510 == 23117
                                                  && (v511 = *((int *)*v510 + 15), (unsigned int)v511 < 0x10000000)
                                                  && (v512 = (unsigned __int64)*v510 + v511,
                                                      v512 >= (unsigned __int64)*v510)
                                                  && *(_DWORD *)v512 == 17744 )
                                                {
                                                  if ( ((*(_WORD *)(v512 + 24) - 267) & 0xFEFF) != 0 )
                                                  {
                                                    v501 = -1073741811;
                                                  }
                                                  else
                                                  {
                                                    *(HMODULE *)((char *)v510 + 12) = *(HMODULE *)(v512 + 136);
                                                    *((_DWORD *)v510 + 2) = *(_DWORD *)(v512 + 80);
                                                  }
                                                }
                                                else
                                                {
                                                  v501 = -1073741701;
                                                }
                                                v1307 = *(_DWORD *)(v509 + 1);
                                                v500 = v509 + 3;
                                                v513 = 0;
                                                if ( v1307 )
                                                {
                                                  v514 = 3LL * v1454;
                                                  do
                                                  {
                                                    v515 = (const CHAR *)v500;
                                                    v516 = -1LL;
                                                    do
                                                      ++v516;
                                                    while ( *((_BYTE *)v500 + v516) );
                                                    v500 = (WCHAR *)((char *)v500 + v516 + 1);
                                                    if ( v501 >= 0 )
                                                    {
                                                      v517 = GetProcAddress(qword_1808C93A0[v514], v515);
                                                      if ( !v517 )
                                                        goto LABEL_673;
                                                      off_1808C0340[v1350] = v517;
                                                      v514 = 3LL * v1454;
                                                    }
                                                    ++v1350;
                                                    ++v513;
                                                  }
                                                  while ( v513 < v1307 );
                                                }
                                                ++v1454;
                                                if ( !*(_BYTE *)v500 )
                                                  goto LABEL_673;
                                              }
                                              v501 = -1073741702;
LABEL_673:
                                              v518 = v1578;
                                              if ( !v1578 )
                                                goto LABEL_677;
                                            }
                                            else
                                            {
                                              v518 = v1356;
                                            }
                                            v519 = GetProcessHeap();
                                            HeapFree(v519, 0, v518);
LABEL_677:
                                            if ( v501 < 0 )
                                            {
LABEL_642:
                                              v502 = qword_1808C93A0;
                                              v503 = 4LL;
                                              do
                                              {
                                                if ( *v502 )
                                                  FreeLibrary(*v502);
                                                v502 += 3;
                                                --v503;
                                              }
                                              while ( v503 );
                                              memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                              v504 = off_1808C0340;
                                              v505 = off_1807174F0;
                                              v506 = 2LL;
                                              do
                                              {
                                                *(_OWORD *)v504 = *(_OWORD *)v505;
                                                *((_OWORD *)v504 + 1) = *((_OWORD *)v505 + 1);
                                                *((_OWORD *)v504 + 2) = *((_OWORD *)v505 + 2);
                                                *((_OWORD *)v504 + 3) = *((_OWORD *)v505 + 3);
                                                *((_OWORD *)v504 + 4) = *((_OWORD *)v505 + 4);
                                                *((_OWORD *)v504 + 5) = *((_OWORD *)v505 + 5);
                                                *((_OWORD *)v504 + 6) = *((_OWORD *)v505 + 6);
                                                v504 += 16;
                                                *((_OWORD *)v504 - 1) = *((_OWORD *)v505 + 7);
                                                v505 += 16;
                                                --v506;
                                              }
                                              while ( v506 );
                                              *(_OWORD *)v504 = *(_OWORD *)v505;
                                              *((_OWORD *)v504 + 1) = *((_OWORD *)v505 + 1);
                                              *((_OWORD *)v504 + 2) = *((_OWORD *)v505 + 2);
                                              *((_OWORD *)v504 + 3) = *((_OWORD *)v505 + 3);
                                              *((_OWORD *)v504 + 4) = *((_OWORD *)v505 + 4);
                                              *((_OWORD *)v504 + 5) = *((_OWORD *)v505 + 5);
                                              *((_OWORD *)v504 + 6) = *((_OWORD *)v505 + 6);
LABEL_680:
                                              _InterlockedExchange(&dword_1808CCC40, 0);
                                              v1733 = 0;
                                              v1734 = 0;
                                              v1351 = 0;
                                              v1308 = 0;
                                              v1455 = 0;
                                              v1436 = 0;
                                              v1579 = 0LL;
                                              v1357 = 0LL;
                                              v1468 = 0LL;
                                              v1621 = 0LL;
                                              while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                ;
                                              v520 = dword_1808CCC34;
                                              if ( dword_1808CCC34 )
                                                goto LABEL_727;
                                              Sizea = 0;
                                              v1387 = 0;
                                              v521 = (char *)MemoryAlloc(0x338uLL);
                                              v1420 = (WCHAR *)v521;
                                              if ( !v521 )
                                                goto LABEL_690;
                                              v522 = 0;
                                              v523 = 0;
                                              v524 = 0;
                                              v525 = v521 + 7;
                                              v526 = (unsigned __int8 *)&unk_18077F812;
                                              v527 = 103LL;
                                              v528 = -1;
                                              do
                                              {
                                                v529 = v526[1] | ((*v526 | ((*(v526 - 1) | (*(v526 - 2) << 8)) << 8)) << 8);
                                                v530 = v526[5] | ((v526[4] | ((v526[3] | (v526[2] << 8)) << 8)) << 8);
                                                v531 = v529 ^ v524;
                                                v526 += 8;
                                                v532 = v531 ^ v523 ^ v530 ^ 0xAC987321;
                                                v533 = (4991 * __ROR4__(v532 + 1419157410, 27) + __ROR4__(v532, 22)) ^ v531;
                                                v534 = (43881 * __ROR4__(v533 + 133239679, 9) - __ROR4__(v533, 30)) ^ v532;
                                                v535 = (24670 * v534 - (v534 >> 13) - 123127970) ^ v533;
                                                v536 = (2033 * __ROR4__(v535 ^ 0xAB69, 26) - __ROR4__(v535, 30)) ^ v534;
                                                v537 = (133239679 - (v536 ^ 0xAB69605E)) ^ v535;
                                                v538 = (43881 * (v537 ^ 0x137F)) ^ __ROR4__(v537, 6) ^ v536;
                                                v539 = (24670 * __ROR4__(v538 + 133239679, 15) + __ROR4__(v538, 30)) ^ v537;
                                                v540 = (2033 * __ROR4__(v539 + 1419157410, 14) - __ROR4__(v539, 24)) ^ v538;
                                                v541 = (4991 * __ROR4__(v540 ^ 0xAB69605E, 12)) ^ __ROR4__(v540, 10) ^ v539;
                                                v542 = (v541 >> 10) ^ (43881 * (v541 ^ 0x7F1)) ^ v540;
                                                v543 = (2033 * (__ROR4__(~v542, 5) + 24670)) ^ v541;
                                                v544 = v542 ^ (v543 - 2033) ^ 0xAB69605E;
                                                v545 = (4991 * __ROR4__(v542 ^ (v543 - 2033) ^ 0xAB6967AF, 30)
                                                      + (v544 >> 2)) ^ v543;
                                                v546 = (43881 * __ROR4__(v545 - 133239679, 6) + __ROR4__(v545, 25)) ^ v544;
                                                v547 = (24670 * (v546 ^ 0x137F) + __ROR4__(v546, 9)) ^ v545;
                                                v548 = (2033 * __ROR4__(v547 ^ 0xAB69, 27) + __ROR4__(v547, 25)) ^ v546;
                                                v549 = v547 ^ v548 ^ 0xAC987321;
                                                v550 = (4991 * __ROR4__(v549, 3) - 219010071) ^ v548;
                                                v551 = (24670 * __ROR4__(v550 - 133239679, 1) - __ROR4__(v550, 6)) ^ v549;
                                                v552 = (2033 * __ROR4__(v551 - 1419157410, 29) + __ROR4__(v551, 18)) ^ v550;
                                                v553 = (4991 * __ROR4__(v552 - 1419157410, 17) - __ROR4__(v552, 14)) ^ v551;
                                                v554 = (v553 >> 3) ^ (43881 * (v553 ^ 0x605E)) ^ v552;
                                                v524 = (24670 * __ROR4__(v554 ^ 0x7F1137F, 28)) ^ __ROR4__(v554, 30) ^ v522 ^ v553;
                                                v523 = v528 ^ v554;
                                                *(v525 - 4) = v524;
                                                *v525 = v523;
                                                *(v525 - 5) = BYTE1(v524);
                                                *(v525 - 1) = BYTE1(v523);
                                                *(v525 - 6) = (unsigned __int16)(v524 >> 8) >> 8;
                                                *(v525 - 2) = (unsigned __int16)(v523 >> 8) >> 8;
                                                *(v525 - 7) = __ROR4__(
                                                                (((v524 >> 8) | (v524 << 24)) >> 8) | (((v524 >> 8) | (v524 << 24)) << 24),
                                                                8);
                                                *(v525 - 3) = __ROR4__(
                                                                (((v523 >> 8) | (v523 << 24)) >> 8) | (((v523 >> 8) | (v523 << 24)) << 24),
                                                                8);
                                                v522 = v529;
                                                v528 = v530;
                                                v525 += 8;
                                                --v527;
                                              }
                                              while ( v527 );
                                              v555 = 0LL;
                                              v556 = 0;
                                              v462 = v1271;
                                              v100 = v1477;
                                              v557 = v1420;
                                              v558 = 0;
                                              do
                                                v556 ^= *((_BYTE *)v1420 + v555++);
                                              while ( v555 < 0x338 );
                                              if ( v556 != 64LL )
                                              {
                                                MemoryFree(v1420);
                                                goto LABEL_690;
                                              }
                                              *((_BYTE *)v1420 + 823) = 0;
                                              memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                              if ( *(_BYTE *)v1420 )
                                              {
                                                v1580 = v1420;
                                                while ( 1 )
                                                {
                                                  v564 = v557;
                                                  v565 = -1LL;
                                                  do
                                                    ++v565;
                                                  while ( v557[v565] );
                                                  v566 = &v557[v565];
                                                  v567 = &qword_1808C93A0[3 * v1387];
                                                  if ( !GetModuleHandleExW(0, v564, v567) )
                                                    break;
                                                  v558 = 0;
                                                  if ( *(_WORD *)*v567 == 23117
                                                    && (v568 = *((int *)*v567 + 15), (unsigned int)v568 < 0x10000000)
                                                    && (v569 = (unsigned __int64)*v567 + v568,
                                                        v569 >= (unsigned __int64)*v567)
                                                    && *(_DWORD *)v569 == 17744 )
                                                  {
                                                    if ( ((*(_WORD *)(v569 + 24) - 267) & 0xFEFF) != 0 )
                                                    {
                                                      v558 = -1073741811;
                                                    }
                                                    else
                                                    {
                                                      *(HMODULE *)((char *)v567 + 12) = *(HMODULE *)(v569 + 136);
                                                      *((_DWORD *)v567 + 2) = *(_DWORD *)(v569 + 80);
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v558 = -1073741701;
                                                  }
                                                  v1469 = *(_DWORD *)(v566 + 1);
                                                  v557 = v566 + 3;
                                                  v570 = 0;
                                                  if ( v1469 )
                                                  {
                                                    v571 = 3LL * v1387;
                                                    do
                                                    {
                                                      v572 = (const CHAR *)v557;
                                                      v573 = -1LL;
                                                      do
                                                        ++v573;
                                                      while ( *((_BYTE *)v557 + v573) );
                                                      v557 = (WCHAR *)((char *)v557 + v573 + 1);
                                                      if ( v558 >= 0 )
                                                      {
                                                        v574 = GetProcAddress(qword_1808C93A0[v571], v572);
                                                        if ( !v574 )
                                                          goto LABEL_721;
                                                        off_1808C0340[Sizea] = v574;
                                                        v571 = 3LL * v1387;
                                                      }
                                                      ++Sizea;
                                                      ++v570;
                                                    }
                                                    while ( v570 < v1469 );
                                                  }
                                                  ++v1387;
                                                  if ( !*(_BYTE *)v557 )
                                                    goto LABEL_721;
                                                }
                                                v558 = -1073741702;
LABEL_721:
                                                v575 = v1580;
                                                if ( !v1580 )
                                                  goto LABEL_725;
                                              }
                                              else
                                              {
                                                v575 = v1420;
                                              }
                                              v576 = GetProcessHeap();
                                              HeapFree(v576, 0, v575);
LABEL_725:
                                              if ( v558 < 0 )
                                              {
LABEL_690:
                                                v559 = qword_1808C93A0;
                                                v560 = 4LL;
                                                do
                                                {
                                                  if ( *v559 )
                                                    FreeLibrary(*v559);
                                                  v559 += 3;
                                                  --v560;
                                                }
                                                while ( v560 );
                                                memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                v561 = off_1808C0340;
                                                v562 = off_1807174F0;
                                                v563 = 2LL;
                                                do
                                                {
                                                  *(_OWORD *)v561 = *(_OWORD *)v562;
                                                  *((_OWORD *)v561 + 1) = *((_OWORD *)v562 + 1);
                                                  *((_OWORD *)v561 + 2) = *((_OWORD *)v562 + 2);
                                                  *((_OWORD *)v561 + 3) = *((_OWORD *)v562 + 3);
                                                  *((_OWORD *)v561 + 4) = *((_OWORD *)v562 + 4);
                                                  *((_OWORD *)v561 + 5) = *((_OWORD *)v562 + 5);
                                                  *((_OWORD *)v561 + 6) = *((_OWORD *)v562 + 6);
                                                  v561 += 16;
                                                  *((_OWORD *)v561 - 1) = *((_OWORD *)v562 + 7);
                                                  v562 += 16;
                                                  --v563;
                                                }
                                                while ( v563 );
                                                *(_OWORD *)v561 = *(_OWORD *)v562;
                                                *((_OWORD *)v561 + 1) = *((_OWORD *)v562 + 1);
                                                *((_OWORD *)v561 + 2) = *((_OWORD *)v562 + 2);
                                                *((_OWORD *)v561 + 3) = *((_OWORD *)v562 + 3);
                                                *((_OWORD *)v561 + 4) = *((_OWORD *)v562 + 4);
                                                *((_OWORD *)v561 + 5) = *((_OWORD *)v562 + 5);
                                                *((_OWORD *)v561 + 6) = *((_OWORD *)v562 + 6);
LABEL_728:
                                                v577 = 0;
                                                _InterlockedExchange(&dword_1808CCC40, 0);
                                                memset_0(&v1660, 0, 0x70uLL);
                                                v1686 = 0LL;
                                                Sizeb = v462 & 0xF;
                                                LOWORD(v1733) = (v462 >> 4) & 0xF;
                                                HIWORD(v1733) = (v462 >> 8) & 0xF;
                                                v1734 = (v462 >> 12) & 0xF;
                                                v1421 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                                   0LL,
                                                                   0LL,
                                                                   1027LL);
                                                v1469 = 0xFFFFFF;
                                                if ( !v1421 )
                                                {
                                                  v578 = GetLastError();
                                                  v579 = v578;
                                                  if ( v578 > 0 )
                                                    v579 = (unsigned __int16)v578 | 0x80070000;
                                                  if ( v579 >= 0 )
                                                    v579 = -2147467259;
LABEL_863:
                                                  while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                    ;
                                                  v672 = dword_1808CCC34;
                                                  if ( dword_1808CCC34 > 0 )
                                                  {
                                                    --dword_1808CCC34;
                                                    if ( v672 == 1 )
                                                    {
                                                      v673 = qword_1808C93A0;
                                                      v674 = 4LL;
                                                      do
                                                      {
                                                        if ( *v673 )
                                                          FreeLibrary(*v673);
                                                        v673 += 3;
                                                        --v674;
                                                      }
                                                      while ( v674 );
                                                      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                      v675 = off_1808C0340;
                                                      v676 = off_1807174F0;
                                                      v677 = 2LL;
                                                      do
                                                      {
                                                        *(_OWORD *)v675 = *(_OWORD *)v676;
                                                        *((_OWORD *)v675 + 1) = *((_OWORD *)v676 + 1);
                                                        *((_OWORD *)v675 + 2) = *((_OWORD *)v676 + 2);
                                                        *((_OWORD *)v675 + 3) = *((_OWORD *)v676 + 3);
                                                        *((_OWORD *)v675 + 4) = *((_OWORD *)v676 + 4);
                                                        *((_OWORD *)v675 + 5) = *((_OWORD *)v676 + 5);
                                                        *((_OWORD *)v675 + 6) = *((_OWORD *)v676 + 6);
                                                        v675 += 16;
                                                        *((_OWORD *)v675 - 1) = *((_OWORD *)v676 + 7);
                                                        v676 += 16;
                                                        --v677;
                                                      }
                                                      while ( v677 );
                                                      *(_OWORD *)v675 = *(_OWORD *)v676;
                                                      *((_OWORD *)v675 + 1) = *((_OWORD *)v676 + 1);
                                                      *((_OWORD *)v675 + 2) = *((_OWORD *)v676 + 2);
                                                      *((_OWORD *)v675 + 3) = *((_OWORD *)v676 + 3);
                                                      *((_OWORD *)v675 + 4) = *((_OWORD *)v676 + 4);
                                                      *((_OWORD *)v675 + 5) = *((_OWORD *)v676 + 5);
                                                      *((_OWORD *)v675 + 6) = *((_OWORD *)v676 + 6);
                                                    }
                                                  }
                                                  _InterlockedExchange(&dword_1808CCC40, 0);
                                                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1579);
                                                  if ( v579 < 0 )
                                                  {
LABEL_1023:
                                                    if ( v1662 )
                                                    {
                                                      v744 = -1LL;
                                                      do
                                                        ++v744;
                                                      while ( *((_WORD *)v1662 + v744) );
                                                      memset(v1662, 0, 2 * v744 + 2);
                                                      MemoryFree(v1662);
                                                      v1662 = 0LL;
                                                    }
                                                    if ( v1663 )
                                                    {
                                                      v745 = -1LL;
                                                      do
                                                        ++v745;
                                                      while ( *((_WORD *)v1663 + v745) );
                                                      memset(v1663, 0, 2 * v745 + 2);
                                                      MemoryFree(v1663);
                                                      v1663 = 0LL;
                                                    }
                                                    if ( v1664 )
                                                    {
                                                      v746 = -1LL;
                                                      do
                                                        ++v746;
                                                      while ( *((_WORD *)v1664 + v746) );
                                                      memset(v1664, 0, 2 * v746 + 2);
                                                      MemoryFree(v1664);
                                                      v1664 = 0LL;
                                                    }
                                                    if ( v1665 )
                                                    {
                                                      off_1808C0378();
                                                      v1665 = 0LL;
                                                    }
                                                    if ( v1666 )
                                                    {
                                                      off_1808C0378();
                                                      v1666 = 0LL;
                                                    }
                                                    if ( v1667 )
                                                    {
                                                      off_1808C0378();
                                                      v1667 = 0LL;
                                                    }
                                                    while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                      ;
                                                    v747 = dword_1808CCC34;
                                                    if ( dword_1808CCC34 > 0 )
                                                    {
                                                      --dword_1808CCC34;
                                                      if ( v747 == 1 )
                                                      {
                                                        v748 = qword_1808C93A0;
                                                        v749 = 4LL;
                                                        do
                                                        {
                                                          if ( *v748 )
                                                            FreeLibrary(*v748);
                                                          v748 += 3;
                                                          --v749;
                                                        }
                                                        while ( v749 );
                                                        memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                        v750 = off_1808C0340;
                                                        v751 = off_1807174F0;
                                                        v752 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v750 = *(_OWORD *)v751;
                                                          *((_OWORD *)v750 + 1) = *((_OWORD *)v751 + 1);
                                                          *((_OWORD *)v750 + 2) = *((_OWORD *)v751 + 2);
                                                          *((_OWORD *)v750 + 3) = *((_OWORD *)v751 + 3);
                                                          *((_OWORD *)v750 + 4) = *((_OWORD *)v751 + 4);
                                                          *((_OWORD *)v750 + 5) = *((_OWORD *)v751 + 5);
                                                          *((_OWORD *)v750 + 6) = *((_OWORD *)v751 + 6);
                                                          v750 += 16;
                                                          *((_OWORD *)v750 - 1) = *((_OWORD *)v751 + 7);
                                                          v751 += 16;
                                                          --v752;
                                                        }
                                                        while ( v752 );
                                                        *(_OWORD *)v750 = *(_OWORD *)v751;
                                                        *((_OWORD *)v750 + 1) = *((_OWORD *)v751 + 1);
                                                        *((_OWORD *)v750 + 2) = *((_OWORD *)v751 + 2);
                                                        *((_OWORD *)v750 + 3) = *((_OWORD *)v751 + 3);
                                                        *((_OWORD *)v750 + 4) = *((_OWORD *)v751 + 4);
                                                        *((_OWORD *)v750 + 5) = *((_OWORD *)v751 + 5);
                                                        *((_OWORD *)v750 + 6) = *((_OWORD *)v751 + 6);
                                                      }
                                                    }
                                                    _InterlockedExchange(&dword_1808CCC40, 0);
                                                    lpModuleNamef = dword_1808C9398;
                                                    v753 = off_1808C03D8[0]() - qword_1808CCC38;
                                                    v1370 = v753;
                                                    v1726 = 0;
                                                    v1727 = 0LL;
                                                    v1728 = 0LL;
                                                    v1729 = 0LL;
                                                    v1730 = 0LL;
                                                    while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                      ;
                                                    v754 = dword_1808CCC34;
                                                    if ( !dword_1808CCC34 )
                                                    {
                                                      v1331 = 0;
                                                      LODWORD(v1466) = 0;
                                                      v755 = (char *)MemoryAlloc(0x338uLL);
                                                      v1320 = (WCHAR *)v755;
                                                      if ( !v755 )
                                                        goto LABEL_1062;
                                                      v756 = 0;
                                                      v757 = -1;
                                                      v758 = 0;
                                                      v759 = 0;
                                                      v760 = v755 + 7;
                                                      v761 = (unsigned __int8 *)&unk_18077F812;
                                                      v762 = 103LL;
                                                      do
                                                      {
                                                        v763 = v761[1] | ((*v761 | ((*(v761 - 1) | (*(v761 - 2) << 8)) << 8)) << 8);
                                                        v764 = v761[5] | ((v761[4] | ((v761[3] | (v761[2] << 8)) << 8)) << 8);
                                                        v765 = v763 ^ v759;
                                                        v761 += 8;
                                                        v766 = v765 ^ v758 ^ v764 ^ 0xAC987321;
                                                        v767 = (4991 * __ROR4__(v766 + 1419157410, 27)
                                                              + __ROR4__(v766, 22)) ^ v765;
                                                        v768 = (43881 * __ROR4__(v767 + 133239679, 9)
                                                              - __ROR4__(v767, 30)) ^ v766;
                                                        v769 = (24670 * v768 - (v768 >> 13) - 123127970) ^ v767;
                                                        v770 = (2033 * __ROR4__(v769 ^ 0xAB69, 26) - __ROR4__(v769, 30)) ^ v768;
                                                        v771 = (133239679 - (v770 ^ 0xAB69605E)) ^ v769;
                                                        v772 = (43881 * (v771 ^ 0x137F)) ^ __ROR4__(v771, 6) ^ v770;
                                                        v773 = (24670 * __ROR4__(v772 + 133239679, 15)
                                                              + __ROR4__(v772, 30)) ^ v771;
                                                        v774 = (2033 * __ROR4__(v773 + 1419157410, 14)
                                                              - __ROR4__(v773, 24)) ^ v772;
                                                        v775 = (4991 * __ROR4__(v774 ^ 0xAB69605E, 12)) ^ __ROR4__(v774, 10) ^ v773;
                                                        v776 = (v775 >> 10) ^ (43881 * (v775 ^ 0x7F1)) ^ v774;
                                                        v777 = (2033 * (__ROR4__(~v776, 5) + 24670)) ^ v775;
                                                        v778 = v776 ^ (v777 - 2033) ^ 0xAB69605E;
                                                        v779 = (4991 * __ROR4__(v776 ^ (v777 - 2033) ^ 0xAB6967AF, 30)
                                                              + (v778 >> 2)) ^ v777;
                                                        v780 = (43881 * __ROR4__(v779 - 133239679, 6)
                                                              + __ROR4__(v779, 25)) ^ v778;
                                                        v781 = (24670 * (v780 ^ 0x137F) + __ROR4__(v780, 9)) ^ v779;
                                                        v782 = (2033 * __ROR4__(v781 ^ 0xAB69, 27) + __ROR4__(v781, 25)) ^ v780;
                                                        v783 = v782 ^ v781 ^ 0xAC987321;
                                                        v784 = (4991 * __ROR4__(v783, 3) - 219010071) ^ v782;
                                                        v785 = (24670 * __ROR4__(v784 - 133239679, 1) - __ROR4__(v784, 6)) ^ v783;
                                                        v786 = (2033 * __ROR4__(v785 - 1419157410, 29)
                                                              + __ROR4__(v785, 18)) ^ v784;
                                                        v787 = (4991 * __ROR4__(v786 - 1419157410, 17)
                                                              - __ROR4__(v786, 14)) ^ v785;
                                                        v788 = (v787 >> 3) ^ (43881 * (v787 ^ 0x605E)) ^ v786;
                                                        v759 = (24670 * __ROR4__(v788 ^ 0x7F1137F, 28)) ^ __ROR4__(v788, 30) ^ v756 ^ v787;
                                                        v758 = v757 ^ v788;
                                                        *(v760 - 4) = v759;
                                                        *v760 = v758;
                                                        *(v760 - 5) = BYTE1(v759);
                                                        *(v760 - 1) = BYTE1(v758);
                                                        *(v760 - 6) = (unsigned __int16)(v759 >> 8) >> 8;
                                                        *(v760 - 2) = (unsigned __int16)(v758 >> 8) >> 8;
                                                        *(v760 - 7) = __ROR4__(
                                                                        (((v759 >> 8) | (v759 << 24)) >> 8) | (((v759 >> 8) | (v759 << 24)) << 24),
                                                                        8);
                                                        *(v760 - 3) = __ROR4__(
                                                                        (((v758 >> 8) | (v758 << 24)) >> 8) | (((v758 >> 8) | (v758 << 24)) << 24),
                                                                        8);
                                                        v756 = v763;
                                                        v757 = v764;
                                                        v760 += 8;
                                                        --v762;
                                                      }
                                                      while ( v762 );
                                                      v789 = 0LL;
                                                      v790 = 0;
                                                      v791 = v1320;
                                                      v792 = 0;
                                                      do
                                                        v790 ^= *((_BYTE *)v1320 + v789++);
                                                      while ( v789 < 0x338 );
                                                      if ( v790 != 64LL )
                                                      {
                                                        MemoryFree(v1320);
LABEL_1061:
                                                        v753 = v1370;
LABEL_1062:
                                                        v793 = qword_1808C93A0;
                                                        v794 = 4LL;
                                                        do
                                                        {
                                                          if ( *v793 )
                                                            FreeLibrary(*v793);
                                                          v793 += 3;
                                                          --v794;
                                                        }
                                                        while ( v794 );
                                                        memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                        v795 = off_1808C0340;
                                                        v796 = off_1807174F0;
                                                        v797 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v795 = *(_OWORD *)v796;
                                                          *((_OWORD *)v795 + 1) = *((_OWORD *)v796 + 1);
                                                          *((_OWORD *)v795 + 2) = *((_OWORD *)v796 + 2);
                                                          *((_OWORD *)v795 + 3) = *((_OWORD *)v796 + 3);
                                                          *((_OWORD *)v795 + 4) = *((_OWORD *)v796 + 4);
                                                          *((_OWORD *)v795 + 5) = *((_OWORD *)v796 + 5);
                                                          *((_OWORD *)v795 + 6) = *((_OWORD *)v796 + 6);
                                                          v795 += 16;
                                                          *((_OWORD *)v795 - 1) = *((_OWORD *)v796 + 7);
                                                          v796 += 16;
                                                          --v797;
                                                        }
                                                        while ( v797 );
                                                        *(_OWORD *)v795 = *(_OWORD *)v796;
                                                        *((_OWORD *)v795 + 1) = *((_OWORD *)v796 + 1);
                                                        *((_OWORD *)v795 + 2) = *((_OWORD *)v796 + 2);
                                                        *((_OWORD *)v795 + 3) = *((_OWORD *)v796 + 3);
                                                        *((_OWORD *)v795 + 4) = *((_OWORD *)v796 + 4);
                                                        *((_OWORD *)v795 + 5) = *((_OWORD *)v796 + 5);
                                                        *((_OWORD *)v795 + 6) = *((_OWORD *)v796 + 6);
                                                        goto LABEL_1252;
                                                      }
                                                      *((_BYTE *)v1320 + 823) = 0;
                                                      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                      v888 = v1320;
                                                      if ( !*(_BYTE *)v1320 )
                                                        goto LABEL_1248;
                                                      while ( 1 )
                                                      {
                                                        v889 = v791;
                                                        v890 = -1LL;
                                                        do
                                                          ++v890;
                                                        while ( v791[v890] );
                                                        v891 = &v791[v890];
                                                        v892 = &qword_1808C93A0[3 * (unsigned int)v1466];
                                                        if ( !GetModuleHandleExW(0, v889, v892) )
                                                          break;
                                                        v792 = 0;
                                                        if ( *(_WORD *)*v892 == 23117
                                                          && (v893 = *((int *)*v892 + 15),
                                                              (unsigned int)v893 < 0x10000000)
                                                          && (v894 = (unsigned __int64)*v892 + v893,
                                                              v894 >= (unsigned __int64)*v892)
                                                          && *(_DWORD *)v894 == 17744 )
                                                        {
                                                          if ( ((*(_WORD *)(v894 + 24) - 267) & 0xFEFF) != 0 )
                                                          {
                                                            v792 = -1073741811;
                                                          }
                                                          else
                                                          {
                                                            *(HMODULE *)((char *)v892 + 12) = *(HMODULE *)(v894 + 136);
                                                            *((_DWORD *)v892 + 2) = *(_DWORD *)(v894 + 80);
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v792 = -1073741701;
                                                        }
                                                        v1398 = *(_DWORD *)(v891 + 1);
                                                        v791 = v891 + 3;
                                                        v895 = 0;
                                                        if ( v1398 )
                                                        {
                                                          v896 = 3LL * (unsigned int)v1466;
                                                          v1322 = v896;
                                                          do
                                                          {
                                                            v897 = (const CHAR *)v791;
                                                            v898 = -1LL;
                                                            do
                                                              ++v898;
                                                            while ( *((_BYTE *)v791 + v898) );
                                                            v791 = (const WCHAR *)((char *)v791 + v898 + 1);
                                                            if ( v792 >= 0 )
                                                            {
                                                              v899 = GetProcAddress(qword_1808C93A0[v896], v897);
                                                              if ( !v899 )
                                                                goto LABEL_1247;
                                                              off_1808C0340[v1331] = v899;
                                                              v896 = v1322;
                                                            }
                                                            ++v1331;
                                                            ++v895;
                                                          }
                                                          while ( v895 < v1398 );
                                                        }
                                                        LODWORD(v1466) = (_DWORD)v1466 + 1;
                                                        if ( !*(_BYTE *)v791 )
                                                          goto LABEL_1247;
                                                      }
                                                      v792 = -1073741702;
LABEL_1247:
                                                      if ( v888 )
                                                      {
LABEL_1248:
                                                        v900 = GetProcessHeap();
                                                        HeapFree(v900, 0, v888);
                                                      }
                                                      if ( v792 < 0 )
                                                        goto LABEL_1061;
                                                      v754 = dword_1808CCC34;
                                                      v753 = v1370;
                                                    }
                                                    dword_1808CCC34 = v754 + 1;
LABEL_1252:
                                                    _InterlockedExchange(&dword_1808CCC40, 0);
                                                    LODWORD(v1727) = v753;
                                                    v1726 = 1;
                                                    LODWORD(v1728) = -1721306479;
                                                    DWORD2(v1727) = 1;
                                                    LODWORD(v1729) = 1;
                                                    DWORD2(v1728) = 1;
                                                    LODWORD(v1730) = lpModuleNamef;
                                                    DWORD2(v1729) = 1;
                                                    v901 = 4LL;
                                                    ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1808C0410)(
                                                      0LL,
                                                      8225LL,
                                                      4LL,
                                                      &v1726);
                                                    while ( _InterlockedCompareExchange(&dword_1808CCC40, 1, 0) )
                                                      ;
                                                    v902 = dword_1808CCC34;
                                                    if ( dword_1808CCC34 > 0 )
                                                    {
                                                      --dword_1808CCC34;
                                                      if ( v902 == 1 )
                                                      {
                                                        v903 = qword_1808C93A0;
                                                        do
                                                        {
                                                          if ( *v903 )
                                                            FreeLibrary(*v903);
                                                          v903 += 3;
                                                          --v901;
                                                        }
                                                        while ( v901 );
                                                        memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
                                                        v904 = off_1808C0340;
                                                        v905 = off_1807174F0;
                                                        v906 = 2LL;
                                                        do
                                                        {
                                                          *(_OWORD *)v904 = *(_OWORD *)v905;
                                                          *((_OWORD *)v904 + 1) = *((_OWORD *)v905 + 1);
                                                          *((_OWORD *)v904 + 2) = *((_OWORD *)v905 + 2);
                                                          *((_OWORD *)v904 + 3) = *((_OWORD *)v905 + 3);
                                                          *((_OWORD *)v904 + 4) = *((_OWORD *)v905 + 4);
                                                          *((_OWORD *)v904 + 5) = *((_OWORD *)v905 + 5);
                                                          *((_OWORD *)v904 + 6) = *((_OWORD *)v905 + 6);
                                                          v904 += 16;
                                                          *((_OWORD *)v904 - 1) = *((_OWORD *)v905 + 7);
                                                          v905 += 16;
                                                          --v906;
                                                        }
                                                        while ( v906 );
                                                        *(_OWORD *)v904 = *(_OWORD *)v905;
                                                        *((_OWORD *)v904 + 1) = *((_OWORD *)v905 + 1);
                                                        *((_OWORD *)v904 + 2) = *((_OWORD *)v905 + 2);
                                                        *((_OWORD *)v904 + 3) = *((_OWORD *)v905 + 3);
                                                        *((_OWORD *)v904 + 4) = *((_OWORD *)v905 + 4);
                                                        *((_OWORD *)v904 + 5) = *((_OWORD *)v905 + 5);
                                                        *((_OWORD *)v904 + 6) = *((_OWORD *)v905 + 6);
                                                      }
                                                    }
                                                    _InterlockedExchange(&dword_1808CCC40, 0);
                                                    ((void (__fastcall *)(_QWORD, CToastCenterExperienceManager *))off_1808C04A0[0])(
                                                      0LL,
                                                      lpMemk);
                                                    v1473 = (unsigned __int16 *)v1465;
                                                    goto LABEL_1264;
                                                  }
                                                  v678 = v462 & 0xF;
                                                  v1274 = v678;
                                                  v679 = v1686;
                                                  v1587 = v1686;
                                                  v1647 = 0;
                                                  memset_0(v1648, 0, 0x64uLL);
                                                  v680 = 1;
                                                  v681 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(
                                                           lpMemk,
                                                           7LL);
                                                  if ( v681
                                                    && ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                         v681,
                                                         104LL,
                                                         &v1647) )
                                                  {
                                                    if ( v1649 != 32 || !v1650 || v1648[0] <= 0 || v1648[1] <= 0 )
                                                      v680 = 0;
                                                    if ( v680 )
                                                    {
LABEL_969:
                                                      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(
                                                        &v1669,
                                                        v679,
                                                        HIDWORD(v1587));
                                                      ((void (__fastcall *)(__m128i *, _QWORD, _QWORD))off_1808C0490)(
                                                        &v1670,
                                                        v679,
                                                        HIDWORD(v1587));
                                                      if ( v678 == 1 )
                                                        v1472 = ((__int64 (__fastcall *)(_QWORD))off_1808C0368[0])(v1661 == 0 ? 0xB26720 : 0);
LABEL_971:
                                                      v1352 = off_1808C03C0(
                                                                lpMemk,
                                                                (struct CSingleViewShellExperience *)1);
                                                      v716 = 2064;
                                                      if ( v1660 )
                                                        v716 = 133138;
                                                      v1309 = v716;
                                                      if ( v680 )
                                                      {
                                                        v1456 = v1661;
                                                        v1361 = v1665;
                                                        v717 = v1662;
                                                        v1405 = (unsigned __int16 *)v1662;
                                                        v1644 = 0;
                                                        memset_0(v1645, 0, 0x64uLL);
                                                        v1641 = 0;
                                                        memset_0(v1642, 0, 0x64uLL);
                                                        v1468 = 0LL;
                                                        v1446 = 0;
                                                        v1437 = 0;
                                                        v1696 = 0LL;
                                                        v1697 = 0LL;
                                                        v1698 = 0LL;
                                                        v1699 = 0;
                                                        v1685 = 0LL;
                                                        if ( !v717 )
                                                          goto LABEL_1021;
                                                        v718 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(
                                                                 lpMemk,
                                                                 7LL);
                                                        if ( v718 )
                                                        {
                                                          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                                 v718,
                                                                 104LL,
                                                                 &v1644) )
                                                          {
                                                            v1468 = v1646;
                                                            v1446 = v1645[0];
                                                            v1437 = v1645[1];
                                                          }
                                                          v719 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
                                                          v720 = (CToastCenterExperienceManager *)v719;
                                                          v1422 = (LPCWSTR)v719;
                                                          if ( v719 )
                                                          {
                                                            v1588 = 0LL;
                                                            v1697 = 0LL;
                                                            v1698 = 0LL;
                                                            v1699 = 0;
                                                            LODWORD(v1696) = 40;
                                                            DWORD1(v1696) = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                            DWORD2(v1696) = v1669.m128i_i32[1] - v1669.m128i_i32[3];
                                                            HIDWORD(v1696) = 2097153;
                                                            v721 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                                                                         v719,
                                                                                         &v1696,
                                                                                         0LL,
                                                                                         &v1588,
                                                                                         0LL,
                                                                                         0);
                                                            v722 = v721;
                                                            v1473 = v721;
                                                            if ( v721 )
                                                            {
                                                              v725 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808C03A8[0])(
                                                                       v721,
                                                                       104LL,
                                                                       &v1641);
                                                              v726 = 0LL;
                                                              if ( v725 )
                                                                v726 = v1643;
                                                              lpModuleNamed = v726;
                                                              DWORD2(v1685) = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                              HIDWORD(v1685) = v1669.m128i_i32[3] - v1669.m128i_i32[1];
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                                                                v720,
                                                                v722);
                                                              off_1808C03C0(
                                                                v720,
                                                                (struct CSingleViewShellExperience *)1);
                                                              v1362 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                                 v720,
                                                                                 v1361);
                                                              v727 = off_1808C0428[0];
                                                              v728 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v727)(
                                                                v720,
                                                                &v1685,
                                                                v728);
                                                              v723 = 0;
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
                                                                v720,
                                                                v1405,
                                                                0xFFFFFFFFLL,
                                                                &v1685,
                                                                v1309,
                                                                0LL);
                                                              if ( v678 == 1 )
                                                              {
                                                                if ( v1456 )
                                                                  v1457 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                                                                else
                                                                  v1457 = 0xFFFFFF;
                                                              }
                                                              else
                                                              {
                                                                v1457 = -5723992;
                                                              }
                                                              v729 = -v1669.m128i_i32[0];
                                                              if ( v1669.m128i_i32[0] >= 0 )
                                                                v729 = 0;
                                                              v730 = 0;
                                                              if ( v1669.m128i_i32[0] >= 0 )
                                                                v730 = v1669.m128i_i32[0];
                                                              v731 = -v1669.m128i_i32[1];
                                                              if ( v1669.m128i_i32[1] >= 0 )
                                                                v731 = 0;
                                                              v732 = 0;
                                                              if ( v1669.m128i_i32[1] >= 0 )
                                                                v732 = v1669.m128i_i32[1];
                                                              v733 = DWORD2(v1685) - v729;
                                                              if ( DWORD2(v1685) - v729 >= v1446 - v730 )
                                                                v733 = v1446 - v730;
                                                              v734 = HIDWORD(v1685) - v731;
                                                              if ( HIDWORD(v1685) - v731 >= v1437 - v732 )
                                                                v734 = v1437 - v732;
                                                              if ( v733 > 0 && v734 > 0 )
                                                              {
                                                                v735 = (WCHAR *)&lpModuleNamed[2 * v729
                                                                                             + 2
                                                                                             * (__int64)(DWORD2(v1685) * v731)];
                                                                v1406 = v735;
                                                                v736 = v1446;
                                                                v737 = &v1468[2 * v730 + 2 * (__int64)(v1446 * v732)];
                                                                v1468 = v737;
                                                                v738 = 0;
                                                                v1447 = 0;
                                                                lpModuleNamee = (LPCWSTR)(4LL * SDWORD2(v1685));
                                                                v1330 = 2 * v736;
                                                                while ( 1 )
                                                                {
                                                                  v1438 = 0;
                                                                  v739 = (unsigned __int8 *)(v735 + 1);
                                                                  v740 = (char *)v737 - (char *)v735;
                                                                  do
                                                                  {
                                                                    if ( (unsigned __int8)((*v739
                                                                                          + *(v739 - 2)
                                                                                          + 2
                                                                                          * (unsigned int)*(v739 - 1)) >> 2) != 0xFF )
                                                                    {
                                                                      v741 = (unsigned __int8)~((*v739
                                                                                               + *(v739 - 2)
                                                                                               + 2
                                                                                               * (unsigned int)*(v739 - 1)) >> 2);
                                                                      v739[v740] -= ~((*v739
                                                                                     + *(v739 - 2)
                                                                                     + 2 * (unsigned int)*(v739 - 1)) >> 2)
                                                                                  * (v1457 - v739[v740]);
                                                                      v739[v740 - 1] += ((((unsigned __int64)(2155905153LL * v741 * (BYTE1(v1457) - v739[v740 - 1])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v741 * (BYTE1(v1457) - v739[v740 - 1])) >> 32) >> 7);
                                                                      v739[v740 - 2] += ((((unsigned __int64)(2155905153LL * v741 * (BYTE2(v1457) - v739[v740 - 2])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v741 * (BYTE2(v1457) - v739[v740 - 2])) >> 32) >> 7);
                                                                      v739[v740 + 1] += ((((unsigned __int64)(2155905153LL * v741 * (255 - v739[v740 + 1])) >> 32) & 0x80000000) != 0LL)
                                                                                      + ((int)((unsigned __int64)(2155905153LL * v741 * (255 - v739[v740 + 1])) >> 32) >> 7);
                                                                      v738 = v1438;
                                                                    }
                                                                    v723 = 0;
                                                                    v739 += 4;
                                                                    v1438 = ++v738;
                                                                  }
                                                                  while ( v738 < v733 );
                                                                  v735 = (unsigned __int16 *)((char *)v1406
                                                                                            + (_QWORD)lpModuleNamee);
                                                                  v1406 = (unsigned __int16 *)((char *)v1406
                                                                                             + (_QWORD)lpModuleNamee);
                                                                  v737 = &v1468[v1330];
                                                                  v1468 = (unsigned __int16 *)((char *)v1468 + v1330 * 2);
                                                                  if ( ++v1447 >= v734 )
                                                                    break;
                                                                  v738 = 0;
                                                                }
                                                                v100 = v1477;
                                                                v720 = (CToastCenterExperienceManager *)v1422;
                                                              }
                                                              ((void (__fastcall *)(unsigned __int16 *))off_1808C0378)(v1473);
                                                              if ( v1362 )
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                  v720,
                                                                  v1362);
                                                            }
                                                            else
                                                            {
                                                              v723 = GetLastError();
                                                              v724 = v723 < 0;
                                                              if ( v723 > 0 )
                                                              {
                                                                v723 = (unsigned __int16)v723 | 0x80070000;
                                                                v724 = v723 < 0;
                                                              }
                                                              if ( !v724 )
                                                                v723 = -2147467259;
                                                            }
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v720);
                                                            if ( v723 < 0 )
                                                              goto LABEL_1021;
                                                            v1276 = v1661;
                                                            v1363 = v1666;
                                                            v742 = v1663;
                                                            v1407 = (unsigned __int16 *)v1663;
                                                            v1638 = 0;
                                                            memset_0(v1639, 0, 0x64uLL);
                                                            v1635 = 0;
                                                            memset_0(v1636, 0, 0x64uLL);
                                                            v1468 = 0LL;
                                                            v1458 = 0;
                                                            v1448 = 0;
                                                            v1700 = 0LL;
                                                            v1701 = 0LL;
                                                            v1702 = 0LL;
                                                            v1703 = 0;
                                                            v1684 = 0LL;
                                                            if ( !v742 )
                                                              goto LABEL_1021;
                                                            v743 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *, __int64))off_1808C0390[0])(
                                                                     lpMemk,
                                                                     7LL);
                                                            if ( v743 )
                                                            {
                                                              if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                                     v743,
                                                                     104LL,
                                                                     &v1638) )
                                                              {
                                                                v1468 = v1640;
                                                                v1458 = v1639[0];
                                                                v1448 = v1639[1];
                                                              }
                                                              v798 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
                                                              v799 = (CToastCenterExperienceManager *)v798;
                                                              v1423 = (LPCWSTR)v798;
                                                              if ( v798 )
                                                              {
                                                                v1589 = 0LL;
                                                                v1701 = 0LL;
                                                                v1702 = 0LL;
                                                                v1703 = 0;
                                                                LODWORD(v1700) = 40;
                                                                DWORD1(v1700) = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                                DWORD2(v1700) = v1670.m128i_i32[1] - v1670.m128i_i32[3];
                                                                HIDWORD(v1700) = 2097153;
                                                                v800 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                                                                             v798,
                                                                                             &v1700,
                                                                                             0LL,
                                                                                             &v1589,
                                                                                             0LL,
                                                                                             0);
                                                                v801 = v800;
                                                                v1473 = v800;
                                                                if ( !v800 )
                                                                {
                                                                  v802 = GetLastError();
                                                                  v803 = v802;
                                                                  if ( v802 > 0 )
                                                                    v803 = (unsigned __int16)v802 | 0x80070000;
                                                                  if ( v803 >= 0 )
                                                                    v803 = -2147467259;
LABEL_1109:
                                                                  ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v799);
                                                                  if ( v803 < 0 )
                                                                    goto LABEL_1021;
                                                                  v823 = 0LL;
                                                                  v824 = lpMemk;
LABEL_1222:
                                                                  off_1808C03C0(
                                                                    v824,
                                                                    (struct CSingleViewShellExperience *)v1352);
                                                                  v833 = v1467;
                                                                  if ( !v1467 )
                                                                  {
LABEL_1133:
                                                                    if ( !v823 )
                                                                      goto LABEL_1021;
                                                                    goto LABEL_1134;
                                                                  }
LABEL_1132:
                                                                  ((void (__fastcall *)(void *))off_1808C0378)(v833);
                                                                  goto LABEL_1133;
                                                                }
                                                                v804 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808C03A8[0])(
                                                                         v800,
                                                                         104LL,
                                                                         &v1635);
                                                                v805 = 0LL;
                                                                if ( v804 )
                                                                  v805 = v1637;
                                                                lpModuleNameg = v805;
                                                                DWORD2(v1684) = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                                HIDWORD(v1684) = v1670.m128i_i32[3] - v1670.m128i_i32[1];
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                                                                  v799,
                                                                  v801);
                                                                off_1808C03C0(
                                                                  v799,
                                                                  (struct CSingleViewShellExperience *)1);
                                                                v1364 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                                   v799,
                                                                                   v1363);
                                                                v806 = off_1808C0428[0];
                                                                v807 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v806)(
                                                                  v799,
                                                                  &v1684,
                                                                  v807);
                                                                v803 = 0;
                                                                ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
                                                                  v799,
                                                                  v1407,
                                                                  0xFFFFFFFFLL,
                                                                  &v1684,
                                                                  v1309,
                                                                  0LL);
                                                                if ( v678 == 1 )
                                                                {
                                                                  if ( !v1276 )
                                                                  {
                                                                    v1277 = 0xFFFFFF;
LABEL_1086:
                                                                    v809 = -v1670.m128i_i32[0];
                                                                    if ( v1670.m128i_i32[0] >= 0 )
                                                                      v809 = 0;
                                                                    v810 = 0;
                                                                    if ( v1670.m128i_i32[0] >= 0 )
                                                                      v810 = v1670.m128i_i32[0];
                                                                    v811 = -v1670.m128i_i32[1];
                                                                    if ( v1670.m128i_i32[1] >= 0 )
                                                                      v811 = 0;
                                                                    v812 = 0;
                                                                    if ( v1670.m128i_i32[1] >= 0 )
                                                                      v812 = v1670.m128i_i32[1];
                                                                    v813 = DWORD2(v1684) - v809;
                                                                    if ( DWORD2(v1684) - v809 >= v1458 - v810 )
                                                                      v813 = v1458 - v810;
                                                                    v814 = HIDWORD(v1684) - v811;
                                                                    if ( HIDWORD(v1684) - v811 >= v1448 - v812 )
                                                                      v814 = v1448 - v812;
                                                                    if ( v813 > 0 && v814 > 0 )
                                                                    {
                                                                      v815 = (WCHAR *)&lpModuleNameg[2 * v809 + 2 * (__int64)(v811 * DWORD2(v1684))];
                                                                      v1408 = v815;
                                                                      v816 = v1458;
                                                                      v817 = &v1468[2 * v810
                                                                                  + 2 * (__int64)(v1458 * v812)];
                                                                      v1468 = v817;
                                                                      v1459 = 0;
                                                                      lpModuleNameh = (LPCWSTR)(4LL * SDWORD2(v1684));
                                                                      v1332 = 2 * v816;
                                                                      do
                                                                      {
                                                                        v818 = 0;
                                                                        v819 = (unsigned __int8 *)(v815 + 1);
                                                                        v820 = (char *)v817 - (char *)v815;
                                                                        v821 = v1469;
                                                                        do
                                                                        {
                                                                          if ( (unsigned __int8)((*v819
                                                                                                + *(v819 - 2)
                                                                                                + 2
                                                                                                * (unsigned int)*(v819 - 1)) >> 2) != 0xFF )
                                                                          {
                                                                            v822 = (unsigned __int8)~((*v819 + *(v819 - 2) + 2 * (unsigned int)*(v819 - 1)) >> 2);
                                                                            v819[v820] -= ~((*v819
                                                                                           + *(v819 - 2)
                                                                                           + 2
                                                                                           * (unsigned int)*(v819 - 1)) >> 2)
                                                                                        * (v821 - v819[v820]);
                                                                            v819[v820 - 1] += ((((unsigned __int64)(2155905153LL * v822 * (BYTE1(v1277) - v819[v820 - 1])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v822 * (BYTE1(v1277) - v819[v820 - 1])) >> 32) >> 7);
                                                                            v819[v820 - 2] += ((((unsigned __int64)(2155905153LL * v822 * (BYTE2(v1277) - v819[v820 - 2])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v822 * (BYTE2(v1277) - v819[v820 - 2])) >> 32) >> 7);
                                                                            v819[v820 + 1] += ((((unsigned __int64)(2155905153LL * v822 * (255 - v819[v820 + 1])) >> 32) & 0x80000000) != 0LL)
                                                                                            + ((int)((unsigned __int64)(2155905153LL * v822 * (255 - v819[v820 + 1])) >> 32) >> 7);
                                                                          }
                                                                          v803 = 0;
                                                                          v819 += 4;
                                                                          ++v818;
                                                                        }
                                                                        while ( v818 < v813 );
                                                                        v815 = (unsigned __int16 *)((char *)v1408
                                                                                                  + (_QWORD)lpModuleNameh);
                                                                        v1408 = (unsigned __int16 *)((char *)v1408 + (_QWORD)lpModuleNameh);
                                                                        v817 = &v1468[v1332];
                                                                        v1468 = (unsigned __int16 *)((char *)v1468 + v1332 * 2);
                                                                        ++v1459;
                                                                      }
                                                                      while ( v1459 < v814 );
                                                                      v100 = v1477;
                                                                      v799 = (CToastCenterExperienceManager *)v1423;
                                                                    }
                                                                    ((void (__fastcall *)(unsigned __int16 *))off_1808C0378)(v1473);
                                                                    if ( v1364 )
                                                                      ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                        v799,
                                                                        v1364);
                                                                    goto LABEL_1109;
                                                                  }
                                                                  v808 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                                                                }
                                                                else
                                                                {
                                                                  v808 = -5723992;
                                                                }
                                                                v1277 = v808;
                                                                v1469 = v808;
                                                                goto LABEL_1086;
                                                              }
                                                            }
                                                          }
                                                        }
LABEL_1020:
                                                        GetLastError();
                                                        goto LABEL_1021;
                                                      }
                                                      if ( v1661 || (v825 = -64, v678 == 1) )
                                                        v825 = -1;
                                                      LOWORD(v1460) = 0;
                                                      BYTE2(v1460) = v825;
                                                      HIBYTE(v1460) = 1;
                                                      v1449 = 0;
                                                      v1439 = 0;
                                                      Sizec = 0;
                                                      v1321 = ((__int64 (__fastcall *)(CToastCenterExperienceManager *))off_1808C0350[0])(lpMemk);
                                                      if ( !v1321 )
                                                        goto LABEL_1020;
                                                      if ( v678 == 1 )
                                                      {
                                                        v826 = v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                        if ( v1670.m128i_i32[2] - v1670.m128i_i32[0] <= v1669.m128i_i32[2] - v1669.m128i_i32[0] )
                                                          v826 = v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                        v1390 = v826;
                                                        v827 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v1464 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v828 = 0;
                                                        v1474 = 0;
                                                        if ( v1660 )
                                                        {
                                                          v1449 = v826 + v1669.m128i_i32[0] - v1669.m128i_i32[2];
                                                          Sizec = v826 + v1670.m128i_i32[0] - v1670.m128i_i32[2];
                                                          v828 = v1449;
                                                          v1474 = Sizec;
                                                          v827 = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                        }
                                                        v829 = v828 + v1669.m128i_i32[2] - v1669.m128i_i32[0];
                                                        LODWORD(v1470) = v1669.m128i_i32[3] - v1669.m128i_i32[1];
                                                        v830 = v1474 + v1670.m128i_i32[2] - v1670.m128i_i32[0];
                                                        LODWORD(v1471) = v1670.m128i_i32[1] - v1669.m128i_i32[1];
                                                        LODWORD(v1466) = v1670.m128i_i32[3] - v1669.m128i_i32[1];
                                                      }
                                                      else
                                                      {
                                                        v826 = DWORD2(v1686);
                                                        v1390 = DWORD2(v1686);
                                                        v827 = HIDWORD(v1686);
                                                        v1464 = HIDWORD(v1686);
                                                        LODWORD(v1470) = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 12));
                                                        v829 = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 8));
                                                        v1439 = _mm_cvtsi128_si32(_mm_srli_si128(v1669, 4));
                                                        v1449 = _mm_cvtsi128_si32(v1669);
                                                        LODWORD(v1466) = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 12));
                                                        v830 = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 8));
                                                        LODWORD(v1471) = _mm_cvtsi128_si32(_mm_srli_si128(v1670, 4));
                                                        Sizec = _mm_cvtsi128_si32(v1670);
                                                      }
                                                      v1474 = v830;
                                                      v1590 = 0LL;
                                                      memset(&v1695[4], 0, 28);
                                                      v1695[0] = 40;
                                                      v1695[1] = v826;
                                                      v1695[2] = -v827;
                                                      v1695[3] = 2097153;
                                                      v831 = (void *)((__int64 (__fastcall *)(size_t, _DWORD *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                                                       v1321,
                                                                       v1695,
                                                                       0LL,
                                                                       &v1590,
                                                                       0LL,
                                                                       0);
                                                      v1467 = v831;
                                                      if ( !v831 )
                                                      {
                                                        GetLastError();
                                                        v823 = v1321;
LABEL_1134:
                                                        ((void (__fastcall *)(size_t))off_1808C0370[0])(v823);
LABEL_1021:
                                                        if ( v1472 )
                                                          ((void (__fastcall *)(SIZE_T))off_1808C0378)(v1472);
                                                        goto LABEL_1023;
                                                      }
                                                      ((void (__fastcall *)(size_t, void *))off_1808C03B8)(v1321, v831);
                                                      if ( v678 == 1 && v1472 )
                                                      {
                                                        v1681 = 0LL;
                                                        v1682 = v826;
                                                        v1683 = v1464;
                                                        ((void (__fastcall *)(size_t, __int64 *))off_1808C0428[0])(
                                                          v1321,
                                                          &v1681);
                                                      }
                                                      v1394 = v1661;
                                                      v1365 = v1665;
                                                      v1409 = (unsigned __int16 *)v1662;
                                                      v1632 = 0;
                                                      memset_0(v1633, 0, 0x64uLL);
                                                      v1651 = 0;
                                                      memset_0(v1652, 0, 0x64uLL);
                                                      v1468 = 0LL;
                                                      v1333 = 0;
                                                      lpModuleNamei = 0;
                                                      v1704 = 0LL;
                                                      v1705 = 0LL;
                                                      v1706 = 0LL;
                                                      v1707 = 0;
                                                      v1680 = 0LL;
                                                      if ( !v1409 )
                                                        goto LABEL_1130;
                                                      v832 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(
                                                               v1321,
                                                               7LL);
                                                      if ( v832 )
                                                      {
                                                        if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                               v832,
                                                               104LL,
                                                               &v1632) )
                                                        {
                                                          v1468 = v1634;
                                                          v1333 = v1633[0];
                                                          lpModuleNamei = v1633[1];
                                                        }
                                                        v834 = ((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1321);
                                                        v1424 = (CToastCenterExperienceManager *)v834;
                                                        if ( v834 )
                                                        {
                                                          v1591 = 0LL;
                                                          v1705 = 0LL;
                                                          v1706 = 0LL;
                                                          v1707 = 0;
                                                          LODWORD(v1704) = 40;
                                                          DWORD1(v1704) = v829 - v1449;
                                                          DWORD2(v1704) = v1439 - (_DWORD)v1470;
                                                          HIDWORD(v1704) = 2097153;
                                                          v835 = (unsigned __int16 *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1808C0358[0])(
                                                                                       v834,
                                                                                       &v1704,
                                                                                       0LL,
                                                                                       &v1591,
                                                                                       0LL,
                                                                                       0);
                                                          v1473 = v835;
                                                          if ( v835 )
                                                          {
                                                            v838 = ((__int64 (__fastcall *)(unsigned __int16 *, __int64, int *))off_1808C03A8[0])(
                                                                     v835,
                                                                     104LL,
                                                                     &v1651);
                                                            v839 = 0LL;
                                                            if ( v838 )
                                                              v839 = v1653;
                                                            v1371 = v839;
                                                            DWORD2(v1680) = v829 - v1449;
                                                            HIDWORD(v1680) = (_DWORD)v1470 - v1439;
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *))off_1808C03B8)(
                                                              v1424,
                                                              v1473);
                                                            off_1808C03C0(v1424, (struct CSingleViewShellExperience *)1);
                                                            v1366 = (LPCWSTR)((__int64 (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                               v1424,
                                                                               v1365);
                                                            v840 = off_1808C0428[0];
                                                            v841 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, __int128 *, __int64))v840)(
                                                              v1424,
                                                              &v1680,
                                                              v841);
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, unsigned __int16 *, __int64, __int128 *, int, _QWORD))off_1808C0418)(
                                                              v1424,
                                                              v1409,
                                                              0xFFFFFFFFLL,
                                                              &v1680,
                                                              v1309,
                                                              0LL);
                                                            if ( v678 == 1 )
                                                            {
                                                              if ( v1394 )
                                                                v842 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                                                              else
                                                                v842 = 0xFFFFFF;
                                                            }
                                                            else
                                                            {
                                                              v842 = -5723992;
                                                            }
                                                            v1395 = v842;
                                                            v843 = -v1449;
                                                            if ( v1449 >= 0 )
                                                              v843 = 0;
                                                            v844 = 0;
                                                            if ( v1449 >= 0 )
                                                              v844 = v1449;
                                                            v845 = -v1439;
                                                            if ( v1439 >= 0 )
                                                              v845 = 0;
                                                            v846 = 0;
                                                            if ( v1439 >= 0 )
                                                              v846 = v1439;
                                                            v847 = (unsigned int)(DWORD2(v1680) - v843);
                                                            v848 = v1333;
                                                            if ( (int)v847 >= v1333 - v844 )
                                                              v847 = (unsigned int)(v1333 - v844);
                                                            v1334 = v847;
                                                            v849 = HIDWORD(v1680) - v845;
                                                            if ( HIDWORD(v1680) - v845 >= lpModuleNamei - v846 )
                                                              v849 = lpModuleNamei - v846;
                                                            lpModuleNamej = v849;
                                                            v836 = 0;
                                                            if ( (int)v847 > 0 )
                                                            {
                                                              v847 = 0LL;
                                                              if ( v849 > 0 )
                                                              {
                                                                v847 = (unsigned __int64)&v1371[4 * v843
                                                                                              + 4
                                                                                              * (__int64)(DWORD2(v1680) * v845)];
                                                                v1372 = (char *)v847;
                                                                v850 = &v1468[2 * v844 + 2 * (__int64)(v846 * (int)v848)];
                                                                v1410 = v850;
                                                                LODWORD(v1470) = 0;
                                                                v1468 = (unsigned __int16 *)(4LL * SDWORD2(v1680));
                                                                v1440 = 2 * v848;
                                                                v851 = 0;
                                                                v1450 = 0;
                                                                v852 = v1334;
                                                                v853 = v1468;
                                                                do
                                                                {
                                                                  v854 = 0;
                                                                  v1335 = 0;
                                                                  v855 = (unsigned __int8 *)(v847 + 2);
                                                                  v856 = (signed __int64)v850 - v847;
                                                                  do
                                                                  {
                                                                    if ( (unsigned __int8)((*v855
                                                                                          + *(v855 - 2)
                                                                                          + 2
                                                                                          * (unsigned int)*(v855 - 1)) >> 2) != 0xFF )
                                                                    {
                                                                      v857 = (unsigned __int8)~((*v855
                                                                                               + *(v855 - 2)
                                                                                               + 2
                                                                                               * (unsigned int)*(v855 - 1)) >> 2);
                                                                      v855[v856] -= ~((*v855
                                                                                     + *(v855 - 2)
                                                                                     + 2 * (unsigned int)*(v855 - 1)) >> 2)
                                                                                  * (v1395 - v855[v856]);
                                                                      v855[v856 - 1] -= v857
                                                                                      * (BYTE1(v1395) - v855[v856 - 1]);
                                                                      v855[v856 - 2] -= v857
                                                                                      * (BYTE2(v1395) - v855[v856 - 2]);
                                                                      v855[v856 + 1] += v857
                                                                                      * (255 - v855[v856 + 1])
                                                                                      / 255;
                                                                      v854 = v1335;
                                                                      v851 = v1450;
                                                                    }
                                                                    v836 = v851;
                                                                    v855 += 4;
                                                                    v1335 = ++v854;
                                                                  }
                                                                  while ( v854 < v852 );
                                                                  v847 = (unsigned __int64)&v1372[(_QWORD)v853];
                                                                  v1372 = &v1372[(_QWORD)v853];
                                                                  v850 = &v1410[v1440];
                                                                  v1410 = (unsigned __int16 *)((char *)v1410 + v1440 * 2);
                                                                  LODWORD(v1470) = (_DWORD)v1470 + 1;
                                                                  v1450 = v851;
                                                                }
                                                                while ( (int)v1470 < lpModuleNamej );
                                                                v678 = v1274;
                                                                v100 = v1477;
                                                                v826 = v1390;
                                                                v830 = v1474;
                                                              }
                                                            }
                                                            ((void (__fastcall *)(unsigned __int16 *, unsigned __int64))off_1808C0378)(
                                                              v1473,
                                                              v847);
                                                            if ( v1366 )
                                                              ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                                v1424,
                                                                v1366);
                                                          }
                                                          else
                                                          {
                                                            v836 = GetLastError();
                                                            v837 = v836 < 0;
                                                            if ( v836 > 0 )
                                                            {
                                                              v836 = (unsigned __int16)v836 | 0x80070000;
                                                              v837 = v836 < 0;
                                                            }
                                                            if ( !v837 )
                                                              v836 = -2147467259;
                                                          }
                                                          ((void (__fastcall *)(CToastCenterExperienceManager *))off_1808C0370[0])(v1424);
                                                          if ( v836 < 0 )
                                                            goto LABEL_1130;
                                                          lpModuleNamek = v1661;
                                                          v1373 = v1666;
                                                          v858 = v1663;
                                                          v1367 = (LPCWSTR)v1663;
                                                          v1654 = 0;
                                                          memset_0(v1655, 0, 0x64uLL);
                                                          v1657 = 0;
                                                          memset_0(v1658, 0, 0x64uLL);
                                                          v1411 = 0LL;
                                                          v1336 = 0;
                                                          v1396 = 0;
                                                          v1708 = 0LL;
                                                          v1709 = 0LL;
                                                          v1710 = 0LL;
                                                          v1711 = 0;
                                                          v1679 = 0LL;
                                                          v859 = v858 == 0LL;
                                                          v823 = v1321;
                                                          if ( v859 )
                                                            goto LABEL_1131;
                                                          v860 = ((__int64 (__fastcall *)(size_t, __int64))off_1808C0390[0])(
                                                                   v1321,
                                                                   7LL);
                                                          if ( !v860 )
                                                          {
                                                            GetLastError();
                                                            goto LABEL_1131;
                                                          }
                                                          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                                 v860,
                                                                 104LL,
                                                                 &v1654) )
                                                          {
                                                            v1411 = v1656;
                                                            v1336 = v1655[0];
                                                            v1396 = v1655[1];
                                                          }
                                                          v861 = (unsigned __int16 *)((__int64 (__fastcall *)(size_t))off_1808C0350[0])(v1321);
                                                          v862 = (CToastCenterExperienceManager *)v861;
                                                          v1468 = v861;
                                                          if ( v861 )
                                                          {
                                                            v1593[0] = 0LL;
                                                            v1709 = 0LL;
                                                            v1710 = 0LL;
                                                            v1711 = 0;
                                                            LODWORD(v1708) = 40;
                                                            DWORD1(v1708) = v830 - Sizec;
                                                            DWORD2(v1708) = (_DWORD)v1471 - (_DWORD)v1466;
                                                            HIDWORD(v1708) = 2097153;
                                                            v863 = ((__int64 (__fastcall *)(unsigned __int16 *, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_1808C0358[0])(
                                                                     v861,
                                                                     &v1708,
                                                                     0LL,
                                                                     v1593,
                                                                     0LL,
                                                                     0);
                                                            v1425 = (LPCWSTR)v863;
                                                            if ( !v863 )
                                                            {
                                                              v864 = GetLastError();
                                                              v865 = v864 < 0;
                                                              if ( v864 > 0 )
                                                              {
                                                                v864 = (unsigned __int16)v864 | 0x80070000;
                                                                v865 = v864 < 0;
                                                              }
                                                              if ( !v865 )
                                                                v864 = -2147467259;
                                                              v866 = v1468;
                                                              goto LABEL_1218;
                                                            }
                                                            v867 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_1808C03A8[0])(
                                                                     v863,
                                                                     104LL,
                                                                     &v1657);
                                                            v868 = 0LL;
                                                            if ( v867 )
                                                              v868 = v1659;
                                                            v1473 = v868;
                                                            DWORD2(v1679) = v830 - Sizec;
                                                            HIDWORD(v1679) = (_DWORD)v1466 - (_DWORD)v1471;
                                                            ((void (__fastcall *)(CToastCenterExperienceManager *, LPCWSTR))off_1808C03B8)(
                                                              v862,
                                                              v1425);
                                                            off_1808C03C0(v862, (struct CSingleViewShellExperience *)1);
                                                            v1374 = (LPVOID)((__int64 (__fastcall *)(CToastCenterExperienceManager *, const WCHAR *))off_1808C03B8)(
                                                                              v862,
                                                                              v1373);
                                                            v869 = off_1808C0428[0];
                                                            v870 = ((__int64 (__fastcall *)(_QWORD))off_1808C03B0[0])(0LL);
                                                            v866 = v1468;
                                                            ((void (__fastcall *)(unsigned __int16 *, __int128 *, __int64))v869)(
                                                              v1468,
                                                              &v1679,
                                                              v870);
                                                            ((void (__fastcall *)(unsigned __int16 *, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1808C0418)(
                                                              v866,
                                                              v1367,
                                                              0xFFFFFFFFLL,
                                                              &v1679,
                                                              v1309,
                                                              0LL);
                                                            if ( v678 == 1 )
                                                            {
                                                              if ( !lpModuleNamek )
                                                              {
                                                                lpModuleNamel = 0xFFFFFF;
LABEL_1195:
                                                                v872 = -Sizec;
                                                                if ( Sizec >= 0 )
                                                                  v872 = 0;
                                                                v873 = 0;
                                                                if ( Sizec >= 0 )
                                                                  v873 = Sizec;
                                                                v874 = -(int)v1471;
                                                                if ( (int)v1471 >= 0 )
                                                                  v874 = 0;
                                                                v875 = 0;
                                                                if ( (int)v1471 >= 0 )
                                                                  v875 = (int)v1471;
                                                                v876 = (unsigned int)(DWORD2(v1679) - v872);
                                                                v877 = v1336;
                                                                if ( (int)v876 >= v1336 - v873 )
                                                                  v876 = (unsigned int)(v1336 - v873);
                                                                v1337 = v876;
                                                                v878 = HIDWORD(v1679) - v874;
                                                                if ( HIDWORD(v1679) - v874 >= v1396 - v875 )
                                                                  v878 = v1396 - v875;
                                                                v1397 = v878;
                                                                v864 = 0;
                                                                if ( (int)v876 > 0 )
                                                                {
                                                                  v876 = 0LL;
                                                                  if ( v878 > 0 )
                                                                  {
                                                                    v876 = (unsigned __int64)&v1473[2 * v872 + 2 * (__int64)(DWORD2(v1679) * v874)];
                                                                    v1368 = (LPCWSTR)v876;
                                                                    v879 = &v1411[2 * v873
                                                                                + 2 * (__int64)((int)v877 * v875)];
                                                                    v1412 = v879;
                                                                    LODWORD(v1466) = 0;
                                                                    v1473 = (unsigned __int16 *)(4LL * SDWORD2(v1679));
                                                                    v1470 = (LPVOID)(4 * v877);
                                                                    v880 = 0;
                                                                    LODWORD(v1471) = 0;
                                                                    v881 = v1337;
                                                                    v882 = v1473;
                                                                    v883 = v1469;
                                                                    do
                                                                    {
                                                                      v884 = 0;
                                                                      v1338 = 0;
                                                                      v885 = (unsigned __int8 *)(v876 + 2);
                                                                      v886 = (char *)v879 - v876;
                                                                      do
                                                                      {
                                                                        if ( (unsigned __int8)((*v885
                                                                                              + *(v885 - 2)
                                                                                              + 2
                                                                                              * (unsigned int)*(v885 - 1)) >> 2) != 0xFF )
                                                                        {
                                                                          v887 = (unsigned __int8)~((*v885 + *(v885 - 2) + 2 * (unsigned int)*(v885 - 1)) >> 2);
                                                                          v885[(_QWORD)v886] -= ~((*v885
                                                                                                 + *(v885 - 2)
                                                                                                 + 2
                                                                                                 * (unsigned int)*(v885 - 1)) >> 2)
                                                                                              * (v883
                                                                                               - v885[(_QWORD)v886]);
                                                                          v885[(_QWORD)v886 - 1] -= v887 * (BYTE1(lpModuleNamel) - v885[(_QWORD)v886 - 1]);
                                                                          v885[(_QWORD)v886 - 2] -= v887 * (BYTE2(lpModuleNamel) - v885[(_QWORD)v886 - 2]);
                                                                          v885[(_QWORD)v886 + 1] += v887 * (255 - v885[(_QWORD)v886 + 1]) / 255;
                                                                          v884 = v1338;
                                                                          v880 = (int)v1471;
                                                                        }
                                                                        v864 = v880;
                                                                        v885 += 4;
                                                                        v1338 = ++v884;
                                                                      }
                                                                      while ( v884 < v881 );
                                                                      v876 = (unsigned __int64)v1368 + (_QWORD)v882;
                                                                      v1368 = (LPCWSTR)((char *)v1368 + (_QWORD)v882);
                                                                      v879 = (unsigned __int16 *)((char *)v1412
                                                                                                + (_QWORD)v1470);
                                                                      v1412 = (unsigned __int16 *)((char *)v1412
                                                                                                 + (_QWORD)v1470);
                                                                      LODWORD(v1466) = (_DWORD)v1466 + 1;
                                                                      LODWORD(v1471) = v880;
                                                                    }
                                                                    while ( (int)v1466 < v1397 );
                                                                    v678 = v1274;
                                                                    v100 = v1477;
                                                                    v826 = v1390;
                                                                    v866 = v1468;
                                                                  }
                                                                }
                                                                ((void (__fastcall *)(LPCWSTR, unsigned __int64))off_1808C0378)(
                                                                  v1425,
                                                                  v876);
                                                                if ( v1374 )
                                                                  ((void (__fastcall *)(unsigned __int16 *, LPVOID))off_1808C03B8)(
                                                                    v866,
                                                                    v1374);
LABEL_1218:
                                                                ((void (__fastcall *)(unsigned __int16 *))off_1808C0370[0])(v866);
                                                                if ( v864 >= 0 )
                                                                {
                                                                  v823 = v1321;
                                                                  v824 = lpMemk;
                                                                  if ( v678 == 1 )
                                                                    ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, int))off_1808C0340[0])(
                                                                      lpMemk,
                                                                      v1669.m128i_u32[0],
                                                                      v1669.m128i_u32[1],
                                                                      v826,
                                                                      v1464,
                                                                      v1321,
                                                                      0,
                                                                      0,
                                                                      13369376);
                                                                  else
                                                                    ((void (__fastcall *)(CToastCenterExperienceManager *, _QWORD, _QWORD, _QWORD, __int32, size_t, _DWORD, _DWORD, unsigned __int32, __int32, int))off_1808C0380[0])(
                                                                      lpMemk,
                                                                      (unsigned int)v1686,
                                                                      DWORD1(v1686),
                                                                      v826,
                                                                      v1464,
                                                                      v1321,
                                                                      0,
                                                                      0,
                                                                      v826,
                                                                      v1464,
                                                                      v1460);
                                                                  goto LABEL_1222;
                                                                }
                                                                goto LABEL_1130;
                                                              }
                                                              v871 = ((__int64 (__fastcall *)(__int64))off_1808C0458[0])(8LL);
                                                            }
                                                            else
                                                            {
                                                              v871 = -5723992;
                                                            }
                                                            lpModuleNamel = v871;
                                                            v1469 = v871;
                                                            goto LABEL_1195;
                                                          }
                                                        }
                                                      }
                                                      GetLastError();
LABEL_1130:
                                                      v823 = v1321;
LABEL_1131:
                                                      v833 = v1467;
                                                      goto LABEL_1132;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v680 = 0;
                                                  }
                                                  if ( v678 != 1 )
                                                    goto LABEL_971;
                                                  goto LABEL_969;
                                                }
                                                v580 = 0LL;
                                                v1581 = 0LL;
                                                v1582 = 0LL;
                                                v1583 = 0LL;
                                                v1584 = 0LL;
                                                memset(v1725, 0, sizeof(v1725));
                                                v1585 = 0LL;
                                                v1519 = 0;
                                                v1544 = 0LL;
                                                v579 = 0;
                                                v1520 = 0;
                                                if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1808C03E0[0])(
                                                        8LL,
                                                        &v1519,
                                                        0LL,
                                                        &v1520) )
                                                {
                                                  v579 = GetLastError();
                                                  v581 = v579 < 0;
                                                  if ( v579 > 0 )
                                                  {
                                                    v579 = (unsigned __int16)v579 | 0x80070000;
                                                    v581 = v579 < 0;
                                                  }
                                                  if ( !v581 )
                                                    v579 = -2147467259;
                                                  goto LABEL_743;
                                                }
                                                v582 = MemoryAlloc(2LL * v1520);
                                                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1585, v582);
                                                if ( !v1585 )
                                                {
                                                  v579 = -2147024882;
                                                  goto LABEL_743;
                                                }
                                                v583 = MemoryAlloc(4LL * (v1519 + 1));
                                                SP<unsigned long,SP_MEM<unsigned long>>::operator=(&v1544, v583);
                                                v584 = v1544;
                                                if ( v1544 )
                                                {
                                                  if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1808C03E0[0])(
                                                         8LL,
                                                         &v1519,
                                                         v1585,
                                                         &v1520) )
                                                  {
                                                    v591 = v584;
                                                    if ( v1519 )
                                                    {
                                                      v592 = v1585;
                                                      v593 = v584;
                                                      for ( ii = 0; ii < v1519; ++ii )
                                                      {
                                                        *v593 = ((__int64 (__fastcall *)(char *, _QWORD))off_1808C03F0)(
                                                                  v592,
                                                                  0LL);
                                                        v595 = -1LL;
                                                        do
                                                          ++v595;
                                                        while ( *(_WORD *)&v592[2 * v595] );
                                                        v592 += 2 * v595 + 2;
                                                        ++v593;
                                                      }
                                                      v1544 = v593;
                                                      LOBYTE(v462) = v1271;
                                                      v591 = v593;
                                                    }
                                                    *v591 = 1033;
                                                    v580 = v584;
                                                    v1544 = 0LL;
                                                    v1581 = v584;
                                                    v577 = v1519 + 1;
LABEL_743:
                                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1544);
                                                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1585);
                                                    if ( v579 < 0 )
                                                    {
                                                      v601 = 0LL;
                                                      v603 = 0LL;
                                                    }
                                                    else
                                                    {
                                                      v585 = 0;
                                                      v1388 = 0;
                                                      v586 = 0;
                                                      if ( v577 )
                                                      {
                                                        v587 = 0LL;
                                                        while ( 2 )
                                                        {
                                                          v588 = 0;
                                                          v589 = dword_1807CF830;
                                                          do
                                                          {
                                                            if ( v580[v587] == *v589 )
                                                            {
                                                              v585 = v588;
                                                              v1388 = v588;
                                                              goto LABEL_764;
                                                            }
                                                            ++v588;
                                                            ++v589;
                                                          }
                                                          while ( v588 < 0x26 );
                                                          ++v586;
                                                          ++v587;
                                                          if ( v586 < v577 )
                                                            continue;
                                                          break;
                                                        }
                                                      }
LABEL_764:
                                                      memset(v1688, 0, sizeof(v1688));
                                                      v1463 = 0;
                                                      if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1808C03E8[0])(
                                                             (unsigned int)dword_1807CF830[v585],
                                                             v1735,
                                                             85LL)
                                                        && ((int (__fastcall *)(_BYTE *, __int64, _OWORD *, __int64))off_1808C03D0[0])(
                                                             v1735,
                                                             88LL,
                                                             v1688,
                                                             16LL) > 0 )
                                                      {
                                                        v1463 = (HIDWORD(v1688[0]) >> 27) & 1;
                                                      }
                                                      memset_0(v1732, 0, 0x90uLL);
                                                      v596 = L"Segoe UI Light";
                                                      v597 = (const wchar_t **)&v1731;
                                                      v598 = 19LL;
                                                      do
                                                      {
                                                        *v597 = v596;
                                                        v599 = -1LL;
                                                        do
                                                          ++v599;
                                                        while ( v596[v599] );
                                                        v596 += v599 + 1;
                                                        ++v597;
                                                        --v598;
                                                      }
                                                      while ( v598 );
                                                      v600 = 3LL * v585;
                                                      v1357 = *(unsigned __int16 **)&v1732[8 * byte_1807CF7A0[v600] - 8];
                                                      v1473 = v1357;
                                                      v1403 = *(unsigned __int16 **)&v1732[8 * byte_1807CF7A0[v600 + 1]
                                                                                         - 8];
                                                      v601 = *(unsigned __int16 **)&v1732[8 * byte_1807CF7A0[v600 + 2]
                                                                                        - 8];
                                                      v1468 = v601;
                                                      v1329 = v601;
                                                      v602 = (char *)MemoryAlloc(0x1C90uLL);
                                                      v1392 = v602;
                                                      if ( v602 )
                                                      {
                                                        v604 = 0;
                                                        v1474 = -1;
                                                        v605 = 0;
                                                        v606 = 0;
                                                        v607 = v602 + 7;
                                                        v608 = (unsigned __int8 *)&unk_1807CF8D2;
                                                        v609 = 914LL;
                                                        v610 = -1;
                                                        do
                                                        {
                                                          v611 = v608[1] | ((*v608 | ((*(v608 - 1) | (*(v608 - 2) << 8)) << 8)) << 8);
                                                          v612 = v608[5] | ((v608[4] | ((v608[3] | (v608[2] << 8)) << 8)) << 8);
                                                          v613 = v611 ^ v606;
                                                          v608 += 8;
                                                          v614 = v613 ^ v605 ^ v612 ^ 0xAC987321;
                                                          v615 = (4991 * __ROR4__(v614 + 1419157410, 27)
                                                                + __ROR4__(v614, 22)) ^ v613;
                                                          v616 = (43881 * __ROR4__(v615 + 133239679, 9)
                                                                - __ROR4__(v615, 30)) ^ v614;
                                                          v617 = (24670 * v616 - (v616 >> 13) - 123127970) ^ v615;
                                                          v618 = (2033 * __ROR4__(v617 ^ 0xAB69, 26) - __ROR4__(v617, 30)) ^ v616;
                                                          v619 = (133239679 - (v618 ^ 0xAB69605E)) ^ v617;
                                                          v620 = (43881 * (v619 ^ 0x137F)) ^ __ROR4__(v619, 6) ^ v618;
                                                          v621 = (24670 * __ROR4__(v620 + 133239679, 15)
                                                                + __ROR4__(v620, 30)) ^ v619;
                                                          v622 = (2033 * __ROR4__(v621 + 1419157410, 14)
                                                                - __ROR4__(v621, 24)) ^ v620;
                                                          v623 = (4991 * __ROR4__(v622 ^ 0xAB69605E, 12)) ^ __ROR4__(v622, 10) ^ v621;
                                                          v624 = (v623 >> 10) ^ (43881 * (v623 ^ 0x7F1)) ^ v622;
                                                          v625 = (2033 * (__ROR4__(~v624, 5) + 24670)) ^ v623;
                                                          v626 = v624 ^ (v625 - 2033) ^ 0xAB69605E;
                                                          v627 = ((v626 >> 2)
                                                                + 4991 * __ROR4__(v624 ^ (v625 - 2033) ^ 0xAB6967AF, 30)) ^ v625;
                                                          v628 = (43881 * __ROR4__(v627 - 133239679, 6)
                                                                + __ROR4__(v627, 25)) ^ v626;
                                                          v629 = (24670 * (v628 ^ 0x137F) + __ROR4__(v628, 9)) ^ v627;
                                                          v630 = (2033 * __ROR4__(v629 ^ 0xAB69, 27) + __ROR4__(v629, 25)) ^ v628;
                                                          v631 = v630 ^ v629 ^ 0xAC987321;
                                                          v632 = (4991 * __ROR4__(v631, 3) - 219010071) ^ v630;
                                                          v633 = (24670 * __ROR4__(v632 - 133239679, 1)
                                                                - __ROR4__(v632, 6)) ^ v631;
                                                          v634 = (2033 * __ROR4__(v633 - 1419157410, 29)
                                                                + __ROR4__(v633, 18)) ^ v632;
                                                          v635 = (4991 * __ROR4__(v634 - 1419157410, 17)
                                                                - __ROR4__(v634, 14)) ^ v633;
                                                          v636 = (v635 >> 3) ^ (43881 * (v635 ^ 0x605E)) ^ v634;
                                                          v606 = (24670 * __ROR4__(v636 ^ 0x7F1137F, 28)) ^ __ROR4__(v636, 30) ^ v604 ^ v635;
                                                          v605 = v610 ^ v636;
                                                          *(v607 - 4) = v606;
                                                          *v607 = v605;
                                                          *(v607 - 5) = BYTE1(v606);
                                                          *(v607 - 1) = BYTE1(v605);
                                                          *(v607 - 6) = (unsigned __int16)(v606 >> 8) >> 8;
                                                          *(v607 - 2) = (unsigned __int16)(v605 >> 8) >> 8;
                                                          *(v607 - 7) = __ROR4__(
                                                                          (((v606 >> 8) | (v606 << 24)) >> 8) | (((v606 >> 8) | (v606 << 24)) << 24),
                                                                          8);
                                                          *(v607 - 3) = __ROR4__(
                                                                          (((v605 >> 8) | (v605 << 24)) >> 8) | (((v605 >> 8) | (v605 << 24)) << 24),
                                                                          8);
                                                          v604 = v611;
                                                          v610 = v612;
                                                          v607 += 8;
                                                          --v609;
                                                        }
                                                        while ( v609 );
                                                        v637 = 0LL;
                                                        v638 = 0;
                                                        LOBYTE(v462) = v1271;
                                                        v100 = v1477;
                                                        v639 = v1392;
                                                        v601 = v1468;
                                                        do
                                                          v638 ^= v1392[v637++];
                                                        while ( v637 < 0x1C90 );
                                                        if ( v638 == 127LL )
                                                        {
                                                          v1582 = v1392;
                                                          v1583 = 7312LL;
                                                          v579 = 0;
                                                          if ( v1392 )
                                                            v1583 = 7312LL;
                                                          else
                                                            v639 = 0LL;
                                                          v641 = v1725;
                                                          v642 = 6LL;
                                                          do
                                                          {
                                                            for ( jj = 0; jj < 0x26; ++jj )
                                                            {
                                                              if ( v1388 == jj )
                                                                *v641 = v639;
                                                              v644 = -1LL;
                                                              do
                                                                ++v644;
                                                              while ( v639[v644] );
                                                              v639 += v644 + 1;
                                                            }
                                                            ++v641;
                                                            --v642;
                                                          }
                                                          while ( v642 );
                                                          v645 = MemoryAlloc(0x18uLL);
                                                          SP<unsigned long,SP_MEM<unsigned long>>::operator=(
                                                            &v1584,
                                                            v645);
                                                          v646 = v1584;
                                                          if ( v1584 )
                                                          {
                                                            *v1584 = 0LL;
                                                            v646[2] = 0LL;
                                                            v647 = 0;
                                                            v1272 = 0;
                                                            v648 = v646;
                                                            v1393 = v646;
                                                            v649 = (__int16 *)&v1733;
                                                            v1466 = &v1733;
                                                            v1583 = 7312LL;
                                                            while ( 2 )
                                                            {
                                                              v650 = 0LL;
                                                              v651 = *v649;
                                                              v652 = word_1807CF818;
                                                              while ( v651 != *v652 )
                                                              {
                                                                v650 = (unsigned int)(v650 + 1);
                                                                ++v652;
                                                                if ( (unsigned int)v650 >= 6 )
                                                                  goto LABEL_806;
                                                              }
                                                              v653 = (void *)*((_QWORD *)v1725 + v650);
                                                              v1471 = v653;
                                                              v654 = -1LL;
                                                              do
                                                                ++v654;
                                                              while ( *((_BYTE *)v653 + v654) );
                                                              v655 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_1808C0400[0])(
                                                                       65001LL,
                                                                       0LL,
                                                                       v653,
                                                                       (unsigned int)(v654 + 1),
                                                                       0LL,
                                                                       0);
                                                              v1389 = v655;
                                                              if ( !v655 )
                                                              {
                                                                v660 = GetLastError();
                                                                v579 = v660;
                                                                if ( v660 > 0 )
                                                                  v579 = (unsigned __int16)v660 | 0x80070000;
                                                                if ( v579 >= 0 )
                                                                  v579 = -2147467259;
                                                                goto LABEL_816;
                                                              }
                                                              v656 = MemoryAlloc(2LL * v655);
                                                              *v1393 = v656;
                                                              if ( !v656 )
                                                                goto LABEL_797;
                                                              v657 = -1LL;
                                                              do
                                                                ++v657;
                                                              while ( *((_BYTE *)v1471 + v657) );
                                                              if ( !((unsigned int (__fastcall *)(__int64, _QWORD, LPVOID, _QWORD, LPVOID, int))off_1808C0400[0])(
                                                                      65001LL,
                                                                      0LL,
                                                                      v1471,
                                                                      (unsigned int)(v657 + 1),
                                                                      v656,
                                                                      v1389) )
                                                              {
                                                                v659 = GetLastError();
                                                                v579 = v659;
                                                                if ( v659 > 0 )
                                                                  v579 = (unsigned __int16)v659 | 0x80070000;
                                                                if ( v579 >= 0 )
                                                                  v579 = -2147467259;
                                                                goto LABEL_816;
                                                              }
                                                              v648 = v1393;
                                                              v647 = v1272;
LABEL_806:
                                                              v1272 = ++v647;
                                                              v649 = (__int16 *)((char *)v1466 + 2);
                                                              v1466 = (char *)v1466 + 2;
                                                              v1393 = ++v648;
                                                              if ( v647 < 3 )
                                                                continue;
                                                              break;
                                                            }
                                                            v658 = (void **)v646;
                                                            v646 = 0LL;
                                                            v1584 = 0LL;
                                                            v1579 = v658;
                                                            v1660 = v1463;
                                                          }
                                                          else
                                                          {
LABEL_797:
                                                            v579 = -2147024882;
                                                          }
LABEL_816:
                                                          if ( v646 )
                                                          {
                                                            v661 = v1473;
                                                            v662 = 3LL;
                                                            v1473 = (unsigned __int16 *)3;
                                                            v1468 = v1329;
                                                            v1357 = v661;
                                                            v1583 = 7312LL;
                                                            do
                                                            {
                                                              v663 = (_WORD *)*v646;
                                                              if ( *v646 )
                                                              {
                                                                v664 = -1LL;
                                                                do
                                                                  ++v664;
                                                                while ( v663[v664] );
                                                                memset(v663, 0, 2 * v664 + 2);
                                                                MemoryFree((void *)*v646);
                                                                v662 = (__int64)v1473;
                                                              }
                                                              ++v646;
                                                              v1473 = (unsigned __int16 *)--v662;
                                                            }
                                                            while ( v662 );
                                                          }
                                                          v601 = v1468;
                                                        }
                                                        else
                                                        {
                                                          v579 = -1073425151;
                                                          MemoryFree(v1392);
                                                        }
                                                        v640 = v1583;
                                                        v603 = v1403;
LABEL_826:
                                                        v1468 = v601;
                                                        v1404 = v603;
                                                        if ( v1582 )
                                                          memset(v1582, 0, v640);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1584);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1582);
                                                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1581);
                                                        if ( v579 < 0 )
                                                          goto LABEL_862;
                                                        if ( v1579 )
                                                        {
                                                          v665 = v1579;
                                                          v1468 = v601;
                                                        }
                                                        else
                                                        {
                                                          v665 = 0LL;
                                                        }
                                                        v1662 = *v665;
                                                        if ( v1579 )
                                                        {
                                                          v666 = v1579;
                                                          v1468 = v601;
                                                        }
                                                        else
                                                        {
                                                          v666 = 0LL;
                                                        }
                                                        v1663 = v666[1];
                                                        if ( v1579 )
                                                        {
                                                          v667 = v1579;
                                                          v1468 = v601;
                                                        }
                                                        else
                                                        {
                                                          v667 = 0LL;
                                                        }
                                                        v1664 = v667[2];
                                                        v1622 = 0LL;
                                                        LODWORD(v1622) = 16;
                                                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *))off_1808C04A8)(
                                                                              66LL,
                                                                              0LL,
                                                                              &v1622) )
                                                        {
                                                          v668 = GetLastError();
                                                          v579 = v668;
                                                          if ( v668 > 0 )
                                                            v579 = (unsigned __int16)v668 | 0x80070000;
                                                          if ( v579 >= 0 )
                                                            v579 = -2147467259;
                                                          v1661 = 0;
                                                          goto LABEL_862;
                                                        }
                                                        v1661 = BYTE4(v1622) & 1;
                                                        if ( Sizeb == 1 )
                                                        {
                                                          v1351 = 42;
                                                        }
                                                        else
                                                        {
                                                          if ( Sizeb != 2 )
                                                          {
                                                            if ( Sizeb == 3 )
                                                            {
                                                              v1351 = 225;
                                                              v1308 = 225;
                                                            }
LABEL_851:
                                                            v669 = 96;
                                                            v1273 = 96;
                                                            memset_0(v1721, 0, 0xDCuLL);
                                                            v1722 = 220;
                                                            v579 = 0;
                                                            if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1808C0420[0])(
                                                                   0LL,
                                                                   0xFFFFFFFFLL,
                                                                   v1721) )
                                                            {
                                                              v669 = v1723;
                                                              *(_QWORD *)&v1621 = 0LL;
                                                              *((_QWORD *)&v1621 + 1) = v1724;
                                                              if ( v1723 < 0x60u )
                                                                v669 = 96;
                                                              v1273 = v669;
                                                            }
                                                            v670 = v1468;
                                                            if ( Sizeb == 1 )
                                                              v670 = v1357;
                                                            v1473 = v670;
                                                            memset_0(v1712, 0, 0x5CuLL);
                                                            lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                                                       0LL,
                                                                                       0LL,
                                                                                       1027LL);
                                                            if ( lpModuleNamec )
                                                            {
                                                              v1712[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                                 v1351,
                                                                                 v669,
                                                                                 72LL);
                                                              v1712[4] = 400;
                                                              v1713 = 5;
                                                              StringCchCopyW((char *)v1714, 32LL, (char *)v1473);
                                                              v682 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1712);
                                                              if ( v682 )
                                                              {
                                                                v1665 = (const WCHAR *)v682;
                                                              }
                                                              else
                                                              {
                                                                v579 = GetLastError();
                                                                v683 = v579 < 0;
                                                                if ( v579 > 0 )
                                                                {
                                                                  v579 = (unsigned __int16)v579 | 0x80070000;
                                                                  v683 = v579 < 0;
                                                                }
                                                                if ( !v683 )
                                                                  v579 = -2147467259;
                                                              }
                                                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808C04A0[0])(
                                                                0LL,
                                                                lpModuleNamec);
                                                            }
                                                            else
                                                            {
                                                              v579 = GetLastError();
                                                              v671 = v579 < 0;
                                                              if ( v579 > 0 )
                                                              {
                                                                v579 = (unsigned __int16)v579 | 0x80070000;
                                                                v671 = v579 < 0;
                                                              }
                                                              if ( !v671 )
                                                                goto LABEL_861;
                                                            }
                                                            if ( v579 < 0 )
                                                              goto LABEL_862;
                                                            v684 = v1468;
                                                            if ( Sizeb == 1 )
                                                              v684 = v1357;
                                                            v1468 = v684;
                                                            memset_0(v1715, 0, 0x5CuLL);
                                                            v579 = 0;
                                                            v1358 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                                               0LL,
                                                                               0LL,
                                                                               1027LL);
                                                            if ( !v1358 )
                                                            {
                                                              v685 = GetLastError();
                                                              v579 = v685;
                                                              if ( v685 > 0 )
                                                                v579 = (unsigned __int16)v685 | 0x80070000;
                                                              if ( v579 >= 0 )
                                                                v579 = -2147467259;
                                                              goto LABEL_862;
                                                            }
                                                            v1715[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                               v1308,
                                                                               v669,
                                                                               72LL);
                                                            v1715[4] = 400;
                                                            v1716 = 5;
                                                            StringCchCopyW((char *)v1717, 32LL, (char *)v1468);
                                                            v686 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1715);
                                                            v687 = 0;
                                                            if ( v686 )
                                                            {
                                                              v1666 = (const WCHAR *)v686;
                                                            }
                                                            else
                                                            {
                                                              v688 = GetLastError();
                                                              v579 = v688;
                                                              if ( v688 > 0 )
                                                                v579 = (unsigned __int16)v688 | 0x80070000;
                                                              if ( v579 >= 0 )
                                                                v579 = -2147467259;
                                                            }
                                                            ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808C04A0[0])(
                                                              0LL,
                                                              v1358);
                                                            if ( v579 < 0 )
                                                              goto LABEL_862;
                                                            v689 = 0;
                                                            if ( Sizeb != 1 )
                                                            {
                                                              if ( Sizeb == 2 )
                                                              {
                                                                v687 = SDWORD2(v1621) / 4;
                                                                v689 = 0;
LABEL_909:
                                                                *((_QWORD *)&v1686 + 1) = __PAIR64__(v689, v687);
                                                                if ( Sizeb == 1 )
                                                                {
                                                                  v690 = 150;
                                                                  v1455 = 150;
                                                                  v1436 = 32;
                                                                }
                                                                else
                                                                {
                                                                  v690 = 0;
                                                                  if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                  {
                                                                    v1455 = 0;
                                                                    v1436 = 0;
                                                                  }
                                                                }
                                                                v691 = v687 - v690;
                                                                v1670.m128i_i32[2] = v691;
                                                                v1669.m128i_i32[2] = v691;
                                                                v692 = v1662;
                                                                v1359 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808C03B8)(
                                                                                   v1421,
                                                                                   v1665);
                                                                v693 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                                                                         v1421,
                                                                         v692,
                                                                         0xFFFFFFFFLL,
                                                                         &v1669,
                                                                         3152,
                                                                         0LL);
                                                                v579 = v693 == 0 ? 0x80004005 : 0;
                                                                if ( v1359 )
                                                                  ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808C03B8)(
                                                                    v1421,
                                                                    v1359);
                                                                if ( !v693 )
                                                                  goto LABEL_862;
                                                                v694 = v1663;
                                                                v1360 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_1808C03B8)(
                                                                                   v1421,
                                                                                   v1666);
                                                                v695 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __m128i *, int, _QWORD))off_1808C0418)(
                                                                         v1421,
                                                                         v694,
                                                                         0xFFFFFFFFLL,
                                                                         &v1670,
                                                                         3152,
                                                                         0LL);
                                                                v579 = v695 == 0 ? 0x80004005 : 0;
                                                                if ( v1360 )
                                                                  ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1808C03B8)(
                                                                    v1421,
                                                                    v1360);
                                                                if ( !v695 )
                                                                  goto LABEL_862;
                                                                v696 = Sizeb;
                                                                if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                {
                                                                  v691 = v1670.m128i_i32[2];
                                                                  if ( v1669.m128i_i32[2] > v1670.m128i_i32[2] )
                                                                    v691 = v1669.m128i_i32[2];
                                                                }
                                                                if ( v1660 )
                                                                {
                                                                  off_1808C0490(
                                                                    (CToastCenterExperienceManager *)&v1669,
                                                                    (struct CSingleViewShellExperience *)(unsigned int)(v691 - v1669.m128i_i32[2]));
                                                                  v697 = (unsigned int)(v691 - v1670.m128i_i32[2]);
                                                                }
                                                                else
                                                                {
                                                                  off_1808C0490(
                                                                    (CToastCenterExperienceManager *)&v1669,
                                                                    (struct CSingleViewShellExperience *)v1455);
                                                                  v697 = v1455;
                                                                }
                                                                ((void (__fastcall *)(__m128i *, __int64, _QWORD))off_1808C0490)(
                                                                  &v1670,
                                                                  v697,
                                                                  (unsigned int)(v1436 + v1669.m128i_i32[3]));
                                                                if ( (unsigned int)(Sizeb - 2) <= 1 )
                                                                {
                                                                  *((_QWORD *)&v1686 + 1) = __PAIR64__(
                                                                                              v1670.m128i_u32[3],
                                                                                              v691);
                                                                  v1668 = -5723992;
                                                                }
                                                                else if ( Sizeb == 1 )
                                                                {
                                                                  v1668 = 0xFFFFFF;
                                                                  memset_0(v1718, 0, 0x5CuLL);
                                                                  v579 = 0;
                                                                  v698 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C0438[0])(
                                                                           0LL,
                                                                           0LL,
                                                                           1027LL);
                                                                  if ( v698 )
                                                                  {
                                                                    v1718[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1808C03F8)(
                                                                                       11LL,
                                                                                       v1273);
                                                                    v1718[4] = 400;
                                                                    v1719 = 5;
                                                                    StringCchCopyW((char *)v1720, 32LL, (char *)v1404);
                                                                    v700 = ((__int64 (__fastcall *)(_DWORD *))off_1808C0360[0])(v1718);
                                                                    if ( v700 )
                                                                    {
                                                                      v1667 = v700;
                                                                    }
                                                                    else
                                                                    {
                                                                      v579 = GetLastError();
                                                                      v701 = v579 < 0;
                                                                      if ( v579 > 0 )
                                                                      {
                                                                        v579 = (unsigned __int16)v579 | 0x80070000;
                                                                        v701 = v579 < 0;
                                                                      }
                                                                      if ( !v701 )
                                                                        v579 = -2147467259;
                                                                    }
                                                                    ((void (__fastcall *)(_QWORD, __int64))off_1808C04A0[0])(
                                                                      0LL,
                                                                      v698);
                                                                  }
                                                                  else
                                                                  {
                                                                    v579 = GetLastError();
                                                                    v699 = v579 < 0;
                                                                    if ( v579 > 0 )
                                                                    {
                                                                      v579 = (unsigned __int16)v579 | 0x80070000;
                                                                      v699 = v579 < 0;
                                                                    }
                                                                    if ( !v699 )
                                                                    {
LABEL_861:
                                                                      v579 = -2147467259;
LABEL_862:
                                                                      ((void (__fastcall *)(_QWORD, LPCWSTR))off_1808C04A0[0])(
                                                                        0LL,
                                                                        v1421);
                                                                      goto LABEL_863;
                                                                    }
                                                                  }
                                                                  if ( v579 < 0 )
                                                                    goto LABEL_862;
                                                                  v1673 = v691;
                                                                  v702 = v1664;
                                                                  v703 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1808C03B8)(
                                                                           v1421,
                                                                           v1667);
                                                                  v704 = ((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1808C0418)(
                                                                           v1421,
                                                                           v702,
                                                                           0xFFFFFFFFLL,
                                                                           &v1671,
                                                                           1120,
                                                                           0LL);
                                                                  v579 = v704 == 0 ? 0x80004005 : 0;
                                                                  if ( v703 )
                                                                    ((void (__fastcall *)(LPCWSTR, __int64))off_1808C03B8)(
                                                                      v1421,
                                                                      v703);
                                                                  if ( !v704 )
                                                                    goto LABEL_862;
                                                                  v705 = v1673 + 24;
                                                                  if ( (int)(v1673 + 24) < 90 )
                                                                    v705 = 90;
                                                                  v1673 = v705;
                                                                  v1674 = 32;
                                                                  v1671 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                            v1671,
                                                                            v1273,
                                                                            96LL);
                                                                  v1672 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                            v1672,
                                                                            v1273,
                                                                            96LL);
                                                                  v1673 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                            v1673,
                                                                            v1273,
                                                                            96LL);
                                                                  v1674 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1808C03F8)(
                                                                            v1674,
                                                                            v1273,
                                                                            96LL);
                                                                  if ( v1660 )
                                                                  {
                                                                    v706 = v1669.m128i_u32[0];
                                                                    if ( v1669.m128i_i32[0] >= v1670.m128i_i32[0] )
                                                                      v706 = v1670.m128i_u32[0];
                                                                  }
                                                                  else
                                                                  {
                                                                    v707 = v1669.m128i_i32[2];
                                                                    if ( v1669.m128i_i32[2] <= v1670.m128i_i32[2] )
                                                                      v707 = v1670.m128i_i32[2];
                                                                    v706 = v1671 + v707 - v1673;
                                                                  }
                                                                  off_1808C0490(
                                                                    (CToastCenterExperienceManager *)&v1671,
                                                                    (struct CSingleViewShellExperience *)v706);
                                                                  v696 = Sizeb;
                                                                }
                                                                v1275 = v1660;
                                                                v708 = HIDWORD(v1686);
                                                                v709 = DWORD2(v1686);
                                                                v710 = v696 - 1;
                                                                if ( !v710 )
                                                                {
                                                                  *(_QWORD *)&v1686 = 0LL;
                                                                  goto LABEL_960;
                                                                }
                                                                v711 = v710 - 1;
                                                                if ( v711 )
                                                                {
                                                                  if ( v711 != 1 )
                                                                    goto LABEL_960;
                                                                  v1692 = 0LL;
                                                                  v1693 = 0LL;
                                                                  v1694 = 0LL;
                                                                  v712 = (CToastCenterExperienceManager *)off_1808C0488[0](0LL, (struct CSingleViewShellExperience *)1);
                                                                  LODWORD(v1692) = 40;
                                                                  if ( !(unsigned int)off_1808C0448(
                                                                                        v712,
                                                                                        (struct CSingleViewShellExperience *)&v1692) )
                                                                    goto LABEL_960;
                                                                  off_1808C0480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1693 + 4));
                                                                  off_1808C0480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1693 + 12));
                                                                  v713 = 50 * (HIDWORD(v1693) - v709) / 100;
                                                                  v714 = 50 * (v1694 - v708);
                                                                }
                                                                else
                                                                {
                                                                  v1689 = 0LL;
                                                                  v1690 = 0LL;
                                                                  v1691 = 0LL;
                                                                  v715 = (CToastCenterExperienceManager *)off_1808C0488[0](0LL, (struct CSingleViewShellExperience *)1);
                                                                  LODWORD(v1689) = 40;
                                                                  if ( !(unsigned int)off_1808C0448(
                                                                                        v715,
                                                                                        (struct CSingleViewShellExperience *)&v1689) )
                                                                    goto LABEL_960;
                                                                  off_1808C0480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1690 + 4));
                                                                  off_1808C0480[0](
                                                                    0LL,
                                                                    (struct CSingleViewShellExperience *)((char *)&v1690 + 12));
                                                                  if ( v1275 )
                                                                    v713 = DWORD1(v1690) + 5 * HIDWORD(v1690) / 100;
                                                                  else
                                                                    v713 = 95 * (HIDWORD(v1690) - v709) / 100;
                                                                  v714 = 95 * (v1691 - v708);
                                                                }
                                                                LODWORD(v1686) = v713;
                                                                DWORD1(v1686) = v714 / 100;
LABEL_960:
                                                                v579 = 0;
                                                                goto LABEL_862;
                                                              }
                                                              if ( Sizeb != 3 )
                                                                goto LABEL_909;
                                                            }
                                                            v687 = DWORD2(v1621);
                                                            v689 = HIDWORD(v1621);
                                                            goto LABEL_909;
                                                          }
                                                          v1351 = 15;
                                                        }
                                                        v1308 = 11;
                                                        goto LABEL_851;
                                                      }
                                                      v579 = -2147024882;
                                                      v603 = v1403;
                                                    }
                                                    v640 = 0LL;
                                                    goto LABEL_826;
                                                  }
                                                  v579 = GetLastError();
                                                  v590 = v579 < 0;
                                                  if ( v579 > 0 )
                                                  {
                                                    v579 = (unsigned __int16)v579 | 0x80070000;
                                                    v590 = v579 < 0;
                                                  }
                                                  if ( !v590 )
                                                    v579 = -2147467259;
                                                }
                                                else
                                                {
                                                  v579 = -2147024882;
                                                }
                                                v577 = 0;
                                                goto LABEL_743;
                                              }
                                              v520 = dword_1808CCC34;
LABEL_727:
                                              dword_1808CCC34 = v520 + 1;
                                              goto LABEL_728;
                                            }
                                            v463 = dword_1808CCC34;
LABEL_679:
                                            dword_1808CCC34 = v463 + 1;
                                            goto LABEL_680;
                                          }
                                          v1234 = 0;
                                          v185 = 0LL;
                                          if ( v182 )
                                          {
                                            do
                                              v184 ^= v181[v185++];
                                            while ( v185 < v182 );
                                            v1234 = v184;
                                          }
                                          v1675 = 0xC81ECB17B1B54A58uLL;
                                          v186 = v181;
                                          v1263 = (SIZE_T)v183;
                                          v187 = 0;
                                          v188 = -1;
                                          v1477 = 0;
                                          v1442 = 0;
                                          v189 = v182 & 7;
                                          if ( v189 )
                                          {
                                            v1477 = 0;
                                            v190 = 0;
                                            v191 = 0;
                                            v192 = 56;
                                            v193 = v1386;
                                            do
                                            {
                                              v194 = *v186;
                                              if ( v191 >= 4 )
                                              {
                                                v195 = (v194 << v192) | v1477;
                                                v1477 = v195;
                                              }
                                              else
                                              {
                                                v190 |= v194 << (v192 - 32);
                                                v195 = v1477;
                                              }
                                              ++v186;
                                              ++v191;
                                              v192 -= 8;
                                            }
                                            while ( (int)v191 < (int)v189 );
                                            v187 = v190 ^ 0xB17A307A;
                                            v196 = v195 ^ 0x42F6B18D;
                                            v197 = v190 ^ 0xB17A307A;
                                            v198 = v195 ^ 0x42F6B18D;
                                            v199 = 0;
                                            v200 = (char *)v1263;
                                            do
                                            {
                                              v1386 = v193;
                                              v1477 = v195;
                                              if ( v199 >= 4 )
                                              {
                                                v198 = (v198 << 8) | HIBYTE(v198);
                                                v201 = v198;
                                              }
                                              else
                                              {
                                                v197 = (v197 << 8) | HIBYTE(v197);
                                                v201 = v197;
                                              }
                                              *v200 = v201;
                                              ++v199;
                                              ++v200;
                                              v193 = v1386;
                                              v195 = v1477;
                                            }
                                            while ( v199 < (int)v189 );
                                            v1442 = v190;
                                            v1466 = v181;
                                            lpModuleNamea = v104;
                                            v1326 = (SIZE_T)v102;
                                            v183 = v200;
                                            v98 = v1469;
                                            if ( v189 <= 4 )
                                            {
                                              v188 = 0;
                                              if ( v189 < 4 )
                                                v187 = v187 >> (8 * (4 - v189)) << (8 * (4 - v189));
                                            }
                                            else
                                            {
                                              v188 = v196 >> (8 * (8 - v189)) << (8 * (8 - v189));
                                            }
                                          }
                                          if ( (unsigned __int64)v1435 >> 3 )
                                          {
                                            v202 = HIDWORD(v1675);
                                            v1451 = WORD1(v1675);
                                            v1300 = WORD2(v1675);
                                            v1345 = HIWORD(v1675);
                                            lpMem = v183 + 7;
                                            v203 = v186 + 2;
                                            v204 = v1442;
                                            v205 = v1477;
                                            v206 = (unsigned __int64)v1435 >> 3;
                                            v207 = HIDWORD(v1675) ^ 0xB1B54A58;
                                            do
                                            {
                                              v208 = v203[1] | ((*v203 | ((*(v203 - 1) | (*(v203 - 2) << 8)) << 8)) << 8);
                                              v209 = v203[5] | ((v203[4] | ((v203[3] | (v203[2] << 8)) << 8)) << 8);
                                              v210 = v209 ^ v188;
                                              v211 = v202 ^ (v210 - 19032) ^ v208 ^ v187;
                                              v212 = (WORD1(v1675) * __ROR4__(v202 ^ v211, 15) + __ROR4__(v211, 7)) ^ v210;
                                              v213 = (v1300 * __ROR4__(v212 - 1313519016, 9) - __ROR4__(v212, 10)) ^ v211;
                                              v214 = (v1345 * __ROR4__(v1300 ^ v213, 28) + __ROR4__(v213, 27)) ^ v212;
                                              v215 = (v202 - (v214 ^ 0xB1B54A58)) ^ v213;
                                              v216 = (WORD1(v1675) * (v215 - 19032) - (v215 >> 6)) ^ v214;
                                              v217 = (19032 * (v1300 ^ __ROR4__(v216, 15))) ^ v215;
                                              v218 = (v1300 * (HIWORD(v1675) + __ROR4__(~v217, 3))) ^ v216;
                                              v219 = (v218 - 19032 - v202) ^ v217;
                                              v220 = (v1451 * (v1345 ^ v219)) ^ __ROR4__(v219, 10) ^ v218;
                                              v221 = (v1300 * __ROR4__(v220 ^ 0x4A58, 26)) ^ __ROR4__(v220, 3) ^ v219;
                                              v222 = (19032 * (__ROR4__(v221, 15) - HIWORD(v1675))) ^ v220;
                                              v223 = (v222 >> 15) ^ (19032
                                                                   * ((8 * (v222 - v1300)) | ((v222 - v1300) >> 29))) ^ (v222 >> 1) ^ (19032 * (HIWORD(v1675) ^ v222)) ^ v221;
                                              v224 = (WORD1(v1675) * (v223 - v1300) - (v223 >> 13)) ^ v222;
                                              v225 = (v1300 * __ROR4__(-1313519016 - v224, 9)) ^ __ROR4__(v224, 11) ^ v223;
                                              v226 = (v225 + 1313519016 - HIWORD(v1675)) ^ v224;
                                              v227 = (19032 * (v1451 ^ v226) - __ROR4__(v226, 7)) ^ v225;
                                              v228 = (v1451 * __ROR4__(HIWORD(v1675) ^ v227, 28) - __ROR4__(v227, 16)) ^ v226;
                                              v229 = (v1300 * __ROR4__(-1313519016 - v228, 10) + __ROR4__(v228, 4)) ^ v227;
                                              v230 = (HIWORD(v1675) * __ROR4__(v229 + 1313519016, 4)) ^ __ROR4__(v229, 9) ^ v228;
                                              v231 = (19032 * __ROR4__(v202 ^ v230, 24) - __ROR4__(v230, 30)) ^ v229;
                                              v232 = (__ROR4__(v202 - v231, 11) * WORD1(v1675) - __ROR4__(v231, 12)) ^ v230;
                                              v233 = (v232 >> 8) ^ (v1300 * (WORD1(v1675) ^ v232)) ^ v231;
                                              v234 = v233 ^ v207 ^ v232;
                                              v187 = v204 ^ v233;
                                              v188 = v205 ^ v234;
                                              *(lpMem - 4) = v187;
                                              *lpMem = v188;
                                              *(lpMem - 5) = BYTE1(v187);
                                              *(lpMem - 1) = BYTE1(v188);
                                              *(lpMem - 6) = (unsigned __int16)(v187 >> 8) >> 8;
                                              *(lpMem - 2) = (unsigned __int16)(v188 >> 8) >> 8;
                                              *(lpMem - 7) = __ROR4__(
                                                               (((v187 >> 8) | (v187 << 24)) >> 8) | (((v187 >> 8) | (v187 << 24)) << 24),
                                                               8);
                                              *(lpMem - 3) = __ROR4__(
                                                               (((v188 >> 8) | (v188 << 24)) >> 8) | (((v188 >> 8) | (v188 << 24)) << 24),
                                                               8);
                                              v204 = v208;
                                              v205 = v209;
                                              lpMem += 8;
                                              --v206;
                                              v202 = HIDWORD(v1675);
                                              v203 += 8;
                                            }
                                            while ( v206 );
                                            v102 = (_QWORD *)v1326;
                                            v104 = (WCHAR *)lpModuleNamea;
                                            v98 = v1469;
                                            v181 = (unsigned __int8 *)v1466;
                                          }
                                          *(_QWORD *)((char *)v1467 + v1435) = v1234;
                                          v235 = GetProcessHeap();
                                          v236 = HeapAlloc(v235, 8u, 0x30uLL);
                                          if ( v236 )
                                          {
                                            *(_DWORD *)v236 = v1472;
                                            v237 = GetProcessHeap();
                                            v238 = HeapAlloc(v237, 8u, (unsigned int)v1472);
                                            if ( v238 )
                                            {
                                              *((_QWORD *)v236 + 1) = v238;
                                              memcpy_0(v238, v1467, (unsigned int)v1472);
                                              v1466 = v181;
                                              lpMema = v181;
                                              *((_DWORD *)v236 + 4) = 160;
                                              v239 = GetProcessHeap();
                                              v240 = HeapAlloc(v239, 8u, 0xA0uLL);
                                              if ( v240 )
                                              {
                                                *((_QWORD *)v236 + 3) = v240;
                                                v1466 = v181;
                                                v241 = (_OWORD *)*((_QWORD *)v236 + 3);
                                                *v241 = xmmword_1808C7470[0];
                                                v241[1] = xmmword_1808C7470[1];
                                                v241[2] = xmmword_1808C7470[2];
                                                v241[3] = xmmword_1808C7470[3];
                                                v241[4] = xmmword_1808C7470[4];
                                                v241[5] = xmmword_1808C7470[5];
                                                v241[6] = xmmword_1808C7470[6];
                                                v241[7] = xmmword_1808C7470[7];
                                                v241[8] = xmmword_1808C7470[8];
                                                v2 = xmmword_1808C7470[9];
                                                v241[9] = v2;
                                                *((_DWORD *)v236 + 8) = 8;
                                                v242 = GetProcessHeap();
                                                v243 = HeapAlloc(v242, 8u, 8uLL);
                                                v244 = 0;
                                                if ( v243 )
                                                {
                                                  *((_QWORD *)v236 + 5) = v243;
                                                  **((_QWORD **)v236 + 5) = qword_1808C7460;
LABEL_312:
                                                  v1471 = v236;
                                                  v249 = GetProcessHeap();
                                                  HeapFree(v249, 0, v1467);
                                                  v1472 = (SIZE_T)v236;
                                                  v100 = v244 | 0x10000000;
                                                  v1477 = v100;
                                                  if ( v100 >= 0 )
                                                  {
                                                    v1511 = 0;
                                                    v1512 = 4;
                                                    v251 = RtlUIntAdd(4u, *(_DWORD *)v236, (int *)&v1512);
                                                    if ( v251 >= 0 )
                                                    {
                                                      v251 = RtlUIntAdd(v1512, v250, (int *)&v1512);
                                                      if ( v251 >= 0 )
                                                      {
                                                        v251 = RtlUIntAdd(v1512, *((_DWORD *)v236 + 4), (int *)&v1512);
                                                        if ( v251 >= 0 )
                                                        {
                                                          v251 = RtlUIntAdd(v1512, v252, (int *)&v1512);
                                                          if ( v251 >= 0 )
                                                          {
                                                            v251 = RtlUIntAdd(
                                                                     v1512,
                                                                     *((_DWORD *)v236 + 8),
                                                                     (int *)&v1512);
                                                            if ( v251 >= 0 )
                                                            {
                                                              v1511 = v1512;
                                                              v253 = v1512;
                                                              v254 = GetProcessHeap();
                                                              v255 = (WCHAR *)HeapAlloc(v254, 8u, v253);
                                                              v1354 = v255;
                                                              if ( !v255 )
                                                              {
                                                                v100 = -805306345;
                                                                goto LABEL_333;
                                                              }
                                                              v1561 = v255;
                                                              v256 = (const void **)v1471;
                                                              *(_DWORD *)v255 = *(_DWORD *)v1471;
                                                              v251 = RtlULongLongAdd(
                                                                       (unsigned __int64)v255,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v1264 = v257;
                                                              if ( v251 < 0 )
                                                                goto LABEL_326;
                                                              memcpy_0(v1561, v256[1], *(unsigned int *)v256);
                                                              v251 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1561,
                                                                       *(unsigned int *)v256,
                                                                       (__int64 *)&v1561);
                                                              v257 = v1354;
                                                              v1264 = v1354;
                                                              if ( v251 < 0 )
                                                                goto LABEL_326;
                                                              v258 = v1561;
                                                              *(_DWORD *)v1561 = *((_DWORD *)v256 + 4);
                                                              v251 = RtlULongLongAdd(
                                                                       (unsigned __int64)v258,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v257 = v259;
                                                              v1264 = v259;
                                                              if ( v251 < 0 )
                                                                goto LABEL_326;
                                                              memcpy_0(v1561, v256[3], *((unsigned int *)v256 + 4));
                                                              v251 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1561,
                                                                       *((unsigned int *)v256 + 4),
                                                                       (__int64 *)&v1561);
                                                              v257 = v1354;
                                                              v1264 = v1354;
                                                              if ( v251 < 0 )
                                                                goto LABEL_326;
                                                              v260 = v1561;
                                                              *(_DWORD *)v1561 = *((_DWORD *)v256 + 8);
                                                              v251 = RtlULongLongAdd(
                                                                       (unsigned __int64)v260,
                                                                       4LL,
                                                                       (__int64 *)&v1561);
                                                              v257 = v261;
                                                              v1264 = v261;
                                                              if ( v251 < 0
                                                                || (memcpy_0(
                                                                      v1561,
                                                                      v256[5],
                                                                      *((unsigned int *)v256 + 8)),
                                                                    v251 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1561,
                                                                             *((unsigned int *)v256 + 8),
                                                                             (__int64 *)&v1561),
                                                                    v257 = v1354,
                                                                    v1264 = v1354,
                                                                    v251 < 0) )
                                                              {
LABEL_326:
                                                                if ( v257 )
                                                                {
                                                                  v262 = GetProcessHeap();
                                                                  HeapFree(v262, 0, v1264);
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1470 = v1354;
                                                                Size = v1511;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    v100 = v251 | 0x10000000;
                                                    v1477 = v100;
                                                    if ( v100 >= 0 )
                                                    {
                                                      v1513 = 8;
                                                      v263 = RtlUIntAdd(8u, v1386, (int *)&v1513);
                                                      v100 = v263 | 0x10000000;
                                                      v1477 = v263 | 0x10000000;
                                                      if ( v263 < 0 )
                                                      {
                                                        v267 = 0LL;
                                                        goto LABEL_335;
                                                      }
                                                      v1514 = 0;
                                                      v266 = (v1513 + 7) & 0xFFFFFFF8;
                                                      if ( v266 < v1513 )
                                                      {
                                                        v100 = -1073741675;
LABEL_333:
                                                        v1477 = v100;
                                                        goto LABEL_334;
                                                      }
                                                      v1514 = (v1513 + 7) & 0xFFFFFFF8;
                                                      v1470 = v264;
                                                      v1466 = v265;
                                                      v291 = (void *)v1472;
                                                      v1471 = (LPVOID)v1472;
                                                      v100 = RtlUIntAdd(v266, 8, (int *)&v1514);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                      {
                                                        v268 = (SIZE_T)v293;
                                                        v267 = 0LL;
                                                        goto LABEL_336;
                                                      }
                                                      v1471 = v291;
                                                      v294 = v293;
                                                      v1466 = v293;
                                                      v1470 = v292;
                                                      v267 = 0LL;
                                                      if ( !Src[1] )
                                                      {
LABEL_382:
                                                        v100 = -1073741811;
LABEL_383:
                                                        v1477 = v100;
                                                        goto LABEL_335;
                                                      }
                                                      v1471 = v291;
                                                      v1470 = v292;
                                                      if ( LODWORD(Src[0]) <= 1 )
                                                      {
                                                        v100 = -1073741811;
                                                        v1477 = -1073741811;
                                                        v268 = (SIZE_T)v1466;
                                                        goto LABEL_336;
                                                      }
                                                      v295 = (unsigned int *)Src[1];
                                                      v1562 = (unsigned int *)Src[1];
                                                      v1327 = (SIZE_T)v102;
                                                      lpModuleNameb = v104;
                                                      v1466 = v294;
                                                      do
                                                      {
                                                        v296 = *v295;
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v295,
                                                                 4LL,
                                                                 (__int64 *)&v1562);
                                                        v1477 = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_334;
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1562,
                                                                 v296,
                                                                 (__int64 *)&v1562);
                                                        v1477 = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_334;
                                                        v295 = v1562;
                                                      }
                                                      while ( v297 == -1 );
                                                      v1265 = *v1562;
                                                      v100 = RtlULongLongAdd(
                                                               (unsigned __int64)v1562,
                                                               4LL,
                                                               (__int64 *)&v1562);
                                                      v1477 = v100;
                                                      v267 = 0LL;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v298;
                                                      if ( !Src[1] )
                                                        goto LABEL_382;
                                                      v1470 = v298;
                                                      if ( LODWORD(Src[0]) <= 2 )
                                                        goto LABEL_382;
                                                      v299 = Src[1];
                                                      v1563 = Src[1];
                                                      for ( kk = 0; kk < 2; ++kk )
                                                      {
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v299,
                                                                 4LL,
                                                                 (__int64 *)&v1563);
                                                        v1477 = v100;
                                                        if ( v100 < 0 )
                                                          goto LABEL_334;
                                                        v100 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1563,
                                                                 v301,
                                                                 (__int64 *)&v1563);
                                                        v1477 = v100;
                                                        v267 = 0LL;
                                                        if ( v100 < 0 )
                                                          goto LABEL_335;
                                                        v299 = v1563;
                                                      }
                                                      v302 = *v1563;
                                                      v100 = RtlULongLongAdd(
                                                               (unsigned __int64)v1563,
                                                               4LL,
                                                               (__int64 *)&v1563);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v303;
                                                      v1515 = 4;
                                                      v100 = RtlUIntAdd((int)v267 + 4, v1514, (int *)&v1515);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v100 = RtlUIntAdd(v1515, v304, (int *)&v1515);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v100 = RtlUIntAdd(v1515, v1265, (int *)&v1515);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v100 = RtlUIntAdd(v1515, (int)v267 + 4, (int *)&v1515);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v100 = RtlUIntAdd(v1515, v302, (int *)&v1515);
                                                      v1477 = v100;
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v1470 = v305;
                                                      if ( v1515 > 0x400000 )
                                                      {
                                                        v100 = -2147418113;
                                                        goto LABEL_383;
                                                      }
                                                      v1462 = v1515;
                                                      v306 = v1515;
                                                      v307 = GetProcessHeap();
                                                      v308 = (WCHAR *)HeapAlloc(v307, 8u, v306);
                                                      v309 = 0LL;
                                                      v267 = 0LL;
                                                      if ( v308 )
                                                        v309 = v308;
                                                      v1419 = v309;
                                                      v100 = v308 != 0LL ? 0x10000000 : -805306345;
                                                      v1477 = v100;
                                                      if ( !v308 )
                                                        goto LABEL_335;
                                                      v1630 = 0LL;
                                                      v1631 = 0LL;
                                                      phModule = 0LL;
                                                      if ( !v1470 || !v309 )
                                                      {
                                                        v100 = -2147024809;
                                                        goto LABEL_383;
                                                      }
                                                      *(_QWORD *)&v1630 = v1470;
                                                      LODWORD(v1631) = Size;
                                                      *((_QWORD *)&v1630 + 1) = v309;
                                                      *(_QWORD *)((char *)&v1631 + 4) = v1462;
                                                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                        && (v311 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                                      {
                                                        v312 = ((__int64 (__fastcall *)(__int64, __int128 *))v311)(
                                                                 134LL,
                                                                 &v1630);
                                                        v100 = v312 | 0x10000000;
                                                        v1477 = v312 | 0x10000000;
                                                        if ( v312 >= 0 )
                                                        {
                                                          v313 = DWORD1(v1631);
                                                          v267 = 0LL;
                                                          goto LABEL_428;
                                                        }
                                                        v267 = 0LL;
                                                      }
                                                      else
                                                      {
                                                        v310 = GetLastError();
                                                        v267 = 0LL;
                                                        v1477 = v310;
                                                        v100 = v310;
                                                        if ( v310 > 0 )
                                                        {
                                                          v100 = (unsigned __int16)v310 | 0x80070000;
                                                          v1477 = v100;
                                                        }
                                                        if ( v100 >= 0 )
                                                        {
                                                          v100 = -2147467259;
                                                          v1477 = -2147467259;
                                                        }
                                                      }
                                                      if ( v100 == -805306333 )
                                                      {
                                                        v100 = -2147024774;
                                                        goto LABEL_383;
                                                      }
                                                      if ( v100 < 0 )
                                                        goto LABEL_335;
                                                      v313 = v1462;
LABEL_428:
                                                      lpMeml = 0LL;
                                                      v1516 = 0;
                                                      v1565 = v309;
                                                      if ( v313 < 4 )
                                                      {
LABEL_429:
                                                        v100 = -805306306;
                                                        goto LABEL_383;
                                                      }
                                                      v1266 = *(_DWORD *)v309;
                                                      v314 = RtlULongLongAdd(
                                                               (unsigned __int64)v309,
                                                               4LL,
                                                               (__int64 *)&v1565);
                                                      if ( v314 >= 0 )
                                                      {
                                                        v314 = RtlUIntAdd(0, 4, (int *)&v1516);
                                                        if ( v314 < 0 )
                                                        {
                                                          v343 = v315;
                                                          goto LABEL_486;
                                                        }
                                                        if ( v317 - v1516 < v316 )
                                                          goto LABEL_429;
                                                        v1310 = v1565;
                                                        v314 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1565,
                                                                 v316,
                                                                 (__int64 *)&v1565);
                                                        if ( v314 >= 0 )
                                                        {
                                                          v314 = RtlUIntAdd(v1516, v318, (int *)&v1516);
                                                          if ( v314 >= 0 )
                                                          {
                                                            if ( v319 - v1516 < 4 )
                                                              goto LABEL_429;
                                                            v320 = *(_DWORD *)v1565;
                                                            v1346 = *(_DWORD *)v1565;
                                                            v314 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1565,
                                                                     4LL,
                                                                     (__int64 *)&v1565);
                                                            if ( v314 >= 0 )
                                                            {
                                                              v314 = RtlUIntAdd(v1516, 4, (int *)&v1516);
                                                              if ( v314 >= 0 )
                                                              {
                                                                if ( v321 - v1516 < v320 )
                                                                  goto LABEL_429;
                                                                v1467 = v1565;
                                                                v314 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1565,
                                                                         v320,
                                                                         (__int64 *)&v1565);
                                                                if ( v314 >= 0 )
                                                                {
                                                                  v314 = RtlUIntAdd(v1516, v320, (int *)&v1516);
                                                                  if ( v314 >= 0 )
                                                                  {
                                                                    if ( v322 - v1516 < 4 )
                                                                      goto LABEL_429;
                                                                    v1301 = *(_DWORD *)v1565;
                                                                    v314 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1565,
                                                                             4LL,
                                                                             (__int64 *)&v1565);
                                                                    if ( v314 >= 0 )
                                                                    {
                                                                      v314 = RtlUIntAdd(v1516, 4, (int *)&v1516);
                                                                      if ( v314 >= 0 )
                                                                      {
                                                                        if ( v324 - v1516 < v323 )
                                                                        {
LABEL_445:
                                                                          v100 = -805306306;
                                                                          goto LABEL_333;
                                                                        }
                                                                        v314 = RtlUIntAdd(v1516, v323, (int *)&v1516);
                                                                        if ( v314 >= 0 )
                                                                        {
                                                                          if ( v327 != v1516
                                                                            || v325 + v326 + v320 + 12LL != v327 )
                                                                          {
                                                                            goto LABEL_445;
                                                                          }
                                                                          v328 = GetProcessHeap();
                                                                          v329 = (SIZE_T)HeapAlloc(v328, 8u, 0x30uLL);
                                                                          v1472 = v329;
                                                                          if ( !v329 )
                                                                          {
                                                                            v314 = -1073741801;
                                                                            v332 = v1471;
LABEL_472:
                                                                            v342 = 0LL;
LABEL_473:
                                                                            if ( v314 < 0 )
                                                                            {
                                                                              v343 = 0LL;
                                                                              v1468 = 0LL;
                                                                              if ( v342 )
                                                                              {
                                                                                v1314 = (void *)*((_QWORD *)v342 + 1);
                                                                                if ( v1314 )
                                                                                {
                                                                                  v344 = GetProcessHeap();
                                                                                  HeapFree(v344, 0, v1314);
                                                                                  v342 = lpMeml;
                                                                                  *((_QWORD *)lpMeml + 1) = 0LL;
                                                                                }
                                                                                v1315 = (void *)*((_QWORD *)v342 + 3);
                                                                                if ( v1315 )
                                                                                {
                                                                                  v345 = GetProcessHeap();
                                                                                  HeapFree(v345, 0, v1315);
                                                                                  v342 = lpMeml;
                                                                                  *((_QWORD *)lpMeml + 3) = 0LL;
                                                                                }
                                                                                v1316 = (void *)*((_QWORD *)v342 + 5);
                                                                                if ( v1316 )
                                                                                {
                                                                                  v346 = GetProcessHeap();
                                                                                  HeapFree(v346, 0, v1316);
                                                                                  *((_QWORD *)lpMeml + 5) = 0LL;
                                                                                }
                                                                                v347 = GetProcessHeap();
                                                                                HeapFree(v347, 0, lpMeml);
                                                                                v343 = 0LL;
                                                                                v1468 = 0LL;
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              v343 = v342;
                                                                              v1468 = v342;
                                                                            }
LABEL_487:
                                                                            v100 = v314 | 0x10000000;
                                                                            v1477 = v100;
                                                                            if ( v100 < 0 )
                                                                              goto LABEL_334;
                                                                            if ( !v343
                                                                              || (lpMemm = (unsigned __int8 *)*((_QWORD *)v343 + 1)) == 0LL
                                                                              || !*(_DWORD *)v343 )
                                                                            {
                                                                              v100 = -805306355;
                                                                              goto LABEL_333;
                                                                            }
                                                                            v348 = *(_DWORD *)v343 - 8;
                                                                            v1317 = *(unsigned int *)v343 - 8LL;
                                                                            v349 = (char *)MemoryAlloc(v1317);
                                                                            v350 = v349;
                                                                            v1467 = v349;
                                                                            v267 = 0LL;
                                                                            if ( !v349 )
                                                                              goto LABEL_518;
                                                                            v351 = 0;
                                                                            v1676 = 0x7F1137FAB69605ELL;
                                                                            v352 = lpMemm;
                                                                            v1472 = (SIZE_T)lpMemm;
                                                                            v1355 = (WCHAR *)v349;
                                                                            v353 = v348 & 7;
                                                                            v354 = v1468;
                                                                            if ( (v348 & 7) != 0 )
                                                                            {
                                                                              v1347 = 0;
                                                                              v1302 = 0;
                                                                              v355 = 56;
                                                                              v1452 = 56;
                                                                              v356 = v1466;
                                                                              v357 = 0;
                                                                              while ( 1 )
                                                                              {
                                                                                v358 = *v352;
                                                                                if ( v1302 >= 4 )
                                                                                {
                                                                                  v357 |= v358 << v355;
                                                                                  v359 = v1347;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v359 = (v358 << (v355 - 32)) | v1347;
                                                                                  v1347 = v359;
                                                                                }
                                                                                ++v352;
                                                                                ++v1302;
                                                                                v1452 -= 8;
                                                                                if ( (int)v1302 >= v353 )
                                                                                  break;
                                                                                v355 = v1452;
                                                                              }
                                                                              v1472 = (SIZE_T)v352;
                                                                              v360 = v359 ^ 0x92F65A5;
                                                                              v361 = v357;
                                                                              v362 = v357 ^ 0x699A899C;
                                                                              v363 = v359 ^ 0x92F65A5;
                                                                              v1267 = v357 ^ 0x699A899C;
                                                                              v1303 = 0;
                                                                              v364 = v1472;
                                                                              do
                                                                              {
                                                                                v1466 = v356;
                                                                                if ( v1303 >= 4 )
                                                                                {
                                                                                  v365 = (v1267 << 8) | HIBYTE(v1267);
                                                                                  v1267 = v365;
                                                                                }
                                                                                else
                                                                                {
                                                                                  v363 = (v363 << 8) | HIBYTE(v363);
                                                                                  LOBYTE(v365) = v363;
                                                                                }
                                                                                *(_BYTE *)v1355 = v365;
                                                                                ++v1303;
                                                                                v366 = (char *)v1355 + 1;
                                                                                v1355 = (WCHAR *)((char *)v1355 + 1);
                                                                                v98 = v1469;
                                                                                v356 = v1466;
                                                                              }
                                                                              while ( v1303 < v353 );
                                                                              v1268 = v361;
                                                                              v1472 = v364;
                                                                              v1468 = v354;
                                                                              v1471 = v332;
                                                                              lpModuleNameb = v104;
                                                                              v1327 = (SIZE_T)v102;
                                                                              v349 = v366;
                                                                              v351 = 0;
                                                                              v350 = v1467;
                                                                              v367 = v1347;
                                                                              if ( (unsigned int)v353 <= 4 )
                                                                              {
                                                                                v368 = 0;
                                                                                if ( (unsigned int)v353 < 4 )
                                                                                  v360 = v360 >> (8 * (4 - v353)) << (8 * (4 - v353));
                                                                              }
                                                                              else
                                                                              {
                                                                                v368 = v362 >> (8 * (8 - v353)) << (8 * (8 - v353));
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              v367 = 0;
                                                                              v1268 = -1;
                                                                              v368 = 0;
                                                                              v360 = 0;
                                                                            }
                                                                            if ( v1317 >> 3 )
                                                                            {
                                                                              v369 = HIDWORD(v1676);
                                                                              v1304 = WORD1(v1676);
                                                                              v1443 = HIWORD(v1676);
                                                                              v370 = v349 + 7;
                                                                              v371 = (unsigned __int8 *)(v1472 + 2);
                                                                              v372 = v1268;
                                                                              v373 = v1317 >> 3;
                                                                              v374 = WORD2(v1676);
                                                                              do
                                                                              {
                                                                                v375 = v371[1] | ((*v371 | ((*(v371 - 1) | (*(v371 - 2) << 8)) << 8)) << 8);
                                                                                v376 = v371[5] | ((v371[4] | ((v371[3] | (v371[2] << 8)) << 8)) << 8);
                                                                                v377 = v375 ^ v360;
                                                                                v371 += 8;
                                                                                v378 = v377 ^ v369 ^ 0xAB69605E ^ v376 ^ v368;
                                                                                v379 = (v374
                                                                                      * __ROR4__(v378 + 1419157410, 27)
                                                                                      + __ROR4__(v378, 22)) ^ v377;
                                                                                v380 = (v1304 * __ROR4__(v379 + v369, 9)
                                                                                      - __ROR4__(v379, 30)) ^ v378;
                                                                                v381 = (24670 * (v380 - v374)
                                                                                      - (v380 >> 13)) ^ v379;
                                                                                v382 = (v1443
                                                                                      * __ROR4__(
                                                                                          WORD1(v1676) ^ v381,
                                                                                          26)
                                                                                      - __ROR4__(v381, 30)) ^ v380;
                                                                                v383 = (v369 - (v382 ^ 0xAB69605E)) ^ v381;
                                                                                v384 = (v1304 * (v374 ^ v383)) ^ __ROR4__(v383, 6) ^ v382;
                                                                                v385 = (24670
                                                                                      * __ROR4__(v384 + v369, 15)
                                                                                      + __ROR4__(v384, 30)) ^ v383;
                                                                                v386 = (v1443
                                                                                      * __ROR4__(v385 + 1419157410, 14)
                                                                                      - __ROR4__(v385, 24)) ^ v384;
                                                                                v387 = (v374
                                                                                      * __ROR4__(v386 ^ 0xAB69605E, 12)) ^ __ROR4__(v386, 10) ^ v385;
                                                                                v388 = (v387 >> 10) ^ (WORD1(v1676) * (HIWORD(v1676) ^ v387)) ^ v386;
                                                                                v389 = (HIWORD(v1676)
                                                                                      * (__ROR4__(~v388, 5) + 24670)) ^ v387;
                                                                                v390 = (v389 - HIWORD(v1676)) ^ 0xAB69605E ^ v388;
                                                                                v391 = ((v390 >> 2)
                                                                                      + v374
                                                                                      * __ROR4__(
                                                                                          HIWORD(v1676) ^ v390,
                                                                                          30)) ^ v389;
                                                                                v392 = (v1304 * __ROR4__(v391 - v369, 6)
                                                                                      + __ROR4__(v391, 25)) ^ v390;
                                                                                v393 = (24670 * (v374 ^ v392)
                                                                                      + __ROR4__(v392, 9)) ^ v391;
                                                                                v394 = (v1443
                                                                                      * __ROR4__(
                                                                                          WORD1(v1676) ^ v393,
                                                                                          27)
                                                                                      + __ROR4__(v393, 25)) ^ v392;
                                                                                v395 = v369 ^ v394 ^ 0xAB69605E ^ v393;
                                                                                v396 = (v374
                                                                                      * (__ROR4__(v395, 3) - WORD1(v1676))) ^ v394;
                                                                                v397 = (24670 * __ROR4__(v396 - v369, 1)
                                                                                      - __ROR4__(v396, 6)) ^ v395;
                                                                                v398 = (v1443
                                                                                      * __ROR4__(v397 - 1419157410, 29)
                                                                                      + __ROR4__(v397, 18)) ^ v396;
                                                                                v399 = (v374
                                                                                      * __ROR4__(v398 - 1419157410, 17)
                                                                                      - __ROR4__(v398, 14)) ^ v397;
                                                                                v400 = (v399 >> 3) ^ (WORD1(v1676) * (v399 ^ 0x605E)) ^ v398;
                                                                                v360 = (24670 * __ROR4__(
                                                                                                  v369 ^ v400,
                                                                                                  28)) ^ __ROR4__(v400, 30) ^ v367 ^ v399;
                                                                                *(v370 - 4) = v360;
                                                                                *v370 = v372 ^ v400;
                                                                                *(v370 - 5) = BYTE1(v360);
                                                                                *(v370 - 1) = (unsigned __int16)(v372 ^ v400) >> 8;
                                                                                *(v370 - 6) = (unsigned __int16)(v360 >> 8) >> 8;
                                                                                *(v370 - 2) = (unsigned __int16)((v372 ^ (unsigned int)v400) >> 8) >> 8;
                                                                                *(v370 - 7) = __ROR4__(
                                                                                                (((v360 >> 8) | (v360 << 24)) >> 8) | (((v360 >> 8) | (v360 << 24)) << 24),
                                                                                                8);
                                                                                *(v370 - 3) = __ROR4__(
                                                                                                ((((v372 ^ (unsigned int)v400) >> 8) | ((v372 ^ v400) << 24)) >> 8) | ((((v372 ^ (unsigned int)v400) >> 8) | ((v372 ^ v400) << 24)) << 24),
                                                                                                8);
                                                                                v368 = v372 ^ v400;
                                                                                v367 = v375;
                                                                                v372 = v376;
                                                                                v370 += 8;
                                                                                --v373;
                                                                              }
                                                                              while ( v373 );
                                                                              v351 = 0;
                                                                              v102 = (_QWORD *)v1327;
                                                                              v104 = (WCHAR *)lpModuleNameb;
                                                                              v98 = v1469;
                                                                              v354 = v1468;
                                                                              v350 = v1467;
                                                                            }
                                                                            for ( mm = 0LL; mm < v1317; ++mm )
                                                                              v351 ^= *((_BYTE *)v350 + mm);
                                                                            v1467 = v1470;
                                                                            v1472 = (SIZE_T)v1466;
                                                                            v402 = v1471;
                                                                            v1328 = v1471;
                                                                            v1468 = v354;
                                                                            if ( v351 != *(_QWORD *)&lpMemm[v1317] )
                                                                            {
                                                                              MemoryFree(v350);
                                                                              v267 = 0LL;
LABEL_518:
                                                                              v1402 = 0LL;
                                                                              v100 = -805306367;
                                                                              goto LABEL_383;
                                                                            }
                                                                            v1517 = 0;
                                                                            v1567 = v350;
                                                                            if ( (unsigned int)v1317 < 4 )
                                                                            {
                                                                              v403 = -1073741762;
                                                                              v1402 = (unsigned __int16 *)v350;
                                                                              v1468 = v354;
                                                                              v268 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
LABEL_521:
                                                                              v267 = 0LL;
LABEL_522:
                                                                              v100 = v403 | 0x10000000;
                                                                              v1477 = v100;
LABEL_336:
                                                                              if ( !v268 )
                                                                                goto LABEL_338;
                                                                              goto LABEL_337;
                                                                            }
                                                                            v1269 = *v350;
                                                                            v403 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v350,
                                                                                     4LL,
                                                                                     (__int64 *)&v1567);
                                                                            v1402 = v404;
                                                                            v1468 = v405;
                                                                            v1471 = v402;
                                                                            v268 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v403 < 0 )
                                                                              goto LABEL_521;
                                                                            v403 = RtlUIntAdd(0, 4, (int *)&v1517);
                                                                            v1402 = v406;
                                                                            v1468 = v407;
                                                                            v1471 = v402;
                                                                            v408 = (void *)v1472;
                                                                            v268 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v409 = v1467;
                                                                            v1470 = v1467;
                                                                            if ( v403 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (unsigned int)v1317 - v1517 < 4 )
                                                                            {
LABEL_526:
                                                                              v1471 = v402;
                                                                              v1468 = v407;
                                                                              v1402 = v406;
                                                                              v403 = -1073741762;
                                                                              v268 = (SIZE_T)v408;
                                                                              v1466 = v408;
                                                                              v1470 = v409;
                                                                              goto LABEL_521;
                                                                            }
                                                                            v1348 = *(_DWORD *)v1567;
                                                                            v403 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v1567,
                                                                                     4LL,
                                                                                     (__int64 *)&v1567);
                                                                            v1402 = v410;
                                                                            v1468 = v411;
                                                                            v1471 = v402;
                                                                            v268 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v403 < 0 )
                                                                              goto LABEL_521;
                                                                            v403 = RtlUIntAdd(v1517, 4, (int *)&v1517);
                                                                            v1402 = v406;
                                                                            v1468 = v407;
                                                                            v1471 = v402;
                                                                            v408 = (void *)v1472;
                                                                            v268 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v409 = v1467;
                                                                            v1470 = v1467;
                                                                            if ( v403 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (unsigned int)v1317 - v1517 < v1348 )
                                                                            {
                                                                              v102 = v412;
                                                                              goto LABEL_526;
                                                                            }
                                                                            v403 = RtlUIntAdd(
                                                                                     v1517,
                                                                                     v1348,
                                                                                     (int *)&v1517);
                                                                            v1402 = v413;
                                                                            v1468 = v414;
                                                                            v1471 = v402;
                                                                            v102 = v415;
                                                                            v268 = v1472;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v403 < 0 )
                                                                              goto LABEL_521;
                                                                            if ( (char *)v413 + (unsigned int)v1317 < (char *)v1567 + v1348
                                                                              || (unsigned int)v1317
                                                                               + (char *)v413
                                                                               - (_BYTE *)v1567
                                                                               - (unsigned __int64)v1348 >= 8 )
                                                                            {
                                                                              v403 = -1073741762;
                                                                              v1402 = v413;
                                                                              v1468 = v414;
                                                                              v1471 = v1328;
                                                                              v268 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              goto LABEL_521;
                                                                            }
                                                                            v1568 = 0LL;
                                                                            v1569 = 0LL;
                                                                            v1570 = 0LL;
                                                                            v403 = 0;
                                                                            v1305 = 0;
                                                                            v1402 = v413;
                                                                            v1468 = v414;
                                                                            v1471 = v1328;
                                                                            v1466 = (LPVOID)v1472;
                                                                            v1470 = v1467;
                                                                            if ( v1567 )
                                                                            {
                                                                              v1318 = v1567;
                                                                              v403 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v1567,
                                                                                       v1348,
                                                                                       (__int64 *)&v1568);
                                                                              v1402 = v416;
                                                                              v1468 = v417;
                                                                              v1471 = v1328;
                                                                              v268 = v1472;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              if ( v403 < 0 )
                                                                                goto LABEL_559;
                                                                              v1402 = v416;
                                                                              v1468 = v417;
                                                                              v1471 = v1328;
                                                                              v1466 = (LPVOID)v1472;
                                                                              v1470 = v1467;
                                                                              v418 = (unsigned __int64)v1318;
                                                                              if ( (unsigned __int64)v1318 < v1568 )
                                                                              {
                                                                                v1402 = v416;
                                                                                v1468 = v417;
                                                                                v1471 = v1328;
                                                                                v1466 = (LPVOID)v1472;
                                                                                v1470 = v1467;
                                                                                v419 = (unsigned __int64)v1318;
                                                                                while ( 1 )
                                                                                {
                                                                                  v1319 = (void *)v268;
                                                                                  v403 = RtlULongLongAdd(
                                                                                           v419,
                                                                                           4LL,
                                                                                           (__int64 *)&v1569);
                                                                                  if ( v403 < 0 )
                                                                                    goto LABEL_559;
                                                                                  if ( v1569 > v1568 )
                                                                                  {
                                                                                    v403 = -1073741811;
LABEL_547:
                                                                                    v268 = (SIZE_T)v1466;
                                                                                    goto LABEL_521;
                                                                                  }
                                                                                  v1518 = 0;
                                                                                  v403 = RtlUIntAdd(
                                                                                           4u,
                                                                                           *v420,
                                                                                           (int *)&v1518);
                                                                                  if ( v403 < 0 )
                                                                                    goto LABEL_547;
                                                                                  v403 = RtlULongLongAdd(
                                                                                           v421,
                                                                                           v1518,
                                                                                           (__int64 *)&v1570);
                                                                                  v1468 = v423;
                                                                                  v1471 = v1328;
                                                                                  v1466 = v1319;
                                                                                  v1470 = v422;
                                                                                  if ( v403 < 0 )
                                                                                    goto LABEL_559;
                                                                                  v419 = v1570;
                                                                                  v424 = v1568;
                                                                                  v1468 = v423;
                                                                                  v268 = (SIZE_T)v1319;
                                                                                  v1470 = v422;
                                                                                  v1471 = v1328;
                                                                                  if ( v1570 > v1568 )
                                                                                  {
                                                                                    v403 = -1073741811;
                                                                                    v1466 = v1319;
                                                                                    goto LABEL_521;
                                                                                  }
                                                                                  ++v1305;
                                                                                  v1466 = v1319;
                                                                                  if ( v1570 >= v1568 )
                                                                                  {
                                                                                    v1468 = v423;
                                                                                    v1471 = v1328;
                                                                                    v268 = (SIZE_T)v1319;
                                                                                    v1466 = v1319;
                                                                                    v1470 = v422;
                                                                                    v418 = v1570;
                                                                                    goto LABEL_549;
                                                                                  }
                                                                                }
                                                                              }
                                                                              v424 = v1568;
LABEL_549:
                                                                              if ( v418 != v424 )
                                                                              {
                                                                                v403 = -1073741811;
                                                                                goto LABEL_521;
                                                                              }
                                                                            }
                                                                            v425 = v1348;
                                                                            if ( !v1348 )
                                                                            {
                                                                              v427 = 0LL;
                                                                              goto LABEL_556;
                                                                            }
                                                                            v426 = GetProcessHeap();
                                                                            v427 = HeapAlloc(v426, 8u, v1348);
                                                                            if ( v427 )
                                                                            {
                                                                              v403 = 0;
                                                                              v425 = v1348;
LABEL_556:
                                                                              if ( v1567 )
                                                                                memcpy_0(v427, v1567, v425);
                                                                              v1613[1] = v427;
                                                                              LODWORD(v1613[0]) = v1305;
                                                                              goto LABEL_559;
                                                                            }
                                                                            v403 = -1073741801;
LABEL_559:
                                                                            v267 = 0LL;
                                                                            if ( v403 < 0 )
                                                                            {
                                                                              v268 = (SIZE_T)v1466;
                                                                            }
                                                                            else
                                                                            {
                                                                              v268 = (SIZE_T)v1466;
                                                                              if ( v1269 != LODWORD(v1613[0]) )
                                                                                v403 = -1073741762;
                                                                            }
                                                                            goto LABEL_522;
                                                                          }
                                                                          v314 = 0;
                                                                          if ( v1310 )
                                                                          {
                                                                            *(_DWORD *)v329 = v1266;
                                                                            v330 = GetProcessHeap();
                                                                            v331 = HeapAlloc(v330, 8u, v1266);
                                                                            if ( !v331 )
                                                                            {
                                                                              v332 = v1471;
LABEL_461:
                                                                              v314 = -1073741801;
                                                                              v337 = v1472;
                                                                              v1311 = *(void **)(v1472 + 8);
                                                                              if ( v1311 )
                                                                              {
                                                                                v338 = GetProcessHeap();
                                                                                HeapFree(v338, 0, v1311);
                                                                                v337 = v1472;
                                                                                *(_QWORD *)(v1472 + 8) = 0LL;
                                                                              }
                                                                              v1312 = *(void **)(v337 + 24);
                                                                              if ( v1312 )
                                                                              {
                                                                                v339 = GetProcessHeap();
                                                                                HeapFree(v339, 0, v1312);
                                                                                v337 = v1472;
                                                                                *(_QWORD *)(v1472 + 24) = 0LL;
                                                                              }
                                                                              v1313 = *(void **)(v337 + 40);
                                                                              if ( v1313 )
                                                                              {
                                                                                v340 = GetProcessHeap();
                                                                                HeapFree(v340, 0, v1313);
                                                                                *(_QWORD *)(v1472 + 40) = 0LL;
                                                                              }
                                                                              v341 = GetProcessHeap();
                                                                              HeapFree(v341, 0, (LPVOID)v1472);
                                                                              goto LABEL_472;
                                                                            }
                                                                            *(_QWORD *)(v1472 + 8) = v331;
                                                                            v314 = 0;
                                                                            memcpy_0(v331, v1310, v1266);
                                                                            v329 = v1472;
                                                                            v332 = v1471;
                                                                            v1327 = (SIZE_T)v102;
                                                                            lpModuleNameb = v104;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)v329 = 0;
                                                                            *(_QWORD *)(v329 + 8) = 0LL;
                                                                            v332 = v1471;
                                                                          }
                                                                          v1472 = v329;
                                                                          if ( v1467 )
                                                                          {
                                                                            *(_DWORD *)(v329 + 16) = v1346;
                                                                            v333 = GetProcessHeap();
                                                                            v334 = HeapAlloc(v333, 8u, v1346);
                                                                            if ( !v334 )
                                                                              goto LABEL_461;
                                                                            *(_QWORD *)(v1472 + 24) = v334;
                                                                            v314 = 0;
                                                                            memcpy_0(v334, v1467, v1346);
                                                                            v329 = v1472;
                                                                            v1471 = v332;
                                                                            v1327 = (SIZE_T)v102;
                                                                            lpModuleNameb = v104;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(v329 + 16) = 0;
                                                                            *(_QWORD *)(v329 + 24) = 0LL;
                                                                          }
                                                                          if ( v1565 )
                                                                          {
                                                                            *(_DWORD *)(v329 + 32) = v1301;
                                                                            v335 = GetProcessHeap();
                                                                            v336 = HeapAlloc(v335, 8u, v1301);
                                                                            if ( !v336 )
                                                                              goto LABEL_461;
                                                                            *(_QWORD *)(v1472 + 40) = v336;
                                                                            v314 = 0;
                                                                            memcpy_0(v336, v1565, v1301);
                                                                            v329 = v1472;
                                                                            v1471 = v332;
                                                                            v1327 = (SIZE_T)v102;
                                                                            lpModuleNameb = v104;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(v329 + 32) = 0;
                                                                            *(_QWORD *)(v329 + 40) = 0LL;
                                                                          }
                                                                          v342 = (unsigned __int16 *)v329;
                                                                          lpMeml = (unsigned __int16 *)v329;
                                                                          goto LABEL_473;
                                                                        }
                                                                      }
                                                                    }
                                                                    v343 = 0LL;
LABEL_486:
                                                                    v332 = v1471;
                                                                    goto LABEL_487;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                      v343 = v1468;
                                                      goto LABEL_486;
                                                    }
                                                  }
LABEL_334:
                                                  v267 = 0LL;
LABEL_335:
                                                  v268 = (SIZE_T)v1466;
                                                  goto LABEL_336;
                                                }
                                                v1466 = lpMema;
                                              }
                                            }
                                            v244 = -1073741801;
                                            lpMemb = (void *)*((_QWORD *)v236 + 1);
                                            if ( lpMemb )
                                            {
                                              v245 = GetProcessHeap();
                                              HeapFree(v245, 0, lpMemb);
                                              *((_QWORD *)v236 + 1) = 0LL;
                                            }
                                            lpMemc = (void *)*((_QWORD *)v236 + 3);
                                            if ( lpMemc )
                                            {
                                              v246 = GetProcessHeap();
                                              HeapFree(v246, 0, lpMemc);
                                              *((_QWORD *)v236 + 3) = 0LL;
                                            }
                                            lpMemd = (void *)*((_QWORD *)v236 + 5);
                                            if ( lpMemd )
                                            {
                                              v247 = GetProcessHeap();
                                              HeapFree(v247, 0, lpMemd);
                                              *((_QWORD *)v236 + 5) = 0LL;
                                            }
                                            v248 = GetProcessHeap();
                                            HeapFree(v248, 0, v236);
                                          }
                                          else
                                          {
                                            v244 = -1073741801;
                                          }
                                          v236 = v1471;
                                          goto LABEL_312;
                                        }
                                        v173 = (v1510 + 7) & 0xFFFFFFF8;
                                        if ( v173 < v1510 )
                                        {
                                          v100 = -805306219;
                                          v1477 = -805306219;
                                          goto LABEL_133;
                                        }
                                        v1510 = (v1510 + 7) & 0xFFFFFFF8;
                                        v174 = v173;
                                        v175 = GetProcessHeap();
                                        v176 = (char *)HeapAlloc(v175, 8u, v174);
                                        v177 = v176;
                                        if ( v176 )
                                        {
                                          v1586[0] = v176;
                                          *(_DWORD *)v176 = Src[0];
                                          v172 = RtlULongLongAdd((unsigned __int64)v176, 4LL, (__int64 *)v1586);
                                          if ( v172 >= 0 )
                                          {
                                            v179 = v1586[0];
                                            *(_DWORD *)v1586[0] = HIDWORD(Src[0]);
                                            v172 = RtlULongLongAdd((unsigned __int64)v179, v178, (__int64 *)v1586);
                                            if ( v172 >= 0 )
                                            {
                                              *(_QWORD *)&v177[v1510 - 8] = v1262;
                                              memcpy_0(v1586[0], Src[1], HIDWORD(Src[0]));
                                              v1466 = v177;
                                              v171 = v1510;
                                              v1435 = v1510;
LABEL_269:
                                              v1326 = (SIZE_T)v102;
                                              lpModuleNamea = v104;
                                              goto LABEL_270;
                                            }
                                          }
                                          v180 = GetProcessHeap();
                                          HeapFree(v180, 0, v177);
                                        }
                                        else
                                        {
                                          v172 = -1073741801;
                                        }
                                        v171 = 0;
                                        goto LABEL_269;
                                      }
LABEL_258:
                                      v106 = v98;
                                      goto LABEL_364;
                                    }
                                  }
                                }
                              }
                              goto LABEL_133;
                            }
LABEL_157:
                            v100 = -1073741789;
LABEL_158:
                            v106 = v98;
                            goto LABEL_363;
                          }
                        }
                        v106 = v98;
                        goto LABEL_364;
                      }
                    }
                    else
                    {
                      v1495 = 0;
                      v100 = RtlUIntAdd(4u, 8, &v1495);
                      v1477 = v100;
                      if ( v100 < 0 )
                        goto LABEL_133;
                      v100 = RtlUIntAdd(HIDWORD(Src[0]), v1495, (int *)Src + 1);
                      v1477 = v100;
                      if ( v100 >= 0 )
                      {
                        LODWORD(Src[0]) += v148;
                        goto LABEL_200;
                      }
                    }
                    v106 = v98;
                    goto LABEL_364;
                  }
                }
                else
                {
                  v1493 = 0;
                  v100 = RtlUIntAdd(4u, 8, &v1493);
                  v1477 = v100;
                  if ( v100 < 0 )
                    goto LABEL_133;
                  v100 = RtlUIntAdd(HIDWORD(Src[0]), v1493, (int *)Src + 1);
                  v1477 = v100;
                  v141 = (int)Src[0];
                  if ( v100 >= 0 )
                    goto LABEL_177;
                }
                v106 = v98;
                goto LABEL_364;
              }
            }
            else
            {
              v1491 = 0;
              v100 = RtlUIntAdd(4u, 160, &v1491);
              v1477 = v100;
              if ( v100 < 0 )
                goto LABEL_133;
              v100 = RtlUIntAdd(HIDWORD(Src[0]), v1491, (int *)Src + 1);
              v1477 = v100;
              v133 = (int)Src[0];
              if ( v100 >= 0 )
                goto LABEL_164;
            }
            v106 = v98;
            goto LABEL_364;
          }
          if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1550 && !wcscmp_0(v1550, L"Default") )
          {
            v1483 = 0;
            CurrentProcess = GetCurrentProcess();
            if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1483) )
              goto LABEL_72;
            if ( (v1483 & 0xF) == 0 )
              v79 = 1;
          }
        }
        v22 = v79;
        goto LABEL_125;
      }
      v24[823] = 0;
      memset_0(qword_1808C93A0, 0, sizeof(qword_1808C93A0));
      if ( !*v24 )
        goto LABEL_66;
      while ( 1 )
      {
        v66 = (const WCHAR *)v24;
        v67 = -1LL;
        v59 = 0;
        do
          ++v67;
        while ( *(_WORD *)&v24[2 * v67] );
        v68 = &v24[2 * v67];
        v69 = &qword_1808C93A0[3 * v60];
        if ( !GetModuleHandleExW(0, v66, v69) )
          break;
        if ( *(_WORD *)*v69 == 23117
          && (v70 = *((int *)*v69 + 15), (unsigned int)v70 < 0x10000000)
          && (v71 = (unsigned __int64)*v69 + v70, v71 >= (unsigned __int64)*v69)
          && *(_DWORD *)v71 == 17744 )
        {
          if ( ((*(_WORD *)(v71 + 24) - 267) & 0xFEFF) != 0 )
          {
            v59 = -1073741811;
          }
          else
          {
            *(HMODULE *)((char *)v69 + 12) = *(HMODULE *)(v71 + 136);
            *((_DWORD *)v69 + 2) = *(_DWORD *)(v71 + 80);
          }
        }
        else
        {
          v59 = -1073741701;
        }
        v72 = *(_DWORD *)(v68 + 2);
        v24 = v68 + 6;
        for ( nn = 0; nn < v72; ++nn )
        {
          v74 = v24;
          v75 = -1LL;
          do
            ++v75;
          while ( v24[v75] );
          v24 += v75 + 1;
          if ( v59 < 0 )
          {
            v77 = v1476;
          }
          else
          {
            v76 = GetProcAddress(qword_1808C93A0[3 * v60], v74);
            if ( !v76 )
              goto LABEL_65;
            v77 = v1476;
            off_1808C0340[v1476] = v76;
          }
          v1476 = v77 + 1;
        }
        ++v60;
        if ( !*v24 )
          goto LABEL_65;
      }
      v59 = -1073741702;
LABEL_65:
      if ( lpModuleName )
      {
LABEL_66:
        v78 = GetProcessHeap();
        HeapFree(v78, 0, lpModuleName);
      }
      v22 = 0;
      if ( v59 < 0 )
        goto LABEL_35;
      v23 = dword_1808CCC34;
    }
    dword_1808CCC34 = v23 + 1;
    goto LABEL_70;
  }
  v8 = 164LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
