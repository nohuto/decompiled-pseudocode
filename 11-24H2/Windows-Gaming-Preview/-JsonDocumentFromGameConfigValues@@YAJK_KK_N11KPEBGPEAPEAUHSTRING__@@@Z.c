/*
 * XREFs of ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180014CCC
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A8BC (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BBA4 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E8B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall JsonDocumentFromGameConfigValues(
        int a1,
        HSTRING a2,
        int a3,
        char a4,
        bool a5,
        bool a6,
        UINT32 length,
        PCNZWCH sourceString,
        HSTRING *a9)
{
  HRESULT v13; // eax
  unsigned int v14; // ebx
  HSTRING v15; // rcx
  HSTRING v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  HSTRING v20; // rcx
  HRESULT v21; // eax
  int ActivationFactory; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  HSTRING v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  HSTRING v31; // rcx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v34; // rdi
  HRESULT v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  HSTRING v40; // rcx
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64, __int64 *); // rdi
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  HSTRING v48; // rcx
  __int64 v49; // rbx
  __int64 (__fastcall *v50)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v51; // rdi
  HRESULT v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  HSTRING v57; // rcx
  __int64 v58; // rbx
  __int64 (__fastcall *v59)(__int64, __int64, __int64 *); // rsi
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  HSTRING v65; // rcx
  __int64 v66; // rbx
  __int64 (__fastcall *v67)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v68; // rdi
  HRESULT v69; // eax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  HSTRING v74; // rcx
  __int64 v75; // rbx
  __int64 (__fastcall *v76)(__int64, __int64, __int64 *); // rdi
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  HSTRING v82; // rcx
  __int64 v83; // rbx
  __int64 (__fastcall *v84)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v85; // rdi
  HRESULT v86; // eax
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  HSTRING v92; // rcx
  __int64 v93; // rbx
  __int64 (__fastcall *v94)(__int64, __int64, __int64 *); // rdi
  __int64 v95; // rcx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  HSTRING v100; // rcx
  __int64 v101; // rbx
  __int64 (__fastcall *v102)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v103; // rdi
  HRESULT v104; // eax
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  HSTRING v110; // rcx
  __int64 v111; // rbx
  __int64 (__fastcall *v112)(__int64, __int64, __int64 *); // rdi
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  HSTRING v118; // rcx
  __int64 v119; // rbx
  __int64 (__fastcall *v120)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v121; // rdi
  HRESULT v122; // eax
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  HSTRING v127; // rcx
  __int64 v128; // rbx
  __int64 (__fastcall *v129)(__int64, __int64, __int64 *); // rdi
  __int64 v130; // rcx
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  HSTRING v135; // rcx
  __int64 v136; // rbx
  __int64 (__fastcall *v137)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v138; // rdi
  HRESULT v139; // eax
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  HSTRING v145; // rcx
  __int64 v146; // rbx
  __int64 (__fastcall *v147)(__int64, __int64, __int64 *); // rdi
  __int64 v148; // rcx
  int v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rcx
  HSTRING v153; // rcx
  __int64 v154; // rbx
  __int64 (__fastcall *v155)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v156; // rdi
  HRESULT v157; // eax
  int v158; // eax
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rcx
  HSTRING v162; // rcx
  HRESULT v163; // eax
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  HSTRING v167; // rcx
  __int64 v168; // rbx
  __int64 (__fastcall *v169)(__int64, HSTRING, __int64 *); // rdi
  __int64 v170; // rcx
  int v171; // eax
  __int64 v172; // rcx
  __int64 v173; // rcx
  __int64 v174; // rcx
  HSTRING v175; // rcx
  __int64 v176; // rbx
  __int64 (__fastcall *v177)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v178; // rdi
  HRESULT v179; // eax
  int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // rcx
  __int64 v183; // rcx
  HSTRING v184; // rcx
  __int64 v185; // rcx
  HSTRING v186; // rbx
  __int64 (__fastcall *v187)(HSTRING, GUID *, __int64 *); // rdi
  __int64 v188; // rcx
  int v189; // eax
  __int64 v190; // rcx
  __int64 v191; // rcx
  __int64 v192; // rcx
  HSTRING v193; // rcx
  int v194; // eax
  __int64 v195; // rcx
  __int64 v196; // rcx
  __int64 v197; // rcx
  HSTRING v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rcx
  HSTRING v202; // rcx
  __int64 v203; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v204[8]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v205; // [rsp+40h] [rbp-59h] BYREF
  __int64 v206; // [rsp+48h] [rbp-51h] BYREF
  HSTRING v207; // [rsp+50h] [rbp-49h] BYREF
  HSTRING v208[2]; // [rsp+58h] [rbp-41h] BYREF
  HSTRING *v209; // [rsp+68h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING string; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]

  v208[1] = a2;
  v209 = a9;
  v207 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
LABEL_284:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
LABEL_285:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    goto LABEL_286;
  }
  v207 = 0LL;
  v208[0] = 0LL;
  v14 = RoActivateInstance(string, v208);
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v15 = v208[0];
      v207 = v208[0];
      goto LABEL_8;
    }
    v14 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v208[0])(
            v208[0],
            &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
            &v207);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v208[0] + 16LL))(v208[0]);
  }
  v15 = v207;
LABEL_8:
  if ( (v14 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v14);
    v16 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v14;
  }
  v206 = 0LL;
  v18 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v15)(
          v15,
          &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b,
          &v206);
  v14 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v18);
    v19 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v14;
  }
  v205 = 0LL;
  string = 0LL;
  v21 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
  if ( v21 < 0 )
    goto LABEL_285;
  ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v205);
  v14 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v24 = v205;
    if ( v205 )
    {
      v205 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return v14;
  }
  v203 = 0LL;
  v204[0] = 0;
  if ( a3 )
  {
    v27 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL))(v205, v23, &v203);
    v14 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x266,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v27);
      v28 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      v31 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16LL))(v31);
      }
      return v14;
    }
    v32 = v206;
    v33 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v34 = v203;
    string = 0LL;
    v35 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
    if ( v35 < 0 )
    {
LABEL_286:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
      __debugbreak();
    }
    v36 = v33(v32, string, v34, v204);
    v14 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x267,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v36);
      v37 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v40 + 16LL))(v40);
      }
      return v14;
    }
  }
  if ( a4 )
  {
    v41 = v205;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 64LL);
    v43 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    LOBYTE(v23) = !a5;
    v44 = v42(v41, v23, &v203);
    v14 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v44);
      v45 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v46 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v47 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v48 + 16LL))(v48);
      }
      return v14;
    }
    v49 = v206;
    v50 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v51 = v203;
    string = 0LL;
    v52 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
    if ( v52 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v52);
      __debugbreak();
    }
    v53 = v50(v49, string, v51, v204);
    v14 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v53);
      v54 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      }
      v55 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v57 + 16LL))(v57);
      }
      return v14;
    }
  }
  if ( a6 )
  {
    v58 = v205;
    v59 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 64LL);
    v60 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    LOBYTE(v23) = a6;
    v61 = v59(v58, v23, &v203);
    v14 = v61;
    if ( v61 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v61);
      v62 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      }
      v63 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
      v64 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      v65 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v65 + 16LL))(v65);
      }
      return v14;
    }
    v66 = v206;
    v67 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v68 = v203;
    string = 0LL;
    v69 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
    if ( v69 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v69);
      __debugbreak();
    }
    v70 = v67(v66, string, v68, v204);
    v14 = v70;
    if ( v70 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x273,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v70);
      v71 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      v72 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
      v73 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v74 + 16LL))(v74);
      }
      return v14;
    }
  }
  if ( a1 )
  {
    v75 = v205;
    v76 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL);
    v77 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
    }
    v78 = v76(v75, v23, &v203);
    v14 = v78;
    if ( v78 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v78);
      v79 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
      }
      v80 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
      }
      v81 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      v82 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v82 + 16LL))(v82);
      }
      return v14;
    }
    v83 = v206;
    v84 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v85 = v203;
    string = 0LL;
    v86 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
    if ( v86 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v86);
      __debugbreak();
    }
    v87 = v84(v83, string, v85, v204);
    v14 = v87;
    if ( v87 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x279,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v87);
      v89 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
      }
      v90 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
      }
      v91 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
      }
      v92 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v92 + 16LL))(v92);
      }
      return v14;
    }
    v93 = v205;
    v94 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL);
    v95 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
    }
    v96 = v94(v93, v88, &v203);
    v14 = v96;
    if ( v96 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v96);
      v97 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
      }
      v98 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
      }
      v99 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
      }
      v100 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v100 + 16LL))(v100);
      }
      return v14;
    }
    v101 = v206;
    v102 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v103 = v203;
    string = 0LL;
    v104 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
    if ( v104 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v104);
      __debugbreak();
    }
    v105 = v102(v101, string, v103, v204);
    v14 = v105;
    if ( v105 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v105);
      v107 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
      }
      v108 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
      }
      v109 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
      }
      v110 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v110 + 16LL))(v110);
      }
      return v14;
    }
    v111 = v205;
    v112 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL);
    v113 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v113 + 16LL))(v113);
    }
    v114 = v112(v111, v106, &v203);
    v14 = v114;
    if ( v114 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v114);
      v115 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v115 + 16LL))(v115);
      }
      v116 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16LL))(v116);
      }
      v117 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
      }
      v118 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v118 + 16LL))(v118);
      }
      return v14;
    }
    v119 = v206;
    v120 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v121 = v203;
    string = 0LL;
    v122 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToSystemCompositor", 0x2Bu, &hstringHeader, &string);
    if ( v122 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v122);
      __debugbreak();
    }
    v123 = v120(v119, string, v121, v204);
    v14 = v123;
    if ( v123 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v123);
      v124 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
      }
      v125 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
      }
      v126 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
      }
      v127 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v127 + 16LL))(v127);
      }
      return v14;
    }
  }
  if ( a2 )
  {
    v128 = v205;
    v129 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL);
    v130 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v130 + 16LL))(v130);
    }
    v131 = v129(v128, v23, &v203);
    v14 = v131;
    if ( v131 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x287,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v131);
      v132 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v132 + 16LL))(v132);
      }
      v133 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
      }
      v134 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v134 + 16LL))(v134);
      }
      v135 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v135 + 16LL))(v135);
      }
      return v14;
    }
    v136 = v206;
    v137 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v138 = v203;
    string = 0LL;
    v139 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
    if ( v139 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v139);
      __debugbreak();
    }
    v140 = v137(v136, string, v138, v204);
    v14 = v140;
    if ( v140 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x288,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v140);
      v142 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v142 + 16LL))(v142);
      }
      v143 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v143 + 16LL))(v143);
      }
      v144 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v144 + 16LL))(v144);
      }
      v145 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v145 + 16LL))(v145);
      }
      return v14;
    }
    v146 = v205;
    v147 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v205 + 72LL);
    v148 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v148 + 16LL))(v148);
    }
    v149 = v147(v146, v141, &v203);
    v14 = v149;
    if ( v149 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v149);
      v150 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v150 + 16LL))(v150);
      }
      v151 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v151 + 16LL))(v151);
      }
      v152 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v152 + 16LL))(v152);
      }
      v153 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v153 + 16LL))(v153);
      }
      return v14;
    }
    v154 = v206;
    v155 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v156 = v203;
    string = 0LL;
    v157 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
    if ( v157 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v157);
      JUMPOUT(0x18001623ALL);
    }
    v158 = v155(v154, string, v156, v204);
    v14 = v158;
    if ( v158 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v158);
      v159 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v159 + 16LL))(v159);
      }
      v160 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v160 + 16LL))(v160);
      }
      v161 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v161 + 16LL))(v161);
      }
      v162 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v162 + 16LL))(v162);
      }
      return v14;
    }
  }
  if ( sourceString && length )
  {
    v208[0] = 0LL;
    WindowsDeleteString(0LL);
    v208[0] = 0LL;
    v163 = WindowsCreateString(sourceString, length, v208);
    v14 = v163;
    if ( v163 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x291,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v163);
      WindowsDeleteString(v208[0]);
      v208[0] = 0LL;
      v164 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v164 + 16LL))(v164);
      }
      v165 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v165 + 16LL))(v165);
      }
      v166 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v166 + 16LL))(v166);
      }
      v167 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v167 + 16LL))(v167);
      }
      return v14;
    }
    v168 = v205;
    v169 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v205 + 80LL);
    v170 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
    }
    v171 = v169(v168, v208[0], &v203);
    v14 = v171;
    if ( v171 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v171);
      WindowsDeleteString(v208[0]);
      v208[0] = 0LL;
      v172 = v203;
      if ( v203 )
      {
        v203 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v172 + 16LL))(v172);
      }
      v173 = v205;
      if ( v205 )
      {
        v205 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v173 + 16LL))(v173);
      }
      v174 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v174 + 16LL))(v174);
      }
      v175 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v175 + 16LL))(v175);
      }
      return v14;
    }
    v176 = v206;
    v177 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v206 + 80LL);
    v178 = v203;
    string = 0LL;
    v179 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
    if ( v179 >= 0 )
    {
      v180 = v177(v176, string, v178, v204);
      v14 = v180;
      if ( v180 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x294,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v180);
        WindowsDeleteString(v208[0]);
        v208[0] = 0LL;
        v181 = v203;
        if ( v203 )
        {
          v203 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v181 + 16LL))(v181);
        }
        v182 = v205;
        if ( v205 )
        {
          v205 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v182 + 16LL))(v182);
        }
        v183 = v206;
        if ( v206 )
        {
          v206 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v183 + 16LL))(v183);
        }
        v184 = v207;
        if ( v207 )
        {
          v207 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v184 + 16LL))(v184);
        }
        return v14;
      }
      WindowsDeleteString(v208[0]);
      goto LABEL_250;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v179);
    goto LABEL_284;
  }
LABEL_250:
  v185 = v203;
  if ( v203 )
  {
    v203 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v185 + 16LL))(v185);
  }
  v186 = v207;
  v187 = **(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v207;
  v188 = v203;
  if ( v203 )
  {
    v203 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v188 + 16LL))(v188);
  }
  v189 = v187(v186, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v203);
  v14 = v189;
  if ( v189 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x299,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v189);
    v190 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v190 + 16LL))(v190);
    }
    v191 = v205;
    if ( v205 )
    {
      v205 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v191 + 16LL))(v191);
    }
    v192 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v192 + 16LL))(v192);
    }
    v193 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v193 + 16LL))(v193);
    }
    return v14;
  }
  v194 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v203 + 56LL))(v203, v209);
  v14 = v194;
  if ( v194 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v194);
    v195 = v203;
    if ( v203 )
    {
      v203 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v195 + 16LL))(v195);
    }
    v196 = v205;
    if ( v205 )
    {
      v205 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
    }
    v197 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v197 + 16LL))(v197);
    }
    v198 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v198 + 16LL))(v198);
    }
    return v14;
  }
  v199 = v203;
  if ( v203 )
  {
    v203 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v199 + 16LL))(v199);
  }
  v200 = v205;
  if ( v205 )
  {
    v205 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v200 + 16LL))(v200);
  }
  v201 = v206;
  if ( v206 )
  {
    v206 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v201 + 16LL))(v201);
  }
  v202 = v207;
  if ( v207 )
  {
    v207 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v202 + 16LL))(v202);
  }
  return 0LL;
}
