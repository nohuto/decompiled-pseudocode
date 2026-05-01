/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802BF884
 * Callers:
 *     _CVirtualDesktopManager::GetCurrentDesktopCollection_::_1_::dtor$0 @ 0x1806CE22C (_CVirtualDesktopManager--GetCurrentDesktopCollection_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor$0 @ 0x1806CE2B1 (_CVirtualDesktopManager--UpdateViewVisibility_--_1_--dtor$0.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor$4 @ 0x1806F2A8C (_CVirtualDesktopManager--SwitchDesktopInternalPrivate_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(a1);
}
