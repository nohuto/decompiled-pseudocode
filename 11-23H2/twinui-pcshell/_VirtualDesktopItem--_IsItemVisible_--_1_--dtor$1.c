/*
 * XREFs of _VirtualDesktopItem::_IsItemVisible_::_1_::dtor$1 @ 0x180571D69
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopItem::_IsItemVisible_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 88));
}
