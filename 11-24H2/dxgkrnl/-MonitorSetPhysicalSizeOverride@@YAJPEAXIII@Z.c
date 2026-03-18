/*
 * XREFs of ?MonitorSetPhysicalSizeOverride@@YAJPEAXIII@Z @ 0x14026F584
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140032950 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x1400356D0 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a4;
  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 6651;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(v11, a1, v5, 0);
  v9 = v11[0];
  if ( !v11[0] )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6663;
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v11);
    return 3221225485LL;
  }
  *(_DWORD *)(v11[0] + 472LL) = v6;
  *(_DWORD *)(v9 + 476) = v4;
  MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v11);
  return 0LL;
}
