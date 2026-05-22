/*
 * XREFs of _std::vector_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__const_&__::_1_::catch$0 @ 0x1801D1161
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DAE6 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@QEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180106640 (-deallocate@-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018B880 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::deallocate(
    v3,
    *(char **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
