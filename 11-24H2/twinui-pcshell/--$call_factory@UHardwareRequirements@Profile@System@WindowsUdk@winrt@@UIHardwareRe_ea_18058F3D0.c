/*
 * XREFs of ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058F3D0
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics,_lambda_7268e45c73438b7c97da070512f3e575_>(
        unsigned int **a1)
{
  unsigned int *v1; // rdx
  int v2; // eax
  int v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]
  char v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_1808CB0B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics> )
  {
    v1 = *a1;
    v6 = 0;
    v4 = 0;
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>
                                                            + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
           *v1,
           &v6);
    winrt::check_hresult(&v7, v2, (__int64)&v4);
    _InterlockedDecrement64(&qword_1808CB0B8);
    return v6;
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB0B8);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>::call<_lambda_7268e45c73438b7c97da070512f3e575_ &>(
             0LL,
             a1);
  }
}
