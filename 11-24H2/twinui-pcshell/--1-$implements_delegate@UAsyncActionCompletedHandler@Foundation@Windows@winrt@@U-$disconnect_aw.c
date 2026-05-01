/*
 * XREFs of ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@QEAA@XZ @ 0x18032D0F4
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x1803322F0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>>>::~implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>>>(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  return winrt::impl::disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>::~disconnect_aware_handler<1,winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>>((__int64 *)(a1 + 16));
}
