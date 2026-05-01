/*
 * XREFs of _std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const_&__::_1_::catch$0 @ 0x18022F499
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 *     ?deallocate@?$allocator@UUri@Foundation@Windows@winrt@@@std@@QEAAXQEAUUri@Foundation@Windows@winrt@@_K@Z @ 0x180249764 (-deallocate@-$allocator@UUri@Foundation@Windows@winrt@@@std@@QEAAXQEAUUri@Foundation@Windows@win.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 112),
    *(winrt::Windows::Foundation::IUnknown **)(a2 + 120));
  std::allocator<winrt::Windows::Foundation::Uri>::deallocate(v3, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 136));
  throw;
}
