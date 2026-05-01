/*
 * XREFs of ??$call@AEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@?$factory_cache_entry@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058E9D4
 * Callers:
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058F3D0 (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRe_ea_18058F3D0.c)
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
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>::call<_lambda_7268e45c73438b7c97da070512f3e575_ &>(
        __int64 a1,
        unsigned int **a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int *v4; // rdx
  int v5; // eax
  unsigned int *v6; // rdx
  int v7; // eax
  char v8; // bl
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h] BYREF
  void (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-19h] BYREF
  int v13; // [rsp+38h] [rbp-11h] BYREF
  __int128 v14; // [rsp+40h] [rbp-9h]
  __int64 v15[3]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v16[7]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+B0h] [rbp+67h] BYREF
  int v18; // [rsp+C0h] [rbp+77h] BYREF
  void (__fastcall ***v19)(_QWORD, __int64 *, __int64 *); // [rsp+C8h] [rbp+7Fh] BYREF

  v17 = a1;
  v15[0] = (__int64)L"WindowsUdk.System.Profile.HardwareRequirements";
  v15[1] = 46LL;
  winrt::param::hstring::hstring((__int64)v16, v15);
  v19 = 0LL;
  v13 = 0;
  v14 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v17,
    v16,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
    (__int64)&v19);
  winrt::check_hresult(&v18, v17, (__int64)&v13);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
  v12 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
  if ( v19 && (v10 = 0LL, (**v19)(v19, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v11 = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    v15[2] = (__int64)&qword_1808CB0B8;
    _InterlockedIncrement64(&qword_1808CB0B8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
            (signed __int64)v19,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB0C0);
    }
    v4 = *a2;
    LOBYTE(v17) = 0;
    v13 = 0;
    v14 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>
                                                               + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
           *v4,
           &v17);
    winrt::check_hresult((int *)&v19, v5, (__int64)&v13);
    _InterlockedDecrement64(&qword_1808CB0B8);
  }
  else
  {
    v6 = *a2;
    LOBYTE(v17) = 0;
    v13 = 0;
    v14 = 0LL;
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(*v3)[6])(v3, *v6, &v17);
    winrt::check_hresult(&v18, v7, (__int64)&v13);
  }
  v8 = v17;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  return v8;
}
