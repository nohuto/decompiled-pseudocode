/*
 * XREFs of ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004CCB0
 * Callers:
 *     ??$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18004CF48 (--$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@wi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x18004CD94 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@1@AEBV?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@1@@Z @ 0x18004CE34 (--0-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V-$_Uhash_compa.c)
 *     ??0?$producers_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x180096D48 (--0-$producers_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::WindowJointResizeTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this)
{
  const struct std::nothrow_t *v2; // rdx
  _QWORD *v3; // rax
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>();
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v5 = (char *)this + 48;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL, v2);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 7) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 13) = 8LL;
  *((_DWORD *)this + 12) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (char *)this + 72,
    16LL,
    *((_QWORD *)this + 7));
  HIDWORD(v5) = ((unsigned __int64)this + 112) >> 32;
  LODWORD(v5) = 0;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,0>>(
    (char *)this + 112,
    &v5);
  *((_DWORD *)this + 44) = 0;
  return this;
}
