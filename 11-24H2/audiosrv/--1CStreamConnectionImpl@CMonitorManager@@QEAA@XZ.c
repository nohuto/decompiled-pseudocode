/*
 * XREFs of ??1CStreamConnectionImpl@CMonitorManager@@QEAA@XZ @ 0x18011753C
 * Callers:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x1801178BC (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CStreamConnectionImpl::~CStreamConnectionImpl(
        CMonitorManager::CStreamConnectionImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CMonitorManager::CStreamConnectionImpl::`vftable';
  CMonitorManager::RemoveMonitor(
    *((CMonitorManager **)this + 3),
    *((const struct CMonitorManager::CaptureMonitor *const *)this + 4),
    1);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
