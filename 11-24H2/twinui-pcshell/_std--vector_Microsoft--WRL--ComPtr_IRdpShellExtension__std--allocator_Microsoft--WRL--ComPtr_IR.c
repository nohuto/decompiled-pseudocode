/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IRdpShellExtension__std::allocator_Microsoft::WRL::ComPtr_IRdpShellExtension_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IRdpShellExtension__const_&__::_1_::catch$1 @ 0x180703D20
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAXQEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_K@Z @ 0x1805DB85C (-deallocate@-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXP.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x180673030 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IRdpShellExtension__std::allocator_Microsoft::WRL::ComPtr_IRdpShellExtension_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IRdpShellExtension__const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
