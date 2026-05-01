/*
 * XREFs of ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C7A18
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004E288 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_18004E288.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004E314 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_18004E314.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18004E588 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800858F0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801C7DFC (--0InputAppViewCoodinatorHandler@@QEAA@W4ShellView@Shell@UI@WindowsUdk@winrt@@@Z.c)
 *     ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x1801C7E80 (--$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@VInputAppViewCoodinato.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1801C7FF4 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UI.c)
 *     ?revoke_impl@?$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@AEAAXUISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@3@@Z @ 0x1801C8024 (-revoke_impl@-$event_revoker@UISnapLayoutPickerExtension2@Shell@UI@WindowsUdk@winrt@@$MP8type@-$.c)
 *     ?DismissRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180293D68 (-DismissRequested@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ShowRequested@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180293DE0 (-ShowRequested@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1802CE380 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_ @ 0x1802E2E5C (_lambda_945e3f99e324f0975fc3b8cf1a6859ea_--_lambda_945e3f99e324f0975fc3b8cf1a6859ea_.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_4ce12a90e81ea4b4c570078f6f58eac4___ @ 0x180467844 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180467844.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_945e3f99e324f0975fc3b8cf1a6859ea___ @ 0x180467A80 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180467A80.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchKeyboardExperienceManager::InitializeViewCoordinators(TouchKeyboardExperienceManager *this)
{
  std::_Ref_count_base *v2; // rdi
  std::_Ref_count_base *v3; // rdi
  std::_Ref_count_base *v4; // rdi
  std::_Ref_count_base *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 *i; // rax
  const char *v23; // [rsp+28h] [rbp-41h]
  std::_Ref_count_base **v24; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27[2]; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-11h] BYREF
  std::_Ref_count_base *v29; // [rsp+60h] [rbp-9h]
  char v30[16]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v31[72]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  std::_Ref_count_base *v33; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+E0h] [rbp+77h] BYREF
  TouchKeyboardExperienceManager *v36; // [rsp+E8h] [rbp+7Fh] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0xC70,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(*((_QWORD *)this + 33) != 0LL),
    (bool)"Not expect to re-initialize m_viewCoordinatorHandlers",
    v23);
  v2 = (std::_Ref_count_base *)operator new(0x60uLL);
  v33 = v2;
  *(_OWORD *)v2 = 0LL;
  *((_DWORD *)v2 + 2) = 1;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<InputAppViewCoodinatorHandler>::`vftable';
  InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler((char *)v2 + 16, 12LL);
  v28 = (_DWORD *)((char *)v2 + 16);
  v29 = v2;
  LODWORD(v33) = 12;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (char *)this + 256,
    v31,
    &v33,
    &v28);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v3 = (std::_Ref_count_base *)operator new(0x60uLL);
  v33 = v3;
  *(_OWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 1;
  *((_DWORD *)v3 + 3) = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<InputAppViewCoodinatorHandler>::`vftable';
  InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler((char *)v3 + 16, 13LL);
  v28 = (_DWORD *)((char *)v3 + 16);
  v29 = v3;
  LODWORD(v33) = 13;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (char *)this + 256,
    v31,
    &v33,
    &v28);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v4 = (std::_Ref_count_base *)operator new(0x60uLL);
  v33 = v4;
  *(_OWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<InputAppViewCoodinatorHandler>::`vftable';
  InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler((char *)v4 + 16, 14LL);
  v28 = (_DWORD *)((char *)v4 + 16);
  v29 = v4;
  LODWORD(v33) = 14;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (char *)this + 256,
    v31,
    &v33,
    &v28);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v5 = (std::_Ref_count_base *)operator new(0x60uLL);
  v33 = v5;
  *(_OWORD *)v5 = 0LL;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<InputAppViewCoodinatorHandler>::`vftable';
  InputAppViewCoodinatorHandler::InputAppViewCoodinatorHandler((char *)v5 + 16, 19LL);
  v28 = (_DWORD *)((char *)v5 + 16);
  v29 = v5;
  LODWORD(v33) = 19;
  std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
    (char *)this + 256,
    v31,
    &v33,
    &v28);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  v6 = (__int64 *)**((_QWORD **)this + 32);
  while ( !*((_BYTE *)v6 + 25) )
  {
    v36 = this;
    v33 = 0LL;
    v24 = &v33;
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v24);
    v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7F,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      return v9;
    }
    v10 = v6[5];
    v11 = lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_(v30, &v36, &v33);
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_4ce12a90e81ea4b4c570078f6f58eac4___(
      &v34,
      v11);
    v13 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ShowRequested(
                       v10 + 8,
                       v27,
                       v12,
                       &v34);
    __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      v6[5] + 16,
      v13);
    if ( v27[0] )
    {
      v14 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(v27, &v25);
      _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
        v27,
        v14);
      if ( v27[0] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v27);
    }
    if ( v34 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
    v15 = lambda_945e3f99e324f0975fc3b8cf1a6859ea_::_lambda_945e3f99e324f0975fc3b8cf1a6859ea_(v31, &v36, &v33);
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_945e3f99e324f0975fc3b8cf1a6859ea___(
      &v35,
      v15);
    v17 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::DismissRequested(
                       v10 + 8,
                       &v28,
                       v16,
                       &v35);
    __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      v6[5] + 32,
      v17);
    if ( v28 )
    {
      v18 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get((__int64 *)&v28, &v26);
      _revoke_impl___event_revoker_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt___MP8type___abi_UISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__AEAAXUISnapLayoutPickerExtension2_Shell_UI_WindowsUdk_3__Z(
        &v28,
        v18);
      if ( v28 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v28);
    }
    if ( v35 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v35);
    v19 = (__int64)v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = (__int64 *)v6[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      do
      {
        v6 = v20;
        v20 = (__int64 *)*v20;
      }
      while ( !*((_BYTE *)v20 + 25) );
    }
  }
  return 0LL;
}
