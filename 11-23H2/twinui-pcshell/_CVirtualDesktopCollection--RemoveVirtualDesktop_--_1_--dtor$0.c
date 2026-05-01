/*
 * XREFs of _CVirtualDesktopCollection::RemoveVirtualDesktop_::_1_::dtor$0 @ 0x1802E7339
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopCollection::RemoveVirtualDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 120));
}
