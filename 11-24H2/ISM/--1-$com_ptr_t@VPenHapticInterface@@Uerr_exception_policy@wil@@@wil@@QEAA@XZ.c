/*
 * XREFs of ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801881B0
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180187D68 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil.c)
 *     ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180188028 (--$emplace@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$co.c)
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018835C (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801883D0 (-RemoveInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z @ 0x180188458 (-SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x180188520 (-SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z.c)
 *     ?StopFeedbackImpl@PenHapticDevice@@QEAAJXZ @ 0x1801885DC (-StopFeedbackImpl@PenHapticDevice@@QEAAJXZ.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x180188668 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180188AF4 (-erase@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x18018FE6C (--1PenInterface@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180191658 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 *     _PenHapticDevice::RemoveInterface_::_1_::dtor$0 @ 0x1801D854A (_PenHapticDevice--RemoveInterface_--_1_--dtor$0.c)
 *     _PenHapticDevice::SendHapticFeedbackForPlayCountImpl_::_1_::dtor$0 @ 0x1801D855C (_PenHapticDevice--SendHapticFeedbackForPlayCountImpl_--_1_--dtor$0.c)
 *     _PenHapticDevice::StopFeedbackImpl_::_1_::dtor$0 @ 0x1801D856E (_PenHapticDevice--StopFeedbackImpl_--_1_--dtor$0.c)
 *     _PenHapticDevice::UpdateBamoProperties_::_1_::dtor$2 @ 0x1801D85B9 (_PenHapticDevice--UpdateBamoProperties_--_1_--dtor$2.c)
 *     _PenInterface::PenInterface_::_1_::dtor$5 @ 0x1801D89DA (_PenInterface--PenInterface_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
