/*
 * XREFs of ??$call_factory_cast@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@ZUPowerManager@2345@U62345@V_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d6f5de8facc06583c35b6799ac4a0daa_@@@Z @ 0x1805C438C
 * Callers:
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A?AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4PowerSupplyStatus@Power@System@Windows@2@AEBUIPowerManagerStatics@4562@@Z@Z @ 0x1805C407C (--$call@P6A-AW4PowerSupplyStatus@Power@System@Windows@winrt@@AEBUIPowerManagerStatics@2345@@Z@-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 winrt::impl::call_factory_cast<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &),winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_d6f5de8facc06583c35b6799ac4a0daa_>()
{
  int v0; // eax
  int v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v4)(__int64 *); // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1808CC5F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics> )
  {
    LODWORD(v4) = 0;
    v2 = 0;
    v3 = 0LL;
    v0 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall **)(__int64 *)))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>
                                                                                + 96LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>,
           &v4);
    winrt::check_hresult(&v5, v0, (__int64)&v2);
    _InterlockedDecrement64(&qword_1808CC5F8);
    return (unsigned int)v4;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC5F8);
    v4 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction;
    return winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<enum winrt::Windows::System::Power::PowerSupplyStatus (*)(winrt::Windows::System::Power::IPowerManagerStatics const &)>(
             0LL,
             &v4);
  }
}
