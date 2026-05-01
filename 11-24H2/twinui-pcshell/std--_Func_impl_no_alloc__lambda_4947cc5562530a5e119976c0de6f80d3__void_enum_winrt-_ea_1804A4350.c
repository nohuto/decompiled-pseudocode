/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1804A4350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1802409D0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?ReportVisibilityForMonitor@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180240A10 (-ReportVisibilityForMonitor@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoord.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ @ 0x180372134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_41356296@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4947cc5562530a5e119976c0de6f80d3__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call(
        __int64 a1,
        unsigned int *a2)
{
  unsigned int v2; // edi
  char IsEnabled; // al
  __int64 v5; // rdx
  __int64 *v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v7 = *a2;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_41356296>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_41356296>::GetImpl'::`2'::impl);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (__int64 *)(v5 + 392);
  if ( IsEnabled )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator3<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::ReportVisibilityForMonitor(
      (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v6,
      *(_QWORD *)(v5 + 480),
      &v7);
    if ( v2 )
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) = 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      v6,
      &v7);
  }
}
