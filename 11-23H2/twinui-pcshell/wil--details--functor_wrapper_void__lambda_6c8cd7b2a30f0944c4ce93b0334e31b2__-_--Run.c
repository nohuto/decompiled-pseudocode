/*
 * XREFs of wil::details::functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2__&_::Run @ 0x180071230
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_6c8cd7b2a30f0944c4ce93b0334e31b2____::Run(__int64 a1)
{
  __int64 v1; // rdx
  BOOL v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = **(_BYTE **)(v1 + 8) == 0;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    *(_QWORD *)v1 + 880LL,
    &v3);
  return 0LL;
}
