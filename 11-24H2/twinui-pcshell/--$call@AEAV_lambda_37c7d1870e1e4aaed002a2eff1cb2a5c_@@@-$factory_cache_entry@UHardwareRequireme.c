/*
 * XREFs of ??$call@AEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@?$factory_cache_entry@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18058E71C
 * Callers:
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics2@2345@V_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@impl@winrt@@YA?A_P$$QEAV_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_@@@Z @ 0x18058F338 (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsSta.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F6FB0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>::call<_lambda_37c7d1870e1e4aaed002a2eff1cb2a5c_ &>(
        __int64 a1,
        unsigned int **a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int *v4; // r8
  unsigned int *v5; // rdx
  int v6; // eax
  unsigned int *v7; // r8
  unsigned int *v8; // rdx
  int v9; // eax
  char v10; // bl
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+38h] [rbp-21h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+48h] [rbp-11h] BYREF
  __int128 v16; // [rsp+50h] [rbp-9h]
  __int64 v17[3]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18[7]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64 *, __int64 *); // [rsp+D8h] [rbp+7Fh] BYREF

  v19 = a1;
  v17[0] = (__int64)L"WindowsUdk.System.Profile.HardwareRequirements";
  v17[1] = 46LL;
  winrt::param::hstring::hstring((__int64)v18, v17);
  v21 = 0LL;
  v15 = 0;
  v16 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v19,
    v18,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>,
    (__int64)&v21);
  winrt::check_hresult(&v20, v19, (__int64)&v15);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  v14 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v21;
  if ( v21 && (v12 = 0LL, (**v21)(v21, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12), (v13 = v12) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
    v17[2] = (__int64)&qword_1808CB098;
    _InterlockedIncrement64(&qword_1808CB098);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>,
            (signed __int64)v21,
            0LL) )
    {
      v14 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB0A0);
    }
    v4 = a2[1];
    v5 = *a2;
    LOBYTE(v19) = 0;
    v15 = 0;
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>
                                                                       + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics2>,
           *v5,
           *v4,
           &v19);
    winrt::check_hresult((int *)&v21, v6, (__int64)&v15);
    _InterlockedDecrement64(&qword_1808CB098);
  }
  else
  {
    v7 = a2[1];
    v8 = *a2;
    LOBYTE(v19) = 0;
    v15 = 0;
    v16 = 0LL;
    v9 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD), _QWORD, _QWORD, __int64 *))(*v3)[6])(
           v3,
           *v8,
           *v7,
           &v19);
    winrt::check_hresult(&v20, v9, (__int64)&v15);
  }
  v10 = v19;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return v10;
}
