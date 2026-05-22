/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018B880
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018B9F0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ??1?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18018BD70 (--1-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x18018BDB8 (--1PenHapticDevice@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18018EB5C (-_Change_array@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 *     _std::vector_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenHapticInterface_wil::err_exception_policy__const_&__::_1_::catch$0 @ 0x1801D1161 (_std--vector_wil--com_ptr_t_PenHapticInterface_wil--err_exception_policy__std--allocator_wil--co.c)
 * Callees:
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
