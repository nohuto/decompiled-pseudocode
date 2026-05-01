/*
 * XREFs of _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$6 @ 0x180543A71
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualDesktopController::SwitchToDesktop_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 96));
}
