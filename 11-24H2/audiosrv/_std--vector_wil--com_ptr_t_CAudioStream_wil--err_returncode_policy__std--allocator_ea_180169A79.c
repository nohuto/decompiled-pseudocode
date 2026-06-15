/*
 * XREFs of _std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch$1 @ 0x180169A79
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_Insert_counted_range_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_____::_1_::catch_1(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 **v3; // rdi

  v2 = (__int64 *)a2[15];
  v3 = (__int64 **)a2[4];
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(&v2[a2[17]], *v3);
  *v3 = v2;
  throw;
}
