/*
 * XREFs of ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800581F4
 * Callers:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x1800583DC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$2 @ 0x1801CFAB5 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::TryFindResumableAnimationTarget_::_1_::dtor$2 @ 0x1801D0B7E (_ShellGesturesProcessor--TryFindResumableAnimationTarget_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::SendCurrentGestureEvent_::_1_::dtor$0 @ 0x1801D2B55 (_ShellGesturesProcessor--SendCurrentGestureEvent_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$3 @ 0x1801D2B67 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$3.c)
 *     _GestureHandler::MakeCompletedCallback_::_1_::dtor$0 @ 0x1801D2B8B (_GestureHandler--MakeCompletedCallback_--_1_--dtor$0.c)
 *     _MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper_::_1_::dtor$0 @ 0x1801D4F9F (_MPCSlateDeadzoneHelper--MPCSlateDeadzoneHelper_--_1_--dtor$0.c)
 *     __lambda_1e0236e764b888af82930e6942f76e7d_::operator()_::_1_::dtor$0 @ 0x1801D65F0 (__lambda_1e0236e764b888af82930e6942f76e7d_--operator()_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::StartOperation_::_1_::dtor$0 @ 0x1801D665C (_ShellGesturesProcessor--StartOperation_--_1_--dtor$0.c)
 *     _GestureServices::CreateGestureHandler_::_1_::dtor$0 @ 0x1801D671B (_GestureServices--CreateGestureHandler_--_1_--dtor$0.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$1 @ 0x1801D676A (_SystemCursor2--SetShape_--_1_--dtor$1.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$0 @ 0x1801D68AC (_SystemCursor2--SystemCursor2_--_1_--dtor$0.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$2 @ 0x1801D68D4 (_SystemCursor2--SystemCursor2_--_1_--dtor$2.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$0 @ 0x1801D696E (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$6 @ 0x1801D69A8 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$6.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$2 @ 0x1801D69BA (_SystemCursor2--SetShape_--_1_--dtor$2.c)
 *     _SystemCursorService2::CreateCursorShape_::_1_::dtor$7 @ 0x1801D69CC (_SystemCursorService2--CreateCursorShape_--_1_--dtor$7.c)
 *     _GestureHandler::CancelOperation_::_1_::dtor$0 @ 0x1801D69DE (_GestureHandler--CancelOperation_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTracker__::_1_::dtor$4 @ 0x1801D9431 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTrack_ea_1801D9431.c)
 *     _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x1801D98E4 (_MPCSixDofProcessor--UpdateTouchpadDownleveling_--_1_--dtor$1.c)
 *     _std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979____::_1_::dtor$1 @ 0x1801D9B55 (_std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--share_ea_1801D9B55.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$3 @ 0x1801D9BA5 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$3.c)
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$0 @ 0x1801D9CAE (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$0.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::dtor$0 @ 0x1801D9CD2 (_HotKeyProcessor--RegisterHotKey_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$4 @ 0x1801D9D08 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$4.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
