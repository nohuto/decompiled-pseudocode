/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___::_CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___ @ 0x1801E87CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___::_scalar_deleting_destructor_ @ 0x1801E9F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___--_scala.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___::_CTaskWrapper__lambda_e7bb90a6b8bac423fd1716c72f93d12a___(
        __int64 a1)
{
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
