/*
 * XREFs of ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0
 * Callers:
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18000A78C (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011911C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011AF00 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18011BA64 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C790 (-DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18011CA10 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18011D134 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011D224 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18011D3A0 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Stop(CMonitor *this)
{
  _UNKNOWN **v2; // rcx
  __int64 v3; // rcx
  LPCRITICAL_SECTION v4[3]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v4, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x30u,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this);
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 18) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 88LL))(*((_QWORD *)this + 20));
    *((_DWORD *)this + 18) = 4;
    v3 = *((_QWORD *)this + 23);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  }
  else if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_q((__int64)v2[2], 0x31u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
  }
  ATL::CCritSecLock::~CCritSecLock(v4);
}
