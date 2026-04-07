/*
 * XREFs of ??1?$list@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1800F8CEC
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::WindowJointResizeTransitionHandler_::_1_::dtor$30 @ 0x1800673B6 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800673B6.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F8610 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Ue.c)
 */

__int64 __fastcall std::list<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>::~list<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16,0>((void *)*a1, 0x20uLL);
}
