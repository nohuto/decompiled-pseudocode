/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x180078AEC
 * Callers:
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1801C8682 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _PointerInputMediator::OnNewFrame_::_1_::dtor$0 @ 0x1801C87F4 (_PointerInputMediator--OnNewFrame_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x1801C8880 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801C8892 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x1801C88C8 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _PointerInputMediator::OnForwardedToGestureTargeting_::_1_::dtor$0 @ 0x1801C9FBE (_PointerInputMediator--OnForwardedToGestureTargeting_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x1801CBC92 (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801CC111 (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1801CE4B8 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x1801CF964 (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801D1F9B (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
