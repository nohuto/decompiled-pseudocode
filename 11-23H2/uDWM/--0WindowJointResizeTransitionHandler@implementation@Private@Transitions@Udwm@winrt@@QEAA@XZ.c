/*
 * XREFs of ??0WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18001CF38
 * Callers:
 *     ??$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18001CBE0 (--$make@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@$$V@w.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x18001D0A4 (--0-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_compa.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x18001D11C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::WindowJointResizeTransitionHandler(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::Private::WindowJointResizeTransitionHandler,Udwm::Transitions::IBitmapManager>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v2 = (char *)this + 48;
  v5 = (char *)this + 48;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    v2 + 24,
    16LL,
    *((_QWORD *)v2 + 1));
  HIDWORD(v5) = ((unsigned __int64)this + 112) >> 32;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>(
    (char *)this + 112,
    &v5);
  *((_DWORD *)this + 44) = 0;
  return this;
}
