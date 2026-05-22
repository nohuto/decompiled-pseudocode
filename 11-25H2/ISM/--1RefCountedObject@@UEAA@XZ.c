/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18009BCD4
 * Callers:
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$8 @ 0x1801C8A72 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$8.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$11 @ 0x1801C8DB0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$11.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x1801C9442 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x1801C9583 (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$0 @ 0x1801C9D00 (_PenHapticInterface--PenHapticInterface_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x1801CA47A (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$8 @ 0x1801CAA20 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$8.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x1801CB25B (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$0 @ 0x1801CBFD4 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x1801CC27B (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801CC532 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x1801CC8B0 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1801CDD00 (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801CE961 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x1801D0D35 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801D1378 (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x1801D1FAD (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
