/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028E074
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CC20 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1400063D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@@.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032AE8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x140189110 (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x1402756EC (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140276F34 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x140277D94 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028C108 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CA78 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14028D218 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403CC928 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F29D8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140405254 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 */

__int64 __fastcall MONITOR_MGR::_CreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        char a4,
        char a5,
        struct MONITOR_REF_ACCESSOR *a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  _BYTE *v8; // r12
  __int64 v11; // r15
  DXGMONITOR *v12; // rax
  DXGMONITOR *v13; // rsi
  USB4_HOSTROUTER_MGR *v15; // rcx
  void (__fastcall ***v16)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int MonitorInstance; // eax
  DXGMONITOR *v25; // rbx
  int v26; // edi
  __int64 v27; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // r13
  __int64 v29; // rax
  MONITOR_REF_ACCESSOR *v30; // rbx
  void (__fastcall ***v31)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  int v32; // [rsp+20h] [rbp-E0h]
  int v33; // [rsp+28h] [rbp-D8h]
  void (__fastcall ***v35)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // [rsp+58h] [rbp-A8h] BYREF
  void *v36; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v37; // [rsp+68h] [rbp-98h]
  void *v38; // [rsp+70h] [rbp-90h] BYREF
  DXGMONITOR *v39; // [rsp+78h] [rbp-88h]
  int v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+84h] [rbp-7Ch] BYREF
  int v42; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+8Ch] [rbp-74h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v44; // [rsp+90h] [rbp-70h]
  _QWORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  DXGMONITOR *v46; // [rsp+A8h] [rbp-58h]
  _QWORD v47[2]; // [rsp+B0h] [rbp-50h] BYREF
  DXGMONITOR *v48; // [rsp+C0h] [rbp-40h]
  _QWORD v49[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v50; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h] BYREF
  MONITOR_REF_ACCESSOR *v52; // [rsp+E8h] [rbp-18h]
  _BYTE v53[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v54[20]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v55; // [rsp+11Ch] [rbp+1Ch]
  int v56; // [rsp+124h] [rbp+24h]
  void **v57; // [rsp+130h] [rbp+30h] BYREF
  char *v58; // [rsp+138h] [rbp+38h]
  _BYTE v59[96]; // [rsp+140h] [rbp+40h] BYREF
  int v60; // [rsp+1A0h] [rbp+A0h]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v8 = 0LL;
  v11 = a2;
  v52 = a6;
  v44 = a8;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1649;
  }
  if ( (_DWORD)v11 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1650;
  }
  MONITOR_REF_ACCESSOR::Release(a6);
  v36 = retaddr;
  v37 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
  v12 = (DXGMONITOR *)operator new(0x3B0uLL, 0x4D677844u, 64LL);
  if ( v12 )
    v13 = DXGMONITOR::DXGMONITOR(v12, this);
  else
    v13 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
  v37 = v13;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v36);
  if ( !v13 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1663;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
    return 3221225495LL;
  }
  DxgMonitor::CreateMonitorDriverInterface((__int64 *)&v35, (__int64)v13, *((_QWORD *)this + 3), v11, (__int64)a3);
  if ( v35 )
  {
    memset(v54, 0, sizeof(v54));
    v55 = 0LL;
    v56 = 0;
    if ( a7 )
    {
      v18 = USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(v15, *((_DWORD *)a7 + 1), (struct _UNICODE_STRING *)&v54[16]);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 1700;
        if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 0x400000002000LL) )
        {
          v50 = v44;
          v40 = *((_DWORD *)a7 + 1);
          v41 = *(_DWORD *)a7;
          v42 = v19;
          v43 = 1;
          v51 = 16779264LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v20,
            (__int64)&unk_1401402A8,
            v21,
            v22,
            (__int64)&v51,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v41,
            (__int64)&v40,
            (__int64 *)&v50);
        }
      }
      else
      {
        v8 = v54;
        *(_OWORD *)v54 = *(_OWORD *)a7;
      }
    }
    LOBYTE(v33) = a5;
    LOBYTE(v32) = a4;
    v23 = DXGMONITOR::_InitializeMonitorNoDriver(v13, &v35, (unsigned int)v11, a3, v32, v33, 1, v8);
    LODWORD(v17) = v23;
    if ( v23 >= 0 )
    {
      v38 = retaddr;
      v39 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v38);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v11, 0, (struct MONITOR_REF_ACCESSOR *)&v38);
      v25 = v39;
      v26 = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( v39 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1754;
        }
        if ( v26 != -1073741275 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1755;
        }
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v36);
      }
      else
      {
        if ( !v39 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1745;
        }
        if ( *((_DWORD *)v25 + 70) == 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1746;
        }
        if ( !*((_QWORD *)v25 + 37) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1747;
        }
        MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
          (MONITOR_REF_LOCK_ACCESSOR *)v53,
          (const struct MONITOR_REF_ACCESSOR *)&v38);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v25, (const struct MONITOR_REF_ACCESSOR *)&v36);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v53);
      }
      v57 = &MonitorEventDeferral::`vftable';
      memset(v59, 0, sizeof(v59));
      v60 = 0;
      v58 = (char *)this + 8;
      v45[0] = retaddr;
      v45[1] = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v45);
      v46 = v13;
      MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v13 + 40));
      v47[0] = retaddr;
      v27 = 2LL;
      do
      {
        v47[1] = v13;
        --v27;
      }
      while ( v27 );
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v47);
      v28 = v44;
      v17 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                   v13,
                   (const struct MONITOR_REF_ACCESSOR *)v45,
                   (struct DxgMonitor::IMonitorDeferredEventSource *)&v57,
                   v44);
      ExReleaseResourceLite((PERESOURCE)((char *)v13 + 40));
      KeLeaveCriticalRegion();
      v46 = 0LL;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v47);
      if ( v46 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v46 + 40));
        KeLeaveCriticalRegion();
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v45);
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v57, v28);
      if ( v25 )
      {
        v48 = v25;
        MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v25 + 40));
        v49[0] = retaddr;
        v29 = 2LL;
        do
        {
          v49[1] = v25;
          --v29;
        }
        while ( v29 );
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v49);
        MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v25 + 288));
        ExReleaseResourceLite((PERESOURCE)((char *)v25 + 40));
        KeLeaveCriticalRegion();
        v48 = 0LL;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v49);
        if ( v48 )
        {
          ExReleaseResourceLite((PERESOURCE)((char *)v48 + 40));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v36);
      }
      if ( (int)v17 >= 0 )
      {
        v30 = v52;
        MONITOR_REF_ACCESSOR::Release(v52);
        *(_QWORD *)v30 = v36;
        v57 = &MonitorEventDeferral::`vftable';
        *((_QWORD *)v30 + 1) = v13;
        v37 = 0LL;
        if ( v60 && v58 )
          MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v57, 0LL);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v38);
        v31 = v35;
        v35 = 0LL;
        if ( v31 )
          (**v31)((__int64 (__fastcall ***)(_QWORD, __int64))v31, 1LL);
        LODWORD(v17) = 0;
        goto LABEL_56;
      }
      WdLogSingleEntry2(2LL, v11, v17);
      WdLogGlobalForLineNumber = 1795;
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v57);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v38);
    }
    else
    {
      WdLogSingleEntry2(2LL, v11, v23);
      WdLogGlobalForLineNumber = 1720;
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v35,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v16 = v35;
    WdLogGlobalForLineNumber = 1678;
    v35 = 0LL;
    if ( v16 )
      (**v16)((__int64 (__fastcall ***)(_QWORD, __int64))v16, 1LL);
    LODWORD(v17) = -1073741801;
  }
LABEL_56:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v36);
  return (unsigned int)v17;
}
