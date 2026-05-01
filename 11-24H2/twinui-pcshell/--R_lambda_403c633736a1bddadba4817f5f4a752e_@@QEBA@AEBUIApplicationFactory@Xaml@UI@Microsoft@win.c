/*
 * XREFs of ??R_lambda_403c633736a1bddadba4817f5f4a752e_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Microsoft@winrt@@@Z @ 0x180288EAC
 * Callers:
 *     ??0?$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180288D04 (--0-$XamlApplication_WASDK_base@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@She.c)
 *     ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x180288D9C (--$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x180050F60 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180288FDC (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_403c633736a1bddadba4817f5f4a752e_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct IUnknown *v5; // rax
  void *v6; // r8
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a1;
  v4 = v3 + 8;
  v8 = 0LL;
  v5 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  winrt::copy_from_abi((winrt *)&v8, v5, v6);
  result = winrt::impl::consume_Microsoft_UI_Xaml_IApplicationFactory<winrt::Microsoft::UI::Xaml::IApplicationFactory>::CreateInstance(
             a2,
             &v9,
             &v8,
             v4);
  if ( v8 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  if ( v9 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  return result;
}
