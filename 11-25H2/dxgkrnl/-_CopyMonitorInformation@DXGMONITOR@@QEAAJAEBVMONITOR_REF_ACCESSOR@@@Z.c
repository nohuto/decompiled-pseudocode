/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00
 * Callers:
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x14026DA10 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x140353960 (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x14005AF38 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ?CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x140272308 (-CopyInstance@MonitorDescriptorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorDescriptorState@Dxg.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x140272E6C (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 *     ?CopyInstance@MonitorColorState@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorColorState@DxgMonitor@@U?$default_delete@VMonitorColorState@DxgMonitor@@@wistd@@@wistd@@AEAVIMonitorComponentParent@2@AEAVIMonitorRegistry@2@@Z @ 0x140273BA8 (-CopyInstance@MonitorColorState@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorColorState@DxgMonitor@@U.c)
 *     ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x14040C358 (-CopyInstance@MonitorModes@DxgMonitor@@QEBA-AV-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  DxgMonitor::MonitorModes *v6; // rdi
  DxgMonitor::MonitorModes *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rdx
  void *v10; // rcx
  void *v11; // rcx
  struct _ERESOURCE **v12; // rax
  struct _ERESOURCE *v13; // rdx
  DxgMonitor::MonitorModes *v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+48h] [rbp+10h] BYREF
  struct _ERESOURCE *v17; // [rsp+50h] [rbp+18h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1054;
  }
  if ( *((_DWORD *)this + 70) == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1055;
  }
  v4 = (__int64 *)DxgMonitor::MonitorModes::CopyInstance(
                    *(_QWORD *)(*((_QWORD *)a2 + 1) + 232LL),
                    &v15,
                    (char *)this + 16,
                    *((_QWORD *)this + 26));
  v5 = *v4;
  *v4 = 0LL;
  v6 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = v5;
  if ( v6 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v6);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  }
  v7 = v15;
  v15 = 0LL;
  if ( v7 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v7);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  }
  if ( !*((_QWORD *)this + 29) )
    return 3221225495LL;
  v8 = (__int64 *)DxgMonitor::MonitorColorState::CopyInstance(
                    *(_QWORD *)(*((_QWORD *)a2 + 1) + 224LL),
                    &v16,
                    (char *)this + 16,
                    *((_QWORD *)this + 26));
  v9 = *v8;
  *v8 = 0LL;
  v10 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v9;
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  v11 = v16;
  v16 = 0LL;
  if ( v11 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
  if ( !*((_QWORD *)this + 28) )
    return 3221225495LL;
  v12 = (struct _ERESOURCE **)DxgMonitor::MonitorDescriptorState::CopyInstance(
                                *(_QWORD *)(*((_QWORD *)a2 + 1) + 216LL),
                                &v17,
                                (char *)this + 16,
                                *((_QWORD *)this + 26));
  v13 = *v12;
  *v12 = 0LL;
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    (struct _ERESOURCE **)this + 27,
    v13);
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    &v17,
    0LL);
  return *((_QWORD *)this + 27) == 0LL ? 0xC0000017 : 0;
}
