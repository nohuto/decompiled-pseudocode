/*
 * XREFs of ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032950 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     TriggerSDRWhiteLevelChangedWnf @ 0x1401C6D78 (TriggerSDRWhiteLevelChangedWnf.c)
 *     ?HasDescriptor@DXGMONITOR@@UEBA_NXZ @ 0x140275A00 (-HasDescriptor@DXGMONITOR@@UEBA_NXZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027C414 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB3C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevelOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // ebx
  int v10; // eax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  WdLogGlobalForLineNumber = 6124;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(v12, a1, v5, 0);
  v8 = v12[0];
  if ( !v12[0] )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6136;
LABEL_11:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
    return v9;
  }
  if ( !DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v12[0] + 224LL))
    && ((*(_BYTE *)(v8 + 177) & 0x20) == 0 || DXGMONITOR::HasDescriptor((DXGMONITOR *)(v8 + 16))) )
  {
    v9 = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 6142;
    goto LABEL_11;
  }
  v10 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
          *(DxgMonitor::MonitorColorState **)(v8 + 224),
          1000 * v4 / 0x50u);
  v9 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    WdLogGlobalForLineNumber = 6144;
    goto LABEL_11;
  }
  TriggerSDRWhiteLevelChangedWnf();
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v12);
  return 0LL;
}
