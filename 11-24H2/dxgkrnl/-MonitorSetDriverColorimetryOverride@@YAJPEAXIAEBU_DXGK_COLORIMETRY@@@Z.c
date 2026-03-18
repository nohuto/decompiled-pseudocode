/*
 * XREFs of ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026F22C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032950 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z @ 0x14027D0C8 (-_SaveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB3C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403D3DC0 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall MonitorSetDriverColorimetryOverride(
        __int64 a1,
        __int64 a2,
        const struct _DXGK_COLORIMETRY *a3,
        __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DxgMonitor::MonitorColorState *v9; // rcx
  __int64 v10; // r9
  DxgMonitor::MonitorColorState *v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  WdLogGlobalForLineNumber = 6162;
  if ( !a1 || (_DWORD)v5 == -1 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorExclusive(v13, a1, v5, 0);
  if ( !v13[0] )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6174;
LABEL_8:
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v13);
    return v8;
  }
  if ( !DxgMonitor::MonitorColorState::EdidSupportsHDR(*(DxgMonitor::MonitorColorState **)(v13[0] + 224LL))
    && (*(_BYTE *)(v10 + 177) & 0x20) == 0 )
  {
    v8 = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 6176;
    goto LABEL_8;
  }
  DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(v9, a3);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v12);
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v13);
  return 0LL;
}
