/*
 * XREFs of _std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const_&__::_1_::catch$0 @ 0x1801D6E01
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801084E0 (-deallocate@-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@.c)
 */

void __fastcall __noreturn std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::deallocate(
    a1,
    *(char **)(a2 + 88),
    *(_QWORD *)(a2 + 80));
  throw;
}
