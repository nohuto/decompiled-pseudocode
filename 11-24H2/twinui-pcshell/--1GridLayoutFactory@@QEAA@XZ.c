/*
 * XREFs of ??1GridLayoutFactory@@QEAA@XZ @ 0x1804C7A04
 * Callers:
 *     _CSwitchItemGrid::v_LayoutChildren_::_1_::dtor$3 @ 0x1806EFEDA (_CSwitchItemGrid--v_LayoutChildren_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall GridLayoutFactory::~GridLayoutFactory(GridLayoutFactory *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 67);
}
