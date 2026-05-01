/*
 * XREFs of CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_InitCoro$2 @ 0x180273C50 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@V-$vector@USnapLaunchTarg.c)
 *     ??$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System@WindowsUdk@winrt@@@ZUIntegratedServicesGeographicRegionPolicies@2345@U12345@V_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@impl@winrt@@YA?A_P$$QEAV_lambda_45962ca3e1ade70bce395d2c61b5b2dd_@@@Z @ 0x18025E254 (--$call_factory_cast@P6A_NAEBUIIntegratedServicesGeographicRegionPoliciesStatics7@Profile@System.c)
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@0@XZ @ 0x1802605F8 (--$start@V-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180260EE0 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261068 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x180261368 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x18026533C (-InvokeSearch@CopilotHotkeyManager@@QEAAXXZ.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180265588 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 *     ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x180271B64 (-LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA-AU-$IAsyncOperation@_N@Foundation@Windows@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID54380617@@@details@wil@@QEAA_NXZ @ 0x180274BA0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID54380617@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption@@@details@wil@@QEAA_NXZ @ 0x180274D10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOpt.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync__ResumeCoro_1(__int64 a1)
{
  AIAssistancePolicy *v1; // rcx
  char v2; // al
  __int64 v3; // rcx
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        tip2::start<tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>>((_QWORD *)(a1 + 16));
        if ( AIAssistancePolicy::IsCopilotSupportedOSEdition(v1) )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::operator->(
                        a1 + 16,
                        (__int64 *)(a1 + 24))
                   + 264) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>((void **)(a1 + 24));
          if ( CopilotHotkeyManager::InvokeCopilotOrCustomOption(*(_QWORD *)(a1 + 82), *(_DWORD *)(a1 + 90)) )
            goto LABEL_13;
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID54380617>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID54380617>::GetImpl'::`2'::impl) )
          {
            v2 = winrt::impl::call_factory_cast<bool (*)(winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7 const &),winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies,winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics7,_lambda_45962ca3e1ade70bce395d2c61b5b2dd_>();
            v3 = a1 + 16;
            if ( !v2 )
            {
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::operator->(
                            v3,
                            (__int64 *)(a1 + 48))
                       + 266) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>((void **)(a1 + 48));
              CopilotHotkeyManager::InvokeSearch(*(CopilotHotkeyManager **)(a1 + 82));
              goto LABEL_13;
            }
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::operator->(
                          v3,
                          (__int64 *)(a1 + 32))
                     + 265) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>((void **)(a1 + 32));
            CopilotHotkeyManager::LaunchHardwareKeySettings(
              *(_QWORD *)(a1 + 82),
              (winrt::Windows::Foundation::IUnknown *)(a1 + 40));
            v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 40);
          }
          else
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::operator->(
                          a1 + 16,
                          (__int64 *)(a1 + 56))
                     + 265) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>((void **)(a1 + 56));
            CopilotHotkeyManager::LaunchHardwareKeySettings(
              *(_QWORD *)(a1 + 82),
              (winrt::Windows::Foundation::IUnknown *)(a1 + 64));
            v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 64);
          }
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v4);
        }
        else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_CopilotHWKeyFallbackOption>::GetImpl'::`2'::impl) )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::operator->(
                        a1 + 16,
                        (__int64 *)(a1 + 72))
                   + 266) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>((void **)(a1 + 72));
          CopilotHotkeyManager::InvokeSearch(*(CopilotHotkeyManager **)(a1 + 82));
        }
LABEL_13:
        tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)(a1 + 16));
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
          a1,
          (_BYTE *)(a1 + 80));
LABEL_14:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
