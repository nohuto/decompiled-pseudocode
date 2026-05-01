/*
 * XREFs of ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x18020358C
 * Callers:
 *     ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x1802033FC (--$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 *     ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180298CF4 (--0-$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180288FDC (-CreateInstance@-$consume_Microsoft_UI_Xaml_IApplicationFactory@UIApplicationFactory@Xaml@UI@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a1;
  v4 = v3 + 8;
  v8 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v6 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = v6;
  }
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
