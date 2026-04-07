/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAA@XZ @ 0x1800E4DA0
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::RegisterBitmap_::_1_::dtor$0 @ 0x1800F8B81 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--RegisterBitmap_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z @ 0x1800E5058 (--_G-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>::`scalar deleting destructor'(v2 + 16);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
    *a1 = 0LL;
  }
}
