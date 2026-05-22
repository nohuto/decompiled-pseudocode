/*
 * XREFs of ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8
 * Callers:
 *     ??1PenInterface@@UEAA@XZ @ 0x18018834C (--1PenInterface@@UEAA@XZ.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018B880 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil.c)
 *     ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018BB40 (--$emplace@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$co.c)
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C220 (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018DA90 (-RemoveInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018DC20 (-SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018DDF0 (-SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@.c)
 *     ?StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018E400 (-StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018E4FC (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18018EBD0 (-erase@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 *     _PenInterface::PenInterface_::_1_::dtor$5 @ 0x1801D0FBD (_PenInterface--PenInterface_--_1_--dtor$5.c)
 *     _PenHapticDevice::RemoveInterface_::_1_::dtor$0 @ 0x1801D11C3 (_PenHapticDevice--RemoveInterface_--_1_--dtor$0.c)
 *     _PenHapticDevice::SendHapticFeedbackForPlayCount_::_1_::dtor$0 @ 0x1801D11D5 (_PenHapticDevice--SendHapticFeedbackForPlayCount_--_1_--dtor$0.c)
 *     _PenHapticDevice::StopFeedback_::_1_::dtor$0 @ 0x1801D11E7 (_PenHapticDevice--StopFeedback_--_1_--dtor$0.c)
 *     _PenHapticDevice::UpdateBamoProperties_::_1_::dtor$2 @ 0x1801D1232 (_PenHapticDevice--UpdateBamoProperties_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
