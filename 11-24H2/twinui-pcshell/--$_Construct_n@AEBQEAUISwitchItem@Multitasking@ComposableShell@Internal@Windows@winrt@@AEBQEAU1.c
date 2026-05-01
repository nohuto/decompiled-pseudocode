/*
 * XREFs of ??$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@1@Z @ 0x1806BD6D4
 * Callers:
 *     ??0?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1806BD79C (--0-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@UISwi.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??1?$_Tidy_guard@V?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806BD828 (--1-$_Tidy_guard@V-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Construct_n<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem * const &,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem * const &>(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  size_t size_of; // rax
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 *i; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[a2];
    v11 = *a4;
    for ( i = *a3; i != v11; ++i )
    {
      *v10 = *i;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v10++);
    }
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10,
      (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
    v13 = 0LL;
    a1[1] = v10;
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(&v13);
  }
}
