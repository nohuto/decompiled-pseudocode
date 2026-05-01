/*
 * XREFs of ??R?$_Func_class@XUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEBAXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801EDE74
 * Callers:
 *     _lambda_7e3c35272eede790d9e76bfd6c5eee9b_::operator() @ 0x1805CC2D8 (_lambda_7e3c35272eede790d9e76bfd6c5eee9b_--operator().c)
 *     _lambda_c7aa1fe8fcaf8b050e3a6ee5d1e3d6ce_::operator() @ 0x1805CCA74 (_lambda_c7aa1fe8fcaf8b050e3a6ee5d1e3d6ce_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_class<void,winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::operator()(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x1801EDEB1LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
}
