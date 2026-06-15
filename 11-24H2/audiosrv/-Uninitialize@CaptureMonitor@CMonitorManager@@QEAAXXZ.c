/*
 * XREFs of ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAA4
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 * Callees:
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::Uninitialize(CMonitorManager::CaptureMonitor *this)
{
  *(_QWORD *)(*((_QWORD *)this + 26) + 192LL) = 0LL;
  CMonitor::Terminate(*((CMonitor **)this + 26), 1, 0LL);
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
