/*
 * XREFs of ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18011BA64
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18011B8D0 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::StopIfRunning(CMonitor *this)
{
  LPCRITICAL_SECTION v2[3]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v2, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  if ( *((_DWORD *)this + 18) == 3 )
    CMonitor::Stop(this);
  ATL::CCritSecLock::~CCritSecLock(v2);
}
