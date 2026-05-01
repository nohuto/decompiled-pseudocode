/*
 * XREFs of _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::operator() @ 0x1803B6BF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___::Run @ 0x1803BF500 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e40398d42ff5cb66d230c2cd21ebd5c8___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x1800BFD78 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028BF04 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291D80 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x1803B5088 (--0-$test_watcher@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@d.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803B55F0 (--1-$com_ptr_t@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@deta.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803B584C (--1-$test_watcher@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _BYTE v5[56]; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v6; // [rsp+58h] [rbp-8h]
  __int64 v7; // [rsp+80h] [rbp+20h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h] BYREF
  volatile signed __int32 *v9; // [rsp+90h] [rbp+30h] BYREF

  v7 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 16), &v7) >= 0 && v7 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                  *(_QWORD *)(a1 + 24) + 832LL,
                  &v8)
             + 292) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v8);
    tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>((struct wil::details::IFailureCallback *)v5);
    v9 = v6;
    if ( v6 )
      _InterlockedIncrement(v6 + 112);
    tip2::test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>::~test_watcher<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>>((__int64)v5);
    v2 = (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) - 16LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) != 0LL);
    v3 = (_QWORD *)(v2 + 56);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>(
      v2 + 56,
      v2,
      a1 + 8);
    if ( !*v3 )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                    *(_QWORD *)(a1 + 24) + 832LL,
                    &v8)
               + 292) = 0;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v8);
      UndockedSearchAppExperienceManager::Activate(
        *(UndockedSearchAppExperienceManager **)(a1 + 24),
        (const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *)(a1 + 8),
        *(_BYTE *)a1);
    }
    wil::com_ptr_t<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>,wil::err_returncode_policy>((void **)&v9);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
}
