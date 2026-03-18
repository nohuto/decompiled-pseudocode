/*
 * XREFs of ?MonitorGetLidStateFromMonitor@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x14026E6A4
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401C0E00 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036210 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall MonitorGetLidStateFromMonitor(struct HDXGMONITOR__ *a1, bool *a2)
{
  unsigned int v3; // ebx
  char v4; // al
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v6, (__int64)a1);
    if ( v6[0] )
    {
      v4 = *(_BYTE *)(v6[0] + 176LL);
      if ( (v4 & 2) != 0 )
      {
        *a2 = (v4 & 4) != 0;
        v3 = 0;
      }
      else
      {
        v3 = -1073741811;
      }
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 6760;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v6);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6757;
  }
  return v3;
}
