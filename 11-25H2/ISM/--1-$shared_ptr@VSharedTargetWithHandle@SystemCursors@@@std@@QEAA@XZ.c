/*
 * XREFs of ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800583E4
 * Callers:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x1800585CC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$2 @ 0x1801C8615 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::TryFindResumableAnimationTarget_::_1_::dtor$2 @ 0x1801C96DE (_ShellGesturesProcessor--TryFindResumableAnimationTarget_--_1_--dtor$2.c)
 *     _ShellGesturesProcessor::SendCurrentGestureEvent_::_1_::dtor$0 @ 0x1801CB6B5 (_ShellGesturesProcessor--SendCurrentGestureEvent_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$3 @ 0x1801CB6C7 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$3.c)
 *     _GestureHandler::MakeCompletedCallback_::_1_::dtor$0 @ 0x1801CB6EB (_GestureHandler--MakeCompletedCallback_--_1_--dtor$0.c)
 *     _MPCSlateDeadzoneHelper::MPCSlateDeadzoneHelper_::_1_::dtor$0 @ 0x1801CDCEA (_MPCSlateDeadzoneHelper--MPCSlateDeadzoneHelper_--_1_--dtor$0.c)
 *     _SystemCursor2::AddShape_::_1_::dtor$0 @ 0x1801CED58 (_SystemCursor2--AddShape_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::StartOperation_::_1_::dtor$0 @ 0x1801CEDC4 (_ShellGesturesProcessor--StartOperation_--_1_--dtor$0.c)
 *     _GestureServices::CreateGestureHandler_::_1_::dtor$0 @ 0x1801CEE83 (_GestureServices--CreateGestureHandler_--_1_--dtor$0.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$1 @ 0x1801CEED2 (_SystemCursor2--SetShape_--_1_--dtor$1.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$0 @ 0x1801CF014 (_SystemCursor2--SystemCursor2_--_1_--dtor$0.c)
 *     _SystemCursor2::SystemCursor2_::_1_::dtor$2 @ 0x1801CF03C (_SystemCursor2--SystemCursor2_--_1_--dtor$2.c)
 *     _SystemCursorShape2::SystemCursorShape2_::_1_::dtor$0 @ 0x1801CF0D6 (_SystemCursorShape2--SystemCursorShape2_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$6 @ 0x1801CF110 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$6.c)
 *     _SystemCursor2::SetShape_::_1_::dtor$2 @ 0x1801CF122 (_SystemCursor2--SetShape_--_1_--dtor$2.c)
 *     _SystemCursorService2::CreateCursorShape_::_1_::dtor$7 @ 0x1801CF134 (_SystemCursorService2--CreateCursorShape_--_1_--dtor$7.c)
 *     _GestureHandler::CancelOperation_::_1_::dtor$0 @ 0x1801CF146 (_GestureHandler--CancelOperation_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTracker__::_1_::dtor$4 @ 0x1801D1995 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualHotKeyTracker_VirtualHotKeyTrack_ea_1801D1995.c)
 *     _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$1 @ 0x1801D1E5E (_MPCSixDofProcessor--UpdateTouchpadDownleveling_--_1_--dtor$1.c)
 *     _std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_7cc4ca75940c0ea695d2d6398f0fa979____::_1_::dtor$1 @ 0x1801D2072 (_std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--share_ea_1801D2072.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$3 @ 0x1801D20C2 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$3.c)
 *     __lambda_9193c85b91a90ecd300d0af0c9084680_::operator()_::_1_::dtor$0 @ 0x1801D2151 (__lambda_9193c85b91a90ecd300d0af0c9084680_--operator()_--_1_--dtor$0.c)
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$0 @ 0x1801D21E0 (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$0.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$5 @ 0x1801D2204 (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$5.c)
 *     _HotKeyProcessor::FindRegisteredHotKey_::_1_::dtor$4 @ 0x1801D223A (_HotKeyProcessor--FindRegisteredHotKey_--_1_--dtor$4.c)
 *     _HotKeyProcessor::RegisterHotKey_::_1_::dtor$0 @ 0x1801D224C (_HotKeyProcessor--RegisterHotKey_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
