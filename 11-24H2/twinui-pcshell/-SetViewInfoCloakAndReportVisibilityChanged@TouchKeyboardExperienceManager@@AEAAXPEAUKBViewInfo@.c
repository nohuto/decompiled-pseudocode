/*
 * XREFs of ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800803D4
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1800ABA14 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18021056C (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     _lambda_0181179693446beb1d5841bdc72a572d_::operator() @ 0x18046D3B4 (_lambda_0181179693446beb1d5841bdc72a572d_--operator().c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046FD10 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x180187DC8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ??$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@?$_Tree@V?$_Tmap_traits@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@Z @ 0x1802172B8 (--$_Find_lower_bound@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@-$_Tree@V-$_Tmap_.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802409D0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x18028F06C (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA?AV?$optional@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1802C1BDC (-TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA-AV-$optional@W4S.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18046C920 (--1-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHost.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@2@XZ @ 0x18046D388 (-data@-$tip_test@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTip.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180478C4C (-close@-$test_data_control@V-$merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@Keyboard.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x180482E7C (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        unsigned __int8 a3)
{
  int v3; // edi
  unsigned int FirstViewType; // eax
  __int64 v7; // rcx
  _QWORD *v8; // r10
  __int64 v9; // rbx
  void *v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  _BYTE *v14; // rbx
  volatile signed __int32 *v15; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-20h]
  _BYTE v20[16]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]
  unsigned int v22; // [rsp+98h] [rbp+38h] BYREF
  char v23; // [rsp+9Ch] [rbp+3Ch]
  int v24; // [rsp+A0h] [rbp+40h] BYREF
  _BYTE *v25; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  if ( *((_BYTE *)a2 + 34) != a3 )
  {
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    TouchKeyboardExperienceManager::TryConvertCoreKeyboardViewTypeToShellView(v7, &v22, FirstViewType);
    if ( v23 )
    {
      std::_Tree<std::_Tmap_traits<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64,std::less<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>,std::allocator<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>,0>>::_Find_lower_bound<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier>(
        (char *)this + 256,
        v20,
        &v22);
      if ( !*(_BYTE *)(v21 + 25) && (signed int)v22 >= *(_DWORD *)(v21 + 32) && v21 != *v8 )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
          &v18,
          (_QWORD *)(v21 + 40));
        v9 = v18;
        v24 = v3;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
          v18 + 8,
          &v24);
        if ( (_BYTE)v3 )
        {
          if ( *(_BYTE *)(v9 + 64) )
          {
            v12 = *((_QWORD *)this + 73);
            winrt::hstring::hstring((winrt::hstring *)&v16, &pvData);
            winrt::hstring::hstring((winrt::hstring *)&v15, &pvData);
            KeyboardHosting::TabTipAdapter::UpdateShellViewCoordinatorShellPreferences(v12, v22, &v15, &v16);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
            *(_BYTE *)(v18 + 64) = 0;
          }
          v9 = v18;
        }
        else if ( *(_QWORD *)(v9 + 48) )
        {
          wil::AcquireSRWLockExclusive(v17, v9 + 56);
          v11 = *(wil::details **)(v9 + 48);
          if ( v11 )
            wil::details::SetEvent(v11, v10);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)v17);
        }
        v13 = v9 + 72;
        if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v9 + 72) )
        {
          tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::data(
            v9 + 72,
            &v25);
          v14 = v25;
          if ( (_BYTE)v3 )
          {
            v25[275] = v3;
            v14[276] = 1;
          }
          else
          {
            v25[273] = 1;
            v14[274] = 1;
          }
          v14[289] = (unsigned int)TouchKeyboardExperienceManager::GetInputAppState(this) == 1;
          v14[290] = 1;
          tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::close(&v25);
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v13);
          tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2,KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>>(&v25);
        }
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
      }
    }
  }
  *((_BYTE *)a2 + 34) = v3;
}
