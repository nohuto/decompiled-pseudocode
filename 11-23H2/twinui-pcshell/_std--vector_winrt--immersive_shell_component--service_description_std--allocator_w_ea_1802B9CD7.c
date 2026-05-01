/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1802B9CD7
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1801109D4 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 **v3; // rbx

  v3 = *(__int64 ***)(a2 + 32);
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(
    *(__int64 **)(a2 + 152),
    *v3);
  *v3 = *(__int64 **)(a2 + 136);
  throw;
}
