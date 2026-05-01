/*
 * XREFs of ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___::Run @ 0x1801CEDB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28e381728a25b292addb57396d526bfd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1800490A8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18004BA50 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800597E8 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 *     ??$make_shared@UBroadcastDVRActiveAppInfo@@$$V@std@@YA?AV?$shared_ptr@UBroadcastDVRActiveAppInfo@@@0@XZ @ 0x18005B8E4 (--$make_shared@UBroadcastDVRActiveAppInfo@@$$V@std@@YA-AV-$shared_ptr@UBroadcastDVRActiveAppInfo.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18005B990 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAX0AEA_N11AEAPEBG@Z @ 0x18005BE3C (--$Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp@AEAPEAXAEAPEAXAEA_NAEA_NAEA_NAEAP.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x18005BF0C (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18005C194 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ??$_Emplace@U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@1@@Z @ 0x18005C320 (--$_Emplace@U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActi.c)
 *     ??1?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAA@XZ @ 0x18005C468 (--1-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppInfo@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18005C494 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicationView_ea_18005C494.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x18010A9C4 (-GameExit@BroadcastDVRTraceProvider@@SAXXZ.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@AEBU01@@Z @ 0x1801C592C (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRActiveAppIn.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D4A30 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1801D4A30.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x1801D6BE8 (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801F5AB4 (-NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18020CF24 (-AddGameToMruList@BroadcastDVRComponent@@AEAAXPEAUBroadcastDVRActiveAppInfo@@@Z.c)
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180226B94 (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUBroadcastDVRActiveAppInfo@@K_NPEA_N@Z @ 0x180232248 (-SendShellNotificationToDVR2@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Captur.c)
 *     ??$ActivateInstance@UIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@1@@Z @ 0x1802AD7D4 (--$ActivateInstance@UIPresenceWriter@Internal@PresenceServer@GameBar@Gaming@Windows@@@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$?0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z @ 0x1802F489C (--$-0$0DO@@StringReference@Internal@Windows@@QEAA@AEAY0DO@$$CBG@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall BroadcastDVRComponent::OnApplicationViewChangedTask(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  HWND v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // r15
  volatile signed __int32 *v13; // r13
  HRESULT v14; // eax
  HSTRING v15; // rcx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  void *v23; // r9
  char **v24; // rcx
  unsigned __int64 v25; // rdx
  char *v26; // rdi
  __int64 v27; // rbx
  PCWSTR StringRawBuffer; // rax
  int v29; // edi
  int v30; // ebx
  std::_Ref_count_base *v31; // rdi
  __int64 v32; // rcx
  std::_Ref_count_base *v33; // rcx
  int v34; // r8d
  bool v35; // bl
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  unsigned int v40; // r15d
  __int64 v41; // r10
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rdx
  char *v46; // rbx
  std::_Ref_count_base *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  std::_Ref_count_base *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  _BYTE *v55; // r15
  char v56; // r13
  void *v57; // rbx
  __int64 i; // rcx
  __int64 v59; // rax
  std::_Ref_count_base *v60; // rbx
  int v61; // r10d
  int v62; // edx
  int v63; // r9d
  unsigned int v64; // ecx
  __int64 v65; // r9
  int v66; // r10d
  int v67; // ecx
  int v68; // r8d
  int v69; // edx
  unsigned int v70; // ecx
  __int64 v71; // r9
  __int64 v72; // r10
  int v73; // eax
  int v74; // r10d
  int v75; // r8d
  int v76; // edx
  unsigned int v77; // ecx
  __int64 v78; // r9
  __int64 v79; // rbx
  int v80; // eax
  int dwFlags; // [rsp+20h] [rbp-9E8h]
  int dwFlagsa; // [rsp+20h] [rbp-9E8h]
  __int64 v83; // [rsp+30h] [rbp-9D8h]
  __int64 v84; // [rsp+38h] [rbp-9D0h]
  __int64 v85; // [rsp+38h] [rbp-9D0h]
  __int64 v86; // [rsp+38h] [rbp-9D0h]
  unsigned __int8 v87; // [rsp+70h] [rbp-998h] BYREF
  bool v88; // [rsp+71h] [rbp-997h] BYREF
  char v89; // [rsp+72h] [rbp-996h] BYREF
  bool v90; // [rsp+73h] [rbp-995h] BYREF
  bool v91[4]; // [rsp+74h] [rbp-994h] BYREF
  char v92[8]; // [rsp+78h] [rbp-990h] BYREF
  unsigned __int8 v93; // [rsp+80h] [rbp-988h] BYREF
  unsigned __int8 v94; // [rsp+88h] [rbp-980h] BYREF
  bool v95[4]; // [rsp+90h] [rbp-978h] BYREF
  unsigned int v96; // [rsp+94h] [rbp-974h]
  std::_Ref_count_base *v97[2]; // [rsp+98h] [rbp-970h] BYREF
  HWND hWnd; // [rsp+A8h] [rbp-960h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-958h] BYREF
  DWORD dwProcessId; // [rsp+B8h] [rbp-950h] BYREF
  void *Src; // [rsp+C0h] [rbp-948h] BYREF
  __int16 v102; // [rsp+C8h] [rbp-940h] BYREF
  char v103; // [rsp+CAh] [rbp-93Eh]
  int v104; // [rsp+CBh] [rbp-93Dh]
  int v105; // [rsp+D0h] [rbp-938h]
  __int64 v106; // [rsp+D8h] [rbp-930h]
  __int64 v107; // [rsp+E0h] [rbp-928h]
  HSTRING string; // [rsp+E8h] [rbp-920h]
  unsigned __int64 v109; // [rsp+F0h] [rbp-918h] BYREF
  std::_Ref_count_base *v110; // [rsp+F8h] [rbp-910h] BYREF
  std::_Ref_count_base *v111; // [rsp+100h] [rbp-908h]
  LPVOID pv; // [rsp+108h] [rbp-900h] BYREF
  HSTRING newString; // [rsp+110h] [rbp-8F8h] BYREF
  PCWSTR v114; // [rsp+118h] [rbp-8F0h] BYREF
  unsigned __int64 v115; // [rsp+120h] [rbp-8E8h]
  __int64 v116[2]; // [rsp+128h] [rbp-8E0h] BYREF
  std::_Ref_count_base *v117; // [rsp+138h] [rbp-8D0h]
  __int64 v118; // [rsp+140h] [rbp-8C8h] BYREF
  _QWORD v119[2]; // [rsp+148h] [rbp-8C0h] BYREF
  int v120; // [rsp+15Ch] [rbp-8ACh]
  __int64 *v121; // [rsp+160h] [rbp-8A8h]
  unsigned __int64 v122[3]; // [rsp+168h] [rbp-8A0h] BYREF
  char v123[16]; // [rsp+180h] [rbp-888h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+190h] [rbp-878h] BYREF
  HSTRING v125; // [rsp+1A0h] [rbp-868h] BYREF
  wchar_t pszDest[1024]; // [rsp+1C0h] [rbp-848h] BYREF
  STRSAFE_LPWSTR v127; // [rsp+9C0h] [rbp-48h] BYREF
  size_t cchDest; // [rsp+9C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A08h] [rbp+0h]

  v3 = a3;
  v96 = a3;
  v115 = a2;
  if ( a2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_OWORD *)v97 = 0LL;
  hWnd = 0LL;
  v99 = 0LL;
  v87 = 0;
  if ( v3 != 7 && v3 )
  {
    if ( v3 == 9 )
    {
      if ( a2 == *(_QWORD *)(a1 + 280) )
      {
        v59 = *(_QWORD *)(a1 + 296);
        if ( v59 )
          _InterlockedIncrement((volatile signed __int32 *)(v59 + 8));
        v60 = *(std::_Ref_count_base **)(a1 + 288);
        v97[0] = v60;
        v97[1] = *(std::_Ref_count_base **)(a1 + 296);
        if ( (GetWindowLongW(*((HWND *)v60 + 1), -16) & 0x20000000) != 0 && *(_QWORD *)v60 )
        {
          v66 = *((_DWORD *)v60 + 14);
          v90 = (v66 & 2) != 0;
          v67 = (*((_BYTE *)v60 + 16) != 0) | 0x40;
          if ( !*((_BYTE *)v60 + 18) )
            v67 = *((_BYTE *)v60 + 16) != 0;
          v68 = v67 | 2;
          if ( (v66 & 8) == 0 )
            v68 = v67;
          v69 = v68 | 4;
          if ( (v66 & 0x10) == 0 )
            v69 = v68;
          v70 = v69 | 8;
          if ( (v66 & 0x20) == 0 )
            v70 = v69;
          v71 = v70 | 0x10;
          if ( (v66 & 0x40) == 0 )
            v71 = v70;
          BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 3LL, v60, v71, 0, &v90);
          std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
        }
        else if ( !WindowsIsStringEmpty(*((HSTRING *)v60 + 6)) )
        {
          v72 = *((_QWORD *)v60 + 8);
          if ( v72 )
          {
            v73 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, bool))(*(_QWORD *)v72 + 48LL))(
                    v72,
                    *(_QWORD *)v60,
                    2LL,
                    *((_QWORD *)v60 + 6),
                    *((_BYTE *)v60 + 19) == 0);
            if ( v73 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xBDA,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v73);
          }
        }
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      v48 = *(_QWORD *)(a1 + 304);
      if ( a2 != v48 )
        goto LABEL_14;
      if ( *(_QWORD *)(a1 + 328) != v48 )
      {
        if ( v48 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 8LL))(*(_QWORD *)(a1 + 304));
        v49 = *(_QWORD *)(a1 + 328);
        *(_QWORD *)(a1 + 328) = v48;
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      v50 = *(_QWORD *)(a1 + 320);
      if ( v50 )
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 8));
      v51 = *(_QWORD *)(a1 + 320);
      *(_QWORD *)(a1 + 336) = *(_QWORD *)(a1 + 312);
      v52 = *(std::_Ref_count_base **)(a1 + 344);
      *(_QWORD *)(a1 + 344) = v51;
      if ( v52 )
        std::_Ref_count_base::_Decref(v52);
      v53 = *(_QWORD *)(a1 + 304);
      if ( v53 )
      {
        *(_QWORD *)(a1 + 304) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      }
      *(_QWORD *)(a1 + 312) = 0LL;
      v47 = *(std::_Ref_count_base **)(a1 + 320);
      *(_QWORD *)(a1 + 320) = 0LL;
    }
    else
    {
      if ( v3 != 2 )
        goto LABEL_14;
      v6 = *(_QWORD *)(a1 + 264);
      v7 = *(_QWORD *)(v6 + 8);
      v109 = v7;
      HIDWORD(v110) = 0;
      v111 = (std::_Ref_count_base *)v6;
      while ( !*(_BYTE *)(v7 + 25) )
      {
        if ( *(_QWORD *)(v7 + 32) < a2 )
        {
          v7 = *(_QWORD *)(v7 + 16);
        }
        else
        {
          v6 = v7;
          v111 = (std::_Ref_count_base *)v7;
          v7 = *(_QWORD *)v7;
        }
      }
      if ( *(_BYTE *)(v6 + 25) || a2 < *(_QWORD *)(v6 + 32) || v6 == *(_QWORD *)(a1 + 264) )
        goto LABEL_14;
      v43 = *(_QWORD *)(v6 + 48);
      if ( v43 )
        _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
      v44 = *(_QWORD *)(v6 + 40);
      v97[0] = (std::_Ref_count_base *)v44;
      v97[1] = *(std::_Ref_count_base **)(v6 + 48);
      if ( *(_BYTE *)(v44 + 20) )
        --*(_DWORD *)(a1 + 460);
      v45 = v6;
      if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 25LL) )
      {
        for ( i = *(_QWORD *)(v6 + 8); !*(_BYTE *)(i + 25) && v6 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
          v6 = i;
      }
      v46 = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
                      a1 + 264,
                      v45);
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::~pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>(v46 + 32);
      std::_Deallocate<16,0>(v46, (const struct std::nothrow_t *)0x38);
      if ( *(_BYTE *)(v44 + 16) )
      {
        v61 = *(_DWORD *)(v44 + 56);
        v88 = (v61 & 2) != 0;
        v62 = (*(_BYTE *)(v44 + 18) != 0 ? 65 : 1) | 2;
        if ( (v61 & 8) == 0 )
          v62 = *(_BYTE *)(v44 + 18) != 0 ? 65 : 1;
        v63 = v62 | 4;
        if ( (v61 & 0x10) == 0 )
          v63 = v62;
        v64 = v63 | 8;
        if ( (v61 & 0x20) == 0 )
          v64 = v63;
        v65 = v64 | 0x10;
        if ( (v61 & 0x40) == 0 )
          v65 = v64;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v44, v65, 0, &v88);
        BroadcastDVRTraceProvider::GameExit();
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
      }
      if ( a2 == *(_QWORD *)(a1 + 280) )
        std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::nullptr_t,std::nullptr_t,0>(a1 + 280);
      if ( a2 != *(_QWORD *)(a1 + 304) )
        goto LABEL_14;
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 328,
        a1 + 304);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 304));
      *(_QWORD *)(a1 + 312) = 0LL;
      v47 = *(std::_Ref_count_base **)(a1 + 320);
      *(_QWORD *)(a1 + 320) = 0LL;
    }
    if ( v47 )
      std::_Ref_count_base::_Decref(v47);
LABEL_14:
    if ( v97[1] )
      std::_Ref_count_base::_Decref(v97[1]);
    if ( a2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
    return;
  }
  v8 = *(__int64 **)(a1 + 264);
  v9 = (__int64 *)v8[1];
  v119[1] = v9;
  v120 = 0;
  v121 = v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( v9[4] < a2 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v8 = v9;
      v121 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  if ( !*((_BYTE *)v8 + 25) && a2 >= v8[4] && v8 != *(__int64 **)(a1 + 264) )
  {
    v54 = v8[6];
    if ( v54 )
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
    v31 = (std::_Ref_count_base *)v8[5];
    v97[0] = v31;
    v97[1] = (std::_Ref_count_base *)v8[6];
    if ( (*((_BYTE *)v31 + 56) & 1) == 0 && *(_QWORD *)v31 )
      goto LABEL_52;
    v55 = (char *)v31 + 16;
    v56 = *((_BYTE *)v31 + 16);
    pv = 0LL;
    BroadcastDVRComponent::EvaluateIfViewIsGame(a1, a2, (char *)v31 + 16, &v87, &hWnd, &v99, &pv);
    *(_QWORD *)v31 = hWnd;
    *((_QWORD *)v31 + 1) = v99;
    v57 = pv;
    if ( pv )
      std::wstring::operator=((void **)v31 + 9, pv);
    if ( !*v55 && v56 )
    {
      v74 = *((_DWORD *)v31 + 14);
      v91[0] = (v74 & 2) != 0;
      v75 = (*((_BYTE *)v31 + 18) != 0 ? 0x40 : 0) | 2;
      if ( (v74 & 8) == 0 )
        v75 = *((_BYTE *)v31 + 18) != 0 ? 0x40 : 0;
      v76 = v75 | 4;
      if ( (v74 & 0x10) == 0 )
        v76 = v75;
      v77 = v76 | 8;
      if ( (v74 & 0x20) == 0 )
        v77 = v76;
      *v55 = 1;
      v78 = v77 | 0x10;
      if ( (v74 & 0x40) == 0 )
        v78 = v77;
      LOBYTE(dwFlagsa) = 0;
      BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 1LL, v31, v78, dwFlagsa, v91);
      *v55 = 0;
      BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 0);
    }
    *((_DWORD *)v31 + 14) ^= (*((_DWORD *)v31 + 14) ^ (4 * v87)) & 4;
    if ( v57 )
      CoTaskMemFree(v57);
LABEL_51:
    v3 = v96;
LABEL_52:
    *((_DWORD *)v31 + 14) &= ~1u;
    v122[0] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v122);
    if ( v97[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v97[1] + 2);
      v31 = v97[0];
    }
    v32 = *(_QWORD *)(a1 + 304);
    *(_QWORD *)(a1 + 304) = a2;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    *(_QWORD *)(a1 + 312) = v31;
    v33 = *(std::_Ref_count_base **)(a1 + 320);
    *(std::_Ref_count_base **)(a1 + 320) = v97[1];
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    if ( *((_BYTE *)v31 + 16) )
    {
      BroadcastDVRComponent::OnApplicationViewChangedGameMode(a1, a2, v3);
      v109 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v109);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v110, v97);
      std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>::operator=<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>,0>(
        a1 + 280,
        &v109);
      if ( v111 )
        std::_Ref_count_base::_Decref(v111);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v109);
      if ( *(_QWORD *)v31 )
      {
        v34 = *((_DWORD *)v31 + 14);
        v88 = (v34 & 2) != 0;
        v35 = (v34 & 2) == 0;
        v36 = (*((_BYTE *)v31 + 16) != 0) | 0x40;
        if ( !*((_BYTE *)v31 + 18) )
          v36 = *((_BYTE *)v31 + 16) != 0;
        v37 = v36 | 2;
        if ( (v34 & 8) == 0 )
          v37 = v36;
        v38 = v37 | 4;
        if ( (v34 & 0x10) == 0 )
          v38 = v37;
        v39 = v38 | 8;
        if ( (v34 & 0x20) == 0 )
          v39 = v38;
        v40 = v39 | 0x10;
        if ( (v34 & 0x40) == 0 )
          v40 = v39;
        if ( !WindowsIsStringEmpty(*((HSTRING *)v31 + 6)) )
        {
          v41 = *((_QWORD *)v31 + 8);
          if ( v41 )
          {
            v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, bool))(*(_QWORD *)v41 + 48LL))(
                    v41,
                    *(_QWORD *)v31,
                    1LL,
                    *((_QWORD *)v31 + 6),
                    *((_BYTE *)v31 + 19) == 0);
            if ( v42 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xDEB,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(unsigned int)v42);
          }
        }
        BroadcastDVRComponent::SendShellNotificationToDVR(a1, 2, *(HWND *)v31, v40, v35, &v88, v31);
        if ( v88 )
          *((_DWORD *)v31 + 14) |= 2u;
        if ( (*((_DWORD *)v31 + 14) & 0x104) == 0 )
          BroadcastDVRComponent::AddGameToMruList((BroadcastDVRComponent *)a1, v31);
      }
      if ( (*((_BYTE *)v31 + 56) & 4) == 0 )
        BroadcastDVRComponent::NotifyGameFocusChanged((BroadcastDVRComponent *)a1, 1);
    }
    goto LABEL_14;
  }
  v102 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0LL;
  v107 = 0LL;
  string = 0LL;
  Src = 0LL;
  BroadcastDVRComponent::EvaluateIfViewIsGame(a1, a2, &v102, &v87, &hWnd, &v99, &Src);
  dwProcessId = 0;
  v89 = 1;
  v10 = hWnd;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  v11 = (__int64 *)std::make_shared<BroadcastDVRActiveAppInfo,>(&v109);
  v12 = *v11;
  v13 = (volatile signed __int32 *)v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v97[0] = (std::_Ref_count_base *)v12;
  v97[1] = (std::_Ref_count_base *)v13;
  if ( v110 )
    std::_Ref_count_base::_Decref(v110);
  *(_QWORD *)v12 = v10;
  *(_QWORD *)(v12 + 8) = v99;
  *(_WORD *)(v12 + 16) = v102;
  *(_BYTE *)(v12 + 18) = v103;
  *(_WORD *)(v12 + 19) = v104;
  *(_DWORD *)(v12 + 24) = v105;
  *(_WORD *)(v12 + 21) = HIWORD(v104);
  *(_QWORD *)(v12 + 32) = v106;
  *(_QWORD *)(v12 + 40) = v107;
  newString = 0LL;
  v14 = WindowsDuplicateString(string, &newString);
  if ( v14 >= 0 )
  {
    v15 = *(HSTRING *)(v12 + 48);
    *(_QWORD *)(v12 + 48) = newString;
    WindowsDeleteString(v15);
    v16 = (*(_DWORD *)(v12 + 56) & 0xFFFFFFFB ^ (4 * (v87 & 1))) & 0xFFFFFFFD;
    *(_DWORD *)(v12 + 56) = v16;
    v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(32 * *(_BYTE *)(a1 + 451))) & 0x20;
    *(_DWORD *)(v12 + 56) = v17;
    v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(*(_BYTE *)(a1 + 452) << 6)) & 0x40;
    *(_DWORD *)(v12 + 56) = v18;
    v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(8 * *(_BYTE *)(a1 + 449))) & 8;
    *(_DWORD *)(v12 + 56) = v19;
    *(_DWORD *)(v12 + 56) = (v19 & 0xFFFFFFEF ^ (16 * (*(_BYTE *)(a1 + 450) & 1))) & 0xFFFFFE7F | 0x80;
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)a1 + 112LL))(a1, dwProcessId, &v89);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB44,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v20);
    v22 = v89 != 0 ? 0x80 : 0;
    *(_DWORD *)(v12 + 56) &= ~0x80u;
    *(_DWORD *)(v12 + 56) |= v22;
    *(_DWORD *)(v12 + 60) = 0;
    if ( *(_BYTE *)(v12 + 16) )
    {
      if ( !WindowsIsStringEmpty(*(HSTRING *)(v12 + 48)) )
      {
        v79 = *(_QWORD *)Windows::Internal::StringReference::StringReference(
                           &v125,
                           L"Windows.Gaming.GameBar.PresenceServer.Internal.PresenceWriter");
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v12 + 64));
        v80 = Windows::Foundation::ActivateInstance<Windows::Gaming::GameBar::PresenceServer::Internal::IPresenceWriter>(
                v79,
                v12 + 64);
        if ( v80 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB4E,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(unsigned int)v80);
      }
    }
    v23 = Src;
    if ( Src )
    {
      v24 = (char **)(v12 + 72);
      v25 = -1LL;
      do
        ++v25;
      while ( *((_WORD *)Src + v25) );
      if ( v25 > *(_QWORD *)(v12 + 96) )
      {
        std::wstring::_Reallocate_for<_lambda_05cef1f6fdf474c9f3ed207deba0f73b_,unsigned short const *>(
          (__int64)v24,
          v25,
          v21,
          Src);
      }
      else
      {
        v26 = (char *)(v12 + 72);
        if ( *(_QWORD *)(v12 + 96) > 7uLL )
          v26 = *v24;
        *(_QWORD *)(v12 + 88) = v25;
        v27 = 2 * v25;
        memmove_0(v26, v23, 2 * v25);
        *(_WORD *)&v26[v27] = 0;
      }
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v12 + 48), 0LL);
    v92[0] = v87;
    v93 = *(_BYTE *)(v12 + 17);
    v29 = v93;
    v94 = *(_BYTE *)(v12 + 16);
    v30 = v94;
    v118 = v99;
    v119[0] = hWnd;
    v114 = StringRawBuffer;
    v127 = pszDest;
    cchDest = 1024LL;
    SystemTime = 0LL;
    GetLocalTime(&SystemTime);
    LODWORD(v83) = SystemTime.wMonth;
    StringCchPrintfExW(
      pszDest,
      cchDest,
      &v127,
      &cchDest,
      0,
      L"%02d/%02d %02d:%02d:%02d.%03d [%08p] ",
      v83,
      SystemTime.wDay,
      SystemTime.wHour,
      SystemTime.wMinute,
      SystemTime.wSecond,
      SystemTime.wMilliseconds,
      NtCurrentTeb()->ClientId.UniqueThread);
    StringCchPrintfExW(
      v127,
      cchDest,
      &v127,
      &cchDest,
      0,
      L"%S: ",
      "BroadcastDVRComponent_OnApplicationViewChanged_NewApp");
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=0x%I64x ", "hWnd", hWnd);
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=0x%I64x ", "hWndRoot", v99);
    LODWORD(v84) = v30;
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=%d ", "fIsGame", v84);
    LODWORD(v85) = v29;
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=%d ", "fIsBlocked", v85);
    LODWORD(v86) = v87;
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=%d ", "fIsXboxApp", v86);
    StringCchPrintfExW(v127, cchDest, &v127, &cchDest, 0, L"%S=\"%s\" ", "presenceId", v114);
    GameDVR_OutputDebug::OutputString(pszDest);
    GameDVRTraceProvider::Shell_BroadcastDVRComponent_OnApplicationViewChanged_NewApp<void * &,void * &,bool &,bool &,bool &,unsigned short const * &>(
      (unsigned int)v119,
      (unsigned int)&v118,
      (unsigned int)&v94,
      (unsigned int)&v93,
      (__int64)v92,
      (__int64)&v114);
    if ( *(_BYTE *)(v12 + 20) )
    {
      ++*(_DWORD *)(a1 + 460);
      if ( *(_BYTE *)(a1 + 448) )
      {
        v95[0] = (*(_DWORD *)(v12 + 56) & 2) != 0;
        LOBYTE(dwFlags) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR2(a1, 32LL, v12, 0LL, dwFlags, v95);
      }
    }
    v116[0] = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v116);
    if ( v13 )
      _InterlockedIncrement(v13 + 2);
    v116[1] = v12;
    v117 = (std::_Ref_count_base *)v13;
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>,std::less<Microsoft::WRL::ComPtr<IApplicationView>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>,0>>::_Emplace<std::pair<Microsoft::WRL::ComPtr<IApplicationView>,std::shared_ptr<BroadcastDVRActiveAppInfo>>>(
      a1 + 264,
      v123,
      v116);
    if ( v117 )
      std::_Ref_count_base::_Decref(v117);
    if ( v116[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v116[0] + 16LL))(v116[0]);
    if ( Src )
      CoTaskMemFree(Src);
    if ( string )
      WindowsDeleteString(string);
    v31 = v97[0];
    goto LABEL_51;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xB34,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)(unsigned int)v14);
  if ( Src )
    CoTaskMemFree(Src);
  if ( string )
    WindowsDeleteString(string);
  if ( v13 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  if ( a2 )
  {
    v115 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
