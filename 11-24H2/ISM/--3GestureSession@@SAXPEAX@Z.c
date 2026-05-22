/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x18006981C
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$7 @ 0x1801CFEF0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$7.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$10 @ 0x1801D0220 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$10.c)
 *     _InputContext::Create_::_1_::dtor$0 @ 0x1801D1180 (_InputContext--Create_--_1_--dtor$0.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x1801D13FC (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x1801D1890 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _DWMCursor::Create_::_1_::dtor$0 @ 0x1801D1C3A (_DWMCursor--Create_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$1 @ 0x1801D1C5E (_InjectionRawInputProvider--Create_--_1_--dtor$1.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801D22EA (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1801D6A50 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$8 @ 0x1801D6AFE (_EdgyProcessorTarget--Initialize_--_1_--dtor$8.c)
 *     _HapticDeviceManager::AttachRIMDevice_::_1_::dtor$1 @ 0x1801D872E (_HapticDeviceManager--AttachRIMDevice_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
