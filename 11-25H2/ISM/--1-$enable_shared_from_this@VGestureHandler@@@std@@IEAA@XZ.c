/*
 * XREFs of ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x1800941EC
 * Callers:
 *     _std::_Ref_count_obj2_CustomCursorApplication2_::_Ref_count_obj2_CustomCursorApplication2__std::shared_ptr_SystemCursorService2__unsigned_int_&_BamoCustomCursorControllerClient2Proxy___&__::_1_::dtor$2 @ 0x1801CED6A (_std--_Ref_count_obj2_CustomCursorApplication2_--_Ref_count_obj2_CustomCursorApplication2__std--.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$1 @ 0x1801CF026 (_SystemCursor2--SystemCursor2_--_1_--dtor$1.c)
 *     _SystemCursorService2::SystemCursorService2_::_1_::dtor$0 @ 0x1801CF052 (_SystemCursorService2--SystemCursorService2_--_1_--dtor$0.c)
 *     _GestureHandler::GestureHandler_::_1_::dtor$1 @ 0x1801CF0E8 (_GestureHandler--GestureHandler_--_1_--dtor$1.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$4 @ 0x1801D0540 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$4.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<GestureHandler>::~enable_shared_from_this<GestureHandler>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
