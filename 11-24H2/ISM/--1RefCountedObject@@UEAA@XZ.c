/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18009BE84
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$8 @ 0x1801CFF02 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$8.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$11 @ 0x1801D0240 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$11.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1801D08E2 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x1801D0A23 (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$0 @ 0x1801D11A0 (_PenInterface--PenInterface_--_1_--dtor$0.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$8 @ 0x1801D18B0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$8.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x1801D2491 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x1801D26FB (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$0 @ 0x1801D3486 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801D37E7 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x1801D3B65 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1801D524B (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801D6020 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x1801D635D (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x1801D8BB8 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801D8DCC (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x1801D9A90 (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
