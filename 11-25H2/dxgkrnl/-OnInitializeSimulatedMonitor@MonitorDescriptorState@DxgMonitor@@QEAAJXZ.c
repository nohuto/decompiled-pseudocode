/*
 * XREFs of ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1403EB07C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x140056530 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140056548 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x140058CFC (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403EB2C4 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // r9
  __int64 v3; // rax
  _QWORD *v4; // r15
  DxgMonitor::EDIDCACHE *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, _QWORD *, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *); // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v9; // eax
  bool v10; // di
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r9
  int v14; // ebx
  void *v15; // rbx
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v17; // [rsp+80h] [rbp+8h] BYREF
  void *v18; // [rsp+88h] [rbp+10h] BYREF
  char v19; // [rsp+90h] [rbp+18h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 656;
  }
  if ( *((_QWORD *)this + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 657;
  }
  v3 = operator new(0x98uLL, 0x4D677844u, 256LL, v2);
  v4 = (_QWORD *)v3;
  if ( !v3 )
  {
    v18 = 0LL;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 668;
    v14 = -1073741801;
    goto LABEL_14;
  }
  memset((void *)(v3 + 24), 0, 0x80uLL);
  v5 = DxgMonitor::EDIDCACHE::s_pEdidCache;
  *v4 = 0LL;
  v4[1] = 0LL;
  v4[2] = 128LL;
  v6 = *((_QWORD *)this + 14);
  v17 = D3DKMDT_MCO_UNINITIALIZED;
  v7 = *(_QWORD *)v5;
  v18 = v4;
  v8 = *(__int64 (__fastcall **)(DxgMonitor::EDIDCACHE *, _QWORD, _QWORD, __int64, _QWORD *, _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *))(v7 + 24);
  v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  v10 = IsInternalVideoOutput(v9);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                    *((_QWORD *)this + 14),
                    &v19);
  LOBYTE(v13) = v10;
  v14 = v8(v5, *v12, v11, v13, v4 + 3, &v17);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(7LL, this);
    WdLogGlobalForLineNumber = 688;
LABEL_14:
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v18,
      0LL);
    return (unsigned int)v14;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock((const unsigned __int8 *)v4 + 24) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 701;
    v14 = -1073741275;
    goto LABEL_14;
  }
  ConvertMonitorCapablitiesOrigin(v17, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v4 + 1));
  *((_DWORD *)v4 + 3) = 1;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    (void **)v4,
    0LL);
  DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(&v18, (char *)this + 128);
  v15 = v18;
  *((_QWORD *)this + 20) = *((_QWORD *)this + 16);
  if ( v15 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v15);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  }
  return 0LL;
}
