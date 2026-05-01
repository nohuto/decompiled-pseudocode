/*
 * XREFs of _std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const_&__::_1_::catch$3 @ 0x1806F98DA
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAXQEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_K@Z @ 0x1805DB85C (-deallocate@-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXP.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
    *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 112),
    *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 120));
  std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 136));
  throw;
}
