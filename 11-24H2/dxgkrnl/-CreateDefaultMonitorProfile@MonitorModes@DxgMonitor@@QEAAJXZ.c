/*
 * XREFs of ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14027A0C4
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403CD4E8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140050354 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1403E9134 (-_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::CreateDefaultMonitorProfile(struct _ERESOURCE *this)
{
  unsigned int DefaultMonitorProfileForWDDMv1_0; // ebx
  struct _ERESOURCE *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  if ( this )
    MonitorResourceLock::AcquireExclusive(this);
  DefaultMonitorProfileForWDDMv1_0 = DxgMonitor::MonitorModes::_CreateDefaultMonitorProfileForWDDMv1_0((DxgMonitor::MonitorModes *)this);
  RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v4);
  return DefaultMonitorProfileForWDDMv1_0;
}
