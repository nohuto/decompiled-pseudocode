/*
 * XREFs of _std::vector_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy____::_1_::catch$0 @ 0x1801D8642
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800647B0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1801084E0 (-deallocate@-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoSimpleHapticsControllerPrincipal_wil::err_returncode_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::deallocate(
    v3,
    *(char **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
