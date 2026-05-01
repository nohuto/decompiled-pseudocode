/*
 * XREFs of _VirtualDesktopController::RemoveDesktop_::_1_::dtor$5 @ 0x1805434E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopController::RemoveDesktop_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
}
