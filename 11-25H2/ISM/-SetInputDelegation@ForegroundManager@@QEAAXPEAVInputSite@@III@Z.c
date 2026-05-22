/*
 * XREFs of ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C
 * Callers:
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180131EF0 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180131FD0 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x1800252B0 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180025C64 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180025F94 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180025FD8 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180026174 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800263B0 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18005364C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180057610 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$As@UIComponentSiteInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIComponentSiteInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005DA68 (--$As@UIComponentSiteInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061BF4 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AE010 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AEAD0 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AEB78 (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AEE1C (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x1800AF050 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AF0A4 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x1800B0970 (-SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z.c)
 *     ?SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z @ 0x1800B0A7C (-SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@2@QEAU32@@Z @ 0x1800B10BC (-_Unchecked_erase@-$list@U-$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V-$allocator@U-$pa.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800B10F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B2154 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800B2154.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall ForegroundManager::SetInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned int v6; // esi
  unsigned int v9; // r15d
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 WindowIdFromViewId; // rax
  unsigned int ThreadIdFromViewId; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rsi
  float *v23; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  struct InputSiteManager *InputSiteManager; // rax
  struct InputSite *v28; // rax
  const char *v29; // r9
  __int64 v30; // rcx
  const char *v31; // r9
  ForegroundManager *v32; // rcx
  char v33; // al
  char v34; // r8
  char v35; // dl
  __int64 v36; // r14
  int (__fastcall *v37)(__int64, DWORD *); // rsi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  char IsDelegationSourceInForeground; // si
  unsigned int v44; // esi
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 *v47; // rcx
  ForegroundManager *v48; // rcx
  __int64 v49; // rax
  int (__fastcall *v50)(_QWORD, __int64 *); // rsi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  bool v54; // si
  __int64 v55; // r14
  int (__fastcall *v56)(__int64, __int128 *); // rsi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  char IsProcessIDInSameCompositeAppAsView; // al
  struct InputSiteManager *v63; // rax
  unsigned __int64 v64; // r14
  struct InputSite *v65; // rsi
  const char *v66; // r9
  struct ViewHierarchyWithWindowManager *v67; // rcx
  const char *v68; // r9
  unsigned int v69; // [rsp+28h] [rbp-91h]
  unsigned int v70; // [rsp+28h] [rbp-91h]
  unsigned int v71; // [rsp+28h] [rbp-91h]
  unsigned int v72; // [rsp+4Ch] [rbp-6Dh] BYREF
  unsigned int v73; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v74; // [rsp+54h] [rbp-65h] BYREF
  bool v75; // [rsp+58h] [rbp-61h]
  unsigned int ViewIdFromWindowId; // [rsp+5Ch] [rbp-5Dh]
  DWORD dwProcessId[2]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int WindowThreadProcessId; // [rsp+68h] [rbp-51h]
  unsigned int ProcessIdFromViewId; // [rsp+6Ch] [rbp-4Dh]
  unsigned int v80; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 Hwnd; // [rsp+78h] [rbp-41h]
  __int128 v82; // [rsp+80h] [rbp-39h] BYREF
  __int64 v83; // [rsp+90h] [rbp-29h]
  __int64 v84[2]; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v85; // [rsp+A8h] [rbp-11h] BYREF
  struct ViewHierarchyWithWindowManager *v86; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-1h] BYREF
  _QWORD v88[9]; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]
  struct InputSite *v90; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v91; // [rsp+128h] [rbp+6Fh]

  v91 = a3;
  v90 = a2;
  v5 = (unsigned int)a4;
  v6 = a3;
  v9 = a5;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  if ( !(_DWORD)a4 && !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A0,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v86 = ViewHierarchy;
  v12 = 0LL;
  v84[0] = 0LL;
  v13 = *((_QWORD *)a2 + 61);
  v14 = *((_QWORD *)a2 + 62);
  if ( v13 != v14 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IComponentSiteInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 8),
                  v84) >= 0 )
        break;
      v13 += 16LL;
    }
    while ( v13 != v14 );
    v12 = v84[0];
  }
  v15 = (_QWORD *)((v12 - 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64));
  v88[1] = v15;
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))*v15)(v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
  InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>((__int64)v90, v88);
  v16 = v88[0];
  if ( v15 )
  {
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD *))(v15[1] + 24LL))(v15 + 1);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
    Hwnd = WindowIdFromViewId;
  }
  else
  {
    if ( !v88[0] )
    {
      InputTraceLogging::ForegroundManagerServer::SetInputDelegationRejected(v6, v5, v9);
      return;
    }
    Hwnd = BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v88[0] + 8LL));
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, Hwnd);
    WindowIdFromViewId = Hwnd;
  }
  InputTraceLogging::ForegroundManagerServer::SetInputDelegation(v6, v5, WindowIdFromViewId, ViewIdFromWindowId, v9);
  ProcessIdFromViewId = 0;
  WindowThreadProcessId = 0;
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v87, Hwnd);
  if ( v87 )
  {
    ProcessIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v87 + 8) + 72LL))(v87 + 8);
    ThreadIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v87 + 8) + 88LL))(v87 + 8);
LABEL_26:
    WindowThreadProcessId = ThreadIdFromViewId;
    goto LABEL_27;
  }
  if ( !IsEdition(8778LL) )
  {
    v19 = ViewIdFromWindowId;
    goto LABEL_25;
  }
  if ( ViewIdFromWindowId )
  {
    v19 = ViewIdFromWindowId;
LABEL_25:
    ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(ViewHierarchy, v19);
    ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
    goto LABEL_26;
  }
  if ( Hwnd )
  {
    dwProcessId[0] = 0;
    WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)Hwnd, dwProcessId);
    ProcessIdFromViewId = dwProcessId[0];
  }
LABEL_27:
  v73 = *((_DWORD *)this + 56);
  v80 = *((_DWORD *)this + 57);
  v85 = *((_QWORD *)this + 27);
  v72 = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v85);
  if ( (v9 & 0x10) != 0 && (v9 & 0x40) == 0 )
  {
    v21 = v5;
    if ( !v5 )
      v21 = v6;
    v74 = v21;
    v22 = 152LL;
    if ( !v5 )
      v22 = 88LL;
    v23 = (float *)((char *)this + v22);
    if ( (v9 & 0xE) != 0 && (v9 & 1) == 0 )
    {
      *(_QWORD *)&v82 = Hwnd;
      *((_QWORD *)&v82 + 1) = __PAIR64__(WindowThreadProcessId, ProcessIdFromViewId);
      v83 = v9;
      v25 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                         v23,
                         (__int64)v84,
                         &v74);
      *(_OWORD *)(v25 + 24) = v82;
      *(_QWORD *)(v25 + 40) = v83;
    }
    else
    {
      v84[0] = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
                 v20,
                 (__int64)&v74);
      v26 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                        v23,
                        &v82,
                        &v74,
                        v84[0])[1];
      if ( v26 )
      {
        std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
          (__int64)v23,
          v26,
          v84[0] & *((_QWORD *)v23 + 6));
        std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::_Unchecked_erase(v23 + 2);
      }
    }
    v6 = v91;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl) )
  {
    if ( v15 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v28 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId(
                                    (__int64)InputSiteManager,
                                    (__int64)v84,
                                    1u,
                                    Hwnd);
      v90 = v28;
      v30 = v84[0];
      if ( v84[0] )
      {
        v84[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        v28 = v90;
      }
      if ( !v28 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x214,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v29);
    }
    else
    {
      v28 = v90;
    }
    InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v28, (__int64 *)&v82);
    if ( !(_QWORD)v82 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x217,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        v31);
    if ( IsEdition(8778LL) )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82 + 56LL))(v82);
      v34 = (v33 & 0xE) != 0 && (v33 & 1) == 0;
      v35 = (v9 & 0xE) != 0 && (v9 & 1) == 0;
      if ( v35 == v34 )
        goto LABEL_91;
      if ( (v9 & 0xE) == 0 || (v9 & 1) != 0 )
      {
        v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82 + 40LL))(v82);
        v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v82 + 48LL))(v82);
        ForegroundManager::HandleDelegationChangeNotification(this, v45, v44);
        goto LABEL_91;
      }
      LOBYTE(v90) = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v6, v5, v73, v72, v9);
      if ( !(_BYTE)v90 )
      {
        *(_QWORD *)dwProcessId = 0LL;
        v36 = *((_QWORD *)this + 2);
        if ( !v36 )
          goto LABEL_73;
        v37 = *(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v36 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)dwProcessId);
        if ( v37(v36, dwProcessId) < 0 )
          goto LABEL_73;
        v74 = 0;
        v38 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)dwProcessId + 80LL))(
                *(_QWORD *)dwProcessId,
                &v74);
        if ( v38 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x230,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
            (const char *)(unsigned int)v38,
            v69);
        if ( (v74 & 0xE) != 0 && (v74 & 1) == 0 )
        {
          v39 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)dwProcessId + 32LL))(
                  *(_QWORD *)dwProcessId,
                  &v73);
          if ( v39 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x233,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v39,
              v69);
          v40 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)dwProcessId + 40LL))(
                  *(_QWORD *)dwProcessId,
                  &v80);
          if ( v40 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x234,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v40,
              v69);
          v41 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)dwProcessId + 64LL))(
                  *(_QWORD *)dwProcessId,
                  &v85);
          if ( v41 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x235,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v41,
              v69);
          v42 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)dwProcessId + 48LL))(
                  *(_QWORD *)dwProcessId,
                  &v72);
          if ( v42 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x236,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v42,
              v69);
          IsDelegationSourceInForeground = ForegroundManager::IsDelegationSourceInForeground(
                                             this,
                                             v86,
                                             v91,
                                             v5,
                                             v73,
                                             v72,
                                             v74);
        }
        else
        {
LABEL_73:
          IsDelegationSourceInForeground = (char)v90;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)dwProcessId);
        if ( !IsDelegationSourceInForeground )
          goto LABEL_91;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD, unsigned int, unsigned int))(*(_QWORD *)v82 + 80LL))(
        v82,
        v72,
        v85,
        v80,
        v73,
        v9);
LABEL_76:
      ForegroundManager::UpdateForegroundTarget(
        this,
        Hwnd,
        ViewIdFromWindowId,
        ProcessIdFromViewId,
        WindowThreadProcessId,
        1);
LABEL_91:
      v47 = (__int64 *)&v82;
LABEL_143:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v47);
      goto LABEL_144;
    }
    v46 = v72;
    if ( v5 )
    {
      if ( v5 == v72 )
      {
LABEL_87:
        if ( (v9 & 0xE) == 0 || (v9 & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v82 + 72LL))(v82, 0LL, 0LL, 1LL);
          ForegroundManager::UpdateForegroundTarget(this, v85, v72, v73, v80, 0);
          goto LABEL_91;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v82 + 72LL))(v82, v46, v73, v9);
        goto LABEL_76;
      }
    }
    else if ( v6 == v73 )
    {
      goto LABEL_87;
    }
    if ( (v9 & 0x20) != 0 )
    {
      if ( v5 )
        ForegroundManager::AreViewIdsInSameCompositeApp(v32, ViewHierarchy, v72, v5);
      else
        ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, ViewHierarchy, v72, v6);
      v46 = v72;
    }
    goto LABEL_87;
  }
  v75 = 0;
  if ( IsEdition(8778LL) )
  {
    if ( !ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v6, v5, v73, v72, v9) )
    {
      if ( (v9 & 0x40) == 0 && (v9 & 0xE) != 0 && (v9 & 1) == 0 )
        goto LABEL_144;
      v84[0] = 0LL;
      v49 = *((_QWORD *)this + 2);
      *(_QWORD *)&v82 = v49;
      if ( !v49 )
        goto LABEL_117;
      v50 = *(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v49 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
      if ( v50(v82, v84) < 0 )
        goto LABEL_117;
      v74 = 0;
      v51 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84[0] + 80LL))(v84[0], &v74);
      if ( v51 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x27B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v51,
          v70);
      if ( (v74 & 0xE) != 0 && (v74 & 1) == 0 )
      {
        if ( (v9 & 0xE) == 0 || (v9 & 1) != 0 )
        {
          *(_QWORD *)&v82 = 0LL;
          v55 = *((_QWORD *)this + 2);
          v56 = *(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v55 + 40LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v82);
          if ( v56(v55, &v82) < 0 )
          {
            v54 = 0;
          }
          else
          {
            dwProcessId[0] = 0;
            v57 = (*(__int64 (__fastcall **)(_QWORD, DWORD *))(*(_QWORD *)v82 + 80LL))(v82, dwProcessId);
            if ( v57 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x28B,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v57,
                v70);
            v58 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v82 + 32LL))(v82, &v73);
            if ( v58 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x28C,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v58,
                v70);
            v59 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v82 + 48LL))(v82, &v72);
            if ( v59 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x28D,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                (const char *)(unsigned int)v59,
                v70);
            v54 = ForegroundManager::IsDelegationSourceInForeground(this, v86, v91, v5, v73, v72, dwProcessId[0]);
            if ( v54 )
            {
              v60 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v82 + 40LL))(v82, &v80);
              if ( v60 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x294,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                  (const char *)(unsigned int)v60,
                  v71);
              v61 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)v82 + 64LL))(v82, &v85);
              if ( v61 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x295,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
                  (const char *)(unsigned int)v61,
                  v71);
              v75 = 1;
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v82);
        }
        else
        {
          v52 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84[0] + 32LL))(v84[0], &v73);
          if ( v52 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x280,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v52,
              v70);
          v53 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84[0] + 48LL))(v84[0], &v72);
          if ( v53 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x281,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
              (const char *)(unsigned int)v53,
              v70);
          v54 = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v91, v5, v73, v72, v74);
        }
      }
      else
      {
LABEL_117:
        v54 = 0;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v84);
      goto LABEL_128;
    }
LABEL_129:
    if ( v15 )
    {
      v63 = ISMStatics::GetInputSiteManager();
      v64 = Hwnd;
      v65 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId((__int64)v63, (__int64)&v86, 1u, Hwnd);
      v67 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(struct ViewHierarchyWithWindowManager *))(*(_QWORD *)v67 + 16LL))(v67);
      }
      if ( !v65 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2B7,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          v66);
    }
    else
    {
      v65 = v90;
      v64 = Hwnd;
    }
    InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v65, (__int64 *)&v90);
    if ( !v90 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2BB,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        v68);
    if ( (v9 & 0xE) == 0 || (v9 & 1) != 0 )
    {
      if ( !IsEdition(8778LL) )
        (*(void (__fastcall **)(struct InputSite *, _QWORD, _QWORD, __int64))(*(_QWORD *)v90 + 72LL))(
          v90,
          0LL,
          0LL,
          1LL);
      ForegroundManager::UpdateForegroundTarget(this, v85, v72, v73, v80, v75);
    }
    else
    {
      (*(void (__fastcall **)(struct InputSite *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v90 + 72LL))(v90, v72, v73, v9);
      ForegroundManager::UpdateForegroundTarget(
        this,
        v64,
        ViewIdFromWindowId,
        ProcessIdFromViewId,
        WindowThreadProcessId,
        1);
    }
    v47 = (__int64 *)&v90;
    goto LABEL_143;
  }
  if ( v5 )
  {
    if ( v5 == v72 )
      goto LABEL_129;
  }
  else if ( v6 == v73 )
  {
    goto LABEL_129;
  }
  if ( (v9 & 0x20) == 0 )
    goto LABEL_144;
  if ( v5 )
    IsProcessIDInSameCompositeAppAsView = ForegroundManager::AreViewIdsInSameCompositeApp(v48, ViewHierarchy, v72, v5);
  else
    IsProcessIDInSameCompositeAppAsView = ForegroundManager::IsProcessIDInSameCompositeAppAsView(
                                            this,
                                            ViewHierarchy,
                                            v72,
                                            v6);
  v54 = IsProcessIDInSameCompositeAppAsView;
LABEL_128:
  if ( v54 )
    goto LABEL_129;
LABEL_144:
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v87);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 8LL))(v16 + 16);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
}
