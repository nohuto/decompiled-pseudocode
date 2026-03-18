/*
 * XREFs of ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x140351CA4
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403515CC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140353840 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x1400508E0 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x1403F5FE4 (-_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1403FEE44 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(struct _ERESOURCE *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  if ( this )
    MonitorResourceLock::AcquireExclusive(this);
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = *(_QWORD *)&this[1].OwnerEntry.0;
    if ( !v4
      || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4)
      || (*(int (__fastcall **)(_QWORD, POWNER_ENTRY))(**(_QWORD **)&this[1].OwnerEntry.0 + 32LL))(
           *(_QWORD *)&this[1].OwnerEntry.0,
           this[1].OwnerTable) < 0 )
    {
      goto LABEL_14;
    }
    v5 = *(_QWORD *)&this[1].OwnerEntry.0;
  }
  else
  {
    v6 = *(_QWORD *)&this[1].ActiveCount;
    if ( !v6
      || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6)
      || (*(int (__fastcall **)(_QWORD, POWNER_ENTRY))(**(_QWORD **)&this[1].ActiveCount + 32LL))(
           *(_QWORD *)&this[1].ActiveCount,
           this[1].OwnerTable) < 0 )
    {
      goto LABEL_14;
    }
    v5 = *(_QWORD *)&this[1].ActiveCount;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5) )
  {
    *a2 = 1;
    DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache((DxgMonitor::MonitorDescriptorState *)this);
  }
LABEL_14:
  DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI((DxgMonitor::MonitorDescriptorState *)this);
  RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v7);
}
