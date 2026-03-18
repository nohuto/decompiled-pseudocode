/*
 * XREFs of ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018A338
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140032B1C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140187CB0 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140275E90 (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403FB908 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

__int64 __fastcall MonitorSetAppOverride(
        struct HDXGMONITOR__ *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  __int64 result; // rax
  DXGMONITOR *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rax
  GUID v15; // xmm1
  int v16; // eax
  __int64 v17; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v19; // ebx
  DXGMONITOR *v20; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[16]; // [rsp+48h] [rbp-B8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v23; // [rsp+70h] [rbp-90h] BYREF
  GUID Guid; // [rsp+80h] [rbp-80h] BYREF
  void **v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  _BYTE v27[96]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+100h] [rbp+0h]

  if ( a1 )
  {
    v26 = 0LL;
    v25 = &MonitorEventDeferral::`vftable';
    memset(v27, 0, sizeof(v27));
    v28 = 0;
    MONITOR_MGR::AcquireMonitorExclusive(&v20, (__int64)a1);
    v12 = v20;
    if ( v20 )
    {
      v14 = *((_QWORD *)v20 + 21);
      v15 = *a2;
      v23 = *a3;
      Guid = v15;
      v26 = (v14 + 8) & -(__int64)(v14 != 0);
      v16 = DxgMonitor::MonitorUsageState::SetAppOverride(
              *((DxgMonitor::MonitorUsageState **)v20 + 30),
              &Guid,
              &v23,
              a4,
              a5,
              a6,
              a7);
      v13 = v16;
      if ( v16 >= 0 )
      {
        v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
          v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
        if ( !v17 )
        {
          Global = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::RecordFeatureUsage(Global, 12LL, 1LL);
        }
        DXGMONITOR::OnUsageUpdated(v12, (struct DxgMonitor::IMonitorDeferredEventSource *)&v25, 1);
        v19 = *(_DWORD *)(*((_QWORD *)v12 + 30) + 16LL);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v20);
        LOBYTE(v22[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v22, 0LL, 0x43u, v19);
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v25, v22[1]);
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v22);
        v13 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 6397;
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v20);
      }
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v25);
    }
    else
    {
      v13 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6392;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v21);
      if ( v20 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v20 + 40));
        KeLeaveCriticalRegion();
      }
      v25 = &MonitorEventDeferral::`vftable';
      if ( v26 )
      {
        if ( v28 )
          MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v25, 0LL);
      }
    }
    return v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6384;
  }
  return result;
}
