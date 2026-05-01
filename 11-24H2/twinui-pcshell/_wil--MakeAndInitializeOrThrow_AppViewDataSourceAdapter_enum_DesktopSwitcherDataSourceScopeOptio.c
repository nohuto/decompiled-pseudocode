/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions_&_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___winrt::Windows::Internal::UI::Shell::IWindowTabExtension_&__::_1_::dtor$0 @ 0x1806DCC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0EE8 (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_DesktopSwitcherDataSourceScopeOptions___IApplicationViewCollection_____IApplicationViewIconLoader_____IImmersiveShellHookService_____Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___winrt::Windows::Internal::UI::Shell::IWindowTabExtension____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(*(volatile signed __int64 ***)(a2 + 96));
  }
  return result;
}
