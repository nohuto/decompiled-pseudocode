/*
 * XREFs of ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180462534
 * Callers:
 *     ?HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801FF938 (-HandleConnectIfNewPrimaryArrives@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSI.c)
 *     ?HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022BBA4 (-HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 *     ?HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802320B4 (-HandleConnectIfNoCurrentMonitorExists@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IM.c)
 * Callees:
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801456DC (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding(
        ImmersiveMonitorHelper *this,
        struct IUnknown *a2)
{
  ImmersiveMonitorHelper::ConnectToMonitor(this, a2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 168LL))(*((_QWORD *)this + 10));
  return 0LL;
}
