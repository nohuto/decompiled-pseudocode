/*
 * XREFs of _CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor$4 @ 0x1806F2A8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(a2 + 128);
}
