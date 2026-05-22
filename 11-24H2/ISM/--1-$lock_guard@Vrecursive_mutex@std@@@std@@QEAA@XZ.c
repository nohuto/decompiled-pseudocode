/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x18007878C
 * Callers:
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x1801CFB22 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _PointerInputMediator::OnNewFrame_::_1_::dtor$0 @ 0x1801CFC88 (_PointerInputMediator--OnNewFrame_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x1801CFD14 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801CFD26 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x1801CFD5C (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _PointerInputMediator::OnForwardedToGestureTargeting_::_1_::dtor$0 @ 0x1801D145E (_PointerInputMediator--OnForwardedToGestureTargeting_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x1801D3144 (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801D359F (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1801D5B65 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x1801D71AC (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801D9A7E (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
