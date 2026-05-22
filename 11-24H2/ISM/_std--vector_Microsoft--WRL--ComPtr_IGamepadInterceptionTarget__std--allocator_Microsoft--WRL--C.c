/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const_&__::_1_::catch$0 @ 0x1801D6E2B
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180106BCC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801084E0 (-deallocate@-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::deallocate(
    v3,
    *(char **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
