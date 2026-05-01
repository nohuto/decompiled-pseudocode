/*
 * XREFs of ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801D63D0
 * Callers:
 *     _lambda_e45c2b6843ca812bad1c21f256123dd9_::operator() @ 0x1803B6D0C (_lambda_e45c2b6843ca812bad1c21f256123dd9_--operator().c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?RequestHideView@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBW4HideViewBehaviorOptions@5673@@Z @ 0x1801D65A4 (-RequestHideView@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Windo.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801D65E8 (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A8D4 (--1-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A8FC (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@2@XZ @ 0x18028AC44 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028BDDC (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180294B9C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802952B4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 *     ?UndockedSearchAppExperienceManager_RequestSearchAppToHide@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802CE67C (-UndockedSearchAppExperienceManager_RequestSearchAppToHide@SearchAppExperienceManagerTelemetry@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal(RTL_SRWLOCK *this)
{
  __int64 v2; // rax
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rbx
  RTL_SRWLOCK *v4; // rdi
  __int64 *v5; // r14
  void (__fastcall ****v6)(_QWORD, __int64 *, __int64 *); // rsi
  void (__fastcall ***v7[2])(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-49h] BYREF
  void **v8; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  char v12; // [rsp+60h] [rbp-9h]
  _BYTE v13[8]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v14[64]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+67h] BYREF
  int v16; // [rsp+D8h] [rbp+6Fh] BYREF

  v8 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  v9[0] = 0LL;
  v9[1] = &v8;
  v9[2] = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,>(v13);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool(&this[111]) )
  {
    v2 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::watch_errors(
           &this[111],
           v14);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator=(&v8, v2);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v14);
  }
  v3 = 0LL;
  v7[0] = 0LL;
  v4 = this + 37;
  AcquireSRWLockShared(this + 37);
  v5 = (__int64 *)&this[38];
  if ( v7 != (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v5;
    v7[0] = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v5;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v7);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  v15 = 0LL;
  if ( winrt::Windows::Foundation::operator==(v7, &v15) )
  {
    v6 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current();
    if ( v7 != v6 )
    {
      if ( v3 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v7);
      v3 = *v6;
      *v6 = 0LL;
      v7[0] = v3;
    }
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
    AcquireSRWLockExclusive(v4);
    v15 = 0LL;
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5, &v15) )
      winrt::Windows::Foundation::IUnknown::operator=(v5, (__int64 *)v7);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_RequestSearchAppToHide();
  LODWORD(v15) = 0;
  v16 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::RequestHideView(
    v7,
    &v16,
    &v15);
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>(v13);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v9);
}
