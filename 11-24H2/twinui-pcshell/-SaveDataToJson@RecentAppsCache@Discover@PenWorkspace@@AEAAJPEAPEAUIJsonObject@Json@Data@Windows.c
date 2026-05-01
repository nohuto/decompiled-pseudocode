/*
 * XREFs of ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004AE74
 * Callers:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18004A9EC (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004BB08 (--$GetActivationFactory@V-$ComPtr@UIJsonValueStatics@Json@Data@Windows@@@WRL@Microsoft@@@Foundat.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004BB4C (--$ActivateInstance@V-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@@Foundation@Windows.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x18004BB84 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIJsonObject@Json@Data@1@@Z @ 0x1801F7D94 (--$ActivateInstance@UIJsonObject@Json@Data@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPE.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18021C1CC (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct Windows::Data::Json::IJsonObject **a2)
{
  HSTRING v2; // r13
  int SortedAppList; // eax
  unsigned int v4; // edi
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, HSTRING *); // rdi
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  __int64 v18; // r15
  void *v19; // r14
  __int64 v20; // rax
  unsigned __int64 i; // rdi
  HRESULT v22; // eax
  int v23; // edx
  unsigned int v24; // r8d
  int v25; // edx
  HSTRING v26; // rbx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(HSTRING, HSTRING, HSTRING *); // r12
  const WCHAR *v30; // rsi
  unsigned __int64 v31; // rdi
  unsigned int v32; // eax
  UINT32 v33; // edx
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  int v37; // eax
  int v38; // edx
  unsigned int v39; // r8d
  __int64 (__fastcall *v40)(HSTRING, HSTRING, __int64); // r12
  __int64 v41; // r13
  unsigned __int64 v42; // rdi
  unsigned int v43; // eax
  UINT32 v44; // edx
  HRESULT v45; // eax
  int v46; // edx
  unsigned int v47; // r8d
  __int64 v48; // rdx
  __int64 (__fastcall *v49)(HSTRING, __int64, HSTRING *); // rdi
  __int64 v50; // rcx
  int v51; // edx
  unsigned int v52; // r8d
  __int64 (__fastcall *v53)(HSTRING, HSTRING, __int64); // r12
  __int64 v54; // r13
  unsigned __int64 v55; // rdi
  unsigned int v56; // eax
  UINT32 v57; // edx
  HRESULT v58; // eax
  int v59; // edx
  unsigned int v60; // r8d
  __int64 (__fastcall *v61)(HSTRING, _QWORD, HSTRING *); // rdi
  __int64 v62; // rcx
  int v63; // edx
  unsigned int v64; // r8d
  __int64 (__fastcall *v65)(HSTRING, HSTRING, __int64); // r12
  __int64 v66; // r13
  unsigned __int64 v67; // rdi
  unsigned int v68; // eax
  UINT32 v69; // edx
  HRESULT v70; // eax
  int v71; // edx
  unsigned int v72; // r8d
  __int64 (__fastcall *v73)(HSTRING, _QWORD, HSTRING *); // rdi
  __int64 v74; // rcx
  int v75; // edx
  unsigned int v76; // r8d
  __int64 (__fastcall *v77)(HSTRING, HSTRING, __int64); // r12
  __int64 v78; // r13
  unsigned __int64 v79; // rdi
  unsigned int v80; // eax
  UINT32 v81; // edx
  HRESULT v82; // eax
  int v83; // edx
  unsigned int v84; // r8d
  int v85; // eax
  __int64 v86; // rdx
  __int64 (__fastcall *v87)(HSTRING, __int64, HSTRING *); // rdi
  __int64 v88; // rcx
  int v89; // edx
  unsigned int v90; // r8d
  __int64 (__fastcall *v91)(HSTRING, HSTRING, HSTRING); // r12
  unsigned int v92; // eax
  UINT32 v93; // edx
  HRESULT v94; // eax
  int v95; // edx
  unsigned int v96; // r8d
  __int64 (__fastcall *v97)(HSTRING, GUID *, __int64 *); // rdi
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 (__fastcall ***v100)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v101; // rcx
  __int64 (__fastcall ***v102)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v103; // rcx
  __int64 (__fastcall ***v104)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v105; // rcx
  __int64 v107; // rcx
  __int64 (__fastcall ***v108)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v109; // rcx
  __int64 (__fastcall ***v110)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v111; // rcx
  void *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  struct Windows::Data::Json::IJsonObject **v116; // rsi
  struct Windows::Data::Json::IJsonObject *v117; // rsi
  __int64 v118; // rdi
  __int64 v119; // rax
  HSTRING v120; // [rsp+20h] [rbp-79h] BYREF
  HSTRING v121; // [rsp+28h] [rbp-71h] BYREF
  __int64 (__fastcall ***v122)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-69h] BYREF
  __int64 (__fastcall ***v123)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-61h] BYREF
  HSTRING v124; // [rsp+40h] [rbp-59h] BYREF
  __int128 v125; // [rsp+48h] [rbp-51h] BYREF
  __int64 v126; // [rsp+58h] [rbp-41h]
  __int64 v127; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v128; // [rsp+68h] [rbp-31h]
  __int64 v129; // [rsp+70h] [rbp-29h] BYREF
  int v130; // [rsp+78h] [rbp-21h]
  int v131; // [rsp+7Ch] [rbp-1Dh]
  __int64 (__fastcall ***v132)(_QWORD, GUID *, _QWORD); // [rsp+80h] [rbp-19h] BYREF
  __int64 v133; // [rsp+88h] [rbp-11h]
  struct Windows::Data::Json::IJsonObject **v134; // [rsp+90h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-1h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v134 = a2;
  v2 = 0LL;
  *a2 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v125);
  v4 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
LABEL_118:
    v112 = (void *)v125;
    if ( (_QWORD)v125 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v125, *((__int64 *)&v125 + 1));
      std::_Deallocate<16,0>(v112, (const struct std::nothrow_t *)((v126 - (_QWORD)v112) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return v4;
  }
  v121 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    goto LABEL_122;
  }
  v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonValueStatics>>(
         string,
         &v121);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
LABEL_117:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v121);
    goto LABEL_118;
  }
  v123 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Windows.Data.Json.JsonArray", 0x1Bu, &hstringHeader, &string);
  if ( v9 < 0 )
  {
LABEL_122:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    __debugbreak();
  }
  v12 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>>(string, &v123);
  v4 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x313,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v12);
LABEL_125:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v123);
    goto LABEL_117;
  }
  v124 = 0LL;
  v13 = v123;
  v14 = (__int64 (__fastcall *)(_QWORD, GUID *, HSTRING *))**v123;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v124);
  v15 = v14(v13, &GUID_d44662bc_dce3_59a8_9272_4b210f33908b, &v124);
  v4 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v124);
    goto LABEL_125;
  }
  v16 = 0;
  v130 = 0;
  v17 = 0;
  v18 = *((_QWORD *)&v125 + 1);
  v19 = (void *)v125;
  v20 = (__int64)(*((_QWORD *)&v125 + 1) - v125) >> 4;
  v133 = v20;
  for ( i = v125; ; i += 16LL )
  {
    v128 = i;
    v131 = v17;
    if ( v17 >= (int)v20 || v16 >= 30 )
      goto LABEL_151;
    if ( *(int *)(*(_QWORD *)i + 32LL) < 3 )
      goto LABEL_83;
    v122 = 0LL;
    string = 0LL;
    v22 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
    if ( v22 < 0 )
      break;
    v26 = string;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v122);
    v122 = 0LL;
    v132 = 0LL;
    LODWORD(v26) = RoActivateInstance(v26, &v132);
    if ( (int)v26 >= 0 )
    {
      v28 = *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1
          - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
      if ( *(_QWORD *)&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
        v28 = *(_QWORD *)GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3.Data4
            - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
      if ( !v28 )
      {
        v122 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v132;
        goto LABEL_17;
      }
      goto LABEL_90;
    }
    while ( 1 )
    {
LABEL_17:
      if ( (int)v26 < 0 )
        goto LABEL_145;
      v120 = v2;
      v26 = v121;
      v29 = *(__int64 (__fastcall **)(HSTRING, HSTRING, HSTRING *))(*(_QWORD *)v121 + 80LL);
      v30 = *(const WCHAR **)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 24LL) > 7uLL )
        v30 = *(const WCHAR **)v30;
      string = v2;
      v31 = -1LL;
      do
        ++v31;
      while ( v30[v31] != (_WORD)v2 );
      if ( v31 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v25, v27);
        __debugbreak();
      }
      v32 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v31, v25, v27);
      v33 = v32 - 1;
      if ( (unsigned int)v31 < v32 )
        v33 = v31;
      v34 = WindowsCreateStringReference(v30, v33, &hstringHeader, &string);
      if ( v34 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
LABEL_145:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x322,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_146;
      }
      v37 = v29(v26, string, &v120);
      LODWORD(v26) = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x325,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v37);
        v107 = (__int64)v120;
        if ( v120 )
        {
          v120 = v2;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
        }
        v108 = v122;
        if ( v122 )
        {
          v122 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v2;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v108)[2])(v108);
        }
        v109 = (__int64)v124;
        if ( v124 )
        {
          v124 = v2;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
        }
        v110 = v123;
        if ( v123 )
        {
          v123 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v2;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v110)[2])(v110);
        }
        v111 = (__int64)v121;
        if ( v121 )
        {
          v121 = v2;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
        }
        goto LABEL_101;
      }
      v26 = (HSTRING)v122;
      v40 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v122)[7];
      v41 = (__int64)v120;
      string = 0LL;
      v42 = -1LL;
      do
        ++v42;
      while ( aAppid_1[v42] );
      if ( v42 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v38, v39);
        __debugbreak();
      }
      v43 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v42, v38, v39);
      v44 = v43 - 1;
      if ( (unsigned int)v42 < v43 )
        v44 = v42;
      v45 = WindowsCreateStringReference(L"AppID", v44, &hstringHeader, &string);
      if ( v45 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v45, v46, v47);
        __debugbreak();
      }
      LODWORD(v26) = v40(v26, string, v41);
      if ( (int)v26 < 0 )
      {
        v114 = 806LL;
        goto LABEL_141;
      }
      v26 = v121;
      v49 = *(__int64 (__fastcall **)(HSTRING, __int64, HSTRING *))(*(_QWORD *)v121 + 72LL);
      v50 = (__int64)v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
      }
      LODWORD(v26) = v49(v26, v48, &v120);
      if ( (int)v26 < 0 )
      {
        v114 = 808LL;
        goto LABEL_141;
      }
      v26 = (HSTRING)v122;
      v53 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v122)[7];
      v54 = (__int64)v120;
      string = 0LL;
      v55 = -1LL;
      do
        ++v55;
      while ( aPenusagesec[v55] );
      if ( v55 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v51, v52);
        __debugbreak();
      }
      v56 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v55, v51, v52);
      v57 = v56 - 1;
      if ( (unsigned int)v55 < v56 )
        v57 = v55;
      v58 = WindowsCreateStringReference(L"PenUsageSec", v57, &hstringHeader, &string);
      if ( v58 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v58, v59, v60);
        __debugbreak();
      }
      LODWORD(v26) = v53(v26, string, v54);
      if ( (int)v26 < 0 )
      {
        v114 = 809LL;
        goto LABEL_141;
      }
      v26 = v121;
      v61 = *(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v121 + 72LL);
      v62 = (__int64)v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      }
      LODWORD(v26) = v61(v26, *(unsigned int *)(*(_QWORD *)v128 + 36LL), &v120);
      if ( (int)v26 < 0 )
      {
        v114 = 811LL;
        goto LABEL_141;
      }
      v26 = (HSTRING)v122;
      v65 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v122)[7];
      v66 = (__int64)v120;
      string = 0LL;
      v67 = -1LL;
      do
        ++v67;
      while ( aLastswitchedlo[v67] );
      if ( v67 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v63, v64);
        __debugbreak();
      }
      v68 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v67, v63, v64);
      v69 = v68 - 1;
      if ( (unsigned int)v67 < v68 )
        v69 = v67;
      v70 = WindowsCreateStringReference(L"LastSwitchedLowPart", v69, &hstringHeader, &string);
      if ( v70 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v70, v71, v72);
        __debugbreak();
      }
      LODWORD(v26) = v65(v26, string, v66);
      if ( (int)v26 < 0 )
      {
        v114 = 812LL;
        goto LABEL_141;
      }
      v26 = v121;
      v73 = *(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v121 + 72LL);
      v74 = (__int64)v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      }
      LODWORD(v26) = v73(v26, *(unsigned int *)(*(_QWORD *)v128 + 40LL), &v120);
      if ( (int)v26 < 0 )
      {
        v114 = 814LL;
LABEL_141:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v114,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_142;
      }
      v26 = (HSTRING)v122;
      v77 = (__int64 (__fastcall *)(HSTRING, HSTRING, __int64))(*v122)[7];
      v78 = (__int64)v120;
      string = 0LL;
      v79 = -1LL;
      do
        ++v79;
      while ( aLastswitchedhi[v79] );
      if ( v79 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v75, v76);
        __debugbreak();
      }
      v80 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v79, v75, v76);
      v81 = v80 - 1;
      if ( (unsigned int)v79 < v80 )
        v81 = v79;
      v82 = WindowsCreateStringReference(L"LastSwitchedHighPart", v81, &hstringHeader, &string);
      if ( v82 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v82, v83, v84);
        __debugbreak();
      }
      v85 = v77(v26, string, v78);
      LODWORD(v26) = v85;
      if ( v85 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32F,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v85);
        v101 = (__int64)v120;
        if ( v120 )
        {
          v120 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
        }
        v102 = v122;
        if ( v122 )
        {
          v122 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v102)[2])(v102);
        }
        v103 = (__int64)v124;
        if ( v124 )
        {
          v124 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
        }
        v104 = v123;
        if ( v123 )
        {
          v123 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v104)[2])(v104);
        }
        v105 = (__int64)v121;
        if ( v121 )
        {
          v121 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
        }
        goto LABEL_101;
      }
      v26 = v121;
      v87 = *(__int64 (__fastcall **)(HSTRING, __int64, HSTRING *))(*(_QWORD *)v121 + 64LL);
      v88 = (__int64)v120;
      if ( v120 )
      {
        v120 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
      }
      LOBYTE(v86) = *(_BYTE *)(*(_QWORD *)v128 + 44LL);
      LODWORD(v26) = v87(v26, v86, &v120);
      if ( (int)v26 < 0 )
      {
        v114 = 817LL;
        goto LABEL_141;
      }
      v26 = (HSTRING)v122;
      v91 = (__int64 (__fastcall *)(HSTRING, HSTRING, HSTRING))(*v122)[7];
      v2 = v120;
      string = 0LL;
      i = -1LL;
      do
        ++i;
      while ( aPrepopulated[i] );
      if ( i <= 0xFFFFFFFF )
        break;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v89, v90);
LABEL_90:
      LODWORD(v26) = (**v132)(v132, &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3, &v122);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v132)[2])(v132);
    }
    v92 = Microsoft::WRL::Wrappers::HStringReference::AddOne(i, v89, v90);
    v93 = v92 - 1;
    if ( (unsigned int)i < v92 )
      v93 = i;
    v94 = WindowsCreateStringReference(L"PrePopulated", v93, &hstringHeader, &string);
    if ( v94 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v94, v95, v96);
      __debugbreak();
    }
    LODWORD(v26) = v91(v26, string, v2);
    v2 = 0LL;
    if ( (int)v26 < 0 )
    {
      v114 = 818LL;
      goto LABEL_141;
    }
    v127 = 0LL;
    v26 = (HSTRING)v122;
    v97 = (__int64 (__fastcall *)(HSTRING, GUID *, __int64 *))**v122;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v127);
    LODWORD(v26) = v97(v26, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v127);
    if ( (int)v26 < 0 )
    {
      v113 = 821LL;
LABEL_128:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v113,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v26);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v127);
LABEL_142:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v120);
LABEL_146:
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v122);
      goto LABEL_149;
    }
    LODWORD(v26) = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v124 + 104LL))(v124, v127);
    if ( (int)v26 < 0 )
    {
      v113 = 822LL;
      goto LABEL_128;
    }
    v16 = ++v130;
    v98 = v127;
    if ( v127 )
    {
      v127 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
    }
    v99 = (__int64)v120;
    if ( v120 )
    {
      v120 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
    }
    v100 = v122;
    if ( v122 )
    {
      v122 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v100)[2])(v100);
    }
    i = v128;
    v17 = v131;
LABEL_83:
    ++v17;
    LODWORD(v20) = v133;
  }
  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
LABEL_151:
  v129 = 0LL;
  LODWORD(v26) = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(
                   &v123,
                   &v129);
  if ( (int)v26 < 0 )
  {
    v115 = 828LL;
  }
  else
  {
    string = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Data.Json.JsonObject",
      0x1Du,
      0x1Cu);
    v116 = v134;
    LODWORD(v26) = Windows::Foundation::ActivateInstance<Windows::Data::Json::IJsonObject>(string, v134);
    if ( (int)v26 >= 0 )
    {
      v117 = *v116;
      v26 = *(HSTRING *)(*(_QWORD *)v117 + 56LL);
      v118 = v129;
      v119 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_18070D708);
      LODWORD(v26) = ((__int64 (__fastcall *)(struct Windows::Data::Json::IJsonObject *, _QWORD, __int64))v26)(
                       v117,
                       *(_QWORD *)(v119 + 24),
                       v118);
      if ( (int)v26 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v129);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v124);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v123);
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v121);
        if ( v19 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v19, v18);
          std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)((v126 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL));
        }
        return 0LL;
      }
      v115 = 831LL;
    }
    else
    {
      v115 = 830LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v115,
    (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v26);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v129);
LABEL_149:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v124);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v123);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v121);
LABEL_101:
  if ( v19 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v19, v18);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)((v126 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return (unsigned int)v26;
}
