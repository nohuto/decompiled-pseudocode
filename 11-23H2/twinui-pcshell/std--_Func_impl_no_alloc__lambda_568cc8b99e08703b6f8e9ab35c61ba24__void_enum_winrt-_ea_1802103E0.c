/*
 * XREFs of std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call @ 0x1802103E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Do_call(
        __int64 a1,
        unsigned int *a2)
{
  _QWORD *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 352LL);
  v4 = *a2;
  return winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
           v2,
           &v4);
}
