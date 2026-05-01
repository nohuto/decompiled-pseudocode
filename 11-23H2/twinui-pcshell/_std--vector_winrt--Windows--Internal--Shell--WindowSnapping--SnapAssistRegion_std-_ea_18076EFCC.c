/*
 * XREFs of _std::vector_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_std::allocator_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion___::_Reallocate_exactly_::_1_::catch$3 @ 0x18076EFCC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_std::allocator_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion___::_Reallocate_exactly_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 32LL * *(_QWORD *)(a2 + 72));
  throw;
}
