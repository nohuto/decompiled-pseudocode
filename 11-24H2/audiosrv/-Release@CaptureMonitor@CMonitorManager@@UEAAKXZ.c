/*
 * XREFs of ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x18011B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1801175D4 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Release(CMonitorManager::CaptureMonitor *this, __int64 a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 && this )
  {
    CMonitorManager::CaptureMonitor::~CaptureMonitor(this, a2);
    operator delete(this, (const struct std::nothrow_t *)0xD8);
  }
  return v3;
}
