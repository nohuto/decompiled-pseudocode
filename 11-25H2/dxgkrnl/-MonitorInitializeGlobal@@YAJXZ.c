/*
 * XREFs of ?MonitorInitializeGlobal@@YAJXZ @ 0x140267B20
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004C414 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14008FE68 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x140268CFC (--0EDIDCACHE@DxgMonitor@@QEAA@XZ.c)
 *     ?CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ @ 0x14026BF9C (-CreateStaticUSB4Class@MONITOR_MGR@@SAJXZ.c)
 */

__int64 __fastcall MonitorInitializeGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  NTSTATUS v13; // eax
  int StaticUSB4Class; // eax
  int v15; // ebx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // r9
  DxgMonitor::EDIDCACHE *v27; // rax
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE v30; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v31; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v32; // [rsp+68h] [rbp-A0h] BYREF
  GUID v33; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v34[10]; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+128h] [rbp+20h]
  _OWORD v36[10]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v37; // [rsp+1D8h] [rbp+D0h]

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  Handle = 0LL;
  WdLogGlobalForLineNumber = 74;
  *(_QWORD *)&v31.Length = 10748066LL;
  byte_14015E494 = 0;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v5 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[1] = v4;
  v6 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[2] = v5;
  v7 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[3] = v6;
  v8 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\BreakOnBadEDID";
  v34[4] = v7;
  v9 = *(_OWORD *)L"ol\\GraphicsDrivers\\BreakOnBadEDID";
  v34[5] = v8;
  v10 = *(_OWORD *)L"rs\\BreakOnBadEDID";
  v34[6] = v9;
  v34[7] = *(_OWORD *)L"icsDrivers\\BreakOnBadEDID";
  v11 = *(_OWORD *)L"OnBadEDID";
  v12 = *(_DWORD *)L"D";
  v34[8] = v10;
  v34[9] = v11;
  v35 = v12;
  v31.Buffer = (wchar_t *)v34;
  if ( DxgkOpenRegistrySubkey(&Handle, 0x20019u, 0LL, &v31) >= 0 )
  {
    byte_14015E494 = 1;
    ZwClose(Handle);
  }
  KeInitializeSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  qword_14015D630 = (__int64)&MONITOR_MGR::_MonitorPendingEventTraceHead;
  MONITOR_MGR::_MonitorPendingEventTraceHead.Flink = &MONITOR_MGR::_MonitorPendingEventTraceHead;
  v33 = GUID_DEVINTERFACE_MONITOR_DRIVER;
  v13 = IoRegisterPlugPlayNotification(
          EventCategoryDeviceInterfaceChange,
          1u,
          &v33,
          (PDRIVER_OBJECT)g_pDriverObject,
          MONITOR_MGR::_HandleMonitorPnPNotification,
          0LL,
          &MONITOR_MGR::_pInterfaceNotificationHandle);
  if ( v13 < 0 )
  {
    WdLogSingleEntry1(2LL, v13);
    WdLogGlobalForLineNumber = 123;
  }
  StaticUSB4Class = MONITOR_MGR::CreateStaticUSB4Class();
  qword_14015D6A0 = 0LL;
  v15 = StaticUSB4Class;
  KeInitializeGuardedMutex(&DXGMONITOR::_UniqueTableLock);
  v30 = 0LL;
  *(_QWORD *)&v32.Length = 11010214LL;
  qword_14015D648 = (__int64)&DXGMONITOR::_UniqueEntryList;
  DXGMONITOR::_UniqueEntryList.Flink = &DXGMONITOR::_UniqueEntryList;
  v16 = *(_OWORD *)(0x140000000LL + 769584);
  v36[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore";
  v17 = *(_OWORD *)(0x140000000LL + 769600);
  v36[1] = v16;
  v18 = *(_OWORD *)(0x140000000LL + 769616);
  v36[2] = v17;
  v19 = *(_OWORD *)(0x140000000LL + 769632);
  v36[3] = v18;
  v20 = *(_OWORD *)(0x140000000LL + 769648);
  v36[4] = v19;
  v21 = *(_OWORD *)(0x140000000LL + 769664);
  v36[5] = v20;
  v22 = *(_OWORD *)(0x140000000LL + 769680);
  v36[6] = v21;
  v23 = *(_OWORD *)(0x140000000LL + 769696);
  v36[7] = v22;
  v24 = *(_OWORD *)(0x140000000LL + 769712);
  v25 = *(_QWORD *)(0x140000000LL + 769728);
  v36[8] = v23;
  v36[9] = v24;
  v37 = v25;
  v32.Buffer = (wchar_t *)v36;
  if ( DxgkCreateRegistrySubkey(&v30, 0xF003Fu, 0LL, &v32) >= 0 )
    ZwClose(v30);
  if ( v15 >= 0 )
  {
    v27 = (DxgMonitor::EDIDCACHE *)operator new(0x2A8uLL, 0x4D677844u, 256LL, v26);
    if ( v27 )
    {
      DxgMonitor::EDIDCACHE::s_pEdidCache = (DxgMonitor::EDIDCACHE *)DxgMonitor::EDIDCACHE::EDIDCACHE(v27);
      if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
        return 0;
    }
    else
    {
      DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 31;
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
