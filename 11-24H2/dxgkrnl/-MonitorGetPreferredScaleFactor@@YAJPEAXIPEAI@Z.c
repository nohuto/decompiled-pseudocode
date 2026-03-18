/*
 * XREFs of ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x1403DC4FC
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1403DC428 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || a2 == -1 )
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6557;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(v7, a1, a2, 1u);
    if ( v7[0] )
    {
      v5 = *(_DWORD *)(v7[0] + 468LL);
      if ( !v5 )
        v5 = *(_DWORD *)(v7[0] + 464LL);
      *a3 = v5;
      v4 = v5 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      v4 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6563;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  }
  return v4;
}
