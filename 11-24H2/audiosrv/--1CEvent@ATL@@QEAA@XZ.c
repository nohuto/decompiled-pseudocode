/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x180117470
 * Callers:
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x180170CB1 (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CEvent::~CEvent(void **this)
{
  ATL::CHandle::~CHandle(this);
}
