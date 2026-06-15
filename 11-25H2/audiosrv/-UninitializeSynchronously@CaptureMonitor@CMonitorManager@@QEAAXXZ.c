/*
 * XREFs of ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180113C94
 * Callers:
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18002CFE4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1801112BC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1801116CC (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180113A70 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18007A9EC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::UninitializeSynchronously(CMonitorManager::CaptureMonitor *this)
{
  __int64 v2; // rdi
  int v3; // ebx
  LPCRITICAL_SECTION v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(*((_QWORD *)this + 26) + 192LL) = 0LL;
  v2 = *((_QWORD *)this + 26);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v4, (struct _RTL_CRITICAL_SECTION *)(v2 + 32));
  v3 = *(_DWORD *)(v2 + 72);
  ATL::CCritSecLock::~CCritSecLock(v4);
  if ( v3 != 6 )
  {
    *(_QWORD *)(v2 + 192) = 0LL;
    CMonitor::Terminate((CMonitor *)v2, 0, 0LL);
  }
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
