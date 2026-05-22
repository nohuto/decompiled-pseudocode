/*
 * XREFs of _std::vector_Windows::UI::Internal::Input::TouchInjectionContact_std::allocator_Windows::UI::Internal::Input::TouchInjectionContact___::_Emplace_reallocate_Windows::UI::Internal::Input::TouchInjectionContact_const_&__::_1_::catch$0 @ 0x1801D7E96
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::UI::Internal::Input::TouchInjectionContact_std::allocator_Windows::UI::Internal::Input::TouchInjectionContact___::_Emplace_reallocate_Windows::UI::Internal::Input::TouchInjectionContact_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 88), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 80)));
  throw;
}
