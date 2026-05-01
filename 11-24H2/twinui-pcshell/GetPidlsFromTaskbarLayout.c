/*
 * XREFs of GetPidlsFromTaskbarLayout @ 0x18068ED6C
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068B5F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18068B8B0 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068BCC0 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068C000 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003D4E8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1800CDBC8 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801D3480 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801DB7F4 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1802A8330 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x180322670 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1803408F8 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803613E8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805E690C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x18068A290 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x18068A300 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 *     ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068A734 (--$set_flag_value@J@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18068A770 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 *     ??$try_create_instance@UIApplicationResolver@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x18068A7E8 (--$try_create_instance@UIApplicationResolver@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x18068A854 (--$try_create_instance@UIPinnedList@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18068AA10 (--0-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@.c)
 *     ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18068AA78 (--0-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18068AC9C (--0Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Mi.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18068ADE0 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_dat.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068AE5C (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068AE94 (--1-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x18068B0EC (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x18068B2F0 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18068B3B0 (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z @ 0x18068CC74 (-CreatePlaceholderPidl@@YAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18068E914 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayo.c)
 *     GetEnterprisePinDataFromRegistry @ 0x18068E9B4 (GetEnterprisePinDataFromRegistry.c)
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x18068EB68 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180692788 (-IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ @ 0x180692D3C (-LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180693528 (PersistEnterprisePinDataToRegistry.c)
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x1806940B4 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806945FC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x1806950E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 *     ShouldAddEnterprisePinToOutput @ 0x18069535C (ShouldAddEnterprisePinToOutput.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardCompareHelper@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardMergeHelper@PEFAU_ITEMIDLIST@@@@@@QEAAJ_K0@Z @ 0x180697850 (-_EnsureCapacity@-$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEFAU_ITEMIDL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags@@@details@wil@@QEAA_NXZ @ 0x180698808 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFl.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x1806988F0 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180699008 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall GetPidlsFromTaskbarLayout(unsigned int a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r14
  _QWORD *v5; // r15
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // eax
  LPVOID v14; // rbx
  __int64 (__fastcall *v15)(LPVOID, _QWORD, __int64 *); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rsi
  volatile signed __int32 *v20; // rdx
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *EnterprisePinDataFromRegistry; // rax
  const char *v24; // rdx
  const char *v25; // rax
  __int64 v26; // r9
  const char *v27; // rdx
  const char *v28; // rax
  __int64 v29; // r9
  __int128 *v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rax
  int v33; // eax
  HSTRING v34; // r14
  WCHAR *v35; // r14
  int v36; // eax
  wil::details::in1diag3 *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  HRESULT v40; // eax
  _QWORD *v41; // rax
  const unsigned __int16 *v42; // rax
  int (__fastcall *v43)(__int64 *, HSTRING *); // r15
  const WCHAR *StringRawBuffer; // r14
  _QWORD *v45; // rax
  const unsigned __int16 *v46; // rax
  int PlaceholderPidl; // eax
  wil::details::in1diag3 *v48; // rcx
  __int64 v49; // rdx
  HRESULT v50; // eax
  struct IShellItem **v51; // r8
  __int64 v52; // rcx
  int (__fastcall *v53)(__int64 *, HSTRING *); // r15
  HSTRING v54; // r14
  const WCHAR *v55; // r14
  _QWORD *v56; // rax
  const unsigned __int16 *v57; // rax
  const char *v58; // r9
  const char *v59; // rdx
  const char *v60; // rax
  __int64 v61; // r9
  HRESULT v62; // eax
  int v63; // r14d
  const char *v64; // rdx
  const char *v65; // rax
  __int64 v66; // r10
  __int64 *v67; // rcx
  int v68; // r14d
  __int64 Data1; // r8
  int v70; // eax
  const char *v71; // rdx
  const char *v72; // rax
  __int64 v73; // r10
  int v74; // eax
  int v75; // r14d
  const char *v76; // rdx
  const char *v77; // rax
  __int64 v78; // r10
  __int64 v79; // r8
  char v80; // r14
  __int64 v81; // r8
  const char *v82; // rdx
  const char *v83; // rax
  __int64 v84; // r9
  const char *v85; // rdx
  const char *v86; // rax
  __int64 v87; // r9
  const char *v88; // r9
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rcx
  LPITEMIDLIST *v92; // rdx
  const char *v93; // r9
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rcx
  LPITEMIDLIST *v97; // rdx
  __int64 v99; // [rsp+48h] [rbp-4B0h] BYREF
  __int64 v100; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v101; // [rsp+58h] [rbp-4A0h] BYREF
  void *v102; // [rsp+60h] [rbp-498h] BYREF
  _BYTE v103[8]; // [rsp+68h] [rbp-490h] BYREF
  _BYTE v104[8]; // [rsp+70h] [rbp-488h] BYREF
  _DWORD *v105; // [rsp+78h] [rbp-480h]
  __int64 v106; // [rsp+80h] [rbp-478h] BYREF
  __int64 v107; // [rsp+88h] [rbp-470h] BYREF
  void *v108; // [rsp+90h] [rbp-468h] BYREF
  void *v109; // [rsp+98h] [rbp-460h] BYREF
  _DWORD *v110; // [rsp+A0h] [rbp-458h]
  LPITEMIDLIST ppidl; // [rsp+A8h] [rbp-450h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-448h] BYREF
  IID punk; // [rsp+B8h] [rbp-440h] BYREF
  LPVOID v114; // [rsp+C8h] [rbp-430h] BYREF
  unsigned int v115; // [rsp+D0h] [rbp-428h] BYREF
  int v116; // [rsp+D4h] [rbp-424h] BYREF
  int v117; // [rsp+D8h] [rbp-420h]
  HSTRING string; // [rsp+E0h] [rbp-418h] BYREF
  HSTRING v119; // [rsp+E8h] [rbp-410h] BYREF
  IID v120; // [rsp+F0h] [rbp-408h] BYREF
  LPVOID ppv; // [rsp+108h] [rbp-3F0h] BYREF
  __int128 *v122; // [rsp+110h] [rbp-3E8h] BYREF
  __int64 v123; // [rsp+118h] [rbp-3E0h] BYREF
  int v124; // [rsp+120h] [rbp-3D8h]
  __int64 v125; // [rsp+128h] [rbp-3D0h] BYREF
  _BYTE v126[8]; // [rsp+130h] [rbp-3C8h] BYREF
  __int128 v127; // [rsp+138h] [rbp-3C0h] BYREF
  __int64 v128; // [rsp+148h] [rbp-3B0h]
  __int64 v129; // [rsp+150h] [rbp-3A8h] BYREF
  int v130; // [rsp+158h] [rbp-3A0h]
  HSTRING v131; // [rsp+160h] [rbp-398h] BYREF
  __int128 v132; // [rsp+168h] [rbp-390h] BYREF
  __int64 v133; // [rsp+178h] [rbp-380h]
  unsigned __int64 v134; // [rsp+180h] [rbp-378h]
  _BYTE v135[8]; // [rsp+1B0h] [rbp-348h] BYREF
  _BYTE v136[232]; // [rsp+1B8h] [rbp-340h] BYREF
  WCHAR pszPath[264]; // [rsp+2A0h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+0h]

  v4 = a4;
  v105 = a4;
  v110 = a3;
  v5 = a2;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v124 = 0;
  v117 = 0;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(&CLSID_TaskbarLayoutPolicyManager, 0LL, 1u, &GUID_99846e14_d914_4eb8_97e0_5432c32b2f40, &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    return v8;
  }
  try
  {
    v10 = (*(__int64 (**)(void))(*(_QWORD *)ppv + 24LL))();
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A3,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v11;
    }
    v13 = v124;
    if ( !v124 )
      goto LABEL_55;
    v123 = 0LL;
    v14 = ppv;
    v15 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v123);
    v16 = v15(v14, a1, &v123);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v123);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
      return v17;
    }
    memset_0(v135, 0, 0xE8uLL);
    std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>((__int64)v135);
    v115 = 0;
    v116 = 1;
    if ( a1 == 3 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v123 + 24LL))(v123, &v115);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)&v125);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)v126);
    v18 = 0LL;
    v100 = 0LL;
    v19 = 0LL;
    v99 = 0LL;
    pv = 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
      && a1 == 2 )
    {
      v20 = (volatile signed __int32 *)*((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>>((struct wil::details::IFailureCallback *)&v132)
                                       + 7);
      pv = (LPVOID)v20;
      if ( v20 )
      {
        _InterlockedAdd(v20 + 84, 1u);
        v18 = v100;
        v19 = v99;
      }
      tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((__int64)&v132);
      punk = CLSID_StartMenuCacheAndAppResolver;
      v21 = (__int64 *)winrt::try_create_instance<IApplicationResolver>((LPVOID *)&v122, &punk);
      if ( &v100 != v21 )
      {
        v18 = *v21;
        *v21 = 0LL;
        v100 = v18;
      }
      if ( v122 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v122);
      *(_QWORD *)&v120.Data1 = 0x42331CBA90AA3A4ELL;
      *(_DWORD *)v120.Data4 = 1465105336;
      *(_DWORD *)&v120.Data4[4] = 1233441907;
      v22 = (__int64 *)winrt::try_create_instance<IPinnedList>(&v114, &v120);
      if ( &v99 != v22 )
      {
        v19 = *v22;
        *v22 = 0LL;
        v99 = v19;
      }
      if ( v114 )
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v114);
      if ( v18 && v19 )
      {
        EnterprisePinDataFromRegistry = GetEnterprisePinDataFromRegistry(&v119, (__int64)&pv);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v125, EnterprisePinDataFromRegistry);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v119);
      }
      else
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)&pv,
          (__int64 *)&v119);
        v25 = tip2::details::reason_string(
                (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::helper_instances_unavailable",
                v24);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v26 + 8, 8LL, v25);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)&v119);
      }
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v123 + 24LL))(v123, &v115);
      if ( !v115 )
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)&pv,
          (__int64 *)&string);
        v28 = tip2::details::reason_string(
                (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::layout_items_array_empty",
                v27);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v29 + 8, 16LL, v28);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)&string);
      }
    }
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>(
      (__int64)&v129,
      v123);
    v127 = 0LL;
    v128 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v127,
      (__int64)&v129,
      0);
    v132 = 0LL;
    v133 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      (__int64)&v132,
      (__int64)&v129,
      v130);
    while ( 1 )
    {
      if ( (_DWORD)v127 == (_DWORD)v132 && v128 == v133 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v132 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v127 + 1);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v129);
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          if ( v19 && v18 )
            PersistEnterprisePinDataToRegistry(v126, &pv);
          if ( pv )
            tip2::details::shared_data<0,0,1>::complete_without_lock((char *)pv + 8);
          goto LABEL_50;
        }
        if ( a1 != 3 )
          goto LABEL_50;
        if ( v5[1] > (unsigned __int64)v115 )
        {
          v120.Data1 = 4;
          ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)&v120);
          wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
          if ( v19 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v99);
          if ( v18 )
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v100);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v126);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v125);
          std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v135);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v123);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
          return 2147943568LL;
        }
        std::basic_stringbuf<unsigned short>::str((__int64)v136, (__int64)&v132);
        v30 = &v132;
        if ( v134 > 7 )
          v30 = (__int128 *)v132;
        v122 = v30;
        v120.Data1 = 1;
        ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::PinningEvent<enum ProgrammableTaskbarTelemetry::PinningEventType,unsigned int &,unsigned short const *>(
          &v120,
          (char *)&v115,
          &v122);
        std::wstring::_Tidy_deallocate((void **)&v132);
LABEL_50:
        wil::com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&pv);
        if ( v19 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v99);
        if ( v18 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref(&v100);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v126);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v125);
        std::basic_ostringstream<unsigned short>::`vbase destructor'((__int64)v135);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v123);
        v13 = v124;
        v4 = v105;
LABEL_55:
        *v110 = v13;
        if ( v4 )
          *v4 = v117;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
        return 0LL;
      }
      v31 = (__int64 *)*((_QWORD *)&v127 + 1);
      v122 = (__int128 *)*((_QWORD *)&v127 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v122);
      *(_QWORD *)&punk.Data1 = 0LL;
      string = 0LL;
      v119 = 0LL;
      v32 = *v31;
      string = 0LL;
      v33 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v32 + 24))(v31, &string);
      v34 = string;
      if ( v33 < 0 || !string )
      {
        v43 = *(int (__fastcall **)(__int64 *, HSTRING *))(*v31 + 56);
        if ( string )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)v104);
          WindowsDeleteString(v34);
          wil::last_error_context::~last_error_context((wil::last_error_context *)v104);
        }
        string = 0LL;
        if ( v43(v31, &string) >= 0 && string )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( a1 == 3 )
          {
            v45 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, &v120);
            if ( *v45 + v45[1] )
              std::basic_ostream<unsigned short>::operator<<((__int64)v135);
            v46 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(StringRawBuffer);
            std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v46);
          }
          if ( (*(int (__fastcall **)(__int64 *, int *))(*v31 + 64))(v31, &v116) < 0 || v116 )
          {
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
            v50 = SHCreateItemInKnownFolder(
                    &FOLDERID_AppsFolder,
                    0x4000u,
                    StringRawBuffer,
                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                    (void **)&punk);
            if ( v50 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x21A,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v50);
            if ( !*(_QWORD *)&punk.Data1 )
            {
LABEL_118:
              if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
                && a1 == 2 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v102);
                v60 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::shell_item_not_found",
                        v59);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v61 + 8, 9LL, v60);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v102);
              }
              goto LABEL_171;
            }
            *(_QWORD *)&v120.Data1 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v120);
            if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem(
                        *(TaskbarPinHelper **)&punk.Data1,
                        (struct IShellItem *)&v120,
                        v51) >= 0 )
            {
              Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
              v52 = *(_QWORD *)&v120.Data1;
              if ( *(_QWORD *)&v120.Data1 )
              {
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v120.Data1 + 8LL))(*(_QWORD *)&v120.Data1);
                v52 = *(_QWORD *)&v120.Data1;
              }
              *(_QWORD *)&punk.Data1 = v52;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v120);
          }
          else
          {
            PlaceholderPidl = CreatePlaceholderPidl(StringRawBuffer, (struct IShellItem **)&punk);
            v48 = retaddr;
            if ( PlaceholderPidl < 0 )
            {
              v49 = 533LL;
              goto LABEL_115;
            }
          }
        }
        else
        {
          v53 = *(int (__fastcall **)(__int64 *, HSTRING *))(*v31 + 32);
          v54 = v119;
          if ( v119 )
          {
            wil::last_error_context::last_error_context((wil::last_error_context *)v103);
            WindowsDeleteString(v54);
            wil::last_error_context::~last_error_context((wil::last_error_context *)v103);
          }
          v119 = 0LL;
          if ( v53(v31, &v119) >= 0 && v119 )
          {
            v55 = WindowsGetStringRawBuffer(v119, 0LL);
            if ( a1 == 3 )
            {
              v56 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, &v120);
              if ( *v56 + v56[1] )
                std::basic_ostream<unsigned short>::operator<<((__int64)v135);
              v57 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v55);
              std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v57);
            }
            if ( v55 )
            {
              if ( (unsigned int)SHExpandEnvironmentStringsW(v55, pszPath, 260LL) )
              {
                Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
                PlaceholderPidl = SHCreateItemFromParsingName(
                                    pszPath,
                                    0LL,
                                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                                    (void **)&punk);
                v48 = retaddr;
                if ( PlaceholderPidl < 0 )
                {
                  v49 = 564LL;
LABEL_115:
                  wil::details::in1diag3::_Log_Hr(
                    v48,
                    (void *)v49,
                    (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                    (const char *)(unsigned int)PlaceholderPidl);
                }
              }
              else
              {
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0x232,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  v58);
              }
            }
          }
        }
        v5 = a2;
        goto LABEL_117;
      }
      v35 = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
      v131 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, int *))(*v31 + 64))(v31, &v116) < 0 || v116 )
      {
        if ( v35 )
        {
          v36 = ParseAppUserModelId((char *)v35, 0LL, 0LL);
          v37 = retaddr;
          if ( v36 < 0 )
          {
            v38 = 492LL;
            goto LABEL_76;
          }
          LOBYTE(v39) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetImpl'::`2'::impl,
            v39,
            0LL);
          if ( (GetInstalledBrowserChannelInfo()
             || IsPackagedBrowserReplacementFeaturePresent()
             || IsPackagedBrowserReplacementFeaturePresent())
            && CompareStringOrdinal(v35, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
          {
            TaskbarFlexibleLayoutTelemetry::LegacyBrowserUpgrade();
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
            v40 = SHCreateItemInKnownFolder(
                    &FOLDERID_CommonPrograms,
                    0x4000u,
                    L"Microsoft Edge.lnk",
                    &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                    (void **)&punk);
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1F5,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v40);
            v35 = (WCHAR *)L"Microsoft Edge.lnk";
            goto LABEL_77;
          }
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
          v36 = SHCreateItemInKnownFolder(
                  &FOLDERID_AppsFolder,
                  0x4000u,
                  v35,
                  &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                  (void **)&punk);
          v37 = retaddr;
          if ( v36 < 0 )
          {
            v38 = 506LL;
            goto LABEL_76;
          }
        }
      }
      else
      {
        v36 = CreatePlaceholderPidl(v35, (struct IShellItem **)&punk);
        v37 = retaddr;
        if ( v36 < 0 )
        {
          v38 = 490LL;
LABEL_76:
          wil::details::in1diag3::_Log_Hr(
            v37,
            (void *)v38,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v36);
        }
      }
LABEL_77:
      if ( a1 == 3 )
      {
        v41 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v135, &v120);
        if ( *v41 + v41[1] )
          std::basic_ostream<unsigned short>::operator<<((__int64)v135);
        v42 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v35);
        std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v135, (__int64)v42);
      }
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v131);
LABEL_117:
      if ( !*(_QWORD *)&punk.Data1 )
        goto LABEL_118;
      ppidl = 0LL;
      v62 = SHGetIDListFromObject(*(IUnknown **)&punk.Data1, &ppidl);
      v63 = v62;
      if ( v62 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x247,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v62);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v101);
          v65 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_object_id_list_failed",
                  v64);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v66 + 8, 13LL, (__int64)v65, v63);
          v67 = &v101;
          goto LABEL_134;
        }
        goto LABEL_135;
      }
      v68 = 0;
      v120.Data1 = -1;
      if ( v116 )
      {
        v70 = (*(__int64 (__fastcall **)(__int64 *, IID *))(*v31 + 40))(v31, &v120);
        v68 = v70;
        if ( v70 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x251,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v70);
        Data1 = v120.Data1;
      }
      else
      {
        Data1 = 9LL;
        v120.Data1 = 9;
      }
      if ( v68 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x254,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v68);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v106);
          v72 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::get_pin_source_failed",
                  v71);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v73 + 8, 15LL, (__int64)v72, v68);
          v67 = &v106;
          goto LABEL_134;
        }
        goto LABEL_135;
      }
      v74 = SetPinSourceForPinnedItem(ppidl, &ppidl, Data1);
      v75 = v74;
      if ( v74 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x256,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v74);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
            (__int64)&pv,
            &v107);
          v77 = tip2::details::reason_string(
                  (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::set_pin_source_failed",
                  v76);
          tip2::details::shared_data<0,0,1>::set_flag_value<long>(v78 + 8, 14LL, (__int64)v77, v75);
          v67 = &v107;
LABEL_134:
          tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>((void **)v67);
        }
LABEL_135:
        ILFree(ppidl);
        goto LABEL_171;
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
      {
        v80 = 1;
        v114 = 0LL;
        (*(void (__fastcall **)(__int64 *, GUID *, LPVOID *))*v31)(
          v31,
          &GUID_0437407b_4598_4e99_b045_bf1f3a3d11b4,
          &v114);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFailFlags>::GetImpl'::`2'::impl) )
        {
          if ( a1 != 2 )
            goto LABEL_151;
          if ( v120.Data1 != 3 )
            goto LABEL_147;
          if ( !v114 )
            goto LABEL_150;
          if ( !v18 || !v19 )
          {
LABEL_147:
            if ( v114 )
            {
              if ( v120.Data1 != 3 )
              {
                tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                  (__int64)&pv,
                  (__int64 *)&v108);
                v83 = tip2::details::reason_string(
                        (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::unsupported_pin_source",
                        v82);
                tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v84 + 8, 11LL, v83);
                tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v108);
                goto LABEL_163;
              }
              goto LABEL_151;
            }
LABEL_150:
            tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
              (__int64)&pv,
              (__int64 *)&v109);
            v86 = tip2::details::reason_string(
                    (tip2::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::layout_item_com_query_failed",
                    v85);
            tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v87 + 8, 12LL, v86);
            tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v109);
            goto LABEL_151;
          }
        }
        else if ( v120.Data1 != 3 || !v114 || !v18 || !v19 )
        {
          goto LABEL_151;
        }
        v80 = ShouldAddEnterprisePinToOutput(v114, &ppidl, v18, v19, &v125, v126, &pv);
LABEL_163:
        if ( v80 )
        {
LABEL_151:
          v88 = 0LL;
          v89 = v5[1];
          if ( v89 != v5[3]
            || (v90 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                        v5,
                        v89 + 1,
                        v81,
                        0LL),
                v88 = (const char *)(unsigned int)v90,
                v90 >= 0) )
          {
            v91 = v5[1];
            v5[1] = v91 + 1;
            v92 = (LPITEMIDLIST *)(*v5 + 8 * v91);
            if ( v92 )
              *v92 = ppidl;
          }
          if ( (int)v88 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x28A,
              (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              v88);
        }
        else
        {
          ILFree(ppidl);
        }
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v114);
        goto LABEL_171;
      }
      v93 = 0LL;
      v94 = v5[1];
      if ( v94 != v5[3]
        || (v95 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::_EnsureCapacity(
                    v5,
                    v94 + 1,
                    v79,
                    0LL),
            v93 = (const char *)(unsigned int)v95,
            v95 >= 0) )
      {
        v96 = v5[1];
        v5[1] = v96 + 1;
        v97 = (LPITEMIDLIST *)(*v5 + 8 * v96);
        if ( v97 )
          *v97 = ppidl;
      }
      if ( (int)v93 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x293,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          v93);
LABEL_171:
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v119);
      wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v122);
      LODWORD(v127) = v127 + 1;
      details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::GetCurrentObject((unsigned int *)&v127);
      v5 = a2;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E3,
                           (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                           v12);
  }
  return result;
}
