/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0
 * Callers:
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x140187CB0 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026CD1C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D6A8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCB18 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140355C94 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14004D80C (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140367C10 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1403DB6A8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rbx
  int CCDMonitorID; // eax
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // r11
  int TtmDevice; // eax

  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) )
  {
    v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = -1073741637LL;
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 3511;
    return result;
  }
  if ( *((_QWORD *)this + 56) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    result = 0LL;
    WdLogGlobalForLineNumber = 3517;
    return result;
  }
  v7 = (char *)operator new[](0x208uLL, 0x4D677844u, 256LL, a4);
  v8 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, -1073741801LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 3524;
    return result;
  }
  if ( !MONITOR_MGR::_UsingCCDNameForTTM )
  {
    v11 = RtlStringCchCopyUnicodeString(v7, 260LL, (const struct _UNICODE_STRING *)(*((_QWORD *)this + 25) + 48LL));
    v10 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 3534;
      goto LABEL_15;
    }
LABEL_12:
    v12 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  v12,
                  (*((unsigned __int8 *)this + 176) >> 1) & 1 | (*((_DWORD *)this + 70) != 1 ? 2 : 0),
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL));
    v10 = TtmDevice;
    if ( TtmDevice >= 0 )
    {
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry3(2LL, this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL), TtmDevice);
      WdLogGlobalForLineNumber = 3557;
    }
    goto LABEL_15;
  }
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID((DXGMONITOR *)((char *)this + 16), 1, 0x104u, (unsigned __int16 *)v7);
  v10 = CCDMonitorID;
  if ( CCDMonitorID >= 0 )
    goto LABEL_12;
  WdLogSingleEntry1(2LL, CCDMonitorID);
  WdLogGlobalForLineNumber = 3529;
LABEL_15:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  return v10;
}
