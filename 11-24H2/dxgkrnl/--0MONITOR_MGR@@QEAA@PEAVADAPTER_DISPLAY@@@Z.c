/*
 * XREFs of ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140006494
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x14007DE18 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ?reset@?$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U?$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd@@@wistd@@QEAAXPEAVUSB4_POWERON_WORK_QUEUE@@@Z @ 0x14009148C (-reset@-$unique_ptr@VUSB4_POWERON_WORK_QUEUE@@U-$default_delete@VUSB4_POWERON_WORK_QUEUE@@@wistd.c)
 *     ??0USB4_POWERON_WORK_QUEUE@@QEAA@XZ @ 0x1402773DC (--0USB4_POWERON_WORK_QUEUE@@QEAA@XZ.c)
 */

MONITOR_MGR *__fastcall MONITOR_MGR::MONITOR_MGR(MONITOR_MGR *this, struct ADAPTER_DISPLAY *a2)
{
  USB4_POWERON_WORK_QUEUE *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  KIRQL v7; // al
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  USB4_POWERON_WORK_QUEUE *v10; // rax

  *((_DWORD *)this + 22) = -1;
  v2 = 0LL;
  *(_QWORD *)this = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorAdapterInterface'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 1) = &MONITOR_MGR::`vftable'{for `DxgMonitor::IMonitorEventSource'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 4) = 16777217;
  *((_WORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 8) = 0;
  *((_BYTE *)this + 92) = 1;
  *((_DWORD *)this + 35) = -1;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 36) = 1;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = -1;
  *((_DWORD *)this + 48) = 1;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 50) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 69;
  }
  v5 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = *((_QWORD *)a2 + 2);
  WdLogGlobalForLineNumber = 71;
  v6 = operator new(48LL, 1298626628LL, 64LL);
  *((_QWORD *)this + 86) = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(*((_QWORD *)this + 86) + 20LL) = 0;
    KeInitializeEvent((PRKEVENT)(*((_QWORD *)this + 86) + 24LL), NotificationEvent, 1u);
    v7 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
    v8 = (_QWORD *)qword_140160650;
    v9 = (_QWORD *)*((_QWORD *)this + 86);
    if ( *(struct _LIST_ENTRY **)qword_140160650 != &MONITOR_MGR::_MonitorPendingEventTraceHead )
      __fastfail(3u);
    v9[1] = qword_140160650;
    *v9 = &MONITOR_MGR::_MonitorPendingEventTraceHead;
    *v8 = v9;
    qword_140160650 = (__int64)v9;
    KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v7);
  }
  if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = (USB4_POWERON_WORK_QUEUE *)operator new(104LL, 1298626628LL, 64LL);
    if ( v10 )
      v2 = USB4_POWERON_WORK_QUEUE::USB4_POWERON_WORK_QUEUE(v10);
    wistd::unique_ptr<USB4_POWERON_WORK_QUEUE,wistd::default_delete<USB4_POWERON_WORK_QUEUE>>::reset(
      (char *)this + 96,
      v2);
  }
  return this;
}
