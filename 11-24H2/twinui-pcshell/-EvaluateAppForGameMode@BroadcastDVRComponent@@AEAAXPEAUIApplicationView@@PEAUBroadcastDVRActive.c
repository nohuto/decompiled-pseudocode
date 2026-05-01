/*
 * XREFs of ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1800A6FF0
 * Callers:
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x180192B18 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180226B94 (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x1803180CC (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x18001BD30 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x18001BDA8 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x18001BE1C (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062C4C (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1800A5B20 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x1800A5D84 (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800A69A0 (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1800A75D8 (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1800A7C34 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18016EEF4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x18018A740 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18018DEA4 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1801950E4 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C89B8 (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 *     ?push_back@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAX$$QEAVString@Internal@Windows@@@Z @ 0x1801CB5F8 (-push_back@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@.c)
 *     ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1801D03E4 (-ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV-$vector@U-$pair@KVString@I.c)
 *     ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x180228918 (-TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Interna.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z @ 0x180317304 (-IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x180319F74 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall BroadcastDVRComponent::EvaluateAppForGameMode(HSTRING **this, struct IApplicationView *a2, HWND *a3)
{
  LSTATUS ValueW; // eax
  bool v7; // sf
  BroadcastDVRComponent *v8; // rcx
  struct GameConfigInfo *v9; // r12
  HWND v10; // r15
  HWND v11; // rbx
  int IsExpandedResources; // eax
  BroadcastDVRComponent *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  Windows::Internal::String *v18; // rdi
  Windows::Internal::String *v19; // r14
  Windows::Internal::String *i; // rbx
  Windows::Internal::String *v21; // rbx
  const char *v22; // r9
  HANDLE v23; // rbx
  const WCHAR *FileNameW; // rax
  int LargestValidResourceRequest; // r14d
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  bool v30; // [rsp+40h] [rbp-2B8h] BYREF
  DWORD v31; // [rsp+44h] [rbp-2B4h] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-2B0h] BYREF
  unsigned int pvData; // [rsp+50h] [rbp-2A8h] BYREF
  HANDLE v34; // [rsp+58h] [rbp-2A0h] BYREF
  HANDLE hProcess; // [rsp+60h] [rbp-298h] BYREF
  __int128 v36; // [rsp+68h] [rbp-290h] BYREF
  __int64 v37; // [rsp+78h] [rbp-280h]
  __int128 v38; // [rsp+80h] [rbp-278h] BYREF
  __int128 v39; // [rsp+90h] [rbp-268h]
  __int64 v40; // [rsp+A0h] [rbp-258h]
  WCHAR Filename[264]; // [rsp+B0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  pvData = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
             L"AllowAutoGameMode",
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v7 = ValueW < 0;
  if ( ValueW > 0 )
    v7 = 1;
  if ( (v7 || pvData)
    && ((int)SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"AutoGameModeEnabled", &pvData) < 0
     || pvData) )
  {
    v31 = 0;
    v30 = 0;
    v9 = (struct GameConfigInfo *)(a3 + 2);
    v10 = *a3;
    v11 = a3[1];
    IsExpandedResources = BroadcastDVRComponent::IsExpandedResources(v8, a2, &v30);
    if ( IsExpandedResources != -2147023728 && IsExpandedResources != -2147024444 )
    {
      v13 = retaddr;
      if ( IsExpandedResources < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7DD,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)IsExpandedResources);
    }
    LOBYTE(v13) = v30;
    v14 = v30 ? 5 : 0;
    pcbData[0] = v14;
    if ( !v30 )
    {
      if ( !BroadcastDVRComponent::IsGameModeGame(v13, v9, (enum GameModeReason *)pcbData) )
        return;
      v14 = pcbData[0];
    }
    if ( v10 )
      v11 = v10;
    GetWindowThreadProcessId(v11, &v31);
    if ( v31 )
    {
      if ( v31 == *((_DWORD *)this + 114) )
      {
        try
        {
          v36 = 0LL;
          v37 = 0LL;
          BroadcastDVRComponent::GetNonServiceProcessListAndIds((__int64)this, (__int64)&v36);
          BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(this, v31, &v36);
          v38 = 0LL;
          *(_QWORD *)&v39 = 0LL;
          BroadcastDVRComponent::GetSortedUniqueProcessList(v15, &v36, &v38);
          BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(v16, this + 44, (HSTRING **)&v38);
          BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame(v17, &v38);
          v18 = (Windows::Internal::String *)*((_QWORD *)&v38 + 1);
          v19 = (Windows::Internal::String *)v38;
          for ( i = (Windows::Internal::String *)v38; i != v18; i = (Windows::Internal::String *)((char *)i + 8) )
            std::vector<Windows::Internal::String>::push_back(this + 44, i);
          if ( v19 != v18 )
          {
            v21 = (Windows::Internal::String *)std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
                                                 v18,
                                                 v18,
                                                 v19);
            std::_Destroy_range<std::allocator<Windows::Internal::String>>(v21, v18);
            *((_QWORD *)&v38 + 1) = v21;
          }
          std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
            this[44],
            this[45],
            this[45] - this[44],
            0LL);
          std::vector<Windows::Internal::String>::_Tidy((__int64)&v38);
          std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy((__int64)&v36);
        }
        catch ( std::bad_alloc )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x804,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        hProcess = 0LL;
        v34 = OpenProcess(0x1000u, 0, v31);
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
          &hProcess,
          &v34);
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v34);
        v23 = hProcess;
        if ( hProcess )
        {
          v34 = 0LL;
          *(_QWORD *)pcbData = a2;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)pcbData);
          if ( !a2
            || (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(pcbData, &v34) < 0
            || !K32GetModuleFileNameExW(v23, 0LL, Filename, 0x104u)
            || (FileNameW = PathFindFileNameW(Filename),
                CompareStringOrdinal(FileNameW, -1, L"applicationframehost.exe", -1, 1) != 2) )
          {
            v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            RmGameModeInitializeResourceRequest(&v38);
            LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&v38);
            if ( LargestValidResourceRequest >= 0 )
            {
              BroadcastDVRComponent::GetGameModeRequest(this, v14, v9, &v38);
              v26 = RmGameModeRegisterProcess(v23, &v38, 0LL);
              if ( v26 >= 0 )
              {
                *((_DWORD *)this + 114) = v31;
                v36 = 0LL;
                v37 = 0LL;
                BroadcastDVRComponent::GetNonServiceProcessListAndIds((__int64)this, (__int64)&v36);
                BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(this, v31, &v36);
                std::vector<Windows::Internal::String>::clear(this + 44);
                BroadcastDVRComponent::GetSortedUniqueProcessList(v28, &v36, this + 44);
                BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame(v29, this + 44);
                std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy((__int64)&v36);
              }
              else if ( v26 != -1073740008 )
              {
                v27 = v26 | 0x10000000;
                if ( v27 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x833,
                    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                    (const char *)(unsigned int)v27);
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x825,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(LargestValidResourceRequest | 0x10000000u));
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)pcbData);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
        }
        else
        {
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x845,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            v22);
        }
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
      }
    }
  }
}
