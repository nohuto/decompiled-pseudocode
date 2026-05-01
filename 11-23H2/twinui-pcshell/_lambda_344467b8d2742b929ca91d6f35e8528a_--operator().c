/*
 * XREFs of _lambda_344467b8d2742b929ca91d6f35e8528a_::operator() @ 0x180236338
 * Callers:
 *     wistd::__function::__func__lambda_344467b8d2742b929ca91d6f35e8528a__long___cdecl(void)_::operator() @ 0x180237A90 (wistd--__function--__func__lambda_344467b8d2742b929ca91d6f35e8528a__long___cdecl(void)_--operato.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x180239044 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_344467b8d2742b929ca91d6f35e8528a_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rbx
  __int64 v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::EnsureDashboardExtensionCreated(v2, &v8);
    if ( v8 && (v3 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v3 + 56)) )
    {
      v4 = winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
             (winrt::Windows::Foundation::IUnknown *)v9,
             &v8);
      v5 = *(_QWORD *)(v3 + 56);
      if ( !v5 )
        std::_Xbad_function_call();
      (*(void (__fastcall **)(__int64, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)v5 + 16LL))(v5, v4);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v4);
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -2147023728;
    }
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA42,
                           (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
                           v6);
  }
  return result;
}
