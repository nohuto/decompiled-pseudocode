/*
 * XREFs of _std::vector_std::_Loop_vals_t_std::allocator_std::_Loop_vals_t___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x18016807A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800E32BC (-deallocate@-$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::_Loop_vals_t_std::allocator_std::_Loop_vals_t___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<winrt::guid>::deallocate(a1, *(char **)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
