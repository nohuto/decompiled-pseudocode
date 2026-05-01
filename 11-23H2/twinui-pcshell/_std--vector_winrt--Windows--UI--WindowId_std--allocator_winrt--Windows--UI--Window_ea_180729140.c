/*
 * XREFs of _std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId___::_Emplace_reallocate_winrt::Windows::UI::WindowId_const_&__::_1_::catch$9 @ 0x180729140
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId___::_Emplace_reallocate_winrt::Windows::UI::WindowId_const____::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
