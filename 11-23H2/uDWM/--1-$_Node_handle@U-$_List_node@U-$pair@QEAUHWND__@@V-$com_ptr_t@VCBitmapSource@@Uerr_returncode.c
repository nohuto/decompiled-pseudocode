/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800F8C6C
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PreTransition_::_1_::dtor$3 @ 0x1800F9927 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800F9927.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAPEAXI@Z @ 0x1800F904C (--_G-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA.c)
 */

__int64 __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>(
        void **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)*a1;
  if ( v2 )
  {
    std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::`scalar deleting destructor'(v2 + 16);
    result = std::_Deallocate<16,0>(*a1, 0x20uLL);
    *a1 = 0LL;
  }
  return result;
}
