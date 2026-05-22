/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180072E28
 * Callers:
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$1 @ 0x1801C88DA (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$1.c)
 *     _DWMInputRouter::GetInitialTargetFromHitTestResult_::_1_::dtor$3 @ 0x1801C8B70 (_DWMInputRouter--GetInitialTargetFromHitTestResult_--_1_--dtor$3.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x1801C8B90 (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1801CB7B0 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Tidy(a1);
}
