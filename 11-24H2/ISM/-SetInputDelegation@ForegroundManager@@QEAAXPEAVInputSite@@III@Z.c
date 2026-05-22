/*
 * XREFs of ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AE0DC
 * Callers:
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180134130 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180134210 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800169B4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001B410 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x180025870 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x180026224 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x180026554 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x180026598 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180026734 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x180026970 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180027528 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18004D8FC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QEAA?AV?$ComPtr@VWindowsMessageDeliveryProxy@@@WRL@Microsoft@@XZ @ 0x18005349C (--$GetAttachedObject@UIWindowsMessageDeliveryProxy@@VWindowsMessageDeliveryProxy@@@InputSite@@QE.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@2@_K@Z @ 0x180057420 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_comp.c)
 *     ??$As@UIComponentSiteInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIComponentSiteInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005D878 (--$As@UIComponentSiteInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180061844 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800ACB10 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800ACFC4 (-GetProcessIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800AD06C (-GetThreadIdFromViewId@ViewHelper@@SAKAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AD310 (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x1800AD544 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800AD598 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z @ 0x1800AE800 (-SetInputDelegation@ForegroundManagerServer@InputTraceLogging@@SAXII_KII@Z.c)
 *     ?SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z @ 0x1800AE90C (-SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@2@QEAU32@@Z @ 0x1800AEF3C (-_Unchecked_erase@-$list@U-$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@V-$allocator@U-$pa.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800AFF14 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800AFF14.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall ForegroundManager::SetInputDelegation(
        ForegroundManager *this,
        struct InputSite *a2,
        unsigned int a3,
        const char *a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  struct InputSite *v7; // r13
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 WindowIdFromViewId; // rax
  unsigned int v17; // r14d
  unsigned int ThreadIdFromViewId; // eax
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rsi
  float *v23; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  struct InputSiteManager *InputSiteManager; // rax
  const char *v28; // r9
  __int64 v29; // rcx
  const char *v30; // r9
  ForegroundManager *v31; // rcx
  unsigned int v32; // r13d
  __int64 v33; // rax
  int (__fastcall *v34)(_QWORD, __int128 *); // rsi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  char IsDelegationSourceInForeground; // si
  unsigned int v41; // esi
  unsigned int v42; // eax
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-81h]
  unsigned int ViewIdFromWindowId; // [rsp+40h] [rbp-61h]
  unsigned int v47; // [rsp+44h] [rbp-5Dh] BYREF
  unsigned int WindowThreadProcessId; // [rsp+48h] [rbp-59h]
  unsigned int ProcessIdFromViewId; // [rsp+4Ch] [rbp-55h]
  unsigned int v50; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int64 Hwnd; // [rsp+58h] [rbp-49h]
  unsigned int v52; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v53[2]; // [rsp+68h] [rbp-39h] BYREF
  __int128 v54; // [rsp+70h] [rbp-31h] BYREF
  __int64 v55; // [rsp+80h] [rbp-21h]
  __int64 v56[2]; // [rsp+88h] [rbp-19h] BYREF
  struct ViewHierarchyWithWindowManager *v57; // [rsp+98h] [rbp-9h]
  unsigned __int64 v58; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v59; // [rsp+A8h] [rbp+7h] BYREF
  _QWORD v60[8]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]
  __int64 dwProcessId; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v63; // [rsp+110h] [rbp+6Fh]

  v63 = a3;
  v5 = (unsigned int)a4;
  v7 = a2;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x195,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  if ( !(_DWORD)a4 && !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x196,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      a4);
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  v57 = ViewHierarchy;
  v11 = 0LL;
  dwProcessId = 0LL;
  v12 = *((_QWORD *)v7 + 61);
  v13 = *((_QWORD *)v7 + 62);
  if ( v12 != v13 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IComponentSiteInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8),
                  &dwProcessId) >= 0 )
        break;
      v12 += 16LL;
    }
    while ( v12 != v13 );
    v11 = dwProcessId;
  }
  v14 = (_QWORD *)((v11 - 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64));
  v60[1] = v14;
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))*v14)(v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&dwProcessId);
  InputSite::GetAttachedObject<IWindowsMessageDeliveryProxy,WindowsMessageDeliveryProxy>((__int64)v7, v60);
  v15 = v60[0];
  if ( v14 )
  {
    ViewIdFromWindowId = (*(__int64 (__fastcall **)(_QWORD *))(v14[1] + 24LL))(v14 + 1);
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy);
    Hwnd = WindowIdFromViewId;
  }
  else
  {
    if ( !v60[0] )
    {
      InputTraceLogging::ForegroundManagerServer::SetInputDelegationRejected(a3, v5, a5);
      return;
    }
    Hwnd = BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v60[0] + 8LL));
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, Hwnd);
    WindowIdFromViewId = Hwnd;
  }
  v17 = a5;
  InputTraceLogging::ForegroundManagerServer::SetInputDelegation(v63, v5, WindowIdFromViewId, ViewIdFromWindowId, a5);
  ProcessIdFromViewId = 0;
  WindowThreadProcessId = 0;
  ActivationWatcherBamoPrincipal::TryFindActivatableEntity(*((_QWORD *)this + 67), &v59, Hwnd);
  if ( v59 )
  {
    ProcessIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v59 + 8) + 72LL))(v59 + 8);
    ThreadIdFromViewId = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v59 + 8) + 88LL))(v59 + 8);
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
    LODWORD(dwProcessId) = 0;
    WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)Hwnd, (LPDWORD)&dwProcessId);
    ProcessIdFromViewId = dwProcessId;
  }
LABEL_27:
  v50 = *((_DWORD *)this + 56);
  v52 = *((_DWORD *)this + 57);
  v58 = *((_QWORD *)this + 27);
  v47 = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v58);
  if ( (v17 & 0x10) != 0 && (v17 & 0x40) == 0 )
  {
    v21 = v5;
    if ( !v5 )
      v21 = v63;
    LODWORD(dwProcessId) = v21;
    v22 = 152LL;
    if ( !v5 )
      v22 = 88LL;
    v23 = (float *)((char *)this + v22);
    if ( (v17 & 0xE) != 0 && (v17 & 1) == 0 )
    {
      *(_QWORD *)&v54 = Hwnd;
      *((_QWORD *)&v54 + 1) = __PAIR64__(WindowThreadProcessId, ProcessIdFromViewId);
      v55 = v17;
      v25 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,ForegroundManager::TargetingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>,0>>::_Try_emplace<unsigned int const &,>(
                         v23,
                         (__int64)v56,
                         &dwProcessId);
      *(_OWORD *)(v25 + 24) = v54;
      *(_QWORD *)(v25 + 40) = v55;
    }
    else
    {
      v56[0] = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
                 v20,
                 (__int64)&dwProcessId);
      v26 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                        v23,
                        &v54,
                        &dwProcessId,
                        v56[0])[1];
      if ( v26 )
      {
        std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Erase_bucket(
          (__int64)v23,
          v26,
          v56[0] & *((_QWORD *)v23 + 6));
        std::list<std::pair<unsigned int const,ForegroundManager::TargetingInfo>>::_Unchecked_erase(v23 + 2);
      }
    }
    ViewHierarchy = v57;
  }
  if ( v14 )
  {
    InputSiteManager = ISMStatics::GetInputSiteManager();
    v7 = *(struct InputSite **)InputSiteManager::GetInputSiteFromId(
                                 (__int64)InputSiteManager,
                                 (__int64)&dwProcessId,
                                 1u,
                                 Hwnd);
    v29 = dwProcessId;
    if ( dwProcessId )
    {
      dwProcessId = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( !v7 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x209,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        v28);
  }
  InputSite::GetAttachedObject<IDelegateInformationProvider>((__int64)v7, v56);
  if ( !v56[0] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      v30);
  if ( !IsEdition(8778LL) )
  {
    v43 = v47;
    if ( v5 )
    {
      if ( v5 != v47 )
      {
        v44 = v63;
        goto LABEL_69;
      }
    }
    else
    {
      v44 = v63;
      if ( v63 != v50 )
      {
LABEL_69:
        if ( (v17 & 0x20) != 0 )
        {
          if ( v5 )
            ForegroundManager::AreViewIdsInSameCompositeApp(v31, ViewHierarchy, v47, v5);
          else
            ForegroundManager::IsProcessIDInSameCompositeAppAsView(this, ViewHierarchy, v47, v44);
          v43 = v47;
        }
      }
    }
    if ( (v17 & 0xE) == 0 || (v17 & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v56[0] + 64LL))(v56[0], 0LL, 0LL, 1LL);
      ForegroundManager::UpdateForegroundTarget(this, v58, v47, v50, v52, 0);
      goto LABEL_80;
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v56[0] + 64LL))(v56[0], v43, v50, v17);
    goto LABEL_64;
  }
  if ( (v17 & 0xE) == 0 || (v17 & 1) != 0 )
  {
    v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 40LL))(v56[0]);
    v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56[0] + 48LL))(v56[0]);
    ForegroundManager::HandleDelegationChangeNotification(this, v42, v41);
    goto LABEL_80;
  }
  v32 = v63;
  LOBYTE(dwProcessId) = ForegroundManager::IsDelegationSourceInForeground(this, ViewHierarchy, v63, v5, v50, v47, v17);
  if ( !(_BYTE)dwProcessId )
  {
    *(_QWORD *)&v54 = 0LL;
    v33 = *((_QWORD *)this + 2);
    *(_QWORD *)v53 = v33;
    if ( !v33 )
      goto LABEL_61;
    v34 = *(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v33 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    if ( v34(*(_QWORD *)v53, &v54) < 0 )
      goto LABEL_61;
    v53[0] = 0;
    v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v54 + 80LL))(v54, v53);
    if ( v35 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x221,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
        (const char *)(unsigned int)v35,
        v45);
    if ( (v53[0] & 0xE) != 0 && (v53[0] & 1) == 0 )
    {
      v36 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v54 + 32LL))(v54, &v50);
      if ( v36 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x224,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v36,
          v45);
      v37 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v54 + 40LL))(v54, &v52);
      if ( v37 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x225,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v37,
          v45);
      v38 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)v54 + 64LL))(v54, &v58);
      if ( v38 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x226,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v38,
          v45);
      v39 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v54 + 48LL))(v54, &v47);
      if ( v39 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x227,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
          (const char *)(unsigned int)v39,
          v45);
      IsDelegationSourceInForeground = ForegroundManager::IsDelegationSourceInForeground(
                                         this,
                                         v57,
                                         v32,
                                         v5,
                                         v50,
                                         v47,
                                         v53[0]);
    }
    else
    {
LABEL_61:
      IsDelegationSourceInForeground = dwProcessId;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v54);
    if ( !IsDelegationSourceInForeground )
      goto LABEL_80;
  }
  (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, _QWORD, unsigned int, unsigned int))(*(_QWORD *)v56[0]
                                                                                                + 72LL))(
    v56[0],
    v47,
    v58,
    v52,
    v50,
    v17);
LABEL_64:
  ForegroundManager::UpdateForegroundTarget(
    this,
    Hwnd,
    ViewIdFromWindowId,
    ProcessIdFromViewId,
    WindowThreadProcessId,
    1);
LABEL_80:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v56);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v59);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v15 + 16) + 8LL))(v15 + 16);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 8LL))(v14);
}
