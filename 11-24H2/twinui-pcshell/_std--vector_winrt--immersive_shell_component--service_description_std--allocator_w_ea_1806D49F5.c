/*
 * XREFs of _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$4 @ 0x1806D49F5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18014AF30 (--$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V-$allocator@Use.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802C71D0 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802DE9B0 (--$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAU.c)
 */

void __fastcall __noreturn std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch_4(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  _OWORD *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v6; // rbx

  v3 = a2[19];
  v4 = (_OWORD *)a2[17];
  std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(
    (__int64)&v4[2 * v3],
    (__int64)&v4[4 * v3],
    v4);
  v5 = (__int64 *)a2[4];
  std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
    (__int64)&v4[4 * v3],
    *v5,
    (__int64)&v4[2 * v3]);
  v6 = (__int64 *)a2[5];
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v6, (__int64 *)*v5);
  *v5 = (__int64)v6;
  throw;
}
