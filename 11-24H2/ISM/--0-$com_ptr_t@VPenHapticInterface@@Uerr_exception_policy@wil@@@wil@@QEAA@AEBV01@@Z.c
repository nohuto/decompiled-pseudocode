/*
 * XREFs of ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010B360
 * Callers:
 *     ??0RotationWatcher@@AEAA@XZ @ 0x18010B394 (--0RotationWatcher@@AEAA@XZ.c)
 *     wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::__clone @ 0x18010B8C0 (wistd--__function--__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_--__clone.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x180187DA0 (--$_Emplace_back_with_unused_capacity@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180187DCC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180188028 (--$emplace@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$co.c)
 *     ?SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z @ 0x180188458 (-SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x180188520 (-SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z.c)
 *     ?StopFeedbackImpl@PenHapticDevice@@QEAAJXZ @ 0x1801885DC (-StopFeedbackImpl@PenHapticDevice@@QEAAJXZ.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x180188668 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180190CF0 (-Haptics@PenInterface@@QEAA-AV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
