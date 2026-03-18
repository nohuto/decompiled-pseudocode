/*
 * XREFs of ?MonitorSetScaleFactorOverride@@YAJPEAXII@Z @ 0x14026F8A4
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032950 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  WdLogGlobalForLineNumber = 6599;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v9, a1, v5, 1u);
  if ( !v9[0] )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6611;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v9);
    return 3221225485LL;
  }
  *(_DWORD *)(v9[0] + 468LL) = v4;
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v9);
  return 0LL;
}
