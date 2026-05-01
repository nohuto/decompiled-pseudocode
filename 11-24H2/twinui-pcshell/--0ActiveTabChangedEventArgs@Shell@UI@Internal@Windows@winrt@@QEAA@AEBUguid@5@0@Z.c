/*
 * XREFs of ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x1802A31C8
 * Callers:
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x18026D0C0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 * Callees:
 *     ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@0@Z @ 0x18026CCC0 (-CreateInstance@-$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTa.c)
 *     ??$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@?$factory_cache_entry@UActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIActiveTabChangedEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@Z @ 0x18057C73C (--$call@AEAV_lambda_0f5d06b182220372552e751da5d9ab64_@@@-$factory_cache_entry@UActiveTabChangedE.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *__fastcall winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs::ActiveTabChangedEventArgs(
        winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs *this,
        const struct winrt::guid *a2,
        const struct winrt::guid *a3)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_1808CB358);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory> )
  {
    winrt::impl::consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::CreateInstance(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>,
      this,
      (__int128 *)a2,
      (__int128 *)a3);
    _InterlockedDecrement64(&qword_1808CB358);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB358);
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs,winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::call<_lambda_0f5d06b182220372552e751da5d9ab64_ &>(
      this,
      this,
      v5);
  }
  return this;
}
