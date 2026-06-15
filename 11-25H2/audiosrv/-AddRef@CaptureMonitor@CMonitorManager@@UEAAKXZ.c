/*
 * XREFs of ?AddRef@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x1800616E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::AddRef(CMonitorManager::CaptureMonitor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
