/*
 * XREFs of _std::vector_winrt::Windows::Internal::Shell::RegistrationData_std::allocator_winrt::Windows::Internal::Shell::RegistrationData___::_Emplace_reallocate_winrt::Windows::Internal::Shell::RegistrationData_const_&__::_1_::catch$3 @ 0x1807022AE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAURegistrationData@Shell@Internal@Windows@winrt@@QEAU12345@AEAV?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1801C61D0 (--$_Destroy_range@V-$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPE.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::Internal::Shell::RegistrationData_std::allocator_winrt::Windows::Internal::Shell::RegistrationData___::_Emplace_reallocate_winrt::Windows::Internal::Shell::RegistrationData_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::RegistrationData>>(
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 112),
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 136));
  throw;
}
