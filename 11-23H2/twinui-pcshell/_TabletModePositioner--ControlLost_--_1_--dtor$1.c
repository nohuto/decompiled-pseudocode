/*
 * XREFs of _TabletModePositioner::ControlLost_::_1_::dtor$1 @ 0x1805BAFA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModePositioner::ControlLost_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 48));
}
