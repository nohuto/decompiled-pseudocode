/*
 * XREFs of ?InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x1805D3DD4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_InitCoro$2 @ 0x1805D3518 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_InitCoro$2.c)
 */

__int64 *__fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync(__int64 a1, __int64 *a2)
{
  void *v4; // rax
  int v6; // [rsp+288h] [rbp+10h] BYREF

  v4 = operator new(0x250uLL);
  v6 = 0;
  LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
