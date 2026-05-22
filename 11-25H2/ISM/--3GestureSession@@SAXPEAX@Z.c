/*
 * XREFs of ??3GestureSession@@SAXPEAX@Z @ 0x1800699DC
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$7 @ 0x1801C8A60 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$7.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$10 @ 0x1801C8D90 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$10.c)
 *     _InputContext::Create_::_1_::dtor$0 @ 0x1801C9CE0 (_InputContext--Create_--_1_--dtor$0.c)
 *     _InputForwardProcessor::Create_::_1_::dtor$1 @ 0x1801C9F5C (_InputForwardProcessor--Create_--_1_--dtor$1.c)
 *     _TouchProcessor::Initialize_::_1_::dtor$0 @ 0x1801CA27F (_TouchProcessor--Initialize_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Create_::_1_::dtor$1 @ 0x1801CAA00 (_DWMCursorBroker--Create_--_1_--dtor$1.c)
 *     _DWMCursor::Create_::_1_::dtor$0 @ 0x1801CAD8A (_DWMCursor--Create_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::Create_::_1_::dtor$1 @ 0x1801CADAE (_InjectionRawInputProvider--Create_--_1_--dtor$1.c)
 *     _MPCInputRouter::GetMPCTarget_::_1_::dtor$1 @ 0x1801CF1B8 (_MPCInputRouter--GetMPCTarget_--_1_--dtor$1.c)
 *     _EdgyProcessorTarget::Initialize_::_1_::dtor$8 @ 0x1801CF266 (_EdgyProcessorTarget--Initialize_--_1_--dtor$8.c)
 *     _HapticDeviceManager::AttachRIMDevice_::_1_::dtor$1 @ 0x1801D0E7C (_HapticDeviceManager--AttachRIMDevice_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl GestureSession::operator delete(void *Block)
{
  free(Block);
}
