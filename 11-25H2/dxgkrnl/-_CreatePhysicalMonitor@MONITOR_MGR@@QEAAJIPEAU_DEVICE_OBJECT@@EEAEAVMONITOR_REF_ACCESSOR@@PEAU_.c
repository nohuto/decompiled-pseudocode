/*
 * XREFs of ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355604
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403541B0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1400063D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapperByRef@$0BA@@@@.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140032BB8 (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140035774 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x140186ED8 (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x14026E78C (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026FDA8 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z @ 0x140270BF0 (-DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR@@QEAAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140354008 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403547A8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403562AC (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140356840 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x1403F8BE8 (--1MonitorEventDeferral@@UEAA@XZ.c)
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
  __int64 v12; // r9
  DXGMONITOR *v13; // rax
  DXGMONITOR *v14; // rsi
  USB4_HOSTROUTER_MGR *v16; // rcx
  void (__fastcall ***v17)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int MonitorInstance; // eax
  DXGMONITOR *v26; // rbx
  int v27; // edi
  __int64 v28; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // r13
  __int64 v30; // rax
  MONITOR_REF_ACCESSOR *v31; // rbx
  void (__fastcall ***v32)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // rcx
  int v33; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+28h] [rbp-D8h]
  void (__fastcall ***v36)(__int64 (__fastcall ***)(_QWORD, __int64), __int64); // [rsp+58h] [rbp-A8h] BYREF
  void *v37; // [rsp+60h] [rbp-A0h] BYREF
  DXGMONITOR *v38; // [rsp+68h] [rbp-98h]
  void *v39; // [rsp+70h] [rbp-90h] BYREF
  DXGMONITOR *v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v45; // [rsp+90h] [rbp-70h]
  _QWORD v46[2]; // [rsp+98h] [rbp-68h] BYREF
  DXGMONITOR *v47; // [rsp+A8h] [rbp-58h]
  _QWORD v48[2]; // [rsp+B0h] [rbp-50h] BYREF
  DXGMONITOR *v49; // [rsp+C0h] [rbp-40h]
  _QWORD v50[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-20h] BYREF
  MONITOR_REF_ACCESSOR *v53; // [rsp+E8h] [rbp-18h]
  _BYTE v54[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v55[20]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v56; // [rsp+11Ch] [rbp+1Ch]
  int v57; // [rsp+124h] [rbp+24h]
  void **v58; // [rsp+130h] [rbp+30h] BYREF
  char *v59; // [rsp+138h] [rbp+38h]
  _BYTE v60[96]; // [rsp+140h] [rbp+40h] BYREF
  int v61; // [rsp+1A0h] [rbp+A0h]
  void *retaddr; // [rsp+208h] [rbp+108h]

  v8 = 0LL;
  v11 = a2;
  v53 = a6;
  v45 = a8;
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
  v37 = retaddr;
  v38 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  v13 = (DXGMONITOR *)operator new(0x3B0uLL, 0x4D677844u, 64LL, v12);
  if ( v13 )
    v14 = DXGMONITOR::DXGMONITOR(v13, this);
  else
    v14 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  v38 = v14;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  if ( !v14 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1663;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
    return 3221225495LL;
  }
  DxgMonitor::CreateMonitorDriverInterface(
    (__int64 *)&v36,
    (__int64)v14,
    *((_QWORD *)this + 3),
    (unsigned int)v11,
    (__int64)a3);
  if ( v36 )
  {
    memset(v55, 0, sizeof(v55));
    v56 = 0LL;
    v57 = 0;
    if ( a7 )
    {
      v19 = USB4_HOSTROUTER_MGR::DuplicateSymbolicLinkName(v16, *((_DWORD *)a7 + 1), (struct _UNICODE_STRING *)&v55[16]);
      v20 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 1700;
        if ( (unsigned int)dword_14015B5B8 > 5 && tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000002000LL) )
        {
          v51 = v45;
          v41 = *((_DWORD *)a7 + 1);
          v42 = *(_DWORD *)a7;
          v43 = v20;
          v44 = 1;
          v52 = 16779264LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v21,
            (__int64)&unk_14013D6D0,
            v22,
            v23,
            (__int64)&v52,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v42,
            (__int64)&v41,
            (__int64 *)&v51);
        }
      }
      else
      {
        v8 = v55;
        *(_OWORD *)v55 = *(_OWORD *)a7;
      }
    }
    LOBYTE(v34) = a5;
    LOBYTE(v33) = a4;
    v24 = DXGMONITOR::_InitializeMonitorNoDriver(v14, &v36, (unsigned int)v11, a3, v33, v34, 1, v8);
    LODWORD(v18) = v24;
    if ( v24 >= 0 )
    {
      v39 = retaddr;
      v40 = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v11, 0, (struct MONITOR_REF_ACCESSOR *)&v39);
      v26 = v40;
      v27 = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( v40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1754;
        }
        if ( v27 != -1073741275 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1755;
        }
        MONITOR_MGR::_InsertMonitorToList(this, (const struct MONITOR_REF_ACCESSOR *)&v37);
      }
      else
      {
        if ( !v40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1745;
        }
        if ( *((_DWORD *)v26 + 70) == 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1746;
        }
        if ( !*((_QWORD *)v26 + 37) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1747;
        }
        MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
          (MONITOR_REF_LOCK_ACCESSOR *)v54,
          (const struct MONITOR_REF_ACCESSOR *)&v39);
        DXGMONITOR::_SetAttachedPhysicalMonitor(v26, (const struct MONITOR_REF_ACCESSOR *)&v37);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v54);
      }
      v58 = &MonitorEventDeferral::`vftable';
      memset(v60, 0, sizeof(v60));
      v61 = 0;
      v59 = (char *)this + 8;
      v46[0] = retaddr;
      v46[1] = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v46);
      v47 = v14;
      MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v14 + 40));
      v48[0] = retaddr;
      v28 = 2LL;
      do
      {
        v48[1] = v14;
        --v28;
      }
      while ( v28 );
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v48);
      v29 = v45;
      v18 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                   v14,
                   (const struct MONITOR_REF_ACCESSOR *)v46,
                   (struct DxgMonitor::IMonitorDeferredEventSource *)&v58,
                   v45);
      ExReleaseResourceLite((PERESOURCE)((char *)v14 + 40));
      KeLeaveCriticalRegion();
      v47 = 0LL;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v48);
      if ( v47 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v47 + 40));
        KeLeaveCriticalRegion();
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v46);
      MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v58, v29);
      if ( v26 )
      {
        v49 = v26;
        MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v26 + 40));
        v50[0] = retaddr;
        v30 = 2LL;
        do
        {
          v50[1] = v26;
          --v30;
        }
        while ( v30 );
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v50);
        MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)v26 + 288));
        ExReleaseResourceLite((PERESOURCE)((char *)v26 + 40));
        KeLeaveCriticalRegion();
        v49 = 0LL;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v50);
        if ( v49 )
        {
          ExReleaseResourceLite((PERESOURCE)((char *)v49 + 40));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        MONITOR_MGR::_RemoveMonitorFromList(this, (const struct MONITOR_REF_ACCESSOR *)&v37);
      }
      if ( (int)v18 >= 0 )
      {
        v31 = v53;
        MONITOR_REF_ACCESSOR::Release(v53);
        *(_QWORD *)v31 = v37;
        v58 = &MonitorEventDeferral::`vftable';
        *((_QWORD *)v31 + 1) = v14;
        v38 = 0LL;
        if ( v61 && v59 )
          MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v58, 0LL);
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
        v32 = v36;
        v36 = 0LL;
        if ( v32 )
          (**v32)((__int64 (__fastcall ***)(_QWORD, __int64))v32, 1LL);
        LODWORD(v18) = 0;
        goto LABEL_56;
      }
      WdLogSingleEntry2(2LL, v11, v18);
      WdLogGlobalForLineNumber = 1795;
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v58);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
    }
    else
    {
      WdLogSingleEntry2(2LL, v11, v24);
      WdLogGlobalForLineNumber = 1720;
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v36,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v17 = v36;
    WdLogGlobalForLineNumber = 1678;
    v36 = 0LL;
    if ( v17 )
      (**v17)((__int64 (__fastcall ***)(_QWORD, __int64))v17, 1LL);
    LODWORD(v18) = -1073741801;
  }
LABEL_56:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  return (unsigned int)v18;
}
