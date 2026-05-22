/*
 * XREFs of ?deallocate@?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801084E0
 * Callers:
 *     _std::vector_IGamepadInterceptionListener___std::allocator_IGamepadInterceptionListener_____::_Emplace_reallocate_IGamepadInterceptionListener___const_&__::_1_::catch$0 @ 0x1801D6E01 (_std--vector_IGamepadInterceptionListener___std--allocator_IGamepadInterceptionListener_____--_E.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__std::allocator_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IGamepadInterceptionTarget__const_&__::_1_::catch$0 @ 0x1801D6E2B (_std--vector_Microsoft--WRL--ComPtr_IGamepadInterceptionTarget__std--allocator_Microsoft--WRL--C.c)
 *     _std::vector_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__const_&__::_1_::catch$0 @ 0x1801D84E8 (_std--vector_wil--com_ptr_t_PenHapticInterface_wil--err_exception_policy__std--allocator_wil--co.c)
 *     _std::vector_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy____::_1_::catch$0 @ 0x1801D8642 (_std--vector_wil--com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil--err_returncode_policy__std.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::deallocate(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
